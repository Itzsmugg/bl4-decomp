// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14841b090 FUN_14841b090 body=45 status=ok
// SIG undefined FUN_14841b090(void)

longlong FUN_14841b090(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14841b10e FUN_14841b10e body=45 status=ok
// SIG undefined FUN_14841b10e(void)

longlong FUN_14841b10e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14841b146 FUN_14841b146 body=45 status=ok
// SIG undefined FUN_14841b146(void)

longlong FUN_14841b146(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14841b174 FUN_14841b174 body=53 status=ok
// SIG undefined FUN_14841b174(void)

void FUN_14841b174(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x2e0);
  plVar2 = (longlong *)(param_1 + 0x300);
  if (*(longlong **)(param_1 + 0x2f0) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_1 + 0x2f0);
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014841b1a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}



// FUNCTION 14841b1c2 FUN_14841b1c2 body=45 status=ok
// SIG undefined FUN_14841b1c2(void)

longlong FUN_14841b1c2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14594033c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14841b298 FUN_14841b298 body=59 status=ok
// SIG undefined FUN_14841b298(void)

undefined8 FUN_14841b298(longlong *param_1)

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



// FUNCTION 14841b33a FUN_14841b33a body=341 status=ok
// SIG undefined FUN_14841b33a(void)

undefined4 *
FUN_14841b33a(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14841b490(param_1,local_48);
  plVar1 = (longlong *)param_3[1];
  uVar4 = *(uint *)*param_3;
  *local_40 = uVar4;
  lVar8 = *plVar1;
  *(longlong *)(local_40 + 4) = lVar8;
  local_40[8] = 0;
  local_40[9] = 0;
  if (lVar8 != 0) {
    plVar5 = plVar1 + 4;
    if ((longlong *)plVar1[2] != (longlong *)0x0) {
      plVar5 = (longlong *)plVar1[2];
    }
    (**(code **)*plVar5)(plVar5,local_40 + 8);
    uVar4 = *local_40;
  }
  local_40[0x14] = 0xffffffff;
  local_4c = local_48[0];
  local_58 = param_4;
  cVar2 = FUN_14841b57e(param_1,uVar4,local_40);
  if (cVar2 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar6) {
      uVar3 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_40[0x15] = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[0x14] =
           *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_14841b6e2(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14841b490 FUN_14841b490 body=238 status=ok
// SIG undefined FUN_14841b490(void)

int * FUN_14841b490(longlong *param_1,int *param_2)

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
      FUN_1401284dc(param_1,iVar6);
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



// FUNCTION 14841b57e FUN_14841b57e body=205 status=ok
// SIG undefined FUN_14841b57e(void)

void FUN_14841b57e(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  void *_Dst;
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
        _Dst = (void *)(*param_1 + (longlong)iVar3 * 0x60);
        if (*(int *)(*param_1 + (longlong)iVar3 * 0x60) == *param_3) {
          if (*(longlong *)((longlong)_Dst + 0x10) != 0) {
            plVar2 = (longlong *)((longlong)_Dst + 0x30);
            if (*(longlong **)((longlong)_Dst + 0x20) != (longlong *)0x0) {
              plVar2 = *(longlong **)((longlong)_Dst + 0x20);
            }
            (**(code **)(*plVar2 + 0x10))();
          }
          memmove(_Dst,param_3,0x50);
          FUN_14841b64c(param_1,*param_4,1);
          *param_4 = iVar3;
          uVar1 = 1;
          goto LAB_14841b5f3;
        }
        iVar3 = *(int *)((longlong)_Dst + 0x50);
      } while (iVar3 != -1);
    }
  }
  uVar1 = 0;
LAB_14841b5f3:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 14841b64c FUN_14841b64c body=150 status=ok
// SIG undefined FUN_14841b64c(void)

void FUN_14841b64c(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x60 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x60) = param_2;
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
      puVar7 = puVar7 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14841b6e2 FUN_14841b6e2 body=423 status=ok
// SIG undefined FUN_14841b6e2(void)

void FUN_14841b6e2(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x60;
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



// FUNCTION 14841b88a FUN_14841b88a body=148 status=ok
// SIG undefined FUN_14841b88a(void)

undefined8 FUN_14841b88a(undefined8 param_1)

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
  uVar1 = FUN_145b717ea();
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



// FUNCTION 14841b920 FUN_14841b920 body=103 status=ok
// SIG undefined FUN_14841b920(void)

longlong * FUN_14841b920(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar1 = *param_2;
  if ((lVar1 == 0) || (DAT_14c950c29 == '\0')) {
    if (lVar1 == 0) {
      lVar3 = 0;
      goto LAB_14841b96c;
    }
  }
  else {
    FUN_14689c22e(lVar1);
  }
  uVar2 = FUN_14587e120();
  lVar3 = FUN_144718840(lVar1,uVar2);
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar1);
  }
LAB_14841b96c:
  *param_1 = lVar1;
  param_1[1] = lVar3;
  return param_1;
}



// FUNCTION 14841b987 FUN_14841b987 body=148 status=ok
// SIG undefined FUN_14841b987(void)

undefined8 FUN_14841b987(undefined8 param_1)

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
  uVar1 = FUN_145b71616();
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



// FUNCTION 14841ba1c FUN_14841ba1c body=148 status=ok
// SIG undefined FUN_14841ba1c(void)

undefined8 FUN_14841ba1c(undefined8 param_1)

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
  uVar1 = FUN_141210f18();
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



// FUNCTION 14841bab1 FUN_14841bab1 body=148 status=ok
// SIG undefined FUN_14841bab1(void)

undefined8 FUN_14841bab1(undefined8 param_1)

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
  uVar1 = FUN_145b719be();
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



// FUNCTION 14841bb46 FUN_14841bb46 body=304 status=ok
// SIG undefined FUN_14841bb46(void)

void FUN_14841bb46(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar6 = 0;
    do {
      if ((*(int *)(lVar1 + 8 + lVar6) != 0) &&
         (plVar2 = *(longlong **)(lVar1 + lVar6), plVar2 != (longlong *)0x0)) {
        local_68 = 0;
        local_60 = 0;
        (**(code **)(*plVar2 + 0x40))(plVar2,&local_68);
        uVar4 = uStack_50;
        lVar7 = (longlong)(int)uStack_50;
        uVar5 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
        if (uStack_50._4_4_ < uVar5) {
          FUN_1447a71f6(&local_58,uVar4 & 0xffffffff);
        }
        lVar7 = lVar7 * 0x10;
        *(undefined8 *)(local_58 + lVar7) = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = 0;
        *(undefined8 *)(local_58 + lVar7) = local_68;
        local_68 = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = local_60;
        local_60 = 0;
        FUN_1449db362(&local_68);
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar6);
  }
  FUN_1448a8284(param_1);
  FUN_144a3e8f2(param_1,&local_58);
  FUN_144760e21(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14841bc77 FUN_14841bc77 body=148 status=ok
// SIG undefined FUN_14841bc77(void)

undefined8 FUN_14841bc77(undefined8 param_1)

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
  uVar1 = FUN_145b71700();
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



// FUNCTION 14841bd0c FUN_14841bd0c body=148 status=ok
// SIG undefined FUN_14841bd0c(void)

undefined8 FUN_14841bd0c(undefined8 param_1)

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
  uVar1 = FUN_145b71aa8();
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



// FUNCTION 14841bda1 FUN_14841bda1 body=148 status=ok
// SIG undefined FUN_14841bda1(void)

undefined8 FUN_14841bda1(undefined8 param_1)

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
  uVar1 = FUN_145b718d4();
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



// FUNCTION 14841be8e FUN_14841be8e body=25 status=ok
// SIG undefined FUN_14841be8e(void)

undefined8 FUN_14841be8e(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 14841bf06 FUN_14841bf06 body=25 status=ok
// SIG undefined FUN_14841bf06(void)

undefined8 FUN_14841bf06(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 14841bf2a FUN_14841bf2a body=25 status=ok
// SIG undefined FUN_14841bf2a(void)

undefined8 FUN_14841bf2a(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 14841bf88 FUN_14841bf88 body=25 status=ok
// SIG undefined FUN_14841bf88(void)

undefined8 FUN_14841bf88(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 14841c01d FUN_14841c01d body=880 status=ok
// SIG undefined FUN_14841c01d(void)

void FUN_14841c01d(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  float fVar18;
  undefined1 auStack_398 [32];
  longlong *local_378;
  int local_36c;
  longlong local_368;
  longlong local_360;
  undefined4 local_358 [188];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_398;
  if (1 < (int)param_2) {
    memset(local_358,0,0x2f0);
    local_360 = param_1 + (ulonglong)param_2 * 0x18 + -0x18;
    local_368 = param_1;
    fVar18 = logf((float)(int)param_2);
    local_358[0] = (int)(longlong)(fVar18 + fVar18);
    plVar9 = &local_368;
    do {
      puVar12 = (undefined8 *)*plVar9;
      puVar11 = (undefined8 *)plVar9[1];
      local_36c = (int)plVar9[2];
      iVar5 = (int)((ulonglong)((longlong)puVar11 - (longlong)puVar12) >> 3);
      puVar14 = puVar11;
      puVar17 = puVar12;
      local_378 = plVar9;
      if (local_36c != 0) {
LAB_14841c0f0:
        uVar6 = iVar5 * -0x55555555 + 1;
        plVar9 = local_378;
        if (8 < (int)uVar6) {
          uVar7 = (ulonglong)(uVar6 >> 1);
          local_58 = puVar12[uVar7 * 3 + 2];
          uVar1 = puVar12[uVar7 * 3];
          uVar2 = (puVar12 + uVar7 * 3)[1];
          puVar12[uVar7 * 3 + 2] = puVar12[2];
          uVar3 = puVar12[1];
          puVar12[uVar7 * 3] = *puVar12;
          (puVar12 + uVar7 * 3)[1] = uVar3;
          puVar12[2] = local_58;
          local_68._0_4_ = (undefined4)uVar1;
          local_68._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
          uStack_60._0_4_ = (undefined4)uVar2;
          uStack_60._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          *(undefined4 *)puVar12 = (undefined4)local_68;
          *(undefined4 *)((longlong)puVar12 + 4) = local_68._4_4_;
          *(undefined4 *)(puVar12 + 1) = (undefined4)uStack_60;
          *(undefined4 *)((longlong)puVar12 + 0xc) = uStack_60._4_4_;
          puVar10 = puVar14 + 3;
          puVar13 = puVar12;
          local_68 = uVar1;
          uStack_60 = uVar2;
          do {
            puVar4 = puVar13 + 3;
            puVar15 = puVar13 + 3;
            do {
              puVar13 = puVar15;
              puVar16 = puVar4;
              if (puVar14 < puVar13) break;
              iVar5 = FUN_144a78538(puVar12,puVar13);
              puVar4 = puVar16 + 3;
              puVar15 = puVar13 + 3;
            } while (-1 < iVar5);
            puVar4 = puVar10 + -6;
            do {
              puVar15 = puVar10;
              puVar8 = puVar4;
              puVar10 = puVar15 + -3;
              if (puVar10 <= puVar12) break;
              iVar5 = FUN_144a78538(puVar10,puVar12);
              puVar4 = puVar8 + -3;
            } while (-1 < iVar5);
            if (puVar10 < puVar13) goto LAB_14841c1e6;
            local_58 = puVar13[2];
            uVar1 = *puVar13;
            uVar2 = puVar13[1];
            puVar13[2] = puVar15[-1];
            uVar3 = puVar15[-2];
            *puVar13 = *puVar10;
            puVar13[1] = uVar3;
            puVar15[-1] = local_58;
            local_68._0_4_ = (undefined4)uVar1;
            local_68._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
            uStack_60._0_4_ = (undefined4)uVar2;
            uStack_60._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
            *(undefined4 *)puVar10 = (undefined4)local_68;
            *(undefined4 *)((longlong)puVar15 + -0x14) = local_68._4_4_;
            *(undefined4 *)(puVar15 + -2) = (undefined4)uStack_60;
            *(undefined4 *)((longlong)puVar15 + -0xc) = uStack_60._4_4_;
            local_68 = uVar1;
            uStack_60 = uVar2;
          } while( true );
        }
        for (; local_378 = plVar9, puVar17 = puVar12, puVar11 = puVar12, puVar12 < puVar14;
            puVar14 = puVar14 + -3) {
          while (puVar10 = puVar17, puVar11 = puVar11 + 3, puVar11 <= puVar14) {
            iVar5 = FUN_144a78538(puVar10,puVar11);
            puVar17 = puVar11;
            if (-1 < iVar5) {
              puVar17 = puVar10;
            }
          }
          local_58 = puVar10[2];
          local_68 = *puVar10;
          uStack_60 = puVar10[1];
          uVar2 = local_68;
          uVar3 = uStack_60;
          puVar10[2] = puVar14[2];
          uVar1 = puVar14[1];
          *puVar10 = *puVar14;
          puVar10[1] = uVar1;
          puVar14[2] = local_58;
          local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
          uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
          *(undefined4 *)puVar14 = (undefined4)local_68;
          *(undefined4 *)((longlong)puVar14 + 4) = local_68._4_4_;
          *(undefined4 *)(puVar14 + 1) = (undefined4)uStack_60;
          *(undefined4 *)((longlong)puVar14 + 0xc) = uStack_60._4_4_;
          plVar9 = local_378;
          local_68 = uVar2;
          uStack_60 = uVar3;
        }
        goto LAB_14841c364;
      }
LAB_14841c37e:
      FUN_14841c38e(puVar12);
      plVar9 = local_378;
LAB_14841c364:
      plVar9 = plVar9 + -3;
    } while (&local_368 <= plVar9);
  }
  if ((local_48 ^ (ulonglong)auStack_398) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14841c1e6:
  local_58 = puVar12[2];
  local_68 = *puVar12;
  uStack_60 = puVar12[1];
  uVar2 = local_68;
  uVar3 = uStack_60;
  puVar12[2] = puVar15[-1];
  uVar1 = puVar15[-2];
  *puVar12 = *puVar10;
  puVar12[1] = uVar1;
  puVar15[-1] = local_58;
  local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  *(undefined4 *)puVar10 = (undefined4)local_68;
  *(undefined4 *)((longlong)puVar15 + -0x14) = local_68._4_4_;
  *(undefined4 *)(puVar15 + -2) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)puVar15 + -0xc) = uStack_60._4_4_;
  local_36c = local_36c + -1;
  puVar15 = puVar15 + -6;
  local_68 = uVar2;
  uStack_60 = uVar3;
  if ((longlong)puVar8 - (longlong)puVar17 < (longlong)puVar11 - (longlong)puVar16) {
    plVar9 = local_378;
    if (puVar13 < puVar14) {
      *local_378 = (longlong)puVar13;
      local_378[1] = (longlong)puVar14;
      *(int *)(local_378 + 2) = local_36c;
      plVar9 = local_378 + 3;
    }
    puVar11 = puVar8;
    puVar16 = puVar12;
    if (puVar10 <= puVar12 + 3) goto LAB_14841c364;
  }
  else {
    if (puVar12 + 3 < puVar10) {
      *local_378 = (longlong)puVar12;
      local_378[1] = (longlong)puVar15;
      *(int *)(local_378 + 2) = local_36c;
      local_378 = local_378 + 3;
    }
    plVar9 = local_378;
    puVar12 = puVar13;
    puVar15 = puVar14;
    puVar11 = puVar14;
    if (puVar14 <= puVar13) goto LAB_14841c364;
  }
  local_378 = plVar9;
  iVar5 = (int)((ulonglong)((longlong)puVar11 - (longlong)puVar16) >> 3);
  puVar14 = puVar15;
  puVar17 = puVar16;
  if (local_36c == 0) goto LAB_14841c37e;
  goto LAB_14841c0f0;
}



// FUNCTION 14841c38e FUN_14841c38e body=600 status=ok
// SIG undefined FUN_14841c38e(void)

void FUN_14841c38e(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != 0) {
    iVar12 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar10 = iVar12;
joined_r0x00014841c3d3:
    do {
      iVar8 = iVar12 * 2 + 1;
      if (iVar8 < (int)param_2) {
        iVar9 = iVar12 * 2 + 2;
        if ((iVar9 < (int)param_2) &&
           (iVar7 = FUN_144a78538(param_1 + (longlong)iVar9 * 3,param_1 + (longlong)iVar8 * 3),
           -1 < iVar7)) {
          iVar8 = iVar9;
        }
        puVar2 = param_1 + (longlong)iVar12 * 3;
        puVar3 = param_1 + (longlong)iVar8 * 3;
        iVar12 = FUN_144a78538(puVar2,puVar3);
        if (iVar12 < 0) {
          local_48 = puVar2[2];
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          puVar2[2] = puVar3[2];
          uVar6 = puVar3[1];
          *puVar2 = *puVar3;
          puVar2[1] = uVar6;
          puVar3[2] = local_48;
          local_58._0_4_ = (undefined4)uVar4;
          local_58._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_50._0_4_ = (undefined4)uVar5;
          uStack_50._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          *(undefined4 *)puVar3 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar3 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar3 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_50._4_4_;
          iVar12 = iVar8;
          local_58 = uVar4;
          uStack_50 = uVar5;
          goto joined_r0x00014841c3d3;
        }
      }
      bVar13 = iVar10 != 0;
      iVar12 = iVar10 + -1;
      iVar10 = iVar12;
    } while (bVar13);
    if (1 < (int)param_2) {
      uVar11 = (ulonglong)param_2 - 1;
      local_48 = param_1[2];
      uVar4 = *param_1;
      uVar5 = param_1[1];
      param_1[2] = param_1[uVar11 * 3 + 2];
      uVar6 = (param_1 + uVar11 * 3)[1];
      *param_1 = param_1[uVar11 * 3];
      param_1[1] = uVar6;
      param_1[uVar11 * 3 + 2] = local_48;
      local_58._0_4_ = (undefined4)uVar4;
      local_58._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_50._0_4_ = (undefined4)uVar5;
      uStack_50._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      puVar2 = param_1 + uVar11 * 3;
      *(undefined4 *)puVar2 = (undefined4)local_58;
      *(undefined4 *)((longlong)puVar2 + 4) = local_58._4_4_;
      *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_50;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_50._4_4_;
      local_58 = uVar4;
      uStack_50 = uVar5;
      if (param_2 != 2) {
        do {
          iVar12 = 0;
          iVar8 = 1;
          iVar10 = 0;
          do {
            iVar12 = iVar12 + 2;
            iVar9 = iVar8;
            if (((longlong)iVar12 < (longlong)uVar11) &&
               (iVar8 = FUN_144a78538(param_1 + (longlong)iVar12 * 3,param_1 + (longlong)iVar8 * 3),
               -1 < iVar8)) {
              iVar9 = iVar12;
            }
            puVar2 = param_1 + (longlong)iVar10 * 3;
            puVar3 = param_1 + (longlong)iVar9 * 3;
            iVar12 = FUN_144a78538(puVar2,puVar3);
            if (-1 < iVar12) break;
            local_48 = puVar2[2];
            uVar4 = *puVar2;
            uVar5 = puVar2[1];
            puVar2[2] = puVar3[2];
            uVar6 = puVar3[1];
            *puVar2 = *puVar3;
            puVar2[1] = uVar6;
            puVar3[2] = local_48;
            local_58._0_4_ = (undefined4)uVar4;
            local_58._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
            uStack_50._0_4_ = (undefined4)uVar5;
            uStack_50._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
            *(undefined4 *)puVar3 = (undefined4)local_58;
            *(undefined4 *)((longlong)puVar3 + 4) = local_58._4_4_;
            *(undefined4 *)(puVar3 + 1) = (undefined4)uStack_50;
            *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_50._4_4_;
            iVar12 = iVar9 * 2;
            iVar8 = iVar9 * 2 + 1;
            local_58 = uVar4;
            uStack_50 = uVar5;
            iVar10 = iVar9;
          } while ((longlong)iVar8 < (longlong)uVar11);
          uVar1 = uVar11 - 1;
          local_48 = param_1[2];
          uVar4 = *param_1;
          uVar5 = param_1[1];
          param_1[2] = param_1[uVar1 * 3 + 2];
          uVar6 = (param_1 + uVar1 * 3)[1];
          *param_1 = param_1[uVar1 * 3];
          param_1[1] = uVar6;
          param_1[uVar1 * 3 + 2] = local_48;
          local_58._0_4_ = (undefined4)uVar4;
          local_58._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_50._0_4_ = (undefined4)uVar5;
          uStack_50._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          puVar2 = param_1 + uVar1 * 3;
          *(undefined4 *)puVar2 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar2 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_50._4_4_;
          bVar13 = 2 < uVar11;
          uVar11 = uVar1;
          local_58 = uVar4;
          uStack_50 = uVar5;
        } while (bVar13);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14841c5e7 FUN_14841c5e7 body=22 status=ok
// SIG undefined FUN_14841c5e7(void)

void FUN_14841c5e7(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 * 0x18);
    return;
  }
  return;
}



// FUNCTION 14841c5fe FUN_14841c5fe body=98 status=ok
// SIG undefined FUN_14841c5fe(void)

void FUN_14841c5fe(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x18 + *param_1);
  FUN_144a65a1e(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 0x18),(longlong)iVar2 * 0x18);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 14841c6fe FUN_14841c6fe body=5 status=ok
// SIG undefined FUN_14841c6fe(void)

longlong FUN_14841c6fe(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 14841c772 FUN_14841c772 body=1 status=ok
// SIG undefined FUN_14841c772(void)

void FUN_14841c772(void)

{
  return;
}



// FUNCTION 14841c774 FUN_14841c774 body=29 status=ok
// SIG undefined FUN_14841c774(void)

undefined8 FUN_14841c774(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14841c792 FUN_14841c792 body=62 status=ok
// SIG undefined FUN_14841c792(void)

void FUN_14841c792(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14841c7d0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,4);
  }
  return;
}



// FUNCTION 14841c7d0 FUN_14841c7d0 body=93 status=ok
// SIG undefined FUN_14841c7d0(void)

ulonglong FUN_14841c7d0(uint param_1,uint param_2)

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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,4);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 14841c82e FUN_14841c82e body=132 status=ok
// SIG undefined FUN_14841c82e(void)

void FUN_14841c82e(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14841c8ec FUN_14841c8ec body=29 status=ok
// SIG undefined FUN_14841c8ec(void)

undefined8 FUN_14841c8ec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14841c942 FUN_14841c942 body=29 status=ok
// SIG undefined FUN_14841c942(void)

undefined8 FUN_14841c942(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14841c960 FUN_14841c960 body=175 status=ok
// SIG undefined FUN_14841c960(void)

void FUN_14841c960(longlong *param_1,undefined8 param_2,undefined8 param_3)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_14841c9e9;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14841c9e9:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14841ca10 FUN_14841ca10 body=175 status=ok
// SIG undefined FUN_14841ca10(void)

void FUN_14841ca10(longlong *param_1,undefined8 param_2,undefined4 param_3)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_14841ca99;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14841ca99:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14841cac0 FUN_14841cac0 body=282 status=ok
// SIG undefined FUN_14841cac0(void)

void FUN_14841cac0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined1 auStack_e8 [44];
  uint local_bc;
  undefined8 local_b8 [12];
  char local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar4 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar4 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
  }
  else {
    plVar7 = (longlong *)0x0;
    do {
      local_bc = (uint)plVar7;
      lVar11 = uVar4 * 0x10 + -8;
      uVar8 = uVar4;
      while ((*(int *)(*param_1 + lVar11) != 0 &&
             (plVar6 = *(longlong **)(*param_1 + -8 + lVar11), plVar6 != (longlong *)0x0))) {
        local_58 = *(char *)(param_3 + 0xc);
        if (local_58 == '\x01') {
          puVar9 = param_3;
          puVar10 = local_b8;
          for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
            *puVar10 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar10 = puVar10 + 1;
          }
        }
        cVar3 = (**(code **)(*plVar6 + 0x60))(plVar6,param_2,local_b8);
        plVar7 = plVar6;
        if (cVar3 == '\0') break;
        lVar11 = lVar11 + -0x10;
        bVar2 = uVar8 < 2;
        uVar8 = uVar8 - 1;
        if (bVar2) {
          *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
          if ((local_bc & 1) != 0) goto LAB_14841cb93;
          goto LAB_14841cba3;
        }
      }
      uVar4 = uVar8 - 1;
      plVar7 = (longlong *)CONCAT71((int7)((ulonglong)plVar7 >> 8),1);
    } while (1 < uVar8);
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14841cb93:
    FUN_14474d06a(param_1,0);
  }
LAB_14841cba3:
  if (*(char *)(param_3 + 0xc) == '\x01') {
    *(undefined1 *)(param_3 + 0xc) = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14841cbdc FUN_14841cbdc body=132 status=ok
// SIG undefined FUN_14841cbdc(void)

void FUN_14841cbdc(longlong param_1,int param_2)

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



// FUNCTION 14841cc62 FUN_14841cc62 body=63 status=ok
// SIG undefined FUN_14841cc62(void)

void FUN_14841cc62(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14841cca2(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 14841cca2 FUN_14841cca2 body=97 status=ok
// SIG undefined FUN_14841cca2(void)

ulonglong FUN_14841cca2(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
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



// FUNCTION 14841cd03 FUN_14841cd03 body=14 status=ok
// SIG undefined FUN_14841cd03(void)

void FUN_14841cd03(void *param_1,uint param_2)

{
  memset(param_1,0,(ulonglong)param_2 << 4);
  return;
}



// FUNCTION 14841cd12 FUN_14841cd12 body=161 status=ok
// SIG undefined FUN_14841cd12(void)

undefined8 FUN_14841cd12(longlong param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (DAT_14c872d28 == (longlong *)0x0) {
    uVar3 = 0xc0;
  }
  else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
    uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - DAT_14c841e0c];
  }
  else {
    uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,0xc0,0x10);
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar3;
  uVar2 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar4 = 0x7fffffff;
  if (0 < (int)(uVar3 / 0xc0)) {
    uVar4 = uVar3 / 0xc0 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    uVar2 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0xc0,0x10);
  }
  return uVar2;
}



// FUNCTION 14841cdb4 FUN_14841cdb4 body=234 status=ok
// SIG undefined FUN_14841cdb4(void)

void FUN_14841cdb4(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
  }
  else {
    bVar6 = false;
    do {
      lVar8 = uVar5 * 0x10 + -8;
      uVar7 = uVar5;
      while ((*(int *)(*param_1 + lVar8) != 0 &&
             (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 != (longlong *)0x0))) {
        local_68 = *param_3;
        uStack_64 = param_3[1];
        uStack_60 = param_3[2];
        uStack_5c = param_3[3];
        local_58 = param_3[4];
        uStack_54 = param_3[5];
        uStack_50 = param_3[6];
        uStack_4c = param_3[7];
        cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,&local_68);
        if (cVar4 == '\0') break;
        lVar8 = lVar8 + -0x10;
        bVar3 = uVar7 < 2;
        uVar7 = uVar7 - 1;
        if (bVar3) {
          *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
          if (bVar6) goto LAB_14841ce6a;
          goto LAB_14841ce79;
        }
      }
      uVar5 = uVar7 - 1;
      bVar6 = true;
    } while (1 < uVar7);
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14841ce6a:
    FUN_14474d06a(param_1,0);
  }
LAB_14841ce79:
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14841cea0 FUN_14841cea0 body=92 status=ok
// SIG undefined FUN_14841cea0(void)

void FUN_14841cea0(longlong *param_1,longlong param_2,undefined1 param_3)

{
  undefined1 uVar1;
  
  if (param_2 != 0) {
    FUN_14485c47a(param_1 + 0x36);
    uVar1 = *(undefined1 *)((longlong)param_1 + 0xd1);
    *(undefined1 *)((longlong)param_1 + 0xd1) = 1;
    (**(code **)(*param_1 + 0x2b8))(param_1,param_2 + 0x240);
    *(undefined1 *)((longlong)param_1 + 0xd1) = uVar1;
  }
  *(undefined1 *)(param_1 + 0x37) = param_3;
  return;
}



// FUNCTION 14841cefc FUN_14841cefc body=131 status=ok
// SIG undefined FUN_14841cefc(void)

undefined8 * FUN_14841cefc(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  cVar3 = FUN_144729dda(param_1 + 0x1b0);
  if (cVar3 == '\0') {
    puVar6 = (undefined8 *)(param_1 + 0xf0);
    puVar7 = param_2;
    for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  else {
    lVar4 = FUN_14479d2ce(param_1 + 0x1b0);
    puVar6 = (undefined8 *)(lVar4 + 0x240);
    puVar7 = param_2;
    for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    if (*(char *)(param_1 + 0x1b8) == '\x01') {
      uVar2 = *(undefined8 *)(param_1 + 0x138);
      uVar1 = *(undefined8 *)(param_1 + 0x140);
      param_2[8] = *(undefined8 *)(param_1 + 0x130);
      param_2[9] = uVar2;
      param_2[10] = uVar1;
      param_2[0xb] = 0;
    }
  }
  return param_2;
}



// FUNCTION 14841cf80 FUN_14841cf80 body=26 status=ok
// SIG undefined FUN_14841cf80(void)

undefined8 * FUN_14841cf80(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)(param_1 + 0xf0);
  puVar3 = param_2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return param_2;
}



// FUNCTION 14841cf9a FUN_14841cf9a body=202 status=ok
// SIG undefined FUN_14841cf9a(void)

void FUN_14841cf9a(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined8 local_98 [8];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar1 = param_1 + 0x1b0;
  cVar2 = FUN_144729dda(lVar1);
  if (cVar2 != '\0') {
    puVar5 = param_2;
    puVar6 = local_98;
    for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    if (*(char *)(param_1 + 0x1b8) == '\x01') {
      lVar4 = FUN_14479d2ce(lVar1);
      local_58 = *(undefined4 *)(lVar4 + 0x280);
      uStack_54 = *(undefined4 *)(lVar4 + 0x284);
      uStack_50 = *(undefined4 *)(lVar4 + 0x288);
      uStack_4c = *(undefined4 *)(lVar4 + 0x28c);
      local_48 = *(undefined8 *)(lVar4 + 0x290);
      uStack_40 = 0;
    }
    uVar3 = FUN_14479d2ce(lVar1);
    local_a8 = 0;
    FUN_140613f88(uVar3,local_98,0,0);
  }
  FUN_14841d066(param_1,param_2);
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14841d066 FUN_14841d066 body=165 status=ok
// SIG undefined FUN_14841d066(void)

void FUN_14841d066(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_a8 [32];
  longlong local_88 [12];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_1 + 0x1e;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *plVar1 = *param_2;
    param_2 = param_2 + 1;
    plVar1 = plVar1 + 1;
  }
  if (*(char *)((longlong)param_1 + 0xd1) == '\x01') {
    (**(code **)(*param_1 + 0x2e8))(param_1);
    plVar1 = param_1 + 0x11;
  }
  else {
    (**(code **)(*param_1 + 0x2f0))(param_1);
    plVar1 = param_1 + 5;
  }
  plVar3 = param_1 + 0x1e;
  plVar4 = local_88;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *plVar4 = *plVar3;
    plVar3 = plVar3 + 1;
    plVar4 = plVar4 + 1;
  }
  FUN_14844e476(plVar1,param_1);
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14841d10c FUN_14841d10c body=203 status=ok
// SIG undefined FUN_14841d10c(void)

void FUN_14841d10c(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  cVar1 = FUN_144729dda(param_1 + 0x1b0);
  if (cVar1 != '\0') {
    lVar2 = FUN_14479d2ce(param_1 + 0x1b0);
    puVar5 = (undefined8 *)(param_1 + 0xf0);
    puVar7 = (undefined8 *)(lVar2 + 0x240);
    puVar4 = puVar5;
    for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar4 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar4 = puVar4 + 1;
    }
    if ((longlong)*(int *)(param_1 + 0xe0) != 0) {
      lVar2 = (longlong)*(int *)(param_1 + 0xe0) * 0x160;
      puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0xd8) + 0x100);
      do {
        puVar4 = puVar7 + -0xc;
        puVar6 = puVar7;
        for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
          *puVar6 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        }
        FUN_1447d58ca(puVar7,puVar5);
        puVar7 = puVar7 + 0x2c;
        lVar2 = lVar2 + -0x160;
      } while (lVar2 != 0);
    }
    puVar7 = (undefined8 *)(param_1 + 0x150);
    for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    return;
  }
  FUN_14841d1d8(param_1);
  return;
}



// FUNCTION 14841d1d8 FUN_14841d1d8 body=386 status=ok
// SIG undefined FUN_14841d1d8(void)

void FUN_14841d1d8(longlong param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  double dVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  iVar1 = *(int *)(param_1 + 0xe0);
  if ((longlong)iVar1 == 1) {
    lVar4 = *(longlong *)(param_1 + 0xd8);
    puVar9 = (undefined8 *)(lVar4 + 0xa0);
    puVar6 = (undefined8 *)(param_1 + 0xf0);
    for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar6 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar9 = (undefined8 *)(lVar4 + 0x100);
  }
  else {
    if (iVar1 != 0) {
      lVar4 = *(longlong *)(param_1 + 0xd8);
      lVar8 = (longlong)iVar1 * 0x160;
      lVar5 = 0;
      dVar11 = DAT_14c8464e8;
      dVar10 = DAT_14c8464f0;
      dVar3 = DAT_14c8464e0;
      do {
        dVar3 = dVar3 + *(double *)(lVar4 + 0xc0 + lVar5);
        dVar11 = dVar11 + *(double *)(lVar4 + 200 + lVar5);
        dVar10 = dVar10 + *(double *)(lVar4 + 0xd0 + lVar5);
        lVar5 = lVar5 + 0x160;
      } while (lVar8 - lVar5 != 0);
      *(undefined8 *)(param_1 + 0xf0) = 0;
      *(undefined8 *)(param_1 + 0xf8) = 0;
      dVar12 = 1.0 / (double)iVar1;
      *(undefined8 *)(param_1 + 0x100) = 0;
      *(undefined8 *)(param_1 + 0x108) = 0x3ff0000000000000;
      auVar2._8_4_ = SUB84(dVar11 * dVar12,0);
      auVar2._0_8_ = dVar3 * dVar12;
      auVar2._12_4_ = (int)((ulonglong)(dVar11 * dVar12) >> 0x20);
      *(undefined1 (*) [16])(param_1 + 0x110) = auVar2;
      *(double *)(param_1 + 0x120) = dVar12 * dVar10;
      *(undefined8 *)(param_1 + 0x128) = 0;
      *(undefined4 *)(param_1 + 0x130) = 0;
      *(undefined4 *)(param_1 + 0x134) = 0x3ff00000;
      *(undefined4 *)(param_1 + 0x138) = 0;
      *(undefined4 *)(param_1 + 0x13c) = 0x3ff00000;
      *(undefined8 *)(param_1 + 0x140) = 0x3ff0000000000000;
      *(undefined8 *)(param_1 + 0x148) = 0;
      puVar9 = (undefined8 *)(lVar4 + 0x100);
      do {
        puVar6 = puVar9 + -0xc;
        puVar7 = puVar9;
        for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        FUN_1447d58ca(puVar9,param_1 + 0xf0);
        puVar9 = puVar9 + 0x2c;
        lVar8 = lVar8 + -0x160;
      } while (lVar8 != 0);
      goto LAB_14841d237;
    }
    puVar9 = (undefined8 *)(param_1 + 0xf0);
  }
  puVar6 = &DAT_14c846480;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar9 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar9 = puVar9 + 1;
  }
LAB_14841d237:
  puVar9 = (undefined8 *)(param_1 + 0xf0);
  puVar6 = (undefined8 *)(param_1 + 0x150);
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar6 = puVar6 + 1;
  }
  return;
}



// FUNCTION 14841d35e FUN_14841d35e body=200 status=ok
// SIG undefined FUN_14841d35e(void)

longlong *
FUN_14841d35e(undefined8 param_1,longlong param_2,longlong param_3,undefined4 *param_4,
             longlong *param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)FUN_14841d426(param_2);
  FUN_141200de6(param_2,plVar5);
  (**(code **)(*plVar5 + 0x490))(plVar5,*(undefined8 *)(param_2 + 0x1c8),&DAT_14cadad98,0);
  if ((param_3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_3);
  }
  plVar5[0xc9] = param_3;
  *(bool *)(plVar5 + 0xca) = param_3 != 0;
  lVar4 = param_5[1];
  plVar5[0xcb] = *param_5;
  plVar5[0xcc] = lVar4;
  plVar5[0xcd] = param_5[2];
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  *(undefined4 *)(plVar5 + 0xc5) = *param_4;
  *(undefined4 *)((longlong)plVar5 + 0x62c) = uVar1;
  *(undefined4 *)(plVar5 + 0xc6) = uVar2;
  *(undefined4 *)((longlong)plVar5 + 0x634) = uVar3;
  *(undefined4 *)((longlong)plVar5 + 0x674) = param_6;
  FUN_140b506a4(plVar5);
  return plVar5;
}



// FUNCTION 14841d426 FUN_14841d426 body=175 status=ok
// SIG undefined FUN_14841d426(void)

undefined8 FUN_14841d426(undefined8 param_1)

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
  local_b8 = FUN_145b72cf0();
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



// FUNCTION 14841d4d6 FUN_14841d4d6 body=233 status=ok
// SIG undefined FUN_14841d4d6(void)

longlong *
FUN_14841d4d6(undefined8 param_1,longlong param_2,longlong param_3,undefined4 *param_4,
             longlong *param_5,longlong *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)FUN_14841d5bf(param_2);
  FUN_141200de6(param_2,plVar5);
  (**(code **)(*plVar5 + 0x490))(plVar5,*(undefined8 *)(param_2 + 0x1c8),&DAT_14cadad98,0);
  if ((param_3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_3);
  }
  plVar5[0xc9] = param_3;
  *(bool *)(plVar5 + 0xca) = param_3 != 0;
  plVar5[0xcd] = param_5[2];
  lVar4 = param_5[1];
  plVar5[0xcb] = *param_5;
  plVar5[0xcc] = lVar4;
  lVar4 = param_6[1];
  plVar5[0xce] = *param_6;
  plVar5[0xcf] = lVar4;
  plVar5[0xd0] = param_6[2];
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  *(undefined4 *)(plVar5 + 0xc5) = *param_4;
  *(undefined4 *)((longlong)plVar5 + 0x62c) = uVar1;
  *(undefined4 *)(plVar5 + 0xc6) = uVar2;
  *(undefined4 *)((longlong)plVar5 + 0x634) = uVar3;
  *(undefined8 *)((longlong)plVar5 + 0x694) = 0x41f0000041f00000;
  *(undefined1 *)(plVar5 + 0xd4) = 6;
  FUN_140b506a4(plVar5);
  return plVar5;
}



// FUNCTION 14841d5bf FUN_14841d5bf body=175 status=ok
// SIG undefined FUN_14841d5bf(void)

undefined8 FUN_14841d5bf(undefined8 param_1)

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
  local_b8 = FUN_145b738d2();
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



// FUNCTION 14841d670 FUN_14841d670 body=200 status=ok
// SIG undefined FUN_14841d670(void)

longlong *
FUN_14841d670(undefined8 param_1,longlong param_2,longlong param_3,undefined4 *param_4,
             longlong *param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)FUN_14841379a(param_2);
  FUN_141200de6(param_2,plVar5);
  (**(code **)(*plVar5 + 0x490))(plVar5,*(undefined8 *)(param_2 + 0x1c8),&DAT_14cadad98,0);
  if ((param_3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_3);
  }
  plVar5[0xc9] = param_3;
  *(bool *)(plVar5 + 0xca) = param_3 != 0;
  lVar4 = param_5[1];
  plVar5[0xcb] = *param_5;
  plVar5[0xcc] = lVar4;
  plVar5[0xcd] = param_5[2];
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  *(undefined4 *)(plVar5 + 0xc5) = *param_4;
  *(undefined4 *)((longlong)plVar5 + 0x62c) = uVar1;
  *(undefined4 *)(plVar5 + 0xc6) = uVar2;
  *(undefined4 *)((longlong)plVar5 + 0x634) = uVar3;
  *(undefined4 *)(plVar5 + 0xce) = param_6;
  FUN_140b506a4(plVar5);
  return plVar5;
}



// FUNCTION 14841d738 FUN_14841d738 body=209 status=ok
// SIG undefined FUN_14841d738(void)

longlong *
FUN_14841d738(undefined8 param_1,longlong param_2,longlong param_3,longlong *param_4,
             longlong *param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)FUN_14841d809(param_2);
  FUN_141200de6(param_2,plVar5);
  (**(code **)(*plVar5 + 0x490))(plVar5,*(undefined8 *)(param_2 + 0x1c8),&DAT_14cadad98,0);
  if ((param_3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_3);
  }
  plVar5[0xc9] = param_3;
  *(bool *)(plVar5 + 0xca) = param_3 != 0;
  plVar5[0xcd] = param_5[2];
  lVar4 = param_5[1];
  plVar5[0xcb] = *param_5;
  plVar5[0xcc] = lVar4;
  lVar4 = param_4[1];
  plVar5[0xc5] = *param_4;
  plVar5[0xc6] = lVar4;
  uVar1 = param_6[1];
  uVar2 = param_6[2];
  uVar3 = param_6[3];
  *(undefined4 *)(plVar5 + 0xd2) = *param_6;
  *(undefined4 *)((longlong)plVar5 + 0x694) = uVar1;
  *(undefined4 *)(plVar5 + 0xd3) = uVar2;
  *(undefined4 *)((longlong)plVar5 + 0x69c) = uVar3;
  plVar5[0xd4] = *(longlong *)(param_6 + 4);
  FUN_140b506a4(plVar5);
  return plVar5;
}



// FUNCTION 14841d809 FUN_14841d809 body=175 status=ok
// SIG undefined FUN_14841d809(void)

undefined8 FUN_14841d809(undefined8 param_1)

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
  local_b8 = FUN_145b72dda();
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



// FUNCTION 14841d8ba FUN_14841d8ba body=206 status=ok
// SIG undefined FUN_14841d8ba(void)

longlong * FUN_14841d8ba(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_14841d988();
  FUN_141200de6(param_1,plVar2);
  (**(code **)(*plVar2 + 0x490))(plVar2,*(undefined8 *)(param_1 + 0x1c8),&DAT_14cadad98,0);
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
  }
  plVar2[0xc9] = param_2;
  *(bool *)(plVar2 + 0xca) = param_2 != 0;
  lVar1 = param_3[1];
  plVar2[0xcb] = *param_3;
  plVar2[0xcc] = lVar1;
  plVar2[0xcd] = param_3[2];
  lVar1 = param_4[1];
  plVar2[0xcf] = *param_4;
  plVar2[0xd0] = lVar1;
  plVar2[0xd1] = param_4[2];
  *(undefined4 *)(plVar2 + 0xd2) = 0x42700000;
  *(undefined1 *)((longlong)plVar2 + 0x694) = 0;
  *(undefined4 *)(plVar2 + 0xc5) = 0x3f189899;
  *(undefined4 *)((longlong)plVar2 + 0x62c) = 0x3f800000;
  *(undefined4 *)(plVar2 + 0xc6) = 0x3f189899;
  *(undefined4 *)((longlong)plVar2 + 0x634) = 0x3f800000;
  FUN_140b506a4(plVar2);
  return plVar2;
}



// FUNCTION 14841d988 FUN_14841d988 body=175 status=ok
// SIG undefined FUN_14841d988(void)

undefined8 FUN_14841d988(undefined8 param_1)

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
  local_b8 = FUN_1458f21e4();
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



// FUNCTION 14841da3c FUN_14841da3c body=209 status=ok
// SIG undefined FUN_14841da3c(void)

undefined8 * FUN_14841da3c(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x2f0,0x10);
  FUN_1406ff4f8(puVar2,param_1,0);
  *puVar2 = &PTR_FUN_14aed85c0;
  uVar1 = *(undefined8 *)(param_1 + 0x630);
  puVar2[0x53] = *(undefined8 *)(param_1 + 0x628);
  puVar2[0x54] = uVar1;
  puVar2[0x57] = *(undefined8 *)(param_1 + 0x668);
  uVar1 = *(undefined8 *)(param_1 + 0x660);
  puVar2[0x55] = *(undefined8 *)(param_1 + 0x658);
  puVar2[0x56] = uVar1;
  *(undefined4 *)(puVar2 + 0x58) = *(undefined4 *)(param_1 + 0x670);
  *(undefined4 *)((longlong)puVar2 + 0x2c4) = *(undefined4 *)(param_1 + 0x674);
  *(undefined4 *)(puVar2 + 0x59) = *(undefined4 *)(param_1 + 0x678);
  *(undefined4 *)((longlong)puVar2 + 0x2cc) = *(undefined4 *)(param_1 + 0x638);
  puVar2[0x5a] = param_1 + 0x640;
  puVar2[0x5b] = param_1 + 0x641;
  puVar2[0x5c] = param_1 + 0x650;
  return puVar2;
}



// FUNCTION 14841db0e FUN_14841db0e body=428 status=ok
// SIG undefined FUN_14841db0e(void)

undefined1 (*) [16] FUN_14841db0e(longlong param_1,undefined1 (*param_2) [16],double *param_3)

{
  double dVar1;
  undefined1 auVar2 [32];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  
  dVar8 = *param_3;
  dVar9 = param_3[1];
  dVar10 = param_3[2];
  dVar3 = DAT_14c8464e0 * param_3[8];
  dVar4 = DAT_14c8464e8 * param_3[9];
  dVar15 = DAT_14c8464f0 * param_3[10];
  dVar1 = param_3[3];
  dVar16 = dVar4 * dVar8 - dVar3 * dVar9;
  dVar5 = dVar15 * dVar9 - dVar4 * dVar10;
  dVar6 = dVar3 * dVar10 - dVar8 * dVar15;
  dVar5 = dVar5 + dVar5;
  dVar6 = dVar6 + dVar6;
  dVar16 = dVar16 + dVar16;
  dVar7 = (dVar10 * dVar5 - dVar8 * dVar16) + param_3[3] * dVar6 + dVar4 + param_3[5];
  dVar4 = param_3[6];
  auVar11._0_8_ = ABS(param_3[8]);
  auVar11._8_8_ = ABS(param_3[9]);
  dVar14 = ABS(param_3[10]);
  auVar2._24_8_ = ABS(param_3[0xb]);
  auVar2._16_8_ = dVar14;
  auVar2._0_16_ = auVar11;
  auVar12 = maxpd(auVar11,auVar2._8_16_);
  auVar13._8_8_ = auVar11._0_8_;
  auVar13._0_8_ = dVar14;
  auVar13 = maxpd(auVar12,auVar13);
  dVar14 = (double)(float)auVar13._0_8_ *
           (double)(*(float *)(param_1 + 0x670) + *(float *)(param_1 + 0x674));
  auVar12._8_4_ = SUB84(dVar7,0);
  auVar12._0_8_ = (dVar16 * dVar9 - dVar6 * dVar10) + dVar1 * dVar5 + dVar3 + param_3[4];
  auVar12._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  *param_2 = auVar12;
  *(double *)param_2[1] = dVar16 * dVar1 + dVar15 + (dVar6 * dVar8 - dVar5 * dVar9) + dVar4;
  *(double *)param_2[3] = dVar14;
  *(double *)(param_2[1] + 8) = dVar14;
  *(double *)param_2[2] = dVar14;
  *(double *)(param_2[2] + 8) = dVar14;
  return param_2;
}



// FUNCTION 14841dcba FUN_14841dcba body=972 status=ok
// SIG undefined FUN_14841dcba(void)

ulonglong FUN_14841dcba(longlong param_1,longlong param_2,double *param_3,undefined8 *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  undefined8 unaff_RBP;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_1f8 [32];
  double *local_1d8;
  undefined4 *local_1d0;
  undefined1 local_1c8;
  code **local_1c0;
  undefined8 *local_1b8;
  double *local_1b0;
  float *local_1a8;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  double local_188;
  double local_178;
  double dStack_170;
  double local_168;
  double local_158;
  double dStack_150;
  double local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  code *local_f0;
  double *local_e8;
  float local_dc;
  double local_d8;
  double dStack_d0;
  double local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  double local_a8;
  undefined1 local_98 [16];
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  dVar8 = DAT_14c8464e0 * *(double *)(param_1 + 0x280);
  dVar9 = DAT_14c8464e8 * *(double *)(param_1 + 0x288);
  dVar7 = DAT_14c8464f0 * *(double *)(param_1 + 0x290);
  dVar2 = *(double *)(param_1 + 0x240);
  dVar3 = *(double *)(param_1 + 0x248);
  dVar4 = *(double *)(param_1 + 0x250);
  dVar1 = *(double *)(param_1 + 600);
  dVar10 = dVar9 * dVar2 - dVar8 * dVar3;
  dVar11 = dVar7 * dVar3 - dVar9 * dVar4;
  dVar12 = dVar8 * dVar4 - dVar2 * dVar7;
  dVar11 = dVar11 + dVar11;
  dVar12 = dVar12 + dVar12;
  dVar10 = dVar10 + dVar10;
  dVar9 = (dVar4 * dVar11 - dVar2 * dVar10) + *(double *)(param_1 + 600) * dVar12 + dVar9 +
          *(double *)(param_1 + 0x268);
  local_88 = dVar10 * dVar1 + dVar7 + (dVar12 * dVar2 - dVar11 * dVar3) +
             *(double *)(param_1 + 0x270);
  local_108 = (double)(param_1 + 0x240);
  local_98._8_4_ = SUB84(dVar9,0);
  local_98._0_8_ =
       (dVar10 * dVar3 - dVar12 * dVar4) + dVar1 * dVar11 + dVar8 + *(double *)(param_1 + 0x260);
  local_98._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  local_1b8 = &local_b8;
  local_a8 = DAT_14c8464f0;
  local_b8 = DAT_14c8464e0;
  uStack_b0 = DAT_14c8464e8;
  local_1b0 = &local_d8;
  local_c8 = DAT_14c8464f0;
  local_d8 = DAT_14c8464e0;
  dStack_d0 = DAT_14c8464e8;
  local_1a8 = &local_dc;
  local_dc = 0.0;
  local_1c0 = &local_f0;
  local_f0 = FUN_143b51b12;
  local_1c8 = *(undefined1 *)(param_1 + 0x641);
  local_1d0 = (undefined4 *)CONCAT44(local_1d0._4_4_,*(undefined4 *)(param_1 + 0x674));
  local_1d8 = (double *)CONCAT44(local_1d8._4_4_,*(undefined4 *)(param_1 + 0x670));
  local_e8 = &local_108;
  cVar5 = FUN_14841e087(CONCAT71(0x143b51b,*(undefined1 *)(param_1 + 0x650)),
                        *(undefined8 *)(param_1 + 0x648),local_98,param_1 + 0x658);
  if (cVar5 == '\0') {
    uVar6 = 0;
  }
  else {
    local_138 = *param_4;
    uStack_130 = param_4[1];
    local_128 = param_4[2];
    local_158 = *param_3;
    dStack_150 = param_3[1];
    local_148 = param_3[2];
    local_178 = local_d8;
    dStack_170 = dStack_d0;
    local_168 = local_c8;
    local_198 = (undefined4)local_b8;
    uStack_194 = local_b8._4_4_;
    uStack_190 = (undefined4)uStack_b0;
    uStack_18c = uStack_b0._4_4_;
    local_188 = local_a8;
    local_1d0 = &local_120;
    local_1d8 = &local_108;
    FUN_144a0d30e();
    dVar1 = (double)CONCAT44(uStack_11c,local_120) - local_108;
    local_100 = (double)CONCAT44(uStack_114,uStack_118) - local_100;
    dVar1 = SQRT((local_110 - local_f8) * (local_110 - local_f8) +
                 local_100 * local_100 + dVar1 * dVar1);
    dVar7 = (double)(*(float *)(param_1 + 0x63c) * local_dc);
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),dVar1 <= dVar7);
    if (dVar1 <= dVar7) {
      FUN_14485c47a(param_2 + 0xd8,param_1);
      dVar1 = (double)CONCAT44(uStack_11c,local_120) - *param_3;
      dVar7 = (double)CONCAT44(uStack_114,uStack_118) - param_3[1];
      *(float *)(param_2 + 8) =
           (float)SQRT((local_110 - param_3[2]) * (local_110 - param_3[2]) +
                       dVar7 * dVar7 + dVar1 * dVar1);
      *(undefined4 *)(param_2 + 0x28) = local_120;
      *(undefined4 *)(param_2 + 0x2c) = uStack_11c;
      *(undefined4 *)(param_2 + 0x30) = uStack_118;
      *(undefined4 *)(param_2 + 0x34) = uStack_114;
      *(double *)(param_2 + 0x38) = local_110;
    }
  }
  if ((local_80 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14841e087 FUN_14841e087 body=781 status=ok
// SIG undefined FUN_14841e087(void)

undefined8
FUN_14841e087(char param_1,longlong param_2,double *param_3,double *param_4,float param_5,
             float param_6,char param_7,undefined8 *param_8,double *param_9,double *param_10,
             float *param_11)

{
  double dVar1;
  double dVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_c8 [40];
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double dStack_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_7 == '\0') {
    (*(code *)*param_8)(&local_88,param_8[1],param_4);
  }
  else {
    local_78 = param_4[2];
    local_88 = *param_4;
    dStack_80 = param_4[1];
  }
  if (param_1 == '\0') {
    fVar7 = 1.0;
  }
  else {
    plVar5 = (longlong *)(param_2 + 0x28);
    cVar3 = (**(code **)(*(longlong *)(param_2 + 0x28) + 0x38))(plVar5);
    if (cVar3 == '\0') {
      (**(code **)(*plVar5 + 0x18))(plVar5,&local_a0);
    }
    else {
      local_90 = param_3[2] - *(double *)(param_2 + 0x1d0);
      local_98 = param_3[1] - *(double *)(param_2 + 0x1c8);
      local_a0 = *param_3 - *(double *)(param_2 + 0x1c0);
    }
    dVar9 = local_90 * local_90 + local_a0 * local_a0 + local_98 * local_98;
    if (9.99999993922529e-09 < dVar9) {
      dVar9 = 1.0 / SQRT(dVar9);
      local_a0 = local_a0 * dVar9;
      local_98 = local_98 * dVar9;
      local_90 = local_90 * dVar9;
    }
    dVar9 = local_90 * local_78 + local_a0 * local_88 + local_98 * dStack_80;
    uVar6 = -(ulonglong)(0.0 < dVar9);
    local_88 = (double)(~uVar6 & (ulonglong)local_88 | (ulonglong)-local_88 & uVar6);
    if (0.0 < dVar9) {
      local_78 = -local_78;
      dStack_80 = -dStack_80;
    }
    if (0.9649999737739563 <= ABS(local_90 * local_78 + local_a0 * local_88 + local_98 * dStack_80))
    {
      uVar4 = 0;
      goto LAB_14841e213;
    }
    if (param_2 == 0) {
      plVar5 = (longlong *)0x0;
    }
    fVar7 = (float)FUN_14841f855(plVar5,param_3);
  }
  *param_11 = fVar7;
  dVar8 = (double)(fVar7 * param_5);
  dVar2 = (double)((param_6 + param_5) * fVar7);
  dVar9 = param_3[2];
  dVar1 = param_3[1];
  *param_9 = dVar8 * local_88 + *param_3;
  param_9[1] = dStack_80 * dVar8 + dVar1;
  param_9[2] = local_78 * dVar8 + dVar9;
  dVar9 = param_3[2];
  dVar1 = param_3[1];
  *param_10 = local_88 * dVar2 + *param_3;
  param_10[1] = dStack_80 * dVar2 + dVar1;
  param_10[2] = local_78 * dVar2 + dVar9;
  uVar4 = 1;
LAB_14841e213:
  if ((local_70 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14841e3aa FUN_14841e3aa body=90 status=ok
// SIG undefined FUN_14841e3aa(void)

longlong FUN_14841e3aa(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x350,0x10);
  FUN_14841e404(lVar1,param_1);
  *(longlong *)(lVar1 + 0x330) = param_1 + 0x640;
  *(longlong *)(lVar1 + 0x338) = param_1 + 0x641;
  *(longlong *)(lVar1 + 0x340) = param_1 + 0x650;
  return lVar1;
}



// FUNCTION 14841e404 FUN_14841e404 body=357 status=ok
// SIG undefined FUN_14841e404(void)

undefined8 * FUN_14841e404(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1406ff4f8(param_1,param_2,0);
  *param_1 = &PTR_FUN_14aed8800;
  uVar5 = *(undefined8 *)(param_2 + 0x630);
  param_1[0x53] = *(undefined8 *)(param_2 + 0x628);
  param_1[0x54] = uVar5;
  param_1[0x57] = *(undefined8 *)(param_2 + 0x668);
  uVar2 = *(undefined4 *)(param_2 + 0x65c);
  uVar3 = *(undefined4 *)(param_2 + 0x660);
  uVar4 = *(undefined4 *)(param_2 + 0x664);
  *(undefined4 *)(param_1 + 0x55) = *(undefined4 *)(param_2 + 0x658);
  *(undefined4 *)((longlong)param_1 + 0x2ac) = uVar2;
  *(undefined4 *)(param_1 + 0x56) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x2b4) = uVar4;
  lVar1 = param_2 + 0x670;
  local_68 = 0x3ff0000000000000;
  uStack_60 = 0;
  uStack_58 = 0;
  FUN_14276fa40(lVar1,param_1 + 0x58,&local_68);
  local_68 = 0;
  uStack_60 = 0x3ff0000000000000;
  uStack_58 = 0;
  FUN_14276fa40(lVar1,param_1 + 0x5b,&local_68);
  local_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0x3ff0000000000000;
  FUN_14276fa40(lVar1,param_1 + 0x5e,&local_68);
  param_1[99] = *(undefined8 *)(param_2 + 0x6a0);
  uVar5 = *(undefined8 *)(param_2 + 0x698);
  param_1[0x61] = *(undefined8 *)(param_2 + 0x690);
  param_1[0x62] = uVar5;
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 0x6a8);
  *(undefined4 *)((longlong)param_1 + 0x324) = *(undefined4 *)(param_2 + 0x638);
  *(undefined1 *)(param_1 + 0x65) = *(undefined1 *)(param_2 + 0x6ad);
  *(undefined1 *)((longlong)param_1 + 0x329) = *(undefined1 *)(param_2 + 0x6ac);
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14841e56a FUN_14841e56a body=456 status=ok
// SIG undefined FUN_14841e56a(void)

undefined1 (*) [16] FUN_14841e56a(longlong param_1,undefined1 (*param_2) [16],double *param_3)

{
  double dVar1;
  undefined1 auVar2 [32];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  
  dVar8 = *param_3;
  dVar9 = param_3[1];
  dVar10 = param_3[2];
  dVar3 = *(double *)(param_1 + 0x658) * param_3[8];
  dVar4 = *(double *)(param_1 + 0x660) * param_3[9];
  dVar15 = *(double *)(param_1 + 0x668) * param_3[10];
  dVar1 = param_3[3];
  dVar16 = dVar4 * dVar8 - dVar3 * dVar9;
  dVar5 = dVar15 * dVar9 - dVar4 * dVar10;
  dVar6 = dVar3 * dVar10 - dVar8 * dVar15;
  dVar5 = dVar5 + dVar5;
  dVar6 = dVar6 + dVar6;
  dVar16 = dVar16 + dVar16;
  dVar7 = (dVar10 * dVar5 - dVar8 * dVar16) + param_3[3] * dVar6 + dVar4 + param_3[5];
  dVar4 = param_3[6];
  auVar11._0_8_ = ABS(param_3[8]);
  auVar11._8_8_ = ABS(param_3[9]);
  dVar14 = ABS(param_3[10]);
  auVar2._24_8_ = ABS(param_3[0xb]);
  auVar2._16_8_ = dVar14;
  auVar2._0_16_ = auVar11;
  auVar12 = maxpd(auVar11,auVar2._8_16_);
  auVar13._8_8_ = auVar11._0_8_;
  auVar13._0_8_ = dVar14;
  auVar13 = maxpd(auVar12,auVar13);
  dVar14 = (double)(float)auVar13._0_8_ *
           SQRT(*(double *)(param_1 + 0x6a0) * *(double *)(param_1 + 0x6a0) +
                *(double *)(param_1 + 0x690) * *(double *)(param_1 + 0x690) +
                *(double *)(param_1 + 0x698) * *(double *)(param_1 + 0x698));
  auVar12._8_4_ = SUB84(dVar7,0);
  auVar12._0_8_ = (dVar16 * dVar9 - dVar6 * dVar10) + dVar1 * dVar5 + dVar3 + param_3[4];
  auVar12._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  *param_2 = auVar12;
  *(double *)param_2[1] = dVar16 * dVar1 + dVar15 + (dVar6 * dVar8 - dVar5 * dVar9) + dVar4;
  *(double *)param_2[3] = dVar14;
  *(double *)(param_2[1] + 8) = dVar14;
  *(double *)param_2[2] = dVar14;
  *(double *)(param_2[2] + 8) = dVar14;
  return param_2;
}



// FUNCTION 14841e732 FUN_14841e732 body=3495 status=ok
// SIG undefined FUN_14841e732(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_14841e732(longlong param_1,longlong param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  longlong lVar4;
  float fVar5;
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
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  double dVar20;
  undefined4 uVar21;
  uint uVar22;
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  uint uVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined1 auStack_2f8 [32];
  double *local_2d8;
  double *local_2d0;
  double *local_2c8;
  code **local_2c0;
  double *local_2b8;
  undefined8 *local_2b0;
  double *local_2a8;
  char *local_2a0;
  char *local_298;
  char *local_290;
  double local_288;
  undefined8 uStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  undefined1 local_258 [16];
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  double local_238;
  double dStack_230;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  double local_218;
  double dStack_210;
  double local_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  undefined1 local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  longlong local_180;
  code *local_178;
  longlong *local_170;
  double local_168;
  double local_160;
  double local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  double local_138;
  double dStack_130;
  double local_128;
  char local_113;
  char local_112;
  char local_111;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  local_248 = *(undefined4 *)(param_1 + 0x240);
  uStack_244 = *(undefined4 *)(param_1 + 0x244);
  dVar9 = *(double *)(param_1 + 0x240);
  uStack_240 = *(undefined4 *)(param_1 + 0x248);
  uStack_23c = *(undefined4 *)(param_1 + 0x24c);
  dVar16 = *(double *)(param_1 + 0x248);
  local_238 = *(double *)(param_1 + 0x250);
  dStack_230 = *(double *)(param_1 + 600);
  local_278 = *(double *)(param_1 + 0x260);
  dStack_270 = *(double *)(param_1 + 0x268);
  local_288 = *(double *)(param_1 + 0x270);
  uStack_280 = *(undefined8 *)(param_1 + 0x278);
  local_268 = *(double *)*(undefined1 (*) [16])(param_1 + 0x280);
  dStack_260 = *(double *)(param_1 + 0x288);
  local_258 = *(undefined1 (*) [16])(param_1 + 0x290);
  local_228 = (undefined4)DAT_14c8463d0;
  uStack_224 = DAT_14c8463d0._4_4_;
  uStack_220 = (undefined4)DAT_14c8463d8;
  uStack_21c = DAT_14c8463d8._4_4_;
  local_218 = DAT_14c8463e0;
  dStack_210 = DAT_14c8463e8;
  if (*(char *)(param_1 + 0x641) == '\0') {
    local_228 = local_248;
    uStack_224 = uStack_244;
    uStack_220 = uStack_240;
    uStack_21c = uStack_23c;
    local_218 = local_238;
    dStack_210 = dStack_230;
  }
  dVar30 = *param_3 - local_278;
  dVar12 = param_3[1] - dStack_270;
  dVar27 = param_3[2] - local_288;
  dVar13 = -(double)CONCAT44(uStack_224,local_228);
  dVar14 = -(double)CONCAT44(uStack_21c,uStack_220);
  dVar6 = local_218 * -1.0;
  dVar10 = dStack_210 * 1.0;
  dVar11 = dVar12 * dVar13 - dVar14 * dVar30;
  dVar1 = dVar27 * dVar14 - dVar6 * dVar12;
  dVar17 = dVar30 * dVar6 - dVar27 * dVar13;
  dVar1 = dVar1 + dVar1;
  dVar17 = dVar17 + dVar17;
  dVar11 = dVar11 + dVar11;
  auVar25 = divpd(_DAT_149934d80,*(undefined1 (*) [16])(param_1 + 0x280));
  auVar19 = divpd(ZEXT816(0x3ff0000000000000),local_258);
  dVar8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_268)) & auVar25._0_8_);
  dVar7 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dStack_260)) & auVar25._8_8_);
  dVar29 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_258._0_8_)) & auVar19._0_8_);
  dVar18 = *param_4 - local_278;
  dVar20 = param_4[1] - dStack_270;
  dVar23 = param_4[2] - local_288;
  dVar28 = dVar20 * dVar13 - dVar14 * dVar18;
  dVar15 = dVar23 * dVar14 - dVar6 * dVar20;
  dVar31 = dVar18 * dVar6 - dVar23 * dVar13;
  dVar15 = dVar15 + dVar15;
  dVar31 = dVar31 + dVar31;
  dVar28 = dVar28 + dVar28;
  dVar24 = ((dVar11 * dVar14 - dVar17 * dVar6) + dVar10 * dVar1 + dVar30) * dVar8;
  dVar2 = ((double)CONCAT44(uStack_224,local_228) * dVar11 + dVar6 * dVar1 +
          dVar10 * dVar17 + dVar12) * dVar7;
  dVar11 = (dVar11 * dVar10 + dVar27 + (dVar17 * dVar13 - dVar1 * dVar14)) * dVar29;
  dVar8 = ((dVar28 * dVar14 - dVar31 * dVar6) + dVar10 * dVar15 + dVar18) * dVar8;
  dVar7 = ((double)CONCAT44(uStack_224,local_228) * dVar28 + dVar6 * dVar15 +
          dVar10 * dVar31 + dVar20) * dVar7;
  dVar29 = (dVar28 * dVar10 + dVar23 + (dVar31 * dVar13 - dVar15 * dVar14)) * dVar29;
  dVar15 = *(double *)(param_1 + 0x670);
  dVar31 = *(double *)(param_1 + 0x678);
  dVar1 = *(double *)(param_1 + 0x680);
  dVar17 = *(double *)(param_1 + 0x688);
  dVar10 = -dVar15;
  dVar13 = -dVar31;
  dVar30 = dVar1 * -1.0;
  dVar12 = dVar17 * 1.0;
  dVar14 = dVar13 * dVar11 - dVar2 * dVar30;
  dVar14 = dVar14 + dVar14;
  dVar6 = dVar10 * dVar2 - dVar24 * dVar13;
  dVar6 = dVar6 + dVar6;
  dVar28 = dVar30 * dVar24 - dVar11 * dVar10;
  dVar28 = dVar28 + dVar28;
  local_e8 = (dVar10 * dVar28 - dVar14 * dVar13) + dVar12 * dVar6 + dVar11;
  local_f0 = (dVar30 * dVar14 - dVar6 * dVar10) + dVar12 * dVar28 + dVar2;
  local_f8 = (dVar13 * dVar6 - dVar28 * dVar30) + dVar12 * dVar14 + dVar24;
  dVar24 = dVar13 * dVar29 - dVar7 * dVar30;
  dVar24 = dVar24 + dVar24;
  dVar11 = dVar10 * dVar7 - dVar8 * dVar13;
  dVar11 = dVar11 + dVar11;
  dVar28 = dVar30 * dVar8 - dVar29 * dVar10;
  dVar28 = dVar28 + dVar28;
  local_100 = (dVar10 * dVar28 - dVar24 * dVar13) + dVar12 * dVar11 + dVar29;
  local_108 = (dVar30 * dVar24 - dVar11 * dVar10) + dVar12 * dVar28 + dVar7;
  local_110 = (dVar13 * dVar11 - dVar28 * dVar30) + dVar12 * dVar24 + dVar8;
  local_111 = '\0';
  local_112 = '\0';
  local_113 = '\0';
  if (*(char *)(param_1 + 0x650) == '\x01') {
    dVar29 = DAT_14c8464e0 * local_268;
    dVar28 = DAT_14c8464e8 * dStack_260;
    dVar30 = DAT_14c8464f0 * local_258._0_8_;
    dVar12 = dVar28 * dVar9 - dVar16 * dVar29;
    dVar8 = dVar30 * dVar16 - local_238 * dVar28;
    dVar7 = dVar29 * local_238 - dVar9 * dVar30;
    dVar8 = dVar8 + dVar8;
    dVar7 = dVar7 + dVar7;
    dVar12 = dVar12 + dVar12;
    local_138 = (dVar12 * dVar16 - dVar7 * local_238) + dStack_230 * dVar8 + dVar29 + local_278;
    dStack_130 = (local_238 * dVar8 - dVar9 * dVar12) + dStack_230 * dVar7 + dVar28 + dStack_270;
    local_128 = dStack_230 * dVar12 + dVar30 + (dVar7 * dVar9 - dVar8 * dVar16) + local_288;
    dVar30 = dVar15 * 0.0 + dVar31 * -0.0;
    dVar16 = dVar1 * 0.0 - dVar15;
    dVar9 = dVar31 + dVar1 * -0.0;
    dVar30 = dVar30 + dVar30;
    dVar16 = dVar16 + dVar16;
    dVar9 = dVar9 + dVar9;
    local_188 = (dVar15 * dVar16 - dVar9 * dVar31) + dVar17 * dVar30 + 1.0;
    local_190 = (dVar1 * dVar9 - dVar30 * dVar15) + dVar17 * dVar16 + 0.0;
    local_180 = param_1 + 0x240;
    local_170 = &local_180;
    local_2c0 = &local_178;
    local_178 = FUN_143b51c1a;
    local_198 = (dVar31 * dVar30 - dVar16 * dVar1) + dVar17 * dVar9 + 0.0;
    local_2d8 = &local_198;
    dVar16 = dVar31 * -0.0 + dVar15;
    dVar30 = dVar1 * 0.0 + dVar15 * -0.0;
    dVar9 = dVar31 * 0.0 - dVar1;
    dVar16 = dVar16 + dVar16;
    dVar30 = dVar30 + dVar30;
    dVar9 = dVar9 + dVar9;
    local_1a0 = (dVar15 * dVar30 - dVar9 * dVar31) + dVar17 * dVar16 + 0.0;
    local_1a8 = (dVar1 * dVar9 - dVar16 * dVar15) + dVar17 * dVar30 + 1.0;
    local_1b0 = (dVar31 * dVar16 - dVar30 * dVar1) + dVar17 * dVar9 + 0.0;
    dVar16 = dVar15 * 0.0 - dVar31;
    dVar9 = dVar15 * -0.0 + dVar1;
    dVar30 = dVar31 * 0.0 + dVar1 * -0.0;
    dVar16 = dVar16 + dVar16;
    dVar9 = dVar9 + dVar9;
    dVar30 = dVar30 + dVar30;
    local_1b8 = (dVar15 * dVar9 - dVar30 * dVar31) + dVar17 * dVar16 + 0.0;
    local_1c0 = (dVar1 * dVar30 - dVar16 * dVar15) + dVar17 * dVar9 + 0.0;
    local_1c8 = (dVar31 * dVar16 - dVar9 * dVar1) + dVar17 * dVar30 + 1.0;
    local_290 = &local_113;
    local_298 = &local_112;
    local_2a0 = &local_111;
    local_2a8 = &local_168;
    local_2b0 = &local_150;
    local_2b8 = &local_200;
    local_2c8 = (double *)CONCAT71(local_2c8._1_7_,*(char *)(param_1 + 0x641));
    local_2d0 = (double *)CONCAT71(local_2d0._1_7_,*(undefined1 *)(param_1 + 0x6ad));
    FUN_14841f4da(*(undefined8 *)(param_1 + 0x648));
  }
  dVar16 = dStack_270;
  dVar9 = local_278;
  if (*(char *)(param_1 + 0x6ad) == '\x01') {
    uVar3 = (undefined4)*(undefined8 *)(param_1 + 0x668);
    uVar26 = (uint)((ulonglong)*(undefined8 *)(param_1 + 0x668) >> 0x20);
    if (local_113 != '\0') {
      uVar26 = uVar26 ^ 0x80000000;
    }
    dVar30 = *(double *)(param_1 + 0x660);
    if (local_112 != '\0') {
      dVar30 = -dVar30;
    }
    if (local_111 != '\0') {
      uVar22 = (uint)((ulonglong)*(undefined8 *)(param_1 + 0x658) >> 0x20) ^ 0x80000000;
      uVar21 = (undefined4)*(undefined8 *)(param_1 + 0x658);
      goto LAB_14841ecff;
    }
  }
  else {
    dVar30 = *(double *)(param_1 + 0x660);
    uVar3 = (undefined4)*(undefined8 *)(param_1 + 0x668);
    uVar26 = (uint)((ulonglong)*(undefined8 *)(param_1 + 0x668) >> 0x20);
  }
  uVar21 = (undefined4)*(undefined8 *)(param_1 + 0x658);
  uVar22 = (uint)((ulonglong)*(undefined8 *)(param_1 + 0x658) >> 0x20);
LAB_14841ecff:
  if (*(char *)(param_1 + 0x650) == '\x01') {
    lVar4 = *(longlong *)(param_1 + 0x648) + 0x28;
    if (*(longlong *)(param_1 + 0x648) == 0) {
      lVar4 = 0;
    }
    fVar5 = (float)FUN_14841f855(lVar4,&local_138);
    dVar12 = (double)fVar5;
  }
  else {
    dVar12 = 1.0;
  }
  local_200 = (double)CONCAT44(uVar22,uVar21) * dVar12;
  local_1f0 = (double)CONCAT44(uVar26,uVar3) * dVar12;
  dVar7 = *(double *)(param_1 + 0x6a0) * dVar12 * 0.5;
  local_1f8 = *(double *)(param_1 + 0x698) * dVar12 * 0.5;
  dVar8 = dVar12 * *(double *)(param_1 + 0x690) * 0.5;
  local_1d8 = local_1f0 + dVar7;
  local_1e0 = dVar30 * dVar12 + local_1f8;
  local_1e8 = local_200 + dVar8;
  local_1f0 = local_1f0 - dVar7;
  local_1f8 = dVar30 * dVar12 - local_1f8;
  local_200 = local_200 - dVar8;
  local_1d0 = 1;
  local_150 = 0x3e45798ee0000000;
  local_148 = 0x3e45798ee0000000;
  local_140 = 0x3e45798ee0000000;
  local_2c8 = &local_1b0;
  local_2d0 = &local_198;
  local_2d8 = &local_168;
  uVar3 = FUN_1467f6da8(&local_200,&local_f8,&local_110);
  if ((char)uVar3 != '\0') {
    dVar30 = *(double *)(param_1 + 0x680);
    dVar12 = *(double *)(param_1 + 0x670);
    dVar8 = *(double *)(param_1 + 0x678);
    dVar11 = dVar8 * local_158 - local_160 * dVar30;
    dVar11 = dVar11 + dVar11;
    dVar7 = *(double *)(param_1 + 0x688);
    dVar29 = dVar12 * local_160 - local_168 * dVar8;
    dVar29 = dVar29 + dVar29;
    dVar28 = dVar30 * local_168 - local_158 * dVar12;
    dVar28 = dVar28 + dVar28;
    dVar15 = local_268 * ((dVar8 * dVar29 - dVar28 * dVar30) + dVar11 * dVar7 + local_168);
    dVar31 = dStack_260 * ((dVar30 * dVar11 - dVar29 * dVar12) + dVar7 * dVar28 + local_160);
    dVar7 = (double)local_258._0_8_ *
            ((dVar12 * dVar28 - dVar11 * dVar8) + dVar7 * dVar29 + local_158);
    dVar29 = (double)CONCAT44(uStack_224,local_228);
    dVar28 = (double)CONCAT44(uStack_21c,uStack_220);
    dVar30 = dVar31 * dVar29 - dVar28 * dVar15;
    dVar12 = dVar7 * dVar28 - local_218 * dVar31;
    dVar8 = dVar15 * local_218 - dVar29 * dVar7;
    dVar12 = dVar12 + dVar12;
    dVar8 = dVar8 + dVar8;
    dVar30 = dVar30 + dVar30;
    dVar9 = dVar9 + (dVar30 * dVar28 - dVar8 * local_218) + dStack_210 * dVar12 + dVar15;
    dVar16 = dVar16 + (local_218 * dVar12 - dVar29 * dVar30) + dStack_210 * dVar8 + dVar31;
    dVar30 = local_288 + dStack_210 * dVar30 + dVar7 + (dVar8 * dVar29 - dVar12 * dVar28);
    FUN_14485c47a(param_2 + 0xd8,param_1);
    auVar19._8_4_ = SUB84(dVar16,0);
    auVar19._0_8_ = dVar9;
    auVar19._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
    *(undefined1 (*) [16])(param_2 + 0x28) = auVar19;
    *(double *)(param_2 + 0x38) = dVar30;
    dVar9 = dVar9 - *param_3;
    dVar30 = dVar30 - param_3[2];
    *(float *)(param_2 + 8) =
         (float)SQRT(dVar30 * dVar30 + (dVar16 - param_3[1]) * (dVar16 - param_3[1]) + dVar9 * dVar9
                    );
  }
  if ((local_e0 ^ (ulonglong)auStack_2f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 14841f4da FUN_14841f4da body=890 status=ok
// SIG undefined FUN_14841f4da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14841f4da(longlong param_1,double *param_2,double *param_3,double *param_4,double *param_5,
                  byte param_6,char param_7,undefined8 *param_8,double *param_9,double *param_10,
                  double *param_11,undefined1 *param_12,undefined1 *param_13,undefined1 *param_14)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_7 == '\0') {
    (*(code *)*param_8)(&local_78,param_8[1]);
    param_9[2] = local_68;
    *(undefined4 *)param_9 = (undefined4)local_78;
    *(undefined4 *)((longlong)param_9 + 4) = local_78._4_4_;
    *(undefined4 *)(param_9 + 1) = (undefined4)uStack_70;
    *(undefined4 *)((longlong)param_9 + 0xc) = uStack_70._4_4_;
    (*(code *)*param_8)(&local_78,param_8[1],param_4);
    param_10[2] = local_68;
    *(undefined4 *)param_10 = (undefined4)local_78;
    *(undefined4 *)((longlong)param_10 + 4) = local_78._4_4_;
    *(undefined4 *)(param_10 + 1) = (undefined4)uStack_70;
    *(undefined4 *)((longlong)param_10 + 0xc) = uStack_70._4_4_;
    (*(code *)*param_8)(&local_78,param_8[1],param_5);
  }
  else {
    dVar6 = *param_3;
    dVar5 = param_3[1];
    param_9[2] = param_3[2];
    *param_9 = dVar6;
    param_9[1] = dVar5;
    dVar6 = *param_4;
    dVar5 = param_4[1];
    param_10[2] = param_4[2];
    *param_10 = dVar6;
    param_10[1] = dVar5;
    local_68 = param_5[2];
    local_78 = *param_5;
    uStack_70 = param_5[1];
  }
  param_11[2] = local_68;
  *(undefined4 *)param_11 = (undefined4)local_78;
  *(undefined4 *)((longlong)param_11 + 4) = local_78._4_4_;
  *(undefined4 *)(param_11 + 1) = (undefined4)uStack_70;
  *(undefined4 *)((longlong)param_11 + 0xc) = uStack_70._4_4_;
  *param_12 = 0;
  *param_13 = 0;
  *param_14 = 0;
  plVar1 = (longlong *)(param_1 + 0x28);
  cVar2 = (**(code **)(*(longlong *)(param_1 + 0x28) + 0x38))(plVar1);
  if (cVar2 == '\0') {
    (**(code **)(*plVar1 + 0x18))(plVar1,&local_78);
    dVar5 = local_78;
    dVar7 = uStack_70;
    dVar6 = local_68;
  }
  else {
    dVar5 = *param_2 - *(double *)(param_1 + 0x1c0);
    dVar7 = param_2[1] - *(double *)(param_1 + 0x1c8);
    dVar6 = param_2[2] - *(double *)(param_1 + 0x1d0);
  }
  dVar8 = dVar6 * dVar6 + dVar5 * dVar5 + dVar7 * dVar7;
  if (9.99999993922529e-09 < dVar8) {
    dVar8 = 1.0 / SQRT(dVar8);
    dVar5 = dVar5 * dVar8;
    dVar7 = dVar7 * dVar8;
    dVar6 = dVar6 * dVar8;
  }
  dVar8 = param_9[2] * dVar6 + *param_9 * dVar5 + param_9[1] * dVar7;
  *param_12 = 0.0 < dVar8;
  if ((0.0 < dVar8 & param_6) == 1) {
    dVar10 = -param_9[2];
    dVar9 = -param_9[1];
    dVar8 = -*param_9;
  }
  else {
    dVar8 = *param_9;
    dVar9 = param_9[1];
    dVar10 = param_9[2];
  }
  *param_9 = dVar8;
  param_9[1] = dVar9;
  param_9[2] = dVar10;
  dVar8 = param_10[2] * dVar6 + *param_10 * dVar5 + param_10[1] * dVar7;
  *param_13 = 0.0 < dVar8;
  if ((0.0 < dVar8 & param_6) == 1) {
    dVar10 = -param_10[2];
    dVar9 = -param_10[1];
    dVar8 = -*param_10;
  }
  else {
    dVar8 = *param_10;
    dVar9 = param_10[1];
    dVar10 = param_10[2];
  }
  *param_10 = dVar8;
  param_10[1] = dVar9;
  param_10[2] = dVar10;
  dVar6 = dVar6 * param_11[2] + dVar5 * *param_11 + dVar7 * param_11[1];
  *param_14 = 0.0 < dVar6;
  if ((0.0 < dVar6 & param_6) == 1) {
    uVar3 = (uint)DAT_149931e80;
    uVar4 = DAT_149931e80._4_4_;
    dVar5 = (double)CONCAT44((uint)((ulonglong)param_11[2] >> 0x20) ^ uVar4,
                             SUB84(param_11[2],0) ^ uVar3);
    dVar6 = (double)CONCAT44((uint)((ulonglong)param_11[1] >> 0x20) ^ uVar4,
                             SUB84(param_11[1],0) ^ uVar3);
    uVar3 = SUB84(*param_11,0) ^ uVar3;
    uVar4 = (uint)((ulonglong)*param_11 >> 0x20) ^ uVar4;
  }
  else {
    uVar3 = SUB84(*param_11,0);
    uVar4 = (uint)((ulonglong)*param_11 >> 0x20);
    dVar6 = param_11[1];
    dVar5 = param_11[2];
  }
  *param_11 = (double)CONCAT44(uVar4,uVar3);
  param_11[1] = dVar6;
  param_11[2] = dVar5;
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14841f855 FUN_14841f855 body=457 status=ok
// SIG undefined FUN_14841f855(void)

void FUN_14841f855(longlong *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
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
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  undefined1 local_98 [24];
  double local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_118;
  (**(code **)(*param_1 + 8))(param_1,local_98,param_2);
  dVar3 = local_80 * 0.01;
  FUN_143b504b6(&local_a8,param_1,param_2);
  (**(code **)(*param_1 + 0x20))(param_1,&local_d8);
  dVar4 = local_d0 * dVar3;
  dVar6 = param_2[2];
  dVar1 = param_2[1];
  dVar5 = local_d8 * dVar3;
  dVar2 = *param_2;
  (**(code **)(*param_1 + 0x28))(param_1,&local_f0);
  local_b0 = local_e0 * dVar3 + local_c8 * dVar3 + dVar6;
  local_b8 = local_e8 * dVar3 + dVar4 + dVar1;
  local_c0 = dVar3 * local_f0 + dVar5 + dVar2;
  FUN_143b504b6(&local_d8,param_1,&local_c0);
  dVar6 = SQRT(((param_2[2] - local_b0) * (param_2[2] - local_b0) +
               (*param_2 - local_c0) * (*param_2 - local_c0) +
               (param_2[1] - local_b8) * (param_2[1] - local_b8)) /
               ((local_a8 - local_d8) * (local_a8 - local_d8) +
               (local_a0 - local_d0) * (local_a0 - local_d0)));
  if ((local_70 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(CONCAT44((int)((ulonglong)dVar6 >> 0x20),(float)dVar6));
}



// FUNCTION 14841fa3e FUN_14841fa3e body=229 status=ok
// SIG undefined FUN_14841fa3e(void)

undefined8 * FUN_14841fa3e(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x2f0,0x10);
  FUN_1406ff4f8(puVar2,param_1,0);
  *puVar2 = &PTR_FUN_14aed8aa0;
  uVar1 = *(undefined8 *)(param_1 + 0x630);
  puVar2[0x53] = *(undefined8 *)(param_1 + 0x628);
  puVar2[0x54] = uVar1;
  puVar2[0x57] = *(undefined8 *)(param_1 + 0x668);
  uVar1 = *(undefined8 *)(param_1 + 0x660);
  puVar2[0x55] = *(undefined8 *)(param_1 + 0x658);
  puVar2[0x56] = uVar1;
  *(undefined4 *)(puVar2 + 0x58) = *(undefined4 *)(param_1 + 0x670);
  *(undefined4 *)((longlong)puVar2 + 0x2c4) = *(undefined4 *)(param_1 + 0x674);
  *(undefined4 *)(puVar2 + 0x59) = *(undefined4 *)(param_1 + 0x678);
  *(undefined1 *)((longlong)puVar2 + 0x2cc) = *(undefined1 *)(param_1 + 0x67c);
  *(undefined1 *)((longlong)puVar2 + 0x2cd) = *(undefined1 *)(param_1 + 0x67d);
  *(undefined4 *)(puVar2 + 0x5a) = *(undefined4 *)(param_1 + 0x638);
  puVar2[0x5b] = param_1 + 0x640;
  puVar2[0x5c] = param_1 + 0x641;
  puVar2[0x5d] = param_1 + 0x650;
  return puVar2;
}



// FUNCTION 14841fb24 FUN_14841fb24 body=416 status=ok
// SIG undefined FUN_14841fb24(void)

undefined1 (*) [16] FUN_14841fb24(longlong param_1,undefined1 (*param_2) [16],double *param_3)

{
  double dVar1;
  undefined1 auVar2 [32];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  
  dVar8 = *param_3;
  dVar9 = param_3[1];
  dVar10 = param_3[2];
  dVar3 = DAT_14c8464e0 * param_3[8];
  dVar4 = DAT_14c8464e8 * param_3[9];
  dVar15 = DAT_14c8464f0 * param_3[10];
  dVar1 = param_3[3];
  dVar16 = dVar4 * dVar8 - dVar3 * dVar9;
  dVar5 = dVar15 * dVar9 - dVar4 * dVar10;
  dVar6 = dVar3 * dVar10 - dVar8 * dVar15;
  dVar5 = dVar5 + dVar5;
  dVar6 = dVar6 + dVar6;
  dVar16 = dVar16 + dVar16;
  dVar7 = (dVar10 * dVar5 - dVar8 * dVar16) + param_3[3] * dVar6 + dVar4 + param_3[5];
  dVar4 = param_3[6];
  auVar11._0_8_ = ABS(param_3[8]);
  auVar11._8_8_ = ABS(param_3[9]);
  dVar14 = ABS(param_3[10]);
  auVar2._24_8_ = ABS(param_3[0xb]);
  auVar2._16_8_ = dVar14;
  auVar2._0_16_ = auVar11;
  auVar12 = maxpd(auVar11,auVar2._8_16_);
  auVar13._8_8_ = auVar11._0_8_;
  auVar13._0_8_ = dVar14;
  auVar13 = maxpd(auVar12,auVar13);
  dVar14 = (double)(float)auVar13._0_8_ * (double)*(float *)(param_1 + 0x670);
  auVar12._8_4_ = SUB84(dVar7,0);
  auVar12._0_8_ = (dVar16 * dVar9 - dVar6 * dVar10) + dVar1 * dVar5 + dVar3 + param_3[4];
  auVar12._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  *param_2 = auVar12;
  *(double *)param_2[1] = dVar16 * dVar1 + dVar15 + (dVar6 * dVar8 - dVar5 * dVar9) + dVar4;
  *(double *)param_2[3] = dVar14;
  *(double *)(param_2[1] + 8) = dVar14;
  *(double *)param_2[2] = dVar14;
  *(double *)(param_2[2] + 8) = dVar14;
  return param_2;
}



// FUNCTION 14841fcc4 FUN_14841fcc4 body=2517 status=ok
// SIG undefined FUN_14841fcc4(void)

undefined8 FUN_14841fcc4(longlong param_1,longlong param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  undefined8 uVar9;
  longlong lVar10;
  bool bVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  float fVar20;
  undefined1 auStack_1e8 [32];
  double *local_1c8;
  double *local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  char local_181;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double dStack_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double dStack_110;
  double local_108;
  undefined1 local_f8 [16];
  double local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  dVar16 = *(double *)(param_1 + 0x240);
  dVar7 = *(double *)(param_1 + 0x248);
  dVar14 = *(double *)(param_1 + 0x250);
  dVar2 = DAT_14c8464e0 * *(double *)(param_1 + 0x280);
  dVar3 = DAT_14c8464e8 * *(double *)(param_1 + 0x288);
  dVar1 = DAT_14c8464f0 * *(double *)(param_1 + 0x290);
  dVar17 = *(double *)(param_1 + 600);
  dVar15 = *(double *)(param_1 + 600);
  dVar4 = dVar3 * dVar16 - dVar2 * dVar7;
  dVar5 = dVar1 * dVar7 - dVar3 * dVar14;
  dVar6 = dVar2 * dVar14 - dVar1 * dVar16;
  dVar5 = dVar5 + dVar5;
  dVar6 = dVar6 + dVar6;
  dVar4 = dVar4 + dVar4;
  dVar2 = (dVar4 * dVar7 - dVar6 * dVar14) + dVar17 * dVar5 + dVar2 + *(double *)(param_1 + 0x260);
  dVar3 = (dVar14 * dVar5 - dVar16 * dVar4) + dVar15 * dVar6 + dVar3 + *(double *)(param_1 + 0x268);
  dVar4 = dVar4 * dVar17 + dVar1 + (dVar6 * dVar16 - dVar5 * dVar7) + *(double *)(param_1 + 0x270);
  local_f8._8_4_ = SUB84(dVar3,0);
  local_f8._0_8_ = dVar2;
  local_f8._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  if (*(char *)(param_1 + 0x641) == '\x01') {
    local_108 = *(double *)(param_1 + 0x668);
    local_118 = *(double *)(param_1 + 0x658);
    dStack_110 = *(double *)(param_1 + 0x660);
  }
  else {
    dVar18 = *(double *)(param_1 + 0x280) * *(double *)(param_1 + 0x658);
    dVar19 = *(double *)(param_1 + 0x288) * *(double *)(param_1 + 0x660);
    dVar13 = *(double *)(param_1 + 0x290) * *(double *)(param_1 + 0x668);
    dVar1 = dVar19 * dVar16 - dVar7 * dVar18;
    dVar5 = dVar13 * dVar7 - dVar14 * dVar19;
    dVar6 = dVar18 * dVar14 - dVar16 * dVar13;
    dVar5 = dVar5 + dVar5;
    dVar6 = dVar6 + dVar6;
    dVar1 = dVar1 + dVar1;
    local_108 = dVar1 * dVar17 + dVar13 + (dVar6 * dVar16 - dVar5 * dVar7);
    local_118 = (dVar1 * dVar7 - dVar6 * dVar14) + dVar17 * dVar5 + dVar18;
    dStack_110 = (dVar14 * dVar5 - dVar16 * dVar1) + dVar15 * dVar6 + dVar19;
  }
  local_e8 = dVar4;
  if (*(char *)(param_1 + 0x650) == '\x01') {
    cVar8 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x648) + 0x28) + 0x38))
                      (*(longlong *)(param_1 + 0x648) + 0x28);
    lVar10 = *(longlong *)(param_1 + 0x648);
    if (cVar8 == '\0') {
      (**(code **)(*(longlong *)(lVar10 + 0x28) + 0x18))(lVar10 + 0x28,&local_130);
    }
    else {
      local_120 = dVar4 - *(double *)(lVar10 + 0x1d0);
      local_128 = dVar3 - *(double *)(lVar10 + 0x1c8);
      local_130 = dVar2 - *(double *)(lVar10 + 0x1c0);
    }
    dVar15 = local_120 * local_120 + local_130 * local_130 + local_128 * local_128;
    if (9.99999993922529e-09 < dVar15) {
      dVar15 = 1.0 / SQRT(dVar15);
      local_130 = local_130 * dVar15;
      local_128 = local_128 * dVar15;
      local_120 = local_120 * dVar15;
    }
    (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x648) + 0x28) + 0x18))
              (*(longlong *)(param_1 + 0x648) + 0x28,&local_168);
    if (0.05000000074505806 <=
        ABS(local_120 * local_108 + local_130 * local_118 + local_128 * dStack_110)) {
      bVar11 = ABS(local_108 * local_158 + local_118 * local_168 + dStack_110 * dStack_160) <
               0.949999988079071;
      lVar10 = *(longlong *)(param_1 + 0x648) + 0x28;
      if (*(longlong *)(param_1 + 0x648) == 0) {
        lVar10 = 0;
      }
      fVar12 = (float)FUN_14841f855(lVar10,local_f8);
      goto LAB_14841ffee;
    }
  }
  else {
    fVar12 = 1.0;
    bVar11 = true;
LAB_14841ffee:
    fVar20 = *(float *)(param_1 + 0x670) * fVar12;
    dVar2 = param_4[2] - param_3[2];
    dVar3 = param_4[1] - param_3[1];
    dVar5 = *param_4 - *param_3;
    dVar15 = param_3[2];
    dVar1 = *param_3;
    dVar4 = param_3[1];
    dVar17 = dVar2 * dVar2 + dVar5 * dVar5 + dVar3 * dVar3;
    if (9.99999993922529e-09 < dVar17) {
      dVar17 = 1.0 / SQRT(dVar17);
      dVar5 = dVar5 * dVar17;
      dVar3 = dVar3 * dVar17;
      dVar2 = dVar2 * dVar17;
    }
    dVar17 = dVar2 * local_108 + dVar5 * local_118 + dVar3 * dStack_110;
    local_168 = dVar1;
    dStack_160 = dVar4;
    local_158 = dVar15;
    local_150 = dVar5;
    local_148 = dVar3;
    local_140 = dVar2;
    if (9.99999993922529e-09 <= ABS(dVar17)) {
      dVar17 = -((local_108 * dVar15 + local_118 * dVar1 + dStack_110 * dVar4) -
                (local_e8 * local_108 +
                (double)local_f8._0_8_ * local_118 + (double)local_f8._8_8_ * dStack_110)) / dVar17;
      if (0.0 <= dVar17) {
        local_120 = dVar2 * dVar17 + dVar15;
        local_128 = dVar3 * dVar17 + dVar4;
        local_130 = dVar17 * dVar5 + dVar1;
        if ((local_120 - dVar15) * dVar2 + (local_130 - dVar1) * dVar5 + (local_128 - dVar4) * dVar3
            <= (param_4[2] - dVar15) * dVar2 +
               (*param_4 - dVar1) * dVar5 + (param_4[1] - dVar4) * dVar3) {
          local_1c8 = &local_180;
          FUN_1484207df(&local_130,local_f8,&local_118,fVar20);
          dVar17 = local_170 - dVar15;
          dVar14 = local_178 - dVar4;
          dVar16 = local_180 - dVar1;
          dVar6 = dVar17 * dVar2 + dVar16 * dVar5 + dVar3 * dVar14;
          if (0.0 <= dVar6) {
            dVar15 = dVar15 + dVar2 * dVar6;
            dVar4 = dVar4 + dVar3 * dVar6;
            dVar1 = dVar1 + dVar5 * dVar6;
          }
          if (SQRT((dVar15 - local_170) * (dVar15 - local_170) +
                   (dVar4 - local_178) * (dVar4 - local_178) +
                   (dVar1 - local_180) * (dVar1 - local_180)) <=
              (double)(fVar12 * *(float *)(param_1 + 0x63c))) {
            if ((bVar11 & *(byte *)(param_1 + 0x67e)) == 1) {
              local_181 = '\0';
              dVar2 = dVar17 * dVar17 + dVar16 * dVar16 + dVar14 * dVar14;
              local_1b8 = dVar16;
              local_1b0 = dVar14;
              local_1a8 = dVar17;
              if (9.99999993922529e-09 < dVar2) {
                local_1a8 = 1.0 / SQRT(dVar2);
                local_1b8 = dVar16 * local_1a8;
                local_1b0 = dVar14 * local_1a8;
                local_1a8 = dVar17 * local_1a8;
              }
              local_1c0 = &local_1a0;
              local_1c8 = (double *)&local_181;
              FUN_14842099f(local_f8,fVar20,&local_168,&local_1b8);
              if ((local_181 == '\x01') &&
                 ((double)(fVar20 * 0.1) <
                  (local_170 - local_190) * (local_170 - local_190) +
                  (local_178 - local_198) * (local_178 - local_198) +
                  (local_180 - local_1a0) * (local_180 - local_1a0))) goto LAB_1484204bf;
            }
            FUN_14485c47a(param_2 + 0xd8,param_1);
            *(float *)(param_2 + 8) =
                 (float)SQRT((dVar15 - param_3[2]) * (dVar15 - param_3[2]) +
                             (dVar4 - param_3[1]) * (dVar4 - param_3[1]) +
                             (dVar1 - *param_3) * (dVar1 - *param_3));
            *(double *)(param_2 + 0x28) = dVar1;
            *(double *)(param_2 + 0x30) = dVar4;
            *(double *)(param_2 + 0x38) = dVar15;
            uVar9 = 1;
            goto LAB_1484204c1;
          }
        }
      }
    }
  }
LAB_1484204bf:
  uVar9 = 0;
LAB_1484204c1:
  if ((local_e0 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 14842069a FUN_14842069a body=325 status=ok
// SIG undefined FUN_14842069a(void)

void FUN_14842069a(double *param_1,double *param_2,double *param_3,double *param_4,
                  undefined1 *param_5,double *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  *param_5 = 0;
  param_6[2] = param_1[2];
  dVar1 = param_1[1];
  *param_6 = *param_1;
  param_6[1] = dVar1;
  dVar1 = *param_2;
  dVar2 = param_2[1];
  dVar3 = param_2[2];
  dVar4 = param_4[1];
  dVar5 = param_4[2];
  dVar8 = dVar5 * dVar3 + *param_4 * dVar1 + dVar2 * dVar4;
  if (9.99999993922529e-09 <= ABS(dVar8)) {
    dVar6 = param_3[1];
    dVar7 = param_3[2];
    dVar8 = -((dVar3 * dVar7 + dVar1 * *param_3 + dVar2 * dVar6) -
             (param_1[2] * dVar3 + *param_1 * dVar1 + param_1[1] * dVar2)) / dVar8;
    if (0.0 <= dVar8) {
      *param_6 = *param_3 + *param_4 * dVar8;
      param_6[1] = dVar6 + dVar4 * dVar8;
      param_6[2] = dVar7 + dVar5 * dVar8;
      *param_5 = 1;
    }
  }
  return;
}



// FUNCTION 1484207df FUN_1484207df body=447 status=ok
// SIG undefined FUN_1484207df(void)

void FUN_1484207df(double *param_1,double *param_2,double *param_3,float param_4,double *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_d8 [40];
  undefined1 local_b0 [24];
  double local_98;
  double local_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  dVar1 = param_2[2];
  dVar5 = param_1[2] - dVar1;
  dVar2 = *param_2;
  dVar3 = param_2[1];
  dVar6 = param_1[1] - dVar3;
  dVar4 = *param_1 - dVar2;
  dVar7 = param_3[2] * dVar5 + *param_3 * dVar4 + dVar6 * param_3[1];
  dVar5 = dVar5 - param_3[2] * dVar7;
  dVar6 = dVar6 - param_3[1] * dVar7;
  dVar4 = dVar4 - dVar7 * *param_3;
  dVar7 = SQRT(dVar5 * dVar5 + dVar4 * dVar4 + dVar6 * dVar6);
  if (dVar7 <= 0.0) {
    FUN_1484308ef(param_3,&local_98,local_b0);
    dVar4 = (double)param_4;
    dVar5 = local_88 * dVar4;
    dVar6 = local_90 * dVar4;
    dVar4 = dVar4 * local_98;
  }
  else {
    dVar7 = (double)param_4 / dVar7;
    dVar5 = dVar5 * dVar7;
    dVar6 = dVar6 * dVar7;
    dVar4 = dVar4 * dVar7;
  }
  *param_5 = dVar2 + dVar4;
  param_5[1] = dVar3 + dVar6;
  param_5[2] = dVar1 + dVar5;
  if ((local_80 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14842099f FUN_14842099f body=271 status=ok
// SIG undefined FUN_14842099f(void)

void FUN_14842099f(double *param_1,float param_2,double *param_3,double *param_4,undefined1 *param_5
                  ,double *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  *param_5 = 0;
  param_6[2] = param_3[2];
  dVar2 = param_3[1];
  *param_6 = *param_3;
  param_6[1] = dVar2;
  dVar4 = param_3[2] - param_1[2];
  dVar2 = param_3[1] - param_1[1];
  dVar5 = *param_3 - *param_1;
  dVar3 = dVar4 * param_4[2] + dVar5 * *param_4 + dVar2 * param_4[1];
  dVar2 = dVar3 * dVar3 -
          ((dVar4 * dVar4 + dVar5 * dVar5 + dVar2 * dVar2) - (double)param_2 * (double)param_2);
  if (0.0 < dVar2) {
    *param_5 = 1;
    if (dVar2 < 0.0) {
      dVar2 = sqrt(dVar2);
    }
    else {
      dVar2 = SQRT(dVar2);
    }
    dVar4 = dVar2 - dVar3;
    if (-dVar3 - dVar2 <= dVar2 - dVar3) {
      dVar4 = -dVar3 - dVar2;
    }
    dVar2 = param_4[2];
    dVar3 = param_4[1];
    dVar5 = param_3[2];
    dVar1 = param_3[1];
    *param_6 = dVar4 * *param_4 + *param_3;
    param_6[1] = dVar3 * dVar4 + dVar1;
    param_6[2] = dVar2 * dVar4 + dVar5;
  }
  return;
}



// FUNCTION 148420ab2 FUN_148420ab2 body=3322 status=ok
// SIG undefined FUN_148420ab2(void)

void FUN_148420ab2(longlong *param_1,longlong *param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  bool bVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  float fVar26;
  double dVar27;
  undefined1 auVar28 [16];
  float fVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined1 auStack_438 [32];
  undefined8 *local_418;
  ulonglong local_410;
  undefined4 local_408;
  uint local_400;
  double local_3f0;
  longlong *local_3e8;
  ulonglong local_3e0;
  double local_3d8;
  double local_3d0;
  double local_3c8;
  undefined8 local_3c0;
  double local_3b8;
  ulonglong local_3b0;
  ulonglong local_3a8;
  ulonglong local_3a0;
  double local_398;
  double local_390;
  double local_388;
  double local_380;
  double local_378;
  double local_370;
  double local_368;
  double dStack_360;
  double local_358;
  double local_348;
  double dStack_340;
  double local_338;
  float local_330;
  float local_32c;
  float local_328;
  undefined4 local_324;
  undefined8 local_320;
  undefined8 uStack_318;
  double local_310;
  float local_304;
  float local_300;
  float local_2fc;
  double local_2f8;
  double local_2f0;
  double local_2e8;
  undefined1 local_2e0 [40];
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  double local_2a8;
  double local_2a0;
  double local_298;
  double local_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double local_248;
  double dStack_240;
  double local_238;
  int local_220;
  undefined1 local_21c [36];
  float local_1f8;
  uint local_1f4;
  float local_1f0;
  float local_1ec;
  char local_1e8;
  float local_1e4;
  uint local_1e0;
  float local_1dc;
  float local_1d8;
  char local_1d4;
  float local_1d0;
  uint local_1cc;
  float local_1c8;
  float local_1c4;
  char local_1c0;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  uint uStack_124;
  undefined8 local_120;
  double local_118;
  double local_110;
  double local_108;
  undefined8 local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_438;
  memcpy(&local_288,param_3,0x110);
  cVar5 = (**(code **)(*param_1 + 0x540))(param_1,param_2,param_1 + 0x2b,&local_288);
  if ((cVar5 == '\0') ||
     (plVar6 = (longlong *)FUN_14842d074(local_21c,local_220), plVar6 == (longlong *)0x0))
  goto LAB_148420b79;
  dVar20 = DAT_14c8464e0 * local_248;
  dStack_240 = DAT_14c8464e8 * dStack_240;
  local_238 = DAT_14c8464f0 * local_238;
  dVar22 = dStack_240 * local_288 - dVar20 * dStack_280;
  dVar24 = local_238 * dStack_280 - dStack_240 * local_278;
  dVar25 = dVar20 * local_278 - local_238 * local_288;
  dVar24 = dVar24 + dVar24;
  dVar25 = dVar25 + dVar25;
  dVar22 = dVar22 + dVar22;
  local_348 = (dVar22 * dStack_280 - dVar25 * local_278) + dStack_270 * dVar24 + dVar20 + local_268;
  dStack_340 = (local_278 * dVar24 - local_288 * dVar22) + dStack_270 * dVar25 + dStack_240 +
               dStack_260;
  local_338 = dVar22 * dStack_270 + local_238 + (dVar25 * local_288 - dVar24 * dStack_280) +
              local_258;
  dVar25 = (double)param_1[0x2e];
  dVar22 = (double)param_1[0x2f];
  dVar20 = dVar22 * local_288 - dStack_280 * dVar25;
  dVar24 = (double)param_1[0x30] * dStack_280 - local_278 * dVar22;
  dVar23 = dVar25 * local_278 - (double)param_1[0x30] * local_288;
  dVar24 = dVar24 + dVar24;
  dVar23 = dVar23 + dVar23;
  dVar20 = dVar20 + dVar20;
  local_358 = dVar20 * dStack_270 + (double)param_1[0x30] +
              (dVar23 * local_288 - dVar24 * dStack_280);
  local_368 = (dVar20 * dStack_280 - dVar23 * local_278) + dStack_270 * dVar24 + dVar25;
  dStack_360 = (local_278 * dVar24 - local_288 * dVar20) + dStack_270 * dVar23 + dVar22;
  dVar25 = (double)param_1[0x31];
  dVar22 = (double)param_1[0x32];
  dVar20 = dVar22 * local_288 - dStack_280 * dVar25;
  dVar23 = (double)param_1[0x33] * dStack_280 - local_278 * dVar22;
  dVar27 = dVar25 * local_278 - local_288 * (double)param_1[0x33];
  dVar23 = dVar23 + dVar23;
  dVar27 = dVar27 + dVar27;
  dVar20 = dVar20 + dVar20;
  dVar24 = dVar20 * dStack_270 + (double)param_1[0x33] + (dVar27 * local_288 - dVar23 * dStack_280);
  dVar25 = (dVar20 * dStack_280 - dVar27 * local_278) + dStack_270 * dVar23 + dVar25;
  dVar22 = (local_278 * dVar23 - local_288 * dVar20) + dStack_270 * dVar27 + dVar22;
  dVar20 = local_368 * dVar22 - dVar25 * dStack_360;
  dVar23 = local_358 * dVar25 - dVar24 * local_368;
  dVar25 = dStack_360 * dVar24 - dVar22 * local_358;
  local_380 = dVar25;
  local_378 = dVar23;
  local_370 = dVar20;
  lVar7 = (**(code **)(*param_2 + 0x10))(param_2);
  uStack_168 = *(undefined8 *)(lVar7 + 0xa00);
  local_178 = *(undefined8 *)(lVar7 + 0x9c0);
  local_170 = *(undefined8 *)(lVar7 + 0x9e0);
  local_418 = &local_178;
  local_410 = CONCAT71(local_410._1_7_,*(double *)(lVar7 + 0x8a8) < 1.0);
  cVar5 = FUN_148426fdc(param_1,&local_348,&local_380,lVar7 + 0x10a0);
  if (cVar5 == '\0') {
    local_3f0 = 0.0;
    uVar30 = 0x54442d18;
    uVar31 = 0x401921fb;
  }
  else {
    local_3f0 = (double)param_1[0x36];
    dVar22 = (double)param_1[0x37];
    uVar30 = SUB84(dVar22,0);
    uVar31 = (undefined4)((ulonglong)dVar22 >> 0x20);
    if (dVar22 - local_3f0 <= 0.0) goto LAB_148420b79;
  }
  if (local_220 == 2) {
    if (local_1c0 != '\x01') goto LAB_148421061;
    auVar28 = ZEXT416(local_1cc);
    local_1d8 = local_1c4;
    fVar26 = local_1c8;
    fVar29 = local_1d0;
  }
  else if (local_220 == 1) {
    if (local_1d4 == '\x01') {
      auVar28 = ZEXT416(local_1e0);
      fVar26 = local_1dc;
      fVar29 = local_1e4;
    }
    else {
LAB_148421061:
      local_1d8 = 1.0;
      fVar26 = 1.0;
      auVar28._0_12_ = ZEXT812(0x3f800000);
      auVar28._12_4_ = 0;
      fVar29 = 1.0;
    }
  }
  else {
    if (local_1e8 != '\x01') goto LAB_148421061;
    auVar28 = ZEXT416(local_1f4);
    local_1d8 = local_1ec;
    fVar26 = local_1f0;
    fVar29 = local_1f8;
  }
  local_3c8 = (double)param_1[0x34] * local_248;
  local_3b8 = local_248 * (double)param_1[0x39];
  if (local_1d8 <= 0.0) {
    local_1d8 = 0.0;
  }
  if (1.0 <= local_1d8) {
    local_1d8 = 1.0;
  }
  iVar11 = (int)(local_1d8 * 255.0 + 0.5);
  plVar8 = (longlong *)(**(code **)(*param_2 + 8))(param_2);
  uVar9 = (**(code **)(*plVar6 + 0x2f0))(plVar6);
  if ((char)iVar11 != '\0') {
    if (fVar29 <= 0.0) {
      fVar29 = 0.0;
    }
    if (1.0 <= fVar29) {
      fVar29 = 1.0;
    }
    if (auVar28._0_4_ <= 0.0) {
      auVar3._12_4_ = 0;
      auVar3._0_12_ = auVar28._4_12_;
      auVar28 = auVar3 << 0x20;
    }
    if (1.0 <= auVar28._0_4_) {
      auVar28._0_4_ = 0x3f800000;
    }
    if (fVar26 <= 0.0) {
      fVar26 = 0.0;
    }
    if (1.0 <= fVar26) {
      fVar26 = 1.0;
    }
    local_390 = (double)CONCAT44(uVar31,uVar30) - local_3f0;
    uVar14 = (uint)(((double)(int)param_1[0x35] * local_390) / 1.5707963267948966);
    uVar10 = (int)(fVar29 * 255.0 + 0.5) & 0xff;
    local_3a0 = (ulonglong)uVar10;
    uVar12 = (int)(auVar28._0_4_ * 255.0 + 0.5) & 0xff;
    local_3a8 = (ulonglong)uVar12;
    uVar13 = (int)(fVar26 * 255.0 + 0.5) & 0xff;
    local_3b0 = (ulonglong)uVar13;
    local_410 = 0;
    local_418 = (undefined8 *)((ulonglong)local_418 & 0xffffffffffffff00);
    local_3e8 = plVar8;
    local_3c0 = uVar9;
    local_2a0 = dVar25;
    local_298 = dVar23;
    local_290 = dVar20;
    FUN_140d3493e(local_2e0,*(undefined4 *)(plVar8[1] + 0x3090),1,0);
    local_398 = (double)(int)(uVar14 + 1);
    local_3d8 = local_348;
    local_3d0 = local_338;
    local_3e0 = (ulonglong)uVar14;
    bVar16 = true;
    do {
      bVar4 = bVar16;
      uVar30 = SUB84(local_3c8,0);
      uVar31 = (undefined4)((ulonglong)local_3c8 >> 0x20);
      if (!bVar4) {
        uVar30 = SUB84(local_3b8,0);
        uVar31 = (undefined4)((ulonglong)local_3b8 >> 0x20);
      }
      if (-2 < (int)local_3e0) {
        local_388 = (double)CONCAT44(uVar31,uVar30) / local_3c8;
        iVar15 = 0;
        dVar25 = 0.0;
        do {
          dVar20 = (dVar25 / local_398) * local_390 + local_3f0;
          dVar22 = (double)FUN_144719204(SUB84((dVar20 * 180.0) / 3.1415927410125732,0),0);
          FUN_140ccff96(&local_368,&local_2f8,
                        (double)(~-(ulonglong)(dVar22 < 0.0) & (ulonglong)dVar22 |
                                (ulonglong)(dVar22 + 360.0) & -(ulonglong)(dVar22 < 0.0)) *
                        0.017453292519943295,&local_2a0);
          dVar22 = local_2e8 * local_2e8 + local_2f8 * local_2f8 + local_2f0 * local_2f0;
          if (9.99999993922529e-09 < dVar22) {
            dVar22 = 1.0 / SQRT(dVar22);
            local_2f8 = local_2f8 * dVar22;
            local_2f0 = local_2f0 * dVar22;
            local_2e8 = local_2e8 * dVar22;
          }
          dVar22 = sin(dVar20);
          dVar20 = cos(dVar20);
          dVar21 = local_2e8 * (double)CONCAT44(uVar31,uVar30);
          dVar27 = local_2f0 * (double)CONCAT44(uVar31,uVar30);
          dVar23 = local_2f8 * (double)CONCAT44(uVar31,uVar30);
          dVar19 = dVar21 * dVar21 + dVar23 * dVar23 + dVar27 * dVar27;
          dVar18 = dVar27;
          dVar24 = dVar21;
          dVar17 = dVar23;
          if (9.99999993922529e-09 < dVar19) {
            dVar24 = 1.0 / SQRT(dVar19);
            dVar17 = dVar23 * dVar24;
            dVar18 = dVar27 * dVar24;
            dVar24 = dVar24 * dVar21;
          }
          uStack_12c = 0;
          uStack_128 = 0;
          local_178 = CONCAT44((float)dVar27,(float)dVar23);
          local_170 = CONCAT44((float)(dVar20 * local_388),(float)dVar21);
          uStack_168 = CONCAT44(uStack_168._4_4_,(float)(dVar22 * local_388));
          local_320 = (double)CONCAT44((float)dVar18,(float)dVar17);
          local_328 = (float)(dVar17 * local_298 - local_2a0 * dVar18);
          local_32c = (float)(dVar24 * local_2a0 - local_290 * dVar17);
          local_330 = (float)(dVar18 * local_290 - local_298 * dVar24);
          uStack_318 = (double)CONCAT44(uStack_318._4_4_,(float)dVar24);
          local_2fc = -(float)local_290;
          local_300 = -(float)local_298;
          local_304 = -(float)local_2a0;
          uStack_124 = uVar12 << 8 | iVar11 << 0x18 | uVar10 << 0x10 | uVar13;
          FUN_147c71d8a(&local_178,&local_304,&local_330,&local_320);
          FUN_147a7d5d8(local_2e0);
          local_310 = dVar21 + local_3d0;
          uStack_318 = dVar27 + dStack_340;
          local_320 = dVar23 + local_3d8;
          if (iVar15 != 0) {
            local_330 = (float)(&DAT_14c758c60)[local_3a0];
            local_32c = (float)(&DAT_14c758c60)[local_3a8];
            local_328 = (float)(&DAT_14c758c60)[local_3b0];
            local_324 = 0x3f800000;
            local_408 = 0;
            local_410 = local_410 & 0xffffffff00000000;
            local_400 = local_400 & 0xffffff00;
            local_418 = (undefined8 *)CONCAT71(local_418._1_7_,1);
            (**(code **)(*local_3e8 + 0x30))(local_3e8,&local_2b8,&local_320,&local_330);
          }
          local_2a8 = local_310;
          local_2b8 = (undefined4)local_320;
          uStack_2b4 = local_320._4_4_;
          uStack_2b0 = (undefined4)uStack_318;
          uStack_2ac = uStack_318._4_4_;
          dVar25 = dVar25 + 1.0;
          iVar15 = iVar15 + 1;
        } while (uVar14 + 2 != iVar15);
      }
      bVar16 = false;
    } while (bVar4);
    iVar11 = (int)local_3e0;
    if (-1 < iVar11) {
      iVar15 = 0;
      do {
        iVar2 = uVar14 + 2 + iVar15;
        iVar1 = iVar15 + 1;
        FUN_140d3489c(local_2e0,iVar15,iVar1,iVar2);
        FUN_140d3489c(local_2e0,iVar1,iVar15 + iVar11 + 3,iVar2);
        bVar16 = iVar15 != iVar11;
        iVar15 = iVar1;
      } while (bVar16);
    }
    local_178 = 0x3ff0000000000000;
    local_170 = 0;
    uStack_168 = 0;
    local_160 = 0;
    uStack_158 = 0;
    local_150 = 0x3ff0000000000000;
    local_148 = 0;
    uStack_140 = 0;
    local_138 = 0;
    uStack_130 = 0;
    uStack_12c = 0;
    uStack_128 = 0;
    uStack_124 = 0x3ff00000;
    local_120 = 0;
    local_118 = local_3d8;
    local_110 = dStack_340;
    local_108 = local_3d0;
    local_100 = 0x3ff0000000000000;
    local_408 = CONCAT31(local_408._1_3_,1);
    local_418 = (undefined8 *)CONCAT71(local_418._1_7_,1);
    local_400 = 0xffffffff;
    local_410 = local_410 & 0xffffffffffffff00;
    FUN_1434d8d42(local_2e0,local_3e8,&local_178,local_3c0);
    FUN_1434d8cf8(local_2e0);
  }
LAB_148420b79:
  if ((local_f0 ^ (ulonglong)auStack_438) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484217ae FUN_1484217ae body=2011 status=ok
// SIG undefined FUN_1484217ae(void)

undefined1 *
FUN_1484217ae(longlong *param_1,undefined1 *param_2,longlong param_3,double *param_4,double *param_5
             ,double *param_6)

{
  float fVar1;
  char cVar2;
  undefined1 uVar3;
  longlong lVar4;
  double *pdVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_228 [32];
  double *local_208;
  undefined1 local_200;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  double local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double local_188;
  double dStack_180;
  double local_178;
  double local_168 [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  double local_108;
  double local_f8;
  double local_f0;
  double local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_228;
  pdVar5 = local_168;
  for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
    *pdVar5 = *param_4;
    param_4 = param_4 + 1;
    pdVar5 = pdVar5 + 1;
  }
  cVar2 = (**(code **)(*param_1 + 0x550))(param_1,param_3,param_1 + 0x2b);
  if (cVar2 != '\0') {
    fVar1 = *(float *)(param_1 + 0x20);
    dVar6 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0) * local_128;
    dStack_120 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8) * dStack_120;
    local_118 = DAT_14c8464f0 * local_118;
    dVar8 = dStack_120 * local_168[0] - dVar6 * local_168[1];
    dVar9 = local_118 * local_168[1] - dStack_120 * local_168[2];
    dVar10 = dVar6 * local_168[2] - local_118 * local_168[0];
    dVar9 = dVar9 + dVar9;
    dVar10 = dVar10 + dVar10;
    dVar8 = dVar8 + dVar8;
    local_188 = (dVar8 * local_168[1] - dVar10 * local_168[2]) + local_168[3] * dVar9 + dVar6 +
                local_148;
    dStack_180 = (local_168[2] * dVar9 - local_168[0] * dVar8) + local_168[3] * dVar10 + dStack_120
                 + dStack_140;
    dVar8 = dVar8 * local_168[3] + local_118 + (dVar10 * local_168[0] - dVar9 * local_168[1]) +
            local_138;
    dVar6 = (double)param_1[0x2e];
    dVar9 = (double)param_1[0x2f];
    dVar10 = dVar9 * local_168[0] - local_168[1] * dVar6;
    dVar7 = (double)param_1[0x30] * local_168[1] - local_168[2] * dVar9;
    dVar11 = dVar6 * local_168[2] - (double)param_1[0x30] * local_168[0];
    dVar7 = dVar7 + dVar7;
    dVar11 = dVar11 + dVar11;
    dVar10 = dVar10 + dVar10;
    local_198 = dVar10 * local_168[3] + (double)param_1[0x30] +
                (dVar11 * local_168[0] - dVar7 * local_168[1]);
    local_1a8 = (dVar10 * local_168[1] - dVar11 * local_168[2]) + local_168[3] * dVar7 + dVar6;
    dStack_1a0 = (local_168[2] * dVar7 - local_168[0] * dVar10) + local_168[3] * dVar11 + dVar9;
    dVar6 = (double)param_1[0x31];
    dVar9 = (double)param_1[0x32];
    dVar10 = dVar9 * local_168[0] - local_168[1] * dVar6;
    dVar11 = (double)param_1[0x33] * local_168[1] - local_168[2] * dVar9;
    dVar12 = dVar6 * local_168[2] - local_168[0] * (double)param_1[0x33];
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar10 = dVar10 + dVar10;
    dVar7 = dVar10 * local_168[3] + (double)param_1[0x33] +
            (dVar12 * local_168[0] - dVar11 * local_168[1]);
    dVar6 = (dVar10 * local_168[1] - dVar12 * local_168[2]) + local_168[3] * dVar11 + dVar6;
    dVar9 = (local_168[2] * dVar11 - local_168[0] * dVar10) + local_168[3] * dVar12 + dVar9;
    dVar10 = local_1a8 * dVar9 - dVar6 * dStack_1a0;
    dVar11 = local_198 * dVar6 - dVar7 * local_1a8;
    dVar6 = dStack_1a0 * dVar7 - dVar9 * local_198;
    local_1c0 = dVar6;
    local_1b8 = dVar11;
    local_1b0 = dVar10;
    local_178 = dVar8;
    uVar3 = (**(code **)(*(longlong *)(param_3 + 0x28) + 0x38))(param_3 + 0x28);
    (**(code **)(*(longlong *)(param_3 + 0x28) + 0x18))(param_3 + 0x28,&local_f8);
    local_208 = &local_f8;
    local_200 = uVar3;
    cVar2 = FUN_148426fdc(param_1,&local_188,&local_1c0,param_3 + 0x1c0);
    dVar9 = (double)param_1[0x37] - (double)param_1[0x36];
    if ((cVar2 == '\0') || (0.0 < dVar9)) {
      dVar7 = dVar8 * dVar10 + local_188 * dVar6 + dVar11 * dStack_180;
      dVar6 = ((dVar10 * dVar7 - param_5[2]) * dVar10 +
              (dVar7 * dVar6 - *param_5) * dVar6 + (dVar11 * dVar7 - param_5[1]) * dVar11) /
              (dVar10 * param_6[2] + dVar6 * *param_6 + dVar11 * param_6[1]);
      if (0.0 <= dVar6) {
        local_e8 = (param_5[2] + param_6[2] * dVar6) - dVar8;
        local_f0 = (param_5[1] + param_6[1] * dVar6) - dStack_180;
        local_f8 = (*param_5 + *param_6 * dVar6) - local_188;
        dVar8 = SQRT(local_e8 * local_e8 + local_f8 * local_f8 + local_f0 * local_f0);
        if ((dVar8 <= (double)param_1[0x34] * local_128 + (double)fVar1 * local_108) &&
           (local_128 * (double)param_1[0x39] - (double)fVar1 * local_108 <= dVar8)) {
          if (cVar2 != '\0') {
            FUN_140ccff96(&local_1a8,&local_1f0,(double)param_1[0x36] * 0.017453292519943295,
                          &local_1c0);
            local_1d8 = (double)CONCAT44(uStack_1ec,local_1f0);
            uStack_1d0 = (double)CONCAT44(uStack_1e4,uStack_1e8);
            dVar8 = local_1e0 * local_1e0 + local_1d8 * local_1d8 + uStack_1d0 * uStack_1d0;
            if ((dVar8 != 1.0) || (NAN(dVar8))) {
              if (dVar8 < 9.99999993922529e-09) {
                local_1c8 = DAT_14c8464f0;
                local_1f0 = (undefined4)DAT_14c8464e0;
                uStack_1ec = DAT_14c8464e0._4_4_;
                uStack_1e8 = (undefined4)DAT_14c8464e8;
                uStack_1e4 = DAT_14c8464e8._4_4_;
                goto LAB_148421ee1;
              }
              dVar8 = 1.0 / SQRT(dVar8);
              local_1c8 = local_1e0 * dVar8;
              uStack_1d0 = uStack_1d0 * dVar8;
              local_1d8 = local_1d8 * dVar8;
            }
            else {
              local_1c8 = local_1e0;
LAB_148421ee1:
              local_1d8 = (double)CONCAT44(uStack_1ec,local_1f0);
              uStack_1d0 = (double)CONCAT44(uStack_1e4,uStack_1e8);
            }
            dVar8 = (double)FUN_148421f8a(&local_1d8,&local_f8,&local_1c0);
            if (dVar9 < (double)(~-(ulonglong)(dVar8 < 0.0) & (ulonglong)dVar8 |
                                (ulonglong)(dVar8 + 6.283185307179586) & -(ulonglong)(dVar8 < 0.0)))
            goto LAB_148421868;
          }
          if (0.0 <= dVar6) {
            *param_2 = 1;
            *(double *)(param_2 + 8) = (double)(float)dVar6;
            *(undefined8 *)(param_2 + 0x10) = 0;
            *(undefined8 *)(param_2 + 0x18) = 0;
            *(undefined8 *)(param_2 + 0x20) = 0x3ff0000000000000;
            param_2[0x28] = 0;
            *(undefined8 *)(param_2 + 0x38) = 0;
            FUN_14485c47a(param_2 + 0x38,param_1);
            *(longlong **)(param_2 + 0x30) = param_1;
            *(int *)(param_2 + 0x2c) = (int)param_1[6];
            goto LAB_1484218a0;
          }
        }
      }
    }
  }
LAB_148421868:
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0x47efffffe0000000;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0x3ff0000000000000;
  param_2[0x28] = 0;
  *(undefined8 *)(param_2 + 0x2c) = 0;
  *(undefined8 *)(param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
LAB_1484218a0:
  if ((local_e0 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148421f8a FUN_148421f8a body=835 status=ok
// SIG undefined FUN_148421f8a(void)

ulonglong FUN_148421f8a(double *param_1,double *param_2,double *param_3)

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
  double dVar11;
  double dVar12;
  ulonglong uVar13;
  
  dVar1 = *param_3;
  dVar2 = param_3[1];
  dVar3 = param_3[2];
  dVar5 = param_1[2] * dVar3 + *param_1 * dVar1 + param_1[1] * dVar2;
  dVar11 = param_1[2] - dVar3 * dVar5;
  dVar10 = param_1[1] - dVar2 * dVar5;
  dVar9 = *param_1 - dVar5 * dVar1;
  dVar5 = param_2[2] * dVar3 + *param_2 * dVar1 + dVar2 * param_2[1];
  dVar4 = param_2[2] - dVar3 * dVar5;
  dVar8 = param_2[1] - dVar2 * dVar5;
  dVar5 = *param_2 - dVar5 * dVar1;
  dVar7 = SQRT(dVar11 * dVar11 + dVar9 * dVar9 + dVar10 * dVar10);
  dVar6 = 1.0 / dVar7;
  if (0.0 < dVar7) {
    dVar9 = dVar9 * dVar6;
    dVar10 = dVar10 * dVar6;
  }
  else {
    dVar9 = 0.0;
    dVar10 = 0.0;
  }
  dVar12 = SQRT(dVar4 * dVar4 + dVar5 * dVar5 + dVar8 * dVar8);
  dVar7 = (double)(-(ulonglong)(0.0 < dVar7) & (ulonglong)(dVar11 * dVar6));
  dVar6 = 1.0 / dVar12;
  if (0.0 < dVar12) {
    dVar5 = dVar5 * dVar6;
    dVar8 = dVar8 * dVar6;
  }
  else {
    dVar5 = 0.0;
    dVar8 = 0.0;
  }
  dVar4 = (double)(-(ulonglong)(0.0 < dVar12) & (ulonglong)(dVar4 * dVar6));
  dVar12 = dVar9 * dVar8 - dVar5 * dVar10;
  dVar11 = dVar7 * dVar5 - dVar4 * dVar9;
  dVar6 = dVar10 * dVar4 - dVar8 * dVar7;
  if (1e-08 <= dVar12 * dVar12 + dVar6 * dVar6 + dVar11 * dVar11) {
    dVar8 = dVar7 * dVar4 + dVar9 * dVar5 + dVar10 * dVar8;
    dVar5 = 1.0;
    if (dVar8 <= 1.0) {
      dVar5 = dVar8;
    }
    dVar5 = acos((double)(-(ulonglong)(dVar8 < -1.0) & 0xbff0000000000000 |
                         ~-(ulonglong)(dVar8 < -1.0) & (ulonglong)dVar5));
    uVar13 = -(ulonglong)(dVar12 * dVar3 + dVar6 * dVar1 + dVar2 * dVar11 < 0.0);
    uVar13 = uVar13 & (ulonglong)-dVar5 | ~uVar13 & (ulonglong)dVar5;
  }
  else {
    uVar13 = -(ulonglong)(dVar7 * dVar4 + dVar9 * dVar5 + dVar10 * dVar8 < 0.0) & 0x400921fb54442d18
    ;
  }
  return uVar13;
}



// FUNCTION 1484222e6 FUN_1484222e6 body=236 status=ok
// SIG undefined FUN_1484222e6(void)

void FUN_1484222e6(longlong *param_1,undefined8 param_2,void *param_3)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_158 [32];
  undefined1 local_138 [272];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if ((char)param_1[0x21] == '\x01') {
    (**(code **)(*param_1 + 0x5e8))(param_1);
  }
  if (*(char *)((longlong)param_1 + 0x109) == '\x01') {
    (**(code **)(*param_1 + 0x5f0))(param_1);
  }
  memcpy(local_138,param_3,0x110);
  cVar1 = (**(code **)(*param_1 + 0x540))(param_1,param_2,param_1 + 0x25,local_138);
  if (cVar1 != '\0') {
    (**(code **)(*(longlong *)param_1[0x22] + 0x2a0))((longlong *)param_1[0x22],param_2,local_138);
    if (*(int *)((longlong)param_1 + 0x184) == 0) {
      plVar2 = (longlong *)param_1[0x23];
    }
    else {
      plVar2 = (longlong *)param_1[0x24];
    }
    (**(code **)(*plVar2 + 0x2a0))(plVar2,param_2,local_138);
  }
  if ((local_28 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484223d4 FUN_1484223d4 body=372 status=ok
// SIG undefined FUN_1484223d4(void)

char * FUN_1484223d4(longlong *param_1,char *param_2,undefined8 param_3,undefined8 *param_4,
                    undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8 [15];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  puVar4 = local_a8;
  for (lVar2 = 0xe; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *param_4;
    param_4 = param_4 + 1;
    puVar4 = puVar4 + 1;
  }
  cVar1 = (**(code **)(*param_1 + 0x550))(param_1,param_3,param_1 + 0x25);
  if (cVar1 == '\0') {
    *param_2 = '\0';
    param_2[8] = '\0';
    param_2[9] = '\0';
    param_2[10] = '\0';
    param_2[0xb] = -0x20;
    param_2[0xc] = -1;
    param_2[0xd] = -1;
    param_2[0xe] = -0x11;
    param_2[0xf] = 'G';
    param_2[0x10] = '\0';
    param_2[0x11] = '\0';
    param_2[0x12] = '\0';
    param_2[0x13] = '\0';
    param_2[0x14] = '\0';
    param_2[0x15] = '\0';
    param_2[0x16] = '\0';
    param_2[0x17] = '\0';
    param_2[0x18] = '\0';
    param_2[0x19] = '\0';
    param_2[0x1a] = '\0';
    param_2[0x1b] = '\0';
    param_2[0x1c] = '\0';
    param_2[0x1d] = '\0';
    param_2[0x1e] = '\0';
    param_2[0x1f] = '\0';
    param_2[0x20] = '\0';
    param_2[0x21] = '\0';
    param_2[0x22] = '\0';
    param_2[0x23] = '\0';
    param_2[0x24] = '\0';
    param_2[0x25] = '\0';
    param_2[0x26] = -0x10;
    param_2[0x27] = '?';
    param_2[0x28] = '\0';
    param_2[0x2c] = '\0';
    param_2[0x2d] = '\0';
    param_2[0x2e] = '\0';
    param_2[0x2f] = '\0';
    param_2[0x30] = '\0';
    param_2[0x31] = '\0';
    param_2[0x32] = '\0';
    param_2[0x33] = '\0';
    param_2[0x34] = '\0';
    param_2[0x35] = '\0';
    param_2[0x36] = '\0';
    param_2[0x37] = '\0';
    param_2[0x38] = '\0';
    param_2[0x39] = '\0';
    param_2[0x3a] = '\0';
    param_2[0x3b] = '\0';
    param_2[0x3c] = '\0';
    param_2[0x3d] = '\0';
    param_2[0x3e] = '\0';
    param_2[0x3f] = '\0';
  }
  else {
    local_f0 = param_6;
    local_f8 = param_5;
    (**(code **)(*(longlong *)param_1[0x22] + 0x2a8))
              ((longlong *)param_1[0x22],param_2,param_3,local_a8);
    if (*param_2 == '\0') {
      if (*(int *)((longlong)param_1 + 0x184) == 0) {
        plVar3 = (longlong *)param_1[0x23];
      }
      else {
        plVar3 = (longlong *)param_1[0x24];
      }
      local_f0 = param_6;
      local_f8 = param_5;
      (**(code **)(*plVar3 + 0x2a8))(plVar3,&local_e8,param_3,local_a8);
      *(undefined8 *)(param_2 + 0x30) = local_b8;
      *(undefined8 *)(param_2 + 0x38) = uStack_b0;
      *(undefined8 *)(param_2 + 0x20) = local_c8;
      *(undefined8 *)(param_2 + 0x28) = uStack_c0;
      *(undefined8 *)(param_2 + 0x10) = local_d8;
      *(undefined8 *)(param_2 + 0x18) = uStack_d0;
      *(undefined4 *)param_2 = local_e8;
      *(undefined4 *)(param_2 + 4) = uStack_e4;
      *(undefined4 *)(param_2 + 8) = uStack_e0;
      *(undefined4 *)(param_2 + 0xc) = uStack_dc;
    }
    if (*param_2 == '\x01') {
      FUN_14485c47a(param_2 + 0x38,param_1);
      *(longlong **)(param_2 + 0x30) = param_1;
      *(int *)(param_2 + 0x2c) = (int)param_1[6];
    }
  }
  if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148422806 FUN_148422806 body=154 status=ok
// SIG undefined FUN_148422806(void)

void FUN_148422806(longlong *param_1,int param_2)

{
  longlong lVar1;
  
  if (*(int *)((longlong)param_1 + 0x184) == param_2) {
    return;
  }
  *(int *)((longlong)param_1 + 0x184) = param_2;
  if (param_2 == 0) {
    lVar1 = FUN_145ef51d3();
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(lVar1);
    }
    param_1[0x23] = lVar1;
    lVar1 = 0x120;
  }
  else {
    lVar1 = FUN_1484228a0(DAT_14c951640);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(lVar1);
    }
    param_1[0x24] = lVar1;
    lVar1 = 0x118;
  }
  *(undefined8 *)((longlong)param_1 + lVar1) = 0;
                    /* WARNING: Could not recover jumptable at 0x000148422899. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x5f0))(param_1);
  return;
}



// FUNCTION 1484228a0 FUN_1484228a0 body=175 status=ok
// SIG undefined FUN_1484228a0(void)

undefined8 FUN_1484228a0(undefined8 param_1)

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
  local_b8 = FUN_1459ee0b8();
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



// FUNCTION 148422958 FUN_148422958 body=161 status=ok
// SIG undefined FUN_148422958(void)

void FUN_148422958(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x110) + 0x558))
            (*(longlong **)(param_1 + 0x110),&DAT_14c8464e0);
  (**(code **)(**(longlong **)(param_1 + 0x110) + 0x568))
            (*(longlong **)(param_1 + 0x110),param_1 + 0x140);
  (**(code **)(**(longlong **)(param_1 + 0x110) + 0x578))
            (*(longlong **)(param_1 + 0x110),*(undefined4 *)(param_1 + 0x170));
  (**(code **)(**(longlong **)(param_1 + 0x110) + 0x598))
            (*(longlong **)(param_1 + 0x110),*(undefined4 *)(param_1 + 0x180));
  (**(code **)(**(longlong **)(param_1 + 0x110) + 0x588))
            (*(longlong **)(param_1 + 0x110),*(undefined4 *)(param_1 + 0x174));
  (**(code **)(**(longlong **)(param_1 + 0x110) + 0x400))
            (*(longlong **)(param_1 + 0x110),*(undefined4 *)(param_1 + 0x100));
  *(undefined1 *)(param_1 + 0x108) = 0;
  return;
}



// FUNCTION 1484229fa FUN_1484229fa body=553 status=ok
// SIG undefined FUN_1484229fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1484229fa(longlong param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 uStack_38;
  double local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0x184) == 0) {
    puVar1 = (undefined8 *)(param_1 + 0x118);
    local_40 = (double)(*(float *)(param_1 + 0x178) * 0.9 + *(float *)(param_1 + 0x170));
    local_30 = *(double *)(param_1 + 0x150) * local_40;
    uStack_38 = *(double *)(param_1 + 0x148) * local_40;
    local_40 = local_40 * *(double *)(param_1 + 0x140);
    (**(code **)(**(longlong **)(param_1 + 0x118) + 0x558))
              (*(longlong **)(param_1 + 0x118),&local_40);
    local_30 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)(param_1 + 0x150) >> 0x20) ^
                                DAT_149931e80._4_4_,
                                (uint)*(undefined8 *)(param_1 + 0x150) ^ (uint)DAT_149931e80);
    local_40 = (double)CONCAT44(*(uint *)(param_1 + 0x144) ^ DAT_149931e80._4_4_,
                                *(uint *)(param_1 + 0x140) ^ (uint)DAT_149931e80);
    uStack_38 = (double)CONCAT44(*(uint *)(param_1 + 0x14c) ^ DAT_149931e80._12_4_,
                                 *(uint *)(param_1 + 0x148) ^ DAT_149931e80._8_4_);
    (**(code **)(**(longlong **)(param_1 + 0x118) + 0x568))
              (*(longlong **)(param_1 + 0x118),&local_40);
    (**(code **)(**(longlong **)(param_1 + 0x118) + 0x578))
              (*(longlong **)(param_1 + 0x118),*(undefined4 *)(param_1 + 0x178));
    (**(code **)(**(longlong **)(param_1 + 0x118) + 0x588))
              (*(longlong **)(param_1 + 0x118),*(undefined4 *)(param_1 + 0x17c));
    (**(code **)(**(longlong **)(param_1 + 0x118) + 0x598))
              (*(longlong **)(param_1 + 0x118),*(undefined4 *)(param_1 + 0x180));
  }
  else {
    puVar1 = (undefined8 *)(param_1 + 0x120);
    local_40 = (double)(*(float *)(param_1 + 0x178) * 0.5 + *(float *)(param_1 + 0x170));
    local_30 = *(double *)(param_1 + 0x150) * local_40;
    uStack_38 = *(double *)(param_1 + 0x148) * local_40;
    local_40 = local_40 * *(double *)(param_1 + 0x140);
    (**(code **)(**(longlong **)(param_1 + 0x120) + 0x558))
              (*(longlong **)(param_1 + 0x120),&local_40);
    (**(code **)(**(longlong **)(param_1 + 0x120) + 0x568))
              (*(longlong **)(param_1 + 0x120),param_1 + 0x140);
    (**(code **)(**(longlong **)(param_1 + 0x120) + 0x578))
              (*(longlong **)(param_1 + 0x120),param_1 + 0x158);
    local_40 = (double)*(float *)(param_1 + 0x178);
    uStack_38 = local_40;
    local_30 = local_40;
    (**(code **)(**(longlong **)(param_1 + 0x120) + 0x588))
              (*(longlong **)(param_1 + 0x120),&local_40);
  }
  (**(code **)(*(longlong *)*puVar1 + 0x350))((longlong *)*puVar1,*(undefined4 *)(param_1 + 0x98));
  (**(code **)(*(longlong *)*puVar1 + 0x400))((longlong *)*puVar1,*(undefined4 *)(param_1 + 0x100));
  *(undefined1 *)(param_1 + 0x109) = 0;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148422c4c FUN_148422c4c body=168 status=ok
// SIG undefined FUN_148422c4c(void)

void FUN_148422c4c(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_18 = *(undefined8 *)(param_2 + 0x10b0);
  local_28 = *(undefined8 *)(param_2 + 0x10a0);
  uStack_20 = *(undefined8 *)(param_2 + 0x10a8);
  local_30 = *(undefined8 *)(param_2 + 0xa00);
  local_40 = *(undefined8 *)(param_2 + 0x9c0);
  local_38 = *(undefined8 *)(param_2 + 0x9e0);
  local_58 = param_3;
  local_50 = param_4;
  (**(code **)(*param_1 + 0x4f8))
            ((int)local_30,&local_28,&local_40,
             CONCAT71((int7)(local_10 >> 8),
                      *(double *)(param_2 + 0x8a8) <= 1.0 && *(double *)(param_2 + 0x8a8) != 1.0) &
             0xffffffff);
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148422cf6 FUN_148422cf6 body=204 status=ok
// SIG undefined FUN_148422cf6(void)

void FUN_148422cf6(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_90 [24];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined1 local_60 [24];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar1 = param_2 + 0x28;
  uVar2 = (**(code **)(*(longlong *)(param_2 + 0x28) + 0x38))(lVar1);
  local_78 = *(undefined4 *)(param_2 + 0x1c0);
  uStack_74 = *(undefined4 *)(param_2 + 0x1c4);
  uStack_70 = *(undefined4 *)(param_2 + 0x1c8);
  uStack_6c = *(undefined4 *)(param_2 + 0x1cc);
  local_68 = *(undefined8 *)(param_2 + 0x1d0);
  (**(code **)(*(longlong *)(param_2 + 0x28) + 0x18))(lVar1,local_90);
  (**(code **)(*(longlong *)(param_2 + 0x28) + 0x28))(lVar1,local_60);
  local_a8 = param_3;
  local_a0 = param_4;
  (**(code **)(*param_1 + 0x4f8))(param_1,&local_78,local_90,uVar2);
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148422dc4 FUN_148422dc4 body=244 status=ok
// SIG undefined FUN_148422dc4(void)

void FUN_148422dc4(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_18 = *(undefined8 *)(param_2 + 0x10b0);
  local_28 = *(undefined8 *)(param_2 + 0x10a0);
  uStack_20 = *(undefined8 *)(param_2 + 0x10a8);
  local_30 = *(undefined8 *)(param_2 + 0xa00);
  local_40 = *(undefined8 *)(param_2 + 0x9c0);
  local_38 = *(undefined8 *)(param_2 + 0x9e0);
  local_48 = *(undefined8 *)(param_2 + 0x9f8);
  local_58 = *(undefined8 *)(param_2 + 0x9b8);
  local_50 = *(undefined8 *)(param_2 + 0x9d8);
  local_60 = param_5;
  local_78 = *(double *)(param_2 + 0x8a8) < 1.0;
  local_70 = param_3;
  local_68 = param_4;
  (**(code **)(*param_1 + 0x520))(*(double *)(param_2 + 0x8a8),&local_28,&local_40,&local_58);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148422eba FUN_148422eba body=225 status=ok
// SIG undefined FUN_148422eba(void)

void FUN_148422eba(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98 [24];
  undefined1 local_80 [24];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar1 = param_2 + 0x28;
  uVar2 = (**(code **)(*(longlong *)(param_2 + 0x28) + 0x38))(lVar1);
  local_68 = *(undefined4 *)(param_2 + 0x1c0);
  uStack_64 = *(undefined4 *)(param_2 + 0x1c4);
  uStack_60 = *(undefined4 *)(param_2 + 0x1c8);
  uStack_5c = *(undefined4 *)(param_2 + 0x1cc);
  local_58 = *(undefined8 *)(param_2 + 0x1d0);
  (**(code **)(*(longlong *)(param_2 + 0x28) + 0x18))(lVar1,local_80);
  (**(code **)(*(longlong *)(param_2 + 0x28) + 0x28))(lVar1,local_98);
  local_a0 = param_5;
  local_b8 = uVar2;
  local_b0 = param_3;
  local_a8 = param_4;
  (**(code **)(*param_1 + 0x520))(param_1,&local_68,local_80,local_98);
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148422f9c FUN_148422f9c body=800 status=ok
// SIG undefined FUN_148422f9c(void)

bool FUN_148422f9c(longlong param_1,double *param_2,double *param_3,char param_4,double *param_5,
                  double *param_6)

{
  int iVar1;
  double dVar2;
  bool bVar3;
  bool bVar4;
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
  
  iVar1 = *(int *)(param_1 + 0x9c);
  bVar3 = true;
  if ((iVar1 != 0) && (1 < *(int *)(param_1 + 0xc4) - 1U)) {
    if (param_4 == '\0') {
      dVar6 = *param_3;
      dVar7 = param_3[1];
      dVar5 = param_3[2];
    }
    else {
      dVar8 = *param_6 * param_5[8];
      dVar10 = param_6[1] * param_5[9];
      dVar5 = param_6[2] * param_5[10];
      dVar7 = *param_5;
      dVar14 = param_5[1];
      dVar2 = param_5[2];
      dVar6 = param_5[3];
      dVar11 = dVar10 * dVar7 - dVar8 * dVar14;
      dVar12 = dVar5 * dVar14 - dVar10 * dVar2;
      dVar13 = dVar8 * dVar2 - dVar7 * dVar5;
      dVar12 = dVar12 + dVar12;
      dVar13 = dVar13 + dVar13;
      dVar11 = dVar11 + dVar11;
      dVar5 = (dVar11 * dVar6 + dVar5 + (dVar13 * dVar7 - dVar12 * dVar14) + param_5[6]) -
              param_2[2];
      dVar7 = ((dVar2 * dVar12 - dVar7 * dVar11) + param_5[3] * dVar13 + dVar10 + param_5[5]) -
              param_2[1];
      dVar6 = ((dVar11 * dVar14 - dVar13 * dVar2) + dVar6 * dVar12 + dVar8 + param_5[4]) - *param_2;
    }
    dVar13 = dVar5 * dVar5 + dVar6 * dVar6 + dVar7 * dVar7;
    if (9.99999993922529e-09 < dVar13) {
      dVar13 = 1.0 / SQRT(dVar13);
      dVar6 = dVar6 * dVar13;
      dVar7 = dVar7 * dVar13;
      dVar5 = dVar5 * dVar13;
    }
    dVar14 = *(double *)(param_1 + 0xa0);
    dVar2 = *(double *)(param_1 + 0xa8);
    dVar11 = *param_5;
    dVar8 = param_5[1];
    dVar10 = param_5[2];
    dVar13 = param_5[3];
    dVar12 = dVar2 * dVar11 - dVar14 * dVar8;
    dVar15 = *(double *)(param_1 + 0xb0) * dVar8 - dVar2 * dVar10;
    dVar16 = dVar14 * dVar10 - dVar11 * *(double *)(param_1 + 0xb0);
    dVar15 = dVar15 + dVar15;
    dVar16 = dVar16 + dVar16;
    dVar12 = dVar12 + dVar12;
    dVar9 = dVar12 * dVar13 + *(double *)(param_1 + 0xb0) + (dVar16 * dVar11 - dVar15 * dVar8);
    dVar13 = (dVar12 * dVar8 - dVar16 * dVar10) + dVar13 * dVar15 + dVar14;
    dVar14 = (dVar10 * dVar15 - dVar11 * dVar12) + param_5[3] * dVar16 + dVar2;
    if (iVar1 == 2) {
      dVar6 = ABS(dVar9 * dVar5 + dVar6 * dVar13 + dVar7 * dVar14);
      bVar3 = dVar6 == 0.052000001072883606;
      bVar4 = dVar6 < 0.052000001072883606;
    }
    else {
      if (iVar1 != 1) {
        return true;
      }
      dVar6 = ABS(dVar9 * dVar5 + dVar6 * dVar13 + dVar7 * dVar14);
      bVar3 = dVar6 == 0.9980000257492065;
      bVar4 = 0.9980000257492065 < dVar6;
    }
    bVar3 = !bVar4 && !bVar3;
  }
  return bVar3;
}



// FUNCTION 1484232bc FUN_1484232bc body=537 status=ok
// SIG undefined FUN_1484232bc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_1484232bc(double *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                      undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar8;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar9 [16];
  undefined1 auStack_1f8 [32];
  undefined1 local_1d8 [128];
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  local_88 = param_4[2];
  local_90 = param_3[2];
  local_98 = param_2[2];
  local_c8 = *param_4;
  local_a8 = param_4[1];
  local_d0 = *param_3;
  local_b0 = param_3[1];
  local_d8 = *param_2;
  local_b8 = param_2[1];
  local_c0 = 0;
  local_a0 = 0;
  local_80 = 0;
  local_78 = DAT_14c8464e0;
  local_70 = DAT_14c8464e8;
  local_68 = DAT_14c8464f0;
  local_60 = 0x3ff0000000000000;
  local_108 = param_7[2];
  local_118 = *param_7;
  uStack_110 = param_7[1];
  local_130 = param_6[1];
  uStack_128 = param_6[2];
  local_138 = *param_6;
  local_150 = param_5[1];
  uStack_148 = param_5[2];
  local_158 = *param_5;
  local_140 = 0;
  local_120 = 0;
  local_100 = 0;
  local_f8 = DAT_14c8464e0;
  local_f0 = DAT_14c8464e8;
  local_e8 = DAT_14c8464f0;
  local_e0 = 0x3ff0000000000000;
  FUN_1447fea8d(local_1d8);
  FUN_141706d54(local_1d8,param_1);
  dVar1 = *param_1;
  dVar2 = param_1[1];
  dVar3 = param_1[2];
  dVar4 = param_1[3];
  dVar5 = dVar3 * dVar3 + dVar1 * dVar1;
  dVar8 = dVar4 * dVar4 + dVar2 * dVar2;
  auVar6._0_8_ = dVar5 + dVar8;
  auVar6._8_8_ = dVar5 + dVar8;
  auVar7 = sqrtpd(auVar6,auVar6);
  auVar7 = divpd(_DAT_149934d80,auVar7);
  auVar9._0_8_ = auVar7._0_8_ * dVar3;
  auVar9._8_8_ = auVar7._8_8_ * dVar4;
  *param_1 = (double)((ulonglong)(dVar1 * auVar7._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar6._0_8_));
  param_1[1] = (double)((ulonglong)(dVar2 * auVar7._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar6._8_8_));
  auVar7._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar6._8_8_);
  auVar7._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar6._0_8_);
  auVar7 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar9,auVar7);
  *(undefined1 (*) [16])(param_1 + 2) = auVar7;
  if ((local_50 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148423514 FUN_148423514 body=141 status=ok
// SIG undefined FUN_148423514(void)

undefined8
FUN_148423514(longlong *param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x2b8))();
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(*param_1 + 0x510))(param_1,param_3);
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(*param_1 + 0x518))
                        (param_1,*(double *)(param_2 + 0x8a8) <= 1.0 &&
                                 *(double *)(param_2 + 0x8a8) != 1.0);
      if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000148423591. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(*param_1 + 0x508))(param_1,param_2,param_4,param_5);
        return uVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 1484235a2 FUN_1484235a2 body=154 status=ok
// SIG undefined FUN_1484235a2(void)

undefined8 FUN_1484235a2(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  cVar1 = (**(code **)(*param_1 + 0x2c8))();
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(*param_1 + 0x510))(param_1,0);
    if (cVar1 == '\0') {
      return 0;
    }
    uVar2 = (**(code **)(*(longlong *)(param_2 + 0x28) + 0x38))(param_2 + 0x28);
    cVar1 = (**(code **)(*param_1 + 0x518))(param_1,uVar2);
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(*param_1 + 0x2b8))(param_1);
      if (cVar1 == '\0') {
        return 1;
      }
                    /* WARNING: Could not recover jumptable at 0x00014842362a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*param_1 + 0x500))(param_1,param_2,param_3,param_4);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 14842363c FUN_14842363c body=75 status=ok
// SIG undefined FUN_14842363c(void)

void FUN_14842363c(longlong *param_1)

{
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 local_29;
  undefined1 local_28 [32];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = local_28;
  local_48 = &local_29;
  (**(code **)(*param_1 + 0x538))();
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148423688 FUN_148423688 body=1870 status=ok
// SIG undefined FUN_148423688(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_148423688(longlong *param_1,longlong *param_2,double *param_3,double *param_4,
             undefined1 *param_5,double *param_6)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar18;
  undefined1 auVar17 [16];
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  undefined1 auVar29 [16];
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  undefined1 auStack_2b8 [32];
  double *local_298;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  undefined8 uStack_250;
  double local_248;
  double dStack_240;
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
  undefined1 local_1c8 [16];
  double local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  double dStack_1a0;
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
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  uVar11 = (**(code **)(*param_2 + 0x10))(param_2);
  dVar16 = DAT_14c8463d8;
  *param_6 = DAT_14c8463d0;
  param_6[1] = dVar16;
  dVar16 = DAT_14c8463e8;
  param_6[2] = DAT_14c8463e0;
  param_6[3] = dVar16;
  *param_5 = 0;
  if (*(int *)(param_4 + 0xd) == 0) {
    *(int *)(param_4 + 0xd) = (int)param_1[0x13];
  }
  FUN_148423dd8((longlong)param_4 + 0x6c,(longlong)param_1 + 0x34);
  local_298 = param_3;
  uVar8 = (**(code **)(*param_1 + 0x4e8))(param_1,uVar11,*(undefined4 *)(param_4 + 0xd),param_4);
  if ((char)uVar8 != '\0') {
    local_298 = param_6;
    uVar9 = (**(code **)(*param_1 + 0x530))(param_1,uVar11,param_4,param_3);
    *param_5 = (char)uVar9;
    auVar26 = _DAT_149934d80;
    dVar19 = *param_6;
    dVar6 = param_6[1];
    dVar21 = param_6[2];
    dVar15 = param_6[3];
    auVar2 = *(undefined1 (*) [16])(param_4 + 8);
    dVar16 = auVar2._0_8_;
    dVar18 = auVar2._8_8_;
    auVar3 = *(undefined1 (*) [16])(param_4 + 10);
    dVar4 = auVar3._0_8_;
    auVar23 = minpd(_DAT_149934d80,auVar2);
    auVar29 = minpd(ZEXT816(0x3ff0000000000000),auVar3);
    auVar24._8_8_ = -(ulonglong)(auVar23._8_8_ < 0.0);
    auVar24._0_8_ = -(ulonglong)(auVar23._0_8_ < 0.0);
    iVar10 = movmskpd(uVar9,auVar24);
    auVar23._8_8_ = -(ulonglong)(auVar29._8_8_ < 0.0);
    auVar23._0_8_ = -(ulonglong)(auVar29._0_8_ < 0.0);
    uVar12 = movmskpd((int)param_1,auVar23);
    if ((uVar12 & 0x3fffffff) == 0 && iVar10 == 0) {
      dVar32 = *param_4;
      dVar33 = param_4[1];
      dVar28 = param_4[3];
      dVar5 = param_4[3];
      dVar20 = param_4[1];
      dVar31 = param_4[1];
      dVar34 = param_4[2];
      dVar7 = param_4[3];
      dVar1 = param_4[2];
      dVar30 = param_4[2];
      dVar22 = dVar6 * dVar1 * -1.0 + dVar21 * dVar20 + dVar15 * *param_4 * 1.0 + dVar19 * dVar28;
      dVar25 = dVar19 * dVar30 * 1.0 + dVar15 * dVar31 + dVar21 * *param_4 * -1.0 + dVar6 * dVar5;
      auVar26._0_8_ =
           dVar15 * dVar1 * 1.0 + ((*param_4 * dVar6 * 1.0 + dVar21 * dVar28) - dVar19 * dVar20);
      auVar26._8_8_ =
           dVar21 * dVar30 * -1.0 + ((*param_4 * dVar19 * -1.0 + dVar15 * dVar5) - dVar6 * dVar31);
      dVar16 = *param_3 * dVar16;
      dVar18 = param_3[1] * dVar18;
      dVar15 = param_3[2] * dVar4;
      dVar31 = auVar3._8_8_ * 0.0;
      dVar19 = dVar18 * dVar32 - dVar16 * dVar33;
      dVar20 = dVar15 * dVar33 - dVar18 * dVar34;
      dVar21 = dVar16 * dVar34 - dVar15 * dVar32;
      dVar6 = dVar31 * dVar7 - dVar31 * dVar7;
      dVar20 = dVar20 + dVar20;
      dVar21 = dVar21 + dVar21;
      dVar19 = dVar19 + dVar19;
      dVar6 = dVar6 + dVar6;
      local_108 = (dVar19 * dVar33 - dVar34 * dVar21) + dVar28 * dVar20 + dVar16 + param_4[4];
      dStack_100 = (dVar20 * dVar34 - dVar19 * dVar32) + dVar5 * dVar21 + dVar18 + param_4[5];
      local_f8 = (dVar21 * dVar32 - dVar33 * dVar20) + dVar28 * dVar19 + dVar15 + param_4[6];
      dVar16 = (dVar6 * dVar7 - dVar6 * dVar7) + dVar5 * dVar6 + dVar31 + param_4[7];
    }
    else {
      dVar20 = *param_4;
      dVar1 = param_4[1];
      dVar28 = param_4[2];
      dVar30 = dVar1 + dVar1;
      dVar32 = dVar28 + dVar28;
      dVar31 = dVar20 * (dVar20 + dVar20);
      local_1e8 = ((double)DAT_149934d80 - (dVar28 * dVar32 + dVar1 * dVar30)) * dVar16;
      dVar5 = (DAT_149934d80._8_8_ - (dVar28 * dVar32 + dVar31)) * dVar18;
      dVar28 = param_4[3];
      dVar33 = dVar32 * dVar28;
      dVar34 = (dVar20 + dVar20) * param_4[3];
      dVar28 = dVar30 * dVar28;
      dStack_1a0 = (dVar32 * dVar1 - dVar34) * dVar4;
      local_1a8 = (dVar28 + *param_4 * dVar32) * dVar4;
      dStack_1e0 = (dVar30 * dVar20 + dVar33) * dVar16;
      local_1b8 = (dVar32 * dVar1 + dVar34) * dVar18;
      local_198 = (1.0 - (dVar31 + dVar1 * dVar30)) * dVar4;
      local_1d8 = (*param_4 * dVar32 - dVar28) * dVar16;
      uStack_1d0 = 0;
      local_1c8._8_4_ = SUB84(dVar5,0);
      local_1c8._0_8_ = (dVar30 * dVar20 - dVar33) * dVar18;
      local_1c8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      uStack_1b0 = 0;
      uStack_190 = 0;
      local_188 = param_4[4];
      dStack_180 = param_4[5];
      local_178 = param_4[6];
      uStack_170 = 0x3ff0000000000000;
      dVar31 = dVar6 + dVar6;
      dVar5 = dVar21 + dVar21;
      dVar28 = dVar19 * (dVar19 + dVar19);
      local_268 = (double)DAT_149934d80 - (dVar21 * dVar5 + dVar6 * dVar31);
      dStack_240 = DAT_149934d80._8_8_ - (dVar21 * dVar5 + dVar28);
      local_218 = 1.0 - (dVar28 + dVar6 * dVar31);
      dVar21 = (dVar19 + dVar19) * dVar15;
      dStack_260 = dVar31 * dVar19 + dVar5 * dVar15;
      local_238 = dVar5 * dVar6 + dVar21;
      local_248 = dVar31 * dVar19 - dVar5 * dVar15;
      dVar21 = dVar5 * dVar6 - dVar21;
      local_258 = dVar19 * dVar5 - dVar31 * dVar15;
      uStack_250 = 0;
      uStack_230 = 0;
      local_228._8_4_ = SUB84(dVar21,0);
      local_228._0_8_ = dVar31 * dVar15 + dVar19 * dVar5;
      local_228._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
      uStack_210 = 0;
      uStack_1f0 = 0x3ff0000000000000;
      local_208 = *param_3;
      dStack_200 = param_3[1];
      local_1f8 = param_3[2];
      FUN_1447fea8d(&local_168);
      FUN_144a1c686(&local_168,0x3e45798ee0000000);
      auVar29._8_8_ = -(ulonglong)(0.0 <= dVar18);
      auVar29._0_8_ = -(ulonglong)(0.0 <= dVar16);
      auVar23 = blendvpd(_DAT_149936790,auVar26,auVar29);
      uVar13 = -(ulonglong)(0.0 <= dVar4 * 1.0);
      dVar16 = (double)(~uVar13 & 0xbff0000000000000 | uVar13 & 0x3ff0000000000000);
      dVar18 = auVar23._0_8_;
      local_158 = local_158 * dVar18;
      local_160 = local_160 * dVar18;
      local_168 = local_168 * dVar18;
      dVar18 = auVar23._8_8_;
      local_138 = local_138 * dVar18;
      local_140 = local_140 * dVar18;
      local_148 = dVar18 * local_148;
      local_118 = local_118 * dVar16;
      local_120 = local_120 * dVar16;
      local_128 = dVar16 * local_128;
      FUN_14481fd10(&local_288,&local_168);
      dVar16 = local_278 * local_278 + local_288 * local_288;
      dVar18 = dStack_270 * dStack_270 + dStack_280 * dStack_280;
      auVar17._0_8_ = dVar16 + dVar18;
      auVar17._8_8_ = dVar16 + dVar18;
      auVar14._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar17._8_8_);
      auVar14._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar17._0_8_);
      auVar23 = sqrtpd(auVar17,auVar17);
      auVar26 = divpd(auVar26,auVar23);
      auVar27._0_8_ = auVar26._0_8_ * local_278;
      auVar27._8_8_ = auVar26._8_8_ * dStack_270;
      dVar22 = (double)((ulonglong)(local_288 * auVar26._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar17._0_8_));
      dVar25 = (double)((ulonglong)(dStack_280 * auVar26._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar17._8_8_));
      auVar26 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar27,auVar14);
      dVar16 = 0.0;
    }
    *param_4 = dVar22;
    param_4[1] = dVar25;
    *(undefined1 (*) [16])(param_4 + 2) = auVar26;
    param_4[4] = local_108;
    param_4[5] = dStack_100;
    param_4[6] = local_f8;
    param_4[7] = dVar16;
    *(undefined1 (*) [16])(param_4 + 8) = auVar2;
    param_4[10] = dVar4 * 1.0;
    param_4[0xb] = auVar3._8_8_ * 0.0;
  }
  if ((local_e0 ^ (ulonglong)auStack_2b8) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148423dd8 FUN_148423dd8 body=176 status=ok
// SIG undefined FUN_148423dd8(void)

void FUN_148423dd8(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_14842d020();
  FUN_14842d020(param_1 + 0xc,param_2 + 0xc);
  FUN_14842d020(param_1 + 0x18,param_2 + 0x18);
  if ((*(char *)(param_2 + 0x34) == '\x01') &&
     ((*(char *)(param_1 + 0x35) != '\x01' || (*(char *)(param_1 + 0x34) == '\0')))) {
    uVar1 = *(undefined8 *)(param_2 + 0x2c);
    *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
    *(undefined8 *)(param_1 + 0x2c) = uVar1;
    *(undefined1 *)(param_1 + 0x34) = 1;
    *(undefined1 *)(param_1 + 0x35) = *(undefined1 *)(param_2 + 0x35);
  }
  if ((*(char *)(param_2 + 0x48) == '\x01') &&
     ((*(char *)(param_1 + 0x49) != '\x01' || (*(char *)(param_1 + 0x48) == '\0')))) {
    uVar1 = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x40) = uVar1;
    *(undefined1 *)(param_1 + 0x48) = 1;
    *(undefined1 *)(param_1 + 0x49) = *(undefined1 *)(param_2 + 0x49);
  }
  if ((*(char *)(param_2 + 0x5c) == '\x01') &&
     ((*(char *)(param_1 + 0x5d) != '\x01' || (*(char *)(param_1 + 0x5c) == '\0')))) {
    uVar1 = *(undefined8 *)(param_2 + 0x54);
    *(undefined8 *)(param_1 + 0x4c) = *(undefined8 *)(param_2 + 0x4c);
    *(undefined8 *)(param_1 + 0x54) = uVar1;
    *(undefined1 *)(param_1 + 0x5c) = 1;
    *(undefined1 *)(param_1 + 0x5d) = *(undefined1 *)(param_2 + 0x5d);
  }
  return;
}



// FUNCTION 148423e88 FUN_148423e88 body=75 status=ok
// SIG undefined FUN_148423e88(void)

void FUN_148423e88(longlong *param_1)

{
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 local_29;
  undefined1 local_28 [32];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = local_28;
  local_48 = &local_29;
  (**(code **)(*param_1 + 0x548))();
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148423ed4 FUN_148423ed4 body=1820 status=ok
// SIG undefined FUN_148423ed4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_148423ed4(longlong *param_1,undefined8 param_2,double *param_3,double *param_4,
             undefined1 *param_5,double *param_6)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar17;
  undefined1 auVar16 [16];
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  undefined1 auVar28 [16];
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined1 auStack_2b8 [32];
  double *local_298;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  undefined8 uStack_250;
  double local_248;
  double dStack_240;
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
  undefined1 local_1c8 [16];
  double local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  double dStack_1a0;
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
  
  dVar15 = DAT_14c8463e8;
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  param_6[2] = DAT_14c8463e0;
  param_6[3] = dVar15;
  dVar4 = DAT_14c8463d8;
  dVar15 = DAT_14c8463d0;
  *param_6 = DAT_14c8463d0;
  param_6[1] = dVar4;
  *param_5 = 0;
  uVar8 = (**(code **)(*param_1 + 0x4f0))(dVar15,param_2,param_4,param_3);
  if ((char)uVar8 != '\0') {
    local_298 = param_6;
    uVar9 = (**(code **)(*param_1 + 0x528))(param_1,param_2,param_4,param_3);
    *param_5 = (char)uVar9;
    auVar25 = _DAT_149934d80;
    dVar18 = *param_6;
    dVar6 = param_6[1];
    dVar20 = param_6[2];
    dVar14 = param_6[3];
    auVar2 = *(undefined1 (*) [16])(param_4 + 8);
    dVar15 = auVar2._0_8_;
    dVar17 = auVar2._8_8_;
    auVar3 = *(undefined1 (*) [16])(param_4 + 10);
    dVar4 = auVar3._0_8_;
    auVar22 = minpd(_DAT_149934d80,auVar2);
    auVar28 = minpd(ZEXT816(0x3ff0000000000000),auVar3);
    auVar23._8_8_ = -(ulonglong)(auVar22._8_8_ < 0.0);
    auVar23._0_8_ = -(ulonglong)(auVar22._0_8_ < 0.0);
    iVar10 = movmskpd(uVar9,auVar23);
    auVar22._8_8_ = -(ulonglong)(auVar28._8_8_ < 0.0);
    auVar22._0_8_ = -(ulonglong)(auVar28._0_8_ < 0.0);
    uVar11 = movmskpd((int)param_1,auVar22);
    if ((uVar11 & 0x3fffffff) == 0 && iVar10 == 0) {
      dVar31 = *param_4;
      dVar32 = param_4[1];
      dVar27 = param_4[3];
      dVar5 = param_4[3];
      dVar19 = param_4[1];
      dVar30 = param_4[1];
      dVar33 = param_4[2];
      dVar7 = param_4[3];
      dVar1 = param_4[2];
      dVar29 = param_4[2];
      dVar21 = dVar6 * dVar1 * -1.0 + dVar20 * dVar19 + dVar14 * *param_4 * 1.0 + dVar18 * dVar27;
      dVar24 = dVar18 * dVar29 * 1.0 + dVar14 * dVar30 + dVar20 * *param_4 * -1.0 + dVar6 * dVar5;
      auVar25._0_8_ =
           dVar14 * dVar1 * 1.0 + ((*param_4 * dVar6 * 1.0 + dVar20 * dVar27) - dVar18 * dVar19);
      auVar25._8_8_ =
           dVar20 * dVar29 * -1.0 + ((*param_4 * dVar18 * -1.0 + dVar14 * dVar5) - dVar6 * dVar30);
      dVar15 = *param_3 * dVar15;
      dVar17 = param_3[1] * dVar17;
      dVar14 = param_3[2] * dVar4;
      dVar30 = auVar3._8_8_ * 0.0;
      dVar18 = dVar17 * dVar31 - dVar15 * dVar32;
      dVar19 = dVar14 * dVar32 - dVar17 * dVar33;
      dVar20 = dVar15 * dVar33 - dVar14 * dVar31;
      dVar6 = dVar30 * dVar7 - dVar30 * dVar7;
      dVar19 = dVar19 + dVar19;
      dVar20 = dVar20 + dVar20;
      dVar18 = dVar18 + dVar18;
      dVar6 = dVar6 + dVar6;
      local_108 = (dVar18 * dVar32 - dVar33 * dVar20) + dVar27 * dVar19 + dVar15 + param_4[4];
      dStack_100 = (dVar19 * dVar33 - dVar18 * dVar31) + dVar5 * dVar20 + dVar17 + param_4[5];
      local_f8 = (dVar20 * dVar31 - dVar32 * dVar19) + dVar27 * dVar18 + dVar14 + param_4[6];
      dVar15 = (dVar6 * dVar7 - dVar6 * dVar7) + dVar5 * dVar6 + dVar30 + param_4[7];
    }
    else {
      dVar19 = *param_4;
      dVar1 = param_4[1];
      dVar27 = param_4[2];
      dVar29 = dVar1 + dVar1;
      dVar31 = dVar27 + dVar27;
      dVar30 = dVar19 * (dVar19 + dVar19);
      local_1e8 = ((double)DAT_149934d80 - (dVar27 * dVar31 + dVar1 * dVar29)) * dVar15;
      dVar5 = (DAT_149934d80._8_8_ - (dVar27 * dVar31 + dVar30)) * dVar17;
      dVar27 = param_4[3];
      dVar32 = dVar31 * dVar27;
      dVar33 = (dVar19 + dVar19) * param_4[3];
      dVar27 = dVar29 * dVar27;
      dStack_1a0 = (dVar31 * dVar1 - dVar33) * dVar4;
      local_1a8 = (dVar27 + *param_4 * dVar31) * dVar4;
      dStack_1e0 = (dVar29 * dVar19 + dVar32) * dVar15;
      local_1b8 = (dVar31 * dVar1 + dVar33) * dVar17;
      local_198 = (1.0 - (dVar30 + dVar1 * dVar29)) * dVar4;
      local_1d8 = (*param_4 * dVar31 - dVar27) * dVar15;
      uStack_1d0 = 0;
      local_1c8._8_4_ = SUB84(dVar5,0);
      local_1c8._0_8_ = (dVar29 * dVar19 - dVar32) * dVar17;
      local_1c8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      uStack_1b0 = 0;
      uStack_190 = 0;
      local_188 = param_4[4];
      dStack_180 = param_4[5];
      local_178 = param_4[6];
      uStack_170 = 0x3ff0000000000000;
      dVar30 = dVar6 + dVar6;
      dVar5 = dVar20 + dVar20;
      dVar27 = dVar18 * (dVar18 + dVar18);
      local_268 = (double)DAT_149934d80 - (dVar20 * dVar5 + dVar6 * dVar30);
      dStack_240 = DAT_149934d80._8_8_ - (dVar20 * dVar5 + dVar27);
      local_218 = 1.0 - (dVar27 + dVar6 * dVar30);
      dVar20 = (dVar18 + dVar18) * dVar14;
      dStack_260 = dVar30 * dVar18 + dVar5 * dVar14;
      local_238 = dVar5 * dVar6 + dVar20;
      local_248 = dVar30 * dVar18 - dVar5 * dVar14;
      dVar20 = dVar5 * dVar6 - dVar20;
      local_258 = dVar18 * dVar5 - dVar30 * dVar14;
      uStack_250 = 0;
      uStack_230 = 0;
      local_228._8_4_ = SUB84(dVar20,0);
      local_228._0_8_ = dVar30 * dVar14 + dVar18 * dVar5;
      local_228._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
      uStack_210 = 0;
      uStack_1f0 = 0x3ff0000000000000;
      local_208 = *param_3;
      dStack_200 = param_3[1];
      local_1f8 = param_3[2];
      FUN_1447fea8d(&local_168);
      FUN_144a1c686(&local_168,0x3e45798ee0000000);
      auVar28._8_8_ = -(ulonglong)(0.0 <= dVar17);
      auVar28._0_8_ = -(ulonglong)(0.0 <= dVar15);
      auVar22 = blendvpd(_DAT_149936790,auVar25,auVar28);
      uVar12 = -(ulonglong)(0.0 <= dVar4 * 1.0);
      dVar15 = (double)(~uVar12 & 0xbff0000000000000 | uVar12 & 0x3ff0000000000000);
      dVar17 = auVar22._0_8_;
      local_158 = local_158 * dVar17;
      local_160 = local_160 * dVar17;
      local_168 = local_168 * dVar17;
      dVar17 = auVar22._8_8_;
      local_138 = local_138 * dVar17;
      local_140 = local_140 * dVar17;
      local_148 = dVar17 * local_148;
      local_118 = local_118 * dVar15;
      local_120 = local_120 * dVar15;
      local_128 = dVar15 * local_128;
      FUN_14481fd10(&local_288,&local_168);
      dVar15 = local_278 * local_278 + local_288 * local_288;
      dVar17 = dStack_270 * dStack_270 + dStack_280 * dStack_280;
      auVar16._0_8_ = dVar15 + dVar17;
      auVar16._8_8_ = dVar15 + dVar17;
      auVar13._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar16._8_8_);
      auVar13._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar16._0_8_);
      auVar22 = sqrtpd(auVar16,auVar16);
      auVar25 = divpd(auVar25,auVar22);
      auVar26._0_8_ = auVar25._0_8_ * local_278;
      auVar26._8_8_ = auVar25._8_8_ * dStack_270;
      dVar21 = (double)((ulonglong)(local_288 * auVar25._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar16._0_8_));
      dVar24 = (double)((ulonglong)(dStack_280 * auVar25._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar16._8_8_));
      auVar25 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar26,auVar13);
      dVar15 = 0.0;
    }
    *param_4 = dVar21;
    param_4[1] = dVar24;
    *(undefined1 (*) [16])(param_4 + 2) = auVar25;
    param_4[4] = local_108;
    param_4[5] = dStack_100;
    param_4[6] = local_f8;
    param_4[7] = dVar15;
    *(undefined1 (*) [16])(param_4 + 8) = auVar2;
    param_4[10] = dVar4 * 1.0;
    param_4[0xb] = auVar3._8_8_ * 0.0;
  }
  if ((local_e0 ^ (ulonglong)auStack_2b8) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14842468a FUN_14842468a body=38 status=ok
// SIG undefined FUN_14842468a(void)

bool FUN_14842468a(longlong *param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = param_1[6];
  if ((int)lVar1 == param_3) {
    (**(code **)(*param_1 + 0x2c0))();
  }
  return (int)lVar1 == param_3;
}



// FUNCTION 1484246b0 FUN_1484246b0 body=43 status=ok
// SIG undefined FUN_1484246b0(void)

undefined1 * FUN_1484246b0(longlong *param_1,undefined1 *param_2,int param_3)

{
  undefined1 uVar1;
  bool bVar2;
  
  bVar2 = (int)param_1[6] == param_3;
  if (bVar2) {
    uVar1 = (**(code **)(*param_1 + 0x2c8))();
    *param_2 = uVar1;
  }
  param_2[1] = bVar2;
  return param_2;
}



// FUNCTION 1484246dc FUN_1484246dc body=38 status=ok
// SIG undefined FUN_1484246dc(void)

bool FUN_1484246dc(longlong *param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = param_1[6];
  if ((int)lVar1 == param_3) {
    (**(code **)(*param_1 + 0x2b0))();
  }
  return (int)lVar1 == param_3;
}



// FUNCTION 148424702 FUN_148424702 body=43 status=ok
// SIG undefined FUN_148424702(void)

undefined1 * FUN_148424702(longlong *param_1,undefined1 *param_2,int param_3)

{
  undefined1 uVar1;
  bool bVar2;
  
  bVar2 = (int)param_1[6] == param_3;
  if (bVar2) {
    uVar1 = (**(code **)(*param_1 + 0x2b8))();
    *param_2 = uVar1;
  }
  param_2[1] = bVar2;
  return param_2;
}



// FUNCTION 148424744 FUN_148424744 body=43 status=ok
// SIG undefined FUN_148424744(void)

undefined4 * FUN_148424744(longlong *param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  bool bVar2;
  
  bVar2 = (int)param_1[6] == param_3;
  if (bVar2) {
    uVar1 = (**(code **)(*param_1 + 0x358))();
    *param_2 = uVar1;
  }
  *(bool *)(param_2 + 1) = bVar2;
  return param_2;
}



// FUNCTION 148424780 FUN_148424780 body=93 status=ok
// SIG undefined FUN_148424780(void)

void FUN_148424780(longlong param_1,float param_2)

{
  float fVar1;
  
  *(float *)(param_1 + 0xb8) = param_2;
  fVar1 = cosf(param_2);
  *(float *)(param_1 + 0xbc) = ABS(fVar1);
  fVar1 = cosf(*(float *)(param_1 + 0xb8) + 1.5707964);
  *(float *)(param_1 + 0xc0) = ABS(fVar1);
  return;
}



// FUNCTION 1484249ea FUN_1484249ea body=46 status=ok
// SIG undefined FUN_1484249ea(void)

void FUN_1484249ea(longlong param_1,float param_2)

{
  float fVar1;
  
  *(float *)(param_1 + 0xf8) = param_2;
  fVar1 = cosf(param_2);
  *(float *)(param_1 + 0xfc) = ABS(fVar1);
  return;
}



// FUNCTION 148424a40 FUN_148424a40 body=45 status=ok
// SIG undefined FUN_148424a40(void)

undefined8 FUN_148424a40(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_144729dda(param_1 + 0x34);
  if (cVar1 != '\0') {
    uVar2 = FUN_14479d2ce(param_1 + 0x34);
    return uVar2;
  }
  return 0;
}



// FUNCTION 148424a8a FUN_148424a8a body=45 status=ok
// SIG undefined FUN_148424a8a(void)

undefined8 FUN_148424a8a(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_144729dda(param_1 + 0x40);
  if (cVar1 != '\0') {
    uVar2 = FUN_14479d2ce(param_1 + 0x40);
    return uVar2;
  }
  return 0;
}



// FUNCTION 148424ad4 FUN_148424ad4 body=45 status=ok
// SIG undefined FUN_148424ad4(void)

undefined8 FUN_148424ad4(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_144729dda(param_1 + 0x4c);
  if (cVar1 != '\0') {
    uVar2 = FUN_14479d2ce(param_1 + 0x4c);
    return uVar2;
  }
  return 0;
}



// FUNCTION 148424c08 FUN_148424c08 body=2250 status=ok
// SIG undefined FUN_148424c08(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148424c08(longlong *param_1,longlong *param_2,void *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint uVar12;
  double *pdVar13;
  ulonglong uVar14;
  undefined1 auVar15 [16];
  double dVar16;
  undefined1 auVar17 [16];
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined1 auStack_3d8 [32];
  undefined1 local_3b8;
  double local_3a8;
  double dStack_3a0;
  double local_398;
  double dStack_390;
  double local_388;
  double dStack_380;
  double local_378;
  double dStack_370;
  double local_368;
  double dStack_360;
  double local_358;
  double dStack_350;
  double local_348;
  double dStack_340;
  double local_338;
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  undefined4 local_300;
  undefined1 local_2fc [164];
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
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
  undefined8 uStack_140;
  undefined1 local_138 [16];
  double local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_3d8;
  memcpy(&local_368,param_3,0x110);
  cVar6 = (**(code **)(*param_1 + 0x540))(param_1,param_2,param_1 + 0x21,&local_368);
  if (cVar6 != '\0') {
    plVar9 = (longlong *)FUN_14842d074(local_2fc,local_300);
    if (plVar9 != (longlong *)0x0) {
      pdVar13 = &local_158;
      FUN_147b4d2d0(pdVar13,param_1 + 0x2a,param_1 + 0x27);
      uVar7 = FUN_141706d54(pdVar13,&local_3a8);
      auVar21 = _DAT_149934d80;
      dVar1 = local_328._0_8_;
      dVar3 = local_328._8_8_;
      dVar2 = local_318._0_8_;
      dVar4 = (double)DAT_149934d80;
      dVar18 = DAT_149934d80._8_8_;
      auVar19 = minpd(_DAT_149934d80,local_328);
      auVar23 = minpd(ZEXT816(0x3ff0000000000000),local_318);
      auVar20._8_8_ = -(ulonglong)(auVar19._8_8_ < 0.0);
      auVar20._0_8_ = -(ulonglong)(auVar19._0_8_ < 0.0);
      iVar8 = movmskpd(uVar7,auVar20);
      auVar19._8_8_ = -(ulonglong)(auVar23._8_8_ < 0.0);
      auVar19._0_8_ = -(ulonglong)(auVar23._0_8_ < 0.0);
      uVar12 = movmskpd((int)pdVar13,auVar19);
      if ((uVar12 & 0x3fffffff) == 0 && iVar8 == 0) {
        dVar24 = dStack_3a0 * local_358 * -1.0 +
                 local_398 * dStack_360 + dStack_390 * local_368 * 1.0 + local_3a8 * dStack_350;
        dVar25 = local_3a8 * local_358 * 1.0 +
                 dStack_390 * dStack_360 + local_398 * local_368 * -1.0 + dStack_3a0 * dStack_350;
        auVar21._0_8_ =
             dStack_390 * local_358 * 1.0 +
             ((local_368 * dStack_3a0 * 1.0 + local_398 * dStack_350) - local_3a8 * dStack_360);
        auVar21._8_8_ =
             local_398 * local_358 * -1.0 +
             ((local_368 * local_3a8 * -1.0 + dStack_390 * dStack_350) - dStack_3a0 * dStack_360);
        dVar26 = dVar1 * 0.0;
        dVar28 = dVar3 * 0.0;
        dVar16 = dVar2 * 0.0;
        dVar29 = dVar28 * local_368 - dVar26 * dStack_360;
        dVar5 = dVar16 * dStack_360 - dVar28 * local_358;
        dVar27 = dVar26 * local_358 - dVar16 * local_368;
        dVar5 = dVar5 + dVar5;
        dVar27 = dVar27 + dVar27;
        dVar29 = dVar29 + dVar29;
        local_f8._0_8_ =
             (dVar29 * dStack_360 - local_358 * dVar27) + dStack_350 * dVar5 + dVar26 + local_348;
        local_f8._8_8_ =
             (dVar5 * local_358 - dVar29 * local_368) + dStack_350 * dVar27 + dVar28 + dStack_340;
        local_e8._0_8_ =
             (dVar27 * local_368 - dStack_360 * dVar5) + dStack_350 * dVar29 + dVar16 + local_338;
      }
      else {
        dVar24 = dStack_360 + dStack_360;
        dVar25 = local_358 + local_358;
        dVar27 = local_368 * (local_368 + local_368);
        local_1d8 = (dVar4 - (local_358 * dVar25 + dStack_360 * dVar24)) * dVar1;
        dVar16 = (dVar18 - (local_358 * dVar25 + dVar27)) * dVar3;
        dVar26 = (local_368 + local_368) * dStack_350;
        dStack_190 = (dVar25 * dStack_360 - dVar26) * dVar2;
        local_198 = (dVar24 * dStack_350 + local_368 * dVar25) * dVar2;
        dStack_1d0 = (dVar24 * local_368 + dVar25 * dStack_350) * dVar1;
        local_1a8 = (dVar25 * dStack_360 + dVar26) * dVar3;
        local_1c8 = (local_368 * dVar25 - dVar24 * dStack_350) * dVar1;
        uStack_1c0 = 0;
        local_1b8._8_4_ = SUB84(dVar16,0);
        local_1b8._0_8_ = (dVar24 * local_368 - dVar25 * dStack_350) * dVar3;
        local_1b8._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
        local_188 = (1.0 - (dVar27 + dStack_360 * dVar24)) * dVar2;
        uStack_1a0 = 0;
        uStack_180 = 0;
        local_178 = local_348;
        dStack_170 = dStack_340;
        local_168 = local_338;
        uStack_160 = 0x3ff0000000000000;
        dVar27 = dStack_3a0 + dStack_3a0;
        dVar16 = local_398 + local_398;
        dVar24 = local_3a8 * (local_3a8 + local_3a8);
        local_258 = dVar4 - (local_398 * dVar16 + dStack_3a0 * dVar27);
        dStack_230 = dVar18 - (local_398 * dVar16 + dVar24);
        local_208 = 1.0 - (dVar24 + dStack_3a0 * dVar27);
        dStack_210 = (local_3a8 + local_3a8) * dStack_390;
        dStack_250 = dVar27 * local_3a8 + dVar16 * dStack_390;
        local_228 = dVar16 * dStack_3a0 + dStack_210;
        local_238 = dVar27 * local_3a8 - dVar16 * dStack_390;
        dStack_210 = dVar16 * dStack_3a0 - dStack_210;
        local_218 = dVar27 * dStack_390 + local_3a8 * dVar16;
        local_248 = local_3a8 * dVar16 - dVar27 * dStack_390;
        uStack_240 = 0;
        uStack_220 = 0;
        uStack_200 = 0;
        local_1f8 = 0;
        uStack_1f0 = 0;
        local_1e8 = ZEXT816(0x3ff0000000000000) << 0x40;
        FUN_1447fea8d(&local_158);
        FUN_144a1c686(&local_158,0x3e45798ee0000000);
        auVar23._8_8_ = -(ulonglong)(0.0 <= dVar3);
        auVar23._0_8_ = -(ulonglong)(0.0 <= dVar1);
        auVar19 = blendvpd(_DAT_149936790,auVar21,auVar23);
        uVar14 = -(ulonglong)(0.0 <= dVar2 * 1.0);
        dVar16 = (double)(~uVar14 & 0xbff0000000000000 | uVar14 & 0x3ff0000000000000);
        dVar27 = auVar19._0_8_;
        local_148 = local_148 * dVar27;
        dStack_150 = dStack_150 * dVar27;
        local_158 = local_158 * dVar27;
        dVar27 = auVar19._8_8_;
        local_128 = local_128 * dVar27;
        local_138._8_8_ = (double)local_138._8_8_ * dVar27;
        local_138._0_8_ = dVar27 * (double)local_138._0_8_;
        local_108 = local_108 * dVar16;
        dStack_110 = dStack_110 * dVar16;
        local_118 = dVar16 * local_118;
        FUN_14481fd10(&local_388,&local_158);
        dVar16 = local_378 * local_378 + local_388 * local_388;
        dVar27 = dStack_370 * dStack_370 + dStack_380 * dStack_380;
        auVar17._0_8_ = dVar16 + dVar27;
        auVar17._8_8_ = dVar16 + dVar27;
        auVar15._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar17._8_8_);
        auVar15._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar17._0_8_);
        auVar19 = sqrtpd(auVar17,auVar17);
        auVar21 = divpd(auVar21,auVar19);
        auVar22._0_8_ = auVar21._0_8_ * local_378;
        auVar22._8_8_ = auVar21._8_8_ * dStack_370;
        dVar24 = (double)((ulonglong)(local_388 * auVar21._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar17._0_8_));
        dVar25 = (double)((ulonglong)(dStack_380 * auVar21._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar17._8_8_));
        auVar21 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar22,auVar15);
      }
      dVar2 = dVar2 * 1.0;
      uVar14 = (ulonglong)local_f8._8_8_ >> 0x20;
      local_1c8 = (double)param_1[0x26] * 0.5;
      dStack_1d0 = (double)param_1[0x25] * 0.5;
      local_1d8 = (double)param_1[0x24] * 0.5;
      uVar10 = (**(code **)(*param_2 + 8))(param_2);
      uVar11 = (**(code **)(*plVar9 + 0x2f0))(plVar9);
      dVar16 = dVar25 + dVar25;
      dVar28 = auVar21._0_8_;
      dVar29 = auVar21._8_8_;
      dVar26 = dVar28 + dVar28;
      dVar27 = dVar24 * (dVar24 + dVar24);
      local_158 = (dVar4 - (dVar28 * dVar26 + dVar25 * dVar16)) * dVar1;
      dVar4 = (dVar18 - (dVar28 * dVar26 + dVar27)) * dVar3;
      local_108 = (1.0 - (dVar27 + dVar25 * dVar16)) * dVar2;
      dVar18 = (dVar24 + dVar24) * dVar29;
      dStack_150 = (dVar16 * dVar24 + dVar26 * dVar29) * dVar1;
      local_128 = (dVar26 * dVar25 + dVar18) * dVar3;
      local_118 = (dVar16 * dVar29 + dVar24 * dVar26) * dVar2;
      dStack_110 = (dVar26 * dVar25 - dVar18) * dVar2;
      local_148 = (dVar24 * dVar26 - dVar16 * dVar29) * dVar1;
      uStack_140 = 0;
      local_138._8_4_ = SUB84(dVar4,0);
      local_138._0_8_ = (dVar16 * dVar24 - dVar26 * dVar29) * dVar3;
      local_138._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      uStack_120 = 0;
      uStack_100 = 0;
      local_f8._8_4_ = (int)local_f8._8_8_;
      local_f8._12_4_ = (int)uVar14;
      local_e8._8_4_ = 0;
      local_e8._12_4_ = 0x3ff00000;
      local_3b8 = 1;
      FUN_147cb2f0b(uVar10,&local_158,&local_1d8,uVar11);
    }
  }
  if ((local_d0 ^ (ulonglong)auStack_3d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484254d4 FUN_1484254d4 body=1676 status=ok
// SIG undefined FUN_1484254d4(void)

undefined1 *
FUN_1484254d4(longlong *param_1,undefined1 *param_2,undefined8 param_3,double *param_4,
             undefined8 *param_5,double *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  longlong lVar6;
  double *pdVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_248 [32];
  undefined1 local_228 [16];
  double local_218;
  double dStack_210;
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  double local_1e8;
  double local_1e0;
  double dStack_1d8;
  undefined8 local_1d0;
  double dStack_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  double local_190;
  double dStack_188;
  double local_180;
  double local_170;
  double local_168 [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  double local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_248;
  pdVar7 = local_168;
  for (lVar6 = 0xe; lVar6 != 0; lVar6 = lVar6 + -1) {
    *pdVar7 = *param_4;
    param_4 = param_4 + 1;
    pdVar7 = pdVar7 + 1;
  }
  cVar5 = (**(code **)(*param_1 + 0x550))(param_1,param_3,param_1 + 0x21);
  if (cVar5 != '\0') {
    dVar1 = (double)param_1[0x2a];
    dVar2 = (double)param_1[0x2b];
    dVar10 = dVar2 * local_168[0] - dVar1 * local_168[1];
    dVar11 = (double)param_1[0x2c] * local_168[1] - dVar2 * local_168[2];
    dVar12 = dVar1 * local_168[2] - (double)param_1[0x2c] * local_168[0];
    dVar13 = local_168[3] * 0.0 - local_168[3] * 0.0;
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar10 = dVar10 + dVar10;
    dVar13 = dVar13 + dVar13;
    dVar4 = (double)param_1[0x27];
    dVar3 = (double)param_1[0x28];
    dVar8 = dVar3 * local_168[0] - local_168[1] * dVar4;
    dVar9 = (double)param_1[0x29] * local_168[1] - local_168[2] * dVar3;
    dVar14 = dVar4 * local_168[2] - (double)param_1[0x29] * local_168[0];
    dVar9 = dVar9 + dVar9;
    dVar14 = dVar14 + dVar14;
    dVar8 = dVar8 + dVar8;
    local_1c0 = dVar10 * local_168[3] + (double)param_1[0x2c] +
                (dVar12 * local_168[0] - dVar11 * local_168[1]);
    local_1f8._8_8_ =
         (dVar10 * local_168[1] - dVar12 * local_168[2]) + local_168[3] * dVar11 + dVar1;
    local_218 = (local_168[2] * dVar11 - local_168[0] * dVar10) + local_168[3] * dVar12 + dVar2;
    local_1b8 = dVar8 * local_168[3] + (double)param_1[0x29] +
                (dVar14 * local_168[0] - dVar9 * local_168[1]);
    local_1e8 = (dVar8 * local_168[1] - dVar14 * local_168[2]) + local_168[3] * dVar9 + dVar4;
    local_1d0 = (local_168[2] * dVar9 - local_168[0] * dVar8) + local_168[3] * dVar14 + dVar3;
    dStack_1c8 = (double)local_1f8._8_8_ * local_1d0 - local_1e8 * local_218;
    local_1e0 = local_1c0 * local_1e8 - local_1b8 * (double)local_1f8._8_8_;
    local_228._8_4_ = SUB84(dVar13,0);
    local_228._0_8_ = local_1e0;
    local_228._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
    local_208._8_4_ = SUB84(local_1d0,0);
    local_208._0_8_ = local_1d0;
    local_208._12_4_ = (int)((ulonglong)local_1d0 >> 0x20);
    dVar3 = DAT_14c8464f0 * local_118;
    dVar11 = DAT_14c8464e0 * local_128;
    dStack_120 = DAT_14c8464e8 * dStack_120;
    dVar4 = dStack_120 * local_168[0] - local_168[1] * dVar11;
    dVar9 = dVar3 * local_168[1] - local_168[2] * dStack_120;
    dVar8 = dVar11 * local_168[2] - local_168[0] * dVar3;
    dVar9 = dVar9 + dVar9;
    dVar8 = dVar8 + dVar8;
    dVar4 = dVar4 + dVar4;
    dVar14 = (local_168[2] * dVar9 - local_168[0] * dVar4) + local_168[3] * dVar8 + dStack_120 +
             dStack_140;
    dVar2 = (double)*(float *)(param_1 + 0x20) * local_108;
    dVar10 = (double)param_1[0x26];
    dVar13 = (double)param_1[0x25];
    dVar1 = (double)param_1[0x24];
    local_170 = 0.0;
    local_198 = param_5[2];
    local_1a8 = *param_5;
    uStack_1a0 = param_5[1];
    local_190 = *param_6;
    dStack_188 = param_6[1];
    local_180 = param_6[2];
    dVar12 = local_180 * local_180 + local_190 * local_190 + dStack_188 * dStack_188;
    if (9.99999993922529e-09 < dVar12) {
      dVar12 = 1.0 / SQRT(dVar12);
      local_190 = local_190 * dVar12;
      dStack_188 = dStack_188 * dVar12;
      local_180 = local_180 * dVar12;
    }
    local_1f8._0_8_ = local_218 * local_1b8 - local_1d0 * local_1c0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_e8 = 0;
    uStack_e0 = 0x3ff0000000000000;
    dStack_210 = local_218;
    dStack_1d8 = local_218;
    FUN_146bfbbda(&local_f8,local_1f8);
    local_1f8._8_4_ = SUB84(dVar14,0);
    local_1f8._0_8_ =
         (dVar4 * local_168[1] - dVar8 * local_168[2]) + local_168[3] * dVar9 + dVar11 + local_148;
    local_1f8._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
    local_1e0 = (double)local_f8;
    dStack_1d8 = (double)uStack_f0;
    local_1d0._0_4_ = (undefined4)local_e8;
    local_1d0._4_4_ = local_e8._4_4_;
    dStack_1c8 = (double)uStack_e0;
    local_1e8 = dVar4 * local_168[3] + dVar3 + (dVar8 * local_168[0] - dVar9 * local_168[1]) +
                local_138;
    local_1c0 = local_128 * dVar1 * 0.5 + dVar2;
    local_1b8 = dVar13 * local_128 * 0.5 + dVar2;
    local_1b0 = dVar10 * local_128 * 0.5 + dVar2;
    cVar5 = FUN_148425b62(&local_1a8,local_1f8,&local_170);
    if (cVar5 != '\0') {
      *param_2 = 1;
      *(double *)(param_2 + 8) = (double)(float)local_170;
      *(undefined8 *)(param_2 + 0x10) = 0;
      *(undefined8 *)(param_2 + 0x18) = 0;
      *(undefined8 *)(param_2 + 0x20) = 0x3ff0000000000000;
      param_2[0x28] = 0;
      *(undefined8 *)(param_2 + 0x38) = 0;
      FUN_14485c47a(param_2 + 0x38,param_1);
      *(longlong **)(param_2 + 0x30) = param_1;
      *(int *)(param_2 + 0x2c) = (int)param_1[6];
      goto LAB_1484255c9;
    }
  }
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0x47efffffe0000000;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0x3ff0000000000000;
  param_2[0x28] = 0;
  *(undefined8 *)(param_2 + 0x2c) = 0;
  *(undefined8 *)(param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
LAB_1484255c9:
  if ((local_d0 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148425b62 FUN_148425b62 body=865 status=ok
// SIG undefined FUN_148425b62(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148425b62(double *param_1,double *param_2)

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
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_138 [32];
  double local_118;
  uint local_110;
  uint uStack_10c;
  uint uStack_108;
  uint uStack_104;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_118 = param_1[2] - param_2[2];
  dVar12 = param_1[1] - param_2[1];
  dVar15 = *param_1 - *param_2;
  dVar13 = param_2[3];
  dVar1 = param_2[4];
  dVar2 = param_2[5];
  dVar5 = dVar2 + dVar2;
  dVar7 = dVar1 + dVar1;
  dVar3 = param_2[6];
  dVar14 = dVar5 * dVar13 - dVar7 * dVar3;
  dVar9 = 1.0 - (dVar1 * dVar7 + dVar2 * dVar5);
  dVar4 = dVar3 * (dVar13 + dVar13);
  dVar16 = (dVar13 + dVar13) * dVar13;
  dVar11 = 1.0 - (dVar2 * dVar5 + dVar16);
  dVar10 = dVar5 * dVar3 + dVar7 * dVar13;
  dVar8 = dVar7 * dVar13 - dVar5 * dVar3;
  dVar6 = dVar5 * dVar1 + dVar4;
  dVar16 = 1.0 - (dVar16 + dVar1 * dVar7);
  dVar4 = dVar5 * dVar1 - dVar4;
  dVar3 = dVar5 * dVar13 + dVar7 * dVar3;
  local_d0 = local_118 * dVar16 + dVar15 * dVar3 + dVar12 * dVar4;
  local_d8 = local_118 * dVar6 + dVar15 * dVar8 + dVar12 * dVar11;
  local_e0 = local_118 * dVar14 + dVar15 * dVar9 + dVar12 * dVar10;
  dVar13 = param_1[3];
  dVar1 = param_1[4];
  dVar2 = param_1[5];
  local_b8 = dVar16 * dVar2 + dVar3 * dVar13 + dVar4 * dVar1;
  local_c0 = dVar6 * dVar2 + dVar8 * dVar13 + dVar11 * dVar1;
  local_c8 = dVar14 * dVar2 + dVar9 * dVar13 + dVar10 * dVar1;
  dVar13 = local_b8 * local_b8 + local_c8 * local_c8 + local_c0 * local_c0;
  if (9.99999993922529e-09 < dVar13) {
    dVar13 = 1.0 / SQRT(dVar13);
    local_c8 = local_c8 * dVar13;
    local_c0 = local_c0 * dVar13;
    local_b8 = local_b8 * dVar13;
  }
  local_e8 = param_2[9];
  local_f8 = *(undefined4 *)(param_2 + 7);
  uStack_f4 = *(undefined4 *)((longlong)param_2 + 0x3c);
  uStack_f0 = *(undefined4 *)(param_2 + 8);
  uStack_ec = *(undefined4 *)((longlong)param_2 + 0x44);
  local_100 = CONCAT44((uint)((ulonglong)local_e8 >> 0x20) ^ DAT_149931e80._4_4_,
                       SUB84(local_e8,0) ^ (uint)DAT_149931e80);
  local_110 = *(uint *)(param_2 + 7) ^ (uint)DAT_149931e80;
  uStack_10c = *(uint *)((longlong)param_2 + 0x3c) ^ DAT_149931e80._4_4_;
  uStack_108 = *(uint *)(param_2 + 8) ^ DAT_149931e80._8_4_;
  uStack_104 = *(uint *)((longlong)param_2 + 0x44) ^ DAT_149931e80._12_4_;
  FUN_146bd8472(&local_e0);
  if ((local_b0 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148426094 FUN_148426094 body=1638 status=ok
// SIG undefined FUN_148426094(void)

void FUN_148426094(longlong *param_1,longlong *param_2,void *param_3)

{
  double dVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_288 [32];
  undefined4 *local_268;
  double local_260;
  undefined4 local_258;
  undefined8 local_250;
  undefined4 local_248;
  undefined4 local_240;
  undefined1 local_238;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  double local_218;
  double dStack_210;
  double local_208;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double local_178;
  double dStack_170;
  double local_168;
  int local_150;
  undefined1 local_14c [36];
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  char local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  char local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  char local_f0;
  undefined4 local_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  char local_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  char local_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  char local_b4;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_288;
  memcpy(&local_1b8,param_3,0x110);
  cVar2 = (**(code **)(*param_1 + 0x540))(param_1,param_2,param_1 + 0x2b,&local_1b8);
  if (cVar2 != '\0') {
    dVar1 = (double)param_1[0x34];
    dVar13 = DAT_14c8464e0 * local_178;
    dStack_170 = DAT_14c8464e8 * dStack_170;
    local_168 = DAT_14c8464f0 * local_168;
    dVar10 = dStack_170 * local_1b8 - dVar13 * dStack_1b0;
    dVar11 = local_168 * dStack_1b0 - dStack_170 * local_1a8;
    dVar12 = dVar13 * local_1a8 - local_168 * local_1b8;
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar10 = dVar10 + dVar10;
    local_1d8 = (dVar10 * dStack_1b0 - dVar12 * local_1a8) + dStack_1a0 * dVar11 + dVar13 +
                local_198;
    dStack_1d0 = (local_1a8 * dVar11 - local_1b8 * dVar10) + dStack_1a0 * dVar12 + dStack_170 +
                 dStack_190;
    local_1c8 = dVar10 * dStack_1a0 + local_168 + (dVar12 * local_1b8 - dVar11 * dStack_1b0) +
                local_188;
    dVar12 = (double)param_1[0x2e];
    dVar10 = (double)param_1[0x2f];
    dVar11 = dVar10 * local_1b8 - dStack_1b0 * dVar12;
    dVar13 = (double)param_1[0x30] * dStack_1b0 - local_1a8 * dVar10;
    dVar14 = dVar12 * local_1a8 - (double)param_1[0x30] * local_1b8;
    dVar13 = dVar13 + dVar13;
    dVar14 = dVar14 + dVar14;
    dVar11 = dVar11 + dVar11;
    local_1e8 = dVar11 * dStack_1a0 + (double)param_1[0x30] +
                (dVar14 * local_1b8 - dVar13 * dStack_1b0);
    local_1f8 = (dVar11 * dStack_1b0 - dVar14 * local_1a8) + dStack_1a0 * dVar13 + dVar12;
    dStack_1f0 = (local_1a8 * dVar13 - local_1b8 * dVar11) + dStack_1a0 * dVar14 + dVar10;
    dVar12 = (double)param_1[0x31];
    dVar10 = (double)param_1[0x32];
    dVar11 = dVar10 * local_1b8 - dStack_1b0 * dVar12;
    dVar13 = (double)param_1[0x33] * dStack_1b0 - local_1a8 * dVar10;
    dVar14 = dVar12 * local_1a8 - local_1b8 * (double)param_1[0x33];
    dVar13 = dVar13 + dVar13;
    dVar14 = dVar14 + dVar14;
    dVar11 = dVar11 + dVar11;
    local_208 = dVar11 * dStack_1a0 + (double)param_1[0x33] +
                (dVar14 * local_1b8 - dVar13 * dStack_1b0);
    local_218 = (dVar11 * dStack_1b0 - dVar14 * local_1a8) + dStack_1a0 * dVar13 + dVar12;
    dStack_210 = (local_1a8 * dVar13 - local_1b8 * dVar11) + dStack_1a0 * dVar14 + dVar10;
    uVar3 = (**(code **)(*param_2 + 8))(param_2);
    if (((char)param_1[0x39] == '\x01') &&
       (plVar5 = (longlong *)FUN_14842d074(local_14c,local_150), plVar5 != (longlong *)0x0)) {
      if ((local_150 != 2) &&
         (local_100 = local_114, local_fc = local_110, local_f8 = local_10c, local_f4 = local_108,
         local_f0 = local_104, local_150 != 1)) {
        local_100 = local_128;
        local_fc = local_124;
        local_f8 = local_120;
        local_f4 = local_11c;
        local_f0 = local_118;
      }
      if (local_f0 != '\x01') {
        local_f4 = 1.0;
        local_f8 = 1.0;
        local_fc = 1.0;
        local_100 = 1.0;
      }
      if (local_f4 <= 0.0) {
        local_f4 = 0.0;
      }
      fVar9 = 1.0;
      fVar8 = local_f4;
      if (1.0 <= local_f4) {
        fVar8 = fVar9;
      }
      if (local_f8 <= 0.0) {
        local_f8 = 0.0;
      }
      fVar7 = local_f8;
      if (1.0 <= local_f8) {
        fVar7 = fVar9;
      }
      if (local_fc <= 0.0) {
        local_fc = 0.0;
      }
      fVar6 = local_fc;
      if (1.0 <= local_fc) {
        fVar6 = fVar9;
      }
      if (local_100 <= 0.0) {
        local_100 = 0.0;
      }
      fVar9 = local_100;
      if (1.0 <= local_100) {
        fVar9 = 1.0;
      }
      local_250 = (**(code **)(*plVar5 + 0x2f0))(plVar5);
      local_258 = (undefined4)param_1[0x35];
      local_268 = (undefined4 *)
                  CONCAT44(local_268._4_4_,
                           (int)(fVar7 * 255.0 + 0.5) & 0xffU |
                           ((int)(fVar6 * 255.0 + 0.5) & 0xffU) << 8 |
                           ((int)(fVar9 * 255.0 + 0.5) & 0xffU) << 0x10 |
                           (int)(fVar8 * 255.0 + 0.5) << 0x18);
      local_248 = CONCAT31(local_248._1_3_,1);
      local_260 = dVar1 * local_178;
      FUN_147cb6eea(uVar3,&local_1d8,&local_1f8,&local_218);
    }
    if (*(char *)((longlong)param_1 + 0x1c9) == '\x01') {
      lVar4 = (**(code **)(*param_2 + 0x10))(param_2);
      local_248 = (**(code **)(*param_1 + 0x558))
                            (param_1,*(double *)(lVar4 + 0x8a8) <= 1.0 &&
                                     *(double *)(lVar4 + 0x8a8) != 1.0,
                             *(undefined4 *)(lVar4 + 0x1de8));
      local_238 = (undefined1)param_1[0x29];
      local_258 = (undefined4)param_1[0x35];
      local_228 = local_c4;
      uStack_224 = uStack_c0;
      uStack_220 = uStack_bc;
      uStack_21c = uStack_b8;
      if ((local_150 != 2) &&
         (local_228 = local_d8, uStack_224 = uStack_d4, uStack_220 = uStack_d0,
         uStack_21c = uStack_cc, local_b4 = local_c8, local_150 != 1)) {
        local_228 = local_ec;
        uStack_224 = uStack_e8;
        uStack_220 = uStack_e4;
        uStack_21c = uStack_e0;
        local_b4 = local_dc;
      }
      if (local_b4 != '\x01') {
        local_228 = 0x3f800000;
        uStack_224 = 0x3f800000;
        uStack_220 = 0x3f800000;
        uStack_21c = 0x3f800000;
      }
      local_268 = &local_228;
      local_240 = 0;
      local_250 = CONCAT71(local_250._1_7_,1);
      local_260 = dVar1 * local_178;
      FUN_147cb7c40(uVar3,&local_1d8,&local_1f8,&local_218);
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484266fc FUN_1484266fc body=1670 status=ok
// SIG undefined FUN_1484266fc(void)

undefined1 *
FUN_1484266fc(longlong *param_1,undefined1 *param_2,undefined8 param_3,double *param_4,
             double *param_5,double *param_6)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  longlong lVar6;
  double *pdVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_1e8 [32];
  double *local_1c8;
  double *local_1c0;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double dStack_160;
  double local_158;
  double local_148 [4];
  double local_128;
  double dStack_120;
  double local_118;
  double local_108;
  double local_e8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  pdVar7 = local_148;
  for (lVar6 = 0xe; lVar6 != 0; lVar6 = lVar6 + -1) {
    *pdVar7 = *param_4;
    param_4 = param_4 + 1;
    pdVar7 = pdVar7 + 1;
  }
  cVar5 = (**(code **)(*param_1 + 0x550))(param_1,param_3,param_1 + 0x2b);
  if (cVar5 != '\0') {
    local_168 = local_128;
    dStack_160 = dStack_120;
    local_158 = local_118;
    dVar3 = (double)param_1[0x2e];
    dVar10 = (double)param_1[0x2f];
    dVar11 = dVar10 * local_148[0] - dVar3 * local_148[1];
    dVar12 = (double)param_1[0x30] * local_148[1] - dVar10 * local_148[2];
    dVar13 = dVar3 * local_148[2] - (double)param_1[0x30] * local_148[0];
    dVar12 = dVar12 + dVar12;
    dVar13 = dVar13 + dVar13;
    dVar11 = dVar11 + dVar11;
    dVar15 = (double)param_1[0x31];
    dVar2 = (double)param_1[0x32];
    dVar16 = dVar2 * local_148[0] - local_148[1] * dVar15;
    dVar4 = (double)param_1[0x33] * local_148[1] - local_148[2] * dVar2;
    dVar14 = dVar15 * local_148[2] - local_148[0] * (double)param_1[0x33];
    dVar4 = dVar4 + dVar4;
    dVar14 = dVar14 + dVar14;
    dVar16 = dVar16 + dVar16;
    dVar8 = dVar11 * local_148[3] + (double)param_1[0x30] +
            (dVar13 * local_148[0] - dVar12 * local_148[1]);
    dVar9 = (dVar11 * local_148[1] - dVar13 * local_148[2]) + local_148[3] * dVar12 + dVar3;
    dVar10 = (local_148[2] * dVar12 - local_148[0] * dVar11) + local_148[3] * dVar13 + dVar10;
    dVar3 = dVar16 * local_148[3] + (double)param_1[0x33] +
            (dVar14 * local_148[0] - dVar4 * local_148[1]);
    dVar15 = (dVar16 * local_148[1] - dVar14 * local_148[2]) + local_148[3] * dVar4 + dVar15;
    dVar16 = (local_148[2] * dVar4 - local_148[0] * dVar16) + local_148[3] * dVar14 + dVar2;
    local_170 = dVar9 * dVar16 - dVar15 * dVar10;
    local_178 = dVar8 * dVar15 - dVar3 * dVar9;
    local_180 = dVar10 * dVar3 - dVar16 * dVar8;
    dVar16 = *param_6;
    dVar3 = param_6[1];
    dVar4 = param_6[2];
    dVar14 = local_170 * dVar4 + local_180 * dVar16 + dVar3 * local_178;
    if (1e-08 < ABS(dVar14)) {
      fVar1 = *(float *)(param_1 + 0x20);
      local_108 = local_108 * (double)param_1[0x34];
      if (*(char *)((longlong)param_1 + 0x1ca) == '\x01') {
        local_1c0 = &local_198;
        local_190 = 1.79769313486232e+308;
        local_1c8 = &local_180;
        FUN_148426d83(param_5,param_6,&local_168,(double)fVar1 * local_e8 + local_108);
        if (local_198._0_1_ == '\x01') {
          *param_2 = 1;
          *(double *)(param_2 + 8) = (double)(float)local_190;
          *(undefined8 *)(param_2 + 0x10) = 0;
          *(undefined8 *)(param_2 + 0x18) = 0;
          *(undefined8 *)(param_2 + 0x20) = 0x3ff0000000000000;
          param_2[0x28] = 0;
LAB_148426c21:
          *(undefined8 *)(param_2 + 0x38) = 0;
          FUN_14485c47a(param_2 + 0x38,param_1);
          *(longlong **)(param_2 + 0x30) = param_1;
          *(int *)(param_2 + 0x2c) = (int)param_1[6];
          goto LAB_148426b30;
        }
      }
      else if (*(char *)((longlong)param_1 + 0x1cb) == '\x01') {
        dVar11 = local_118 * local_170 + local_128 * local_180 + dStack_120 * local_178;
        dVar10 = param_5[2];
        dVar15 = *param_5;
        dVar2 = param_5[1];
        dVar14 = ((local_170 * dVar11 - dVar10) * local_170 +
                 (dVar11 * local_180 - dVar15) * local_180 +
                 (local_178 * dVar11 - dVar2) * local_178) / dVar14;
        if (0.0 <= dVar14) {
          local_188 = dVar4 * dVar14 + dVar10;
          local_190 = dVar3 * dVar14 + dVar2;
          local_198 = dVar16 * dVar14 + dVar15;
          local_1c8 = &local_1b0;
          FUN_1484207df(&local_198,&local_168,&local_180,
                        CONCAT44((int)((ulonglong)local_108 >> 0x20),(float)local_108));
          dVar11 = (local_1a0 - dVar10) * dVar4 +
                   (local_1b0 - dVar15) * dVar16 + (local_1a8 - dVar2) * dVar3;
          if (0.0 <= dVar11) {
            dVar10 = dVar10 + dVar4 * dVar11;
            dVar2 = dVar2 + dVar3 * dVar11;
            dVar15 = dVar15 + dVar16 * dVar11;
          }
          if (SQRT((dVar10 - local_1a0) * (dVar10 - local_1a0) +
                   (dVar2 - local_1a8) * (dVar2 - local_1a8) +
                   (dVar15 - local_1b0) * (dVar15 - local_1b0)) <=
              (double)fVar1 * local_e8 + (double)*(float *)((longlong)param_1 + 0x144)) {
            *param_2 = 1;
            *(double *)(param_2 + 8) = (double)(float)dVar14;
            *(undefined8 *)(param_2 + 0x10) = 0;
            *(undefined8 *)(param_2 + 0x18) = 0;
            *(undefined8 *)(param_2 + 0x20) = 0x3ff0000000000000;
            param_2[0x28] = 0;
            goto LAB_148426c21;
          }
        }
      }
    }
  }
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0x47efffffe0000000;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0x3ff0000000000000;
  param_2[0x28] = 0;
  *(undefined8 *)(param_2 + 0x2c) = 0;
  *(undefined8 *)(param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
LAB_148426b30:
  if ((local_d0 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148426d83 FUN_148426d83 body=532 status=ok
// SIG undefined FUN_148426d83(void)

void FUN_148426d83(double *param_1,double *param_2,double *param_3,double param_4,double *param_5,
                  undefined1 *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  double dVar7;
  
  dVar1 = *param_5;
  dVar2 = param_5[1];
  dVar3 = param_5[2];
  dVar7 = dVar3 * param_2[2] + dVar1 * *param_2 + dVar2 * param_2[1];
  uVar5 = 0;
  uVar6 = 0;
  if (1e-08 < ABS(dVar7)) {
    dVar4 = param_3[2] * dVar3 + *param_3 * dVar1 + dVar2 * param_3[1];
    dVar7 = ((dVar3 * dVar4 - param_1[2]) * dVar3 +
            (dVar4 * dVar1 - *param_1) * dVar1 + (dVar2 * dVar4 - param_1[1]) * dVar2) / dVar7;
    uVar5 = 0;
    if ((0.0 <= dVar7) &&
       (dVar1 = (param_1[2] + param_2[2] * dVar7) - param_3[2],
       dVar3 = (param_1[1] + param_2[1] * dVar7) - param_3[1],
       dVar2 = (*param_1 + *param_2 * dVar7) - *param_3, uVar5 = 0,
       dVar1 * dVar1 + dVar2 * dVar2 + dVar3 * dVar3 <= param_4 * param_4)) {
      *(double *)(param_6 + 0x10) = dVar7;
      *(double *)(param_6 + 8) = dVar7;
      uVar6 = 1;
      uVar5 = 1;
    }
  }
  *param_6 = uVar5;
  *(undefined4 *)(param_6 + 4) = uVar6;
  return;
}



// FUNCTION 148426fdc FUN_148426fdc body=247 status=ok
// SIG undefined FUN_148426fdc(void)

bool FUN_148426fdc(longlong param_1,double *param_2,double *param_3,double *param_4,double *param_5,
                  char param_6)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  if (*(int *)(param_1 + 0x1ac) == 2) {
    if (param_6 == '\0') {
      dVar3 = param_5[2];
      dVar5 = *param_5;
      dVar8 = param_5[1];
    }
    else {
      dVar2 = param_2[2] - param_4[2];
      dVar6 = param_2[1] - param_4[1];
      dVar4 = *param_2 - *param_4;
      dVar7 = dVar2 * dVar2 + dVar4 * dVar4 + dVar6 * dVar6;
      if (((dVar7 != 1.0) || (dVar3 = dVar2, dVar5 = dVar4, dVar8 = dVar6, NAN(dVar7))) &&
         (dVar3 = DAT_14c8464f0, dVar5 = DAT_14c8464e0, dVar8 = DAT_14c8464e8,
         9.99999993922529e-09 <= dVar7)) {
        dVar8 = 1.0 / SQRT(dVar7);
        dVar3 = dVar2 * dVar8;
        dVar5 = dVar4 * dVar8;
        dVar8 = dVar6 * dVar8;
      }
    }
    bVar1 = ABS(dVar3 * param_3[2] + dVar5 * *param_3 + dVar8 * param_3[1]) <=
            *(double *)(param_1 + 0x1c0);
  }
  else if (*(int *)(param_1 + 0x1ac) == 1) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



// FUNCTION 1484272c4 FUN_1484272c4 body=2513 status=ok
// SIG undefined FUN_1484272c4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1484272c4(longlong *param_1,longlong *param_2,void *param_3)

{
  double dVar1;
  double dVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  uint uVar8;
  double *pdVar9;
  ulonglong uVar10;
  float fVar11;
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  double dVar20;
  undefined1 auVar19 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  double dVar29;
  undefined1 auStack_448 [32];
  undefined4 local_428;
  undefined1 local_420;
  undefined8 *local_418;
  undefined8 local_410;
  undefined1 local_408;
  undefined1 local_3f8 [16];
  double local_3e8;
  double dStack_3e0;
  undefined1 local_3d8 [16];
  double local_3c8;
  double dStack_3c0;
  double local_3b8;
  undefined8 uStack_3b0;
  double local_3a8;
  double dStack_3a0;
  double local_398;
  double dStack_390;
  double local_388;
  double dStack_380;
  double local_378;
  double dStack_370;
  double local_368;
  double dStack_360;
  double local_358;
  double dStack_350;
  double local_348;
  double dStack_340;
  double local_338;
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  undefined4 local_300;
  undefined1 local_2fc [164];
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  undefined1 local_218 [16];
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_198 [16];
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  undefined8 uStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  undefined8 uStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_448;
  memcpy(&local_368,param_3,0x110);
  cVar3 = (**(code **)(*param_1 + 0x540))(param_1,param_2,param_1 + 0x21,&local_368);
  if (cVar3 != '\0') {
    plVar6 = (longlong *)FUN_14842d074(local_2fc,local_300);
    if (plVar6 != (longlong *)0x0) {
      pdVar9 = &local_158;
      FUN_144a90df0(pdVar9,param_1 + 0x24);
      uVar4 = FUN_141706d54(pdVar9,&local_3a8);
      auVar26 = _DAT_149934d80;
      fVar11 = *(float *)(param_1 + 0x27);
      auVar18._0_8_ = (double)fVar11;
      local_3e8 = DAT_14c8464e0;
      dStack_3e0 = DAT_14c8464e8;
      local_3d8._8_8_ = auVar18._0_8_;
      local_3d8._0_8_ = auVar18._0_8_;
      auVar18._8_8_ = 0;
      dVar1 = local_328._0_8_;
      dVar2 = local_328._8_8_;
      dVar28 = local_318._0_8_;
      auVar21 = minpd(local_3d8,local_328);
      auVar25 = minpd(auVar18,local_318);
      auVar22._8_8_ = -(ulonglong)(auVar21._8_8_ < 0.0);
      auVar22._0_8_ = -(ulonglong)(auVar21._0_8_ < 0.0);
      iVar5 = movmskpd(uVar4,auVar22);
      auVar21._8_8_ = -(ulonglong)(auVar25._8_8_ < 0.0);
      auVar21._0_8_ = -(ulonglong)(auVar25._0_8_ < 0.0);
      uVar8 = movmskpd((int)pdVar9,auVar21);
      local_3f8 = auVar18;
      if ((uVar8 & 0x3fffffff) == 0 && iVar5 == 0) {
        dVar16 = dStack_3a0 * local_358 * -1.0 +
                 local_398 * dStack_360 + dStack_390 * local_368 * 1.0 + local_3a8 * dStack_350;
        dVar20 = local_3a8 * local_358 * 1.0 +
                 dStack_390 * dStack_360 + local_398 * local_368 * -1.0 + dStack_3a0 * dStack_350;
        auVar26._0_8_ =
             dStack_390 * local_358 * 1.0 +
             ((local_368 * dStack_3a0 * 1.0 + local_398 * dStack_350) - local_3a8 * dStack_360);
        auVar26._8_8_ =
             local_398 * local_358 * -1.0 +
             ((local_368 * local_3a8 * -1.0 + dStack_390 * dStack_350) - dStack_3a0 * dStack_360);
        dVar23 = DAT_14c8464e0 * dVar1;
        dVar24 = DAT_14c8464e8 * dVar2;
        dVar29 = DAT_14c8464f0 * dVar28;
        dVar14 = dVar24 * local_368 - dVar23 * dStack_360;
        dVar17 = dVar29 * dStack_360 - dVar24 * local_358;
        dVar12 = dVar23 * local_358 - dVar29 * local_368;
        dVar17 = dVar17 + dVar17;
        dVar12 = dVar12 + dVar12;
        dVar14 = dVar14 + dVar14;
        local_f8._0_8_ =
             (dVar14 * dStack_360 - local_358 * dVar12) + dStack_350 * dVar17 + dVar23 + local_348;
        local_f8._8_8_ =
             (dVar17 * local_358 - dVar14 * local_368) + dStack_350 * dVar12 + dVar24 + dStack_340;
        local_e8._0_8_ =
             (dVar12 * local_368 - dStack_360 * dVar17) + dStack_350 * dVar14 + dVar29 + local_338;
      }
      else {
        dVar16 = dStack_360 + dStack_360;
        dVar14 = local_358 + local_358;
        dVar12 = local_368 * (local_368 + local_368);
        dVar17 = (local_368 + local_368) * dStack_350;
        local_3b8 = DAT_14c8464f0;
        uStack_3b0 = 0;
        local_188 = (1.0 - (dVar12 + dStack_360 * dVar16)) * dVar28;
        dVar20 = (dVar14 * dStack_360 - dVar17) * dVar28;
        local_1d8 = ((double)DAT_149934d80 - (local_358 * dVar14 + dStack_360 * dVar16)) * dVar1;
        dVar12 = (DAT_149934d80._8_8_ - (local_358 * dVar14 + dVar12)) * dVar2;
        uStack_1d0 = (dVar16 * local_368 + dVar14 * dStack_350) * dVar1;
        local_1a8 = (dVar14 * dStack_360 + dVar17) * dVar2;
        local_1c8 = (local_368 * dVar14 - dVar16 * dStack_350) * dVar1;
        uStack_1c0 = 0;
        local_1b8._8_4_ = SUB84(dVar12,0);
        local_1b8._0_8_ = (dVar16 * local_368 - dVar14 * dStack_350) * dVar2;
        local_1b8._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
        uStack_1a0 = 0;
        local_198._8_4_ = SUB84(dVar20,0);
        local_198._0_8_ = (dVar16 * dStack_350 + local_368 * dVar14) * dVar28;
        local_198._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
        uStack_180 = 0;
        local_178 = local_348;
        dStack_170 = dStack_340;
        local_168 = local_338;
        uStack_160 = 0x3ff0000000000000;
        dVar16 = dStack_3a0 + dStack_3a0;
        dVar14 = local_398 + local_398;
        dVar12 = local_3a8 * (local_3a8 + local_3a8);
        local_208 = (1.0 - (dVar12 + dStack_3a0 * dVar16)) * auVar18._0_8_;
        dVar17 = (local_3a8 + local_3a8) * dStack_390;
        local_238 = (dVar16 * local_3a8 - dVar14 * dStack_390) * auVar18._0_8_;
        dVar20 = (dVar14 * dStack_3a0 - dVar17) * auVar18._0_8_;
        local_258 = ((double)DAT_149934d80 - (local_398 * dVar14 + dStack_3a0 * dVar16)) *
                    auVar18._0_8_;
        dStack_230 = (DAT_149934d80._8_8_ - (local_398 * dVar14 + dVar12)) * auVar18._0_8_;
        dStack_250 = (dVar16 * local_3a8 + dVar14 * dStack_390) * auVar18._0_8_;
        local_228 = (dVar14 * dStack_3a0 + dVar17) * auVar18._0_8_;
        local_248 = (local_3a8 * dVar14 - dVar16 * dStack_390) * auVar18._0_8_;
        uStack_240 = 0;
        uStack_220 = 0;
        local_218._8_4_ = SUB84(dVar20,0);
        local_218._0_8_ = (dVar16 * dStack_390 + local_3a8 * dVar14) * auVar18._0_8_;
        local_218._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
        uStack_200 = 0;
        local_1f8 = DAT_14c8464e0;
        dStack_1f0 = DAT_14c8464e8;
        local_1e8 = DAT_14c8464f0;
        uStack_1e0 = 0x3ff0000000000000;
        local_3c8 = auVar18._0_8_ * dVar1;
        dStack_3c0 = auVar18._0_8_ * dVar2;
        FUN_1447fea8d(&local_158);
        FUN_144a1c686(&local_158,0x3e45798ee0000000);
        auVar25._8_8_ = -(ulonglong)(0.0 <= auVar18._0_8_ * dVar2);
        auVar25._0_8_ = -(ulonglong)(0.0 <= auVar18._0_8_ * dVar1);
        auVar21 = blendvpd(_DAT_149936790,auVar26,auVar25);
        uVar10 = -(ulonglong)(0.0 <= auVar18._0_8_ * dVar28);
        dVar16 = (double)(~uVar10 & 0xbff0000000000000 | uVar10 & 0x3ff0000000000000);
        dVar20 = auVar21._0_8_;
        local_148 = local_148 * dVar20;
        dStack_150 = dStack_150 * dVar20;
        local_158 = local_158 * dVar20;
        dVar20 = auVar21._8_8_;
        local_128 = local_128 * dVar20;
        dStack_130 = dStack_130 * dVar20;
        local_138 = dVar20 * local_138;
        local_108 = local_108 * dVar16;
        dStack_110 = dStack_110 * dVar16;
        local_118 = dVar16 * local_118;
        FUN_14481fd10(&local_388,&local_158);
        dVar16 = local_378 * local_378 + local_388 * local_388;
        dVar20 = dStack_370 * dStack_370 + dStack_380 * dStack_380;
        auVar19._0_8_ = dVar16 + dVar20;
        auVar19._8_8_ = dVar16 + dVar20;
        auVar13._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar19._8_8_);
        auVar13._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar19._0_8_);
        auVar21 = sqrtpd(auVar19,auVar19);
        auVar26 = divpd(auVar26,auVar21);
        auVar27._0_8_ = auVar26._0_8_ * local_378;
        auVar27._8_8_ = auVar26._8_8_ * dStack_370;
        dVar16 = (double)((ulonglong)(local_388 * auVar26._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar19._0_8_));
        dVar20 = (double)((ulonglong)(dStack_380 * auVar26._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar19._8_8_));
        auVar26 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar27,auVar13);
        fVar11 = *(float *)(param_1 + 0x27);
      }
      dVar2 = auVar18._0_8_ * dVar2;
      dVar1 = auVar18._0_8_ * dVar1;
      dVar28 = auVar18._0_8_ * dVar28;
      uVar10 = (ulonglong)local_f8._8_8_ >> 0x20;
      fVar11 = fVar11 / SQRT(fVar11 * fVar11 +
                             *(float *)((longlong)param_1 + 0x13c) *
                             *(float *)((longlong)param_1 + 0x13c));
      fVar15 = fVar11;
      if (1.0 <= fVar11) {
        fVar15 = 1.0;
      }
      acosf((float)(-(uint)(fVar11 < -1.0) & 0xbf800000 | ~-(uint)(fVar11 < -1.0) & (uint)fVar15));
      uVar7 = (**(code **)(*param_2 + 8))(param_2);
      local_410 = (**(code **)(*plVar6 + 0x2f0))(plVar6);
      local_418 = &local_1d8;
      local_1d8 = (double)CONCAT44(DAT_14c75905c,DAT_14c75905c);
      uStack_1d0 = (double)CONCAT44(0x3f800000,DAT_14c75905c);
      local_428 = (undefined4)param_1[0x28];
      dVar14 = dVar20 + dVar20;
      dVar23 = auVar26._0_8_;
      dVar24 = auVar26._8_8_;
      dVar17 = dVar23 + dVar23;
      dVar12 = dVar16 * (dVar16 + dVar16);
      local_158 = (1.0 - (dVar23 * dVar17 + dVar20 * dVar14)) * dVar1;
      dStack_130 = (1.0 - (dVar23 * dVar17 + dVar12)) * dVar2;
      local_108 = (1.0 - (dVar12 + dVar20 * dVar14)) * dVar28;
      dVar12 = (dVar16 + dVar16) * dVar24;
      dStack_150 = (dVar14 * dVar16 + dVar17 * dVar24) * dVar1;
      local_128 = (dVar17 * dVar20 + dVar12) * dVar2;
      local_118 = (dVar14 * dVar24 + dVar16 * dVar17) * dVar28;
      local_138 = (dVar14 * dVar16 - dVar17 * dVar24) * dVar2;
      dStack_110 = (dVar17 * dVar20 - dVar12) * dVar28;
      local_148 = (dVar16 * dVar17 - dVar14 * dVar24) * dVar1;
      uStack_140 = 0;
      uStack_120 = 0;
      uStack_100 = 0;
      local_f8._8_4_ = (int)local_f8._8_8_;
      local_f8._12_4_ = (int)uVar10;
      local_e8._8_4_ = 0;
      local_e8._12_4_ = 0x3ff00000;
      local_408 = 1;
      local_420 = 0;
      FUN_147cb4fc8(uVar7);
    }
  }
  if ((local_d0 ^ (ulonglong)auStack_448) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148427c96 FUN_148427c96 body=1158 status=ok
// SIG undefined FUN_148427c96(void)

undefined1 *
FUN_148427c96(longlong *param_1,undefined1 *param_2,undefined8 param_3,double *param_4,
             undefined8 param_5,undefined8 param_6)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  longlong lVar8;
  double *pdVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  undefined8 local_1b0;
  char *local_1a8;
  double *local_1a0;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double dStack_170;
  double local_168;
  double local_158;
  char local_149;
  double local_148 [4];
  double local_128;
  double dStack_120;
  double local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  double local_e8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  pdVar9 = local_148;
  for (lVar8 = 0xe; lVar8 != 0; lVar8 = lVar8 + -1) {
    *pdVar9 = *param_4;
    param_4 = param_4 + 1;
    pdVar9 = pdVar9 + 1;
  }
  cVar7 = (**(code **)(*param_1 + 0x550))(param_1,param_3,param_1 + 0x21);
  if (cVar7 != '\0') {
    local_1a8 = &local_149;
    local_149 = '\0';
    local_1a0 = &local_158;
    local_158 = 0.0;
    fVar1 = *(float *)(param_1 + 0x27);
    dVar5 = (double)param_1[0x24];
    dVar6 = (double)param_1[0x25];
    dVar11 = dVar6 * local_148[0] - dVar5 * local_148[1];
    dVar12 = (double)param_1[0x26] * local_148[1] - dVar6 * local_148[2];
    dVar10 = dVar5 * local_148[2] - (double)param_1[0x26] * local_148[0];
    dVar12 = dVar12 + dVar12;
    dVar10 = dVar10 + dVar10;
    dVar11 = dVar11 + dVar11;
    dVar13 = DAT_14c8464e0 * local_108;
    dStack_100 = DAT_14c8464e8 * dStack_100;
    local_f8 = DAT_14c8464f0 * local_f8;
    dVar2 = dStack_100 * local_148[0] - local_148[1] * dVar13;
    dVar3 = local_f8 * local_148[1] - local_148[2] * dStack_100;
    dVar4 = dVar13 * local_148[2] - local_148[0] * local_f8;
    dVar3 = dVar3 + dVar3;
    dVar4 = dVar4 + dVar4;
    dVar2 = dVar2 + dVar2;
    local_168 = dVar11 * local_148[3] + (double)param_1[0x26] +
                (dVar10 * local_148[0] - dVar12 * local_148[1]);
    local_e8 = (double)*(float *)(param_1 + 0x20) * local_e8;
    local_178 = (dVar11 * local_148[1] - dVar10 * local_148[2]) + local_148[3] * dVar12 + dVar5;
    dStack_170 = (local_148[2] * dVar12 - local_148[0] * dVar11) + local_148[3] * dVar10 + dVar6;
    local_180 = (dVar2 * local_148[3] + local_f8 + (dVar4 * local_148[0] - dVar3 * local_148[1]) +
                local_118) - local_168 * local_e8;
    local_188 = ((local_148[2] * dVar3 - local_148[0] * dVar2) + local_148[3] * dVar4 + dStack_100 +
                dStack_120) - dStack_170 * local_e8;
    local_190 = ((dVar2 * local_148[1] - dVar4 * local_148[2]) + local_148[3] * dVar3 + dVar13 +
                local_128) - local_178 * local_e8;
    local_1b0 = param_6;
    local_1b8 = param_5;
    FUN_14842811d(&local_190,&local_178,
                  (double)fVar1 /
                  (double)SQRT(fVar1 * fVar1 +
                               *(float *)((longlong)param_1 + 0x13c) *
                               *(float *)((longlong)param_1 + 0x13c)),
                  (double)fVar1 * local_108 + local_e8 + local_e8);
    if (local_149 == '\x01') {
      *param_2 = 1;
      *(double *)(param_2 + 8) = (double)(float)local_158;
      *(undefined8 *)(param_2 + 0x10) = 0;
      *(undefined8 *)(param_2 + 0x18) = 0;
      *(undefined8 *)(param_2 + 0x20) = 0x3ff0000000000000;
      param_2[0x28] = 0;
      *(undefined8 *)(param_2 + 0x38) = 0;
      FUN_14485c47a(param_2 + 0x38,param_1);
      *(longlong **)(param_2 + 0x30) = param_1;
      *(int *)(param_2 + 0x2c) = (int)param_1[6];
      goto LAB_148427d8c;
    }
  }
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0x47efffffe0000000;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0x3ff0000000000000;
  param_2[0x28] = 0;
  *(undefined8 *)(param_2 + 0x2c) = 0;
  *(undefined8 *)(param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
LAB_148427d8c:
  if ((local_d0 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14842811d FUN_14842811d body=1064 status=ok
// SIG undefined FUN_14842811d(void)

void FUN_14842811d(double *param_1,double *param_2,double param_3,double param_4,double *param_5,
                  double *param_6,undefined1 *param_7,double *param_8)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_c8 [32];
  double local_a8 [3];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  dVar3 = param_2[2] * param_6[2] + *param_2 * *param_6 + param_2[1] * param_6[1];
  param_3 = -param_3 * param_3;
  dVar8 = dVar3 * dVar3 + param_3;
  if (1e-08 < ABS(dVar8)) {
    dVar9 = param_5[2] - param_1[2];
    dVar10 = param_5[1] - param_1[1];
    dVar7 = *param_5 - *param_1;
    dVar2 = param_2[2] * dVar9 + *param_2 * dVar7 + param_2[1] * dVar10;
    dVar4 = dVar3 * dVar2 + (param_6[2] * dVar9 + *param_6 * dVar7 + param_6[1] * dVar10) * param_3;
    dVar7 = dVar4 * dVar4 -
            (dVar2 * dVar2 + (dVar9 * dVar9 + dVar7 * dVar7 + dVar10 * dVar10) * param_3) * dVar8;
    if (ABS(dVar7) <= 1e-08) {
      dVar8 = -dVar4 / dVar8;
      dVar4 = dVar8;
      if (0.0 <= dVar3 * dVar8 + dVar2) goto LAB_148428365;
    }
    else if (0.0 <= dVar7) {
      if (dVar7 < 0.0) {
        dVar7 = sqrt(dVar7);
      }
      else {
        dVar7 = SQRT(dVar7);
      }
      dVar10 = (-dVar4 - dVar7) * (1.0 / dVar8);
      bVar1 = 0.0 <= dVar3 * dVar10 + dVar2;
      if (bVar1) {
        local_a8[0] = dVar10;
      }
      uVar5 = (uint)bVar1;
      dVar8 = (1.0 / dVar8) * (dVar7 - dVar4);
      if (0.0 <= dVar3 * dVar8 + dVar2) {
        uVar6 = (ulonglong)uVar5;
        uVar5 = uVar5 + 1;
        local_a8[uVar6] = dVar8;
      }
      dVar4 = local_a8[0];
      if (uVar5 == 1) {
        if (0.0 < dVar3) {
          dVar8 = 1.79769313486232e+308;
          goto LAB_148428365;
        }
      }
      else if (uVar5 == 2) {
        dVar8 = local_a8[1];
        if (local_a8[1] < local_a8[0]) {
          dVar8 = local_a8[0];
          dVar4 = local_a8[1];
        }
LAB_148428365:
        local_a8[0] = dVar4;
        dVar4 = dVar8;
        if (ABS(dVar3) <= 1e-08) {
          dVar3 = local_a8[0];
          if (dVar2 <= param_4) goto LAB_1484283be;
        }
        else {
          param_4 = param_4 - dVar2;
          if (dVar3 <= 0.0) {
            dVar7 = -dVar2;
          }
          else {
            dVar7 = param_4;
            param_4 = -dVar2;
          }
          param_4 = param_4 * (1.0 / dVar3);
          dVar7 = dVar7 * (1.0 / dVar3);
          if ((param_4 <= dVar8) && (local_a8[0] <= dVar7)) {
            dVar3 = dVar8;
            if ((param_4 < dVar8) && (dVar4 = local_a8[0], dVar3 = local_a8[0], local_a8[0] < dVar7)
               ) {
              dVar3 = param_4;
              if (param_4 <= local_a8[0]) {
                dVar3 = local_a8[0];
              }
              dVar4 = dVar7;
              if (dVar8 <= dVar7) {
                dVar4 = dVar8;
              }
              if ((dVar3 == dVar4) && (!NAN(dVar3) && !NAN(dVar4))) {
                dVar4 = dVar3;
              }
            }
LAB_1484283be:
            if (0.0 <= dVar3) {
              *param_7 = 1;
              *param_8 = dVar3;
              goto LAB_148428304;
            }
            if (0.0 <= dVar4) {
              *param_7 = 1;
              *param_8 = dVar4;
              goto LAB_148428304;
            }
          }
        }
      }
    }
  }
  *param_7 = 0;
LAB_148428304:
  if ((local_90 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148428658 FUN_148428658 body=2401 status=ok
// SIG undefined FUN_148428658(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148428658(longlong *param_1,longlong *param_2,void *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 uVar9;
  uint uVar10;
  double *pdVar11;
  ulonglong uVar12;
  undefined1 auVar13 [16];
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  undefined1 auVar22 [16];
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined1 auStack_408 [32];
  double *local_3e8;
  double *local_3e0;
  double local_3d8;
  double local_3d0;
  undefined4 local_3c8;
  undefined8 local_3c0;
  undefined1 local_3b8;
  double local_3b0;
  double local_3a8;
  double dStack_3a0;
  double local_398;
  double dStack_390;
  double local_388;
  double dStack_380;
  double local_378;
  double dStack_370;
  double local_368;
  double dStack_360;
  double local_358;
  double dStack_350;
  double local_348;
  double dStack_340;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  undefined4 local_300;
  undefined1 local_2fc [164];
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  undefined1 local_238 [16];
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
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
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  double local_158;
  double dStack_150;
  double local_148;
  undefined8 uStack_140;
  undefined1 local_138 [16];
  double local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  undefined8 uStack_100;
  double local_f8;
  double dStack_f0;
  undefined1 local_e8 [16];
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_408;
  memcpy(&local_368,param_3,0x110);
  cVar5 = (**(code **)(*param_1 + 0x540))(param_1,param_2,param_1 + 0x21);
  if (cVar5 != '\0') {
    plVar8 = (longlong *)FUN_14842d074(local_2fc,local_300);
    if (plVar8 != (longlong *)0x0) {
      pdVar11 = &local_158;
      FUN_140d92ea8(pdVar11,param_1 + 0x24);
      uVar6 = FUN_141706d54(pdVar11,&local_3a8);
      auVar16 = _DAT_149934d80;
      local_3b0 = (double)*(float *)(param_1 + 0x27) * 0.5;
      dVar1 = local_328._0_8_;
      dVar3 = local_328._8_8_;
      dVar2 = local_318._0_8_;
      dVar4 = (double)DAT_149934d80;
      dVar18 = DAT_149934d80._8_8_;
      auVar19 = minpd(_DAT_149934d80,local_328);
      auVar22 = minpd(ZEXT816(0x3ff0000000000000),local_318);
      auVar20._8_8_ = -(ulonglong)(auVar19._8_8_ < 0.0);
      auVar20._0_8_ = -(ulonglong)(auVar19._0_8_ < 0.0);
      iVar7 = movmskpd(uVar6,auVar20);
      auVar19._8_8_ = -(ulonglong)(auVar22._8_8_ < 0.0);
      auVar19._0_8_ = -(ulonglong)(auVar22._0_8_ < 0.0);
      uVar10 = movmskpd((int)pdVar11,auVar19);
      if ((uVar10 & 0x3fffffff) == 0 && iVar7 == 0) {
        dVar23 = dStack_3a0 * local_358 * -1.0 +
                 local_398 * dStack_360 + dStack_390 * local_368 * 1.0 + local_3a8 * dStack_350;
        dVar26 = local_3a8 * local_358 * 1.0 +
                 dStack_390 * dStack_360 + local_398 * local_368 * -1.0 + dStack_3a0 * dStack_350;
        auVar16._0_8_ =
             dStack_390 * local_358 * 1.0 +
             ((local_368 * dStack_3a0 * 1.0 + local_398 * dStack_350) - local_3a8 * dStack_360);
        auVar16._8_8_ =
             local_398 * local_358 * -1.0 +
             ((local_368 * local_3a8 * -1.0 + dStack_390 * dStack_350) - dStack_3a0 * dStack_360);
        dVar21 = (double)param_1[0x24] * local_3b0 * dVar1;
        dVar25 = (double)param_1[0x25] * local_3b0 * dVar3;
        dVar27 = (double)param_1[0x26] * local_3b0 * dVar2;
        dVar24 = dVar25 * local_368 - dVar21 * dStack_360;
        dVar28 = dVar27 * dStack_360 - dVar25 * local_358;
        dVar14 = dVar21 * local_358 - dVar27 * local_368;
        dVar28 = dVar28 + dVar28;
        dVar14 = dVar14 + dVar14;
        dVar24 = dVar24 + dVar24;
        local_f8 = (dVar24 * dStack_360 - local_358 * dVar14) + dStack_350 * dVar28 + dVar21 +
                   local_348;
        dStack_f0 = (dVar28 * local_358 - dVar24 * local_368) + dStack_350 * dVar14 + dVar25 +
                    dStack_340;
        local_e8._0_8_ =
             (dVar14 * local_368 - dStack_360 * dVar28) + dStack_350 * dVar24 + dVar27 +
             (double)CONCAT44(uStack_334,local_338);
      }
      else {
        dVar24 = dStack_360 + dStack_360;
        dVar14 = local_358 + local_358;
        dVar27 = local_368 * (local_368 + local_368);
        local_1d8 = (dVar4 - (local_358 * dVar14 + dStack_360 * dVar24)) * dVar1;
        dVar25 = (dVar18 - (local_358 * dVar14 + dVar27)) * dVar3;
        dVar21 = (local_368 + local_368) * dStack_350;
        dStack_190 = (dVar14 * dStack_360 - dVar21) * dVar2;
        local_198 = (dVar24 * dStack_350 + local_368 * dVar14) * dVar2;
        dStack_1d0 = (dVar24 * local_368 + dVar14 * dStack_350) * dVar1;
        local_1a8 = (dVar14 * dStack_360 + dVar21) * dVar3;
        local_1c8 = (local_368 * dVar14 - dVar24 * dStack_350) * dVar1;
        uStack_1c0 = 0;
        local_1b8._8_4_ = SUB84(dVar25,0);
        local_1b8._0_8_ = (dVar24 * local_368 - dVar14 * dStack_350) * dVar3;
        local_1b8._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
        local_188 = (1.0 - (dVar27 + dStack_360 * dVar24)) * dVar2;
        uStack_1a0 = 0;
        uStack_180 = 0;
        local_178 = local_348;
        dStack_170 = dStack_340;
        local_168 = local_338;
        uStack_164 = uStack_334;
        uStack_160 = 0;
        uStack_15c = 0x3ff00000;
        dVar25 = dStack_3a0 + dStack_3a0;
        dVar27 = local_398 + local_398;
        dVar21 = local_3a8 * (local_3a8 + local_3a8);
        local_258 = dVar4 - (local_398 * dVar27 + dStack_3a0 * dVar25);
        dVar14 = dVar18 - (local_398 * dVar27 + dVar21);
        local_208 = 1.0 - (dVar21 + dStack_3a0 * dVar25);
        dStack_210 = (local_3a8 + local_3a8) * dStack_390;
        dStack_250 = dVar25 * local_3a8 + dVar27 * dStack_390;
        local_228 = dVar27 * dStack_3a0 + dStack_210;
        dStack_210 = dVar27 * dStack_3a0 - dStack_210;
        local_218 = dVar25 * dStack_390 + local_3a8 * dVar27;
        local_248 = local_3a8 * dVar27 - dVar25 * dStack_390;
        uStack_240 = 0;
        local_238._8_4_ = SUB84(dVar14,0);
        local_238._0_8_ = dVar25 * local_3a8 - dVar27 * dStack_390;
        local_238._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
        uStack_220 = 0;
        uStack_200 = 0;
        uStack_1e0 = 0x3ff0000000000000;
        local_1f8 = (double)param_1[0x24] * local_3b0;
        dStack_1f0 = (double)param_1[0x25] * local_3b0;
        local_1e8 = (double)param_1[0x26] * local_3b0;
        FUN_1447fea8d(&local_158);
        FUN_144a1c686(&local_158,0x3e45798ee0000000);
        auVar22._8_8_ = -(ulonglong)(0.0 <= dVar3);
        auVar22._0_8_ = -(ulonglong)(0.0 <= dVar1);
        auVar19 = blendvpd(_DAT_149936790,auVar16,auVar22);
        uVar12 = -(ulonglong)(0.0 <= dVar2 * 1.0);
        dVar14 = (double)(~uVar12 & 0xbff0000000000000 | uVar12 & 0x3ff0000000000000);
        dVar21 = auVar19._0_8_;
        local_148 = local_148 * dVar21;
        dStack_150 = dStack_150 * dVar21;
        local_158 = local_158 * dVar21;
        dVar21 = auVar19._8_8_;
        local_128 = local_128 * dVar21;
        local_138._8_8_ = (double)local_138._8_8_ * dVar21;
        local_138._0_8_ = dVar21 * (double)local_138._0_8_;
        local_108 = local_108 * dVar14;
        dStack_110 = dStack_110 * dVar14;
        local_118 = dVar14 * local_118;
        FUN_14481fd10(&local_388,&local_158);
        dVar14 = local_378 * local_378 + local_388 * local_388;
        dVar21 = dStack_370 * dStack_370 + dStack_380 * dStack_380;
        auVar15._0_8_ = dVar14 + dVar21;
        auVar15._8_8_ = dVar14 + dVar21;
        auVar13._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar15._8_8_);
        auVar13._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar15._0_8_);
        auVar19 = sqrtpd(auVar15,auVar15);
        auVar16 = divpd(auVar16,auVar19);
        auVar17._0_8_ = auVar16._0_8_ * local_378;
        auVar17._8_8_ = auVar16._8_8_ * dStack_370;
        dVar23 = (double)((ulonglong)(local_388 * auVar16._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar15._0_8_));
        dVar26 = (double)((ulonglong)(dStack_380 * auVar16._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar15._8_8_));
        auVar16 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar17,auVar13);
      }
      dVar2 = dVar2 * 1.0;
      uVar9 = (**(code **)(*param_2 + 8))(param_2);
      local_3c0 = (**(code **)(*plVar8 + 0x2f0))(plVar8);
      local_3c8 = (undefined4)param_1[0x28];
      local_3d8 = (double)*(float *)((longlong)param_1 + 0x13c);
      local_3e0 = &local_1d8;
      local_1d8 = 0.0;
      dStack_1d0 = 0.0;
      local_1c8 = 1.0;
      local_3e8 = &local_258;
      local_258 = 0.0;
      dStack_250 = 1.0;
      local_248 = 0.0;
      local_388 = 1.0;
      dStack_380 = 0.0;
      local_378 = 0.0;
      dVar14 = dVar26 + dVar26;
      dVar27 = auVar16._0_8_;
      dVar24 = auVar16._8_8_;
      dVar21 = dVar27 + dVar27;
      dVar25 = dVar23 * (dVar23 + dVar23);
      local_158 = (dVar4 - (dVar27 * dVar21 + dVar26 * dVar14)) * dVar1;
      dVar4 = (dVar18 - (dVar27 * dVar21 + dVar25)) * dVar3;
      local_108 = (1.0 - (dVar25 + dVar26 * dVar14)) * dVar2;
      dVar18 = (dVar23 + dVar23) * dVar24;
      dStack_150 = (dVar14 * dVar23 + dVar21 * dVar24) * dVar1;
      local_128 = (dVar21 * dVar26 + dVar18) * dVar3;
      local_118 = (dVar14 * dVar24 + dVar23 * dVar21) * dVar2;
      dStack_110 = (dVar21 * dVar26 - dVar18) * dVar2;
      local_148 = (dVar23 * dVar21 - dVar14 * dVar24) * dVar1;
      uStack_140 = 0;
      local_138._8_4_ = SUB84(dVar4,0);
      local_138._0_8_ = (dVar14 * dVar23 - dVar21 * dVar24) * dVar3;
      local_138._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      uStack_120 = 0;
      uStack_100 = 0;
      local_e8._8_4_ = 0;
      local_e8._12_4_ = 0x3ff00000;
      local_3d0 = local_3b0;
      local_3b8 = 1;
      FUN_147cb653d(uVar9,&local_158,&DAT_14c8464e0);
    }
  }
  if ((local_d0 ^ (ulonglong)auStack_408) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148428fba FUN_148428fba body=1125 status=ok
// SIG undefined FUN_148428fba(void)

undefined1 *
FUN_148428fba(longlong *param_1,undefined1 *param_2,undefined8 param_3,double *param_4,
             undefined8 param_5,undefined8 param_6)

{
  double dVar1;
  double dVar2;
  char cVar3;
  longlong lVar4;
  double *pdVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  undefined8 local_1c0;
  char *local_1b8;
  double *local_1b0;
  double local_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined1 local_178 [16];
  double local_168;
  double local_158;
  char local_149;
  double local_148 [4];
  double local_128;
  double dStack_120;
  double local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  double local_e8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  pdVar5 = local_148;
  for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
    *pdVar5 = *param_4;
    param_4 = param_4 + 1;
    pdVar5 = pdVar5 + 1;
  }
  cVar3 = (**(code **)(*param_1 + 0x550))(param_1,param_3,param_1 + 0x21);
  if (cVar3 != '\0') {
    local_1b8 = &local_149;
    local_149 = '\0';
    local_1b0 = &local_158;
    local_158 = 0.0;
    local_e8 = (double)*(float *)(param_1 + 0x20) * local_e8;
    dVar6 = (double)*(float *)(param_1 + 0x27);
    local_1a0 = (double)*(float *)((longlong)param_1 + 0x13c) * local_108 + local_e8;
    dVar1 = (double)param_1[0x24];
    dVar2 = (double)param_1[0x25];
    dVar7 = dVar2 * local_148[0] - dVar1 * local_148[1];
    dVar8 = (double)param_1[0x26] * local_148[1] - dVar2 * local_148[2];
    dVar9 = dVar1 * local_148[2] - (double)param_1[0x26] * local_148[0];
    dVar8 = dVar8 + dVar8;
    dVar9 = dVar9 + dVar9;
    dVar7 = dVar7 + dVar7;
    local_168 = dVar7 * local_148[3] + (double)param_1[0x26] +
                (dVar9 * local_148[0] - dVar8 * local_148[1]);
    dVar2 = (local_148[2] * dVar8 - local_148[0] * dVar7) + local_148[3] * dVar9 + dVar2;
    local_178._8_4_ = SUB84(dVar2,0);
    local_178._0_8_ = (dVar7 * local_148[1] - dVar9 * local_148[2]) + local_148[3] * dVar8 + dVar1;
    local_178._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    dVar8 = dVar1 * dVar6 * 0.5 * local_108;
    dStack_100 = (double)param_1[0x25] * dVar6 * 0.5 * dStack_100;
    local_f8 = (double)param_1[0x26] * dVar6 * 0.5 * local_f8;
    dVar2 = dStack_100 * local_148[0] - local_148[1] * dVar8;
    dVar1 = local_f8 * local_148[1] - local_148[2] * dStack_100;
    dVar7 = dVar8 * local_148[2] - local_148[0] * local_f8;
    dVar1 = dVar1 + dVar1;
    dVar7 = dVar7 + dVar7;
    dVar2 = dVar2 + dVar2;
    local_198 = (dVar2 * local_148[1] - dVar7 * local_148[2]) + local_148[3] * dVar1 + dVar8 +
                local_128;
    dStack_190 = (local_148[2] * dVar1 - local_148[0] * dVar2) + local_148[3] * dVar7 + dStack_100 +
                 dStack_120;
    local_188 = dVar2 * local_148[3] + local_f8 + (dVar7 * local_148[0] - dVar1 * local_148[1]) +
                local_118;
    local_1c0 = param_6;
    local_1c8 = param_5;
    FUN_148429420(&local_198,local_178,local_1a0,dVar6 * local_108 + local_e8 + local_e8);
    if (local_149 == '\x01') {
      *param_2 = 1;
      *(double *)(param_2 + 8) = (double)(float)local_158;
      *(undefined8 *)(param_2 + 0x10) = 0;
      *(undefined8 *)(param_2 + 0x18) = 0;
      *(undefined8 *)(param_2 + 0x20) = 0x3ff0000000000000;
      param_2[0x28] = 0;
      *(undefined8 *)(param_2 + 0x38) = 0;
      FUN_14485c47a(param_2 + 0x38,param_1);
      *(longlong **)(param_2 + 0x30) = param_1;
      *(int *)(param_2 + 0x2c) = (int)param_1[6];
      goto LAB_1484290b0;
    }
  }
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0x47efffffe0000000;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0x3ff0000000000000;
  param_2[0x28] = 0;
  *(undefined8 *)(param_2 + 0x2c) = 0;
  *(undefined8 *)(param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
LAB_1484290b0:
  if ((local_d0 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148429420 FUN_148429420 body=2233 status=ok
// SIG undefined FUN_148429420(void)

void FUN_148429420(double *param_1,double *param_2,double param_3,double param_4,double *param_5,
                  double *param_6,undefined1 *param_7,double *param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  byte bVar5;
  int iVar6;
  ulonglong uVar7;
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
  undefined4 uVar20;
  uint uVar21;
  undefined1 auStack_128 [40];
  double local_100;
  double local_f8;
  undefined8 uStack_f0;
  double local_e8;
  double local_d8 [3];
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  *param_7 = 0;
  dVar11 = *param_2;
  dVar15 = param_2[1];
  dVar9 = param_2[2];
  dVar14 = dVar9 * dVar9 + dVar11 * dVar11 + dVar15 * dVar15;
  if (((dVar14 != 1.0) || (dVar12 = dVar9, dVar13 = dVar11, dVar10 = dVar15, NAN(dVar14))) &&
     (dVar12 = DAT_14c8464f0, dVar13 = DAT_14c8464e0, dVar10 = DAT_14c8464e8,
     9.99999993922529e-09 <= dVar14)) {
    dVar14 = 1.0 / SQRT(dVar14);
    dVar12 = dVar9 * dVar14;
    dVar13 = dVar11 * dVar14;
    dVar10 = dVar15 * dVar14;
  }
  dVar15 = ABS(dVar12);
  dVar11 = ABS(dVar13);
  if ((ABS(dVar10) < dVar11) || (dVar15 < dVar11)) {
    if ((dVar11 < dVar15) || (ABS(dVar10) < dVar15)) {
      dVar11 = -dVar12;
      local_f8 = 0.0;
      uStack_f0 = 0;
      uVar20 = SUB84(dVar13,0);
      uVar21 = (uint)((ulonglong)dVar13 >> 0x20);
    }
    else {
      uStack_f0 = 0x8000000000000000;
      local_f8 = -dVar13;
      uVar20 = 0;
      uVar21 = 0;
      dVar11 = dVar10;
    }
  }
  else {
    uVar21 = (uint)((ulonglong)dVar10 >> 0x20) ^ 0x80000000;
    uVar20 = SUB84(dVar10,0);
    uStack_f0 = 0;
    local_f8 = dVar12;
    dVar11 = 0.0;
  }
  dVar15 = (double)CONCAT44(uVar21,uVar20) * (double)CONCAT44(uVar21,uVar20) +
           dVar11 * dVar11 + local_f8 * local_f8;
  if ((dVar15 != 1.0) || (dVar9 = (double)CONCAT44(uVar21,uVar20), NAN(dVar15))) {
    if (9.99999993922529e-09 <= dVar15) {
      dVar15 = 1.0 / SQRT(dVar15);
      dVar9 = (double)CONCAT44(uVar21,uVar20) * dVar15;
      local_f8 = local_f8 * dVar15;
      dVar11 = dVar11 * dVar15;
    }
    else {
      uStack_f0 = 0;
      local_f8 = DAT_14c8464e8;
      dVar11 = DAT_14c8464e0;
      dVar9 = DAT_14c8464f0;
    }
  }
  dVar15 = dVar13 * local_f8 - dVar11 * dVar10;
  dVar14 = dVar12 * dVar11 - dVar9 * dVar13;
  dVar18 = dVar10 * dVar9 - local_f8 * dVar12;
  dVar16 = dVar15 * dVar15 + dVar18 * dVar18 + dVar14 * dVar14;
  if (((dVar16 != 1.0) || (dVar19 = dVar18, dVar1 = dVar15, dVar4 = dVar14, NAN(dVar16))) &&
     (dVar19 = DAT_14c8464e0, dVar1 = DAT_14c8464f0, dVar4 = DAT_14c8464e8,
     9.99999993922529e-09 <= dVar16)) {
    dVar16 = 1.0 / SQRT(dVar16);
    dVar19 = dVar18 * dVar16;
    dVar1 = dVar15 * dVar16;
    dVar4 = dVar14 * dVar16;
  }
  dVar18 = param_5[2] - param_1[2];
  dVar3 = param_5[1] - param_1[1];
  dVar2 = *param_5 - *param_1;
  dVar15 = *param_6;
  dVar14 = param_6[1];
  dVar16 = param_6[2];
  dVar8 = dVar12 * dVar16 + dVar13 * dVar15 + dVar10 * dVar14;
  dVar12 = dVar12 * dVar18 + dVar13 * dVar2 + dVar10 * dVar3;
  dVar17 = dVar1 * dVar18 + dVar19 * dVar2 + dVar4 * dVar3;
  dVar10 = dVar18 * dVar9 + dVar2 * dVar11 + dVar3 * local_f8;
  dVar13 = param_4 * 0.5;
  dVar18 = param_3 * param_3;
  local_100 = param_3;
  local_e8 = param_4;
  if (ABS(dVar8 + -1.0) <= 9.99999993922529e-09) {
    if ((dVar18 - dVar10 * dVar10) - dVar17 * dVar17 < 0.0) goto LAB_1484298d1;
    if (dVar8 <= 0.0) {
      dVar11 = dVar12 - dVar13;
      local_d8[1] = dVar13 + dVar12;
    }
    else {
      dVar11 = -dVar12 - dVar13;
      local_d8[1] = dVar13 - dVar12;
    }
LAB_148429b23:
    bVar5 = 1;
LAB_148429b25:
    if (0.0 <= dVar11) {
      *param_7 = 1;
      *param_8 = dVar11;
      goto LAB_1484298d4;
    }
    if ((bool)(bVar5 & 0.0 <= local_d8[1])) {
      *param_7 = 1;
      *param_8 = local_d8[1];
      goto LAB_1484298d4;
    }
  }
  else {
    dVar1 = dVar1 * dVar16 + dVar19 * dVar15 + dVar4 * dVar14;
    dVar11 = dVar9 * dVar16 + dVar11 * dVar15 + local_f8 * dVar14;
    if (1e-08 < ABS(dVar8)) {
      dVar15 = (-dVar13 - dVar12) * (1.0 / dVar8);
      dVar9 = dVar15 * dVar11 + dVar10;
      dVar14 = dVar15 * dVar1 + dVar17;
      dVar9 = dVar9 * dVar9 + dVar14 * dVar14;
      if (dVar9 <= dVar18) {
        local_d8[0] = dVar15;
      }
      uVar7 = (ulonglong)(dVar9 <= dVar18);
      dVar14 = (dVar13 - dVar12) * (1.0 / dVar8);
      dVar12 = dVar14 * dVar11 + dVar10;
      dVar13 = dVar14 * dVar1 + dVar17;
      if (dVar12 * dVar12 + dVar13 * dVar13 <= dVar18) {
        local_d8[uVar7] = dVar14;
        uVar7 = 1;
        if (dVar18 < dVar9) goto LAB_148429803;
        goto LAB_148429c5f;
      }
LAB_148429803:
      iVar6 = (int)uVar7;
      dVar9 = dVar10 * dVar11 + dVar17 * dVar1;
      dVar11 = dVar11 * dVar11 + dVar1 * dVar1;
      dVar10 = dVar9 * dVar9 - ((dVar10 * dVar10 + dVar17 * dVar17) - dVar18) * dVar11;
      if (ABS(dVar10) <= 1e-08) {
        dVar11 = -dVar9 / dVar11;
        if (dVar15 <= dVar14) {
LAB_148429c38:
          iVar6 = (int)uVar7;
          if ((dVar11 < dVar15) || (dVar14 < dVar11)) goto LAB_148429c51;
        }
        else {
LAB_148429b80:
          iVar6 = (int)uVar7;
          if ((dVar11 < dVar14) || (dVar15 < dVar11)) goto LAB_148429c51;
        }
        iVar6 = (int)uVar7 + 1;
        local_d8[uVar7] = dVar11;
LAB_148429c51:
        if (iVar6 == 1) {
          bVar5 = 0;
          dVar11 = local_d8[0];
          local_d8[1] = local_d8[0];
          goto LAB_148429b25;
        }
        if (iVar6 != 2) goto LAB_1484298d1;
      }
      else {
        if (dVar10 <= 0.0) goto LAB_148429c51;
        if (dVar10 < 0.0) {
          dVar10 = sqrt(dVar10);
        }
        else {
          dVar10 = SQRT(dVar10);
        }
        dVar11 = 1.0 / dVar11;
        dVar12 = (-dVar9 - dVar10) * dVar11;
        if (dVar15 <= dVar14) {
          if ((dVar15 <= dVar12) && (dVar12 <= dVar14)) {
            local_d8[uVar7] = dVar12;
            if (iVar6 != 0) goto LAB_148429c5f;
            uVar7 = 1;
          }
          dVar11 = dVar11 * (dVar10 - dVar9);
          goto LAB_148429c38;
        }
        if ((dVar12 < dVar14) || (dVar15 < dVar12)) {
LAB_148429c00:
          dVar11 = dVar11 * (dVar10 - dVar9);
          goto LAB_148429b80;
        }
        local_d8[uVar7] = dVar12;
        if (iVar6 == 0) {
          uVar7 = 1;
          goto LAB_148429c00;
        }
      }
LAB_148429c5f:
      bVar5 = 1;
      dVar11 = local_d8[0];
      if (local_d8[1] < local_d8[0]) {
        dVar11 = local_d8[1];
        local_d8[1] = local_d8[0];
      }
      goto LAB_148429b25;
    }
    if (ABS(dVar12) <= dVar13) {
      dVar15 = dVar10 * dVar11 + dVar17 * dVar1;
      dVar14 = dVar11 * dVar11 + dVar1 * dVar1;
      dVar9 = dVar15 * dVar15 - ((dVar10 * dVar10 + dVar17 * dVar17) - dVar18) * dVar14;
      if (ABS(dVar9) <= 1e-08) {
        dVar11 = -dVar15 / dVar14;
        bVar5 = 0;
        local_d8[1] = dVar11;
        goto LAB_148429b25;
      }
      if (0.0 < dVar9) {
        if (dVar9 < 0.0) {
          dVar9 = sqrt(dVar9);
        }
        else {
          dVar9 = SQRT(dVar9);
        }
        dVar11 = (-dVar15 - dVar9) * (1.0 / dVar14);
        local_d8[1] = (dVar9 - dVar15) * (1.0 / dVar14);
        goto LAB_148429b23;
      }
    }
  }
LAB_1484298d1:
  *param_7 = 0;
LAB_1484298d4:
  if ((local_c0 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148429e24 FUN_148429e24 body=219 status=ok
// SIG undefined FUN_148429e24(void)

void FUN_148429e24(longlong *param_1,undefined8 param_2,void *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  undefined1 auStack_168 [32];
  undefined1 local_148 [96];
  undefined8 local_e8;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_168;
  memcpy(local_148,param_3,0x110);
  cVar4 = (**(code **)(*param_1 + 0x540))(param_1,param_2,&DAT_14c8464e0,local_148);
  if (cVar4 != '\0') {
    (**(code **)(*param_1 + 0x648))(param_1,local_e8);
    lVar3 = param_1[0x2d];
    if ((longlong)(int)lVar3 != 0) {
      lVar1 = param_1[0x2c];
      lVar5 = 0;
      do {
        plVar2 = *(longlong **)(lVar1 + lVar5);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x2a0))(plVar2,param_2,local_148);
        }
        lVar5 = lVar5 + 8;
      } while ((longlong)(int)lVar3 * 8 != lVar5);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148429f00 FUN_148429f00 body=439 status=ok
// SIG undefined FUN_148429f00(void)

char * FUN_148429f00(longlong *param_1,char *param_2,undefined8 param_3,undefined8 *param_4,
                    undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 local_110;
  char *local_100;
  undefined8 local_f8;
  double dStack_f0;
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
  undefined8 local_b8 [12];
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  *param_2 = '\0';
  param_2[8] = '\0';
  param_2[9] = '\0';
  param_2[10] = '\0';
  param_2[0xb] = -0x20;
  param_2[0xc] = -1;
  param_2[0xd] = -1;
  param_2[0xe] = -0x11;
  param_2[0xf] = 'G';
  param_2[0x10] = '\0';
  param_2[0x11] = '\0';
  param_2[0x12] = '\0';
  param_2[0x13] = '\0';
  param_2[0x14] = '\0';
  param_2[0x15] = '\0';
  param_2[0x16] = '\0';
  param_2[0x17] = '\0';
  param_2[0x18] = '\0';
  param_2[0x19] = '\0';
  param_2[0x1a] = '\0';
  param_2[0x1b] = '\0';
  param_2[0x1c] = '\0';
  param_2[0x1d] = '\0';
  param_2[0x1e] = '\0';
  param_2[0x1f] = '\0';
  param_2[0x20] = '\0';
  param_2[0x21] = '\0';
  param_2[0x22] = '\0';
  param_2[0x23] = '\0';
  param_2[0x24] = '\0';
  param_2[0x25] = '\0';
  param_2[0x26] = -0x10;
  param_2[0x27] = '?';
  param_2[0x28] = '\0';
  param_2[0x2c] = '\0';
  param_2[0x2d] = '\0';
  param_2[0x2e] = '\0';
  param_2[0x2f] = '\0';
  param_2[0x30] = '\0';
  param_2[0x31] = '\0';
  param_2[0x32] = '\0';
  param_2[0x33] = '\0';
  param_2[0x34] = '\0';
  param_2[0x35] = '\0';
  param_2[0x36] = '\0';
  param_2[0x37] = '\0';
  param_2[0x38] = '\0';
  param_2[0x39] = '\0';
  param_2[0x3a] = '\0';
  param_2[0x3b] = '\0';
  param_2[0x3c] = '\0';
  param_2[0x3d] = '\0';
  param_2[0x3e] = '\0';
  param_2[0x3f] = '\0';
  puVar6 = local_b8;
  for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *param_4;
    param_4 = param_4 + 1;
    puVar6 = puVar6 + 1;
  }
  cVar3 = (**(code **)(*param_1 + 0x550))(param_1,param_3,&DAT_14c8464e0);
  if (cVar3 != '\0') {
    (**(code **)(*param_1 + 0x648))(param_1,local_58);
    lVar4 = param_1[0x2d];
    if ((longlong)(int)lVar4 != 0) {
      local_100 = param_2 + 0x38;
      lVar1 = param_1[0x2c];
      lVar5 = 0;
      do {
        plVar2 = *(longlong **)(lVar1 + lVar5);
        if (plVar2 != (longlong *)0x0) {
          local_110 = param_6;
          local_118 = param_5;
          (**(code **)(*plVar2 + 0x2a8))(plVar2,&local_f8,param_3,local_b8);
          if ((*param_2 != '\x01') || (dStack_f0 < *(double *)(param_2 + 8))) {
            *(undefined4 *)(param_2 + 0x30) = local_c8;
            *(undefined4 *)(param_2 + 0x34) = uStack_c4;
            *(undefined4 *)(param_2 + 0x38) = uStack_c0;
            *(undefined4 *)(param_2 + 0x3c) = uStack_bc;
            *(undefined4 *)(param_2 + 0x20) = local_d8;
            *(undefined4 *)(param_2 + 0x24) = uStack_d4;
            *(undefined4 *)(param_2 + 0x28) = uStack_d0;
            *(undefined4 *)(param_2 + 0x2c) = uStack_cc;
            *(undefined4 *)(param_2 + 0x10) = local_e8;
            *(undefined4 *)(param_2 + 0x14) = uStack_e4;
            *(undefined4 *)(param_2 + 0x18) = uStack_e0;
            *(undefined4 *)(param_2 + 0x1c) = uStack_dc;
            *(undefined8 *)param_2 = local_f8;
            *(double *)(param_2 + 8) = dStack_f0;
            if (*(char *)((longlong)param_1 + 0x159) == '\x01') {
              FUN_14485c47a(local_100,param_1);
              *(longlong **)(param_2 + 0x30) = param_1;
              *(int *)(param_2 + 0x2c) = (int)param_1[6];
            }
          }
        }
        lVar5 = lVar5 + 8;
      } while ((longlong)(int)lVar4 * 8 != lVar5);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14842a0b8 FUN_14842a0b8 body=175 status=ok
// SIG undefined FUN_14842a0b8(void)

void FUN_14842a0b8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x168);
  if ((longlong)iVar2 != 0) {
    lVar1 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x160) + lVar1) == param_2) {
        return;
      }
      lVar1 = lVar1 + 8;
    } while ((longlong)iVar2 * 8 - lVar1 != 0);
  }
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
    iVar2 = *(int *)(param_1 + 0x168);
  }
  *(uint *)(param_1 + 0x168) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x16c) < iVar2 + 1U) {
    FUN_14844d4aa((longlong *)(param_1 + 0x160),iVar2);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x160) + (longlong)iVar2 * 8) = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
    return;
  }
  return;
}



// FUNCTION 14842a168 FUN_14842a168 body=271 status=ok
// SIG undefined FUN_14842a168(void)

void FUN_14842a168(longlong param_1,longlong param_2)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (param_2 != 0) {
    if (DAT_14c950c29 == 1) {
      FUN_14689c22e(param_2);
    }
    iVar3 = *(int *)(param_1 + 0x168);
    if ((longlong)iVar3 != 0) {
      lVar1 = *(longlong *)(param_1 + 0x160);
      iVar4 = 1;
      lVar6 = 0;
      lVar7 = 0;
      bVar2 = DAT_14c950c29;
      do {
        if ((bVar2 & 1) != 0) {
          FUN_14689c22e(param_2);
          bVar2 = DAT_14c950c29;
        }
        if (*(longlong *)(lVar1 + lVar6) == param_2) {
          if (iVar4 == 0) {
            return;
          }
          iVar3 = *(int *)(param_1 + 0x168);
          iVar4 = iVar3 - iVar4;
          if (iVar4 != 0) {
            iVar5 = 1;
            if (iVar4 < 1) {
              iVar5 = iVar4;
            }
            memmove((void *)(*(longlong *)(param_1 + 0x160) + (lVar7 >> 0x20) * 8),
                    (void *)(*(longlong *)(param_1 + 0x160) + (longlong)(iVar3 - iVar5) * 8),
                    (longlong)iVar5 << 3);
            iVar3 = *(int *)(param_1 + 0x168);
          }
          *(int *)(param_1 + 0x168) = iVar3 + -1;
          FUN_14844d530(param_1 + 0x160);
          return;
        }
        lVar7 = lVar7 + 0x100000000;
        iVar4 = iVar4 + 1;
        lVar6 = lVar6 + 8;
      } while ((longlong)iVar3 * 8 != lVar6);
    }
  }
  return;
}



// FUNCTION 14842a278 FUN_14842a278 body=113 status=ok
// SIG undefined FUN_14842a278(void)

undefined8 FUN_14842a278(longlong *param_1,undefined4 param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if ((int)param_1[6] == param_3) {
    (**(code **)(*param_1 + 0x2b0))(param_1,param_2);
LAB_14842a296:
    uVar5 = 1;
  }
  else {
    lVar3 = param_1[0x2d];
    if ((longlong)(int)lVar3 != 0) {
      lVar1 = param_1[0x2c];
      lVar6 = 0;
      do {
        plVar2 = *(longlong **)(lVar1 + lVar6);
        if (plVar2 != (longlong *)0x0) {
          cVar4 = (**(code **)(*plVar2 + 0x360))(plVar2,param_2,param_3);
          if (cVar4 != '\0') goto LAB_14842a296;
        }
        lVar6 = lVar6 + 8;
      } while ((longlong)(int)lVar3 * 8 != lVar6);
    }
    uVar5 = 0;
  }
  return uVar5;
}



// FUNCTION 14842a2ea FUN_14842a2ea body=257 status=ok
// SIG undefined FUN_14842a2ea(void)

undefined1 * FUN_14842a2ea(longlong *param_1,undefined1 *param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined1 uVar5;
  longlong lVar6;
  char cVar7;
  undefined1 unaff_R13B;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined1 local_4a;
  char local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((int)param_1[6] == param_3) {
    uVar5 = (**(code **)(*param_1 + 0x2b8))();
    param_2[1] = 1;
    *param_2 = uVar5;
  }
  else {
    lVar3 = param_1[0x2d];
    local_58 = param_2;
    if ((longlong)(int)lVar3 != 0) {
      lVar1 = param_1[0x2c];
      lVar6 = 0;
      cVar7 = '\0';
      do {
        plVar2 = *(longlong **)(lVar1 + lVar6);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x368))(plVar2,&local_4a,param_3);
          if (cVar7 != '\0') {
            cVar7 = '\0';
          }
          uVar5 = local_4a;
          cVar4 = '\x01';
          if (local_49 == '\0') {
            uVar5 = unaff_R13B;
            cVar4 = cVar7;
          }
          cVar7 = cVar4;
          unaff_R13B = uVar5;
          if (cVar7 != '\0') {
            local_58[1] = cVar7;
            *local_58 = uVar5;
            param_2 = local_58;
            goto LAB_14842a321;
          }
        }
        lVar6 = lVar6 + 8;
      } while ((longlong)(int)lVar3 * 8 != lVar6);
    }
    local_58[1] = 0;
    param_2 = local_58;
  }
LAB_14842a321:
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14842a3ec FUN_14842a3ec body=113 status=ok
// SIG undefined FUN_14842a3ec(void)

undefined8 FUN_14842a3ec(longlong *param_1,undefined4 param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if ((int)param_1[6] == param_3) {
    (**(code **)(*param_1 + 0x2c0))(param_1,param_2);
LAB_14842a40a:
    uVar5 = 1;
  }
  else {
    lVar3 = param_1[0x2d];
    if ((longlong)(int)lVar3 != 0) {
      lVar1 = param_1[0x2c];
      lVar6 = 0;
      do {
        plVar2 = *(longlong **)(lVar1 + lVar6);
        if (plVar2 != (longlong *)0x0) {
          cVar4 = (**(code **)(*plVar2 + 0x370))(plVar2,param_2,param_3);
          if (cVar4 != '\0') goto LAB_14842a40a;
        }
        lVar6 = lVar6 + 8;
      } while ((longlong)(int)lVar3 * 8 != lVar6);
    }
    uVar5 = 0;
  }
  return uVar5;
}



// FUNCTION 14842a45e FUN_14842a45e body=257 status=ok
// SIG undefined FUN_14842a45e(void)

undefined1 * FUN_14842a45e(longlong *param_1,undefined1 *param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined1 uVar5;
  longlong lVar6;
  char cVar7;
  undefined1 unaff_R13B;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined1 local_4a;
  char local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((int)param_1[6] == param_3) {
    uVar5 = (**(code **)(*param_1 + 0x2c8))();
    param_2[1] = 1;
    *param_2 = uVar5;
  }
  else {
    lVar3 = param_1[0x2d];
    local_58 = param_2;
    if ((longlong)(int)lVar3 != 0) {
      lVar1 = param_1[0x2c];
      lVar6 = 0;
      cVar7 = '\0';
      do {
        plVar2 = *(longlong **)(lVar1 + lVar6);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x378))(plVar2,&local_4a,param_3);
          if (cVar7 != '\0') {
            cVar7 = '\0';
          }
          uVar5 = local_4a;
          cVar4 = '\x01';
          if (local_49 == '\0') {
            uVar5 = unaff_R13B;
            cVar4 = cVar7;
          }
          cVar7 = cVar4;
          unaff_R13B = uVar5;
          if (cVar7 != '\0') {
            local_58[1] = cVar7;
            *local_58 = uVar5;
            param_2 = local_58;
            goto LAB_14842a495;
          }
        }
        lVar6 = lVar6 + 8;
      } while ((longlong)(int)lVar3 * 8 != lVar6);
    }
    local_58[1] = 0;
    param_2 = local_58;
  }
LAB_14842a495:
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14842a560 FUN_14842a560 body=108 status=ok
// SIG undefined FUN_14842a560(void)

undefined8 FUN_14842a560(longlong param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (*(int *)(param_1 + 0x30) == param_3) {
    *(undefined4 *)(param_1 + 0x98) = param_2;
LAB_14842a579:
    uVar5 = 1;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x168);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x160);
      lVar6 = 0;
      do {
        plVar3 = *(longlong **)(lVar2 + lVar6);
        if (plVar3 != (longlong *)0x0) {
          cVar4 = (**(code **)(*plVar3 + 0x380))(plVar3,param_2,param_3);
          if (cVar4 != '\0') goto LAB_14842a579;
        }
        lVar6 = lVar6 + 8;
      } while ((longlong)iVar1 * 8 != lVar6);
    }
    uVar5 = 0;
  }
  return uVar5;
}



// FUNCTION 14842a5cc FUN_14842a5cc body=248 status=ok
// SIG undefined FUN_14842a5cc(void)

undefined4 * FUN_14842a5cc(longlong *param_1,undefined4 *param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 unaff_EBP;
  longlong lVar5;
  char cVar6;
  undefined1 auStack_78 [32];
  undefined4 *local_58;
  undefined4 local_50;
  char local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((int)param_1[6] == param_3) {
    uVar4 = (**(code **)(*param_1 + 0x358))();
    *(undefined1 *)(param_2 + 1) = 1;
    *param_2 = uVar4;
  }
  else {
    lVar3 = param_1[0x2d];
    local_58 = param_2;
    if ((longlong)(int)lVar3 != 0) {
      lVar1 = param_1[0x2c];
      lVar5 = 0;
      cVar6 = '\0';
      do {
        plVar2 = *(longlong **)(lVar1 + lVar5);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x388))(plVar2,&local_50,param_3);
          if (cVar6 != '\0') {
            cVar6 = '\0';
          }
          if (local_4c != '\0') {
            unaff_EBP = local_50;
            cVar6 = '\x01';
          }
          if (cVar6 != '\0') {
            *(char *)(local_58 + 1) = cVar6;
            *local_58 = unaff_EBP;
            param_2 = local_58;
            goto LAB_14842a603;
          }
        }
        lVar5 = lVar5 + 8;
      } while ((longlong)(int)lVar3 * 8 != lVar5);
    }
    *(undefined1 *)(local_58 + 1) = 0;
    param_2 = local_58;
  }
LAB_14842a603:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14842a6ee FUN_14842a6ee body=410 status=ok
// SIG undefined FUN_14842a6ee(void)

undefined1 * FUN_14842a6ee(longlong param_1,undefined1 *param_2,longlong param_3)

{
  code *pcVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  float fVar9;
  undefined1 auStack_168 [32];
  longlong local_148;
  longlong local_140;
  undefined8 local_138 [4];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_d8 [12];
  double local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (((*(longlong *)(param_1 + 8) != 0) && (*(longlong *)(param_1 + 0x10) != 0)) &&
     (plVar5 = *(longlong **)(param_1 + 0x18), plVar5 != (longlong *)0x0)) {
    pcVar1 = *(code **)(param_1 + 0x28);
    if (pcVar1 != (code *)0x0) {
      plVar5 = (longlong *)(param_1 + 0x48);
      if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
        plVar5 = *(longlong **)(param_1 + 0x38);
      }
      uVar4 = (**(code **)(*plVar5 + 8))();
      cVar3 = (*pcVar1)(uVar4,param_3);
      if (cVar3 == '\0') goto LAB_14842a761;
      plVar5 = *(longlong **)(param_1 + 0x18);
    }
    local_78 = 1.0;
    local_70 = 1;
    (**(code **)(*plVar5 + 0x2b0))(plVar5,local_138);
    lVar2 = *(longlong *)(param_1 + 0x10);
    puVar7 = local_138;
    puVar8 = local_d8;
    for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    local_68 = local_118;
    uStack_60 = uStack_110;
    local_58 = local_108;
    lVar6 = lVar2 + 0x28;
    if (lVar2 == 0) {
      lVar6 = 0;
    }
    fVar9 = (float)FUN_14841f855(lVar6);
    local_78 = (double)fVar9;
    local_70 = (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x38))(lVar2 + 0x28);
    local_140 = param_3 + 0x18;
    local_148 = param_3;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x2a8))
              (*(longlong **)(param_1 + 8),param_2,*(undefined8 *)(param_1 + 0x10),local_d8);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_168);
  }
LAB_14842a761:
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0x47efffffe0000000;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0x3ff0000000000000;
  param_2[0x28] = 0;
  *(undefined8 *)(param_2 + 0x2c) = 0;
  *(undefined8 *)(param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  if ((local_48 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14842a88e FUN_14842a88e body=79 status=ok
// SIG undefined FUN_14842a88e(void)

void FUN_14842a88e(longlong param_1,char param_2)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  longlong *plVar2;
  undefined8 uVar3;
  
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    return;
  }
  if (param_2 == '\0') {
    iVar1 = (**(code **)(*plVar2 + 0x358))();
    if (iVar1 == 2) {
      return;
    }
    plVar2 = *(longlong **)(param_1 + 8);
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar2 + 0x350);
    uVar3 = 0;
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar2 + 0x350);
    uVar3 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014842a8b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar2,uVar3);
  return;
}



// FUNCTION 14842a8fa FUN_14842a8fa body=410 status=ok
// SIG undefined FUN_14842a8fa(void)

undefined1 * FUN_14842a8fa(longlong param_1,undefined1 *param_2,longlong param_3)

{
  code *pcVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  float fVar9;
  undefined1 auStack_168 [32];
  longlong local_148;
  longlong local_140;
  undefined8 local_138 [4];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_d8 [12];
  double local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (((*(longlong *)(param_1 + 8) != 0) && (*(longlong *)(param_1 + 0x10) != 0)) &&
     (plVar5 = *(longlong **)(param_1 + 0x18), plVar5 != (longlong *)0x0)) {
    pcVar1 = *(code **)(param_1 + 0x28);
    if (pcVar1 != (code *)0x0) {
      plVar5 = (longlong *)(param_1 + 0x48);
      if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
        plVar5 = *(longlong **)(param_1 + 0x38);
      }
      uVar4 = (**(code **)(*plVar5 + 8))();
      cVar3 = (*pcVar1)(uVar4,param_3);
      if (cVar3 == '\0') goto LAB_14842a96d;
      plVar5 = *(longlong **)(param_1 + 0x18);
    }
    local_78 = 1.0;
    local_70 = 1;
    (**(code **)(*plVar5 + 0x2b0))(plVar5,local_138);
    lVar2 = *(longlong *)(param_1 + 0x10);
    puVar7 = local_138;
    puVar8 = local_d8;
    for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    local_68 = local_118;
    uStack_60 = uStack_110;
    local_58 = local_108;
    lVar6 = lVar2 + 0x28;
    if (lVar2 == 0) {
      lVar6 = 0;
    }
    fVar9 = (float)FUN_14841f855(lVar6);
    local_78 = (double)fVar9;
    local_70 = (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x38))(lVar2 + 0x28);
    local_140 = param_3 + 0x18;
    local_148 = param_3;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x2a8))
              (*(longlong **)(param_1 + 8),param_2,*(undefined8 *)(param_1 + 0x10),local_d8);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_168);
  }
LAB_14842a96d:
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0x47efffffe0000000;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0x3ff0000000000000;
  param_2[0x28] = 0;
  *(undefined8 *)(param_2 + 0x2c) = 0;
  *(undefined8 *)(param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  if ((local_48 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14842aa9a FUN_14842aa9a body=153 status=ok
// SIG undefined FUN_14842aa9a(void)

void FUN_14842aa9a(longlong param_1,char param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined1 auStack_58 [40];
  int local_30;
  char local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = *(longlong **)(param_1 + 8);
  if (plVar1 != (longlong *)0x0) {
    if (param_2 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
    (**(code **)(*plVar1 + 0x388))(plVar1,&local_30,param_3);
    if ((local_2c != '\x01') || (local_30 != 2)) {
      (**(code **)(**(longlong **)(param_1 + 8) + 0x380))(*(longlong **)(param_1 + 8),0,param_3);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14842ab8e FUN_14842ab8e body=128 status=ok
// SIG undefined FUN_14842ab8e(void)

void FUN_14842ab8e(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 local_49;
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14842ac10(param_4 + 0xcc,param_1 + 0x21);
  local_60 = local_48;
  local_68 = &local_49;
  (**(code **)(*param_1 + 0x538))(param_1,param_2,param_3,param_4);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14842ac10 FUN_14842ac10 body=121 status=ok
// SIG undefined FUN_14842ac10(void)

void FUN_14842ac10(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if ((*(char *)(param_2 + 2) == '\x01') &&
     ((*(char *)((longlong)param_1 + 0x11) != '\x01' || (*(char *)(param_1 + 2) == '\0')))) {
    uVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    *(undefined1 *)(param_1 + 2) = 1;
    *(undefined1 *)((longlong)param_1 + 0x11) = *(undefined1 *)((longlong)param_2 + 0x11);
  }
  if ((*(char *)((longlong)param_2 + 0x24) == '\x01') &&
     ((*(char *)((longlong)param_1 + 0x25) != '\x01' ||
      (*(char *)((longlong)param_1 + 0x24) == '\0')))) {
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x1c);
    *(undefined8 *)((longlong)param_1 + 0x14) = *(undefined8 *)((longlong)param_2 + 0x14);
    *(undefined8 *)((longlong)param_1 + 0x1c) = uVar1;
    *(undefined1 *)((longlong)param_1 + 0x24) = 1;
    *(undefined1 *)((longlong)param_1 + 0x25) = *(undefined1 *)((longlong)param_2 + 0x25);
  }
  if ((*(char *)(param_2 + 7) == '\x01') &&
     ((*(char *)((longlong)param_1 + 0x39) != '\x01' || (*(char *)(param_1 + 7) == '\0')))) {
    uVar1 = param_2[6];
    param_1[5] = param_2[5];
    param_1[6] = uVar1;
    *(undefined1 *)(param_1 + 7) = 1;
    *(undefined1 *)((longlong)param_1 + 0x39) = *(undefined1 *)((longlong)param_2 + 0x39);
  }
  return;
}



// FUNCTION 14842ae56 FUN_14842ae56 body=959 status=ok
// SIG undefined FUN_14842ae56(void)

void FUN_14842ae56(longlong *param_1,longlong *param_2,void *param_3)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined1 auStack_1e8 [32];
  undefined1 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1b8;
  undefined1 local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  float local_19c;
  undefined1 local_198 [104];
  int local_130;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  char local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  char local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  char local_94;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  memcpy(local_198,param_3,0x110);
  cVar1 = (**(code **)(*param_1 + 0x540))(param_1,param_2,param_1 + 0x2d,local_198);
  if ((cVar1 != '\0') && (1 < (int)param_1[0x2c])) {
    plVar3 = (longlong *)(**(code **)(*param_2 + 8))(param_2);
    FUN_14842b216(param_1,param_3,1);
    lVar4 = (**(code **)(*param_2 + 0x10))(param_2);
    uVar10 = (**(code **)(*param_1 + 0x558))
                       (param_1,*(double *)(lVar4 + 0x8a8) <= 1.0 &&
                                *(double *)(lVar4 + 0x8a8) != 1.0,*(undefined4 *)(lVar4 + 0x1de8));
    if ((local_130 != 2) &&
       (local_a4 = local_b8, local_a0 = local_b4, local_9c = local_b0, local_98 = local_ac,
       local_94 = local_a8, local_130 != 1)) {
      local_a4 = local_cc;
      local_a0 = local_c8;
      local_9c = local_c4;
      local_98 = local_c0;
      local_94 = local_bc;
    }
    if (local_94 != '\x01') {
      local_98 = 1.0;
      local_9c = 1.0;
      local_a0 = 1.0;
      local_a4 = 1.0;
    }
    if (local_98 <= 0.0) {
      local_98 = 0.0;
    }
    if (1.0 <= local_98) {
      local_98 = 1.0;
    }
    uVar2 = (uint)(local_98 * 255.0 + 0.5);
    if (local_9c <= 0.0) {
      local_9c = 0.0;
    }
    if (1.0 <= local_9c) {
      local_9c = 1.0;
    }
    uVar5 = (uint)(local_9c * 255.0 + 0.5);
    if (local_a0 <= 0.0) {
      local_a0 = 0.0;
    }
    if (1.0 <= local_a0) {
      local_a0 = 1.0;
    }
    uVar6 = (uint)(local_a0 * 255.0 + 0.5);
    if (local_a4 <= 0.0) {
      local_a4 = 0.0;
    }
    if (1.0 <= local_a4) {
      local_a4 = 1.0;
    }
    uVar8 = (uint)(local_a4 * 255.0 + 0.5);
    if ((char)param_1[0x36] == '\0') {
      if (0 < (int)param_1[0x38]) {
        iVar7 = 0;
        lVar4 = 0x18;
        do {
          local_1b0 = (undefined1)param_1[0x29];
          local_1a8 = (&DAT_14c758c60)[uVar8 & 0xff];
          local_1a4 = (&DAT_14c758c60)[uVar6 & 0xff];
          local_1a0 = (&DAT_14c758c60)[uVar5 & 0xff];
          local_1b8 = 0;
          local_1c8 = 1;
          local_1c0 = uVar10;
          local_19c = (float)(uVar2 & 0xff) * 0.003921569;
          (**(code **)(*plVar3 + 0x30))
                    (plVar3,param_1[0x37] + lVar4 + -0x18,param_1[0x37] + lVar4,&local_1a8);
          iVar7 = iVar7 + 2;
          lVar4 = lVar4 + 0x30;
        } while (iVar7 < (int)param_1[0x38]);
      }
    }
    else if (1 < (int)param_1[0x38]) {
      lVar9 = 0x18;
      lVar4 = 0;
      do {
        lVar4 = lVar4 + 1;
        local_1b0 = (undefined1)param_1[0x29];
        local_1a8 = (&DAT_14c758c60)[uVar8 & 0xff];
        local_1a4 = (&DAT_14c758c60)[uVar6 & 0xff];
        local_1a0 = (&DAT_14c758c60)[uVar5 & 0xff];
        local_1b8 = 0;
        local_1c8 = 1;
        local_1c0 = uVar10;
        local_19c = (float)(uVar2 & 0xff) * 0.003921569;
        (**(code **)(*plVar3 + 0x30))
                  (plVar3,param_1[0x37] + lVar9 + -0x18,param_1[0x37] + lVar9,&local_1a8);
        lVar9 = lVar9 + 0x18;
      } while (lVar4 < (longlong)(int)param_1[0x38] + -1);
    }
  }
  if ((local_80 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14842b216 FUN_14842b216 body=1471 status=ok
// SIG undefined FUN_14842b216(void)

void FUN_14842b216(longlong param_1,double *param_2,char param_3)

{
  longlong lVar1;
  double dVar2;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  longlong lVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [12];
  double *pdVar19;
  int iVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  double dVar24;
  double dVar25;
  double dVar26;
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
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dStack_140;
  double local_128;
  double dStack_120;
  double dVar3;
  
  dVar26 = *(double *)(param_1 + 0x180);
  dVar29 = *(double *)(param_1 + 0x188);
  dVar13 = *param_2;
  dVar14 = *(double *)*(undefined1 (*) [12])(param_2 + 1);
  auVar18 = *(undefined1 (*) [12])(param_2 + 1);
  dVar9 = SUB168(*(undefined1 (*) [16])(param_2 + 2),0);
  dVar15 = param_2[8];
  dVar16 = param_2[9];
  dVar17 = param_2[10];
  dVar37 = dVar29 * dVar13 - dVar26 * dVar14;
  dVar39 = *(double *)(param_1 + 400) * dVar14 - dVar29 * dVar9;
  dVar34 = dVar26 * dVar9 - *(double *)(param_1 + 400) * dVar13;
  dVar11 = *(double *)(param_1 + 0x198);
  dVar38 = *(double *)(param_1 + 0x1a0);
  dVar35 = dVar38 * dVar13 - dVar14 * dVar11;
  dVar36 = *(double *)(param_1 + 0x1a8) * dVar14 - dVar9 * dVar38;
  dVar40 = dVar11 * dVar9 - *(double *)(param_1 + 0x1a8) * dVar13;
  pdVar19 = (double *)&DAT_14c8464e0;
  if (param_3 != '\0') {
    pdVar19 = (double *)(param_1 + 0x168);
  }
  dVar28 = *pdVar19 * dVar15;
  dVar30 = pdVar19[1] * dVar16;
  dVar24 = pdVar19[2] * dVar17;
  dVar25 = dVar30 * dVar13 - dVar14 * dVar28;
  dVar27 = dVar24 * dVar14 - dVar9 * dVar30;
  dVar31 = dVar28 * dVar9 - dVar13 * dVar24;
  dVar2 = param_2[3];
  dVar3 = param_2[3];
  dVar27 = dVar27 + dVar27;
  dVar31 = dVar31 + dVar31;
  dVar25 = dVar25 + dVar25;
  auVar10._12_4_ = SUB164(*(undefined1 (*) [16])(param_2 + 2),4);
  auVar10._0_12_ = auVar18;
  dVar37 = dVar37 + dVar37;
  dVar32 = *(double *)(param_1 + 400);
  dVar35 = dVar35 + dVar35;
  auVar12._8_4_ = SUB84(dVar3,0);
  auVar12._0_8_ = dVar2;
  auVar12._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  dVar4 = *(double *)(param_1 + 0x1a8);
  dVar6 = param_2[4];
  dVar7 = param_2[5];
  dVar5 = param_2[6];
  lVar1 = param_1 + 0x1b8;
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  if (*(int *)(param_1 + 0x1c4) < 0) {
    FUN_1447a8aa0(lVar1,0);
  }
  iVar20 = *(int *)(param_1 + 0x160);
  if (-1 < iVar20) {
    if (*(int *)(param_1 + 0x1c4) < iVar20) {
      FUN_1447a8aa0(lVar1);
      iVar20 = *(int *)(param_1 + 0x160);
    }
    if (0 < iVar20) {
      dVar39 = dVar39 + dVar39;
      dVar34 = dVar34 + dVar34;
      dVar36 = dVar36 + dVar36;
      dVar40 = dVar40 + dVar40;
      local_128 = auVar18._0_8_;
      dStack_120 = auVar10._8_8_;
      dStack_140 = auVar12._8_8_;
      dVar32 = dVar2 * dVar37 + dVar32 + (dVar34 * dVar13 - local_128 * dVar39);
      dVar33 = (dVar37 * dVar14 - dStack_120 * dVar34) + dVar26 + dVar39 * dVar2;
      dVar34 = (dVar9 * dVar39 - dVar37 * dVar13) + dVar29 + dVar34 * dStack_140;
      dVar29 = dVar2 * dVar35 + dVar4 + (dVar40 * dVar13 - local_128 * dVar36);
      dVar26 = (dVar35 * dVar14 - dStack_120 * dVar40) + dVar11 + dVar36 * dVar2;
      dVar35 = (dVar9 * dVar36 - dVar13 * dVar35) + dVar38 + dVar40 * dStack_140;
      lVar22 = 0x10;
      lVar23 = 0;
      do {
        lVar21 = *(longlong *)(param_1 + 0x158);
        dVar11 = *(double *)(lVar21 + lVar22) * dVar17;
        dVar37 = *(double *)(lVar21 + -8 + lVar22) * dVar16;
        dVar38 = *(double *)(lVar21 + -0x10 + lVar22) * dVar15;
        iVar20 = *(int *)(param_1 + 0x1c0);
        lVar21 = (longlong)iVar20;
        *(uint *)(param_1 + 0x1c0) = iVar20 + 1U;
        if (*(uint *)(param_1 + 0x1c4) < iVar20 + 1U) {
          FUN_1403e3958(lVar1,iVar20);
        }
        lVar8 = *(longlong *)(param_1 + 0x1b8);
        *(double *)(lVar8 + lVar21 * 0x18) =
             dVar11 * dVar33 +
             dVar37 * dVar26 +
             dVar38 * (dVar35 * dVar32 - dVar34 * dVar29) +
             (dVar25 * dVar14 - dVar31 * dVar9) + dVar2 * dVar27 + dVar28 + dVar6;
        *(double *)(lVar8 + 8 + lVar21 * 0x18) =
             dVar34 * dVar11 +
             dVar35 * dVar37 +
             (dVar29 * dVar33 - dVar32 * dVar26) * dVar38 +
             (dVar9 * dVar27 - dVar13 * dVar25) + dVar3 * dVar31 + dVar30 + dVar7;
        *(double *)(lVar8 + 0x10 + lVar21 * 0x18) =
             dVar32 * dVar11 +
             dVar29 * dVar37 +
             (dVar26 * dVar34 - dVar33 * dVar35) * dVar38 +
             dVar25 * dVar2 + dVar24 + (dVar31 * dVar13 - dVar27 * dVar14) + dVar5;
        lVar23 = lVar23 + 1;
        lVar22 = lVar22 + 0x18;
      } while (lVar23 < *(int *)(param_1 + 0x160));
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar20);
}



// FUNCTION 14842b7d6 FUN_14842b7d6 body=833 status=ok
// SIG undefined FUN_14842b7d6(void)

undefined1 *
FUN_14842b7d6(longlong *param_1,undefined1 *param_2,undefined8 param_3,undefined8 *param_4,
             double *param_5,double *param_6)

{
  float fVar1;
  double dVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_178 [32];
  double *local_158;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  undefined8 local_f8 [12];
  double local_98;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_178;
  puVar6 = local_f8;
  for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *param_4;
    param_4 = param_4 + 1;
    puVar6 = puVar6 + 1;
  }
  cVar3 = (**(code **)(*param_1 + 0x550))(param_1,param_3,param_1 + 0x2d);
  if ((cVar3 != '\0') && (1 < (int)param_1[0x2c])) {
    fVar1 = *(float *)(param_1 + 0x20);
    FUN_14842b216(param_1,local_f8,0);
    local_140 = *param_5;
    local_138 = param_5[1];
    local_130 = param_5[2];
    local_128 = *param_6;
    local_120 = param_6[1];
    local_118 = param_6[2];
    dVar2 = local_118 * local_118 + local_128 * local_128 + local_120 * local_120;
    if (9.99999993922529e-09 < dVar2) {
      dVar2 = 1.0 / SQRT(dVar2);
      local_128 = local_128 * dVar2;
      local_120 = local_120 * dVar2;
      local_118 = local_118 * dVar2;
    }
    local_100 = local_118 * 10000.0 + local_130;
    local_108 = local_120 * 10000.0 + local_138;
    local_110 = local_128 * 10000.0 + local_140;
    local_148 = 0.0;
    if ((char)param_1[0x36] != '\0') {
      lVar7 = -1;
      lVar4 = 0;
      do {
        lVar7 = lVar7 + 1;
        if ((longlong)(int)param_1[0x38] + -1 <= lVar7) goto LAB_14842b867;
        local_158 = &local_148;
        cVar3 = FUN_143b5030a(&local_140,param_1[0x37] + lVar4,param_1[0x37] + lVar4 + 0x18,
                              (double)fVar1 * local_98);
        lVar4 = lVar4 + 0x18;
      } while (cVar3 == '\0');
LAB_14842ba64:
      *param_2 = 1;
      *(double *)(param_2 + 8) = (double)(float)local_148;
      *(undefined8 *)(param_2 + 0x10) = 0;
      *(undefined8 *)(param_2 + 0x18) = 0;
      *(undefined8 *)(param_2 + 0x20) = 0x3ff0000000000000;
      param_2[0x28] = 0;
      *(undefined8 *)(param_2 + 0x2c) = 0;
      *(undefined8 *)(param_2 + 0x34) = 0;
      *(undefined4 *)(param_2 + 0x3c) = 0;
      FUN_14485c47a(param_2 + 0x38,param_1);
      *(longlong **)(param_2 + 0x30) = param_1;
      *(int *)(param_2 + 0x2c) = (int)param_1[6];
      goto LAB_14842b89f;
    }
    if (0 < (int)param_1[0x38]) {
      lVar4 = 0x18;
      iVar5 = 0;
      do {
        local_158 = &local_148;
        cVar3 = FUN_143b5030a(&local_140,param_1[0x37] + lVar4 + -0x18,param_1[0x37] + lVar4,
                              (double)fVar1 * local_98);
        if (cVar3 != '\0') goto LAB_14842ba64;
        lVar4 = lVar4 + 0x30;
        iVar5 = iVar5 + 2;
      } while (iVar5 < (int)param_1[0x38]);
    }
  }
LAB_14842b867:
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0x47efffffe0000000;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0x3ff0000000000000;
  param_2[0x28] = 0;
  *(undefined8 *)(param_2 + 0x2c) = 0;
  *(undefined8 *)(param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
LAB_14842b89f:
  if ((local_80 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14842bb18 FUN_14842bb18 body=102 status=ok
// SIG undefined FUN_14842bb18(void)

void FUN_14842bb18(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 0x160) = iVar1;
  if (iVar1 == 0 && *(int *)(param_1 + 0x164) == 0) {
    *(undefined4 *)(param_1 + 0x164) = 0;
  }
  else {
    FUN_1405b70fe((undefined8 *)(param_1 + 0x158),iVar1);
    if (iVar1 != 0) {
      memcpy(*(void **)(param_1 + 0x158),_Src,(longlong)iVar1 * 0x18);
      return;
    }
  }
  return;
}



// FUNCTION 14842bd52 FUN_14842bd52 body=1975 status=ok
// SIG undefined FUN_14842bd52(void)

void FUN_14842bd52(longlong *param_1,longlong *param_2,void *param_3)

{
  float fVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auStack_2b8 [32];
  uint local_298;
  float local_290;
  float local_288;
  undefined8 local_280;
  undefined4 local_278;
  undefined4 local_270;
  undefined1 local_268;
  undefined1 local_258 [16];
  double local_248;
  double local_238;
  double dStack_230;
  double local_228;
  double local_218;
  double dStack_210;
  double local_208;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  int local_190;
  undefined1 local_18c [36];
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  char local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  char local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  char local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  char local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  char local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  char local_f4;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  memcpy(&local_1f8,param_3,0x110);
  cVar4 = (**(code **)(*param_1 + 0x540))(param_1,param_2,param_1 + 0x2b,&local_1f8);
  if (cVar4 != '\0') {
    dVar2 = (double)param_1[0x2f];
    dVar12 = (double)param_1[0x30];
    dVar13 = dVar12 * local_1f8 - dVar2 * dStack_1f0;
    dVar14 = (double)param_1[0x31] * dStack_1f0 - dVar12 * local_1e8;
    dVar18 = dVar2 * local_1e8 - (double)param_1[0x31] * local_1f8;
    dVar14 = dVar14 + dVar14;
    dVar18 = dVar18 + dVar18;
    dVar13 = dVar13 + dVar13;
    local_208 = dVar13 * dStack_1e0 + (double)param_1[0x31] +
                (dVar18 * local_1f8 - dVar14 * dStack_1f0);
    local_218 = (dVar13 * dStack_1f0 - dVar18 * local_1e8) + dStack_1e0 * dVar14 + dVar2;
    dStack_210 = (local_1e8 * dVar14 - local_1f8 * dVar13) + dStack_1e0 * dVar18 + dVar12;
    dVar18 = (double)param_1[0x32];
    dVar3 = (double)param_1[0x33];
    dVar16 = dVar3 * local_1f8 - dStack_1f0 * dVar18;
    dVar17 = (double)param_1[0x34] * dStack_1f0 - local_1e8 * dVar3;
    dVar19 = dVar18 * local_1e8 - (double)param_1[0x34] * local_1f8;
    dVar17 = dVar17 + dVar17;
    dVar19 = dVar19 + dVar19;
    dVar16 = dVar16 + dVar16;
    dVar2 = DAT_14c8464e0 * local_1b8;
    dStack_1b0 = DAT_14c8464e8 * dStack_1b0;
    local_1a8 = DAT_14c8464f0 * local_1a8;
    dVar12 = dStack_1b0 * local_1f8 - dStack_1f0 * dVar2;
    dVar13 = local_1a8 * dStack_1f0 - local_1e8 * dStack_1b0;
    dVar14 = dVar2 * local_1e8 - local_1f8 * local_1a8;
    dVar13 = dVar13 + dVar13;
    dVar14 = dVar14 + dVar14;
    dVar12 = dVar12 + dVar12;
    local_228 = dVar16 * dStack_1e0 + (double)param_1[0x34] +
                (dVar19 * local_1f8 - dVar17 * dStack_1f0);
    local_238 = (dVar16 * dStack_1f0 - dVar19 * local_1e8) + dStack_1e0 * dVar17 + dVar18;
    dStack_230 = (local_1e8 * dVar17 - local_1f8 * dVar16) + dStack_1e0 * dVar19 + dVar3;
    dStack_1d0 = (local_1e8 * dVar13 - local_1f8 * dVar12) + dStack_1e0 * dVar14 + dStack_1b0 +
                 dStack_1d0;
    local_258._8_4_ = SUB84(dStack_1d0,0);
    local_258._0_8_ =
         (dVar12 * dStack_1f0 - dVar14 * local_1e8) + dStack_1e0 * dVar13 + dVar2 + local_1d8;
    local_258._12_4_ = (int)((ulonglong)dStack_1d0 >> 0x20);
    local_248 = dVar12 * dStack_1e0 + local_1a8 + (dVar14 * local_1f8 - dVar13 * dStack_1f0) +
                local_1c8;
    fVar1 = *(float *)(param_1 + 0x2e);
    fVar15 = (float)((double)*(float *)((longlong)param_1 + 0x174) * local_1b8);
    uVar5 = (**(code **)(*param_2 + 8))(param_2);
    if (((char)param_1[0x35] == '\x01') &&
       (plVar7 = (longlong *)FUN_14842d074(local_18c,local_190), plVar7 != (longlong *)0x0)) {
      if ((local_190 != 2) &&
         (local_140 = local_154, local_13c = local_150, local_138 = local_14c, local_134 = local_148
         , local_130 = local_144, local_190 != 1)) {
        local_140 = local_168;
        local_13c = local_164;
        local_138 = local_160;
        local_134 = local_15c;
        local_130 = local_158;
      }
      if (local_130 != '\x01') {
        local_140 = 1.0;
        local_13c = 1.0;
        local_138 = 1.0;
        local_134 = 1.0;
      }
      if (local_134 <= 0.0) {
        local_134 = 0.0;
      }
      fVar11 = local_134;
      if (1.0 <= local_134) {
        fVar11 = 1.0;
      }
      if (local_138 <= 0.0) {
        local_138 = 0.0;
      }
      fVar10 = local_138;
      if (1.0 <= local_138) {
        fVar10 = 1.0;
      }
      if (local_13c <= 0.0) {
        local_13c = 0.0;
      }
      fVar9 = local_13c;
      if (1.0 <= local_13c) {
        fVar9 = 1.0;
      }
      if (local_140 <= 0.0) {
        local_140 = 0.0;
      }
      fVar8 = local_140;
      if (1.0 <= local_140) {
        fVar8 = 1.0;
      }
      local_280 = (**(code **)(*plVar7 + 0x2f0))(plVar7);
      local_298 = (int)(fVar10 * 255.0 + 0.5) & 0xffU |
                  ((int)(fVar9 * 255.0 + 0.5) & 0xffU) << 8 |
                  ((int)(fVar8 * 255.0 + 0.5) & 0xffU) << 0x10 | (int)(fVar11 * 255.0 + 0.5) << 0x18
      ;
      local_278 = CONCAT31(local_278._1_3_,1);
      local_290 = (float)((double)fVar1 * local_1b8);
      local_288 = fVar15;
      FUN_147cb816e(uVar5,local_258,&local_218,&local_238);
    }
    if (*(char *)((longlong)param_1 + 0x1a9) == '\x01') {
      lVar6 = (**(code **)(*param_2 + 0x10))(param_2);
      local_278 = (**(code **)(*param_1 + 0x558))
                            (param_1,*(double *)(lVar6 + 0x8a8) <= 1.0 &&
                                     *(double *)(lVar6 + 0x8a8) != 1.0,
                             *(undefined4 *)(lVar6 + 0x1de8));
      if ((local_190 != 2) &&
         (local_104 = local_118, local_100 = local_114, local_fc = local_110, local_f8 = local_10c,
         local_f4 = local_108, local_190 != 1)) {
        local_104 = local_12c;
        local_100 = local_128;
        local_fc = local_124;
        local_f8 = local_120;
        local_f4 = local_11c;
      }
      if (local_f4 != '\x01') {
        local_f8 = 1.0;
        local_fc = 1.0;
        local_100 = 1.0;
        local_104 = 1.0;
      }
      if (local_f8 <= 0.0) {
        local_f8 = 0.0;
      }
      if (1.0 <= local_f8) {
        local_f8 = 1.0;
      }
      if (local_fc <= 0.0) {
        local_fc = 0.0;
      }
      if (1.0 <= local_fc) {
        local_fc = 1.0;
      }
      if (local_100 <= 0.0) {
        local_100 = 0.0;
      }
      if (1.0 <= local_100) {
        local_100 = 1.0;
      }
      if (local_104 <= 0.0) {
        local_104 = 0.0;
      }
      if (1.0 <= local_104) {
        local_104 = 1.0;
      }
      local_268 = (undefined1)param_1[0x29];
      local_298 = (int)(local_fc * 255.0 + 0.5) & 0xffU |
                  ((int)(local_100 * 255.0 + 0.5) & 0xffU) << 8 |
                  ((int)(local_104 * 255.0 + 0.5) & 0xffU) << 0x10 |
                  (int)(local_f8 * 255.0 + 0.5) << 0x18;
      local_270 = 0;
      local_280 = CONCAT71(local_280._1_7_,1);
      local_290 = (float)((double)fVar1 * local_1b8);
      local_288 = fVar15;
      FUN_147cb854e(uVar5,local_258,&local_218,&local_238);
    }
  }
  if ((local_e0 ^ (ulonglong)auStack_2b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14842c50a FUN_14842c50a body=2307 status=ok
// SIG undefined FUN_14842c50a(void)

undefined1 *
FUN_14842c50a(longlong *param_1,undefined1 *param_2,undefined8 param_3,double *param_4,
             double *param_5,double *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  longlong lVar8;
  double *pdVar9;
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
  undefined4 uVar21;
  undefined4 uVar22;
  undefined1 auStack_1f8 [32];
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [24];
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double dStack_190;
  undefined1 local_188 [16];
  double local_170;
  undefined1 local_168 [16];
  double local_158;
  double dStack_150;
  double local_148 [4];
  double local_128;
  double dStack_120;
  double local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  double local_e8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  pdVar9 = local_148;
  for (lVar8 = 0xe; lVar8 != 0; lVar8 = lVar8 + -1) {
    *pdVar9 = *param_4;
    param_4 = param_4 + 1;
    pdVar9 = pdVar9 + 1;
  }
  cVar7 = (**(code **)(*param_1 + 0x550))(param_1,param_3,param_1 + 0x2b);
  if (cVar7 != '\0') {
    dVar3 = (double)param_1[0x2f];
    dVar13 = (double)param_1[0x30];
    dVar10 = dVar13 * local_148[0] - local_148[1] * dVar3;
    dVar12 = (double)param_1[0x31] * local_148[1] - local_148[2] * dVar13;
    dVar15 = dVar3 * local_148[2] - (double)param_1[0x31] * local_148[0];
    dVar12 = dVar12 + dVar12;
    dVar15 = dVar15 + dVar15;
    dVar10 = dVar10 + dVar10;
    dVar1 = dVar10 * local_148[3] + (double)param_1[0x31] +
            (dVar15 * local_148[0] - dVar12 * local_148[1]);
    dVar4 = (dVar10 * local_148[1] - dVar15 * local_148[2]) + local_148[3] * dVar12 + dVar3;
    dVar12 = (local_148[2] * dVar12 - local_148[0] * dVar10) + local_148[3] * dVar15 + dVar13;
    uVar21 = SUB84(dVar12,0);
    uVar22 = (undefined4)((ulonglong)dVar12 >> 0x20);
    dVar10 = (double)param_1[0x32];
    dVar3 = (double)param_1[0x33];
    dVar13 = dVar3 * local_148[0] - local_148[1] * dVar10;
    dVar15 = (double)param_1[0x34] * local_148[1] - local_148[2] * dVar3;
    dVar17 = dVar10 * local_148[2] - (double)param_1[0x34] * local_148[0];
    dVar15 = dVar15 + dVar15;
    dVar17 = dVar17 + dVar17;
    dVar13 = dVar13 + dVar13;
    local_1c8._8_4_ = SUB84(local_148[3],0);
    local_1c8._0_8_ = local_148[3];
    local_1c8._12_4_ = (int)((ulonglong)local_148[3] >> 0x20);
    dVar11 = dVar13 * local_148[3] + (double)param_1[0x34] +
             (dVar17 * local_148[0] - dVar15 * local_148[1]);
    dVar16 = (dVar13 * local_148[1] - dVar17 * local_148[2]) + local_148[3] * dVar15 + dVar10;
    dVar17 = (local_148[2] * dVar15 - local_148[0] * dVar13) + local_148[3] * dVar17 + dVar3;
    dVar13 = dVar4 * dVar17 - dVar16 * dVar12;
    dVar15 = dVar1 * dVar16 - dVar11 * dVar4;
    dVar3 = dVar12 * dVar11 - dVar17 * dVar1;
    local_1a8 = param_6[1];
    local_1a0 = *param_6;
    local_1b0 = param_6[2];
    dVar10 = dVar13 * local_1b0 + dVar3 * local_1a0 + local_1a8 * dVar15;
    if (1e-08 < ABS(dVar10)) {
      local_168._8_4_ = uVar21;
      local_168._0_8_ = dVar10;
      local_168._12_4_ = uVar22;
      local_1d8._8_8_ = dStack_100;
      local_1d8._0_8_ = local_108;
      dVar14 = DAT_14c8464e0 * local_108;
      dStack_100 = DAT_14c8464e8 * dStack_100;
      local_f8 = DAT_14c8464f0 * local_f8;
      local_188._8_4_ = uVar21;
      local_188._0_8_ = dVar4;
      local_188._12_4_ = uVar22;
      dVar18 = dStack_100 * local_148[0] - local_148[1] * dVar14;
      dVar19 = local_f8 * local_148[1] - local_148[2] * dStack_100;
      dVar20 = dVar14 * local_148[2] - local_148[0] * local_f8;
      dVar19 = dVar19 + dVar19;
      dVar20 = dVar20 + dVar20;
      dVar18 = dVar18 + dVar18;
      local_e8 = (double)*(float *)(param_1 + 0x20) * local_e8;
      dVar5 = (double)*(float *)((longlong)param_1 + 0x174) * local_108 + local_e8 + local_e8;
      local_1c8._0_8_ = (double)*(float *)(param_1 + 0x2e) * local_108 + local_e8 + local_e8;
      dVar6 = ((dVar18 * local_148[3] + local_f8 + (dVar20 * local_148[0] - dVar19 * local_148[1]) +
               local_118) - dVar5 * dVar1 * 0.5) - (double)local_1c8._0_8_ * dVar11 * 0.5;
      dVar2 = (((local_148[2] * dVar19 - local_148[0] * dVar18) +
                (double)local_1c8._8_8_ * dVar20 + dStack_100 + dStack_120) - dVar12 * dVar5 * 0.5)
              - dVar17 * (double)local_1c8._0_8_ * 0.5;
      dVar20 = (((dVar18 * local_148[1] - dVar20 * local_148[2]) + local_148[3] * dVar19 + dVar14 +
                local_128) - dVar4 * dVar5 * 0.5) - dVar16 * (double)local_1c8._0_8_ * 0.5;
      local_198 = dVar17;
      dStack_190 = dVar17;
      if (*(char *)((longlong)param_1 + 0x1aa) == '\x01') {
        local_1d8._8_4_ = uVar21;
        local_1d8._0_8_ = dVar12;
        local_1d8._12_4_ = uVar22;
        dVar18 = dVar6 * dVar13 + dVar20 * dVar3 + dVar15 * dVar2;
        dVar10 = ((dVar13 * dVar18 - param_5[2]) * dVar13 +
                 (dVar18 * dVar3 - *param_5) * dVar3 + (dVar15 * dVar18 - param_5[1]) * dVar15) /
                 dVar10;
        if (0.0 <= dVar10) {
          dVar6 = (param_5[2] + local_1b0 * dVar10) - dVar6;
          dVar2 = (param_5[1] + local_1a8 * dVar10) - dVar2;
          dVar20 = (*param_5 + local_1a0 * dVar10) - dVar20;
          dVar1 = dVar1 * dVar6 + dVar20 * dVar4 + dVar12 * dVar2;
          if (((0.0 <= dVar1) && (dVar1 <= dVar5)) &&
             ((dVar1 = dVar6 * dVar11 + dVar20 * dVar16 + dVar2 * dVar17, 0.0 <= dVar1 &&
              (dVar1 <= (double)local_1c8._0_8_)))) {
LAB_14842cb44:
            *param_2 = 1;
            *(double *)(param_2 + 8) = (double)(float)dVar10;
            *(undefined8 *)(param_2 + 0x10) = 0;
            *(undefined8 *)(param_2 + 0x18) = 0;
            *(undefined8 *)(param_2 + 0x20) = 0x3ff0000000000000;
            param_2[0x28] = 0;
            *(undefined8 *)(param_2 + 0x38) = 0;
            FUN_14485c47a(param_2 + 0x38,param_1);
            *(longlong **)(param_2 + 0x30) = param_1;
            *(int *)(param_2 + 0x2c) = (int)param_1[6];
            goto LAB_14842cce6;
          }
        }
      }
      else {
        local_170 = local_e8;
        local_158 = dVar16;
        dStack_150 = dVar17;
        if (*(char *)((longlong)param_1 + 0x1ab) == '\x01') {
          local_1d8._8_4_ = uVar21;
          local_1d8._0_8_ = dVar12;
          local_1d8._12_4_ = uVar22;
          dVar18 = dVar6 * dVar13 + dVar20 * dVar3 + dVar15 * dVar2;
          dVar10 = ((dVar13 * dVar18 - param_5[2]) * dVar13 +
                   (dVar18 * dVar3 - *param_5) * dVar3 + (dVar15 * dVar18 - param_5[1]) * dVar15) /
                   dVar10;
          if (0.0 <= dVar10) {
            dVar6 = (param_5[2] + local_1b0 * dVar10) - dVar6;
            dVar2 = (param_5[1] + local_1a8 * dVar10) - dVar2;
            dVar20 = (*param_5 + local_1a0 * dVar10) - dVar20;
            dVar1 = dVar1 * dVar6 + dVar20 * dVar4 + dVar12 * dVar2;
            if (((((0.0 <= dVar1) && (dVar1 <= dVar5)) &&
                 (dVar3 = dVar6 * dVar11 + dVar20 * dVar16 + dVar2 * dVar17, 0.0 <= dVar3)) &&
                (dVar3 <= (double)local_1c8._0_8_)) &&
               (((local_e8 = local_e8 + (double)*(float *)((longlong)param_1 + 0x144),
                 dVar5 - local_e8 <= dVar1 || (dVar1 <= local_e8)) ||
                ((dVar3 <= local_e8 || ((double)local_1c8._0_8_ - local_e8 <= dVar3))))))
            goto LAB_14842cb44;
          }
        }
      }
    }
  }
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0x47efffffe0000000;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0x3ff0000000000000;
  param_2[0x28] = 0;
  *(undefined8 *)(param_2 + 0x2c) = 0;
  *(undefined8 *)(param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
LAB_14842cce6:
  if ((local_d0 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14842d020 FUN_14842d020 body=67 status=ok
// SIG undefined FUN_14842d020(void)

void FUN_14842d020(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  
  cVar1 = FUN_14842d064(param_2,0);
  if ((cVar1 == '\0') &&
     ((*(char *)(param_1 + 1) != '\x01' || (cVar1 = FUN_14842d064(param_1,0), cVar1 != '\0')))) {
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  }
  return;
}



// FUNCTION 14842d064 FUN_14842d064 body=16 status=ok
// SIG undefined FUN_14842d064(void)

byte FUN_14842d064(void)

{
  byte bVar1;
  
  bVar1 = FUN_144729dda();
  return bVar1 ^ 1;
}



// FUNCTION 14842d074 FUN_14842d074 body=61 status=ok
// SIG undefined FUN_14842d074(void)

undefined8 FUN_14842d074(longlong param_1,int param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_2 == 2) {
    param_1 = param_1 + 0x18;
  }
  else if (param_2 == 1) {
    param_1 = param_1 + 0xc;
  }
  cVar1 = FUN_144729dda(param_1);
  if (cVar1 != '\0') {
    uVar2 = FUN_14479d2ce(param_1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 14842d0b6 FUN_14842d0b6 body=379 status=ok
// SIG undefined FUN_14842d0b6(void)

void FUN_14842d0b6(longlong *param_1,longlong *param_2,void *param_3)

{
  undefined4 uVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_1e8 [32];
  undefined4 local_1c8;
  undefined4 local_1c0;
  undefined8 local_1b8;
  undefined1 local_1b0;
  undefined1 local_1a8;
  undefined1 local_198 [24];
  double local_180;
  double local_178;
  double local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined1 local_148 [24];
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_e0;
  undefined1 local_dc [164];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  memcpy(local_148,param_3,0x110);
  cVar2 = (**(code **)(*param_1 + 0x540))(param_1,param_2,param_1 + 0x21,local_148);
  if (cVar2 != '\0') {
    plVar3 = (longlong *)FUN_14842d074(local_dc,local_e0);
    if (plVar3 != (longlong *)0x0) {
      uVar4 = (**(code **)(*param_2 + 8))(param_2);
      uVar5 = (**(code **)(*plVar3 + 0x2f0))(plVar3);
      local_180 = (double)*(float *)(param_1 + 0x24);
      uVar1 = *(undefined4 *)((longlong)param_1 + 0x124);
      local_170 = DAT_14c846520 * local_180;
      local_178 = DAT_14c846518 * local_180;
      local_180 = local_180 * DAT_14c846510;
      uStack_150 = uStack_130;
      uStack_14c = uStack_12c;
      FUN_1448052ee(&local_168,local_198);
      local_168 = local_128;
      uStack_160 = uStack_120;
      local_158 = local_118;
      local_1a8 = 0;
      local_1b0 = 1;
      local_1c8 = uVar1;
      local_1c0 = uVar1;
      local_1b8 = uVar5;
      FUN_147cb3c8b(uVar4,&local_168,local_198,&local_180);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14842d232 FUN_14842d232 body=549 status=ok
// SIG undefined FUN_14842d232(void)

undefined1 *
FUN_14842d232(longlong *param_1,undefined1 *param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 *param_5,double *param_6)

{
  float fVar1;
  float fVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  double dVar6;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  double local_f0;
  double dStack_e8;
  double local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_b8 [4];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  double local_78;
  double local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  puVar5 = local_b8;
  for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = *param_4;
    param_4 = param_4 + 1;
    puVar5 = puVar5 + 1;
  }
  cVar3 = (**(code **)(*param_1 + 0x550))(param_1,param_3,param_1 + 0x21);
  if (cVar3 != '\0') {
    local_d8 = local_98;
    uStack_d0 = uStack_90;
    local_c8 = local_88;
    fVar1 = *(float *)(param_1 + 0x20);
    fVar2 = *(float *)(param_1 + 0x24);
    local_f8 = param_5[2];
    local_108 = *param_5;
    uStack_100 = param_5[1];
    local_f0 = *param_6;
    dStack_e8 = param_6[1];
    local_e0 = param_6[2];
    dVar6 = local_e0 * local_e0 + local_f0 * local_f0 + dStack_e8 * dStack_e8;
    if (9.99999993922529e-09 < dVar6) {
      dVar6 = 1.0 / SQRT(dVar6);
      local_f0 = local_f0 * dVar6;
      dStack_e8 = dStack_e8 * dVar6;
      local_e0 = local_e0 * dVar6;
    }
    dVar6 = (double)FUN_14844d5cc(&local_108,&local_d8);
    if (dVar6 < 0.0) {
      dVar6 = sqrt(dVar6);
    }
    else {
      dVar6 = SQRT(dVar6);
    }
    if (dVar6 < (double)fVar2 * local_78 + (double)fVar1 * local_58) {
      *param_2 = 1;
      *(double *)(param_2 + 8) = (double)(float)dVar6;
      *(undefined8 *)(param_2 + 0x10) = 0;
      *(undefined8 *)(param_2 + 0x18) = 0;
      *(undefined8 *)(param_2 + 0x20) = 0x3ff0000000000000;
      param_2[0x28] = 0;
      *(undefined8 *)(param_2 + 0x38) = 0;
      FUN_14485c47a(param_2 + 0x38,param_1);
      *(longlong **)(param_2 + 0x30) = param_1;
      *(int *)(param_2 + 0x2c) = (int)param_1[6];
      goto LAB_14842d2c5;
    }
  }
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0x47efffffe0000000;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0x3ff0000000000000;
  param_2[0x28] = 0;
  *(undefined8 *)(param_2 + 0x2c) = 0;
  *(undefined8 *)(param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
LAB_14842d2c5:
  if ((local_40 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14842d4b8 FUN_14842d4b8 body=1815 status=ok
// SIG undefined FUN_14842d4b8(void)

void FUN_14842d4b8(longlong *param_1,longlong *param_2,void *param_3)

{
  undefined1 uVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_368 [32];
  undefined1 *local_348;
  longlong local_340;
  undefined4 local_338;
  undefined4 local_330;
  undefined8 local_328;
  undefined1 local_320;
  char local_318;
  float local_310;
  undefined1 local_308;
  double local_300;
  double local_2f8;
  double local_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  double local_2d8;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  undefined1 local_288 [16];
  undefined8 local_278;
  undefined1 local_268 [12];
  undefined4 uStack_25c;
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
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined4 local_180;
  undefined1 local_17c [172];
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_368;
  memcpy(&local_1e8,param_3,0x110);
  cVar2 = (**(code **)(*param_1 + 0x540))(param_1,param_2,param_1 + 0x2b,&local_1e8);
  if (cVar2 == '\0') goto LAB_14842d56f;
  plVar3 = (longlong *)FUN_14842d074(local_17c,local_180);
  if (plVar3 == (longlong *)0x0) goto LAB_14842d56f;
  local_278 = local_1b8;
  local_298 = (double)param_1[0x2e] * (double)param_1[0x32] -
              (double)param_1[0x31] * (double)param_1[0x2f];
  dStack_2a0 = (double)param_1[0x31] * (double)param_1[0x30] -
               (double)param_1[0x2e] * (double)param_1[0x33];
  local_2a8 = (double)param_1[0x2f] * (double)param_1[0x33] -
              (double)param_1[0x32] * (double)param_1[0x30];
  dVar15 = local_2a8 * local_1d8 - local_1e8 * local_298;
  dVar10 = dStack_2a0 * local_1e8 - local_2a8 * dStack_1e0;
  dVar12 = local_298 * dStack_1e0 - dStack_2a0 * local_1d8;
  dVar12 = dVar12 + dVar12;
  dVar15 = dVar15 + dVar15;
  dVar10 = dVar10 + dVar10;
  local_2b8 = dVar10 * dStack_1d0 + local_298 + (dVar15 * local_1e8 - dVar12 * dStack_1e0);
  local_2c8 = (dVar10 * dStack_1e0 - dVar15 * local_1d8) + dStack_1d0 * dVar12 + local_2a8;
  dStack_2c0 = (local_1d8 * dVar12 - local_1e8 * dVar10) + dStack_1d0 * dVar15 + dStack_2a0;
  lVar4 = (**(code **)(*param_2 + 0x10))(param_2);
  local_258 = *(double *)(lVar4 + 0xa00);
  local_348 = local_268;
  stack0xfffffffffffffda0 = (double)*(undefined8 *)(lVar4 + 0x9e0);
  local_268._0_8_ = *(undefined8 *)(lVar4 + 0x9c0);
  local_340 = CONCAT71(local_340._1_7_,*(double *)(lVar4 + 0x8a8) < 1.0);
  cVar2 = FUN_148426fdc(param_1,local_288,&local_2c8,lVar4 + 0x10a0);
  if (cVar2 == '\0') {
    local_2d8 = (double)param_1[0x30];
    uVar6 = (undefined4)param_1[0x2e];
    uVar7 = *(undefined4 *)((longlong)param_1 + 0x174);
    uVar8 = (undefined4)param_1[0x2f];
    uVar9 = *(undefined4 *)((longlong)param_1 + 0x17c);
LAB_14842d891:
    local_2e8 = (double)CONCAT44(uVar7,uVar6);
    uStack_2e0 = (double)CONCAT44(uVar9,uVar8);
  }
  else {
    FUN_140ccff96(param_1 + 0x2e,local_268,SUB84((double)param_1[0x36] * 0.017453292519943295,0),
                  &local_2a8);
    dVar10 = local_258 * local_258 +
             (double)local_268._0_8_ * (double)local_268._0_8_ +
             stack0xfffffffffffffda0 * stack0xfffffffffffffda0;
    if ((dVar10 == 1.0) && (!NAN(dVar10))) {
      local_2d8 = local_258;
      uVar6 = local_268._0_4_;
      uVar7 = local_268._4_4_;
      uVar8 = local_268._8_4_;
      uVar9 = uStack_25c;
      goto LAB_14842d891;
    }
    if (dVar10 < 9.99999993922529e-09) {
      local_2d8 = DAT_14c8464f0;
      uVar6 = (undefined4)DAT_14c8464e0;
      uVar7 = DAT_14c8464e0._4_4_;
      uVar8 = (undefined4)DAT_14c8464e8;
      uVar9 = DAT_14c8464e8._4_4_;
      goto LAB_14842d891;
    }
    local_2e8 = 1.0 / SQRT(dVar10);
    local_2d8 = local_258 * local_2e8;
    uStack_2e0 = stack0xfffffffffffffda0 * local_2e8;
    local_2e8 = (double)local_268._0_8_ * local_2e8;
  }
  dVar10 = (double)param_1[0x37];
  dVar12 = (double)param_1[0x36];
  if (0.0 < (float)(dVar10 - dVar12)) {
    uVar5 = (**(code **)(*param_2 + 8))(param_2);
    local_2f0 = local_2a8 * uStack_2e0 - local_2e8 * dStack_2a0;
    local_2f8 = local_2e8 * local_298 - local_2a8 * local_2d8;
    local_300 = dStack_2a0 * local_2d8 - uStack_2e0 * local_298;
    dVar15 = local_2f0 * local_2f0 + local_300 * local_300 + local_2f8 * local_2f8;
    if (9.99999993922529e-09 < dVar15) {
      dVar15 = 1.0 / SQRT(dVar15);
      local_300 = local_300 * dVar15;
      local_2f8 = local_2f8 * dVar15;
      local_2f0 = local_2f0 * dVar15;
    }
    uVar1 = *(undefined1 *)((longlong)param_1 + 0x1d4);
    local_328 = (**(code **)(*plVar3 + 0x2f0))(plVar3);
    local_330 = (undefined4)param_1[0x3a];
    local_338 = (undefined4)param_1[0x35];
    local_340 = param_1[0x39];
    local_348 = (undefined1 *)param_1[0x34];
    dVar14 = dStack_1e0 + dStack_1e0;
    dVar11 = local_1d8 + local_1d8;
    dVar15 = local_1e8 * (local_1e8 + local_1e8);
    dStack_240 = (1.0 - (local_1d8 * dVar11 + dVar15)) * dStack_1a0;
    local_218 = (1.0 - (dVar15 + dStack_1e0 * dVar14)) * local_198;
    dVar13 = (local_1e8 + local_1e8) * dStack_1d0;
    dVar15 = (dVar14 * local_1e8 + dVar11 * dStack_1d0) * local_1a8;
    local_238 = (dVar11 * dStack_1e0 + dVar13) * dStack_1a0;
    local_228 = (dVar14 * dStack_1d0 + local_1e8 * dVar11) * local_198;
    local_258 = (local_1e8 * dVar11 - dVar14 * dStack_1d0) * local_1a8;
    local_248 = (dVar14 * local_1e8 - dVar11 * dStack_1d0) * dStack_1a0;
    dStack_220 = (dVar11 * dStack_1e0 - dVar13) * local_198;
    local_268._8_4_ = SUB84(dVar15,0);
    local_268._0_8_ = (1.0 - (local_1d8 * dVar11 + dStack_1e0 * dVar14)) * local_1a8;
    uStack_25c = (int)((ulonglong)dVar15 >> 0x20);
    uStack_250 = 0;
    uStack_230 = 0;
    uStack_210 = 0;
    local_208 = local_1c8;
    uStack_204 = uStack_1c4;
    uStack_200 = uStack_1c0;
    uStack_1fc = uStack_1bc;
    local_1f8 = local_1b8;
    uStack_1f0 = 0x3ff0000000000000;
    local_320 = 1;
    local_318 = cVar2;
    local_310 = (float)(dVar10 - dVar12);
    local_308 = uVar1;
    FUN_147cb6697(uVar5,local_268,&local_2e8,&local_300);
  }
LAB_14842d56f:
  if ((local_d0 ^ (ulonglong)auStack_368) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14842dbd0 FUN_14842dbd0 body=3476 status=ok
// SIG undefined FUN_14842dbd0(void)

undefined1 *
FUN_14842dbd0(longlong *param_1,undefined1 *param_2,longlong param_3,double *param_4,double *param_5
             ,double *param_6)

{
  longlong *plVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  undefined1 uVar7;
  char cVar8;
  longlong lVar9;
  int iVar10;
  double *pdVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 auVar27 [16];
  double dVar28;
  undefined1 auStack_2e8 [32];
  double *local_2c8;
  double *local_2c0;
  char *local_2b8;
  double *local_2b0;
  double local_2a0;
  double local_298;
  double local_290;
  double local_288;
  double local_280;
  double local_278;
  double local_270;
  char local_261;
  double local_260;
  double local_258;
  double local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  double local_238;
  undefined8 local_228;
  undefined8 uStack_220;
  double local_218;
  undefined8 local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  double local_1f8;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double local_198;
  double dStack_190;
  double local_188;
  double local_178 [4];
  double local_158;
  double dStack_150;
  double local_148;
  double local_138;
  double local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  double local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  pdVar11 = local_178;
  for (lVar9 = 0xe; lVar9 != 0; lVar9 = lVar9 + -1) {
    *pdVar11 = *param_4;
    param_4 = param_4 + 1;
    pdVar11 = pdVar11 + 1;
  }
  cVar6 = (**(code **)(*param_1 + 0x550))(param_1,param_3,param_1 + 0x2b);
  if (cVar6 != '\0') {
    fVar2 = *(float *)(param_1 + 0x20);
    dVar24 = (double)param_1[0x34] * local_138;
    dVar20 = (double)param_1[0x39];
    local_198 = local_158;
    dStack_190 = dStack_150;
    local_188 = local_148;
    dVar26 = (double)param_1[0x2e];
    dVar18 = (double)param_1[0x2f];
    dVar21 = dVar18 * local_178[0] - dVar26 * local_178[1];
    dVar23 = (double)param_1[0x30] * local_178[1] - dVar18 * local_178[2];
    dVar25 = dVar26 * local_178[2] - (double)param_1[0x30] * local_178[0];
    dVar23 = dVar23 + dVar23;
    dVar25 = dVar25 + dVar25;
    dVar21 = dVar21 + dVar21;
    local_1a8 = dVar21 * local_178[3] + (double)param_1[0x30] +
                (dVar25 * local_178[0] - dVar23 * local_178[1]);
    local_1b8 = (dVar21 * local_178[1] - dVar25 * local_178[2]) + local_178[3] * dVar23 + dVar26;
    dStack_1b0 = (local_178[2] * dVar23 - local_178[0] * dVar21) + local_178[3] * dVar25 + dVar18;
    dVar21 = (double)param_1[0x31];
    dVar23 = (double)param_1[0x32];
    dVar26 = dVar23 * local_178[0] - local_178[1] * dVar21;
    dVar25 = (double)param_1[0x33] * local_178[1] - local_178[2] * dVar23;
    dVar28 = dVar21 * local_178[2] - local_178[0] * (double)param_1[0x33];
    dVar25 = dVar25 + dVar25;
    dVar28 = dVar28 + dVar28;
    dVar26 = dVar26 + dVar26;
    dVar18 = dVar26 * local_178[3] + (double)param_1[0x33] +
             (dVar28 * local_178[0] - dVar25 * local_178[1]);
    dVar21 = (dVar26 * local_178[1] - dVar28 * local_178[2]) + local_178[3] * dVar25 + dVar21;
    dVar26 = (local_178[2] * dVar25 - local_178[0] * dVar26) + local_178[3] * dVar28 + dVar23;
    local_1c0 = local_1b8 * dVar26 - dVar21 * dStack_1b0;
    local_1c8 = local_1a8 * dVar21 - dVar18 * local_1b8;
    local_1d0 = dStack_1b0 * dVar18 - dVar26 * local_1a8;
    plVar1 = (longlong *)(param_3 + 0x28);
    uVar7 = (**(code **)(*(longlong *)(param_3 + 0x28) + 0x38))(plVar1);
    (**(code **)(*(longlong *)(param_3 + 0x28) + 0x18))(plVar1,&local_108);
    local_2c0 = (double *)CONCAT71(local_2c0._1_7_,uVar7);
    local_2c8 = (double *)&local_108;
    cVar6 = FUN_148426fdc(param_1,&local_198,&local_1d0,param_3 + 0x1c0);
    dVar26 = (double)param_1[0x37] - (double)param_1[0x36];
    if (cVar6 == '\0') {
      local_f8 = local_1a8;
      local_108 = local_1b8;
      uStack_100 = dStack_1b0;
      cVar8 = FUN_14842e966(param_1,param_3,&local_198,&local_1d0);
      iVar10 = 0x10;
      if (cVar8 != '\0') goto LAB_14842e142;
LAB_14842e4f3:
      dVar22 = local_148 * local_1c0 + local_198 * local_1d0 + dStack_190 * local_1c8;
      dVar18 = param_5[2];
      dVar21 = *param_5;
      dVar23 = param_5[1];
      dVar25 = *param_6;
      dVar28 = param_6[1];
      dVar3 = param_6[2];
      dVar22 = ((local_1c0 * dVar22 - dVar18) * local_1c0 +
               (dVar22 * local_1d0 - dVar21) * local_1d0 + (local_1c8 * dVar22 - dVar23) * local_1c8
               ) / (local_1c0 * dVar3 + local_1d0 * dVar25 + local_1c8 * dVar28);
      local_298 = dVar18;
      local_278 = dVar21;
      if (0.0 <= dVar22) {
        local_288 = dStack_190;
        local_280 = local_198;
        local_1d8 = dVar3 * dVar22 + dVar18;
        local_1e0 = dVar28 * dVar22 + dVar23;
        uVar14 = SUB84(dVar21,0);
        uVar15 = (undefined4)((ulonglong)dVar21 >> 0x20);
        local_1e8 = dVar22 * dVar25 + dVar21;
        local_2c8 = (double *)&local_208;
        FUN_1484207df(&local_1e8,&local_198,&local_1d0,(float)dVar24);
        local_290 = local_1f8;
        dVar4 = (double)CONCAT44(local_208._4_4_,(undefined4)local_208);
        dVar5 = (double)CONCAT44(uStack_1fc,uStack_200);
        dVar19 = (local_1f8 - dVar18) * dVar3 +
                 (dVar4 - dVar21) * dVar25 + (dVar5 - dVar23) * dVar28;
        dVar24 = dVar23;
        dVar22 = dVar18;
        if (0.0 <= dVar19) {
          dVar22 = dVar3 * dVar19 + dVar18;
          dVar24 = dVar28 * dVar19 + dVar23;
          dVar21 = dVar25 * dVar19 + dVar21;
        }
        local_2a0 = dVar23;
        if (SQRT((dVar22 - local_1f8) * (dVar22 - local_1f8) +
                 (dVar24 - dVar5) * (dVar24 - dVar5) + (dVar21 - dVar4) * (dVar21 - dVar4)) <=
            (double)fVar2 * local_118 + local_138 * dVar20) {
          if (cVar6 != '\0') {
            local_218 = local_1f8 - local_148;
            uStack_220 = dVar5 - local_288;
            local_228 = dVar4 - local_280;
            dVar20 = local_218 * local_218 + local_228 * local_228 + uStack_220 * uStack_220;
            if ((dVar20 != 1.0) || (NAN(dVar20))) {
              if (9.99999993922529e-09 <= dVar20) {
                dVar20 = 1.0 / SQRT(dVar20);
                local_218 = local_218 * dVar20;
                uStack_220 = uStack_220 * dVar20;
                local_228 = local_228 * dVar20;
              }
              else {
                local_218 = DAT_14c8464f0;
                local_228 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
                uStack_220 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
              }
            }
            dVar20 = (double)FUN_148421f8a(&local_108,&local_228,&local_1d0);
            if (dVar26 < (double)(~-(ulonglong)(dVar20 < 0.0) & (ulonglong)dVar20 |
                                 (ulonglong)(dVar20 + 6.283185307179586) &
                                 -(ulonglong)(dVar20 < 0.0))) goto LAB_14842dc93;
            dVar18 = param_5[2];
            uVar14 = SUB84(*param_5,0);
            uVar15 = (undefined4)((ulonglong)*param_5 >> 0x20);
            local_2a0 = param_5[1];
          }
          dVar21 = dVar21 - (double)CONCAT44(uVar15,uVar14);
          dVar18 = SQRT((dVar22 - dVar18) * (dVar22 - dVar18) +
                        dVar21 * dVar21 + (dVar24 - local_2a0) * (dVar24 - local_2a0));
          goto LAB_14842e7cd;
        }
      }
    }
    else if (0.0 < dVar26) {
      FUN_140ccff96(&local_1b8,&local_1e8,(double)param_1[0x36] * 0.017453292519943295,&local_1d0);
      dVar18 = local_1d8 * local_1d8 + local_1e8 * local_1e8 + local_1e0 * local_1e0;
      if ((dVar18 != 1.0) ||
         (uStack_100 = local_1e0, local_108 = local_1e8, local_f8 = local_1d8, NAN(dVar18))) {
        if (9.99999993922529e-09 <= dVar18) {
          local_108 = 1.0 / SQRT(dVar18);
          local_f8 = local_1d8 * local_108;
          uStack_100 = local_1e0 * local_108;
          local_108 = local_1e8 * local_108;
        }
        else {
          local_108 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          uStack_100 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          local_f8 = DAT_14c8464f0;
        }
      }
      cVar8 = FUN_14842e966(param_1,param_3,&local_198,&local_1d0);
      if (cVar8 == '\0') goto LAB_14842e4f3;
      dVar18 = (dVar26 * 16.0) / 6.283185307179586;
      iVar10 = -((int)ROUND(-0.5 - (dVar18 + dVar18)) >> 1);
LAB_14842e142:
      (**(code **)(*plVar1 + 0x18))(plVar1,&local_1e8);
      local_1f8 = local_f8;
      local_208._0_4_ = (undefined4)local_108;
      local_208._4_4_ = local_108._4_4_;
      uStack_200 = (undefined4)uStack_100;
      uStack_1fc = uStack_100._4_4_;
      FUN_140ccff96(&local_208,&local_228,0x3fd921fb54442d18,&local_1d0);
      dVar21 = dStack_190;
      dVar23 = uStack_220 - (double)CONCAT44(uStack_1fc,uStack_200);
      dVar18 = local_228 - (double)CONCAT44(local_208._4_4_,(undefined4)local_208);
      dVar23 = SQRT((local_218 - local_1f8) * (local_218 - local_1f8) +
                    dVar18 * dVar18 + dVar23 * dVar23) * dVar24;
      if (1e-08 < ABS(dVar23)) {
        if (iVar10 < 1) {
          dVar18 = -1.0;
        }
        else {
          local_298 = local_198;
          auVar27 = ZEXT816(0xbff0000000000000);
          iVar13 = 0;
          do {
            iVar12 = iVar13 + -1;
            if (iVar13 != 0) {
              local_1f8 = local_218;
              local_208._0_4_ = (undefined4)local_228;
              local_208._4_4_ = local_228._4_4_;
              uStack_200 = (undefined4)uStack_220;
              uStack_1fc = uStack_220._4_4_;
              FUN_140ccff96(&local_208,&local_248,0x3fd921fb54442d18,&local_1d0);
              local_218 = local_238;
              local_228 = local_248;
              uStack_220 = uStack_240;
            }
            if (iVar13 + iVar10 == 1 && cVar6 == '\x01') {
              dVar18 = (double)FUN_144719204(SUB84(dVar26,0),0x3fd921fb54442d18);
              dVar23 = dVar23 * dVar18;
            }
            local_238 = local_218 - local_1f8;
            uStack_240 = uStack_220 - (double)CONCAT44(uStack_1fc,uStack_200);
            local_248 = local_228 - (double)CONCAT44(local_208._4_4_,(undefined4)local_208);
            dVar18 = local_238 * local_238 + local_248 * local_248 + uStack_240 * uStack_240;
            if ((dVar18 != 1.0) || (NAN(dVar18))) {
              if (9.99999993922529e-09 <= dVar18) {
                dVar18 = 1.0 / SQRT(dVar18);
                local_238 = local_238 * dVar18;
                uStack_240 = uStack_240 * dVar18;
                local_248 = local_248 * dVar18;
              }
              else {
                local_238 = DAT_14c8464f0;
                local_248 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
                uStack_240 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
              }
            }
            local_250 = local_238 * dVar23 * 0.5 + local_1f8 * dVar24 + local_148;
            local_258 = uStack_240 * dVar23 * 0.5 +
                        (double)CONCAT44(uStack_1fc,uStack_200) * dVar24 + dVar21;
            local_260 = local_248 * dVar23 * 0.5 +
                        (double)CONCAT44(local_208._4_4_,(undefined4)local_208) * dVar24 + local_298
            ;
            local_261 = '\0';
            local_270 = -1.0;
            local_2b0 = &local_270;
            local_2b8 = &local_261;
            local_2c0 = param_6;
            local_2c8 = param_5;
            FUN_148429420(&local_260,&local_248,(double)fVar2 * local_118 + local_138 * dVar20,
                          dVar23);
            if (local_261 == '\x01') {
              uVar14 = SUB84(local_270,0);
              uVar15 = (undefined4)((ulonglong)local_270 >> 0x20);
              uVar16 = 0;
              uVar17 = 0;
              if (auVar27._0_8_ <= local_270 && 0.0 <= auVar27._0_8_) {
                uVar14 = auVar27._0_4_;
                uVar15 = auVar27._4_4_;
                uVar16 = auVar27._8_4_;
                uVar17 = auVar27._12_4_;
              }
              auVar27._4_4_ = uVar15;
              auVar27._0_4_ = uVar14;
              auVar27._12_4_ = uVar17;
              auVar27._8_4_ = uVar16;
            }
            dVar18 = auVar27._0_8_;
            iVar13 = iVar12;
          } while (iVar10 + iVar12 != 0);
        }
LAB_14842e7cd:
        if (0.0 <= dVar18) {
          *param_2 = 1;
          *(double *)(param_2 + 8) = (double)(float)dVar18;
          *(undefined8 *)(param_2 + 0x10) = 0;
          *(undefined8 *)(param_2 + 0x18) = 0;
          *(undefined8 *)(param_2 + 0x20) = 0x3ff0000000000000;
          param_2[0x28] = 0;
          *(undefined8 *)(param_2 + 0x2c) = 0;
          *(undefined8 *)(param_2 + 0x34) = 0;
          *(undefined4 *)(param_2 + 0x3c) = 0;
          FUN_14485c47a(param_2 + 0x38,param_1);
          *(longlong **)(param_2 + 0x30) = param_1;
          *(int *)(param_2 + 0x2c) = (int)param_1[6];
          goto LAB_14842dccb;
        }
      }
    }
  }
LAB_14842dc93:
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0x47efffffe0000000;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0x3ff0000000000000;
  param_2[0x28] = 0;
  *(undefined8 *)(param_2 + 0x2c) = 0;
  *(undefined8 *)(param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
LAB_14842dccb:
  if ((local_f0 ^ (ulonglong)auStack_2e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14842e966 FUN_14842e966 body=380 status=ok
// SIG undefined FUN_14842e966(void)

bool FUN_14842e966(longlong param_1,longlong param_2,double *param_3,double *param_4)

{
  longlong *plVar1;
  char cVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_68 [32];
  double local_48;
  double local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = (longlong *)(param_2 + 0x28);
  cVar2 = (**(code **)(*(longlong *)(param_2 + 0x28) + 0x38))(plVar1);
  if (cVar2 == '\0') {
    (**(code **)(*plVar1 + 0x18))(plVar1,&local_48);
  }
  else {
    dVar3 = param_3[2] - *(double *)(param_2 + 0x1d0);
    dVar5 = param_3[1] - *(double *)(param_2 + 0x1c8);
    dVar4 = *param_3 - *(double *)(param_2 + 0x1c0);
    dVar6 = dVar3 * dVar3 + dVar4 * dVar4 + dVar5 * dVar5;
    if (((dVar6 != 1.0) || (local_38 = dVar3, local_48 = dVar4, local_40 = dVar5, NAN(dVar6))) &&
       (local_38 = DAT_14c8464f0, local_48 = DAT_14c8464e0, local_40 = DAT_14c8464e8,
       9.99999993922529e-09 <= dVar6)) {
      local_48 = 1.0 / SQRT(dVar6);
      local_38 = dVar3 * local_48;
      local_40 = dVar5 * local_48;
      local_48 = dVar4 * local_48;
    }
  }
  dVar3 = *(double *)(param_1 + 0x1c8);
  dVar3 = (dVar3 * 1.5) /
          SQRT(*(double *)(param_1 + 0x1a0) * *(double *)(param_1 + 0x1a0) + dVar3 * dVar3);
  if (dVar3 <= 0.052000001072883606) {
    dVar3 = 0.052000001072883606;
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return ABS(local_38 * param_4[2] + local_48 * *param_4 + local_40 * param_4[1]) <= dVar3;
}



// FUNCTION 14842eb1c FUN_14842eb1c body=672 status=ok
// SIG undefined FUN_14842eb1c(void)

void FUN_14842eb1c(longlong *param_1,longlong *param_2,void *param_3)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_2e8 [32];
  undefined1 local_2c8;
  ulonglong local_2c0;
  undefined1 local_2b8;
  undefined4 local_2b0;
  longlong local_2a0;
  float local_294;
  float local_290;
  float local_28c;
  undefined1 local_288 [40];
  float local_260;
  float local_25c;
  float local_258;
  float local_208;
  float local_204;
  float local_200;
  undefined1 local_1b0 [88];
  undefined1 local_158 [104];
  undefined4 local_f0;
  undefined1 local_ec [164];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  memcpy(local_158,param_3,0x110);
  cVar2 = (**(code **)(*param_1 + 0x540))(param_1,param_2,param_1 + 0x23,local_158);
  if ((cVar2 != '\0') && (2 < (int)param_1[0x22])) {
    plVar6 = (longlong *)FUN_14842d074(local_ec,local_f0);
    if (plVar6 != (longlong *)0x0) {
      lVar7 = (**(code **)(*param_2 + 8))(param_2);
      FUN_14842edbe(param_1,param_3);
      local_2c0 = 0;
      local_2c8 = 0;
      local_2a0 = lVar7;
      FUN_140d3493e(local_288,*(undefined4 *)(*(longlong *)(lVar7 + 8) + 0x3090),1,0);
      if (2 < (int)param_1[0x2d]) {
        lVar7 = 0;
        lVar9 = 0;
        do {
          lVar1 = param_1[0x2c];
          local_200 = (float)*(double *)(lVar1 + 0x10 + lVar7);
          local_204 = (float)*(double *)(lVar1 + 8 + lVar7);
          local_208 = (float)*(double *)(lVar1 + lVar7);
          FUN_1415874d8(local_1b0,&local_208);
          lVar1 = param_1[0x2c];
          local_258 = (float)*(double *)(lVar1 + 0x28 + lVar7);
          local_25c = (float)*(double *)(lVar1 + 0x20 + lVar7);
          local_260 = (float)*(double *)(lVar1 + 0x18 + lVar7);
          FUN_1415874d8(&local_208,&local_260);
          lVar1 = param_1[0x2c];
          local_28c = (float)*(double *)(lVar1 + 0x40 + lVar7);
          local_290 = (float)*(double *)(lVar1 + 0x38 + lVar7);
          local_294 = (float)*(double *)(lVar1 + 0x30 + lVar7);
          lVar9 = lVar9 + 3;
          FUN_1415874d8(&local_260,&local_294);
          uVar3 = FUN_147a7d5d8(local_288,&local_260);
          uVar4 = FUN_147a7d5d8(local_288,&local_208);
          uVar5 = FUN_147a7d5d8(local_288,local_1b0);
          FUN_140d3489c(local_288,uVar5,uVar4,uVar3);
          lVar7 = lVar7 + 0x48;
        } while (lVar9 < (longlong)(int)param_1[0x2d] + -2);
      }
      uVar8 = (**(code **)(*plVar6 + 0x2f0))(plVar6);
      local_2b8 = 1;
      local_2c8 = 1;
      local_2b0 = 0xffffffff;
      local_2c0 = local_2c0 & 0xffffffffffffff00;
      FUN_1434d8d42(local_288,local_2a0,&DAT_14c846400,uVar8);
      FUN_1434d8cf8(local_288);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_2e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14842edbe FUN_14842edbe body=1457 status=ok
// SIG undefined FUN_14842edbe(void)

void FUN_14842edbe(longlong param_1,double *param_2)

{
  longlong lVar1;
  double dVar2;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [12];
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
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
  double dVar37;
  double dVar38;
  double dVar39;
  double dStack_140;
  double local_138;
  double dStack_130;
  double dVar3;
  
  dVar30 = *(double *)(param_1 + 0x130);
  dVar10 = *(double *)(param_1 + 0x138);
  dVar12 = *param_2;
  dVar13 = *(double *)*(undefined1 (*) [12])(param_2 + 1);
  auVar17 = *(undefined1 (*) [12])(param_2 + 1);
  dVar8 = SUB168(*(undefined1 (*) [16])(param_2 + 2),0);
  dVar14 = param_2[8];
  dVar15 = param_2[9];
  dVar16 = param_2[10];
  dVar33 = dVar10 * dVar12 - dVar30 * dVar13;
  dVar35 = *(double *)(param_1 + 0x140) * dVar13 - dVar10 * dVar8;
  dVar36 = dVar30 * dVar8 - *(double *)(param_1 + 0x140) * dVar12;
  dVar34 = *(double *)(param_1 + 0x148);
  dVar37 = *(double *)(param_1 + 0x150);
  dVar31 = dVar37 * dVar12 - dVar13 * dVar34;
  dVar32 = *(double *)(param_1 + 0x158) * dVar13 - dVar8 * dVar37;
  dVar38 = dVar34 * dVar8 - *(double *)(param_1 + 0x158) * dVar12;
  dVar25 = *(double *)(param_1 + 0x118) * dVar14;
  dVar27 = *(double *)(param_1 + 0x120) * dVar15;
  dVar22 = *(double *)(param_1 + 0x128) * dVar16;
  dVar23 = dVar27 * dVar12 - dVar13 * dVar25;
  dVar24 = dVar22 * dVar13 - dVar8 * dVar27;
  dVar28 = dVar25 * dVar8 - dVar12 * dVar22;
  dVar2 = param_2[3];
  dVar3 = param_2[3];
  dVar24 = dVar24 + dVar24;
  dVar28 = dVar28 + dVar28;
  dVar23 = dVar23 + dVar23;
  auVar9._12_4_ = SUB164(*(undefined1 (*) [16])(param_2 + 2),4);
  auVar9._0_12_ = auVar17;
  dVar33 = dVar33 + dVar33;
  dVar26 = *(double *)(param_1 + 0x140);
  dVar31 = dVar31 + dVar31;
  auVar11._8_4_ = SUB84(dVar3,0);
  auVar11._0_8_ = dVar2;
  auVar11._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  dVar39 = *(double *)(param_1 + 0x158);
  dVar5 = param_2[4];
  dVar6 = param_2[5];
  dVar4 = param_2[6];
  lVar1 = param_1 + 0x160;
  *(undefined4 *)(param_1 + 0x168) = 0;
  if (*(int *)(param_1 + 0x16c) < 0) {
    FUN_1447a8aa0(lVar1,0);
  }
  iVar18 = *(int *)(param_1 + 0x110);
  if (-1 < iVar18) {
    if (*(int *)(param_1 + 0x16c) < iVar18) {
      FUN_1447a8aa0(lVar1);
      iVar18 = *(int *)(param_1 + 0x110);
    }
    if (0 < iVar18) {
      dVar35 = dVar35 + dVar35;
      dVar36 = dVar36 + dVar36;
      dVar32 = dVar32 + dVar32;
      dVar38 = dVar38 + dVar38;
      local_138 = auVar17._0_8_;
      dStack_130 = auVar9._8_8_;
      dStack_140 = auVar11._8_8_;
      dVar29 = dVar2 * dVar33 + dVar26 + (dVar36 * dVar12 - local_138 * dVar35);
      dVar30 = (dVar33 * dVar13 - dStack_130 * dVar36) + dVar30 + dVar35 * dVar2;
      dVar33 = (dVar8 * dVar35 - dVar33 * dVar12) + dVar10 + dVar36 * dStack_140;
      dVar26 = dVar2 * dVar31 + dVar39 + (dVar38 * dVar12 - local_138 * dVar32);
      dVar39 = (dVar31 * dVar13 - dStack_130 * dVar38) + dVar34 + dVar32 * dVar2;
      dVar31 = (dVar8 * dVar32 - dVar12 * dVar31) + dVar37 + dVar38 * dStack_140;
      lVar20 = 0x10;
      lVar21 = 0;
      do {
        lVar19 = *(longlong *)(param_1 + 0x108);
        dVar10 = *(double *)(lVar19 + lVar20) * dVar16;
        dVar37 = *(double *)(lVar19 + -8 + lVar20) * dVar15;
        dVar34 = *(double *)(lVar19 + -0x10 + lVar20) * dVar14;
        iVar18 = *(int *)(param_1 + 0x168);
        lVar19 = (longlong)iVar18;
        *(uint *)(param_1 + 0x168) = iVar18 + 1U;
        if (*(uint *)(param_1 + 0x16c) < iVar18 + 1U) {
          FUN_1403e3958(lVar1,iVar18);
        }
        lVar7 = *(longlong *)(param_1 + 0x160);
        *(double *)(lVar7 + lVar19 * 0x18) =
             dVar10 * dVar30 +
             dVar37 * dVar39 +
             dVar34 * (dVar31 * dVar29 - dVar33 * dVar26) +
             (dVar23 * dVar13 - dVar28 * dVar8) + dVar2 * dVar24 + dVar25 + dVar5;
        *(double *)(lVar7 + 8 + lVar19 * 0x18) =
             dVar33 * dVar10 +
             dVar31 * dVar37 +
             (dVar26 * dVar30 - dVar29 * dVar39) * dVar34 +
             (dVar8 * dVar24 - dVar12 * dVar23) + dVar3 * dVar28 + dVar27 + dVar6;
        *(double *)(lVar7 + 0x10 + lVar19 * 0x18) =
             dVar29 * dVar10 +
             dVar26 * dVar37 +
             (dVar39 * dVar33 - dVar30 * dVar31) * dVar34 +
             dVar23 * dVar2 + dVar22 + (dVar28 * dVar12 - dVar24 * dVar13) + dVar4;
        lVar21 = lVar21 + 1;
        lVar20 = lVar20 + 0x18;
      } while (lVar21 < *(int *)(param_1 + 0x110));
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar18);
}



// FUNCTION 14842f370 FUN_14842f370 body=594 status=ok
// SIG undefined FUN_14842f370(void)

undefined1 *
FUN_14842f370(longlong *param_1,undefined1 *param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 *param_5,double *param_6)

{
  float fVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  double dVar8;
  undefined1 auStack_138 [32];
  double local_118;
  double *local_110;
  double local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  double local_e0;
  double dStack_d8;
  double local_d0;
  undefined8 local_c8 [12];
  double local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_138;
  puVar5 = param_4;
  puVar6 = local_c8;
  for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  cVar3 = (**(code **)(*param_1 + 0x550))(param_1,param_3,param_1 + 0x23);
  if ((cVar3 == '\0') || ((int)param_1[0x22] < 3)) {
LAB_14842f3df:
    *param_2 = 0;
    *(undefined8 *)(param_2 + 8) = 0x47efffffe0000000;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0x3ff0000000000000;
    param_2[0x28] = 0;
    *(undefined8 *)(param_2 + 0x2c) = 0;
    *(undefined8 *)(param_2 + 0x34) = 0;
    *(undefined4 *)(param_2 + 0x3c) = 0;
  }
  else {
    FUN_14842edbe(param_1,param_4);
    fVar1 = *(float *)(param_1 + 0x20);
    local_e8 = param_5[2];
    local_f8 = *param_5;
    uStack_f0 = param_5[1];
    local_e0 = *param_6;
    dStack_d8 = param_6[1];
    local_d0 = param_6[2];
    dVar8 = local_d0 * local_d0 + local_e0 * local_e0 + dStack_d8 * dStack_d8;
    if (9.99999993922529e-09 < dVar8) {
      dVar8 = 1.0 / SQRT(dVar8);
      local_e0 = local_e0 * dVar8;
      dStack_d8 = dStack_d8 * dVar8;
      local_d0 = local_d0 * dVar8;
    }
    local_100 = 0.0;
    lVar7 = -3;
    lVar4 = 0;
    do {
      lVar7 = lVar7 + 3;
      if ((longlong)(int)param_1[0x2d] + -2 <= lVar7) goto LAB_14842f3df;
      lVar2 = param_1[0x2c];
      local_118 = (double)fVar1 * local_68;
      local_110 = &local_100;
      cVar3 = FUN_14842f5c4(&local_f8,lVar2 + lVar4,lVar2 + lVar4 + 0x18,lVar2 + 0x30 + lVar4);
      lVar4 = lVar4 + 0x48;
    } while (cVar3 == '\0');
    *param_2 = 1;
    *(double *)(param_2 + 8) = (double)(float)local_100;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0x3ff0000000000000;
    param_2[0x28] = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    FUN_14485c47a(param_2 + 0x38,param_1);
    *(longlong **)(param_2 + 0x30) = param_1;
    *(int *)(param_2 + 0x2c) = (int)param_1[6];
  }
  if ((local_50 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14842f5c4 FUN_14842f5c4 body=1456 status=ok
// SIG undefined FUN_14842f5c4(void)

byte FUN_14842f5c4(double *param_1,double *param_2,double *param_3,double *param_4,double param_5,
                  undefined8 *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  byte bVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_188 [32];
  double *local_168;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  undefined1 local_110 [24];
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_158 = param_2[2];
  local_d0 = param_3[2];
  local_c8 = *param_2;
  local_c0 = param_2[1];
  local_e0 = *param_3;
  local_d8 = param_3[1];
  local_e8 = param_4[2];
  local_f8 = *param_4;
  local_f0 = param_4[1];
  dVar1 = (local_158 + local_d0 + local_e8) * 0.3333333333333333;
  dVar2 = (local_c0 + local_d8 + local_f0) * 0.3333333333333333;
  dVar3 = (local_c8 + local_e0 + local_f8) * 0.3333333333333333;
  dVar4 = local_c0 - dVar2;
  dVar12 = local_c8 - dVar3;
  dVar10 = local_158 - dVar1;
  dVar5 = dVar10 * dVar10 + dVar12 * dVar12 + dVar4 * dVar4;
  if (((dVar5 != 1.0) || (dVar11 = dVar10, dVar6 = dVar4, dVar7 = dVar12, NAN(dVar5))) &&
     (dVar11 = DAT_14c8464f0, dVar6 = DAT_14c8464e8, dVar7 = DAT_14c8464e0,
     9.99999993922529e-09 <= dVar5)) {
    dVar5 = 1.0 / SQRT(dVar5);
    dVar11 = dVar10 * dVar5;
    dVar6 = dVar4 * dVar5;
    dVar7 = dVar12 * dVar5;
  }
  local_158 = local_158 + dVar11 * param_5;
  local_c0 = local_c0 + dVar6 * param_5;
  local_c8 = local_c8 + dVar7 * param_5;
  dVar5 = local_d0 - dVar1;
  dVar4 = local_d8 - dVar2;
  dVar12 = local_e0 - dVar3;
  dVar10 = dVar5 * dVar5 + dVar12 * dVar12 + dVar4 * dVar4;
  if (((dVar10 != 1.0) || (dVar6 = dVar5, dVar7 = dVar4, dVar11 = dVar12, NAN(dVar10))) &&
     (dVar6 = DAT_14c8464f0, dVar7 = DAT_14c8464e8, dVar11 = DAT_14c8464e0,
     9.99999993922529e-09 <= dVar10)) {
    dVar10 = 1.0 / SQRT(dVar10);
    dVar6 = dVar5 * dVar10;
    dVar7 = dVar4 * dVar10;
    dVar11 = dVar12 * dVar10;
  }
  local_d0 = local_d0 + dVar6 * param_5;
  local_d8 = local_d8 + dVar7 * param_5;
  local_e0 = local_e0 + dVar11 * param_5;
  dVar1 = local_e8 - dVar1;
  dVar2 = local_f0 - dVar2;
  dVar3 = local_f8 - dVar3;
  dVar12 = dVar1 * dVar1 + dVar3 * dVar3 + dVar2 * dVar2;
  if (((dVar12 != 1.0) || (dVar4 = dVar1, dVar5 = dVar2, dVar10 = dVar3, NAN(dVar12))) &&
     (dVar4 = DAT_14c8464f0, dVar5 = DAT_14c8464e8, dVar10 = DAT_14c8464e0,
     9.99999993922529e-09 <= dVar12)) {
    dVar12 = 1.0 / SQRT(dVar12);
    dVar4 = dVar1 * dVar12;
    dVar5 = dVar2 * dVar12;
    dVar10 = dVar3 * dVar12;
  }
  local_e8 = local_e8 + dVar4 * param_5;
  local_f0 = local_f0 + dVar5 * param_5;
  local_f8 = local_f8 + dVar10 * param_5;
  local_128 = (local_c8 - local_e0) * (local_d8 - local_f0) -
              (local_e0 - local_f8) * (local_c0 - local_d8);
  local_130 = (local_158 - local_d0) * (local_e0 - local_f8) -
              (local_d0 - local_e8) * (local_c8 - local_e0);
  local_138 = (local_c0 - local_d8) * (local_d0 - local_e8) -
              (local_d8 - local_f0) * (local_158 - local_d0);
  local_120 = local_128 * local_158 + local_138 * local_c8 + local_130 * local_c0;
  local_140 = param_1[5] * 10000.0 + param_1[2];
  local_148 = param_1[4] * 10000.0 + param_1[1];
  local_150 = param_1[3] * 10000.0 + *param_1;
  local_b8 = local_158;
  cVar8 = FUN_1467f7ca0(local_150,&local_150,&local_138,local_110);
  if (cVar8 == '\0') {
    bVar9 = 0;
  }
  else {
    local_168 = &local_f8;
    FUN_14276fa06(&local_138,local_110,&local_c8,&local_e0);
    bVar9 = 0.0 < local_128 & -(0.0 < local_130) & -(0.0 < local_138);
    if (bVar9 == 1) {
      *param_6 = 0;
    }
  }
  if ((local_b0 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar9;
}



// FUNCTION 14842fb76 FUN_14842fb76 body=102 status=ok
// SIG undefined FUN_14842fb76(void)

void FUN_14842fb76(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 0x110) = iVar1;
  if (iVar1 == 0 && *(int *)(param_1 + 0x114) == 0) {
    *(undefined4 *)(param_1 + 0x114) = 0;
  }
  else {
    FUN_1405b70fe((undefined8 *)(param_1 + 0x108),iVar1);
    if (iVar1 != 0) {
      memcpy(*(void **)(param_1 + 0x108),_Src,(longlong)iVar1 * 0x18);
      return;
    }
  }
  return;
}



// FUNCTION 14842fd7c FUN_14842fd7c body=103 status=ok
// SIG undefined FUN_14842fd7c(void)

void FUN_14842fd7c(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_98 [32];
  undefined8 local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x10))(param_1,local_78);
  puVar2 = local_78;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_3 = *puVar2;
    puVar2 = puVar2 + 1;
    param_3 = param_3 + 1;
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14842fde4 FUN_14842fde4 body=228 status=ok
// SIG undefined FUN_14842fde4(void)

void FUN_14842fde4(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0x3ff00000;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_34 = 0x3ff00000;
  uStack_30 = 0;
  uStack_2c = 0x3ff00000;
  local_28 = 0x3ff0000000000000;
  uStack_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  puVar1 = &local_78;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x18))(param_1,puVar1);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14842fecc FUN_14842fecc body=97 status=ok
// SIG undefined FUN_14842fecc(void)

void FUN_14842fecc(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x18))(param_1,&local_30);
  *(undefined8 *)(param_3 + 4) = local_20;
  *param_3 = local_30;
  param_3[1] = uStack_2c;
  param_3[2] = uStack_28;
  param_3[3] = uStack_24;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14842ff2e FUN_14842ff2e body=97 status=ok
// SIG undefined FUN_14842ff2e(void)

void FUN_14842ff2e(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x10))(param_1,&local_30);
  *(undefined8 *)(param_3 + 4) = local_20;
  *param_3 = local_30;
  param_3[1] = uStack_2c;
  param_3[2] = uStack_28;
  param_3[3] = uStack_24;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14842ff90 FUN_14842ff90 body=265 status=ok
// SIG undefined FUN_14842ff90(void)

void FUN_14842ff90(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [24];
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  puVar1 = local_40;
  if (puVar2 != (undefined1 *)0x0) {
    puVar1 = puVar2;
  }
  puVar2 = local_58;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x28))(param_1,puVar1,puVar2);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14843009e FUN_14843009e body=38 status=ok
// SIG undefined FUN_14843009e(void)

void FUN_14843009e(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x20))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1484300cc FUN_1484300cc body=159 status=ok
// SIG undefined FUN_1484300cc(void)

void FUN_1484300cc(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x18))(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148430170 FUN_148430170 body=159 status=ok
// SIG undefined FUN_148430170(void)

void FUN_148430170(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x20))(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148430218 FUN_148430218 body=243 status=ok
// SIG undefined FUN_148430218(void)

void FUN_148430218(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  iVar1 = local_24;
  local_28 = 0;
  FUN_144a8cc30();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x28))(param_1,iVar1 != 0,local_28);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148430310 FUN_148430310 body=243 status=ok
// SIG undefined FUN_148430310(void)

void FUN_148430310(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  iVar1 = local_24;
  local_28 = 0;
  FUN_144a8cc30();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x18))(param_1,iVar1 != 0,local_28);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148430408 FUN_148430408 body=243 status=ok
// SIG undefined FUN_148430408(void)

void FUN_148430408(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  iVar1 = local_24;
  local_28 = 0;
  FUN_144a8cc30();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x20))(param_1,iVar1 != 0,local_28);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148430508 FUN_148430508 body=243 status=ok
// SIG undefined FUN_148430508(void)

void FUN_148430508(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  iVar1 = local_24;
  local_28 = 0;
  FUN_144a8cc30();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x18))(param_1,iVar1 != 0,local_28);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148430662 FUN_148430662 body=40 status=ok
// SIG undefined FUN_148430662(void)

void FUN_148430662(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x10))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14843068a FUN_14843068a body=157 status=ok
// SIG undefined FUN_14843068a(void)

void FUN_14843068a(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x20))(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14843075c FUN_14843075c body=89 status=ok
// SIG undefined FUN_14843075c(void)

void FUN_14843075c(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x10))(param_1,&local_28);
  *param_3 = local_28;
  param_3[1] = uStack_24;
  param_3[2] = uStack_20;
  param_3[3] = uStack_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484307b6 FUN_1484307b6 body=161 status=ok
// SIG undefined FUN_1484307b6(void)

void FUN_1484307b6(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  puVar1 = local_28;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x20))(param_1,puVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14843085c FUN_14843085c body=146 status=ok
// SIG undefined FUN_14843085c(void)

void FUN_14843085c(longlong *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x18))(param_1,&local_48);
  *(undefined8 *)(param_2 + 4) = local_38;
  *param_2 = local_48;
  param_2[1] = uStack_44;
  param_2[2] = uStack_40;
  param_2[3] = uStack_3c;
  cVar1 = (**(code **)(*param_1 + 0x20))(param_1);
  if (cVar1 == '\0') {
    FUN_1484308ef(param_2,param_3,param_4);
  }
  else {
    (**(code **)(*param_1 + 0x28))(param_1,param_3,param_4);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484308ef FUN_1484308ef body=262 status=ok
// SIG undefined FUN_1484308ef(void)

void FUN_1484308ef(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = *param_1;
  dVar2 = param_1[2];
  if (0.0 <= dVar2) {
    dVar2 = 1.0 / (dVar2 + 1.0);
    dVar3 = -dVar1 * param_1[1] * dVar2;
    *param_2 = 1.0 - dVar1 * dVar1 * dVar2;
    param_2[1] = dVar3;
    param_2[2] = -*param_1;
    *param_3 = dVar3;
    dVar1 = 1.0 - param_1[1] * param_1[1] * dVar2;
  }
  else {
    dVar2 = 1.0 / (1.0 - dVar2);
    dVar3 = param_1[1] * dVar1 * dVar2;
    *param_2 = 1.0 - dVar1 * dVar1 * dVar2;
    param_2[1] = -dVar3;
    param_2[2] = *param_1;
    *param_3 = dVar3;
    dVar1 = param_1[1] * param_1[1] * dVar2 + -1.0;
  }
  param_3[1] = dVar1;
  param_3[2] = -param_1[1];
  return;
}



// FUNCTION 148430a02 FUN_148430a02 body=254 status=ok
// SIG undefined FUN_148430a02(void)

undefined8 * FUN_148430a02(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x310,0x10);
  FUN_1406ff4f8(puVar2,param_1,0);
  *puVar2 = &PTR_FUN_14aed92f0;
  uVar1 = *(undefined8 *)(param_1 + 0x630);
  puVar2[0x53] = *(undefined8 *)(param_1 + 0x628);
  puVar2[0x54] = uVar1;
  puVar2[0x57] = *(undefined8 *)(param_1 + 0x668);
  uVar1 = *(undefined8 *)(param_1 + 0x660);
  puVar2[0x55] = *(undefined8 *)(param_1 + 0x658);
  puVar2[0x56] = uVar1;
  puVar2[0x5a] = *(undefined8 *)(param_1 + 0x688);
  uVar1 = *(undefined8 *)(param_1 + 0x680);
  puVar2[0x58] = *(undefined8 *)(param_1 + 0x678);
  puVar2[0x59] = uVar1;
  *(undefined4 *)(puVar2 + 0x5b) = *(undefined4 *)(param_1 + 0x670);
  *(undefined4 *)((longlong)puVar2 + 0x2dc) = *(undefined4 *)(param_1 + 0x674);
  *(undefined1 *)(puVar2 + 0x5c) = 0;
  *(undefined1 *)((longlong)puVar2 + 0x2e1) = *(undefined1 *)(param_1 + 0x694);
  *(undefined4 *)((longlong)puVar2 + 0x2e4) = *(undefined4 *)(param_1 + 0x638);
  puVar2[0x5d] = param_1 + 0x640;
  puVar2[0x5e] = param_1 + 0x641;
  puVar2[0x5f] = param_1 + 0x690;
  puVar2[0x60] = param_1 + 0x650;
  return puVar2;
}



// FUNCTION 148430b00 FUN_148430b00 body=444 status=ok
// SIG undefined FUN_148430b00(void)

undefined1 (*) [16] FUN_148430b00(longlong param_1,undefined1 (*param_2) [16],double *param_3)

{
  double dVar1;
  undefined1 auVar2 [32];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  
  dVar8 = *param_3;
  dVar9 = param_3[1];
  dVar10 = param_3[2];
  dVar3 = DAT_14c8464e0 * param_3[8];
  dVar4 = DAT_14c8464e8 * param_3[9];
  dVar15 = DAT_14c8464f0 * param_3[10];
  dVar1 = param_3[3];
  dVar16 = dVar4 * dVar8 - dVar3 * dVar9;
  dVar5 = dVar15 * dVar9 - dVar4 * dVar10;
  dVar6 = dVar3 * dVar10 - dVar8 * dVar15;
  dVar5 = dVar5 + dVar5;
  dVar6 = dVar6 + dVar6;
  dVar16 = dVar16 + dVar16;
  dVar7 = (dVar10 * dVar5 - dVar8 * dVar16) + param_3[3] * dVar6 + dVar4 + param_3[5];
  dVar4 = param_3[6];
  auVar12._0_8_ = ABS(param_3[8]);
  auVar12._8_8_ = ABS(param_3[9]);
  dVar11 = ABS(param_3[10]);
  auVar2._24_8_ = ABS(param_3[0xb]);
  auVar2._16_8_ = dVar11;
  auVar2._0_16_ = auVar12;
  auVar13 = maxpd(auVar12,auVar2._8_16_);
  auVar14._8_4_ = SUB84(auVar12._0_8_,0);
  auVar14._0_8_ = dVar11;
  auVar14._12_4_ = (int)((ulonglong)auVar12._0_8_ >> 0x20);
  auVar14 = maxpd(auVar13,auVar14);
  dVar11 = (double)(float)auVar14._0_8_ *
           (double)SQRT(*(float *)(param_1 + 0x690) * *(float *)(param_1 + 0x690) +
                        *(float *)(param_1 + 0x670) * *(float *)(param_1 + 0x670));
  auVar13._8_4_ = SUB84(dVar7,0);
  auVar13._0_8_ = (dVar16 * dVar9 - dVar6 * dVar10) + dVar1 * dVar5 + dVar3 + param_3[4];
  auVar13._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  *param_2 = auVar13;
  *(double *)param_2[1] = dVar16 * dVar1 + dVar15 + (dVar6 * dVar8 - dVar5 * dVar9) + dVar4;
  *(double *)param_2[3] = dVar11;
  *(double *)(param_2[1] + 8) = dVar11;
  *(double *)param_2[2] = dVar11;
  *(double *)(param_2[2] + 8) = dVar11;
  return param_2;
}



// FUNCTION 148430cbc FUN_148430cbc body=1650 status=ok
// SIG undefined FUN_148430cbc(void)

bool FUN_148430cbc(longlong param_1,longlong param_2,double *param_3,undefined8 *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  longlong lVar5;
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
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined1 auStack_1b8 [32];
  double *local_198;
  double *local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double dStack_150;
  double local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  double local_118;
  double dStack_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  undefined1 local_e8 [16];
  double local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  dVar7 = DAT_14c8464e0 * *(double *)(param_1 + 0x280);
  dVar9 = DAT_14c8464e8 * *(double *)(param_1 + 0x288);
  dVar6 = DAT_14c8464f0 * *(double *)(param_1 + 0x290);
  dVar12 = *(double *)(param_1 + 0x240);
  dVar15 = *(double *)(param_1 + 0x248);
  dVar16 = *(double *)(param_1 + 0x250);
  dVar27 = *(double *)(param_1 + 600);
  dVar11 = dVar9 * dVar12 - dVar7 * dVar15;
  dVar13 = dVar6 * dVar15 - dVar9 * dVar16;
  dVar14 = dVar7 * dVar16 - dVar12 * dVar6;
  dVar13 = dVar13 + dVar13;
  dVar14 = dVar14 + dVar14;
  dVar11 = dVar11 + dVar11;
  dVar9 = (dVar16 * dVar13 - dVar12 * dVar11) + *(double *)(param_1 + 600) * dVar14 + dVar9 +
          *(double *)(param_1 + 0x268);
  local_d8 = dVar11 * dVar27 + dVar6 + (dVar14 * dVar12 - dVar13 * dVar15) +
             *(double *)(param_1 + 0x270);
  local_e8._8_4_ = SUB84(dVar9,0);
  local_e8._0_8_ =
       (dVar11 * dVar15 - dVar14 * dVar16) + dVar27 * dVar13 + dVar7 + *(double *)(param_1 + 0x260);
  local_e8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  if (*(char *)(param_1 + 0x650) == '\x01') {
    lVar5 = *(longlong *)(param_1 + 0x648) + 0x28;
    if (*(longlong *)(param_1 + 0x648) == 0) {
      lVar5 = 0;
    }
    fVar17 = (float)FUN_14841f855(lVar5,local_e8);
  }
  else {
    fVar17 = 1.0;
  }
  dVar9 = (double)*(float *)(param_1 + 0x690);
  dVar11 = *(double *)(param_1 + 0x658);
  dVar14 = *(double *)(param_1 + 0x660);
  dVar27 = *(double *)(param_1 + 0x668);
  if (*(char *)(param_1 + 0x641) == '\x01') {
    auVar1 = *(undefined1 (*) [16])(param_1 + 0x240);
    dVar16 = auVar1._0_8_;
    dVar7 = auVar1._8_8_;
    auVar2 = *(undefined1 (*) [16])(param_1 + 0x250);
    dVar6 = auVar2._0_8_;
    dVar8 = *(double *)(param_1 + 0x280);
    dVar10 = *(double *)(param_1 + 0x288);
    uVar24 = *(undefined4 *)(param_1 + 0x290);
    uVar25 = *(undefined4 *)(param_1 + 0x294);
    dVar12 = *(double *)(param_1 + 600);
    dVar15 = *(double *)(param_1 + 600);
    uVar18 = auVar1._0_4_;
    uVar19 = auVar1._4_4_;
    uVar20 = auVar1._8_4_;
    uVar21 = auVar1._12_4_;
    uVar22 = auVar2._0_4_;
    uVar23 = auVar2._4_4_;
  }
  else {
    auVar1 = *(undefined1 (*) [16])(param_1 + 0x240);
    dVar16 = auVar1._0_8_;
    dVar7 = auVar1._8_8_;
    auVar2 = *(undefined1 (*) [16])(param_1 + 0x250);
    dVar6 = auVar2._0_8_;
    dVar8 = *(double *)(param_1 + 0x280);
    dVar10 = *(double *)(param_1 + 0x288);
    auVar3 = *(undefined1 (*) [16])(param_1 + 0x290);
    uVar24 = auVar3._0_4_;
    uVar25 = auVar3._4_4_;
    dVar11 = dVar11 * dVar8;
    dVar14 = dVar14 * dVar10;
    dVar27 = dVar27 * auVar3._0_8_;
    dVar12 = *(double *)(param_1 + 600);
    dVar15 = *(double *)(param_1 + 600);
    uVar18 = auVar1._0_4_;
    uVar19 = auVar1._4_4_;
    uVar20 = auVar1._8_4_;
    uVar21 = auVar1._12_4_;
    uVar22 = auVar2._0_4_;
    uVar23 = auVar2._4_4_;
    dVar13 = dVar14 * dVar16 - dVar11 * dVar7;
    dVar28 = dVar27 * dVar7 - dVar14 * dVar6;
    dVar26 = dVar11 * dVar6 - dVar27 * dVar16;
    dVar28 = dVar28 + dVar28;
    dVar26 = dVar26 + dVar26;
    dVar13 = dVar13 + dVar13;
    dVar27 = dVar13 * dVar12 + dVar27 + (dVar26 * dVar16 - dVar28 * dVar7);
    dVar11 = (dVar13 * dVar7 - dVar26 * dVar6) + dVar12 * dVar28 + dVar11;
    dVar14 = (dVar6 * dVar28 - dVar16 * dVar13) + dVar15 * dVar26 + dVar14;
  }
  dVar8 = dVar9 * *(double *)(param_1 + 0x678) * dVar8;
  dVar10 = *(double *)(param_1 + 0x680) * dVar9 * dVar10;
  dVar26 = *(double *)(param_1 + 0x688) * dVar9 * (double)CONCAT44(uVar25,uVar24);
  dVar9 = dVar10 * dVar16 - (double)CONCAT44(uVar21,uVar20) * dVar8;
  dVar13 = dVar26 * dVar7 - (double)CONCAT44(uVar23,uVar22) * dVar10;
  dVar28 = dVar8 * dVar6 - (double)CONCAT44(uVar19,uVar18) * dVar26;
  dVar13 = dVar13 + dVar13;
  dVar28 = dVar28 + dVar28;
  dVar9 = dVar9 + dVar9;
  if (*(char *)(param_1 + 0x694) == '\0') {
    dVar4 = 1.0;
  }
  else {
    dVar4 = (double)fVar17;
  }
  local_160 = local_d8 +
              ((dVar9 * dVar12 + dVar26 +
                (dVar28 * dVar16 - dVar13 * (double)CONCAT44(uVar21,uVar20)) +
               *(double *)(param_1 + 0x270)) - local_d8) * dVar4;
  local_168 = (double)local_e8._8_8_ +
              (((dVar6 * dVar13 - (double)CONCAT44(uVar19,uVar18) * dVar9) +
                dVar15 * dVar28 + dVar10 + *(double *)(param_1 + 0x268)) - (double)local_e8._8_8_) *
              dVar4;
  local_170 = (double)local_e8._0_8_ +
              (((dVar9 * dVar7 - dVar28 * (double)CONCAT44(uVar23,uVar22)) + dVar12 * dVar13 + dVar8
               + *(double *)(param_1 + 0x260)) - (double)local_e8._0_8_) * dVar4;
  local_178 = dVar27 * dVar4 + local_160;
  local_180 = dVar14 * dVar4 + local_168;
  local_188 = dVar4 * dVar11 + local_170;
  local_160 = local_160 - dVar27 * dVar4;
  local_168 = local_168 - dVar14 * dVar4;
  local_170 = local_170 - dVar4 * dVar11;
  local_138 = *param_4;
  uStack_130 = param_4[1];
  local_128 = param_4[2];
  local_158 = *param_3;
  dStack_150 = param_3[1];
  local_148 = param_3[2];
  local_190 = &local_118;
  local_198 = &local_100;
  FUN_144a0d30e();
  dVar11 = SQRT((local_108 - local_f0) * (local_108 - local_f0) +
                (dStack_110 - local_f8) * (dStack_110 - local_f8) +
                (local_118 - local_100) * (local_118 - local_100));
  dVar27 = (double)(fVar17 * *(float *)(param_1 + 0x63c));
  if (dVar11 <= dVar27) {
    FUN_14485c47a(param_2 + 0xd8,param_1);
    *(float *)(param_2 + 8) =
         (float)SQRT((local_108 - param_3[2]) * (local_108 - param_3[2]) +
                     (dStack_110 - param_3[1]) * (dStack_110 - param_3[1]) +
                     (local_118 - *param_3) * (local_118 - *param_3));
    *(double *)(param_2 + 0x28) = local_118;
    *(double *)(param_2 + 0x30) = dStack_110;
    *(double *)(param_2 + 0x38) = local_108;
  }
  if ((local_d0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return dVar11 <= dVar27;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14843132f FUN_14843132f body=148 status=ok
// SIG undefined FUN_14843132f(void)

double * FUN_14843132f(double *param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar1 = param_3[2];
  dVar2 = param_3[1];
  dVar3 = param_4[1];
  dVar4 = param_4[2];
  dVar5 = (param_2[2] - dVar1) * dVar4 +
          (*param_2 - *param_3) * *param_4 + (param_2[1] - dVar2) * dVar3;
  *param_1 = dVar5 * *param_4 + *param_3;
  param_1[1] = dVar3 * dVar5 + dVar2;
  param_1[2] = dVar4 * dVar5 + dVar1;
  return param_1;
}



// FUNCTION 1484313c3 FUN_1484313c3 body=158 status=ok
// SIG undefined FUN_1484313c3(void)

void FUN_1484313c3(double *param_1,double *param_2,double *param_3,double *param_4,float *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar1 = param_1[2];
  dVar2 = param_1[1];
  dVar3 = param_2[1];
  dVar4 = param_2[2];
  dVar5 = (param_3[2] - dVar1) * dVar4 +
          (*param_3 - *param_1) * *param_2 + (param_3[1] - dVar2) * dVar3;
  *param_4 = *param_2 * dVar5 + *param_1;
  param_4[1] = dVar3 * dVar5 + dVar2;
  param_4[2] = dVar4 * dVar5 + dVar1;
  *param_5 = (float)dVar5;
  return;
}



// FUNCTION 148431461 FUN_148431461 body=641 status=ok
// SIG undefined FUN_148431461(void)

void FUN_148431461(double *param_1,double *param_2,double *param_3,double *param_4,double *param_5,
                  float *param_6,double *param_7,float *param_8)

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
  double dVar11;
  
  dVar1 = param_1[2];
  dVar6 = dVar1 - param_3[2];
  dVar2 = param_1[1];
  dVar7 = dVar2 - param_3[1];
  dVar9 = *param_1 - *param_3;
  dVar3 = *param_2;
  dVar4 = param_2[1];
  dVar5 = param_2[2];
  dVar10 = dVar5 * param_4[2] + dVar3 * *param_4 + dVar4 * param_4[1];
  dVar11 = dVar6 * dVar5 + dVar9 * dVar3 + dVar7 * dVar4;
  dVar8 = ABS(1.0 - dVar10 * dVar10);
  if (9.99999993922529e-09 <= dVar8) {
    dVar6 = dVar6 * param_4[2] + dVar9 * *param_4 + dVar7 * param_4[1];
    dVar9 = -dVar10 * dVar11 + dVar6;
    if (0.0 <= dVar9) {
      dVar8 = 1.0 / dVar8;
      dVar11 = (dVar10 * dVar6 - dVar11) * dVar8;
      dVar9 = dVar9 * dVar8;
      goto LAB_1484315ac;
    }
  }
  dVar9 = 0.0;
  dVar11 = -dVar11;
LAB_1484315ac:
  *param_5 = *param_1 + dVar3 * dVar11;
  param_5[1] = dVar2 + dVar4 * dVar11;
  param_5[2] = dVar1 + dVar5 * dVar11;
  dVar1 = param_4[2];
  dVar2 = param_4[1];
  dVar3 = param_3[2];
  dVar4 = param_3[1];
  *param_7 = dVar9 * *param_4 + *param_3;
  param_7[1] = dVar2 * dVar9 + dVar4;
  param_7[2] = dVar1 * dVar9 + dVar3;
  *param_6 = (float)dVar11;
  *param_8 = (float)dVar9;
  return;
}



// FUNCTION 1484316e2 FUN_1484316e2 body=110 status=ok
// SIG undefined FUN_1484316e2(void)

float FUN_1484316e2(double *param_1,double *param_2,undefined8 param_3,double *param_4,
                   double *param_5)

{
  double dVar1;
  
  dVar1 = atan2((param_1[2] - param_2[2]) * param_5[2] +
                (*param_1 - *param_2) * *param_5 + (param_1[1] - param_2[1]) * param_5[1],
                param_4[2] * (param_1[2] - param_2[2]) +
                *param_4 * (*param_1 - *param_2) + param_4[1] * (param_1[1] - param_2[1]));
  return (float)dVar1;
}



// FUNCTION 148431750 FUN_148431750 body=58 status=ok
// SIG undefined FUN_148431750(void)

undefined8 FUN_148431750(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 != 0) {
    lVar1 = FUN_14594bbf4();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) goto LAB_148431780;
  }
  lVar2 = 0;
LAB_148431780:
  return *(undefined8 *)(lVar2 + 0x78);
}



// FUNCTION 14843178a FUN_14843178a body=1615 status=ok
// SIG undefined FUN_14843178a(void)

undefined8 FUN_14843178a(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  wchar_t *pwVar10;
  longlong *plVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 auStack_108 [32];
  longlong local_e8;
  longlong *local_e0;
  longlong local_d8;
  longlong local_d0;
  wchar_t *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  wchar_t *local_88;
  undefined8 uStack_80;
  longlong *local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (((param_1 == (longlong *)0x0) || (lVar13 = *param_2, lVar13 == 0)) || (param_2[1] == 0)) {
    uVar9 = 0;
    goto LAB_1484317c8;
  }
  local_e8 = param_2[6];
  if (param_2[6] == 0) {
    local_e8 = DAT_14c951640;
  }
  lVar7 = *(longlong *)(lVar13 + 0xa8);
  iVar1 = (int)param_2[2];
  if (iVar1 == 0) {
LAB_148431826:
    lVar13 = *param_2;
    bVar4 = *(byte *)(param_2 + 7);
    if (lVar7 != 0 && bVar4 == 1) {
      if (*(longlong *)(lVar7 + 0x1c8) != 0) {
        lVar13 = *(longlong *)(lVar7 + 0x1c8);
      }
      bVar4 = 1;
    }
  }
  else {
    uVar12 = 1;
    if (iVar1 != 2) {
      uVar12 = (uint)(iVar1 == 3) * 2;
    }
    if (*(char *)((longlong)param_2 + 0x14) == '\0') {
      local_88 = (wchar_t *)FUN_14841ba1c(local_e8);
      if (DAT_14c950c29 == '\x01') {
        FUN_14689c22e(lVar13);
      }
      *(longlong *)(local_88 + 0x18) = lVar13;
      *(uint *)(local_88 + 0x1c) = uVar12;
      *(undefined1 *)(local_88 + 0x1e) = 1;
      FUN_148431dda(param_1 + 9);
      goto LAB_148431826;
    }
    if ((param_3 != (longlong *)0x0) && (param_3[(ulonglong)uVar12 + 3] != 0)) {
      FUN_148431e46(param_1 + 9,param_3 + (ulonglong)uVar12 + 3);
      goto LAB_148431826;
    }
    if (lVar7 != 0) {
      lVar13 = *(longlong *)(lVar7 + 0x1c8);
      if (lVar13 != 0) {
        pwVar10 = (wchar_t *)FUN_14841ba1c(local_e8);
        if (DAT_14c950c29 == '\x01') {
          FUN_14689c22e(lVar13);
        }
        *(longlong *)(pwVar10 + 0x18) = lVar13;
        *(uint *)(pwVar10 + 0x1c) = uVar12;
        *(undefined1 *)(pwVar10 + 0x1e) = 1;
        local_88 = pwVar10;
        FUN_148431e46(param_1 + 9);
        if (param_3 != (longlong *)0x0) {
          param_3[(ulonglong)uVar12 + 3] = (longlong)pwVar10;
        }
      }
      goto LAB_148431826;
    }
    bVar4 = *(byte *)(param_2 + 7);
  }
  lVar7 = local_e8;
  local_e0 = param_2 + 7;
  if (param_3 == (longlong *)0x0) {
LAB_148431874:
    lVar6 = param_2[1];
    lVar5 = FUN_14844b523(local_e8);
    if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(lVar6);
    }
    *(longlong *)(lVar5 + 0x48) = lVar6;
    lVar6 = lVar5 + 0x28;
    if (lVar5 == 0) {
      lVar6 = 0;
    }
    lVar6 = FUN_148431eb2(lVar6,lVar13,lVar7);
    *param_4 = lVar6;
    if ((param_3 != (longlong *)0x0) && ((char)*local_e0 == '\x01')) {
      *param_3 = lVar6;
    }
  }
  else {
    if ((*param_3 != 0 & bVar4) != 1) goto LAB_148431874;
    *param_4 = *param_3;
  }
  lVar6 = *param_2;
  local_d0 = FUN_148410475(lVar7);
  if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar6);
  }
  *(longlong *)(local_d0 + 0x30) = lVar6;
  FUN_148417f38(param_1 + 0xe,&local_d0);
  lVar7 = *param_2;
  local_c8 = *(wchar_t **)(local_d0 + 0x80);
  uStack_80 = *(longlong *)(local_d0 + 0x88);
  local_b8 = *(longlong **)(local_d0 + 0x90);
  uStack_70 = *(undefined8 *)(local_d0 + 0x98);
  local_68 = *(longlong *)(local_d0 + 0xa0);
  uStack_60 = *(undefined8 *)(local_d0 + 0xa8);
  local_58 = *(undefined8 *)(local_d0 + 0xb0);
  uStack_50 = *(undefined8 *)(local_d0 + 0xb8);
  uVar2 = local_58;
  uVar3 = uStack_50;
  local_78 = local_b8;
  uVar9 = uStack_70;
  local_88 = local_c8;
  lVar6 = uStack_80;
  *(ulonglong *)(local_d0 + 0xb0) = CONCAT44(uStack_94,local_98);
  *(ulonglong *)(local_d0 + 0xb8) = CONCAT44(uStack_8c,uStack_90);
  *(undefined ***)(local_d0 + 0xa0) = &PTR_LAB_14aedafe0;
  *(longlong *)(local_d0 + 0xa8) = lVar7;
  *(undefined8 *)(local_d0 + 0x90) = 0;
  *(ulonglong *)(local_d0 + 0x98) = CONCAT44(uStack_ac,uStack_b0);
  *(undefined1 **)(local_d0 + 0x80) = &LAB_14844d7bc;
  *(ulonglong *)(local_d0 + 0x88) = CONCAT44(uStack_bc,uStack_c0);
  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_a8 = local_68;
  uStack_a0 = uStack_60;
  local_98 = (undefined4)local_58;
  uStack_94 = local_58._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  uStack_c0 = (undefined4)uStack_80;
  uStack_bc = uStack_80._4_4_;
  if (local_c8 != (wchar_t *)0x0) {
    plVar11 = local_b8;
    if (local_b8 == (longlong *)0x0) {
      plVar11 = &local_a8;
    }
    uStack_80 = lVar6;
    uStack_70 = uVar9;
    local_58 = uVar2;
    uStack_50 = uVar3;
    (**(code **)(*plVar11 + 0x10))();
  }
  lVar7 = *param_2;
  local_c8 = *(wchar_t **)(local_d0 + 0xc0);
  uStack_80 = *(longlong *)(local_d0 + 200);
  local_b8 = *(longlong **)(local_d0 + 0xd0);
  uStack_70 = *(undefined8 *)(local_d0 + 0xd8);
  local_68 = *(longlong *)(local_d0 + 0xe0);
  uStack_60 = *(undefined8 *)(local_d0 + 0xe8);
  local_58 = *(undefined8 *)(local_d0 + 0xf0);
  uStack_50 = *(undefined8 *)(local_d0 + 0xf8);
  uVar2 = local_58;
  uVar3 = uStack_50;
  local_78 = local_b8;
  uVar9 = uStack_70;
  local_88 = local_c8;
  lVar6 = uStack_80;
  *(ulonglong *)(local_d0 + 0xf0) = CONCAT44(uStack_94,local_98);
  *(ulonglong *)(local_d0 + 0xf8) = CONCAT44(uStack_8c,uStack_90);
  *(undefined ***)(local_d0 + 0xe0) = &PTR_LAB_14aedb000;
  *(longlong *)(local_d0 + 0xe8) = lVar7;
  *(undefined8 *)(local_d0 + 0xd0) = 0;
  *(ulonglong *)(local_d0 + 0xd8) = CONCAT44(uStack_ac,uStack_b0);
  *(undefined1 **)(local_d0 + 0xc0) = &LAB_14844d84e;
  *(ulonglong *)(local_d0 + 200) = CONCAT44(uStack_bc,uStack_c0);
  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_98 = (undefined4)local_58;
  uStack_94 = local_58._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_a8 = local_68;
  uStack_a0 = uStack_60;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  uStack_c0 = (undefined4)uStack_80;
  uStack_bc = uStack_80._4_4_;
  uStack_80 = lVar6;
  uStack_70 = uVar9;
  local_58 = uVar2;
  uStack_50 = uVar3;
  if (local_c8 != (wchar_t *)0x0) {
    plVar11 = &local_a8;
    if (local_b8 != (longlong *)0x0) {
      plVar11 = local_b8;
    }
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
  if (((param_3 == (longlong *)0x0) || (param_3[1] == 0)) || ((char)*local_e0 != '\x01')) {
    local_88 = L"UCombinedTransformGizmoTransaction";
    uStack_80._0_4_ = 0x22;
    FUN_1446e940c(&local_c8,&local_88);
    local_88 = L"UCombinedTransformGizmo";
    uStack_80 = CONCAT44(uStack_80._4_4_,0x17);
    FUN_1446e940c(&local_d8,&local_88);
    FUN_140208bae(&local_88,&local_d8,&local_c8,L"Transform");
    pwVar10 = (wchar_t *)param_2[3];
    local_c8 = pwVar10;
    if (pwVar10 == (wchar_t *)0x0) {
      local_c8 = local_88;
    }
    if (local_c8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_c8 + 8))();
    }
    plVar11 = &uStack_80;
    if (pwVar10 != (wchar_t *)0x0) {
      plVar11 = param_2 + 4;
    }
    uStack_c0 = (undefined4)*plVar11;
    lVar7 = param_2[5];
    if (lVar7 == 0) {
      lVar6 = (**(code **)(*param_1 + 0x2c8))(param_1);
      lVar7 = lVar6 + 0x28;
      if (lVar6 == 0) {
        lVar7 = 0;
      }
    }
    lVar7 = FUN_14843200a(lVar13,&local_c8,lVar7,local_e8);
    local_d8 = lVar7;
    puVar8 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    lVar13 = param_2[1];
    *puVar8 = &PTR_FUN_14aedb020;
    puVar8[1] = 0;
    puVar8[2] = 0;
    *(undefined1 *)(puVar8 + 3) = 0;
    FUN_14485c47a(puVar8 + 1,lVar13);
    iVar1 = *(int *)(lVar7 + 0x128);
    *(uint *)(lVar7 + 0x128) = iVar1 + 1U;
    if (*(uint *)(lVar7 + 300) < iVar1 + 1U) {
      FUN_14844d8e0((longlong *)(lVar7 + 0x120),iVar1);
    }
    *(undefined8 **)(*(longlong *)(lVar7 + 0x120) + (longlong)iVar1 * 8) = puVar8;
    FUN_148431f9e(param_1 + 0x10,&local_d8);
    if ((param_3 != (longlong *)0x0) && ((char)*local_e0 == '\x01')) {
      param_3[1] = lVar7;
    }
    if (local_c8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_c8 + 0x10))();
    }
    if (local_88 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_88 + 0x10))();
    }
  }
  else {
    FUN_148431f9e(param_1 + 0x10,param_3 + 1);
  }
  uVar9 = 1;
LAB_1484317c8:
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148431dda FUN_148431dda body=107 status=ok
// SIG undefined FUN_148431dda(void)

longlong * FUN_148431dda(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *param_2;
  lVar3 = lVar1;
  if (lVar1 != 0 && DAT_14c950c29 == 1) {
    FUN_14689c22e(lVar1);
    lVar3 = *param_2;
  }
  if ((lVar1 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_14689c22e(lVar1);
  }
  lVar2 = lVar3 + 0x28;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  *param_1 = lVar1;
  param_1[1] = lVar2;
  return param_1;
}



// FUNCTION 148431e46 FUN_148431e46 body=107 status=ok
// SIG undefined FUN_148431e46(void)

longlong * FUN_148431e46(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *param_2;
  lVar3 = lVar1;
  if (lVar1 != 0 && DAT_14c950c29 == 1) {
    FUN_14689c22e(lVar1);
    lVar3 = *param_2;
  }
  if ((lVar1 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_14689c22e(lVar1);
  }
  lVar2 = lVar3 + 0x28;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  *param_1 = lVar1;
  param_1[1] = lVar2;
  return param_1;
}



// FUNCTION 148431eb2 FUN_148431eb2 body=178 status=ok
// SIG undefined FUN_148431eb2(void)

longlong FUN_148431eb2(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_14844b358(param_3);
  if (param_1 != (longlong *)0x0) {
    local_30 = (**(code **)(*param_1 + 8))(param_1);
    if (local_30 != 0) goto LAB_148431ef3;
  }
  local_30 = 0;
LAB_148431ef3:
  FUN_14841b920(lVar1 + 0x48);
  lVar2 = FUN_14844b473(param_3);
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
  }
  *(longlong *)(lVar2 + 0x48) = param_2;
  *(undefined1 *)(lVar2 + 0x50) = 0;
  local_30 = lVar2;
  FUN_14844b408(lVar1 + 0x58);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148431f66 FUN_148431f66 body=56 status=ok
// SIG undefined FUN_148431f66(void)

longlong FUN_148431f66(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_148410475(param_2);
  if ((param_1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_1);
  }
  *(longlong *)(lVar1 + 0x30) = param_1;
  return lVar1;
}



// FUNCTION 148431f9e FUN_148431f9e body=107 status=ok
// SIG undefined FUN_148431f9e(void)

longlong * FUN_148431f9e(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *param_2;
  lVar3 = lVar1;
  if (lVar1 != 0 && DAT_14c950c29 == 1) {
    FUN_14689c22e(lVar1);
    lVar3 = *param_2;
  }
  if ((lVar1 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_14689c22e(lVar1);
  }
  lVar2 = lVar3 + 0x28;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  *param_1 = lVar1;
  param_1[1] = lVar2;
  return param_1;
}



// FUNCTION 14843200a FUN_14843200a body=162 status=ok
// SIG undefined FUN_14843200a(void)

longlong FUN_14843200a(undefined8 param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_14844b5d3(param_4);
  FUN_14485c47a(lVar3 + 0x30,param_1);
  plVar1 = (longlong *)*param_2;
  plVar2 = *(longlong **)(lVar3 + 0x38);
  if (plVar2 != plVar1) {
    *(longlong **)(lVar3 + 0x38) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(lVar3 + 0x40) = (int)param_2[1];
  *(longlong **)(lVar3 + 0x50) = param_3;
  lVar4 = (**(code **)(*param_3 + 8))(param_3);
  if ((lVar4 == 0) || (DAT_14c950c29 == '\0')) {
    *(longlong *)(lVar3 + 0x48) = lVar4;
    if (lVar4 == 0) {
      *(undefined8 *)(lVar3 + 0x50) = 0;
    }
  }
  else {
    FUN_14689c22e(lVar4);
    *(longlong *)(lVar3 + 0x48) = lVar4;
  }
  return lVar3;
}



// FUNCTION 1484320ac FUN_1484320ac body=1615 status=ok
// SIG undefined FUN_1484320ac(void)

undefined8 FUN_1484320ac(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  wchar_t *pwVar10;
  longlong *plVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 auStack_108 [32];
  longlong local_e8;
  longlong *local_e0;
  longlong local_d8;
  longlong local_d0;
  wchar_t *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  wchar_t *local_88;
  undefined8 uStack_80;
  longlong *local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (((param_1 == (longlong *)0x0) || (lVar13 = *param_2, lVar13 == 0)) || (param_2[1] == 0)) {
    uVar9 = 0;
    goto LAB_1484320ea;
  }
  local_e8 = param_2[6];
  if (param_2[6] == 0) {
    local_e8 = DAT_14c951640;
  }
  lVar7 = *(longlong *)(lVar13 + 0xa8);
  iVar1 = (int)param_2[2];
  if (iVar1 == 0) {
LAB_148432148:
    lVar13 = *param_2;
    bVar4 = *(byte *)(param_2 + 7);
    if (lVar7 != 0 && bVar4 == 1) {
      if (*(longlong *)(lVar7 + 0x1c8) != 0) {
        lVar13 = *(longlong *)(lVar7 + 0x1c8);
      }
      bVar4 = 1;
    }
  }
  else {
    uVar12 = 1;
    if (iVar1 != 2) {
      uVar12 = (uint)(iVar1 == 3) * 2;
    }
    if (*(char *)((longlong)param_2 + 0x14) == '\0') {
      local_88 = (wchar_t *)FUN_14841ba1c(local_e8);
      if (DAT_14c950c29 == '\x01') {
        FUN_14689c22e(lVar13);
      }
      *(longlong *)(local_88 + 0x18) = lVar13;
      *(uint *)(local_88 + 0x1c) = uVar12;
      *(undefined1 *)(local_88 + 0x1e) = 1;
      FUN_148431dda(param_1 + 9);
      goto LAB_148432148;
    }
    if ((param_3 != (longlong *)0x0) && (param_3[(ulonglong)uVar12 + 3] != 0)) {
      FUN_148431e46(param_1 + 9,param_3 + (ulonglong)uVar12 + 3);
      goto LAB_148432148;
    }
    if (lVar7 != 0) {
      lVar13 = *(longlong *)(lVar7 + 0x1c8);
      if (lVar13 != 0) {
        pwVar10 = (wchar_t *)FUN_14841ba1c(local_e8);
        if (DAT_14c950c29 == '\x01') {
          FUN_14689c22e(lVar13);
        }
        *(longlong *)(pwVar10 + 0x18) = lVar13;
        *(uint *)(pwVar10 + 0x1c) = uVar12;
        *(undefined1 *)(pwVar10 + 0x1e) = 1;
        local_88 = pwVar10;
        FUN_148431e46(param_1 + 9);
        if (param_3 != (longlong *)0x0) {
          param_3[(ulonglong)uVar12 + 3] = (longlong)pwVar10;
        }
      }
      goto LAB_148432148;
    }
    bVar4 = *(byte *)(param_2 + 7);
  }
  lVar7 = local_e8;
  local_e0 = param_2 + 7;
  if (param_3 == (longlong *)0x0) {
LAB_148432196:
    lVar6 = param_2[1];
    lVar5 = FUN_14844b523(local_e8);
    if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(lVar6);
    }
    *(longlong *)(lVar5 + 0x48) = lVar6;
    lVar6 = lVar5 + 0x28;
    if (lVar5 == 0) {
      lVar6 = 0;
    }
    lVar6 = FUN_148431eb2(lVar6,lVar13,lVar7);
    *param_4 = lVar6;
    if ((param_3 != (longlong *)0x0) && ((char)*local_e0 == '\x01')) {
      *param_3 = lVar6;
    }
  }
  else {
    if ((*param_3 != 0 & bVar4) != 1) goto LAB_148432196;
    *param_4 = *param_3;
  }
  lVar6 = *param_2;
  local_d0 = FUN_148410475(lVar7);
  if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar6);
  }
  *(longlong *)(local_d0 + 0x30) = lVar6;
  FUN_148417f38(param_1 + 0xd,&local_d0);
  lVar7 = *param_2;
  local_c8 = *(wchar_t **)(local_d0 + 0x80);
  uStack_80 = *(longlong *)(local_d0 + 0x88);
  local_b8 = *(longlong **)(local_d0 + 0x90);
  uStack_70 = *(undefined8 *)(local_d0 + 0x98);
  local_68 = *(longlong *)(local_d0 + 0xa0);
  uStack_60 = *(undefined8 *)(local_d0 + 0xa8);
  local_58 = *(undefined8 *)(local_d0 + 0xb0);
  uStack_50 = *(undefined8 *)(local_d0 + 0xb8);
  uVar2 = local_58;
  uVar3 = uStack_50;
  local_78 = local_b8;
  uVar9 = uStack_70;
  local_88 = local_c8;
  lVar6 = uStack_80;
  *(ulonglong *)(local_d0 + 0xb0) = CONCAT44(uStack_94,local_98);
  *(ulonglong *)(local_d0 + 0xb8) = CONCAT44(uStack_8c,uStack_90);
  *(undefined ***)(local_d0 + 0xa0) = &PTR_LAB_14aedb050;
  *(longlong *)(local_d0 + 0xa8) = lVar7;
  *(undefined8 *)(local_d0 + 0x90) = 0;
  *(ulonglong *)(local_d0 + 0x98) = CONCAT44(uStack_ac,uStack_b0);
  *(undefined1 **)(local_d0 + 0x80) = &LAB_14844d9a6;
  *(ulonglong *)(local_d0 + 0x88) = CONCAT44(uStack_bc,uStack_c0);
  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_a8 = local_68;
  uStack_a0 = uStack_60;
  local_98 = (undefined4)local_58;
  uStack_94 = local_58._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  uStack_c0 = (undefined4)uStack_80;
  uStack_bc = uStack_80._4_4_;
  if (local_c8 != (wchar_t *)0x0) {
    plVar11 = local_b8;
    if (local_b8 == (longlong *)0x0) {
      plVar11 = &local_a8;
    }
    uStack_80 = lVar6;
    uStack_70 = uVar9;
    local_58 = uVar2;
    uStack_50 = uVar3;
    (**(code **)(*plVar11 + 0x10))();
  }
  lVar7 = *param_2;
  local_c8 = *(wchar_t **)(local_d0 + 0xc0);
  uStack_80 = *(longlong *)(local_d0 + 200);
  local_b8 = *(longlong **)(local_d0 + 0xd0);
  uStack_70 = *(undefined8 *)(local_d0 + 0xd8);
  local_68 = *(longlong *)(local_d0 + 0xe0);
  uStack_60 = *(undefined8 *)(local_d0 + 0xe8);
  local_58 = *(undefined8 *)(local_d0 + 0xf0);
  uStack_50 = *(undefined8 *)(local_d0 + 0xf8);
  uVar2 = local_58;
  uVar3 = uStack_50;
  local_78 = local_b8;
  uVar9 = uStack_70;
  local_88 = local_c8;
  lVar6 = uStack_80;
  *(ulonglong *)(local_d0 + 0xf0) = CONCAT44(uStack_94,local_98);
  *(ulonglong *)(local_d0 + 0xf8) = CONCAT44(uStack_8c,uStack_90);
  *(undefined ***)(local_d0 + 0xe0) = &PTR_LAB_14aedb070;
  *(longlong *)(local_d0 + 0xe8) = lVar7;
  *(undefined8 *)(local_d0 + 0xd0) = 0;
  *(ulonglong *)(local_d0 + 0xd8) = CONCAT44(uStack_ac,uStack_b0);
  *(undefined1 **)(local_d0 + 0xc0) = &LAB_14844da38;
  *(ulonglong *)(local_d0 + 200) = CONCAT44(uStack_bc,uStack_c0);
  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_98 = (undefined4)local_58;
  uStack_94 = local_58._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_a8 = local_68;
  uStack_a0 = uStack_60;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  uStack_c0 = (undefined4)uStack_80;
  uStack_bc = uStack_80._4_4_;
  uStack_80 = lVar6;
  uStack_70 = uVar9;
  local_58 = uVar2;
  uStack_50 = uVar3;
  if (local_c8 != (wchar_t *)0x0) {
    plVar11 = &local_a8;
    if (local_b8 != (longlong *)0x0) {
      plVar11 = local_b8;
    }
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
  if (((param_3 == (longlong *)0x0) || (param_3[1] == 0)) || ((char)*local_e0 != '\x01')) {
    local_88 = L"UCombinedTransformGizmoTransaction";
    uStack_80._0_4_ = 0x22;
    FUN_1446e940c(&local_c8,&local_88);
    local_88 = L"UCombinedTransformGizmo";
    uStack_80 = CONCAT44(uStack_80._4_4_,0x17);
    FUN_1446e940c(&local_d8,&local_88);
    FUN_140208bae(&local_88,&local_d8,&local_c8,L"Transform");
    pwVar10 = (wchar_t *)param_2[3];
    local_c8 = pwVar10;
    if (pwVar10 == (wchar_t *)0x0) {
      local_c8 = local_88;
    }
    if (local_c8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_c8 + 8))();
    }
    plVar11 = &uStack_80;
    if (pwVar10 != (wchar_t *)0x0) {
      plVar11 = param_2 + 4;
    }
    uStack_c0 = (undefined4)*plVar11;
    lVar7 = param_2[5];
    if (lVar7 == 0) {
      lVar6 = (**(code **)(*param_1 + 0x2c8))(param_1);
      lVar7 = lVar6 + 0x28;
      if (lVar6 == 0) {
        lVar7 = 0;
      }
    }
    lVar7 = FUN_14843200a(lVar13,&local_c8,lVar7,local_e8);
    local_d8 = lVar7;
    puVar8 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    lVar13 = param_2[1];
    *puVar8 = &PTR_FUN_14aedb020;
    puVar8[1] = 0;
    puVar8[2] = 0;
    *(undefined1 *)(puVar8 + 3) = 0;
    FUN_14485c47a(puVar8 + 1,lVar13);
    iVar1 = *(int *)(lVar7 + 0x128);
    *(uint *)(lVar7 + 0x128) = iVar1 + 1U;
    if (*(uint *)(lVar7 + 300) < iVar1 + 1U) {
      FUN_14844d8e0((longlong *)(lVar7 + 0x120),iVar1);
    }
    *(undefined8 **)(*(longlong *)(lVar7 + 0x120) + (longlong)iVar1 * 8) = puVar8;
    FUN_148431f9e(param_1 + 0xf,&local_d8);
    if ((param_3 != (longlong *)0x0) && ((char)*local_e0 == '\x01')) {
      param_3[1] = lVar7;
    }
    if (local_c8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_c8 + 0x10))();
    }
    if (local_88 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_88 + 0x10))();
    }
  }
  else {
    FUN_148431f9e(param_1 + 0xf,param_3 + 1);
  }
  uVar9 = 1;
LAB_1484320ea:
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484326fc FUN_1484326fc body=1615 status=ok
// SIG undefined FUN_1484326fc(void)

undefined8 FUN_1484326fc(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  wchar_t *pwVar10;
  longlong *plVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 auStack_108 [32];
  longlong local_e8;
  longlong *local_e0;
  longlong local_d8;
  longlong local_d0;
  wchar_t *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  wchar_t *local_88;
  undefined8 uStack_80;
  longlong *local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (((param_1 == (longlong *)0x0) || (lVar13 = *param_2, lVar13 == 0)) || (param_2[1] == 0)) {
    uVar9 = 0;
    goto LAB_14843273a;
  }
  local_e8 = param_2[6];
  if (param_2[6] == 0) {
    local_e8 = DAT_14c951640;
  }
  lVar7 = *(longlong *)(lVar13 + 0xa8);
  iVar1 = (int)param_2[2];
  if (iVar1 == 0) {
LAB_148432798:
    lVar13 = *param_2;
    bVar4 = *(byte *)(param_2 + 7);
    if (lVar7 != 0 && bVar4 == 1) {
      if (*(longlong *)(lVar7 + 0x1c8) != 0) {
        lVar13 = *(longlong *)(lVar7 + 0x1c8);
      }
      bVar4 = 1;
    }
  }
  else {
    uVar12 = 1;
    if (iVar1 != 2) {
      uVar12 = (uint)(iVar1 == 3) * 2;
    }
    if (*(char *)((longlong)param_2 + 0x14) == '\0') {
      local_88 = (wchar_t *)FUN_14841ba1c(local_e8);
      if (DAT_14c950c29 == '\x01') {
        FUN_14689c22e(lVar13);
      }
      *(longlong *)(local_88 + 0x18) = lVar13;
      *(uint *)(local_88 + 0x1c) = uVar12;
      *(undefined1 *)(local_88 + 0x1e) = 1;
      FUN_148431dda(param_1 + 9);
      goto LAB_148432798;
    }
    if ((param_3 != (longlong *)0x0) && (param_3[(ulonglong)uVar12 + 3] != 0)) {
      FUN_148431e46(param_1 + 9,param_3 + (ulonglong)uVar12 + 3);
      goto LAB_148432798;
    }
    if (lVar7 != 0) {
      lVar13 = *(longlong *)(lVar7 + 0x1c8);
      if (lVar13 != 0) {
        pwVar10 = (wchar_t *)FUN_14841ba1c(local_e8);
        if (DAT_14c950c29 == '\x01') {
          FUN_14689c22e(lVar13);
        }
        *(longlong *)(pwVar10 + 0x18) = lVar13;
        *(uint *)(pwVar10 + 0x1c) = uVar12;
        *(undefined1 *)(pwVar10 + 0x1e) = 1;
        local_88 = pwVar10;
        FUN_148431e46(param_1 + 9);
        if (param_3 != (longlong *)0x0) {
          param_3[(ulonglong)uVar12 + 3] = (longlong)pwVar10;
        }
      }
      goto LAB_148432798;
    }
    bVar4 = *(byte *)(param_2 + 7);
  }
  lVar7 = local_e8;
  local_e0 = param_2 + 7;
  if (param_3 == (longlong *)0x0) {
LAB_1484327e6:
    lVar6 = param_2[1];
    lVar5 = FUN_14844b523(local_e8);
    if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(lVar6);
    }
    *(longlong *)(lVar5 + 0x48) = lVar6;
    lVar6 = lVar5 + 0x28;
    if (lVar5 == 0) {
      lVar6 = 0;
    }
    lVar6 = FUN_148431eb2(lVar6,lVar13,lVar7);
    *param_4 = lVar6;
    if ((param_3 != (longlong *)0x0) && ((char)*local_e0 == '\x01')) {
      *param_3 = lVar6;
    }
  }
  else {
    if ((*param_3 != 0 & bVar4) != 1) goto LAB_1484327e6;
    *param_4 = *param_3;
  }
  lVar6 = *param_2;
  local_d0 = FUN_148410475(lVar7);
  if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar6);
  }
  *(longlong *)(local_d0 + 0x30) = lVar6;
  FUN_148417f38(param_1 + 0xd,&local_d0);
  lVar7 = *param_2;
  local_c8 = *(wchar_t **)(local_d0 + 0x80);
  uStack_80 = *(longlong *)(local_d0 + 0x88);
  local_b8 = *(longlong **)(local_d0 + 0x90);
  uStack_70 = *(undefined8 *)(local_d0 + 0x98);
  local_68 = *(longlong *)(local_d0 + 0xa0);
  uStack_60 = *(undefined8 *)(local_d0 + 0xa8);
  local_58 = *(undefined8 *)(local_d0 + 0xb0);
  uStack_50 = *(undefined8 *)(local_d0 + 0xb8);
  uVar2 = local_58;
  uVar3 = uStack_50;
  local_78 = local_b8;
  uVar9 = uStack_70;
  local_88 = local_c8;
  lVar6 = uStack_80;
  *(ulonglong *)(local_d0 + 0xb0) = CONCAT44(uStack_94,local_98);
  *(ulonglong *)(local_d0 + 0xb8) = CONCAT44(uStack_8c,uStack_90);
  *(undefined ***)(local_d0 + 0xa0) = &PTR_LAB_14aedb090;
  *(longlong *)(local_d0 + 0xa8) = lVar7;
  *(undefined8 *)(local_d0 + 0x90) = 0;
  *(ulonglong *)(local_d0 + 0x98) = CONCAT44(uStack_ac,uStack_b0);
  *(undefined1 **)(local_d0 + 0x80) = &LAB_14844daca;
  *(ulonglong *)(local_d0 + 0x88) = CONCAT44(uStack_bc,uStack_c0);
  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_a8 = local_68;
  uStack_a0 = uStack_60;
  local_98 = (undefined4)local_58;
  uStack_94 = local_58._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  uStack_c0 = (undefined4)uStack_80;
  uStack_bc = uStack_80._4_4_;
  if (local_c8 != (wchar_t *)0x0) {
    plVar11 = local_b8;
    if (local_b8 == (longlong *)0x0) {
      plVar11 = &local_a8;
    }
    uStack_80 = lVar6;
    uStack_70 = uVar9;
    local_58 = uVar2;
    uStack_50 = uVar3;
    (**(code **)(*plVar11 + 0x10))();
  }
  lVar7 = *param_2;
  local_c8 = *(wchar_t **)(local_d0 + 0xc0);
  uStack_80 = *(longlong *)(local_d0 + 200);
  local_b8 = *(longlong **)(local_d0 + 0xd0);
  uStack_70 = *(undefined8 *)(local_d0 + 0xd8);
  local_68 = *(longlong *)(local_d0 + 0xe0);
  uStack_60 = *(undefined8 *)(local_d0 + 0xe8);
  local_58 = *(undefined8 *)(local_d0 + 0xf0);
  uStack_50 = *(undefined8 *)(local_d0 + 0xf8);
  uVar2 = local_58;
  uVar3 = uStack_50;
  local_78 = local_b8;
  uVar9 = uStack_70;
  local_88 = local_c8;
  lVar6 = uStack_80;
  *(ulonglong *)(local_d0 + 0xf0) = CONCAT44(uStack_94,local_98);
  *(ulonglong *)(local_d0 + 0xf8) = CONCAT44(uStack_8c,uStack_90);
  *(undefined ***)(local_d0 + 0xe0) = &PTR_LAB_14aedb0b0;
  *(longlong *)(local_d0 + 0xe8) = lVar7;
  *(undefined8 *)(local_d0 + 0xd0) = 0;
  *(ulonglong *)(local_d0 + 0xd8) = CONCAT44(uStack_ac,uStack_b0);
  *(undefined1 **)(local_d0 + 0xc0) = &LAB_14844db5c;
  *(ulonglong *)(local_d0 + 200) = CONCAT44(uStack_bc,uStack_c0);
  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_98 = (undefined4)local_58;
  uStack_94 = local_58._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_a8 = local_68;
  uStack_a0 = uStack_60;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  uStack_c0 = (undefined4)uStack_80;
  uStack_bc = uStack_80._4_4_;
  uStack_80 = lVar6;
  uStack_70 = uVar9;
  local_58 = uVar2;
  uStack_50 = uVar3;
  if (local_c8 != (wchar_t *)0x0) {
    plVar11 = &local_a8;
    if (local_b8 != (longlong *)0x0) {
      plVar11 = local_b8;
    }
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
  if (((param_3 == (longlong *)0x0) || (param_3[1] == 0)) || ((char)*local_e0 != '\x01')) {
    local_88 = L"UCombinedTransformGizmoTransaction";
    uStack_80._0_4_ = 0x22;
    FUN_1446e940c(&local_c8,&local_88);
    local_88 = L"UCombinedTransformGizmo";
    uStack_80 = CONCAT44(uStack_80._4_4_,0x17);
    FUN_1446e940c(&local_d8,&local_88);
    FUN_140208bae(&local_88,&local_d8,&local_c8,L"Transform");
    pwVar10 = (wchar_t *)param_2[3];
    local_c8 = pwVar10;
    if (pwVar10 == (wchar_t *)0x0) {
      local_c8 = local_88;
    }
    if (local_c8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_c8 + 8))();
    }
    plVar11 = &uStack_80;
    if (pwVar10 != (wchar_t *)0x0) {
      plVar11 = param_2 + 4;
    }
    uStack_c0 = (undefined4)*plVar11;
    lVar7 = param_2[5];
    if (lVar7 == 0) {
      lVar6 = (**(code **)(*param_1 + 0x2c8))(param_1);
      lVar7 = lVar6 + 0x28;
      if (lVar6 == 0) {
        lVar7 = 0;
      }
    }
    lVar7 = FUN_14843200a(lVar13,&local_c8,lVar7,local_e8);
    local_d8 = lVar7;
    puVar8 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    lVar13 = param_2[1];
    *puVar8 = &PTR_FUN_14aedb020;
    puVar8[1] = 0;
    puVar8[2] = 0;
    *(undefined1 *)(puVar8 + 3) = 0;
    FUN_14485c47a(puVar8 + 1,lVar13);
    iVar1 = *(int *)(lVar7 + 0x128);
    *(uint *)(lVar7 + 0x128) = iVar1 + 1U;
    if (*(uint *)(lVar7 + 300) < iVar1 + 1U) {
      FUN_14844d8e0((longlong *)(lVar7 + 0x120),iVar1);
    }
    *(undefined8 **)(*(longlong *)(lVar7 + 0x120) + (longlong)iVar1 * 8) = puVar8;
    FUN_148431f9e(param_1 + 0xf,&local_d8);
    if ((param_3 != (longlong *)0x0) && ((char)*local_e0 == '\x01')) {
      param_3[1] = lVar7;
    }
    if (local_c8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_c8 + 0x10))();
    }
    if (local_88 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_88 + 0x10))();
    }
  }
  else {
    FUN_148431f9e(param_1 + 0xf,param_3 + 1);
  }
  uVar9 = 1;
LAB_14843273a:
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148432d58 FUN_148432d58 body=90 status=ok
// SIG undefined FUN_148432d58(void)

longlong FUN_148432d58(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x310,0x10);
  FUN_148432db2(lVar1,param_1);
  *(longlong *)(lVar1 + 0x2f8) = param_1 + 0x640;
  *(longlong *)(lVar1 + 0x300) = param_1 + 0x641;
  *(longlong *)(lVar1 + 0x308) = param_1 + 0x650;
  return lVar1;
}



// FUNCTION 148432db2 FUN_148432db2 body=251 status=ok
// SIG undefined FUN_148432db2(void)

undefined8 * FUN_148432db2(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1406ff4f8(param_1,param_2,0);
  *param_1 = &PTR_FUN_14aed9530;
  uVar1 = *(undefined8 *)(param_2 + 0x630);
  param_1[0x53] = *(undefined8 *)(param_2 + 0x628);
  param_1[0x54] = uVar1;
  param_1[0x57] = *(undefined8 *)(param_2 + 0x668);
  uVar1 = *(undefined8 *)(param_2 + 0x660);
  param_1[0x55] = *(undefined8 *)(param_2 + 0x658);
  param_1[0x56] = uVar1;
  param_1[0x5a] = *(undefined8 *)(param_2 + 0x680);
  uVar1 = *(undefined8 *)(param_2 + 0x678);
  param_1[0x58] = *(undefined8 *)(param_2 + 0x670);
  param_1[0x59] = uVar1;
  *(undefined1 *)(param_1 + 0x5b) = *(undefined1 *)(param_2 + 0x688);
  *(undefined4 *)((longlong)param_1 + 0x2dc) = *(undefined4 *)(param_2 + 0x68c);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x690);
  *(undefined4 *)((longlong)param_1 + 0x2e4) = *(undefined4 *)(param_2 + 0x694);
  *(undefined4 *)(param_1 + 0x5d) = *(undefined4 *)(param_2 + 0x698);
  *(undefined4 *)((longlong)param_1 + 0x2ec) = *(undefined4 *)(param_2 + 0x69c);
  *(undefined4 *)(param_1 + 0x5e) = *(undefined4 *)(param_2 + 0x638);
  *(undefined1 *)((longlong)param_1 + 0x2f4) = *(undefined1 *)(param_2 + 0x6a0);
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  return param_1;
}



// FUNCTION 148432eae FUN_148432eae body=456 status=ok
// SIG undefined FUN_148432eae(void)

undefined1 (*) [16] FUN_148432eae(longlong param_1,undefined1 (*param_2) [16],double *param_3)

{
  float fVar1;
  double dVar2;
  undefined1 auVar3 [32];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  
  fVar12 = *(float *)(param_1 + 0x68c);
  if (*(float *)(param_1 + 0x68c) <= *(float *)(param_1 + 0x690)) {
    fVar12 = *(float *)(param_1 + 0x690);
  }
  fVar1 = *(float *)(param_1 + 0x694);
  if (*(float *)(param_1 + 0x694) <= *(float *)(param_1 + 0x698)) {
    fVar1 = *(float *)(param_1 + 0x698);
  }
  dVar9 = *param_3;
  dVar10 = param_3[1];
  dVar11 = param_3[2];
  dVar4 = DAT_14c8464e0 * param_3[8];
  dVar5 = DAT_14c8464e8 * param_3[9];
  dVar17 = DAT_14c8464f0 * param_3[10];
  dVar2 = param_3[3];
  dVar18 = dVar5 * dVar9 - dVar4 * dVar10;
  dVar6 = dVar17 * dVar10 - dVar5 * dVar11;
  dVar7 = dVar4 * dVar11 - dVar9 * dVar17;
  dVar6 = dVar6 + dVar6;
  dVar7 = dVar7 + dVar7;
  dVar18 = dVar18 + dVar18;
  dVar8 = (dVar11 * dVar6 - dVar9 * dVar18) + param_3[3] * dVar7 + dVar5 + param_3[5];
  dVar5 = param_3[6];
  auVar13._0_8_ = ABS(param_3[8]);
  auVar13._8_8_ = ABS(param_3[9]);
  dVar16 = ABS(param_3[10]);
  auVar3._24_8_ = ABS(param_3[0xb]);
  auVar3._16_8_ = dVar16;
  auVar3._0_16_ = auVar13;
  auVar14 = maxpd(auVar13,auVar3._8_16_);
  auVar15._8_8_ = auVar13._0_8_;
  auVar15._0_8_ = dVar16;
  auVar15 = maxpd(auVar14,auVar15);
  dVar16 = (double)(float)auVar15._0_8_ * (double)(fVar12 * 100.0 + fVar1);
  auVar14._8_4_ = SUB84(dVar8,0);
  auVar14._0_8_ = (dVar18 * dVar10 - dVar7 * dVar11) + dVar2 * dVar6 + dVar4 + param_3[4];
  auVar14._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  *param_2 = auVar14;
  *(double *)param_2[1] = dVar18 * dVar2 + dVar17 + (dVar7 * dVar9 - dVar6 * dVar10) + dVar5;
  *(double *)param_2[3] = dVar16;
  *(double *)(param_2[1] + 8) = dVar16;
  *(double *)param_2[2] = dVar16;
  *(double *)(param_2[2] + 8) = dVar16;
  return param_2;
}



// FUNCTION 148433076 FUN_148433076 body=1846 status=ok
// SIG undefined FUN_148433076(void)

ulonglong FUN_148433076(longlong param_1,longlong param_2,double *param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  double dVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  ulonglong uVar6;
  bool bVar7;
  longlong lVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_208 [32];
  double *local_1e8;
  double *local_1e0;
  undefined4 *local_1d8;
  undefined4 local_1d0;
  undefined4 local_1c8;
  undefined1 local_1c0;
  undefined1 local_1b8;
  code **local_1b0;
  double **local_1a8;
  float *local_1a0;
  longlong local_198;
  double *local_190;
  longlong local_188;
  ulonglong local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  double local_158;
  double dStack_150;
  double local_148;
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  double local_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  code *local_d0;
  double *local_c8;
  float local_bc;
  double *local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [16];
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_e8 = (double)(param_1 + 0x240);
  dVar12 = DAT_14c8464e0 * *(double *)(param_1 + 0x280);
  dVar13 = DAT_14c8464e8 * *(double *)(param_1 + 0x288);
  dVar10 = DAT_14c8464f0 * *(double *)(param_1 + 0x290);
  dVar15 = *(double *)(param_1 + 0x240);
  dVar18 = *(double *)(param_1 + 0x248);
  dVar2 = *(double *)(param_1 + 0x250);
  dVar11 = *(double *)(param_1 + 600);
  dVar14 = dVar13 * dVar15 - dVar12 * dVar18;
  dVar16 = dVar10 * dVar18 - dVar13 * dVar2;
  dVar17 = dVar12 * dVar2 - dVar15 * dVar10;
  dVar16 = dVar16 + dVar16;
  dVar17 = dVar17 + dVar17;
  dVar14 = dVar14 + dVar14;
  dVar13 = (dVar2 * dVar16 - dVar15 * dVar14) + *(double *)(param_1 + 600) * dVar17 + dVar13 +
           *(double *)(param_1 + 0x268);
  local_98 = dVar14 * dVar11 + dVar10 + (dVar17 * dVar15 - dVar16 * dVar18) +
             *(double *)(param_1 + 0x270);
  local_a8._8_4_ = SUB84(dVar13,0);
  local_a8._0_8_ =
       (dVar14 * dVar18 - dVar17 * dVar2) + dVar11 * dVar16 + dVar12 + *(double *)(param_1 + 0x260);
  local_a8._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  local_1a8 = &local_b8;
  local_b8 = (double *)0x0;
  uStack_b0 = 0;
  local_1a0 = &local_bc;
  local_bc = 1.0;
  local_c8 = &local_e8;
  local_1b0 = &local_d0;
  local_d0 = FUN_143b51d22;
  local_1b8 = *(undefined1 *)(param_1 + 0x688);
  local_1c0 = *(undefined1 *)(param_1 + 0x641);
  local_1c8 = *(undefined4 *)(param_1 + 0x698);
  local_1d0 = *(undefined4 *)(param_1 + 0x694);
  local_1e8 = (double *)(param_1 + 0x670);
  local_1d8 = (undefined4 *)CONCAT44(local_1d8._4_4_,*(undefined4 *)(param_1 + 0x690));
  local_1e0 = (double *)CONCAT44(local_1e0._4_4_,*(undefined4 *)(param_1 + 0x68c));
  cVar5 = FUN_1484337ad(CONCAT71(0x143b51d,*(undefined1 *)(param_1 + 0x650)),
                        *(undefined8 *)(param_1 + 0x648),local_a8,param_1 + 0x658);
  if (cVar5 == '\0') {
    uVar6 = 0;
  }
  else {
    local_198 = param_2 + 0xd8;
    local_190 = (double *)(param_2 + 0x28);
    lVar8 = 0;
    uVar6 = 0;
    dVar11 = (double)(*(float *)(param_1 + 0x63c) * local_bc);
    local_188 = param_2;
    do {
      lVar9 = lVar8 * 0x18;
      lVar8 = lVar8 + 1;
      local_180 = uVar6;
      while( true ) {
        local_108 = param_4[2];
        local_118 = *param_4;
        uStack_110 = param_4[1];
        local_128 = param_3[2];
        local_138 = *param_3;
        dStack_130 = param_3[1];
        uVar6 = (ulonglong)((uint)lVar8 & 3);
        local_158 = local_b8[uVar6 * 3];
        dStack_150 = (local_b8 + uVar6 * 3)[1];
        local_148 = local_b8[uVar6 * 3 + 2];
        local_168 = *(undefined8 *)((longlong)local_b8 + lVar9 + 0x10);
        puVar1 = (undefined4 *)((longlong)local_b8 + lVar9);
        local_178 = *puVar1;
        uStack_174 = puVar1[1];
        uStack_170 = puVar1[2];
        uStack_16c = puVar1[3];
        local_1e0 = (double *)&local_100;
        local_1e8 = &local_e8;
        FUN_144a0d30e(&local_178,&local_158,&local_138,&local_118);
        lVar4 = local_188;
        dVar10 = (double)CONCAT44(local_100._4_4_,(undefined4)local_100) - local_e8;
        dVar14 = (double)CONCAT44(uStack_f4,uStack_f8) - dStack_e0;
        dVar10 = SQRT((local_f0 - local_d8) * (local_f0 - local_d8) +
                      dVar14 * dVar14 + dVar10 * dVar10);
        if (dVar10 < dVar11) break;
        lVar9 = lVar9 + 0x18;
        lVar8 = lVar8 + 1;
        if (lVar8 == 5) {
          if ((local_180 & 1) != 0) goto LAB_14843351f;
          lVar8 = 0;
          uVar6 = 0;
          bVar7 = true;
          goto LAB_1484336a9;
        }
      }
      FUN_14485c47a(local_198,param_1);
      dVar11 = (double)CONCAT44(local_100._4_4_,(undefined4)local_100) - *param_3;
      dVar14 = (double)CONCAT44(uStack_f4,uStack_f8) - param_3[1];
      *(float *)(local_188 + 8) =
           (float)SQRT((local_f0 - param_3[2]) * (local_f0 - param_3[2]) +
                       dVar14 * dVar14 + dVar11 * dVar11);
      local_190[2] = local_f0;
      *local_190 = (double)CONCAT44(local_100._4_4_,(undefined4)local_100);
      local_190[1] = (double)CONCAT44(uStack_f4,uStack_f8);
      uVar6 = CONCAT71((int7)((ulonglong)local_f0 >> 8),1);
      dVar11 = dVar10;
    } while (lVar8 != 4);
LAB_14843351f:
    dVar10 = local_b8[5] - local_b8[2];
    dVar11 = local_b8[4] - local_b8[1];
    dVar14 = local_b8[3] - *local_b8;
    dVar17 = dVar10 * dVar10 + dVar14 * dVar14 + dVar11 * dVar11;
    if (9.99999993922529e-09 < dVar17) {
      dVar17 = 1.0 / SQRT(dVar17);
      dVar14 = dVar14 * dVar17;
      dVar11 = dVar11 * dVar17;
      dVar10 = dVar10 * dVar17;
    }
    dVar18 = local_b8[8] - local_b8[2];
    dVar15 = local_b8[7] - local_b8[1];
    dVar13 = local_b8[6] - *local_b8;
    dVar17 = dVar18 * dVar18 + dVar13 * dVar13 + dVar15 * dVar15;
    if (9.99999993922529e-09 < dVar17) {
      dVar17 = 1.0 / SQRT(dVar17);
      dVar13 = dVar13 * dVar17;
      dVar15 = dVar15 * dVar17;
      dVar18 = dVar18 * dVar17;
    }
    dVar17 = dVar13 * dVar11 - dVar14 * dVar15;
    dVar14 = dVar18 * dVar14 - dVar10 * dVar13;
    dVar10 = dVar15 * dVar10 - dVar11 * dVar18;
    *(double *)(local_188 + 0x58) = dVar10;
    *(double *)(local_188 + 0x60) = dVar14;
    *(double *)(local_188 + 0x68) = dVar17;
    dVar11 = dVar17 * dVar17 + dVar10 * dVar10 + dVar14 * dVar14;
    uVar6 = CONCAT71((int7)((ulonglong)&local_138 >> 8),1);
    if (9.99999993922529e-09 < dVar11) {
      dVar11 = 1.0 / SQRT(dVar11);
      *(double *)(local_188 + 0x58) = dVar10 * dVar11;
      *(double *)(local_188 + 0x60) = dVar14 * dVar11;
      *(double *)(local_188 + 0x68) = dVar17 * dVar11;
    }
  }
  goto LAB_1484334a5;
  while( true ) {
    lVar8 = 1;
    bVar3 = !bVar7;
    bVar7 = false;
    if (bVar3) break;
LAB_1484336a9:
    local_1e8 = local_b8 + (longlong)(int)(&DAT_14aec7f88)[lVar8 * 3] * 3;
    local_1d8 = (undefined4 *)&local_100;
    local_1e0 = &local_e8;
    cVar5 = FUN_1467f7db2(param_3,param_4,local_b8,
                          local_b8 + (longlong)(int)(&DAT_14aec7f84)[lVar8 * 3] * 3);
    if (cVar5 != '\0') {
      FUN_14485c47a(local_198,param_1);
      *(float *)(lVar4 + 8) =
           (float)SQRT((local_d8 - param_3[2]) * (local_d8 - param_3[2]) +
                       (dStack_e0 - param_3[1]) * (dStack_e0 - param_3[1]) +
                       (local_e8 - *param_3) * (local_e8 - *param_3));
      local_190[2] = local_d8;
      *local_190 = local_e8;
      local_190[1] = dStack_e0;
      *(double *)(lVar4 + 0x68) = local_f0;
      *(undefined4 *)(lVar4 + 0x58) = (undefined4)local_100;
      *(undefined4 *)(lVar4 + 0x5c) = local_100._4_4_;
      *(undefined4 *)(lVar4 + 0x60) = uStack_f8;
      *(undefined4 *)(lVar4 + 100) = uStack_f4;
      uVar6 = 1;
      break;
    }
  }
LAB_1484334a5:
  if (local_b8 != (double *)0x0) {
    FUN_1400020a8();
  }
  if ((local_90 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 1484337ad FUN_1484337ad body=1703 status=ok
// SIG undefined FUN_1484337ad(void)

ulonglong FUN_1484337ad(uint param_1,longlong param_2,double *param_3,double *param_4,
                       double *param_5,float param_6,float param_7,float param_8,float param_9,
                       char param_10,char param_11,undefined8 *param_12,longlong *param_13,
                       float *param_14)

{
  double dVar1;
  double *pdVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  longlong *plVar8;
  ulonglong uVar9;
  float fVar10;
  double dVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  double dVar16;
  undefined1 auStack_158 [32];
  double local_138;
  double dStack_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  ulonglong local_d0;
  
  plVar8 = (longlong *)(ulonglong)param_1;
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (param_10 == '\0') {
    (*(code *)*param_12)(&local_e8,param_12[1],param_4);
    (*(code *)*param_12)(&local_108,param_12[1],param_5);
  }
  else {
    local_d8 = param_4[2];
    local_e8 = *param_4;
    dStack_e0 = param_4[1];
    local_f8 = param_5[2];
    local_108 = *param_5;
    dStack_100 = param_5[1];
  }
  if ((char)param_1 == '\0') {
    fVar10 = 1.0;
  }
  else {
    plVar8 = (longlong *)(param_2 + 0x28);
    (**(code **)(*(longlong *)(param_2 + 0x28) + 0x38))(plVar8);
    cVar7 = (**(code **)(*(longlong *)(param_2 + 0x28) + 0x38))(plVar8);
    if (cVar7 == '\0') {
      (**(code **)(*plVar8 + 0x18))(plVar8,&local_120);
    }
    else {
      local_110 = param_3[2] - *(double *)(param_2 + 0x1d0);
      local_118 = param_3[1] - *(double *)(param_2 + 0x1c8);
      local_120 = *param_3 - *(double *)(param_2 + 0x1c0);
    }
    dVar11 = local_110 * local_110 + local_120 * local_120 + local_118 * local_118;
    if (9.99999993922529e-09 < dVar11) {
      dVar11 = 1.0 / SQRT(dVar11);
      local_120 = local_120 * dVar11;
      local_118 = local_118 * dVar11;
      local_110 = local_110 * dVar11;
    }
    dVar11 = local_110 * local_d8 + local_120 * local_e8 + local_118 * dStack_e0;
    uVar9 = -(ulonglong)(0.0 < dVar11);
    local_e8 = (double)(~uVar9 & (ulonglong)local_e8 | (ulonglong)-local_e8 & uVar9);
    if (0.0 < dVar11) {
      local_d8 = -local_d8;
      dStack_e0 = -dStack_e0;
    }
    if ((param_11 != '\0') &&
       (FUN_140ccff96(&local_108,&local_138,0x3ff921fb54442d18,&local_e8),
       ABS(local_128 * local_110 + local_138 * local_120 + dStack_130 * local_118) <
       ABS(local_f8 * local_110 + local_108 * local_120 + dStack_100 * local_118))) {
      local_f8 = local_128;
      local_108 = local_138;
      dStack_100 = dStack_130;
    }
    uVar12 = SUB84(dStack_100,0);
    uVar13 = (uint)((ulonglong)dStack_100 >> 0x20);
    uVar14 = SUB84(local_f8,0);
    uVar15 = (uint)((ulonglong)local_f8 >> 0x20);
    dVar11 = local_110 * local_f8 + local_120 * local_108 + local_118 * dStack_100;
    uVar9 = -(ulonglong)(0.0 < dVar11);
    local_108 = (double)(~uVar9 & (ulonglong)local_108 | (ulonglong)-local_108 & uVar9);
    if (0.0 < dVar11) {
      uVar15 = uVar15 ^ 0x80000000;
      uVar13 = uVar13 ^ 0x80000000;
    }
    dStack_100 = (double)CONCAT44(uVar13,uVar12);
    local_f8 = (double)CONCAT44(uVar15,uVar14);
    if (ABS((local_e8 * (double)CONCAT44(uVar13,uVar12) - local_108 * dStack_e0) * local_110 +
            (dStack_e0 * (double)CONCAT44(uVar15,uVar14) -
            (double)CONCAT44(uVar13,uVar12) * local_d8) * local_120 +
            local_118 * (local_d8 * local_108 - (double)CONCAT44(uVar15,uVar14) * local_e8)) <= 0.25
       ) {
      uVar9 = 0;
      goto LAB_148433b0a;
    }
    if (param_2 == 0) {
      plVar8 = (longlong *)0x0;
    }
    fVar10 = (float)FUN_14841f855(plVar8,param_3);
  }
  dVar4 = (double)(fVar10 * param_6);
  dVar5 = (double)((param_6 + param_8) * fVar10);
  dVar6 = (double)(fVar10 * param_7);
  dVar16 = (double)((param_7 + param_9) * fVar10);
  uVar9 = CONCAT71((int7)((ulonglong)plVar8 >> 8),1);
  FUN_14051b394(param_13,4,1);
  dVar11 = param_3[2];
  dVar1 = param_3[1];
  pdVar2 = (double *)*param_13;
  *pdVar2 = local_108 * dVar6 + local_e8 * dVar4 + *param_3;
  pdVar2[1] = dStack_100 * dVar6 + dStack_e0 * dVar4 + dVar1;
  pdVar2[2] = local_f8 * dVar6 + local_d8 * dVar4 + dVar11;
  dVar11 = param_3[2];
  dVar1 = param_3[1];
  lVar3 = *param_13;
  *(double *)(lVar3 + 0x18) = dVar6 * local_108 + *param_3 + dVar5 * local_e8;
  *(double *)(lVar3 + 0x20) = dStack_100 * dVar6 + dVar1 + dStack_e0 * dVar5;
  *(double *)(lVar3 + 0x28) = local_f8 * dVar6 + dVar11 + local_d8 * dVar5;
  dVar11 = param_3[2];
  dVar1 = param_3[1];
  lVar3 = *param_13;
  *(double *)(lVar3 + 0x30) = dVar5 * local_e8 + *param_3 + local_108 * dVar16;
  *(double *)(lVar3 + 0x38) = dStack_e0 * dVar5 + dVar1 + dStack_100 * dVar16;
  *(double *)(lVar3 + 0x40) = local_d8 * dVar5 + dVar11 + local_f8 * dVar16;
  dVar11 = param_3[2];
  dVar1 = param_3[1];
  lVar3 = *param_13;
  *(double *)(lVar3 + 0x48) = local_e8 * dVar4 + *param_3 + local_108 * dVar16;
  *(double *)(lVar3 + 0x50) = dStack_e0 * dVar4 + dVar1 + dStack_100 * dVar16;
  *(double *)(lVar3 + 0x58) = local_d8 * dVar4 + dVar11 + local_f8 * dVar16;
  *param_14 = fVar10;
LAB_148433b0a:
  if ((local_d0 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 148433e57 FUN_148433e57 body=494 status=ok
// SIG undefined FUN_148433e57(void)

undefined8 FUN_148433e57(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined ***pppuVar5;
  undefined1 auStack_e8 [32];
  longlong local_c8 [2];
  longlong local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined ***local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined **local_98;
  longlong *plStack_90;
  longlong local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined8 uStack_70;
  undefined ***local_68;
  undefined8 uStack_60;
  undefined **local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_1 == (longlong *)0x0) {
    uVar4 = 0;
  }
  else {
    FUN_140056680(local_c8,L"__CreateGizmoViaSimpleBuilder_TemporaryBuilder");
    lVar3 = FUN_148434046(DAT_14c951640);
    local_88 = *param_2;
    if ((local_88 != 0 & DAT_14c950c29) == 1) {
      FUN_14689c22e(local_88);
    }
    local_a8 = (undefined ***)0x0;
    local_98 = &PTR_LAB_14aedb0d0;
    plStack_90 = param_1;
    if ((local_88 != 0 & DAT_14c950c29) == 1) {
      FUN_14689c22e(local_88);
    }
    local_b8 = *(longlong *)(lVar3 + 0x30);
    uStack_70 = *(undefined8 *)(lVar3 + 0x38);
    local_68 = *(undefined ****)(lVar3 + 0x40);
    uStack_60 = *(undefined8 *)(lVar3 + 0x48);
    local_58 = *(undefined ***)(lVar3 + 0x50);
    uStack_50 = *(undefined8 *)(lVar3 + 0x58);
    local_48 = *(undefined8 *)(lVar3 + 0x60);
    uStack_40 = *(undefined8 *)(lVar3 + 0x68);
    uVar2 = uStack_40;
    uVar1 = uStack_60;
    local_78 = local_b8;
    uVar4 = uStack_70;
    *(longlong *)(lVar3 + 0x60) = local_88;
    *(ulonglong *)(lVar3 + 0x68) = CONCAT44(uStack_7c,uStack_80);
    *(undefined ***)(lVar3 + 0x50) = local_98;
    *(longlong **)(lVar3 + 0x58) = plStack_90;
    *(undefined ****)(lVar3 + 0x40) = local_a8;
    *(ulonglong *)(lVar3 + 0x48) = CONCAT44(uStack_9c,uStack_a0);
    *(code **)(lVar3 + 0x30) = FUN_143b51e2a;
    *(ulonglong *)(lVar3 + 0x38) = CONCAT44(uStack_ac,uStack_b0);
    uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
    local_88 = local_48;
    uStack_80 = (undefined4)uStack_40;
    uStack_7c = uStack_40._4_4_;
    local_98 = local_58;
    plStack_90 = (longlong *)uStack_50;
    uStack_a0 = (undefined4)uStack_60;
    uStack_9c = uStack_60._4_4_;
    uStack_b0 = (undefined4)uStack_70;
    uStack_ac = uStack_70._4_4_;
    local_a8 = local_68;
    uStack_70 = uVar4;
    uStack_60 = uVar1;
    uStack_40 = uVar2;
    if (local_b8 != 0) {
      pppuVar5 = local_68;
      if (local_68 == (undefined ***)0x0) {
        pppuVar5 = &local_98;
      }
      (*(code *)(*pppuVar5)[2])();
    }
    (**(code **)(*param_1 + 0x2b0))(param_1,local_c8,lVar3);
    uVar4 = (**(code **)(*param_1 + 0x2c0))(param_1,local_c8,param_3,param_4);
    (**(code **)(*param_1 + 0x2b8))(param_1,local_c8);
    if (local_c8[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148434046 FUN_148434046 body=175 status=ok
// SIG undefined FUN_148434046(void)

undefined8 FUN_148434046(undefined8 param_1)

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
  local_b8 = FUN_145b7109a();
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



// FUNCTION 148434102 FUN_148434102 body=120 status=ok
// SIG undefined FUN_148434102(void)

undefined1 * FUN_148434102(longlong param_1,undefined1 *param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  pcVar1 = *(code **)(param_1 + 8);
  if (pcVar1 == (code *)0x0) {
    *param_2 = 0;
    *(undefined8 *)(param_2 + 8) = 0x47efffffe0000000;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0x3ff0000000000000;
    param_2[0x28] = 0;
    *(undefined8 *)(param_2 + 0x2c) = 0;
    *(undefined8 *)(param_2 + 0x34) = 0;
    *(undefined4 *)(param_2 + 0x3c) = 0;
  }
  else {
    plVar3 = (longlong *)(param_1 + 0x28);
    if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0x18);
    }
    uVar2 = (**(code **)(*plVar3 + 8))();
    (*pcVar1)(param_2,uVar2,param_3);
  }
  return param_2;
}



// FUNCTION 14843417a FUN_14843417a body=95 status=ok
// SIG undefined FUN_14843417a(void)

void FUN_14843417a(longlong param_1,undefined1 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar1 = *(code **)(param_1 + 0x48);
  if (pcVar1 != (code *)0x0) {
    plVar3 = (longlong *)(param_1 + 0x68);
    if (*(longlong **)(param_1 + 0x58) != (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0x58);
    }
    local_19 = param_2;
    uVar2 = (**(code **)(*plVar3 + 8))();
    (*pcVar1)(uVar2,&local_19);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484341da FUN_1484341da body=104 status=ok
// SIG undefined FUN_1484341da(void)

void FUN_1484341da(longlong param_1,undefined1 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar1 = *(code **)(param_1 + 0x88);
  if (pcVar1 != (code *)0x0) {
    plVar3 = (longlong *)(param_1 + 0xa8);
    if (*(longlong **)(param_1 + 0x98) != (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0x98);
    }
    local_19 = param_2;
    uVar2 = (**(code **)(*plVar3 + 8))();
    (*pcVar1)(uVar2,&local_19);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148434244 FUN_148434244 body=95 status=ok
// SIG undefined FUN_148434244(void)

void FUN_148434244(longlong param_1,undefined1 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar1 = *(code **)(param_1 + 0x58);
  if (pcVar1 != (code *)0x0) {
    plVar3 = (longlong *)(param_1 + 0x78);
    if (*(longlong **)(param_1 + 0x68) != (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0x68);
    }
    local_19 = param_2;
    uVar2 = (**(code **)(*plVar3 + 8))();
    (*pcVar1)(uVar2,&local_19);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484342a4 FUN_1484342a4 body=104 status=ok
// SIG undefined FUN_1484342a4(void)

void FUN_1484342a4(longlong param_1,undefined1 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar1 = *(code **)(param_1 + 0x98);
  if (pcVar1 != (code *)0x0) {
    plVar3 = (longlong *)(param_1 + 0xb8);
    if (*(longlong **)(param_1 + 0xa8) != (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0xa8);
    }
    local_19 = param_2;
    uVar2 = (**(code **)(*plVar3 + 8))();
    (*pcVar1)(uVar2,&local_19);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14843431e FUN_14843431e body=418 status=ok
// SIG undefined FUN_14843431e(void)

longlong FUN_14843431e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined1 local_c8 [64];
  longlong local_88;
  longlong *local_78;
  longlong local_68 [5];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_1411371f6(local_c8);
  uVar1 = FUN_145b739bc();
  local_108 = local_c8;
  lVar2 = FUN_141137228(param_1,uVar1,&DAT_14c8464e0,&DAT_14c8464f8);
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0x3ff0000000000000;
  local_100 = 0;
  local_f8 = 0x3ff0000000000000;
  uStack_f0 = 0;
  lVar3 = FUN_14841d8ba(lVar2,param_2);
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar3);
  }
  *(longlong *)(lVar2 + 0x398) = lVar3;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0x3ff0000000000000;
  local_100 = 0;
  local_f8 = 0x3ff0000000000000;
  uStack_f0 = 0;
  lVar3 = FUN_14841d8ba(lVar2,param_2);
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar3);
  }
  *(longlong *)(lVar2 + 0x3a0) = lVar3;
  local_e8 = 0;
  uStack_e0 = 0x3ff0000000000000;
  local_d8 = 0;
  local_100 = 0x3ff0000000000000;
  local_f8 = 0;
  uStack_f0 = 0;
  lVar3 = FUN_14841d8ba(lVar2,param_2);
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar3);
  }
  *(longlong *)(lVar2 + 0x3a8) = lVar3;
  if (local_88 != 0) {
    if (local_78 == (longlong *)0x0) {
      local_78 = local_68;
    }
    (**(code **)(*local_78 + 0x10))();
  }
  if ((local_40 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484344c2 FUN_1484344c2 body=476 status=ok
// SIG undefined FUN_1484344c2(void)

longlong * FUN_1484344c2(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  longlong *local_c0;
  longlong local_b8 [2];
  undefined8 local_a8;
  longlong local_78 [2];
  undefined8 local_68;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar3 = (longlong *)FUN_14843469f(param_2[3]);
  (**(code **)(*plVar3 + 0x2d8))(plVar3,*param_2);
  uVar4 = FUN_148451390(param_2[1]);
  lVar5 = FUN_148413bcc(uVar4);
  plVar2 = *(longlong **)(param_1 + 0x28);
  if (plVar2 == (longlong *)0x0) {
    local_c0 = (longlong *)FUN_14001cc68(0x20,0x10);
    local_c0[1] = (longlong)&DAT_100000001;
    *local_c0 = (longlong)&PTR_LAB_14aedb0f0;
    local_c0[2] = (longlong)&PTR_LAB_14aedb108;
    local_c0[3] = lVar5;
    param_2 = local_c0;
    local_c8 = local_c0 + 2;
    if (local_c0 == (longlong *)0x0) {
      param_2 = (longlong *)0x0;
      goto LAB_148434540;
    }
  }
  else {
    local_c0 = *(longlong **)(param_1 + 0x30);
    local_c8 = plVar2;
    if (local_c0 == (longlong *)0x0) goto LAB_148434540;
  }
  LOCK();
  *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
  UNLOCK();
LAB_148434540:
  (**(code **)(*plVar3 + 0x2e0))(plVar3,&local_c8);
  if (param_2 != (longlong *)0x0 && plVar2 == (longlong *)0x0) {
    LOCK();
    plVar2 = param_2 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*param_2)(param_2);
      LOCK();
      piVar1 = (int *)((longlong)param_2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*param_2 + 0x10))(param_2);
      }
    }
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    local_68 = 0;
    puVar6 = (undefined8 *)(param_1 + 0x60);
    if (*(undefined8 **)(param_1 + 0x50) != (undefined8 *)0x0) {
      puVar6 = *(undefined8 **)(param_1 + 0x50);
    }
    local_78[0] = *(longlong *)(param_1 + 0x40);
    (**(code **)*puVar6)();
    (**(code **)(*plVar3 + 0x2e8))(plVar3,local_78);
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    local_a8 = 0;
    puVar6 = (undefined8 *)(param_1 + 0xa0);
    if (*(undefined8 **)(param_1 + 0x90) != (undefined8 *)0x0) {
      puVar6 = *(undefined8 **)(param_1 + 0x90);
    }
    local_b8[0] = *(longlong *)(param_1 + 0x80);
    (**(code **)*puVar6)(puVar6);
    (**(code **)(*plVar3 + 0x2f0))(plVar3,local_b8);
  }
  if ((local_38 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar3;
}



// FUNCTION 14843469f FUN_14843469f body=175 status=ok
// SIG undefined FUN_14843469f(void)

undefined8 FUN_14843469f(undefined8 param_1)

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
  local_b8 = FUN_1459ee290();
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



// FUNCTION 148434758 FUN_148434758 body=133 status=ok
// SIG undefined FUN_148434758(void)

void FUN_148434758(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0xe8) = uVar3;
  *(longlong *)(param_1 + 0xf0) = lVar4;
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
  plVar5 = (longlong *)param_2[1];
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
                    /* WARNING: Could not recover jumptable at 0x0001484347d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1484347de FUN_1484347de body=63 status=ok
// SIG undefined FUN_1484347de(void)

void FUN_1484347de(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  FUN_148413dd2(param_1 + 0x100);
  if (*param_2 != 0) {
    plVar1 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_2[2];
    }
                    /* WARNING: Could not recover jumptable at 0x000148434812. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    return;
  }
  return;
}



// FUNCTION 14843481e FUN_14843481e body=63 status=ok
// SIG undefined FUN_14843481e(void)

void FUN_14843481e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  FUN_148413f36(param_1 + 0x140);
  if (*param_2 != 0) {
    plVar1 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_2[2];
    }
                    /* WARNING: Could not recover jumptable at 0x000148434852. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    return;
  }
  return;
}



// FUNCTION 14843485e FUN_14843485e body=956 status=ok
// SIG undefined FUN_14843485e(void)

void FUN_14843485e(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
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
  longlong lVar19;
  longlong *plVar20;
  longlong lVar21;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong *local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar4 = *(undefined8 *)(param_1 + 0x180);
  uVar5 = *(undefined8 *)(param_1 + 0x188);
  uVar6 = *(undefined8 *)(param_1 + 400);
  uVar7 = *(undefined8 *)(param_1 + 0x198);
  uVar8 = *(undefined8 *)(param_1 + 0x1a0);
  uVar9 = *(undefined8 *)(param_1 + 0x1a8);
  uVar10 = *(undefined8 *)(param_1 + 0x1b0);
  uVar11 = *(undefined8 *)(param_1 + 0x1b8);
  uVar12 = *param_2;
  uVar13 = param_2[1];
  uVar14 = param_2[2];
  uVar15 = param_2[3];
  uVar16 = param_2[4];
  uVar17 = param_2[5];
  uVar18 = param_2[7];
  *(undefined8 *)(param_1 + 0x1b0) = param_2[6];
  *(undefined8 *)(param_1 + 0x1b8) = uVar18;
  *(undefined8 *)(param_1 + 0x1a0) = uVar16;
  *(undefined8 *)(param_1 + 0x1a8) = uVar17;
  *(undefined8 *)(param_1 + 400) = uVar14;
  *(undefined8 *)(param_1 + 0x198) = uVar15;
  *(undefined8 *)(param_1 + 0x180) = uVar12;
  *(undefined8 *)(param_1 + 0x188) = uVar13;
  param_2[6] = uVar10;
  param_2[7] = uVar11;
  param_2[4] = uVar8;
  param_2[5] = uVar9;
  param_2[2] = uVar6;
  param_2[3] = uVar7;
  *param_2 = uVar4;
  param_2[1] = uVar5;
  lVar2 = *(longlong *)(param_1 + 0x1c0);
  uVar4 = *(undefined8 *)(param_1 + 0x1c8);
  local_78 = *(longlong **)(param_1 + 0x1d0);
  uStack_70 = *(undefined8 *)(param_1 + 0x1d8);
  local_68 = *(longlong *)(param_1 + 0x1e0);
  uStack_60 = *(undefined8 *)(param_1 + 0x1e8);
  local_58 = *(undefined8 *)(param_1 + 0x1f0);
  uStack_50 = *(undefined8 *)(param_1 + 0x1f8);
  uVar5 = *param_3;
  uVar6 = param_3[1];
  uVar7 = param_3[2];
  uVar8 = param_3[3];
  uVar9 = param_3[4];
  uVar10 = param_3[5];
  uVar11 = param_3[7];
  *(undefined8 *)(param_1 + 0x1f0) = param_3[6];
  *(undefined8 *)(param_1 + 0x1f8) = uVar11;
  *(undefined8 *)(param_1 + 0x1e0) = uVar9;
  *(undefined8 *)(param_1 + 0x1e8) = uVar10;
  *(undefined8 *)(param_1 + 0x1d0) = uVar7;
  *(undefined8 *)(param_1 + 0x1d8) = uVar8;
  *(undefined8 *)(param_1 + 0x1c0) = uVar5;
  *(undefined8 *)(param_1 + 0x1c8) = uVar6;
  local_88._0_4_ = (undefined4)lVar2;
  local_88._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
  uStack_80._0_4_ = (undefined4)uVar4;
  uStack_80._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
  param_3[6] = local_58;
  param_3[7] = uStack_50;
  param_3[4] = local_68;
  param_3[5] = uStack_60;
  param_3[2] = local_78;
  param_3[3] = uStack_70;
  *(undefined4 *)param_3 = (undefined4)local_88;
  *(undefined4 *)((longlong)param_3 + 4) = local_88._4_4_;
  *(undefined4 *)(param_3 + 1) = (undefined4)uStack_80;
  *(undefined4 *)((longlong)param_3 + 0xc) = uStack_80._4_4_;
  iVar1 = *(int *)(param_1 + 0xb8);
  local_88 = lVar2;
  uStack_80 = uVar4;
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xb0);
    lVar21 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar21);
      if (lVar3 != 0) {
        lVar19 = FUN_145b72a32();
        if ((*(int *)(lVar19 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar19 + 0x38) * 8) == lVar19 + 0x30)) {
          local_c8 = *(longlong *)(lVar3 + 0xa0);
          uStack_80 = *(undefined8 *)(lVar3 + 0xa8);
          local_b8 = *(longlong **)(lVar3 + 0xb0);
          uStack_70 = *(undefined8 *)(lVar3 + 0xb8);
          local_68 = *(longlong *)(lVar3 + 0xc0);
          uStack_60 = *(undefined8 *)(lVar3 + 200);
          local_58 = *(undefined8 *)(lVar3 + 0xd0);
          uStack_50 = *(undefined8 *)(lVar3 + 0xd8);
          uVar6 = local_58;
          uVar7 = uStack_50;
          local_78 = local_b8;
          uVar5 = uStack_70;
          local_88 = local_c8;
          uVar4 = uStack_80;
          *(ulonglong *)(lVar3 + 0xd0) = CONCAT44(uStack_94,local_98);
          *(ulonglong *)(lVar3 + 0xd8) = CONCAT44(uStack_8c,uStack_90);
          *(undefined ***)(lVar3 + 0xc0) = &PTR_LAB_14aedb110;
          *(longlong *)(lVar3 + 200) = param_1;
          *(undefined8 *)(lVar3 + 0xb0) = 0;
          *(ulonglong *)(lVar3 + 0xb8) = CONCAT44(uStack_ac,uStack_b0);
          *(code **)(lVar3 + 0xa0) = FUN_143b51ea8;
          *(ulonglong *)(lVar3 + 0xa8) = CONCAT44(uStack_bc,uStack_c0);
          uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
          uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
          local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
          uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
          local_98 = (undefined4)local_58;
          uStack_94 = local_58._4_4_;
          uStack_90 = (undefined4)uStack_50;
          uStack_8c = uStack_50._4_4_;
          local_a8 = local_68;
          uStack_a0 = uStack_60;
          uStack_b0 = (undefined4)uStack_70;
          uStack_ac = uStack_70._4_4_;
          uStack_c0 = (undefined4)uStack_80;
          uStack_bc = uStack_80._4_4_;
          if (local_c8 != 0) {
            plVar20 = local_b8;
            if (local_b8 == (longlong *)0x0) {
              plVar20 = &local_a8;
            }
            uStack_80 = uVar4;
            uStack_70 = uVar5;
            local_58 = uVar6;
            uStack_50 = uVar7;
            (**(code **)(*plVar20 + 0x10))();
          }
          local_c8 = *(longlong *)(lVar3 + 0xe0);
          uStack_80 = *(undefined8 *)(lVar3 + 0xe8);
          local_b8 = *(longlong **)(lVar3 + 0xf0);
          uStack_70 = *(undefined8 *)(lVar3 + 0xf8);
          local_68 = *(longlong *)(lVar3 + 0x100);
          uStack_60 = *(undefined8 *)(lVar3 + 0x108);
          local_58 = *(undefined8 *)(lVar3 + 0x110);
          uStack_50 = *(undefined8 *)(lVar3 + 0x118);
          uVar6 = local_58;
          uVar7 = uStack_50;
          local_78 = local_b8;
          uVar5 = uStack_70;
          local_88 = local_c8;
          uVar4 = uStack_80;
          *(ulonglong *)(lVar3 + 0x110) = CONCAT44(uStack_94,local_98);
          *(ulonglong *)(lVar3 + 0x118) = CONCAT44(uStack_8c,uStack_90);
          *(undefined ***)(lVar3 + 0x100) = &PTR_LAB_14aedb130;
          *(longlong *)(lVar3 + 0x108) = param_1;
          *(undefined8 *)(lVar3 + 0xf0) = 0;
          *(ulonglong *)(lVar3 + 0xf8) = CONCAT44(uStack_ac,uStack_b0);
          *(code **)(lVar3 + 0xe0) = FUN_143b51f14;
          *(ulonglong *)(lVar3 + 0xe8) = CONCAT44(uStack_bc,uStack_c0);
          uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
          uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
          local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
          uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
          local_98 = (undefined4)local_58;
          uStack_94 = local_58._4_4_;
          uStack_90 = (undefined4)uStack_50;
          uStack_8c = uStack_50._4_4_;
          local_a8 = local_68;
          uStack_a0 = uStack_60;
          uStack_b0 = (undefined4)uStack_70;
          uStack_ac = uStack_70._4_4_;
          uStack_c0 = (undefined4)uStack_80;
          uStack_bc = uStack_80._4_4_;
          uStack_80 = uVar4;
          uStack_70 = uVar5;
          local_58 = uVar6;
          uStack_50 = uVar7;
          if (local_c8 != 0) {
            plVar20 = local_b8;
            if (local_b8 == (longlong *)0x0) {
              plVar20 = &local_a8;
            }
            (**(code **)(*plVar20 + 0x10))();
          }
          *(undefined1 *)(lVar3 + 0x120) = 0;
        }
      }
      lVar21 = lVar21 + 8;
    } while ((longlong)iVar1 * 8 != lVar21);
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148434c1c FUN_148434c1c body=567 status=ok
// SIG undefined FUN_148434c1c(void)

void FUN_148434c1c(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = *(longlong *)(param_1 + 0x100);
  uStack_50 = *(undefined8 *)(param_1 + 0x108);
  local_88 = *(longlong **)(param_1 + 0x110);
  uStack_40 = *(undefined8 *)(param_1 + 0x118);
  local_38 = *(longlong *)(param_1 + 0x120);
  uStack_30 = *(undefined8 *)(param_1 + 0x128);
  local_28 = *(undefined8 *)(param_1 + 0x130);
  uStack_20 = *(undefined8 *)(param_1 + 0x138);
  uVar2 = local_28;
  uVar3 = uStack_20;
  local_48 = local_88;
  uVar1 = uStack_40;
  local_58 = local_98;
  uVar4 = uStack_50;
  *(ulonglong *)(param_1 + 0x130) = CONCAT44(uStack_64,local_68);
  *(ulonglong *)(param_1 + 0x138) = CONCAT44(uStack_5c,uStack_60);
  *(undefined ***)(param_1 + 0x120) = &PTR_LAB_14aeb6a70;
  *(code **)(param_1 + 0x128) = FUN_143b51f90;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(ulonglong *)(param_1 + 0x118) = CONCAT44(uStack_7c,uStack_80);
  *(undefined1 **)(param_1 + 0x100) = &LAB_14841c8b4;
  *(ulonglong *)(param_1 + 0x108) = CONCAT44(uStack_8c,uStack_90);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = local_38;
  uStack_70 = uStack_30;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  if (local_98 != 0) {
    plVar5 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar5 = &local_78;
    }
    uStack_50 = uVar4;
    uStack_40 = uVar1;
    local_28 = uVar2;
    uStack_20 = uVar3;
    (**(code **)(*plVar5 + 0x10))();
  }
  local_98 = *(longlong *)(param_1 + 0x140);
  uStack_50 = *(undefined8 *)(param_1 + 0x148);
  local_88 = *(longlong **)(param_1 + 0x150);
  uStack_40 = *(undefined8 *)(param_1 + 0x158);
  local_38 = *(longlong *)(param_1 + 0x160);
  uStack_30 = *(undefined8 *)(param_1 + 0x168);
  local_28 = *(undefined8 *)(param_1 + 0x170);
  uStack_20 = *(undefined8 *)(param_1 + 0x178);
  uVar2 = local_28;
  uVar3 = uStack_20;
  local_48 = local_88;
  uVar1 = uStack_40;
  local_58 = local_98;
  uVar4 = uStack_50;
  *(ulonglong *)(param_1 + 0x170) = CONCAT44(uStack_64,local_68);
  *(ulonglong *)(param_1 + 0x178) = CONCAT44(uStack_5c,uStack_60);
  *(undefined ***)(param_1 + 0x160) = &PTR_LAB_14aeb6a90;
  *(code **)(param_1 + 0x168) = FUN_143b5200a;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(ulonglong *)(param_1 + 0x158) = CONCAT44(uStack_7c,uStack_80);
  *(undefined1 **)(param_1 + 0x140) = &LAB_14841c90a;
  *(ulonglong *)(param_1 + 0x148) = CONCAT44(uStack_8c,uStack_90);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = local_38;
  uStack_70 = uStack_30;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  uStack_50 = uVar4;
  uStack_40 = uVar1;
  local_28 = uVar2;
  uStack_20 = uVar3;
  if (local_98 != 0) {
    plVar5 = &local_78;
    if (local_88 != (longlong *)0x0) {
      plVar5 = local_88;
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  uVar4 = (**(code **)**(undefined8 **)(param_1 + 0xe8))
                    (*(undefined8 **)(param_1 + 0xe8),*(undefined8 *)(param_1 + 0x88));
  *(undefined8 *)(param_1 + 0x90) = uVar4;
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148434e54 FUN_148434e54 body=1 status=ok
// SIG undefined FUN_148434e54(void)

void FUN_148434e54(void)

{
  return;
}



// FUNCTION 148434e56 FUN_148434e56 body=68 status=ok
// SIG undefined FUN_148434e56(void)

void FUN_148434e56(longlong *param_1)

{
  (**(code **)(*param_1 + 800))();
  if (param_1[0x12] != 0) {
    FUN_140aeefbc(param_1[0x12],0,1);
    param_1[0x12] = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000148434e93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x318))(param_1);
  return;
}



// FUNCTION 148434e9a FUN_148434e9a body=540 status=ok
// SIG undefined FUN_148434e9a(void)

void FUN_148434e9a(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined1 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined8 local_b8 [8];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar4 = (longlong *)(**(code **)(*param_1 + 0x2c8))();
  plVar4 = (longlong *)(**(code **)(*plVar4 + 0x318))(plVar4);
  uVar3 = (**(code **)(*plVar4 + 0x20))(plVar4);
  plVar4 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  plVar4 = (longlong *)(**(code **)(*plVar4 + 0x318))(plVar4);
  (**(code **)(*plVar4 + 0x20))(plVar4);
  uVar6 = *(undefined8 *)(param_1[0x12] + 0x1c8);
  (**(code **)(*(longlong *)param_1[0x13] + 0x2b0))((longlong *)param_1[0x13],local_b8);
  local_78 = 0x3ff0000000000000;
  uStack_70 = 0x3ff0000000000000;
  local_68 = 0x3ff0000000000000;
  uStack_60 = 0;
  local_c8 = 0;
  FUN_140613f88(uVar6,local_b8,0,0);
  lVar5 = param_1[0x12];
  if ((*(longlong *)(lVar5 + 0x398) != 0) && (lVar1 = param_1[0x18], lVar1 != 0)) {
    uVar8 = (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x10))(lVar1 + 0x28);
    *(undefined4 *)(*(longlong *)(param_1[0x12] + 0x398) + 0x690) = uVar8;
    lVar5 = param_1[0x12];
  }
  if ((*(longlong *)(lVar5 + 0x3a0) != 0) && (lVar1 = param_1[0x19], lVar1 != 0)) {
    uVar8 = (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x10))(lVar1 + 0x28);
    *(undefined4 *)(*(longlong *)(param_1[0x12] + 0x3a0) + 0x690) = uVar8;
    lVar5 = param_1[0x12];
  }
  if ((*(longlong *)(lVar5 + 0x3a8) != 0) && (lVar5 = param_1[0x1a], lVar5 != 0)) {
    uVar8 = (**(code **)(*(longlong *)(lVar5 + 0x28) + 0x10))(lVar5 + 0x28);
    *(undefined4 *)(*(longlong *)(param_1[0x12] + 0x3a8) + 0x690) = uVar8;
  }
  if ((param_1[0x28] != 0) && (lVar5 = param_1[0x15], (longlong)(int)lVar5 != 0)) {
    lVar1 = param_1[0x14];
    lVar7 = 0;
    do {
      local_b8[0] = *(undefined8 *)(lVar1 + lVar7);
      pcVar2 = (code *)param_1[0x28];
      plVar4 = (longlong *)param_1[0x2a];
      if ((longlong *)param_1[0x2a] == (longlong *)0x0) {
        plVar4 = param_1 + 0x2c;
      }
      local_49 = uVar3;
      uVar6 = (**(code **)(*plVar4 + 8))();
      (*pcVar2)(uVar6,local_b8,&local_49);
      lVar7 = lVar7 + 8;
    } while ((longlong)(int)lVar5 * 8 != lVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484350b8 FUN_1484350b8 body=2398 status=ok
// SIG undefined FUN_1484350b8(void)

void FUN_1484350b8(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6)

{
  int iVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined1 auStack_148 [32];
  ulonglong local_128;
  undefined4 local_120;
  undefined4 local_118;
  longlong local_110;
  longlong local_100;
  undefined1 local_f4 [4];
  undefined1 local_f0 [8];
  undefined8 *local_e8;
  undefined4 local_e0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  wchar_t *local_80;
  undefined4 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (param_1[0x13] != 0) {
    (**(code **)(*param_1 + 800))(param_1);
    (**(code **)(*param_1 + 0x318))(param_1);
  }
  if (param_6 == 0) {
    lVar6 = (**(code **)(*param_1 + 0x2c8))(param_1);
    param_6 = lVar6 + 0x28;
    if (lVar6 == 0) {
      param_6 = 0;
    }
  }
  local_100 = param_6;
  if ((param_2 != (longlong *)0x0) && (DAT_14c950c29 != 0)) {
    FUN_14689c22e(param_2);
  }
  param_1[0x13] = (longlong)param_2;
  param_1[0x18] = param_3;
  param_1[0x19] = param_4;
  param_1[0x1a] = param_5;
  local_e8 = (undefined8 *)0x0;
  local_e0 = 0;
  FUN_1446efa72(&local_e8,0,3,0x10);
  puVar10 = local_e8;
  local_e0 = 3;
  *local_e8 = &PTR_LAB_14aedb1c0;
  uVar7 = FUN_144a3f946();
  puVar10[2] = uVar7;
  *puVar10 = &PTR_FUN_14aedb150;
  puVar10[3] = 0;
  FUN_14485c47a(puVar10 + 3,param_1);
  puVar10[4] = param_1;
  FUN_14844dce0(param_3 + 0x30,&local_80,&local_e8);
  FUN_1449db362(&local_e8);
  lVar6 = param_1[0x19];
  local_e8 = (undefined8 *)0x0;
  local_e0 = 0;
  FUN_1446efa72(&local_e8,0,3,0x10);
  puVar10 = local_e8;
  local_e0 = 3;
  *local_e8 = &PTR_LAB_14aedb1c0;
  uVar7 = FUN_144a3f946();
  puVar10[2] = uVar7;
  *puVar10 = &PTR_FUN_14aedb230;
  puVar10[3] = 0;
  FUN_14485c47a(puVar10 + 3,param_1);
  puVar10[4] = param_1;
  FUN_14844dce0(lVar6 + 0x30,&local_80,&local_e8);
  FUN_1449db362(&local_e8);
  lVar6 = param_1[0x1a];
  local_e8 = (undefined8 *)0x0;
  local_e0 = 0;
  FUN_1446efa72(&local_e8,0,3,0x10);
  puVar10 = local_e8;
  local_e0 = 3;
  *local_e8 = &PTR_LAB_14aedb1c0;
  uVar7 = FUN_144a3f946();
  puVar10[2] = uVar7;
  *puVar10 = &PTR_FUN_14aedb2a0;
  puVar10[3] = 0;
  FUN_14485c47a(puVar10 + 3,param_1);
  puVar10[4] = param_1;
  FUN_14844dce0(lVar6 + 0x30,&local_80,&local_e8);
  FUN_1449db362(&local_e8);
  lVar6 = *(longlong *)(param_1[0x12] + 0x1c8);
  (**(code **)(*param_2 + 0x2b0))(param_2,&local_e8);
  uVar4 = local_98;
  uVar3 = uStack_a0;
  uVar7 = local_a8;
  local_a8 = 0x3ff0000000000000;
  uStack_a0 = 0x3ff0000000000000;
  local_98 = 0x3ff0000000000000;
  uStack_90 = 0;
  local_128 = local_128 & 0xffffffffffffff00;
  FUN_140613f88(lVar6,&local_e8,0,0);
  local_80 = (wchar_t *)0x0;
  local_78 = 0;
  FUN_1446efa72(&local_80,0,4,0x10);
  pwVar5 = local_80;
  local_78 = 4;
  *(undefined ***)local_80 = &PTR_LAB_14a7feda0;
  uVar8 = FUN_144a3f946();
  *(undefined8 *)(pwVar5 + 8) = uVar8;
  *(undefined ***)pwVar5 = &PTR_FUN_14aedb310;
  *(longlong **)(pwVar5 + 0xc) = param_1;
  *(undefined8 *)(pwVar5 + 0x10) = uVar7;
  *(undefined8 *)(pwVar5 + 0x14) = uVar3;
  *(undefined8 *)(pwVar5 + 0x18) = uVar4;
  FUN_1408278de(lVar6 + 0x200,local_f0,&local_80);
  FUN_1449db362(&local_80);
  local_80 = L"UIntervalGizmoTransaction";
  local_78 = 0x19;
  FUN_1446e940c(local_f0,&local_80);
  local_80 = L"UIntervalGizmo";
  local_78 = 0xe;
  FUN_1446e940c(local_f4,&local_80);
  FUN_140208bae(&local_80,local_f4,local_f0,L"Interval");
  lVar9 = FUN_14843200a(lVar6,&local_80,local_100,param_1);
  if ((lVar9 != 0) && (DAT_14c950c29 != 0)) {
    FUN_14689c22e(lVar9);
  }
  param_1[7] = lVar9;
  if (local_80 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_80 + 0x10))();
    lVar9 = param_1[7];
  }
  puVar10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  lVar11 = param_1[0x13];
  *puVar10 = &PTR_FUN_14aedb020;
  puVar10[1] = 0;
  puVar10[2] = 0;
  *(undefined1 *)(puVar10 + 3) = 0;
  FUN_14485c47a(puVar10 + 1,lVar11);
  iVar1 = *(int *)(lVar9 + 0x128);
  *(uint *)(lVar9 + 0x128) = iVar1 + 1U;
  if (*(uint *)(lVar9 + 300) < iVar1 + 1U) {
    FUN_14844d8e0((longlong *)(lVar9 + 0x120),iVar1);
  }
  *(undefined8 **)(*(longlong *)(lVar9 + 0x120) + (longlong)iVar1 * 8) = puVar10;
  lVar9 = param_1[7];
  puVar10 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  lVar11 = param_1[0x18];
  *puVar10 = &PTR_FUN_14aedb380;
  puVar10[1] = 0;
  puVar10[2] = 0;
  FUN_14485c47a(puVar10 + 1,lVar11);
  iVar1 = *(int *)(lVar9 + 0x128);
  *(uint *)(lVar9 + 0x128) = iVar1 + 1U;
  if (*(uint *)(lVar9 + 300) < iVar1 + 1U) {
    FUN_14844d8e0((longlong *)(lVar9 + 0x120),iVar1);
  }
  *(undefined8 **)(*(longlong *)(lVar9 + 0x120) + (longlong)iVar1 * 8) = puVar10;
  lVar9 = param_1[7];
  puVar10 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  lVar11 = param_1[0x19];
  *puVar10 = &PTR_FUN_14aedb380;
  puVar10[1] = 0;
  puVar10[2] = 0;
  FUN_14485c47a(puVar10 + 1,lVar11);
  iVar1 = *(int *)(lVar9 + 0x128);
  *(uint *)(lVar9 + 0x128) = iVar1 + 1U;
  if (*(uint *)(lVar9 + 300) < iVar1 + 1U) {
    FUN_14844d8e0((longlong *)(lVar9 + 0x120),iVar1);
  }
  *(undefined8 **)(*(longlong *)(lVar9 + 0x120) + (longlong)iVar1 * 8) = puVar10;
  lVar9 = param_1[7];
  puVar10 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  lVar11 = param_1[0x1a];
  *puVar10 = &PTR_FUN_14aedb380;
  puVar10[1] = 0;
  puVar10[2] = 0;
  FUN_14485c47a(puVar10 + 1,lVar11);
  iVar1 = *(int *)(lVar9 + 0x128);
  *(uint *)(lVar9 + 0x128) = iVar1 + 1U;
  if (*(uint *)(lVar9 + 300) < iVar1 + 1U) {
    FUN_14844d8e0((longlong *)(lVar9 + 0x120),iVar1);
  }
  *(undefined8 **)(*(longlong *)(lVar9 + 0x120) + (longlong)iVar1 * 8) = puVar10;
  lVar9 = param_1[7];
  puVar10 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar10 = &PTR_FUN_14aedb480;
  puVar10[1] = 0;
  FUN_14485c47a(puVar10 + 1,param_1);
  iVar1 = *(int *)(lVar9 + 0x128);
  *(uint *)(lVar9 + 0x128) = iVar1 + 1U;
  if (*(uint *)(lVar9 + 300) < iVar1 + 1U) {
    FUN_14844d8e0((longlong *)(lVar9 + 0x120),iVar1);
  }
  *(undefined8 **)(*(longlong *)(lVar9 + 0x120) + (longlong)iVar1 * 8) = puVar10;
  lVar9 = FUN_14841ba1c(param_1);
  if (lVar6 != 0 && DAT_14c950c29 == 1) {
    FUN_14689c22e(lVar6);
  }
  bVar2 = DAT_14c950c29;
  *(longlong *)(lVar9 + 0x30) = lVar6;
  *(undefined4 *)(lVar9 + 0x38) = 1;
  *(undefined1 *)(lVar9 + 0x3c) = 1;
  if ((lVar9 != 0) && ((bVar2 & 1) != 0)) {
    FUN_14689c22e(lVar9);
  }
  param_1[0x1b] = lVar9;
  lVar9 = FUN_14841ba1c(param_1);
  if (DAT_14c950c29 == 1 && lVar6 != 0) {
    FUN_14689c22e(lVar6);
  }
  bVar2 = DAT_14c950c29;
  *(longlong *)(lVar9 + 0x30) = lVar6;
  *(undefined4 *)(lVar9 + 0x38) = 2;
  *(undefined1 *)(lVar9 + 0x3c) = 1;
  if ((lVar9 != 0) && ((bVar2 & 1) != 0)) {
    FUN_14689c22e(lVar9);
  }
  param_1[0x1c] = lVar9;
  if (*(longlong *)(param_1[0x12] + 0x398) != 0) {
    local_110 = param_1[7] + 0x28;
    if (param_1[7] == 0) {
      local_110 = 0;
    }
    local_128 = param_1[0x18] + 0x28;
    if (param_1[0x18] == 0) {
      local_128 = 0;
    }
    lVar11 = lVar9 + 0x28;
    if (lVar9 == 0) {
      lVar11 = 0;
    }
    local_118 = 0x7f7fffff;
    local_120 = 0;
    (**(code **)(*param_1 + 0x330))(param_1,lVar6,*(longlong *)(param_1[0x12] + 0x398),lVar11);
    lVar9 = *(longlong *)(param_1[0x12] + 0x398);
    if ((lVar9 != 0 & DAT_14c950c29) == 1) {
      FUN_14689c22e(lVar9);
    }
    iVar1 = (int)param_1[0x15];
    *(uint *)(param_1 + 0x15) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xac) < iVar1 + 1U) {
      FUN_140e402be(param_1 + 0x14,iVar1);
    }
    *(longlong *)(param_1[0x14] + (longlong)iVar1 * 8) = lVar9;
    if ((lVar9 != 0 & DAT_14c950c29) == 1) {
      FUN_14689c22e(lVar9);
    }
  }
  if (*(longlong *)(param_1[0x12] + 0x3a0) != 0) {
    local_110 = param_1[7] + 0x28;
    if (param_1[7] == 0) {
      local_110 = 0;
    }
    local_128 = param_1[0x19] + 0x28;
    if (param_1[0x19] == 0) {
      local_128 = 0;
    }
    lVar9 = param_1[0x1c] + 0x28;
    if (param_1[0x1c] == 0) {
      lVar9 = 0;
    }
    local_118 = 0;
    local_120 = 0xff7fffff;
    (**(code **)(*param_1 + 0x330))(param_1,lVar6,*(longlong *)(param_1[0x12] + 0x3a0),lVar9);
    lVar9 = *(longlong *)(param_1[0x12] + 0x3a0);
    if ((lVar9 != 0 & DAT_14c950c29) == 1) {
      FUN_14689c22e(lVar9);
    }
    iVar1 = (int)param_1[0x15];
    *(uint *)(param_1 + 0x15) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xac) < iVar1 + 1U) {
      FUN_140e402be(param_1 + 0x14,iVar1);
    }
    *(longlong *)(param_1[0x14] + (longlong)iVar1 * 8) = lVar9;
    if ((lVar9 != 0 & DAT_14c950c29) == 1) {
      FUN_14689c22e(lVar9);
    }
  }
  if (*(longlong *)(param_1[0x12] + 0x3a8) != 0) {
    local_110 = param_1[7] + 0x28;
    if (param_1[7] == 0) {
      local_110 = 0;
    }
    local_128 = param_1[0x1a] + 0x28;
    if (param_1[0x1a] == 0) {
      local_128 = 0;
    }
    lVar9 = param_1[0x1b] + 0x28;
    if (param_1[0x1b] == 0) {
      lVar9 = 0;
    }
    local_118 = 0x7f7fffff;
    local_120 = 0xff7fffff;
    (**(code **)(*param_1 + 0x330))(param_1,lVar6,*(longlong *)(param_1[0x12] + 0x3a8),lVar9);
    lVar6 = *(longlong *)(param_1[0x12] + 0x3a8);
    if ((lVar6 != 0 & DAT_14c950c29) == 1) {
      FUN_14689c22e(lVar6);
    }
    iVar1 = (int)param_1[0x15];
    *(uint *)(param_1 + 0x15) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xac) < iVar1 + 1U) {
      FUN_140e402be(param_1 + 0x14,iVar1);
    }
    *(longlong *)(param_1[0x14] + (longlong)iVar1 * 8) = lVar6;
    if ((lVar6 != 0 & DAT_14c950c29) == 1) {
      FUN_14689c22e(lVar6);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148435a2e FUN_148435a2e body=157 status=ok
// SIG undefined FUN_148435a2e(void)

void FUN_148435a2e(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar3 = param_1[0x17];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = param_1[0x16];
    lVar5 = 0;
    do {
      uVar2 = *(undefined8 *)(lVar1 + lVar5);
      plVar4 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
      (**(code **)(*plVar4 + 0x2c8))(plVar4,uVar2);
      lVar5 = lVar5 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar5);
  }
  FUN_148419cf8(param_1 + 0x16,0,1);
  FUN_148419d76(param_1 + 0x14,0,1);
  (**(code **)(*param_1 + 0x318))(param_1);
  param_1[0x13] = 0;
  return;
}



// FUNCTION 148435acc FUN_148435acc body=33 status=ok
// SIG undefined FUN_148435acc(void)

undefined8 FUN_148435acc(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x98) + 0x2b0))();
  return param_2;
}



// FUNCTION 148435aee FUN_148435aee body=1247 status=ok
// SIG undefined FUN_148435aee(void)

longlong FUN_148435aee(longlong *param_1,undefined8 param_2,longlong param_3,longlong *param_4,
                      undefined8 param_5,undefined4 param_6,undefined4 param_7,longlong *param_8)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_108 [40];
  longlong local_e0;
  longlong local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  undefined8 uStack_90;
  longlong *local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x2c8))();
  local_98 = 0;
  uStack_90 = 0;
  lVar6 = (**(code **)(*plVar5 + 0x2c0))(plVar5,&DAT_14cb4b168,&local_98,0);
  if (lVar6 == 0) {
LAB_148435b7b:
    lVar6 = 0;
  }
  else {
    lVar7 = FUN_145b72a32();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
        != lVar7 + 0x30)) goto LAB_148435b7b;
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (param_4 == (longlong *)0x0) {
LAB_148435bb9:
    local_98 = 0;
  }
  else {
    local_98 = (**(code **)(*param_4 + 8))(param_4);
    if (local_98 == 0) goto LAB_148435bb9;
  }
  FUN_148417e64(lVar6 + 0x48,&local_98);
  local_98 = FUN_148435fce(param_5,param_6,param_7,param_1);
  FUN_148436098(lVar6 + 0x58,&local_98);
  local_e0 = FUN_148410475(param_1);
  if ((param_3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_3);
  }
  *(longlong *)(local_e0 + 0x30) = param_3;
  if (param_1[0x20] != 0) {
    local_d8 = *(longlong *)(local_e0 + 0x80);
    uStack_90 = *(undefined8 *)(local_e0 + 0x88);
    local_c8 = *(longlong **)(local_e0 + 0x90);
    uStack_80 = *(undefined8 *)(local_e0 + 0x98);
    local_78 = *(longlong *)(local_e0 + 0xa0);
    uStack_70 = *(undefined8 *)(local_e0 + 0xa8);
    local_68 = *(undefined8 *)(local_e0 + 0xb0);
    uStack_60 = *(undefined8 *)(local_e0 + 0xb8);
    uVar4 = uStack_60;
    local_88 = local_c8;
    uVar3 = uStack_80;
    local_98 = local_d8;
    uVar2 = uStack_90;
    *(longlong **)(local_e0 + 0xb0) = param_1;
    *(ulonglong *)(local_e0 + 0xb8) = CONCAT44(uStack_9c,uStack_a0);
    *(undefined ***)(local_e0 + 0xa0) = &PTR_LAB_14aedb510;
    *(longlong *)(local_e0 + 0xa8) = param_3;
    *(undefined8 *)(local_e0 + 0x90) = 0;
    *(ulonglong *)(local_e0 + 0x98) = CONCAT44(uStack_bc,uStack_c0);
    *(code **)(local_e0 + 0x80) = FUN_143b52ff6;
    *(ulonglong *)(local_e0 + 0x88) = CONCAT44(uStack_cc,uStack_d0);
    uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
    uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    local_a8 = local_68;
    uStack_a0 = (undefined4)uStack_60;
    uStack_9c = uStack_60._4_4_;
    local_b8 = local_78;
    uStack_b0 = uStack_70;
    uStack_c0 = (undefined4)uStack_80;
    uStack_bc = uStack_80._4_4_;
    uStack_d0 = (undefined4)uStack_90;
    uStack_cc = uStack_90._4_4_;
    uStack_90 = uVar2;
    uStack_80 = uVar3;
    uStack_60 = uVar4;
    if (local_d8 != 0) {
      plVar5 = local_c8;
      if (local_c8 == (longlong *)0x0) {
        plVar5 = &local_b8;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  FUN_148417f38(lVar6 + 0x70,&local_e0);
  if (param_8 != (longlong *)0x0) {
    local_98 = (**(code **)(*param_8 + 8))(param_8);
    if (local_98 != 0) goto LAB_148435d55;
  }
  local_98 = 0;
LAB_148435d55:
  FUN_148417fa4(lVar6 + 0x80,&local_98);
  local_d8 = *(longlong *)(lVar6 + 0xa0);
  uStack_90 = *(undefined8 *)(lVar6 + 0xa8);
  local_c8 = *(longlong **)(lVar6 + 0xb0);
  uStack_80 = *(undefined8 *)(lVar6 + 0xb8);
  local_78 = *(longlong *)(lVar6 + 0xc0);
  uStack_70 = *(undefined8 *)(lVar6 + 200);
  local_68 = *(undefined8 *)(lVar6 + 0xd0);
  uStack_60 = *(undefined8 *)(lVar6 + 0xd8);
  uVar4 = uStack_60;
  local_88 = local_c8;
  uVar3 = uStack_80;
  local_98 = local_d8;
  uVar2 = uStack_90;
  *(undefined8 *)(lVar6 + 0xd0) = local_a8;
  *(ulonglong *)(lVar6 + 0xd8) = CONCAT44(uStack_9c,uStack_a0);
  *(undefined ***)(lVar6 + 0xc0) = &PTR_LAB_14aedb530;
  *(longlong **)(lVar6 + 200) = param_1;
  *(undefined8 *)(lVar6 + 0xb0) = 0;
  *(ulonglong *)(lVar6 + 0xb8) = CONCAT44(uStack_bc,uStack_c0);
  *(code **)(lVar6 + 0xa0) = FUN_143b530b8;
  *(ulonglong *)(lVar6 + 0xa8) = CONCAT44(uStack_cc,uStack_d0);
  uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  local_a8 = local_68;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  local_b8 = local_78;
  uStack_b0 = uStack_70;
  uStack_c0 = (undefined4)uStack_80;
  uStack_bc = uStack_80._4_4_;
  uStack_d0 = (undefined4)uStack_90;
  uStack_cc = uStack_90._4_4_;
  if (local_d8 != 0) {
    plVar5 = local_c8;
    if (local_c8 == (longlong *)0x0) {
      plVar5 = &local_b8;
    }
    uStack_90 = uVar2;
    uStack_80 = uVar3;
    uStack_60 = uVar4;
    (**(code **)(*plVar5 + 0x10))();
  }
  local_d8 = *(longlong *)(lVar6 + 0xe0);
  uStack_90 = *(undefined8 *)(lVar6 + 0xe8);
  local_c8 = *(longlong **)(lVar6 + 0xf0);
  uStack_80 = *(undefined8 *)(lVar6 + 0xf8);
  local_78 = *(longlong *)(lVar6 + 0x100);
  uStack_70 = *(undefined8 *)(lVar6 + 0x108);
  local_68 = *(undefined8 *)(lVar6 + 0x110);
  uStack_60 = *(undefined8 *)(lVar6 + 0x118);
  uVar4 = uStack_60;
  local_88 = local_c8;
  uVar3 = uStack_80;
  local_98 = local_d8;
  uVar2 = uStack_90;
  *(undefined8 *)(lVar6 + 0x110) = local_a8;
  *(ulonglong *)(lVar6 + 0x118) = CONCAT44(uStack_9c,uStack_a0);
  *(undefined ***)(lVar6 + 0x100) = &PTR_LAB_14aedb550;
  *(longlong **)(lVar6 + 0x108) = param_1;
  *(undefined8 *)(lVar6 + 0xf0) = 0;
  *(ulonglong *)(lVar6 + 0xf8) = CONCAT44(uStack_bc,uStack_c0);
  *(code **)(lVar6 + 0xe0) = FUN_143b53124;
  *(ulonglong *)(lVar6 + 0xe8) = CONCAT44(uStack_cc,uStack_d0);
  uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  local_a8 = local_68;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  local_b8 = local_78;
  uStack_b0 = uStack_70;
  uStack_c0 = (undefined4)uStack_80;
  uStack_bc = uStack_80._4_4_;
  uStack_d0 = (undefined4)uStack_90;
  uStack_cc = uStack_90._4_4_;
  uStack_90 = uVar2;
  uStack_80 = uVar3;
  uStack_60 = uVar4;
  if (local_d8 != 0) {
    plVar5 = &local_b8;
    if (local_c8 != (longlong *)0x0) {
      plVar5 = local_c8;
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar6);
  }
  iVar1 = (int)param_1[0x17];
  *(uint *)(param_1 + 0x17) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xbc) < iVar1 + 1U) {
    FUN_14841cbdc(param_1 + 0x16,iVar1);
  }
  *(longlong *)(param_1[0x16] + (longlong)iVar1 * 8) = lVar6;
  if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar6);
  }
  if ((local_50 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148435fce FUN_148435fce body=201 status=ok
// SIG undefined FUN_148435fce(void)

longlong FUN_148435fce(longlong *param_1,float param_2,float param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  float fVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = FUN_148436172(param_4);
  if (param_1 != (longlong *)0x0) {
    local_48 = (**(code **)(*param_1 + 8))(param_1);
    if (local_48 != 0) goto LAB_14843601a;
  }
  local_48 = 0;
LAB_14843601a:
  FUN_148436222();
  if (*(longlong *)(lVar1 + 0x48) == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = *(longlong **)(lVar1 + 0x50);
  }
  fVar3 = (float)(**(code **)(*plVar2 + 0x10))();
  if (*(longlong *)(lVar1 + 0x48) == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = *(longlong **)(lVar1 + 0x50);
  }
  if (param_3 <= fVar3) {
    fVar3 = param_3;
  }
  if (fVar3 <= param_2) {
    fVar3 = param_2;
  }
  (**(code **)(*plVar2 + 0x20))(plVar2,fVar3);
  *(float *)(lVar1 + 0x58) = param_2;
  *(float *)(lVar1 + 0x5c) = param_3;
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148436098 FUN_148436098 body=107 status=ok
// SIG undefined FUN_148436098(void)

longlong * FUN_148436098(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *param_2;
  lVar3 = lVar1;
  if (lVar1 != 0 && DAT_14c950c29 == 1) {
    FUN_14689c22e(lVar1);
    lVar3 = *param_2;
  }
  if ((lVar1 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_14689c22e(lVar1);
  }
  lVar2 = lVar3 + 0x28;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  *param_1 = lVar1;
  param_1[1] = lVar2;
  return param_1;
}



// FUNCTION 148436172 FUN_148436172 body=175 status=ok
// SIG undefined FUN_148436172(void)

undefined8 FUN_148436172(undefined8 param_1)

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
  local_b8 = FUN_145b73b90();
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



// FUNCTION 148436222 FUN_148436222 body=103 status=ok
// SIG undefined FUN_148436222(void)

longlong * FUN_148436222(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar1 = *param_2;
  if ((lVar1 == 0) || (DAT_14c950c29 == '\0')) {
    if (lVar1 == 0) {
      lVar3 = 0;
      goto LAB_148436244;
    }
  }
  else {
    FUN_14689c22e(lVar1);
  }
  uVar2 = FUN_145922298();
  lVar3 = FUN_144718840(lVar1,uVar2);
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar1);
  }
LAB_148436244:
  *param_1 = lVar1;
  param_1[1] = lVar3;
  return param_1;
}



// FUNCTION 148436292 FUN_148436292 body=551 status=ok
// SIG undefined FUN_148436292(void)

void FUN_148436292(longlong param_1,float param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  code *pcVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  double *pdVar9;
  double *pdVar10;
  double dVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [16];
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8 [4];
  undefined1 local_98 [16];
  double local_88;
  double dStack_80;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *(float *)(param_1 + 200) = param_2;
  *(float *)(param_1 + 0xd0) = param_2;
  dVar11 = (double)(param_2 - *(float *)(param_1 + 0xcc));
  local_58 = 0.0;
  pcVar4 = *(code **)(param_1 + 0x28);
  plVar8 = (longlong *)(param_1 + 0x48);
  if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
    plVar8 = *(longlong **)(param_1 + 0x38);
  }
  local_b8[0] = dVar11;
  uVar6 = (**(code **)(*plVar8 + 8))();
  cVar5 = (*pcVar4)(uVar6,local_b8,&local_58);
  if (cVar5 != '\0') {
    dVar11 = local_58;
  }
  dVar1 = *(double *)(param_1 + 0xe8);
  dVar2 = *(double *)(param_1 + 0xe0);
  dVar3 = *(double *)(param_1 + 0xd8);
  pdVar9 = (double *)(param_1 + 0x108);
  pdVar10 = local_b8;
  for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
    *pdVar10 = *pdVar9;
    pdVar9 = pdVar9 + 1;
    pdVar10 = pdVar10 + 1;
  }
  dVar3 = dVar11 * dVar3 + (double)local_98._0_8_;
  dVar2 = dVar2 * dVar11 + (double)local_98._8_8_;
  uVar12 = SUB84(dVar2,0);
  uVar13 = (undefined4)((ulonglong)dVar2 >> 0x20);
  local_d8 = dVar1 * dVar11 + local_88;
  dStack_80 = dStack_80 + 0.0;
  local_98._8_4_ = uVar12;
  local_98._0_8_ = dVar3;
  local_98._12_4_ = uVar13;
  local_e8._8_4_ = uVar12;
  local_e8._0_8_ = dVar3;
  local_e8._12_4_ = uVar13;
  pcVar4 = *(code **)(param_1 + 0x68);
  plVar8 = (longlong *)(param_1 + 0x88);
  if (*(longlong **)(param_1 + 0x78) != (longlong *)0x0) {
    plVar8 = *(longlong **)(param_1 + 0x78);
  }
  local_88 = local_d8;
  uVar6 = (**(code **)(*plVar8 + 8))();
  cVar5 = (*pcVar4)(uVar6,local_e8,&local_d0);
  if (cVar5 != '\0') {
    dVar11 = (local_c0 - *(double *)(param_1 + 0x100)) * *(double *)(param_1 + 0xe8) +
             (local_d0 - *(double *)(param_1 + 0xf0)) * *(double *)(param_1 + 0xd8) +
             (local_c8 - *(double *)(param_1 + 0xf8)) * *(double *)(param_1 + 0xe0);
    local_88 = *(double *)(param_1 + 0xe8) * dVar11 + *(double *)(param_1 + 0x100);
    local_98._8_8_ = *(double *)(param_1 + 0xe0) * dVar11 + *(double *)(param_1 + 0xf8);
    local_98._0_8_ = dVar11 * *(double *)(param_1 + 0xd8) + *(double *)(param_1 + 0xf0);
    dStack_80 = 0.0;
  }
  if (*(longlong *)(param_1 + 0xb8) == 0) {
    plVar8 = (longlong *)0x0;
  }
  else {
    plVar8 = *(longlong **)(param_1 + 0xc0);
  }
  (**(code **)(*plVar8 + 0x18))(plVar8,local_b8);
  FUN_14844d70c(param_1 + 8,param_1,*(undefined8 *)(param_1 + 0xcc));
  if ((local_50 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484364ba FUN_1484364ba body=261 status=ok
// SIG undefined FUN_1484364ba(void)

void FUN_1484364ba(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_1 + 200);
  if (*(longlong *)(param_1 + 0xb8) == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = *(longlong **)(param_1 + 0xc0);
  }
  (**(code **)(*plVar2 + 0x10))(plVar2,&local_88);
  puVar3 = &local_88;
  puVar4 = (undefined8 *)(param_1 + 0x108);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = *(longlong **)(param_1 + 0xb0);
  }
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_88);
  *(undefined8 *)(param_1 + 0xe8) = local_78;
  *(undefined4 *)(param_1 + 0xd8) = (undefined4)local_88;
  *(undefined4 *)(param_1 + 0xdc) = local_88._4_4_;
  *(undefined4 *)(param_1 + 0xe0) = uStack_80;
  *(undefined4 *)(param_1 + 0xe4) = uStack_7c;
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = *(longlong **)(param_1 + 0xb0);
  }
  (**(code **)(*plVar2 + 0x10))((undefined4)local_88,&local_88);
  *(undefined8 *)(param_1 + 0x100) = local_78;
  *(undefined4 *)(param_1 + 0xf0) = (undefined4)local_88;
  *(undefined4 *)(param_1 + 0xf4) = local_88._4_4_;
  *(undefined4 *)(param_1 + 0xf8) = uStack_80;
  *(undefined4 *)(param_1 + 0xfc) = uStack_7c;
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484365c2 FUN_1484365c2 body=717 status=ok
// SIG undefined FUN_1484365c2(void)

void FUN_1484365c2(longlong param_1,undefined8 *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  code *pcVar7;
  double dVar8;
  char cVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  double *pdVar13;
  double *pdVar14;
  double dVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auStack_128 [40];
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8 [4];
  undefined1 local_c8 [16];
  double local_b8;
  double dStack_b0;
  double local_88;
  double local_80;
  undefined1 local_78 [16];
  double local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar10 = param_2[1];
  *(undefined8 *)(param_1 + 0x108) = *param_2;
  *(undefined8 *)(param_1 + 0x110) = uVar10;
  uVar10 = param_2[1];
  *(undefined8 *)(param_1 + 0x128) = *param_2;
  *(undefined8 *)(param_1 + 0x130) = uVar10;
  dVar15 = *(double *)(param_1 + 0x130) - *(double *)(param_1 + 0x120);
  dVar8 = *(double *)(param_1 + 0x128) - *(double *)(param_1 + 0x118);
  local_80 = 0.0;
  local_88 = 0.0;
  pcVar7 = *(code **)(param_1 + 0x28);
  plVar12 = (longlong *)(param_1 + 0x48);
  if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
    plVar12 = *(longlong **)(param_1 + 0x38);
  }
  local_e8[0] = dVar8;
  uVar10 = (**(code **)(*plVar12 + 8))();
  cVar9 = (*pcVar7)(uVar10,local_e8,&local_80);
  if (cVar9 != '\0') {
    dVar8 = local_80;
  }
  pcVar7 = *(code **)(param_1 + 0x68);
  plVar12 = (longlong *)(param_1 + 0x88);
  if (*(longlong **)(param_1 + 0x78) != (longlong *)0x0) {
    plVar12 = *(longlong **)(param_1 + 0x78);
  }
  local_e8[0] = dVar15;
  uVar10 = (**(code **)(*plVar12 + 8))();
  cVar9 = (*pcVar7)(uVar10,local_e8,&local_88);
  if (cVar9 != '\0') {
    dVar15 = local_88;
  }
  dVar1 = *(double *)(param_1 + 0x178);
  dVar2 = *(double *)(param_1 + 0x170);
  dVar3 = *(double *)(param_1 + 0x168);
  dVar4 = *(double *)(param_1 + 400);
  dVar5 = *(double *)(param_1 + 0x188);
  dVar6 = *(double *)(param_1 + 0x180);
  pdVar13 = (double *)(param_1 + 0x198);
  pdVar14 = local_e8;
  for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
    *pdVar14 = *pdVar13;
    pdVar13 = pdVar13 + 1;
    pdVar14 = pdVar14 + 1;
  }
  dVar3 = dVar15 * dVar6 + dVar8 * dVar3 + (double)local_c8._0_8_;
  dVar2 = dVar5 * dVar15 + dVar2 * dVar8 + (double)local_c8._8_8_;
  uVar16 = SUB84(dVar2,0);
  uVar17 = (undefined4)((ulonglong)dVar2 >> 0x20);
  local_b8 = dVar4 * dVar15 + dVar1 * dVar8 + local_b8;
  dStack_b0 = dStack_b0 + 0.0;
  local_c8._8_4_ = uVar16;
  local_c8._0_8_ = dVar3;
  local_c8._12_4_ = uVar17;
  local_78._8_4_ = uVar16;
  local_78._0_8_ = dVar3;
  local_78._12_4_ = uVar17;
  pcVar7 = *(code **)(param_1 + 0xa8);
  plVar12 = (longlong *)(param_1 + 200);
  if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
    plVar12 = *(longlong **)(param_1 + 0xb8);
  }
  local_68 = local_b8;
  uVar10 = (**(code **)(*plVar12 + 8))();
  cVar9 = (*pcVar7)(uVar10,local_78,&local_100);
  if (cVar9 != '\0') {
    dVar15 = (local_f0 - *(double *)(param_1 + 0x148)) * *(double *)(param_1 + 0x160) +
             (local_100 - *(double *)(param_1 + 0x138)) * *(double *)(param_1 + 0x150) +
             (local_f8 - *(double *)(param_1 + 0x140)) * *(double *)(param_1 + 0x158);
    local_b8 = local_f0 - *(double *)(param_1 + 0x160) * dVar15;
    local_f8 = local_f8 - *(double *)(param_1 + 0x158) * dVar15;
    local_c8._8_4_ = SUB84(local_f8,0);
    local_c8._0_8_ = local_100 - dVar15 * *(double *)(param_1 + 0x150);
    local_c8._12_4_ = (int)((ulonglong)local_f8 >> 0x20);
    dStack_b0 = 0.0;
  }
  if (*(longlong *)(param_1 + 0xf8) == 0) {
    plVar12 = (longlong *)0x0;
  }
  else {
    plVar12 = *(longlong **)(param_1 + 0x100);
  }
  (**(code **)(*plVar12 + 0x18))(plVar12,local_e8);
  local_78 = *(undefined1 (*) [16])(param_1 + 0x118);
  local_68 = *(double *)(param_1 + 0x128);
  uStack_60 = *(undefined4 *)(param_1 + 0x130);
  uStack_5c = *(undefined4 *)(param_1 + 0x134);
  FUN_14841cdb4(param_1 + 8,param_1);
  if ((local_50 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148436890 FUN_148436890 body=244 status=ok
// SIG undefined FUN_148436890(void)

void FUN_148436890(longlong param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = *(undefined4 *)(param_1 + 0x108);
  *(undefined4 *)(param_1 + 0x118) = uVar1;
  *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_1 + 0x10c);
  *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_1 + 0x110);
  *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_1 + 0x114);
  *(undefined4 *)(param_1 + 0x128) = uVar1;
  *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_1 + 0x10c);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 0x110);
  *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_1 + 0x114);
  if (*(longlong *)(param_1 + 0xf8) == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = *(longlong **)(param_1 + 0x100);
  }
  (**(code **)(*plVar2 + 0x10))(uVar1,&local_88);
  puVar5 = &local_88;
  puVar6 = (undefined8 *)(param_1 + 0x198);
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  if (*(longlong *)(param_1 + 0xe8) == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = *(longlong **)(param_1 + 0xf0);
  }
  (**(code **)(*plVar2 + 0x10))(plVar2,&local_88);
  *(undefined8 *)(param_1 + 0x148) = local_78;
  *(undefined4 *)(param_1 + 0x138) = (undefined4)local_88;
  *(undefined4 *)(param_1 + 0x13c) = local_88._4_4_;
  *(undefined4 *)(param_1 + 0x140) = uStack_80;
  *(undefined4 *)(param_1 + 0x144) = uStack_7c;
  if (*(longlong *)(param_1 + 0xe8) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0xf0);
  }
  FUN_14843085c(uVar4,param_1 + 0x150,param_1 + 0x168,param_1 + 0x180);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148436988 FUN_148436988 body=1042 status=ok
// SIG undefined FUN_148436988(void)

void FUN_148436988(longlong param_1,float param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  char cVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 auStack_178 [32];
  undefined1 local_158 [16];
  double local_148;
  double dStack_140;
  undefined1 local_138 [16];
  double local_128;
  undefined8 uStack_120;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  *(float *)(param_1 + 200) = param_2;
  *(float *)(param_1 + 0xd0) = param_2;
  dVar5 = (double)(param_2 - *(float *)(param_1 + 0xcc));
  pcVar4 = *(code **)(param_1 + 0x28);
  plVar16 = (longlong *)(param_1 + 0x48);
  if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
    plVar16 = *(longlong **)(param_1 + 0x38);
  }
  local_158._0_8_ = dVar5;
  uVar14 = (**(code **)(*plVar16 + 8))();
  cVar13 = (*pcVar4)(uVar14,local_158,&local_d8);
  if (cVar13 != '\0') {
    dVar5 = local_d8;
  }
  dVar1 = *(double *)(param_1 + 0xd8);
  dVar2 = *(double *)(param_1 + 0xe0);
  dVar3 = *(double *)(param_1 + 0xe8);
  dVar19 = sin(dVar5 * 0.5);
  dStack_e0 = cos(dVar5 * 0.5);
  local_f8 = dVar1 * dVar19;
  dStack_f0 = dVar2 * dVar19;
  local_e8 = dVar3 * dVar19;
  pcVar4 = *(code **)(param_1 + 0x68);
  plVar16 = (longlong *)(param_1 + 0x88);
  if (*(longlong **)(param_1 + 0x78) != (longlong *)0x0) {
    plVar16 = *(longlong **)(param_1 + 0x78);
  }
  uVar14 = (**(code **)(*plVar16 + 8))();
  (*pcVar4)(local_158,uVar14,&local_f8);
  local_e8 = local_148;
  dStack_e0 = dStack_140;
  local_f8 = (double)local_158._0_8_;
  dStack_f0 = (double)local_158._8_8_;
  dVar3 = *(double *)(param_1 + 0x138) - *(double *)(param_1 + 0x100);
  dVar5 = *(double *)(param_1 + 0xf0);
  dVar1 = *(double *)(param_1 + 0x130) - *(double *)(param_1 + 0xf8);
  dVar7 = *(double *)(param_1 + 0x128) - dVar5;
  dVar2 = (double)local_158._8_8_ * dVar3 - dVar1 * local_148;
  dVar2 = dVar2 + dVar2;
  dVar8 = (double)local_158._0_8_ * dVar1 - dVar7 * (double)local_158._8_8_;
  dVar8 = dVar8 + dVar8;
  dVar23 = local_148 * dVar7 - dVar3 * (double)local_158._0_8_;
  dVar23 = dVar23 + dVar23;
  dVar3 = ((double)local_158._0_8_ * dVar23 - dVar2 * (double)local_158._8_8_) +
          dStack_140 * dVar8 + dVar3 + *(double *)(param_1 + 0x100);
  dVar25 = (local_148 * dVar2 - dVar8 * (double)local_158._0_8_) + dStack_140 * dVar23 + dVar1 +
           *(double *)(param_1 + 0xf8);
  dVar9 = *(double *)(param_1 + 0x108);
  dVar10 = *(double *)(param_1 + 0x110);
  dVar11 = *(double *)(param_1 + 0x118);
  dVar12 = *(double *)(param_1 + 0x120);
  dVar19 = (double)local_158._0_8_ * dVar10;
  dVar6 = (double)local_158._0_8_ * dVar9;
  dVar24 = dVar11 * (double)local_158._8_8_;
  dVar21 = dVar9 * (double)local_158._8_8_;
  dVar22 = dVar10 * (double)local_158._8_8_;
  dVar20 = dVar11 * local_148;
  dVar1 = dVar9 * local_148 * 1.0 +
          dVar12 * (double)local_158._8_8_ +
          dVar11 * (double)local_158._0_8_ * -1.0 + dVar10 * dStack_140;
  puVar17 = (undefined8 *)(param_1 + 0x108);
  puVar18 = (undefined8 *)local_158;
  for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
    *puVar18 = *puVar17;
    puVar17 = puVar17 + 1;
    puVar18 = puVar18 + 1;
  }
  local_138._8_4_ = SUB84(dVar25,0);
  local_138._0_8_ =
       ((double)local_158._8_8_ * dVar8 - dVar23 * local_148) + dVar2 * dStack_140 + dVar7 + dVar5;
  local_138._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
  uStack_120 = 0;
  local_158._8_4_ = SUB84(dVar1,0);
  local_158._0_8_ =
       dVar10 * local_148 * -1.0 +
       dVar24 + dVar12 * (double)local_158._0_8_ * 1.0 + dVar9 * dStack_140;
  local_158._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  if (*(longlong *)(param_1 + 0xb8) == 0) {
    plVar16 = (longlong *)0x0;
  }
  else {
    plVar16 = *(longlong **)(param_1 + 0xc0);
  }
  local_148 = dVar12 * local_148 * 1.0 + ((dVar19 * 1.0 + dStack_140 * dVar11) - dVar21);
  dStack_140 = dVar20 * -1.0 + ((dVar6 * -1.0 + dStack_140 * dVar12) - dVar22);
  local_128 = dVar3;
  (**(code **)(*plVar16 + 0x18))(dVar3,local_158);
  FUN_14844d70c(param_1 + 8,param_1,*(undefined8 *)(param_1 + 0xcc));
  if ((local_d0 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148436d9c FUN_148436d9c body=261 status=ok
// SIG undefined FUN_148436d9c(void)

void FUN_148436d9c(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_1 + 200);
  if (*(longlong *)(param_1 + 0xb8) == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = *(longlong **)(param_1 + 0xc0);
  }
  (**(code **)(*plVar2 + 0x10))(plVar2,&local_88);
  puVar3 = &local_88;
  puVar4 = (undefined8 *)(param_1 + 0x108);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = *(longlong **)(param_1 + 0xb0);
  }
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_88);
  *(undefined8 *)(param_1 + 0xe8) = local_78;
  *(undefined4 *)(param_1 + 0xd8) = (undefined4)local_88;
  *(undefined4 *)(param_1 + 0xdc) = local_88._4_4_;
  *(undefined4 *)(param_1 + 0xe0) = uStack_80;
  *(undefined4 *)(param_1 + 0xe4) = uStack_7c;
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = *(longlong **)(param_1 + 0xb0);
  }
  (**(code **)(*plVar2 + 0x10))((undefined4)local_88,&local_88);
  *(undefined8 *)(param_1 + 0x100) = local_78;
  *(undefined4 *)(param_1 + 0xf0) = (undefined4)local_88;
  *(undefined4 *)(param_1 + 0xf4) = local_88._4_4_;
  *(undefined4 *)(param_1 + 0xf8) = uStack_80;
  *(undefined4 *)(param_1 + 0xfc) = uStack_7c;
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148436ea4 FUN_148436ea4 body=670 status=ok
// SIG undefined FUN_148436ea4(void)

void FUN_148436ea4(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  byte bVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined1 auStack_148 [40];
  double local_120;
  undefined8 local_118;
  undefined8 uStack_110;
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
  undefined1 local_d8 [16];
  double local_c8;
  undefined8 uStack_c0;
  double local_b0;
  double local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_148;
  uVar9 = param_2[1];
  *(undefined8 *)(param_1 + 0xd0) = *param_2;
  *(undefined8 *)(param_1 + 0xd8) = uVar9;
  uVar9 = param_2[1];
  *(undefined8 *)(param_1 + 0xf0) = *param_2;
  *(undefined8 *)(param_1 + 0xf8) = uVar9;
  dVar2 = (double)*(float *)(param_1 + 200) *
          ((*(double *)(param_1 + 0xf8) - *(double *)(param_1 + 0xe8)) +
          (*(double *)(param_1 + 0xf0) - *(double *)(param_1 + 0xe0)));
  local_118 = *(undefined8 *)(param_1 + 0x168);
  uStack_110 = *(undefined8 *)(param_1 + 0x170);
  local_108 = *(undefined4 *)(param_1 + 0x178);
  uStack_104 = *(undefined4 *)(param_1 + 0x17c);
  uStack_100 = *(undefined4 *)(param_1 + 0x180);
  uStack_fc = *(undefined4 *)(param_1 + 0x184);
  local_f8 = *(undefined4 *)(param_1 + 0x188);
  uStack_f4 = *(undefined4 *)(param_1 + 0x18c);
  uStack_f0 = *(undefined4 *)(param_1 + 400);
  uStack_ec = *(undefined4 *)(param_1 + 0x194);
  local_e8 = *(undefined4 *)(param_1 + 0x198);
  uStack_e4 = *(undefined4 *)(param_1 + 0x19c);
  uStack_e0 = *(undefined4 *)(param_1 + 0x1a0);
  uStack_dc = *(undefined4 *)(param_1 + 0x1a4);
  dVar5 = *(double *)(param_1 + 0x1a8);
  dVar6 = *(double *)(param_1 + 0x1b0);
  dVar7 = *(double *)(param_1 + 0x1b8);
  pcVar1 = *(code **)(param_1 + 0x28);
  plVar10 = (longlong *)(param_1 + 0x48);
  if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
    plVar10 = *(longlong **)(param_1 + 0x38);
  }
  local_b0 = dVar2;
  local_a8 = dVar2;
  uVar9 = (**(code **)(*plVar10 + 8))();
  bVar8 = (*pcVar1)(uVar9,&local_a8,&local_120);
  if (bVar8 != 0) {
    local_b0 = local_120;
    dVar2 = local_120;
  }
  if (((9.999999747378752e-05 < ABS(dVar5 - dVar6)) || (9.999999747378752e-05 < ABS(dVar5 - dVar7)))
     || (dVar3 = dVar2, dVar4 = dVar2, (ABS(dVar6 - dVar7) <= 9.999999747378752e-05 & bVar8) == 0))
  {
    dVar3 = dVar7 * dVar2;
    dVar4 = dVar2 * dVar5;
    dVar2 = dVar6 * dVar2;
  }
  pcVar1 = *(code **)(param_1 + 0x68);
  plVar10 = (longlong *)(param_1 + 0x88);
  if (*(longlong **)(param_1 + 0x78) != (longlong *)0x0) {
    plVar10 = *(longlong **)(param_1 + 0x78);
  }
  uVar9 = (**(code **)(*plVar10 + 8))();
  local_b0 = (double)(*pcVar1)(uVar9,&local_b0);
  local_d8._8_4_ = SUB84(dVar2 + dVar6,0);
  local_d8._0_8_ = dVar4 + dVar5;
  local_d8._12_4_ = (int)((ulonglong)(dVar2 + dVar6) >> 0x20);
  uStack_c0 = 0;
  if (*(longlong *)(param_1 + 0xb8) == 0) {
    plVar10 = (longlong *)0x0;
  }
  else {
    plVar10 = *(longlong **)(param_1 + 0xc0);
  }
  local_c8 = dVar3 + dVar7;
  (**(code **)(*plVar10 + 0x18))(dVar3 + dVar7,&local_118);
  local_a8 = *(double *)(param_1 + 0xe0);
  uStack_a0 = *(undefined8 *)(param_1 + 0xe8);
  local_98 = *(undefined4 *)(param_1 + 0xf0);
  uStack_94 = *(undefined4 *)(param_1 + 0xf4);
  uStack_90 = *(undefined4 *)(param_1 + 0xf8);
  uStack_8c = *(undefined4 *)(param_1 + 0xfc);
  FUN_14841cdb4(param_1 + 8,param_1);
  if ((local_80 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148437144 FUN_148437144 body=244 status=ok
// SIG undefined FUN_148437144(void)

void FUN_148437144(longlong param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)(param_1 + 0xe0) = uVar1;
  *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_1 + 0xd4);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_1 + 0xdc);
  *(undefined4 *)(param_1 + 0xf0) = uVar1;
  *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_1 + 0xd4);
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_1 + 0xdc);
  if (*(longlong *)(param_1 + 0xb8) == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = *(longlong **)(param_1 + 0xc0);
  }
  (**(code **)(*plVar2 + 0x10))(uVar1,&local_88);
  puVar5 = &local_88;
  puVar6 = (undefined8 *)(param_1 + 0x168);
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = *(longlong **)(param_1 + 0xb0);
  }
  (**(code **)(*plVar2 + 0x10))(plVar2,&local_88);
  *(undefined8 *)(param_1 + 0x110) = local_78;
  *(undefined4 *)(param_1 + 0x100) = (undefined4)local_88;
  *(undefined4 *)(param_1 + 0x104) = local_88._4_4_;
  *(undefined4 *)(param_1 + 0x108) = uStack_80;
  *(undefined4 *)(param_1 + 0x10c) = uStack_7c;
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0xb0);
  }
  FUN_14843085c(uVar4,param_1 + 0x118,param_1 + 0x130,param_1 + 0x148);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14843723c FUN_14843723c body=640 status=ok
// SIG undefined FUN_14843723c(void)

void FUN_14843723c(longlong param_1,float param_2)

{
  double dVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined1 auStack_f8 [40];
  double local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [16];
  double local_78;
  undefined8 uStack_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *(float *)(param_1 + 0xd0) = param_2;
  *(float *)(param_1 + 0xd8) = param_2;
  local_68 = (double)*(float *)(param_1 + 200) * (double)(param_2 - *(float *)(param_1 + 0xd4));
  local_c8 = *(undefined8 *)(param_1 + 0x118);
  uStack_c0 = *(undefined8 *)(param_1 + 0x120);
  local_b8 = *(undefined4 *)(param_1 + 0x128);
  uStack_b4 = *(undefined4 *)(param_1 + 300);
  uStack_b0 = *(undefined4 *)(param_1 + 0x130);
  uStack_ac = *(undefined4 *)(param_1 + 0x134);
  local_a8 = *(undefined8 *)(param_1 + 0x138);
  uStack_a0 = *(undefined8 *)(param_1 + 0x140);
  local_98 = *(undefined4 *)(param_1 + 0x148);
  uStack_94 = *(undefined4 *)(param_1 + 0x14c);
  uStack_90 = *(undefined4 *)(param_1 + 0x150);
  uStack_8c = *(undefined4 *)(param_1 + 0x154);
  dVar3 = *(double *)(param_1 + 0x158);
  dVar4 = *(double *)(param_1 + 0x160);
  dVar1 = *(double *)(param_1 + 0x168);
  pcVar2 = *(code **)(param_1 + 0x28);
  plVar9 = (longlong *)(param_1 + 0x48);
  if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
    plVar9 = *(longlong **)(param_1 + 0x38);
  }
  uVar8 = (**(code **)(*plVar9 + 8))();
  cVar7 = (*pcVar2)(uVar8,&local_68,&local_d0);
  if (cVar7 == '\0') {
    dVar1 = dVar1 * (*(double *)(param_1 + 0xf0) * local_68 + 1.0);
    dVar4 = dVar4 * (*(double *)(param_1 + 0xe8) * local_68 + 1.0);
    dVar3 = (local_68 * *(double *)(param_1 + 0xe0) + 1.0) * dVar3;
  }
  else {
    local_68 = local_d0;
    dVar1 = dVar1 + *(double *)(param_1 + 0xf0) * local_d0;
    dVar4 = dVar4 + *(double *)(param_1 + 0xe8) * local_d0;
    dVar3 = local_d0 * *(double *)(param_1 + 0xe0) + dVar3;
  }
  pcVar2 = *(code **)(param_1 + 0x68);
  plVar9 = (longlong *)(param_1 + 0x88);
  if (*(longlong **)(param_1 + 0x78) != (longlong *)0x0) {
    plVar9 = *(longlong **)(param_1 + 0x78);
  }
  uVar8 = (**(code **)(*plVar9 + 8))();
  local_68 = (double)(*pcVar2)(uVar8,&local_68);
  local_78 = dVar1;
  dVar5 = dVar3;
  dVar6 = dVar4;
  if (*(char *)(param_1 + 0xcc) == '\x01') {
    local_78 = DAT_14c8464f0;
    if (DAT_14c8464f0 <= dVar1) {
      local_78 = dVar1;
    }
    dVar6 = DAT_14c8464e8;
    if (DAT_14c8464e8 <= dVar4) {
      dVar6 = dVar4;
    }
    dVar5 = DAT_14c8464e0;
    if (DAT_14c8464e0 <= dVar3) {
      dVar5 = dVar3;
    }
  }
  local_88._8_4_ = SUB84(dVar6,0);
  local_88._0_8_ = dVar5;
  local_88._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  uStack_70 = 0;
  if (*(longlong *)(param_1 + 0xb8) == 0) {
    plVar9 = (longlong *)0x0;
  }
  else {
    plVar9 = *(longlong **)(param_1 + 0xc0);
  }
  (**(code **)(*plVar9 + 0x18))(local_78,&local_c8);
  FUN_14844d70c(param_1 + 8,param_1,*(undefined8 *)(param_1 + 0xd4));
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484374be FUN_1484374be body=261 status=ok
// SIG undefined FUN_1484374be(void)

void FUN_1484374be(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_1 + 0xd0);
  if (*(longlong *)(param_1 + 0xb8) == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = *(longlong **)(param_1 + 0xc0);
  }
  (**(code **)(*plVar2 + 0x10))(plVar2,&local_88);
  puVar3 = &local_88;
  puVar4 = (undefined8 *)(param_1 + 0x118);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = *(longlong **)(param_1 + 0xb0);
  }
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_88);
  *(undefined8 *)(param_1 + 0xf0) = local_78;
  *(undefined4 *)(param_1 + 0xe0) = (undefined4)local_88;
  *(undefined4 *)(param_1 + 0xe4) = local_88._4_4_;
  *(undefined4 *)(param_1 + 0xe8) = uStack_80;
  *(undefined4 *)(param_1 + 0xec) = uStack_7c;
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = *(longlong **)(param_1 + 0xb0);
  }
  (**(code **)(*plVar2 + 0x10))((undefined4)local_88,&local_88);
  *(undefined8 *)(param_1 + 0x108) = local_78;
  *(undefined4 *)(param_1 + 0xf8) = (undefined4)local_88;
  *(undefined4 *)(param_1 + 0xfc) = local_88._4_4_;
  *(undefined4 *)(param_1 + 0x100) = uStack_80;
  *(undefined4 *)(param_1 + 0x104) = uStack_7c;
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484375c6 FUN_1484375c6 body=1272 status=ok
// SIG undefined FUN_1484375c6(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1484375c6(longlong param_1,undefined8 *param_2)

{
  double dVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  byte bVar6;
  byte bVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  double *pdVar11;
  double *pdVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 auStack_198 [32];
  double local_178 [10];
  undefined1 local_128 [16];
  double local_118;
  undefined8 uStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  uVar8 = param_2[1];
  *(undefined8 *)(param_1 + 0x150) = *param_2;
  *(undefined8 *)(param_1 + 0x158) = uVar8;
  uVar8 = param_2[1];
  *(undefined8 *)(param_1 + 0x170) = *param_2;
  *(undefined8 *)(param_1 + 0x178) = uVar8;
  dVar3 = (*(double *)(param_1 + 0x178) - *(double *)(param_1 + 0x168)) *
          (double)*(float *)(param_1 + 0x148);
  dVar15 = (*(double *)(param_1 + 0x170) - *(double *)(param_1 + 0x160)) *
           (double)*(float *)(param_1 + 0x148);
  if (*(char *)(param_1 + 0x14c) == '\x01') {
    dVar15 = dVar15 + dVar3;
    pdVar11 = (double *)(param_1 + 0x1e8);
    pdVar12 = local_178 + 2;
    local_108 = dVar15;
    dStack_100 = dVar15;
    for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
      *pdVar12 = *pdVar11;
      pdVar11 = pdVar11 + 1;
      pdVar12 = pdVar12 + 1;
    }
    dVar3 = *(double *)(param_1 + 0x238);
    dVar1 = *(double *)(param_1 + 0x228);
    dVar13 = *(double *)(param_1 + 0x230);
    local_178[1] = 0.0;
    local_178[0] = 0.0;
    pcVar2 = *(code **)(param_1 + 0x68);
    plVar10 = (longlong *)(param_1 + 0x88);
    if (*(longlong **)(param_1 + 0x78) != (longlong *)0x0) {
      plVar10 = *(longlong **)(param_1 + 0x78);
    }
    local_f8 = dVar15;
    uVar8 = (**(code **)(*plVar10 + 8))();
    bVar6 = (*pcVar2)(uVar8,&local_f8,local_178 + 1);
    if (bVar6 == 0) {
      uVar18 = SUB84(dVar15,0);
      uVar19 = (undefined4)((ulonglong)dVar15 >> 0x20);
    }
    else {
      uVar18 = SUB84(local_178[1],0);
      uVar19 = (undefined4)((ulonglong)local_178[1] >> 0x20);
    }
    dVar5 = (double)CONCAT44(uVar19,uVar18);
    pcVar2 = *(code **)(param_1 + 0xa8);
    plVar10 = (longlong *)(param_1 + 200);
    if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
      plVar10 = *(longlong **)(param_1 + 0xb8);
    }
    local_f8 = dVar15;
    uVar8 = (**(code **)(*plVar10 + 8))();
    bVar7 = (*pcVar2)(uVar8,&local_f8,local_178);
    if (bVar7 != 0) {
      dVar15 = local_178[0];
    }
    bVar6 = bVar6 & bVar7;
    dVar14 = dVar13 * *(double *)(param_1 + 0x1d0) + dVar13 * *(double *)(param_1 + 0x1b8);
    dVar16 = dVar1 * *(double *)(param_1 + 0x1c8) + dVar1 * *(double *)(param_1 + 0x1b0);
    if ((dVar16 != dVar14) || (NAN(dVar16) || NAN(dVar14))) {
      dVar4 = dVar3 * *(double *)(param_1 + 0x1d8) + dVar3 * *(double *)(param_1 + 0x1c0);
      if ((dVar16 != dVar4) || (NAN(dVar16) || NAN(dVar4))) {
        bVar6 = bVar6 & dVar14 == dVar4;
      }
    }
    dVar17 = dVar15;
    dVar14 = dVar15;
    dVar16 = dVar5;
    dVar4 = dVar5;
    if (bVar6 == 0) {
      dVar5 = dVar3 * (double)CONCAT44(uVar19,uVar18);
      dVar14 = dVar3 * dVar15;
      dVar17 = dVar15 * dVar1;
      dVar15 = dVar13 * dVar15;
      dVar16 = dVar13 * (double)CONCAT44(uVar19,uVar18);
      dVar4 = (double)CONCAT44(uVar19,uVar18) * dVar1;
    }
    dVar5 = *(double *)(param_1 + 0x1d8) * dVar14 + dVar3 + *(double *)(param_1 + 0x1c0) * dVar5;
    dVar13 = *(double *)(param_1 + 0x1d0) * dVar15 + dVar13 + *(double *)(param_1 + 0x1b8) * dVar16;
    dVar15 = *(double *)(param_1 + 0x1c8) * dVar17 + dVar1 + *(double *)(param_1 + 0x1b0) * dVar4;
  }
  else {
    pdVar11 = (double *)(param_1 + 0x1e8);
    pdVar12 = local_178 + 2;
    local_108 = dVar15;
    dStack_100 = dVar3;
    for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
      *pdVar12 = *pdVar11;
      pdVar11 = pdVar11 + 1;
      pdVar12 = pdVar12 + 1;
    }
    dVar5 = *(double *)(param_1 + 0x238);
    dVar1 = *(double *)(param_1 + 0x228);
    dVar13 = *(double *)(param_1 + 0x230);
    dVar5 = dVar5 * dVar3 * *(double *)(param_1 + 0x1d8) +
            dVar15 * dVar5 * *(double *)(param_1 + 0x1c0) + dVar5;
    dVar13 = dVar13 * dVar3 * *(double *)(param_1 + 0x1d0) +
             dVar15 * dVar13 * *(double *)(param_1 + 0x1b8) + dVar13;
    dVar15 = dVar3 * dVar1 * *(double *)(param_1 + 0x1c8) +
             dVar15 * dVar1 * *(double *)(param_1 + 0x1b0) + dVar1;
  }
  uVar18 = SUB84(dVar13,0);
  uVar19 = (undefined4)((ulonglong)dVar13 >> 0x20);
  pcVar2 = *(code **)(param_1 + 0xe8);
  plVar10 = (longlong *)(param_1 + 0x108);
  if (*(longlong **)(param_1 + 0xf8) != (longlong *)0x0) {
    plVar10 = *(longlong **)(param_1 + 0xf8);
  }
  uVar8 = (**(code **)(*plVar10 + 8))();
  (*pcVar2)(&local_f8,uVar8,&local_108);
  local_108 = local_f8;
  dStack_100 = (double)uStack_f0;
  if (*(char *)(param_1 + 0x14d) == '\x01') {
    if (dVar5 <= DAT_14c8464f0) {
      dVar5 = DAT_14c8464f0;
    }
    if (dVar13 <= DAT_14c8464e8) {
      dVar13 = DAT_14c8464e8;
    }
    if (dVar15 <= DAT_14c8464e0) {
      dVar15 = DAT_14c8464e0;
    }
    uVar18 = SUB84(dVar13,0);
    uVar19 = (undefined4)((ulonglong)dVar13 >> 0x20);
  }
  local_128._8_4_ = uVar18;
  local_128._0_8_ = dVar15;
  local_128._12_4_ = uVar19;
  uStack_110 = 0;
  if (*(longlong *)(param_1 + 0x138) == 0) {
    plVar10 = (longlong *)0x0;
  }
  else {
    plVar10 = *(longlong **)(param_1 + 0x140);
  }
  local_118 = dVar5;
  (**(code **)(*plVar10 + 0x18))(dVar5,local_178 + 2);
  local_f8 = *(double *)(param_1 + 0x160);
  uStack_f0 = *(undefined8 *)(param_1 + 0x168);
  local_e8 = *(undefined4 *)(param_1 + 0x170);
  uStack_e4 = *(undefined4 *)(param_1 + 0x174);
  uStack_e0 = *(undefined4 *)(param_1 + 0x178);
  uStack_dc = *(undefined4 *)(param_1 + 0x17c);
  FUN_14841cdb4(param_1 + 8,param_1);
  if ((local_d0 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148437ac0 FUN_148437ac0 body=244 status=ok
// SIG undefined FUN_148437ac0(void)

void FUN_148437ac0(longlong param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = *(undefined4 *)(param_1 + 0x150);
  *(undefined4 *)(param_1 + 0x160) = uVar1;
  *(undefined4 *)(param_1 + 0x164) = *(undefined4 *)(param_1 + 0x154);
  *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(param_1 + 0x158);
  *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)(param_1 + 0x15c);
  *(undefined4 *)(param_1 + 0x170) = uVar1;
  *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(param_1 + 0x154);
  *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_1 + 0x158);
  *(undefined4 *)(param_1 + 0x17c) = *(undefined4 *)(param_1 + 0x15c);
  if (*(longlong *)(param_1 + 0x138) == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = *(longlong **)(param_1 + 0x140);
  }
  (**(code **)(*plVar2 + 0x10))(uVar1,&local_88);
  puVar5 = &local_88;
  puVar6 = (undefined8 *)(param_1 + 0x1e8);
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  if (*(longlong *)(param_1 + 0x128) == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = *(longlong **)(param_1 + 0x130);
  }
  (**(code **)(*plVar2 + 0x10))(plVar2,&local_88);
  *(undefined8 *)(param_1 + 400) = local_78;
  *(undefined4 *)(param_1 + 0x180) = (undefined4)local_88;
  *(undefined4 *)(param_1 + 0x184) = local_88._4_4_;
  *(undefined4 *)(param_1 + 0x188) = uStack_80;
  *(undefined4 *)(param_1 + 0x18c) = uStack_7c;
  if (*(longlong *)(param_1 + 0x128) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x130);
  }
  FUN_14843085c(uVar4,param_1 + 0x198,param_1 + 0x1b0,param_1 + 0x1c8);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148437be0 FUN_148437be0 body=938 status=ok
// SIG undefined FUN_148437be0(void)

void FUN_148437be0(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_138 [32];
  undefined1 local_118 [32];
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (param_2 != (longlong *)0x0) {
    lVar4 = (**(code **)(*param_2 + 0x318))(param_2);
    if (lVar4 != 0) {
      plVar5 = (longlong *)(**(code **)(*param_2 + 0x318))(param_2);
      (**(code **)(*plVar5 + 0x18))(plVar5,local_118);
      *(undefined8 *)(param_1 + 0x40) = param_3[2];
      uVar3 = param_3[1];
      *(undefined8 *)(param_1 + 0x30) = *param_3;
      *(undefined8 *)(param_1 + 0x38) = uVar3;
      dVar1 = local_f8 + local_f0 * -0.0;
      dVar7 = local_f0 * -0.0 + local_f8 * 0.0;
      dVar8 = local_f8 * 0.0 - local_f0;
      dVar6 = local_e8 + local_f8 * -0.0;
      dVar2 = local_f0 * 0.0 + local_e8 * -0.0;
      dVar8 = dVar8 + dVar8;
      dVar6 = dVar6 + dVar6;
      dVar2 = dVar2 + dVar2;
      *(double *)(param_1 + 0x48) =
           -((local_f0 * dVar8 - dVar6 * local_e8) + dVar2 * local_e0 + 1.0);
      *(double *)(param_1 + 0x50) =
           -((local_e8 * dVar2 - dVar8 * local_f8) + local_e0 * dVar6 + 0.0);
      *(double *)(param_1 + 0x58) =
           -((local_f8 * dVar6 - dVar2 * local_f0) + local_e0 * dVar8 + 0.0);
      dVar6 = local_f8 * -0.0 + local_e8 * 0.0;
      dVar8 = local_f0 * 0.0 - local_e8;
      dVar1 = dVar1 + dVar1;
      dVar6 = dVar6 + dVar6;
      dVar8 = dVar8 + dVar8;
      *(double *)(param_1 + 0x60) = (local_f0 * dVar1 - dVar6 * local_e8) + dVar8 * local_e0 + 0.0;
      *(double *)(param_1 + 0x68) = (local_e8 * dVar8 - dVar1 * local_f8) + local_e0 * dVar6 + 1.0;
      *(double *)(param_1 + 0x70) = (local_f8 * dVar6 - dVar8 * local_f0) + local_e0 * dVar1 + 0.0;
      dVar1 = local_e8 * 0.0 - local_f8;
      dVar8 = local_e8 * -0.0 + local_f0;
      dVar7 = dVar7 + dVar7;
      dVar1 = dVar1 + dVar1;
      dVar8 = dVar8 + dVar8;
      *(double *)(param_1 + 0x78) = (local_f0 * dVar7 - dVar1 * local_e8) + dVar8 * local_e0 + 0.0;
      *(double *)(param_1 + 0x80) = (local_e8 * dVar8 - dVar7 * local_f8) + local_e0 * dVar1 + 0.0;
      *(double *)(param_1 + 0x88) = (local_f8 * dVar1 - dVar8 * local_f0) + local_e0 * dVar7 + 1.0;
    }
  }
  if ((local_c0 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148437f95 FUN_148437f95 body=175 status=ok
// SIG undefined FUN_148437f95(void)

undefined8 FUN_148437f95(undefined8 param_1)

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
  local_b8 = FUN_145b73d64();
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



// FUNCTION 148438046 FUN_148438046 body=351 status=ok
// SIG undefined FUN_148438046(void)

void FUN_148438046(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)FUN_14841014b(DAT_14c951640);
  if ((plVar1 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar1);
  }
  param_1[0x11] = (longlong)plVar1;
  (**(code **)(*plVar1 + 0x358))(plVar1,param_1 + 7);
  local_30._0_4_ = 0x32;
  (**(code **)(*(longlong *)param_1[0x11] + 0x2a8))((longlong *)param_1[0x11],&local_30);
  (**(code **)(*param_1 + 0x2d0))(param_1,param_1[0x11]);
  plVar1 = (longlong *)FUN_1484101e0(DAT_14c951640);
  (**(code **)(*plVar1 + 0x300))(plVar1,param_1 + 8);
  local_30 = CONCAT44(local_30._4_4_,0x32);
  (**(code **)(*plVar1 + 0x2a8))(plVar1,&local_30);
  (**(code **)(*param_1 + 0x2d0))(param_1,plVar1);
  local_30 = FUN_148410275(param_1);
  FUN_14841030a(param_1 + 9,&local_30);
  local_30 = FUN_1484381a6(param_1);
  FUN_148438256(param_1 + 0xb,&local_30);
  local_30 = FUN_148410475(param_1);
  FUN_14841050a(param_1 + 0xd,&local_30);
  local_30 = FUN_148410575(param_1);
  FUN_14841060a(param_1 + 0xf,&local_30);
  *(undefined1 *)(param_1 + 0x24) = 0;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484381a6 FUN_1484381a6 body=175 status=ok
// SIG undefined FUN_1484381a6(void)

undefined8 FUN_1484381a6(undefined8 param_1)

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
  local_b8 = FUN_145b7152c();
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



// FUNCTION 148438256 FUN_148438256 body=107 status=ok
// SIG undefined FUN_148438256(void)

longlong * FUN_148438256(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *param_2;
  lVar3 = lVar1;
  if (lVar1 != 0 && DAT_14c950c29 == 1) {
    FUN_14689c22e(lVar1);
    lVar3 = *param_2;
  }
  if ((lVar1 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_14689c22e(lVar1);
  }
  lVar2 = lVar3 + 0x28;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  *param_1 = lVar1;
  param_1[1] = lVar2;
  return param_1;
}



// FUNCTION 1484382c2 FUN_1484382c2 body=177 status=ok
// SIG undefined FUN_1484382c2(void)

undefined4 FUN_1484382c2(longlong param_1,longlong *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = 0;
  if (((*param_2 != 0) && (param_2[1] != 0)) && ((int)param_2[2] != 0)) {
    uVar1 = FUN_1484326fc(param_1,param_2,param_3,&local_28);
    if ((char)uVar1 != '\0') {
      lVar4 = param_2[6];
      if (param_2[6] == 0) {
        lVar4 = DAT_14c951640;
      }
      lVar3 = local_28 + 0x28;
      if (local_28 == 0) {
        lVar3 = 0;
      }
      if (*(longlong *)(param_1 + 0x48) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined8 *)(param_1 + 0x50);
      }
      local_30 = FUN_14841877c(uVar2,lVar3,lVar4);
      FUN_148438374(param_1 + 0x58);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148438374 FUN_148438374 body=107 status=ok
// SIG undefined FUN_148438374(void)

longlong * FUN_148438374(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *param_2;
  lVar3 = lVar1;
  if (lVar1 != 0 && DAT_14c950c29 == 1) {
    FUN_14689c22e(lVar1);
    lVar3 = *param_2;
  }
  if ((lVar1 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_14689c22e(lVar1);
  }
  lVar2 = lVar3 + 0x28;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  *param_1 = lVar1;
  param_1[1] = lVar2;
  return param_1;
}



// FUNCTION 1484383e0 FUN_1484383e0 body=357 status=ok
// SIG undefined FUN_1484383e0(void)

undefined4 FUN_1484383e0(longlong param_1,longlong *param_2,undefined1 param_3,longlong param_4)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = (int)param_2[2];
  if (iVar1 == 0 || (param_2[1] == 0 || *param_2 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar6 = 1;
    if (iVar1 != 2) {
      uVar6 = (uint)(iVar1 == 3) * 2;
    }
    uVar2 = FUN_1484326fc(param_1,param_2,param_4,&local_50);
    if ((char)uVar2 != '\0') {
      lVar7 = param_2[6];
      if (param_2[6] == 0) {
        lVar7 = DAT_14c951640;
      }
      *(undefined1 *)(param_1 + 0x90) = 1;
      if ((param_4 == 0) ||
         (lVar3 = *(longlong *)(param_4 + 0x30 + (ulonglong)uVar6 * 8), lVar3 == 0)) {
        lVar5 = *(longlong *)(*(longlong *)(*param_2 + 0xa8) + 0x1c8);
        lVar3 = FUN_14841ba1c(lVar7);
        if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_14689c22e(lVar5);
        }
        *(longlong *)(lVar3 + 0x30) = lVar5;
        *(uint *)(lVar3 + 0x38) = uVar6;
        *(undefined1 *)(lVar3 + 0x3c) = 1;
        if (param_4 != 0) {
          *(longlong *)(param_4 + 0x30 + (ulonglong)uVar6 * 8) = lVar3;
        }
      }
      lVar5 = local_50 + 0x28;
      if (local_50 == 0) {
        lVar5 = 0;
      }
      lVar4 = lVar3 + 0x28;
      if (lVar3 == 0) {
        lVar4 = 0;
      }
      local_58 = FUN_14841965e(lVar4,lVar5,lVar7);
      FUN_1484196fc(param_1 + 0x58,&local_58);
      *(undefined1 *)(local_58 + 0x175) = param_3;
      *(undefined1 *)(local_58 + 0x174) = 1;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148438546 FUN_148438546 body=688 status=ok
// SIG undefined FUN_148438546(void)

undefined8 FUN_148438546(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_108 [40];
  undefined8 local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  longlong lStack_a0;
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar4 = 0;
  if ((*param_2 != 0) && (param_2[1] != 0)) {
    if ((int)param_2[2] == 0) {
      cVar1 = FUN_1484326fc(param_1,param_2,param_4,&local_d0);
    }
    else {
      uStack_78 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_2 + 0xd) >> 0x18);
      uStack_74._0_1_ = (undefined1)((ulonglong)*(undefined8 *)((longlong)param_2 + 0xd) >> 0x38);
      local_88 = *param_2;
      uStack_80 = (undefined4)param_2[1];
      uStack_7c = *(undefined4 *)((longlong)param_2 + 0xc);
      plVar5 = (longlong *)param_2[3];
      uVar2 = 0;
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 8))(plVar5);
        uVar2 = (undefined4)param_2[4];
      }
      local_68 = CONCAT44(local_68._4_4_,uVar2);
      lStack_60 = param_2[5];
      local_58 = param_2[6];
      uStack_50 = CONCAT71(uStack_50._1_7_,(char)param_2[7]);
      uStack_78 = 0;
      uStack_70 = plVar5;
      cVar1 = FUN_1484326fc(param_1,&local_88,param_4,&local_d0);
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
    if (cVar1 == '\0') {
      uVar4 = 0;
    }
    else {
      lVar7 = param_2[6];
      if (param_2[6] == 0) {
        lVar7 = DAT_14c951640;
      }
      if ((param_4 == 0) || (lVar3 = *(longlong *)(param_4 + 0x10), local_d8 = lVar3, lVar3 == 0)) {
        lVar3 = FUN_1484387f7(lVar7);
        local_e0 = 0;
        local_d8 = lVar3;
        FUN_14485c47a(&local_e0,*(undefined8 *)(*param_2 + 0xa8));
        local_c8 = *(longlong *)(param_1 + 0x270);
        local_b8 = *(longlong **)(param_1 + 0x280);
        uStack_70 = *(longlong **)(param_1 + 0x288);
        local_68 = *(longlong *)(param_1 + 0x290);
        lStack_60 = *(longlong *)(param_1 + 0x298);
        local_58 = *(longlong *)(param_1 + 0x2a0);
        uStack_50 = *(undefined8 *)(param_1 + 0x2a8);
        uVar4 = uStack_50;
        uStack_78 = SUB84(local_b8,0);
        uStack_74 = (undefined4)((ulonglong)local_b8 >> 0x20);
        plVar5 = uStack_70;
        local_88 = local_c8;
        uStack_80 = (undefined4)*(undefined8 *)(param_1 + 0x278);
        uStack_7c = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x278) >> 0x20);
        *(undefined8 *)(param_1 + 0x2a0) = local_e0;
        *(ulonglong *)(param_1 + 0x2a8) = CONCAT44(uStack_8c,uStack_90);
        *(undefined ***)(param_1 + 0x290) = &PTR_LAB_14aedb590;
        *(longlong *)(param_1 + 0x298) = param_1;
        *(undefined8 *)(param_1 + 0x280) = 0;
        *(ulonglong *)(param_1 + 0x288) = CONCAT44(uStack_ac,uStack_b0);
        *(code **)(param_1 + 0x270) = FUN_143b531a0;
        *(ulonglong *)(param_1 + 0x278) = CONCAT44(uStack_bc,uStack_c0);
        uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
        uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
        uStack_b0 = (undefined4)uStack_70;
        uStack_ac = uStack_70._4_4_;
        local_98 = local_58;
        uStack_90 = (undefined4)uStack_50;
        uStack_8c = uStack_50._4_4_;
        local_a8 = local_68;
        lStack_a0 = lStack_60;
        uStack_c0 = uStack_80;
        uStack_bc = uStack_7c;
        uStack_70 = plVar5;
        uStack_50 = uVar4;
        if (local_c8 != 0) {
          plVar5 = local_b8;
          if (local_b8 == (longlong *)0x0) {
            plVar5 = &local_a8;
          }
          (**(code **)(*plVar5 + 0x10))();
        }
        if (param_4 != 0) {
          *(longlong *)(param_4 + 0x10) = lVar3;
        }
      }
      FUN_1484388a8(param_1 + 0x48,&local_d8);
      if (local_d0 != 0) {
        local_d0 = local_d0 + 0x28;
      }
      lVar6 = lVar3 + 0x28;
      if (lVar3 == 0) {
        lVar6 = 0;
      }
      local_88 = FUN_148419af8(lVar6,local_d0,lVar7);
      FUN_148419b96(param_1 + 0x58);
      uVar4 = 1;
    }
  }
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484387f7 FUN_1484387f7 body=175 status=ok
// SIG undefined FUN_1484387f7(void)

undefined8 FUN_1484387f7(undefined8 param_1)

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
  local_b8 = FUN_1459d7362();
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



// FUNCTION 1484388a8 FUN_1484388a8 body=107 status=ok
// SIG undefined FUN_1484388a8(void)

longlong * FUN_1484388a8(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *param_2;
  lVar3 = lVar1;
  if (lVar1 != 0 && DAT_14c950c29 == 1) {
    FUN_14689c22e(lVar1);
    lVar3 = *param_2;
  }
  if ((lVar1 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_14689c22e(lVar1);
  }
  lVar2 = lVar3 + 0x28;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  *param_1 = lVar1;
  param_1[1] = lVar2;
  return param_1;
}



// FUNCTION 148438914 FUN_148438914 body=207 status=ok
// SIG undefined FUN_148438914(void)

char * FUN_148438914(longlong param_1,char *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong *plVar6;
  
  *param_2 = '\0';
  param_2[8] = '\0';
  param_2[9] = '\0';
  param_2[10] = '\0';
  param_2[0xb] = -0x20;
  param_2[0xc] = -1;
  param_2[0xd] = -1;
  param_2[0xe] = -0x11;
  param_2[0xf] = 'G';
  param_2[0x10] = '\0';
  param_2[0x11] = '\0';
  param_2[0x12] = '\0';
  param_2[0x13] = '\0';
  param_2[0x14] = '\0';
  param_2[0x15] = '\0';
  param_2[0x16] = '\0';
  param_2[0x17] = '\0';
  param_2[0x18] = '\0';
  param_2[0x19] = '\0';
  param_2[0x1a] = '\0';
  param_2[0x1b] = '\0';
  param_2[0x1c] = '\0';
  param_2[0x1d] = '\0';
  param_2[0x1e] = '\0';
  param_2[0x1f] = '\0';
  param_2[0x20] = '\0';
  param_2[0x21] = '\0';
  param_2[0x22] = '\0';
  param_2[0x23] = '\0';
  param_2[0x24] = '\0';
  param_2[0x25] = '\0';
  param_2[0x26] = -0x10;
  param_2[0x27] = '?';
  param_2[0x28] = '\0';
  param_2[0x2c] = '\0';
  param_2[0x2d] = '\0';
  param_2[0x2e] = '\0';
  param_2[0x2f] = '\0';
  param_2[0x30] = '\0';
  param_2[0x31] = '\0';
  param_2[0x32] = '\0';
  param_2[0x33] = '\0';
  param_2[0x34] = '\0';
  param_2[0x35] = '\0';
  param_2[0x36] = '\0';
  param_2[0x37] = '\0';
  param_2[0x38] = '\0';
  param_2[0x39] = '\0';
  param_2[0x3a] = '\0';
  param_2[0x3b] = '\0';
  param_2[0x3c] = '\0';
  param_2[0x3d] = '\0';
  param_2[0x3e] = '\0';
  param_2[0x3f] = '\0';
  if ((((*(longlong *)(param_1 + 0x30) != 0) &&
       (plVar6 = *(longlong **)(param_1 + 0x38), plVar6 != (longlong *)0x0)) &&
      (*(longlong *)(param_1 + 0x10) != 0)) &&
     (((*(longlong *)(param_1 + 0x18) != 0 && (*(longlong *)(param_1 + 0x20) != 0)) &&
      (*(longlong *)(param_1 + 0x28) != 0)))) {
    (**(code **)(*plVar6 + 0x10))(plVar6,param_2);
    if (*param_2 == '\x01') {
      dVar1 = *(double *)(param_2 + 8);
      dVar2 = param_3[5];
      dVar3 = param_3[4];
      dVar4 = param_3[2];
      dVar5 = param_3[1];
      *(double *)(param_1 + 0x1b0) = dVar1 * param_3[3] + *param_3;
      *(double *)(param_1 + 0x1b8) = dVar3 * dVar1 + dVar5;
      *(double *)(param_1 + 0x1c0) = dVar2 * dVar1 + dVar4;
    }
  }
  return param_2;
}



// FUNCTION 1484389e4 FUN_1484389e4 body=1338 status=ok
// SIG undefined FUN_1484389e4(void)

void FUN_1484389e4(longlong param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  longlong *plVar6;
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  uint uVar11;
  undefined1 auStack_168 [32];
  char *local_148;
  double *local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  double local_108;
  double local_100;
  double local_f8;
  char local_e9;
  double local_e8;
  double dStack_e0;
  double local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_1 + 0x1c0);
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_1 + 0x1b0);
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_1 + 0x1b8);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    plVar6 = (longlong *)0x0;
  }
  else {
    plVar6 = *(longlong **)(param_1 + 0x18);
  }
  (**(code **)(*plVar6 + 0x18))(plVar6,&local_e8);
  *(double *)(param_1 + 0x118) = local_d8;
  *(double *)(param_1 + 0x108) = local_e8;
  *(double *)(param_1 + 0x110) = dStack_e0;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    plVar6 = (longlong *)0x0;
  }
  else {
    plVar6 = *(longlong **)(param_1 + 0x18);
  }
  cVar5 = (**(code **)(*plVar6 + 0x20))();
  if (cVar5 == '\0') {
    FUN_1484308ef(param_1 + 0x108,param_1 + 0x120,param_1 + 0x138);
  }
  else {
    if (*(longlong *)(param_1 + 0x10) == 0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = *(longlong **)(param_1 + 0x18);
    }
    (**(code **)(*plVar6 + 0x28))(plVar6,param_1 + 0x120,param_1 + 0x138);
  }
  local_148 = &local_e9;
  local_140 = &local_e8;
  FUN_14842069a(param_1 + 0xf0,param_1 + 0x108,param_2,param_2 + 0x18);
  if (local_e9 == '\0') {
    *(undefined1 *)(param_1 + 0xe8) = 0;
  }
  else {
    *(double *)(param_1 + 0x178) = local_d8;
    *(double *)(param_1 + 0x168) = local_e8;
    *(double *)(param_1 + 0x170) = dStack_e0;
    *(double *)(param_1 + 0x150) = local_e8;
    *(double *)(param_1 + 0x158) = dStack_e0;
    *(double *)(param_1 + 0x160) = local_d8;
    if (*(longlong *)(param_1 + 0x10) == 0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = *(longlong **)(param_1 + 0x18);
    }
    (**(code **)(*plVar6 + 0x10))(plVar6,&local_108);
    dVar8 = *(double *)(param_1 + 0x160) - local_f8;
    local_130 = local_100;
    dVar9 = *(double *)(param_1 + 0x158) - local_100;
    dVar4 = *(double *)(param_1 + 0x150) - local_108;
    dVar1 = *(double *)(param_1 + 0x120);
    dVar2 = *(double *)(param_1 + 0x128);
    dVar3 = *(double *)(param_1 + 0x130);
    uVar11 = 0x3ff00000;
    if (*(char *)(param_1 + 0x58) != '\0') {
      uVar11 = 0xbff00000;
    }
    uVar7 = -(ulonglong)(dVar8 * dVar3 + dVar4 * dVar1 + dVar9 * dVar2 < 0.0);
    dVar10 = (double)(~uVar7 & 0x3ff0000000000000 |
                     (ulonglong)((uint)(uVar7 >> 0x20) & uVar11) << 0x20);
    if (*(char *)(param_1 + 0x59) != '\0') {
      dVar10 = -dVar10;
    }
    *(double *)(param_1 + 0x1a0) = dVar10;
    local_120 = *(double *)(param_1 + 0x138);
    local_128 = *(double *)(param_1 + 0x140);
    local_138 = *(double *)(param_1 + 0x148);
    uVar7 = -(ulonglong)(dVar8 * local_138 + dVar4 * local_120 + dVar9 * local_128 < 0.0);
    dVar9 = (double)(~uVar7 & 0x3ff0000000000000 |
                    (ulonglong)(uVar11 & (uint)(uVar7 >> 0x20)) << 0x20);
    if (*(char *)(param_1 + 0x5a) != '\0') {
      dVar9 = -dVar9;
    }
    *(double *)(param_1 + 0x1a8) = dVar9;
    dStack_e0 = dStack_e0 - *(double *)(param_1 + 0xf8);
    local_e8 = local_e8 - *(double *)(param_1 + 0xf0);
    local_d8 = local_d8 - *(double *)(param_1 + 0x100);
    dVar8 = local_d8 * dVar3 + local_e8 * dVar1 + dVar2 * dStack_e0;
    dVar4 = local_d8 * local_138 + local_e8 * local_120 + dStack_e0 * local_128;
    local_f8 = local_f8 - *(double *)(param_1 + 0x100);
    local_100 = local_100 - *(double *)(param_1 + 0xf8);
    local_108 = local_108 - *(double *)(param_1 + 0xf0);
    *(double *)(param_1 + 0x1d8) =
         dVar8 - (dVar3 * local_f8 + dVar1 * local_108 + dVar2 * local_100);
    *(double *)(param_1 + 0x1e0) =
         dVar4 - (local_f8 * local_138 + local_108 * local_120 + local_100 * local_128);
    *(double *)(param_1 + 0x180) = dVar10 * dVar8;
    *(double *)(param_1 + 0x188) = dVar9 * dVar4;
    *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_1 + 0x180);
    *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_1 + 0x188);
    if (*(longlong *)(param_1 + 0x20) == 0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = *(longlong **)(param_1 + 0x28);
    }
    (**(code **)(*plVar6 + 0x10))(plVar6,&local_118);
    *(undefined8 *)(param_1 + 0x1c8) = local_118;
    *(undefined8 *)(param_1 + 0x1d0) = uStack_110;
    if (*(longlong *)(param_1 + 0x20) == 0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = *(longlong **)(param_1 + 0x28);
    }
    (**(code **)(*plVar6 + 0x18))();
    *(undefined1 *)(param_1 + 0xe8) = 1;
    if ((*(longlong *)(param_1 + 0x40) != 0) && (*(longlong **)(param_1 + 0x48) != (longlong *)0x0))
    {
      (**(code **)(**(longlong **)(param_1 + 0x48) + 0x10))();
    }
    if ((*(longlong *)(param_1 + 0x30) != 0) &&
       (plVar6 = *(longlong **)(param_1 + 0x38), plVar6 != (longlong *)0x0)) {
      (**(code **)(*plVar6 + 0x20))(plVar6,*(undefined1 *)(param_1 + 0xe8));
    }
  }
  if ((local_d0 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148438f20 FUN_148438f20 body=856 status=ok
// SIG undefined FUN_148438f20(void)

void FUN_148438f20(longlong param_1,longlong param_2)

{
  code *pcVar1;
  double dVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_d8 [32];
  double *local_b8;
  double *local_b0;
  longlong local_a0;
  double local_98;
  double local_90;
  double local_88;
  double dStack_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(char *)(param_1 + 0xe8) != '\x01') goto LAB_148439143;
  pcVar1 = *(code **)(param_1 + 0x68);
  plVar5 = (longlong *)(param_1 + 0x88);
  if (*(longlong **)(param_1 + 0x78) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x78);
  }
  local_a0 = param_2;
  uVar4 = (**(code **)(*plVar5 + 8))();
  cVar3 = (*pcVar1)(uVar4);
  if (cVar3 == '\0') {
LAB_148439191:
    local_b0 = &local_88;
    local_b8 = &local_98;
    FUN_14842069a(param_1 + 0xf0,param_1 + 0x108,param_2,param_2 + 0x18);
    if (local_98._0_1_ == '\0') goto LAB_148439143;
    *(double *)(param_1 + 0x178) = local_78;
    *(double *)(param_1 + 0x168) = local_88;
    *(double *)(param_1 + 0x170) = dStack_80;
    dVar2 = *(double *)(param_1 + 0x178) - *(double *)(param_1 + 0x100);
    dVar7 = *(double *)(param_1 + 0x170) - *(double *)(param_1 + 0xf8);
    dVar6 = *(double *)(param_1 + 0x168) - *(double *)(param_1 + 0xf0);
    dVar8 = (*(double *)(param_1 + 0x130) * dVar2 +
            *(double *)(param_1 + 0x120) * dVar6 + *(double *)(param_1 + 0x128) * dVar7) *
            *(double *)(param_1 + 0x1a0);
    *(double *)(param_1 + 400) = dVar8;
    dVar2 = (dVar2 * *(double *)(param_1 + 0x148) +
            dVar6 * *(double *)(param_1 + 0x138) + dVar7 * *(double *)(param_1 + 0x140)) *
            *(double *)(param_1 + 0x1a8);
  }
  else {
    pcVar1 = *(code **)(param_1 + 0xa8);
    plVar5 = (longlong *)(param_1 + 200);
    if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0xb8);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar1)(uVar4,&local_a0,&local_88);
    if (cVar3 == '\0') goto LAB_148439191;
    dVar2 = (local_78 - *(double *)(param_1 + 0x100)) * *(double *)(param_1 + 0x118) +
            (local_88 - *(double *)(param_1 + 0xf0)) * *(double *)(param_1 + 0x108) +
            (dStack_80 - *(double *)(param_1 + 0xf8)) * *(double *)(param_1 + 0x110);
    local_78 = local_78 - *(double *)(param_1 + 0x118) * dVar2;
    dStack_80 = dStack_80 - *(double *)(param_1 + 0x110) * dVar2;
    local_88 = local_88 - dVar2 * *(double *)(param_1 + 0x108);
    *(double *)(param_1 + 0x168) = local_88;
    *(double *)(param_1 + 0x170) = dStack_80;
    *(double *)(param_1 + 0x178) = local_78;
    local_78 = local_78 - *(double *)(param_1 + 0x100);
    dStack_80 = dStack_80 - *(double *)(param_1 + 0xf8);
    local_88 = local_88 - *(double *)(param_1 + 0xf0);
    dVar8 = *(double *)(param_1 + 0x130) * local_78 +
            *(double *)(param_1 + 0x120) * local_88 + *(double *)(param_1 + 0x128) * dStack_80 +
            *(double *)(param_1 + 0x1d8);
    *(double *)(param_1 + 400) = dVar8;
    dVar2 = local_78 * *(double *)(param_1 + 0x148) +
            local_88 * *(double *)(param_1 + 0x138) + dStack_80 * *(double *)(param_1 + 0x140) +
            *(double *)(param_1 + 0x1e0);
  }
  *(double *)(param_1 + 0x198) = dVar2;
  local_90 = (dVar2 - *(double *)(param_1 + 0x188)) + *(double *)(param_1 + 0x1d0);
  local_98 = (dVar8 - *(double *)(param_1 + 0x180)) + *(double *)(param_1 + 0x1c8);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    plVar5 = *(longlong **)(param_1 + 0x28);
  }
  (**(code **)(*plVar5 + 0x20))(SUB84(local_90,0),&local_98);
LAB_148439143:
  if ((local_70 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14843927a FUN_14843927a body=107 status=ok
// SIG undefined FUN_14843927a(void)

void FUN_14843927a(longlong param_1)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0xe8) == '\x01') {
    if (*(longlong *)(param_1 + 0x20) == 0) {
      plVar1 = (longlong *)0x0;
    }
    else {
      plVar1 = *(longlong **)(param_1 + 0x28);
    }
    (**(code **)(*plVar1 + 0x28))();
    if ((*(longlong *)(param_1 + 0x40) != 0) && (*(longlong **)(param_1 + 0x48) != (longlong *)0x0))
    {
      (**(code **)(**(longlong **)(param_1 + 0x48) + 0x18))();
    }
    *(undefined1 *)(param_1 + 0xe8) = 0;
    if ((*(longlong *)(param_1 + 0x30) != 0) &&
       (plVar1 = *(longlong **)(param_1 + 0x38), plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001484392d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x20))(plVar1,0);
      return;
    }
  }
  return;
}


