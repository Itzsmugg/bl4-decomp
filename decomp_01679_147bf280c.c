// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147bf280c FUN_147bf280c body=132 status=ok
// SIG undefined FUN_147bf280c(void)

void FUN_147bf280c(void *param_1,int param_2,undefined8 param_3)

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



// FUNCTION 147bf2890 FUN_147bf2890 body=246 status=ok
// SIG undefined FUN_147bf2890(void)

undefined4 * FUN_147bf2890(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38 [2];
  uint *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_147bf2988(param_1,local_38);
  puVar1 = (uint *)param_3[1];
  uVar3 = *(uint *)*param_3;
  *local_30 = uVar3;
  local_30[1] = *puVar1;
  local_30[2] = 0xffffffff;
  uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  iVar6 = 1;
  if (3 < uVar5) {
    uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
    lVar2 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    iVar6 = 1 << ((byte)lVar2 & 0x1f);
  }
  if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
    uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
    local_30[3] = uVar3;
    lVar2 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar2 = param_1 + 0x38;
    }
    local_30[2] = *(uint *)(lVar2 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3)
                                    * 4);
    lVar2 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar2 = param_1 + 0x38;
    }
    *(undefined4 *)(lVar2 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4) =
         local_38[0];
  }
  else {
    *(int *)(param_1 + 0x48) = iVar6;
    FUN_147bf2a6e(param_1);
  }
  *param_2 = local_38[0];
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bf2988 FUN_147bf2988 body=229 status=ok
// SIG undefined FUN_147bf2988(void)

int * FUN_147bf2988(longlong *param_1,int *param_2)

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



// FUNCTION 147bf2a6e FUN_147bf2a6e body=422 status=ok
// SIG undefined FUN_147bf2a6e(void)

void FUN_147bf2a6e(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
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



// FUNCTION 147bf2c16 FUN_147bf2c16 body=204 status=ok
// SIG undefined FUN_147bf2c16(void)

void FUN_147bf2c16(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  
  lVar2 = *param_1;
  plVar6 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar6 = (longlong *)param_1[8];
  }
  lVar8 = (longlong)*(int *)(lVar2 + 0xc + (longlong)param_2 * 0x10);
  iVar7 = *(int *)((longlong)plVar6 + lVar8 * 4);
  if (iVar7 == param_2) {
    puVar5 = (undefined4 *)((longlong)plVar6 + lVar8 * 4);
  }
  else {
    do {
      lVar8 = (longlong)iVar7;
      iVar7 = *(int *)(lVar2 + 8 + lVar8 * 0x10);
    } while (iVar7 != param_2);
    puVar5 = (undefined4 *)(lVar2 + lVar8 * 0x10 + 8);
  }
  *puVar5 = *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10 + 8);
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
  plVar6 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar6 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar7 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 147bf2ce2 FUN_147bf2ce2 body=182 status=ok
// SIG undefined FUN_147bf2ce2(void)

void FUN_147bf2ce2(undefined8 param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  bool bVar6;
  ulonglong uVar7;
  
  uVar4 = (ulonglong)DAT_14caf2758;
  if ((longlong)uVar4 < 1) {
    return;
  }
  bVar6 = false;
  DAT_14caf2764 = DAT_14caf2764 + 1;
  do {
    lVar5 = uVar4 * 0x10 + -8;
    uVar7 = uVar4;
    while (((*(int *)(DAT_14caf2750 + lVar5) != 0 &&
            (plVar1 = *(longlong **)(DAT_14caf2750 + -8 + lVar5), plVar1 != (longlong *)0x0)) &&
           (cVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,param_1), cVar3 != '\0'))) {
      lVar5 = lVar5 + -0x10;
      bVar2 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar2) {
        DAT_14caf2764 = DAT_14caf2764 + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_147bf2d71;
      }
    }
    uVar4 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  DAT_14caf2764 = DAT_14caf2764 + -1;
LAB_147bf2d71:
  FUN_14474d06a(&DAT_14caf2750,0);
  return;
}



// FUNCTION 147bf2d98 FUN_147bf2d98 body=308 status=ok
// SIG undefined FUN_147bf2d98(void)

undefined4 * FUN_147bf2d98(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_147bf2ece(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (int)((ulonglong)uVar2 >> 0x20) * 0x17 + (int)uVar2;
  cVar4 = FUN_147bf2fb4(param_1,uVar9,local_40,&local_4c);
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
      FUN_147bf30a4(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bf2ece FUN_147bf2ece body=230 status=ok
// SIG undefined FUN_147bf2ece(void)

int * FUN_147bf2ece(longlong *param_1,int *param_2)

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



// FUNCTION 147bf2fb4 FUN_147bf2fb4 body=125 status=ok
// SIG undefined FUN_147bf2fb4(void)

undefined8 FUN_147bf2fb4(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
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
          FUN_147bf3032((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 147bf3032 FUN_147bf3032 body=114 status=ok
// SIG undefined FUN_147bf3032(void)

void FUN_147bf3032(longlong *param_1,int param_2)

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



// FUNCTION 147bf30a4 FUN_147bf30a4 body=447 status=ok
// SIG undefined FUN_147bf30a4(void)

void FUN_147bf30a4(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x18);
        uVar10 = (longlong)((int)((ulonglong)uVar4 >> 0x20) * 0x17 + (int)uVar4) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
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



// FUNCTION 147bf3264 FUN_147bf3264 body=87 status=ok
// SIG undefined FUN_147bf3264(void)

void FUN_147bf3264(longlong *param_1,int param_2)

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
  FUN_147bf3032();
  return;
}



// FUNCTION 147bf32bc FUN_147bf32bc body=69 status=ok
// SIG undefined FUN_147bf32bc(void)

void FUN_147bf32bc(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if (*(int *)(param_1 + 0x48) < iVar3 && 0 < (int)param_2 || iVar3 < *(int *)(param_1 + 0x48)) {
    *(int *)(param_1 + 0x48) = iVar3;
    FUN_1409194d2(param_1);
    return;
  }
  return;
}



// FUNCTION 147bf3302 FUN_147bf3302 body=135 status=ok
// SIG undefined FUN_147bf3302(void)

longlong FUN_147bf3302(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_147bf338a();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1;
    if (lVar3 + lVar2 * 0x18 != 0) goto LAB_147bf333c;
  }
  local_30 = param_3;
  FUN_147bf3440(param_1,&local_24,param_2);
  lVar2 = (longlong)local_24;
  lVar3 = *param_1;
LAB_147bf333c:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar3 + lVar2 * 0x18 + 8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bf338a FUN_147bf338a body=180 status=ok
// SIG undefined FUN_147bf338a(void)

int FUN_147bf338a(longlong *param_1,uint param_2,undefined8 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        local_48 = *param_3;
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x18);
        cVar1 = FUN_145d6a85a(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_147bf3418;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x10 + (longlong)iVar4 * 0x18);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_147bf3418:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bf3440 FUN_147bf3440 body=274 status=ok
// SIG undefined FUN_147bf3440(void)

undefined4 * FUN_147bf3440(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140926ec6(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_58 = 0;
  cVar1 = FUN_140926d2c(param_1,param_3,local_40,local_48);
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
      *(uint *)((longlong)local_40 + 0x14) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
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
      FUN_1409270b0(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bf3554 FUN_147bf3554 body=335 status=ok
// SIG undefined FUN_147bf3554(void)

undefined4 * FUN_147bf3554(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_147bf36a4(param_1,local_48);
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
  cVar4 = FUN_147bf378a(param_1,uVar9,local_40,&local_4c);
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
      FUN_147bf387c(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bf36a4 FUN_147bf36a4 body=230 status=ok
// SIG undefined FUN_147bf36a4(void)

int * FUN_147bf36a4(longlong *param_1,int *param_2)

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



// FUNCTION 147bf378a FUN_147bf378a body=128 status=ok
// SIG undefined FUN_147bf378a(void)

undefined8 FUN_147bf378a(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_147bf380a((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 147bf380a FUN_147bf380a body=114 status=ok
// SIG undefined FUN_147bf380a(void)

void FUN_147bf380a(longlong *param_1,int param_2)

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



// FUNCTION 147bf387c FUN_147bf387c body=473 status=ok
// SIG undefined FUN_147bf387c(void)

void FUN_147bf387c(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x18);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
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



// FUNCTION 147bf3a56 FUN_147bf3a56 body=408 status=ok
// SIG undefined FUN_147bf3a56(void)

undefined4 * FUN_147bf3a56(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147bf3bf0(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  *local_40 = *(undefined8 *)*param_3;
  local_40[3] = 0;
  lVar6 = puVar1[2];
  if (lVar6 == 0) {
    uVar2 = puVar1[1];
    local_40[1] = *puVar1;
    local_40[2] = uVar2;
    lVar6 = puVar1[2];
  }
  local_40[3] = lVar6;
  puVar1[2] = 0;
  *(undefined4 *)(local_40 + 4) = *(undefined4 *)(puVar1 + 3);
  *(undefined4 *)((longlong)local_40 + 0x24) = *(undefined4 *)((longlong)puVar1 + 0x1c);
  puVar1[3] = 0x200000000;
  local_40[5] = puVar1[4];
  *(undefined4 *)(local_40 + 6) = 0xffffffff;
  local_4c = local_48[0];
  uVar2 = *local_40;
  uVar9 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar9 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar5 >> 4);
  cVar4 = FUN_147bf3cd2(param_1,uVar9,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar5) {
      uVar7 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)((longlong)local_40 + 0x34) = uVar9;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 6) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_147bf3df2(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bf3bf0 FUN_147bf3bf0 body=226 status=ok
// SIG undefined FUN_147bf3bf0(void)

int * FUN_147bf3bf0(longlong *param_1,int *param_2)

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
      FUN_1447030e2(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x38);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x38) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x38 + *param_1;
  return param_2;
}



// FUNCTION 147bf3cd2 FUN_147bf3cd2 body=171 status=ok
// SIG undefined FUN_147bf3cd2(void)

undefined8 FUN_147bf3cd2(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  int iVar14;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar13 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar13 = (longlong *)param_1[8];
    }
    iVar14 = *(int *)((longlong)plVar13 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar14 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar14 * 0x38);
        if (*(longlong *)(*param_1 + (longlong)iVar14 * 0x38) == *param_3) {
          if (*(longlong *)(puVar1 + 6) != 0) {
            FUN_1400020a8();
          }
          lVar8 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar9 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          lVar10 = param_3[2];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar11 = param_3[3];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0x1c);
          uVar6 = *(undefined4 *)((longlong)param_3 + 0x24);
          lVar12 = param_3[5];
          uVar7 = *(undefined4 *)((longlong)param_3 + 0x2c);
          puVar1[8] = (int)param_3[4];
          puVar1[9] = uVar6;
          puVar1[10] = (int)lVar12;
          puVar1[0xb] = uVar7;
          puVar1[4] = (int)lVar10;
          puVar1[5] = uVar4;
          puVar1[6] = (int)lVar11;
          puVar1[7] = uVar5;
          *puVar1 = (int)lVar8;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar9;
          puVar1[3] = uVar3;
          FUN_147bf3d7e(param_1,*param_4);
          *param_4 = iVar14;
          return 1;
        }
        iVar14 = puVar1[0xc];
      } while (iVar14 != -1);
    }
  }
  return 0;
}



// FUNCTION 147bf3d7e FUN_147bf3d7e body=116 status=ok
// SIG undefined FUN_147bf3d7e(void)

void FUN_147bf3d7e(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38 + 4) = uVar5;
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



// FUNCTION 147bf3df2 FUN_147bf3df2 body=473 status=ok
// SIG undefined FUN_147bf3df2(void)

void FUN_147bf3df2(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x38;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x34 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x30 + lVar7) =
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



// FUNCTION 147bf3fcc FUN_147bf3fcc body=132 status=ok
// SIG undefined FUN_147bf3fcc(void)

void FUN_147bf3fcc(longlong *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = (uint)((ulonglong)param_2 >> 0x10);
    uVar4 = (uint)param_2 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)
                     (int)(((uint)param_2 << 0x10 | uVar4) + (int)((ulonglong)param_2 >> 0x20) +
                           (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar4 >> 4)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x38) == param_2) {
          FUN_147bf4050(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x38 + *param_1 + 0x30);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 147bf4050 FUN_147bf4050 body=87 status=ok
// SIG undefined FUN_147bf4050(void)

void FUN_147bf4050(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x34 + (longlong)param_2 * 0x38);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x30 + lVar5 * 0x38);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x38 + 0x30);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x38 + 0x30);
  FUN_147bf40a8();
  return;
}



// FUNCTION 147bf40a8 FUN_147bf40a8 body=52 status=ok
// SIG undefined FUN_147bf40a8(void)

void FUN_147bf40a8(longlong *param_1,int param_2)

{
  if (*(longlong *)(*param_1 + 0x18 + (longlong)param_2 * 0x38) != 0) {
    FUN_1400020a8();
  }
  FUN_147bf3d7e(param_1,param_2);
  return;
}



// FUNCTION 147bf40dc FUN_147bf40dc body=132 status=ok
// SIG undefined FUN_147bf40dc(void)

void FUN_147bf40dc(longlong *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = (uint)((ulonglong)param_2 >> 0x10);
    uVar4 = (uint)param_2 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)
                     (int)(((uint)param_2 << 0x10 | uVar4) + (int)((ulonglong)param_2 >> 0x20) +
                           (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar4 >> 4)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x18) == param_2) {
          FUN_147bf4160(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 147bf4160 FUN_147bf4160 body=87 status=ok
// SIG undefined FUN_147bf4160(void)

void FUN_147bf4160(longlong *param_1,int param_2)

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
  FUN_147bf380a();
  return;
}



// FUNCTION 147bf41b8 FUN_147bf41b8 body=68 status=ok
// SIG undefined FUN_147bf41b8(void)

void FUN_147bf41b8(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_147bf41fc();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_140b7ce44(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 147bf41fc FUN_147bf41fc body=322 status=ok
// SIG undefined FUN_147bf41fc(void)

void FUN_147bf41fc(longlong *param_1)

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



// FUNCTION 147bf4340 FUN_147bf4340 body=68 status=ok
// SIG undefined FUN_147bf4340(void)

void FUN_147bf4340(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_147bf4384();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_144727cd0(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 147bf4384 FUN_147bf4384 body=322 status=ok
// SIG undefined FUN_147bf4384(void)

void FUN_147bf4384(longlong *param_1)

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



// FUNCTION 147bf44c8 FUN_147bf44c8 body=450 status=ok
// SIG undefined FUN_147bf44c8(void)

void FUN_147bf44c8(longlong *param_1)

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
        uVar10 = (longlong)
                 ((int)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) * 0x17 +
                 (int)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 147bf468c FUN_147bf468c body=90 status=ok
// SIG undefined FUN_147bf468c(void)

void FUN_147bf468c(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_147bf46e6();
  return;
}



// FUNCTION 147bf46e6 FUN_147bf46e6 body=59 status=ok
// SIG undefined FUN_147bf46e6(void)

void FUN_147bf46e6(longlong *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(*param_1 + 0x10 + (longlong)param_2 * 0x20);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_147bf4722(param_1,param_2);
  return;
}



// FUNCTION 147bf4722 FUN_147bf4722 body=114 status=ok
// SIG undefined FUN_147bf4722(void)

void FUN_147bf4722(longlong *param_1,int param_2)

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



// FUNCTION 147bf47a2 FUN_147bf47a2 body=29 status=ok
// SIG undefined FUN_147bf47a2(void)

undefined8 FUN_147bf47a2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147bf47c0 FUN_147bf47c0 body=323 status=ok
// SIG undefined FUN_147bf47c0(void)

undefined4 * FUN_147bf47c0(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147bf4904(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  *local_40 = *(undefined8 *)*param_3;
  local_40[1] = *puVar1;
  local_40[2] = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (int)((ulonglong)*local_40 >> 0x20) * 0x17 + (int)*local_40;
  cVar3 = FUN_147bf49ea(param_1,uVar8,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
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
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_40 + 0x1c) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
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
      FUN_147bf44c8(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bf4904 FUN_147bf4904 body=229 status=ok
// SIG undefined FUN_147bf4904(void)

int * FUN_147bf4904(longlong *param_1,int *param_2)

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



// FUNCTION 147bf49ea FUN_147bf49ea body=165 status=ok
// SIG undefined FUN_147bf49ea(void)

undefined8 FUN_147bf49ea(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      do {
        puVar2 = (undefined4 *)(*param_1 + (longlong)iVar8 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar8 * 0x20) == *param_3) {
          plVar7 = *(longlong **)(puVar2 + 4);
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar7 + 0x10))();
            }
          }
          lVar5 = *param_3;
          uVar3 = *(undefined4 *)((longlong)param_3 + 4);
          lVar6 = param_3[1];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar2 + 4) = param_3[2];
          *puVar2 = (int)lVar5;
          puVar2[1] = uVar3;
          puVar2[2] = (int)lVar6;
          puVar2[3] = uVar4;
          FUN_147bf4722(param_1,*param_4);
          *param_4 = iVar8;
          return 1;
        }
        iVar8 = puVar2[6];
      } while (iVar8 != -1);
    }
  }
  return 0;
}



// FUNCTION 147bf4a90 FUN_147bf4a90 body=29 status=ok
// SIG undefined FUN_147bf4a90(void)

undefined8 FUN_147bf4a90(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147bf4ac8 FUN_147bf4ac8 body=29 status=ok
// SIG undefined FUN_147bf4ac8(void)

bool FUN_147bf4ac8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147bf4ae6 FUN_147bf4ae6 body=26 status=ok
// SIG undefined FUN_147bf4ae6(void)

bool FUN_147bf4ae6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147bf4b00 FUN_147bf4b00 body=24 status=ok
// SIG undefined FUN_147bf4b00(void)

bool FUN_147bf4b00(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147bf4b18 FUN_147bf4b18 body=93 status=ok
// SIG undefined FUN_147bf4b18(void)

void FUN_147bf4b18(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a9fcd10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147bf4b76 FUN_147bf4b76 body=93 status=ok
// SIG undefined FUN_147bf4b76(void)

void FUN_147bf4b76(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a9fcd10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147bf4bd4 FUN_147bf4bd4 body=126 status=ok
// SIG undefined FUN_147bf4bd4(void)

void FUN_147bf4bd4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a9fcd10;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147bf4c43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147bf4c52 FUN_147bf4c52 body=35 status=ok
// SIG undefined FUN_147bf4c52(void)

void FUN_147bf4c52(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147bf4c71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 147bf4c76 FUN_147bf4c76 body=142 status=ok
// SIG undefined FUN_147bf4c76(void)

bool FUN_147bf4c76(longlong param_1)

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



// FUNCTION 147bf4d06 FUN_147bf4d06 body=107 status=ok
// SIG undefined FUN_147bf4d06(void)

undefined8 * FUN_147bf4d06(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14a9fcde0;
  FUN_14572b5f6(param_1 + 3,DAT_14c76166c);
  FUN_14572b5f6(param_1 + 9,DAT_14c76166c);
  FUN_14572b5f6(param_1 + 0xf,DAT_14c76166c);
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  return param_1;
}



// FUNCTION 147bf4d72 FUN_147bf4d72 body=9 status=ok
// SIG undefined FUN_147bf4d72(void)

void FUN_147bf4d72(longlong param_1)

{
  FUN_147bf4e62(param_1 + 0x10);
  return;
}



// FUNCTION 147bf4d7c FUN_147bf4d7c body=29 status=ok
// SIG undefined FUN_147bf4d7c(void)

undefined8 FUN_147bf4d7c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147bf4d9a FUN_147bf4d9a body=38 status=ok
// SIG undefined FUN_147bf4d9a(void)

undefined8 FUN_147bf4d9a(undefined8 param_1,int param_2)

{
  FUN_147bf4e62();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147bf4dce FUN_147bf4dce body=120 status=ok
// SIG undefined FUN_147bf4dce(void)

void FUN_147bf4dce(longlong param_1)

{
  undefined8 uVar1;
  float fVar2;
  undefined1 auVar3 [16];
  
  FUN_147bf503a();
  FUN_147af1384(param_1 + 0x78);
  fVar2 = DAT_14c761678;
  if ((DAT_14c761678 < 0.0) && (fVar2 = 0.0, 0.0 < DAT_14c761668)) {
    uVar1 = *(undefined8 *)(param_1 + 0x98);
    auVar3._8_4_ = (int)((ulonglong)uVar1 >> 0x20);
    auVar3._0_8_ = uVar1;
    auVar3._12_4_ = 0x45300000;
    fVar2 = (float)((((double)CONCAT44(0x43300000,(int)uVar1) - 4503599627370496.0) +
                    (auVar3._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418 * 1000.0);
  }
  *(float *)(param_1 + 0xb0) = fVar2;
  return;
}



// FUNCTION 147bf4e62 FUN_147bf4e62 body=97 status=ok
// SIG undefined FUN_147bf4e62(void)

void FUN_147bf4e62(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a9fcde0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147bf4eb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 147bf4ec4 FUN_147bf4ec4 body=373 status=ok
// SIG undefined FUN_147bf4ec4(void)

void FUN_147bf4ec4(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14caf5a00);
  local_50 = 0x100000000;
  uStack_48 = &DAT_14caf5a38;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  if (DAT_14caf5a50 == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar3 = DAT_14caf5a50;
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = &DAT_14caf5a28;
  if ((iStack_3c != iVar3) || (uStack_48 != &DAT_14caf5a38)) {
    do {
      lVar1 = *local_78;
      lVar2 = *(longlong *)(lVar1 + 8 + (longlong)iStack_5c * 0x18);
      LOCK();
      *(longlong *)(param_1 + 0x18) =
           *(longlong *)(param_1 + 0x18) +
           *(longlong *)(lVar2 + 0x28) + *(longlong *)(lVar2 + 0x18) + *(longlong *)(lVar2 + 8) +
           *(longlong *)(lVar2 + 0x30);
      UNLOCK();
      lVar1 = *(longlong *)(lVar1 + 8 + (longlong)iStack_5c * 0x18);
      LOCK();
      *(longlong *)(param_1 + 0x48) =
           *(longlong *)(param_1 + 0x48) +
           *(longlong *)(lVar1 + 0x20) + *(longlong *)(lVar1 + 0x10) +
           *(longlong *)(lVar1 + 0x28) + *(longlong *)(lVar1 + 0x18) + *(longlong *)(lVar1 + 8) +
           *(longlong *)(lVar1 + 0x30);
      UNLOCK();
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != &DAT_14caf5a28 ||
             ((undefined4 *)CONCAT44(uStack_64,uStack_68) != &DAT_14caf5a38 || iStack_5c != iVar3));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14caf5a00);
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bf503a FUN_147bf503a body=311 status=ok
// SIG undefined FUN_147bf503a(void)

void FUN_147bf503a(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14caf5a00);
  local_50 = 0x100000000;
  uStack_48 = &DAT_14caf5a38;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  if (DAT_14caf5a50 == 0) {
    iVar2 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar2 = DAT_14caf5a50;
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = &DAT_14caf5a28;
  if ((iStack_3c != iVar2) || (uStack_48 != &DAT_14caf5a38)) {
    do {
      lVar1 = *(longlong *)(*local_78 + 8 + (longlong)iStack_5c * 0x18);
      LOCK();
      *(longlong *)(param_1 + 0x78) =
           *(longlong *)(param_1 + 0x78) + *(longlong *)(lVar1 + 0x48) + *(longlong *)(lVar1 + 0x40)
      ;
      UNLOCK();
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != &DAT_14caf5a28 ||
             ((undefined4 *)CONCAT44(uStack_64,uStack_68) != &DAT_14caf5a38 || iStack_5c != iVar2));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14caf5a00);
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bf5172 FUN_147bf5172 body=167 status=ok
// SIG undefined FUN_147bf5172(void)

void FUN_147bf5172(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_147bf51ed;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_147bf51ed;
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
LAB_147bf51ed:
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
                    /* WARNING: Could not recover jumptable at 0x000147bf520d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 147bf521a FUN_147bf521a body=396 status=ok
// SIG undefined FUN_147bf521a(void)

undefined8 * FUN_147bf521a(undefined8 *param_1,int param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_LAB_14a9fd890;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0xffffffff00000080;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0xffffffff00000080;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(int *)(param_1 + 0x15) = param_2;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc9) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd1) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  if (param_3 != 0 && 2 < param_2) {
    param_1[0x16] = param_3;
    *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 1;
  }
  FUN_1435d31d2(param_1);
  lVar1 = param_1[0x16];
  if (lVar1 != 0) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    local_28 = 2;
    *local_30 = &PTR_LAB_14aa00870;
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
    local_30[2] = lVar3;
    *local_30 = &PTR_FUN_14aa00110;
    local_30[3] = param_1;
    FUN_1458489c6(lVar1,&local_30,0x79,&DAT_14caf3c90);
    FUN_1449db362(&local_30);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bf53a8 FUN_147bf53a8 body=450 status=ok
// SIG undefined FUN_147bf53a8(void)

void FUN_147bf53a8(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  uint *puVar3;
  int *piVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
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
  *param_1 = (longlong)&PTR_LAB_14a9fd890;
  plVar1 = param_1 + 4;
  plVar2 = param_1 + 6;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  iVar8 = 0;
  local_50 = plVar2;
  if ((int)param_1[9] != 0) {
    FUN_1449c0562(&local_58);
    iVar8 = (int)param_1[9];
  }
  local_78 = local_58;
  local_70 = local_50;
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_80 = plVar1;
  if ((iStack_44 != iVar8) || (local_50 != plVar2)) {
    do {
      lVar6 = *(longlong *)(*local_80 + (longlong)iStack_64 * 8);
      if (lVar6 != 0) {
        FUN_143778f62(lVar6);
        FUN_1400020a8(lVar6);
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (local_80 != plVar1 || (local_70 != plVar2 || iStack_64 != iVar8));
  }
  FUN_147bf556c(plVar1);
  (**(code **)(*param_1 + 0x10))(param_1);
  if (param_1[0x1d] != 0) {
    LOCK();
    puVar3 = (uint *)(param_1[0x1d] + 8);
    uVar5 = *puVar3;
    *puVar3 = *puVar3 - 1;
    UNLOCK();
    if ((uVar5 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_147c0bb0f(param_1[0x17],(int)param_1[0x18]);
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  puVar7 = (undefined8 *)param_1[0x16];
  if (puVar7 != (undefined8 *)0x0) {
    piVar4 = (int *)(puVar7 + 1);
    *piVar4 = *piVar4 + -1;
    if (*piVar4 == 0) {
      (**(code **)*puVar7)(puVar7,1);
    }
  }
  FUN_147bf55c6(param_1 + 0xb);
  FUN_147bf55fc(plVar1);
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bf556c FUN_147bf556c body=89 status=ok
// SIG undefined FUN_147bf556c(void)

void FUN_147bf556c(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140b584e0(param_1,0);
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



// FUNCTION 147bf55c6 FUN_147bf55c6 body=54 status=ok
// SIG undefined FUN_147bf55c6(void)

void FUN_147bf55c6(longlong *param_1)

{
  FUN_147c0ba8e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147bf55fc FUN_147bf55fc body=52 status=ok
// SIG undefined FUN_147bf55fc(void)

void FUN_147bf55fc(longlong *param_1)

{
  FUN_147bf556c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147bf5642 FUN_147bf5642 body=223 status=ok
// SIG undefined FUN_147bf5642(void)

void FUN_147bf5642(longlong param_1)

{
  if ((((DAT_14c7616a4 != 0) && (DAT_14ca84e1d == '\x01')) && ((DAT_14c873768 & 1) != 0)) &&
     (DAT_14ca84e19 == '\x01')) {
    if (*DAT_14caf32b0 != 0) {
      FUN_14351a0f5(*DAT_14caf32b0,*(undefined4 *)(param_1 + 0xa8));
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14caf3390) {
        FUN_144b3d300(&DAT_14caf3390);
        if (DAT_14caf3390 == -1) {
          if (DAT_14c8407a8 == (longlong *)0x0) {
            FUN_1414b00ea();
          }
          DAT_14caf3388 = (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"FX.TestGPUSort",1);
          _Init_thread_footer(&DAT_14caf3390);
        }
      }
      FUN_140635eb8(DAT_14caf3388,0,0xd000000,0);
    }
    FUN_1435b8996();
    return;
  }
  return;
}



// FUNCTION 147bf583c FUN_147bf583c body=68 status=ok
// SIG undefined FUN_147bf583c(void)

undefined8 FUN_147bf583c(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar4 = 0;
    do {
      uVar3 = (**(code **)(**(longlong **)(lVar2 + lVar4) + 0x28))();
      if ((char)uVar3 != '\0') {
        return uVar3;
      }
      bVar5 = (longlong)iVar1 * 8 + -8 != lVar4;
      lVar4 = lVar4 + 8;
    } while (bVar5);
  }
  return uVar3;
}



// FUNCTION 147bf5880 FUN_147bf5880 body=84 status=ok
// SIG undefined FUN_147bf5880(void)

void FUN_147bf5880(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      (**(code **)(*plVar3 + 0x30))(plVar3,param_2,param_3,param_4);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 147bf58d4 FUN_147bf58d4 body=64 status=ok
// SIG undefined FUN_147bf58d4(void)

void FUN_147bf58d4(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      (**(code **)(*plVar3 + 0x40))(plVar3,param_2);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 147bf5914 FUN_147bf5914 body=64 status=ok
// SIG undefined FUN_147bf5914(void)

void FUN_147bf5914(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      (**(code **)(*plVar3 + 0x48))(plVar3,param_2);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 147bf5954 FUN_147bf5954 body=64 status=ok
// SIG undefined FUN_147bf5954(void)

void FUN_147bf5954(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      (**(code **)(*plVar3 + 0x50))(plVar3,param_2);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 147bf5994 FUN_147bf5994 body=68 status=ok
// SIG undefined FUN_147bf5994(void)

undefined8 FUN_147bf5994(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar4 = 0;
    do {
      uVar3 = (**(code **)(**(longlong **)(lVar2 + lVar4) + 0x70))();
      if ((char)uVar3 != '\0') {
        return uVar3;
      }
      bVar5 = (longlong)iVar1 * 8 + -8 != lVar4;
      lVar4 = lVar4 + 8;
    } while (bVar5);
  }
  return uVar3;
}



// FUNCTION 147bf59d8 FUN_147bf59d8 body=71 status=ok
// SIG undefined FUN_147bf59d8(void)

undefined8 FUN_147bf59d8(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar4 = 0;
    do {
      uVar3 = (**(code **)(**(longlong **)(lVar2 + lVar4) + 0x80))();
      if ((char)uVar3 != '\0') {
        return uVar3;
      }
      bVar5 = (longlong)iVar1 * 8 + -8 != lVar4;
      lVar4 = lVar4 + 8;
    } while (bVar5);
  }
  return uVar3;
}



// FUNCTION 147bf5a20 FUN_147bf5a20 body=53 status=ok
// SIG undefined FUN_147bf5a20(void)

void FUN_147bf5a20(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar3 = 0;
    do {
      (**(code **)(**(longlong **)(lVar2 + lVar3) + 0x10))();
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  return;
}



// FUNCTION 147bf5a56 FUN_147bf5a56 body=142 status=ok
// SIG undefined FUN_147bf5a56(void)

undefined8 * FUN_147bf5a56(undefined8 *param_1)

{
  FUN_147bf5ae4();
  *param_1 = &PTR_FUN_14a9fda20;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  param_1[0x55] = 0;
  *(undefined4 *)(param_1 + 0x56) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x2b4) = 1;
  param_1[0x57] = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  *(undefined4 *)(param_1 + 0x5b) = 0;
  memset(param_1 + 0x5c,0,0xd8);
  *(byte *)((longlong)param_1 + 0x161) = *(byte *)((longlong)param_1 + 0x161) | 1;
  return param_1;
}



// FUNCTION 147bf5ae4 FUN_147bf5ae4 body=183 status=ok
// SIG undefined FUN_147bf5ae4(void)

void FUN_147bf5ae4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a9ff860;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(byte *)(param_1 + 0x2c) = (*(byte *)(param_1 + 0x2c) & 8) + 1;
  *(byte *)((longlong)param_1 + 0x161) = *(byte *)((longlong)param_1 + 0x161) & 0xf8;
  *(undefined1 *)((longlong)param_1 + 0x162) = 0;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x22c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x164) = 0;
  *(undefined8 *)((longlong)param_1 + 0x16c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x184) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x194) = 0;
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(undefined8 *)((longlong)param_1 + 0x204) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20c) = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x4b] = 0xbfe0000000000000;
  param_1[0x4c] = 0xbfe0000000000000;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  return;
}



// FUNCTION 147bf5b9c FUN_147bf5b9c body=700 status=ok
// SIG undefined FUN_147bf5b9c(void)

void FUN_147bf5b9c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a9fda20;
  *(undefined4 *)(param_1 + 0x5a) = 0;
  if (*(int *)((longlong)param_1 + 0x2d4) != 0) {
    FUN_14481578e(param_1 + 0x59,0);
  }
  *(undefined4 *)(param_1 + 0x5f) = 0;
  if (*(int *)((longlong)param_1 + 0x2fc) != 0) {
    FUN_1447a8aa0(param_1 + 0x5e,0);
  }
  *(undefined4 *)(param_1 + 0x61) = 0;
  if (*(int *)((longlong)param_1 + 0x30c) != 0) {
    FUN_1447a8aa0(param_1 + 0x60,0);
  }
  *(undefined4 *)(param_1 + 99) = 0;
  if (*(int *)((longlong)param_1 + 0x31c) != 0) {
    FUN_14482f6fa(param_1 + 0x62,0);
  }
  *(undefined4 *)(param_1 + 0x65) = 0;
  if (*(int *)((longlong)param_1 + 0x32c) != 0) {
    FUN_14482f6fa(param_1 + 100,0);
  }
  *(undefined4 *)(param_1 + 0x67) = 0;
  if (*(int *)((longlong)param_1 + 0x33c) != 0) {
    FUN_1447a8aa0(param_1 + 0x66,0);
  }
  *(undefined4 *)(param_1 + 0x69) = 0;
  if (*(int *)((longlong)param_1 + 0x34c) != 0) {
    FUN_1447a8aa0(param_1 + 0x68,0);
  }
  *(undefined4 *)(param_1 + 0x6b) = 0;
  if (*(int *)((longlong)param_1 + 0x35c) != 0) {
    FUN_14482f6fa(param_1 + 0x6a,0);
  }
  *(undefined4 *)(param_1 + 0x6f) = 0;
  if (*(int *)((longlong)param_1 + 0x37c) != 0) {
    FUN_1402191ca(param_1 + 0x6e,0);
  }
  *(undefined4 *)(param_1 + 0x71) = 0;
  if (*(int *)((longlong)param_1 + 0x38c) != 0) {
    FUN_1447a8aa0(param_1 + 0x70,0);
  }
  *(undefined4 *)(param_1 + 0x73) = 0;
  if (*(int *)((longlong)param_1 + 0x39c) != 0) {
    FUN_1447a8aa0(param_1 + 0x72,0);
  }
  *(undefined4 *)(param_1 + 0x76) = 0;
  if (*(int *)((longlong)param_1 + 0x3b4) != 0) {
    FUN_14481578e(param_1 + 0x75,0);
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
  if (param_1[0x5e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x59] != 0) {
    FUN_1400020a8();
  }
  FUN_147bf5e58(param_1);
  return;
}



// FUNCTION 147bf5e58 FUN_147bf5e58 body=265 status=ok
// SIG undefined FUN_147bf5e58(void)

void FUN_147bf5e58(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_14a9ff860;
  if (0 < *(int *)(param_1 + 0x4e)) {
    lVar2 = 0;
    do {
      plVar1 = *(longlong **)(param_1[0x4d] + lVar2 * 8);
      (**(code **)(*plVar1 + 0x420))(plVar1,0);
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 0x4e));
  }
  *(undefined4 *)(param_1 + 0x4e) = 0;
  if (*(int *)((longlong)param_1 + 0x274) < 0) {
    FUN_147c0e8b2(param_1 + 0x4d);
  }
  FUN_1400020a8(param_1[0x2d]);
  FUN_1400020a8(param_1[0x2e]);
  FUN_1400020a8(param_1[0x2f]);
  FUN_147c0e886(param_1[0x3f],*(undefined4 *)(param_1 + 0x40));
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(int *)((longlong)param_1 + 0x204) != 0) {
    FUN_147c0e8e2(param_1 + 0x3f);
  }
  if (param_1[0x4d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x43] != 0) {
    FUN_1400020a8();
  }
  FUN_147c0e886(param_1[0x3f],*(undefined4 *)(param_1 + 0x40));
  if (param_1[0x3f] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147bf5f62 FUN_147bf5f62 body=77 status=ok
// SIG undefined FUN_147bf5f62(void)

void FUN_147bf5f62(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x388);
  if ((iVar1 < 1) && (*(int *)(param_1 + 0x388) = iVar1 + 1, *(int *)(param_1 + 0x38c) == iVar1)) {
    FUN_1403e3958((longlong *)(param_1 + 0x380));
  }
  puVar2 = *(undefined8 **)(param_1 + 0x380);
  puVar2[2] = param_2[2];
  uVar3 = param_2[1];
  *puVar2 = *param_2;
  puVar2[1] = uVar3;
  return;
}



// FUNCTION 147bf5fb0 FUN_147bf5fb0 body=100 status=ok
// SIG undefined FUN_147bf5fb0(void)

void FUN_147bf5fb0(longlong param_1,undefined8 *param_2,uint param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (-1 < (int)param_3) {
    iVar2 = *(int *)(param_1 + 0x2f8);
    if ((iVar2 <= (int)param_3) &&
       (*(uint *)(param_1 + 0x2f8) = param_3 + 1,
       (uint)(*(int *)(param_1 + 0x2fc) - iVar2) < (param_3 + 1) - iVar2)) {
      FUN_1403e3958((longlong *)(param_1 + 0x2f0));
    }
    lVar3 = *(longlong *)(param_1 + 0x2f0);
    *(undefined8 *)(lVar3 + 0x10 + (ulonglong)param_3 * 0x18) = param_2[2];
    uVar4 = param_2[1];
    puVar1 = (undefined8 *)(lVar3 + (ulonglong)param_3 * 0x18);
    *puVar1 = *param_2;
    puVar1[1] = uVar4;
  }
  return;
}



// FUNCTION 147bf6014 FUN_147bf6014 body=100 status=ok
// SIG undefined FUN_147bf6014(void)

void FUN_147bf6014(longlong param_1,undefined8 *param_2,uint param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (-1 < (int)param_3) {
    iVar2 = *(int *)(param_1 + 0x308);
    if ((iVar2 <= (int)param_3) &&
       (*(uint *)(param_1 + 0x308) = param_3 + 1,
       (uint)(*(int *)(param_1 + 0x30c) - iVar2) < (param_3 + 1) - iVar2)) {
      FUN_1403e3958((longlong *)(param_1 + 0x300));
    }
    lVar3 = *(longlong *)(param_1 + 0x300);
    *(undefined8 *)(lVar3 + 0x10 + (ulonglong)param_3 * 0x18) = param_2[2];
    uVar4 = param_2[1];
    puVar1 = (undefined8 *)(lVar3 + (ulonglong)param_3 * 0x18);
    *puVar1 = *param_2;
    puVar1[1] = uVar4;
  }
  return;
}



// FUNCTION 147bf6078 FUN_147bf6078 body=93 status=ok
// SIG undefined FUN_147bf6078(void)

void FUN_147bf6078(longlong param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  
  if (-1 < (int)param_3) {
    iVar1 = *(int *)(param_1 + 0x318);
    if ((iVar1 <= (int)param_3) &&
       (*(uint *)(param_1 + 0x318) = param_3 + 1,
       (uint)(*(int *)(param_1 + 0x31c) - iVar1) < (param_3 + 1) - iVar1)) {
      FUN_14475e4ac((longlong *)(param_1 + 0x310));
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x310) + (ulonglong)param_3 * 4) = param_2;
  }
  return;
}



// FUNCTION 147bf60d6 FUN_147bf60d6 body=100 status=ok
// SIG undefined FUN_147bf60d6(void)

void FUN_147bf60d6(longlong param_1,undefined8 *param_2,uint param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (-1 < (int)param_3) {
    iVar2 = *(int *)(param_1 + 0x388);
    if ((iVar2 <= (int)param_3) &&
       (*(uint *)(param_1 + 0x388) = param_3 + 1,
       (uint)(*(int *)(param_1 + 0x38c) - iVar2) < (param_3 + 1) - iVar2)) {
      FUN_1403e3958((longlong *)(param_1 + 0x380));
    }
    lVar3 = *(longlong *)(param_1 + 0x380);
    *(undefined8 *)(lVar3 + 0x10 + (ulonglong)param_3 * 0x18) = param_2[2];
    uVar4 = param_2[1];
    puVar1 = (undefined8 *)(lVar3 + (ulonglong)param_3 * 0x18);
    *puVar1 = *param_2;
    puVar1[1] = uVar4;
  }
  return;
}



// FUNCTION 147bf613a FUN_147bf613a body=100 status=ok
// SIG undefined FUN_147bf613a(void)

void FUN_147bf613a(longlong param_1,undefined8 *param_2,uint param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (-1 < (int)param_3) {
    iVar2 = *(int *)(param_1 + 0x398);
    if ((iVar2 <= (int)param_3) &&
       (*(uint *)(param_1 + 0x398) = param_3 + 1,
       (uint)(*(int *)(param_1 + 0x39c) - iVar2) < (param_3 + 1) - iVar2)) {
      FUN_1403e3958((longlong *)(param_1 + 0x390));
    }
    lVar3 = *(longlong *)(param_1 + 0x390);
    *(undefined8 *)(lVar3 + 0x10 + (ulonglong)param_3 * 0x18) = param_2[2];
    uVar4 = param_2[1];
    puVar1 = (undefined8 *)(lVar3 + (ulonglong)param_3 * 0x18);
    *puVar1 = *param_2;
    puVar1[1] = uVar4;
  }
  return;
}



// FUNCTION 147bf619e FUN_147bf619e body=93 status=ok
// SIG undefined FUN_147bf619e(void)

void FUN_147bf619e(longlong param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  
  if (-1 < (int)param_3) {
    iVar1 = *(int *)(param_1 + 0x358);
    if ((iVar1 <= (int)param_3) &&
       (*(uint *)(param_1 + 0x358) = param_3 + 1,
       (uint)(*(int *)(param_1 + 0x35c) - iVar1) < (param_3 + 1) - iVar1)) {
      FUN_14475e4ac((longlong *)(param_1 + 0x350));
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x350) + (ulonglong)param_3 * 4) = param_2;
  }
  return;
}



// FUNCTION 147bf6336 FUN_147bf6336 body=265 status=ok
// SIG undefined FUN_147bf6336(void)

void FUN_147bf6336(longlong param_1,double *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  double local_38;
  double dStack_30;
  double local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  dStack_30 = param_2[1];
  local_28 = param_2[2];
  FUN_147bf6440(local_38,&local_38,0);
  if (0 < *(int *)(param_1 + 0x2f8)) {
    lVar2 = 0x10;
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x2f0);
      *(double *)(lVar1 + -0x10 + lVar2) = *param_2 + *(double *)(lVar1 + -0x10 + lVar2);
      *(double *)(lVar1 + -8 + lVar2) = param_2[1] + *(double *)(lVar1 + -8 + lVar2);
      *(double *)(lVar1 + lVar2) = param_2[2] + *(double *)(lVar1 + lVar2);
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 0x18;
    } while (lVar3 < *(int *)(param_1 + 0x2f8));
  }
  if (0 < *(int *)(param_1 + 0x338)) {
    lVar2 = 0x10;
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x330);
      *(double *)(lVar1 + -0x10 + lVar2) = *param_2 + *(double *)(lVar1 + -0x10 + lVar2);
      *(double *)(lVar1 + -8 + lVar2) = param_2[1] + *(double *)(lVar1 + -8 + lVar2);
      *(double *)(lVar1 + lVar2) = param_2[2] + *(double *)(lVar1 + lVar2);
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 0x18;
    } while (lVar3 < *(int *)(param_1 + 0x338));
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bf6440 FUN_147bf6440 body=167 status=ok
// SIG undefined FUN_147bf6440(void)

void FUN_147bf6440(longlong param_1,double *param_2)

{
  double dVar1;
  
  FUN_147c0561a();
  *(double *)(param_1 + 0x48) = *param_2 + *(double *)(param_1 + 0x48);
  *(double *)(param_1 + 0x50) = param_2[1] + *(double *)(param_1 + 0x50);
  *(double *)(param_1 + 0x58) = param_2[2] + *(double *)(param_1 + 0x58);
  *(double *)(param_1 + 0x1a8) = *param_2 + *(double *)(param_1 + 0x1a8);
  *(double *)(param_1 + 0x1b0) = param_2[1] + *(double *)(param_1 + 0x1b0);
  *(double *)(param_1 + 0x1b8) = param_2[2] + *(double *)(param_1 + 0x1b8);
  if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x30) + 0x71) & 1) == 0) {
    *(double *)(param_1 + 0x250) = param_2[2];
    dVar1 = param_2[1];
    *(double *)(param_1 + 0x240) = *param_2;
    *(double *)(param_1 + 0x248) = dVar1;
  }
  return;
}



// FUNCTION 147bf64e8 FUN_147bf64e8 body=595 status=ok
// SIG undefined FUN_147bf64e8(void)

void FUN_147bf64e8(longlong param_1,longlong param_2,undefined8 param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  
  *(longlong *)(param_1 + 8) = param_2;
  *(undefined8 *)(param_1 + 0x10) = param_3;
  FUN_147c0532e();
  if (*(int *)(param_2 + 0x48) < 1) {
    lVar4 = 0;
  }
  else {
    lVar4 = **(longlong **)(param_2 + 0x40);
  }
  lVar5 = *(longlong *)(lVar4 + 0x48);
  *(longlong *)(param_1 + 0x278) = lVar5;
  bVar1 = *(byte *)(*(longlong *)(lVar4 + 0x30) + 0x71);
  if ((bVar1 & 1) != 0) {
    *(byte *)(*(longlong *)(lVar4 + 0x30) + 0x71) = bVar1 & 0xfe;
    lVar5 = *(longlong *)(param_1 + 0x278);
  }
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined8 *)(param_1 + 0x290) = 0;
  *(undefined8 *)(param_1 + 0x298) = 0;
  iVar2 = *(int *)(lVar5 + 0x40);
  if (iVar2 == 0) {
    *(undefined4 *)(lVar5 + 0x40) = 1;
    lVar5 = *(longlong *)(param_1 + 0x278);
    iVar2 = *(int *)(lVar5 + 0x40);
  }
  *(int *)(param_1 + 0x2d8) = iVar2;
  *(undefined1 *)(param_1 + 0x2b4) = 1;
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  *(uint *)(param_1 + 0x2c0) = (uint)*(byte *)(lVar5 + 0x30);
  *(undefined4 *)(param_1 + 0x2d0) = 0;
  uVar3 = 0;
  iVar2 = 0;
  if (*(int *)(param_1 + 0x2d4) != 0) {
    FUN_14481578e(param_1 + 0x2c8,0);
    lVar5 = *(longlong *)(param_1 + 0x278);
    iVar2 = *(int *)(param_1 + 0x2d0);
    uVar3 = *(uint *)(param_1 + 0x2d4);
  }
  *(uint *)(param_1 + 0x2d0) = iVar2 + 1U;
  if (uVar3 < iVar2 + 1U) {
    FUN_1446f48e2(param_1 + 0x2c8,iVar2);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x2c8) + (longlong)iVar2 * 4) =
       *(undefined4 *)(lVar5 + 0x34);
  *(undefined4 *)(param_1 + 0x2f8) = 0;
  if (*(int *)(param_1 + 0x2fc) != 0) {
    FUN_1447a8aa0(param_1 + 0x2f0,0);
  }
  *(undefined4 *)(param_1 + 0x308) = 0;
  if (*(int *)(param_1 + 0x30c) != 0) {
    FUN_1447a8aa0(param_1 + 0x300,0);
  }
  *(undefined4 *)(param_1 + 0x318) = 0;
  if (*(int *)(param_1 + 0x31c) != 0) {
    FUN_14482f6fa(param_1 + 0x310,0);
  }
  *(undefined4 *)(param_1 + 0x328) = 0;
  if (*(int *)(param_1 + 0x32c) != 0) {
    FUN_14482f6fa(param_1 + 800,0);
  }
  *(undefined4 *)(param_1 + 0x338) = 0;
  if (*(int *)(param_1 + 0x33c) != 0) {
    FUN_1447a8aa0(param_1 + 0x330,0);
  }
  *(undefined4 *)(param_1 + 0x378) = 0;
  if (*(int *)(param_1 + 0x37c) != 0) {
    FUN_1402191ca(param_1 + 0x370,0);
  }
  *(undefined4 *)(param_1 + 0x388) = 0;
  if (*(int *)(param_1 + 0x38c) != 0) {
    FUN_1447a8aa0(param_1 + 0x380,0);
  }
  *(undefined4 *)(param_1 + 0x398) = 0;
  if (*(int *)(param_1 + 0x39c) != 0) {
    FUN_1447a8aa0(param_1 + 0x390,0);
  }
  *(undefined4 *)(param_1 + 0x358) = 0;
  if (*(int *)(param_1 + 0x35c) != 0) {
    FUN_14482f6fa(param_1 + 0x350,0);
  }
  FUN_147bf673c(param_1);
  FUN_147bf68cc(param_1);
  return;
}



// FUNCTION 147bf673c FUN_147bf673c body=399 status=ok
// SIG undefined FUN_147bf673c(void)

void FUN_147bf673c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_128 [32];
  longlong local_108;
  undefined1 local_100;
  undefined8 local_fc;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8 [12];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar3 = *(longlong *)(param_1 + 0x280);
  if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x34) != 0)) {
    if (*(byte *)(lVar3 + 0x30) - 2 < 2) {
      if (*(longlong *)(param_1 + 0x2e8) == 0) {
        lVar2 = (longlong)*(int *)(*(longlong *)(param_1 + 0x10) + 0x8e8);
        if (0 < lVar2) {
          lVar6 = 0;
          do {
            lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x8e0) + lVar6 * 8);
            if ((lVar1 != 0) &&
               (*(longlong *)(*(longlong *)(lVar1 + 8) + 0x28) == *(longlong *)(lVar3 + 0x34))) {
              *(longlong *)(param_1 + 0x2e8) = lVar1;
              break;
            }
            lVar6 = lVar6 + 1;
          } while (lVar2 != lVar6);
        }
      }
    }
    else if (*(byte *)(lVar3 + 0x30) == 4) {
      local_fc = 0;
      local_108 = 0;
      local_100 = 0;
      local_f0 = 0;
      uStack_e8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_c0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      puVar4 = &DAT_14c846480;
      puVar5 = local_a8;
      for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      local_38 = DAT_14c8464f0;
      local_48 = (undefined4)DAT_14c8464e0;
      uStack_44 = DAT_14c8464e0._4_4_;
      uStack_40 = (undefined4)DAT_14c8464e8;
      uStack_3c = DAT_14c8464e8._4_4_;
      local_30 = 0;
      lVar3 = *(longlong *)(param_1 + 0x10);
      if (0 < *(int *)(lVar3 + 0x6a8)) {
        lVar2 = 0;
        lVar6 = 0;
        do {
          FUN_147bf7e6a(&local_108,*(longlong *)(lVar3 + 0x6a0) + lVar2);
          if (local_108 == *(longlong *)(*(longlong *)(param_1 + 0x280) + 0x34)) {
            *(undefined8 *)(param_1 + 0x2e0) = local_b8;
            break;
          }
          lVar6 = lVar6 + 1;
          lVar3 = *(longlong *)(param_1 + 0x10);
          lVar2 = lVar2 + 0xe0;
        } while (lVar6 < *(int *)(lVar3 + 0x6a8));
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147bf68cc FUN_147bf68cc body=399 status=ok
// SIG undefined FUN_147bf68cc(void)

void FUN_147bf68cc(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_128 [32];
  longlong local_108;
  undefined1 local_100;
  undefined8 local_fc;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8 [12];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar3 = *(longlong *)(param_1 + 0x288);
  if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x34) != 0)) {
    if (*(byte *)(lVar3 + 0x30) - 2 < 2) {
      if (*(longlong *)(param_1 + 0x368) == 0) {
        lVar2 = (longlong)*(int *)(*(longlong *)(param_1 + 0x10) + 0x8e8);
        if (0 < lVar2) {
          lVar6 = 0;
          do {
            lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x8e0) + lVar6 * 8);
            if ((lVar1 != 0) &&
               (*(longlong *)(*(longlong *)(lVar1 + 8) + 0x28) == *(longlong *)(lVar3 + 0x34))) {
              *(longlong *)(param_1 + 0x368) = lVar1;
              break;
            }
            lVar6 = lVar6 + 1;
          } while (lVar2 != lVar6);
        }
      }
    }
    else if (*(byte *)(lVar3 + 0x30) == 4) {
      local_fc = 0;
      local_108 = 0;
      local_100 = 0;
      local_f0 = 0;
      uStack_e8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_c0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      puVar4 = &DAT_14c846480;
      puVar5 = local_a8;
      for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      local_38 = DAT_14c8464f0;
      local_48 = (undefined4)DAT_14c8464e0;
      uStack_44 = DAT_14c8464e0._4_4_;
      uStack_40 = (undefined4)DAT_14c8464e8;
      uStack_3c = DAT_14c8464e8._4_4_;
      local_30 = 0;
      lVar3 = *(longlong *)(param_1 + 0x10);
      if (0 < *(int *)(lVar3 + 0x6a8)) {
        lVar2 = 0;
        lVar6 = 0;
        do {
          FUN_147bf7e6a(&local_108,*(longlong *)(lVar3 + 0x6a0) + lVar2);
          if (local_108 == *(longlong *)(*(longlong *)(param_1 + 0x288) + 0x34)) {
            *(undefined8 *)(param_1 + 0x360) = local_b8;
            break;
          }
          lVar6 = lVar6 + 1;
          lVar3 = *(longlong *)(param_1 + 0x10);
          lVar2 = lVar2 + 0xe0;
        } while (lVar6 < *(int *)(lVar3 + 0x6a8));
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147bf6a5c FUN_147bf6a5c body=428 status=ok
// SIG undefined FUN_147bf6a5c(void)

void FUN_147bf6a5c(longlong param_1)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  
  lVar5 = *(longlong *)(param_1 + 0x278);
  if ((0 < *(int *)(lVar5 + 0x138)) &&
     (lVar2 = *(longlong *)(param_1 + 8), *(int *)(lVar2 + 0x68) != *(int *)(lVar2 + 0x94))) {
    uVar3 = **(ulonglong **)(lVar5 + 0x130);
    uVar4 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    lVar7 = lVar2 + 0x98;
    if (*(longlong *)(lVar2 + 0xa0) != 0) {
      lVar7 = *(longlong *)(lVar2 + 0xa0);
    }
    iVar6 = *(int *)(lVar7 + (ulonglong)(*(int *)(lVar2 + 0xa8) - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4)
    ;
    if (iVar6 != -1) {
      do {
        puVar1 = (ulonglong *)(*(longlong *)(lVar2 + 0x60) + (longlong)iVar6 * 0x18);
        if (*puVar1 == uVar3) {
          if (puVar1 + 1 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0) {
            *(int *)(param_1 + 0x2a0) = (int)puVar1[1];
          }
          break;
        }
        iVar6 = (int)puVar1[2];
      } while (iVar6 != -1);
    }
  }
  if ((0 < *(int *)(lVar5 + 0x148)) &&
     (lVar2 = *(longlong *)(param_1 + 8), *(int *)(lVar2 + 0x68) != *(int *)(lVar2 + 0x94))) {
    uVar3 = **(ulonglong **)(lVar5 + 0x140);
    uVar4 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    lVar5 = lVar2 + 0x98;
    if (*(longlong *)(lVar2 + 0xa0) != 0) {
      lVar5 = *(longlong *)(lVar2 + 0xa0);
    }
    iVar6 = *(int *)(lVar5 + (ulonglong)(*(int *)(lVar2 + 0xa8) - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4)
    ;
    if (iVar6 != -1) {
      do {
        puVar1 = (ulonglong *)(*(longlong *)(lVar2 + 0x60) + (longlong)iVar6 * 0x18);
        if (*puVar1 == uVar3) {
          if (puVar1 + 1 == (ulonglong *)0x0 || puVar1 == (ulonglong *)0x0) {
            return;
          }
          *(int *)(param_1 + 0x2b0) = (int)puVar1[1];
          return;
        }
        iVar6 = (int)puVar1[2];
      } while (iVar6 != -1);
    }
  }
  return;
}



// FUNCTION 147bf6c08 FUN_147bf6c08 body=118 status=ok
// SIG undefined FUN_147bf6c08(void)

void FUN_147bf6c08(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  lVar3 = *(longlong *)(lVar1 + 0x50);
  if (0 < *(int *)(lVar3 + 0xa0)) {
    lVar2 = 8;
    lVar4 = 0;
    do {
      if (*(int *)(lVar1 + 0x28) < *(int *)(param_1 + 0x200)) {
        lVar5 = (longlong)*(int *)(lVar1 + 0x28) * 0x10;
        if ((lVar4 < *(int *)(*(longlong *)(param_1 + 0x1f8) + 8 + lVar5)) &&
           (*(float *)(*(longlong *)(lVar3 + 0x98) + lVar2) <= *(float *)(param_1 + 0x1a0))) {
          *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x1f8) + lVar5) + lVar4) = 1;
          lVar3 = *(longlong *)(lVar1 + 0x50);
        }
      }
      lVar4 = lVar4 + 1;
      lVar2 = lVar2 + 0xc;
    } while (lVar4 < *(int *)(lVar3 + 0xa0));
  }
  return;
}



// FUNCTION 147bf6c7e FUN_147bf6c7e body=349 status=ok
// SIG undefined FUN_147bf6c7e(void)

void FUN_147bf6c7e(longlong param_1,undefined4 param_2,longlong param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  
  if (*(longlong *)(param_3 + 0x48) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x280);
    if ((plVar1 != (longlong *)0x0) && ((char)plVar1[5] < '\0')) {
      uVar2 = FUN_147bf6ddc(param_1,plVar1);
      (**(code **)(*plVar1 + 0x2b0))(plVar1,param_1,uVar2,param_2);
    }
    plVar1 = *(longlong **)(param_1 + 0x298);
    if ((plVar1 != (longlong *)0x0) && ((char)plVar1[5] < '\0')) {
      (**(code **)(*plVar1 + 0x2b0))(plVar1,param_1,*(undefined4 *)(param_1 + 0x2a0),param_2);
    }
    plVar1 = *(longlong **)(param_1 + 0x288);
    if ((plVar1 != (longlong *)0x0) && ((char)plVar1[5] < '\0')) {
      uVar2 = FUN_147bf6ddc(param_1,plVar1);
      (**(code **)(*plVar1 + 0x2b0))(plVar1,param_1,uVar2,param_2);
    }
    plVar1 = *(longlong **)(param_1 + 0x2a8);
    if ((plVar1 != (longlong *)0x0) && ((char)plVar1[5] < '\0')) {
      (**(code **)(*plVar1 + 0x2b0))(plVar1,param_1,*(undefined4 *)(param_1 + 0x2b0),param_2);
    }
    plVar1 = *(longlong **)(param_1 + 0x290);
    if ((plVar1 != (longlong *)0x0) && ((char)plVar1[5] < '\0')) {
      uVar2 = FUN_147bf6ddc(param_1,plVar1);
      (**(code **)(*plVar1 + 0x2b0))(plVar1,param_1,uVar2,param_2);
    }
    plVar1 = *(longlong **)(param_3 + 0x48);
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147bf6d59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x2b0))(plVar1,param_1,*(undefined4 *)(param_1 + 0x24),param_2);
      return;
    }
  }
  return;
}



// FUNCTION 147bf6ddc FUN_147bf6ddc body=177 status=ok
// SIG undefined FUN_147bf6ddc(void)

undefined4 FUN_147bf6ddc(longlong param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  
  lVar2 = *(longlong *)(param_1 + 8);
  if (*(int *)(lVar2 + 0x68) != *(int *)(lVar2 + 0x94)) {
    uVar3 = ((uint)(uint7)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    lVar4 = lVar2 + 0x98;
    if (*(longlong *)(lVar2 + 0xa0) != 0) {
      lVar4 = *(longlong *)(lVar2 + 0xa0);
    }
    iVar5 = *(int *)(lVar4 + (ulonglong)(*(int *)(lVar2 + 0xa8) - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4)
    ;
    if (iVar5 != -1) {
      do {
        puVar1 = (ulonglong *)(*(longlong *)(lVar2 + 0x60) + (longlong)iVar5 * 0x18);
        if (*puVar1 == param_2) {
          if (puVar1 + 1 == (ulonglong *)0x0 || puVar1 == (ulonglong *)0x0) {
            return 0;
          }
          return (int)puVar1[1];
        }
        iVar5 = (int)puVar1[2];
      } while (iVar5 != -1);
    }
  }
  return 0;
}



// FUNCTION 147bf6eb0 FUN_147bf6eb0 body=120 status=ok
// SIG undefined FUN_147bf6eb0(void)

void FUN_147bf6eb0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_147bf6f28();
  lVar1 = *(longlong *)(param_1 + 0x278);
  lVar2 = (longlong)*(int *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x280) = *(undefined8 *)(*(longlong *)(lVar1 + 0x100) + lVar2 * 8);
  *(undefined8 *)(param_1 + 0x288) = *(undefined8 *)(*(longlong *)(lVar1 + 0x110) + lVar2 * 8);
  *(undefined8 *)(param_1 + 0x290) = *(undefined8 *)(*(longlong *)(lVar1 + 0x120) + lVar2 * 8);
  *(undefined8 *)(param_1 + 0x298) = *(undefined8 *)(*(longlong *)(lVar1 + 0x130) + lVar2 * 8);
  *(undefined8 *)(param_1 + 0x2a8) = *(undefined8 *)(*(longlong *)(lVar1 + 0x140) + lVar2 * 8);
  return;
}



// FUNCTION 147bf6f28 FUN_147bf6f28 body=510 status=ok
// SIG undefined FUN_147bf6f28(void)

void FUN_147bf6f28(longlong *param_1,int param_2,char param_3)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  byte bVar9;
  
  lVar4 = param_1[1];
  if (lVar4 != 0) {
    *(int *)(param_1 + 4) = param_2;
    if (param_2 < *(int *)(lVar4 + 0x48)) {
      plVar5 = (longlong *)((longlong)param_2 * 8 + *(longlong *)(lVar4 + 0x40));
    }
    else {
      *(undefined4 *)(param_1 + 4) = 0;
      plVar5 = *(longlong **)(lVar4 + 0x40);
      param_2 = 0;
    }
    lVar4 = *plVar5;
    param_1[3] = lVar4;
    lVar3 = (longlong)param_2;
    *(undefined4 *)(param_1 + 0x42) = *(undefined4 *)(param_1[0x43] + lVar3 * 4);
    if (param_3 != '\0') {
      bVar9 = *(byte *)(*(longlong *)(lVar4 + 0x30) + 0x71) & 4;
      bVar1 = *(byte *)(param_1 + 0x2c);
      *(byte *)(param_1 + 0x2c) = bVar1 & 0xfb | bVar9;
      *(byte *)(param_1 + 0x2c) =
           bVar1 & 0xf9 | bVar9 | *(byte *)(*(longlong *)(lVar4 + 0x30) + 0x71) & 2;
      lVar4 = *(longlong *)(lVar4 + 0x50);
      iVar2 = (int)param_1[0x40];
      if (iVar2 <= param_2) {
        uVar7 = (param_2 - iVar2) + 1;
        *(int *)(param_1 + 0x40) = param_2 + 1;
        if ((uint)(*(int *)((longlong)param_1 + 0x204) - iVar2) < uVar7) {
          FUN_147c0e912(param_1 + 0x3f);
        }
        memset((void *)((longlong)iVar2 * 0x10 + param_1[0x3f]),0,(longlong)(int)uVar7 << 4);
        lVar3 = (longlong)(int)param_1[4];
      }
      lVar6 = param_1[0x3f];
      plVar5 = (longlong *)(lVar6 + lVar3 * 0x10);
      iVar2 = *(int *)(lVar6 + 8 + lVar3 * 0x10);
      iVar8 = *(int *)(lVar4 + 0xa0);
      if (iVar2 < iVar8) {
        *(int *)(plVar5 + 1) = iVar8;
        if ((uint)(*(int *)((longlong)plVar5 + 0xc) - iVar2) < (uint)(iVar8 - iVar2)) {
          FUN_1401c3474(plVar5);
        }
        memset((void *)((longlong)iVar2 + *plVar5),0,(longlong)(iVar8 - iVar2));
        iVar8 = *(int *)(lVar4 + 0xa0);
      }
      if (0 < iVar8) {
        lVar3 = 8;
        lVar6 = 0;
        do {
          if (*(float *)(*(longlong *)(param_1[3] + 0x30) + 0xb8) +
              *(float *)(*(longlong *)(lVar4 + 0x98) + lVar3) < *(float *)(param_1 + 0x34)) {
            *(undefined1 *)(*plVar5 + lVar6) = 1;
            iVar8 = *(int *)(lVar4 + 0xa0);
          }
          lVar6 = lVar6 + 1;
          lVar3 = lVar3 + 0xc;
        } while (lVar6 < iVar8);
      }
    }
    lVar4 = *(longlong *)(param_1[2] + 0xb0);
    if (lVar4 == 0) {
      lVar4 = FUN_1448abda6();
    }
    bVar1 = *(byte *)(lVar4 + 0x152);
    if (((bVar1 == 1) || ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) &&
       ((*(byte *)(param_1[3] + 0x2c) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000147bf70fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xf0))(param_1,0);
      return;
    }
  }
  return;
}



// FUNCTION 147bf7126 FUN_147bf7126 body=2238 status=ok
// SIG undefined FUN_147bf7126(void)

void FUN_147bf7126(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  double dVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  float fVar23;
  undefined1 auStack_1d8 [32];
  double **local_1b8;
  undefined8 *local_1b0;
  undefined8 *local_1a8;
  undefined8 *local_1a0;
  undefined8 *local_198;
  undefined8 *local_190;
  undefined8 *local_188;
  undefined8 *local_180;
  undefined8 *local_178;
  undefined8 *local_170;
  double local_160;
  double local_158;
  double local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  double *local_100;
  undefined4 local_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  lVar15 = *(longlong *)(param_1 + 0x10);
  if (lVar15 != 0) {
    *(undefined8 *)(param_1 + 0x1e8) = DAT_14c8464f0;
    uVar5 = DAT_14c8464e8;
    *(undefined8 *)(param_1 + 0x1d8) = DAT_14c8464e0;
    *(undefined8 *)(param_1 + 0x1e0) = uVar5;
    uVar5 = DAT_14c8464e8;
    *(undefined8 *)(param_1 + 0x1c0) = DAT_14c8464e0;
    *(undefined8 *)(param_1 + 0x1c8) = uVar5;
    *(undefined8 *)(param_1 + 0x1d0) = DAT_14c8464f0;
    *(undefined1 *)(param_1 + 0x1f0) = 0;
    uVar13 = *(undefined8 *)(lVar15 + 0x268);
    uVar5 = *(undefined8 *)(lVar15 + 0x270);
    *(undefined8 *)(param_1 + 0x1d8) = *(undefined8 *)(lVar15 + 0x260);
    *(undefined8 *)(param_1 + 0x1e0) = uVar13;
    *(undefined8 *)(param_1 + 0x1e8) = uVar5;
    *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_1 + 0x1d8);
    *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(param_1 + 0x1dc);
    *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_1 + 0x1e0);
    *(undefined4 *)(param_1 + 0x1cc) = *(undefined4 *)(param_1 + 0x1e4);
    *(undefined8 *)(param_1 + 0x1d0) = *(undefined8 *)(param_1 + 0x1e8);
    *(undefined1 *)(param_1 + 0x1f0) = 1;
    dVar8 = 0.0;
    dVar9 = 0.0;
    if (*(longlong *)(param_1 + 0x290) != 0) {
      FUN_147a777c8(*(longlong *)(param_1 + 0x290) + 0x40,&local_100,&local_108);
      dVar9 = (double)local_100._0_4_;
      dVar8 = (double)(float)local_108;
      lVar15 = *(longlong *)(param_1 + 0x10);
    }
    if (*(int *)(param_1 + 0x18c) < 1) {
      dVar22 = *(double *)(param_1 + 0x1e8);
      dVar21 = *(double *)(param_1 + 0x1e0);
      dVar20 = *(double *)(param_1 + 0x1d8);
      dVar19 = *(double *)(param_1 + 0x1d0);
      dVar6 = *(double *)(param_1 + 0x1c0);
      dVar18 = *(double *)(param_1 + 0x1c8);
      dVar8 = 1.0;
    }
    else {
      local_150 = *(double *)(lVar15 + 0x290);
      local_158 = *(double *)(lVar15 + 0x280);
      local_160 = *(double *)(lVar15 + 0x288);
      fVar23 = 1.0;
      lVar15 = 0;
      do {
        lVar7 = *(longlong *)(param_1 + 0x168);
        lVar14 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x170) + lVar15 * 2) *
                 (longlong)*(int *)(param_1 + 0x188);
        lVar1 = lVar14 + lVar7;
        local_f4 = *(undefined4 *)(param_1 + 0x24);
        local_100 = (double *)0x0;
        local_108 = 0;
        local_110 = 0;
        local_118 = 0;
        local_120 = 0;
        local_128 = 0;
        local_130 = 0;
        local_138 = 0;
        local_140 = 0;
        local_148 = 0;
        local_170 = &local_148;
        local_178 = &local_140;
        local_180 = &local_138;
        local_188 = &local_130;
        local_190 = &local_128;
        local_198 = &local_120;
        local_1a0 = &local_118;
        local_1a8 = &local_110;
        local_1b0 = &local_108;
        local_1b8 = &local_100;
        (**(code **)(**(longlong **)(param_1 + 0x278) + 0x3e0))
                  (*(longlong **)(param_1 + 0x278),param_1,lVar1,&local_f4);
        fVar2 = *(float *)(lVar7 + 0x68 + lVar14);
        fVar3 = *(float *)(lVar7 + 100 + lVar14);
        fVar4 = *(float *)(lVar7 + 0x60 + lVar14);
        if (*(char *)(param_1 + 0x1f0) == '\0') {
          lVar14 = lVar14 + lVar7;
          *(undefined8 *)(param_1 + 0x1e8) = *(undefined8 *)(lVar14 + 0x28);
          uVar5 = *(undefined8 *)(lVar14 + 0x20);
          *(undefined8 *)(param_1 + 0x1d8) = *(undefined8 *)(lVar14 + 0x18);
          *(undefined8 *)(param_1 + 0x1e0) = uVar5;
          uVar5 = *(undefined8 *)(lVar14 + 0x18);
          uVar13 = *(undefined8 *)(lVar14 + 0x20);
          *(undefined8 *)(param_1 + 0x1d0) = *(undefined8 *)(lVar14 + 0x28);
          *(undefined8 *)(param_1 + 0x1c0) = uVar5;
          *(undefined8 *)(param_1 + 0x1c8) = uVar13;
          *(undefined1 *)(param_1 + 0x1f0) = 1;
          uVar16 = (undefined4)*(undefined8 *)(param_1 + 0x1c0);
          uVar17 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x1c0) >> 0x20);
          dVar18 = *(double *)(param_1 + 0x1c8);
          dVar19 = *(double *)(param_1 + 0x1d0);
          dVar20 = *(double *)(param_1 + 0x1d8);
          dVar21 = *(double *)(param_1 + 0x1e0);
          dVar22 = *(double *)(param_1 + 0x1e8);
        }
        else {
          dVar22 = *(double *)(param_1 + 0x1c0);
          uVar16 = SUB84(dVar22,0);
          uVar17 = (undefined4)((ulonglong)dVar22 >> 0x20);
          dVar21 = *(double *)(lVar1 + 0x18);
          if (dVar21 <= dVar22) {
            uVar16 = SUB84(dVar21,0);
            uVar17 = (undefined4)((ulonglong)dVar21 >> 0x20);
          }
          *(ulonglong *)(param_1 + 0x1c0) = CONCAT44(uVar17,uVar16);
          dVar18 = *(double *)(param_1 + 0x1c8);
          if (*(double *)(lVar1 + 0x20) <= *(double *)(param_1 + 0x1c8)) {
            dVar18 = *(double *)(lVar1 + 0x20);
          }
          *(double *)(param_1 + 0x1c8) = dVar18;
          dVar19 = *(double *)(param_1 + 0x1d0);
          if (*(double *)(lVar1 + 0x28) <= *(double *)(param_1 + 0x1d0)) {
            dVar19 = *(double *)(lVar1 + 0x28);
          }
          *(double *)(param_1 + 0x1d0) = dVar19;
          dVar20 = *(double *)(param_1 + 0x1d8);
          if (*(double *)(param_1 + 0x1d8) <= *(double *)(lVar1 + 0x18)) {
            dVar20 = *(double *)(lVar1 + 0x18);
          }
          *(double *)(param_1 + 0x1d8) = dVar20;
          dVar21 = *(double *)(param_1 + 0x1e0);
          if (*(double *)(param_1 + 0x1e0) <= *(double *)(lVar1 + 0x20)) {
            dVar21 = *(double *)(lVar1 + 0x20);
          }
          *(double *)(param_1 + 0x1e0) = dVar21;
          dVar22 = *(double *)(param_1 + 0x1e8);
          if (*(double *)(param_1 + 0x1e8) <= *(double *)(lVar1 + 0x28)) {
            dVar22 = *(double *)(lVar1 + 0x28);
          }
          *(double *)(param_1 + 0x1e8) = dVar22;
        }
        dVar10 = *(double *)(lVar1 + 0x18) + dVar9;
        dVar11 = *(double *)(lVar1 + 0x20) + dVar9;
        dVar12 = *(double *)(lVar1 + 0x28) + dVar9;
        dVar6 = (double)CONCAT44(uVar17,uVar16);
        if (dVar10 <= (double)CONCAT44(uVar17,uVar16)) {
          dVar6 = dVar10;
        }
        *(double *)(param_1 + 0x1c0) = dVar6;
        if (dVar11 <= dVar18) {
          dVar18 = dVar11;
        }
        *(double *)(param_1 + 0x1c8) = dVar18;
        if (dVar12 <= dVar19) {
          dVar19 = dVar12;
        }
        *(double *)(param_1 + 0x1d0) = dVar19;
        if (dVar20 <= dVar10) {
          dVar20 = dVar10;
        }
        *(double *)(param_1 + 0x1d8) = dVar20;
        if (dVar21 <= dVar11) {
          dVar21 = dVar11;
        }
        *(double *)(param_1 + 0x1e0) = dVar21;
        if (dVar22 <= dVar12) {
          dVar22 = dVar12;
        }
        *(double *)(param_1 + 0x1e8) = dVar22;
        dVar10 = *(double *)(lVar1 + 0x18) + dVar8;
        dVar11 = *(double *)(lVar1 + 0x20) + dVar8;
        dVar12 = *(double *)(lVar1 + 0x28) + dVar8;
        if (dVar10 <= dVar6) {
          dVar6 = dVar10;
        }
        *(double *)(param_1 + 0x1c0) = dVar6;
        if (dVar11 <= dVar18) {
          dVar18 = dVar11;
        }
        *(double *)(param_1 + 0x1c8) = dVar18;
        if (dVar12 <= dVar19) {
          dVar19 = dVar12;
        }
        *(double *)(param_1 + 0x1d0) = dVar19;
        if (dVar20 <= dVar10) {
          dVar20 = dVar10;
        }
        *(double *)(param_1 + 0x1d8) = dVar20;
        if (dVar21 <= dVar11) {
          dVar21 = dVar11;
        }
        *(double *)(param_1 + 0x1e0) = dVar21;
        if (dVar22 <= dVar12) {
          dVar22 = dVar12;
        }
        *(double *)(param_1 + 0x1e8) = dVar22;
        dVar10 = local_100[2];
        dVar11 = *local_100;
        dVar12 = local_100[1];
        if (dVar11 <= dVar6) {
          dVar6 = dVar11;
        }
        *(double *)(param_1 + 0x1c0) = dVar6;
        if (dVar12 <= dVar18) {
          dVar18 = dVar12;
        }
        *(double *)(param_1 + 0x1c8) = dVar18;
        if (dVar10 <= dVar19) {
          dVar19 = dVar10;
        }
        *(double *)(param_1 + 0x1d0) = dVar19;
        if (dVar20 <= dVar11) {
          dVar20 = dVar11;
        }
        *(double *)(param_1 + 0x1d8) = dVar20;
        if (dVar21 <= dVar12) {
          dVar21 = dVar12;
        }
        *(double *)(param_1 + 0x1e0) = dVar21;
        if (dVar22 <= dVar10) {
          dVar22 = dVar10;
        }
        *(double *)(param_1 + 0x1e8) = dVar22;
        dVar10 = *local_100 + dVar9;
        dVar11 = local_100[1] + dVar9;
        dVar12 = local_100[2] + dVar9;
        if (dVar10 <= dVar6) {
          dVar6 = dVar10;
        }
        *(double *)(param_1 + 0x1c0) = dVar6;
        if (dVar11 <= dVar18) {
          dVar18 = dVar11;
        }
        *(double *)(param_1 + 0x1c8) = dVar18;
        if (dVar12 <= dVar19) {
          dVar19 = dVar12;
        }
        *(double *)(param_1 + 0x1d0) = dVar19;
        if (dVar20 <= dVar10) {
          dVar20 = dVar10;
        }
        *(double *)(param_1 + 0x1d8) = dVar20;
        if (dVar21 <= dVar11) {
          dVar21 = dVar11;
        }
        *(double *)(param_1 + 0x1e0) = dVar21;
        if (dVar22 <= dVar12) {
          dVar22 = dVar12;
        }
        *(double *)(param_1 + 0x1e8) = dVar22;
        dVar10 = *local_100 + dVar8;
        dVar11 = local_100[1] + dVar8;
        dVar12 = local_100[2] + dVar8;
        if (dVar10 <= dVar6) {
          dVar6 = dVar10;
        }
        *(double *)(param_1 + 0x1c0) = dVar6;
        if (dVar11 <= dVar18) {
          dVar18 = dVar11;
        }
        *(double *)(param_1 + 0x1c8) = dVar18;
        if (dVar12 <= dVar19) {
          dVar19 = dVar12;
        }
        *(double *)(param_1 + 0x1d0) = dVar19;
        if (dVar20 <= dVar10) {
          dVar20 = dVar10;
        }
        *(double *)(param_1 + 0x1d8) = dVar20;
        if (dVar21 <= dVar11) {
          dVar21 = dVar11;
        }
        *(double *)(param_1 + 0x1e0) = dVar21;
        if (dVar22 <= dVar12) {
          dVar22 = dVar12;
        }
        *(double *)(param_1 + 0x1e8) = dVar22;
        dVar10 = local_100[9];
        dVar11 = local_100[7];
        dVar12 = local_100[8];
        if (dVar11 <= dVar6) {
          dVar6 = dVar11;
        }
        *(double *)(param_1 + 0x1c0) = dVar6;
        if (dVar12 <= dVar18) {
          dVar18 = dVar12;
        }
        *(double *)(param_1 + 0x1c8) = dVar18;
        if (dVar10 <= dVar19) {
          dVar19 = dVar10;
        }
        *(double *)(param_1 + 0x1d0) = dVar19;
        if (dVar20 <= dVar11) {
          dVar20 = dVar11;
        }
        *(double *)(param_1 + 0x1d8) = dVar20;
        if (dVar21 <= dVar12) {
          dVar21 = dVar12;
        }
        *(double *)(param_1 + 0x1e0) = dVar21;
        if (dVar22 <= dVar10) {
          dVar22 = dVar10;
        }
        *(double *)(param_1 + 0x1e8) = dVar22;
        dVar10 = local_100[7] + dVar9;
        dVar11 = local_100[8] + dVar9;
        dVar12 = local_100[9] + dVar9;
        if (dVar10 <= dVar6) {
          dVar6 = dVar10;
        }
        *(double *)(param_1 + 0x1c0) = dVar6;
        if (dVar11 <= dVar18) {
          dVar18 = dVar11;
        }
        *(double *)(param_1 + 0x1c8) = dVar18;
        if (dVar12 <= dVar19) {
          dVar19 = dVar12;
        }
        *(double *)(param_1 + 0x1d0) = dVar19;
        if (dVar20 <= dVar10) {
          dVar20 = dVar10;
        }
        *(double *)(param_1 + 0x1d8) = dVar20;
        if (dVar21 <= dVar11) {
          dVar21 = dVar11;
        }
        *(double *)(param_1 + 0x1e0) = dVar21;
        if (dVar22 <= dVar12) {
          dVar22 = dVar12;
        }
        *(double *)(param_1 + 0x1e8) = dVar22;
        dVar10 = local_100[7] + dVar8;
        dVar11 = local_100[8] + dVar8;
        dVar12 = local_100[9] + dVar8;
        if (dVar10 <= dVar6) {
          dVar6 = dVar10;
        }
        *(double *)(param_1 + 0x1c0) = dVar6;
        if (dVar11 <= dVar18) {
          dVar18 = dVar11;
        }
        *(double *)(param_1 + 0x1c8) = dVar18;
        if (dVar12 <= dVar19) {
          dVar19 = dVar12;
        }
        *(double *)(param_1 + 0x1d0) = dVar19;
        if (dVar20 <= dVar10) {
          dVar20 = dVar10;
        }
        *(double *)(param_1 + 0x1d8) = dVar20;
        if (dVar21 <= dVar11) {
          dVar21 = dVar11;
        }
        *(double *)(param_1 + 0x1e0) = dVar21;
        if (dVar22 <= dVar12) {
          dVar22 = dVar12;
        }
        *(double *)(param_1 + 0x1e8) = dVar22;
        dVar11 = ABS((double)fVar2 * local_150);
        dVar12 = ABS((double)fVar3 * local_160);
        dVar10 = ABS((double)fVar4 * local_158);
        if (dVar10 <= dVar12) {
          dVar10 = dVar12;
        }
        if (dVar10 <= dVar11) {
          dVar10 = dVar11;
        }
        if ((double)fVar23 <= dVar10) {
          fVar23 = (float)dVar10;
        }
        lVar15 = lVar15 + 1;
      } while (lVar15 < *(int *)(param_1 + 0x18c));
      dVar8 = (double)fVar23;
    }
    *(double *)(param_1 + 0x1c0) = dVar6 - dVar8;
    *(double *)(param_1 + 0x1c8) = dVar18 - dVar8;
    *(double *)(param_1 + 0x1d0) = dVar19 - dVar8;
    *(double *)(param_1 + 0x1d8) = dVar20 + dVar8;
    *(double *)(param_1 + 0x1e0) = dVar21 + dVar8;
    *(double *)(param_1 + 0x1e8) = dVar22 + dVar8;
    *(undefined1 *)(param_1 + 0x1f0) = 1;
  }
  if ((local_f0 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bf79e6 FUN_147bf79e6 body=245 status=ok
// SIG undefined FUN_147bf79e6(void)

void FUN_147bf79e6(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,uint *param_7)

{
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined4 *local_70;
  int *local_68;
  undefined4 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong *local_48;
  undefined8 *local_40;
  longlong local_38;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = *(longlong *)(param_1 + 0x18);
  local_2c = *(int *)(param_1 + 0x194) - *(int *)(param_1 + 0x18c);
  if ((int)param_2 < local_2c) {
    local_2c = (int)param_2;
  }
  local_28 = param_3;
  local_24 = param_4;
  if (((param_7 != (uint *)0x0) && (0 < local_2c)) && ((*param_7 & 8) != 0)) {
    param_2 = param_1;
    (**(code **)(**(longlong **)(local_38 + 0x58) + 0x3a0))(*(longlong **)(local_38 + 0x58),param_1)
    ;
  }
  local_70 = &local_28;
  local_68 = &local_2c;
  local_60 = &local_24;
  local_58 = param_5;
  local_50 = param_6;
  local_48 = &local_38;
  local_40 = &param_7;
  local_78 = param_1;
  FUN_1435c75da(&local_78,
                CONCAT71((int7)((ulonglong)param_2 >> 8),
                         *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x37)) & 0xffffffffffffff01);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bf7adc FUN_147bf7adc body=362 status=ok
// SIG undefined FUN_147bf7adc(void)

void FUN_147bf7adc(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  plVar2 = *(longlong **)(param_1 + 0x280);
  if ((plVar2 != (longlong *)0x0) && ((char)plVar2[5] < '\0')) {
    uVar3 = FUN_147bf6ddc(param_1,plVar2);
    (**(code **)(*plVar2 + 0x2a8))(plVar2,param_1,uVar3,param_4,param_2);
  }
  plVar2 = *(longlong **)(param_1 + 0x298);
  if ((plVar2 != (longlong *)0x0) && ((char)plVar2[5] < '\0')) {
    (**(code **)(*plVar2 + 0x2a8))(plVar2,param_1,*(undefined4 *)(param_1 + 0x2a0),param_4,param_2);
  }
  plVar2 = *(longlong **)(param_1 + 0x288);
  if ((plVar2 != (longlong *)0x0) && ((char)plVar2[5] < '\0')) {
    uVar3 = FUN_147bf6ddc(param_1,plVar2);
    (**(code **)(*plVar2 + 0x2a8))(plVar2,param_1,uVar3,param_4,param_2);
  }
  plVar2 = *(longlong **)(param_1 + 0x2a8);
  if ((plVar2 != (longlong *)0x0) && ((char)plVar2[5] < '\0')) {
    (**(code **)(*plVar2 + 0x2a8))(plVar2,param_1,*(undefined4 *)(param_1 + 0x2b0),param_4,param_2);
  }
  plVar2 = *(longlong **)(param_1 + 0x290);
  if ((plVar2 != (longlong *)0x0) && ((char)plVar2[5] < '\0')) {
    uVar3 = FUN_147bf6ddc(param_1,plVar2);
    (**(code **)(*plVar2 + 0x2a8))(plVar2,param_1,uVar3,param_4,param_2);
  }
  plVar2 = *(longlong **)(lVar1 + 0x48);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x2a8))(plVar2,param_1,*(undefined4 *)(param_1 + 0x24),param_4,param_2);
  }
  FUN_147bf7c46(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 147bf7c46 FUN_147bf7c46 body=351 status=ok
// SIG undefined FUN_147bf7c46(void)

void FUN_147bf7c46(longlong param_1,undefined8 *param_2,float param_3,float param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x30) + 0x71) & 1) == 0) {
    dVar7 = *(double *)(param_1 + 0x50);
    dVar8 = *(double *)(param_1 + 0x48) - *(double *)(param_1 + 0x1a8);
    dVar1 = *(double *)(param_1 + 0x1b0);
    dVar6 = dVar7 - dVar1;
    dVar2 = *(double *)(param_1 + 0x58);
    dVar3 = *(double *)(param_1 + 0x1b8);
    dVar5 = dVar2 - dVar3;
    if (1.0 < dVar5 * dVar5 + dVar6 * dVar6 + dVar8 * dVar8) {
      dVar6 = (double)param_3;
      param_2[3] = (*(double *)(param_1 + 0x1a8) - *(double *)(param_1 + 0x48)) * dVar6 +
                   (double)param_2[3];
      param_2[4] = (dVar1 - dVar7) * dVar6 + (double)param_2[4];
      param_2[5] = (dVar3 - dVar2) * dVar6 + (double)param_2[5];
    }
  }
  param_2[2] = param_2[5];
  *param_2 = param_2[3];
  param_2[1] = param_2[4];
  dVar7 = (double)param_4;
  param_2[3] = (double)*(float *)(param_2 + 8) * dVar7 + (double)param_2[3];
  param_2[4] = (double)*(float *)((longlong)param_2 + 0x44) * dVar7 + (double)param_2[4];
  param_2[5] = (double)*(float *)(param_2 + 9) * dVar7 + (double)param_2[5];
  uVar4 = *(uint *)(param_1 + 400);
  *(uint *)(param_1 + 400) = uVar4 + 1;
  *(uint *)((longlong)param_2 + 0x6c) =
       uVar4 & 0x1ffffff | *(uint *)((longlong)param_2 + 0x6c) | 0x2000000;
  return;
}



// FUNCTION 147bf7da6 FUN_147bf7da6 body=196 status=ok
// SIG undefined FUN_147bf7da6(void)

longlong FUN_147bf7da6(longlong param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  
  if ((*(longlong *)(param_1 + 0x178) != 0) &&
     (lVar2 = *(longlong *)(param_1 + 8), *(int *)(lVar2 + 0xb8) != *(int *)(lVar2 + 0xe4))) {
    uVar3 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    lVar4 = lVar2 + 0xe8;
    if (*(longlong *)(lVar2 + 0xf0) != 0) {
      lVar4 = *(longlong *)(lVar2 + 0xf0);
    }
    iVar5 = *(int *)(lVar4 + (ulonglong)(*(int *)(lVar2 + 0xf8) - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4)
    ;
    if (iVar5 != -1) {
      do {
        puVar1 = (ulonglong *)(*(longlong *)(lVar2 + 0xb0) + (longlong)iVar5 * 0x18);
        if (*puVar1 == param_2) {
          if (puVar1 + 1 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0) {
            return *(longlong *)(param_1 + 0x178) + (ulonglong)(uint)puVar1[1];
          }
          return 0;
        }
        iVar5 = (int)puVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 147bf7e6a FUN_147bf7e6a body=149 status=ok
// SIG undefined FUN_147bf7e6a(void)

undefined8 * FUN_147bf7e6a(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = param_2;
  puVar4 = param_1;
  for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  lVar2 = param_2[10];
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[10];
    }
  }
  bVar1 = DAT_14c950c29;
  param_1[10] = lVar2;
  lVar2 = param_2[0xb];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[0xb];
    }
  }
  param_1[0xb] = lVar2;
  puVar3 = param_2 + 0xc;
  puVar4 = param_1 + 0xc;
  for (lVar2 = 0xf; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined1 *)(param_1 + 0x1b) = *(undefined1 *)(param_2 + 0x1b);
  return param_1;
}



// FUNCTION 147bf7f00 FUN_147bf7f00 body=654 status=ok
// SIG undefined FUN_147bf7f00(void)

void FUN_147bf7f00(longlong param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_118 [32];
  longlong *local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  undefined4 local_4c;
  ulonglong local_48;
  int iVar4;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  iVar6 = *(int *)(*(longlong *)(param_1 + 0x278) + 0x3c);
  iVar6 = iVar6 + (uint)(iVar6 == 0);
  uVar8 = *(uint *)(param_1 + 0x18c);
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar8);
  }
  *(undefined4 *)(param_1 + 0x3b0) = 0;
  iVar5 = 0;
  uVar2 = uVar8;
  if (*(uint *)(param_1 + 0x3b4) != uVar8) {
    FUN_14481578e(param_1 + 0x3a8);
    uVar8 = *(uint *)(param_1 + 0x18c);
    iVar5 = *(int *)(param_1 + 0x3b0);
    uVar2 = *(uint *)(param_1 + 0x3b4);
  }
  *(uint *)(param_1 + 0x3b0) = uVar8 + iVar5;
  if (uVar2 - iVar5 < uVar8) {
    FUN_1446f48e2(param_1 + 0x3a8);
  }
  iVar3 = 0;
  memset((void *)((longlong)iVar5 * 4 + *(longlong *)(param_1 + 0x3a8)),0,(longlong)(int)uVar8 << 2)
  ;
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x18c)) {
    lVar7 = 0;
    iVar5 = 0;
    iVar3 = 0;
    do {
      local_4c = *(undefined4 *)(param_1 + 0x24);
      local_58 = 0;
      local_60 = 0;
      local_68 = 0;
      local_70 = 0;
      local_78 = 0;
      local_80 = 0;
      local_88 = 0;
      local_90 = 0;
      local_98 = 0;
      local_a0 = 0;
      local_b0 = &local_a0;
      local_b8 = &local_98;
      local_c0 = &local_90;
      local_c8 = &local_88;
      local_d0 = &local_80;
      local_d8 = &local_78;
      local_e0 = &local_70;
      local_e8 = &local_68;
      local_f0 = &local_60;
      local_f8 = &local_58;
      (**(code **)(**(longlong **)(param_1 + 0x278) + 0x3e0))
                (*(longlong **)(param_1 + 0x278),param_1,
                 (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x170) + lVar7 * 2) *
                 (longlong)*(int *)(param_1 + 0x188) + *(longlong *)(param_1 + 0x168),&local_4c);
      *(undefined4 *)(*(longlong *)(param_1 + 0x3a8) + lVar7 * 4) = *(undefined4 *)(local_58 + 0xa0)
      ;
      iVar1 = *(int *)(local_58 + 0xa0);
      if (0 < iVar1) {
        iVar4 = iVar3 + -4;
        if (0 < iVar5) {
          iVar4 = iVar3;
        }
        iVar3 = iVar4 + (iVar1 + 4) * iVar6;
        iVar5 = (iVar1 + 2) * iVar6 + iVar5;
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(param_1 + 0x18c));
  }
  *(int *)(param_1 + 0x3a0) = iVar5;
  *(int *)(param_1 + 0x3a4) = iVar3;
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147bf8190 FUN_147bf8190 body=362 status=ok
// SIG undefined FUN_147bf8190(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147bf8190(undefined8 param_1)

{
  uint *puVar1;
  void *_Dst;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_58 [40];
  LARGE_INTEGER local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14caf3aa8 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14caf3ac0);
    if (DAT_14caf3af0 != DAT_14caf3b1c) {
      puVar3 = &DAT_14caf3b20;
      if (DAT_14caf3b28 != (undefined *)0x0) {
        puVar3 = DAT_14caf3b28;
      }
      uVar5 = (uint)param_1;
      uVar2 = *(uint *)(puVar3 + (ulonglong)(DAT_14caf3b30 - 1U & uVar5) * 4);
      while (uVar2 != 0xffffffff) {
        puVar1 = (uint *)(DAT_14caf3ae8 + (longlong)(int)uVar2 * 0x28);
        if (*puVar1 == uVar5) {
          if ((puVar1 + 2 != (uint *)0x0 && puVar1 != (uint *)0x0) &&
             (uVar2 = puVar1[4], uVar2 != 0)) {
            _Dst = *(void **)(puVar1 + 2);
            iVar4 = uVar2 - 1;
            if (iVar4 == 0) {
              uVar2 = 0;
            }
            else {
              iVar6 = 1;
              if (iVar4 < 1) {
                iVar6 = iVar4;
              }
              memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)(uVar2 - iVar6) * 8),
                      (longlong)iVar6 << 3);
              uVar2 = puVar1[4] - 1;
            }
            puVar1[4] = uVar2;
            QueryPerformanceCounter(&local_30);
            *(double *)(puVar1 + 6) = (double)local_30.QuadPart * DAT_14c83f420 + 16777216.0;
            _DAT_14caf3b38 = _DAT_14caf3b38 - uVar5;
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14caf3ac0);
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
          }
          break;
        }
        uVar2 = puVar1[8];
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14caf3ac0);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_14001cc68(param_1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bf8308 FUN_147bf8308 body=84 status=ok
// SIG undefined FUN_147bf8308(void)

undefined8 * FUN_147bf8308(longlong *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x168,0x10);
  FUN_147bf835c(puVar2);
  cVar1 = (**(code **)(*param_1 + 0x218))(param_1,puVar2);
  if (cVar1 == '\0') {
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    puVar2 = (undefined8 *)0x0;
  }
  return puVar2;
}



// FUNCTION 147bf835c FUN_147bf835c body=150 status=ok
// SIG undefined FUN_147bf835c(void)

undefined8 * FUN_147bf835c(undefined8 *param_1)

{
  FUN_147c09012();
  *param_1 = &PTR_FUN_14aa006d0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x21) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x22) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x23) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined2 *)(param_1 + 0x24) = 0;
  *(undefined1 **)((longlong)param_1 + 0x124) = &DAT_100000001;
  *(undefined8 *)((longlong)param_1 + 300) = 0x3f80000000000001;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0x100000000;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x151) = 0;
  return param_1;
}



// FUNCTION 147bf8434 FUN_147bf8434 body=147 status=ok
// SIG undefined FUN_147bf8434(void)

void FUN_147bf8434(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
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
  FUN_140347a44(param_2,0x198);
  FUN_140347a44(param_2,lVar2);
  lVar2 = (longlong)*(int *)(param_1 + 0x194) * 0x50;
  if (*(int *)(param_1 + 0x30) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x194) * 0x10;
  }
  FUN_140347a44(param_2,lVar2);
  return;
}



// FUNCTION 147bf84c8 FUN_147bf84c8 body=422 status=ok
// SIG undefined FUN_147bf84c8(void)

void FUN_147bf84c8(longlong param_1)

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
  cVar1 = FUN_147a774f0(param_1 + 0x60);
  if (cVar1 == '\0') {
    FUN_1446f470e(&local_20,L"DistributionDistance",1);
    local_40 = 0;
    local_48 = 0;
    lVar2 = FUN_147bf866f(param_1,local_20,0,0);
    *(undefined4 *)(lVar2 + 0x38) = 0x41c80000;
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
    *(longlong *)(param_1 + 0x88) = lVar2;
  }
  cVar1 = FUN_147a774f0(param_1 + 0x98);
  if (cVar1 == '\0') {
    FUN_1446f470e(&local_28,L"DistributionTaperFactor",1);
    local_40 = 0;
    local_48 = 0;
    lVar2 = FUN_147bf866f(param_1,local_28,0,0);
    *(undefined4 *)(lVar2 + 0x38) = 0x3f800000;
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
    *(longlong *)(param_1 + 0xc0) = lVar2;
  }
  cVar1 = FUN_147a774f0(param_1 + 200);
  if (cVar1 == '\0') {
    FUN_1446f470e(&local_30,L"DistributionTaperScale",1);
    local_40 = 0;
    local_48 = 0;
    lVar2 = FUN_147bf866f(param_1,local_30,0,0);
    *(undefined4 *)(lVar2 + 0x38) = 0x3f800000;
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
    *(longlong *)(param_1 + 0xf0) = lVar2;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bf866f FUN_147bf866f body=217 status=ok
// SIG undefined FUN_147bf866f(void)

undefined8
FUN_147bf866f(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [8];
  undefined8 local_d0;
  longlong local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong local_98;
  longlong *local_88;
  longlong local_78 [7];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_145a6b3a6();
  FUN_144a5c54a(local_d8,uVar1);
  local_b8 = param_5;
  local_a8 = param_6;
  local_d0 = param_1;
  local_c8 = param_2;
  local_c0 = param_3;
  local_b0 = param_4;
  uVar1 = FUN_1402710dd(local_d8);
  if (local_98 != 0) {
    if (local_88 == (longlong *)0x0) {
      local_88 = local_78;
    }
    (**(code **)(*local_88 + 0x10))();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bf874a FUN_147bf874a body=2550 status=ok
// SIG undefined FUN_147bf874a(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_147bf874a(longlong *param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
                  longlong param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  uint *puVar6;
  double *pdVar7;
  uint uVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  float fVar21;
  undefined1 auStack_1a8 [32];
  double **local_188;
  longlong *local_180;
  longlong *local_178;
  longlong *local_170;
  longlong *local_168;
  longlong *local_160;
  longlong *local_158;
  undefined8 *local_150;
  uint **local_148;
  uint **local_140;
  undefined4 local_134;
  uint *local_130;
  uint *local_128;
  undefined8 local_120;
  longlong local_118 [6];
  double *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  lVar1 = *(longlong *)(param_2 + 0x10);
  local_e8 = (double *)0x0;
  local_118[5] = 0;
  local_178 = local_118 + 4;
  local_118[4] = 0;
  local_170 = local_118 + 3;
  local_118[3] = 0;
  local_168 = local_118 + 2;
  local_118[2] = 0;
  local_160 = local_118 + 1;
  local_118[1] = 0;
  local_158 = local_118;
  local_118[0] = 0;
  local_150 = &local_120;
  local_120 = 0;
  local_148 = &local_128;
  local_128 = (uint *)0x0;
  local_140 = &local_130;
  local_130 = (uint *)0x0;
  local_180 = local_118 + 5;
  local_188 = &local_e8;
  local_134 = param_3;
  (**(code **)(*param_1 + 0x3e0))(param_1,param_2,param_5);
  if (*(longlong *)(param_2 + 0x280) == 0) {
    dVar14 = *(double *)(lVar1 + 0x268);
    dVar12 = *(double *)(lVar1 + 0x270);
    *local_e8 = *(double *)(lVar1 + 0x260);
    local_e8[1] = dVar14;
    local_e8[2] = dVar12;
    dVar13 = *(double *)(lVar1 + 0x280) * 1.0;
    dVar15 = *(double *)(lVar1 + 0x288) * 0.0;
    dVar14 = *(double *)(lVar1 + 0x290) * 0.0;
    dVar17 = *(double *)(lVar1 + 0x240);
    dVar4 = *(double *)(lVar1 + 0x248);
    dVar5 = *(double *)(lVar1 + 0x250);
    dVar12 = *(double *)(lVar1 + 600);
    dVar16 = dVar15 * dVar17 - dVar13 * dVar4;
    dVar18 = dVar14 * dVar4 - dVar15 * dVar5;
    dVar19 = dVar13 * dVar5 - dVar17 * dVar14;
    dVar18 = dVar18 + dVar18;
    dVar19 = dVar19 + dVar19;
    dVar16 = dVar16 + dVar16;
    dVar15 = (dVar5 * dVar18 - dVar17 * dVar16) + *(double *)(lVar1 + 600) * dVar19 + dVar15;
    auVar3._8_4_ = SUB84(dVar15,0);
    auVar3._0_8_ = (dVar16 * dVar4 - dVar19 * dVar5) + dVar12 * dVar18 + dVar13;
    auVar3._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
    *(undefined1 (*) [16])(local_e8 + 3) = auVar3;
    local_e8[5] = dVar16 * dVar12 + dVar14 + (dVar19 * dVar17 - dVar18 * dVar4);
    *(undefined4 *)(local_e8 + 6) = 0x3f800000;
  }
  if ((*(longlong *)(param_2 + 0x288) == 0) && (*(int *)(param_2 + 0x2c0) == 0)) {
    fVar10 = (float)FUN_147a77524(param_1 + 0xc,*(undefined4 *)(param_5 + 0x90),lVar1,0);
    dVar14 = (double)fVar10;
    dVar18 = *(double *)(lVar1 + 0x280) * 1.0;
    dVar20 = *(double *)(lVar1 + 0x288) * 0.0;
    dVar13 = *(double *)(lVar1 + 0x290) * 0.0;
    dVar17 = *(double *)(lVar1 + 0x240);
    dVar4 = *(double *)(lVar1 + 0x248);
    dVar5 = *(double *)(lVar1 + 0x250);
    dVar12 = *(double *)(lVar1 + 600);
    dVar16 = dVar20 * dVar17 - dVar18 * dVar4;
    dVar19 = dVar13 * dVar4 - dVar20 * dVar5;
    dVar15 = dVar18 * dVar5 - dVar17 * dVar13;
    dVar19 = dVar19 + dVar19;
    dVar15 = dVar15 + dVar15;
    dVar16 = dVar16 + dVar16;
    dVar13 = dVar16 * dVar12 + dVar13 + (dVar15 * dVar17 - dVar19 * dVar4);
    dVar12 = (dVar16 * dVar4 - dVar15 * dVar5) + dVar12 * dVar19 + dVar18;
    dVar16 = (dVar5 * dVar19 - dVar17 * dVar16) + *(double *)(lVar1 + 600) * dVar15 + dVar20;
    dVar19 = dVar13 * dVar13 + dVar12 * dVar12 + dVar16 * dVar16;
    if (9.99999993922529e-09 < dVar19) {
      dVar19 = 1.0 / SQRT(dVar19);
      dVar12 = dVar12 * dVar19;
      dVar16 = dVar16 * dVar19;
      dVar13 = dVar13 * dVar19;
    }
    local_e8[7] = dVar14 * dVar12 + *local_e8;
    local_e8[8] = dVar16 * dVar14 + local_e8[1];
    local_e8[9] = dVar13 * dVar14 + local_e8[2];
    local_e8[10] = -dVar12;
    local_e8[0xb] = -dVar16;
    local_e8[0xc] = -dVar13;
    *(undefined4 *)(local_e8 + 0xd) = 0x3f800000;
  }
  pdVar7 = local_e8;
  puVar6 = local_128;
  if (local_128 != (uint *)0x0) {
    uVar8 = *local_128;
    if ((uVar8 & 1) != 0) {
      if ((uVar8 & 2) == 0) {
        *local_e8 = *(double *)(local_128 + 2) + *local_e8;
        local_e8[1] = *(double *)(local_128 + 4) + local_e8[1];
        dVar12 = *(double *)(local_128 + 6) + local_e8[2];
      }
      else {
        *local_e8 = *(double *)(local_128 + 2) * *local_e8;
        local_e8[1] = *(double *)(local_128 + 4) * local_e8[1];
        dVar12 = *(double *)(local_128 + 6) * local_e8[2];
      }
      local_e8[2] = dVar12;
      uVar8 = *local_128;
    }
    if (*(longlong *)(param_2 + 0x298) == 0) {
      if ((uVar8 & 4) != 0) {
LAB_147bf8a89:
        local_e0 = 0x3ff0000000000000;
        local_d8 = 0;
        uStack_d0 = 0;
        FUN_144a9d448(&local_c8,&local_e0,local_e8 + 3);
        dVar12 = *(double *)(puVar6 + 8);
        dVar14 = *(double *)(puVar6 + 10);
        dVar16 = *(double *)(puVar6 + 0xc);
        dVar19 = local_c0 * dVar16 - dVar14 * local_b8;
        dVar19 = dVar19 + dVar19;
        dVar15 = local_c8 * dVar14 - dVar12 * local_c0;
        dVar15 = dVar15 + dVar15;
        dVar17 = local_b8 * dVar12 - dVar16 * local_c8;
        dVar17 = dVar17 + dVar17;
        dVar16 = (local_c8 * dVar17 - dVar19 * local_c0) + local_b0 * dVar15 + dVar16;
        dVar14 = (local_b8 * dVar19 - dVar15 * local_c8) + local_b0 * dVar17 + dVar14;
        dVar12 = (local_c0 * dVar15 - dVar17 * local_b8) + dVar19 * local_b0 + dVar12;
        uVar8 = *puVar6;
        goto LAB_147bf8b91;
      }
    }
    else if ((uVar8 & 4) != 0) {
      if ((*(byte *)(*(longlong *)(param_2 + 0x298) + 0x100) & 1) == 0) goto LAB_147bf8a89;
      dVar12 = *(double *)(local_128 + 8);
      dVar14 = *(double *)(local_128 + 10);
      dVar16 = *(double *)(local_128 + 0xc);
LAB_147bf8b91:
      if ((uVar8 & 8) == 0) {
        dVar12 = dVar12 + pdVar7[3];
        dVar14 = dVar14 + pdVar7[4];
        dVar16 = dVar16 + pdVar7[5];
      }
      else {
        dVar12 = dVar12 * pdVar7[3];
        dVar14 = dVar14 * pdVar7[4];
        dVar16 = dVar16 * pdVar7[5];
      }
      pdVar7[3] = dVar12;
      pdVar7[4] = dVar14;
      pdVar7[5] = dVar16;
      uVar8 = *local_128;
    }
    if ((uVar8 & 0x10) != 0) {
      if ((uVar8 & 0x20) == 0) {
        fVar10 = (float)local_128[0xe] + *(float *)(local_e8 + 6);
      }
      else {
        fVar10 = (float)local_128[0xe] * *(float *)(local_e8 + 6);
      }
      *(float *)(local_e8 + 6) = fVar10;
    }
  }
  pdVar7 = local_e8;
  puVar6 = local_130;
  if (local_130 != (uint *)0x0) {
    uVar8 = *local_130;
    if ((uVar8 & 1) != 0) {
      if ((uVar8 & 2) == 0) {
        local_e8[7] = *(double *)(local_130 + 2) + local_e8[7];
        local_e8[8] = *(double *)(local_130 + 4) + local_e8[8];
        dVar12 = *(double *)(local_130 + 6) + local_e8[9];
      }
      else {
        local_e8[7] = *(double *)(local_130 + 2) * local_e8[7];
        local_e8[8] = *(double *)(local_130 + 4) * local_e8[8];
        dVar12 = *(double *)(local_130 + 6) * local_e8[9];
      }
      local_e8[9] = dVar12;
      uVar8 = *local_130;
    }
    if (*(longlong *)(param_2 + 0x2a8) == 0) {
      if ((uVar8 & 4) != 0) {
LAB_147bf8cd8:
        local_e0 = 0x3ff0000000000000;
        local_d8 = 0;
        uStack_d0 = 0;
        FUN_144a9d448(&local_c8,&local_e0,local_e8 + 10);
        dVar12 = *(double *)(puVar6 + 8);
        dVar14 = *(double *)(puVar6 + 10);
        dVar16 = *(double *)(puVar6 + 0xc);
        dVar19 = local_c0 * dVar16 - dVar14 * local_b8;
        dVar19 = dVar19 + dVar19;
        dVar15 = local_c8 * dVar14 - dVar12 * local_c0;
        dVar15 = dVar15 + dVar15;
        dVar17 = local_b8 * dVar12 - dVar16 * local_c8;
        dVar17 = dVar17 + dVar17;
        dVar16 = (local_c8 * dVar17 - dVar19 * local_c0) + local_b0 * dVar15 + dVar16;
        dVar14 = (local_b8 * dVar19 - dVar15 * local_c8) + local_b0 * dVar17 + dVar14;
        dVar12 = (local_c0 * dVar15 - dVar17 * local_b8) + dVar19 * local_b0 + dVar12;
        uVar8 = *puVar6;
        goto LAB_147bf8de0;
      }
    }
    else if ((uVar8 & 4) != 0) {
      if ((*(byte *)(*(longlong *)(param_2 + 0x2a8) + 0x100) & 1) == 0) goto LAB_147bf8cd8;
      dVar12 = *(double *)(local_130 + 8);
      dVar14 = *(double *)(local_130 + 10);
      dVar16 = *(double *)(local_130 + 0xc);
LAB_147bf8de0:
      if ((uVar8 & 8) == 0) {
        dVar12 = dVar12 + pdVar7[10];
        dVar14 = dVar14 + pdVar7[0xb];
        dVar16 = dVar16 + pdVar7[0xc];
      }
      else {
        dVar12 = dVar12 * pdVar7[10];
        dVar14 = dVar14 * pdVar7[0xb];
        dVar16 = dVar16 * pdVar7[0xc];
      }
      pdVar7[10] = dVar12;
      pdVar7[0xb] = dVar14;
      pdVar7[0xc] = dVar16;
      uVar8 = *local_130;
    }
    if ((uVar8 & 0x10) != 0) {
      if ((uVar8 & 0x20) == 0) {
        fVar10 = (float)local_130[0xe] + *(float *)(local_e8 + 0xd);
      }
      else {
        fVar10 = (float)local_130[0xe] * *(float *)(local_e8 + 0xd);
      }
      *(float *)(local_e8 + 0xd) = fVar10;
    }
  }
  if ((char)param_1[0x12] == '\0') goto LAB_147bf8f02;
  lVar2 = *(longlong *)(param_2 + 0x290);
  if ((lVar2 == 0) || ((*(byte *)(lVar2 + 0x30) & 1) == 0)) {
    if ((int)param_1[9] != 0) {
      uVar8 = (int)param_1[9] + 1;
      goto LAB_147bf8e86;
    }
    uVar8 = 2;
    fVar10 = 1.0;
  }
  else {
    uVar8 = (*(int *)(lVar2 + 0x180) + (uint)(*(int *)(lVar2 + 0x180) == 0)) *
            ((*(uint *)((longlong)local_e8 + 0x6c) >> 0xc & 0xfff) + 1);
LAB_147bf8e86:
    if ((int)uVar8 < 1) goto LAB_147bf8f02;
    fVar10 = 1.0 / (float)(int)(uVar8 - 1);
  }
  uVar9 = 0;
  do {
    fVar21 = (float)(int)uVar9 * fVar10;
    fVar11 = (float)FUN_147a77524(param_1 + 0x13,fVar21,lVar1,0);
    fVar21 = (float)FUN_147a77524(param_1 + 0x19,fVar21,lVar1);
    *(float *)(local_118[0] + uVar9 * 4) = fVar21 * fVar11;
    uVar9 = uVar9 + 1;
  } while (uVar8 != uVar9);
LAB_147bf8f02:
  if ((local_a0 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bf9142 FUN_147bf9142 body=5884 status=ok
// SIG undefined FUN_147bf9142(void)

void FUN_147bf9142(longlong *param_1,longlong param_2,undefined4 param_3,float param_4)

{
  longlong lVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  uint *puVar8;
  double *pdVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  byte bVar16;
  longlong lVar17;
  uint uVar18;
  int iVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  uint uVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  undefined1 auStack_268 [32];
  double **local_248;
  longlong *local_240;
  undefined8 *local_238;
  undefined8 *local_230;
  undefined8 *local_228;
  undefined8 *local_220;
  undefined8 *local_218;
  undefined4 **local_210;
  uint **local_208;
  uint **local_200;
  bool local_1f2;
  bool local_1f1;
  longlong local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  int local_1d8;
  undefined4 local_1d4;
  longlong *local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  undefined4 local_184;
  uint *local_180;
  uint *local_178;
  undefined4 *local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  longlong local_140;
  double *local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_268;
  if (*(longlong *)(param_2 + 0x288) == 0) {
    dVar6 = 1.0;
  }
  else {
    dVar6 = (double)*(float *)(*(longlong *)(param_2 + 0x288) + 0x144);
  }
  local_1f1 = true;
  local_1f2 = true;
  if (*(longlong *)(param_2 + 0x298) != 0) {
    local_1f2 = (*(byte *)(*(longlong *)(param_2 + 0x298) + 0x100) & 1) == 0;
  }
  if (*(longlong *)(param_2 + 0x2a8) != 0) {
    local_1f1 = (*(byte *)(*(longlong *)(param_2 + 0x2a8) + 0x100) & 1) == 0;
  }
  local_1d4 = param_3;
  if (0 < (longlong)*(int *)(param_2 + 0x18c)) {
    lVar1 = *(longlong *)(param_2 + 0x10);
    local_1f0 = *(longlong *)(param_2 + 0x290);
    lVar21 = *(longlong *)(param_2 + 0x168);
    lVar17 = *(longlong *)(param_2 + 0x170);
    iVar12 = *(int *)(param_2 + 0x188);
    local_1c8 = (double)param_4;
    local_1d0 = param_1 + 0xc;
    lVar22 = (longlong)*(int *)(param_2 + 0x18c);
    local_1e8 = lVar17;
    local_1e0 = lVar21;
    local_1d8 = iVar12;
    local_1c0 = dVar6;
    do {
      uVar20 = (ulonglong)((uint)*(ushort *)(lVar17 + -2 + lVar22 * 2) * iVar12);
      if ((*(byte *)(lVar21 + 0x6f + uVar20) & 4) == 0) {
        lVar21 = uVar20 + lVar21;
        local_138 = (double *)0x0;
        local_140 = 0;
        local_148 = 0;
        local_150 = 0;
        local_158 = 0;
        local_160 = 0;
        local_168 = 0;
        local_170 = (undefined4 *)0x0;
        local_178 = (uint *)0x0;
        local_180 = (uint *)0x0;
        local_184 = local_1d4;
        local_200 = &local_180;
        local_208 = &local_178;
        local_210 = &local_170;
        local_218 = &local_168;
        local_220 = &local_160;
        local_228 = &local_158;
        local_230 = &local_150;
        local_238 = &local_148;
        local_240 = &local_140;
        local_248 = &local_138;
        (**(code **)(*param_1 + 0x3e0))(param_1,param_2,lVar21,&local_184);
        if (*(longlong *)(param_2 + 0x280) == 0) {
          dVar27 = *(double *)(lVar1 + 0x268);
          dVar30 = *(double *)(lVar1 + 0x270);
          *local_138 = *(double *)(lVar1 + 0x260);
          local_138[1] = dVar27;
          local_138[2] = dVar30;
          dVar35 = *(double *)(lVar1 + 0x280) * 1.0;
          dVar36 = *(double *)(lVar1 + 0x288) * 0.0;
          dVar27 = *(double *)(lVar1 + 0x290) * 0.0;
          dVar29 = *(double *)(lVar1 + 0x240);
          dVar33 = *(double *)(lVar1 + 0x248);
          dVar34 = *(double *)(lVar1 + 0x250);
          dVar30 = *(double *)(lVar1 + 600);
          dVar28 = dVar36 * dVar29 - dVar35 * dVar33;
          dVar31 = dVar27 * dVar33 - dVar36 * dVar34;
          dVar32 = dVar35 * dVar34 - dVar29 * dVar27;
          dVar31 = dVar31 + dVar31;
          dVar32 = dVar32 + dVar32;
          dVar28 = dVar28 + dVar28;
          dVar36 = (dVar34 * dVar31 - dVar29 * dVar28) + *(double *)(lVar1 + 600) * dVar32 + dVar36;
          auVar4._8_4_ = SUB84(dVar36,0);
          auVar4._0_8_ = (dVar28 * dVar33 - dVar32 * dVar34) + dVar30 * dVar31 + dVar35;
          auVar4._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
          *(undefined1 (*) [16])(local_138 + 3) = auVar4;
          local_138[5] = dVar28 * dVar30 + dVar27 + (dVar32 * dVar29 - dVar31 * dVar33);
        }
        if ((*(longlong *)(param_2 + 0x288) == 0) && (*(int *)(param_2 + 0x2c0) == 0)) {
          fVar24 = (float)FUN_147a77524(local_1d0,*(undefined4 *)(lVar21 + 0x90),lVar1,0);
          dVar34 = *(double *)(lVar1 + 0x280) * 1.0;
          dVar31 = *(double *)(lVar1 + 0x288) * 0.0;
          dVar35 = *(double *)(lVar1 + 0x290) * 0.0;
          dVar32 = *(double *)(lVar1 + 0x240);
          dVar29 = *(double *)(lVar1 + 0x248);
          dVar33 = *(double *)(lVar1 + 0x250);
          dVar30 = *(double *)(lVar1 + 600);
          dVar27 = dVar31 * dVar32 - dVar34 * dVar29;
          dVar36 = dVar35 * dVar29 - dVar31 * dVar33;
          dVar28 = dVar34 * dVar33 - dVar32 * dVar35;
          dVar36 = dVar36 + dVar36;
          dVar28 = dVar28 + dVar28;
          dVar27 = dVar27 + dVar27;
          dVar35 = dVar27 * dVar30 + dVar35 + (dVar28 * dVar32 - dVar36 * dVar29);
          dVar30 = (dVar27 * dVar29 - dVar28 * dVar33) + dVar30 * dVar36 + dVar34;
          dVar27 = (dVar33 * dVar36 - dVar32 * dVar27) + *(double *)(lVar1 + 600) * dVar28 + dVar31;
          dVar36 = dVar35 * dVar35 + dVar30 * dVar30 + dVar27 * dVar27;
          if (9.99999993922529e-09 < dVar36) {
            dVar36 = 1.0 / SQRT(dVar36);
            dVar30 = dVar30 * dVar36;
            dVar27 = dVar27 * dVar36;
            dVar35 = dVar35 * dVar36;
          }
          dVar36 = (double)fVar24;
          local_138[7] = dVar36 * dVar30 + *local_138;
          local_138[8] = dVar27 * dVar36 + local_138[1];
          local_138[9] = dVar35 * dVar36 + local_138[2];
          auVar3._8_4_ = SUB84(dVar27,0);
          auVar3._0_8_ = -dVar30;
          auVar3._12_4_ = (uint)((ulonglong)dVar27 >> 0x20) ^ 0x80000000;
          *(undefined1 (*) [16])(local_138 + 10) = auVar3;
          local_138[0xc] = -dVar35;
        }
        pdVar9 = local_138;
        puVar8 = local_178;
        if (local_178 != (uint *)0x0) {
          uVar23 = *local_178;
          if ((uVar23 & 1) != 0) {
            if ((uVar23 & 2) == 0) {
              *local_138 = *(double *)(local_178 + 2) + *local_138;
              local_138[1] = *(double *)(local_178 + 4) + local_138[1];
              dVar30 = *(double *)(local_178 + 6) + local_138[2];
            }
            else {
              *local_138 = *(double *)(local_178 + 2) * *local_138;
              local_138[1] = *(double *)(local_178 + 4) * local_138[1];
              dVar30 = *(double *)(local_178 + 6) * local_138[2];
            }
            local_138[2] = dVar30;
            uVar23 = *local_178;
          }
          if ((uVar23 & 4) != 0) {
            if (local_1f2 == false) {
              dVar30 = *(double *)(local_178 + 8);
              dVar27 = *(double *)(local_178 + 10);
              dVar35 = *(double *)(local_178 + 0xc);
            }
            else {
              local_130 = 0x3ff0000000000000;
              local_128 = 0;
              uStack_120 = 0;
              FUN_144a9d448(&local_118,&local_130,local_138 + 3);
              dVar30 = *(double *)(puVar8 + 8);
              dVar27 = *(double *)(puVar8 + 10);
              dVar35 = *(double *)(puVar8 + 0xc);
              dVar36 = local_110 * dVar35 - dVar27 * local_108;
              dVar36 = dVar36 + dVar36;
              dVar28 = local_118 * dVar27 - dVar30 * local_110;
              dVar28 = dVar28 + dVar28;
              dVar32 = local_108 * dVar30 - dVar35 * local_118;
              dVar32 = dVar32 + dVar32;
              dVar35 = (local_118 * dVar32 - dVar36 * local_110) + local_100 * dVar28 + dVar35;
              dVar27 = (local_108 * dVar36 - dVar28 * local_118) + local_100 * dVar32 + dVar27;
              dVar30 = (local_110 * dVar28 - dVar32 * local_108) + dVar36 * local_100 + dVar30;
              uVar23 = *puVar8;
            }
            if ((uVar23 & 8) == 0) {
              dVar30 = dVar30 + pdVar9[3];
              dVar27 = dVar27 + pdVar9[4];
              dVar35 = dVar35 + pdVar9[5];
            }
            else {
              dVar30 = dVar30 * pdVar9[3];
              dVar27 = dVar27 * pdVar9[4];
              dVar35 = dVar35 * pdVar9[5];
            }
            pdVar9[3] = dVar30;
            pdVar9[4] = dVar27;
            pdVar9[5] = dVar35;
            uVar23 = *local_178;
          }
          if ((uVar23 & 0x10) != 0) {
            if ((uVar23 & 0x20) == 0) {
              fVar24 = (float)local_178[0xe] + *(float *)(local_138 + 6);
            }
            else {
              fVar24 = (float)local_178[0xe] * *(float *)(local_138 + 6);
            }
            *(float *)(local_138 + 6) = fVar24;
          }
        }
        pdVar9 = local_138;
        puVar8 = local_180;
        if (local_180 != (uint *)0x0) {
          uVar23 = *local_180;
          if ((uVar23 & 1) != 0) {
            if ((uVar23 & 2) == 0) {
              local_138[7] = *(double *)(local_180 + 2) + local_138[7];
              local_138[8] = *(double *)(local_180 + 4) + local_138[8];
              dVar30 = *(double *)(local_180 + 6) + local_138[9];
            }
            else {
              local_138[7] = *(double *)(local_180 + 2) * local_138[7];
              local_138[8] = *(double *)(local_180 + 4) * local_138[8];
              dVar30 = *(double *)(local_180 + 6) * local_138[9];
            }
            local_138[9] = dVar30;
            uVar23 = *local_180;
          }
          if ((uVar23 & 4) != 0) {
            if (local_1f1 == false) {
              dVar30 = *(double *)(local_180 + 8);
              dVar27 = *(double *)(local_180 + 10);
              dVar35 = *(double *)(local_180 + 0xc);
            }
            else {
              local_130 = 0x3ff0000000000000;
              local_128 = 0;
              uStack_120 = 0;
              FUN_144a9d448(&local_118,&local_130,local_138 + 10);
              dVar30 = *(double *)(puVar8 + 8);
              dVar27 = *(double *)(puVar8 + 10);
              dVar35 = *(double *)(puVar8 + 0xc);
              dVar36 = local_110 * dVar35 - dVar27 * local_108;
              dVar36 = dVar36 + dVar36;
              dVar28 = local_118 * dVar27 - dVar30 * local_110;
              dVar28 = dVar28 + dVar28;
              dVar32 = local_108 * dVar30 - dVar35 * local_118;
              dVar32 = dVar32 + dVar32;
              dVar35 = (local_118 * dVar32 - dVar36 * local_110) + local_100 * dVar28 + dVar35;
              dVar27 = (local_108 * dVar36 - dVar28 * local_118) + local_100 * dVar32 + dVar27;
              dVar30 = (local_110 * dVar28 - dVar32 * local_108) + dVar36 * local_100 + dVar30;
              uVar23 = *puVar8;
            }
            if ((uVar23 & 8) == 0) {
              dVar30 = dVar30 + pdVar9[10];
              dVar27 = dVar27 + pdVar9[0xb];
              dVar35 = dVar35 + pdVar9[0xc];
            }
            else {
              dVar30 = dVar30 * pdVar9[10];
              dVar27 = dVar27 * pdVar9[0xb];
              dVar35 = dVar35 * pdVar9[0xc];
            }
            pdVar9[10] = dVar30;
            pdVar9[0xb] = dVar27;
            pdVar9[0xc] = dVar35;
            uVar23 = *local_180;
          }
          if ((uVar23 & 0x10) != 0) {
            if ((uVar23 & 0x20) == 0) {
              fVar24 = (float)local_180[0xe] + *(float *)(local_138 + 0xd);
            }
            else {
              fVar24 = (float)local_180[0xe] * *(float *)(local_138 + 0xd);
            }
            *(float *)(local_138 + 0xd) = fVar24;
          }
        }
        uVar23 = (int)param_1[9] + (uint)((int)param_1[9] == 0);
        if (local_1f0 == 0) {
          bVar16 = 0;
        }
        else {
          bVar16 = *(byte *)(local_1f0 + 0x30) & 1;
        }
        fVar24 = *(float *)((longlong)param_1 + 0x44);
        if (((fVar24 == 0.0) && (!NAN(fVar24))) || (*(int *)((longlong)local_138 + 0x6c) < 0)) {
          *(double *)(lVar21 + 0x28) = local_138[9];
          dVar30 = local_138[8];
          *(double *)(lVar21 + 0x18) = local_138[7];
          *(double *)(lVar21 + 0x20) = dVar30;
          *(byte *)((longlong)local_138 + 0x6f) = *(byte *)((longlong)local_138 + 0x6f) | 0x80;
        }
        else {
          dVar30 = *(double *)(lVar21 + 0x18);
          dVar27 = local_138[7];
          if ((dVar30 != dVar27) || (NAN(dVar30) || NAN(dVar27))) {
            dVar35 = local_138[8];
            uVar25 = (undefined4)*(undefined8 *)(lVar21 + 0x20);
            uVar26 = (undefined4)((ulonglong)*(undefined8 *)(lVar21 + 0x20) >> 0x20);
          }
          else {
            dVar36 = *(double *)(lVar21 + 0x20);
            uVar25 = SUB84(dVar36,0);
            uVar26 = (undefined4)((ulonglong)dVar36 >> 0x20);
            dVar35 = local_138[8];
            if ((dVar36 == dVar35) && (!NAN(dVar36) && !NAN(dVar35))) {
              if ((*(double *)(lVar21 + 0x28) == local_138[9]) &&
                 (!NAN(*(double *)(lVar21 + 0x28)) && !NAN(local_138[9]))) goto LAB_147bf9b23;
            }
          }
          dVar29 = local_138[9] - *(double *)(lVar21 + 0x28);
          dVar32 = dVar35 - (double)CONCAT44(uVar26,uVar25);
          dVar36 = dVar27 - dVar30;
          dVar28 = dVar29 * dVar29 + dVar36 * dVar36 + dVar32 * dVar32;
          if (9.99999993922529e-09 < dVar28) {
            dVar28 = 1.0 / SQRT(dVar28);
            dVar36 = dVar36 * dVar28;
            dVar32 = dVar32 * dVar28;
            dVar29 = dVar29 * dVar28;
          }
          dVar33 = (double)fVar24;
          dVar29 = *(double *)(lVar21 + 0x28) + dVar29 * dVar33 * local_1c8;
          dVar28 = (double)CONCAT44(uVar26,uVar25) + dVar32 * dVar33 * local_1c8;
          dVar30 = dVar30 + dVar36 * dVar33 * local_1c8;
          if (((dVar6 <= ABS(dVar30 - dVar27)) || (dVar6 <= ABS(dVar28 - dVar35))) ||
             (dVar6 <= ABS(dVar29 - local_138[9]))) {
            *(double *)(lVar21 + 0x18) = dVar30;
            *(double *)(lVar21 + 0x20) = dVar28;
            *(double *)(lVar21 + 0x28) = dVar29;
          }
          else {
            *(double *)(lVar21 + 0x28) = local_138[9];
            dVar30 = local_138[8];
            *(double *)(lVar21 + 0x18) = local_138[7];
            *(double *)(lVar21 + 0x20) = dVar30;
            *(byte *)((longlong)local_138 + 0x6f) = *(byte *)((longlong)local_138 + 0x6f) | 0x80;
          }
        }
LAB_147bf9b23:
        dVar30 = local_138[2];
        dVar33 = local_138[9] - dVar30;
        dVar27 = *local_138;
        dVar35 = local_138[1];
        dVar34 = local_138[8] - dVar35;
        dVar36 = local_138[7] - dVar27;
        local_138[0xf] = dVar36;
        local_138[0x10] = dVar34;
        local_138[0x11] = dVar33;
        dVar32 = dVar33 * dVar33 + dVar36 * dVar36 + dVar34 * dVar34;
        dVar28 = SQRT(dVar32);
        dVar29 = dVar28;
        if (dVar28 <= 0.001) {
          dVar29 = 0.001;
        }
        if (9.99999993922529e-09 < dVar32) {
          dVar28 = 1.0 / dVar28;
          local_138[0xf] = dVar36 * dVar28;
          local_138[0x10] = dVar34 * dVar28;
          local_138[0x11] = dVar33 * dVar28;
        }
        uVar18 = *(uint *)((longlong)local_138 + 0x6c);
        if (bVar16 == 0) {
          if ((int)uVar18 < 0) {
LAB_147bf9d5c:
            local_138[0x12] = dVar29 / (double)(int)uVar23;
            *(uint *)(local_138 + 0x13) = uVar23;
            *(undefined4 *)((longlong)local_138 + 0x9c) = 0;
          }
          else {
            dVar30 = *(double *)(lVar21 + 0x28) - dVar30;
            dVar35 = *(double *)(lVar21 + 0x20) - dVar35;
            dVar27 = *(double *)(lVar21 + 0x18) - dVar27;
            dVar30 = SQRT(dVar30 * dVar30 + dVar27 * dVar27 + dVar35 * dVar35);
            if (dVar29 < dVar30) {
              *(double *)(lVar21 + 0x28) = local_138[9];
              dVar30 = local_138[8];
              *(double *)(lVar21 + 0x18) = local_138[7];
              *(double *)(lVar21 + 0x20) = dVar30;
              *(byte *)((longlong)local_138 + 0x6f) = *(byte *)((longlong)local_138 + 0x6f) | 0x80;
              goto LAB_147bf9d5c;
            }
            dVar27 = dVar29 / (double)(int)uVar23;
            local_138[0x12] = dVar27;
            fVar24 = (float)(int)uVar23 * (float)(dVar30 / dVar29);
            uVar23 = (int)ROUND(fVar24 + fVar24 + -0.5) >> 1;
            *(uint *)(local_138 + 0x13) = uVar23;
            *(float *)((longlong)local_138 + 0x9c) =
                 (float)((dVar30 - (double)(int)uVar23 * dVar27) / dVar27);
          }
          if ((int)param_1[9] < 1) {
            *(undefined4 *)(local_138 + 0xe) = 0;
            *(undefined4 *)(local_138 + 0x14) = 2;
            lVar17 = local_1e8;
            lVar21 = local_1e0;
            iVar12 = local_1d8;
            goto LAB_147bfa57c;
          }
        }
        else {
          uVar15 = uVar18 >> 0xc & 0xfff;
          if ((int)uVar18 < 0) {
            if (*(float *)(local_1f0 + 0x188) <= 0.0) {
              local_138[0x12] = dVar29 / (double)(uVar15 + 1);
              *(uint *)(local_138 + 0x13) = uVar15;
              *(undefined4 *)((longlong)local_138 + 0x9c) = 0;
              goto LAB_147bf9fbf;
            }
            uVar18 = (uint)(longlong)(dVar29 / (double)*(float *)(local_1f0 + 0x188));
            if ((int)uVar15 <= (int)uVar18) {
              uVar18 = uVar15;
            }
            local_138[0x12] = dVar29 / (double)(int)(uVar18 + 1);
            *(uint *)(local_138 + 0x13) = uVar18;
            *(undefined4 *)((longlong)local_138 + 0x9c) = 0;
            if (local_170 != (undefined4 *)0x0) {
              uVar25 = FUN_147a77524(local_1f0 + 400,(float)(int)uVar18 / (float)uVar15,0,0);
              *local_170 = uVar25;
            }
          }
          else {
            dVar30 = *(double *)(lVar21 + 0x28) - dVar30;
            dVar35 = *(double *)(lVar21 + 0x20) - dVar35;
            dVar27 = *(double *)(lVar21 + 0x18) - dVar27;
            dVar30 = SQRT(dVar30 * dVar30 + dVar27 * dVar27 + dVar35 * dVar35);
            if (*(float *)(local_1f0 + 0x188) <= 0.0) {
              dVar27 = dVar29 / (double)(uVar15 + 1);
              local_138[0x12] = dVar27;
              fVar24 = (float)(uVar15 + 1) * (float)(dVar30 / dVar29);
              uVar11 = (int)ROUND(fVar24 + fVar24 + -0.5) >> 1;
              uVar18 = uVar11;
              if ((int)uVar15 <= (int)uVar11) {
                uVar18 = uVar15;
              }
              *(float *)((longlong)local_138 + 0x9c) = (float)(dVar30 / dVar29);
              *(uint *)(local_138 + 0x13) = uVar18;
              dVar35 = -dVar27 * (double)(int)uVar18;
              if ((int)uVar11 < (int)uVar15) {
                dVar27 = (dVar35 + dVar30) / dVar27;
              }
              else {
                dVar27 = (dVar30 + dVar35) / (dVar35 + dVar29);
              }
              *(float *)((longlong)local_138 + 0x9c) = (float)dVar27;
            }
            else {
              uVar18 = (uint)(longlong)(dVar29 / (double)*(float *)(local_1f0 + 0x188));
              if ((int)uVar15 <= (int)uVar18) {
                uVar18 = uVar15;
              }
              dVar27 = dVar29 / (double)(int)(uVar18 + 1);
              local_138[0x12] = dVar27;
              fVar24 = (float)(int)(uVar18 + 1) * (float)(dVar30 / dVar29);
              uVar10 = (int)ROUND(fVar24 + fVar24 + -0.5) >> 1;
              uVar11 = uVar10;
              if ((int)uVar18 <= (int)uVar10) {
                uVar11 = uVar18;
              }
              *(uint *)(local_138 + 0x13) = uVar11;
              dVar35 = -dVar27;
              if ((int)uVar18 <= (int)uVar10) {
                dVar27 = dVar29 + dVar35 * (double)(int)uVar11;
              }
              *(float *)((longlong)local_138 + 0x9c) =
                   (float)((dVar35 * (double)(int)uVar11 + dVar30) / dVar27);
              if (local_170 == (undefined4 *)0x0) goto LAB_147bf9fd2;
              uVar25 = FUN_147a77524(local_1f0 + 400,(float)(int)uVar18 / (float)uVar15,0,0);
              *local_170 = uVar25;
            }
LAB_147bf9fbf:
            if (local_170 != (undefined4 *)0x0) {
              *local_170 = 0x3f800000;
            }
          }
LAB_147bf9fd2:
          if ((int)param_1[9] < 1) {
            *(undefined4 *)(local_138 + 0xe) = 0;
            iVar14 = *(int *)(local_1f0 + 0x180) + (uint)(*(int *)(local_1f0 + 0x180) == 0);
            iVar13 = *(int *)(local_138 + 0x13) * iVar14;
            *(int *)(local_138 + 0x14) = iVar13 * 2;
            lVar17 = local_1e8;
            lVar21 = local_1e0;
            iVar12 = local_1d8;
            if (*(int *)((longlong)local_138 + 0x6c) < 0) {
              *(int *)(local_138 + 0x14) = (iVar13 + iVar14) * 2;
            }
            goto LAB_147bfa57c;
          }
        }
        *(uint *)(local_138 + 0xe) = uVar23;
        dVar27 = local_138[3];
        dVar6 = local_138[5];
        dVar30 = local_138[4];
        if (((ABS(dVar27) <= 9.999999747378752e-05) && (ABS(dVar30) <= 9.999999747378752e-05)) &&
           (ABS(dVar6) <= 9.999999747378752e-05)) {
          dVar29 = *(double *)(lVar1 + 0x280) * 1.0;
          dVar33 = *(double *)(lVar1 + 0x288) * 0.0;
          dVar6 = *(double *)(lVar1 + 0x290) * 0.0;
          dVar28 = *(double *)(lVar1 + 0x240);
          dVar27 = *(double *)(lVar1 + 0x248);
          dVar32 = *(double *)(lVar1 + 0x250);
          dVar30 = *(double *)(lVar1 + 600);
          dVar35 = dVar33 * dVar28 - dVar29 * dVar27;
          dVar34 = dVar6 * dVar27 - dVar33 * dVar32;
          dVar36 = dVar29 * dVar32 - dVar28 * dVar6;
          dVar34 = dVar34 + dVar34;
          dVar36 = dVar36 + dVar36;
          dVar35 = dVar35 + dVar35;
          dVar6 = dVar35 * dVar30 + dVar6 + (dVar36 * dVar28 - dVar34 * dVar27);
          dVar27 = (dVar35 * dVar27 - dVar36 * dVar32) + dVar30 * dVar34 + dVar29;
          dVar30 = (dVar32 * dVar34 - dVar28 * dVar35) + *(double *)(lVar1 + 600) * dVar36 + dVar33;
        }
        dVar28 = local_138[10];
        dVar35 = local_138[0xc];
        dVar36 = local_138[0xb];
        uVar25 = SUB84(dVar36,0);
        uVar26 = (undefined4)((ulonglong)dVar36 >> 0x20);
        if (((ABS(dVar28) <= 9.999999747378752e-05) && (ABS(dVar36) <= 9.999999747378752e-05)) &&
           (ABS(dVar35) <= 9.999999747378752e-05)) {
          dVar28 = *(double *)(lVar1 + 0x280) * 1.0;
          dVar29 = *(double *)(lVar1 + 0x288) * 0.0;
          dVar35 = *(double *)(lVar1 + 0x290) * 0.0;
          dVar31 = *(double *)(lVar1 + 0x240);
          dVar5 = *(double *)(lVar1 + 0x248);
          dVar7 = *(double *)(lVar1 + 0x250);
          dVar36 = *(double *)(lVar1 + 600);
          dVar33 = dVar29 * dVar31 - dVar28 * dVar5;
          dVar34 = dVar35 * dVar5 - dVar29 * dVar7;
          dVar32 = dVar28 * dVar7 - dVar31 * dVar35;
          dVar34 = dVar34 + dVar34;
          dVar32 = dVar32 + dVar32;
          dVar33 = dVar33 + dVar33;
          dVar35 = dVar33 * dVar36 + dVar35 + (dVar32 * dVar31 - dVar34 * dVar5);
          dVar28 = (dVar33 * dVar5 - dVar32 * dVar7) + dVar36 * dVar34 + dVar28;
          dVar36 = (dVar7 * dVar34 - dVar31 * dVar33) + *(double *)(lVar1 + 600) * dVar32 + dVar29;
          uVar25 = SUB84(dVar36,0);
          uVar26 = (undefined4)((ulonglong)dVar36 >> 0x20);
        }
        if (0 < (int)uVar23) {
          local_190 = 1.0 / (double)(int)param_1[9];
          local_198 = *local_138;
          local_1a0 = local_138[1];
          local_1a8 = local_138[2];
          dVar32 = (double)*(float *)(local_138 + 6);
          local_1b0 = local_138[7];
          local_1b8 = local_138[8];
          dVar36 = local_138[9];
          dVar29 = (double)*(float *)(local_138 + 0xd);
          iVar12 = 1;
          lVar21 = 0;
          do {
            dVar34 = (double)iVar12 * local_190;
            dVar33 = dVar34 * dVar34;
            dVar31 = dVar34 * dVar33;
            dVar5 = dVar31 - dVar33;
            dVar7 = ((dVar31 + dVar31) - dVar33 * 3.0) + 1.0;
            dVar34 = (dVar31 - (dVar33 + dVar33)) + dVar34;
            dVar33 = dVar33 * 3.0 - (dVar31 + dVar31);
            *(double *)(local_140 + lVar21) =
                 dVar33 * local_1b0 +
                 dVar5 * dVar28 * dVar29 + dVar34 * dVar27 * dVar32 + dVar7 * local_198;
            *(double *)(local_140 + 8 + lVar21) =
                 local_1b8 * dVar33 +
                 (double)CONCAT44(uVar26,uVar25) * dVar29 * dVar5 +
                 dVar30 * dVar32 * dVar34 + local_1a0 * dVar7;
            *(double *)(local_140 + 0x10 + lVar21) =
                 dVar36 * dVar33 +
                 dVar35 * dVar29 * dVar5 + dVar6 * dVar32 * dVar34 + local_1a8 * dVar7;
            lVar21 = lVar21 + 0x18;
            iVar12 = iVar12 + 1;
          } while ((ulonglong)uVar23 * 0x18 != lVar21);
        }
        *(int *)(local_138 + 0x14) = *(int *)(local_138 + 0x13) * 2;
        lVar17 = local_1e8;
        lVar21 = local_1e0;
        iVar12 = local_1d8;
        dVar6 = local_1c0;
        if (bVar16 != 0) {
          iVar19 = *(int *)(local_1f0 + 0x180) + (uint)(*(int *)(local_1f0 + 0x180) == 0);
          iVar13 = *(int *)(local_138 + 0x13) * iVar19;
          iVar14 = iVar13 * 2;
          *(int *)(local_138 + 0x14) = iVar14;
          if (*(int *)((longlong)local_138 + 0x6c) < 0) {
            *(int *)(local_138 + 0x14) = (iVar13 + iVar19) * 2;
          }
          else if (0.0001 < *(float *)((longlong)local_138 + 0x9c)) {
            fVar24 = *(float *)((longlong)local_138 + 0x9c) * (float)iVar19;
            *(uint *)(local_138 + 0x14) =
                 ((int)ROUND(fVar24 + fVar24 + -0.5) & 0xfffffffeU) + iVar14;
          }
        }
      }
LAB_147bfa57c:
      bVar2 = 1 < lVar22;
      lVar22 = lVar22 + -1;
    } while (bVar2);
  }
  if ((local_f0 ^ (ulonglong)auStack_268) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147bfa8fa FUN_147bfa8fa body=74 status=ok
// SIG undefined FUN_147bfa8fa(void)

longlong * FUN_147bfa8fa(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  (**(code **)(*param_1 + 0x2d8))();
  plVar1 = (longlong *)FUN_14001cc68(0x3c0,0x10);
  FUN_147bf5a56(plVar1);
  (**(code **)(*plVar1 + 8))(plVar1,param_2,param_3);
  return plVar1;
}



// FUNCTION 147bfa94c FUN_147bfa94c body=139 status=ok
// SIG undefined FUN_147bfa94c(void)

void FUN_147bfa94c(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  
  uVar3 = DAT_14caf3500;
  uVar6 = DAT_14caf34e0;
  iVar1 = *(int *)(param_2 + 0x160);
  iVar2 = param_3[0xc];
  param_3[0xc] = iVar2 + 1U;
  if ((uint)param_3[0xd] < iVar2 + 1U) {
    FUN_140df0cf8(param_3 + 2,iVar2);
  }
  if (0 < iVar1) {
    uVar6 = uVar3;
  }
  puVar5 = param_3 + 2;
  if (*(undefined4 **)(param_3 + 10) != (undefined4 *)0x0) {
    puVar5 = *(undefined4 **)(param_3 + 10);
  }
  *(undefined **)(puVar5 + (longlong)iVar2 * 4) = &DAT_14caf3ca0;
  *(undefined8 *)(puVar5 + (longlong)iVar2 * 4 + 2) = uVar6;
  uVar4 = (**(code **)(*param_1 + 0x3a8))(param_1);
  *param_3 = uVar4;
  return;
}



// FUNCTION 147bfa9d8 FUN_147bfa9d8 body=25 status=ok
// SIG undefined FUN_147bfa9d8(void)

undefined8 FUN_147bfa9d8(char param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_14caf34d0;
  if (param_1 != '\0') {
    puVar1 = &DAT_14caf34f0;
  }
  return *(undefined8 *)(puVar1 + 0x10);
}



// FUNCTION 147bfa9f6 FUN_147bfa9f6 body=431 status=ok
// SIG undefined FUN_147bfa9f6(void)

void FUN_147bfa9f6(longlong param_1,longlong param_2,longlong param_3,int *param_4,longlong *param_5
                  ,longlong *param_6,longlong *param_7,longlong *param_8,longlong *param_9,
                  longlong *param_10,longlong *param_11,longlong *param_12,longlong *param_13,
                  longlong *param_14)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  lVar2 = *(longlong *)(param_2 + 0x290);
  iVar4 = *param_4;
  *param_4 = iVar4 + 0xa8;
  *param_5 = iVar4 + param_3;
  if (*(int *)(param_1 + 0x48) < 1) {
    iVar4 = 2;
  }
  else {
    iVar4 = *param_4;
    *param_4 = iVar4 + 0x18;
    *param_6 = iVar4 + param_3;
    *param_4 = *param_4 + -0x18 + *(int *)(param_1 + 0x48) * 0x18;
    iVar4 = 2;
    if (*(int *)(param_1 + 0x48) != 0) {
      iVar4 = *(int *)(param_1 + 0x48) + 1;
    }
  }
  if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x30) & 1) != 0)) {
    iVar4 = *(int *)(lVar2 + 0x34);
    iVar1 = *param_4;
    *param_4 = iVar1 + 4;
    *param_7 = iVar1 + param_3;
    iVar1 = *param_4;
    *param_4 = iVar1 + 4;
    *param_8 = iVar1 + param_3;
    iVar1 = *param_4;
    *param_4 = iVar1 + 0x18;
    *param_9 = iVar1 + param_3;
    iVar1 = iVar4 * 0x18;
    iVar3 = *param_4 + iVar1;
    *param_4 = iVar3;
    if ((*(byte *)(lVar2 + 0x138) & 1) != 0) {
      *param_4 = iVar3 + 0x18;
      *param_10 = iVar3 + param_3;
      iVar3 = iVar1 + *param_4;
      *param_4 = iVar3;
    }
    iVar4 = (*(int *)(lVar2 + 0x180) + (uint)(*(int *)(lVar2 + 0x180) == 0)) * (iVar4 + 2);
    if ((*(byte *)(lVar2 + 0x18c) & 1) != 0) {
      *param_4 = iVar3 + 4;
      *param_12 = param_3 + iVar3;
    }
  }
  if (*(char *)(param_1 + 0x90) != '\0') {
    iVar1 = *param_4;
    *param_4 = iVar1 + 4;
    *param_11 = iVar1 + param_3;
    *param_4 = *param_4 + iVar4 * 4 + -4;
  }
  if ((longlong)*(int *)(param_2 + 0x2a0) != -1) {
    iVar4 = *param_4;
    *param_13 = *(int *)(param_2 + 0x2a0) + param_3;
    *param_4 = iVar4;
  }
  if ((longlong)*(int *)(param_2 + 0x2b0) != -1) {
    iVar4 = *param_4;
    *param_14 = param_3 + *(int *)(param_2 + 0x2b0);
    *param_4 = iVar4;
  }
  return;
}



// FUNCTION 147bfaba6 FUN_147bfaba6 body=333 status=ok
// SIG undefined FUN_147bfaba6(void)

void FUN_147bfaba6(longlong param_1,longlong param_2,undefined8 param_3,int *param_4,int *param_5,
                  int *param_6,int *param_7,int *param_8,int *param_9,int *param_10,int *param_11,
                  int *param_12,int *param_13)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  lVar2 = *(longlong *)(param_2 + 0x290);
  *param_7 = -1;
  *param_8 = -1;
  *param_9 = -1;
  *param_10 = -1;
  *param_6 = -1;
  *param_11 = 2;
  *param_12 = -1;
  *param_13 = -1;
  iVar3 = *param_4;
  *param_5 = iVar3;
  if (*(int *)(param_1 + 0x48) < 1) {
    iVar3 = 0xa8;
  }
  else {
    *param_6 = iVar3 + 0xa8;
    iVar1 = *(int *)(param_1 + 0x48);
    iVar3 = iVar1 * 0x18 + 0xa8;
    iVar4 = 2;
    if (iVar1 != 0) {
      iVar4 = iVar1 + 1;
    }
    *param_11 = iVar4;
  }
  if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x30) & 1) != 0)) {
    iVar1 = *(int *)(lVar2 + 0x34);
    *param_7 = *param_4 + iVar3;
    *param_8 = iVar3 + *param_4 + 4;
    *param_9 = iVar3 + 8 + *param_4;
    iVar3 = iVar3 + iVar1 * 0x18 + 0x20;
    if ((*(byte *)(lVar2 + 0x138) & 1) != 0) {
      *param_10 = *param_4 + iVar3;
      iVar3 = iVar1 * 0x18 + 0x18 + iVar3;
    }
    *param_11 = (*(int *)(lVar2 + 0x180) + (uint)(*(int *)(lVar2 + 0x180) == 0)) * (iVar1 + 2);
    if ((*(byte *)(lVar2 + 0x18c) & 1) != 0) {
      *param_13 = *param_4 + iVar3;
      iVar3 = iVar3 + 4;
    }
  }
  if (*(char *)(param_1 + 0x90) != '\0') {
    *param_12 = iVar3 + *param_4;
  }
  return;
}



// FUNCTION 147bfacf3 FUN_147bfacf3 body=217 status=ok
// SIG undefined FUN_147bfacf3(void)

undefined8
FUN_147bfacf3(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [8];
  undefined8 local_d0;
  longlong local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong local_98;
  longlong *local_88;
  longlong local_78 [7];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_145a6b57e();
  FUN_144a5c54a(local_d8,uVar1);
  local_b8 = param_5;
  local_a8 = param_6;
  local_d0 = param_1;
  local_c8 = param_2;
  local_c0 = param_3;
  local_b0 = param_4;
  uVar1 = FUN_1402710dd(local_d8);
  if (local_98 != 0) {
    if (local_88 == (longlong *)0x0) {
      local_88 = local_78;
    }
    (**(code **)(*local_88 + 0x10))();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bfadce FUN_147bfadce body=491 status=ok
// SIG undefined FUN_147bfadce(void)

void FUN_147bfadce(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_50;
  uint local_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 == 0) goto LAB_147bfae6f;
  if ((*(byte *)(param_2 + 0x161) & 1) == 0) {
    puVar3 = (uint *)0x0;
LAB_147bfae05:
    puVar2 = (uint *)0x0;
  }
  else {
    if (*(longlong *)(param_2 + 0x298) == 0) {
      puVar3 = (uint *)0x0;
    }
    else {
      puVar3 = (uint *)(*(int *)(param_2 + 0x2a0) + param_5);
    }
    if (*(longlong *)(param_2 + 0x2a8) == 0) goto LAB_147bfae05;
    puVar2 = (uint *)(param_5 + *(int *)(param_2 + 0x2b0));
  }
  if (*(char *)(param_1 + 0x30) != '\0') {
    puVar3 = puVar2;
  }
  if (puVar3 != (uint *)0x0) {
    uVar1 = *puVar3 & 0xfffffffe | *(uint *)(param_1 + 0x34) & 1;
    *puVar3 = uVar1;
    if ((*(byte *)(param_1 + 0x34) & 1) != 0) {
      local_50 = 0;
      local_58 = 0;
      FUN_147a776dc(param_1 + 0x38,&local_40,*(undefined4 *)(param_2 + 0x1a0),
                    *(undefined8 *)(param_2 + 0x10));
      *(undefined8 *)(puVar3 + 6) = local_30;
      puVar3[2] = local_40;
      puVar3[3] = uStack_3c;
      puVar3[4] = uStack_38;
      puVar3[5] = uStack_34;
      uVar1 = *puVar3 & 0xfffffffd | *(uint *)(param_1 + 0x34) & 2;
      *puVar3 = uVar1;
    }
    uVar1 = (uVar1 & 0xfffffffb) + (*(uint *)(param_1 + 0x98) & 1) * 4;
    *puVar3 = uVar1;
    if ((*(byte *)(param_1 + 0x98) & 1) != 0) {
      local_50 = 0;
      local_58 = 0;
      FUN_147a776dc(param_1 + 0xa0,&local_40,*(undefined4 *)(param_2 + 0x1a0),
                    *(undefined8 *)(param_2 + 0x10));
      *(undefined8 *)(puVar3 + 0xc) = local_30;
      puVar3[8] = local_40;
      puVar3[9] = uStack_3c;
      puVar3[10] = uStack_38;
      puVar3[0xb] = uStack_34;
      uVar1 = (*puVar3 & 0xfffffff7) + (*(uint *)(param_1 + 0x98) & 2) * 4;
      *puVar3 = uVar1;
    }
    *puVar3 = uVar1 & 0xffffffef | (*(uint *)(param_1 + 0x104) & 1) << 4;
    if ((*(byte *)(param_1 + 0x104) & 1) != 0) {
      uVar1 = FUN_147a77524(param_1 + 0x108,*(undefined4 *)(param_2 + 0x1a0),
                            *(undefined8 *)(param_2 + 0x10),0);
      puVar3[0xe] = uVar1;
      *puVar3 = *puVar3 & 0xffffffdf | (*(uint *)(param_1 + 0x104) & 2) << 4;
    }
  }
LAB_147bfae6f:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bfafba FUN_147bfafba body=616 status=ok
// SIG undefined FUN_147bfafba(void)

void FUN_147bfafba(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint *puVar7;
  ulonglong uVar8;
  uint *puVar9;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 local_80;
  longlong local_70;
  longlong local_68;
  uint local_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((param_2 != 0) && ((*(byte *)(param_2 + 0x161) & 1) != 0)) &&
     (0 < (longlong)*(int *)(param_2 + 0x18c))) {
    lVar2 = *(longlong *)(param_2 + 0x168);
    lVar3 = *(longlong *)(param_2 + 0x170);
    iVar1 = *(int *)(param_2 + 0x188);
    uVar8 = (longlong)*(int *)(param_2 + 0x18c) + 1;
    local_68 = param_1 + 0x38;
    local_70 = param_1 + 0xa0;
    do {
      uVar5 = (ulonglong)((uint)*(ushort *)(lVar3 + -4 + uVar8 * 2) * iVar1);
      if ((*(byte *)(lVar2 + 0x6f + uVar5) & 4) == 0) {
        if ((*(byte *)(param_2 + 0x161) & 1) == 0) {
          puVar9 = (uint *)0x0;
LAB_147bfb078:
          puVar7 = (uint *)0x0;
        }
        else {
          lVar6 = uVar5 + lVar2;
          if (*(longlong *)(param_2 + 0x298) == 0) {
            puVar9 = (uint *)0x0;
          }
          else {
            puVar9 = (uint *)(*(int *)(param_2 + 0x2a0) + lVar6);
          }
          if (*(longlong *)(param_2 + 0x2a8) == 0) goto LAB_147bfb078;
          puVar7 = (uint *)(lVar6 + *(int *)(param_2 + 0x2b0));
        }
        if (*(char *)(param_1 + 0x30) != '\0') {
          puVar9 = puVar7;
        }
        if (puVar9 != (uint *)0x0) {
          uVar4 = *puVar9 & 0xfffffffe | *(uint *)(param_1 + 0x34) & 1;
          *puVar9 = uVar4;
          if ((*(uint *)(param_1 + 0x34) & 5) == 1) {
            local_80 = 0;
            local_88 = 0;
            FUN_147a776dc(local_68,&local_60,*(undefined4 *)(param_2 + 0x1a0),
                          *(undefined8 *)(param_2 + 0x10));
            *(undefined8 *)(puVar9 + 6) = local_50;
            puVar9[2] = local_60;
            puVar9[3] = uStack_5c;
            puVar9[4] = uStack_58;
            puVar9[5] = uStack_54;
            uVar4 = *puVar9 & 0xfffffffd | *(uint *)(param_1 + 0x34) & 2;
            *puVar9 = uVar4;
          }
          uVar4 = (uVar4 & 0xfffffffb) + (*(uint *)(param_1 + 0x98) & 1) * 4;
          *puVar9 = uVar4;
          if ((*(uint *)(param_1 + 0x98) & 5) == 1) {
            local_80 = 0;
            local_88 = 0;
            FUN_147a776dc(local_70,&local_60,*(undefined4 *)(param_2 + 0x1a0),
                          *(undefined8 *)(param_2 + 0x10));
            *(undefined8 *)(puVar9 + 0xc) = local_50;
            puVar9[8] = local_60;
            puVar9[9] = uStack_5c;
            puVar9[10] = uStack_58;
            puVar9[0xb] = uStack_54;
            uVar4 = (*puVar9 & 0xfffffff7) + (*(uint *)(param_1 + 0x98) & 2) * 4;
            *puVar9 = uVar4;
          }
          *puVar9 = uVar4 & 0xffffffef | (*(uint *)(param_1 + 0x104) & 1) << 4;
          if ((*(uint *)(param_1 + 0x104) & 5) == 1) {
            uVar4 = FUN_147a77524(param_1 + 0x108,*(undefined4 *)(param_2 + 0x1a0),
                                  *(undefined8 *)(param_2 + 0x10),0);
            puVar9[0xe] = uVar4;
            *puVar9 = *puVar9 & 0xffffffdf | (*(uint *)(param_1 + 0x104) & 2) << 4;
          }
        }
      }
      uVar8 = uVar8 - 1;
    } while (1 < uVar8);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147bfb22e FUN_147bfb22e body=654 status=ok
// SIG undefined FUN_147bfb22e(void)

void FUN_147bfb22e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar2 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
    FUN_147c0c128(param_2,iVar2);
  }
  plVar1 = (longlong *)(*param_2 + (longlong)iVar2 * 0x18);
  *plVar1 = 0;
  plVar1[1] = 0;
  plVar1[2] = 0;
  lVar3 = *(longlong *)(param_1 + 0x90);
  if (DAT_14c950c29 == '\x01') {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar3 = *(longlong *)(param_1 + 0x90);
    }
  }
  plVar1[2] = lVar3;
  FUN_140056680(&local_38,L"Position");
  if (plVar1 == &local_38) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    *plVar1 = local_38;
    local_38 = 0;
    *(undefined4 *)(plVar1 + 1) = local_30;
    *(undefined4 *)((longlong)plVar1 + 0xc) = local_2c;
  }
  iVar2 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
    FUN_147c0c128(param_2,iVar2);
  }
  plVar1 = (longlong *)(*param_2 + (longlong)iVar2 * 0x18);
  *plVar1 = 0;
  plVar1[1] = 0;
  plVar1[2] = 0;
  lVar3 = *(longlong *)(param_1 + 0xf8);
  if (DAT_14c950c29 == '\x01') {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar3 = *(longlong *)(param_1 + 0xf8);
    }
  }
  plVar1[2] = lVar3;
  FUN_140056680(&local_38,L"Tangent");
  if (plVar1 == &local_38) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    *plVar1 = local_38;
    local_38 = 0;
    *(undefined4 *)(plVar1 + 1) = local_30;
    *(undefined4 *)((longlong)plVar1 + 0xc) = local_2c;
  }
  iVar2 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
    FUN_147c0c128(param_2,iVar2);
  }
  plVar1 = (longlong *)(*param_2 + (longlong)iVar2 * 0x18);
  *plVar1 = 0;
  plVar1[1] = 0;
  plVar1[2] = 0;
  lVar3 = *(longlong *)(param_1 + 0x130);
  if (DAT_14c950c29 == '\x01') {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar3 = *(longlong *)(param_1 + 0x130);
    }
  }
  plVar1[2] = lVar3;
  FUN_140056680(&local_38,L"Strength");
  if (plVar1 == &local_38) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    *plVar1 = local_38;
    *(undefined4 *)(plVar1 + 1) = local_30;
    *(undefined4 *)((longlong)plVar1 + 0xc) = local_2c;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bfb4c1 FUN_147bfb4c1 body=217 status=ok
// SIG undefined FUN_147bfb4c1(void)

undefined8
FUN_147bfb4c1(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [8];
  undefined8 local_d0;
  longlong local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong local_98;
  longlong *local_88;
  longlong local_78 [7];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_1459588c0();
  FUN_144a5c54a(local_d8,uVar1);
  local_b8 = param_5;
  local_a8 = param_6;
  local_d0 = param_1;
  local_c8 = param_2;
  local_c0 = param_3;
  local_b0 = param_4;
  uVar1 = FUN_1402710dd(local_d8);
  if (local_98 != 0) {
    if (local_88 == (longlong *)0x0) {
      local_88 = local_78;
    }
    (**(code **)(*local_88 + 0x10))();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bfb59c FUN_147bfb59c body=759 status=ok
// SIG undefined FUN_147bfb59c(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_147bfb59c(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  float fVar8;
  undefined1 auStack_158 [32];
  longlong *local_138;
  longlong *local_130;
  longlong *local_128;
  longlong *local_120;
  longlong *local_118;
  longlong *local_110;
  undefined8 *local_108;
  undefined8 *local_100;
  undefined8 *local_f8;
  undefined8 *local_f0;
  longlong local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong local_a0;
  longlong local_98 [11];
  
  local_98[5] = DAT_14c707940 ^ (ulonglong)auStack_158;
  if ((((param_2 != 0) && ((*(uint *)(param_1 + 0x30) & 1) != 0)) && (*(int *)(param_1 + 0x34) != 0)
      ) && ((*(byte *)(param_2 + 0x161) & 1) != 0)) {
    plVar2 = *(longlong **)(param_2 + 0x278);
    local_e8 = FUN_147c11a5c(param_1);
    local_98[4] = 0;
    local_130 = local_98 + 3;
    local_98[3] = 0;
    local_128 = local_98 + 2;
    local_98[2] = 0;
    local_120 = local_98 + 1;
    local_98[1] = 0;
    local_118 = local_98;
    local_98[0] = 0;
    local_110 = &local_a0;
    local_a0 = 0;
    local_108 = &local_a8;
    local_a8 = 0;
    local_100 = &local_b0;
    local_b0 = 0;
    local_f8 = &local_b8;
    local_b8 = 0;
    local_f0 = &local_c0;
    local_c0 = 0;
    local_c4 = *(undefined4 *)(param_2 + 0x24);
    local_138 = local_98 + 4;
    (**(code **)(*plVar2 + 0x3e0))(plVar2,param_2,param_5);
    if (*(int *)(param_1 + 0x38) < 1) {
      iVar4 = *(int *)(param_1 + 0x34);
    }
    else {
      uVar3 = *(int *)(local_e8 + 4) * 0xbb38435 + 0x3619636b;
      *(uint *)(local_e8 + 4) = uVar3;
      iVar4 = (int)((float)*(int *)(param_1 + 0x38) +
                   (float)(*(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x38)) *
                   ((float)(uVar3 >> 9 | 0x3f800000) + -1.0));
    }
    *(uint *)(local_98[4] + 0x6c) = iVar4 << 0xc | *(uint *)(local_98[4] + 0x6c) & 0xff000fff;
    if (-1 < iVar4) {
      cVar1 = *(char *)(param_1 + 0x5b);
      uVar3 = 0xffffffff;
      lVar6 = 0;
      uVar7 = 0;
      do {
        uVar5 = 0;
        if (cVar1 != '\0') {
          uVar5 = -uVar3 & (*(int *)(param_1 + 0x140) << 0x1e) >> 0x1f;
        }
        fVar8 = (float)(int)uVar7 * (1.0 / (float)(int)(iVar4 + 1U));
        local_138 = (longlong *)CONCAT44(local_138._4_4_,uVar5);
        local_130 = (longlong *)0x0;
        FUN_147a776dc(param_1 + 0x40,&local_e0,fVar8,*(undefined8 *)(param_2 + 0x10));
        *(undefined8 *)(local_98[0] + 0x10 + lVar6) = local_d0;
        *(undefined8 *)(local_98[0] + lVar6) = local_e0;
        ((undefined8 *)(local_98[0] + lVar6))[1] = uStack_d8;
        uVar3 = uVar5;
        if ((*(byte *)(param_1 + 0x138) & 1) != 0) {
          uVar3 = -uVar5;
          local_138 = (longlong *)CONCAT44(local_138._4_4_,uVar3);
          local_130 = (longlong *)0x0;
          FUN_147a776dc(param_1 + 0x40,&local_e0,fVar8,*(undefined8 *)(param_2 + 0x10));
          *(undefined8 *)(local_a0 + 0x10 + lVar6) = local_d0;
          *(undefined8 *)(local_a0 + lVar6) = local_e0;
          ((undefined8 *)(local_a0 + lVar6))[1] = uStack_d8;
        }
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + 0x18;
      } while (iVar4 + 1U != uVar7);
    }
  }
  if ((local_98[5] ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147bfb894 FUN_147bfb894 body=1165 status=ok
// SIG undefined FUN_147bfb894(void)

void FUN_147bfb894(longlong param_1,longlong param_2,undefined8 param_3,float param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  float *pfVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  float fVar15;
  undefined1 auStack_1b8 [32];
  longlong *local_198;
  undefined8 *local_190;
  float **local_188;
  float **local_180;
  longlong *local_178;
  longlong *local_170;
  undefined8 *local_168;
  undefined8 *local_160;
  undefined8 *local_158;
  undefined8 *local_150;
  char local_141;
  longlong local_140;
  int local_134;
  longlong local_130;
  longlong local_128;
  longlong local_120;
  longlong *local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  longlong local_d0;
  longlong local_c8;
  float *local_c0;
  float *local_b8;
  undefined8 local_b0;
  longlong local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if ((((param_2 != 0) && ((*(uint *)(param_1 + 0x30) & 1) != 0)) && (*(int *)(param_1 + 0x34) != 0)
      ) && (((*(byte *)(param_2 + 0x161) & 1) != 0 && (0 < (longlong)*(int *)(param_2 + 0x18c))))) {
    local_118 = *(longlong **)(param_2 + 0x278);
    lVar2 = param_1 + 0x40;
    local_141 = *(char *)(param_1 + 0x5b);
    lVar8 = *(longlong *)(param_2 + 0x168);
    lVar12 = *(longlong *)(param_2 + 0x170);
    local_134 = *(int *)(param_2 + 0x188);
    uVar6 = 0xffffffff;
    lVar14 = (longlong)*(int *)(param_2 + 0x18c);
    local_140 = param_1;
    local_128 = lVar12;
    local_120 = lVar8;
    iVar11 = local_134;
    do {
      uVar10 = (ulonglong)((uint)*(ushort *)(lVar12 + -2 + lVar14 * 2) * iVar11);
      if ((*(byte *)(lVar8 + 0x6f + uVar10) & 4) == 0) {
        local_a8 = 0;
        local_b0 = 0;
        local_b8 = (float *)0x0;
        local_c0 = (float *)0x0;
        local_c8 = 0;
        local_d0 = 0;
        local_d8 = 0;
        local_e0 = 0;
        local_e8 = 0;
        local_f0 = 0;
        local_f4 = *(undefined4 *)(param_2 + 0x24);
        local_150 = &local_f0;
        local_158 = &local_e8;
        local_160 = &local_e0;
        local_168 = &local_d8;
        local_170 = &local_d0;
        local_178 = &local_c8;
        local_180 = &local_c0;
        local_188 = &local_b8;
        local_190 = &local_b0;
        local_198 = &local_a8;
        (**(code **)(*local_118 + 0x3e0))(local_118,param_2,uVar10 + lVar8,&local_f4);
        uVar5 = 0;
        if (local_141 != '\0') {
          uVar5 = -uVar6 & (*(int *)(param_1 + 0x140) << 0x1e) >> 0x1f;
        }
        uVar6 = uVar5;
        pfVar3 = (float *)(param_1 + 0x144);
        lVar8 = local_120;
        lVar12 = local_128;
        param_1 = local_140;
        iVar11 = local_134;
        if (0.0 <= *pfVar3) {
          lVar7 = (ulonglong)(*(uint *)(local_a8 + 0x6c) >> 0xc & 0xfff) + 1;
          fVar15 = 1.0 / (float)(int)lVar7;
          if (*pfVar3 <= 0.0001) {
            lVar13 = 0;
            lVar9 = 0;
            do {
              local_198 = (longlong *)CONCAT44(local_198._4_4_,uVar6);
              local_190 = (undefined8 *)0x0;
              FUN_147a776dc(lVar2,&local_110,(float)(int)lVar9 * fVar15,
                            *(undefined8 *)(param_2 + 0x10));
              *(undefined8 *)(local_c8 + 0x10 + lVar13) = local_100;
              puVar1 = (undefined4 *)(local_c8 + lVar13);
              *puVar1 = local_110;
              puVar1[1] = uStack_10c;
              puVar1[2] = uStack_108;
              puVar1[3] = uStack_104;
              lVar9 = lVar9 + 1;
              lVar13 = lVar13 + 0x18;
              lVar8 = local_120;
              lVar12 = local_128;
              param_1 = local_140;
              iVar11 = local_134;
            } while (lVar7 != lVar9);
          }
          else {
            *local_b8 = *local_b8 + param_4;
            if (*(float *)(local_140 + 0x144) <= *local_b8 &&
                *local_b8 != *(float *)(local_140 + 0x144)) {
              local_130 = lVar7;
              if ((*(byte *)(local_140 + 0x138) & 1) == 0) {
                lVar8 = 0;
                lVar12 = 0;
                do {
                  local_198 = (longlong *)CONCAT44(local_198._4_4_,uVar6);
                  local_190 = (undefined8 *)0x0;
                  FUN_147a776dc(lVar2,&local_110,(float)(int)lVar12 * fVar15,
                                *(undefined8 *)(param_2 + 0x10));
                  *(undefined8 *)(local_c8 + 0x10 + lVar8) = local_100;
                  puVar1 = (undefined4 *)(local_c8 + lVar8);
                  *puVar1 = local_110;
                  puVar1[1] = uStack_10c;
                  puVar1[2] = uStack_108;
                  puVar1[3] = uStack_104;
                  lVar12 = lVar12 + 1;
                  lVar8 = lVar8 + 0x18;
                } while (local_130 != lVar12);
              }
              else {
                lVar8 = 0;
                lVar12 = 0;
                do {
                  local_198 = (longlong *)CONCAT44(local_198._4_4_,uVar6);
                  local_190 = (undefined8 *)0x0;
                  FUN_147a776dc(lVar2,&local_110,(float)(int)lVar12 * fVar15,
                                *(undefined8 *)(param_2 + 0x10));
                  *(undefined8 *)(local_d0 + 0x10 + lVar8) = local_100;
                  puVar1 = (undefined4 *)(local_d0 + lVar8);
                  *puVar1 = local_110;
                  puVar1[1] = uStack_10c;
                  puVar1[2] = uStack_108;
                  puVar1[3] = uStack_104;
                  lVar12 = lVar12 + 1;
                  lVar8 = lVar8 + 0x18;
                } while (local_130 != lVar12);
              }
              *local_b8 = 0.0;
            }
            *local_c0 = param_4;
            lVar8 = local_120;
            lVar12 = local_128;
            param_1 = local_140;
            iVar11 = local_134;
          }
        }
      }
      bVar4 = 1 < lVar14;
      lVar14 = lVar14 + -1;
    } while (bVar4);
  }
  if ((local_a0 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147bfbd44 FUN_147bfbd44 body=451 status=ok
// SIG undefined FUN_147bfbd44(void)

void FUN_147bfbd44(longlong param_1)

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
  cVar1 = FUN_147a7750a(param_1 + 0x40);
  if (cVar1 == '\0') {
    FUN_1446f470e(&local_20,L"DistributionSource",1);
    local_40 = 0;
    local_48 = 0;
    lVar2 = FUN_147bfacf3(param_1,local_20,0,0);
    *(undefined8 *)(lVar2 + 0x38) = 0x4049000000000000;
    *(undefined8 *)(lVar2 + 0x40) = 0x4049000000000000;
    *(undefined8 *)(lVar2 + 0x48) = 0x4049000000000000;
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
    *(longlong *)(param_1 + 0x98) = lVar2;
  }
  cVar1 = FUN_147a7750a(param_1 + 0xa8);
  if (cVar1 == '\0') {
    FUN_1446f470e(&local_28,L"DistributionSourceTangent",1);
    local_40 = 0;
    local_48 = 0;
    lVar2 = FUN_147bfacf3(param_1,local_28,0,0);
    *(undefined8 *)(lVar2 + 0x38) = 0x3ff0000000000000;
    *(undefined8 *)(lVar2 + 0x40) = 0;
    *(undefined8 *)(lVar2 + 0x48) = 0;
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
    *(longlong *)(param_1 + 0x100) = lVar2;
  }
  cVar1 = FUN_147a774f0(param_1 + 0x110);
  if (cVar1 == '\0') {
    FUN_1446f470e(&local_30,L"DistributionSourceStrength",1);
    local_40 = 0;
    local_48 = 0;
    lVar2 = FUN_147bf866f(param_1,local_30,0,0);
    *(undefined4 *)(lVar2 + 0x38) = 0x41c80000;
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
    *(longlong *)(param_1 + 0x138) = lVar2;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bfbf08 FUN_147bfbf08 body=459 status=ok
// SIG undefined FUN_147bfbf08(void)

void FUN_147bfbf08(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
                  longlong param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_118 [32];
  double **local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  double *local_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_4c = param_3;
  if ((param_2 != 0) && ((*(byte *)(param_2 + 0x161) & 1) != 0)) {
    local_f8 = &local_58;
    local_58 = (double *)0x0;
    local_60 = 0;
    local_68 = 0;
    local_e0 = &local_70;
    local_70 = 0;
    local_d8 = &local_78;
    local_78 = 0;
    local_d0 = &local_80;
    local_80 = 0;
    local_c8 = &local_88;
    local_88 = 0;
    local_c0 = &local_90;
    local_90 = 0;
    local_b8 = &local_98;
    local_98 = 0;
    local_b0 = &local_a0;
    local_a0 = 0;
    local_a4 = *(undefined4 *)(param_2 + 0x24);
    local_e8 = &local_68;
    local_f0 = &local_60;
    (**(code **)(**(longlong **)(param_2 + 0x278) + 0x3e0))
              (*(longlong **)(param_2 + 0x278),param_2,param_5);
    local_f0 = (undefined8 *)CONCAT44(local_f0._4_4_,*(undefined4 *)(param_2 + 0x18c));
    local_f8 = (double **)&local_4c;
    local_e8 = (undefined8 *)CONCAT71(local_e8._1_7_,1);
    FUN_147bfc0d4(param_1,param_2,local_58,param_5);
    dVar1 = local_58[2];
    dVar2 = *(double *)(param_2 + 0x250);
    dVar3 = local_58[1];
    dVar4 = *(double *)(param_2 + 0x248);
    *(double *)(param_5 + 0x18) = *local_58 - *(double *)(param_2 + 0x240);
    *(double *)(param_5 + 0x20) = dVar3 - dVar4;
    *(double *)(param_5 + 0x28) = dVar1 - dVar2;
    *(undefined4 *)((longlong)local_58 + 0x6c) = 0;
    local_58[0x12] = 0.0;
    local_58[0x13] = 0.0;
    *(undefined4 *)(local_58 + 0x14) = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bfc0d4 FUN_147bfc0d4 body=1989 status=ok
// SIG undefined FUN_147bfc0d4(void)

void FUN_147bfc0d4(longlong param_1,longlong param_2,undefined1 (*param_3) [16],longlong param_4,
                  int *param_5,int param_6,char param_7)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  char cVar12;
  int iVar13;
  longlong lVar14;
  undefined8 *puVar15;
  longlong lVar16;
  int iVar17;
  longlong *plVar18;
  uint uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (((param_2 != 0) && ((*(byte *)(param_2 + 0x161) & 1) != 0)) &&
     (lVar16 = *(longlong *)(param_2 + 0x278), lVar16 != 0)) {
    if (*(char *)(param_1 + 0x30) == '\x03') {
      *param_5 = *param_5 + 4;
    }
    if (*(char *)(lVar16 + 0x30) == '\x02') {
      *param_5 = *param_5 + 4;
    }
  }
  if ((param_7 == '\0') && ((*(byte *)(param_1 + 0xa0) & 1) != 0)) goto LAB_147bfc347;
  switch(*(undefined1 *)(param_1 + 0x30)) {
  case 1:
    if (*(int *)(param_2 + 0x2f8) < 1) break;
    puVar2 = *(undefined4 **)(param_2 + 0x2f0);
    if (param_6 < *(int *)(param_2 + 0x2f8)) {
      *(undefined8 *)param_3[1] = *(undefined8 *)(puVar2 + (longlong)param_6 * 6 + 4);
      puVar2 = puVar2 + (longlong)param_6 * 6;
      uVar20 = *puVar2;
      uVar21 = puVar2[1];
      uVar22 = puVar2[2];
      uVar23 = puVar2[3];
    }
    else {
      *(undefined8 *)param_3[1] = *(undefined8 *)(puVar2 + 4);
      uVar20 = *puVar2;
      uVar21 = puVar2[1];
      uVar22 = puVar2[2];
      uVar23 = puVar2[3];
    }
    auVar4._4_4_ = uVar21;
    auVar4._0_4_ = uVar20;
    auVar4._8_4_ = uVar22;
    auVar4._12_4_ = uVar23;
    *param_3 = auVar4;
    goto LAB_147bfc342;
  case 2:
    lVar16 = *(longlong *)(param_2 + 0x10);
    uVar20 = *(undefined4 *)(lVar16 + 0x260);
    uVar21 = *(undefined4 *)(lVar16 + 0x264);
    uVar22 = *(undefined4 *)(lVar16 + 0x268);
    uVar23 = *(undefined4 *)(lVar16 + 0x26c);
    uVar24 = (undefined4)*(undefined8 *)(lVar16 + 0x270);
    uVar25 = (undefined4)((ulonglong)*(undefined8 *)(lVar16 + 0x270) >> 0x20);
LAB_147bfc339:
    auVar3._4_4_ = uVar21;
    auVar3._0_4_ = uVar20;
    auVar3._8_4_ = uVar22;
    auVar3._12_4_ = uVar23;
    *param_3 = auVar3;
    *(ulonglong *)param_3[1] = CONCAT44(uVar25,uVar24);
    goto LAB_147bfc342;
  case 3:
    if (*(byte *)(*(longlong *)(param_2 + 0x278) + 0x30) - 1 < 2) {
      plVar18 = *(longlong **)(param_2 + 0x2e8);
      if (plVar18 == (longlong *)0x0) {
        FUN_147bf673c(param_2);
        plVar18 = *(longlong **)(param_2 + 0x2e8);
        if (plVar18 == (longlong *)0x0) break;
      }
      if (plVar18[0x2e] != 0) {
        uVar19 = *(uint *)(param_1 + 0x144);
        if (((uVar19 == 0xffffffff) ||
            (lVar16 = (**(code **)(*plVar18 + 0x110))(plVar18,uVar19), lVar16 == 0)) ||
           (1.0 < *(float *)(lVar16 + 0x90))) {
          iVar17 = *(int *)(param_1 + 0x144) + 1;
          *(int *)(param_1 + 0x144) = iVar17;
          iVar13 = 0;
          if (iVar17 < *(int *)(*(longlong *)(param_2 + 0x2e8) + 0x18c)) {
            iVar13 = iVar17;
          }
          *(int *)(param_1 + 0x144) = iVar13;
          plVar18 = *(longlong **)(param_2 + 0x2e8);
          if (iVar13 != -1) {
            lVar16 = plVar18[2];
            uVar19 = (uint)*(ushort *)(plVar18[0x2e] + (longlong)iVar13 * 2);
            goto LAB_147bfc283;
          }
          lVar16 = plVar18[2];
        }
        else {
          plVar18 = *(longlong **)(param_2 + 0x2e8);
          lVar16 = plVar18[2];
          if (-1 < (int)uVar19) {
LAB_147bfc283:
            lVar14 = (**(code **)(*plVar18 + 0x110))(plVar18,uVar19);
            if (lVar14 != 0) {
              lVar16 = *(longlong *)(param_2 + 0x2e8);
              local_98 = *(double *)(lVar16 + 0x150);
              local_a8 = *(undefined4 *)(lVar16 + 0x140);
              uStack_a4 = *(undefined4 *)(lVar16 + 0x144);
              uStack_a0 = *(undefined4 *)(lVar16 + 0x148);
              uStack_9c = *(undefined4 *)(lVar16 + 0x14c);
              cVar12 = FUN_144afe924(lVar14 + 0x18);
              if (((cVar12 == '\0') && (cVar12 = FUN_144afe924(lVar14), cVar12 == '\0')) &&
                 (cVar12 = FUN_144afe924(&local_a8), cVar12 == '\0')) {
                dVar26 = *(double *)(lVar14 + 0x28);
                dVar28 = *(double *)(lVar14 + 0x20);
                *(double *)*param_3 =
                     *(double *)(lVar14 + 0x18) + (double)CONCAT44(uStack_a4,local_a8);
                *(double *)(*param_3 + 8) = dVar28 + (double)CONCAT44(uStack_9c,uStack_a0);
                *(double *)param_3[1] = dVar26 + local_98;
                goto LAB_147bfc342;
              }
              break;
            }
          }
        }
        uVar11 = *(undefined8 *)(lVar16 + 0x268);
        uVar1 = *(undefined8 *)(lVar16 + 0x270);
        *(undefined8 *)*param_3 = *(undefined8 *)(lVar16 + 0x260);
        *(undefined8 *)(*param_3 + 8) = uVar11;
        *(undefined8 *)param_3[1] = uVar1;
        goto LAB_147bfc342;
      }
    }
    break;
  case 4:
    if (*(longlong *)(param_1 + 0x34) != 0) {
      FUN_147bf673c(param_2);
      if (*(longlong *)(param_2 + 0x2e0) != 0) {
        lVar16 = *(longlong *)(*(longlong *)(param_2 + 0x2e0) + 0x1c8);
        puVar15 = &DAT_14c846480;
        if (lVar16 != 0) {
          puVar15 = (undefined8 *)(lVar16 + 0x240);
        }
        uVar20 = *(undefined4 *)(puVar15 + 4);
        uVar21 = *(undefined4 *)((longlong)puVar15 + 0x24);
        uVar22 = *(undefined4 *)(puVar15 + 5);
        uVar23 = *(undefined4 *)((longlong)puVar15 + 0x2c);
        uVar24 = (undefined4)puVar15[6];
        uVar25 = (undefined4)((ulonglong)puVar15[6] >> 0x20);
        goto LAB_147bfc339;
      }
    }
  }
  if ((*(byte *)(param_1 + 0x3c) & 1) == 0) {
    lVar16 = *(longlong *)(param_2 + 0x10);
    local_b0 = 0;
    local_b8 = 0;
    FUN_147a776dc(param_1 + 0x40,&local_a8,*(undefined4 *)(param_2 + 0x1a0),lVar16);
    dVar27 = (double)CONCAT44(uStack_a4,local_a8) * *(double *)(lVar16 + 0x280);
    dVar28 = (double)CONCAT44(uStack_9c,uStack_a0) * *(double *)(lVar16 + 0x288);
    dVar5 = local_98 * *(double *)(lVar16 + 0x290);
    dVar8 = *(double *)(lVar16 + 0x240);
    dVar9 = *(double *)(lVar16 + 0x248);
    dVar10 = *(double *)(lVar16 + 0x250);
    dVar26 = *(double *)(lVar16 + 600);
    dVar29 = dVar28 * dVar8 - dVar27 * dVar9;
    dVar31 = dVar5 * dVar9 - dVar28 * dVar10;
    dVar32 = dVar27 * dVar10 - dVar8 * dVar5;
    dVar31 = dVar31 + dVar31;
    dVar32 = dVar32 + dVar32;
    dVar29 = dVar29 + dVar29;
    dVar30 = (dVar10 * dVar31 - dVar8 * dVar29) + *(double *)(lVar16 + 600) * dVar32 + dVar28 +
             *(double *)(lVar16 + 0x268);
    dVar28 = *(double *)(lVar16 + 0x270);
    auVar6._8_4_ = SUB84(dVar30,0);
    auVar6._0_8_ = (dVar29 * dVar9 - dVar32 * dVar10) + dVar26 * dVar31 + dVar27 +
                   *(double *)(lVar16 + 0x260);
    auVar6._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
    *param_3 = auVar6;
    *(double *)param_3[1] = dVar29 * dVar26 + dVar5 + (dVar32 * dVar8 - dVar31 * dVar9) + dVar28;
  }
  else {
    local_b0 = 0;
    local_b8 = 0;
    FUN_147a776dc(param_1 + 0x40,&local_a8,*(undefined4 *)(param_2 + 0x1a0),
                  *(undefined8 *)(param_2 + 0x10));
    *(double *)param_3[1] = local_98;
    *(undefined4 *)*param_3 = local_a8;
    *(undefined4 *)(*param_3 + 4) = uStack_a4;
    *(undefined4 *)(*param_3 + 8) = uStack_a0;
    *(undefined4 *)(*param_3 + 0xc) = uStack_9c;
    lVar16 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0xb0);
    if (lVar16 == 0) {
      lVar16 = FUN_1448abda6();
    }
    iVar13 = *(int *)(lVar16 + 0x714);
    iVar17 = *(int *)(lVar16 + 0x718);
    dVar26 = *(double *)(*param_3 + 8);
    *(double *)*param_3 = *(double *)*param_3 - (double)*(int *)(lVar16 + 0x710);
    *(double *)(*param_3 + 8) = dVar26 - (double)iVar13;
    *(double *)param_3[1] = *(double *)param_3[1] - (double)iVar17;
  }
LAB_147bfc342:
  if (param_7 == '\0') {
LAB_147bfc347:
    if ((*(byte *)(param_1 + 0x108) & 1) == 0) goto LAB_147bfc354;
    goto LAB_147bfc45e;
  }
LAB_147bfc354:
  switch(*(undefined1 *)(param_1 + 0xa4)) {
  case 0:
  case 3:
    lVar16 = *(longlong *)(param_2 + 0x10);
    dVar26 = *(double *)(lVar16 + 0x280) * 1.0;
    dVar28 = *(double *)(lVar16 + 0x288) * 0.0;
    uVar20 = 0;
    uVar21 = 0;
LAB_147bfc38d:
    dVar29 = (double)CONCAT44(uVar21,uVar20) * *(double *)(lVar16 + 0x290);
    dVar8 = *(double *)(lVar16 + 0x240);
    dVar9 = *(double *)(lVar16 + 0x248);
    dVar10 = *(double *)(lVar16 + 0x250);
    dVar5 = *(double *)(lVar16 + 600);
    dVar32 = dVar28 * dVar8 - dVar26 * dVar9;
    dVar27 = dVar29 * dVar9 - dVar28 * dVar10;
    dVar30 = dVar26 * dVar10 - dVar8 * dVar29;
    dVar27 = dVar27 + dVar27;
    dVar30 = dVar30 + dVar30;
    dVar32 = dVar32 + dVar32;
    dVar28 = (dVar10 * dVar27 - dVar8 * dVar32) + *(double *)(lVar16 + 600) * dVar30 + dVar28;
    auVar7._8_4_ = SUB84(dVar28,0);
    auVar7._0_8_ = (dVar32 * dVar9 - dVar30 * dVar10) + dVar5 * dVar27 + dVar26;
    auVar7._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
    *(undefined1 (*) [16])(param_3[1] + 8) = auVar7;
    *(double *)(param_3[2] + 8) = dVar32 * dVar5 + dVar29 + (dVar30 * dVar8 - dVar27 * dVar9);
    break;
  case 1:
    if (*(int *)(param_2 + 0x308) < 1) goto switchD_147bfc373_default;
    puVar2 = *(undefined4 **)(param_2 + 0x300);
    if (param_6 < *(int *)(param_2 + 0x308)) {
      *(undefined8 *)(param_3[2] + 8) = *(undefined8 *)(puVar2 + (longlong)param_6 * 6 + 4);
      puVar2 = puVar2 + (longlong)param_6 * 6;
      uVar20 = *puVar2;
      uVar21 = puVar2[1];
      uVar22 = puVar2[2];
      uVar23 = puVar2[3];
    }
    else {
      *(undefined8 *)(param_3[2] + 8) = *(undefined8 *)(puVar2 + 4);
      uVar20 = *puVar2;
      uVar21 = puVar2[1];
      uVar22 = puVar2[2];
      uVar23 = puVar2[3];
    }
    goto LAB_147bfc537;
  case 2:
    local_b0 = 0;
    local_b8 = 0;
    FUN_147a776dc(param_1 + 0xa8,&local_a8,*(undefined4 *)(param_4 + 0x90),
                  *(undefined8 *)(param_2 + 0x10));
    *(double *)(param_3[2] + 8) = local_98;
    uVar20 = local_a8;
    uVar21 = uStack_a4;
    uVar22 = uStack_a0;
    uVar23 = uStack_9c;
LAB_147bfc537:
    *(undefined4 *)(param_3[1] + 8) = uVar20;
    *(undefined4 *)(param_3[1] + 0xc) = uVar21;
    *(undefined4 *)param_3[2] = uVar22;
    *(undefined4 *)(param_3[2] + 4) = uVar23;
    break;
  default:
switchD_147bfc373_default:
    local_b0 = 0;
    local_b8 = 0;
    FUN_147a776dc(param_1 + 0xa8,&local_a8,*(undefined4 *)(param_4 + 0x90),
                  *(undefined8 *)(param_2 + 0x10));
    *(double *)(param_3[2] + 8) = local_98;
    *(undefined4 *)(param_3[1] + 8) = local_a8;
    *(undefined4 *)(param_3[1] + 0xc) = uStack_a4;
    *(undefined4 *)param_3[2] = uStack_a0;
    *(undefined4 *)(param_3[2] + 4) = uStack_9c;
    if ((*(byte *)(param_1 + 0x3c) & 1) == 0) {
      lVar16 = *(longlong *)(param_2 + 0x10);
      uVar20 = (undefined4)*(undefined8 *)(param_3[2] + 8);
      uVar21 = (undefined4)((ulonglong)*(undefined8 *)(param_3[2] + 8) >> 0x20);
      dVar26 = *(double *)(param_3[1] + 8) * *(double *)(lVar16 + 0x280);
      dVar28 = *(double *)param_3[2] * *(double *)(lVar16 + 0x288);
      goto LAB_147bfc38d;
    }
  }
  if (param_7 == '\0') {
LAB_147bfc45e:
    if ((*(byte *)(param_1 + 0x140) & 1) != 0) goto LAB_147bfc4a1;
  }
  if ((*(char *)(param_1 + 0xa4) == '\x01') && (0 < *(int *)(param_2 + 0x318))) {
    if (param_6 < *(int *)(param_2 + 0x318)) {
      uVar20 = (*(undefined4 **)(param_2 + 0x310))[param_6];
    }
    else {
      uVar20 = **(undefined4 **)(param_2 + 0x310);
    }
  }
  else {
    uVar20 = FUN_147a77524(param_1 + 0x110,*(undefined4 *)(param_4 + 0x90),
                           *(undefined8 *)(param_2 + 0x10),0);
  }
  *(undefined4 *)param_3[3] = uVar20;
LAB_147bfc4a1:
  if ((local_90 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147bfc89a FUN_147bfc89a body=547 status=ok
// SIG undefined FUN_147bfc89a(void)

void FUN_147bfc89a(longlong param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 *local_100;
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  longlong *local_b0;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_4c = param_3;
  if (((*(byte *)(param_1 + 0xa0) & 1) == 0) || ((*(byte *)(param_1 + 0x108) & 1) == 0)) {
    if (param_2 == 0) goto LAB_147bfc8f1;
  }
  else if ((param_2 == 0) || ((*(uint *)(param_1 + 0x140) & 1) != 0)) goto LAB_147bfc8f1;
  if (((*(byte *)(param_2 + 0x161) & 1) != 0) && (0 < (longlong)*(int *)(param_2 + 0x18c))) {
    local_b0 = *(longlong **)(param_2 + 0x278);
    lVar2 = *(longlong *)(param_2 + 0x168);
    lVar3 = *(longlong *)(param_2 + 0x170);
    iVar1 = *(int *)(param_2 + 0x188);
    uVar5 = (longlong)*(int *)(param_2 + 0x18c);
    do {
      uVar6 = (ulonglong)((uint)*(ushort *)(lVar3 + -2 + uVar5 * 2) * iVar1);
      if ((*(byte *)(lVar2 + 0x6f + uVar6) & 4) == 0) {
        lVar7 = uVar6 + lVar2;
        local_58 = 0;
        local_60 = 0;
        local_68 = 0;
        local_70 = 0;
        local_78 = 0;
        local_80 = 0;
        local_88 = 0;
        local_90 = 0;
        local_98 = 0;
        local_a0 = 0;
        local_a4 = *(undefined4 *)(param_2 + 0x24);
        local_c0 = &local_a0;
        local_c8 = &local_98;
        local_d0 = &local_90;
        local_d8 = &local_88;
        local_e0 = &local_80;
        local_e8 = &local_78;
        local_f0 = &local_70;
        local_f8 = &local_68;
        local_100 = &local_60;
        local_108 = &local_58;
        (**(code **)(*local_b0 + 0x3e0))(local_b0,param_2,lVar7,&local_a4);
        local_100 = (undefined8 *)CONCAT44(local_100._4_4_,(int)uVar5 + -1);
        local_108 = (undefined8 *)&local_4c;
        local_f8 = (undefined8 *)((ulonglong)local_f8 & 0xffffffffffffff00);
        FUN_147bfc0d4(param_1,param_2,local_58,lVar7);
      }
      bVar4 = 1 < uVar5;
      uVar5 = uVar5 - 1;
    } while (bVar4);
  }
LAB_147bfc8f1:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147bfcabe FUN_147bfcabe body=82 status=ok
// SIG undefined FUN_147bfcabe(void)

char FUN_147bfcabe(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  
  cVar2 = (*(char *)(param_1 + 0x30) == '\x03') * '\x04';
  cVar3 = cVar2;
  if (param_2 != 0) {
    lVar1 = FUN_145b51720();
    if (((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) &&
       (cVar3 = cVar2 + '\x04', *(char *)(param_2 + 0x30) != '\x02')) {
      cVar3 = cVar2;
    }
  }
  return cVar3;
}



// FUNCTION 147bfcb10 FUN_147bfcb10 body=158 status=ok
// SIG undefined FUN_147bfcb10(void)

void FUN_147bfcb10(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar1 = (longlong *)(param_2 + 0x6a0);
  lVar3 = (longlong)*(int *)(param_2 + 0x6a8);
  if (0 < lVar3) {
    lVar4 = 0;
    do {
      if (*(longlong *)(*plVar1 + lVar4) == *(longlong *)(param_1 + 0x34)) {
        return;
      }
      lVar4 = lVar4 + 0xe0;
    } while (lVar3 * 0xe0 - lVar4 != 0);
  }
  uVar2 = *(int *)(param_2 + 0x6a8) + 1;
  *(uint *)(param_2 + 0x6a8) = uVar2;
  if (*(uint *)(param_2 + 0x6ac) < uVar2) {
    FUN_147c0c1bc(plVar1);
  }
  lVar3 = lVar3 * 0xe0;
  memset((void *)(*plVar1 + lVar3),0,0xe0);
  *(undefined8 *)(*plVar1 + lVar3) = *(undefined8 *)(param_1 + 0x34);
  *(undefined1 *)(*plVar1 + 8 + lVar3) = 6;
  *(undefined8 *)(*plVar1 + 0x50 + lVar3) = 0;
  return;
}



// FUNCTION 147bfcbae FUN_147bfcbae body=220 status=ok
// SIG undefined FUN_147bfcbae(void)

/* WARNING: Removing unreachable block (ram,0x000147bfcc59) */

void FUN_147bfcbae(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x30) == '\x04') {
    FUN_1400021e4(param_1 + 0x34,&local_38);
    puVar4 = local_38;
    if (local_30 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    FUN_140002266(&local_28,L"BeamSource : Actor: %s\n",puVar4);
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_1447a1bd6(param_2,iVar1);
    }
    lVar2 = *param_2;
    lVar3 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar2 + lVar3) = 0;
    *(undefined8 *)(lVar2 + lVar3) = local_28;
    *(undefined4 *)(lVar2 + 8 + lVar3) = (undefined4)local_20;
    *(undefined4 *)(lVar2 + 0xc + lVar3) = local_20._4_4_;
    local_20 = 0;
    local_28 = 0;
    if (local_38 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bfcc8c FUN_147bfcc8c body=451 status=ok
// SIG undefined FUN_147bfcc8c(void)

void FUN_147bfcc8c(longlong param_1)

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
  cVar1 = FUN_147a7750a(param_1 + 0x40);
  if (cVar1 == '\0') {
    FUN_1446f470e(&local_20,L"DistributionTarget",1);
    local_40 = 0;
    local_48 = 0;
    lVar2 = FUN_147bfacf3(param_1,local_20,0,0);
    *(undefined8 *)(lVar2 + 0x38) = 0x4049000000000000;
    *(undefined8 *)(lVar2 + 0x40) = 0x4049000000000000;
    *(undefined8 *)(lVar2 + 0x48) = 0x4049000000000000;
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
    *(longlong *)(param_1 + 0x98) = lVar2;
  }
  cVar1 = FUN_147a7750a(param_1 + 0xa8);
  if (cVar1 == '\0') {
    FUN_1446f470e(&local_28,L"DistributionTargetTangent",1);
    local_40 = 0;
    local_48 = 0;
    lVar2 = FUN_147bfacf3(param_1,local_28,0,0);
    *(undefined8 *)(lVar2 + 0x38) = 0x3ff0000000000000;
    *(undefined8 *)(lVar2 + 0x40) = 0;
    *(undefined8 *)(lVar2 + 0x48) = 0;
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
    *(longlong *)(param_1 + 0x100) = lVar2;
  }
  cVar1 = FUN_147a774f0(param_1 + 0x110);
  if (cVar1 == '\0') {
    FUN_1446f470e(&local_30,L"DistributionTargetStrength",1);
    local_40 = 0;
    local_48 = 0;
    lVar2 = FUN_147bf866f(param_1,local_30,0,0);
    *(undefined4 *)(lVar2 + 0x38) = 0x41c80000;
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
    *(longlong *)(param_1 + 0x138) = lVar2;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bfce50 FUN_147bfce50 body=363 status=ok
// SIG undefined FUN_147bfce50(void)

void FUN_147bfce50(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_4c = param_3;
  if ((param_2 != 0) && ((*(byte *)(param_2 + 0x161) & 1) != 0)) {
    local_f8 = &local_58;
    local_58 = 0;
    local_f0 = &local_60;
    local_60 = 0;
    local_e8 = &local_68;
    local_68 = 0;
    local_e0 = &local_70;
    local_70 = 0;
    local_d8 = &local_78;
    local_78 = 0;
    local_d0 = &local_80;
    local_80 = 0;
    local_c8 = &local_88;
    local_88 = 0;
    local_c0 = &local_90;
    local_90 = 0;
    local_b8 = &local_98;
    local_98 = 0;
    local_b0 = &local_a0;
    local_a0 = 0;
    local_a4 = *(undefined4 *)(param_2 + 0x24);
    (**(code **)(**(longlong **)(param_2 + 0x278) + 0x3e0))
              (*(longlong **)(param_2 + 0x278),param_2,param_5);
    local_f0 = (undefined8 *)CONCAT44(local_f0._4_4_,*(undefined4 *)(param_2 + 0x18c));
    local_f8 = (undefined8 *)&local_4c;
    local_e8 = (undefined8 *)CONCAT71(local_e8._1_7_,1);
    FUN_147bfcfbc(param_1,param_2,local_58,param_5);
  }
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bfcfbc FUN_147bfcfbc body=2383 status=ok
// SIG undefined FUN_147bfcfbc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147bfcfbc(longlong param_1,longlong param_2,double *param_3,longlong param_4,int *param_5,
                  int param_6,char param_7)

{
  undefined1 auVar1 [16];
  byte bVar2;
  longlong lVar3;
  undefined4 *puVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  char cVar12;
  int iVar13;
  longlong lVar14;
  undefined8 *puVar15;
  int iVar16;
  longlong *plVar17;
  uint uVar18;
  undefined4 uVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  double local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((((param_2 != 0) && ((*(byte *)(param_2 + 0x161) & 1) != 0)) &&
      (*(longlong *)(param_2 + 0x278) != 0)) && (*(char *)(param_1 + 0x30) == '\x03')) {
    *param_5 = *param_5 + 4;
  }
  if ((param_7 == '\0') && ((*(byte *)(param_1 + 0xa0) & 2) != 0)) {
LAB_147bfd21c:
    if ((*(byte *)(param_1 + 0x108) & 1) == 0) goto LAB_147bfd229;
    goto LAB_147bfd332;
  }
  bVar2 = *(byte *)(*(longlong *)(param_2 + 0x278) + 0x30);
  if (bVar2 == 0) {
    fVar20 = (float)FUN_147a77524(*(longlong *)(param_2 + 0x278) + 0x60,param_2,
                                  *(undefined8 *)(param_2 + 0x10),0);
    lVar14 = *(longlong *)(param_2 + 0x10);
    dVar26 = *(double *)(lVar14 + 0x280) * 1.0;
    dVar28 = *(double *)(lVar14 + 0x288) * 0.0;
    dVar5 = *(double *)(lVar14 + 0x290) * 0.0;
    dVar29 = *(double *)(lVar14 + 0x240);
    dVar10 = *(double *)(lVar14 + 0x248);
    dVar11 = *(double *)(lVar14 + 0x250);
    dVar6 = *(double *)(lVar14 + 600);
    dVar24 = dVar28 * dVar29 - dVar26 * dVar10;
    dVar27 = dVar5 * dVar10 - dVar28 * dVar11;
    dVar25 = dVar26 * dVar11 - dVar29 * dVar5;
    dVar27 = dVar27 + dVar27;
    dVar25 = dVar25 + dVar25;
    dVar24 = dVar24 + dVar24;
    dVar5 = dVar24 * dVar6 + dVar5 + (dVar25 * dVar29 - dVar27 * dVar10);
    dVar6 = (dVar24 * dVar10 - dVar25 * dVar11) + dVar6 * dVar27 + dVar26;
    dVar24 = (dVar11 * dVar27 - dVar29 * dVar24) + *(double *)(lVar14 + 600) * dVar25 + dVar28;
    dVar27 = dVar5 * dVar5 + dVar6 * dVar6 + dVar24 * dVar24;
    if (9.99999993922529e-09 < dVar27) {
      dVar27 = 1.0 / SQRT(dVar27);
      dVar6 = dVar6 * dVar27;
      dVar24 = dVar24 * dVar27;
      dVar5 = dVar5 * dVar27;
    }
    dVar27 = (double)(float)(-(uint)(ABS(fVar20) < 0.0001) & 0x3a83126f |
                            ~-(uint)(ABS(fVar20) < 0.0001) & (uint)fVar20);
    dVar5 = dVar5 * dVar27 + param_3[2];
    param_3[7] = dVar6 * dVar27 + *param_3;
    param_3[8] = dVar24 * dVar27 + param_3[1];
LAB_147bfd7e8:
    param_3[9] = dVar5;
  }
  else {
    cVar12 = *(char *)(param_1 + 0x30);
    if (cVar12 == '\x01') {
      if (*(int *)(param_2 + 0x388) < 1) goto LAB_147bfd60f;
      puVar4 = *(undefined4 **)(param_2 + 0x380);
      if (param_6 < *(int *)(param_2 + 0x388)) {
        param_3[9] = *(double *)(puVar4 + (longlong)param_6 * 6 + 4);
        puVar4 = puVar4 + (longlong)param_6 * 6;
        uVar19 = *puVar4;
        uVar21 = puVar4[1];
        uVar22 = puVar4[2];
        uVar23 = puVar4[3];
      }
      else {
        param_3[9] = *(double *)(puVar4 + 4);
        uVar19 = *puVar4;
        uVar21 = puVar4[1];
        uVar22 = puVar4[2];
        uVar23 = puVar4[3];
      }
      auVar1._4_4_ = uVar21;
      auVar1._0_4_ = uVar19;
      auVar1._8_4_ = uVar22;
      auVar1._12_4_ = uVar23;
      *(undefined1 (*) [16])(param_3 + 7) = auVar1;
    }
    else {
      if (cVar12 == '\x03') {
        if (bVar2 < 3) {
          plVar17 = *(longlong **)(param_2 + 0x368);
          if (plVar17 == (longlong *)0x0) {
            FUN_147bf68cc(param_2);
            plVar17 = *(longlong **)(param_2 + 0x368);
            if (plVar17 == (longlong *)0x0) goto LAB_147bfd60f;
          }
          dVar6 = DAT_14c8464f0;
          if (plVar17[0x2e] != 0) {
            dVar24 = DAT_14c8464e0;
            uVar19 = DAT_14c8464e0._8_4_;
            uVar21 = DAT_14c8464e0._12_4_;
            uVar18 = *(uint *)(param_1 + 0x148);
            if (((uVar18 == 0xffffffff) ||
                (lVar14 = (**(code **)(*plVar17 + 0x110))(plVar17,uVar18), lVar14 == 0)) ||
               (1.0 < *(float *)(lVar14 + 0x90))) {
              iVar16 = *(int *)(param_1 + 0x148) + 1;
              *(int *)(param_1 + 0x148) = iVar16;
              iVar13 = 0;
              if (iVar16 < *(int *)(*(longlong *)(param_2 + 0x368) + 0x18c)) {
                iVar13 = iVar16;
              }
              *(int *)(param_1 + 0x148) = iVar13;
              if (iVar13 != -1) {
                plVar17 = *(longlong **)(param_2 + 0x368);
                uVar18 = (uint)*(ushort *)(plVar17[0x2e] + (longlong)iVar13 * 2);
                goto LAB_147bfd116;
              }
LAB_147bfd43e:
              lVar14 = *(longlong *)(*(longlong *)(param_2 + 0x368) + 0x10);
              auVar1 = *(undefined1 (*) [16])(lVar14 + 0x260);
              dVar24 = auVar1._0_8_;
              uVar19 = auVar1._8_4_;
              uVar21 = auVar1._12_4_;
              dVar6 = *(double *)(lVar14 + 0x270);
            }
            else {
              if ((int)uVar18 < 0) goto LAB_147bfd43e;
              plVar17 = *(longlong **)(param_2 + 0x368);
LAB_147bfd116:
              lVar14 = (**(code **)(*plVar17 + 0x110))(plVar17,uVar18);
              if (lVar14 == 0) goto LAB_147bfd43e;
              lVar3 = *(longlong *)(param_2 + 0x368);
              local_a8 = *(double *)(lVar3 + 0x150);
              local_b8 = *(double *)(lVar3 + 0x140);
              uStack_b0 = *(double *)(lVar3 + 0x148);
              cVar12 = FUN_144afe924(lVar14 + 0x18);
              if (((cVar12 == '\0') && (cVar12 = FUN_144afe924(lVar14), cVar12 == '\0')) &&
                 (cVar12 = FUN_144afe924(&local_b8), cVar12 == '\0')) {
                dVar6 = *(double *)(lVar14 + 0x28) + local_a8;
                dVar5 = *(double *)(lVar14 + 0x20) + uStack_b0;
                dVar24 = *(double *)(lVar14 + 0x18) + local_b8;
                uVar19 = SUB84(dVar5,0);
                uVar21 = (undefined4)((ulonglong)dVar5 >> 0x20);
              }
            }
            auVar7._8_4_ = uVar19;
            auVar7._0_8_ = dVar24;
            auVar7._12_4_ = uVar21;
            *(undefined1 (*) [16])(param_3 + 7) = auVar7;
            param_3[9] = dVar6;
            goto LAB_147bfd217;
          }
        }
      }
      else if ((cVar12 == '\x04') && (*(longlong *)(param_1 + 0x34) != 0)) {
        FUN_147bf68cc(param_2);
        if (*(longlong *)(param_2 + 0x360) != 0) {
          lVar14 = *(longlong *)(*(longlong *)(param_2 + 0x360) + 0x1c8);
          puVar15 = &DAT_14c846480;
          if (lVar14 != 0) {
            puVar15 = (undefined8 *)(lVar14 + 0x240);
          }
          dVar24 = (double)puVar15[5];
          dVar6 = (double)puVar15[6];
          param_3[7] = (double)puVar15[4];
          param_3[8] = dVar24;
          param_3[9] = dVar6;
          goto LAB_147bfd217;
        }
      }
LAB_147bfd60f:
      if ((*(byte *)(param_1 + 0xa0) & 1) != 0) {
        local_c0 = 0;
        local_c8 = 0;
        FUN_147a776dc(param_1 + 0x40,&local_b8,*(undefined4 *)(param_2 + 0x1a0),
                      *(undefined8 *)(param_2 + 0x10));
        param_3[9] = local_a8;
        *(undefined4 *)(param_3 + 7) = (undefined4)local_b8;
        *(undefined4 *)((longlong)param_3 + 0x3c) = local_b8._4_4_;
        *(undefined4 *)(param_3 + 8) = (undefined4)uStack_b0;
        *(undefined4 *)((longlong)param_3 + 0x44) = uStack_b0._4_4_;
        lVar14 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0xb0);
        if (lVar14 == 0) {
          lVar14 = FUN_1448abda6();
        }
        iVar13 = *(int *)(lVar14 + 0x714);
        iVar16 = *(int *)(lVar14 + 0x718);
        param_3[7] = param_3[7] - (double)*(int *)(lVar14 + 0x710);
        param_3[8] = param_3[8] - (double)iVar13;
        dVar5 = param_3[9] - (double)iVar16;
        goto LAB_147bfd7e8;
      }
      lVar14 = *(longlong *)(param_2 + 0x10);
      local_c0 = 0;
      local_c8 = 0;
      FUN_147a776dc(param_1 + 0x40,&local_b8,*(undefined4 *)(param_2 + 0x1a0),lVar14);
      dVar27 = local_b8 * *(double *)(lVar14 + 0x280);
      dVar24 = uStack_b0 * *(double *)(lVar14 + 0x288);
      dVar5 = local_a8 * *(double *)(lVar14 + 0x290);
      dVar11 = *(double *)(lVar14 + 0x240);
      dVar26 = *(double *)(lVar14 + 0x248);
      dVar28 = *(double *)(lVar14 + 0x250);
      dVar6 = *(double *)(lVar14 + 600);
      dVar25 = dVar24 * dVar11 - dVar27 * dVar26;
      dVar30 = dVar5 * dVar26 - dVar24 * dVar28;
      dVar29 = dVar27 * dVar28 - dVar11 * dVar5;
      dVar30 = dVar30 + dVar30;
      dVar29 = dVar29 + dVar29;
      dVar25 = dVar25 + dVar25;
      dVar10 = (dVar28 * dVar30 - dVar11 * dVar25) + *(double *)(lVar14 + 600) * dVar29 + dVar24 +
               *(double *)(lVar14 + 0x268);
      dVar24 = *(double *)(lVar14 + 0x270);
      auVar9._8_4_ = SUB84(dVar10,0);
      auVar9._0_8_ = (dVar25 * dVar26 - dVar29 * dVar28) + dVar6 * dVar30 + dVar27 +
                     *(double *)(lVar14 + 0x260);
      auVar9._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      *(undefined1 (*) [16])(param_3 + 7) = auVar9;
      param_3[9] = dVar25 * dVar6 + dVar5 + (dVar29 * dVar11 - dVar30 * dVar26) + dVar24;
    }
  }
LAB_147bfd217:
  if (param_7 == '\0') goto LAB_147bfd21c;
LAB_147bfd229:
  switch(*(undefined1 *)(param_1 + 0xa4)) {
  case 0:
  case 3:
    lVar14 = *(longlong *)(param_2 + 0x10);
    dVar6 = *(double *)(lVar14 + 0x280) * 1.0;
    dVar24 = *(double *)(lVar14 + 0x288) * 0.0;
    uVar19 = 0;
    uVar21 = 0;
LAB_147bfd261:
    dVar27 = (double)CONCAT44(uVar21,uVar19) * *(double *)(lVar14 + 0x290);
    dVar10 = *(double *)(lVar14 + 0x240);
    dVar11 = *(double *)(lVar14 + 0x248);
    dVar26 = *(double *)(lVar14 + 0x250);
    dVar5 = *(double *)(lVar14 + 600);
    dVar25 = dVar24 * dVar10 - dVar6 * dVar11;
    dVar28 = dVar27 * dVar11 - dVar24 * dVar26;
    dVar29 = dVar6 * dVar26 - dVar10 * dVar27;
    dVar28 = dVar28 + dVar28;
    dVar29 = dVar29 + dVar29;
    dVar25 = dVar25 + dVar25;
    dVar24 = (dVar26 * dVar28 - dVar10 * dVar25) + *(double *)(lVar14 + 600) * dVar29 + dVar24;
    auVar8._8_4_ = SUB84(dVar24,0);
    auVar8._0_8_ = (dVar25 * dVar11 - dVar29 * dVar26) + dVar5 * dVar28 + dVar6;
    auVar8._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
    *(undefined1 (*) [16])(param_3 + 10) = auVar8;
    param_3[0xc] = dVar25 * dVar5 + dVar27 + (dVar29 * dVar10 - dVar28 * dVar11);
    break;
  case 1:
    if (*(int *)(param_2 + 0x398) < 1) goto switchD_147bfd248_default;
    puVar4 = *(undefined4 **)(param_2 + 0x390);
    if (param_6 < *(int *)(param_2 + 0x398)) {
      param_3[0xc] = *(double *)(puVar4 + (longlong)param_6 * 6 + 4);
      puVar4 = puVar4 + (longlong)param_6 * 6;
      uVar19 = *puVar4;
      uVar21 = puVar4[1];
      uVar22 = puVar4[2];
      uVar23 = puVar4[3];
    }
    else {
      param_3[0xc] = *(double *)(puVar4 + 4);
      uVar19 = *puVar4;
      uVar21 = puVar4[1];
      uVar22 = puVar4[2];
      uVar23 = puVar4[3];
    }
    goto LAB_147bfd3ff;
  case 2:
    local_c0 = 0;
    local_c8 = 0;
    FUN_147a776dc(param_1 + 0xa8,&local_b8,*(undefined4 *)(param_4 + 0x90),
                  *(undefined8 *)(param_2 + 0x10));
    param_3[0xc] = local_a8;
    uVar19 = (undefined4)local_b8;
    uVar21 = local_b8._4_4_;
    uVar22 = (undefined4)uStack_b0;
    uVar23 = uStack_b0._4_4_;
LAB_147bfd3ff:
    *(undefined4 *)(param_3 + 10) = uVar19;
    *(undefined4 *)((longlong)param_3 + 0x54) = uVar21;
    *(undefined4 *)(param_3 + 0xb) = uVar22;
    *(undefined4 *)((longlong)param_3 + 0x5c) = uVar23;
    break;
  default:
switchD_147bfd248_default:
    local_c0 = 0;
    local_c8 = 0;
    FUN_147a776dc(param_1 + 0xa8,&local_b8,*(undefined4 *)(param_4 + 0x90),
                  *(undefined8 *)(param_2 + 0x10));
    param_3[0xc] = local_a8;
    *(undefined4 *)(param_3 + 10) = (undefined4)local_b8;
    *(undefined4 *)((longlong)param_3 + 0x54) = local_b8._4_4_;
    *(undefined4 *)(param_3 + 0xb) = (undefined4)uStack_b0;
    *(undefined4 *)((longlong)param_3 + 0x5c) = uStack_b0._4_4_;
    if ((*(byte *)(param_1 + 0xa0) & 1) == 0) {
      lVar14 = *(longlong *)(param_2 + 0x10);
      uVar19 = SUB84(param_3[0xc],0);
      uVar21 = (undefined4)((ulonglong)param_3[0xc] >> 0x20);
      dVar6 = param_3[10] * *(double *)(lVar14 + 0x280);
      dVar24 = param_3[0xb] * *(double *)(lVar14 + 0x288);
      goto LAB_147bfd261;
    }
  }
  if (param_7 == '\0') {
LAB_147bfd332:
    if ((*(byte *)(param_1 + 0x140) & 1) != 0) goto LAB_147bfd375;
  }
  if ((*(char *)(param_1 + 0xa4) == '\x01') && (0 < *(int *)(param_2 + 0x358))) {
    if (param_6 < *(int *)(param_2 + 0x358)) {
      uVar19 = (*(undefined4 **)(param_2 + 0x350))[param_6];
    }
    else {
      uVar19 = **(undefined4 **)(param_2 + 0x350);
    }
  }
  else {
    uVar19 = FUN_147a77524(param_1 + 0x110);
  }
  *(undefined4 *)(param_3 + 0xd) = uVar19;
LAB_147bfd375:
  if ((local_a0 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147bfd90c FUN_147bfd90c body=547 status=ok
// SIG undefined FUN_147bfd90c(void)

void FUN_147bfd90c(longlong param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 *local_100;
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  longlong *local_b0;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_4c = param_3;
  if (((*(byte *)(param_1 + 0xa0) & 2) == 0) || ((*(byte *)(param_1 + 0x108) & 1) == 0)) {
    if (param_2 == 0) goto LAB_147bfd963;
  }
  else if ((param_2 == 0) || ((*(uint *)(param_1 + 0x140) & 1) != 0)) goto LAB_147bfd963;
  if (((*(byte *)(param_2 + 0x161) & 1) != 0) && (0 < (longlong)*(int *)(param_2 + 0x18c))) {
    local_b0 = *(longlong **)(param_2 + 0x278);
    lVar2 = *(longlong *)(param_2 + 0x168);
    lVar3 = *(longlong *)(param_2 + 0x170);
    iVar1 = *(int *)(param_2 + 0x188);
    uVar5 = (longlong)*(int *)(param_2 + 0x18c);
    do {
      uVar6 = (ulonglong)((uint)*(ushort *)(lVar3 + -2 + uVar5 * 2) * iVar1);
      if ((*(byte *)(lVar2 + 0x6f + uVar6) & 4) == 0) {
        lVar7 = uVar6 + lVar2;
        local_58 = 0;
        local_60 = 0;
        local_68 = 0;
        local_70 = 0;
        local_78 = 0;
        local_80 = 0;
        local_88 = 0;
        local_90 = 0;
        local_98 = 0;
        local_a0 = 0;
        local_a4 = *(undefined4 *)(param_2 + 0x24);
        local_c0 = &local_a0;
        local_c8 = &local_98;
        local_d0 = &local_90;
        local_d8 = &local_88;
        local_e0 = &local_80;
        local_e8 = &local_78;
        local_f0 = &local_70;
        local_f8 = &local_68;
        local_100 = &local_60;
        local_108 = &local_58;
        (**(code **)(*local_b0 + 0x3e0))(local_b0,param_2,lVar7,&local_a4);
        local_100 = (undefined8 *)CONCAT44(local_100._4_4_,(int)uVar5 + -1);
        local_108 = (undefined8 *)&local_4c;
        local_f8 = (undefined8 *)((ulonglong)local_f8 & 0xffffffffffffff00);
        FUN_147bfcfbc(param_1,param_2,local_58,lVar7);
      }
      bVar4 = 1 < uVar5;
      uVar5 = uVar5 - 1;
    } while (bVar4);
  }
LAB_147bfd963:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147bfdb30 FUN_147bfdb30 body=158 status=ok
// SIG undefined FUN_147bfdb30(void)

void FUN_147bfdb30(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar1 = (longlong *)(param_2 + 0x6a0);
  lVar3 = (longlong)*(int *)(param_2 + 0x6a8);
  if (0 < lVar3) {
    lVar4 = 0;
    do {
      if (*(longlong *)(*plVar1 + lVar4) == *(longlong *)(param_1 + 0x34)) {
        return;
      }
      lVar4 = lVar4 + 0xe0;
    } while (lVar3 * 0xe0 - lVar4 != 0);
  }
  uVar2 = *(int *)(param_2 + 0x6a8) + 1;
  *(uint *)(param_2 + 0x6a8) = uVar2;
  if (*(uint *)(param_2 + 0x6ac) < uVar2) {
    FUN_147c0c1bc(plVar1);
  }
  lVar3 = lVar3 * 0xe0;
  memset((void *)(*plVar1 + lVar3),0,0xe0);
  *(undefined8 *)(*plVar1 + lVar3) = *(undefined8 *)(param_1 + 0x34);
  *(undefined1 *)(*plVar1 + 8 + lVar3) = 6;
  *(undefined8 *)(*plVar1 + 0x50 + lVar3) = 0;
  return;
}



// FUNCTION 147bfdbce FUN_147bfdbce body=220 status=ok
// SIG undefined FUN_147bfdbce(void)

/* WARNING: Removing unreachable block (ram,0x000147bfdc79) */

void FUN_147bfdbce(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x30) == '\x04') {
    FUN_1400021e4(param_1 + 0x34,&local_38);
    puVar4 = local_38;
    if (local_30 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    FUN_140002266(&local_28,L"BeamTarget : Actor: %s\n",puVar4);
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_1447a1bd6(param_2,iVar1);
    }
    lVar2 = *param_2;
    lVar3 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar2 + lVar3) = 0;
    *(undefined8 *)(lVar2 + lVar3) = local_28;
    *(undefined4 *)(lVar2 + 8 + lVar3) = (undefined4)local_20;
    *(undefined4 *)(lVar2 + 0xc + lVar3) = local_20._4_4_;
    local_20 = 0;
    local_28 = 0;
    if (local_38 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bfdcb8 FUN_147bfdcb8 body=234 status=ok
// SIG undefined FUN_147bfdcb8(void)

void FUN_147bfdcb8(longlong param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  longlong lVar7;
  
  puVar6 = &DAT_14caf34d0;
  if (*(char *)(param_1 + 0x150) != '\0') {
    puVar6 = &DAT_14caf34f0;
  }
  lVar7 = *(longlong *)(puVar6 + 0x10);
  lVar5 = *(longlong *)(param_1 + 0x110);
  if (lVar5 != lVar7) {
    *(longlong *)(param_1 + 0x110) = lVar7;
    if (lVar7 != 0) {
      LOCK();
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
      UNLOCK();
    }
    if (lVar5 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar5 + 8);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  lVar7 = param_1 + 0x10;
  iVar4 = *(int *)(param_1 + 0x98);
  *(uint *)(param_1 + 0x98) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x9c) < iVar4 + 1U) {
    FUN_14472e0ae(lVar7,iVar4);
  }
  lVar5 = *(longlong *)(param_1 + 0x90);
  if (*(longlong *)(param_1 + 0x90) == 0) {
    lVar5 = lVar7;
  }
  puVar2 = (undefined8 *)(lVar5 + (longlong)iVar4 * 0x10);
  *puVar2 = 0;
  puVar2[1] = 0;
  iVar4 = *(int *)(param_1 + 0x98);
  *(uint *)(param_1 + 0x98) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x9c) < iVar4 + 1U) {
    FUN_14472e0ae(lVar7,iVar4);
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    lVar7 = *(longlong *)(param_1 + 0x90);
  }
  puVar2 = (undefined8 *)(lVar7 + (longlong)iVar4 * 0x10);
  *puVar2 = 0;
  puVar2[1] = 0;
  return;
}



// FUNCTION 147bfddaa FUN_147bfddaa body=176 status=ok
// SIG undefined FUN_147bfddaa(void)

undefined1 FUN_147bfddaa(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined *puVar6;
  
  uVar4 = 1;
  if (DAT_14caf3598 == '\x01') {
    if (param_1 == 0) {
      uVar4 = 0;
    }
    else if (DAT_14caf35a8 != DAT_14caf35d4) {
      lVar2 = *(longlong *)(param_1 + 0x18);
      uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
      uVar5 = (uint)lVar2 & 0xffff;
      puVar6 = &DAT_14caf35d8;
      if (DAT_14caf35e0 != (undefined *)0x0) {
        puVar6 = DAT_14caf35e0;
      }
      for (iVar1 = *(int *)(puVar6 + (ulonglong)
                                     (DAT_14caf35e8 - 1U &
                                     (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar5)
                                     + (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar5 >> 4)) * 4);
          uVar4 = 1, iVar1 != -1; iVar1 = *(int *)((longlong)iVar1 * 0x10 + DAT_14caf35a0 + 8)) {
        if (*(longlong *)(DAT_14caf35a0 + (longlong)iVar1 * 0x10) == lVar2) {
          return 0;
        }
      }
    }
  }
  return uVar4;
}



// FUNCTION 147bfde5e FUN_147bfde5e body=83 status=ok
// SIG undefined FUN_147bfde5e(void)

void FUN_147bfde5e(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1446e0b6e();
  FUN_1400337aa(*(undefined8 *)(param_1 + 0x30));
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400337aa();
  }
  iVar1 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    lVar3 = 0;
    do {
      FUN_1400337aa(*(undefined8 *)(lVar2 + lVar3));
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  return;
}



// FUNCTION 147bfdeb2 FUN_147bfdeb2 body=198 status=ok
// SIG undefined FUN_147bfdeb2(void)

void FUN_147bfdeb2(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_1;
    iVar5 = 1;
    lVar6 = 0;
    lVar7 = 0;
    bVar4 = DAT_14c950c29;
    do {
      lVar2 = *param_2;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      if (*(longlong *)(lVar1 + lVar6) == lVar2) {
        if (iVar5 == 0) {
          return;
        }
        memmove((void *)(*param_1 + (lVar7 >> 0x20) * 8),
                (void *)(*param_1 + (lVar7 >> 0x20) * 8 + 8),
                (longlong)((int)param_1[1] - iVar5) << 3);
        *(int *)(param_1 + 1) = (int)param_1[1] + -1;
        return;
      }
      lVar7 = lVar7 + 0x100000000;
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar6);
  }
  return;
}



// FUNCTION 147bfdf78 FUN_147bfdf78 body=103 status=ok
// SIG undefined FUN_147bfdf78(void)

void FUN_147bfdf78(undefined8 *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = *(uint *)(param_1 + 1);
  *(uint *)(param_1 + 1) = uVar1 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) < uVar1 + 1) {
    FUN_147c0c4f4(param_1,(ulonglong)uVar1);
  }
  memmove((void *)((longlong)*param_1 + 8),(void *)*param_1,(ulonglong)uVar1 << 3);
  lVar2 = *param_2;
  *(longlong *)*param_1 = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) != 1) {
    return;
  }
  FUN_1456cec3c();
  return;
}



// FUNCTION 147bfdfe0 FUN_147bfdfe0 body=735 status=ok
// SIG undefined FUN_147bfdfe0(void)

void FUN_147bfdfe0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar9 = (float)(**(code **)(**(longlong **)(param_1 + 0x50) + 0x3a0))();
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x3a8))();
  fVar12 = 0.0;
  if (*(int *)(param_1 + 0x40) < 1) {
    fVar11 = 0.0;
  }
  else {
    fVar11 = 0.0;
    lVar8 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x38);
      if (*(longlong *)(lVar1 + lVar8 * 8) != 0) {
        lVar4 = FUN_145a6d4e2();
        plVar2 = *(longlong **)(lVar1 + lVar8 * 8);
        if ((((plVar2 != (longlong *)0x0) && (lVar4 != 0)) && (lVar1 = plVar2[2], lVar1 != 0)) &&
           ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar1 + 0x38) &&
            (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
             lVar4 + 0x30)))) {
          fVar10 = (float)(**(code **)(*plVar2 + 0x388))();
          fVar11 = fVar11 + fVar10;
        }
      }
      lVar1 = *(longlong *)(param_1 + 0x38);
      if (*(longlong *)(lVar1 + lVar8 * 8) != 0) {
        lVar4 = FUN_1459594b4();
        plVar2 = *(longlong **)(lVar1 + lVar8 * 8);
        if (((plVar2 != (longlong *)0x0) && (lVar4 != 0)) &&
           ((lVar1 = plVar2[2], lVar1 != 0 &&
            ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar1 + 0x38) &&
             (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
              lVar4 + 0x30)))))) {
          fVar10 = (float)(**(code **)(*plVar2 + 0x3a0))(plVar2);
          fVar9 = fVar9 + fVar10;
          iVar7 = (**(code **)(*plVar2 + 0x3a8))(plVar2);
          iVar3 = iVar3 + iVar7;
        }
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(param_1 + 0x40));
  }
  lVar8 = *(longlong *)(param_1 + 0x30);
  if (lVar8 != 0) {
    fVar12 = *(float *)(lVar8 + 0x74);
    if (*(float *)(lVar8 + 0x74) <= *(float *)(lVar8 + 0x124)) {
      fVar12 = *(float *)(lVar8 + 0x124);
    }
    fVar10 = (float)*(int *)(lVar8 + 0x114) * fVar12;
    if ((fVar10 != 0.0) || (NAN(fVar10))) {
      if (*(int *)(lVar8 + 0x114) == 1) {
        if (fVar12 <= fVar11) {
          fVar11 = fVar12;
        }
        iVar7 = (iVar3 - ((int)ROUND(-0.5 - (fVar9 * fVar11 + fVar9 * fVar11)) >> 1)) + 1;
      }
      else {
        if (fVar12 <= fVar11) {
          fVar9 = (float)-((int)ROUND(-0.5 - (fVar9 * fVar12 + fVar9 * fVar12)) >> 1);
        }
        iVar7 = (iVar3 - ((int)ROUND(-0.5 - (fVar9 * fVar11 + fVar9 * fVar11)) >> 1)) + 1;
        if (fVar12 < fVar11) {
          iVar7 = iVar7 - ((int)ROUND(-0.5 - ((fVar11 - fVar12) + (fVar11 - fVar12))) >> 1) * iVar3;
        }
      }
      goto LAB_147bfe1c0;
    }
  }
  if (fVar12 <= fVar11) {
    if ((fVar11 == 0.0) && (!NAN(fVar11))) {
      fVar11 = fVar9 + fVar9;
      goto LAB_147bfe187;
    }
    iVar7 = -((int)ROUND(-0.5 - (fVar9 * fVar12 + fVar9 * fVar12)) >> 1);
    if (fVar12 < fVar11) {
      iVar7 = (int)((float)iVar7 * fVar11 + 0.0);
    }
  }
  else {
    fVar11 = fVar11 * (float)-((int)ROUND(-0.5 - (fVar9 + fVar9)) >> 1);
    fVar11 = fVar11 + fVar11;
LAB_147bfe187:
    iVar7 = -((int)ROUND(-0.5 - fVar11) >> 1);
  }
  iVar5 = -((int)ROUND(-0.5 - (fVar9 * 0.032 + fVar9 * 0.032)) >> 1);
  iVar6 = 2;
  if (2 < iVar5) {
    iVar6 = iVar5;
  }
  iVar7 = iVar3 + iVar6 + iVar7;
LAB_147bfe1c0:
  *(int *)(param_1 + 0xb4) = iVar7;
  return;
}



// FUNCTION 147bfe374 FUN_147bfe374 body=35 status=ok
// SIG undefined FUN_147bfe374(void)

undefined8 FUN_147bfe374(void)

{
  FUN_140033559(".\\Runtime/Engine/Private/Particles/ParticleComponents.cpp",0x3a3,
                L"UParticleEmitter::CreateInstance is pure virtual");
  return 0;
}



// FUNCTION 147bfe398 FUN_147bfe398 body=68 status=ok
// SIG undefined FUN_147bfe398(void)

void FUN_147bfe398(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = *(int *)(param_1 + 0x48);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x40) + lVar3 * 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x2a0))();
        iVar2 = *(int *)(param_1 + 0x48);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  FUN_147bfe3dc(param_1);
  return;
}



// FUNCTION 147bfe3dc FUN_147bfe3dc body=168 status=ok
// SIG undefined FUN_147bfe3dc(void)

void FUN_147bfe3dc(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_4c8 [32];
  undefined1 local_4a8 [1160];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_4c8;
  if (0 < *(int *)(param_1 + 0x48)) {
    lVar1 = **(longlong **)(param_1 + 0x40);
    if (*(longlong **)(lVar1 + 0x48) != (longlong *)0x0) {
      cVar2 = (**(code **)(**(longlong **)(lVar1 + 0x48) + 0x390))();
      if (cVar2 != '\0') {
        FUN_147bfe660(local_4a8);
        (**(code **)(**(longlong **)(lVar1 + 0x48) + 0x388))(*(longlong **)(lVar1 + 0x48),local_4a8)
        ;
        FUN_147bfe98a(local_4a8);
      }
      (**(code **)(**(longlong **)(lVar1 + 0x48) + 0x3b0))(*(longlong **)(lVar1 + 0x48),param_1);
    }
    FUN_147bfead6(param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_4c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bfe48a FUN_147bfe48a body=123 status=ok
// SIG undefined FUN_147bfe48a(void)

void FUN_147bfe48a(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_1c8 [40];
  undefined **local_1a0;
  longlong *local_198;
  undefined ***local_190;
  undefined8 **local_188;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_188 = &local_190;
  local_1a0 = &PTR_FUN_149e37810;
  local_190 = &local_1a0;
  local_198 = param_2;
  switchD_143c3d4dc::caseD_20();
  if ((local_10 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000147bfe4fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x218))(param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_1c8,&DAT_14a9fe0b8);
}



// FUNCTION 147bfe507 FUN_147bfe507 body=148 status=ok
// SIG undefined FUN_147bfe507(void)

undefined8 FUN_147bfe507(undefined8 param_1)

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
  uVar1 = FUN_1459d4d10();
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



// FUNCTION 147bfe59c FUN_147bfe59c body=21 status=ok
// SIG undefined FUN_147bfe59c(void)

longlong FUN_147bfe59c(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  undefined4 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  wchar_t *pwStack_58;
  code *pcStack_50;
  undefined1 *puStack_48;
  code **ppcStack_40;
  code *pcStack_38;
  code *pcStack_30;
  code *pcStack_28;
  ulonglong uStack_20;
  
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(lVar3 + 0xb0) != 0) {
    return *(longlong *)(lVar3 + 0xb0);
  }
  uStack_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = *(longlong *)(lVar3 + 0xa8);
  if ((((lVar4 != 0) && ((*(uint *)(lVar4 + 8) & 0x10) == 0)) &&
      ((*(uint *)(lVar4 + 8) & 0x10) == 0)) &&
     ((lVar5 = *(longlong *)(lVar4 + 0x20), lVar5 != 0 && (-1 < (short)*(undefined4 *)(lVar5 + 8))))
     ) {
    uVar1 = *(uint *)(lVar5 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    if ((*(uint *)(lVar5 + 8) >> 0x1c & 1) == 0) {
      if (DAT_14cae8b20 == 0) {
        ppcStack_40 = &pcStack_28;
        pcStack_28 = (code *)&LAB_14355090c;
        pcStack_30 = FUN_14081d0ea;
        pcStack_38 = FUN_14081d0ea;
        puStack_48 = &LAB_147b8e16d;
        pcStack_50 = (code *)&LAB_140810a38;
        pwStack_58 = L"Engine";
        uStack_60 = 0x800000000;
        uStack_68 = 0x10000000;
        uStack_70 = 8;
        uStack_78 = 0x3f0;
        FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
      }
      lVar5 = DAT_14cae8b20;
      if (DAT_14c951858 == 0) {
        ppcStack_40 = &pcStack_28;
        pcStack_28 = FUN_1449e2820;
        pcStack_30 = FUN_14081d0ea;
        pcStack_38 = FUN_14081d0ea;
        puStack_48 = &LAB_1468c5283;
        pcStack_50 = FUN_142809da0;
        pwStack_58 = L"Engine";
        uStack_60 = 0x400000000;
        uStack_68 = 0x10000000;
        uStack_70 = 8;
        uStack_78 = 0x50;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar4 = *(longlong *)(lVar4 + 0x20);
      if (lVar4 != 0) {
        iVar2 = *(int *)(lVar5 + 0x38);
        do {
          if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < iVar2) ||
             (lVar6 = lVar4,
             *(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar2 * 8)
             != lVar5 + 0x30)) {
            lVar6 = 0;
          }
        } while ((lVar6 == 0) && (lVar4 = *(longlong *)(lVar4 + 0x20), lVar4 != 0));
        if ((lVar6 != 0) && (lVar4 = *(longlong *)(lVar6 + 0xc0), lVar4 != 0)) goto LAB_1448abe9b;
      }
    }
  }
  lVar4 = *(longlong *)(lVar3 + 0x20);
  if (lVar4 != 0) {
    if (DAT_14cb10130 == 0) {
      ppcStack_40 = &pcStack_28;
      pcStack_28 = FUN_140754f84;
      pcStack_30 = FUN_14081d0ea;
      pcStack_38 = FUN_14081d0ea;
      puStack_48 = &LAB_147da9a76;
      pcStack_50 = FUN_1409f3105;
      pwStack_58 = L"Engine";
      uStack_60 = 0;
      uStack_68 = 0x10000000;
      uStack_70 = 8;
      uStack_78 = 0x990;
      FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
    }
    if ((*(int *)(DAT_14cb10130 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) == DAT_14cb10130 + 0x30)) goto LAB_1448abe9b;
  }
  lVar4 = 0;
LAB_1448abe9b:
  if ((uStack_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bfe5b2 FUN_147bfe5b2 body=173 status=ok
// SIG undefined FUN_147bfe5b2(void)

undefined8 FUN_147bfe5b2(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  
  uVar5 = (ulonglong)*(uint *)(param_1 + 0x48);
  if (0 < (int)*(uint *)(param_1 + 0x48)) {
    lVar7 = 0;
    do {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x40) + lVar7 * 8);
      if ((plVar2 != (longlong *)0x0) && ((*(byte *)((longlong)plVar2 + 0x2c) & 1) != 0)) {
        if (((int)plVar2[5] == 0) && (plVar2[9] != 0)) {
          lVar6 = FUN_145b51720();
          lVar3 = plVar2[9];
          if ((((lVar3 == 0) || (lVar6 == 0)) || (lVar4 = *(longlong *)(lVar3 + 0x10), lVar4 == 0))
             || ((*(int *)(lVar4 + 0x38) < *(int *)(lVar6 + 0x38) ||
                 (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
                  != lVar6 + 0x30)))) goto LAB_147bfe5ea;
          iVar1 = *(int *)(lVar3 + 0x40);
          (**(code **)(*plVar2 + 0x2b0))(plVar2);
          *(int *)((longlong)plVar2 + 0xb4) = iVar1 + 2;
        }
        else {
LAB_147bfe5ea:
          (**(code **)(*plVar2 + 0x2b0))(plVar2);
        }
        uVar5 = (ulonglong)*(uint *)(param_1 + 0x48);
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < (int)uVar5);
  }
  return CONCAT71((int7)(uVar5 >> 8),1);
}



// FUNCTION 147bfe660 FUN_147bfe660 body=810 status=ok
// SIG undefined FUN_147bfe660(void)

undefined8 * FUN_147bfe660(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  FUN_147a77d48(param_1 + 5);
  FUN_147a77d48(param_1 + 9);
  FUN_147a77d48(param_1 + 0xd);
  FUN_147a77d48(param_1 + 0x11);
  FUN_147a779a2(param_1 + 0x15);
  param_1[0x1d] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd5) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdd) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x1e] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x1f] = uVar1;
  param_1[0x20] = DAT_14c8464f0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x21] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x22] = uVar1;
  param_1[0x23] = DAT_14c8464f0;
  param_1[0x2f] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined8 *)((longlong)param_1 + 0x13d) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x165) = 0;
  *(undefined8 *)((longlong)param_1 + 0x16d) = 0;
  param_1[0x32] = DAT_14c8464f0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x30] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x31] = uVar1;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x33) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x19c) = uVar2;
  *(undefined4 *)(param_1 + 0x34) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = uVar4;
  param_1[0x35] = DAT_14c8464f0;
  *(undefined8 *)((longlong)param_1 + 0x1cd) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  FUN_147a77d48(param_1 + 0x3d);
  param_1[0x41] = 0x3ff0000000000000;
  param_1[0x42] = 0x3ff0000000000000;
  uVar4 = DAT_14c8463f8._4_4_;
  uVar3 = (undefined4)DAT_14c8463f8;
  uVar2 = DAT_14c8463f0._4_4_;
  *(undefined4 *)(param_1 + 0x43) = (undefined4)DAT_14c8463f0;
  *(undefined4 *)((longlong)param_1 + 0x21c) = uVar2;
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x224) = uVar4;
  param_1[0x45] = 0x3ff0000000000000;
  param_1[0x46] = 0x3ff0000000000000;
  FUN_147a779a2(param_1 + 0x47);
  FUN_147a779a2(param_1 + 0x4b);
  FUN_147a779a2(param_1 + 0x4f);
  *(undefined2 *)(param_1 + 0x53) = 0;
  *(undefined1 *)((longlong)param_1 + 0x29a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x29c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2a4) = 0;
  *(undefined4 *)(param_1 + 0x55) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x2ac) = 0;
  FUN_147a779a2(param_1 + 0x56);
  FUN_147a779a2(param_1 + 0x5a);
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x5e) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x2f4) = uVar2;
  *(undefined4 *)(param_1 + 0x5f) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x2fc) = uVar4;
  param_1[0x60] = DAT_14c8464f0;
  *(undefined4 *)(param_1 + 0x61) = 0;
  FUN_147a779a2(param_1 + 0x62);
  FUN_147a779a2(param_1 + 0x66);
  FUN_147a779a2(param_1 + 0x6a);
  param_1[0x6e] = 0xbf80000000000000;
  param_1[0x6f] = 0;
  puVar6 = &DAT_14c846480;
  puVar7 = param_1 + 0x70;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  param_1[0x7c] = 0;
  param_1[0x7f] = DAT_14c8464f0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x7d] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x7e] = uVar1;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x80] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x81] = uVar1;
  param_1[0x82] = DAT_14c8464f0;
  param_1[0x85] = DAT_14c8464f0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x83] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x84] = uVar1;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  *(undefined4 *)(param_1 + 0x89) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x44c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x8a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x454) = 1;
  param_1[0x8b] = 0xbfe0000000000000;
  param_1[0x8c] = 0xbfe0000000000000;
  *(byte *)(param_1 + 0x8d) = *(byte *)(param_1 + 0x8d) & 0x80;
  *(undefined8 *)((longlong)param_1 + 0x46c) = 0;
  FUN_147a77c64(param_1 + 0x4f,0x3f800000);
  FUN_147a77c64(param_1 + 0x66,0x3f800000);
  FUN_147a77c64(param_1 + 0x6a,0x3f800000);
  return param_1;
}



// FUNCTION 147bfe98a FUN_147bfe98a body=331 status=ok
// SIG undefined FUN_147bfe98a(void)

void FUN_147bfe98a(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x358) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x338) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x318) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x2d8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x2b8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x280) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x260) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x240) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x1f0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x160) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147bfead6 FUN_147bfead6 body=2003 status=ok
// SIG undefined FUN_147bfead6(void)

void FUN_147bfead6(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  int *local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong *local_78;
  undefined4 local_6c;
  longlong *local_68;
  longlong **local_60;
  undefined4 *local_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *(byte *)(param_1 + 0x37) = *(byte *)(param_1 + 0x37) & 0xf1;
  *(undefined1 *)(param_1 + 0x36) = 0;
  lVar12 = param_1 + 0x60;
  FUN_147c0c8e6(lVar12);
  lVar1 = param_1 + 0xb0;
  FUN_147c0c8e6(lVar1);
  lVar2 = param_1 + 0x100;
  FUN_147c0c8e6(lVar2);
  lVar11 = param_1 + 0x198;
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  if (*(int *)(param_1 + 0x1a4) != 0) {
    FUN_147c0c830(lVar11);
  }
  lVar9 = param_1 + 0x1a8;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  if (*(int *)(param_1 + 0x1b4) != 0) {
    FUN_147c0c830(lVar9);
  }
  lVar10 = param_1 + 0x150;
  *(undefined4 *)(param_1 + 0x158) = 0;
  if (*(int *)(param_1 + 0x15c) != 0) {
    FUN_1448831cc(lVar10,0);
  }
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0xa0;
  *(undefined8 *)(param_1 + 0x178) = 0xbfe0000000000000;
  *(undefined8 *)(param_1 + 0x180) = 0xbfe0000000000000;
  *(undefined8 *)(param_1 + 0x188) = 0xffffffff00000000;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  if (*(int *)(param_1 + 0x48) < 1) {
    lVar14 = 0;
  }
  else {
    lVar14 = **(longlong **)(param_1 + 0x40);
  }
  plVar4 = *(longlong **)(lVar14 + 0x48);
  local_88 = lVar9;
  local_80 = lVar10;
  if (plVar4 != (longlong *)0x0) {
    iVar8 = (**(code **)(*plVar4 + 0x2c0))(plVar4,0);
    if (iVar8 != 0) {
      *(int *)(param_1 + 0x188) = *(int *)(param_1 + 0x170);
      *(int *)(param_1 + 0x170) = iVar8 + *(int *)(param_1 + 0x170);
    }
    iVar8 = (**(code **)(*plVar4 + 0x2c8))(plVar4);
    if (iVar8 != 0) {
      *(int *)(param_1 + 0x18c) = *(int *)(param_1 + 0x174);
      *(int *)(param_1 + 0x174) = iVar8 + *(int *)(param_1 + 0x174);
    }
  }
  *(byte *)(param_1 + 0x37) =
       *(byte *)(param_1 + 0x37) & 0xf7 |
       ((byte)(*(char *)(*(longlong *)(lVar14 + 0x30) + 0x70) - 3U) < 2) << 3;
  local_90 = lVar11;
  if (0 < *(int *)(lVar14 + 0x40)) {
    local_98 = (int *)(param_1 + 0x160);
    lVar11 = 0;
    do {
      plVar13 = *(longlong **)(*(longlong *)(lVar14 + 0x38) + lVar11 * 8);
      if ((char)plVar13[5] < '\0') {
        bVar6 = (*(byte *)((longlong)plVar13 + 0x29) & 8) >> 3;
      }
      else {
        bVar6 = 0;
      }
      *(byte *)(param_1 + 0x37) =
           *(byte *)(param_1 + 0x37) & 0xfd |
           ((*(byte *)(param_1 + 0x37) & 2) >> 1 | bVar6) * '\x02';
      local_68 = plVar13;
      lVar9 = FUN_1458d47c0();
      if ((*(int *)(plVar13[2] + 0x38) < *(int *)(lVar9 + 0x38)) ||
         (*(longlong *)(*(longlong *)(plVar13[2] + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) !=
          lVar9 + 0x30)) {
        iVar8 = (**(code **)(*local_68 + 0x2c0))(local_68,plVar4);
        if (iVar8 != 0) {
          local_4c = *(undefined4 *)(param_1 + 0x170);
          local_60 = &local_68;
          local_58 = &local_4c;
          local_a0 = lVar12;
          FUN_147c0cc4a(lVar12,&local_78,&local_60);
          plVar13 = local_68;
          lVar12 = FUN_145a6e0de();
          plVar5 = local_68;
          if (((*(int *)(lVar12 + 0x38) <= *(int *)(plVar13[2] + 0x38)) &&
              (*(longlong *)
                (*(longlong *)(plVar13[2] + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8) ==
               lVar12 + 0x30)) && (*local_98 == 0)) {
            *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(param_1 + 0x170);
          }
          lVar12 = FUN_145a6d7a6();
          plVar13 = local_68;
          if (((*(int *)(lVar12 + 0x38) <= *(int *)(plVar5[2] + 0x38)) &&
              (*(longlong *)
                (*(longlong *)(plVar5[2] + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8) ==
               lVar12 + 0x30)) && (*(int *)(param_1 + 0x164) == 0)) {
            if (local_68 == (longlong *)0x0) {
LAB_147bff207:
              plVar13 = (longlong *)0x0;
            }
            else {
              lVar12 = FUN_145a6d7a6();
              if ((*(int *)(plVar13[2] + 0x38) < *(int *)(lVar12 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)(plVar13[2] + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8) !=
                  lVar12 + 0x30)) goto LAB_147bff207;
            }
            *(int *)(param_1 + 0x168) = (int)plVar13[0x27];
            *(undefined4 *)(param_1 + 0x164) = *(undefined4 *)(param_1 + 0x170);
          }
          plVar13 = local_68;
          lVar12 = FUN_145b4f0bc();
          if (((*(int *)(lVar12 + 0x38) <= *(int *)(plVar13[2] + 0x38)) &&
              (*(longlong *)
                (*(longlong *)(plVar13[2] + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8) ==
               lVar12 + 0x30)) && (*(int *)(param_1 + 0x16c) == 0)) {
            *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)(param_1 + 0x170);
          }
          *(int *)(param_1 + 0x170) = *(int *)(param_1 + 0x170) + iVar8;
          lVar12 = local_a0;
        }
        iVar8 = (**(code **)(*local_68 + 0x2c8))();
        if (0 < iVar8) {
          local_4c = *(undefined4 *)(param_1 + 0x174);
          local_60 = &local_68;
          local_58 = &local_4c;
          local_a0 = lVar12;
          FUN_147c0cc4a(lVar1,&local_78,&local_60);
          iVar3 = *(int *)(param_1 + 0x1a0);
          *(uint *)(param_1 + 0x1a0) = iVar3 + 1U;
          if (*(uint *)(param_1 + 0x1a4) < iVar3 + 1U) {
            FUN_147c0c860(local_90,iVar3);
          }
          *(longlong **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar3 * 8) = local_68;
          if (1 < *(int *)(param_1 + 0x48)) {
            lVar12 = 1;
            do {
              local_6c = *(undefined4 *)(param_1 + 0x174);
              local_78 = *(longlong **)
                          (*(longlong *)
                            (*(longlong *)(*(longlong *)(param_1 + 0x40) + lVar12 * 8) + 0x38) +
                          lVar11 * 8);
              local_60 = &local_78;
              local_58 = &local_6c;
              FUN_147c0cf68(lVar1,&local_4c,&local_60);
              lVar12 = lVar12 + 1;
            } while (lVar12 < *(int *)(param_1 + 0x48));
          }
          *(int *)(param_1 + 0x174) = *(int *)(param_1 + 0x174) + iVar8;
          lVar12 = local_a0;
        }
        if ((DAT_14c846538 != '\0') || ((*(byte *)((longlong)local_68 + 0x29) & 4) != 0)) {
          local_4c = *(undefined4 *)(param_1 + 0x174);
          local_60 = &local_68;
          local_58 = &local_4c;
          FUN_147c0cc4a(lVar2,&local_78,&local_60);
          iVar8 = *(int *)(param_1 + 0x1b0);
          *(uint *)(param_1 + 0x1b0) = iVar8 + 1U;
          if (*(uint *)(param_1 + 0x1b4) < iVar8 + 1U) {
            FUN_147c0c860(local_88,iVar8);
          }
          *(longlong **)(*(longlong *)(param_1 + 0x1a8) + (longlong)iVar8 * 8) = local_68;
          if (1 < *(int *)(param_1 + 0x48)) {
            lVar9 = 1;
            do {
              local_6c = *(undefined4 *)(param_1 + 0x174);
              local_78 = *(longlong **)
                          (*(longlong *)
                            (*(longlong *)(*(longlong *)(param_1 + 0x40) + lVar9 * 8) + 0x38) +
                          lVar11 * 8);
              local_60 = &local_78;
              local_58 = &local_6c;
              FUN_147c0cf68(lVar2,&local_4c,&local_60);
              lVar9 = lVar9 + 1;
            } while (lVar9 < *(int *)(param_1 + 0x48));
          }
          *(int *)(param_1 + 0x174) = *(int *)(param_1 + 0x174) + 8;
        }
      }
      plVar13 = local_68;
      lVar9 = FUN_145b5096a();
      plVar5 = local_68;
      if ((*(int *)(lVar9 + 0x38) <= *(int *)(plVar13[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(plVar13[2] + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
          lVar9 + 0x30)) {
        *(byte *)(param_1 + 0x37) =
             *(byte *)(param_1 + 0x37) & 0xfb | *(byte *)(local_68 + 5) >> 5 & 4;
        *(char *)(param_1 + 0x36) = (char)local_68[6];
        goto LAB_147bfed73;
      }
      lVar9 = FUN_145b50b3e();
      plVar13 = local_68;
      if ((*(int *)(plVar5[2] + 0x38) < *(int *)(lVar9 + 0x38)) ||
         (*(longlong *)(*(longlong *)(plVar5[2] + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) !=
          lVar9 + 0x30)) {
        lVar9 = FUN_145b504d8();
        plVar5 = local_68;
        if ((*(int *)(plVar13[2] + 0x38) < *(int *)(lVar9 + 0x38)) ||
           (*(longlong *)(*(longlong *)(plVar13[2] + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
            != lVar9 + 0x30)) {
          lVar9 = FUN_145a6e57a();
          plVar13 = local_68;
          if ((*(int *)(lVar9 + 0x38) <= *(int *)(plVar5[2] + 0x38)) &&
             (*(longlong *)(*(longlong *)(plVar5[2] + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
              == lVar9 + 0x30)) {
            if (local_68 == (longlong *)0x0) {
LAB_147bff127:
              plVar13 = (longlong *)0x0;
            }
            else {
              lVar9 = FUN_145a6e57a();
              if ((*(int *)(plVar13[2] + 0x38) < *(int *)(lVar9 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)(plVar13[2] + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) !=
                  lVar9 + 0x30)) goto LAB_147bff127;
            }
            lVar9 = plVar13[6];
            if ((lVar9 == 0) || (*(longlong *)(lVar9 + 0x28) == 0)) {
              lVar10 = 0;
            }
            else {
              lVar10 = 0;
              if (*(int *)(lVar9 + 0x48) != 0) {
                lVar10 = lVar9;
              }
            }
            *(longlong *)(param_1 + 0x1b8) = lVar10;
          }
        }
        else if ((char)local_68[5] < '\0') {
          FUN_14113129a(local_80,local_68 + 6);
        }
      }
      else {
        if (local_68 == (longlong *)0x0) {
LAB_147bff17c:
          plVar13 = (longlong *)0x0;
        }
        else {
          lVar9 = FUN_145b50b3e();
          if ((*(int *)(plVar13[2] + 0x38) < *(int *)(lVar9 + 0x38)) ||
             (*(longlong *)(*(longlong *)(plVar13[2] + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
              != lVar9 + 0x30)) goto LAB_147bff17c;
        }
        *(double *)(param_1 + 0x178) = (double)plVar13[6] + *(double *)(param_1 + 0x178);
        *(double *)(param_1 + 0x180) = (double)plVar13[7] + *(double *)(param_1 + 0x180);
      }
LAB_147bfed73:
      if (((*(byte *)(param_1 + 0x37) & 8) == 0) &&
         (cVar7 = (**(code **)(*local_68 + 0x360))(), cVar7 != '\0')) {
        *(byte *)(param_1 + 0x37) = *(byte *)(param_1 + 0x37) | 8;
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < *(int *)(lVar14 + 0x40));
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147bff2aa FUN_147bff2aa body=101 status=ok
// SIG undefined FUN_147bff2aa(void)

float FUN_147bff2aa(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  bVar2 = FUN_144a61b4f();
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar3 = FUN_147cee2cb(CONCAT71((int7)((ulonglong)lVar1 >> 8),
                                 *(int *)(lVar1 + 0xc60) == 0x40000002 | bVar2));
  fVar4 = powf(*(float *)(param_1 + 0x58),(float)((int)*DAT_14caf3548 - iVar3));
  fVar5 = 1.0;
  if (fVar4 <= 1.0) {
    fVar5 = fVar4;
  }
  return fVar5;
}



// FUNCTION 147bff310 FUN_147bff310 body=80 status=ok
// SIG undefined FUN_147bff310(void)

void FUN_147bff310(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  FUN_1435be9de();
  iVar2 = *(int *)(param_1 + 0x48);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + lVar3 * 8);
      if (((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x30), lVar1 != 0)) &&
         (*(longlong *)(lVar1 + 0x30) != 0)) {
        FUN_1400337aa();
        iVar2 = *(int *)(param_1 + 0x48);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  return;
}



// FUNCTION 147bff360 FUN_147bff360 body=167 status=ok
// SIG undefined FUN_147bff360(void)

longlong * FUN_147bff360(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (((*(byte *)(param_1 + 0x37) & 0x40) == 0) && (*(int *)(param_1 + 0x48) != 0)) {
    if (*(int *)(param_1 + 0x48) < 1) {
      lVar2 = 0;
    }
    else {
      lVar2 = **(longlong **)(param_1 + 0x40);
    }
    plVar1 = *(longlong **)(lVar2 + 0x48);
    if (plVar1 == (longlong *)0x0) {
      plVar1 = (longlong *)FUN_14001cc68(0x280,0x10);
      FUN_147bf5ae4(plVar1);
      *plVar1 = (longlong)&PTR_FUN_14a9ffa80;
      plVar1[1] = param_1;
      plVar1[2] = param_2;
      FUN_147c0532e(plVar1);
    }
    else {
      plVar1 = (longlong *)(**(code **)(*plVar1 + 0x398))(plVar1,param_1,param_2);
    }
    if (plVar1 != (longlong *)0x0) {
      *(undefined4 *)(plVar1 + 4) = 0;
      plVar1[3] = **(longlong **)(param_1 + 0x40);
      (**(code **)(*plVar1 + 0x10))(plVar1);
      return plVar1;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 147bff408 FUN_147bff408 body=1205 status=ok
// SIG undefined FUN_147bff408(void)

void FUN_147bff408(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  int iVar11;
  
  lVar3 = **(longlong **)(param_1 + 0x40);
  *(undefined1 *)(*(longlong *)(lVar3 + 0x50) + 0x2a) = 1;
  lVar8 = *(longlong *)(lVar3 + 0x50);
  if (*(longlong *)(lVar8 + 0x60) != 0) {
    lVar7 = FUN_145a6b3a6();
    lVar8 = *(longlong *)(lVar8 + 0x60);
    if ((((lVar8 != 0) && (lVar7 != 0)) && (lVar9 = *(longlong *)(lVar8 + 0x10), lVar9 != 0)) &&
       ((*(int *)(lVar7 + 0x38) <= *(int *)(lVar9 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
         lVar7 + 0x30)))) {
      *(undefined4 *)(lVar8 + 0x38) = 0x41a00000;
    }
  }
  lVar8 = FUN_147bff8bd(*(undefined8 *)(param_1 + 0x20));
  if (*(longlong *)(lVar8 + 0x58) != 0) {
    lVar9 = FUN_145b3bf70();
    lVar7 = *(longlong *)(lVar8 + 0x58);
    if (((lVar7 != 0) && (lVar9 != 0)) &&
       ((lVar4 = *(longlong *)(lVar7 + 0x10), lVar4 != 0 &&
        ((*(int *)(lVar9 + 0x38) <= *(int *)(lVar4 + 0x38) &&
         (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
          lVar9 + 0x30)))))) {
      *(undefined1 **)(lVar7 + 0x38) = &DAT_3f8000003f800000;
      *(byte *)(lVar7 + 0x30) = *(byte *)(lVar7 + 0x30) | 2;
    }
  }
  *(undefined1 *)(lVar8 + 0x2a) = 1;
  if ((lVar8 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar8);
  }
  plVar1 = (longlong *)(lVar3 + 0x38);
  iVar11 = *(int *)(lVar3 + 0x40);
  *(uint *)(lVar3 + 0x40) = iVar11 + 1U;
  if (*(uint *)(lVar3 + 0x44) < iVar11 + 1U) {
    FUN_147c0c4f4(plVar1,iVar11);
  }
  *(longlong *)(*plVar1 + (longlong)iVar11 * 8) = lVar8;
  if ((lVar8 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar8);
  }
  lVar8 = FUN_147bff952(*(undefined8 *)(param_1 + 0x20));
  if (*(longlong *)(lVar8 + 0x88) != 0) {
    lVar9 = FUN_145b3c318();
    lVar7 = *(longlong *)(lVar8 + 0x88);
    if ((((lVar7 != 0) && (lVar9 != 0)) && (lVar4 = *(longlong *)(lVar7 + 0x10), lVar4 != 0)) &&
       ((*(int *)(lVar9 + 0x38) <= *(int *)(lVar4 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
         lVar9 + 0x30)))) {
      *(undefined8 *)(lVar7 + 0x50) = 0x4039000000000000;
      *(undefined8 *)(lVar7 + 0x58) = 0x4039000000000000;
      *(undefined8 *)(lVar7 + 0x60) = 0x4039000000000000;
      *(undefined8 *)(lVar7 + 0x38) = 0x4039000000000000;
      *(undefined8 *)(lVar7 + 0x40) = 0x4039000000000000;
      *(undefined8 *)(lVar7 + 0x48) = 0x4039000000000000;
      *(byte *)(lVar7 + 0x30) = *(byte *)(lVar7 + 0x30) | 2;
    }
  }
  *(undefined1 *)(lVar8 + 0x2a) = 1;
  if ((lVar8 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar8);
  }
  iVar11 = *(int *)(lVar3 + 0x40);
  *(uint *)(lVar3 + 0x40) = iVar11 + 1U;
  if (*(uint *)(lVar3 + 0x44) < iVar11 + 1U) {
    FUN_147c0c4f4(plVar1,iVar11);
  }
  *(longlong *)(*plVar1 + (longlong)iVar11 * 8) = lVar8;
  if ((lVar8 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar8);
  }
  lVar8 = FUN_147bff9e7(*(undefined8 *)(param_1 + 0x20));
  if (*(longlong *)(lVar8 + 0x90) != 0) {
    lVar9 = FUN_145b3c318();
    lVar7 = *(longlong *)(lVar8 + 0x90);
    if ((((lVar7 != 0) && (lVar9 != 0)) && (lVar4 = *(longlong *)(lVar7 + 0x10), lVar4 != 0)) &&
       ((*(int *)(lVar9 + 0x38) <= *(int *)(lVar4 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
         lVar9 + 0x30)))) {
      *(undefined8 *)(lVar7 + 0x50) = 0xc024000000000000;
      *(undefined8 *)(lVar7 + 0x58) = 0xc024000000000000;
      *(undefined8 *)(lVar7 + 0x60) = 0x4049000000000000;
      *(undefined8 *)(lVar7 + 0x38) = 0x4024000000000000;
      *(undefined8 *)(lVar7 + 0x40) = 0x4024000000000000;
      *(undefined8 *)(lVar7 + 0x48) = 0x4059000000000000;
      *(byte *)(lVar7 + 0x30) = *(byte *)(lVar7 + 0x30) | 2;
    }
  }
  *(undefined1 *)(lVar8 + 0x2a) = 1;
  if ((lVar8 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar8);
  }
  iVar11 = *(int *)(lVar3 + 0x40);
  *(uint *)(lVar3 + 0x40) = iVar11 + 1U;
  if (*(uint *)(lVar3 + 0x44) < iVar11 + 1U) {
    FUN_147c0c4f4(plVar1,iVar11);
  }
  *(longlong *)(*plVar1 + (longlong)iVar11 * 8) = lVar8;
  if ((lVar8 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar8);
  }
  lVar8 = FUN_147bffa7c(*(undefined8 *)(param_1 + 0x20));
  if (*(longlong *)(lVar8 + 0x88) != 0) {
    lVar9 = FUN_145b3c144();
    lVar7 = *(longlong *)(lVar8 + 0x88);
    if ((((lVar7 != 0) && (lVar9 != 0)) && (lVar4 = *(longlong *)(lVar7 + 0x10), lVar4 != 0)) &&
       ((*(int *)(lVar9 + 0x38) <= *(int *)(lVar4 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
         lVar9 + 0x30)))) {
      plVar2 = (longlong *)(lVar7 + 0x28);
      uVar6 = 0;
      bVar5 = true;
      do {
        bVar10 = bVar5;
        uVar6 = (**(code **)(*plVar2 + 0x58))(plVar2,uVar6);
        iVar11 = 0;
        do {
          (**(code **)(*plVar2 + 0x70))(plVar2,iVar11,uVar6,0x3f800000);
          iVar11 = iVar11 + 1;
        } while (iVar11 != 3);
        uVar6 = 0x3f800000;
        bVar5 = false;
      } while (bVar10);
      *(byte *)(lVar7 + 0x30) = *(byte *)(lVar7 + 0x30) | 2;
    }
  }
  lVar7 = FUN_147bffb11(lVar8);
  if ((lVar7 == 0) || (DAT_14c950c29 == '\0')) {
    *(longlong *)(lVar8 + 0xb8) = lVar7;
    if (lVar7 == 0) goto LAB_147bff828;
  }
  else {
    FUN_1456cec3c(lVar7);
    *(longlong *)(lVar8 + 0xb8) = lVar7;
  }
  lVar9 = FUN_1459588c0();
  lVar7 = *(longlong *)(lVar8 + 0xb8);
  if ((((lVar7 != 0) && (lVar9 != 0)) && (lVar4 = *(longlong *)(lVar7 + 0x10), lVar4 != 0)) &&
     ((*(int *)(lVar9 + 0x38) <= *(int *)(lVar4 + 0x38) &&
      (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
       lVar9 + 0x30)))) {
    lVar9 = lVar7 + 0x28;
    uVar6 = (**(code **)(*(longlong *)(lVar7 + 0x28) + 0x58))(lVar9,0);
    (**(code **)(*(longlong *)(lVar7 + 0x28) + 0x70))(lVar9,0,uVar6,0x3f800000);
    uVar6 = (**(code **)(*(longlong *)(lVar7 + 0x28) + 0x58))(lVar9,0x3f800000);
    (**(code **)(*(longlong *)(lVar7 + 0x28) + 0x70))(lVar9,0,uVar6,0);
    *(byte *)(lVar7 + 0x30) = *(byte *)(lVar7 + 0x30) | 2;
  }
LAB_147bff828:
  *(undefined1 *)(lVar8 + 0x2a) = 1;
  if ((lVar8 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar8);
  }
  iVar11 = *(int *)(lVar3 + 0x40);
  *(uint *)(lVar3 + 0x40) = iVar11 + 1U;
  if (*(uint *)(lVar3 + 0x44) < iVar11 + 1U) {
    FUN_147c0c4f4(plVar1,iVar11);
  }
  *(longlong *)(*plVar1 + (longlong)iVar11 * 8) = lVar8;
  if ((lVar8 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar8);
    return;
  }
  return;
}



// FUNCTION 147bff8bd FUN_147bff8bd body=148 status=ok
// SIG undefined FUN_147bff8bd(void)

undefined8 FUN_147bff8bd(undefined8 param_1)

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
  uVar1 = FUN_145a6d5ce();
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



// FUNCTION 147bff952 FUN_147bff952 body=148 status=ok
// SIG undefined FUN_147bff952(void)

undefined8 FUN_147bff952(undefined8 param_1)

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
  uVar1 = FUN_145a6e3a2();
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



// FUNCTION 147bff9e7 FUN_147bff9e7 body=148 status=ok
// SIG undefined FUN_147bff9e7(void)

undefined8 FUN_147bff9e7(undefined8 param_1)

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
  uVar1 = FUN_145a6e752();
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



// FUNCTION 147bffa7c FUN_147bffa7c body=148 status=ok
// SIG undefined FUN_147bffa7c(void)

undefined8 FUN_147bffa7c(undefined8 param_1)

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
  uVar1 = FUN_145b4f37a();
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



// FUNCTION 147bffb11 FUN_147bffb11 body=148 status=ok
// SIG undefined FUN_147bffb11(void)

undefined8 FUN_147bffb11(undefined8 param_1)

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
  uVar1 = FUN_1459588c0();
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



// FUNCTION 147bffc00 FUN_147bffc00 body=138 status=ok
// SIG undefined FUN_147bffc00(void)

undefined8 FUN_147bffc00(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x68);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x60);
    lVar5 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar5);
      if ((((lVar3 != 0) && (param_2 < *(int *)(lVar3 + 0x48))) &&
          (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x40) + (longlong)param_2 * 8), lVar3 != 0))
         && (((*(longlong **)(lVar3 + 0x48) != (longlong *)0x0 &&
              (cVar4 = (**(code **)(**(longlong **)(lVar3 + 0x48) + 0x3d0))(), cVar4 != '\0')) ||
             ((*(longlong *)(lVar3 + 0x30) != 0 && (cVar4 = FUN_147c11fa2(), cVar4 != '\0')))))) {
        return 1;
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return 0;
}



// FUNCTION 147bffc90 FUN_147bffc90 body=68 status=ok
// SIG undefined FUN_147bffc90(void)

void FUN_147bffc90(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *param_2;
  *(int *)(local_10 + 0x94) = *(int *)(local_10 + 0x94) + 1;
  FUN_1468be722();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bffcda FUN_147bffcda body=779 status=ok
// SIG undefined FUN_147bffcda(void)

void FUN_147bffcda(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_258 [32];
  longlong local_238;
  longlong local_230;
  longlong local_228;
  longlong local_220;
  longlong local_218;
  ulonglong uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  uint local_1f8 [2];
  undefined1 local_1f0 [32];
  undefined1 *local_1d0;
  undefined8 local_1c8;
  undefined1 local_1c0 [8];
  undefined8 local_1b8;
  ulonglong local_1b0;
  undefined1 local_1a8 [32];
  longlong local_188;
  undefined8 local_180;
  undefined1 local_178 [288];
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_258;
  if (*(char *)(param_1 + 0x30) == '\0') {
    cVar3 = FUN_144a8e1a3();
    if (cVar3 == '\0') {
      cVar3 = FUN_140c62276();
      if (cVar3 == '\0') goto LAB_147bffd05;
    }
    local_58 = 0;
    local_50 = 0x400000000;
    local_1c0[0] = 0;
    local_1b8 = 0;
    local_188 = 0;
    local_180 = 0x200000000;
    local_1b0 = 0x209e00;
    local_208 = 0;
    uStack_200 = 0;
    local_218 = 0;
    uStack_210 = 0;
    iVar4 = *(int *)(param_1 + 0x68);
    if (0 < iVar4) {
      local_230 = param_1 + 0x160;
      lVar10 = 0;
      local_238 = param_1;
      do {
        lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x60) + lVar10 * 8);
        if (lVar9 != 0) {
          iVar8 = *(int *)(lVar9 + 0x48);
          if (0 < iVar8) {
            lVar12 = 0;
            local_228 = lVar10;
            local_220 = lVar9;
            do {
              lVar10 = *(longlong *)(*(longlong *)(lVar9 + 0x40) + lVar12 * 8);
              if ((lVar10 != 0) && ((*(byte *)(lVar10 + 0x2c) & 1) != 0)) {
                local_1d0 = (undefined1 *)0x0;
                local_1c8 = 0x200000000;
                plVar1 = *(longlong **)(lVar10 + 0x48);
                if (plVar1 == (longlong *)0x0) {
                  uVar6 = FUN_147c44c76(0 < *(int *)(lVar9 + 0x160));
                  uVar2 = local_1c8;
                  lVar9 = (longlong)(int)local_1c8;
                  uVar5 = (int)local_1c8 + 1;
                  local_1c8 = CONCAT44(local_1c8._4_4_,uVar5);
                  if (local_1c8._4_4_ < uVar5) {
                    FUN_140df0cf8(local_1f0,uVar2 & 0xffffffff);
                  }
                  puVar7 = local_1d0;
                  if (local_1d0 == (undefined1 *)0x0) {
                    puVar7 = local_1f0;
                  }
                  *(undefined **)(puVar7 + lVar9 * 0x10) = &DAT_14caf6f40;
                  *(undefined8 *)(puVar7 + lVar9 * 0x10 + 8) = uVar6;
                  local_1f8[0] = 0;
                }
                else {
                  (**(code **)(*plVar1 + 0x3d8))(plVar1,lVar9,local_1f8);
                }
                uVar2 = uStack_210 >> 0x20;
                uStack_210 = uStack_210 & 0xffffffff00000000;
                if ((int)uVar2 != 0) {
                  FUN_1448831cc(&local_218,0);
                }
                FUN_147bfffe6(lVar10,&local_218,local_230,&local_208);
                lVar10 = local_218;
                lVar9 = (longlong)(int)uStack_210;
                if (lVar9 != 0) {
                  lVar11 = 0;
                  do {
                    local_1b8 = *(undefined8 *)(lVar10 + lVar11);
                    FUN_144737676(local_1a8,local_1f0);
                    local_1b0 = local_1b0 & 0xffffffffffffffc0 | (ulonglong)(local_1f8[0] & 0x3f);
                    FUN_1448b4d27(local_1c0,local_178);
                    lVar11 = lVar11 + 8;
                  } while (lVar9 * 8 != lVar11);
                }
                if (local_1d0 != (undefined1 *)0x0) {
                  FUN_1400020a8();
                }
                iVar8 = *(int *)(local_220 + 0x48);
                lVar9 = local_220;
              }
              lVar12 = lVar12 + 1;
            } while (lVar12 < iVar8);
            iVar4 = *(int *)(local_238 + 0x68);
            param_1 = local_238;
            lVar10 = local_228;
          }
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 < iVar4);
    }
    FUN_1435bd87a(param_1,local_178);
    if (local_218 != 0) {
      FUN_1400020a8();
    }
    if (local_188 != 0) {
      FUN_1400020a8();
    }
    FUN_1447476d6(local_178);
  }
LAB_147bffd05:
  if ((local_48 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bfffe6 FUN_147bfffe6 body=712 status=ok
// SIG undefined FUN_147bfffe6(void)

void FUN_147bfffe6(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  
  if ((*(byte *)(param_1 + 0x2c) & 1) != 0) {
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar7 = FUN_145b518f4();
      lVar2 = *(longlong *)(param_1 + 0x48);
      if ((((((lVar2 != 0) && (lVar7 != 0)) && (lVar8 = *(longlong *)(lVar2 + 0x10), lVar8 != 0)) &&
           ((*(int *)(lVar7 + 0x38) <= *(int *)(lVar8 + 0x38) &&
            (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
             lVar7 + 0x30)))) && (*(longlong *)(lVar2 + 0x30) != 0)) &&
         (puVar3 = *(undefined8 **)(*(longlong *)(lVar2 + 0x30) + 0xe0), puVar3 != (undefined8 *)0x0
         )) {
        lVar7 = *(longlong *)*puVar3;
        if (*(int *)(lVar7 + 0x38) < 1) {
          return;
        }
        lVar8 = 0;
        do {
          if ((lVar8 < *(int *)(*(longlong *)(param_1 + 0x30) + 0x148)) &&
             (0 < (longlong)(int)param_3[1])) {
            plVar9 = (longlong *)(*param_3 + 8);
            lVar6 = 0;
            do {
              if (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x140) + lVar8 * 8) ==
                  plVar9[-1]) {
                lVar5 = *plVar9;
                if (((int)lVar6 < (int)param_4[1]) &&
                   (lVar6 = *(longlong *)(*param_4 + lVar6 * 8), lVar6 != 0)) {
                  lVar5 = lVar6;
                }
                if (lVar5 != 0) goto LAB_147c00240;
                break;
              }
              lVar6 = lVar6 + 1;
              plVar9 = plVar9 + 2;
            } while ((int)param_3[1] != lVar6);
          }
          if (0 < (longlong)*(int *)(param_1 + 0x40)) {
            uVar10 = (longlong)*(int *)(param_1 + 0x40) + 1;
            do {
              lVar6 = *(longlong *)(param_1 + 0x38);
              if (*(longlong *)(lVar6 + -0x10 + uVar10 * 8) != 0) {
                lVar5 = FUN_145b504d8();
                lVar6 = *(longlong *)(lVar6 + -0x10 + uVar10 * 8);
                if ((((lVar6 != 0) && (lVar5 != 0)) &&
                    (lVar4 = *(longlong *)(lVar6 + 0x10), lVar4 != 0)) &&
                   (((*(int *)(lVar5 + 0x38) <= *(int *)(lVar4 + 0x38) &&
                     (*(longlong *)
                       (*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
                      lVar5 + 0x30)) &&
                    ((*(char *)(lVar6 + 0x28) < '\0' && (lVar8 < *(int *)(lVar6 + 0x38))))))) {
                  lVar5 = *(longlong *)(*(longlong *)(lVar6 + 0x30) + lVar8 * 8);
                  if (lVar5 != 0) goto LAB_147c00240;
                  break;
                }
              }
              uVar10 = uVar10 - 1;
            } while (1 < uVar10);
          }
          if (((*(byte *)(lVar2 + 0x46) & 1) == 0) ||
             (lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x30), lVar5 == 0)) {
            lVar6 = *(longlong *)(lVar7 + 0x30);
            if (*(longlong *)(lVar7 + 0x30) == 0) {
              lVar6 = lVar7 + 0x10;
            }
            iVar1 = *(int *)(lVar6 + lVar8 * 0x1c);
            if (((-1 < (longlong)iVar1) && (iVar1 < *(int *)(*(longlong *)(lVar2 + 0x30) + 0x160)))
               && (lVar5 = *(longlong *)
                            (*(longlong *)(*(longlong *)(lVar2 + 0x30) + 0x158) +
                            (longlong)iVar1 * 0x30), lVar5 != 0)) goto LAB_147c00240;
          }
          else {
LAB_147c00240:
            iVar1 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar1 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
              FUN_144769b64(param_2,iVar1);
            }
            *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar5;
          }
          lVar8 = lVar8 + 1;
          if (*(int *)(lVar7 + 0x38) <= lVar8) {
            return;
          }
        } while( true );
      }
    }
    lVar2 = *(longlong *)(param_1 + 0x30);
    if ((0 < *(int *)(lVar2 + 0x148)) && (0 < (longlong)(int)param_3[1])) {
      plVar9 = (longlong *)(*param_3 + 8);
      lVar7 = 0;
      do {
        if (**(longlong **)(lVar2 + 0x140) == plVar9[-1]) {
          lVar8 = *plVar9;
          if (((int)lVar7 < (int)param_4[1]) &&
             (lVar7 = *(longlong *)(*param_4 + lVar7 * 8), lVar7 != 0)) {
            lVar8 = lVar7;
          }
          if (lVar8 != 0) goto LAB_147c00052;
          break;
        }
        lVar7 = lVar7 + 1;
        plVar9 = plVar9 + 2;
      } while ((int)param_3[1] != lVar7);
    }
    lVar8 = *(longlong *)(lVar2 + 0x30);
LAB_147c00052:
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_144769b64(param_2,iVar1);
    }
    *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar8;
  }
  return;
}



// FUNCTION 147c002ae FUN_147c002ae body=128 status=ok
// SIG undefined FUN_147c002ae(void)

void FUN_147c002ae(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_1c8 [32];
  undefined **local_1a8;
  longlong *local_1a0;
  undefined ***local_198;
  undefined8 **local_190;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14a9fe0b8);
  local_190 = &local_198;
  local_1a8 = &PTR_FUN_149e37810;
  local_198 = &local_1a8;
  local_1a0 = param_2;
  switchD_143c3d4dc::caseD_20(param_1);
  if ((local_18 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c00336 FUN_147c00336 body=2160 status=ok
// SIG undefined FUN_147c00336(void)

void FUN_147c00336(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  void *_Src;
  char cVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  double dVar11;
  undefined1 auStack_308 [32];
  undefined1 local_2e8 [8];
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined4 local_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined4 local_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  void *local_158;
  int local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_308;
  cVar6 = FUN_147c00ba8();
  pwVar9 = L"False";
  pwVar7 = L"False";
  if (cVar6 != '\0') {
    pwVar7 = L"True";
  }
  FUN_140056680(&local_98,pwVar7);
  FUN_1446ddc76(&local_a0,"HasGPUEmitter",1);
  local_88 = local_a0;
  local_80 = local_98;
  uStack_78 = uStack_90;
  local_98 = (void *)0x0;
  uStack_90 = 0;
  local_70 = 1;
  FUN_1407c67d8(param_2);
  if (local_98 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((*(byte *)(param_1 + 0xec) & 2) == 0) {
    FUN_140056680(&local_98,&DAT_149e01fe8);
  }
  else {
    dVar4 = *(double *)(param_1 + 0xd0) - *(double *)(param_1 + 0xb8);
    dVar11 = *(double *)(param_1 + 200) - *(double *)(param_1 + 0xb0);
    dVar5 = *(double *)(param_1 + 0xc0) - *(double *)(param_1 + 0xa8);
    if (dVar5 <= dVar11) {
      dVar5 = dVar11;
    }
    if (dVar5 <= dVar4) {
      dVar5 = dVar4;
    }
    FUN_140002266(&local_98,L"%.2f",(double)(float)dVar5);
  }
  FUN_1446ddc76(&local_c8,"FixedBoundsSize",1);
  local_c0 = local_c8;
  local_b8 = (undefined4)local_98;
  uStack_b4 = local_98._4_4_;
  uStack_b0 = (int)uStack_90;
  uStack_ac = uStack_90._4_4_;
  local_98 = (void *)0x0;
  uStack_90 = 0;
  local_a8 = 2;
  FUN_1407c67d8(param_2);
  if (local_98 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_140002266(&local_98,&DAT_149e063bc,*(undefined4 *)(param_1 + 0x68));
  FUN_1446ddc76(&local_f0,"NumEmitters",1);
  local_e8 = local_f0;
  local_e0 = (undefined4)local_98;
  uStack_dc = local_98._4_4_;
  uStack_d8 = (int)uStack_90;
  uStack_d4 = uStack_90._4_4_;
  local_98 = (void *)0x0;
  uStack_90 = 0;
  local_d0 = 2;
  FUN_1407c67d8(param_2);
  if (local_98 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_140002266(&local_98,&DAT_149e063bc,*(undefined4 *)(param_1 + 0x90));
  FUN_1446ddc76(&local_118,"NumLODs",1);
  local_110 = local_118;
  local_108 = (undefined4)local_98;
  uStack_104 = local_98._4_4_;
  uStack_100 = (int)uStack_90;
  uStack_fc = uStack_90._4_4_;
  local_98 = (void *)0x0;
  uStack_90 = 0;
  local_f8 = 2;
  FUN_1407c67d8(param_2);
  if (local_98 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_140002266(&local_98,&DAT_149e02016,(double)*(float *)(param_1 + 0x58));
  FUN_1446ddc76(&local_140,"WarmupTime",1);
  local_138 = local_140;
  local_130 = (undefined4)local_98;
  uStack_12c = local_98._4_4_;
  uStack_128 = (int)uStack_90;
  uStack_124 = uStack_90._4_4_;
  local_98 = (void *)0x0;
  uStack_90 = 0;
  local_120 = 2;
  FUN_1407c67d8(param_2);
  if (local_98 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_98,L"Unknown");
  if ((ulonglong)*(byte *)(param_1 + 0xef) < 3) {
    FUN_14020fad6(&local_98,
                  &DAT_14aa00904 +
                  *(int *)(&DAT_14aa00904 + (ulonglong)*(byte *)(param_1 + 0xef) * 4));
  }
  FUN_1446ddc76(&local_168,"LODMethod",1);
  _Src = local_98;
  local_160 = local_168;
  local_158 = (void *)0x0;
  lVar10 = (longlong)(int)uStack_90;
  local_150 = (int)uStack_90;
  if (lVar10 == 0) {
    local_14c = 0;
  }
  else {
    FUN_1446dd670(&local_158,uStack_90 & 0xffffffff,0);
    memcpy(local_158,_Src,lVar10 * 2);
  }
  local_148 = 1;
  FUN_1407c67d8(param_2);
  cVar6 = FUN_147c00c16(param_1);
  pwVar7 = L"False";
  if (cVar6 != '\0') {
    pwVar7 = L"True";
  }
  FUN_140056680(&local_68,pwVar7);
  FUN_1446ddc76(&local_190,"CPUCollision",1);
  local_188 = local_190;
  local_180 = (undefined4)local_68;
  uStack_17c = local_68._4_4_;
  uStack_178 = (undefined4)uStack_60;
  uStack_174 = uStack_60._4_4_;
  local_68 = 0;
  uStack_60 = 0;
  local_170 = 1;
  FUN_1407c67d8(param_2);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  pwVar7 = L"False";
  if ((*(byte *)(param_1 + 0xf2) & 1) != 0) {
    pwVar7 = L"True";
  }
  FUN_140056680(&local_68,pwVar7);
  FUN_1446ddc76(&local_1b8,"Looping",1);
  local_1b0 = local_1b8;
  local_1a8 = (undefined4)local_68;
  uStack_1a4 = local_68._4_4_;
  uStack_1a0 = (undefined4)uStack_60;
  uStack_19c = uStack_60._4_4_;
  local_68 = 0;
  uStack_60 = 0;
  local_198 = 1;
  FUN_1407c67d8(param_2);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  pwVar7 = L"False";
  if ((*(byte *)(param_1 + 0x172) & 2) != 0) {
    pwVar7 = L"True";
  }
  FUN_140056680(&local_68,pwVar7);
  FUN_1446ddc76(&local_1e0,"Immortal",1);
  local_1d8 = local_1e0;
  local_1d0 = (undefined4)local_68;
  uStack_1cc = local_68._4_4_;
  uStack_1c8 = (undefined4)uStack_60;
  uStack_1c4 = uStack_60._4_4_;
  local_68 = 0;
  uStack_60 = 0;
  local_1c0 = 1;
  FUN_1407c67d8(param_2);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  pwVar7 = L"False";
  if ((*(byte *)(param_1 + 0x172) & 4) != 0) {
    pwVar7 = L"True";
  }
  FUN_140056680(&local_68,pwVar7);
  FUN_1446ddc76(&local_208,"Becomes Zombie",1);
  local_200 = local_208;
  local_1f8 = (undefined4)local_68;
  uStack_1f4 = local_68._4_4_;
  uStack_1f0 = (undefined4)uStack_60;
  uStack_1ec = uStack_60._4_4_;
  local_68 = 0;
  uStack_60 = 0;
  local_1e8 = 1;
  FUN_1407c67d8(param_2);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0xf1) != '\0') {
    pwVar9 = L"True";
  }
  FUN_140056680(&local_68,pwVar9);
  FUN_1446ddc76(&local_230,"CanBeOccluded",1);
  local_228 = local_230;
  local_220 = (undefined4)local_68;
  uStack_21c = local_68._4_4_;
  uStack_218 = (undefined4)uStack_60;
  uStack_214 = uStack_60._4_4_;
  local_68 = 0;
  uStack_60 = 0;
  local_210 = 1;
  FUN_1407c67d8(param_2);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  local_68 = 0;
  uStack_60 = 0;
  iVar2 = *(int *)(param_1 + 0x68);
  if ((longlong)iVar2 == 0) {
    uStack_60._4_4_ = 0;
  }
  else {
    lVar10 = *(longlong *)(param_1 + 0x60);
    lVar8 = 0;
    do {
      lVar3 = *(longlong *)(lVar10 + lVar8);
      if (lVar3 != 0) {
        piVar1 = (int *)((longlong)&local_68 + (ulonglong)*(byte *)(lVar3 + 0x35) * 4);
        *piVar1 = *piVar1 + 1;
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar2 * 8 != lVar8);
  }
  FUN_140002266(&local_260,&DAT_149e061aa,uStack_60._4_4_);
  FUN_1446ddc76(&local_268,"Critical Emitters",1);
  local_250 = local_268;
  local_248 = (undefined4)local_260;
  uStack_244 = local_260._4_4_;
  uStack_240 = (undefined4)uStack_258;
  uStack_23c = uStack_258._4_4_;
  local_260 = 0;
  uStack_258 = 0;
  local_238 = 2;
  FUN_1407c67d8(param_2);
  if (local_260 != 0) {
    FUN_1400020a8();
  }
  FUN_140002266(&local_260,&DAT_149e061aa,uStack_60 & 0xffffffff);
  FUN_1446ddc76(&local_290,"High Emitters",1);
  local_288 = local_290;
  local_280 = (undefined4)local_260;
  uStack_27c = local_260._4_4_;
  uStack_278 = (undefined4)uStack_258;
  uStack_274 = uStack_258._4_4_;
  local_260 = 0;
  uStack_258 = 0;
  local_270 = 2;
  FUN_1407c67d8(param_2);
  if (local_260 != 0) {
    FUN_1400020a8();
  }
  FUN_140002266(&local_260,&DAT_149e061aa,local_68._4_4_);
  FUN_1446ddc76(&local_2b8,"Medium Emitters",1);
  local_2b0 = local_2b8;
  local_2a8 = (undefined4)local_260;
  uStack_2a4 = local_260._4_4_;
  uStack_2a0 = (undefined4)uStack_258;
  uStack_29c = uStack_258._4_4_;
  local_260 = 0;
  uStack_258 = 0;
  local_298 = 2;
  FUN_1407c67d8(param_2);
  if (local_260 != 0) {
    FUN_1400020a8();
  }
  FUN_140002266(&local_260,&DAT_149e061aa,local_68 & 0xffffffff);
  FUN_1446ddc76(&local_2e0,"Low Emitters",1);
  local_2d8 = local_2e0;
  local_2d0 = (undefined4)local_260;
  uStack_2cc = local_260._4_4_;
  uStack_2c8 = (undefined4)uStack_258;
  uStack_2c4 = uStack_258._4_4_;
  local_260 = 0;
  uStack_258 = 0;
  local_2c0 = 2;
  FUN_1407c67d8(param_2);
  if (local_260 != 0) {
    FUN_1400020a8();
  }
  FUN_1427dc336(local_2e8,param_2);
  switchD_143c3d4dc::caseD_3d(param_1,local_2e8);
  if (local_98 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_308) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c00ba8 FUN_147c00ba8 body=110 status=ok
// SIG undefined FUN_147c00ba8(void)

undefined8 FUN_147c00ba8(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (0 < *(int *)(param_1 + 0x68)) {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x60) + lVar3 * 8);
      if (((lVar1 != 0) && (lVar1 = **(longlong **)(lVar1 + 0x40), lVar1 != 0)) &&
         (lVar1 = *(longlong *)(lVar1 + 0x48), lVar1 != 0)) {
        lVar2 = FUN_145b5180a();
        lVar1 = *(longlong *)(lVar1 + 0x10);
        if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
           (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
            lVar2 + 0x30)) {
          return CONCAT71((int7)((ulonglong)(lVar2 + 0x30) >> 8),1);
        }
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_1 + 0x68));
  }
  return 0;
}



// FUNCTION 147c00c16 FUN_147c00c16 body=210 status=ok
// SIG undefined FUN_147c00c16(void)

undefined8 FUN_147c00c16(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if ((longlong)*(int *)(param_1 + 0x68) != 0) {
    plVar6 = *(longlong **)(param_1 + 0x60);
    plVar1 = plVar6 + *(int *)(param_1 + 0x68);
    do {
      lVar3 = *plVar6;
      if (lVar3 != 0) {
        iVar2 = *(int *)(lVar3 + 0x48);
        if ((longlong)iVar2 != 0) {
          lVar7 = 0;
          do {
            lVar4 = *(longlong *)((longlong)*(longlong **)(lVar3 + 0x40) + lVar7);
            if ((lVar4 != 0) && ((*(byte *)(lVar4 + 0x2c) & 1) != 0)) {
              if ((0 < iVar2) &&
                 ((lVar3 = **(longlong **)(lVar3 + 0x40), lVar3 != 0 &&
                  (iVar2 = *(int *)(lVar3 + 0x40), (longlong)iVar2 != 0)))) {
                lVar3 = *(longlong *)(lVar3 + 0x38);
                lVar7 = 0;
                do {
                  lVar4 = *(longlong *)(lVar3 + lVar7);
                  if (*(char *)(lVar4 + 0x28) < '\0') {
                    lVar5 = FUN_145b4f1a6();
                    lVar4 = *(longlong *)(lVar4 + 0x10);
                    if ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar4 + 0x38)) &&
                       (*(longlong *)
                         (*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
                        lVar5 + 0x30)) {
                      return CONCAT71((int7)((ulonglong)(lVar5 + 0x30) >> 8),1);
                    }
                  }
                  lVar7 = lVar7 + 8;
                } while ((longlong)iVar2 * 8 != lVar7);
              }
              break;
            }
            lVar7 = lVar7 + 8;
          } while ((longlong)iVar2 * 8 - lVar7 != 0);
        }
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar1);
  }
  return 0;
}



// FUNCTION 147c00cec FUN_147c00cec body=76 status=ok
// SIG undefined FUN_147c00cec(void)

ulonglong FUN_147c00cec(longlong param_1)

{
  longlong *plVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  undefined8 unaff_RBX;
  longlong lVar5;
  
  iVar3 = *(int *)(param_1 + 0x68);
  if (iVar3 < 1) {
    bVar4 = 1;
  }
  else {
    bVar4 = 1;
    lVar5 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x60) + lVar5 * 8);
      if (plVar1 != (longlong *)0x0) {
        bVar2 = (**(code **)(*plVar1 + 0x2c8))();
        bVar4 = bVar4 & bVar2;
        iVar3 = *(int *)(param_1 + 0x68);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar3);
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar4) & 0xffffffff;
}



// FUNCTION 147c00d38 FUN_147c00d38 body=118 status=ok
// SIG undefined FUN_147c00d38(void)

bool FUN_147c00d38(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  bool bVar5;
  
  uVar2 = (ulonglong)*(int *)(param_1 + 0x68);
  if ((longlong)uVar2 < 1) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
    uVar3 = 1;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x60) + -8 + uVar3 * 8);
      if (((lVar1 != 0) && (lVar1 = **(longlong **)(lVar1 + 0x40), lVar1 != 0)) &&
         (lVar1 = *(longlong *)(lVar1 + 0x48), lVar1 != 0)) {
        lVar1 = *(longlong *)(lVar1 + 0x10);
        if ((*(int *)(param_2 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
           (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(param_2 + 0x38) * 8) ==
            param_2 + 0x30)) {
          return bVar4;
        }
      }
      bVar4 = uVar3 < uVar2;
      bVar5 = uVar3 != uVar2;
      uVar3 = uVar3 + 1;
    } while (bVar5);
  }
  return bVar4;
}



// FUNCTION 147c00dae FUN_147c00dae body=92 status=ok
// SIG undefined FUN_147c00dae(void)

void FUN_147c00dae(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x960) != 0) {
    FUN_1435c0142(param_1,1);
  }
  iVar2 = *(int *)(param_1 + 0x8e8);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x8e0) + lVar3 * 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0xf0))(plVar1,0);
        iVar2 = *(int *)(param_1 + 0x8e8);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  return;
}



// FUNCTION 147c00e0a FUN_147c00e0a body=24 status=ok
// SIG undefined FUN_147c00e0a(void)

ulonglong FUN_147c00e0a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x668);
  if (lVar1 != 0) {
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(lVar1 + 0x172)) &
           0xffffffffffffff01;
  }
  return 0;
}



// FUNCTION 147c00e22 FUN_147c00e22 body=215 status=ok
// SIG undefined FUN_147c00e22(void)

bool FUN_147c00e22(longlong param_1)

{
  double dVar1;
  byte bVar2;
  longlong lVar3;
  float fVar4;
  float extraout_XMM0_Da;
  float fVar5;
  
  lVar3 = *(longlong *)(param_1 + 0xb0);
  if (((lVar3 != 0) || (lVar3 = FUN_1448abda6(param_1), lVar3 != 0)) &&
     (*(longlong *)(param_1 + 0x668) != 0)) {
    fVar4 = *(float *)(*(longlong *)(param_1 + 0x668) + 0xe0);
    fVar5 = *(float *)(param_1 + 0x734);
    if (*(float *)(param_1 + 0x734) <= fVar4) {
      fVar5 = fVar4;
    }
    if (0.0 < fVar5) {
      if (fVar5 <= 0.1) {
        fVar5 = 0.1;
      }
      if (fVar5 < *(float *)(param_1 + 0x740)) {
        bVar2 = *(byte *)(lVar3 + 0x152);
        if (bVar2 != 1) {
          if (6 < bVar2) {
            return false;
          }
          if ((0x68U >> (bVar2 & 0x1f) & 1) == 0) {
            return false;
          }
        }
        fVar4 = (float)FUN_144b21608(param_1);
        if (0.0 < fVar4) {
          dVar1 = *(double *)(lVar3 + 0x6d0);
          FUN_144b21608(param_1);
          return (double)(fVar5 + extraout_XMM0_Da) < dVar1;
        }
      }
    }
  }
  return false;
}



// FUNCTION 147c00efa FUN_147c00efa body=65 status=ok
// SIG undefined FUN_147c00efa(void)

void FUN_147c00efa(longlong *param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)((longlong)param_1 + 0x9e);
  FUN_1435bf592(param_1,1);
  if ((bVar1 & 0x10) == 0) {
    FUN_1435bf71c(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000147c00f38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa60))(param_1,0);
  return;
}



// FUNCTION 147c00f3c FUN_147c00f3c body=94 status=ok
// SIG undefined FUN_147c00f3c(void)

void FUN_147c00f3c(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_147c0c1bc(param_1,iVar2);
  }
  FUN_147c0d358((longlong)iVar2 * 0xe0 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 147c00f9a FUN_147c00f9a body=158 status=ok
// SIG undefined FUN_147c00f9a(void)

void FUN_147c00f9a(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x960) != 0) {
    FUN_1435c0142(param_1,1);
  }
  FUN_144842962(param_1);
  if (*(longlong *)(param_1 + 0x668) == 0) {
    *(byte *)(param_1 + 0x692) = *(byte *)(param_1 + 0x692) | 0x80;
  }
  else {
    FUN_1400337aa();
    lVar1 = *(longlong *)(param_1 + 0x668);
    *(byte *)(param_1 + 0x692) = *(byte *)(param_1 + 0x692) | 0x80;
    if (DAT_14c7616f8 != 0) {
      if (lVar1 == 0) {
        return;
      }
      if ((((*(byte *)(lVar1 + 0xed) & 2) != 0) && (*(int *)(param_1 + 0x58) < 2)) &&
         (*(int *)(param_1 + 0x140) == 0)) {
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xfb;
      }
    }
    if ((lVar1 != 0) && (DAT_14c7616bc == 2)) {
      FUN_1400337aa();
      FUN_147bffcda(*(undefined8 *)(param_1 + 0x668));
      return;
    }
  }
  return;
}



// FUNCTION 147c01038 FUN_147c01038 body=206 status=ok
// SIG undefined FUN_147c01038(void)

void FUN_147c01038(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x960) != 0) {
    FUN_1435c0142(param_1,1);
  }
  FUN_1448284b2(param_1,param_2);
  iVar2 = *(int *)(param_1 + 0x8e8);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x8e0) + lVar3 * 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x130))(plVar1,&local_34,&local_38);
        (**(code **)(*param_2 + 0x10))(param_2,(longlong)local_34,(longlong)local_38);
        iVar2 = *(int *)(param_1 + 0x8e8);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbd8);
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c01108 FUN_147c01108 body=109 status=ok
// SIG undefined FUN_147c01108(void)

void FUN_147c01108(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x960) != 0) {
    FUN_1435c0142(param_1,1);
  }
  FUN_1479f20c4(param_1,param_2);
  iVar2 = *(int *)(param_1 + 0x8e8);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x8e0) + lVar3 * 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x138))(plVar1,param_2);
        iVar2 = *(int *)(param_1 + 0x8e8);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  return;
}



// FUNCTION 147c0117e FUN_147c0117e body=126 status=ok
// SIG undefined FUN_147c0117e(void)

undefined8 * FUN_147c0117e(undefined8 *param_1)

{
  *(byte *)((longlong)param_1 + 0xc) = *(byte *)((longlong)param_1 + 0xc) & 0xfe;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xfe;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_14a9fffd0;
  FUN_147c09012(param_1 + 5);
  param_1[5] = &PTR_FUN_14aa00060;
  param_1[0x20] = 0;
  param_1[0x21] = 0x3f80000000000000;
  param_1[0x22] = 0;
  param_1[0x23] = 0x3f80000000000000;
  param_1[0x24] = 0;
  param_1[0x25] = 0x3f80000000000000;
  param_1[0x26] = 0;
  param_1[0x27] = 0x3f80000000000000;
  param_1[0x28] = 0;
  param_1[0x29] = 0x3f80000000000000;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0x3f80000000000000;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0x3f80000000000000;
  return param_1;
}



// FUNCTION 147c011fc FUN_147c011fc body=137 status=ok
// SIG undefined FUN_147c011fc(void)

undefined8 * FUN_147c011fc(undefined8 *param_1)

{
  *(byte *)((longlong)param_1 + 0xc) = *(byte *)((longlong)param_1 + 0xc) & 0xfe;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xfe;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(uint *)((longlong)param_1 + 0x34) = *(uint *)((longlong)param_1 + 0x34) & 0xffffffc0 | 2;
  param_1[7] = 0x41c8000041480000;
  *(undefined4 *)(param_1 + 8) = 0;
  *param_1 = &PTR_FUN_14aa006e0;
  FUN_147c09012(param_1 + 9);
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0xffffffff;
  param_1[0x27] = &DAT_100000001;
  param_1[9] = &PTR_FUN_14aa00768;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return param_1;
}



// FUNCTION 147c01286 FUN_147c01286 body=131 status=ok
// SIG undefined FUN_147c01286(void)

undefined8 * FUN_147c01286(undefined8 *param_1)

{
  *(byte *)((longlong)param_1 + 0xc) = *(byte *)((longlong)param_1 + 0xc) & 0xfe;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xfe;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(uint *)((longlong)param_1 + 0x34) = *(uint *)((longlong)param_1 + 0x34) & 0xffffffc0 | 2;
  param_1[7] = 0x41c8000041480000;
  *(undefined4 *)(param_1 + 8) = 0;
  *param_1 = &PTR_FUN_14aa00780;
  FUN_147c09012(param_1 + 9);
  param_1[9] = &PTR_FUN_14aa00808;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0xffffffff;
  param_1[0x27] = &DAT_100000001;
  return param_1;
}



// FUNCTION 147c01309 FUN_147c01309 body=148 status=ok
// SIG undefined FUN_147c01309(void)

undefined8 FUN_147c01309(undefined8 param_1)

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
  uVar1 = FUN_1459d4ed8();
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



// FUNCTION 147c01416 FUN_147c01416 body=270 status=ok
// SIG undefined FUN_147c01416(void)

void FUN_147c01416(longlong param_1,uint param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  
  if (*(longlong *)(param_1 + 0x960) != 0) {
    FUN_1435c0142(param_1,1);
  }
  if ((-1 < (int)param_2 && *(longlong *)(param_1 + 0x668) != 0) &&
     ((int)param_2 < *(int *)(*(longlong *)(param_1 + 0x668) + 0x68))) {
    plVar1 = (longlong *)(param_1 + 0x670);
    iVar3 = *(int *)(param_1 + 0x678);
    if (iVar3 <= (int)param_2) {
      *(uint *)(param_1 + 0x678) = param_2 + 1;
      uVar4 = (param_2 + 1) - iVar3;
      if ((uint)(*(int *)(param_1 + 0x67c) - iVar3) < uVar4) {
        FUN_140655806(plVar1);
      }
      memset((void *)((longlong)iVar3 * 8 + *plVar1),0,(longlong)(int)uVar4 << 3);
    }
    lVar2 = *plVar1;
    if ((param_3 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_3);
    }
    *(longlong *)(lVar2 + (ulonglong)param_2 * 8) = param_3;
    *(byte *)(param_1 + 0x692) = *(byte *)(param_1 + 0x692) | 0x80;
  }
  iVar3 = *(int *)(param_1 + 0x8e8);
  if (0 < iVar3) {
    uVar5 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x8e0) + uVar5 * 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x210))(plVar1,uVar5 & 0xffffffff);
        iVar3 = *(int *)(param_1 + 0x8e8);
      }
      uVar5 = uVar5 + 1;
    } while ((longlong)uVar5 < (longlong)iVar3);
  }
  FUN_1448c6f34(param_1);
  FUN_1448215fa(param_1);
  return;
}



// FUNCTION 147c01524 FUN_147c01524 body=60 status=ok
// SIG undefined FUN_147c01524(void)

void FUN_147c01524(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x960) != 0) {
    FUN_1435c0142(param_1,1);
  }
  if (*(longlong *)(param_1 + 0x5a8) == 0) {
    return;
  }
  FUN_1435f95a2(*(longlong *)(param_1 + 0x5a8),0);
  return;
}



// FUNCTION 147c01560 FUN_147c01560 body=280 status=ok
// SIG undefined FUN_147c01560(void)

void FUN_147c01560(longlong *param_1)

{
  longlong lVar1;
  float fVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  char *pcVar6;
  int iVar7;
  longlong lVar8;
  
  if (param_1[300] != 0) {
    FUN_1435c0142(param_1);
  }
  lVar5 = param_1[0x16];
  if (lVar5 == 0) {
    lVar5 = FUN_1448abda6(param_1);
  }
  bVar3 = *(byte *)(lVar5 + 0x152);
  if ((((bVar3 == 1) || ((bVar3 < 7 && ((0x68U >> (bVar3 & 0x1f) & 1) != 0)))) &&
      (param_1[0xb5] != 0)) && (0 < (int)param_1[0x11d])) {
    if ((*(byte *)((longlong)param_1 + 0x692) & 8) == 0) {
      if (param_1[0xcd] == 0) {
        return;
      }
      pcVar6 = (char *)(param_1[0xcd] + 0xef);
    }
    else {
      pcVar6 = (char *)((longlong)param_1 + 0x69d);
    }
    if ((*pcVar6 == '\0') && (fVar2 = *(float *)(param_1[0xb5] + 0x2e4), 0.0 < fVar2)) {
      iVar4 = *(int *)(param_1[0xcd] + 0x90);
      iVar7 = 0;
      if ((1 < (longlong)iVar4) &&
         (lVar5 = *(longlong *)(param_1[0xcd] + 0x88), *(float *)(lVar5 + 4) <= fVar2)) {
        iVar7 = iVar4 + -1;
        lVar8 = 0;
        do {
          if ((longlong)iVar4 + -2 == lVar8) goto LAB_147c0161c;
          lVar1 = lVar8 * 4;
          lVar8 = lVar8 + 1;
        } while (*(float *)(lVar5 + 8 + lVar1) <= fVar2);
        iVar7 = (int)lVar8;
      }
LAB_147c0161c:
      if (iVar7 != (int)param_1[0xe6]) {
                    /* WARNING: Could not recover jumptable at 0x000147c01636. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0xbc8))(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147c01678 FUN_147c01678 body=948 status=ok
// SIG undefined FUN_147c01678(void)

double * FUN_147c01678(longlong param_1,double *param_2,longlong param_3)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  char cVar6;
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
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined1 auStack_f8 [32];
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  char local_a8;
  ulonglong local_a0;
  
  uVar13 = DAT_14c8464e8._4_4_;
  uVar11 = (undefined4)DAT_14c8464e8;
  uVar10 = DAT_14c8464e0._4_4_;
  uVar8 = (undefined4)DAT_14c8464e0;
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar14 = SUB84(DAT_14c8464f0,0);
  uVar15 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
  if (((*(byte *)(param_1 + 0x691) & 0x20) != 0) && (*(longlong *)(param_1 + 0x120) == 0)) {
    lVar7 = FUN_14479d2ce(param_1 + 2000);
    if ((lVar7 != 0) && ((*(byte *)(param_1 + 0x9e) & 0x10) == 0)) {
      param_2[6] = *(double *)(lVar7 + 400);
      uVar8 = *(undefined4 *)(lVar7 + 0x160);
      uVar10 = *(undefined4 *)(lVar7 + 0x164);
      uVar11 = *(undefined4 *)(lVar7 + 0x168);
      uVar13 = *(undefined4 *)(lVar7 + 0x16c);
      dVar2 = *(double *)(lVar7 + 0x170);
      dVar3 = *(double *)(lVar7 + 0x178);
      dVar4 = *(double *)(lVar7 + 0x188);
      param_2[4] = *(double *)(lVar7 + 0x180);
      param_2[5] = dVar4;
      param_2[2] = dVar2;
      param_2[3] = dVar3;
      *(undefined4 *)param_2 = uVar8;
      *(undefined4 *)((longlong)param_2 + 4) = uVar10;
      *(undefined4 *)(param_2 + 1) = uVar11;
      *(undefined4 *)((longlong)param_2 + 0xc) = uVar13;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_a0 ^ (ulonglong)auStack_f8);
    }
  }
  if (DAT_14c761684 == 0) {
    local_b0 = 4398046511104.0;
    local_c8 = -4398046511104.0;
    local_b8 = local_b0;
    local_c0 = local_b0;
    local_d0 = local_c8;
    local_d8 = local_c8;
  }
  else {
    lVar7 = *(longlong *)(param_1 + 0x668);
    if ((lVar7 == 0) || ((*(byte *)(lVar7 + 0xec) & 2) == 0)) {
      iVar5 = *(int *)(param_1 + 0x8e8);
      if (0 < iVar5) {
        lVar7 = 0;
        cVar6 = '\0';
        uVar17 = uVar8;
        uVar19 = uVar10;
        uVar20 = uVar14;
        uVar22 = uVar15;
        uVar23 = uVar11;
        uVar25 = uVar13;
        do {
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x8e0) + lVar7 * 8);
          if ((plVar1 != (longlong *)0x0) && (0 < *(int *)((longlong)plVar1 + 0x18c))) {
            (**(code **)(*plVar1 + 0x60))(plVar1,&local_d8);
            uVar9 = (undefined4)((ulonglong)local_d8 >> 0x20);
            uVar12 = (undefined4)((ulonglong)local_d0 >> 0x20);
            uVar16 = (undefined4)((ulonglong)local_c8 >> 0x20);
            uVar18 = (undefined4)((ulonglong)local_c0 >> 0x20);
            uVar24 = (undefined4)((ulonglong)local_b8 >> 0x20);
            uVar21 = (undefined4)((ulonglong)local_b0 >> 0x20);
            if (local_a8 == '\0' || cVar6 == '\0') {
              if (local_a8 != '\0') {
                uVar8 = SUB84(local_d8,0);
                uVar10 = uVar9;
                uVar11 = SUB84(local_d0,0);
                uVar13 = uVar12;
                uVar14 = SUB84(local_c8,0);
                uVar15 = uVar16;
                uVar17 = SUB84(local_c0,0);
                uVar19 = uVar18;
                uVar20 = SUB84(local_b0,0);
                uVar22 = uVar21;
                uVar23 = SUB84(local_b8,0);
                uVar25 = uVar24;
                cVar6 = local_a8;
              }
            }
            else {
              if (local_d8 <= (double)CONCAT44(uVar10,uVar8)) {
                uVar8 = SUB84(local_d8,0);
                uVar10 = uVar9;
              }
              if (local_d0 <= (double)CONCAT44(uVar13,uVar11)) {
                uVar11 = SUB84(local_d0,0);
                uVar13 = uVar12;
              }
              if (local_c8 <= (double)CONCAT44(uVar15,uVar14)) {
                uVar14 = SUB84(local_c8,0);
                uVar15 = uVar16;
              }
              if ((double)CONCAT44(uVar19,uVar17) <= local_c0) {
                uVar17 = SUB84(local_c0,0);
                uVar19 = uVar18;
              }
              if ((double)CONCAT44(uVar25,uVar23) <= local_b8) {
                uVar23 = SUB84(local_b8,0);
                uVar25 = uVar24;
              }
              if ((double)CONCAT44(uVar22,uVar20) <= local_b0) {
                uVar20 = SUB84(local_b0,0);
                uVar22 = uVar21;
              }
            }
            iVar5 = *(int *)(param_1 + 0x8e8);
          }
          lVar7 = lVar7 + 1;
        } while (lVar7 < iVar5);
        if (cVar6 != '\0') {
          local_c8 = ((double)CONCAT44(uVar22,uVar20) - (double)CONCAT44(uVar15,uVar14)) * 0.5 *
                     0.10000000149011612;
          local_d0 = ((double)CONCAT44(uVar25,uVar23) - (double)CONCAT44(uVar13,uVar11)) * 0.5 *
                     0.10000000149011612;
          local_d8 = ((double)CONCAT44(uVar19,uVar17) - (double)CONCAT44(uVar10,uVar8)) * 0.5 *
                     0.10000000149011612;
          local_b0 = (double)CONCAT44(uVar22,uVar20) + local_c8;
          local_b8 = (double)CONCAT44(uVar25,uVar23) + local_d0;
          local_c0 = (double)CONCAT44(uVar19,uVar17) + local_d8;
          local_c8 = (double)CONCAT44(uVar15,uVar14) - local_c8;
          local_d0 = (double)CONCAT44(uVar13,uVar11) - local_d0;
          local_d8 = (double)CONCAT44(uVar10,uVar8) - local_d8;
          goto LAB_147c01885;
        }
      }
      dVar3 = *(double *)(param_3 + 0x28);
      dVar2 = *(double *)(param_3 + 0x30);
      *param_2 = *(double *)(param_3 + 0x20);
      param_2[1] = dVar3;
      param_2[2] = dVar2;
      uVar11 = DAT_14c8464e8._4_4_;
      uVar10 = (undefined4)DAT_14c8464e8;
      uVar8 = DAT_14c8464e0._4_4_;
      *(undefined4 *)(param_2 + 3) = (undefined4)DAT_14c8464e0;
      *(undefined4 *)((longlong)param_2 + 0x1c) = uVar8;
      *(undefined4 *)(param_2 + 4) = uVar10;
      *(undefined4 *)((longlong)param_2 + 0x24) = uVar11;
      param_2[5] = DAT_14c8464f0;
      param_2[6] = 0.0;
      goto LAB_147c01901;
    }
    FUN_144a1c3a2(lVar7 + 0xa8,&local_d8,param_3);
  }
LAB_147c01885:
  dVar3 = (local_b0 - local_c8) * 0.5;
  dVar4 = (local_b8 - local_d0) * 0.5;
  dVar2 = (local_c0 - local_d8) * 0.5;
  *param_2 = local_d8 + dVar2;
  param_2[1] = local_d0 + dVar4;
  param_2[2] = local_c8 + dVar3;
  param_2[3] = dVar2;
  param_2[4] = dVar4;
  param_2[5] = dVar3;
  param_2[6] = SQRT(dVar3 * dVar3 + dVar2 * dVar2 + dVar4 * dVar4);
LAB_147c01901:
  if ((local_a0 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c01a48 FUN_147c01a48 body=192 status=ok
// SIG undefined FUN_147c01a48(void)

ulonglong FUN_147c01a48(longlong param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  
  uVar2 = *(ulonglong *)(param_1 + 0xb0);
  if (uVar2 == 0) {
    uVar2 = FUN_1448abda6();
  }
  if (DAT_14caf5fc8 != DAT_14caf5ff4) {
    uVar3 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    puVar5 = &DAT_14caf5ff8;
    if (DAT_14caf6000 != (undefined *)0x0) {
      puVar5 = DAT_14caf6000;
    }
    iVar4 = *(int *)(puVar5 + (ulonglong)(DAT_14caf6008 - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
    if (iVar4 != -1) {
      while (puVar1 = (ulonglong *)(DAT_14caf5fc0 + (longlong)iVar4 * 0x18), *puVar1 != uVar2) {
        iVar4 = (int)puVar1[2];
        if (iVar4 == -1) {
          return 0;
        }
      }
      if (puVar1 + 1 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0) {
        return puVar1[1];
      }
    }
  }
  return 0;
}



// FUNCTION 147c01b08 FUN_147c01b08 body=53 status=ok
// SIG undefined FUN_147c01b08(void)

bool FUN_147c01b08(longlong param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = FUN_141567ade();
  bVar2 = true;
  if (cVar1 == '\0') {
    bVar2 = -1 < (int)*(uint *)(param_1 + 0x698) && (~*(uint *)(param_1 + 0x698) & 0x3fffffff) != 0;
  }
  return bVar2;
}



// FUNCTION 147c01b3e FUN_147c01b3e body=93 status=ok
// SIG undefined FUN_147c01b3e(void)

void FUN_147c01b3e(longlong param_1)

{
  longlong lVar1;
  
  FUN_1401c4d14();
  if (-1 < (int)*(uint *)(param_1 + 0x698) && (~*(uint *)(param_1 + 0x698) & 0x3fffffff) != 0) {
    lVar1 = FUN_147c01a48(param_1);
    if (lVar1 != 0) {
      FUN_1435ec2d4(lVar1,param_1);
      FUN_1435ec210(lVar1,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 147c01b9c FUN_147c01b9c body=51 status=ok
// SIG undefined FUN_147c01b9c(void)

void FUN_147c01b9c(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x3b8))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000147c01bc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x3b0))(param_1,1);
    return;
  }
  return;
}



// FUNCTION 147c01bd0 FUN_147c01bd0 body=51 status=ok
// SIG undefined FUN_147c01bd0(void)

void FUN_147c01bd0(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x3b8))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000147c01bf9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x3b0))(param_1,1);
    return;
  }
  return;
}



// FUNCTION 147c01c04 FUN_147c01c04 body=121 status=ok
// SIG undefined FUN_147c01c04(void)

void FUN_147c01c04(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1402b62fa(param_1,&local_28);
  if (local_28 != 0) {
    FUN_1479b6f8e(local_28,param_2);
  }
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c01c7e FUN_147c01c7e body=154 status=ok
// SIG undefined FUN_147c01c7e(void)

undefined8 FUN_147c01c7e(longlong param_1)

{
  byte bVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  
  lVar4 = *(longlong *)(param_1 + 0xb0);
  if ((lVar4 != 0) || (lVar4 = FUN_1448abda6(), lVar4 != 0)) {
    bVar1 = *(byte *)(lVar4 + 0x152);
    if (bVar1 != 1) {
      if (6 < bVar1) {
        return 0;
      }
      if ((0x68U >> (bVar1 & 0x1f) & 1) == 0) {
        return 0;
      }
    }
    uVar7 = 0;
    if (*(int *)(lVar4 + 0x238) < 1) {
      return 0;
    }
    lVar5 = 0;
    do {
      plVar3 = (longlong *)FUN_14479d2ce(*(longlong *)(lVar4 + 0x230) + lVar5);
      if (((plVar3 != (longlong *)0x0) && ((*(byte *)(plVar3 + 0x84) & 2) != 0)) &&
         (cVar2 = (**(code **)(*plVar3 + 0x6c8))(plVar3), cVar2 != '\0')) {
        return CONCAT71((int7)(uVar7 >> 8),1);
      }
      lVar5 = lVar5 + 8;
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
    } while ((int)uVar6 < *(int *)(lVar4 + 0x238));
  }
  return 0;
}



// FUNCTION 147c01d18 FUN_147c01d18 body=71 status=ok
// SIG undefined FUN_147c01d18(void)

void FUN_147c01d18(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x960) != 0) {
    FUN_1435c0142(param_1,1);
  }
  if (-1 < *(char *)(param_1 + 0x692)) {
    return;
  }
  FUN_147c0251e(param_1,*(undefined8 *)(param_1 + 0x668));
  FUN_1448215fa(param_1);
  return;
}



// FUNCTION 147c01d60 FUN_147c01d60 body=118 status=ok
// SIG undefined FUN_147c01d60(void)

void FUN_147c01d60(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_147c0d818(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_147c0d89e(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147c01dd8 FUN_147c01dd8 body=90 status=ok
// SIG undefined FUN_147c01dd8(void)

void FUN_147c01dd8(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x960) != 0) {
    FUN_1435c0142(param_1,1);
  }
  iVar2 = *(int *)(param_1 + 0x8e8);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x8e0) + lVar3 * 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x90))();
        iVar2 = *(int *)(param_1 + 0x8e8);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  return;
}



// FUNCTION 147c01e32 FUN_147c01e32 body=320 status=ok
// SIG undefined FUN_147c01e32(void)

void FUN_147c01e32(longlong *param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined1 auStack_98 [44];
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((param_2 != 0) && ((*(byte *)((longlong)param_1 + 0x691) & 0x20) != 0)) &&
     ((bVar1 = *(byte *)(param_2 + 0x152), bVar1 == 1 ||
      ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))))) {
    if ((*(byte *)((longlong)param_1 + 0x693) & 4) != 0) {
      local_18 = param_1[0xff];
      local_28 = (undefined4)param_1[0xfd];
      uStack_24 = *(undefined4 *)((longlong)param_1 + 0x7ec);
      uStack_20 = (undefined4)param_1[0xfe];
      uStack_1c = *(undefined4 *)((longlong)param_1 + 0x7f4);
      FUN_144a48320(param_1);
      local_38 = param_1[0x102];
      local_48 = (undefined4)param_1[0x100];
      uStack_44 = *(undefined4 *)((longlong)param_1 + 0x804);
      uStack_40 = (undefined4)param_1[0x101];
      uStack_3c = *(undefined4 *)((longlong)param_1 + 0x80c);
      FUN_144b21d44(param_1);
      local_58 = param_1[0x105];
      local_68 = (undefined4)param_1[0x103];
      uStack_64 = *(undefined4 *)((longlong)param_1 + 0x81c);
      uStack_60 = (undefined4)param_1[0x104];
      uStack_5c = *(undefined4 *)((longlong)param_1 + 0x824);
      FUN_14084f00a(param_1);
      *(byte *)((longlong)param_1 + 0x693) = *(byte *)((longlong)param_1 + 0x693) & 0xfb;
    }
    lVar2 = param_1[0x16];
    if ((((lVar2 == 0) && (lVar2 = FUN_1448abda6(param_1), lVar2 == 0)) ||
        (bVar1 = *(byte *)(lVar2 + 0x152), bVar1 == 1)) ||
       ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) {
      local_6c = 0;
      (**(code **)(*param_1 + 0x4a0))(param_1);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c01f74 FUN_147c01f74 body=96 status=ok
// SIG undefined FUN_147c01f74(void)

void FUN_147c01f74(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  
  bVar2 = *(byte *)(param_1 + 0x690) & 0xfb;
  *(byte *)(param_1 + 0x690) = bVar2;
  lVar1 = *(longlong *)(param_1 + 0x668);
  if (lVar1 != 0) {
    bVar2 = bVar2 | 8;
    *(byte *)(param_1 + 0x690) = bVar2;
    bVar3 = *(byte *)(lVar1 + 0xec);
    if (-1 < (char)bVar3) {
      FUN_1435bf0e6(lVar1);
      bVar3 = *(byte *)(lVar1 + 0xec);
      bVar2 = *(byte *)(param_1 + 0x690) & 0xfb;
    }
    *(byte *)(param_1 + 0x690) = bVar3 >> 4 & 4 | bVar2;
  }
  return;
}



// FUNCTION 147c01ff0 FUN_147c01ff0 body=279 status=ok
// SIG undefined FUN_147c01ff0(void)

void FUN_147c01ff0(longlong *param_1,undefined4 param_2)

{
  byte bVar1;
  char cVar2;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  bVar1 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') {
      return;
    }
    bVar1 = DAT_14c8442b8 & 1;
  }
  if ((((bVar1 == 0) && (param_1[0xcd] != 0)) &&
      ((*(byte *)(param_1 + 0xd2) = *(byte *)(param_1 + 0xd2) & 0x7f, (char)param_2 != '\0' ||
       (cVar2 = (**(code **)(*param_1 + 0x2f0))(param_1), cVar2 != '\0')))) &&
     ((**(code **)(*param_1 + 0xa60))(param_1,param_2),
     (*(byte *)((longlong)param_1 + 0x9e) & 0x10) != 0)) {
    FUN_147c02108((longlong)param_1 + 0xba,param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 147c02108 FUN_147c02108 body=129 status=ok
// SIG undefined FUN_147c02108(void)

void FUN_147c02108(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140845556(param_1,&local_30);
  if (local_30 != 0) {
    FUN_1479b6f4b(local_30,param_2,param_3);
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c0218a FUN_147c0218a body=82 status=ok
// SIG undefined FUN_147c0218a(void)

void FUN_147c0218a(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x2f0))();
  if (cVar1 == '\0') {
    if (DAT_14caf3740 == 0) {
      FUN_1435c33e2(param_1);
      if ((*(byte *)(param_1 + 0xd2) & 0x10) != 0) {
        FUN_147c01c04((longlong)param_1 + 0xbb,param_1);
        return;
      }
    }
    else {
      *(byte *)(param_1 + 0xd2) = *(byte *)(param_1 + 0xd2) | 0x80;
    }
  }
  return;
}



// FUNCTION 147c021e2 FUN_147c021e2 body=26 status=ok
// SIG undefined FUN_147c021e2(void)

void FUN_147c021e2(longlong param_1)

{
  FUN_147a00b08();
  *(byte *)(param_1 + 0x690) = *(byte *)(param_1 + 0x690) | 0x40;
  return;
}



// FUNCTION 147c021fc FUN_147c021fc body=86 status=ok
// SIG undefined FUN_147c021fc(void)

int FUN_147c021fc(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x960) != 0) {
    FUN_1435c0142(param_1,1);
  }
  if ((longlong)*(int *)(param_1 + 0x8e8) < 1) {
    iVar2 = 0;
  }
  else {
    lVar3 = 0;
    iVar2 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x8e0) + lVar3 * 8);
      if (lVar1 != 0) {
        iVar2 = iVar2 + *(int *)(lVar1 + 0x18c);
      }
      lVar3 = lVar3 + 1;
    } while (*(int *)(param_1 + 0x8e8) != lVar3);
  }
  return iVar2;
}



// FUNCTION 147c02252 FUN_147c02252 body=177 status=ok
// SIG undefined FUN_147c02252(void)

void FUN_147c02252(longlong param_1,longlong param_2,longlong param_3,char param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar1 = *(int *)(param_1 + 0x8e8);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x8e0);
    lVar7 = 0;
    do {
      plVar4 = *(longlong **)(lVar3 + lVar7);
      if ((plVar4 != (longlong *)0x0) &&
         (cVar5 = (**(code **)(*plVar4 + 0x1f0))(plVar4), cVar5 != '\0')) {
        if (param_4 == '\0') {
          if (plVar4[0x61] != param_3) goto LAB_147c022cf;
        }
        else {
          plVar4[0x61] = param_3;
        }
        iVar2 = *(int *)(param_2 + 0x48);
        *(uint *)(param_2 + 0x48) = iVar2 + 1U;
        if (*(uint *)(param_2 + 0x4c) < iVar2 + 1U) {
          FUN_147c0d96a(param_2,iVar2);
        }
        lVar6 = *(longlong *)(param_2 + 0x40);
        if (*(longlong *)(param_2 + 0x40) == 0) {
          lVar6 = param_2;
        }
        *(longlong **)(lVar6 + (longlong)iVar2 * 8) = plVar4;
      }
LAB_147c022cf:
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar1 * 8 != lVar7);
  }
  return;
}



// FUNCTION 147c02304 FUN_147c02304 body=156 status=ok
// SIG undefined FUN_147c02304(void)

void FUN_147c02304(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  (**(code **)(*param_1 + 0xa60))(param_1,1);
  lVar3 = param_1[0x11d];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = param_1[0x11c];
    lVar4 = 0;
    do {
      plVar2 = *(longlong **)(lVar1 + lVar4);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x1f8))(plVar2);
        (**(code **)(*plVar2 + 0x208))(plVar2,param_2,param_3,param_4,param_5);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar4);
  }
  return;
}



// FUNCTION 147c023a0 FUN_147c023a0 body=82 status=ok
// SIG undefined FUN_147c023a0(void)

void FUN_147c023a0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x8e8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x8e0);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x200))();
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  FUN_1435c33e2(param_1);
  return;
}



// FUNCTION 147c023f2 FUN_147c023f2 body=123 status=ok
// SIG undefined FUN_147c023f2(void)

void FUN_147c023f2(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x8e8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x8e0);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x208))(plVar3,param_2,param_3,param_4,param_5);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 147c0246e FUN_147c0246e body=175 status=ok
// SIG undefined FUN_147c0246e(void)

longlong * FUN_147c0246e(longlong param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_2 = 0;
  param_2[1] = 0;
  if (*(longlong *)(param_1 + 0x668) != 0) {
    FUN_14010318a(*(longlong *)(param_1 + 0x668),&local_28,0);
    if (&local_28 == param_2) {
      if (local_28 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = local_28;
      *(undefined4 *)(param_2 + 1) = local_20;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_1c;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  FUN_14020fad6(param_2,L"No_ParticleSystem");
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147c0251e FUN_147c0251e body=490 status=ok
// SIG undefined FUN_147c0251e(void)

void FUN_147c0251e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  
  if (*(longlong *)(param_1 + 0x960) != 0) {
    FUN_1435c0142(param_1,1);
  }
  plVar1 = (longlong *)(param_1 + 0x750);
  *(undefined4 *)(param_1 + 0x758) = 0;
  if (*(int *)(param_1 + 0x75c) != 0) {
    FUN_147c0c404(plVar1);
  }
  if ((param_2 != 0) && (0 < *(int *)(param_2 + 0x68))) {
    lVar11 = 0;
    do {
      lVar4 = *(longlong *)(param_2 + 0x60);
      if (*(longlong *)(lVar4 + lVar11 * 8) != 0) {
        lVar9 = FUN_145b523ec();
        lVar4 = *(longlong *)(lVar4 + lVar11 * 8);
        if (((((lVar4 != 0) && (lVar9 != 0)) && (lVar12 = *(longlong *)(lVar4 + 0x10), lVar12 != 0))
            && ((*(int *)(lVar9 + 0x38) <= *(int *)(lVar12 + 0x38) &&
                (*(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
                 == lVar9 + 0x30)))) &&
           ((lVar11 < *(int *)(param_1 + 0x8e8) &&
            ((plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x8e0) + lVar11 * 8),
             plVar7 != (longlong *)0x0 && (0 < *(int *)(lVar4 + 0x48))))))) {
          lVar9 = 0;
          lVar12 = 0;
          do {
            lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x40) + lVar12 * 8);
            iVar3 = *(int *)(param_1 + 0x758);
            if (iVar3 <= lVar12) {
              *(int *)(param_1 + 0x758) = iVar3 + 1;
              if (*(int *)(param_1 + 0x75c) == iVar3) {
                FUN_1417941c8(plVar1,iVar3);
              }
              puVar2 = (undefined8 *)(*plVar1 + (longlong)iVar3 * 0x10);
              *puVar2 = 0;
              puVar2[1] = 0;
            }
            if ((*(byte *)(lVar5 + 0x2c) & 1) != 0) {
              lVar6 = *plVar1;
              lVar8 = *(longlong *)(param_1 + 0xb0);
              if ((lVar8 != 0) ||
                 (lVar8 = FUN_1448abda6(param_1), uVar10 = DAT_14c760db4, lVar8 != 0)) {
                uVar10 = (uint)*(byte *)(lVar8 + 0x150);
              }
              (**(code **)(*plVar7 + 0x168))(plVar7,lVar6 + lVar9,lVar5,uVar10);
            }
            lVar12 = lVar12 + 1;
            lVar9 = lVar9 + 0x10;
          } while (lVar12 < *(int *)(lVar4 + 0x48));
        }
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < *(int *)(param_2 + 0x68));
  }
  *(byte *)(param_1 + 0x692) = *(byte *)(param_1 + 0x692) & 0x7f;
  return;
}



// FUNCTION 147c02708 FUN_147c02708 body=87 status=ok
// SIG undefined FUN_147c02708(void)

void FUN_147c02708(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x960) != 0) {
    FUN_1435c0142(param_1,1);
  }
  iVar2 = *(int *)(param_1 + 0x8e8);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x8e0) + lVar3 * 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x58))();
        iVar2 = *(int *)(param_1 + 0x8e8);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  return;
}



// FUNCTION 147c02760 FUN_147c02760 body=138 status=ok
// SIG undefined FUN_147c02760(void)

void FUN_147c02760(longlong param_1,uint param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x960) != 0) {
    FUN_1435c0142(param_1,1);
  }
  if (((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x8e8))) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x8e0) + (ulonglong)param_2 * 8),
     plVar1 != (longlong *)0x0)) {
    local_28 = *(undefined8 *)(param_3 + 4);
    local_38 = *param_3;
    uStack_34 = param_3[1];
    uStack_30 = param_3[2];
    uStack_2c = param_3[3];
    (**(code **)(*plVar1 + 0x178))();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c027ec FUN_147c027ec body=149 status=ok
// SIG undefined FUN_147c027ec(void)

void FUN_147c027ec(longlong param_1,uint param_2,undefined4 *param_3,undefined4 param_4)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x960) != 0) {
    FUN_1435c0142(param_1,1);
  }
  if (((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x8e8))) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x8e0) + (ulonglong)param_2 * 8),
     plVar1 != (longlong *)0x0)) {
    local_38 = *(undefined8 *)(param_3 + 4);
    local_48 = *param_3;
    uStack_44 = param_3[1];
    uStack_40 = param_3[2];
    uStack_3c = param_3[3];
    (**(code **)(*plVar1 + 0x180))(plVar1,&local_48,param_4);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c02882 FUN_147c02882 body=149 status=ok
// SIG undefined FUN_147c02882(void)

void FUN_147c02882(longlong param_1,uint param_2,undefined4 *param_3,undefined4 param_4)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x960) != 0) {
    FUN_1435c0142(param_1,1);
  }
  if (((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x8e8))) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x8e0) + (ulonglong)param_2 * 8),
     plVar1 != (longlong *)0x0)) {
    local_38 = *(undefined8 *)(param_3 + 4);
    local_48 = *param_3;
    uStack_44 = param_3[1];
    uStack_40 = param_3[2];
    uStack_3c = param_3[3];
    (**(code **)(*plVar1 + 0x188))(plVar1,&local_48,param_4);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c02918 FUN_147c02918 body=117 status=ok
// SIG undefined FUN_147c02918(void)

void FUN_147c02918(longlong param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0x960) != 0) {
    FUN_1435c0142(param_1,1);
  }
  if (((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x8e8))) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x8e0) + (ulonglong)param_2 * 8),
     plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000147c0297d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 400))(plVar1,param_3,param_4);
    return;
  }
  return;
}



// FUNCTION 147c0298e FUN_147c0298e body=149 status=ok
// SIG undefined FUN_147c0298e(void)

void FUN_147c0298e(longlong param_1,uint param_2,undefined4 *param_3,undefined4 param_4)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x960) != 0) {
    FUN_1435c0142(param_1,1);
  }
  if (((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x8e8))) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x8e0) + (ulonglong)param_2 * 8),
     plVar1 != (longlong *)0x0)) {
    local_38 = *(undefined8 *)(param_3 + 4);
    local_48 = *param_3;
    uStack_44 = param_3[1];
    uStack_40 = param_3[2];
    uStack_3c = param_3[3];
    (**(code **)(*plVar1 + 0x198))(plVar1,&local_48,param_4);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c02a24 FUN_147c02a24 body=149 status=ok
// SIG undefined FUN_147c02a24(void)

void FUN_147c02a24(longlong param_1,uint param_2,undefined4 *param_3,undefined4 param_4)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x960) != 0) {
    FUN_1435c0142(param_1,1);
  }
  if (((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x8e8))) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x8e0) + (ulonglong)param_2 * 8),
     plVar1 != (longlong *)0x0)) {
    local_38 = *(undefined8 *)(param_3 + 4);
    local_48 = *param_3;
    uStack_44 = param_3[1];
    uStack_40 = param_3[2];
    uStack_3c = param_3[3];
    (**(code **)(*plVar1 + 0x1a0))(plVar1,&local_48,param_4);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c02aba FUN_147c02aba body=117 status=ok
// SIG undefined FUN_147c02aba(void)

void FUN_147c02aba(longlong param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0x960) != 0) {
    FUN_1435c0142(param_1,1);
  }
  if (((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x8e8))) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x8e0) + (ulonglong)param_2 * 8),
     plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000147c02b1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x1a8))(plVar1,param_3,param_4);
    return;
  }
  return;
}



// FUNCTION 147c02c9a FUN_147c02c9a body=123 status=ok
// SIG undefined FUN_147c02c9a(void)

void FUN_147c02c9a(longlong param_1,longlong param_2,uint param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x960) != 0) {
    FUN_1435c0142(param_1,1);
  }
  iVar2 = *(int *)(param_1 + 0x8e8);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x8e0) + lVar3 * 8);
      if (((plVar1 != (longlong *)0x0) && (plVar1[1] != 0)) &&
         (*(longlong *)(plVar1[1] + 0x28) == param_2)) {
        (**(code **)(*plVar1 + 0x100))(plVar1,param_3 ^ 1);
        iVar2 = *(int *)(param_1 + 0x8e8);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  return;
}



// FUNCTION 147c02d16 FUN_147c02d16 body=628 status=ok
// SIG undefined FUN_147c02d16(void)

int FUN_147c02d16(longlong param_1,double *param_2)

{
  float fVar1;
  char cVar2;
  uint uVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_168 [56];
  undefined1 local_130 [192];
  undefined1 *local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar8 = *(longlong *)(param_1 + 0x668);
  iVar7 = 0;
  if ((((lVar8 != 0) && (1 < *(int *)(lVar8 + 0x90))) && (*(char *)(lVar8 + 0xef) != '\x01')) &&
     ((lVar8 = *(longlong *)(param_1 + 0xb0), lVar8 != 0 ||
      (lVar8 = FUN_1448abda6(param_1), iVar7 = 0, lVar8 != 0)))) {
    local_70 = (undefined1 *)0x0;
    local_68 = 0x800000000;
    if (*(int *)(lVar8 + 0x238) < 1) {
      FUN_147c02f8c(local_130,lVar8 + 0x128);
    }
    else {
      iVar7 = 0;
      lVar10 = 0;
      do {
        plVar4 = (longlong *)FUN_14479d2ce(*(longlong *)(lVar8 + 0x230) + lVar10);
        if (((plVar4 != (longlong *)0x0) && ((*(byte *)(plVar4 + 0x84) & 2) != 0)) &&
           (cVar2 = (**(code **)(*plVar4 + 0x6c8))(plVar4), uVar6 = local_68, cVar2 != '\0')) {
          lVar9 = (longlong)(int)local_68;
          uVar3 = (int)local_68 + 1;
          local_68 = CONCAT44(local_68._4_4_,uVar3);
          if (local_68._4_4_ < uVar3) {
            FUN_146c5b08e(local_130,uVar6 & 0xffffffff);
          }
          puVar5 = local_70;
          if (local_70 == (undefined1 *)0x0) {
            puVar5 = local_130;
          }
          (**(code **)(*plVar4 + 0x718))(plVar4,puVar5 + lVar9 * 0x18);
        }
        lVar10 = lVar10 + 8;
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(lVar8 + 0x238));
    }
    puVar5 = local_130;
    if (local_70 != (undefined1 *)0x0) {
      puVar5 = local_70;
    }
    if ((longlong)(int)local_68 == 0) {
      dVar11 = 0.0;
    }
    else {
      lVar8 = 0;
      dVar12 = 7.737125245533627e+25;
      do {
        dVar11 = (*(double *)(puVar5 + lVar8 + 0x10) - param_2[2]) *
                 (*(double *)(puVar5 + lVar8 + 0x10) - param_2[2]) +
                 (*(double *)(puVar5 + lVar8) - *param_2) * (*(double *)(puVar5 + lVar8) - *param_2)
                 + (*(double *)(puVar5 + lVar8 + 8) - param_2[1]) *
                   (*(double *)(puVar5 + lVar8 + 8) - param_2[1]);
        if (dVar12 <= dVar11) {
          dVar11 = dVar12;
        }
        lVar8 = lVar8 + 0x18;
        dVar12 = dVar11;
      } while ((longlong)(int)local_68 * 0x18 != lVar8);
    }
    uVar3 = *(uint *)(*(longlong *)(param_1 + 0x668) + 0x90);
    if (1 < (int)uVar3) {
      uVar6 = 1;
      do {
        fVar1 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x668) + 0x88) + uVar6 * 4);
        if (dVar11 < (double)(fVar1 * fVar1)) {
          uVar3 = (uint)uVar6;
          break;
        }
        uVar6 = uVar6 + 1;
      } while (uVar3 != uVar6);
    }
    if (local_70 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    iVar7 = uVar3 - 1;
  }
  if ((local_60 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar7;
}



// FUNCTION 147c02f8c FUN_147c02f8c body=124 status=ok
// SIG undefined FUN_147c02f8c(void)

void FUN_147c02f8c(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_2 + 1);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = *(int *)(param_1 + 200);
    *(uint *)(param_1 + 200) = iVar2 + uVar1;
    if ((uint)(*(int *)(param_1 + 0xcc) - iVar2) < uVar1) {
      FUN_146c5b08e(param_1,iVar2);
    }
    lVar3 = *(longlong *)(param_1 + 0xc0);
    if (*(longlong *)(param_1 + 0xc0) == 0) {
      lVar3 = param_1;
    }
    memcpy((void *)(lVar3 + (longlong)iVar2 * 0x18),(void *)*param_2,(longlong)(int)uVar1 * 0x18);
    return;
  }
  return;
}



// FUNCTION 147c03008 FUN_147c03008 body=172 status=ok
// SIG undefined FUN_147c03008(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147c03008(longlong param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x960) != 0) {
    FUN_1435c0142(param_1,1);
  }
  plVar1 = *(longlong **)(param_1 + 0x668);
  if ((plVar1 != (longlong *)0x0) && ((int)plVar1[0x12] != 0)) {
    iVar2 = (**(code **)(*plVar1 + 0x2c8))();
    iVar3 = param_2 + _DAT_14caf3520;
    if (iVar2 + -1 <= param_2 + _DAT_14caf3520) {
      iVar3 = iVar2 + -1;
    }
    iVar2 = 0;
    if (0 < iVar3) {
      iVar2 = iVar3;
    }
    if (*(int *)(param_1 + 0x730) != iVar2) {
      FUN_1448215fa(param_1);
      *(int *)(param_1 + 0x730) = iVar2;
      iVar3 = *(int *)(param_1 + 0x8e8);
      if (0 < iVar3) {
        lVar4 = 0;
        do {
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x8e0) + lVar4 * 8);
          if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 0x50))(plVar1,*(undefined4 *)(param_1 + 0x730),1);
            iVar3 = *(int *)(param_1 + 0x8e8);
          }
          lVar4 = lVar4 + 1;
        } while (lVar4 < iVar3);
      }
    }
  }
  return;
}



// FUNCTION 147c030ee FUN_147c030ee body=205 status=ok
// SIG undefined FUN_147c030ee(void)

undefined8 FUN_147c030ee(longlong param_1,longlong param_2,float *param_3)

{
  float fVar1;
  char cVar2;
  uint uVar3;
  float fVar4;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  ulonglong uVar5;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x693) & 0x10) == 0) {
    lVar7 = 0x848;
    cVar2 = FUN_144a61b4f();
    if (cVar2 == '\0') goto LAB_147c03123;
  }
  lVar7 = 0x6a0;
LAB_147c03123:
  lVar6 = (longlong)*(int *)(param_1 + 8 + lVar7);
  if (0 < lVar6) {
    uVar5 = *(ulonglong *)(param_1 + lVar7);
    lVar7 = 0;
    do {
      if (*(longlong *)(uVar5 + lVar7) == param_2) {
        cVar2 = *(char *)(uVar5 + 8 + lVar7);
        if (cVar2 == '\x02') {
          fVar8 = *(float *)(uVar5 + 0xc + lVar7);
          fVar1 = *(float *)(uVar5 + 0x10 + lVar7);
          uVar3 = *(int *)(param_1 + 0x8f4) * 0xbb38435 + 0x3619636b;
          *(uint *)(param_1 + 0x8f4) = uVar3;
          fVar4 = (float)(uVar3 >> 9 | 0x3f800000);
          uVar5 = (ulonglong)(uint)fVar4;
          fVar8 = (fVar4 + -1.0) * (fVar1 - fVar8) + fVar8;
LAB_147c031b3:
          *param_3 = fVar8;
          return CONCAT71((int7)(uVar5 >> 8),1);
        }
        if (cVar2 == '\x01') {
          fVar8 = *(float *)(uVar5 + 0xc + lVar7);
          goto LAB_147c031b3;
        }
      }
      lVar7 = lVar7 + 0xe0;
    } while (lVar6 * 0xe0 - lVar7 != 0);
  }
  return 0;
}



// FUNCTION 147c031bc FUN_147c031bc body=388 status=ok
// SIG undefined FUN_147c031bc(void)

longlong FUN_147c031bc(longlong param_1,longlong param_2,double *param_3)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  char cVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x693) & 0x10) == 0) {
    lVar13 = 0x848;
    cVar8 = FUN_144a61b4f();
    if (cVar8 == '\0') goto LAB_147c031f7;
  }
  lVar13 = 0x6a0;
LAB_147c031f7:
  lVar9 = (longlong)*(int *)(param_1 + 8 + lVar13);
  if (0 < lVar9) {
    lVar13 = *(longlong *)(param_1 + lVar13);
    lVar12 = lVar9 * 0xe0;
    lVar10 = 0;
    do {
      if (*(longlong *)(lVar13 + lVar10) == param_2) {
        cVar8 = *(char *)(lVar13 + 8 + lVar10);
        lVar9 = CONCAT71((int7)((ulonglong)lVar9 >> 8),1);
        if (cVar8 == '\b') {
          return lVar9;
        }
        if (cVar8 == '\x04') {
          iVar7 = *(int *)(param_1 + 0x8f4);
          uVar11 = iVar7 * 0x1c3c718d + 0xf50d3da5;
          *(uint *)(param_1 + 0x8f4) = uVar11;
          dVar2 = *(double *)(lVar13 + 0x40 + lVar10);
          dVar3 = *(double *)(lVar13 + 0x28 + lVar10);
          dVar4 = *(double *)(lVar13 + 0x38 + lVar10);
          dVar5 = *(double *)(lVar13 + 0x18 + lVar10);
          dVar6 = *(double *)(lVar13 + 0x20 + lVar10);
          *param_3 = (*(double *)(lVar13 + 0x30 + lVar10) - dVar5) *
                     (double)((float)(uVar11 >> 9 | 0x3f800000) + -1.0) + dVar5;
          param_3[1] = (dVar4 - dVar6) *
                       (double)((float)(iVar7 * -0x4b9b4d07 + 0x9d6f2492U >> 9 | 0x3f800000) + -1.0)
                       + dVar6;
          param_3[2] = (dVar2 - dVar3) *
                       (double)((float)(iVar7 * 0xbb38435 + 0x3619636bU >> 9 | 0x3f800000) + -1.0) +
                       dVar3;
          return lVar9;
        }
        if (cVar8 == '\x03') {
          param_3[2] = *(double *)(lVar13 + 0x28 + lVar10);
          pdVar1 = (double *)(lVar13 + 0x18 + lVar10);
          dVar2 = pdVar1[1];
          *param_3 = *pdVar1;
          param_3[1] = dVar2;
          return lVar9;
        }
      }
      lVar10 = lVar10 + 0xe0;
    } while (lVar12 - lVar10 != 0);
  }
  return 0;
}



// FUNCTION 147c03340 FUN_147c03340 body=558 status=ok
// SIG undefined FUN_147c03340(void)

longlong FUN_147c03340(longlong param_1,longlong param_2,double *param_3)

{
  double *pdVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  char cVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  double dVar14;
  float fVar15;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x693) & 0x10) == 0) {
    lVar13 = 0x848;
    cVar8 = FUN_144a61b4f();
    if (cVar8 == '\0') goto LAB_147c0337a;
  }
  lVar13 = 0x6a0;
LAB_147c0337a:
  lVar9 = (longlong)*(int *)(param_1 + 8 + lVar13);
  if (0 < lVar9) {
    lVar13 = *(longlong *)(param_1 + lVar13);
    lVar12 = lVar9 * 0xe0;
    lVar10 = 0;
    do {
      if ((*(longlong *)(lVar13 + lVar10) == param_2) &&
         (uVar11 = (uint)*(byte *)(lVar13 + 8 + lVar10), uVar11 - 1 < 8)) {
        lVar9 = CONCAT71((int7)((ulonglong)lVar9 >> 8),1);
        switch(uVar11) {
        case 1:
          fVar15 = *(float *)(lVar13 + 0xc + lVar10);
          break;
        case 2:
          fVar15 = *(float *)(lVar13 + 0xc + lVar10);
          fVar2 = *(float *)(lVar13 + 0x10 + lVar10);
          uVar11 = *(int *)(param_1 + 0x8f4) * 0xbb38435 + 0x3619636b;
          *(uint *)(param_1 + 0x8f4) = uVar11;
          fVar15 = ((float)(uVar11 >> 9 | 0x3f800000) + -1.0) * (fVar2 - fVar15) + fVar15;
          break;
        case 3:
          param_3[2] = *(double *)(lVar13 + 0x28 + lVar10);
          pdVar1 = (double *)(lVar13 + 0x18 + lVar10);
          dVar14 = pdVar1[1];
          *param_3 = *pdVar1;
          param_3[1] = dVar14;
          return lVar9;
        case 4:
          iVar7 = *(int *)(param_1 + 0x8f4);
          uVar11 = iVar7 * 0x1c3c718d + 0xf50d3da5;
          *(uint *)(param_1 + 0x8f4) = uVar11;
          dVar14 = *(double *)(lVar13 + 0x40 + lVar10);
          dVar3 = *(double *)(lVar13 + 0x28 + lVar10);
          dVar4 = *(double *)(lVar13 + 0x38 + lVar10);
          dVar5 = *(double *)(lVar13 + 0x18 + lVar10);
          dVar6 = *(double *)(lVar13 + 0x20 + lVar10);
          *param_3 = (*(double *)(lVar13 + 0x30 + lVar10) - dVar5) *
                     (double)((float)(uVar11 >> 9 | 0x3f800000) + -1.0) + dVar5;
          param_3[1] = (dVar4 - dVar6) *
                       (double)((float)(iVar7 * -0x4b9b4d07 + 0x9d6f2492U >> 9 | 0x3f800000) + -1.0)
                       + dVar6;
          param_3[2] = (dVar14 - dVar3) *
                       (double)((float)(iVar7 * 0xbb38435 + 0x3619636bU >> 9 | 0x3f800000) + -1.0) +
                       dVar3;
          return lVar9;
        case 5:
          fVar2 = (float)(&DAT_14c758c60)[*(byte *)(lVar13 + 0x49 + lVar10)];
          fVar15 = (float)(&DAT_14c758c60)[*(byte *)(lVar13 + 0x48 + lVar10)];
          *param_3 = (double)(float)(&DAT_14c758c60)[*(byte *)(lVar13 + 0x4a + lVar10)];
          param_3[1] = (double)fVar2;
          param_3[2] = (double)fVar15;
          return lVar9;
        default:
          goto switchD_147c033b6_caseD_6;
        case 8:
          return lVar9;
        }
        dVar14 = (double)fVar15;
        *param_3 = dVar14;
        param_3[1] = dVar14;
        param_3[2] = dVar14;
        return lVar9;
      }
switchD_147c033b6_caseD_6:
      lVar10 = lVar10 + 0xe0;
    } while (lVar12 - lVar10 != 0);
  }
  return 0;
}



// FUNCTION 147c0356e FUN_147c0356e body=193 status=ok
// SIG undefined FUN_147c0356e(void)

undefined8 FUN_147c0356e(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x693) & 0x10) == 0) {
    lVar7 = 0x848;
    cVar4 = FUN_144a61b4f();
    if (cVar4 == '\0') goto LAB_147c035a3;
  }
  lVar7 = 0x6a0;
LAB_147c035a3:
  lVar5 = (longlong)*(int *)(param_1 + 8 + lVar7);
  if (0 < lVar5) {
    lVar7 = *(longlong *)(param_1 + lVar7);
    lVar6 = 0;
    do {
      if ((*(longlong *)(lVar7 + lVar6) == param_2) && (*(char *)(lVar7 + 8 + lVar6) == '\x05')) {
        uVar1 = (&DAT_14c758c60)[*(byte *)(lVar7 + 0x49 + lVar6)];
        bVar3 = *(byte *)(lVar7 + 0x4b + lVar6);
        uVar2 = (&DAT_14c758c60)[*(byte *)(lVar7 + 0x48 + lVar6)];
        *param_3 = (&DAT_14c758c60)[*(byte *)(lVar7 + 0x4a + lVar6)];
        param_3[1] = uVar1;
        param_3[2] = uVar2;
        param_3[3] = (float)bVar3 * 0.003921569;
        return 1;
      }
      lVar6 = lVar6 + 0xe0;
    } while (lVar5 * 0xe0 - lVar6 != 0);
  }
  return 0;
}



// FUNCTION 147c03630 FUN_147c03630 body=125 status=ok
// SIG undefined FUN_147c03630(void)

undefined8 FUN_147c03630(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x693) & 0x10) == 0) {
    lVar5 = 0x848;
    cVar2 = FUN_144a61b4f();
    if (cVar2 == '\0') goto LAB_147c03665;
  }
  lVar5 = 0x6a0;
LAB_147c03665:
  lVar3 = (longlong)*(int *)(param_1 + 8 + lVar5);
  if (0 < lVar3) {
    lVar5 = *(longlong *)(param_1 + lVar5);
    lVar4 = 0;
    do {
      if ((*(longlong *)(lVar5 + lVar4) == param_2) && (*(char *)(lVar5 + 8 + lVar4) == '\x06')) {
        uVar1 = *(undefined8 *)(lVar5 + 0x50 + lVar4);
        *param_3 = uVar1;
        return CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
      }
      lVar4 = lVar4 + 0xe0;
    } while (lVar3 * 0xe0 - lVar4 != 0);
  }
  return 0;
}



// FUNCTION 147c036ae FUN_147c036ae body=125 status=ok
// SIG undefined FUN_147c036ae(void)

undefined8 FUN_147c036ae(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x693) & 0x10) == 0) {
    lVar5 = 0x848;
    cVar2 = FUN_144a61b4f();
    if (cVar2 == '\0') goto LAB_147c036e3;
  }
  lVar5 = 0x6a0;
LAB_147c036e3:
  lVar3 = (longlong)*(int *)(param_1 + 8 + lVar5);
  if (0 < lVar3) {
    lVar5 = *(longlong *)(param_1 + lVar5);
    lVar4 = 0;
    do {
      if ((*(longlong *)(lVar5 + lVar4) == param_2) && (*(char *)(lVar5 + 8 + lVar4) == '\a')) {
        uVar1 = *(undefined8 *)(lVar5 + 0x58 + lVar4);
        *param_3 = uVar1;
        return CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
      }
      lVar4 = lVar4 + 0xe0;
    } while (lVar3 * 0xe0 - lVar4 != 0);
  }
  return 0;
}



// FUNCTION 147c0372c FUN_147c0372c body=542 status=ok
// SIG undefined FUN_147c0372c(void)

void FUN_147c0372c(longlong param_1,double *param_2,longlong *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  double dVar14;
  char cVar15;
  longlong lVar16;
  
  if (((*(byte *)(param_1 + 0x2c) & 1) != 0) && (*(longlong *)(param_1 + 0x48) != 0)) {
    lVar16 = FUN_145b518f4();
    lVar12 = *(longlong *)(param_1 + 0x48);
    if ((((lVar12 != 0) &&
         (((lVar16 != 0 && (lVar13 = *(longlong *)(lVar12 + 0x10), lVar13 != 0)) &&
          (*(int *)(lVar16 + 0x38) <= *(int *)(lVar13 + 0x38))))) &&
        (((*(longlong *)(*(longlong *)(lVar13 + 0x30) + (longlong)*(int *)(lVar16 + 0x38) * 8) ==
           lVar16 + 0x30 && (lVar16 = *(longlong *)(lVar12 + 0x30), lVar16 != 0)) &&
         ((*(byte *)(lVar16 + 0xc0) & 1) != 0)))) &&
       (*(byte *)(lVar16 + 0xc1) < *(byte *)(lVar16 + 0xc3))) {
      cVar15 = FUN_14008384c(lVar16);
      if (cVar15 == '\x02') {
        dVar1 = *(double *)(lVar16 + 0x200);
        dVar2 = *(double *)(lVar16 + 0x208);
        dVar3 = *(double *)(lVar16 + 0x210);
        dVar14 = (double)*(float *)(lVar12 + 0x40);
        dVar4 = *(double *)(lVar16 + 0x230);
        dVar5 = *(double *)(lVar16 + 0x228);
        dVar6 = *(double *)(lVar16 + 0x220);
        dVar7 = *(double *)(lVar16 + 0x218);
        dVar8 = param_2[2];
        dVar9 = param_2[1];
        dVar10 = *param_2;
        iVar11 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar11 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar11 + 1U) {
          FUN_144781dc0(param_3,iVar11);
        }
        lVar12 = *param_3 + (longlong)iVar11 * 0x50;
        *(longlong *)(*param_3 + (longlong)iVar11 * 0x50) = lVar16;
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar16);
        }
        *(double *)(lVar12 + 8) = dVar1 + dVar10;
        *(double *)(lVar12 + 0x10) = dVar2 + dVar9;
        *(double *)(lVar12 + 0x18) = dVar3 + dVar8;
        *(double *)(lVar12 + 0x20) = dVar7 * dVar14;
        *(double *)(lVar12 + 0x28) = dVar6 * dVar14;
        *(double *)(lVar12 + 0x30) = dVar5 * dVar14;
        *(double *)(lVar12 + 0x38) = dVar4 * dVar14;
        *(float *)(lVar12 + 0x40) = (float)(dVar4 + dVar4);
        *(undefined4 *)(lVar12 + 0x44) = 0;
        *(uint *)(lVar12 + 0x48) = *(uint *)(lVar12 + 0x48) & 0xfffffffc | 2;
      }
    }
  }
  return;
}



// FUNCTION 147c0394a FUN_147c0394a body=187 status=ok
// SIG undefined FUN_147c0394a(void)

void FUN_147c0394a(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x668);
  if ((lVar4 != 0) && (0 < *(int *)(lVar4 + 0x68))) {
    lVar5 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(lVar4 + 0x60) + lVar5 * 8);
      if (lVar1 != 0) {
        iVar3 = *(int *)(lVar1 + 0x48);
        if (0 < iVar3) {
          lVar4 = 0;
          do {
            lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x40) + lVar4 * 8);
            if (lVar2 != 0) {
              FUN_147bfffe6(lVar2,param_2,*(longlong *)(param_1 + 0x668) + 0x160,param_1 + 0x670);
              iVar3 = *(int *)(lVar1 + 0x48);
            }
            lVar4 = lVar4 + 1;
          } while (lVar4 < iVar3);
          lVar4 = *(longlong *)(param_1 + 0x668);
        }
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(lVar4 + 0x68));
  }
  FUN_14746bdec(param_2,param_1 + 0x670);
  return;
}



// FUNCTION 147c03a05 FUN_147c03a05 body=214 status=ok
// SIG undefined FUN_147c03a05(void)

void FUN_147c03a05(longlong *param_1,longlong *param_2,float param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  float fVar9;
  
  if ((longlong)(int)param_2[1] != 0) {
    plVar7 = (longlong *)*param_2;
    plVar1 = plVar7 + (int)param_2[1];
    do {
      lVar3 = *plVar7;
      if (lVar3 != 0) {
        plVar4 = (longlong *)param_1[0x18];
        plVar5 = plVar4;
        if (plVar4 == (longlong *)0x0) {
          plVar5 = param_1;
        }
        iVar2 = (int)param_1[0x19];
        lVar8 = (longlong)iVar2;
        if (lVar8 != 0) {
          lVar6 = lVar8 << 4;
          do {
            if (*plVar5 == lVar3) {
              if (plVar5 != (longlong *)0x0) {
                fVar9 = (float)(int)*(float *)(plVar5 + 1);
                if ((float)(int)*(float *)(plVar5 + 1) <= param_3) {
                  fVar9 = param_3;
                }
                *(float *)(plVar5 + 1) = fVar9;
                goto LAB_147c03a90;
              }
              break;
            }
            plVar5 = plVar5 + 2;
            lVar6 = lVar6 + -0x10;
          } while (lVar6 != 0);
        }
        *(uint *)(param_1 + 0x19) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xcc) < iVar2 + 1U) {
          FUN_147c0da5e(param_1,iVar2);
          plVar4 = (longlong *)param_1[0x18];
        }
        if (plVar4 == (longlong *)0x0) {
          plVar4 = param_1;
        }
        plVar4[lVar8 * 2] = lVar3;
        *(float *)(plVar4 + lVar8 * 2 + 1) = param_3;
      }
LAB_147c03a90:
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar1);
  }
  return;
}



// FUNCTION 147c03adc FUN_147c03adc body=720 status=ok
// SIG undefined FUN_147c03adc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147c03adc(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  bool bVar11;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  undefined1 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined *local_138;
  undefined4 local_130;
  longlong local_128;
  ulonglong uStack_120;
  undefined8 local_118 [24];
  undefined8 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_58 = (undefined8 *)0x0;
  local_50 = 0xc00000000;
  lVar7 = *(longlong *)(param_1 + 0x668);
  if (lVar7 != 0) {
    local_128 = 0;
    uStack_120 = 0;
    local_150 = param_3;
    local_148 = param_2;
    if (0 < *(int *)(lVar7 + 0x68)) {
      lVar9 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(lVar7 + 0x60) + lVar9 * 8);
        if (lVar2 != 0) {
          iVar6 = *(int *)(lVar2 + 0x48);
          if (0 < iVar6) {
            lVar7 = 0;
            do {
              lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x40) + lVar7 * 8);
              if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x30) != 0)) {
                bVar11 = (longlong)uStack_120 < 0;
                uStack_120 = uStack_120 & 0xffffffff00000000;
                if (bVar11) {
                  FUN_1448831cc(&local_128,0);
                }
                FUN_147bfffe6(lVar3,&local_128,*(longlong *)(param_1 + 0x668) + 0x160,
                              param_1 + 0x670);
                iVar6 = *(int *)(*(longlong *)(lVar3 + 0x30) + 200);
                iVar1 = *(int *)(*(longlong *)(lVar3 + 0x30) + 0xcc);
                if (iVar6 < iVar1) {
                  iVar6 = iVar1;
                }
                FUN_147c03a05(local_118,&local_128,(float)iVar6);
                FUN_147c0372c(lVar3,param_1 + 0x160,local_150);
                iVar6 = *(int *)(lVar2 + 0x48);
              }
              lVar7 = lVar7 + 1;
            } while (lVar7 < iVar6);
            lVar7 = *(longlong *)(param_1 + 0x668);
          }
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < *(int *)(lVar7 + 0x68));
    }
    FUN_147c03a05(local_118,param_1 + 0x670,0x3f800000);
    if ((int)local_50 != 0) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14caf376c) {
        FUN_144b3d300(&DAT_14caf376c);
        if (DAT_14caf376c == -1) {
          _DAT_14caf3758 = 1;
          _DAT_14caf375c = 0x3f800000;
          uRam000000014caf3760 = 0x3f800000;
          uRam000000014caf3764 = 0x3f800000;
          uRam000000014caf3768 = 0x3f800000;
          _Init_thread_footer(&DAT_14caf376c);
        }
      }
      uVar5 = local_148;
      uVar4 = local_150;
      local_130 = 0xffff0000;
      local_138 = &DAT_14caf3758;
      puVar10 = local_118;
      if (local_58 != (undefined8 *)0x0) {
        puVar10 = local_58;
      }
      if ((longlong)(int)local_50 != 0) {
        puVar8 = puVar10 + (longlong)(int)local_50 * 2;
        do {
          local_140 = *puVar10;
          local_168 = uVar4;
          local_158 = 0;
          local_160 = 0;
          FUN_14478100e(uVar5,param_1 + 0x160,&local_140,
                        (float)((double)*(float *)(puVar10 + 1) * *(double *)(param_1 + 400)));
          puVar10 = puVar10 + 2;
        } while (puVar10 != puVar8);
      }
    }
    if (local_128 != 0) {
      FUN_1400020a8();
    }
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c03db2 FUN_147c03db2 body=185 status=ok
// SIG undefined FUN_147c03db2(void)

void FUN_147c03db2(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,
                  undefined4 *param_5,undefined8 param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  
  iVar1 = *(int *)(param_1 + 0x788);
  *(uint *)(param_1 + 0x788) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x78c) < iVar1 + 1U) {
    FUN_147c0db64((longlong *)(param_1 + 0x780),iVar1);
  }
  puVar6 = (undefined4 *)((longlong)iVar1 * 0x50 + *(longlong *)(param_1 + 0x780));
  *(undefined8 *)(puVar6 + 0x10) = 0;
  *(undefined8 *)(puVar6 + 0x12) = 0;
  *puVar6 = 1;
  *(undefined8 *)(puVar6 + 1) = param_2;
  puVar6[3] = param_3;
  uVar5 = param_4[1];
  *(undefined8 *)(puVar6 + 4) = *param_4;
  *(undefined8 *)(puVar6 + 6) = uVar5;
  *(undefined8 *)(puVar6 + 8) = param_4[2];
  uVar2 = param_5[1];
  uVar3 = param_5[2];
  uVar4 = param_5[3];
  puVar6[10] = *param_5;
  puVar6[0xb] = uVar2;
  puVar6[0xc] = uVar3;
  puVar6[0xd] = uVar4;
  *(undefined8 *)(puVar6 + 0xe) = *(undefined8 *)(param_5 + 4);
  FUN_147c03e6c(puVar6 + 0x10,param_6);
  return;
}



// FUNCTION 147c03e6c FUN_147c03e6c body=88 status=ok
// SIG undefined FUN_147c03e6c(void)

undefined8 * FUN_147c03e6c(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147c0dbf8(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 147c03ec4 FUN_147c03ec4 body=237 status=ok
// SIG undefined FUN_147c03ec4(void)

void FUN_147c03ec4(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,
                  undefined4 *param_5,undefined8 param_6,undefined4 param_7)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  iVar2 = *(int *)(param_1 + 0x798);
  *(uint *)(param_1 + 0x798) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x79c) < iVar2 + 1U) {
    FUN_147c0dc5a((longlong *)(param_1 + 0x790),iVar2);
  }
  puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x790) + (longlong)iVar2 * 0x70);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x12) = 0;
  puVar1[0x14] = 0;
  *(undefined8 *)(puVar1 + 0x16) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined8 *)(puVar1 + 0x1a) = 0;
  *puVar1 = 2;
  *(undefined8 *)(puVar1 + 1) = param_2;
  puVar1[3] = param_3;
  uVar6 = param_4[1];
  *(undefined8 *)(puVar1 + 4) = *param_4;
  *(undefined8 *)(puVar1 + 6) = uVar6;
  *(undefined8 *)(puVar1 + 8) = param_4[2];
  uVar3 = param_5[1];
  uVar4 = param_5[2];
  uVar5 = param_5[3];
  puVar1[10] = *param_5;
  puVar1[0xb] = uVar3;
  puVar1[0xc] = uVar4;
  puVar1[0xd] = uVar5;
  *(undefined8 *)(puVar1 + 0xe) = *(undefined8 *)(param_5 + 4);
  FUN_147c03e6c(puVar1 + 0x10,param_6);
  puVar1[0x14] = param_7;
  return;
}



// FUNCTION 147c03fb2 FUN_147c03fb2 body=368 status=ok
// SIG undefined FUN_147c03fb2(void)

void FUN_147c03fb2(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined4 *param_6,undefined8 param_7,undefined4 param_8,
                  undefined8 *param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  iVar2 = *(int *)(param_1 + 0x7a8);
  *(uint *)(param_1 + 0x7a8) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x7ac) < iVar2 + 1U) {
    FUN_147c0dcea((longlong *)(param_1 + 0x7a0),iVar2);
  }
  puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x7a0) + (longlong)iVar2 * 0xa0);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x12) = 0;
  puVar1[0x14] = 0;
  *(undefined8 *)(puVar1 + 0x16) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined8 *)(puVar1 + 0x1a) = 0;
  *(undefined8 *)(puVar1 + 0x1c) = 0;
  *(undefined8 *)(puVar1 + 0x1e) = 0;
  *(undefined8 *)(puVar1 + 0x20) = 0;
  *(undefined8 *)(puVar1 + 0x22) = 0;
  *(undefined8 *)(puVar1 + 0x24) = 0;
  *puVar1 = 3;
  *(undefined8 *)(puVar1 + 1) = param_2;
  puVar1[3] = param_3;
  *(undefined8 *)(puVar1 + 8) = param_4[2];
  uVar6 = param_4[1];
  *(undefined8 *)(puVar1 + 4) = *param_4;
  *(undefined8 *)(puVar1 + 6) = uVar6;
  uVar6 = param_5[1];
  *(undefined8 *)(puVar1 + 0x16) = *param_5;
  *(undefined8 *)(puVar1 + 0x18) = uVar6;
  *(undefined8 *)(puVar1 + 0x1a) = param_5[2];
  uVar3 = param_6[1];
  uVar4 = param_6[2];
  uVar5 = param_6[3];
  puVar1[10] = *param_6;
  puVar1[0xb] = uVar3;
  puVar1[0xc] = uVar4;
  puVar1[0xd] = uVar5;
  *(undefined8 *)(puVar1 + 0xe) = *(undefined8 *)(param_6 + 4);
  FUN_147c03e6c(puVar1 + 0x10,param_7);
  puVar1[0x14] = param_8;
  uVar6 = param_9[1];
  *(undefined8 *)(puVar1 + 0x1c) = *param_9;
  *(undefined8 *)(puVar1 + 0x1e) = uVar6;
  *(undefined8 *)(puVar1 + 0x20) = param_9[2];
  puVar1[0x22] = param_10;
  puVar1[0x23] = param_11;
  *(undefined8 *)(puVar1 + 0x24) = param_12;
  *(undefined8 *)(puVar1 + 0x26) = param_13;
  return;
}



// FUNCTION 147c04122 FUN_147c04122 body=169 status=ok
// SIG undefined FUN_147c04122(void)

void FUN_147c04122(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 *param_5,undefined8 param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  iVar1 = *(int *)(param_1 + 0x7b8);
  *(uint *)(param_1 + 0x7b8) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x7bc) < iVar1 + 1U) {
    FUN_147c0dd7e((longlong *)(param_1 + 0x7b0),iVar1);
  }
  puVar5 = (undefined4 *)((longlong)iVar1 * 0x58 + *(longlong *)(param_1 + 0x7b0));
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined8 *)(puVar5 + 0x12) = 0;
  *puVar5 = 4;
  *(undefined8 *)(puVar5 + 1) = param_2;
  puVar5[3] = param_3;
  puVar5[0x14] = param_4;
  uVar2 = param_5[1];
  uVar3 = param_5[2];
  uVar4 = param_5[3];
  puVar5[4] = *param_5;
  puVar5[5] = uVar2;
  puVar5[6] = uVar3;
  puVar5[7] = uVar4;
  *(undefined8 *)(puVar5 + 8) = *(undefined8 *)(param_5 + 4);
  FUN_147c03e6c(puVar5 + 0x10,param_6);
  return;
}



// FUNCTION 147c041cc FUN_147c041cc body=167 status=ok
// SIG undefined FUN_147c041cc(void)

void FUN_147c041cc(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  iVar2 = *(int *)(param_1 + 0x7c8);
  *(uint *)(param_1 + 0x7c8) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x7cc) < iVar2 + 1U) {
    FUN_147c0de0e((longlong *)(param_1 + 0x7c0),iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x7c0);
  lVar5 = (longlong)iVar2 * 0x50;
  puVar1 = (undefined8 *)(lVar3 + 0x40 + lVar5);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)(lVar3 + lVar5) = 5;
  *(undefined8 *)(lVar3 + 4 + lVar5) = param_2;
  *(undefined4 *)(lVar3 + 0xc + lVar5) = param_3;
  uVar4 = param_4[1];
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar5);
  *puVar1 = *param_4;
  puVar1[1] = uVar4;
  *(undefined8 *)(lVar3 + 0x20 + lVar5) = param_4[2];
  uVar4 = param_6[1];
  puVar1 = (undefined8 *)(lVar3 + 0x28 + lVar5);
  *puVar1 = *param_6;
  puVar1[1] = uVar4;
  *(undefined8 *)(lVar3 + 0x38 + lVar5) = param_6[2];
  return;
}



// FUNCTION 147c04282 FUN_147c04282 body=119 status=ok
// SIG undefined FUN_147c04282(void)

longlong FUN_147c04282(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  
  uVar2 = (**(code **)(*param_1 + 0xb90))();
  if (uVar2 != 0xffffffff) {
    if (((-1 < (int)uVar2) && ((int)uVar2 < (int)param_1[0xcf])) &&
       (lVar1 = *(longlong *)(param_1[0xce] + (ulonglong)uVar2 * 8), lVar1 != 0)) {
      return lVar1;
    }
    if (param_1[0xcd] != 0) {
      lVar1 = *(longlong *)(*(longlong *)(param_1[0xcd] + 0x160) + 8 + (longlong)(int)uVar2 * 0x10);
      if (DAT_14c950c29 != '\x01') {
        return lVar1;
      }
      if (lVar1 == 0) {
        return 0;
      }
      FUN_1456cec3c(lVar1);
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 147c04382 FUN_147c04382 body=151 status=ok
// SIG undefined FUN_147c04382(void)

int FUN_147c04382(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  int local_40;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = *(int *)(param_1 + 0x8e8);
  if ((longlong)iVar1 == 0) {
    iVar4 = 0x980;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x8e0);
    iVar4 = 0x980;
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar5);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x130))(plVar3,local_3c,&local_40);
        iVar4 = iVar4 + local_40;
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c0441a FUN_147c0441a body=564 status=ok
// SIG undefined FUN_147c0441a(void)

longlong * FUN_147c0441a(longlong *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *(undefined4 *)param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)((longlong)param_2 + 4),4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)((longlong)param_2 + 4) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    plVar2 = (longlong *)param_2[1];
  }
  else {
    switch(*(undefined4 *)param_2) {
    case 1:
      plVar2 = (longlong *)FUN_14001cc68(0xd8,0x10);
      FUN_147c09012(plVar2);
      *plVar2 = (longlong)&PTR_FUN_14aa00060;
      break;
    case 2:
      plVar2 = (longlong *)FUN_14001cc68(0x108,0x10);
      FUN_147c09012(plVar2);
      *plVar2 = (longlong)&PTR_FUN_14aa006c0;
      plVar2[0x1b] = 0;
      plVar2[0x1c] = 0;
      *(undefined1 *)(plVar2 + 0x1d) = 0;
      *(undefined8 *)((longlong)plVar2 + 0xec) = 0;
      *(undefined2 *)((longlong)plVar2 + 0xf4) = 0;
      plVar2[0x1f] = 0x3f800000;
      *(undefined4 *)(plVar2 + 0x20) = 0;
      break;
    case 3:
      plVar2 = (longlong *)FUN_14001cc68(0x168,0x10);
      FUN_147bf835c(plVar2);
      break;
    case 4:
      plVar2 = (longlong *)FUN_14001cc68(0x100,0x10);
      FUN_147c09012(plVar2);
      plVar2[0x1b] = 0;
      plVar2[0x1c] = 0;
      *(undefined4 *)(plVar2 + 0x1d) = 0xffffffff;
      *(undefined4 *)((longlong)plVar2 + 0xec) = 0;
      *(undefined4 *)(plVar2 + 0x1e) = 1;
      *(undefined4 *)((longlong)plVar2 + 0xf4) = 1;
      *plVar2 = (longlong)&PTR_FUN_14aa00768;
      *(undefined4 *)(plVar2 + 0x1f) = 0;
      break;
    case 5:
      plVar2 = (longlong *)FUN_14001cc68(0xf8,0x10);
      FUN_147c09012(plVar2);
      *plVar2 = (longlong)&PTR_FUN_14aa00808;
      plVar2[0x1b] = 0;
      plVar2[0x1c] = 0;
      *(undefined4 *)(plVar2 + 0x1d) = 0xffffffff;
      *(undefined4 *)((longlong)plVar2 + 0xec) = 0;
      *(undefined4 *)(plVar2 + 0x1e) = 1;
      *(undefined4 *)((longlong)plVar2 + 0xf4) = 1;
      break;
    default:
      param_2[1] = 0;
      return param_1;
    }
    param_2[1] = plVar2;
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2,param_1);
  }
  return param_1;
}



// FUNCTION 147c0464e FUN_147c0464e body=122 status=ok
// SIG undefined FUN_147c0464e(void)

void FUN_147c0464e(longlong param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined1 auStack_a8 [32];
  uint local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = param_4;
  FUN_14798fb38(local_78,param_1 + -0x3e0,param_2,param_3);
  local_88 = local_88 & 0xffffff00;
  FUN_1413d4c10(param_1 + -0x3e0,local_78,0,0);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c046ca FUN_147c046ca body=150 status=ok
// SIG undefined FUN_147c046ca(void)

void FUN_147c046ca(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = *(longlong **)(param_1 + 0x3f0);
  if (plVar1 == (longlong *)0x0) goto LAB_147c04725;
  if ((param_1 == 0) || (DAT_14c950c29 == '\0')) {
    if (param_1 != 0) goto LAB_147c04709;
    local_28 = 0;
  }
  else {
    FUN_1456cec3c(param_1);
LAB_147c04709:
    local_28 = param_1 + 0x3e0;
  }
  local_30 = param_1;
  (**(code **)(*plVar1 + 0x7a0))(plVar1);
LAB_147c04725:
  FUN_1403d8a98(param_1,param_2);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c04762 FUN_147c04762 body=47 status=ok
// SIG undefined FUN_147c04762(void)

void FUN_147c04762(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x10) = param_2;
  return;
}



// FUNCTION 147c047c8 FUN_147c047c8 body=63 status=ok
// SIG undefined FUN_147c047c8(void)

void FUN_147c047c8(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(param_1 + -0x3e0);
  FUN_1447210f0(plVar1);
  if (*(longlong *)(param_1 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000147c047fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x648))(plVar1);
    return;
  }
  return;
}



// FUNCTION 147c04854 FUN_147c04854 body=149 status=ok
// SIG undefined FUN_147c04854(void)

bool FUN_147c04854(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *param_2;
  if ((((lVar3 == 0) || (lVar2 = FUN_144a6c4d8(), lVar2 == 0)) ||
      (*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38))) ||
     ((*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
       lVar2 + 0x30 || (lVar3 = *param_2, lVar3 == 0)))) {
    return false;
  }
  lVar2 = FUN_144a6c4d8();
  if ((lVar2 == 0) ||
     ((*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38) ||
      (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
       lVar2 + 0x30)))) {
    lVar3 = 0;
  }
  else {
    lVar3 = *param_2;
  }
  if (lVar3 == *(longlong *)(param_1 + -0x3d0)) {
    return true;
  }
  iVar1 = FUN_147c048ea(param_1 + 0x88,param_2);
  return iVar1 != -1;
}



// FUNCTION 147c048ea FUN_147c048ea body=186 status=ok
// SIG undefined FUN_147c048ea(void)

ulonglong FUN_147c048ea(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar1 = *param_1;
    lVar4 = (longlong)(int)param_1[1] << 3;
    uVar6 = 0;
    do {
      lVar5 = *(longlong *)(lVar1 + uVar6 * 8);
      if ((((lVar5 == 0) || (lVar2 = FUN_144a6c4d8(), lVar2 == 0)) ||
          (*(int *)(lVar5 + 0x38) < *(int *)(lVar2 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
          lVar2 + 0x30)) {
        lVar5 = 0;
      }
      else {
        lVar5 = *(longlong *)(lVar1 + uVar6 * 8);
      }
      lVar2 = *param_2;
      if (((lVar2 == 0) || (lVar3 = FUN_144a6c4d8(), lVar3 == 0)) ||
         ((*(int *)(lVar2 + 0x38) < *(int *)(lVar3 + 0x38) ||
          (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
           lVar3 + 0x30)))) {
        lVar2 = 0;
      }
      else {
        lVar2 = *param_2;
      }
      if (lVar5 == lVar2) {
        return uVar6 & 0xffffffff;
      }
      uVar6 = uVar6 + 1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  return 0xffffffff;
}



// FUNCTION 147c049b4 FUN_147c049b4 body=79 status=ok
// SIG undefined FUN_147c049b4(void)

void FUN_147c049b4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  FUN_14485c47a(param_1 + 2000);
  *(undefined8 *)(param_1 + 0x7d8) = param_3;
  *(undefined1 *)(param_1 + 0x7e0) = param_4;
  *(undefined1 *)(param_1 + 0x7e1) = param_5;
  *(undefined1 *)(param_1 + 0x7e2) = param_6;
  return;
}



// FUNCTION 147c04a04 FUN_147c04a04 body=72 status=ok
// SIG undefined FUN_147c04a04(void)

void FUN_147c04a04(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x68);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x60);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar4);
      if (lVar3 != 0) {
        FUN_140721fbe(param_2,lVar3 + 0x28);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}


