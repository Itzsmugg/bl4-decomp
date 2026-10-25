// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1460fab98 FUN_1460fab98 body=523 status=ok
// SIG undefined FUN_1460fab98(void)

void FUN_1460fab98(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
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
  if (DAT_14cb8b3d8 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb8b3d8,0,0,4);
  }
  uVar3 = DAT_14cb8b3e0;
  uVar2 = local_50;
  if (DAT_14cb8b3e0 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb8b3d0,0,DAT_14cb8b3e0,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb8b3d8;
        if (DAT_14cb8b3d8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8b3d0;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb8b3e0 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb8b3a8;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb8b3c0 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb8b398;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cb8b3e0 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb8b3d8;
        if (DAT_14cb8b3d8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8b3d0;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb8b3e0 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb8b3d8;
        if (DAT_14cb8b3d8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8b3d0;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb8b3e0 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
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



// FUNCTION 1460fada4 FUN_1460fada4 body=507 status=ok
// SIG undefined FUN_1460fada4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460fada4(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb8b5c0 = 0;
  FUN_1446ddc76(&DAT_14cb8b5c4,"skill_state_condition",1);
  _DAT_14cb8b5d0 = 0;
  _DAT_14cb8b5d8 = 0;
  _DAT_14cb8b5e0 = 0;
  DAT_14cb8b5e8 = (void *)0x0;
  _DAT_14cb8b5f0 = 0;
  _DAT_14cb8b5f8 = FUN_148986882;
  DAT_14cb8b600 = *param_1;
  DAT_14cb8b610 = param_1[2];
  param_1[2] = 0;
  DAT_14cb8b620._0_4_ = (undefined4)param_1[4];
  DAT_14cb8b620._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb8b628 = (undefined4)param_1[5];
  uRam000000014cb8b62c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb8b630 = (undefined4)param_1[6];
  uRam000000014cb8b634 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb8b638 = (undefined4)param_1[7];
  uRam000000014cb8b63c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb8b600 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb8b5d0 = 0;
  _DAT_14cb8b5d8 = local_68;
  _DAT_14cb8b5e0 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb8b5f0 = CONCAT44(DAT_14cb8b5f4,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb8b5f4 == 0) {
    _DAT_14cb8b5f0 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb8b5e8,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb8b5e8,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb8b5c0) && ((DAT_14cb8b548 == (int *)0x0 || (*DAT_14cb8b548 < DAT_14cb8b5c0)))) {
    DAT_14cb8b548 = &DAT_14cb8b5c0;
  }
  FUN_1460fafa0();
  local_30 = &local_70;
  local_70 = &DAT_14cb8b5c0;
  local_38 = &DAT_14cb8b5c4;
  FUN_1460fb03a(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460fafa0 FUN_1460fafa0 body=153 status=ok
// SIG undefined FUN_1460fafa0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460fafa0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb8b5a0) {
    FUN_144b3d300(&DAT_14cb8b5a0);
    if (DAT_14cb8b5a0 == -1) {
      DAT_14cb8b570 = 0;
      DAT_14cb8b578 = 0;
      DAT_14cb8b550 = 0;
      _DAT_14cb8b558 = 0;
      _DAT_14cb8b57c = 0xffffffff00000080;
      DAT_14cb8b584 = 0;
      DAT_14cb8b590 = 0;
      DAT_14cb8b598 = 0;
      atexit(FUN_143e35272);
      _Init_thread_footer(&DAT_14cb8b5a0);
      return;
    }
  }
  return;
}



// FUNCTION 1460fb03a FUN_1460fb03a body=338 status=ok
// SIG undefined FUN_1460fb03a(void)

undefined4 * FUN_1460fb03a(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1460fb220(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_1460fb18e(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb8b558 - DAT_14cb8b584;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb8b598)) {
      uVar10 = DAT_14cb8b598 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb8b590;
      if (DAT_14cb8b590 == (undefined *)0x0) {
        puVar7 = &DAT_14cb8b588;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb8b598 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb8b590;
      if (DAT_14cb8b590 == (undefined *)0x0) {
        puVar7 = &DAT_14cb8b588;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb8b598 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb8b598 = iVar9;
      FUN_1460fb32e();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460fb18e FUN_1460fb18e body=145 status=ok
// SIG undefined FUN_1460fb18e(void)

undefined8 FUN_1460fb18e(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb8b558 - DAT_14cb8b584 != 1) && (DAT_14cb8b558 != DAT_14cb8b584)) {
    puVar6 = &DAT_14cb8b588;
    if (DAT_14cb8b590 != (undefined *)0x0) {
      puVar6 = DAT_14cb8b590;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb8b598 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb8b550 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d9a3b8(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1460fb220 FUN_1460fb220 body=270 status=ok
// SIG undefined FUN_1460fb220(void)

int * FUN_1460fb220(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb8b580;
  iVar3 = DAT_14cb8b558;
  if (DAT_14cb8b584 == 0) {
    iVar2 = DAT_14cb8b558 + 1;
    bVar7 = DAT_14cb8b55c == DAT_14cb8b558;
    DAT_14cb8b558 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb8b550,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb8b560,1);
    puVar4 = DAT_14cb8b570;
    if (DAT_14cb8b570 == (undefined *)0x0) {
      puVar4 = &DAT_14cb8b560;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14cb8b580;
    DAT_14cb8b580 = *(int *)(DAT_14cb8b550 + 4 + lVar6 * 0x18);
    DAT_14cb8b584 = DAT_14cb8b584 + -1;
    if (DAT_14cb8b584 != 0) {
      *(undefined4 *)(DAT_14cb8b550 + (longlong)DAT_14cb8b580 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb8b560;
  if (DAT_14cb8b570 != (undefined *)0x0) {
    puVar4 = DAT_14cb8b570;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb8b550;
  return param_1;
}



// FUNCTION 1460fb32e FUN_1460fb32e body=523 status=ok
// SIG undefined FUN_1460fb32e(void)

void FUN_1460fb32e(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
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
  if (DAT_14cb8b590 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb8b590,0,0,4);
  }
  uVar3 = DAT_14cb8b598;
  uVar2 = local_50;
  if (DAT_14cb8b598 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb8b588,0,DAT_14cb8b598,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb8b590;
        if (DAT_14cb8b590 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8b588;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb8b598 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb8b560;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb8b578 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb8b550;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cb8b598 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb8b590;
        if (DAT_14cb8b590 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8b588;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb8b598 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb8b590;
        if (DAT_14cb8b590 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8b588;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb8b598 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
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



// FUNCTION 1460fb53a FUN_1460fb53a body=507 status=ok
// SIG undefined FUN_1460fb53a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460fb53a(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb8b6b0 = 0;
  FUN_1446ddc76(&DAT_14cb8b6b4,"skill_state",1);
  _DAT_14cb8b6c0 = 0;
  _DAT_14cb8b6c8 = 0;
  _DAT_14cb8b6d0 = 0;
  DAT_14cb8b6d8 = (void *)0x0;
  _DAT_14cb8b6e0 = 0;
  _DAT_14cb8b6e8 = FUN_1489869d0;
  DAT_14cb8b6f0 = *param_1;
  DAT_14cb8b700 = param_1[2];
  param_1[2] = 0;
  DAT_14cb8b710._0_4_ = (undefined4)param_1[4];
  DAT_14cb8b710._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb8b718 = (undefined4)param_1[5];
  uRam000000014cb8b71c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb8b720 = (undefined4)param_1[6];
  uRam000000014cb8b724 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb8b728 = (undefined4)param_1[7];
  uRam000000014cb8b72c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb8b6f0 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb8b6c0 = 0;
  _DAT_14cb8b6c8 = local_68;
  _DAT_14cb8b6d0 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb8b6e0 = CONCAT44(DAT_14cb8b6e4,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb8b6e4 == 0) {
    _DAT_14cb8b6e0 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb8b6d8,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb8b6d8,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb8b6b0) && ((DAT_14cb8b640 == (int *)0x0 || (*DAT_14cb8b640 < DAT_14cb8b6b0)))) {
    DAT_14cb8b640 = &DAT_14cb8b6b0;
  }
  FUN_1460fb736();
  local_30 = &local_70;
  local_70 = &DAT_14cb8b6b0;
  local_38 = &DAT_14cb8b6b4;
  FUN_1460fb7d0(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460fb736 FUN_1460fb736 body=153 status=ok
// SIG undefined FUN_1460fb736(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460fb736(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb8b698) {
    FUN_144b3d300(&DAT_14cb8b698);
    if (DAT_14cb8b698 == -1) {
      DAT_14cb8b668 = 0;
      DAT_14cb8b670 = 0;
      DAT_14cb8b648 = 0;
      _DAT_14cb8b650 = 0;
      _DAT_14cb8b674 = 0xffffffff00000080;
      DAT_14cb8b67c = 0;
      DAT_14cb8b688 = 0;
      DAT_14cb8b690 = 0;
      atexit(FUN_143e352a0);
      _Init_thread_footer(&DAT_14cb8b698);
      return;
    }
  }
  return;
}



// FUNCTION 1460fb7d0 FUN_1460fb7d0 body=338 status=ok
// SIG undefined FUN_1460fb7d0(void)

undefined4 * FUN_1460fb7d0(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1460fb9b6(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_1460fb924(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb8b650 - DAT_14cb8b67c;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb8b690)) {
      uVar10 = DAT_14cb8b690 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb8b688;
      if (DAT_14cb8b688 == (undefined *)0x0) {
        puVar7 = &DAT_14cb8b680;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb8b690 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb8b688;
      if (DAT_14cb8b688 == (undefined *)0x0) {
        puVar7 = &DAT_14cb8b680;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb8b690 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb8b690 = iVar9;
      FUN_1460fbac4();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460fb924 FUN_1460fb924 body=145 status=ok
// SIG undefined FUN_1460fb924(void)

undefined8 FUN_1460fb924(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb8b650 - DAT_14cb8b67c != 1) && (DAT_14cb8b650 != DAT_14cb8b67c)) {
    puVar6 = &DAT_14cb8b680;
    if (DAT_14cb8b688 != (undefined *)0x0) {
      puVar6 = DAT_14cb8b688;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb8b690 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb8b648 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d9a5a4(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1460fb9b6 FUN_1460fb9b6 body=270 status=ok
// SIG undefined FUN_1460fb9b6(void)

int * FUN_1460fb9b6(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb8b678;
  iVar3 = DAT_14cb8b650;
  if (DAT_14cb8b67c == 0) {
    iVar2 = DAT_14cb8b650 + 1;
    bVar7 = DAT_14cb8b654 == DAT_14cb8b650;
    DAT_14cb8b650 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb8b648,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb8b658,1);
    puVar4 = DAT_14cb8b668;
    if (DAT_14cb8b668 == (undefined *)0x0) {
      puVar4 = &DAT_14cb8b658;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14cb8b678;
    DAT_14cb8b678 = *(int *)(DAT_14cb8b648 + 4 + lVar6 * 0x18);
    DAT_14cb8b67c = DAT_14cb8b67c + -1;
    if (DAT_14cb8b67c != 0) {
      *(undefined4 *)(DAT_14cb8b648 + (longlong)DAT_14cb8b678 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb8b658;
  if (DAT_14cb8b668 != (undefined *)0x0) {
    puVar4 = DAT_14cb8b668;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb8b648;
  return param_1;
}



// FUNCTION 1460fbac4 FUN_1460fbac4 body=523 status=ok
// SIG undefined FUN_1460fbac4(void)

void FUN_1460fbac4(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
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
  if (DAT_14cb8b688 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb8b688,0,0,4);
  }
  uVar3 = DAT_14cb8b690;
  uVar2 = local_50;
  if (DAT_14cb8b690 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb8b680,0,DAT_14cb8b690,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb8b688;
        if (DAT_14cb8b688 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8b680;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb8b690 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb8b658;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb8b670 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb8b648;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cb8b690 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb8b688;
        if (DAT_14cb8b688 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8b680;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb8b690 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb8b688;
        if (DAT_14cb8b688 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8b680;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb8b690 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
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



// FUNCTION 1460fbcd0 FUN_1460fbcd0 body=507 status=ok
// SIG undefined FUN_1460fbcd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460fbcd0(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb8b7d0 = 0;
  FUN_1446ddc76(&DAT_14cb8b7d4,"skill_mresource_group",1);
  _DAT_14cb8b7e0 = 0;
  _DAT_14cb8b7e8 = 0;
  _DAT_14cb8b7f0 = 0;
  DAT_14cb8b7f8 = (void *)0x0;
  _DAT_14cb8b800 = 0;
  _DAT_14cb8b808 = FUN_148987b44;
  DAT_14cb8b810 = *param_1;
  DAT_14cb8b820 = param_1[2];
  param_1[2] = 0;
  DAT_14cb8b830._0_4_ = (undefined4)param_1[4];
  DAT_14cb8b830._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb8b838 = (undefined4)param_1[5];
  uRam000000014cb8b83c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb8b840 = (undefined4)param_1[6];
  uRam000000014cb8b844 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb8b848 = (undefined4)param_1[7];
  uRam000000014cb8b84c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb8b810 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb8b7e0 = 0;
  _DAT_14cb8b7e8 = local_68;
  _DAT_14cb8b7f0 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb8b800 = CONCAT44(DAT_14cb8b804,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb8b804 == 0) {
    _DAT_14cb8b800 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb8b7f8,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb8b7f8,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb8b7d0) && ((DAT_14cb8b758 == (int *)0x0 || (*DAT_14cb8b758 < DAT_14cb8b7d0)))) {
    DAT_14cb8b758 = &DAT_14cb8b7d0;
  }
  FUN_1460fbecc();
  local_30 = &local_70;
  local_70 = &DAT_14cb8b7d0;
  local_38 = &DAT_14cb8b7d4;
  FUN_1460fbf66(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460fbecc FUN_1460fbecc body=153 status=ok
// SIG undefined FUN_1460fbecc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460fbecc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb8b7b0) {
    FUN_144b3d300(&DAT_14cb8b7b0);
    if (DAT_14cb8b7b0 == -1) {
      DAT_14cb8b780 = 0;
      DAT_14cb8b788 = 0;
      DAT_14cb8b760 = 0;
      _DAT_14cb8b768 = 0;
      _DAT_14cb8b78c = 0xffffffff00000080;
      DAT_14cb8b794 = 0;
      DAT_14cb8b7a0 = 0;
      DAT_14cb8b7a8 = 0;
      atexit(FUN_143e35f92);
      _Init_thread_footer(&DAT_14cb8b7b0);
      return;
    }
  }
  return;
}



// FUNCTION 1460fbf66 FUN_1460fbf66 body=338 status=ok
// SIG undefined FUN_1460fbf66(void)

undefined4 * FUN_1460fbf66(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1460fc14c(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_1460fc0ba(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb8b768 - DAT_14cb8b794;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb8b7a8)) {
      uVar10 = DAT_14cb8b7a8 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb8b7a0;
      if (DAT_14cb8b7a0 == (undefined *)0x0) {
        puVar7 = &DAT_14cb8b798;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb8b7a8 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb8b7a0;
      if (DAT_14cb8b7a0 == (undefined *)0x0) {
        puVar7 = &DAT_14cb8b798;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb8b7a8 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb8b7a8 = iVar9;
      FUN_1460fc25a();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460fc0ba FUN_1460fc0ba body=145 status=ok
// SIG undefined FUN_1460fc0ba(void)

undefined8 FUN_1460fc0ba(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb8b768 - DAT_14cb8b794 != 1) && (DAT_14cb8b768 != DAT_14cb8b794)) {
    puVar6 = &DAT_14cb8b798;
    if (DAT_14cb8b7a0 != (undefined *)0x0) {
      puVar6 = DAT_14cb8b7a0;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb8b7a8 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb8b760 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d9a790(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1460fc14c FUN_1460fc14c body=270 status=ok
// SIG undefined FUN_1460fc14c(void)

int * FUN_1460fc14c(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb8b790;
  iVar3 = DAT_14cb8b768;
  if (DAT_14cb8b794 == 0) {
    iVar2 = DAT_14cb8b768 + 1;
    bVar7 = DAT_14cb8b76c == DAT_14cb8b768;
    DAT_14cb8b768 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb8b760,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb8b770,1);
    puVar4 = DAT_14cb8b780;
    if (DAT_14cb8b780 == (undefined *)0x0) {
      puVar4 = &DAT_14cb8b770;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14cb8b790;
    DAT_14cb8b790 = *(int *)(DAT_14cb8b760 + 4 + lVar6 * 0x18);
    DAT_14cb8b794 = DAT_14cb8b794 + -1;
    if (DAT_14cb8b794 != 0) {
      *(undefined4 *)(DAT_14cb8b760 + (longlong)DAT_14cb8b790 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb8b770;
  if (DAT_14cb8b780 != (undefined *)0x0) {
    puVar4 = DAT_14cb8b780;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb8b760;
  return param_1;
}



// FUNCTION 1460fc25a FUN_1460fc25a body=523 status=ok
// SIG undefined FUN_1460fc25a(void)

void FUN_1460fc25a(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
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
  if (DAT_14cb8b7a0 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb8b7a0,0,0,4);
  }
  uVar3 = DAT_14cb8b7a8;
  uVar2 = local_50;
  if (DAT_14cb8b7a8 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb8b798,0,DAT_14cb8b7a8,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb8b7a0;
        if (DAT_14cb8b7a0 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8b798;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb8b7a8 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb8b770;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb8b788 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb8b760;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cb8b7a8 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb8b7a0;
        if (DAT_14cb8b7a0 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8b798;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb8b7a8 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb8b7a0;
        if (DAT_14cb8b7a0 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8b798;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb8b7a8 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
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



// FUNCTION 1460fc466 FUN_1460fc466 body=507 status=ok
// SIG undefined FUN_1460fc466(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460fc466(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb8ba50 = 0;
  FUN_1446ddc76(&DAT_14cb8ba54,"skill_target_list",1);
  _DAT_14cb8ba60 = 0;
  _DAT_14cb8ba68 = 0;
  _DAT_14cb8ba70 = 0;
  DAT_14cb8ba78 = (void *)0x0;
  _DAT_14cb8ba80 = 0;
  _DAT_14cb8ba88 = FUN_14899132c;
  DAT_14cb8ba90 = *param_1;
  DAT_14cb8baa0 = param_1[2];
  param_1[2] = 0;
  DAT_14cb8bab0._0_4_ = (undefined4)param_1[4];
  DAT_14cb8bab0._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb8bab8 = (undefined4)param_1[5];
  uRam000000014cb8babc = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb8bac0 = (undefined4)param_1[6];
  uRam000000014cb8bac4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb8bac8 = (undefined4)param_1[7];
  uRam000000014cb8bacc = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb8ba90 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb8ba60 = 0;
  _DAT_14cb8ba68 = local_68;
  _DAT_14cb8ba70 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb8ba80 = CONCAT44(DAT_14cb8ba84,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb8ba84 == 0) {
    _DAT_14cb8ba80 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb8ba78,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb8ba78,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb8ba50) && ((DAT_14cb8b9e0 == (int *)0x0 || (*DAT_14cb8b9e0 < DAT_14cb8ba50)))) {
    DAT_14cb8b9e0 = &DAT_14cb8ba50;
  }
  FUN_1460fc662();
  local_30 = &local_70;
  local_70 = &DAT_14cb8ba50;
  local_38 = &DAT_14cb8ba54;
  FUN_1460fc6fc(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460fc662 FUN_1460fc662 body=153 status=ok
// SIG undefined FUN_1460fc662(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460fc662(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb8ba38) {
    FUN_144b3d300(&DAT_14cb8ba38);
    if (DAT_14cb8ba38 == -1) {
      DAT_14cb8ba08 = 0;
      DAT_14cb8ba10 = 0;
      DAT_14cb8b9e8 = 0;
      _DAT_14cb8b9f0 = 0;
      _DAT_14cb8ba14 = 0xffffffff00000080;
      DAT_14cb8ba1c = 0;
      DAT_14cb8ba28 = 0;
      DAT_14cb8ba30 = 0;
      atexit(FUN_143e3bb96);
      _Init_thread_footer(&DAT_14cb8ba38);
      return;
    }
  }
  return;
}



// FUNCTION 1460fc6fc FUN_1460fc6fc body=338 status=ok
// SIG undefined FUN_1460fc6fc(void)

undefined4 * FUN_1460fc6fc(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1460fc8e2(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_1460fc850(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb8b9f0 - DAT_14cb8ba1c;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb8ba30)) {
      uVar10 = DAT_14cb8ba30 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb8ba28;
      if (DAT_14cb8ba28 == (undefined *)0x0) {
        puVar7 = &DAT_14cb8ba20;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb8ba30 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb8ba28;
      if (DAT_14cb8ba28 == (undefined *)0x0) {
        puVar7 = &DAT_14cb8ba20;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb8ba30 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb8ba30 = iVar9;
      FUN_1460fc9f0();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460fc850 FUN_1460fc850 body=145 status=ok
// SIG undefined FUN_1460fc850(void)

undefined8 FUN_1460fc850(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb8b9f0 - DAT_14cb8ba1c != 1) && (DAT_14cb8b9f0 != DAT_14cb8ba1c)) {
    puVar6 = &DAT_14cb8ba20;
    if (DAT_14cb8ba28 != (undefined *)0x0) {
      puVar6 = DAT_14cb8ba28;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb8ba30 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb8b9e8 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d9a97c(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1460fc8e2 FUN_1460fc8e2 body=270 status=ok
// SIG undefined FUN_1460fc8e2(void)

int * FUN_1460fc8e2(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb8ba18;
  iVar3 = DAT_14cb8b9f0;
  if (DAT_14cb8ba1c == 0) {
    iVar2 = DAT_14cb8b9f0 + 1;
    bVar7 = DAT_14cb8b9f4 == DAT_14cb8b9f0;
    DAT_14cb8b9f0 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb8b9e8,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb8b9f8,1);
    puVar4 = DAT_14cb8ba08;
    if (DAT_14cb8ba08 == (undefined *)0x0) {
      puVar4 = &DAT_14cb8b9f8;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14cb8ba18;
    DAT_14cb8ba18 = *(int *)(DAT_14cb8b9e8 + 4 + lVar6 * 0x18);
    DAT_14cb8ba1c = DAT_14cb8ba1c + -1;
    if (DAT_14cb8ba1c != 0) {
      *(undefined4 *)(DAT_14cb8b9e8 + (longlong)DAT_14cb8ba18 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb8b9f8;
  if (DAT_14cb8ba08 != (undefined *)0x0) {
    puVar4 = DAT_14cb8ba08;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb8b9e8;
  return param_1;
}



// FUNCTION 1460fc9f0 FUN_1460fc9f0 body=523 status=ok
// SIG undefined FUN_1460fc9f0(void)

void FUN_1460fc9f0(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
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
  if (DAT_14cb8ba28 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb8ba28,0,0,4);
  }
  uVar3 = DAT_14cb8ba30;
  uVar2 = local_50;
  if (DAT_14cb8ba30 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb8ba20,0,DAT_14cb8ba30,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb8ba28;
        if (DAT_14cb8ba28 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8ba20;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb8ba30 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb8b9f8;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb8ba10 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb8b9e8;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cb8ba30 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb8ba28;
        if (DAT_14cb8ba28 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8ba20;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb8ba30 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb8ba28;
        if (DAT_14cb8ba28 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8ba20;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb8ba30 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
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



// FUNCTION 1460fcbfc FUN_1460fcbfc body=507 status=ok
// SIG undefined FUN_1460fcbfc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460fcbfc(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb8bba0 = 0;
  FUN_1446ddc76(&DAT_14cb8bba4,"skill_state_machine",1);
  _DAT_14cb8bbb0 = 0;
  _DAT_14cb8bbb8 = 0;
  _DAT_14cb8bbc0 = 0;
  DAT_14cb8bbc8 = (void *)0x0;
  _DAT_14cb8bbd0 = 0;
  _DAT_14cb8bbd8 = FUN_1489931ae;
  DAT_14cb8bbe0 = *param_1;
  DAT_14cb8bbf0 = param_1[2];
  param_1[2] = 0;
  DAT_14cb8bc00._0_4_ = (undefined4)param_1[4];
  DAT_14cb8bc00._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb8bc08 = (undefined4)param_1[5];
  uRam000000014cb8bc0c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb8bc10 = (undefined4)param_1[6];
  uRam000000014cb8bc14 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb8bc18 = (undefined4)param_1[7];
  uRam000000014cb8bc1c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb8bbe0 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb8bbb0 = 0;
  _DAT_14cb8bbb8 = local_68;
  _DAT_14cb8bbc0 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb8bbd0 = CONCAT44(DAT_14cb8bbd4,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb8bbd4 == 0) {
    _DAT_14cb8bbd0 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb8bbc8,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb8bbc8,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb8bba0) && ((DAT_14cb8bb30 == (int *)0x0 || (*DAT_14cb8bb30 < DAT_14cb8bba0)))) {
    DAT_14cb8bb30 = &DAT_14cb8bba0;
  }
  FUN_1460fcdf8();
  local_30 = &local_70;
  local_70 = &DAT_14cb8bba0;
  local_38 = &DAT_14cb8bba4;
  FUN_1460fce92(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460fcdf8 FUN_1460fcdf8 body=153 status=ok
// SIG undefined FUN_1460fcdf8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460fcdf8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb8bb88) {
    FUN_144b3d300(&DAT_14cb8bb88);
    if (DAT_14cb8bb88 == -1) {
      DAT_14cb8bb58 = 0;
      DAT_14cb8bb60 = 0;
      DAT_14cb8bb38 = 0;
      _DAT_14cb8bb40 = 0;
      _DAT_14cb8bb64 = 0xffffffff00000080;
      DAT_14cb8bb6c = 0;
      DAT_14cb8bb78 = 0;
      DAT_14cb8bb80 = 0;
      atexit(FUN_143e3d580);
      _Init_thread_footer(&DAT_14cb8bb88);
      return;
    }
  }
  return;
}



// FUNCTION 1460fce92 FUN_1460fce92 body=338 status=ok
// SIG undefined FUN_1460fce92(void)

undefined4 * FUN_1460fce92(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1460fd078(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_1460fcfe6(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb8bb40 - DAT_14cb8bb6c;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb8bb80)) {
      uVar10 = DAT_14cb8bb80 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb8bb78;
      if (DAT_14cb8bb78 == (undefined *)0x0) {
        puVar7 = &DAT_14cb8bb70;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb8bb80 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb8bb78;
      if (DAT_14cb8bb78 == (undefined *)0x0) {
        puVar7 = &DAT_14cb8bb70;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb8bb80 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb8bb80 = iVar9;
      FUN_1460fd186();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460fcfe6 FUN_1460fcfe6 body=145 status=ok
// SIG undefined FUN_1460fcfe6(void)

undefined8 FUN_1460fcfe6(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb8bb40 - DAT_14cb8bb6c != 1) && (DAT_14cb8bb40 != DAT_14cb8bb6c)) {
    puVar6 = &DAT_14cb8bb70;
    if (DAT_14cb8bb78 != (undefined *)0x0) {
      puVar6 = DAT_14cb8bb78;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb8bb80 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb8bb38 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d9ab68(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1460fd078 FUN_1460fd078 body=270 status=ok
// SIG undefined FUN_1460fd078(void)

int * FUN_1460fd078(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb8bb68;
  iVar3 = DAT_14cb8bb40;
  if (DAT_14cb8bb6c == 0) {
    iVar2 = DAT_14cb8bb40 + 1;
    bVar7 = DAT_14cb8bb44 == DAT_14cb8bb40;
    DAT_14cb8bb40 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb8bb38,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb8bb48,1);
    puVar4 = DAT_14cb8bb58;
    if (DAT_14cb8bb58 == (undefined *)0x0) {
      puVar4 = &DAT_14cb8bb48;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14cb8bb68;
    DAT_14cb8bb68 = *(int *)(DAT_14cb8bb38 + 4 + lVar6 * 0x18);
    DAT_14cb8bb6c = DAT_14cb8bb6c + -1;
    if (DAT_14cb8bb6c != 0) {
      *(undefined4 *)(DAT_14cb8bb38 + (longlong)DAT_14cb8bb68 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb8bb48;
  if (DAT_14cb8bb58 != (undefined *)0x0) {
    puVar4 = DAT_14cb8bb58;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb8bb38;
  return param_1;
}



// FUNCTION 1460fd186 FUN_1460fd186 body=523 status=ok
// SIG undefined FUN_1460fd186(void)

void FUN_1460fd186(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
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
  if (DAT_14cb8bb78 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb8bb78,0,0,4);
  }
  uVar3 = DAT_14cb8bb80;
  uVar2 = local_50;
  if (DAT_14cb8bb80 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb8bb70,0,DAT_14cb8bb80,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb8bb78;
        if (DAT_14cb8bb78 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8bb70;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb8bb80 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb8bb48;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb8bb60 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb8bb38;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cb8bb80 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb8bb78;
        if (DAT_14cb8bb78 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8bb70;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb8bb80 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb8bb78;
        if (DAT_14cb8bb78 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8bb70;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb8bb80 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
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



// FUNCTION 1460fd392 FUN_1460fd392 body=507 status=ok
// SIG undefined FUN_1460fd392(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460fd392(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb8bc90 = 0;
  FUN_1446ddc76(&DAT_14cb8bc94,"skill_state_machine_register",1);
  _DAT_14cb8bca0 = 0;
  _DAT_14cb8bca8 = 0;
  _DAT_14cb8bcb0 = 0;
  DAT_14cb8bcb8 = (void *)0x0;
  _DAT_14cb8bcc0 = 0;
  _DAT_14cb8bcc8 = FUN_148993238;
  DAT_14cb8bcd0 = *param_1;
  DAT_14cb8bce0 = param_1[2];
  param_1[2] = 0;
  DAT_14cb8bcf0._0_4_ = (undefined4)param_1[4];
  DAT_14cb8bcf0._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb8bcf8 = (undefined4)param_1[5];
  uRam000000014cb8bcfc = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb8bd00 = (undefined4)param_1[6];
  uRam000000014cb8bd04 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb8bd08 = (undefined4)param_1[7];
  uRam000000014cb8bd0c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb8bcd0 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb8bca0 = 0;
  _DAT_14cb8bca8 = local_68;
  _DAT_14cb8bcb0 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb8bcc0 = CONCAT44(DAT_14cb8bcc4,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb8bcc4 == 0) {
    _DAT_14cb8bcc0 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb8bcb8,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb8bcb8,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb8bc90) && ((DAT_14cb8bc20 == (int *)0x0 || (*DAT_14cb8bc20 < DAT_14cb8bc90)))) {
    DAT_14cb8bc20 = &DAT_14cb8bc90;
  }
  FUN_1460fd58e();
  local_30 = &local_70;
  local_70 = &DAT_14cb8bc90;
  local_38 = &DAT_14cb8bc94;
  FUN_1460fd628(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460fd58e FUN_1460fd58e body=153 status=ok
// SIG undefined FUN_1460fd58e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460fd58e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb8bc78) {
    FUN_144b3d300(&DAT_14cb8bc78);
    if (DAT_14cb8bc78 == -1) {
      DAT_14cb8bc48 = 0;
      DAT_14cb8bc50 = 0;
      DAT_14cb8bc28 = 0;
      _DAT_14cb8bc30 = 0;
      _DAT_14cb8bc54 = 0xffffffff00000080;
      DAT_14cb8bc5c = 0;
      DAT_14cb8bc68 = 0;
      DAT_14cb8bc70 = 0;
      atexit(FUN_143e3d5ae);
      _Init_thread_footer(&DAT_14cb8bc78);
      return;
    }
  }
  return;
}



// FUNCTION 1460fd628 FUN_1460fd628 body=338 status=ok
// SIG undefined FUN_1460fd628(void)

undefined4 * FUN_1460fd628(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1460fd80e(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_1460fd77c(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb8bc30 - DAT_14cb8bc5c;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb8bc70)) {
      uVar10 = DAT_14cb8bc70 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb8bc68;
      if (DAT_14cb8bc68 == (undefined *)0x0) {
        puVar7 = &DAT_14cb8bc60;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb8bc70 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb8bc68;
      if (DAT_14cb8bc68 == (undefined *)0x0) {
        puVar7 = &DAT_14cb8bc60;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb8bc70 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb8bc70 = iVar9;
      FUN_1460fd91c();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460fd77c FUN_1460fd77c body=145 status=ok
// SIG undefined FUN_1460fd77c(void)

undefined8 FUN_1460fd77c(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb8bc30 - DAT_14cb8bc5c != 1) && (DAT_14cb8bc30 != DAT_14cb8bc5c)) {
    puVar6 = &DAT_14cb8bc60;
    if (DAT_14cb8bc68 != (undefined *)0x0) {
      puVar6 = DAT_14cb8bc68;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb8bc70 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb8bc28 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d9ad54(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1460fd80e FUN_1460fd80e body=270 status=ok
// SIG undefined FUN_1460fd80e(void)

int * FUN_1460fd80e(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb8bc58;
  iVar3 = DAT_14cb8bc30;
  if (DAT_14cb8bc5c == 0) {
    iVar2 = DAT_14cb8bc30 + 1;
    bVar7 = DAT_14cb8bc34 == DAT_14cb8bc30;
    DAT_14cb8bc30 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb8bc28,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb8bc38,1);
    puVar4 = DAT_14cb8bc48;
    if (DAT_14cb8bc48 == (undefined *)0x0) {
      puVar4 = &DAT_14cb8bc38;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14cb8bc58;
    DAT_14cb8bc58 = *(int *)(DAT_14cb8bc28 + 4 + lVar6 * 0x18);
    DAT_14cb8bc5c = DAT_14cb8bc5c + -1;
    if (DAT_14cb8bc5c != 0) {
      *(undefined4 *)(DAT_14cb8bc28 + (longlong)DAT_14cb8bc58 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb8bc38;
  if (DAT_14cb8bc48 != (undefined *)0x0) {
    puVar4 = DAT_14cb8bc48;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb8bc28;
  return param_1;
}



// FUNCTION 1460fd91c FUN_1460fd91c body=523 status=ok
// SIG undefined FUN_1460fd91c(void)

void FUN_1460fd91c(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
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
  if (DAT_14cb8bc68 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb8bc68,0,0,4);
  }
  uVar3 = DAT_14cb8bc70;
  uVar2 = local_50;
  if (DAT_14cb8bc70 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb8bc60,0,DAT_14cb8bc70,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb8bc68;
        if (DAT_14cb8bc68 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8bc60;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb8bc70 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb8bc38;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb8bc50 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb8bc28;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cb8bc70 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb8bc68;
        if (DAT_14cb8bc68 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8bc60;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb8bc70 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb8bc68;
        if (DAT_14cb8bc68 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8bc60;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb8bc70 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
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



// FUNCTION 1460fdb28 FUN_1460fdb28 body=507 status=ok
// SIG undefined FUN_1460fdb28(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460fdb28(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb8bd80 = 0;
  FUN_1446ddc76(&DAT_14cb8bd84,"skill_state_machine_state",1);
  _DAT_14cb8bd90 = 0;
  _DAT_14cb8bd98 = 0;
  _DAT_14cb8bda0 = 0;
  DAT_14cb8bda8 = (void *)0x0;
  _DAT_14cb8bdb0 = 0;
  _DAT_14cb8bdb8 = FUN_148993284;
  DAT_14cb8bdc0 = *param_1;
  DAT_14cb8bdd0 = param_1[2];
  param_1[2] = 0;
  DAT_14cb8bde0._0_4_ = (undefined4)param_1[4];
  DAT_14cb8bde0._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb8bde8 = (undefined4)param_1[5];
  uRam000000014cb8bdec = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb8bdf0 = (undefined4)param_1[6];
  uRam000000014cb8bdf4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb8bdf8 = (undefined4)param_1[7];
  uRam000000014cb8bdfc = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb8bdc0 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb8bd90 = 0;
  _DAT_14cb8bd98 = local_68;
  _DAT_14cb8bda0 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb8bdb0 = CONCAT44(DAT_14cb8bdb4,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb8bdb4 == 0) {
    _DAT_14cb8bdb0 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb8bda8,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb8bda8,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb8bd80) && ((DAT_14cb8bd10 == (int *)0x0 || (*DAT_14cb8bd10 < DAT_14cb8bd80)))) {
    DAT_14cb8bd10 = &DAT_14cb8bd80;
  }
  FUN_1460fdd24();
  local_30 = &local_70;
  local_70 = &DAT_14cb8bd80;
  local_38 = &DAT_14cb8bd84;
  FUN_1460fddbe(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460fdd24 FUN_1460fdd24 body=153 status=ok
// SIG undefined FUN_1460fdd24(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460fdd24(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb8bd68) {
    FUN_144b3d300(&DAT_14cb8bd68);
    if (DAT_14cb8bd68 == -1) {
      DAT_14cb8bd38 = 0;
      DAT_14cb8bd40 = 0;
      DAT_14cb8bd18 = 0;
      _DAT_14cb8bd20 = 0;
      _DAT_14cb8bd44 = 0xffffffff00000080;
      DAT_14cb8bd4c = 0;
      DAT_14cb8bd58 = 0;
      DAT_14cb8bd60 = 0;
      atexit(FUN_143e3d5dc);
      _Init_thread_footer(&DAT_14cb8bd68);
      return;
    }
  }
  return;
}



// FUNCTION 1460fddbe FUN_1460fddbe body=338 status=ok
// SIG undefined FUN_1460fddbe(void)

undefined4 * FUN_1460fddbe(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1460fdfa4(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_1460fdf12(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb8bd20 - DAT_14cb8bd4c;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb8bd60)) {
      uVar10 = DAT_14cb8bd60 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb8bd58;
      if (DAT_14cb8bd58 == (undefined *)0x0) {
        puVar7 = &DAT_14cb8bd50;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb8bd60 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb8bd58;
      if (DAT_14cb8bd58 == (undefined *)0x0) {
        puVar7 = &DAT_14cb8bd50;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb8bd60 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb8bd60 = iVar9;
      FUN_1460fe0b2();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460fdf12 FUN_1460fdf12 body=145 status=ok
// SIG undefined FUN_1460fdf12(void)

undefined8 FUN_1460fdf12(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb8bd20 - DAT_14cb8bd4c != 1) && (DAT_14cb8bd20 != DAT_14cb8bd4c)) {
    puVar6 = &DAT_14cb8bd50;
    if (DAT_14cb8bd58 != (undefined *)0x0) {
      puVar6 = DAT_14cb8bd58;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb8bd60 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb8bd18 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d9af40(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1460fdfa4 FUN_1460fdfa4 body=270 status=ok
// SIG undefined FUN_1460fdfa4(void)

int * FUN_1460fdfa4(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb8bd48;
  iVar3 = DAT_14cb8bd20;
  if (DAT_14cb8bd4c == 0) {
    iVar2 = DAT_14cb8bd20 + 1;
    bVar7 = DAT_14cb8bd24 == DAT_14cb8bd20;
    DAT_14cb8bd20 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb8bd18,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb8bd28,1);
    puVar4 = DAT_14cb8bd38;
    if (DAT_14cb8bd38 == (undefined *)0x0) {
      puVar4 = &DAT_14cb8bd28;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14cb8bd48;
    DAT_14cb8bd48 = *(int *)(DAT_14cb8bd18 + 4 + lVar6 * 0x18);
    DAT_14cb8bd4c = DAT_14cb8bd4c + -1;
    if (DAT_14cb8bd4c != 0) {
      *(undefined4 *)(DAT_14cb8bd18 + (longlong)DAT_14cb8bd48 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb8bd28;
  if (DAT_14cb8bd38 != (undefined *)0x0) {
    puVar4 = DAT_14cb8bd38;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb8bd18;
  return param_1;
}



// FUNCTION 1460fe0b2 FUN_1460fe0b2 body=523 status=ok
// SIG undefined FUN_1460fe0b2(void)

void FUN_1460fe0b2(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
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
  if (DAT_14cb8bd58 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb8bd58,0,0,4);
  }
  uVar3 = DAT_14cb8bd60;
  uVar2 = local_50;
  if (DAT_14cb8bd60 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb8bd50,0,DAT_14cb8bd60,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb8bd58;
        if (DAT_14cb8bd58 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8bd50;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb8bd60 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb8bd28;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb8bd40 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb8bd18;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cb8bd60 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb8bd58;
        if (DAT_14cb8bd58 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8bd50;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb8bd60 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb8bd58;
        if (DAT_14cb8bd58 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8bd50;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb8bd60 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
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



// FUNCTION 1460fe2be FUN_1460fe2be body=507 status=ok
// SIG undefined FUN_1460fe2be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460fe2be(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb8beb0 = 0;
  FUN_1446ddc76(&DAT_14cb8beb4,"skill_res_strategy",1);
  _DAT_14cb8bec0 = 0;
  _DAT_14cb8bec8 = 0;
  _DAT_14cb8bed0 = 0;
  DAT_14cb8bed8 = (void *)0x0;
  _DAT_14cb8bee0 = 0;
  _DAT_14cb8bee8 = FUN_14899379e;
  DAT_14cb8bef0 = *param_1;
  DAT_14cb8bf00 = param_1[2];
  param_1[2] = 0;
  DAT_14cb8bf10._0_4_ = (undefined4)param_1[4];
  DAT_14cb8bf10._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb8bf18 = (undefined4)param_1[5];
  uRam000000014cb8bf1c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb8bf20 = (undefined4)param_1[6];
  uRam000000014cb8bf24 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb8bf28 = (undefined4)param_1[7];
  uRam000000014cb8bf2c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb8bef0 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb8bec0 = 0;
  _DAT_14cb8bec8 = local_68;
  _DAT_14cb8bed0 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb8bee0 = CONCAT44(DAT_14cb8bee4,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb8bee4 == 0) {
    _DAT_14cb8bee0 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb8bed8,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb8bed8,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb8beb0) && ((DAT_14cb8be40 == (int *)0x0 || (*DAT_14cb8be40 < DAT_14cb8beb0)))) {
    DAT_14cb8be40 = &DAT_14cb8beb0;
  }
  FUN_1460fe4ba();
  local_30 = &local_70;
  local_70 = &DAT_14cb8beb0;
  local_38 = &DAT_14cb8beb4;
  FUN_1460fe554(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460fe4ba FUN_1460fe4ba body=153 status=ok
// SIG undefined FUN_1460fe4ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460fe4ba(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb8be98) {
    FUN_144b3d300(&DAT_14cb8be98);
    if (DAT_14cb8be98 == -1) {
      DAT_14cb8be68 = 0;
      DAT_14cb8be70 = 0;
      DAT_14cb8be48 = 0;
      _DAT_14cb8be50 = 0;
      _DAT_14cb8be74 = 0xffffffff00000080;
      DAT_14cb8be7c = 0;
      DAT_14cb8be88 = 0;
      DAT_14cb8be90 = 0;
      atexit(FUN_143e3d6ae);
      _Init_thread_footer(&DAT_14cb8be98);
      return;
    }
  }
  return;
}



// FUNCTION 1460fe554 FUN_1460fe554 body=338 status=ok
// SIG undefined FUN_1460fe554(void)

undefined4 * FUN_1460fe554(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1460fe73a(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_1460fe6a8(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb8be50 - DAT_14cb8be7c;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb8be90)) {
      uVar10 = DAT_14cb8be90 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb8be88;
      if (DAT_14cb8be88 == (undefined *)0x0) {
        puVar7 = &DAT_14cb8be80;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb8be90 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb8be88;
      if (DAT_14cb8be88 == (undefined *)0x0) {
        puVar7 = &DAT_14cb8be80;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb8be90 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb8be90 = iVar9;
      FUN_1460fe848();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460fe6a8 FUN_1460fe6a8 body=145 status=ok
// SIG undefined FUN_1460fe6a8(void)

undefined8 FUN_1460fe6a8(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb8be50 - DAT_14cb8be7c != 1) && (DAT_14cb8be50 != DAT_14cb8be7c)) {
    puVar6 = &DAT_14cb8be80;
    if (DAT_14cb8be88 != (undefined *)0x0) {
      puVar6 = DAT_14cb8be88;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb8be90 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb8be48 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d9b12c(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1460fe73a FUN_1460fe73a body=270 status=ok
// SIG undefined FUN_1460fe73a(void)

int * FUN_1460fe73a(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb8be78;
  iVar3 = DAT_14cb8be50;
  if (DAT_14cb8be7c == 0) {
    iVar2 = DAT_14cb8be50 + 1;
    bVar7 = DAT_14cb8be54 == DAT_14cb8be50;
    DAT_14cb8be50 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb8be48,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb8be58,1);
    puVar4 = DAT_14cb8be68;
    if (DAT_14cb8be68 == (undefined *)0x0) {
      puVar4 = &DAT_14cb8be58;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14cb8be78;
    DAT_14cb8be78 = *(int *)(DAT_14cb8be48 + 4 + lVar6 * 0x18);
    DAT_14cb8be7c = DAT_14cb8be7c + -1;
    if (DAT_14cb8be7c != 0) {
      *(undefined4 *)(DAT_14cb8be48 + (longlong)DAT_14cb8be78 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb8be58;
  if (DAT_14cb8be68 != (undefined *)0x0) {
    puVar4 = DAT_14cb8be68;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb8be48;
  return param_1;
}



// FUNCTION 1460fe848 FUN_1460fe848 body=523 status=ok
// SIG undefined FUN_1460fe848(void)

void FUN_1460fe848(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
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
  if (DAT_14cb8be88 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb8be88,0,0,4);
  }
  uVar3 = DAT_14cb8be90;
  uVar2 = local_50;
  if (DAT_14cb8be90 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb8be80,0,DAT_14cb8be90,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb8be88;
        if (DAT_14cb8be88 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8be80;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb8be90 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb8be58;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb8be70 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb8be48;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cb8be90 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb8be88;
        if (DAT_14cb8be88 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8be80;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb8be90 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb8be88;
        if (DAT_14cb8be88 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8be80;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb8be90 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
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



// FUNCTION 1460fea54 FUN_1460fea54 body=507 status=ok
// SIG undefined FUN_1460fea54(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460fea54(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb8c450 = 0;
  FUN_1446ddc76(&DAT_14cb8c454,"status_effect_pushevent",1);
  _DAT_14cb8c460 = 0;
  _DAT_14cb8c468 = 0;
  _DAT_14cb8c470 = 0;
  DAT_14cb8c478 = (void *)0x0;
  _DAT_14cb8c480 = 0;
  _DAT_14cb8c488 = FUN_14899e10a;
  DAT_14cb8c490 = *param_1;
  DAT_14cb8c4a0 = param_1[2];
  param_1[2] = 0;
  DAT_14cb8c4b0._0_4_ = (undefined4)param_1[4];
  DAT_14cb8c4b0._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb8c4b8 = (undefined4)param_1[5];
  uRam000000014cb8c4bc = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb8c4c0 = (undefined4)param_1[6];
  uRam000000014cb8c4c4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb8c4c8 = (undefined4)param_1[7];
  uRam000000014cb8c4cc = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb8c490 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb8c460 = 0;
  _DAT_14cb8c468 = local_68;
  _DAT_14cb8c470 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb8c480 = CONCAT44(DAT_14cb8c484,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb8c484 == 0) {
    _DAT_14cb8c480 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb8c478,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb8c478,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb8c450) && ((DAT_14cb8c3e0 == (int *)0x0 || (*DAT_14cb8c3e0 < DAT_14cb8c450)))) {
    DAT_14cb8c3e0 = &DAT_14cb8c450;
  }
  FUN_1460fec50();
  local_30 = &local_70;
  local_70 = &DAT_14cb8c450;
  local_38 = &DAT_14cb8c454;
  FUN_1460fecea(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460fec50 FUN_1460fec50 body=153 status=ok
// SIG undefined FUN_1460fec50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460fec50(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb8c438) {
    FUN_144b3d300(&DAT_14cb8c438);
    if (DAT_14cb8c438 == -1) {
      DAT_14cb8c408 = 0;
      DAT_14cb8c410 = 0;
      DAT_14cb8c3e8 = 0;
      _DAT_14cb8c3f0 = 0;
      _DAT_14cb8c414 = 0xffffffff00000080;
      DAT_14cb8c41c = 0;
      DAT_14cb8c428 = 0;
      DAT_14cb8c430 = 0;
      atexit(FUN_143e47640);
      _Init_thread_footer(&DAT_14cb8c438);
      return;
    }
  }
  return;
}



// FUNCTION 1460fecea FUN_1460fecea body=338 status=ok
// SIG undefined FUN_1460fecea(void)

undefined4 * FUN_1460fecea(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1460feed0(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_1460fee3e(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb8c3f0 - DAT_14cb8c41c;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb8c430)) {
      uVar10 = DAT_14cb8c430 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb8c428;
      if (DAT_14cb8c428 == (undefined *)0x0) {
        puVar7 = &DAT_14cb8c420;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb8c430 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb8c428;
      if (DAT_14cb8c428 == (undefined *)0x0) {
        puVar7 = &DAT_14cb8c420;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb8c430 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb8c430 = iVar9;
      FUN_1460fefde();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460fee3e FUN_1460fee3e body=145 status=ok
// SIG undefined FUN_1460fee3e(void)

undefined8 FUN_1460fee3e(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb8c3f0 - DAT_14cb8c41c != 1) && (DAT_14cb8c3f0 != DAT_14cb8c41c)) {
    puVar6 = &DAT_14cb8c420;
    if (DAT_14cb8c428 != (undefined *)0x0) {
      puVar6 = DAT_14cb8c428;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb8c430 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb8c3e8 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d9b504(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1460feed0 FUN_1460feed0 body=270 status=ok
// SIG undefined FUN_1460feed0(void)

int * FUN_1460feed0(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb8c418;
  iVar3 = DAT_14cb8c3f0;
  if (DAT_14cb8c41c == 0) {
    iVar2 = DAT_14cb8c3f0 + 1;
    bVar7 = DAT_14cb8c3f4 == DAT_14cb8c3f0;
    DAT_14cb8c3f0 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb8c3e8,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb8c3f8,1);
    puVar4 = DAT_14cb8c408;
    if (DAT_14cb8c408 == (undefined *)0x0) {
      puVar4 = &DAT_14cb8c3f8;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14cb8c418;
    DAT_14cb8c418 = *(int *)(DAT_14cb8c3e8 + 4 + lVar6 * 0x18);
    DAT_14cb8c41c = DAT_14cb8c41c + -1;
    if (DAT_14cb8c41c != 0) {
      *(undefined4 *)(DAT_14cb8c3e8 + (longlong)DAT_14cb8c418 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb8c3f8;
  if (DAT_14cb8c408 != (undefined *)0x0) {
    puVar4 = DAT_14cb8c408;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb8c3e8;
  return param_1;
}



// FUNCTION 1460fefde FUN_1460fefde body=523 status=ok
// SIG undefined FUN_1460fefde(void)

void FUN_1460fefde(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
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
  if (DAT_14cb8c428 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb8c428,0,0,4);
  }
  uVar3 = DAT_14cb8c430;
  uVar2 = local_50;
  if (DAT_14cb8c430 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb8c420,0,DAT_14cb8c430,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb8c428;
        if (DAT_14cb8c428 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8c420;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb8c430 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb8c3f8;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb8c410 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb8c3e8;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cb8c430 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb8c428;
        if (DAT_14cb8c428 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8c420;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb8c430 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb8c428;
        if (DAT_14cb8c428 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8c420;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb8c430 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
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



// FUNCTION 1460ff1ea FUN_1460ff1ea body=507 status=ok
// SIG undefined FUN_1460ff1ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ff1ea(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb8c540 = 0;
  FUN_1446ddc76(&DAT_14cb8c544,"status_effect_rule",1);
  _DAT_14cb8c550 = 0;
  _DAT_14cb8c558 = 0;
  _DAT_14cb8c560 = 0;
  DAT_14cb8c568 = (void *)0x0;
  _DAT_14cb8c570 = 0;
  _DAT_14cb8c578 = FUN_14899e246;
  DAT_14cb8c580 = *param_1;
  DAT_14cb8c590 = param_1[2];
  param_1[2] = 0;
  DAT_14cb8c5a0._0_4_ = (undefined4)param_1[4];
  DAT_14cb8c5a0._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb8c5a8 = (undefined4)param_1[5];
  uRam000000014cb8c5ac = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb8c5b0 = (undefined4)param_1[6];
  uRam000000014cb8c5b4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb8c5b8 = (undefined4)param_1[7];
  uRam000000014cb8c5bc = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb8c580 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb8c550 = 0;
  _DAT_14cb8c558 = local_68;
  _DAT_14cb8c560 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb8c570 = CONCAT44(DAT_14cb8c574,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb8c574 == 0) {
    _DAT_14cb8c570 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb8c568,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb8c568,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb8c540) && ((DAT_14cb8c4d0 == (int *)0x0 || (*DAT_14cb8c4d0 < DAT_14cb8c540)))) {
    DAT_14cb8c4d0 = &DAT_14cb8c540;
  }
  FUN_1460ff3e6();
  local_30 = &local_70;
  local_70 = &DAT_14cb8c540;
  local_38 = &DAT_14cb8c544;
  FUN_1460ff480(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460ff3e6 FUN_1460ff3e6 body=153 status=ok
// SIG undefined FUN_1460ff3e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ff3e6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb8c528) {
    FUN_144b3d300(&DAT_14cb8c528);
    if (DAT_14cb8c528 == -1) {
      DAT_14cb8c4f8 = 0;
      DAT_14cb8c500 = 0;
      DAT_14cb8c4d8 = 0;
      _DAT_14cb8c4e0 = 0;
      _DAT_14cb8c504 = 0xffffffff00000080;
      DAT_14cb8c50c = 0;
      DAT_14cb8c518 = 0;
      DAT_14cb8c520 = 0;
      atexit(FUN_143e4766e);
      _Init_thread_footer(&DAT_14cb8c528);
      return;
    }
  }
  return;
}



// FUNCTION 1460ff480 FUN_1460ff480 body=338 status=ok
// SIG undefined FUN_1460ff480(void)

undefined4 * FUN_1460ff480(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1460ff666(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_1460ff5d4(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb8c4e0 - DAT_14cb8c50c;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb8c520)) {
      uVar10 = DAT_14cb8c520 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb8c518;
      if (DAT_14cb8c518 == (undefined *)0x0) {
        puVar7 = &DAT_14cb8c510;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb8c520 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb8c518;
      if (DAT_14cb8c518 == (undefined *)0x0) {
        puVar7 = &DAT_14cb8c510;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb8c520 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb8c520 = iVar9;
      FUN_1460ff774();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460ff5d4 FUN_1460ff5d4 body=145 status=ok
// SIG undefined FUN_1460ff5d4(void)

undefined8 FUN_1460ff5d4(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb8c4e0 - DAT_14cb8c50c != 1) && (DAT_14cb8c4e0 != DAT_14cb8c50c)) {
    puVar6 = &DAT_14cb8c510;
    if (DAT_14cb8c518 != (undefined *)0x0) {
      puVar6 = DAT_14cb8c518;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb8c520 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb8c4d8 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d9b6f0(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1460ff666 FUN_1460ff666 body=270 status=ok
// SIG undefined FUN_1460ff666(void)

int * FUN_1460ff666(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb8c508;
  iVar3 = DAT_14cb8c4e0;
  if (DAT_14cb8c50c == 0) {
    iVar2 = DAT_14cb8c4e0 + 1;
    bVar7 = DAT_14cb8c4e4 == DAT_14cb8c4e0;
    DAT_14cb8c4e0 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb8c4d8,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb8c4e8,1);
    puVar4 = DAT_14cb8c4f8;
    if (DAT_14cb8c4f8 == (undefined *)0x0) {
      puVar4 = &DAT_14cb8c4e8;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14cb8c508;
    DAT_14cb8c508 = *(int *)(DAT_14cb8c4d8 + 4 + lVar6 * 0x18);
    DAT_14cb8c50c = DAT_14cb8c50c + -1;
    if (DAT_14cb8c50c != 0) {
      *(undefined4 *)(DAT_14cb8c4d8 + (longlong)DAT_14cb8c508 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb8c4e8;
  if (DAT_14cb8c4f8 != (undefined *)0x0) {
    puVar4 = DAT_14cb8c4f8;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb8c4d8;
  return param_1;
}



// FUNCTION 1460ff774 FUN_1460ff774 body=523 status=ok
// SIG undefined FUN_1460ff774(void)

void FUN_1460ff774(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
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
  if (DAT_14cb8c518 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb8c518,0,0,4);
  }
  uVar3 = DAT_14cb8c520;
  uVar2 = local_50;
  if (DAT_14cb8c520 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb8c510,0,DAT_14cb8c520,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb8c518;
        if (DAT_14cb8c518 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8c510;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb8c520 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb8c4e8;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb8c500 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb8c4d8;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cb8c520 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb8c518;
        if (DAT_14cb8c518 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8c510;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb8c520 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb8c518;
        if (DAT_14cb8c518 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8c510;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb8c520 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
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



// FUNCTION 1460ff980 FUN_1460ff980 body=507 status=ok
// SIG undefined FUN_1460ff980(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ff980(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb8c630 = 0;
  FUN_1446ddc76(&DAT_14cb8c634,"se_severity_channel",1);
  _DAT_14cb8c640 = 0;
  _DAT_14cb8c648 = 0;
  _DAT_14cb8c650 = 0;
  DAT_14cb8c658 = (void *)0x0;
  _DAT_14cb8c660 = 0;
  _DAT_14cb8c668 = FUN_14899e4ba;
  DAT_14cb8c670 = *param_1;
  DAT_14cb8c680 = param_1[2];
  param_1[2] = 0;
  DAT_14cb8c690._0_4_ = (undefined4)param_1[4];
  DAT_14cb8c690._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb8c698 = (undefined4)param_1[5];
  uRam000000014cb8c69c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb8c6a0 = (undefined4)param_1[6];
  uRam000000014cb8c6a4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb8c6a8 = (undefined4)param_1[7];
  uRam000000014cb8c6ac = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb8c670 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb8c640 = 0;
  _DAT_14cb8c648 = local_68;
  _DAT_14cb8c650 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb8c660 = CONCAT44(DAT_14cb8c664,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb8c664 == 0) {
    _DAT_14cb8c660 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb8c658,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb8c658,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb8c630) && ((DAT_14cb8c5c0 == (int *)0x0 || (*DAT_14cb8c5c0 < DAT_14cb8c630)))) {
    DAT_14cb8c5c0 = &DAT_14cb8c630;
  }
  FUN_1460ffb7c();
  local_30 = &local_70;
  local_70 = &DAT_14cb8c630;
  local_38 = &DAT_14cb8c634;
  FUN_1460ffc16(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460ffb7c FUN_1460ffb7c body=153 status=ok
// SIG undefined FUN_1460ffb7c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ffb7c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb8c618) {
    FUN_144b3d300(&DAT_14cb8c618);
    if (DAT_14cb8c618 == -1) {
      DAT_14cb8c5e8 = 0;
      DAT_14cb8c5f0 = 0;
      DAT_14cb8c5c8 = 0;
      _DAT_14cb8c5d0 = 0;
      _DAT_14cb8c5f4 = 0xffffffff00000080;
      DAT_14cb8c5fc = 0;
      DAT_14cb8c608 = 0;
      DAT_14cb8c610 = 0;
      atexit(FUN_143e4769d);
      _Init_thread_footer(&DAT_14cb8c618);
      return;
    }
  }
  return;
}



// FUNCTION 1460ffc16 FUN_1460ffc16 body=338 status=ok
// SIG undefined FUN_1460ffc16(void)

undefined4 * FUN_1460ffc16(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1460ffdfc(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_1460ffd6a(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb8c5d0 - DAT_14cb8c5fc;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb8c610)) {
      uVar10 = DAT_14cb8c610 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb8c608;
      if (DAT_14cb8c608 == (undefined *)0x0) {
        puVar7 = &DAT_14cb8c600;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb8c610 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb8c608;
      if (DAT_14cb8c608 == (undefined *)0x0) {
        puVar7 = &DAT_14cb8c600;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb8c610 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb8c610 = iVar9;
      FUN_1460fff0a();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460ffd6a FUN_1460ffd6a body=145 status=ok
// SIG undefined FUN_1460ffd6a(void)

undefined8 FUN_1460ffd6a(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb8c5d0 - DAT_14cb8c5fc != 1) && (DAT_14cb8c5d0 != DAT_14cb8c5fc)) {
    puVar6 = &DAT_14cb8c600;
    if (DAT_14cb8c608 != (undefined *)0x0) {
      puVar6 = DAT_14cb8c608;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb8c610 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb8c5c8 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d9b8dc(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1460ffdfc FUN_1460ffdfc body=270 status=ok
// SIG undefined FUN_1460ffdfc(void)

int * FUN_1460ffdfc(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb8c5f8;
  iVar3 = DAT_14cb8c5d0;
  if (DAT_14cb8c5fc == 0) {
    iVar2 = DAT_14cb8c5d0 + 1;
    bVar7 = DAT_14cb8c5d4 == DAT_14cb8c5d0;
    DAT_14cb8c5d0 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb8c5c8,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb8c5d8,1);
    puVar4 = DAT_14cb8c5e8;
    if (DAT_14cb8c5e8 == (undefined *)0x0) {
      puVar4 = &DAT_14cb8c5d8;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14cb8c5f8;
    DAT_14cb8c5f8 = *(int *)(DAT_14cb8c5c8 + 4 + lVar6 * 0x18);
    DAT_14cb8c5fc = DAT_14cb8c5fc + -1;
    if (DAT_14cb8c5fc != 0) {
      *(undefined4 *)(DAT_14cb8c5c8 + (longlong)DAT_14cb8c5f8 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb8c5d8;
  if (DAT_14cb8c5e8 != (undefined *)0x0) {
    puVar4 = DAT_14cb8c5e8;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb8c5c8;
  return param_1;
}



// FUNCTION 1460fff0a FUN_1460fff0a body=523 status=ok
// SIG undefined FUN_1460fff0a(void)

void FUN_1460fff0a(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
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
  if (DAT_14cb8c608 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb8c608,0,0,4);
  }
  uVar3 = DAT_14cb8c610;
  uVar2 = local_50;
  if (DAT_14cb8c610 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb8c600,0,DAT_14cb8c610,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb8c608;
        if (DAT_14cb8c608 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8c600;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb8c610 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb8c5d8;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb8c5f0 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb8c5c8;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cb8c610 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb8c608;
        if (DAT_14cb8c608 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8c600;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb8c610 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb8c608;
        if (DAT_14cb8c608 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8c600;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb8c610 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
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



// FUNCTION 146100116 FUN_146100116 body=507 status=ok
// SIG undefined FUN_146100116(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146100116(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb8c790 = 0;
  FUN_1446ddc76(&DAT_14cb8c794,"se_tick_group",1);
  _DAT_14cb8c7a0 = 0;
  _DAT_14cb8c7a8 = 0;
  _DAT_14cb8c7b0 = 0;
  DAT_14cb8c7b8 = (void *)0x0;
  _DAT_14cb8c7c0 = 0;
  _DAT_14cb8c7c8 = FUN_14899ee86;
  DAT_14cb8c7d0 = *param_1;
  DAT_14cb8c7e0 = param_1[2];
  param_1[2] = 0;
  DAT_14cb8c7f0._0_4_ = (undefined4)param_1[4];
  DAT_14cb8c7f0._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb8c7f8 = (undefined4)param_1[5];
  uRam000000014cb8c7fc = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb8c800 = (undefined4)param_1[6];
  uRam000000014cb8c804 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb8c808 = (undefined4)param_1[7];
  uRam000000014cb8c80c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb8c7d0 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb8c7a0 = 0;
  _DAT_14cb8c7a8 = local_68;
  _DAT_14cb8c7b0 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb8c7c0 = CONCAT44(DAT_14cb8c7c4,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb8c7c4 == 0) {
    _DAT_14cb8c7c0 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb8c7b8,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb8c7b8,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb8c790) && ((DAT_14cb8c720 == (int *)0x0 || (*DAT_14cb8c720 < DAT_14cb8c790)))) {
    DAT_14cb8c720 = &DAT_14cb8c790;
  }
  FUN_146100312();
  local_30 = &local_70;
  local_70 = &DAT_14cb8c790;
  local_38 = &DAT_14cb8c794;
  FUN_1461003ac(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146100312 FUN_146100312 body=153 status=ok
// SIG undefined FUN_146100312(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146100312(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb8c778) {
    FUN_144b3d300(&DAT_14cb8c778);
    if (DAT_14cb8c778 == -1) {
      DAT_14cb8c748 = 0;
      DAT_14cb8c750 = 0;
      DAT_14cb8c728 = 0;
      _DAT_14cb8c730 = 0;
      _DAT_14cb8c754 = 0xffffffff00000080;
      DAT_14cb8c75c = 0;
      DAT_14cb8c768 = 0;
      DAT_14cb8c770 = 0;
      atexit(FUN_143e47f49);
      _Init_thread_footer(&DAT_14cb8c778);
      return;
    }
  }
  return;
}



// FUNCTION 1461003ac FUN_1461003ac body=338 status=ok
// SIG undefined FUN_1461003ac(void)

undefined4 * FUN_1461003ac(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146100592(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_146100500(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb8c730 - DAT_14cb8c75c;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb8c770)) {
      uVar10 = DAT_14cb8c770 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb8c768;
      if (DAT_14cb8c768 == (undefined *)0x0) {
        puVar7 = &DAT_14cb8c760;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb8c770 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb8c768;
      if (DAT_14cb8c768 == (undefined *)0x0) {
        puVar7 = &DAT_14cb8c760;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb8c770 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb8c770 = iVar9;
      FUN_1461006a0();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146100500 FUN_146100500 body=145 status=ok
// SIG undefined FUN_146100500(void)

undefined8 FUN_146100500(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb8c730 - DAT_14cb8c75c != 1) && (DAT_14cb8c730 != DAT_14cb8c75c)) {
    puVar6 = &DAT_14cb8c760;
    if (DAT_14cb8c768 != (undefined *)0x0) {
      puVar6 = DAT_14cb8c768;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb8c770 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb8c728 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d9bac8(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 146100592 FUN_146100592 body=270 status=ok
// SIG undefined FUN_146100592(void)

int * FUN_146100592(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb8c758;
  iVar3 = DAT_14cb8c730;
  if (DAT_14cb8c75c == 0) {
    iVar2 = DAT_14cb8c730 + 1;
    bVar7 = DAT_14cb8c734 == DAT_14cb8c730;
    DAT_14cb8c730 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb8c728,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb8c738,1);
    puVar4 = DAT_14cb8c748;
    if (DAT_14cb8c748 == (undefined *)0x0) {
      puVar4 = &DAT_14cb8c738;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14cb8c758;
    DAT_14cb8c758 = *(int *)(DAT_14cb8c728 + 4 + lVar6 * 0x18);
    DAT_14cb8c75c = DAT_14cb8c75c + -1;
    if (DAT_14cb8c75c != 0) {
      *(undefined4 *)(DAT_14cb8c728 + (longlong)DAT_14cb8c758 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb8c738;
  if (DAT_14cb8c748 != (undefined *)0x0) {
    puVar4 = DAT_14cb8c748;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb8c728;
  return param_1;
}



// FUNCTION 1461006a0 FUN_1461006a0 body=523 status=ok
// SIG undefined FUN_1461006a0(void)

void FUN_1461006a0(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
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
  if (DAT_14cb8c768 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb8c768,0,0,4);
  }
  uVar3 = DAT_14cb8c770;
  uVar2 = local_50;
  if (DAT_14cb8c770 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb8c760,0,DAT_14cb8c770,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb8c768;
        if (DAT_14cb8c768 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8c760;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb8c770 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb8c738;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb8c750 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb8c728;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cb8c770 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb8c768;
        if (DAT_14cb8c768 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8c760;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb8c770 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb8c768;
        if (DAT_14cb8c768 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8c760;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb8c770 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
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



// FUNCTION 1461008ac FUN_1461008ac body=507 status=ok
// SIG undefined FUN_1461008ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461008ac(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb8d000 = 0;
  FUN_1446ddc76(&DAT_14cb8d004,"CGbxLoadingScreenDef",1);
  _DAT_14cb8d010 = 0;
  _DAT_14cb8d018 = 0;
  _DAT_14cb8d020 = 0;
  DAT_14cb8d028 = (void *)0x0;
  _DAT_14cb8d030 = 0;
  _DAT_14cb8d038 = FUN_1489a9150;
  DAT_14cb8d040 = *param_1;
  DAT_14cb8d050 = param_1[2];
  param_1[2] = 0;
  DAT_14cb8d060._0_4_ = (undefined4)param_1[4];
  DAT_14cb8d060._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb8d068 = (undefined4)param_1[5];
  uRam000000014cb8d06c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb8d070 = (undefined4)param_1[6];
  uRam000000014cb8d074 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb8d078 = (undefined4)param_1[7];
  uRam000000014cb8d07c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb8d040 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb8d010 = 0;
  _DAT_14cb8d018 = local_68;
  _DAT_14cb8d020 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb8d030 = CONCAT44(DAT_14cb8d034,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb8d034 == 0) {
    _DAT_14cb8d030 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb8d028,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb8d028,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb8d000) && ((DAT_14cb8cf90 == (int *)0x0 || (*DAT_14cb8cf90 < DAT_14cb8d000)))) {
    DAT_14cb8cf90 = &DAT_14cb8d000;
  }
  FUN_146100aa8();
  local_30 = &local_70;
  local_70 = &DAT_14cb8d000;
  local_38 = &DAT_14cb8d004;
  FUN_146100b42(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146100aa8 FUN_146100aa8 body=153 status=ok
// SIG undefined FUN_146100aa8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146100aa8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb8cfe8) {
    FUN_144b3d300(&DAT_14cb8cfe8);
    if (DAT_14cb8cfe8 == -1) {
      DAT_14cb8cfb8 = 0;
      DAT_14cb8cfc0 = 0;
      DAT_14cb8cf98 = 0;
      _DAT_14cb8cfa0 = 0;
      _DAT_14cb8cfc4 = 0xffffffff00000080;
      DAT_14cb8cfcc = 0;
      DAT_14cb8cfd8 = 0;
      DAT_14cb8cfe0 = 0;
      atexit(FUN_143e538c2);
      _Init_thread_footer(&DAT_14cb8cfe8);
      return;
    }
  }
  return;
}



// FUNCTION 146100b42 FUN_146100b42 body=338 status=ok
// SIG undefined FUN_146100b42(void)

undefined4 * FUN_146100b42(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146100d28(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_146100c96(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb8cfa0 - DAT_14cb8cfcc;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb8cfe0)) {
      uVar10 = DAT_14cb8cfe0 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb8cfd8;
      if (DAT_14cb8cfd8 == (undefined *)0x0) {
        puVar7 = &DAT_14cb8cfd0;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb8cfe0 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb8cfd8;
      if (DAT_14cb8cfd8 == (undefined *)0x0) {
        puVar7 = &DAT_14cb8cfd0;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb8cfe0 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb8cfe0 = iVar9;
      FUN_146100e36();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146100c96 FUN_146100c96 body=145 status=ok
// SIG undefined FUN_146100c96(void)

undefined8 FUN_146100c96(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb8cfa0 - DAT_14cb8cfcc != 1) && (DAT_14cb8cfa0 != DAT_14cb8cfcc)) {
    puVar6 = &DAT_14cb8cfd0;
    if (DAT_14cb8cfd8 != (undefined *)0x0) {
      puVar6 = DAT_14cb8cfd8;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb8cfe0 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb8cf98 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d9bea0(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 146100d28 FUN_146100d28 body=270 status=ok
// SIG undefined FUN_146100d28(void)

int * FUN_146100d28(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb8cfc8;
  iVar3 = DAT_14cb8cfa0;
  if (DAT_14cb8cfcc == 0) {
    iVar2 = DAT_14cb8cfa0 + 1;
    bVar7 = DAT_14cb8cfa4 == DAT_14cb8cfa0;
    DAT_14cb8cfa0 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb8cf98,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb8cfa8,1);
    puVar4 = DAT_14cb8cfb8;
    if (DAT_14cb8cfb8 == (undefined *)0x0) {
      puVar4 = &DAT_14cb8cfa8;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14cb8cfc8;
    DAT_14cb8cfc8 = *(int *)(DAT_14cb8cf98 + 4 + lVar6 * 0x18);
    DAT_14cb8cfcc = DAT_14cb8cfcc + -1;
    if (DAT_14cb8cfcc != 0) {
      *(undefined4 *)(DAT_14cb8cf98 + (longlong)DAT_14cb8cfc8 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb8cfa8;
  if (DAT_14cb8cfb8 != (undefined *)0x0) {
    puVar4 = DAT_14cb8cfb8;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb8cf98;
  return param_1;
}



// FUNCTION 146100e36 FUN_146100e36 body=523 status=ok
// SIG undefined FUN_146100e36(void)

void FUN_146100e36(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
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
  if (DAT_14cb8cfd8 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb8cfd8,0,0,4);
  }
  uVar3 = DAT_14cb8cfe0;
  uVar2 = local_50;
  if (DAT_14cb8cfe0 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb8cfd0,0,DAT_14cb8cfe0,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb8cfd8;
        if (DAT_14cb8cfd8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8cfd0;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb8cfe0 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb8cfa8;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb8cfc0 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb8cf98;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cb8cfe0 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb8cfd8;
        if (DAT_14cb8cfd8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8cfd0;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb8cfe0 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb8cfd8;
        if (DAT_14cb8cfd8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8cfd0;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb8cfe0 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
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



// FUNCTION 146101042 FUN_146101042 body=507 status=ok
// SIG undefined FUN_146101042(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146101042(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb8d120 = 0;
  FUN_1446ddc76(&DAT_14cb8d124,"GbxSceneViewerDef",1);
  _DAT_14cb8d130 = 0;
  _DAT_14cb8d138 = 0;
  _DAT_14cb8d140 = 0;
  DAT_14cb8d148 = (void *)0x0;
  _DAT_14cb8d150 = 0;
  _DAT_14cb8d158 = FUN_1489a9230;
  DAT_14cb8d160 = *param_1;
  DAT_14cb8d170 = param_1[2];
  param_1[2] = 0;
  DAT_14cb8d180._0_4_ = (undefined4)param_1[4];
  DAT_14cb8d180._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb8d188 = (undefined4)param_1[5];
  uRam000000014cb8d18c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb8d190 = (undefined4)param_1[6];
  uRam000000014cb8d194 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb8d198 = (undefined4)param_1[7];
  uRam000000014cb8d19c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb8d160 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb8d130 = 0;
  _DAT_14cb8d138 = local_68;
  _DAT_14cb8d140 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb8d150 = CONCAT44(DAT_14cb8d154,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb8d154 == 0) {
    _DAT_14cb8d150 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb8d148,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb8d148,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb8d120) && ((DAT_14cb8d0b0 == (int *)0x0 || (*DAT_14cb8d0b0 < DAT_14cb8d120)))) {
    DAT_14cb8d0b0 = &DAT_14cb8d120;
  }
  FUN_14610123e();
  local_30 = &local_70;
  local_70 = &DAT_14cb8d120;
  local_38 = &DAT_14cb8d124;
  FUN_1461012d8(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14610123e FUN_14610123e body=153 status=ok
// SIG undefined FUN_14610123e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14610123e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb8d108) {
    FUN_144b3d300(&DAT_14cb8d108);
    if (DAT_14cb8d108 == -1) {
      DAT_14cb8d0d8 = 0;
      DAT_14cb8d0e0 = 0;
      DAT_14cb8d0b8 = 0;
      _DAT_14cb8d0c0 = 0;
      _DAT_14cb8d0e4 = 0xffffffff00000080;
      DAT_14cb8d0ec = 0;
      DAT_14cb8d0f8 = 0;
      DAT_14cb8d100 = 0;
      atexit(FUN_143e53929);
      _Init_thread_footer(&DAT_14cb8d108);
      return;
    }
  }
  return;
}



// FUNCTION 1461012d8 FUN_1461012d8 body=338 status=ok
// SIG undefined FUN_1461012d8(void)

undefined4 * FUN_1461012d8(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1461014be(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_14610142c(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb8d0c0 - DAT_14cb8d0ec;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb8d100)) {
      uVar10 = DAT_14cb8d100 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb8d0f8;
      if (DAT_14cb8d0f8 == (undefined *)0x0) {
        puVar7 = &DAT_14cb8d0f0;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb8d100 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb8d0f8;
      if (DAT_14cb8d0f8 == (undefined *)0x0) {
        puVar7 = &DAT_14cb8d0f0;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb8d100 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb8d100 = iVar9;
      FUN_1461015cc();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14610142c FUN_14610142c body=145 status=ok
// SIG undefined FUN_14610142c(void)

undefined8 FUN_14610142c(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb8d0c0 - DAT_14cb8d0ec != 1) && (DAT_14cb8d0c0 != DAT_14cb8d0ec)) {
    puVar6 = &DAT_14cb8d0f0;
    if (DAT_14cb8d0f8 != (undefined *)0x0) {
      puVar6 = DAT_14cb8d0f8;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb8d100 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb8d0b8 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d9c08c(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1461014be FUN_1461014be body=270 status=ok
// SIG undefined FUN_1461014be(void)

int * FUN_1461014be(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb8d0e8;
  iVar3 = DAT_14cb8d0c0;
  if (DAT_14cb8d0ec == 0) {
    iVar2 = DAT_14cb8d0c0 + 1;
    bVar7 = DAT_14cb8d0c4 == DAT_14cb8d0c0;
    DAT_14cb8d0c0 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb8d0b8,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb8d0c8,1);
    puVar4 = DAT_14cb8d0d8;
    if (DAT_14cb8d0d8 == (undefined *)0x0) {
      puVar4 = &DAT_14cb8d0c8;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14cb8d0e8;
    DAT_14cb8d0e8 = *(int *)(DAT_14cb8d0b8 + 4 + lVar6 * 0x18);
    DAT_14cb8d0ec = DAT_14cb8d0ec + -1;
    if (DAT_14cb8d0ec != 0) {
      *(undefined4 *)(DAT_14cb8d0b8 + (longlong)DAT_14cb8d0e8 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb8d0c8;
  if (DAT_14cb8d0d8 != (undefined *)0x0) {
    puVar4 = DAT_14cb8d0d8;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb8d0b8;
  return param_1;
}



// FUNCTION 1461015cc FUN_1461015cc body=523 status=ok
// SIG undefined FUN_1461015cc(void)

void FUN_1461015cc(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
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
  if (DAT_14cb8d0f8 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb8d0f8,0,0,4);
  }
  uVar3 = DAT_14cb8d100;
  uVar2 = local_50;
  if (DAT_14cb8d100 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb8d0f0,0,DAT_14cb8d100,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb8d0f8;
        if (DAT_14cb8d0f8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8d0f0;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb8d100 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb8d0c8;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb8d0e0 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb8d0b8;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cb8d100 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb8d0f8;
        if (DAT_14cb8d0f8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8d0f0;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb8d100 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb8d0f8;
        if (DAT_14cb8d0f8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8d0f0;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb8d100 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
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



// FUNCTION 1461017d8 FUN_1461017d8 body=507 status=ok
// SIG undefined FUN_1461017d8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461017d8(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb8d2a0 = 0;
  FUN_1446ddc76(&DAT_14cb8d2a4,"materialevents",1);
  _DAT_14cb8d2b0 = 0;
  _DAT_14cb8d2b8 = 0;
  _DAT_14cb8d2c0 = 0;
  DAT_14cb8d2c8 = (void *)0x0;
  _DAT_14cb8d2d0 = 0;
  _DAT_14cb8d2d8 = FUN_1489a9878;
  DAT_14cb8d2e0 = *param_1;
  DAT_14cb8d2f0 = param_1[2];
  param_1[2] = 0;
  DAT_14cb8d300._0_4_ = (undefined4)param_1[4];
  DAT_14cb8d300._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb8d308 = (undefined4)param_1[5];
  uRam000000014cb8d30c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb8d310 = (undefined4)param_1[6];
  uRam000000014cb8d314 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb8d318 = (undefined4)param_1[7];
  uRam000000014cb8d31c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb8d2e0 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb8d2b0 = 0;
  _DAT_14cb8d2b8 = local_68;
  _DAT_14cb8d2c0 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb8d2d0 = CONCAT44(DAT_14cb8d2d4,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb8d2d4 == 0) {
    _DAT_14cb8d2d0 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb8d2c8,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb8d2c8,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb8d2a0) && ((DAT_14cb8d228 == (int *)0x0 || (*DAT_14cb8d228 < DAT_14cb8d2a0)))) {
    DAT_14cb8d228 = &DAT_14cb8d2a0;
  }
  FUN_1461019d4();
  local_30 = &local_70;
  local_70 = &DAT_14cb8d2a0;
  local_38 = &DAT_14cb8d2a4;
  FUN_146101a6e(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461019d4 FUN_1461019d4 body=153 status=ok
// SIG undefined FUN_1461019d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461019d4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb8d280) {
    FUN_144b3d300(&DAT_14cb8d280);
    if (DAT_14cb8d280 == -1) {
      DAT_14cb8d250 = 0;
      DAT_14cb8d258 = 0;
      DAT_14cb8d230 = 0;
      _DAT_14cb8d238 = 0;
      _DAT_14cb8d25c = 0xffffffff00000080;
      DAT_14cb8d264 = 0;
      DAT_14cb8d270 = 0;
      DAT_14cb8d278 = 0;
      atexit(FUN_143e53a6b);
      _Init_thread_footer(&DAT_14cb8d280);
      return;
    }
  }
  return;
}



// FUNCTION 146101a6e FUN_146101a6e body=338 status=ok
// SIG undefined FUN_146101a6e(void)

undefined4 * FUN_146101a6e(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146101c54(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_146101bc2(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb8d238 - DAT_14cb8d264;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb8d278)) {
      uVar10 = DAT_14cb8d278 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb8d270;
      if (DAT_14cb8d270 == (undefined *)0x0) {
        puVar7 = &DAT_14cb8d268;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb8d278 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb8d270;
      if (DAT_14cb8d270 == (undefined *)0x0) {
        puVar7 = &DAT_14cb8d268;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb8d278 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb8d278 = iVar9;
      FUN_146101d62();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146101bc2 FUN_146101bc2 body=145 status=ok
// SIG undefined FUN_146101bc2(void)

undefined8 FUN_146101bc2(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb8d238 - DAT_14cb8d264 != 1) && (DAT_14cb8d238 != DAT_14cb8d264)) {
    puVar6 = &DAT_14cb8d268;
    if (DAT_14cb8d270 != (undefined *)0x0) {
      puVar6 = DAT_14cb8d270;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb8d278 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb8d230 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d9c278(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 146101c54 FUN_146101c54 body=270 status=ok
// SIG undefined FUN_146101c54(void)

int * FUN_146101c54(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb8d260;
  iVar3 = DAT_14cb8d238;
  if (DAT_14cb8d264 == 0) {
    iVar2 = DAT_14cb8d238 + 1;
    bVar7 = DAT_14cb8d23c == DAT_14cb8d238;
    DAT_14cb8d238 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb8d230,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb8d240,1);
    puVar4 = DAT_14cb8d250;
    if (DAT_14cb8d250 == (undefined *)0x0) {
      puVar4 = &DAT_14cb8d240;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14cb8d260;
    DAT_14cb8d260 = *(int *)(DAT_14cb8d230 + 4 + lVar6 * 0x18);
    DAT_14cb8d264 = DAT_14cb8d264 + -1;
    if (DAT_14cb8d264 != 0) {
      *(undefined4 *)(DAT_14cb8d230 + (longlong)DAT_14cb8d260 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb8d240;
  if (DAT_14cb8d250 != (undefined *)0x0) {
    puVar4 = DAT_14cb8d250;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb8d230;
  return param_1;
}



// FUNCTION 146101d62 FUN_146101d62 body=523 status=ok
// SIG undefined FUN_146101d62(void)

void FUN_146101d62(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
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
  if (DAT_14cb8d270 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb8d270,0,0,4);
  }
  uVar3 = DAT_14cb8d278;
  uVar2 = local_50;
  if (DAT_14cb8d278 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb8d268,0,DAT_14cb8d278,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb8d270;
        if (DAT_14cb8d270 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8d268;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb8d278 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb8d240;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb8d258 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb8d230;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cb8d278 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb8d270;
        if (DAT_14cb8d270 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8d268;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb8d278 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb8d270;
        if (DAT_14cb8d270 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8d268;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb8d278 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
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



// FUNCTION 146101f6e FUN_146101f6e body=507 status=ok
// SIG undefined FUN_146101f6e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146101f6e(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb91df0 = 0;
  FUN_1446ddc76(&DAT_14cb91df4,"uistate",1);
  _DAT_14cb91e00 = 0;
  _DAT_14cb91e08 = 0;
  _DAT_14cb91e10 = 0;
  DAT_14cb91e18 = (void *)0x0;
  _DAT_14cb91e20 = 0;
  _DAT_14cb91e28 = FUN_1489f48d8;
  DAT_14cb91e30 = *param_1;
  DAT_14cb91e40 = param_1[2];
  param_1[2] = 0;
  DAT_14cb91e50._0_4_ = (undefined4)param_1[4];
  DAT_14cb91e50._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb91e58 = (undefined4)param_1[5];
  uRam000000014cb91e5c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb91e60 = (undefined4)param_1[6];
  uRam000000014cb91e64 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb91e68 = (undefined4)param_1[7];
  uRam000000014cb91e6c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb91e30 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb91e00 = 0;
  _DAT_14cb91e08 = local_68;
  _DAT_14cb91e10 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb91e20 = CONCAT44(DAT_14cb91e24,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb91e24 == 0) {
    _DAT_14cb91e20 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb91e18,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb91e18,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb91df0) && ((DAT_14cb91d80 == (int *)0x0 || (*DAT_14cb91d80 < DAT_14cb91df0)))) {
    DAT_14cb91d80 = &DAT_14cb91df0;
  }
  FUN_14610216a();
  local_30 = &local_70;
  local_70 = &DAT_14cb91df0;
  local_38 = &DAT_14cb91df4;
  FUN_146102204(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14610216a FUN_14610216a body=153 status=ok
// SIG undefined FUN_14610216a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14610216a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb91dd8) {
    FUN_144b3d300(&DAT_14cb91dd8);
    if (DAT_14cb91dd8 == -1) {
      DAT_14cb91da8 = 0;
      DAT_14cb91db0 = 0;
      DAT_14cb91d88 = 0;
      _DAT_14cb91d90 = 0;
      _DAT_14cb91db4 = 0xffffffff00000080;
      DAT_14cb91dbc = 0;
      DAT_14cb91dc8 = 0;
      DAT_14cb91dd0 = 0;
      atexit(FUN_143eabe7a);
      _Init_thread_footer(&DAT_14cb91dd8);
      return;
    }
  }
  return;
}



// FUNCTION 146102204 FUN_146102204 body=338 status=ok
// SIG undefined FUN_146102204(void)

undefined4 * FUN_146102204(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1461023ea(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_146102358(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb91d90 - DAT_14cb91dbc;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb91dd0)) {
      uVar10 = DAT_14cb91dd0 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb91dc8;
      if (DAT_14cb91dc8 == (undefined *)0x0) {
        puVar7 = &DAT_14cb91dc0;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb91dd0 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb91dc8;
      if (DAT_14cb91dc8 == (undefined *)0x0) {
        puVar7 = &DAT_14cb91dc0;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb91dd0 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb91dd0 = iVar9;
      FUN_1461024f8();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146102358 FUN_146102358 body=145 status=ok
// SIG undefined FUN_146102358(void)

undefined8 FUN_146102358(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb91d90 - DAT_14cb91dbc != 1) && (DAT_14cb91d90 != DAT_14cb91dbc)) {
    puVar6 = &DAT_14cb91dc0;
    if (DAT_14cb91dc8 != (undefined *)0x0) {
      puVar6 = DAT_14cb91dc8;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb91dd0 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb91d88 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d9cc14(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1461023ea FUN_1461023ea body=270 status=ok
// SIG undefined FUN_1461023ea(void)

int * FUN_1461023ea(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb91db8;
  iVar3 = DAT_14cb91d90;
  if (DAT_14cb91dbc == 0) {
    iVar2 = DAT_14cb91d90 + 1;
    bVar7 = DAT_14cb91d94 == DAT_14cb91d90;
    DAT_14cb91d90 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb91d88,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb91d98,1);
    puVar4 = DAT_14cb91da8;
    if (DAT_14cb91da8 == (undefined *)0x0) {
      puVar4 = &DAT_14cb91d98;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14cb91db8;
    DAT_14cb91db8 = *(int *)(DAT_14cb91d88 + 4 + lVar6 * 0x18);
    DAT_14cb91dbc = DAT_14cb91dbc + -1;
    if (DAT_14cb91dbc != 0) {
      *(undefined4 *)(DAT_14cb91d88 + (longlong)DAT_14cb91db8 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb91d98;
  if (DAT_14cb91da8 != (undefined *)0x0) {
    puVar4 = DAT_14cb91da8;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb91d88;
  return param_1;
}



// FUNCTION 1461024f8 FUN_1461024f8 body=523 status=ok
// SIG undefined FUN_1461024f8(void)

void FUN_1461024f8(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
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
  if (DAT_14cb91dc8 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb91dc8,0,0,4);
  }
  uVar3 = DAT_14cb91dd0;
  uVar2 = local_50;
  if (DAT_14cb91dd0 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb91dc0,0,DAT_14cb91dd0,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb91dc8;
        if (DAT_14cb91dc8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb91dc0;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb91dd0 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb91d98;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb91db0 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb91d88;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cb91dd0 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb91dc8;
        if (DAT_14cb91dc8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb91dc0;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb91dd0 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb91dc8;
        if (DAT_14cb91dc8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb91dc0;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb91dd0 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
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



// FUNCTION 146102704 FUN_146102704 body=507 status=ok
// SIG undefined FUN_146102704(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146102704(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb930a0 = 0;
  FUN_1446ddc76(&DAT_14cb930a4,"uitooltipdata",1);
  _DAT_14cb930b0 = 0;
  _DAT_14cb930b8 = 0;
  _DAT_14cb930c0 = 0;
  DAT_14cb930c8 = (void *)0x0;
  _DAT_14cb930d0 = 0;
  _DAT_14cb930d8 = FUN_148a080e0;
  DAT_14cb930e0 = *param_1;
  DAT_14cb930f0 = param_1[2];
  param_1[2] = 0;
  DAT_14cb93100._0_4_ = (undefined4)param_1[4];
  DAT_14cb93100._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb93108 = (undefined4)param_1[5];
  uRam000000014cb9310c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb93110 = (undefined4)param_1[6];
  uRam000000014cb93114 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb93118 = (undefined4)param_1[7];
  uRam000000014cb9311c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb930e0 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb930b0 = 0;
  _DAT_14cb930b8 = local_68;
  _DAT_14cb930c0 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb930d0 = CONCAT44(DAT_14cb930d4,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb930d4 == 0) {
    _DAT_14cb930d0 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb930c8,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb930c8,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb930a0) && ((DAT_14cb93028 == (int *)0x0 || (*DAT_14cb93028 < DAT_14cb930a0)))) {
    DAT_14cb93028 = &DAT_14cb930a0;
  }
  FUN_146102900();
  local_30 = &local_70;
  local_70 = &DAT_14cb930a0;
  local_38 = &DAT_14cb930a4;
  FUN_14610299a(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146102900 FUN_146102900 body=153 status=ok
// SIG undefined FUN_146102900(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146102900(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb93080) {
    FUN_144b3d300(&DAT_14cb93080);
    if (DAT_14cb93080 == -1) {
      DAT_14cb93050 = 0;
      DAT_14cb93058 = 0;
      DAT_14cb93030 = 0;
      _DAT_14cb93038 = 0;
      _DAT_14cb9305c = 0xffffffff00000080;
      DAT_14cb93064 = 0;
      DAT_14cb93070 = 0;
      DAT_14cb93078 = 0;
      atexit(FUN_143ebe72a);
      _Init_thread_footer(&DAT_14cb93080);
      return;
    }
  }
  return;
}



// FUNCTION 14610299a FUN_14610299a body=338 status=ok
// SIG undefined FUN_14610299a(void)

undefined4 * FUN_14610299a(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146102b80(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_146102aee(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb93038 - DAT_14cb93064;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb93078)) {
      uVar10 = DAT_14cb93078 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb93070;
      if (DAT_14cb93070 == (undefined *)0x0) {
        puVar7 = &DAT_14cb93068;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb93078 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb93070;
      if (DAT_14cb93070 == (undefined *)0x0) {
        puVar7 = &DAT_14cb93068;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb93078 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb93078 = iVar9;
      FUN_146102c8e();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146102aee FUN_146102aee body=145 status=ok
// SIG undefined FUN_146102aee(void)

undefined8 FUN_146102aee(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb93038 - DAT_14cb93064 != 1) && (DAT_14cb93038 != DAT_14cb93064)) {
    puVar6 = &DAT_14cb93068;
    if (DAT_14cb93070 != (undefined *)0x0) {
      puVar6 = DAT_14cb93070;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb93078 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb93030 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d9ce00(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 146102b80 FUN_146102b80 body=270 status=ok
// SIG undefined FUN_146102b80(void)

int * FUN_146102b80(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb93060;
  iVar3 = DAT_14cb93038;
  if (DAT_14cb93064 == 0) {
    iVar2 = DAT_14cb93038 + 1;
    bVar7 = DAT_14cb9303c == DAT_14cb93038;
    DAT_14cb93038 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb93030,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb93040,1);
    puVar4 = DAT_14cb93050;
    if (DAT_14cb93050 == (undefined *)0x0) {
      puVar4 = &DAT_14cb93040;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14cb93060;
    DAT_14cb93060 = *(int *)(DAT_14cb93030 + 4 + lVar6 * 0x18);
    DAT_14cb93064 = DAT_14cb93064 + -1;
    if (DAT_14cb93064 != 0) {
      *(undefined4 *)(DAT_14cb93030 + (longlong)DAT_14cb93060 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb93040;
  if (DAT_14cb93050 != (undefined *)0x0) {
    puVar4 = DAT_14cb93050;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb93030;
  return param_1;
}



// FUNCTION 146102c8e FUN_146102c8e body=523 status=ok
// SIG undefined FUN_146102c8e(void)

void FUN_146102c8e(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
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
  if (DAT_14cb93070 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb93070,0,0,4);
  }
  uVar3 = DAT_14cb93078;
  uVar2 = local_50;
  if (DAT_14cb93078 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb93068,0,DAT_14cb93078,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb93070;
        if (DAT_14cb93070 == (undefined *)0x0) {
          puVar6 = &DAT_14cb93068;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb93078 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb93040;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb93058 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb93030;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cb93078 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb93070;
        if (DAT_14cb93070 == (undefined *)0x0) {
          puVar6 = &DAT_14cb93068;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb93078 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb93070;
        if (DAT_14cb93070 == (undefined *)0x0) {
          puVar6 = &DAT_14cb93068;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb93078 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
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



// FUNCTION 146102e9a FUN_146102e9a body=507 status=ok
// SIG undefined FUN_146102e9a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146102e9a(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cbc9090 = 0;
  FUN_1446ddc76(&DAT_14cbc9094,"OakEchoPresentationDef",1);
  _DAT_14cbc90a0 = 0;
  _DAT_14cbc90a8 = 0;
  _DAT_14cbc90b0 = 0;
  DAT_14cbc90b8 = (void *)0x0;
  _DAT_14cbc90c0 = 0;
  _DAT_14cbc90c8 = FUN_148d190ae;
  DAT_14cbc90d0 = *param_1;
  DAT_14cbc90e0 = param_1[2];
  param_1[2] = 0;
  DAT_14cbc90f0._0_4_ = (undefined4)param_1[4];
  DAT_14cbc90f0._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cbc90f8 = (undefined4)param_1[5];
  uRam000000014cbc90fc = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cbc9100 = (undefined4)param_1[6];
  uRam000000014cbc9104 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cbc9108 = (undefined4)param_1[7];
  uRam000000014cbc910c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cbc90d0 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cbc90a0 = 0;
  _DAT_14cbc90a8 = local_68;
  _DAT_14cbc90b0 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cbc90c0 = CONCAT44(DAT_14cbc90c4,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cbc90c4 == 0) {
    _DAT_14cbc90c0 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cbc90b8,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cbc90b8,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cbc9090) && ((DAT_14cbc9018 == (int *)0x0 || (*DAT_14cbc9018 < DAT_14cbc9090)))) {
    DAT_14cbc9018 = &DAT_14cbc9090;
  }
  FUN_146103096();
  local_30 = &local_70;
  local_70 = &DAT_14cbc9090;
  local_38 = &DAT_14cbc9094;
  FUN_146103130(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146103096 FUN_146103096 body=153 status=ok
// SIG undefined FUN_146103096(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146103096(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbc9070) {
    FUN_144b3d300(&DAT_14cbc9070);
    if (DAT_14cbc9070 == -1) {
      DAT_14cbc9040 = 0;
      DAT_14cbc9048 = 0;
      DAT_14cbc9020 = 0;
      _DAT_14cbc9028 = 0;
      _DAT_14cbc904c = 0xffffffff00000080;
      DAT_14cbc9054 = 0;
      DAT_14cbc9060 = 0;
      DAT_14cbc9068 = 0;
      atexit(FUN_1441189bb);
      _Init_thread_footer(&DAT_14cbc9070);
      return;
    }
  }
  return;
}



// FUNCTION 146103130 FUN_146103130 body=338 status=ok
// SIG undefined FUN_146103130(void)

undefined4 * FUN_146103130(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146103316(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_146103284(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cbc9028 - DAT_14cbc9054;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cbc9068)) {
      uVar10 = DAT_14cbc9068 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cbc9060;
      if (DAT_14cbc9060 == (undefined *)0x0) {
        puVar7 = &DAT_14cbc9058;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cbc9068 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cbc9060;
      if (DAT_14cbc9060 == (undefined *)0x0) {
        puVar7 = &DAT_14cbc9058;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cbc9068 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cbc9068 = iVar9;
      FUN_146103424();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146103284 FUN_146103284 body=145 status=ok
// SIG undefined FUN_146103284(void)

undefined8 FUN_146103284(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cbc9028 - DAT_14cbc9054 != 1) && (DAT_14cbc9028 != DAT_14cbc9054)) {
    puVar6 = &DAT_14cbc9058;
    if (DAT_14cbc9060 != (undefined *)0x0) {
      puVar6 = DAT_14cbc9060;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cbc9068 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cbc9020 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d9e324(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 146103316 FUN_146103316 body=270 status=ok
// SIG undefined FUN_146103316(void)

int * FUN_146103316(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cbc9050;
  iVar3 = DAT_14cbc9028;
  if (DAT_14cbc9054 == 0) {
    iVar2 = DAT_14cbc9028 + 1;
    bVar7 = DAT_14cbc902c == DAT_14cbc9028;
    DAT_14cbc9028 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cbc9020,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cbc9030,1);
    puVar4 = DAT_14cbc9040;
    if (DAT_14cbc9040 == (undefined *)0x0) {
      puVar4 = &DAT_14cbc9030;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14cbc9050;
    DAT_14cbc9050 = *(int *)(DAT_14cbc9020 + 4 + lVar6 * 0x18);
    DAT_14cbc9054 = DAT_14cbc9054 + -1;
    if (DAT_14cbc9054 != 0) {
      *(undefined4 *)(DAT_14cbc9020 + (longlong)DAT_14cbc9050 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cbc9030;
  if (DAT_14cbc9040 != (undefined *)0x0) {
    puVar4 = DAT_14cbc9040;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cbc9020;
  return param_1;
}



// FUNCTION 146103424 FUN_146103424 body=523 status=ok
// SIG undefined FUN_146103424(void)

void FUN_146103424(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
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
  if (DAT_14cbc9060 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cbc9060,0,0,4);
  }
  uVar3 = DAT_14cbc9068;
  uVar2 = local_50;
  if (DAT_14cbc9068 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cbc9058,0,DAT_14cbc9068,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cbc9060;
        if (DAT_14cbc9060 == (undefined *)0x0) {
          puVar6 = &DAT_14cbc9058;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cbc9068 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cbc9030;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cbc9048 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cbc9020;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cbc9068 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cbc9060;
        if (DAT_14cbc9060 == (undefined *)0x0) {
          puVar6 = &DAT_14cbc9058;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cbc9068 - 1U & uVar9) * 4);
        puVar6 = DAT_14cbc9060;
        if (DAT_14cbc9060 == (undefined *)0x0) {
          puVar6 = &DAT_14cbc9058;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cbc9068 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
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



// FUNCTION 146103630 FUN_146103630 body=507 status=ok
// SIG undefined FUN_146103630(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146103630(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cbc9560 = 0;
  FUN_1446ddc76(&DAT_14cbc9564,"Faction",1);
  _DAT_14cbc9570 = 0;
  _DAT_14cbc9578 = 0;
  _DAT_14cbc9580 = 0;
  DAT_14cbc9588 = (void *)0x0;
  _DAT_14cbc9590 = 0;
  _DAT_14cbc9598 = FUN_148d1bdc8;
  DAT_14cbc95a0 = *param_1;
  DAT_14cbc95b0 = param_1[2];
  param_1[2] = 0;
  DAT_14cbc95c0._0_4_ = (undefined4)param_1[4];
  DAT_14cbc95c0._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cbc95c8 = (undefined4)param_1[5];
  uRam000000014cbc95cc = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cbc95d0 = (undefined4)param_1[6];
  uRam000000014cbc95d4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cbc95d8 = (undefined4)param_1[7];
  uRam000000014cbc95dc = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cbc95a0 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cbc9570 = 0;
  _DAT_14cbc9578 = local_68;
  _DAT_14cbc9580 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cbc9590 = CONCAT44(DAT_14cbc9594,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cbc9594 == 0) {
    _DAT_14cbc9590 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cbc9588,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cbc9588,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cbc9560) && ((DAT_14cbc94f0 == (int *)0x0 || (*DAT_14cbc94f0 < DAT_14cbc9560)))) {
    DAT_14cbc94f0 = &DAT_14cbc9560;
  }
  FUN_14610382c();
  local_30 = &local_70;
  local_70 = &DAT_14cbc9560;
  local_38 = &DAT_14cbc9564;
  FUN_1461038c6(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14610382c FUN_14610382c body=153 status=ok
// SIG undefined FUN_14610382c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14610382c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbc9548) {
    FUN_144b3d300(&DAT_14cbc9548);
    if (DAT_14cbc9548 == -1) {
      DAT_14cbc9518 = 0;
      DAT_14cbc9520 = 0;
      DAT_14cbc94f8 = 0;
      _DAT_14cbc9500 = 0;
      _DAT_14cbc9524 = 0xffffffff00000080;
      DAT_14cbc952c = 0;
      DAT_14cbc9538 = 0;
      DAT_14cbc9540 = 0;
      atexit(FUN_14411eb95);
      _Init_thread_footer(&DAT_14cbc9548);
      return;
    }
  }
  return;
}



// FUNCTION 1461038c6 FUN_1461038c6 body=338 status=ok
// SIG undefined FUN_1461038c6(void)

undefined4 * FUN_1461038c6(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146103aac(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_146103a1a(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cbc9500 - DAT_14cbc952c;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cbc9540)) {
      uVar10 = DAT_14cbc9540 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cbc9538;
      if (DAT_14cbc9538 == (undefined *)0x0) {
        puVar7 = &DAT_14cbc9530;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cbc9540 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cbc9538;
      if (DAT_14cbc9538 == (undefined *)0x0) {
        puVar7 = &DAT_14cbc9530;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cbc9540 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cbc9540 = iVar9;
      FUN_146103bba();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146103a1a FUN_146103a1a body=145 status=ok
// SIG undefined FUN_146103a1a(void)

undefined8 FUN_146103a1a(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cbc9500 - DAT_14cbc952c != 1) && (DAT_14cbc9500 != DAT_14cbc952c)) {
    puVar6 = &DAT_14cbc9530;
    if (DAT_14cbc9538 != (undefined *)0x0) {
      puVar6 = DAT_14cbc9538;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cbc9540 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cbc94f8 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d9e510(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 146103aac FUN_146103aac body=270 status=ok
// SIG undefined FUN_146103aac(void)

int * FUN_146103aac(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cbc9528;
  iVar3 = DAT_14cbc9500;
  if (DAT_14cbc952c == 0) {
    iVar2 = DAT_14cbc9500 + 1;
    bVar7 = DAT_14cbc9504 == DAT_14cbc9500;
    DAT_14cbc9500 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cbc94f8,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cbc9508,1);
    puVar4 = DAT_14cbc9518;
    if (DAT_14cbc9518 == (undefined *)0x0) {
      puVar4 = &DAT_14cbc9508;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14cbc9528;
    DAT_14cbc9528 = *(int *)(DAT_14cbc94f8 + 4 + lVar6 * 0x18);
    DAT_14cbc952c = DAT_14cbc952c + -1;
    if (DAT_14cbc952c != 0) {
      *(undefined4 *)(DAT_14cbc94f8 + (longlong)DAT_14cbc9528 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cbc9508;
  if (DAT_14cbc9518 != (undefined *)0x0) {
    puVar4 = DAT_14cbc9518;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cbc94f8;
  return param_1;
}



// FUNCTION 146103bba FUN_146103bba body=523 status=ok
// SIG undefined FUN_146103bba(void)

void FUN_146103bba(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
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
  if (DAT_14cbc9538 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cbc9538,0,0,4);
  }
  uVar3 = DAT_14cbc9540;
  uVar2 = local_50;
  if (DAT_14cbc9540 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cbc9530,0,DAT_14cbc9540,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cbc9538;
        if (DAT_14cbc9538 == (undefined *)0x0) {
          puVar6 = &DAT_14cbc9530;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cbc9540 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cbc9508;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cbc9520 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cbc94f8;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cbc9540 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cbc9538;
        if (DAT_14cbc9538 == (undefined *)0x0) {
          puVar6 = &DAT_14cbc9530;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cbc9540 - 1U & uVar9) * 4);
        puVar6 = DAT_14cbc9538;
        if (DAT_14cbc9538 == (undefined *)0x0) {
          puVar6 = &DAT_14cbc9530;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cbc9540 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
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



// FUNCTION 146103dc6 FUN_146103dc6 body=507 status=ok
// SIG undefined FUN_146103dc6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146103dc6(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cbd32e0 = 0;
  FUN_1446ddc76(&DAT_14cbd32e4,"skill_token_stack",1);
  _DAT_14cbd32f0 = 0;
  _DAT_14cbd32f8 = 0;
  _DAT_14cbd3300 = 0;
  DAT_14cbd3308 = (void *)0x0;
  _DAT_14cbd3310 = 0;
  _DAT_14cbd3318 = FUN_148de3906;
  DAT_14cbd3320 = *param_1;
  DAT_14cbd3330 = param_1[2];
  param_1[2] = 0;
  DAT_14cbd3340._0_4_ = (undefined4)param_1[4];
  DAT_14cbd3340._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cbd3348 = (undefined4)param_1[5];
  uRam000000014cbd334c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cbd3350 = (undefined4)param_1[6];
  uRam000000014cbd3354 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cbd3358 = (undefined4)param_1[7];
  uRam000000014cbd335c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cbd3320 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cbd32f0 = 0;
  _DAT_14cbd32f8 = local_68;
  _DAT_14cbd3300 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cbd3310 = CONCAT44(DAT_14cbd3314,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cbd3314 == 0) {
    _DAT_14cbd3310 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cbd3308,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cbd3308,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cbd32e0) && ((DAT_14cbd3268 == (int *)0x0 || (*DAT_14cbd3268 < DAT_14cbd32e0)))) {
    DAT_14cbd3268 = &DAT_14cbd32e0;
  }
  FUN_146103fc2();
  local_30 = &local_70;
  local_70 = &DAT_14cbd32e0;
  local_38 = &DAT_14cbd32e4;
  FUN_14610405c(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146103fc2 FUN_146103fc2 body=153 status=ok
// SIG undefined FUN_146103fc2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146103fc2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbd32c0) {
    FUN_144b3d300(&DAT_14cbd32c0);
    if (DAT_14cbd32c0 == -1) {
      DAT_14cbd3290 = 0;
      DAT_14cbd3298 = 0;
      DAT_14cbd3270 = 0;
      _DAT_14cbd3278 = 0;
      _DAT_14cbd329c = 0xffffffff00000080;
      DAT_14cbd32a4 = 0;
      DAT_14cbd32b0 = 0;
      DAT_14cbd32b8 = 0;
      atexit(FUN_14422428d);
      _Init_thread_footer(&DAT_14cbd32c0);
      return;
    }
  }
  return;
}



// FUNCTION 14610405c FUN_14610405c body=338 status=ok
// SIG undefined FUN_14610405c(void)

undefined4 * FUN_14610405c(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146104242(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_1461041b0(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cbd3278 - DAT_14cbd32a4;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cbd32b8)) {
      uVar10 = DAT_14cbd32b8 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cbd32b0;
      if (DAT_14cbd32b0 == (undefined *)0x0) {
        puVar7 = &DAT_14cbd32a8;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cbd32b8 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cbd32b0;
      if (DAT_14cbd32b0 == (undefined *)0x0) {
        puVar7 = &DAT_14cbd32a8;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cbd32b8 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cbd32b8 = iVar9;
      FUN_146104350();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461041b0 FUN_1461041b0 body=145 status=ok
// SIG undefined FUN_1461041b0(void)

undefined8 FUN_1461041b0(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cbd3278 - DAT_14cbd32a4 != 1) && (DAT_14cbd3278 != DAT_14cbd32a4)) {
    puVar6 = &DAT_14cbd32a8;
    if (DAT_14cbd32b0 != (undefined *)0x0) {
      puVar6 = DAT_14cbd32b0;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cbd32b8 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cbd3270 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d9ead4(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 146104242 FUN_146104242 body=270 status=ok
// SIG undefined FUN_146104242(void)

int * FUN_146104242(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cbd32a0;
  iVar3 = DAT_14cbd3278;
  if (DAT_14cbd32a4 == 0) {
    iVar2 = DAT_14cbd3278 + 1;
    bVar7 = DAT_14cbd327c == DAT_14cbd3278;
    DAT_14cbd3278 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cbd3270,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cbd3280,1);
    puVar4 = DAT_14cbd3290;
    if (DAT_14cbd3290 == (undefined *)0x0) {
      puVar4 = &DAT_14cbd3280;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14cbd32a0;
    DAT_14cbd32a0 = *(int *)(DAT_14cbd3270 + 4 + lVar6 * 0x18);
    DAT_14cbd32a4 = DAT_14cbd32a4 + -1;
    if (DAT_14cbd32a4 != 0) {
      *(undefined4 *)(DAT_14cbd3270 + (longlong)DAT_14cbd32a0 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cbd3280;
  if (DAT_14cbd3290 != (undefined *)0x0) {
    puVar4 = DAT_14cbd3290;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cbd3270;
  return param_1;
}



// FUNCTION 146104350 FUN_146104350 body=523 status=ok
// SIG undefined FUN_146104350(void)

void FUN_146104350(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
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
  if (DAT_14cbd32b0 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cbd32b0,0,0,4);
  }
  uVar3 = DAT_14cbd32b8;
  uVar2 = local_50;
  if (DAT_14cbd32b8 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cbd32a8,0,DAT_14cbd32b8,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cbd32b0;
        if (DAT_14cbd32b0 == (undefined *)0x0) {
          puVar6 = &DAT_14cbd32a8;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cbd32b8 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cbd3280;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cbd3298 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cbd3270;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cbd32b8 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cbd32b0;
        if (DAT_14cbd32b0 == (undefined *)0x0) {
          puVar6 = &DAT_14cbd32a8;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cbd32b8 - 1U & uVar9) * 4);
        puVar6 = DAT_14cbd32b0;
        if (DAT_14cbd32b0 == (undefined *)0x0) {
          puVar6 = &DAT_14cbd32a8;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cbd32b8 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
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



// FUNCTION 14610455c FUN_14610455c body=507 status=ok
// SIG undefined FUN_14610455c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14610455c(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cbe4250 = 0;
  FUN_1446ddc76(&DAT_14cbe4254,"character_info",1);
  _DAT_14cbe4260 = 0;
  _DAT_14cbe4268 = 0;
  _DAT_14cbe4270 = 0;
  DAT_14cbe4278 = (void *)0x0;
  _DAT_14cbe4280 = 0;
  _DAT_14cbe4288 = FUN_148ee92de;
  DAT_14cbe4290 = *param_1;
  DAT_14cbe42a0 = param_1[2];
  param_1[2] = 0;
  DAT_14cbe42b0._0_4_ = (undefined4)param_1[4];
  DAT_14cbe42b0._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cbe42b8 = (undefined4)param_1[5];
  uRam000000014cbe42bc = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cbe42c0 = (undefined4)param_1[6];
  uRam000000014cbe42c4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cbe42c8 = (undefined4)param_1[7];
  uRam000000014cbe42cc = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cbe4290 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cbe4260 = 0;
  _DAT_14cbe4268 = local_68;
  _DAT_14cbe4270 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cbe4280 = CONCAT44(DAT_14cbe4284,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cbe4284 == 0) {
    _DAT_14cbe4280 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cbe4278,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cbe4278,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cbe4250) && ((DAT_14cbe41d8 == (int *)0x0 || (*DAT_14cbe41d8 < DAT_14cbe4250)))) {
    DAT_14cbe41d8 = &DAT_14cbe4250;
  }
  FUN_146104758();
  local_30 = &local_70;
  local_70 = &DAT_14cbe4250;
  local_38 = &DAT_14cbe4254;
  FUN_1461047f2(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146104758 FUN_146104758 body=153 status=ok
// SIG undefined FUN_146104758(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146104758(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbe4230) {
    FUN_144b3d300(&DAT_14cbe4230);
    if (DAT_14cbe4230 == -1) {
      DAT_14cbe4200 = 0;
      DAT_14cbe4208 = 0;
      DAT_14cbe41e0 = 0;
      _DAT_14cbe41e8 = 0;
      _DAT_14cbe420c = 0xffffffff00000080;
      DAT_14cbe4214 = 0;
      DAT_14cbe4220 = 0;
      DAT_14cbe4228 = 0;
      atexit(FUN_14431d946);
      _Init_thread_footer(&DAT_14cbe4230);
      return;
    }
  }
  return;
}



// FUNCTION 1461047f2 FUN_1461047f2 body=338 status=ok
// SIG undefined FUN_1461047f2(void)

undefined4 * FUN_1461047f2(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1461049d8(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_146104946(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cbe41e8 - DAT_14cbe4214;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cbe4228)) {
      uVar10 = DAT_14cbe4228 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cbe4220;
      if (DAT_14cbe4220 == (undefined *)0x0) {
        puVar7 = &DAT_14cbe4218;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cbe4228 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cbe4220;
      if (DAT_14cbe4220 == (undefined *)0x0) {
        puVar7 = &DAT_14cbe4218;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cbe4228 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cbe4228 = iVar9;
      FUN_146104ae6();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146104946 FUN_146104946 body=145 status=ok
// SIG undefined FUN_146104946(void)

undefined8 FUN_146104946(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cbe41e8 - DAT_14cbe4214 != 1) && (DAT_14cbe41e8 != DAT_14cbe4214)) {
    puVar6 = &DAT_14cbe4218;
    if (DAT_14cbe4220 != (undefined *)0x0) {
      puVar6 = DAT_14cbe4220;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cbe4228 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cbe41e0 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d9f098(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1461049d8 FUN_1461049d8 body=270 status=ok
// SIG undefined FUN_1461049d8(void)

int * FUN_1461049d8(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cbe4210;
  iVar3 = DAT_14cbe41e8;
  if (DAT_14cbe4214 == 0) {
    iVar2 = DAT_14cbe41e8 + 1;
    bVar7 = DAT_14cbe41ec == DAT_14cbe41e8;
    DAT_14cbe41e8 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cbe41e0,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cbe41f0,1);
    puVar4 = DAT_14cbe4200;
    if (DAT_14cbe4200 == (undefined *)0x0) {
      puVar4 = &DAT_14cbe41f0;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14cbe4210;
    DAT_14cbe4210 = *(int *)(DAT_14cbe41e0 + 4 + lVar6 * 0x18);
    DAT_14cbe4214 = DAT_14cbe4214 + -1;
    if (DAT_14cbe4214 != 0) {
      *(undefined4 *)(DAT_14cbe41e0 + (longlong)DAT_14cbe4210 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cbe41f0;
  if (DAT_14cbe4200 != (undefined *)0x0) {
    puVar4 = DAT_14cbe4200;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cbe41e0;
  return param_1;
}



// FUNCTION 146104ae6 FUN_146104ae6 body=523 status=ok
// SIG undefined FUN_146104ae6(void)

void FUN_146104ae6(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
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
  if (DAT_14cbe4220 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cbe4220,0,0,4);
  }
  uVar3 = DAT_14cbe4228;
  uVar2 = local_50;
  if (DAT_14cbe4228 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cbe4218,0,DAT_14cbe4228,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cbe4220;
        if (DAT_14cbe4220 == (undefined *)0x0) {
          puVar6 = &DAT_14cbe4218;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cbe4228 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cbe41f0;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cbe4208 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cbe41e0;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cbe4228 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cbe4220;
        if (DAT_14cbe4220 == (undefined *)0x0) {
          puVar6 = &DAT_14cbe4218;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cbe4228 - 1U & uVar9) * 4);
        puVar6 = DAT_14cbe4220;
        if (DAT_14cbe4220 == (undefined *)0x0) {
          puVar6 = &DAT_14cbe4218;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cbe4228 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
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



// FUNCTION 146104cf2 FUN_146104cf2 body=507 status=ok
// SIG undefined FUN_146104cf2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146104cf2(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cbe4390 = 0;
  FUN_1446ddc76(&DAT_14cbe4394,"uidialogbox",1);
  _DAT_14cbe43a0 = 0;
  _DAT_14cbe43a8 = 0;
  _DAT_14cbe43b0 = 0;
  DAT_14cbe43b8 = (void *)0x0;
  _DAT_14cbe43c0 = 0;
  _DAT_14cbe43c8 = FUN_148ee9436;
  DAT_14cbe43d0 = *param_1;
  DAT_14cbe43e0 = param_1[2];
  param_1[2] = 0;
  DAT_14cbe43f0._0_4_ = (undefined4)param_1[4];
  DAT_14cbe43f0._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cbe43f8 = (undefined4)param_1[5];
  uRam000000014cbe43fc = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cbe4400 = (undefined4)param_1[6];
  uRam000000014cbe4404 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cbe4408 = (undefined4)param_1[7];
  uRam000000014cbe440c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cbe43d0 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cbe43a0 = 0;
  _DAT_14cbe43a8 = local_68;
  _DAT_14cbe43b0 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cbe43c0 = CONCAT44(DAT_14cbe43c4,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cbe43c4 == 0) {
    _DAT_14cbe43c0 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cbe43b8,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cbe43b8,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cbe4390) && ((DAT_14cbe4318 == (int *)0x0 || (*DAT_14cbe4318 < DAT_14cbe4390)))) {
    DAT_14cbe4318 = &DAT_14cbe4390;
  }
  FUN_146104eee();
  local_30 = &local_70;
  local_70 = &DAT_14cbe4390;
  local_38 = &DAT_14cbe4394;
  FUN_146104f88(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146104eee FUN_146104eee body=153 status=ok
// SIG undefined FUN_146104eee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146104eee(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbe4370) {
    FUN_144b3d300(&DAT_14cbe4370);
    if (DAT_14cbe4370 == -1) {
      DAT_14cbe4340 = 0;
      DAT_14cbe4348 = 0;
      DAT_14cbe4320 = 0;
      _DAT_14cbe4328 = 0;
      _DAT_14cbe434c = 0xffffffff00000080;
      DAT_14cbe4354 = 0;
      DAT_14cbe4360 = 0;
      DAT_14cbe4368 = 0;
      atexit(FUN_14431d9e6);
      _Init_thread_footer(&DAT_14cbe4370);
      return;
    }
  }
  return;
}



// FUNCTION 146104f88 FUN_146104f88 body=338 status=ok
// SIG undefined FUN_146104f88(void)

undefined4 * FUN_146104f88(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14610516e(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_1461050dc(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cbe4328 - DAT_14cbe4354;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cbe4368)) {
      uVar10 = DAT_14cbe4368 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cbe4360;
      if (DAT_14cbe4360 == (undefined *)0x0) {
        puVar7 = &DAT_14cbe4358;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cbe4368 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cbe4360;
      if (DAT_14cbe4360 == (undefined *)0x0) {
        puVar7 = &DAT_14cbe4358;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cbe4368 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cbe4368 = iVar9;
      FUN_14610527c();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461050dc FUN_1461050dc body=145 status=ok
// SIG undefined FUN_1461050dc(void)

undefined8 FUN_1461050dc(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cbe4328 - DAT_14cbe4354 != 1) && (DAT_14cbe4328 != DAT_14cbe4354)) {
    puVar6 = &DAT_14cbe4358;
    if (DAT_14cbe4360 != (undefined *)0x0) {
      puVar6 = DAT_14cbe4360;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cbe4368 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cbe4320 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d9f284(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 14610516e FUN_14610516e body=270 status=ok
// SIG undefined FUN_14610516e(void)

int * FUN_14610516e(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cbe4350;
  iVar3 = DAT_14cbe4328;
  if (DAT_14cbe4354 == 0) {
    iVar2 = DAT_14cbe4328 + 1;
    bVar7 = DAT_14cbe432c == DAT_14cbe4328;
    DAT_14cbe4328 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cbe4320,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cbe4330,1);
    puVar4 = DAT_14cbe4340;
    if (DAT_14cbe4340 == (undefined *)0x0) {
      puVar4 = &DAT_14cbe4330;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14cbe4350;
    DAT_14cbe4350 = *(int *)(DAT_14cbe4320 + 4 + lVar6 * 0x18);
    DAT_14cbe4354 = DAT_14cbe4354 + -1;
    if (DAT_14cbe4354 != 0) {
      *(undefined4 *)(DAT_14cbe4320 + (longlong)DAT_14cbe4350 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cbe4330;
  if (DAT_14cbe4340 != (undefined *)0x0) {
    puVar4 = DAT_14cbe4340;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cbe4320;
  return param_1;
}



// FUNCTION 14610527c FUN_14610527c body=523 status=ok
// SIG undefined FUN_14610527c(void)

void FUN_14610527c(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
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
  if (DAT_14cbe4360 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cbe4360,0,0,4);
  }
  uVar3 = DAT_14cbe4368;
  uVar2 = local_50;
  if (DAT_14cbe4368 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cbe4358,0,DAT_14cbe4368,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cbe4360;
        if (DAT_14cbe4360 == (undefined *)0x0) {
          puVar6 = &DAT_14cbe4358;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cbe4368 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cbe4330;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cbe4348 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cbe4320;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cbe4368 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cbe4360;
        if (DAT_14cbe4360 == (undefined *)0x0) {
          puVar6 = &DAT_14cbe4358;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cbe4368 - 1U & uVar9) * 4);
        puVar6 = DAT_14cbe4360;
        if (DAT_14cbe4360 == (undefined *)0x0) {
          puVar6 = &DAT_14cbe4358;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cbe4368 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
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



// FUNCTION 146105488 FUN_146105488 body=507 status=ok
// SIG undefined FUN_146105488(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146105488(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cbe4480 = 0;
  FUN_1446ddc76(&DAT_14cbe4484,"profile_default_display_data",1);
  _DAT_14cbe4490 = 0;
  _DAT_14cbe4498 = 0;
  _DAT_14cbe44a0 = 0;
  DAT_14cbe44a8 = (void *)0x0;
  _DAT_14cbe44b0 = 0;
  _DAT_14cbe44b8 = FUN_148ee9522;
  DAT_14cbe44c0 = *param_1;
  DAT_14cbe44d0 = param_1[2];
  param_1[2] = 0;
  DAT_14cbe44e0._0_4_ = (undefined4)param_1[4];
  DAT_14cbe44e0._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cbe44e8 = (undefined4)param_1[5];
  uRam000000014cbe44ec = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cbe44f0 = (undefined4)param_1[6];
  uRam000000014cbe44f4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cbe44f8 = (undefined4)param_1[7];
  uRam000000014cbe44fc = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cbe44c0 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cbe4490 = 0;
  _DAT_14cbe4498 = local_68;
  _DAT_14cbe44a0 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cbe44b0 = CONCAT44(DAT_14cbe44b4,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cbe44b4 == 0) {
    _DAT_14cbe44b0 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cbe44a8,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cbe44a8,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cbe4480) && ((DAT_14cbe4410 == (int *)0x0 || (*DAT_14cbe4410 < DAT_14cbe4480)))) {
    DAT_14cbe4410 = &DAT_14cbe4480;
  }
  FUN_146105684();
  local_30 = &local_70;
  local_70 = &DAT_14cbe4480;
  local_38 = &DAT_14cbe4484;
  FUN_14610571e(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146105684 FUN_146105684 body=153 status=ok
// SIG undefined FUN_146105684(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146105684(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbe4468) {
    FUN_144b3d300(&DAT_14cbe4468);
    if (DAT_14cbe4468 == -1) {
      DAT_14cbe4438 = 0;
      DAT_14cbe4440 = 0;
      DAT_14cbe4418 = 0;
      _DAT_14cbe4420 = 0;
      _DAT_14cbe4444 = 0xffffffff00000080;
      DAT_14cbe444c = 0;
      DAT_14cbe4458 = 0;
      DAT_14cbe4460 = 0;
      atexit(FUN_14431da14);
      _Init_thread_footer(&DAT_14cbe4468);
      return;
    }
  }
  return;
}



// FUNCTION 14610571e FUN_14610571e body=338 status=ok
// SIG undefined FUN_14610571e(void)

undefined4 * FUN_14610571e(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146105904(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_146105872(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cbe4420 - DAT_14cbe444c;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cbe4460)) {
      uVar10 = DAT_14cbe4460 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cbe4458;
      if (DAT_14cbe4458 == (undefined *)0x0) {
        puVar7 = &DAT_14cbe4450;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cbe4460 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cbe4458;
      if (DAT_14cbe4458 == (undefined *)0x0) {
        puVar7 = &DAT_14cbe4450;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cbe4460 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cbe4460 = iVar9;
      FUN_146105a12();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146105872 FUN_146105872 body=145 status=ok
// SIG undefined FUN_146105872(void)

undefined8 FUN_146105872(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cbe4420 - DAT_14cbe444c != 1) && (DAT_14cbe4420 != DAT_14cbe444c)) {
    puVar6 = &DAT_14cbe4450;
    if (DAT_14cbe4458 != (undefined *)0x0) {
      puVar6 = DAT_14cbe4458;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cbe4460 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cbe4418 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d9f470(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 146105904 FUN_146105904 body=270 status=ok
// SIG undefined FUN_146105904(void)

int * FUN_146105904(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cbe4448;
  iVar3 = DAT_14cbe4420;
  if (DAT_14cbe444c == 0) {
    iVar2 = DAT_14cbe4420 + 1;
    bVar7 = DAT_14cbe4424 == DAT_14cbe4420;
    DAT_14cbe4420 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cbe4418,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cbe4428,1);
    puVar4 = DAT_14cbe4438;
    if (DAT_14cbe4438 == (undefined *)0x0) {
      puVar4 = &DAT_14cbe4428;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14cbe4448;
    DAT_14cbe4448 = *(int *)(DAT_14cbe4418 + 4 + lVar6 * 0x18);
    DAT_14cbe444c = DAT_14cbe444c + -1;
    if (DAT_14cbe444c != 0) {
      *(undefined4 *)(DAT_14cbe4418 + (longlong)DAT_14cbe4448 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cbe4428;
  if (DAT_14cbe4438 != (undefined *)0x0) {
    puVar4 = DAT_14cbe4438;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cbe4418;
  return param_1;
}



// FUNCTION 146105a12 FUN_146105a12 body=523 status=ok
// SIG undefined FUN_146105a12(void)

void FUN_146105a12(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
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
  if (DAT_14cbe4458 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cbe4458,0,0,4);
  }
  uVar3 = DAT_14cbe4460;
  uVar2 = local_50;
  if (DAT_14cbe4460 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cbe4450,0,DAT_14cbe4460,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cbe4458;
        if (DAT_14cbe4458 == (undefined *)0x0) {
          puVar6 = &DAT_14cbe4450;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cbe4460 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cbe4428;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cbe4440 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cbe4418;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cbe4460 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cbe4458;
        if (DAT_14cbe4458 == (undefined *)0x0) {
          puVar6 = &DAT_14cbe4450;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cbe4460 - 1U & uVar9) * 4);
        puVar6 = DAT_14cbe4458;
        if (DAT_14cbe4458 == (undefined *)0x0) {
          puVar6 = &DAT_14cbe4450;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cbe4460 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
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



// FUNCTION 146105c1e FUN_146105c1e body=205 status=ok
// SIG undefined FUN_146105c1e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146105c1e(void)

{
  if ((DAT_14ca159cf & 2) == 0) {
    DAT_14ca159cf = DAT_14ca159cf | 2;
    _DAT_14ca15970 = L"FRasterBinBuild_CS";
    _DAT_14ca15988 = FUN_146826540;
    _DAT_14ca15990 = FUN_146825d77;
    _DAT_14ca15998 = FUN_146825fd6;
    _DAT_14ca159a0 = FUN_1407e02ea;
    _DAT_14ca159a8 = FUN_146826273;
    _DAT_14ca15980 = FUN_1472532d4;
    _DAT_14ca159c0 = 0xffffffff000000e0;
    _DAT_14ca159c8 = 8;
    DAT_14ca159cc = 0;
    _DAT_14ca159b0 = &LAB_147253300;
    FUN_146105cec();
    FUN_1407e00cc(&DAT_14ca15968);
    return;
  }
  return;
}



// FUNCTION 146105cec FUN_146105cec body=123 status=ok
// SIG undefined FUN_146105cec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146105cec(void)

{
  _DAT_14ca192e0 = L"BASE";
  DAT_14ca1930a = 4;
  _DAT_14ca192e8 = FUN_140b35ae4();
  _DAT_14ca192f0 = DAT_14ca15978;
  _DAT_14ca192f8 = &LAB_14682652b;
  DAT_14ca15978 = &DAT_14ca192e0;
  DAT_14ca159cd = DAT_14ca159cd + '\x01';
  _DAT_14ca19300 = 0x100000000;
  if (*(char *)(_DAT_14ca192e8 + 100) != '\0') {
    DAT_14ca159ce = DAT_14ca159ce + '\x01';
  }
  return;
}



// FUNCTION 146105d68 FUN_146105d68 body=138 status=ok
// SIG undefined FUN_146105d68(void)

code * FUN_146105d68(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PageConstants";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000004f1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147259520;
}



// FUNCTION 146105df2 FUN_146105df2 body=138 status=ok
// SIG undefined FUN_146105df2(void)

code * FUN_146105df2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InClusterOffsetSWHW";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x38000004e6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147259748;
}



// FUNCTION 146105e7c FUN_146105e7c body=138 status=ok
// SIG undefined FUN_146105e7c(void)

code * FUN_146105e7c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VisiblePatchesArgs";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer< uint >";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x58000004ec;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472595aa;
}



// FUNCTION 146105f06 FUN_146105f06 body=42 status=ok
// SIG undefined FUN_146105f06(void)

void FUN_146105f06(undefined8 param_1,undefined8 param_2)

{
  FUN_1415d80be();
  FUN_146105f30(param_1,param_2);
  FUN_146106262(param_1);
  return;
}



// FUNCTION 146105f30 FUN_146105f30 body=176 status=ok
// SIG undefined FUN_146105f30(void)

void FUN_146105f30(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [44];
  short local_2c [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_14497e828();
  if (lVar1 != 0) {
    lVar2 = FUN_144a79464();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      lVar1 = FUN_1414cf3d2(lVar1);
      if (lVar1 != 0) {
        FUN_140d27df6(lVar1,local_2c,param_1);
        if (-1 < local_2c[0]) {
          FUN_1461060c6(lVar1,local_2c,0);
        }
      }
    }
  }
  FUN_146105fe2(param_1,param_2);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146105fe2 FUN_146105fe2 body=109 status=ok
// SIG undefined FUN_146105fe2(void)

void FUN_146105fe2(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1447210f0();
  if (lVar1 != 0) {
    FUN_146106050(lVar1,param_2);
  }
  lVar1 = *(longlong *)(param_1 + 0x430);
  DAT_14caf20c0 = param_2;
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x30) == param_1)) {
    *(undefined8 *)(lVar1 + 0x30) = 0;
  }
  *(undefined8 *)(param_1 + 0x430) = 0;
  *(undefined8 *)(param_1 + 0x608) = 0;
  FUN_140aeefbc(param_1,1,1);
  DAT_14caf20c0 = 0;
  return;
}



// FUNCTION 146106050 FUN_146106050 body=118 status=ok
// SIG undefined FUN_146106050(void)

undefined8 FUN_146106050(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar3 = 0;
  if (0 < *(int *)(param_1 + 0x238)) {
    lVar4 = 0;
    do {
      lVar1 = FUN_14479d2ce(*(longlong *)(param_1 + 0x230) + lVar4);
      if (((lVar1 != 0) && (*(longlong *)(lVar1 + 0x430) == 0)) &&
         (*(longlong *)(lVar1 + 0x600) == param_2)) {
        FUN_1412f3774(param_1,lVar1,0,1);
        return CONCAT71((int7)(uVar3 >> 8),1);
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
      lVar4 = lVar4 + 8;
    } while ((int)uVar2 < *(int *)(param_1 + 0x238));
  }
  return 0;
}



// FUNCTION 1461060c6 FUN_1461060c6 body=210 status=ok
// SIG undefined FUN_1461060c6(void)

void FUN_1461060c6(longlong param_1,ushort *param_2,undefined4 param_3)

{
  ushort uVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  
  cVar3 = FUN_144729dda(param_1 + 0x90);
  if (cVar3 != '\0') {
    lVar4 = FUN_14479d2ce(param_1 + 0x90);
    if ((*(longlong *)(lVar4 + 0x1e0) != 0) &&
       (plVar2 = *(longlong **)(*(longlong *)(lVar4 + 0x1e0) + 0x30), plVar2 != (longlong *)0x0)) {
      uVar1 = *param_2;
      if ((-1 < (short)uVar1) && ((int)(short)uVar1 < *(int *)(param_1 + 0x10))) {
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar1 * 8);
        if ((lVar4 != 0) && (*(uint *)(lVar4 + 8) == (uint)param_2[1])) {
          if (-1 < *(short *)(lVar4 + 4)) {
            do {
              lVar4 = *(longlong *)
                       (*(longlong *)(param_1 + 8) + (longlong)*(short *)(lVar4 + 2) * 8);
            } while (-1 < *(short *)(lVar4 + 4));
            if (lVar4 == 0) {
              return;
            }
          }
          if (*(longlong *)(lVar4 + 0x10) != 0) {
            FUN_146106198(plVar2,param_2,param_3);
            return;
          }
          if (-1 < *(int *)(lVar4 + 0x50)) {
                    /* WARNING: Could not recover jumptable at 0x000146106162. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar2 + 0x2b8))(plVar2,lVar4 + 0x50);
            return;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 146106198 FUN_146106198 body=201 status=ok
// SIG undefined FUN_146106198(void)

void FUN_146106198(undefined8 param_1,short *param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined1 local_80 [8];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (-1 < *param_2) {
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    local_50 = 0xffff;
    lVar2 = FUN_140b9fe48();
    if (param_3 != '\0') {
      local_88 = &local_78;
      local_78 = 0;
      uStack_70 = 0;
      FUN_1457cd3ba(param_1,local_80,param_2,0);
    }
    if ((lVar2 != 0) &&
       (iVar1 = *(int *)(lVar2 + 0x2c), *(undefined4 *)(lVar2 + 0x2c) = 0, iVar1 != 0)) {
      FUN_14164d7a6(param_1,&local_68,lVar2);
      *(undefined1 *)(lVar2 + 0x8d) = 1;
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146106262 FUN_146106262 body=452 status=ok
// SIG undefined FUN_146106262(void)

void FUN_146106262(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((*(char *)(param_1 + 0x178) == '\x03') && (lVar2 = *(longlong *)(param_1 + 0xa08), lVar2 != 0)
     ) {
    lVar1 = FUN_144a2f878();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) {
      lVar1 = FUN_1447210f0(lVar2);
      if (((lVar1 != 0) && (*(longlong *)(lVar1 + 0x30) != 0)) &&
         (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x30) + 0x2b0), lVar1 != 0)) {
        local_58 = 1;
        uStack_50 = 0;
        local_48 = 0;
        uStack_40 = 0;
        local_38 = 0;
        uStack_30 = 0;
        local_28 = 0;
        uStack_20 = 0;
        local_68 = 0;
        uStack_60 = 0;
        lVar2 = *(longlong *)(lVar2 + 0x1c8);
        if (lVar2 == 0) {
          local_78 = DAT_14c8464f0;
          local_88 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          uStack_80 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        }
        else {
          local_88 = *(undefined8 *)(lVar2 + 0x260);
          uStack_80 = *(undefined8 *)(lVar2 + 0x268);
          local_78 = *(undefined8 *)(lVar2 + 0x270);
        }
        lVar2 = FUN_140cb9f34();
        local_a0 = *(undefined8 *)(lVar2 + 0x2d8);
        local_98 = *(undefined4 *)(lVar2 + 0x2e0);
        local_90 = 0;
        local_b0 = 0;
        uStack_a8 = 0;
        local_c8 = &local_58;
        local_d0 = &local_68;
        local_b8 = 0x3f800000;
        local_c0 = 0;
        local_d8 = 1;
        FUN_146106428(&local_a0,lVar1,&local_88,&DAT_14c8462c0);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146106428 FUN_146106428 body=752 status=ok
// SIG undefined FUN_146106428(void)

void FUN_146106428(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4,
                  undefined1 param_5,longlong *param_6,undefined1 *param_7,undefined4 param_8,
                  undefined4 param_9,longlong param_10,longlong param_11)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_218 [32];
  undefined8 *local_1f8;
  undefined1 *local_1f0;
  undefined4 local_1e8;
  undefined4 local_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  int local_1b8;
  undefined4 local_1b4;
  undefined1 local_1b0 [8];
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined1 local_170 [4];
  undefined4 local_16c;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_cc;
  undefined1 local_b8 [24];
  undefined4 local_a0;
  undefined1 local_98 [40];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_218;
  memset(local_170,0,0x100);
  local_a0 = 0xffffffff;
  local_16c = 0x3f800000;
  local_cc = 0xffffffff;
  local_160 = *param_3;
  uStack_158 = param_3[1];
  local_150 = param_3[2];
  local_118 = *param_4;
  uStack_114 = param_4[1];
  uStack_110 = param_4[2];
  uStack_10c = param_4[3];
  local_108 = *(undefined8 *)(param_4 + 4);
  FUN_14485c47a(local_98,param_11);
  if (param_10 != 0) {
    FUN_140871de8(local_b8,param_10);
    lVar2 = *(longlong *)(param_10 + 0x1c8);
    if (lVar2 == 0) {
      puVar4 = &DAT_14c8464e0;
      uVar5 = (undefined4)DAT_14c8464f0;
      uVar6 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    }
    else {
      uVar5 = (undefined4)*(undefined8 *)(lVar2 + 0x270);
      uVar6 = (undefined4)((ulonglong)*(undefined8 *)(lVar2 + 0x270) >> 0x20);
      puVar4 = (undefined8 *)(lVar2 + 0x260);
    }
    local_160 = *puVar4;
    uStack_158 = puVar4[1];
    local_150 = CONCAT44(uVar6,uVar5);
  }
  if (param_11 != 0) {
    FUN_14485c47a(local_98,param_11);
    local_160 = *(undefined8 *)(param_11 + 0x260);
    uStack_158 = *(undefined8 *)(param_11 + 0x268);
    local_150 = *(undefined8 *)(param_11 + 0x270);
  }
  local_138 = local_150;
  local_148 = (undefined4)local_160;
  uStack_144 = local_160._4_4_;
  uStack_140 = (undefined4)uStack_158;
  uStack_13c = uStack_158._4_4_;
  local_1b0[0] = *param_7;
  local_1a8 = *(undefined8 *)(param_7 + 8);
  uVar3 = FUN_14477b664(*(undefined8 *)(param_7 + 0x10));
  local_1a0 = FUN_14477b664(uVar3);
  local_198 = *(undefined8 *)(param_7 + 0x18);
  local_190 = *(undefined8 *)(param_7 + 0x20);
  uVar3 = FUN_14477b664(*(undefined8 *)(param_7 + 0x28));
  local_188 = FUN_14477b664(uVar3);
  local_180 = *(undefined8 *)(param_7 + 0x30);
  local_178 = *(undefined4 *)(param_7 + 0x38);
  local_1c0 = 0;
  iVar1 = (int)param_6[1];
  lVar2 = *param_6;
  local_1b8 = iVar1;
  if (iVar1 == 0) {
    local_1b4 = 0;
  }
  else {
    FUN_1405bd402(&local_1c0,iVar1,0);
    FUN_1405bd2e2(local_1c0,lVar2,iVar1);
  }
  local_1d8 = *param_1;
  local_1d0 = *(undefined4 *)(param_1 + 1);
  local_1c8 = 0;
  local_1e0 = param_9;
  local_1e8 = param_8;
  local_1f0 = local_1b0;
  local_1f8 = &local_1c0;
  FUN_14624f5b2(&local_1d8,param_2,local_170,
                CONCAT71((int7)((ulonglong)param_11 >> 8),param_5) & 0xffffffff);
  if (*param_6 != 0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14610671a FUN_14610671a body=507 status=ok
// SIG undefined FUN_14610671a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14610671a(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb85b90 = 0;
  FUN_1446ddc76(&DAT_14cb85b94,"MissionTask",1);
  _DAT_14cb85ba0 = 0;
  _DAT_14cb85ba8 = 0;
  _DAT_14cb85bb0 = 0;
  DAT_14cb85bb8 = (void *)0x0;
  _DAT_14cb85bc0 = 0;
  _DAT_14cb85bc8 = FUN_1488eba52;
  DAT_14cb85bd0 = *param_1;
  DAT_14cb85be0 = param_1[2];
  param_1[2] = 0;
  DAT_14cb85bf0._0_4_ = (undefined4)param_1[4];
  DAT_14cb85bf0._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb85bf8 = (undefined4)param_1[5];
  uRam000000014cb85bfc = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb85c00 = (undefined4)param_1[6];
  uRam000000014cb85c04 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb85c08 = (undefined4)param_1[7];
  uRam000000014cb85c0c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb85bd0 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb85ba0 = 0;
  _DAT_14cb85ba8 = local_68;
  _DAT_14cb85bb0 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb85bc0 = CONCAT44(DAT_14cb85bc4,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb85bc4 == 0) {
    _DAT_14cb85bc0 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb85bb8,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb85bb8,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb85b90) && ((DAT_14cb85b20 == (int *)0x0 || (*DAT_14cb85b20 < DAT_14cb85b90)))) {
    DAT_14cb85b20 = &DAT_14cb85b90;
  }
  FUN_146106916();
  local_30 = &local_70;
  local_70 = &DAT_14cb85b90;
  local_38 = &DAT_14cb85b94;
  FUN_1461069b2(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146106916 FUN_146106916 body=155 status=ok
// SIG undefined FUN_146106916(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_146106916(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb85b78) {
    FUN_144b3d300(&DAT_14cb85b78);
    if (DAT_14cb85b78 == -1) {
      DAT_14cb85b48 = 0;
      DAT_14cb85b50 = 0;
      DAT_14cb85b28 = 0;
      _DAT_14cb85b30 = 0;
      _DAT_14cb85b54 = 0xffffffff00000080;
      DAT_14cb85b5c = 0;
      DAT_14cb85b68 = 0;
      DAT_14cb85b70 = 0;
      atexit(FUN_143dd92ed);
      _Init_thread_footer(&DAT_14cb85b78);
    }
  }
  return &DAT_14cb85b28;
}



// FUNCTION 1461069b2 FUN_1461069b2 body=338 status=ok
// SIG undefined FUN_1461069b2(void)

undefined4 * FUN_1461069b2(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146106b98(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_146106b06(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb85b30 - DAT_14cb85b5c;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb85b70)) {
      uVar10 = DAT_14cb85b70 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb85b68;
      if (DAT_14cb85b68 == (undefined *)0x0) {
        puVar7 = &DAT_14cb85b60;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb85b70 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb85b68;
      if (DAT_14cb85b68 == (undefined *)0x0) {
        puVar7 = &DAT_14cb85b60;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb85b70 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb85b70 = iVar9;
      FUN_146106ca6();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146106b06 FUN_146106b06 body=145 status=ok
// SIG undefined FUN_146106b06(void)

undefined8 FUN_146106b06(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb85b30 - DAT_14cb85b5c != 1) && (DAT_14cb85b30 != DAT_14cb85b5c)) {
    puVar6 = &DAT_14cb85b60;
    if (DAT_14cb85b68 != (undefined *)0x0) {
      puVar6 = DAT_14cb85b68;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb85b70 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb85b28 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d986e4(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 146106b98 FUN_146106b98 body=270 status=ok
// SIG undefined FUN_146106b98(void)

int * FUN_146106b98(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb85b58;
  iVar3 = DAT_14cb85b30;
  if (DAT_14cb85b5c == 0) {
    iVar2 = DAT_14cb85b30 + 1;
    bVar7 = DAT_14cb85b34 == DAT_14cb85b30;
    DAT_14cb85b30 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb85b28,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb85b38,1);
    puVar4 = DAT_14cb85b48;
    if (DAT_14cb85b48 == (undefined *)0x0) {
      puVar4 = &DAT_14cb85b38;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14cb85b58;
    DAT_14cb85b58 = *(int *)(DAT_14cb85b28 + 4 + lVar6 * 0x18);
    DAT_14cb85b5c = DAT_14cb85b5c + -1;
    if (DAT_14cb85b5c != 0) {
      *(undefined4 *)(DAT_14cb85b28 + (longlong)DAT_14cb85b58 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb85b38;
  if (DAT_14cb85b48 != (undefined *)0x0) {
    puVar4 = DAT_14cb85b48;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb85b28;
  return param_1;
}



// FUNCTION 146106ca6 FUN_146106ca6 body=523 status=ok
// SIG undefined FUN_146106ca6(void)

void FUN_146106ca6(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
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
  if (DAT_14cb85b68 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb85b68,0,0,4);
  }
  uVar3 = DAT_14cb85b70;
  uVar2 = local_50;
  if (DAT_14cb85b70 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb85b60,0,DAT_14cb85b70,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb85b68;
        if (DAT_14cb85b68 == (undefined *)0x0) {
          puVar6 = &DAT_14cb85b60;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb85b70 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb85b38;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb85b50 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb85b28;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cb85b70 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb85b68;
        if (DAT_14cb85b68 == (undefined *)0x0) {
          puVar6 = &DAT_14cb85b60;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb85b70 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb85b68;
        if (DAT_14cb85b68 == (undefined *)0x0) {
          puVar6 = &DAT_14cb85b60;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb85b70 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
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



// FUNCTION 146106eb2 FUN_146106eb2 body=43 status=ok
// SIG undefined FUN_146106eb2(void)

longlong FUN_146106eb2(undefined8 param_1,longlong param_2)

{
  FUN_146106ede();
  if (*(int *)(param_2 + 8) < 2) {
    FUN_144a787a6(param_2,&DAT_14cbca4c0);
  }
  return param_2;
}



// FUNCTION 146106ede FUN_146106ede body=519 status=ok
// SIG undefined FUN_146106ede(void)

longlong * FUN_146106ede(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  ulonglong uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_2 = 0;
  param_2[1] = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1403de9f2(param_4,&local_68,&DAT_149e1423e,1);
  if (0 < (int)uStack_60) {
    lVar6 = 8;
    lVar5 = 0;
    do {
      local_78 = 0;
      uStack_70 = 0;
      puVar4 = &DAT_149dfb77a;
      if (*(int *)(local_68 + lVar6) != 0) {
        puVar4 = *(undefined2 **)(local_68 + -8 + lVar6);
      }
      local_88 = 0;
      FUN_14063337c(puVar4,L"MODE=",&local_78,1);
      if (1 < (int)uStack_70) {
        FUN_1402980a2(param_2,local_78,(int)uStack_70 + -1);
      }
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 0x10;
    } while (lVar5 < (int)uStack_60);
    if (1 < (int)param_2[1]) goto LAB_14610700f;
  }
  iVar1 = *(int *)(param_1 + 0x670) + -1;
  if (*(int *)(param_1 + 0x670) == 0) {
    iVar1 = 0;
  }
  FUN_1446f82e2(&local_78,iVar1,*(undefined8 *)(param_1 + 0x668),1);
  lVar5 = FUN_14090279a(DAT_14cb84f20,&local_78);
  if (lVar5 != 0) {
    piVar2 = (int *)FUN_1461070e6(lVar5);
    if (((*piVar2 != 0) && (piVar2[1] != 0)) && (*piVar2 != DAT_14c948000)) {
      uVar3 = FUN_1461070e6(lVar5);
      local_78 = 0;
      uStack_70 = 0;
      FUN_1400b2348(uVar3,&local_78,1);
      if (&local_78 == param_2) {
        if (local_78 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*param_2 != 0) {
          FUN_1400020a8();
        }
        *param_2 = local_78;
        local_78 = 0;
        *(int *)(param_2 + 1) = (int)uStack_70;
        *(undefined4 *)((longlong)param_2 + 0xc) = uStack_70._4_4_;
      }
    }
  }
LAB_14610700f:
  FUN_1447a1747(local_68,uStack_60 & 0xffffffff);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461070e6 FUN_1461070e6 body=245 status=ok
// SIG undefined FUN_1461070e6(void)

undefined * FUN_1461070e6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined *puVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140b5f98e(param_1 + 0x58,&local_28);
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
  if (local_28 == 0) {
    puVar3 = &DAT_14cb84e48;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cb84e70) {
      FUN_144b3d300(&DAT_14cb84e70);
      if (DAT_14cb84e70 == -1) {
        puVar3 = &DAT_14cb84e48;
        FUN_1447a97f4(&DAT_14cb84e48,&DAT_14c9485f0);
        atexit((_func_5014 *)&LAB_143dbe255);
        _Init_thread_footer(&DAT_14cb84e70);
      }
    }
  }
  else {
    puVar3 = (undefined *)(local_28 + 0x28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461071dc FUN_1461071dc body=28 status=ok
// SIG undefined FUN_1461071dc(void)

undefined8 FUN_1461071dc(undefined8 param_1,undefined8 param_2)

{
  FUN_1461071f8(param_2,param_1);
  return param_1;
}



// FUNCTION 1461071f8 FUN_1461071f8 body=620 status=ok
// SIG undefined FUN_1461071f8(void)

double * FUN_1461071f8(longlong *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double *pdVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong local_b0;
  longlong lStack_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double dStack_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  pdVar7 = (double *)param_1[2];
  dVar1 = *param_3;
  dVar2 = param_3[1];
  dVar3 = param_3[2];
  dVar4 = pdVar7[2];
  dVar11 = *pdVar7;
  dVar5 = pdVar7[1];
  dVar9 = dVar5 * dVar3 - dVar2 * dVar4;
  dVar9 = dVar9 + dVar9;
  dVar6 = pdVar7[3];
  dVar12 = dVar11 * dVar2 - dVar1 * dVar5;
  dVar12 = dVar12 + dVar12;
  dVar10 = dVar4 * dVar1 - dVar3 * dVar11;
  dVar10 = dVar10 + dVar10;
  local_90 = (dVar11 * dVar10 - dVar9 * dVar5) + dVar6 * dVar12 + dVar3;
  local_98 = (dVar4 * dVar9 - dVar12 * dVar11) + dVar6 * dVar10 + dVar2;
  local_a0 = (dVar5 * dVar12 - dVar10 * dVar4) + dVar9 * dVar6 + dVar1;
  local_b0 = param_1[3];
  lStack_a8 = param_1[4];
  lVar8 = *(longlong *)*param_1;
  local_b8 = lVar8 + 0x20;
  FUN_144a94486(*(undefined8 *)(lVar8 + 0x88),&local_88,&local_a0,((longlong *)*param_1)[1]);
  pdVar7 = (double *)param_1[1];
  dVar5 = *pdVar7;
  dVar6 = pdVar7[1];
  dVar9 = pdVar7[2];
  dVar1 = pdVar7[3];
  dVar2 = pdVar7[3];
  dVar11 = dStack_80 * dVar5 - local_88 * dVar6;
  dVar12 = local_78 * dVar6 - dStack_80 * dVar9;
  dVar10 = local_88 * dVar9 - dVar5 * local_78;
  dVar12 = dVar12 + dVar12;
  dVar10 = dVar10 + dVar10;
  dVar11 = dVar11 + dVar11;
  dVar4 = pdVar7[5];
  dVar3 = pdVar7[6];
  *param_2 = (dVar11 * dVar6 - dVar10 * dVar9) + dVar1 * dVar12 + local_88 + pdVar7[4];
  param_2[1] = (dVar9 * dVar12 - dVar5 * dVar11) + dVar2 * dVar10 + dStack_80 + dVar4;
  param_2[2] = dVar11 * dVar1 + local_78 + (dVar10 * dVar5 - dVar12 * dVar6) + dVar3;
  if ((local_70 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146107466 FUN_146107466 body=284 status=ok
// SIG undefined FUN_146107466(void)

void FUN_146107466(longlong param_1,int param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (0 < (longlong)*(int *)(param_1 + 0x1f0)) {
    uVar8 = (longlong)*(int *)(param_1 + 0x1f0);
    do {
      uVar1 = uVar8 - 1;
      plVar2 = *(longlong **)(param_1 + 0x2e8);
      if ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34)) {
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x1e8) + uVar1 * 8);
        plVar6 = plVar2 + 7;
        if ((longlong *)plVar2[8] != (longlong *)0x0) {
          plVar6 = (longlong *)plVar2[8];
        }
        iVar7 = *(int *)((longlong)plVar6 +
                        (ulonglong)
                        ((int)plVar2[9] - 1U & (int)lVar3 + (int)((ulonglong)lVar3 >> 0x20) * 0x17)
                        * 4);
        if (iVar7 != -1) {
          do {
            plVar6 = (longlong *)(*plVar2 + (longlong)iVar7 * 0x18);
            if (*plVar6 == lVar3) goto LAB_1461074ba;
            iVar7 = (int)plVar6[2];
          } while (iVar7 != -1);
        }
      }
      plVar6 = (longlong *)0x0;
LAB_1461074ba:
      if ((int)plVar6[1] == param_2) {
        *(undefined4 *)(plVar6 + 1) = 0xfffffffe;
        uVar5 = *(uint *)(param_1 + 0x1f0);
        if (uVar8 != uVar5) {
          memmove((void *)(*(longlong *)(param_1 + 0x1e8) + uVar1 * 8),
                  (void *)(*(longlong *)(param_1 + 0x1e8) + uVar1 * 8 + 8),
                  (longlong)(int)(uVar5 - (int)uVar8) << 3);
          uVar5 = *(uint *)(param_1 + 0x1f0);
        }
        *(uint *)(param_1 + 0x1f0) = uVar5 - 1;
        FUN_140e33ef8((longlong *)(param_1 + 0x1e8));
      }
      bVar4 = 1 < (longlong)uVar8;
      uVar8 = uVar1;
    } while (bVar4);
  }
  FUN_1415d8186(param_1 + 0x468,param_2);
  return;
}



// FUNCTION 146107582 FUN_146107582 body=94 status=ok
// SIG undefined FUN_146107582(void)

void FUN_146107582(longlong *param_1,undefined8 *param_2)

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
    FUN_1417b93bc(param_1,iVar2);
  }
  FUN_147967ae1((longlong)iVar2 * 0x10 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 1461075e0 FUN_1461075e0 body=96 status=ok
// SIG undefined FUN_1461075e0(void)

void FUN_1461075e0(longlong param_1,int param_2)

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



// FUNCTION 14610764c FUN_14610764c body=312 status=ok
// SIG undefined FUN_14610764c(void)

undefined8 * FUN_14610764c(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14abaf660;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(byte *)((longlong)param_1 + 0x4c) = *(byte *)((longlong)param_1 + 0x4c) & 0xfc;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  param_1[0x10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,3,0x10);
    puVar1 = local_30;
    local_28 = 3;
    *local_30 = &PTR_LAB_14abb6f40;
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
    *local_30 = &PTR_FUN_14abb52f0;
    local_30[3] = 0;
    FUN_14485c47a(local_30 + 3,param_1);
    puVar1[4] = FUN_147e74776;
    FUN_144a450dc(param_1 + 0xe,&local_30);
    FUN_1449db362(&local_30);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146107786 FUN_146107786 body=58 status=ok
// SIG undefined FUN_146107786(void)

void FUN_146107786(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  uVar1 = FUN_1447210f0();
  cVar2 = FUN_1415d8652(param_2,uVar1);
  if (cVar2 == '\0') {
    thunk_FUN_140633cb6(param_1 + 0x548);
  }
  FUN_140d4f94c(param_1,param_2);
  return;
}



// FUNCTION 1461077cc FUN_1461077cc body=544 status=ok
// SIG undefined FUN_1461077cc(void)

undefined8 * FUN_1461077cc(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1413f708e();
  *param_1 = &PTR_FUN_14abf7d70;
  param_1[5] = &PTR_LAB_14abf8090;
  local_30 = 0;
  FUN_1461079ee(param_1 + 0xe);
  param_1[0x12] = 0;
  *(undefined2 *)(param_1 + 0x13) = 0xffff;
  *(undefined1 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x14] = 0;
  *(undefined2 *)(param_1 + 0x15) = 0xffff;
  *(undefined1 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  FUN_1400b22c2(&local_40,"Play Animation");
  if ((undefined8 **)(param_1 + 6) == &local_40) {
    if (local_40 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[6] != 0) {
      FUN_1400020a8();
    }
    param_1[6] = local_40;
    *(undefined4 *)(param_1 + 7) = local_38;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_34;
  }
  *(byte *)((longlong)param_1 + 0x55) = *(byte *)((longlong)param_1 + 0x55) | 4;
  param_1[0x12] = 0;
  *(undefined2 *)(param_1 + 0x13) = 0xffff;
  *(undefined1 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x14] = 0;
  *(undefined2 *)(param_1 + 0x15) = 0xffff;
  *(undefined1 *)((longlong)param_1 + 0xac) = 0;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar1 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14a1c8830;
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
  *local_40 = &PTR_FUN_14ac045c0;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_1);
  *(undefined4 *)(puVar1 + 5) = 0;
  puVar1[4] = FUN_147ec76ba;
  FUN_144a450dc(param_1 + 0x19,&local_40);
  FUN_1449db362(&local_40);
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461079ee FUN_1461079ee body=93 status=ok
// SIG undefined FUN_1461079ee(void)

undefined8 * FUN_1461079ee(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0xffff;
  lVar1 = *param_2;
  param_1[2] = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  lVar1 = FUN_14018aba8();
  param_1[3] = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(lVar1);
  }
  return param_1;
}



// FUNCTION 146107a4c FUN_146107a4c body=279 status=ok
// SIG undefined FUN_146107a4c(void)

undefined4 * FUN_146107a4c(longlong param_1,undefined4 *param_2,undefined8 param_3)

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
  FUN_146107cc0(param_1,local_48);
  FUN_146107b64(param_3,local_40);
  local_40[0x16] = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = *local_40;
  cVar2 = FUN_146107c02(param_1,uVar4,local_40,&local_4c);
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
      local_40[0x17] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_40[0x16] =
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
      FUN_146107db0(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146107b64 FUN_146107b64 body=156 status=ok
// SIG undefined FUN_146107b64(void)

undefined4 * FUN_146107b64(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  *param_2 = *(undefined4 *)*param_1;
  FUN_145aeb3d6(param_2 + 2,&local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(&local_78);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146107c02 FUN_146107c02 body=189 status=ok
// SIG undefined FUN_146107c02(void)

undefined8 FUN_146107c02(longlong *param_1,uint param_2,int *param_3,int *param_4)

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
        if (*(int *)(*param_1 + (longlong)iVar2 * 0x60) == *param_3) {
          *(undefined4 *)((longlong)_Dst + 0x50) = 0;
          if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
            FUN_1400020a8();
          }
          FUN_1408910a4((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x58);
          FUN_145ccffa6(param_1,*param_4);
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



// FUNCTION 146107cc0 FUN_146107cc0 body=239 status=ok
// SIG undefined FUN_146107cc0(void)

int * FUN_146107cc0(longlong *param_1,int *param_2)

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



// FUNCTION 146107db0 FUN_146107db0 body=432 status=ok
// SIG undefined FUN_146107db0(void)

void FUN_146107db0(longlong *param_1)

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
        *(int *)(lVar3 + 0x5c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x58 + lVar7) =
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



// FUNCTION 146107f62 FUN_146107f62 body=103 status=ok
// SIG undefined FUN_146107f62(void)

ulonglong FUN_146107f62(longlong param_1)

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
LAB_146107fac:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146107fac;
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



// FUNCTION 146107fdc FUN_146107fdc body=284 status=ok
// SIG undefined FUN_146107fdc(void)

void FUN_146107fdc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  wchar_t *_Str;
  size_t sVar2;
  undefined1 auStack_1f8 [32];
  undefined1 *local_1d8;
  undefined1 *local_1d0;
  undefined1 *local_1c8;
  char local_1c0;
  undefined1 local_1b8 [256];
  undefined1 local_b8 [128];
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  if (param_2 != 0) {
    lVar1 = FUN_14479d2ce(param_1 + 0x30);
    if (lVar1 != 0) {
      local_1d8 = local_1b8;
      local_1c0 = '\0';
      local_1c8 = local_b8;
      local_1d0 = local_1d8;
      _Str = (wchar_t *)FUN_140c7f682(param_1,L"Title_Reset",&local_1d8);
      local_38 = 0;
      if (_Str == (wchar_t *)0x0) {
        local_30 = 0;
        local_28 = 0;
      }
      else {
        sVar2 = wcslen(_Str);
        FUN_1446fe5a4(local_b8,_Str,sVar2 & 0xffffffff,1);
      }
      FUN_1412a486e(lVar1,local_30);
      if (local_38 != 0) {
        FUN_1400020a8();
      }
      if (local_1c0 == '\x01') {
        FUN_1400020a8(local_1d8);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461080fa FUN_1461080fa body=209 status=ok
// SIG undefined FUN_1461080fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1461080fa(void)

{
  if ((DAT_14caa6fe7 & 2) == 0) {
    DAT_14caa6fe7 = DAT_14caa6fe7 | 2;
    _DAT_14caa6f88 = L"FLandscapeVertexFactoryPixelShaderParameters";
    _DAT_14caa6fa0 = FUN_146826540;
    _DAT_14caa6fa8 = FUN_146825d77;
    _DAT_14caa6fb0 = FUN_146825fd6;
    _DAT_14caa6fb8 = FUN_1407e02ea;
    _DAT_14caa6fc0 = FUN_146826273;
    _DAT_14caa6f98 = &LAB_14746bac2;
    _DAT_14caa6fd8 = 0xffffffff00000004;
    _DAT_14caa6fe0 = 4;
    DAT_14caa6fe4 = 0;
    _DAT_14caa6fc8 = &LAB_14746baca;
    FUN_1461081cc(&DAT_14caa6f80);
    FUN_1407e00cc(&DAT_14caa6f80);
  }
  return &DAT_14caa6f80;
}



// FUNCTION 1461081cc FUN_1461081cc body=116 status=ok
// SIG undefined FUN_1461081cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461081cc(longlong param_1)

{
  longlong lVar1;
  
  _DAT_14caa75b8 = L"BASE";
  DAT_14caa75e2 = 4;
  lVar1 = FUN_1412f7d22();
  _DAT_14caa75d0 = &LAB_14682652b;
  _DAT_14caa75d8 = 0x100000000;
  _DAT_14caa75c8 = *(undefined8 *)(param_1 + 0x10);
  _DAT_14caa75c0 = lVar1;
  *(undefined **)(param_1 + 0x10) = &DAT_14caa75b8;
  *(char *)(param_1 + 0x65) = *(char *)(param_1 + 0x65) + '\x01';
  if (*(char *)(lVar1 + 100) != '\0') {
    *(char *)(param_1 + 0x66) = *(char *)(param_1 + 0x66) + '\x01';
  }
  return;
}



// FUNCTION 146108240 FUN_146108240 body=192 status=ok
// SIG undefined FUN_146108240(void)

void FUN_146108240(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    iVar2 = *(int *)(param_1 + 0x10);
    if ((longlong)iVar2 != 0) {
      lVar3 = *(longlong *)(param_1 + 8);
      lVar4 = 0;
      do {
        FUN_141309f44(&local_48,param_2);
        if (*(longlong *)(lVar3 + 8 + lVar4) == CONCAT44(uStack_3c,uStack_40)) goto LAB_1461082d0;
        lVar4 = lVar4 + 0x10;
      } while ((longlong)iVar2 * 0x10 != lVar4);
    }
    FUN_141309f44(&local_48,param_2);
    iVar2 = *(int *)(param_1 + 0x10);
    *(uint *)(param_1 + 0x10) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x14) < iVar2 + 1U) {
      FUN_146108302((longlong *)(param_1 + 8),iVar2);
    }
    puVar1 = (undefined4 *)(*(longlong *)(param_1 + 8) + (longlong)iVar2 * 0x10);
    *puVar1 = local_48;
    puVar1[1] = uStack_44;
    puVar1[2] = uStack_40;
    puVar1[3] = uStack_3c;
  }
LAB_1461082d0:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146108302 FUN_146108302 body=132 status=ok
// SIG undefined FUN_146108302(void)

void FUN_146108302(longlong param_1,int param_2)

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



// FUNCTION 146108386 FUN_146108386 body=68 status=ok
// SIG undefined FUN_146108386(void)

void FUN_146108386(undefined8 param_1)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x178);
  memset(_Dst,0,0x178);
  FUN_1461083ca(_Dst);
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 1461083ca FUN_1461083ca body=257 status=ok
// SIG undefined FUN_1461083ca(void)

undefined8 * FUN_1461083ca(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_1408f3f9e();
  *param_1 = &PTR_FUN_14b8b82a0;
  *(undefined2 *)(param_1 + 0x16) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[0x17] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x18) = (int)plVar2[1];
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[0x19] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x1a) = (int)plVar2[1];
  FUN_140056680(param_1 + 0x1b,&DAT_149dfb77a);
  FUN_140056680(param_1 + 0x1d,&DAT_149dfb77a);
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  FUN_140056680(param_1 + 0x27,&DAT_149dfb77a);
  FUN_140056680(param_1 + 0x29,&DAT_149dfb77a);
  FUN_140056680(param_1 + 0x2b,&DAT_149dfb77a);
  FUN_140056680(param_1 + 0x2d,&DAT_149dfb77a);
  return param_1;
}



// FUNCTION 1461084cc FUN_1461084cc body=52 status=ok
// SIG undefined FUN_1461084cc(void)

void FUN_1461084cc(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1446f8646();
  (**(code **)(*(longlong *)(param_1 + 0x250) + 0x10))(param_1 + 0x250,uVar1);
  switchD_143c3d4dc::caseD_1d(param_1);
  return;
}



// FUNCTION 146108500 FUN_146108500 body=565 status=ok
// SIG undefined FUN_146108500(void)

int FUN_146108500(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_c8 [40];
  ulonglong local_a0;
  int local_94;
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a0 = 0;
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    lVar7 = FUN_140007dea();
    if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8
         ) == lVar7 + 0x30)) {
      lVar7 = FUN_144b00dc8(param_2);
      if ((lVar7 != 0) && ((*(uint *)(param_2 + 8) >> 0x15 & 1) == 0)) {
        FUN_144757f48(param_2,0x400);
        FUN_1427ff290(lVar7 + 0x240,param_2);
      }
      param_2 = *(longlong *)(param_2 + 0x28);
    }
  }
  local_94 = FUN_146108ed0(param_1,param_2);
  iVar5 = FUN_1461087fa(param_1,param_2);
  plVar1 = (longlong *)(param_1 + 0x170);
  iVar2 = *(int *)(param_1 + 0x178);
  iVar3 = *(int *)(param_1 + 0x1a4);
  lVar7 = param_1 + 0x180;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  local_60 = lVar7;
  if (*(int *)(param_1 + 0x198) != 0) {
    FUN_1449c0562(&local_68);
    local_a0 = (ulonglong)*(uint *)(param_1 + 0x198);
  }
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_88 = local_68;
  local_80 = local_60;
  local_90 = plVar1;
  if ((iStack_54 != (int)local_a0) || (local_60 != lVar7)) {
    do {
      do {
        plVar4 = *(longlong **)(*local_90 + (longlong)iStack_74 * 0x10);
        (**(code **)(*plVar4 + 0x310))(plVar4,param_2);
        local_78 = local_78 & ~local_88._4_4_;
        FUN_1449c0562(&local_88);
      } while (iStack_74 != (int)local_a0);
    } while ((local_80 != lVar7) || (local_90 != plVar1));
  }
  FUN_1461087b6(plVar1);
  iVar6 = FUN_14610933e(param_1,param_2);
  FUN_146108736(param_1 + 0x18);
  FUN_146108776(param_1 + 0x68);
  *(undefined1 *)(param_1 + 0x14) = 1;
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return ((iVar5 + local_94 + iVar2) - iVar3) + iVar6;
}



// FUNCTION 146108736 FUN_146108736 body=63 status=ok
// SIG undefined FUN_146108736(void)

void FUN_146108736(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_146108c28(param_1);
    FUN_145ab8014(param_1);
    return;
  }
  FUN_145ab8014(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_1468c0f4e(param_1);
  return;
}



// FUNCTION 146108776 FUN_146108776 body=63 status=ok
// SIG undefined FUN_146108776(void)

void FUN_146108776(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_146108d7c(param_1);
    FUN_145ab7e94(param_1);
    return;
  }
  FUN_145ab7e94(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_1468c1c36(param_1);
  return;
}



// FUNCTION 1461087b6 FUN_1461087b6 body=67 status=ok
// SIG undefined FUN_1461087b6(void)

void FUN_1461087b6(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_146108988(param_1);
    FUN_1459a53f6(param_1,0);
    return;
  }
  FUN_1459a53f6(param_1,0);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_1414c876c(param_1);
  return;
}



// FUNCTION 1461087fa FUN_1461087fa body=333 status=ok
// SIG undefined FUN_1461087fa(void)

int FUN_1461087fa(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
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
  lVar4 = (**(code **)(*param_1 + 0x18))();
  plVar1 = param_1 + 0x24;
  plVar2 = param_1 + 0x26;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  local_48 = 0;
  iVar5 = 0;
  iVar6 = 0;
  local_58 = plVar2;
  if ((int)param_1[0x29] != 0) {
    FUN_1449c0562(&local_60);
    iVar6 = (int)param_1[0x29];
  }
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_68 = local_48;
  local_64 = local_44;
  local_80 = local_60;
  local_78 = local_58;
  local_88 = plVar1;
  if ((iStack_4c != iVar6) || (local_58 != plVar2)) {
    iVar5 = 0;
    do {
      plVar3 = *(longlong **)(*local_88 + (longlong)iStack_6c * 0x10);
      if (*plVar3 == lVar4) {
        *plVar3 = param_2;
        iVar5 = iVar5 + 1;
      }
      local_70 = local_70 & ~local_80._4_4_;
      FUN_1449c0562(&local_80);
    } while (((iStack_6c != iVar6) || (local_78 != plVar2)) || (local_88 != plVar1));
  }
  FUN_146108948(plVar1);
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar5;
}



// FUNCTION 146108948 FUN_146108948 body=63 status=ok
// SIG undefined FUN_146108948(void)

void FUN_146108948(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_146108ad8(param_1);
    FUN_1459a5500(param_1);
    return;
  }
  FUN_1459a5500(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_146898314(param_1);
  return;
}



// FUNCTION 146108988 FUN_146108988 body=335 status=ok
// SIG undefined FUN_146108988(void)

void FUN_146108988(longlong *param_1)

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



// FUNCTION 146108ad8 FUN_146108ad8 body=335 status=ok
// SIG undefined FUN_146108ad8(void)

void FUN_146108ad8(longlong *param_1)

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



// FUNCTION 146108c28 FUN_146108c28 body=339 status=ok
// SIG undefined FUN_146108c28(void)

void FUN_146108c28(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x5c + (longlong)iVar4 * 0x60) * 4) =
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



// FUNCTION 146108d7c FUN_146108d7c body=339 status=ok
// SIG undefined FUN_146108d7c(void)

void FUN_146108d7c(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x5c + (longlong)iVar4 * 0x60) * 4) =
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



// FUNCTION 146108ed0 FUN_146108ed0 body=724 status=ok
// SIG undefined FUN_146108ed0(void)

int FUN_146108ed0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar5 = (**(code **)(*param_1 + 0x18))();
  plVar1 = param_1 + 0x1a;
  plVar2 = param_1 + 0x1c;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  iVar8 = 0;
  iVar9 = 0;
  local_60 = plVar2;
  if ((int)param_1[0x1f] != 0) {
    FUN_1449c0562(&local_68);
    iVar9 = (int)param_1[0x1f];
  }
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_88 = local_68;
  local_80 = local_60;
  local_90 = plVar1;
  if ((iStack_54 != iVar9) || (local_60 != plVar2)) {
    iVar8 = 0;
    do {
      plVar10 = (longlong *)((longlong)iStack_74 * 0x10 + *local_90);
      uVar6 = FUN_1446f4b16();
      cVar4 = FUN_1400164de(plVar10,uVar6);
      if ((cVar4 == '\0') || (lVar3 = *plVar10, lVar3 == 0)) {
        uVar6 = FUN_140be4ae0();
        cVar4 = FUN_1400164de(plVar10,uVar6);
        if ((cVar4 == '\0') ||
           ((lVar3 = *plVar10, lVar3 == 0 || (*(longlong *)(lVar3 + 0x70) != lVar5))))
        goto LAB_14610908f;
        plVar10 = (longlong *)(lVar3 + 0x70);
LAB_146109081:
        if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(param_2);
        }
        *plVar10 = param_2;
        iVar8 = iVar8 + 1;
      }
      else {
        if (*(longlong *)(lVar3 + 0x70) == lVar5) {
          if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(param_2);
          }
          *(longlong *)(lVar3 + 0x70) = param_2;
          iVar8 = iVar8 + 1;
        }
        lVar11 = *(longlong *)(lVar3 + 8);
        lVar7 = FUN_140019cf2();
        if (*(ulonglong *)(lVar7 + 8) == 0) {
          bVar12 = lVar11 != 0;
          if (lVar11 != lVar7 && bVar12) {
            do {
              lVar11 = *(longlong *)(lVar11 + 0x30);
              bVar12 = lVar11 != 0;
              if (lVar11 == lVar7) break;
            } while (lVar11 != 0);
          }
          if (!bVar12) goto LAB_146109124;
LAB_146109012:
          if (*(longlong *)(lVar3 + 0x78) == lVar5) {
            plVar10 = (longlong *)(lVar3 + 0x78);
            goto LAB_146109081;
          }
        }
        else {
          if ((*(ulonglong *)(lVar11 + 0x18) & *(ulonglong *)(lVar7 + 8)) != 0) goto LAB_146109012;
LAB_146109124:
          lVar11 = *(longlong *)(lVar3 + 8);
          lVar7 = FUN_140f4d408();
          if (*(ulonglong *)(lVar7 + 8) == 0) {
            bVar12 = lVar11 != 0;
            if (lVar11 != lVar7 && bVar12) {
              do {
                lVar11 = *(longlong *)(lVar11 + 0x30);
                bVar12 = lVar11 != 0;
                if (lVar11 == lVar7) break;
              } while (lVar11 != 0);
            }
            if (bVar12) goto LAB_146109012;
          }
          else if ((*(ulonglong *)(lVar11 + 0x18) & *(ulonglong *)(lVar7 + 8)) != 0)
          goto LAB_146109012;
        }
      }
LAB_14610908f:
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (((iStack_74 != iVar9) || (local_80 != plVar2)) || (local_90 != plVar1));
  }
  FUN_1461091ae(plVar1);
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar8;
}



// FUNCTION 1461091ae FUN_1461091ae body=63 status=ok
// SIG undefined FUN_1461091ae(void)

void FUN_1461091ae(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_1461091ee(param_1);
    FUN_1459a5470(param_1);
    return;
  }
  FUN_1459a5470(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_1468c1e16(param_1);
  return;
}



// FUNCTION 1461091ee FUN_1461091ee body=335 status=ok
// SIG undefined FUN_1461091ee(void)

void FUN_1461091ee(longlong *param_1)

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



// FUNCTION 14610933e FUN_14610933e body=1516 status=ok
// SIG undefined FUN_14610933e(void)

int FUN_14610933e(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  uint local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  puVar7 = (undefined8 *)(param_1 + 0x18);
  lVar1 = param_1 + 0x28;
  local_c0 = (longlong *)&DAT_100000000;
  local_b0 = (undefined8 *)&DAT_ffffffff;
  local_a8 = local_a8 & 0xffffffff00000000;
  iVar8 = 0;
  iVar10 = 0;
  local_b8 = lVar1;
  if (*(int *)(param_1 + 0x40) != 0) {
    FUN_1449c0562(&local_c0);
    iVar10 = *(int *)(param_1 + 0x40);
  }
  local_78 = local_b0;
  puVar4 = local_78;
  local_70 = (uint)local_a8;
  local_6c = local_a8._4_4_;
  local_88 = local_c0;
  local_80 = local_b8;
  local_78._4_4_ = (int)((ulonglong)local_b0 >> 0x20);
  local_90 = puVar7;
  if ((local_78._4_4_ != iVar10) || (local_b8 != lVar1)) {
    iVar8 = 0;
    iVar6 = local_78._4_4_;
    local_78 = puVar4;
    do {
      local_d8 = (undefined8 *)*local_90;
      lVar9 = (longlong)iVar6;
      local_98 = local_d8[lVar9 * 0xc];
      cVar5 = FUN_144729dda(&local_98);
      puVar4 = local_d8;
      if (cVar5 != '\0') {
        local_c8 = FUN_14479d2ce(&local_98);
        local_d8 = puVar4 + lVar9 * 0xc + 3;
        local_68 = 0x100000000;
        local_58 = 0xffffffff;
        local_50 = 0;
        local_60 = local_d8;
        if (*(int *)(puVar4 + lVar9 * 0xc + 6) != 0) {
          FUN_1449c0562(&local_68);
        }
        local_d0 = puVar4 + lVar9 * 0xc + 1;
        local_a8 = local_58;
        local_a0 = local_50;
        local_9c = local_4c;
        local_b8 = local_68;
        local_b0 = local_60;
        uVar11 = *(uint *)(puVar4 + lVar9 * 0xc + 6);
        local_68 = CONCAT44(1 << ((byte)uVar11 & 0x1f),(int)uVar11 >> 5);
        local_60 = local_d8;
        local_58 = CONCAT44(uVar11,-1 << ((byte)uVar11 & 0x1f));
        local_50 = uVar11 & 0xffffffe0;
        local_c0 = local_d0;
        if (*(uint *)(puVar4 + lVar9 * 0xc + 6) != uVar11) {
          FUN_1449c0562(&local_68);
          uVar11 = local_58._4_4_;
        }
        local_d8 = local_60;
        if ((local_c0 != local_d0 || local_b0 != local_60) || local_a8._4_4_ != uVar11) {
          do {
            iVar6 = FUN_1468bdb1e((longlong)(int)local_a8._4_4_ * 0x18 + *local_c0,param_1,param_2,
                                  local_c8);
            iVar8 = iVar8 + iVar6;
            local_a8 = CONCAT44(local_a8._4_4_,(uint)local_a8 & ~local_b8._4_4_);
            FUN_1449c0562(&local_b8);
          } while (local_c0 != local_d0 || (local_b0 != local_d8 || local_a8._4_4_ != uVar11));
        }
      }
      local_78 = (undefined8 *)CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
      FUN_1449c0562(&local_88);
      iVar6 = local_78._4_4_;
    } while (((local_78._4_4_ != iVar10) || (local_80 != lVar1)) ||
            (puVar4 = local_78, local_90 != puVar7));
  }
  local_78 = puVar4;
  plVar2 = (longlong *)(param_1 + 0x68);
  lVar1 = param_1 + 0x78;
  local_c0 = (longlong *)&DAT_100000000;
  local_b0 = (undefined8 *)&DAT_ffffffff;
  local_a8 = local_a8 & 0xffffffff00000000;
  iVar10 = 0;
  local_b8 = lVar1;
  if (*(int *)(param_1 + 0x90) != 0) {
    FUN_1449c0562(&local_c0);
    iVar10 = *(int *)(param_1 + 0x90);
  }
  local_78 = local_b0;
  puVar7 = local_78;
  local_70 = (uint)local_a8;
  local_6c = local_a8._4_4_;
  local_88 = local_c0;
  local_80 = local_b8;
  local_78._4_4_ = (int)((ulonglong)local_b0 >> 0x20);
  iVar6 = local_78._4_4_;
  local_90 = plVar2;
  if ((local_78._4_4_ != iVar10) || (local_78 = puVar7, local_b8 != lVar1)) {
    do {
      local_78 = puVar7;
      local_d0 = (longlong *)*local_90;
      lVar9 = (longlong)iVar6 * 0x60;
      puVar7 = (undefined8 *)((longlong)local_d0 + lVar9);
      local_d8 = puVar7 + 3;
      local_c8 = *puVar7;
      local_68 = 0x100000000;
      local_58 = 0xffffffff;
      local_50 = 0;
      local_60 = local_d8;
      if (*(int *)(puVar7 + 6) != 0) {
        FUN_1449c0562(&local_68);
      }
      lVar3 = (longlong)local_d0 + lVar9;
      local_d0 = (longlong *)((longlong)local_d0 + lVar9 + 8);
      local_a8 = local_58;
      local_a0 = local_50;
      local_9c = local_4c;
      local_b8 = local_68;
      local_b0 = local_60;
      uVar11 = *(uint *)(lVar3 + 0x30);
      local_68 = CONCAT44(1 << ((byte)uVar11 & 0x1f),(int)uVar11 >> 5);
      local_60 = local_d8;
      local_58 = CONCAT44(uVar11,-1 << ((byte)uVar11 & 0x1f));
      local_50 = uVar11 & 0xffffffe0;
      local_c0 = local_d0;
      if (*(uint *)(lVar3 + 0x30) != uVar11) {
        FUN_1449c0562(&local_68);
        uVar11 = local_58._4_4_;
      }
      local_d8 = local_60;
      if ((local_c0 != local_d0 || local_b0 != local_60) || local_a8._4_4_ != uVar11) {
        do {
          iVar6 = FUN_1468bdbec((longlong)(int)local_a8._4_4_ * 0x18 + *local_c0,param_1,param_2,
                                local_c8);
          iVar8 = iVar8 + iVar6;
          local_a8 = CONCAT44(local_a8._4_4_,(uint)local_a8 & ~local_b8._4_4_);
          FUN_1449c0562(&local_b8);
        } while (local_c0 != local_d0 || (local_b0 != local_d8 || local_a8._4_4_ != uVar11));
      }
      local_78 = (undefined8 *)CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
      FUN_1449c0562(&local_88);
      iVar6 = local_78._4_4_;
      puVar7 = local_78;
    } while (((local_78._4_4_ != iVar10) || (local_80 != lVar1)) || (local_90 != plVar2));
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar8;
}



// FUNCTION 14610992c FUN_14610992c body=95 status=ok
// SIG undefined FUN_14610992c(void)

void FUN_14610992c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_14060e84c();
  if (lVar1 != 0) {
    lVar2 = FUN_144a5dd5e();
    if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
         == lVar2 + 0x30)) && (*(longlong *)(param_1 + 0xb8) != 0)) {
      FUN_14480f766(lVar1 + 0x2250);
    }
  }
  FUN_1415d866a(param_1);
  return;
}



// FUNCTION 14610998c FUN_14610998c body=205 status=ok
// SIG undefined FUN_14610998c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14610998c(void)

{
  if ((DAT_14caef9e7 & 2) == 0) {
    DAT_14caef9e7 = DAT_14caef9e7 | 2;
    _DAT_14caef988 = L"FMaterialUniformPreshaderHeader";
    _DAT_14caef9a0 = FUN_146826540;
    _DAT_14caef9a8 = FUN_146825d77;
    _DAT_14caef9b0 = FUN_146825fd6;
    _DAT_14caef9b8 = FUN_1407e02ea;
    _DAT_14caef9c0 = FUN_146826273;
    _DAT_14caef998 = &LAB_147bc006c;
    _DAT_14caef9d8 = 0xffffffff00000010;
    _DAT_14caef9e0 = 4;
    DAT_14caef9e4 = 0;
    _DAT_14caef9c8 = &LAB_147bc0078;
    FUN_146109a5a();
    FUN_1407e00cc(&DAT_14caef980);
    return;
  }
  return;
}



// FUNCTION 146109a5a FUN_146109a5a body=276 status=ok
// SIG undefined FUN_146109a5a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146109a5a(void)

{
  FUN_146109b6e();
  _DAT_14caf0cb0 = L"OpcodeOffset";
  DAT_14caf0cda = FUN_140850cc5();
  if ((DAT_14c87e69f & 2) == 0) {
    DAT_14c87e69f = DAT_14c87e69f | 3;
    _DAT_14c87e640 = L"unsigned int";
    _DAT_14c87e658 = FUN_146828f04;
    _DAT_14c87e660 = &LAB_146828f34;
    _DAT_14c87e668 = &LAB_146828f40;
    _DAT_14c87e670 = &LAB_1407e0362;
    _DAT_14c87e678 = FUN_146828f46;
    _DAT_14c87e650 = &LAB_146828f62;
    _DAT_14c87e690 = 0x400000004;
    _DAT_14c87e698 = 4;
    DAT_14c87e69c = 0;
  }
  _DAT_14caf0cb8 = &DAT_14c87e638;
  _DAT_14caf0cc8 = &LAB_14682652b;
  _DAT_14caf0cd0 = 0x100000000;
  _DAT_14caf0cd8 = 0;
  _DAT_14caf0cc0 = DAT_14caef990;
  DAT_14caef990 = &DAT_14caf0cb0;
  return;
}



// FUNCTION 146109b6e FUN_146109b6e body=276 status=ok
// SIG undefined FUN_146109b6e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146109b6e(void)

{
  FUN_146109c82();
  _DAT_14caf0ce0 = L"OpcodeSize";
  DAT_14caf0d0a = FUN_140850cc5();
  if ((DAT_14c87e69f & 2) == 0) {
    DAT_14c87e69f = DAT_14c87e69f | 3;
    _DAT_14c87e640 = L"unsigned int";
    _DAT_14c87e658 = FUN_146828f04;
    _DAT_14c87e660 = &LAB_146828f34;
    _DAT_14c87e668 = &LAB_146828f40;
    _DAT_14c87e670 = &LAB_1407e0362;
    _DAT_14c87e678 = FUN_146828f46;
    _DAT_14c87e650 = &LAB_146828f62;
    _DAT_14c87e690 = 0x400000004;
    _DAT_14c87e698 = 4;
    DAT_14c87e69c = 0;
  }
  _DAT_14caf0ce8 = &DAT_14c87e638;
  _DAT_14caf0cf8 = &LAB_14682652b;
  _DAT_14caf0d00 = &DAT_100000004;
  _DAT_14caf0d08 = 0;
  _DAT_14caf0cf0 = DAT_14caef990;
  DAT_14caef990 = &DAT_14caf0ce0;
  return;
}



// FUNCTION 146109c82 FUN_146109c82 body=276 status=ok
// SIG undefined FUN_146109c82(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146109c82(void)

{
  FUN_146109d96();
  _DAT_14caf0d10 = L"FieldIndex";
  DAT_14caf0d3a = FUN_140850cc5();
  if ((DAT_14c87e69f & 2) == 0) {
    DAT_14c87e69f = DAT_14c87e69f | 3;
    _DAT_14c87e640 = L"unsigned int";
    _DAT_14c87e658 = FUN_146828f04;
    _DAT_14c87e660 = &LAB_146828f34;
    _DAT_14c87e668 = &LAB_146828f40;
    _DAT_14c87e670 = &LAB_1407e0362;
    _DAT_14c87e678 = FUN_146828f46;
    _DAT_14c87e650 = &LAB_146828f62;
    _DAT_14c87e690 = 0x400000004;
    _DAT_14c87e698 = 4;
    DAT_14c87e69c = 0;
  }
  _DAT_14caf0d18 = &DAT_14c87e638;
  _DAT_14caf0d28 = &LAB_14682652b;
  _DAT_14caf0d30 = &DAT_100000008;
  _DAT_14caf0d38 = 0;
  _DAT_14caf0d20 = DAT_14caef990;
  DAT_14caef990 = &DAT_14caf0d10;
  return;
}



// FUNCTION 146109d96 FUN_146109d96 body=271 status=ok
// SIG undefined FUN_146109d96(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146109d96(void)

{
  _DAT_14caf0d40 = L"NumFields";
  DAT_14caf0d6a = FUN_140850cc5();
  if ((DAT_14c87e69f & 2) == 0) {
    DAT_14c87e69f = DAT_14c87e69f | 3;
    _DAT_14c87e640 = L"unsigned int";
    _DAT_14c87e658 = FUN_146828f04;
    _DAT_14c87e660 = &LAB_146828f34;
    _DAT_14c87e668 = &LAB_146828f40;
    _DAT_14c87e670 = &LAB_1407e0362;
    _DAT_14c87e678 = FUN_146828f46;
    _DAT_14c87e650 = &LAB_146828f62;
    _DAT_14c87e690 = 0x400000004;
    _DAT_14c87e698 = 4;
    DAT_14c87e69c = 0;
  }
  _DAT_14caf0d48 = &DAT_14c87e638;
  _DAT_14caf0d58 = &LAB_14682652b;
  _DAT_14caf0d60 = &DAT_10000000c;
  _DAT_14caf0d68 = 0;
  _DAT_14caf0d50 = DAT_14caef990;
  DAT_14caef990 = &DAT_14caf0d40;
  return;
}



// FUNCTION 146109eb0 FUN_146109eb0 body=314 status=ok
// SIG undefined FUN_146109eb0(void)

longlong * FUN_146109eb0(longlong *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140312256();
  *param_1 = (longlong)&PTR_FUN_14ab91860;
  param_1[0x72] = (longlong)&PTR_LAB_14ab74bb0;
  FUN_1403a3c5e(param_1 + 0x73,param_1,param_1 + 0x72);
  *param_1 = (longlong)&PTR_FUN_14ab91860;
  param_1[0x72] = (longlong)&PTR_LAB_14ab91e98;
  param_1[0x79] = 0;
  *(byte *)((longlong)param_1 + 0x61) = *(byte *)((longlong)param_1 + 0x61) & 0xb7;
  *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) & 0xfc | 2;
  FUN_1403121a6(param_1,0);
  (**(code **)(*param_1 + 0x330))(param_1,1);
  FUN_1446f470e(&local_20,L"NavSeed",1);
  uVar2 = FUN_14599342e();
  local_30 = 0;
  local_38 = 1;
  lVar3 = FUN_14048696c(param_1,local_20,uVar2,uVar2);
  if (lVar3 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar3);
  }
  bVar1 = DAT_14c950c29;
  param_1[0x79] = lVar3;
  if ((lVar3 != 0) && ((bVar1 & 1) != 0)) {
    FUN_1456cec3c(lVar3);
    lVar3 = param_1[0x79];
  }
  param_1[0x39] = lVar3;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146109fec FUN_146109fec body=40 status=ok
// SIG undefined FUN_146109fec(void)

undefined8 FUN_146109fec(undefined8 param_1,int param_2)

{
  FUN_14610a014();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14610a014 FUN_14610a014 body=286 status=ok
// SIG undefined FUN_14610a014(void)

void FUN_14610a014(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b934750;
  param_1[0x72] = &PTR_FUN_14b934e50;
  param_1[0x73] = &PTR_FUN_14b934ed0;
  param_1[0x74] = &PTR_FUN_14b934f40;
  param_1[0x75] = &PTR_FUN_14b934f68;
  param_1[0x76] = &PTR_FUN_14b934f80;
  param_1[0xa4] = &PTR_FUN_14b934fb0;
  param_1[0xa5] = &PTR_FUN_14b935000;
  param_1[0xa6] = &PTR_FUN_14b935030;
  param_1[0xa7] = &PTR_FUN_14b935060;
  param_1[0xa8] = &PTR_FUN_14b935078;
  param_1[0x118] = &PTR_FUN_14b935090;
  param_1[0x119] = &PTR_FUN_14b9350c0;
  param_1[0x11a] = &PTR_FUN_14b935180;
  param_1[0x11b] = &PTR_FUN_14b935270;
  param_1[0x11c] = &PTR_FUN_14b9352a0;
  param_1[0x11d] = &PTR_FUN_14b9352e0;
  FUN_1449e6b18(param_1 + 0x17e);
  if (param_1[0x17c] != 0) {
    FUN_1400020a8();
  }
  FUN_145c404e8(param_1);
  return;
}



// FUNCTION 14610a132 FUN_14610a132 body=26 status=ok
// SIG undefined FUN_14610a132(void)

undefined8 FUN_14610a132(longlong param_1,undefined8 param_2)

{
  FUN_14610a14c(param_1 + 0x18);
  return param_2;
}



// FUNCTION 14610a14c FUN_14610a14c body=438 status=ok
// SIG undefined FUN_14610a14c(void)

undefined8 * FUN_14610a14c(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  void *_Dst;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  void *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((DAT_14cbc8e68 != (longlong *)0x0 && DAT_14cbc8e70 != 0) &&
     (cVar2 = (**(code **)(*DAT_14cbc8e68 + 0x30))(), cVar2 != '\0')) {
    plVar3 = DAT_14cbc8e68;
    if (DAT_14cbc8e70 == 0) {
      plVar3 = (longlong *)0x0;
    }
    (**(code **)(*plVar3 + 0x58))(plVar3,&local_38);
    goto LAB_14610a22d;
  }
  _Dst = (void *)FUN_14001cc68(0x2b0);
  memset(_Dst,0,0x2b0);
  FUN_14610a304(_Dst);
  plVar3 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b969030;
  plVar3[2] = (longlong)_Dst;
  local_30 = plVar3;
  if (_Dst == (void *)0x0) {
    local_38 = (void *)0x0;
    goto LAB_14610a22d;
  }
  local_38 = _Dst;
  if (((*(longlong *)((longlong)_Dst + 0x10) != 0) && (*(longlong *)((longlong)_Dst + 0x18) != 0))
     && (0 < *(int *)(*(longlong *)((longlong)_Dst + 0x18) + 8))) goto LAB_14610a22d;
  if (plVar3 == (longlong *)0x0) {
    *(void **)((longlong)_Dst + 0x10) = _Dst;
    plVar4 = *(longlong **)((longlong)_Dst + 0x18);
    if (plVar4 != (longlong *)0x0) {
LAB_14610a2a8:
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))();
      }
      *(longlong **)((longlong)_Dst + 0x18) = plVar3;
      if (plVar3 != (longlong *)0x0) goto LAB_14610a223;
    }
    local_30 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(void **)((longlong)_Dst + 0x10) = _Dst;
    if (*(longlong **)((longlong)_Dst + 0x18) != plVar3) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      plVar4 = *(longlong **)((longlong)_Dst + 0x18);
      if (plVar4 != (longlong *)0x0) goto LAB_14610a2a8;
      *(longlong **)((longlong)_Dst + 0x18) = plVar3;
    }
LAB_14610a223:
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
LAB_14610a22d:
  *param_2 = local_38;
  param_2[1] = local_30;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14610a304 FUN_14610a304 body=513 status=ok
// SIG undefined FUN_14610a304(void)

undefined8 * FUN_14610a304(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_14b969010;
  FUN_1409e1656(param_1 + 4);
  *param_1 = &PTR_FUN_14b968fa0;
  param_1[4] = &PTR_FUN_14b968fc0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 2;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x10] = 2;
  *(undefined2 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0x6000;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0x6000;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0x6000;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0x6000;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x24] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x194) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0x6000;
  param_1[0x39] = 0;
  *(undefined2 *)(param_1 + 0x3a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = DAT_14c948620;
  *(undefined8 *)((longlong)param_1 + 0x1d4) = DAT_14c948618;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x20c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x214) = 0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0x6000;
  param_1[0x4f] = 0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  param_1[0x53] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  *(undefined1 *)(param_1 + 0x54) = 1;
  param_1[0x55] = 0;
  return param_1;
}



// FUNCTION 14610a510 FUN_14610a510 body=315 status=ok
// SIG undefined FUN_14610a510(void)

undefined8 * FUN_14610a510(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_140834366();
  *param_1 = &PTR_FUN_14ba650d0;
  *(undefined4 *)(param_1 + 0x72) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3ac) = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  *(undefined1 *)(param_1 + 0x75) = 0;
  FUN_140f23ff6(param_1 + 0x76);
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  *(undefined4 *)(param_1 + 0x9d) = 2;
  *(undefined8 *)((longlong)param_1 + 0x4ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4fc) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x504) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x514) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x51c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x524) = 0;
  *(undefined4 *)((longlong)param_1 + 0x52c) = 0;
  param_1[0xa6] = 2;
  param_1[0xa7] = 0;
  *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) | 8;
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) | 8;
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  param_1[0x2e] = (ulonglong)DAT_14c892fb0;
  lVar1 = FUN_1458d5eb0();
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[0x73] = lVar1;
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    if ((param_1 != (undefined8 *)0x0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_1);
    }
    param_1[0x9a] = param_1;
  }
  return param_1;
}



// FUNCTION 14610a656 FUN_14610a656 body=131 status=ok
// SIG undefined FUN_14610a656(void)

undefined8 * FUN_14610a656(undefined8 *param_1)

{
  FUN_1406ed334();
  *param_1 = &PTR_FUN_14bd3b350;
  FUN_1458f5906(param_1 + 0x1f);
  FUN_1458f5906(param_1 + 0x40);
  FUN_1458f5906(param_1 + 0x61);
  FUN_1458f5906(param_1 + 0x82);
  FUN_1406ed278(param_1 + 0xa3);
  FUN_1406ed278(param_1 + 0xc5);
  FUN_140e6b310(param_1 + 0xe7);
  *(undefined1 *)(param_1 + 0x1b) = 1;
  FUN_1415d87a2(param_1);
  return param_1;
}



// FUNCTION 14610a6da FUN_14610a6da body=40 status=ok
// SIG undefined FUN_14610a6da(void)

undefined8 FUN_14610a6da(undefined8 param_1,int param_2)

{
  FUN_14610a702();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14610a702 FUN_14610a702 body=966 status=ok
// SIG undefined FUN_14610a702(void)

void FUN_14610a702(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba58070;
  param_1[5] = &PTR_FUN_14ba583d0;
  FUN_144760e21(param_1[0x56],*(undefined4 *)(param_1 + 0x57));
  if (param_1[0x56] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x53],*(undefined4 *)(param_1 + 0x54));
  if (param_1[0x53] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x50],*(undefined4 *)(param_1 + 0x51));
  if (param_1[0x50] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x4d],*(undefined4 *)(param_1 + 0x4e));
  if (param_1[0x4d] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x4a],*(undefined4 *)(param_1 + 0x4b));
  if (param_1[0x4a] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x47],*(undefined4 *)(param_1 + 0x48));
  if (param_1[0x47] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x44],*(undefined4 *)(param_1 + 0x45));
  if (param_1[0x44] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x41],*(undefined4 *)(param_1 + 0x42));
  if (param_1[0x41] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x3e],*(undefined4 *)(param_1 + 0x3f));
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x3b],*(undefined4 *)(param_1 + 0x3c));
  if (param_1[0x3b] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x38],*(undefined4 *)(param_1 + 0x39));
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x35],*(undefined4 *)(param_1 + 0x36));
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x32],*(undefined4 *)(param_1 + 0x33));
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x2f],*(undefined4 *)(param_1 + 0x30));
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x2c],*(undefined4 *)(param_1 + 0x2d));
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x29],*(undefined4 *)(param_1 + 0x2a));
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  FUN_14610ab33(param_1[0x27],*(undefined4 *)(param_1 + 0x28));
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x26) = 0;
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  FUN_14610aac8(param_1 + 0x1d);
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_14610aafe(param_1 + 0x11);
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_14114f6bc(param_1 + 5);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 14610aac8 FUN_14610aac8 body=53 status=ok
// SIG undefined FUN_14610aac8(void)

void FUN_14610aac8(longlong *param_1)

{
  FUN_14610ab6c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14610aafe FUN_14610aafe body=53 status=ok
// SIG undefined FUN_14610aafe(void)

void FUN_14610aafe(longlong *param_1)

{
  FUN_14610ace8();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14610ab33 FUN_14610ab33 body=56 status=ok
// SIG undefined FUN_14610ab33(void)

void FUN_14610ab33(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 8);
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
      plVar3 = plVar3 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14610ab6c FUN_14610ab6c body=378 status=ok
// SIG undefined FUN_14610ab6c(void)

void FUN_14610ab6c(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
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
      plVar4 = *(longlong **)(*local_70 + 8 + (longlong)iStack_54 * 0x18);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
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



// FUNCTION 14610ace8 FUN_14610ace8 body=413 status=ok
// SIG undefined FUN_14610ace8(void)

void FUN_14610ace8(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  local_60 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_68);
  }
  local_88 = local_68;
  local_80 = local_60;
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_90 = param_1;
  if (iStack_54 < (int)local_60[3]) {
    do {
      lVar2 = *local_90;
      lVar3 = (longlong)iStack_74 * 0x40;
      *(undefined ***)(lVar2 + lVar3) = &PTR_FUN_14a5af930;
      if (*(longlong *)(lVar2 + 0x20 + lVar3) != 0) {
        FUN_1400020a8();
      }
      puVar4 = (undefined8 *)(lVar2 + lVar3);
      *puVar4 = &PTR_FUN_14a184370;
      (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[*(byte *)(puVar4 + 3)])(puVar4 + 1);
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (iStack_74 < (int)local_80[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140b7ce44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14610ae8c FUN_14610ae8c body=277 status=ok
// SIG undefined FUN_14610ae8c(void)

void FUN_14610ae8c(longlong param_1,longlong *param_2)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  void *_Src;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  void *local_68;
  int local_60;
  undefined4 local_5c;
  void *local_58;
  ulonglong uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  plVar5 = (longlong *)(**(code **)(*param_2 + 8))(param_2,0);
  local_40 = 0;
  local_48 = 0;
  (**(code **)(*plVar5 + 0x1c8))(plVar5,&local_48,&local_40);
  FUN_1409ee323(local_48,local_40,&local_58);
  cVar4 = (**(code **)(*param_2 + 0x30))(param_2);
  _Src = local_58;
  if (cVar4 == '\0') {
    pcVar2 = *(code **)(param_1 + 0x10);
    iVar1 = *(int *)(param_1 + 0x18);
    lVar3 = *(longlong *)(param_1 + 8);
    local_68 = (void *)0x0;
    lVar6 = (longlong)(int)uStack_50;
    local_60 = (int)uStack_50;
    if (lVar6 == 0) {
      local_5c = 0;
    }
    else {
      FUN_1446dd670(&local_68,uStack_50 & 0xffffffff,0);
      memcpy(local_68,_Src,lVar6 * 2);
    }
    (*pcVar2)(iVar1 + lVar3,&local_68);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14610afa2 FUN_14610afa2 body=44 status=ok
// SIG undefined FUN_14610afa2(void)

void FUN_14610afa2(undefined8 param_1,longlong *param_2)

{
  FUN_140de1078(param_1,param_2,0,0);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14610afce FUN_14610afce body=52 status=ok
// SIG undefined FUN_14610afce(void)

void FUN_14610afce(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x120,0x10);
  FUN_14610b002(uVar1);
  FUN_140de79e2(param_1,uVar1);
  return;
}



// FUNCTION 14610b002 FUN_14610b002 body=274 status=ok
// SIG undefined FUN_14610b002(void)

undefined8 * FUN_14610b002(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  memset(param_1,0,0xb0);
  FUN_1408f3f9e(param_1);
  *param_1 = &PTR_FUN_14b8ace90;
  param_1[0x16] = 0;
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[0x17] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x18) = (int)plVar2[1];
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[0x19] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x1a) = (int)plVar2[1];
  *(undefined4 *)(param_1 + 0x1b) = 0;
  FUN_140056680(&local_30,&DAT_149e62e78);
  param_1[0x1c] = local_30;
  *(undefined4 *)(param_1 + 0x1d) = local_28;
  *(undefined4 *)((longlong)param_1 + 0xec) = local_24;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  FUN_140056680(param_1 + 0x1f,&DAT_149dfb77a);
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined1 *)(param_1 + 0x23) = 0x80;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14610b11e FUN_14610b11e body=319 status=ok
// SIG undefined FUN_14610b11e(void)

undefined8 * FUN_14610b11e(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14bebb7e0;
  *(undefined2 *)(param_1 + 5) = 1;
  FUN_144757f48(param_1,8);
  *param_1 = &PTR_FUN_14bebd590;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined2 *)((longlong)param_1 + 0x4a) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x3ff00000;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0x3ff0000000000000;
  param_1[0x13] = 0x3ff0000000000000;
  param_1[0x14] = 0x3ff0000000000000;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0x3ff00000;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0x3ff0000000000000;
  param_1[0x21] = 0x3ff0000000000000;
  param_1[0x22] = 0x3ff0000000000000;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0x3ff00000;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2c] = 0x3ff0000000000000;
  param_1[0x2d] = 0x3ff0000000000000;
  param_1[0x2e] = 0x3ff0000000000000;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  *(undefined4 *)((longlong)param_1 + 0x194) = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0x3ff00000;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0x3ff0000000000000;
  param_1[0x39] = 0x3ff0000000000000;
  param_1[0x3a] = 0x3ff0000000000000;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  *(undefined4 *)((longlong)param_1 + 500) = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = 0x3ff00000;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0x3ff0000000000000;
  param_1[0x45] = 0x3ff0000000000000;
  param_1[0x46] = 0x3ff0000000000000;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  return param_1;
}



// FUNCTION 14610b268 FUN_14610b268 body=724 status=ok
// SIG undefined FUN_14610b268(void)

undefined8 * FUN_14610b268(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_140834366();
  *param_1 = &PTR_FUN_14be8cb10;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0x3ff0000000000000;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  uVar1 = DAT_14cc286e0;
  uVar2 = FUN_14088b378();
  local_a0 = 0;
  local_a8 = 1;
  lVar3 = FUN_14048696c(param_1,uVar1,uVar2,uVar2);
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar3);
  }
  param_1[0x72] = lVar3;
  local_28 = DAT_14c846520;
  local_38 = (undefined4)DAT_14c846510;
  uStack_34 = DAT_14c846510._4_4_;
  uStack_30 = (undefined4)DAT_14c846518;
  uStack_2c = DAT_14c846518._4_4_;
  FUN_140c9cc04(lVar3,&local_38,1);
  *(byte *)(param_1[0x72] + 0x62c) = *(byte *)(param_1[0x72] + 0x62c) | 1;
  (**(code **)(*(longlong *)param_1[0x72] + 0x720))((longlong *)param_1[0x72],0);
  *(undefined1 *)(param_1[0x72] + 0x2eb) = 0;
  FUN_14127091c(param_1[0x72],0);
  FUN_140381810(param_1[0x72],0);
  lVar3 = param_1[0x72];
  if (DAT_14c950c29 == '\x01') {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar3 = param_1[0x72];
    }
  }
  param_1[0x39] = lVar3;
  uVar1 = DAT_14cc286f0;
  uVar2 = FUN_144a772c4();
  local_a0 = 0;
  local_a8 = 1;
  lVar3 = FUN_14048696c(param_1,uVar1,uVar2,uVar2);
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar3);
  }
  param_1[0x75] = lVar3;
  uVar1 = DAT_14cc286f8;
  uVar2 = FUN_144a7a726();
  local_a0 = 0;
  local_a8 = 1;
  plVar4 = (longlong *)FUN_14048696c(param_1,uVar1,uVar2,uVar2);
  if ((plVar4 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar4);
  }
  param_1[0x76] = plVar4;
  (**(code **)(*plVar4 + 0x720))(plVar4,0);
  *(undefined1 *)(param_1[0x76] + 0x2eb) = 0;
  FUN_14127091c(param_1[0x76],0);
  FUN_140381810(param_1[0x76],0);
  FUN_140486fc4(param_1[0x76],param_1[0x72],0);
  local_98 = DAT_14c8463d0;
  uStack_90 = DAT_14c8463d8;
  local_88 = DAT_14c8463e0;
  uStack_80 = DAT_14c8463e8;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0x3ff0000000000000;
  uStack_60 = 0;
  local_58 = 0x40000000;
  uStack_54 = 0x3f947ae1;
  uStack_50 = 0x40000000;
  uStack_4c = 0x3f947ae1;
  local_48 = 0x3ff0000000000000;
  uStack_40 = 0;
  local_a8 = 0;
  FUN_144927a08(param_1[0x76],&local_98,0,0);
  *(undefined1 *)(param_1[0x76] + 0x3a3) = 0;
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14610b53e FUN_14610b53e body=38 status=ok
// SIG undefined FUN_14610b53e(void)

undefined4 FUN_14610b53e(longlong param_1)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (*(char *)(param_1 + 10) == '\0') {
    lVar3 = FUN_1415d89a2();
    uVar1 = *(int *)(lVar3 + 8) - 2;
    uVar2 = CONCAT31((int3)(uVar1 >> 8),uVar1 < 0x7fffffff);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 14610b564 FUN_14610b564 body=356 status=ok
// SIG undefined FUN_14610b564(void)

undefined8 * FUN_14610b564(undefined8 *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined8 unaff_RBP;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined1 local_2c [4];
  ulonglong local_28;
  undefined7 uVar6;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14cbf4f70 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_14001cc68(0x188,0x10);
    FUN_14610b6ca(plVar2);
    DAT_14cbf4f70 = plVar2;
  }
  plVar2 = DAT_14cbf4f70;
  local_48 = 0;
  uStack_40 = 0;
  cVar1 = (**(code **)(*DAT_14cbf4f70 + 8))(DAT_14cbf4f70);
  if (cVar1 == '\0') {
    if (DAT_14cbf4f70 != (longlong *)0x0) {
      (**(code **)(*DAT_14cbf4f70 + 0x10))();
      if (DAT_14cbf4f70 != (longlong *)0x0) {
        (**(code **)*DAT_14cbf4f70)(DAT_14cbf4f70,1);
      }
      DAT_14cbf4f70 = (longlong *)0x0;
    }
    uVar3 = 0;
  }
  else {
    FUN_1446ddc76(&local_50,"Sockets",1);
    uVar3 = FUN_144a52528();
    plVar4 = (longlong *)FUN_1402c9134(uVar3,local_50,local_2c,1);
    uVar6 = (undefined7)((ulonglong)unaff_RBP >> 8);
    uVar5 = (undefined4)CONCAT71(uVar6,1);
    if (DAT_14c872ce0 != 0) {
      local_58 = &DAT_14c872ce8;
      cVar1 = FUN_14052bb08(DAT_14c872ce0,L"OnlineSubsystemSteam",L"bUseSteamNetworking",local_2c);
      if (cVar1 != '\0') {
        uVar5 = (undefined4)CONCAT71(uVar6,local_2c[0]);
      }
    }
    (**(code **)(*plVar4 + 0x50))(plVar4,DAT_14cb8e468,plVar2,uVar5);
    uVar3 = DAT_14cb8e468;
  }
  *param_1 = uVar3;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14610b6ca FUN_14610b6ca body=292 status=ok
// SIG undefined FUN_14610b6ca(void)

undefined8 * FUN_14610b6ca(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_14610b7ee();
  uVar1 = FUN_1401cb356();
  FUN_145aa41ca(param_1 + 0x10,L"FSocketSubsystemSteam",0,uVar1);
  FUN_14118b488(param_1 + 0x13);
  *param_1 = &PTR_FUN_14ba4bd60;
  param_1[0x10] = &PTR_FUN_14ba4be88;
  param_1[0x13] = &PTR_FUN_14ba4bea0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x164) = 0x42340000;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0x4024000000000000;
  param_1[0x2f] = 0x3ff8000000000000;
  *(undefined4 *)(param_1 + 0x30) = 0;
  return param_1;
}



// FUNCTION 14610b7ee FUN_14610b7ee body=94 status=ok
// SIG undefined FUN_14610b7ee(void)

undefined8 * FUN_14610b7ee(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_149f218e0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 1),4000);
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  return param_1;
}



// FUNCTION 14610b854 FUN_14610b854 body=319 status=ok
// SIG undefined FUN_14610b854(void)

undefined8 * FUN_14610b854(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1406ee02c();
  *param_1 = &PTR_FUN_14a1df690;
  param_1[0x76] = 0;
  *(undefined4 *)(param_1 + 0x77) = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3bc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c4) = 0;
  param_1[0x7a] = 0;
  *(undefined4 *)(param_1 + 0x7b) = 0;
  param_1[0x7d] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  FUN_1446f470e(&local_20,L"Root",1);
  uVar1 = FUN_14088b378();
  local_30 = 0;
  local_38 = 1;
  lVar2 = FUN_14048696c(param_1,local_20,uVar1,uVar1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[0x7d] = lVar2;
  FUN_14092e51e(param_1,lVar2);
  (**(code **)(*(longlong *)param_1[0x7d] + 0x720))((longlong *)param_1[0x7d],0);
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) & 0xf9 | 2;
  FUN_140cbebe8(param_1 + 6,0);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14610b994 FUN_14610b994 body=205 status=ok
// SIG undefined FUN_14610b994(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14610b994(void)

{
  if ((DAT_14c9e58a7 & 2) == 0) {
    DAT_14c9e58a7 = DAT_14c9e58a7 | 2;
    _DAT_14c9e5848 = L"FClearIndirectArgInstanceCountCs";
    _DAT_14c9e5860 = FUN_146826540;
    _DAT_14c9e5868 = FUN_146825d77;
    _DAT_14c9e5870 = FUN_146825fd6;
    _DAT_14c9e5878 = FUN_1407e02ea;
    _DAT_14c9e5880 = FUN_146826273;
    _DAT_14c9e5858 = FUN_1471be6f8;
    _DAT_14c9e5898 = 0xffffffff000000e0;
    _DAT_14c9e58a0 = 8;
    DAT_14c9e58a4 = 0;
    _DAT_14c9e5888 = &LAB_1471be722;
    FUN_14610ba62();
    FUN_1407e00cc(&DAT_14c9e5840);
    return;
  }
  return;
}



// FUNCTION 14610ba62 FUN_14610ba62 body=123 status=ok
// SIG undefined FUN_14610ba62(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14610ba62(void)

{
  _DAT_14c9e71a8 = L"BASE";
  DAT_14c9e71d2 = 4;
  _DAT_14c9e71b0 = FUN_140b35ae4();
  _DAT_14c9e71b8 = DAT_14c9e5850;
  _DAT_14c9e71c0 = &LAB_14682652b;
  DAT_14c9e5850 = &DAT_14c9e71a8;
  DAT_14c9e58a5 = DAT_14c9e58a5 + '\x01';
  _DAT_14c9e71c8 = 0x100000000;
  if (*(char *)(_DAT_14c9e71b0 + 100) != '\0') {
    DAT_14c9e58a6 = DAT_14c9e58a6 + '\x01';
  }
  return;
}



// FUNCTION 14610bade FUN_14610bade body=205 status=ok
// SIG undefined FUN_14610bade(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14610bade(void)

{
  if ((DAT_14ca14877 & 2) == 0) {
    DAT_14ca14877 = DAT_14ca14877 | 2;
    _DAT_14ca14818 = L"FInstanceHierarchyCull_CS";
    _DAT_14ca14830 = FUN_146826540;
    _DAT_14ca14838 = FUN_146825d77;
    _DAT_14ca14840 = FUN_146825fd6;
    _DAT_14ca14848 = FUN_1407e02ea;
    _DAT_14ca14850 = FUN_146826273;
    _DAT_14ca14828 = FUN_147251b52;
    _DAT_14ca14868 = 0xffffffff000000e0;
    _DAT_14ca14870 = 8;
    DAT_14ca14874 = 0;
    _DAT_14ca14858 = &LAB_147251b7e;
    FUN_14610bbac();
    FUN_1407e00cc(&DAT_14ca14810);
    return;
  }
  return;
}



// FUNCTION 14610bbac FUN_14610bbac body=123 status=ok
// SIG undefined FUN_14610bbac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14610bbac(void)

{
  _DAT_14ca19010 = L"BASE";
  DAT_14ca1903a = 4;
  _DAT_14ca19018 = FUN_140b35ae4();
  _DAT_14ca19020 = DAT_14ca14820;
  _DAT_14ca19028 = &LAB_14682652b;
  DAT_14ca14820 = &DAT_14ca19010;
  DAT_14ca14875 = DAT_14ca14875 + '\x01';
  _DAT_14ca19030 = 0x100000000;
  if (*(char *)(_DAT_14ca19018 + 100) != '\0') {
    DAT_14ca14876 = DAT_14ca14876 + '\x01';
  }
  return;
}



// FUNCTION 14610bc28 FUN_14610bc28 body=205 status=ok
// SIG undefined FUN_14610bc28(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14610bc28(void)

{
  if ((DAT_14ca14d17 & 2) == 0) {
    DAT_14ca14d17 = DAT_14ca14d17 | 2;
    _DAT_14ca14cb8 = L"FInstanceCull_CS";
    _DAT_14ca14cd0 = FUN_146826540;
    _DAT_14ca14cd8 = FUN_146825d77;
    _DAT_14ca14ce0 = FUN_146825fd6;
    _DAT_14ca14ce8 = FUN_1407e02ea;
    _DAT_14ca14cf0 = FUN_146826273;
    _DAT_14ca14cc8 = FUN_1472520e8;
    _DAT_14ca14d08 = 0xffffffff000000e0;
    _DAT_14ca14d10 = 8;
    DAT_14ca14d14 = 0;
    _DAT_14ca14cf8 = &LAB_147252114;
    FUN_14610bcf6();
    FUN_1407e00cc(&DAT_14ca14cb0);
    return;
  }
  return;
}



// FUNCTION 14610bcf6 FUN_14610bcf6 body=123 status=ok
// SIG undefined FUN_14610bcf6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14610bcf6(void)

{
  _DAT_14ca190d0 = L"BASE";
  DAT_14ca190fa = 4;
  _DAT_14ca190d8 = FUN_140b35ae4();
  _DAT_14ca190e0 = DAT_14ca14cc0;
  _DAT_14ca190e8 = &LAB_14682652b;
  DAT_14ca14cc0 = &DAT_14ca190d0;
  DAT_14ca14d15 = DAT_14ca14d15 + '\x01';
  _DAT_14ca190f0 = 0x100000000;
  if (*(char *)(_DAT_14ca190d8 + 100) != '\0') {
    DAT_14ca14d16 = DAT_14ca14d16 + '\x01';
  }
  return;
}



// FUNCTION 14610bd72 FUN_14610bd72 body=205 status=ok
// SIG undefined FUN_14610bd72(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14610bd72(void)

{
  if ((DAT_14ca1552f & 2) == 0) {
    DAT_14ca1552f = DAT_14ca1552f | 2;
    _DAT_14ca154d0 = L"FInitClusterCullArgs_CS";
    _DAT_14ca154e8 = FUN_146826540;
    _DAT_14ca154f0 = FUN_146825d77;
    _DAT_14ca154f8 = FUN_146825fd6;
    _DAT_14ca15500 = FUN_1407e02ea;
    _DAT_14ca15508 = FUN_146826273;
    _DAT_14ca154e0 = FUN_147252af6;
    _DAT_14ca15520 = 0xffffffff000000e0;
    _DAT_14ca15528 = 8;
    DAT_14ca1552c = 0;
    _DAT_14ca15510 = &LAB_147252b22;
    FUN_14610be40();
    FUN_1407e00cc(&DAT_14ca154c8);
    return;
  }
  return;
}



// FUNCTION 14610be40 FUN_14610be40 body=123 status=ok
// SIG undefined FUN_14610be40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14610be40(void)

{
  _DAT_14ca19220 = L"BASE";
  DAT_14ca1924a = 4;
  _DAT_14ca19228 = FUN_140b35ae4();
  _DAT_14ca19230 = DAT_14ca154d8;
  _DAT_14ca19238 = &LAB_14682652b;
  DAT_14ca154d8 = &DAT_14ca19220;
  DAT_14ca1552d = DAT_14ca1552d + '\x01';
  _DAT_14ca19240 = 0x100000000;
  if (*(char *)(_DAT_14ca19228 + 100) != '\0') {
    DAT_14ca1552e = DAT_14ca1552e + '\x01';
  }
  return;
}



// FUNCTION 14610bebc FUN_14610bebc body=205 status=ok
// SIG undefined FUN_14610bebc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14610bebc(void)

{
  if ((DAT_14ca15657 & 2) == 0) {
    DAT_14ca15657 = DAT_14ca15657 | 2;
    _DAT_14ca155f8 = L"FInitNodeCullArgs_CS";
    _DAT_14ca15610 = FUN_146826540;
    _DAT_14ca15618 = FUN_146825d77;
    _DAT_14ca15620 = FUN_146825fd6;
    _DAT_14ca15628 = FUN_1407e02ea;
    _DAT_14ca15630 = FUN_146826273;
    _DAT_14ca15608 = FUN_147252d36;
    _DAT_14ca15648 = 0xffffffff000000e0;
    _DAT_14ca15650 = 8;
    DAT_14ca15654 = 0;
    _DAT_14ca15638 = &LAB_147252d62;
    FUN_14610bf8a();
    FUN_1407e00cc(&DAT_14ca155f0);
    return;
  }
  return;
}



// FUNCTION 14610bf8a FUN_14610bf8a body=123 status=ok
// SIG undefined FUN_14610bf8a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14610bf8a(void)

{
  _DAT_14ca19250 = L"BASE";
  DAT_14ca1927a = 4;
  _DAT_14ca19258 = FUN_140b35ae4();
  _DAT_14ca19260 = DAT_14ca15600;
  _DAT_14ca19268 = &LAB_14682652b;
  DAT_14ca15600 = &DAT_14ca19250;
  DAT_14ca15655 = DAT_14ca15655 + '\x01';
  _DAT_14ca19270 = 0x100000000;
  if (*(char *)(_DAT_14ca19258 + 100) != '\0') {
    DAT_14ca15656 = DAT_14ca15656 + '\x01';
  }
  return;
}



// FUNCTION 14610c006 FUN_14610c006 body=205 status=ok
// SIG undefined FUN_14610c006(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14610c006(void)

{
  if ((DAT_14ca158a7 & 2) == 0) {
    DAT_14ca158a7 = DAT_14ca158a7 | 2;
    _DAT_14ca15848 = L"FInitVisiblePatchesArgsCS";
    _DAT_14ca15860 = FUN_146826540;
    _DAT_14ca15868 = FUN_146825d77;
    _DAT_14ca15870 = FUN_146825fd6;
    _DAT_14ca15878 = FUN_1407e02ea;
    _DAT_14ca15880 = FUN_146826273;
    _DAT_14ca15858 = FUN_147253094;
    _DAT_14ca15898 = 0xffffffff000000e0;
    _DAT_14ca158a0 = 8;
    DAT_14ca158a4 = 0;
    _DAT_14ca15888 = &LAB_1472530c0;
    FUN_14610c0d4();
    FUN_1407e00cc(&DAT_14ca15840);
    return;
  }
  return;
}



// FUNCTION 14610c0d4 FUN_14610c0d4 body=123 status=ok
// SIG undefined FUN_14610c0d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14610c0d4(void)

{
  _DAT_14ca192b0 = L"BASE";
  DAT_14ca192da = 4;
  _DAT_14ca192b8 = FUN_140b35ae4();
  _DAT_14ca192c0 = DAT_14ca15850;
  _DAT_14ca192c8 = &LAB_14682652b;
  DAT_14ca15850 = &DAT_14ca192b0;
  DAT_14ca158a5 = DAT_14ca158a5 + '\x01';
  _DAT_14ca192d0 = 0x100000000;
  if (*(char *)(_DAT_14ca192b8 + 100) != '\0') {
    DAT_14ca158a6 = DAT_14ca158a6 + '\x01';
  }
  return;
}



// FUNCTION 14610c150 FUN_14610c150 body=205 status=ok
// SIG undefined FUN_14610c150(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14610c150(void)

{
  if ((DAT_14ca15af7 & 2) == 0) {
    DAT_14ca15af7 = DAT_14ca15af7 | 2;
    _DAT_14ca15a98 = L"FRasterBinInit_CS";
    _DAT_14ca15ab0 = FUN_146826540;
    _DAT_14ca15ab8 = FUN_146825d77;
    _DAT_14ca15ac0 = FUN_146825fd6;
    _DAT_14ca15ac8 = FUN_1407e02ea;
    _DAT_14ca15ad0 = FUN_146826273;
    _DAT_14ca15aa8 = FUN_147253510;
    _DAT_14ca15ae8 = 0xffffffff000000e0;
    _DAT_14ca15af0 = 8;
    DAT_14ca15af4 = 0;
    _DAT_14ca15ad8 = &LAB_14725353c;
    FUN_14610c21e();
    FUN_1407e00cc(&DAT_14ca15a90);
    return;
  }
  return;
}



// FUNCTION 14610c21e FUN_14610c21e body=123 status=ok
// SIG undefined FUN_14610c21e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14610c21e(void)

{
  _DAT_14ca19310 = L"BASE";
  DAT_14ca1933a = 4;
  _DAT_14ca19318 = FUN_140b35ae4();
  _DAT_14ca19320 = DAT_14ca15aa0;
  _DAT_14ca19328 = &LAB_14682652b;
  DAT_14ca15aa0 = &DAT_14ca19310;
  DAT_14ca15af5 = DAT_14ca15af5 + '\x01';
  _DAT_14ca19330 = 0x100000000;
  if (*(char *)(_DAT_14ca19318 + 100) != '\0') {
    DAT_14ca15af6 = DAT_14ca15af6 + '\x01';
  }
  return;
}



// FUNCTION 14610c29a FUN_14610c29a body=205 status=ok
// SIG undefined FUN_14610c29a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14610c29a(void)

{
  if ((DAT_14ca15c1f & 2) == 0) {
    DAT_14ca15c1f = DAT_14ca15c1f | 2;
    _DAT_14ca15bc0 = L"FRasterBinReserve_CS";
    _DAT_14ca15bd8 = FUN_146826540;
    _DAT_14ca15be0 = FUN_146825d77;
    _DAT_14ca15be8 = FUN_146825fd6;
    _DAT_14ca15bf0 = FUN_1407e02ea;
    _DAT_14ca15bf8 = FUN_146826273;
    _DAT_14ca15bd0 = FUN_147253750;
    _DAT_14ca15c10 = 0xffffffff000000e0;
    _DAT_14ca15c18 = 8;
    DAT_14ca15c1c = 0;
    _DAT_14ca15c00 = &LAB_14725377c;
    FUN_14610c368();
    FUN_1407e00cc(&DAT_14ca15bb8);
    return;
  }
  return;
}



// FUNCTION 14610c368 FUN_14610c368 body=123 status=ok
// SIG undefined FUN_14610c368(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14610c368(void)

{
  _DAT_14ca19340 = L"BASE";
  DAT_14ca1936a = 4;
  _DAT_14ca19348 = FUN_140b35ae4();
  _DAT_14ca19350 = DAT_14ca15bc8;
  _DAT_14ca19358 = &LAB_14682652b;
  DAT_14ca15bc8 = &DAT_14ca19340;
  DAT_14ca15c1d = DAT_14ca15c1d + '\x01';
  _DAT_14ca19360 = 0x100000000;
  if (*(char *)(_DAT_14ca19348 + 100) != '\0') {
    DAT_14ca15c1e = DAT_14ca15c1e + '\x01';
  }
  return;
}



// FUNCTION 14610c3e4 FUN_14610c3e4 body=205 status=ok
// SIG undefined FUN_14610c3e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14610c3e4(void)

{
  if ((DAT_14ca15d47 & 2) == 0) {
    DAT_14ca15d47 = DAT_14ca15d47 | 2;
    _DAT_14ca15ce8 = L"FRasterBinFinalize_CS";
    _DAT_14ca15d00 = FUN_146826540;
    _DAT_14ca15d08 = FUN_146825d77;
    _DAT_14ca15d10 = FUN_146825fd6;
    _DAT_14ca15d18 = FUN_1407e02ea;
    _DAT_14ca15d20 = FUN_146826273;
    _DAT_14ca15cf8 = FUN_147253990;
    _DAT_14ca15d38 = 0xffffffff000000e0;
    _DAT_14ca15d40 = 8;
    DAT_14ca15d44 = 0;
    _DAT_14ca15d28 = &LAB_1472539bc;
    FUN_14610c4b2();
    FUN_1407e00cc(&DAT_14ca15ce0);
    return;
  }
  return;
}



// FUNCTION 14610c4b2 FUN_14610c4b2 body=123 status=ok
// SIG undefined FUN_14610c4b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14610c4b2(void)

{
  _DAT_14ca19370 = L"BASE";
  DAT_14ca1939a = 4;
  _DAT_14ca19378 = FUN_140b35ae4();
  _DAT_14ca19380 = DAT_14ca15cf0;
  _DAT_14ca19388 = &LAB_14682652b;
  DAT_14ca15cf0 = &DAT_14ca19370;
  DAT_14ca15d45 = DAT_14ca15d45 + '\x01';
  _DAT_14ca19390 = 0x100000000;
  if (*(char *)(_DAT_14ca19378 + 100) != '\0') {
    DAT_14ca15d46 = DAT_14ca15d46 + '\x01';
  }
  return;
}



// FUNCTION 14610c52e FUN_14610c52e body=205 status=ok
// SIG undefined FUN_14610c52e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14610c52e(void)

{
  if ((DAT_14ca15e6f & 2) == 0) {
    DAT_14ca15e6f = DAT_14ca15e6f | 2;
    _DAT_14ca15e10 = L"FInitPatchSplitArgs_CS";
    _DAT_14ca15e28 = FUN_146826540;
    _DAT_14ca15e30 = FUN_146825d77;
    _DAT_14ca15e38 = FUN_146825fd6;
    _DAT_14ca15e40 = FUN_1407e02ea;
    _DAT_14ca15e48 = FUN_146826273;
    _DAT_14ca15e20 = FUN_147253bd0;
    _DAT_14ca15e60 = 0xffffffff000000e0;
    _DAT_14ca15e68 = 8;
    DAT_14ca15e6c = 0;
    _DAT_14ca15e50 = &LAB_147253bfc;
    FUN_14610c5fc();
    FUN_1407e00cc(&DAT_14ca15e08);
    return;
  }
  return;
}



// FUNCTION 14610c5fc FUN_14610c5fc body=123 status=ok
// SIG undefined FUN_14610c5fc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14610c5fc(void)

{
  _DAT_14ca193a0 = L"BASE";
  DAT_14ca193ca = 4;
  _DAT_14ca193a8 = FUN_140b35ae4();
  _DAT_14ca193b0 = DAT_14ca15e18;
  _DAT_14ca193b8 = &LAB_14682652b;
  DAT_14ca15e18 = &DAT_14ca193a0;
  DAT_14ca15e6d = DAT_14ca15e6d + '\x01';
  _DAT_14ca193c0 = 0x100000000;
  if (*(char *)(_DAT_14ca193a8 + 100) != '\0') {
    DAT_14ca15e6e = DAT_14ca15e6e + '\x01';
  }
  return;
}


