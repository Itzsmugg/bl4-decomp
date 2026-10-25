// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146ffb54a FUN_146ffb54a body=83 status=ok
// SIG undefined FUN_146ffb54a(void)

void FUN_146ffb54a(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(param_1);
  return;
}



// FUNCTION 146ffb59e FUN_146ffb59e body=298 status=ok
// SIG undefined FUN_146ffb59e(void)

undefined4 * FUN_146ffb59e(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  undefined4 uVar3;
  char cVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146ffb6ca(param_1,local_48);
  *local_40 = *param_3;
  *param_3 = 0;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar1 = *(undefined8 *)*local_40;
  uVar2 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar6 = (uint)uVar1 & 0xffff;
  iVar8 = ((uint)uVar1 << 0x10 | uVar6) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4);
  cVar4 = FUN_146ffb7c8(param_1,iVar8,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    cVar4 = FUN_146ffb9f8(param_1,*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x3c));
    if (cVar4 == '\0') {
      uVar5 = (longlong)iVar8 & (longlong)*(int *)(param_1 + 0x50) - 1U;
      iVar8 = (int)uVar5;
      *(int *)((longlong)local_40 + 0xc) = iVar8;
      lVar7 = *(longlong *)(param_1 + 0x48);
      if (*(longlong *)(param_1 + 0x48) == 0) {
        lVar7 = param_1 + 0x40;
      }
      *(undefined4 *)(local_40 + 1) =
           *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x50) - 1U & uVar5) * 4);
      lVar7 = *(longlong *)(param_1 + 0x48);
      if (*(longlong *)(param_1 + 0x48) == 0) {
        lVar7 = param_1 + 0x40;
      }
      *(undefined4 *)(lVar7 + ((longlong)iVar8 & (longlong)*(int *)(param_1 + 0x50) - 1U) * 4) =
           uVar3;
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ffb6ca FUN_146ffb6ca body=254 status=ok
// SIG undefined FUN_146ffb6ca(void)

int * FUN_146ffb6ca(longlong param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)(param_1 + 0x3c) == 0) {
    iVar6 = *(int *)(param_1 + 0x18);
    *(int *)(param_1 + 0x18) = iVar6 + 1;
    if (*(int *)(param_1 + 0x1c) == iVar6) {
      FUN_146ffb87a(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_14489e6aa(param_1 + 0x20,1);
    lVar4 = *(longlong *)(param_1 + 0x28);
    if (*(longlong *)(param_1 + 0x28) == 0) {
      lVar4 = param_1 + 0x20;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)(lVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x10);
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar4 = param_1;
    }
    iVar6 = *(int *)(param_1 + 0x38);
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(lVar4 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 0x38) = iVar3;
    iVar5 = *(int *)(param_1 + 0x3c) + -1;
    *(int *)(param_1 + 0x3c) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(lVar4 + (longlong)iVar3 * 0x10) = 0xffffffff;
    }
  }
  lVar4 = param_1 + 0x20;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x28);
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)(lVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar4 = param_1;
  }
  *(longlong *)(param_2 + 2) = lVar7 * 0x10 + lVar4;
  return param_2;
}



// FUNCTION 146ffb7c8 FUN_146ffb7c8 body=177 status=ok
// SIG undefined FUN_146ffb7c8(void)

undefined8 FUN_146ffb7c8(longlong param_1,uint param_2,undefined8 *param_3,int *param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  
  if ((*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x3c) != 1) &&
     (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x3c))) {
    lVar3 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x48);
    }
    iVar5 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x50) - 1U & param_2) * 4);
    if (iVar5 != -1) {
      plVar4 = (longlong *)*param_3;
      lVar3 = *(longlong *)(param_1 + 0x10);
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar3 = param_1;
      }
      do {
        puVar1 = (undefined8 *)(lVar3 + (longlong)iVar5 * 0x10);
        plVar2 = *(longlong **)(lVar3 + (longlong)iVar5 * 0x10);
        if (*plVar2 == *plVar4) {
          if (plVar2 != (longlong *)0x0) {
            FUN_145c17a80(plVar2);
            FUN_1400020a8(plVar2);
            plVar4 = (longlong *)*param_3;
          }
          *puVar1 = plVar4;
          FUN_146ffb97c(param_1,*param_4);
          *param_4 = iVar5;
          return 1;
        }
        iVar5 = *(int *)(puVar1 + 1);
      } while (iVar5 != -1);
    }
  }
  return 0;
}



// FUNCTION 146ffb87a FUN_146ffb87a body=124 status=ok
// SIG undefined FUN_146ffb87a(void)

void FUN_146ffb87a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (param_2 <= (int)uVar1) {
    iVar6 = 1;
    if (1 < uVar1) {
      if (*(uint *)(param_1 + 0x1c) < 2) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar5 = (longlong)(int)uVar2;
      }
      else {
        lVar5 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar5 << 4,0);
      iVar3 = (int)(uVar4 >> 4);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar6 = iVar3;
      }
    }
    *(int *)(param_1 + 0x1c) = iVar6;
    FUN_146ffb8f8(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146ffb8f8 FUN_146ffb8f8 body=131 status=ok
// SIG undefined FUN_146ffb8f8(void)

void FUN_146ffb8f8(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x10);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x10,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x10),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x10,param_2,param_3,0x10);
  return;
}



// FUNCTION 146ffb97c FUN_146ffb97c body=123 status=ok
// SIG undefined FUN_146ffb97c(void)

void FUN_146ffb97c(longlong param_1,int param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar4 = param_1;
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    *(int *)(lVar4 + (longlong)*(int *)(param_1 + 0x38) * 0x10) = param_2;
  }
  *(undefined4 *)(lVar4 + (longlong)param_2 * 0x10) = 0xffffffff;
  if (*(int *)(param_1 + 0x3c) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = *(undefined4 *)(param_1 + 0x38);
  }
  *(undefined4 *)(lVar4 + (longlong)param_2 * 0x10 + 4) = uVar5;
  *(int *)(param_1 + 0x38) = param_2;
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
  lVar4 = param_1 + 0x20;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x28);
  }
  iVar3 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar3 = param_2;
  }
  bVar2 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)(lVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 146ffb9f8 FUN_146ffb9f8 body=87 status=ok
// SIG undefined FUN_146ffb9f8(void)

undefined8 FUN_146ffb9f8(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar1 = (ulonglong)(((param_2 >> 1) - 1) + (uint)(param_2 >> 1 == 0)) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  iVar3 = 1 << ((byte)lVar2 & 0x1f);
  if (param_2 < 4) {
    iVar3 = 1;
  }
  if (((int)param_2 < 1) || (iVar3 <= *(int *)(param_1 + 0x50))) {
    uVar4 = 0;
  }
  else {
    *(int *)(param_1 + 0x50) = iVar3;
    FUN_146ffba50(param_1);
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 146ffba50 FUN_146ffba50 body=487 status=ok
// SIG undefined FUN_146ffba50(void)

void FUN_146ffba50(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1446efa72(param_1 + 0x48,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 0x50);
  uVar3 = local_58;
  if (uVar2 != 0) {
    lVar1 = param_1 + 0x40;
    uVar7 = 0;
    FUN_144a1cbf0(lVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        lVar5 = *(longlong *)(param_1 + 0x48);
        if (*(longlong *)(param_1 + 0x48) == 0) {
          lVar5 = lVar1;
        }
        *(undefined4 *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x50) + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar2 != uVar7);
    }
    local_40 = param_1 + 0x20;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if (*(int *)(param_1 + 0x30) != 0) {
      FUN_144a81a4c(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < *(int *)(local_40 + 0x10)) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar5 = *(longlong *)(local_70 + 0x10);
        if (*(longlong *)(local_70 + 0x10) == 0) {
          lVar5 = local_70;
        }
        lVar6 = (longlong)iVar4 * 0x10;
        uVar3 = **(undefined8 **)(lVar5 + lVar6);
        uVar2 = (uint)((ulonglong)uVar3 >> 0x10);
        uVar7 = (uint)uVar3 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar3 << 0x10 | uVar7) + (int)((ulonglong)uVar3 >> 0x20) +
                      (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar7 >> 4)) &
                (longlong)*(int *)(param_1 + 0x50) - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar5 + 0xc + lVar6) = iVar8;
        lVar10 = *(longlong *)(param_1 + 0x48);
        if (*(longlong *)(param_1 + 0x48) == 0) {
          lVar10 = lVar1;
        }
        *(undefined4 *)(lVar5 + 8 + lVar6) =
             *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x50) - 1U & uVar9) * 4);
        lVar5 = *(longlong *)(param_1 + 0x48);
        if (*(longlong *)(param_1 + 0x48) == 0) {
          lVar5 = lVar1;
        }
        *(int *)(lVar5 + ((longlong)iVar8 & (longlong)*(int *)(param_1 + 0x50) - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_144a81a4c(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < *(int *)(local_60 + 0x10));
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ffbc38 FUN_146ffbc38 body=143 status=ok
// SIG undefined FUN_146ffbc38(void)

void FUN_146ffbc38(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  param_1[3] = 0;
  param_1[4] = 0x100000000;
  param_1[6] = 0;
  param_1[7] = 0x2000000000;
  param_1[8] = 0xffffffff;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0x100000000;
  param_1[0x11] = 0;
  param_1[0x12] = 0x2000000000;
  param_1[0x13] = 0xffffffff;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}



// FUNCTION 146ffbcc8 FUN_146ffbcc8 body=131 status=ok
// SIG undefined FUN_146ffbcc8(void)

void FUN_146ffbcc8(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x10);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x10,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x10),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x10,param_2,param_3,0x10);
  return;
}



// FUNCTION 146ffbd4c FUN_146ffbd4c body=52 status=ok
// SIG undefined FUN_146ffbd4c(void)

void FUN_146ffbd4c(longlong *param_1)

{
  FUN_146ffbd80();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146ffbd80 FUN_146ffbd80 body=317 status=ok
// SIG undefined FUN_146ffbd80(void)

void FUN_146ffbd80(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      if (*(longlong *)(*local_68 + 0x18 + (longlong)iStack_4c * 0x30) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14494313c(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ffbebe FUN_146ffbebe body=80 status=ok
// SIG undefined FUN_146ffbebe(void)

longlong * FUN_146ffbebe(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_146ffbf0e(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 146ffbf0e FUN_146ffbf0e body=43 status=ok
// SIG undefined FUN_146ffbf0e(void)

void FUN_146ffbf0e(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 146ffbfb6 FUN_146ffbfb6 body=59 status=ok
// SIG undefined FUN_146ffbfb6(void)

undefined8 FUN_146ffbfb6(longlong *param_1)

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



// FUNCTION 146ffc074 FUN_146ffc074 body=93 status=ok
// SIG undefined FUN_146ffc074(void)

void FUN_146ffc074(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149fc9910;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146ffc0d2 FUN_146ffc0d2 body=126 status=ok
// SIG undefined FUN_146ffc0d2(void)

void FUN_146ffc0d2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e001f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149fc9910;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146ffc141. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146ffc15e FUN_146ffc15e body=21 status=ok
// SIG undefined FUN_146ffc15e(void)

undefined8 FUN_146ffc15e(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 146ffc174 FUN_146ffc174 body=289 status=ok
// SIG undefined FUN_146ffc174(void)

undefined4 * FUN_146ffc174(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  undefined1 auStack_68 [40];
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1406e28c6(param_1,local_40);
  FUN_146ffc296(param_3,local_38);
  *(undefined4 *)(local_38 + 3) = 0xffffffff;
  uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  iVar5 = 1;
  if (3 < uVar3) {
    uVar2 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
    lVar4 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iVar5 = 1 << ((byte)lVar4 & 0x1f);
  }
  uVar1 = *local_38;
  if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
    uVar3 = (uint)((ulonglong)uVar1 >> 0x10);
    uVar6 = (uint)uVar1 & 0xffff;
    uVar3 = *(int *)(param_1 + 0x48) - 1U &
            (uVar6 >> 4) +
            ((uint)uVar1 << 0x10 | uVar6) + (int)((ulonglong)uVar1 >> 0x20) +
            (uVar3 << 0x13 | uVar3 & 0xffff);
    *(uint *)((longlong)local_38 + 0x1c) = uVar3;
    lVar4 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar4 = param_1 + 0x38;
    }
    *(undefined4 *)(local_38 + 3) =
         *(undefined4 *)
          (lVar4 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
    lVar4 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar4 = param_1 + 0x38;
    }
    *(undefined4 *)(lVar4 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4) =
         local_40[0];
  }
  else {
    *(int *)(param_1 + 0x48) = iVar5;
    FUN_146ffc302(param_1);
  }
  *param_2 = local_40[0];
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ffc296 FUN_146ffc296 body=107 status=ok
// SIG undefined FUN_146ffc296(void)

undefined8 * FUN_146ffc296(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  puVar2 = (undefined8 *)param_1[1];
  *param_2 = *(undefined8 *)*param_1;
  param_2[1] = 0;
  iVar1 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
  *(int *)(param_2 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_2 + 1,iVar1,0);
    memcpy((void *)param_2[1],_Src,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 146ffc302 FUN_146ffc302 body=476 status=ok
// SIG undefined FUN_146ffc302(void)

void FUN_146ffc302(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 146ffc508 FUN_146ffc508 body=158 status=ok
// SIG undefined FUN_146ffc508(void)

LPCRITICAL_SECTION FUN_146ffc508(LPCRITICAL_SECTION param_1,undefined8 *param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  _LIST_ENTRY *p_Var2;
  
  InitializeCriticalSection(param_1);
  SetCriticalSectionSpinCount(param_1,4000);
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[1].LockCount = 0;
  EnterCriticalSection(param_1);
  if (param_1[1].LockCount != 2) {
    FUN_1446efa72(param_1 + 1,0,2,0x10);
    param_1[1].LockCount = 2;
  }
  p_Var1 = param_1[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e1c150;
  p_Var2 = (_LIST_ENTRY *)FUN_144a3f946();
  (p_Var1->ProcessLocksList).Flink = p_Var2;
  *(undefined ***)p_Var1 = &PTR_FUN_149fc9a20;
  (p_Var1->ProcessLocksList).Blink = (_LIST_ENTRY *)*param_2;
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  return param_1;
}



// FUNCTION 146ffc5a6 FUN_146ffc5a6 body=29 status=ok
// SIG undefined FUN_146ffc5a6(void)

undefined8 FUN_146ffc5a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ffc5d8 FUN_146ffc5d8 body=93 status=ok
// SIG undefined FUN_146ffc5d8(void)

void FUN_146ffc5d8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e1c150;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149fc9a20;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 146ffc636 FUN_146ffc636 body=93 status=ok
// SIG undefined FUN_146ffc636(void)

void FUN_146ffc636(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e1c150;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149fc9a20;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 146ffc694 FUN_146ffc694 body=126 status=ok
// SIG undefined FUN_146ffc694(void)

void FUN_146ffc694(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e1c150;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149fc9a20;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146ffc703. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146ffc71c FUN_146ffc71c body=20 status=ok
// SIG undefined FUN_146ffc71c(void)

undefined1 FUN_146ffc71c(longlong param_1)

{
  FUN_146ffc730(param_1 + 0x18);
  return 1;
}



// FUNCTION 146ffc730 FUN_146ffc730 body=130 status=ok
// SIG undefined FUN_146ffc730(void)

void FUN_146ffc730(longlong *param_1,undefined8 param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  
  lVar1 = *param_1;
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar1 + 8);
  EnterCriticalSection(lpCriticalSection);
  if (*(char *)(lVar1 + 0x560) == '\x02') {
    cVar4 = FUN_146ffc7b2(lVar1,param_2);
    if (cVar4 != '\0') {
      FUN_142ad940e(lVar1);
      lVar2 = *(longlong *)(lVar1 + 0x510);
      *(undefined8 *)(lVar1 + 0x510) = 0;
      uVar3 = FUN_1411d204e();
      if (lVar2 != 0) {
        FUN_141092d32(uVar3,lVar2);
      }
    }
  }
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146ffc762. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(lpCriticalSection);
    return;
  }
  return;
}



// FUNCTION 146ffc7b2 FUN_146ffc7b2 body=199 status=ok
// SIG undefined FUN_146ffc7b2(void)

ulonglong FUN_146ffc7b2(longlong param_1,longlong *param_2)

{
  char cVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58 [4];
  undefined8 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145ff27a8(local_58);
  puVar3 = local_38;
  if (local_38 == (undefined8 *)0x0) {
    puVar3 = local_58;
  }
  if ((longlong)local_30 != 0) {
    lVar4 = (longlong)local_30 << 4;
    do {
      cVar1 = (**(code **)(*param_2 + 8))(param_2,puVar3);
      if (cVar1 != '\0') {
        uVar2 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
        if (puVar3 != (undefined8 *)(param_1 + 0x38)) {
          if (*(longlong *)(param_1 + 0x38) != 0) {
            FUN_1400020a8();
          }
          *(undefined8 *)(param_1 + 0x38) = *puVar3;
          *puVar3 = 0;
          *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(puVar3 + 1);
          *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)((longlong)puVar3 + 0xc);
          puVar3[1] = 0;
        }
        goto LAB_146ffc7f3;
      }
      puVar3 = puVar3 + 2;
      lVar4 = lVar4 + -0x10;
    } while (lVar4 != 0);
  }
  uVar2 = 0;
LAB_146ffc7f3:
  FUN_145ff2774(local_58);
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 146ffc87a FUN_146ffc87a body=122 status=ok
// SIG undefined FUN_146ffc87a(void)

longlong FUN_146ffc87a(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_146ffc8f4(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 146ffc8f4 FUN_146ffc8f4 body=376 status=ok
// SIG undefined FUN_146ffc8f4(void)

longlong * FUN_146ffc8f4(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  if (param_1 != param_2) {
    uVar3 = *(uint *)(param_2 + 1);
    FUN_1456bc6e2(param_1,(ulonglong)uVar3);
    lVar8 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar8 + uVar3;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar8) < uVar3) {
      FUN_1406a7630(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar3) {
      lVar8 = *param_1;
      lVar4 = *param_2;
      lVar11 = 0;
      uVar10 = 0;
      do {
        plVar9 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar9 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar9 + (uVar10 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar10 & 0x1f) &
            1) == 0) {
          *(undefined4 *)(lVar8 + lVar11) = *(undefined4 *)(lVar4 + lVar11);
          *(undefined4 *)(lVar8 + 4 + lVar11) = *(undefined4 *)(lVar4 + 4 + lVar11);
        }
        else {
          puVar1 = (undefined8 *)(lVar11 + lVar8 + 0x60);
          puVar2 = (undefined4 *)(lVar4 + lVar11);
          uVar5 = puVar2[1];
          uVar6 = puVar2[2];
          uVar7 = puVar2[3];
          *(undefined4 *)(puVar1 + -0xc) = *puVar2;
          *(undefined4 *)((longlong)puVar1 + -0x5c) = uVar5;
          *(undefined4 *)(puVar1 + -0xb) = uVar6;
          *(undefined4 *)((longlong)puVar1 + -0x54) = uVar7;
          puVar1[-6] = 0;
          *(undefined4 *)(puVar1 + -5) = 0;
          puVar1[-10] = 0;
          puVar1[-9] = 0;
          *(undefined8 *)((longlong)puVar1 + -0x24) = 0xffffffff00000080;
          *(undefined4 *)((longlong)puVar1 + -0x1c) = 0;
          puVar1[-2] = 0;
          *(undefined4 *)(puVar1 + -1) = 0;
          FUN_144881636(lVar8 + 0x10 + lVar11,lVar4 + 0x10 + lVar11);
          *puVar1 = *(undefined8 *)(puVar2 + 0x18);
        }
        uVar10 = uVar10 + 1;
        lVar11 = lVar11 + 0x68;
      } while (uVar3 != uVar10);
    }
  }
  return param_1;
}



// FUNCTION 146ffca6c FUN_146ffca6c body=63 status=ok
// SIG undefined FUN_146ffca6c(void)

void FUN_146ffca6c(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 146ffcaac FUN_146ffcaac body=122 status=ok
// SIG undefined FUN_146ffcaac(void)

longlong FUN_146ffcaac(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_146ffcb26(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 146ffcb26 FUN_146ffcb26 body=121 status=ok
// SIG undefined FUN_146ffcb26(void)

undefined8 * FUN_146ffcb26(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_146860664(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_14055df60(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x28);
    }
  }
  return param_1;
}



// FUNCTION 146ffcba0 FUN_146ffcba0 body=290 status=ok
// SIG undefined FUN_146ffcba0(void)

longlong * FUN_146ffcba0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = *param_2;
  local_88 = (longlong *)0x0;
  if (local_98 != 0) {
    plVar7 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[2];
    }
    (**(code **)*plVar7)(plVar7,&local_88);
  }
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = (longlong *)param_1[2];
  uStack_40 = param_1[3];
  local_38 = param_1[4];
  uStack_30 = param_1[5];
  local_28 = param_1[6];
  uStack_20 = param_1[7];
  lVar5 = local_28;
  lVar6 = uStack_20;
  lVar3 = local_38;
  lVar4 = uStack_30;
  lVar2 = uStack_40;
  lVar1 = uStack_50;
  param_1[6] = CONCAT44(uStack_64,local_68);
  param_1[7] = CONCAT44(uStack_5c,uStack_60);
  param_1[4] = CONCAT44(uStack_74,local_78);
  param_1[5] = CONCAT44(uStack_6c,uStack_70);
  param_1[2] = (longlong)local_88;
  param_1[3] = CONCAT44(uStack_7c,uStack_80);
  *param_1 = local_98;
  param_1[1] = CONCAT44(uStack_8c,uStack_90);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_98 = local_58;
  local_88 = local_48;
  uStack_50 = lVar1;
  uStack_40 = lVar2;
  local_38 = lVar3;
  uStack_30 = lVar4;
  local_28 = lVar5;
  uStack_20 = lVar6;
  if (local_58 != 0) {
    plVar7 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar7 = (longlong *)&local_78;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ffccc4 FUN_146ffccc4 body=301 status=ok
// SIG undefined FUN_146ffccc4(void)

undefined4 * FUN_146ffccc4(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined1 auStack_58 [32];
  undefined4 local_38 [2];
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_146ffcdf2(param_1,local_38);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_30 = uVar2;
  local_30[1] = *puVar1;
  *(undefined4 *)(local_30 + 2) = 0xffffffff;
  uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  iVar6 = 1;
  if (3 < uVar5) {
    uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
    lVar3 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar6 = 1 << ((byte)lVar3 & 0x1f);
  }
  if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
    uVar5 = (uint)((ulonglong)uVar2 >> 0x10);
    uVar7 = (uint)uVar2 & 0xffff;
    uVar5 = *(int *)(param_1 + 0x48) - 1U &
            (uVar7 >> 4) +
            ((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
            (uVar5 << 0x13 | uVar5 & 0xffff);
    *(uint *)((longlong)local_30 + 0x14) = uVar5;
    lVar3 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar3 = param_1 + 0x38;
    }
    *(undefined4 *)(local_30 + 2) =
         *(undefined4 *)
          (lVar3 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
    lVar3 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar3 = param_1 + 0x38;
    }
    *(undefined4 *)(lVar3 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4) =
         local_38[0];
  }
  else {
    *(int *)(param_1 + 0x48) = iVar6;
    FUN_146ffced8(param_1);
  }
  *param_2 = local_38[0];
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ffcdf2 FUN_146ffcdf2 body=230 status=ok
// SIG undefined FUN_146ffcdf2(void)

int * FUN_146ffcdf2(longlong *param_1,int *param_2)

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



// FUNCTION 146ffced8 FUN_146ffced8 body=473 status=ok
// SIG undefined FUN_146ffced8(void)

void FUN_146ffced8(longlong *param_1)

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



// FUNCTION 146ffd0b2 FUN_146ffd0b2 body=52 status=ok
// SIG undefined FUN_146ffd0b2(void)

void FUN_146ffd0b2(longlong *param_1)

{
  FUN_146ffd0e6();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146ffd0e6 FUN_146ffd0e6 body=89 status=ok
// SIG undefined FUN_146ffd0e6(void)

void FUN_146ffd0e6(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
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



// FUNCTION 146ffd140 FUN_146ffd140 body=232 status=ok
// SIG undefined FUN_146ffd140(void)

void FUN_146ffd140(longlong *param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  
  if ((int)param_1[9] != 0) {
    uVar2 = (uint)((ulonglong)param_2 >> 0x10);
    uVar6 = (uint)param_2 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar3 +
                    (longlong)
                    (int)((int)param_1[9] - 1U &
                         ((uint)param_2 << 0x10 | uVar6) + (int)((ulonglong)param_2 >> 0x20) +
                         (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
    while (iVar4 = iVar5, iVar4 != -1) {
      lVar7 = *param_1;
      iVar5 = *(int *)(lVar7 + 0x10 + (longlong)iVar4 * 0x18);
      if (*(longlong *)(lVar7 + (longlong)iVar4 * 0x18) == param_2) {
        do {
          iVar1 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
            FUN_146ffd32a(param_3,iVar1);
          }
          *(longlong *)(*param_3 + (longlong)iVar1 * 8) = lVar7 + (longlong)iVar4 * 0x18 + 8;
          do {
            iVar4 = iVar5;
            if (iVar4 == -1) {
              return;
            }
            lVar7 = *param_1;
            iVar5 = *(int *)(lVar7 + 0x10 + (longlong)iVar4 * 0x18);
          } while (*(longlong *)(lVar7 + (longlong)iVar4 * 0x18) != param_2);
        } while( true );
      }
    }
  }
  return;
}



// FUNCTION 146ffd228 FUN_146ffd228 body=257 status=ok
// SIG undefined FUN_146ffd228(void)

void FUN_146ffd228(longlong *param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  
  if ((int)param_1[9] != 0) {
    uVar2 = (uint)((ulonglong)param_2 >> 0x10);
    uVar6 = (uint)param_2 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar3 +
                    (longlong)
                    (int)((int)param_1[9] - 1U &
                         ((uint)param_2 << 0x10 | uVar6) + (int)((ulonglong)param_2 >> 0x20) +
                         (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
    while (iVar4 = iVar5, iVar4 != -1) {
      lVar7 = *param_1;
      iVar5 = *(int *)(lVar7 + 0xf0 + (longlong)iVar4 * 0xf8);
      if (*(longlong *)(lVar7 + (longlong)iVar4 * 0xf8) == param_2) {
        do {
          iVar1 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
            FUN_146ffd49a(param_3,iVar1);
          }
          FUN_146ffd3b0((longlong)iVar1 * 0xe8 + *param_3,lVar7 + (longlong)iVar4 * 0xf8 + 8);
          do {
            iVar4 = iVar5;
            if (iVar4 == -1) {
              return;
            }
            lVar7 = *param_1;
            iVar5 = *(int *)(lVar7 + 0xf0 + (longlong)iVar4 * 0xf8);
          } while (*(longlong *)(lVar7 + (longlong)iVar4 * 0xf8) != param_2);
        } while( true );
      }
    }
  }
  return;
}



// FUNCTION 146ffd32a FUN_146ffd32a body=132 status=ok
// SIG undefined FUN_146ffd32a(void)

void FUN_146ffd32a(longlong param_1,int param_2)

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



// FUNCTION 146ffd3b0 FUN_146ffd3b0 body=234 status=ok
// SIG undefined FUN_146ffd3b0(void)

undefined8 * FUN_146ffd3b0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  FUN_146ffd52e(param_1 + 1,param_2 + 1);
  param_1[0x18] = 0;
  iVar1 = *(int *)(param_2 + 0x19);
  _Src = (void *)param_2[0x18];
  *(int *)(param_1 + 0x19) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  }
  else {
    FUN_146ffaa82(param_1 + 0x18,iVar1,0);
    memcpy((void *)param_1[0x18],_Src,(longlong)iVar1 * 0xc);
  }
  param_1[0x1a] = 0;
  iVar1 = *(int *)(param_2 + 0x1b);
  uVar2 = param_2[0x1a];
  *(int *)(param_1 + 0x1b) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  }
  else {
    FUN_146ffab24(param_1 + 0x1a,iVar1,0);
    FUN_146ffab86(param_1[0x1a],uVar2,iVar1);
  }
  *(undefined2 *)(param_1 + 0x1c) = *(undefined2 *)(param_2 + 0x1c);
  return param_1;
}



// FUNCTION 146ffd49a FUN_146ffd49a body=146 status=ok
// SIG undefined FUN_146ffd49a(void)

void FUN_146ffd49a(longlong param_1,int param_2)

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
    uVar5 = FUN_144a3809e(lVar4 * 0xe8,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar2 * ZEXT816(0x8d3dcb08d3dcb09),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0xe8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146ffd52e FUN_146ffd52e body=220 status=ok
// SIG undefined FUN_146ffd52e(void)

undefined8 * FUN_146ffd52e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar5 = *param_2;
  uVar6 = param_2[1];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 3);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 3) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
  *param_1 = uVar5;
  param_1[1] = uVar6;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  FUN_146ffcaac(param_1 + 5,param_2 + 5);
  param_1[0xf] = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  _Src = (void *)param_2[0xf];
  *(int *)(param_1 + 0x10) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  }
  else {
    FUN_1401b309e(param_1 + 0xf,iVar1,0);
    memcpy((void *)param_1[0xf],_Src,(longlong)iVar1 << 3);
  }
  uVar5 = param_2[0x11];
  uVar6 = param_2[0x12];
  uVar7 = param_2[0x13];
  uVar8 = param_2[0x14];
  uVar9 = *(undefined8 *)((longlong)param_2 + 0xad);
  *(undefined8 *)((longlong)param_1 + 0xa5) = *(undefined8 *)((longlong)param_2 + 0xa5);
  *(undefined8 *)((longlong)param_1 + 0xad) = uVar9;
  param_1[0x13] = uVar7;
  param_1[0x14] = uVar8;
  param_1[0x11] = uVar5;
  param_1[0x12] = uVar6;
  return param_1;
}



// FUNCTION 146ffd60a FUN_146ffd60a body=173 status=ok
// SIG undefined FUN_146ffd60a(void)

void FUN_146ffd60a(longlong *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  int *piVar4;
  ulonglong uVar5;
  uint uVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)((ulonglong)param_2 >> 0x10);
    uVar6 = (uint)param_2 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    uVar5 = (longlong)
            (int)(((uint)param_2 << 0x10 | uVar6) + (int)((ulonglong)param_2 >> 0x20) +
                  (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) & (longlong)(int)param_1[9] - 1U;
    iVar1 = *(int *)((longlong)plVar3 + uVar5 * 4);
    if (iVar1 != -1) {
      piVar4 = (int *)((longlong)plVar3 + uVar5 * 4);
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0xf8) == param_2) {
          FUN_146ffd6b8(param_1);
        }
        else {
          piVar4 = (int *)(*param_1 + (longlong)iVar1 * 0xf8 + 0xf0);
        }
        iVar1 = *piVar4;
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 146ffd6b8 FUN_146ffd6b8 body=260 status=ok
// SIG undefined FUN_146ffd6b8(void)

void FUN_146ffd6b8(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  
  lVar2 = *param_1;
  lVar4 = (longlong)param_2 * 0xf8;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar9 = (longlong)*(int *)(lVar2 + 0xf4 + lVar4);
  iVar8 = *(int *)((longlong)plVar5 + lVar9 * 4);
  if (iVar8 == param_2) {
    puVar6 = (undefined4 *)((longlong)plVar5 + lVar9 * 4);
  }
  else {
    do {
      lVar9 = (longlong)iVar8;
      iVar8 = *(int *)(lVar2 + 0xf0 + lVar9 * 0xf8);
    } while (iVar8 != param_2);
    puVar6 = (undefined4 *)(lVar2 + lVar9 * 0xf8 + 0xf0);
  }
  *puVar6 = *(undefined4 *)(lVar2 + lVar4 + 0xf0);
  FUN_146ff7a86(*param_1 + lVar4 + 8);
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0xf8) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xf8) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xf8 + 4) = uVar7;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar8 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar8 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar8 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 146ffd7bc FUN_146ffd7bc body=411 status=ok
// SIG undefined FUN_146ffd7bc(void)

void FUN_146ffd7bc(longlong *param_1,uint param_2)

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
      FUN_144727cd0(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_14482b872(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(lVar2 + uVar9 * 0x18 + -0x14);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = iVar8 + -1;
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
        puVar5 = puVar5 + -6;
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



// FUNCTION 146ffd958 FUN_146ffd958 body=473 status=ok
// SIG undefined FUN_146ffd958(void)

void FUN_146ffd958(longlong *param_1)

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



// FUNCTION 146ffdb32 FUN_146ffdb32 body=166 status=ok
// SIG undefined FUN_146ffdb32(void)

void FUN_146ffdb32(longlong *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  uint uVar5;
  int *piVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)((ulonglong)param_2 >> 0x10);
    uVar5 = (uint)param_2 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    uVar4 = (longlong)
            (int)(((uint)param_2 << 0x10 | uVar5) + (int)((ulonglong)param_2 >> 0x20) +
                  (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) & (longlong)(int)param_1[9] - 1U;
    iVar1 = *(int *)((longlong)plVar3 + uVar4 * 4);
    if (iVar1 != -1) {
      piVar6 = (int *)((longlong)plVar3 + uVar4 * 4);
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x18) == param_2) {
          FUN_146ffdbd8(param_1);
        }
        else {
          piVar6 = (int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
        }
        iVar1 = *piVar6;
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 146ffdbd8 FUN_146ffdbd8 body=87 status=ok
// SIG undefined FUN_146ffdbd8(void)

void FUN_146ffdbd8(longlong *param_1,int param_2)

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
  FUN_146ffdc30();
  return;
}



// FUNCTION 146ffdc30 FUN_146ffdc30 body=179 status=ok
// SIG undefined FUN_146ffdc30(void)

void FUN_146ffdc30(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *(longlong *)(*param_1 + 8 + (longlong)param_2 * 0x18);
  if (lVar3 != 0) {
    FUN_14128b0c2(lVar3);
    FUN_1400020a8(lVar3);
  }
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



// FUNCTION 146ffdce4 FUN_146ffdce4 body=310 status=ok
// SIG undefined FUN_146ffdce4(void)

undefined4 * FUN_146ffdce4(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38 [2];
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_146ffde1c(param_1,local_38);
  uVar1 = param_3[1];
  *local_30 = *(undefined8 *)*param_3;
  FUN_146ffd3b0(local_30 + 1,uVar1);
  *(undefined4 *)(local_30 + 0x1e) = 0xffffffff;
  uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  iVar5 = 1;
  if (3 < uVar3) {
    uVar2 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
    lVar4 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iVar5 = 1 << ((byte)lVar4 & 0x1f);
  }
  uVar1 = *local_30;
  if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
    uVar3 = (uint)((ulonglong)uVar1 >> 0x10);
    uVar6 = (uint)uVar1 & 0xffff;
    uVar3 = *(int *)(param_1 + 0x48) - 1U &
            (uVar6 >> 4) +
            ((uint)uVar1 << 0x10 | uVar6) + (int)((ulonglong)uVar1 >> 0x20) +
            (uVar3 << 0x13 | uVar3 & 0xffff);
    *(uint *)((longlong)local_30 + 0xf4) = uVar3;
    lVar4 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar4 = param_1 + 0x38;
    }
    *(undefined4 *)(local_30 + 0x1e) =
         *(undefined4 *)
          (lVar4 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
    lVar4 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar4 = param_1 + 0x38;
    }
    *(undefined4 *)(lVar4 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4) =
         local_38[0];
  }
  else {
    *(int *)(param_1 + 0x48) = iVar5;
    FUN_146ffdf4e(param_1);
  }
  *param_2 = local_38[0];
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ffde1c FUN_146ffde1c body=237 status=ok
// SIG undefined FUN_146ffde1c(void)

int * FUN_146ffde1c(longlong *param_1,int *param_2)

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
      FUN_1457075e4(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0xf8);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0xf8) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0xf8 + *param_1;
  return param_2;
}



// FUNCTION 146ffdf0a FUN_146ffdf0a body=68 status=ok
// SIG undefined FUN_146ffdf0a(void)

void FUN_146ffdf0a(longlong param_1,uint param_2)

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
  if (((int)param_2 < 1 || iVar3 <= *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) <= iVar3)
     ) {
    return;
  }
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_146ffdf4e(param_1);
  return;
}



// FUNCTION 146ffdf4e FUN_146ffdf4e body=482 status=ok
// SIG undefined FUN_146ffdf4e(void)

void FUN_146ffdf4e(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0xf8;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0xf4 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0xf0 + lVar7) =
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



// FUNCTION 146ffe131 FUN_146ffe131 body=41 status=ok
// SIG undefined FUN_146ffe131(void)

void FUN_146ffe131(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146ff7a86(param_1);
    param_1 = param_1 + 0xe8;
  }
  return;
}



// FUNCTION 146ffe15a FUN_146ffe15a body=112 status=ok
// SIG undefined FUN_146ffe15a(void)

void FUN_146ffe15a(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0xe8,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    iVar3 = SUB164(auVar1 * ZEXT816(0x8d3dcb08d3dcb09),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar4,0xe8,8);
  }
  return;
}



// FUNCTION 146ffe1ca FUN_146ffe1ca body=440 status=ok
// SIG undefined FUN_146ffe1ca(void)

void FUN_146ffe1ca(longlong *param_1,uint param_2)

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
      FUN_14579fe3a(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_1457075e4(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar9 * 0xf8 + lVar2 + -0xf4);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0xf8) = iVar8 + -1;
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
        puVar5 = puVar5 + -0x3e;
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



// FUNCTION 146ffe382 FUN_146ffe382 body=60 status=ok
// SIG undefined FUN_146ffe382(void)

void FUN_146ffe382(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  FUN_146ffe3be(param_1 + 0x28);
  return;
}



// FUNCTION 146ffe3be FUN_146ffe3be body=54 status=ok
// SIG undefined FUN_146ffe3be(void)

void FUN_146ffe3be(longlong *param_1)

{
  FUN_146860664(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146ffe3f4 FUN_146ffe3f4 body=67 status=ok
// SIG undefined FUN_146ffe3f4(void)

void FUN_146ffe3f4(longlong *param_1,undefined8 *param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *param_2;
  (**(code **)*param_1)(((undefined8 *)*param_1)[1]);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ffe438 FUN_146ffe438 body=123 status=ok
// SIG undefined FUN_146ffe438(void)

undefined8 * FUN_146ffe438(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_146ffe4b4();
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



// FUNCTION 146ffe4b4 FUN_146ffe4b4 body=146 status=ok
// SIG undefined FUN_146ffe4b4(void)

longlong * FUN_146ffe4b4(longlong *param_1,longlong *param_2)

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



// FUNCTION 146ffe546 FUN_146ffe546 body=52 status=ok
// SIG undefined FUN_146ffe546(void)

void FUN_146ffe546(longlong *param_1)

{
  FUN_146ffe57a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146ffe57a FUN_146ffe57a body=89 status=ok
// SIG undefined FUN_146ffe57a(void)

void FUN_146ffe57a(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1401ad22e(param_1,0);
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



// FUNCTION 146ffe5d4 FUN_146ffe5d4 body=324 status=ok
// SIG undefined FUN_146ffe5d4(void)

undefined4 * FUN_146ffe5d4(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
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
  FUN_146ffe71a(param_1,local_48);
  puVar1 = (undefined1 *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  *(undefined1 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_146ffe800(param_1,uVar4,local_40,&local_4c);
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
      FUN_146ffe8f2(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ffe71a FUN_146ffe71a body=230 status=ok
// SIG undefined FUN_146ffe71a(void)

int * FUN_146ffe71a(longlong *param_1,int *param_2)

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



// FUNCTION 146ffe800 FUN_146ffe800 body=128 status=ok
// SIG undefined FUN_146ffe800(void)

undefined8 FUN_146ffe800(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_146ffe880((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 146ffe880 FUN_146ffe880 body=114 status=ok
// SIG undefined FUN_146ffe880(void)

void FUN_146ffe880(longlong *param_1,int param_2)

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



// FUNCTION 146ffe8f2 FUN_146ffe8f2 body=474 status=ok
// SIG undefined FUN_146ffe8f2(void)

void FUN_146ffe8f2(longlong *param_1)

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



// FUNCTION 146ffeace FUN_146ffeace body=52 status=ok
// SIG undefined FUN_146ffeace(void)

void FUN_146ffeace(longlong *param_1)

{
  FUN_146ffeb02();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146ffeb02 FUN_146ffeb02 body=89 status=ok
// SIG undefined FUN_146ffeb02(void)

void FUN_146ffeb02(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
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



// FUNCTION 146ffeb5c FUN_146ffeb5c body=52 status=ok
// SIG undefined FUN_146ffeb5c(void)

void FUN_146ffeb5c(longlong *param_1)

{
  FUN_146ffeb90();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146ffeb90 FUN_146ffeb90 body=313 status=ok
// SIG undefined FUN_146ffeb90(void)

void FUN_146ffeb90(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      if (*(longlong *)(*local_68 + 8 + (longlong)iStack_4c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ffecca FUN_146ffecca body=47 status=ok
// SIG undefined FUN_146ffecca(void)

void FUN_146ffecca(longlong param_1,int param_2)

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



// FUNCTION 146ffecfa FUN_146ffecfa body=196 status=ok
// SIG undefined FUN_146ffecfa(void)

void FUN_146ffecfa(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  iVar3 = FUN_144a79e9a(param_1 + 2,1,(int)param_1[5]);
  iVar4 = iVar3 + 1;
  iVar5 = (int)param_1[1];
  if (iVar4 < iVar5) {
    if ((0 < *(int *)((longlong)param_1 + 0x34)) &&
       (uVar7 = (ulonglong)*(uint *)(param_1 + 6), *(uint *)(param_1 + 6) != 0xffffffff)) {
      lVar2 = *param_1;
      do {
        lVar6 = (longlong)(int)uVar7;
        if (iVar3 < (int)uVar7) {
          iVar5 = *(int *)(lVar2 + lVar6 * 0x18);
          iVar1 = *(int *)(lVar2 + 4 + lVar6 * 0x18);
          uVar7 = (ulonglong)iVar1;
          if (uVar7 != 0xffffffffffffffff) {
            *(int *)(lVar2 + uVar7 * 0x18) = iVar5;
          }
          if (iVar5 == -1) {
            *(int *)(param_1 + 6) = iVar1;
          }
          else {
            *(int *)(lVar2 + 4 + (longlong)iVar5 * 0x18) = iVar1;
          }
          *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
        }
        else {
          uVar7 = (ulonglong)*(uint *)(lVar2 + 4 + lVar6 * 0x18);
        }
      } while ((int)uVar7 != -1);
      iVar5 = (int)param_1[1];
    }
    if (iVar5 != iVar4) {
      *(int *)(param_1 + 1) = iVar4;
    }
    FUN_144a6134a(param_1 + 2,iVar4,(int)param_1[5] - iVar4);
    iVar5 = (int)param_1[1];
  }
  if (*(int *)((longlong)param_1 + 0xc) == iVar5) {
    return;
  }
  FUN_144727cd0(param_1,iVar5);
  return;
}



// FUNCTION 146ffedbe FUN_146ffedbe body=68 status=ok
// SIG undefined FUN_146ffedbe(void)

void FUN_146ffedbe(longlong param_1,uint param_2)

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
  if (((int)param_2 < 1 || iVar3 <= *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) <= iVar3)
     ) {
    return;
  }
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_146ffd958(param_1);
  return;
}



// FUNCTION 146ffee02 FUN_146ffee02 body=216 status=ok
// SIG undefined FUN_146ffee02(void)

void FUN_146ffee02(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  iVar3 = FUN_144a79e9a(param_1 + 2,1,(int)param_1[5]);
  iVar4 = iVar3 + 1;
  iVar5 = (int)param_1[1];
  if (iVar4 < iVar5) {
    if ((0 < *(int *)((longlong)param_1 + 0x34)) &&
       (uVar7 = (ulonglong)*(uint *)(param_1 + 6), *(uint *)(param_1 + 6) != 0xffffffff)) {
      lVar2 = *param_1;
      do {
        iVar5 = (int)uVar7;
        if (iVar3 < iVar5) {
          lVar6 = (longlong)iVar5 * 0xf8;
          iVar5 = *(int *)(lVar2 + lVar6);
          iVar1 = *(int *)(lVar2 + 4 + lVar6);
          uVar7 = (ulonglong)iVar1;
          if (uVar7 != 0xffffffffffffffff) {
            *(int *)(lVar2 + uVar7 * 0xf8) = iVar5;
          }
          if (iVar5 == -1) {
            *(int *)(param_1 + 6) = iVar1;
          }
          else {
            *(int *)(lVar2 + 4 + (longlong)iVar5 * 0xf8) = iVar1;
          }
          *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
        }
        else {
          uVar7 = (ulonglong)*(uint *)(lVar2 + 4 + (longlong)iVar5 * 0xf8);
        }
      } while ((int)uVar7 != -1);
      iVar5 = (int)param_1[1];
    }
    if (iVar5 != iVar4) {
      *(int *)(param_1 + 1) = iVar4;
    }
    FUN_144a6134a(param_1 + 2,iVar4,(int)param_1[5] - iVar4);
    iVar5 = (int)param_1[1];
  }
  if (*(int *)((longlong)param_1 + 0xc) == iVar5) {
    return;
  }
  FUN_14579fe3a(param_1,iVar5);
  return;
}



// FUNCTION 146ffeeda FUN_146ffeeda body=58 status=ok
// SIG undefined FUN_146ffeeda(void)

void FUN_146ffeeda(longlong param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar3 = 0;
    do {
      puVar2 = *(undefined8 **)(param_1 + lVar3 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar2 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
      lVar3 = lVar3 + 1;
    } while (param_2 != (int)lVar3);
  }
  return;
}



// FUNCTION 146ffef14 FUN_146ffef14 body=96 status=ok
// SIG undefined FUN_146ffef14(void)

void FUN_146ffef14(longlong param_1,int param_2)

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



// FUNCTION 146ffef74 FUN_146ffef74 body=120 status=ok
// SIG undefined FUN_146ffef74(void)

void FUN_146ffef74(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0xa8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0xa8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xac) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146ffefee(param_1,iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0xa0);
    if (*(longlong *)(param_1 + 0xa0) == 0) {
      lVar2 = param_1;
    }
    FUN_146fff0f3((longlong)iVar1 * 0x10 + lVar2,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      *(int *)(param_1 + 0xa8) = param_2;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146ffefee FUN_146ffefee body=119 status=ok
// SIG undefined FUN_146ffefee(void)

void FUN_146ffefee(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0xa8);
  if (param_2 <= (int)uVar1) {
    iVar5 = 10;
    if (10 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (10 < *(uint *)(param_1 + 0xac)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 4,0);
      iVar2 = (int)(uVar3 >> 4);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0xac) = iVar5;
    FUN_146fff066(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146fff066 FUN_146fff066 body=141 status=ok
// SIG undefined FUN_146fff066(void)

void FUN_146fff066(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xa0);
  if ((uint)param_3 < 0xb) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xa0,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0xa0),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xa0,param_2,param_3,0x10);
  return;
}



// FUNCTION 146fff0f3 FUN_146fff0f3 body=27 status=ok
// SIG undefined FUN_146fff0f3(void)

void FUN_146fff0f3(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 146fff10e FUN_146fff10e body=132 status=ok
// SIG undefined FUN_146fff10e(void)

void FUN_146fff10e(longlong param_1,int param_2)

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



// FUNCTION 146fff194 FUN_146fff194 body=89 status=ok
// SIG undefined FUN_146fff194(void)

void FUN_146fff194(longlong param_1,int param_2)

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



// FUNCTION 146fff1ed FUN_146fff1ed body=33 status=ok
// SIG undefined FUN_146fff1ed(void)

void FUN_146fff1ed(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    lVar1 = *(longlong *)(param_2 + lVar2 * 8);
    *(longlong *)(param_1 + lVar2 * 8) = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    lVar2 = lVar2 + 1;
  } while (param_3 != (int)lVar2);
  return;
}



// FUNCTION 146fff20e FUN_146fff20e body=132 status=ok
// SIG undefined FUN_146fff20e(void)

void FUN_146fff20e(longlong param_1,int param_2)

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



// FUNCTION 146fff294 FUN_146fff294 body=92 status=ok
// SIG undefined FUN_146fff294(void)

void FUN_146fff294(longlong *param_1,uint param_2)

{
  int *piVar1;
  void *_Dst;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  
  lVar2 = *param_1;
  puVar3 = *(undefined8 **)(lVar2 + (ulonglong)param_2 * 8);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  iVar4 = (int)param_1[1];
  if (~param_2 + iVar4 != 0) {
    _Dst = (void *)(lVar2 + (ulonglong)param_2 * 8);
    memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)(int)(~param_2 + iVar4) << 3);
    iVar4 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar4 + -1;
  return;
}



// FUNCTION 146fff32e FUN_146fff32e body=93 status=ok
// SIG undefined FUN_146fff32e(void)

ulonglong FUN_146fff32e(uint param_1,uint param_2)

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



// FUNCTION 146fff38c FUN_146fff38c body=132 status=ok
// SIG undefined FUN_146fff38c(void)

void FUN_146fff38c(longlong param_1,int param_2)

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



// FUNCTION 146fff411 FUN_146fff411 body=38 status=ok
// SIG undefined FUN_146fff411(void)

void FUN_146fff411(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146fff438(param_1);
    param_1 = param_1 + 0x20;
  }
  return;
}



// FUNCTION 146fff438 FUN_146fff438 body=59 status=ok
// SIG undefined FUN_146fff438(void)

void FUN_146fff438(longlong *param_1)

{
  FUN_146fff473(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146fff473 FUN_146fff473 body=61 status=ok
// SIG undefined FUN_146fff473(void)

void FUN_146fff473(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 146fff4b0 FUN_146fff4b0 body=68 status=ok
// SIG undefined FUN_146fff4b0(void)

void FUN_146fff4b0(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + lVar2 * 8);
      if (lVar1 != 0) {
        FUN_146fe571e(lVar1);
        FUN_1400020a8(lVar1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 146fff4f4 FUN_146fff4f4 body=54 status=ok
// SIG undefined FUN_146fff4f4(void)

void FUN_146fff4f4(longlong *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    puVar2 = (undefined8 *)*param_1;
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 146fff52a FUN_146fff52a body=38 status=ok
// SIG undefined FUN_146fff52a(void)

void FUN_146fff52a(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146fff550(param_1);
    param_1 = param_1 + 0x80;
  }
  return;
}



// FUNCTION 146fff550 FUN_146fff550 body=134 status=ok
// SIG undefined FUN_146fff550(void)

void FUN_146fff550(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  FUN_146fff5d6(param_1[0xc],(int)param_1[0xd]);
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_146fff5d6(param_1[10],(int)param_1[0xb]);
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if ((char)param_1[9] == '\x01') {
    FUN_1400020a8(param_1[6]);
  }
  if ((char)param_1[5] == '\x01') {
    FUN_1400020a8(param_1[2]);
  }
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000146fff5b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 146fff5d6 FUN_146fff5d6 body=38 status=ok
// SIG undefined FUN_146fff5d6(void)

void FUN_146fff5d6(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146fe7aa6(param_1);
    param_1 = param_1 + 0x40;
  }
  return;
}



// FUNCTION 146fff5fc FUN_146fff5fc body=96 status=ok
// SIG undefined FUN_146fff5fc(void)

void FUN_146fff5fc(longlong param_1,int param_2)

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



// FUNCTION 146fff65c FUN_146fff65c body=54 status=ok
// SIG undefined FUN_146fff65c(void)

void FUN_146fff65c(longlong *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    puVar2 = (undefined8 *)*param_1;
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 146fff692 FUN_146fff692 body=48 status=ok
// SIG undefined FUN_146fff692(void)

void FUN_146fff692(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 146fff6c2 FUN_146fff6c2 body=121 status=ok
// SIG undefined FUN_146fff6c2(void)

void FUN_146fff6c2(longlong *param_1,uint param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  lVar2 = *param_1;
  puVar3 = *(undefined8 **)(lVar2 + (longlong)(int)param_2 * 0x18);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  iVar4 = (int)param_1[1];
  iVar5 = ~param_2 + iVar4;
  if (iVar5 != 0) {
    iVar6 = 1;
    if (iVar5 < 1) {
      iVar6 = iVar5;
    }
    memmove((void *)(lVar2 + (longlong)(int)param_2 * 0x18),
            (void *)(lVar2 + (longlong)(iVar4 - iVar6) * 0x18),(longlong)iVar6 * 0x18);
    iVar4 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar4 + -1;
  return;
}



// FUNCTION 146fff73c FUN_146fff73c body=62 status=ok
// SIG undefined FUN_146fff73c(void)

void FUN_146fff73c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146fff77a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 146fff77a FUN_146fff77a body=112 status=ok
// SIG undefined FUN_146fff77a(void)

ulonglong FUN_146fff77a(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_146fff7b4;
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
LAB_146fff7b4:
  return param_2 & 0xffffffff;
}



// FUNCTION 146fff7ea FUN_146fff7ea body=27 status=ok
// SIG undefined FUN_146fff7ea(void)

void FUN_146fff7ea(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined4 *)((longlong)param_1 + 7) = 0;
    *param_1 = 0;
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 146fff806 FUN_146fff806 body=89 status=ok
// SIG undefined FUN_146fff806(void)

void FUN_146fff806(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x10 + *param_1);
  FUN_146fff65c(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146fff860 FUN_146fff860 body=62 status=ok
// SIG undefined FUN_146fff860(void)

void FUN_146fff860(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146fff89e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 146fff89e FUN_146fff89e body=93 status=ok
// SIG undefined FUN_146fff89e(void)

ulonglong FUN_146fff89e(uint param_1,uint param_2)

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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 146fff8fc FUN_146fff8fc body=132 status=ok
// SIG undefined FUN_146fff8fc(void)

void FUN_146fff8fc(longlong param_1,int param_2)

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



// FUNCTION 146fff981 FUN_146fff981 body=15 status=ok
// SIG undefined FUN_146fff981(void)

void FUN_146fff981(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2);
    return;
  }
  return;
}



// FUNCTION 146fff990 FUN_146fff990 body=124 status=ok
// SIG undefined FUN_146fff990(void)

void FUN_146fff990(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  
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
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    iVar2 = FUN_144a3809e(lVar4,1);
    iVar5 = 0x7fffffff;
    if ((int)uVar1 <= iVar2) {
      iVar5 = iVar2;
    }
    *(int *)(param_1 + 0xc) = iVar5;
    FUN_1446f8d3c(param_1,param_2,iVar5,1,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146fffa0e FUN_146fffa0e body=119 status=ok
// SIG undefined FUN_146fffa0e(void)

void FUN_146fffa0e(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc);
  if (((uint)(iVar2 - iVar1) < 0x4000) && (iVar2 * 2 <= iVar1 * 3)) {
    return;
  }
  if (iVar1 == 0 || 0x40 < iVar2 - iVar1) {
    if (0 < iVar1) {
      iVar1 = FUN_144a3809e(iVar1,1);
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if (iVar1 != iVar2) {
      *(int *)(param_1 + 0xc) = iVar1;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,1,1);
    }
  }
  return;
}



// FUNCTION 146fffa86 FUN_146fffa86 body=147 status=ok
// SIG undefined FUN_146fffa86(void)

void FUN_146fffa86(longlong param_1,int param_2)

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



// FUNCTION 146fffb1a FUN_146fffb1a body=96 status=ok
// SIG undefined FUN_146fffb1a(void)

void FUN_146fffb1a(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 5,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,8);
  }
  return;
}



// FUNCTION 146fffb7a FUN_146fffb7a body=113 status=ok
// SIG undefined FUN_146fffb7a(void)

void FUN_146fffb7a(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x30)) {
      uVar2 = uVar1 / 0x30 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x30,8);
  }
  return;
}



// FUNCTION 146fffbec FUN_146fffbec body=147 status=ok
// SIG undefined FUN_146fffbec(void)

void FUN_146fffbec(longlong param_1,int param_2)

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



// FUNCTION 146fffc80 FUN_146fffc80 body=48 status=ok
// SIG undefined FUN_146fffc80(void)

void FUN_146fffc80(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x80,8);
  }
  return;
}



// FUNCTION 146fffcb0 FUN_146fffcb0 body=48 status=ok
// SIG undefined FUN_146fffcb0(void)

void FUN_146fffcb0(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,1,1);
  }
  return;
}



// FUNCTION 146fffce0 FUN_146fffce0 body=98 status=ok
// SIG undefined FUN_146fffce0(void)

void FUN_146fffce0(longlong *param_1,uint param_2)

{
  void *_Dst;
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  lVar1 = *param_1;
  lVar2 = *(longlong *)(lVar1 + (ulonglong)param_2 * 8);
  if (lVar2 != 0) {
    FUN_146fe571e(lVar2);
    FUN_1400020a8(lVar2);
  }
  iVar3 = (int)param_1[1];
  if (~param_2 + iVar3 != 0) {
    _Dst = (void *)(lVar1 + (ulonglong)param_2 * 8);
    memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)(int)(~param_2 + iVar3) << 3);
    iVar3 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar3 + -1;
  return;
}



// FUNCTION 146fffd42 FUN_146fffd42 body=62 status=ok
// SIG undefined FUN_146fffd42(void)

void FUN_146fffd42(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146fffd80(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 146fffd80 FUN_146fffd80 body=93 status=ok
// SIG undefined FUN_146fffd80(void)

ulonglong FUN_146fffd80(uint param_1,uint param_2)

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



// FUNCTION 146fffdde FUN_146fffdde body=132 status=ok
// SIG undefined FUN_146fffdde(void)

void FUN_146fffdde(longlong param_1,int param_2)

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



// FUNCTION 146fffe64 FUN_146fffe64 body=132 status=ok
// SIG undefined FUN_146fffe64(void)

void FUN_146fffe64(longlong param_1,int param_2)

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



// FUNCTION 146fffeea FUN_146fffeea body=147 status=ok
// SIG undefined FUN_146fffeea(void)

void FUN_146fffeea(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x30,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146ffff7e FUN_146ffff7e body=58 status=ok
// SIG undefined FUN_146ffff7e(void)

void FUN_146ffff7e(longlong param_1)

{
  if (param_1 == 0) {
    return;
  }
  FUN_146fec652(param_1 + 0x48);
  FUN_146fec652(param_1 + 0x30);
  FUN_146ffffb8(param_1);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 146ffffb8 FUN_146ffffb8 body=85 status=ok
// SIG undefined FUN_146ffffb8(void)

void FUN_146ffffb8(longlong *param_1)

{
  FUN_14700000d(param_1[4],(int)param_1[5]);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_146fff473(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14700000d FUN_14700000d body=42 status=ok
// SIG undefined FUN_14700000d(void)

void FUN_14700000d(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = 0;
    do {
      FUN_1470029b8(*(undefined8 *)(param_1 + lVar1 * 8));
      lVar1 = lVar1 + 1;
    } while (param_2 != (int)lVar1);
  }
  return;
}



// FUNCTION 147000037 FUN_147000037 body=64 status=ok
// SIG undefined FUN_147000037(void)

void FUN_147000037(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + lVar2 * 8);
      if (lVar1 != 0) {
        FUN_14128b0c2(lVar1);
        FUN_1400020a8(lVar1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 147000078 FUN_147000078 body=63 status=ok
// SIG undefined FUN_147000078(void)

void FUN_147000078(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_146ffa96e(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_1470001fc(param_1);
    return;
  }
  FUN_1470000b8(param_1);
  FUN_146ffa96e(param_1);
  return;
}



// FUNCTION 1470000b8 FUN_1470000b8 body=322 status=ok
// SIG undefined FUN_1470000b8(void)

void FUN_1470000b8(longlong *param_1)

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



// FUNCTION 1470001fc FUN_1470001fc body=473 status=ok
// SIG undefined FUN_1470001fc(void)

void FUN_1470001fc(longlong *param_1)

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



// FUNCTION 1470003d6 FUN_1470003d6 body=48 status=ok
// SIG undefined FUN_1470003d6(void)

void FUN_1470003d6(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 147000406 FUN_147000406 body=48 status=ok
// SIG undefined FUN_147000406(void)

void FUN_147000406(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 147000436 FUN_147000436 body=43 status=ok
// SIG undefined FUN_147000436(void)

void FUN_147000436(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 147000462 FUN_147000462 body=125 status=ok
// SIG undefined FUN_147000462(void)

void FUN_147000462(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = (ulonglong)uVar1;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar2);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar2 = 4;
    if (4 < uVar1) {
      uVar2 = (ulonglong)uVar1;
    }
  }
  else {
    uVar2 = uVar2 + (uVar2 * 3 >> 3) + 0x10;
  }
  uVar2 = FUN_144a3809e(uVar2 << 4,8);
  uVar3 = 0x7fffffff;
  if ((int)uVar1 <= (int)(uVar2 >> 4)) {
    uVar3 = uVar2 >> 4 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar3;
  FUN_1446f8d3c(param_1,0,uVar3,0x10,8);
  return;
}



// FUNCTION 1470004e0 FUN_1470004e0 body=95 status=ok
// SIG undefined FUN_1470004e0(void)

void FUN_1470004e0(longlong param_1,uint param_2)

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



// FUNCTION 147000540 FUN_147000540 body=132 status=ok
// SIG undefined FUN_147000540(void)

void FUN_147000540(longlong param_1,int param_2)

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



// FUNCTION 1470005c6 FUN_1470005c6 body=429 status=ok
// SIG undefined FUN_1470005c6(void)

void FUN_1470005c6(longlong param_1,longlong param_2,int *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_98 [44];
  undefined4 local_6c;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined2 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (0 < *param_3) {
    local_68 = param_1 + 0x10;
    do {
      if ((longlong)*(int *)(param_1 + 0x18) == 0) {
        goto LAB_14700071b;
      }
      lVar7 = *(longlong *)(param_1 + 0x10);
      lVar6 = (longlong)*(int *)(param_1 + 0x18) * 0x30;
      local_60 = *(undefined8 *)(lVar7 + -0x30 + lVar6);
      *(undefined8 *)(lVar7 + -0x30 + lVar6) = 0;
      local_6c = *(undefined4 *)(lVar7 + -0x28 + lVar6);
      uVar1 = *(undefined4 *)(lVar7 + -0x24 + lVar6);
      *(undefined8 *)(lVar7 + -0x28 + lVar6) = 0;
      uVar5 = *(undefined8 *)(lVar7 + -0x20 + lVar6);
      *(undefined8 *)(lVar7 + -0x20 + lVar6) = 0;
      uVar2 = *(undefined4 *)(lVar7 + -0x18 + lVar6);
      uVar3 = *(undefined4 *)(lVar7 + -0x14 + lVar6);
      *(undefined8 *)(lVar7 + -0x18 + lVar6) = 0;
      local_50 = *(undefined2 *)(lVar7 + -8 + lVar6);
      local_58 = *(undefined8 *)(lVar7 + -0x10 + lVar6);
      FUN_147000894(local_68,*(int *)(param_1 + 0x18) + -1);
      iVar4 = *(int *)(param_2 + 0x12c8);
      *(uint *)(param_2 + 0x12c8) = iVar4 + 1U;
      if (*(uint *)(param_2 + 0x12cc) < iVar4 + 1U) {
        FUN_147000774(param_2,iVar4);
      }
      lVar7 = *(longlong *)(param_2 + 0x12c0);
      if (*(longlong *)(param_2 + 0x12c0) == 0) {
        lVar7 = param_2;
      }
      lVar6 = (longlong)iVar4 * 0x30;
      *(undefined8 *)(lVar7 + lVar6) = local_60;
      *(undefined4 *)(lVar7 + 8 + lVar6) = local_6c;
      *(undefined4 *)(lVar7 + 0xc + lVar6) = uVar1;
      *(undefined8 *)(lVar7 + 0x10 + lVar6) = uVar5;
      *(undefined4 *)(lVar7 + 0x18 + lVar6) = uVar2;
      *(undefined4 *)(lVar7 + 0x1c + lVar6) = uVar3;
      *(undefined8 *)(lVar7 + 0x20 + lVar6) = local_58;
      *(undefined2 *)(lVar7 + 0x28 + lVar6) = local_50;
      iVar4 = *param_3;
      *param_3 = iVar4 + -1;
    } while (1 < iVar4);
  }
  goto LAB_1470006f5;
  while( true ) {
    lVar6 = *(longlong *)(param_1 + 0x20);
    FUN_1470005c6(*(undefined8 *)(lVar6 + -8 + lVar7 * 8),param_2,param_3);
    lVar7 = *(longlong *)(lVar6 + -8 + lVar7 * 8);
    if ((*(int *)(lVar7 + 0x18) == 0) && (*(int *)(lVar7 + 0x28) == 0)) {
      FUN_146fecafa((longlong *)(param_1 + 0x20),*(int *)(param_1 + 0x28) + -1);
    }
    if (*param_3 < 1) break;
LAB_14700071b:
    lVar7 = (longlong)*(int *)(param_1 + 0x28);
    if (lVar7 == 0) break;
  }
LAB_1470006f5:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147000774 FUN_147000774 body=136 status=ok
// SIG undefined FUN_147000774(void)

void FUN_147000774(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x12c8);
  if (param_2 <= (int)uVar1) {
    iVar5 = 100;
    if (100 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (100 < *(uint *)(param_1 + 0x12cc)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x30,0);
      iVar4 = (int)(uVar3 / 0x30);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x12cc) = iVar5;
    FUN_1470007fe(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1470007fe FUN_1470007fe body=149 status=ok
// SIG undefined FUN_1470007fe(void)

void FUN_1470007fe(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x12c0);
  if ((uint)param_3 < 0x65) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x30);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x12c0,0,param_3,0x30);
    memmove(*(void **)((longlong)param_1 + 0x12c0),param_1,(longlong)param_2 * 0x30);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x12c0,param_2,param_3,0x30);
  return;
}



// FUNCTION 147000894 FUN_147000894 body=106 status=ok
// SIG undefined FUN_147000894(void)

void FUN_147000894(longlong *param_1,uint param_2)

{
  longlong *_Dst;
  int iVar1;
  
  _Dst = (longlong *)(*param_1 + (longlong)(int)param_2 * 0x30);
  if (*(longlong *)(*param_1 + 0x10 + (longlong)(int)param_2 * 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*_Dst != 0) {
    FUN_1400020a8();
  }
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,_Dst + 6,(longlong)(int)(~param_2 + iVar1) * 0x30);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  return;
}



// FUNCTION 1470008fe FUN_1470008fe body=62 status=ok
// SIG undefined FUN_1470008fe(void)

void FUN_1470008fe(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14700093c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x30,8);
  }
  return;
}



// FUNCTION 14700093c FUN_14700093c body=112 status=ok
// SIG undefined FUN_14700093c(void)

ulonglong FUN_14700093c(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x30) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147000976;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x30,8);
      param_2 = param_2 / 0x30;
    }
  }
LAB_147000976:
  return param_2 & 0xffffffff;
}



// FUNCTION 1470009ac FUN_1470009ac body=56 status=ok
// SIG undefined FUN_1470009ac(void)

void FUN_1470009ac(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)(param_1 + 8);
    do {
      FUN_146ffb142(*puVar1);
      if (puVar1[-1] != 0) {
        FUN_1400020a8();
      }
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1470009e4 FUN_1470009e4 body=119 status=ok
// SIG undefined FUN_1470009e4(void)

void FUN_1470009e4(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x328);
  if (param_2 <= (int)uVar1) {
    iVar5 = 100;
    if (100 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (100 < *(uint *)(param_1 + 0x32c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x32c) = iVar5;
    FUN_147000a5c(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147000a5c FUN_147000a5c body=141 status=ok
// SIG undefined FUN_147000a5c(void)

void FUN_147000a5c(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 800);
  if ((uint)param_3 < 0x65) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 800,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 800),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 800,param_2,param_3,8);
  return;
}



// FUNCTION 147000aea FUN_147000aea body=119 status=ok
// SIG undefined FUN_147000aea(void)

void FUN_147000aea(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x648);
  if (param_2 <= (int)uVar1) {
    iVar5 = 100;
    if (100 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (100 < *(uint *)(param_1 + 0x64c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 4,0);
      iVar2 = (int)(uVar3 >> 4);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x64c) = iVar5;
    FUN_147000b62(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147000b62 FUN_147000b62 body=141 status=ok
// SIG undefined FUN_147000b62(void)

void FUN_147000b62(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x640);
  if ((uint)param_3 < 0x65) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x640,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x640),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x640,param_2,param_3,0x10);
  return;
}



// FUNCTION 147000bf0 FUN_147000bf0 body=103 status=ok
// SIG undefined FUN_147000bf0(void)

void FUN_147000bf0(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 100;
    if (100 < param_2) {
      uVar2 = FUN_144a3809e((ulonglong)param_2 << 3,0);
      iVar1 = (int)(uVar2 >> 3);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (iVar3 != *(int *)(param_1 + 0x32c)) {
    *(int *)(param_1 + 0x32c) = iVar3;
    FUN_147000c58(param_1,*(undefined4 *)(param_1 + 0x328));
    return;
  }
  return;
}



// FUNCTION 147000c58 FUN_147000c58 body=141 status=ok
// SIG undefined FUN_147000c58(void)

void FUN_147000c58(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 800);
  if ((uint)param_3 < 0x65) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 800,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 800),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 800,param_2,param_3,8);
  return;
}



// FUNCTION 147000ce6 FUN_147000ce6 body=119 status=ok
// SIG undefined FUN_147000ce6(void)

void FUN_147000ce6(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x328);
  if (param_2 <= (int)uVar1) {
    iVar5 = 100;
    if (100 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (100 < *(uint *)(param_1 + 0x32c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x32c) = iVar5;
    FUN_147000c58(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147000d5e FUN_147000d5e body=135 status=ok
// SIG undefined FUN_147000d5e(void)

void FUN_147000d5e(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x5aa8);
  if (param_2 <= (int)uVar1) {
    iVar6 = 100;
    if (100 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (100 < *(uint *)(param_1 + 0x5aac)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0xe8,0);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar4 >> 3;
      iVar5 = SUB164(auVar2 * ZEXT816(0x8d3dcb08d3dcb09),8);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar5) {
        iVar6 = iVar5;
      }
    }
    *(int *)(param_1 + 0x5aac) = iVar6;
    FUN_147000de6(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147000de6 FUN_147000de6 body=147 status=ok
// SIG undefined FUN_147000de6(void)

void FUN_147000de6(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x5aa0);
  if ((uint)param_3 < 0x65) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0xe8);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x5aa0,0,param_3,0xe8);
    memmove(*(void **)((longlong)param_1 + 0x5aa0),param_1,(longlong)param_2 * 0xe8);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x5aa0,param_2,param_3,0xe8);
  return;
}



// FUNCTION 147000e7a FUN_147000e7a body=109 status=ok
// SIG undefined FUN_147000e7a(void)

void FUN_147000e7a(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x70,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 4;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar4,0x70,8);
  }
  return;
}



// FUNCTION 147000ee8 FUN_147000ee8 body=132 status=ok
// SIG undefined FUN_147000ee8(void)

void FUN_147000ee8(longlong param_1,int param_2)

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



// FUNCTION 147000f6e FUN_147000f6e body=132 status=ok
// SIG undefined FUN_147000f6e(void)

void FUN_147000f6e(longlong param_1,int param_2)

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



// FUNCTION 147000ff4 FUN_147000ff4 body=187 status=ok
// SIG undefined FUN_147000ff4(void)

longlong * FUN_147000ff4(longlong *param_1,uint param_2,longlong *param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_58 [40];
  longlong *local_30;
  undefined8 local_28;
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
        plVar2 = (longlong *)(*param_1 + (longlong)iVar1 * 0x18);
        if (*plVar2 == *param_3) {
          if (plVar2 != (longlong *)0x0) goto LAB_147001092;
          break;
        }
        iVar1 = (int)plVar2[2];
      } while (iVar1 != -1);
    }
  }
  local_30 = param_3;
  local_28 = param_4;
  FUN_1470010b0(param_1,&local_1c,param_2,&local_30);
  plVar2 = (longlong *)(*param_1 + (longlong)local_1c * 0x18);
LAB_147001092:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar2 + 1;
}



// FUNCTION 1470010b0 FUN_1470010b0 body=281 status=ok
// SIG undefined FUN_1470010b0(void)

undefined4 * FUN_1470010b0(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1470011ca(param_1,local_48);
  puVar1 = (undefined8 *)param_4[1];
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  cVar2 = FUN_1470012b0(param_1,param_3,local_40,local_48);
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
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_40 + 0x14) = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1470001fc(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470011ca FUN_1470011ca body=230 status=ok
// SIG undefined FUN_1470011ca(void)

int * FUN_1470011ca(longlong *param_1,int *param_2)

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



// FUNCTION 1470012b0 FUN_1470012b0 body=128 status=ok
// SIG undefined FUN_1470012b0(void)

undefined8 FUN_1470012b0(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_147001330((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 147001330 FUN_147001330 body=114 status=ok
// SIG undefined FUN_147001330(void)

void FUN_147001330(longlong *param_1,int param_2)

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



// FUNCTION 1470013a2 FUN_1470013a2 body=311 status=ok
// SIG undefined FUN_1470013a2(void)

undefined4 * FUN_1470013a2(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined1 auStack_58 [32];
  undefined4 local_38 [2];
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1470014da(param_1,local_38);
  puVar1 = (undefined8 *)param_3[1];
  *local_30 = *(undefined8 *)*param_3;
  local_30[1] = *puVar1;
  *puVar1 = 0;
  *(undefined4 *)(local_30 + 2) = 0xffffffff;
  uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  iVar6 = 1;
  if (3 < uVar5) {
    uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
    lVar3 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar6 = 1 << ((byte)lVar3 & 0x1f);
  }
  uVar2 = *local_30;
  if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
    uVar5 = (uint)((ulonglong)uVar2 >> 0x10);
    uVar7 = (uint)uVar2 & 0xffff;
    uVar5 = *(int *)(param_1 + 0x48) - 1U &
            (uVar7 >> 4) +
            ((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
            (uVar5 << 0x13 | uVar5 & 0xffff);
    *(uint *)((longlong)local_30 + 0x14) = uVar5;
    lVar3 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar3 = param_1 + 0x38;
    }
    *(undefined4 *)(local_30 + 2) =
         *(undefined4 *)
          (lVar3 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
    lVar3 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar3 = param_1 + 0x38;
    }
    *(undefined4 *)(lVar3 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4) =
         local_38[0];
  }
  else {
    *(int *)(param_1 + 0x48) = iVar6;
    FUN_146ffd958(param_1);
  }
  *param_2 = local_38[0];
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470014da FUN_1470014da body=230 status=ok
// SIG undefined FUN_1470014da(void)

int * FUN_1470014da(longlong *param_1,int *param_2)

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



// FUNCTION 1470015c0 FUN_1470015c0 body=96 status=ok
// SIG undefined FUN_1470015c0(void)

void FUN_1470015c0(longlong param_1,int param_2)

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



// FUNCTION 147001620 FUN_147001620 body=310 status=ok
// SIG undefined FUN_147001620(void)

undefined4 * FUN_147001620(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38 [2];
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_146ffde1c(param_1,local_38);
  uVar1 = param_3[1];
  *local_30 = *(undefined8 *)*param_3;
  FUN_146ff8996(local_30 + 1,uVar1);
  *(undefined4 *)(local_30 + 0x1e) = 0xffffffff;
  uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  iVar5 = 1;
  if (3 < uVar3) {
    uVar2 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
    lVar4 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iVar5 = 1 << ((byte)lVar4 & 0x1f);
  }
  uVar1 = *local_30;
  if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
    uVar3 = (uint)((ulonglong)uVar1 >> 0x10);
    uVar6 = (uint)uVar1 & 0xffff;
    uVar3 = *(int *)(param_1 + 0x48) - 1U &
            (uVar6 >> 4) +
            ((uint)uVar1 << 0x10 | uVar6) + (int)((ulonglong)uVar1 >> 0x20) +
            (uVar3 << 0x13 | uVar3 & 0xffff);
    *(uint *)((longlong)local_30 + 0xf4) = uVar3;
    lVar4 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar4 = param_1 + 0x38;
    }
    *(undefined4 *)(local_30 + 0x1e) =
         *(undefined4 *)
          (lVar4 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
    lVar4 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar4 = param_1 + 0x38;
    }
    *(undefined4 *)(lVar4 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4) =
         local_38[0];
  }
  else {
    *(int *)(param_1 + 0x48) = iVar5;
    FUN_146ffdf4e(param_1);
  }
  *param_2 = local_38[0];
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147001757 FUN_147001757 body=43 status=ok
// SIG undefined FUN_147001757(void)

void FUN_147001757(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 4;
  }
  return;
}



// FUNCTION 147001782 FUN_147001782 body=86 status=ok
// SIG undefined FUN_147001782(void)

void FUN_147001782(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_144a3809e((ulonglong)param_2 << 5,8);
  uVar2 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 5)) {
    uVar2 = uVar1 >> 5 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,8);
  }
  return;
}



// FUNCTION 1470017d8 FUN_1470017d8 body=132 status=ok
// SIG undefined FUN_1470017d8(void)

void FUN_1470017d8(longlong param_1,int param_2)

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



// FUNCTION 14700185e FUN_14700185e body=411 status=ok
// SIG undefined FUN_14700185e(void)

void FUN_14700185e(longlong *param_1,uint param_2)

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
      FUN_144727cd0(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_14482b872(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(lVar2 + uVar9 * 0x18 + -0x14);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = iVar8 + -1;
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
        puVar5 = puVar5 + -6;
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



// FUNCTION 1470019fa FUN_1470019fa body=335 status=ok
// SIG undefined FUN_1470019fa(void)

undefined4 * FUN_1470019fa(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_1470011ca(param_1,local_48);
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
  cVar4 = FUN_1470012b0(param_1,uVar9,local_40,&local_4c);
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
      FUN_1470001fc(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147001b4a FUN_147001b4a body=132 status=ok
// SIG undefined FUN_147001b4a(void)

void FUN_147001b4a(longlong param_1,int param_2)

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



// FUNCTION 147001bd0 FUN_147001bd0 body=189 status=ok
// SIG undefined FUN_147001bd0(void)

void FUN_147001bd0(longlong *param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar3 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar3) {
      FUN_14171b750(param_1,iVar1);
    }
    puVar2 = (undefined8 *)((longlong)iVar1 * 0x70 + *param_1);
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined4 *)(puVar2 + 6) = 0xffffffff;
      puVar2[0xc] = 0;
      puVar2[0xd] = 0x200000000;
      *(undefined8 *)((longlong)puVar2 + 0x34) = 0;
      *(undefined8 *)((longlong)puVar2 + 0x3c) = 0;
      *(undefined8 *)((longlong)puVar2 + 0x44) = 0;
      *(undefined8 *)((longlong)puVar2 + 0x4c) = 0;
      *(undefined4 *)((longlong)puVar2 + 0x54) = 0;
      puVar2 = puVar2 + 0xe;
    }
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_147001c8e(param_1,param_2,iVar1 - param_2);
    FUN_147001ce8(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147001c8e FUN_147001c8e body=89 status=ok
// SIG undefined FUN_147001c8e(void)

void FUN_147001c8e(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x70 + *param_1);
  FUN_140195631(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x70 + (longlong)_Dst),(longlong)iVar2 * 0x70);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 147001ce8 FUN_147001ce8 body=63 status=ok
// SIG undefined FUN_147001ce8(void)

void FUN_147001ce8(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147001d28(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x70,8);
  }
  return;
}



// FUNCTION 147001d28 FUN_147001d28 body=109 status=ok
// SIG undefined FUN_147001d28(void)

ulonglong FUN_147001d28(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0x70) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x70,8);
      uVar1 = uVar1 / 0x70;
    }
  }
  return uVar1;
}



// FUNCTION 147001d9c FUN_147001d9c body=377 status=ok
// SIG undefined FUN_147001d9c(void)

longlong * FUN_147001d9c(longlong *param_1,longlong *param_2)

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
      FUN_147001fe0(param_2,0);
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
      FUN_147001f16(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0xc;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_2c) ||
       (FUN_147001fe0(param_2), 0 < (int)local_2c)) {
      iVar4 = 0;
      do {
        uVar3 = FUN_147001f9c(param_2);
        FUN_147001f16(param_1,uVar3);
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



// FUNCTION 147001f16 FUN_147001f16 body=132 status=ok
// SIG undefined FUN_147001f16(void)

longlong * FUN_147001f16(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  ulonglong *puVar2;
  undefined1 uVar3;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x160))();
  local_21 = *(undefined1 *)(param_2 + 8);
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (undefined1 *)*puVar2 + 1;
  if ((undefined1 *)puVar2[1] < puVar1) {
    (**(code **)(*param_1 + 0x170))(param_1,&local_21,1);
    uVar3 = local_21;
  }
  else {
    uVar3 = *(undefined1 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  *(undefined1 *)(param_2 + 8) = uVar3;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147001f9c FUN_147001f9c body=68 status=ok
// SIG undefined FUN_147001f9c(void)

longlong FUN_147001f9c(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147002066(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0xc + *param_1;
  FUN_147002051(lVar2,1);
  return lVar2;
}



// FUNCTION 147001fe0 FUN_147001fe0 body=113 status=ok
// SIG undefined FUN_147001fe0(void)

void FUN_147001fe0(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0xc)) {
      uVar2 = uVar1 / 0xc & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xc,4);
  }
  return;
}



// FUNCTION 147002051 FUN_147002051 body=20 status=ok
// SIG undefined FUN_147002051(void)

void FUN_147002051(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1 = (undefined8 *)((longlong)param_1 + 0xc);
  }
  return;
}



// FUNCTION 147002066 FUN_147002066 body=147 status=ok
// SIG undefined FUN_147002066(void)

void FUN_147002066(longlong param_1,int param_2)

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



// FUNCTION 1470020fa FUN_1470020fa body=488 status=ok
// SIG undefined FUN_1470020fa(void)

longlong * FUN_1470020fa(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_68 [36];
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 5,(longlong)*(int *)((longlong)param_2 + 0xc) << 5
            );
  local_44 = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_44 = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_44,4);
    }
    else {
      FUN_14572512c(param_1,&local_44);
    }
  }
  else {
    local_44 = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_44 == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_146ffaaf5(*param_2,(int)param_2[1]);
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_147002366(param_2,0);
      }
    }
  }
  else if ((((int)local_44 < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x80000 < local_44 && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_44;
    lVar7 = 0x10;
    lVar8 = 0;
    do {
      lVar3 = *param_2;
      plVar4 = (longlong *)(**(code **)(*param_1 + 0x160))(param_1,lVar3 + lVar7 + -0x10);
      uVar5 = (**(code **)(*plVar4 + 0x160))(plVar4,lVar3 + lVar7 + -8);
      FUN_140219018(uVar5,lVar3 + lVar7);
      lVar8 = lVar8 + 1;
      lVar7 = lVar7 + 0x20;
    } while (lVar8 < (int)param_2[1]);
  }
  else {
    FUN_1470022e4(param_2);
    if (0 < (int)local_44) {
      iVar6 = 0;
      do {
        lVar7 = FUN_14700232a(param_2);
        plVar4 = (longlong *)(**(code **)(*param_1 + 0x160))(param_1,lVar7);
        uVar5 = (**(code **)(*plVar4 + 0x160))(plVar4,lVar7 + 8);
        FUN_140219018(uVar5,lVar7 + 0x10);
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)local_44);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1470022e4 FUN_1470022e4 body=68 status=ok
// SIG undefined FUN_1470022e4(void)

void FUN_1470022e4(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_146ffaaf5(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_147002366(param_1,param_2);
  return;
}



// FUNCTION 14700232a FUN_14700232a body=59 status=ok
// SIG undefined FUN_14700232a(void)

longlong FUN_14700232a(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1470023d2(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x20 + *param_1;
  FUN_1470023c6(lVar2);
  return lVar2;
}



// FUNCTION 147002366 FUN_147002366 body=96 status=ok
// SIG undefined FUN_147002366(void)

void FUN_147002366(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 5,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,8);
  }
  return;
}



// FUNCTION 1470023c6 FUN_1470023c6 body=11 status=ok
// SIG undefined FUN_1470023c6(void)

void FUN_1470023c6(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 1470023d2 FUN_1470023d2 body=132 status=ok
// SIG undefined FUN_1470023d2(void)

void FUN_1470023d2(longlong param_1,int param_2)

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



// FUNCTION 147002457 FUN_147002457 body=27 status=ok
// SIG undefined FUN_147002457(void)

void FUN_147002457(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined8 *)((longlong)param_1 + 0xd) = 0;
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 147002472 FUN_147002472 body=147 status=ok
// SIG undefined FUN_147002472(void)

void FUN_147002472(longlong param_1,int param_2)

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



// FUNCTION 147002506 FUN_147002506 body=106 status=ok
// SIG undefined FUN_147002506(void)

undefined8 * FUN_147002506(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  plVar1 = (longlong *)FUN_1400dbadc();
  plVar2 = (longlong *)*plVar1;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_140e92164();
    *plVar1 = (longlong)plVar2;
  }
  plVar2 = (longlong *)(**(code **)(*plVar2 + 0x188))(plVar2,param_2);
  *param_1 = plVar2;
  if (plVar2 == (longlong *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(*plVar2 + 8))(plVar2,0,0x7fffffffffffffff,0);
  }
  param_1[1] = uVar3;
  return param_1;
}



// FUNCTION 147002570 FUN_147002570 body=245 status=ok
// SIG undefined FUN_147002570(void)

longlong * FUN_147002570(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144869430();
  *param_1 = (longlong)&PTR_FUN_149fc9c70;
  lVar1 = param_2[1];
  param_1[0x12] = *param_2;
  param_1[0x13] = lVar1;
  param_1[0x14] = param_2[2];
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  FUN_14006620a(&local_30,*param_3,*(undefined4 *)(param_3 + 1));
  if (&local_30 == param_1 + 0x18) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[0x18] != 0) {
      FUN_1400020a8();
    }
    param_1[0x18] = local_30;
    local_30 = 0;
    *(undefined4 *)(param_1 + 0x19) = local_28;
    *(undefined4 *)((longlong)param_1 + 0xcc) = local_24;
  }
  (**(code **)(*param_1 + 0xb0))(param_1,1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147002666 FUN_147002666 body=92 status=ok
// SIG undefined FUN_147002666(void)

longlong * FUN_147002666(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_1 != param_2) {
    lVar1 = *param_1;
    *param_1 = *param_2;
    *param_2 = 0;
    if (lVar1 != 0) {
      FUN_1400020a8();
    }
    lVar1 = param_1[1];
    param_1[1] = param_2[1];
    param_2[1] = 0;
    FUN_146ffb142(lVar1);
  }
  *(undefined1 *)((longlong)param_1 + 0x14) = *(undefined1 *)((longlong)param_2 + 0x14);
  *(int *)(param_1 + 2) = (int)param_2[2];
  return param_1;
}



// FUNCTION 1470026c2 FUN_1470026c2 body=75 status=ok
// SIG undefined FUN_1470026c2(void)

void FUN_1470026c2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149fc88c0;
  if (((*(byte *)(param_1 + 5) & 1) == 0) && (param_1[0x14] != param_1[0x13])) {
    FUN_146ffb30e(param_1);
  }
  FUN_1400020a8(param_1[0x13]);
  FUN_14041e0ea(param_1);
  return;
}



// FUNCTION 14700270e FUN_14700270e body=68 status=ok
// SIG undefined FUN_14700270e(void)

undefined8 * FUN_14700270e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149fc9c70;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_144a7fc42(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147002776 FUN_147002776 body=101 status=ok
// SIG undefined FUN_147002776(void)

undefined8 FUN_147002776(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_2 * 0xe8,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2 >> 3;
  uVar3 = SUB168(auVar1 * ZEXT816(0x8d3dcb08d3dcb09),0);
  iVar4 = SUB164(auVar1 * ZEXT816(0x8d3dcb08d3dcb09),8);
  iVar5 = 0x7fffffff;
  if (param_2 <= iVar4) {
    iVar5 = iVar4;
  }
  if (iVar5 < 1) {
    iVar5 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(param_1,0,iVar5,0xe8,8);
  }
  *(int *)(param_1 + 0xc) = iVar5;
  return uVar3;
}



// FUNCTION 1470027db FUN_1470027db body=55 status=ok
// SIG undefined FUN_1470027db(void)

void FUN_1470027db(longlong param_1,longlong param_2,int param_3)

{
  do {
    FUN_146ffd3b0(param_1,param_2);
    param_1 = param_1 + 0xe8;
    param_2 = param_2 + 0xe8;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 147002812 FUN_147002812 body=69 status=ok
// SIG undefined FUN_147002812(void)

void FUN_147002812(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc);
  uVar1 = (ulonglong)(iVar4 + (uint)(iVar4 == -1)) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  uVar3 = 0;
  if (iVar4 != -1) {
    uVar3 = 1 << ((byte)lVar2 & 0x1f);
  }
  if (uVar3 <= *(int *)(param_1 + 8) + 1U) {
    return;
  }
  FUN_147002a7a(param_1);
  return;
}



// FUNCTION 147002858 FUN_147002858 body=176 status=ok
// SIG undefined FUN_147002858(void)

undefined8 * FUN_147002858(undefined8 *param_1,undefined8 *param_2)

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
  *(undefined2 *)(param_1 + 5) = *(undefined2 *)(param_2 + 5);
  param_1[4] = param_2[4];
  return param_1;
}



// FUNCTION 147002908 FUN_147002908 body=115 status=ok
// SIG undefined FUN_147002908(void)

void FUN_147002908(longlong *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 1);
  uVar3 = param_3 - param_2;
  if (uVar1 + 1 < uVar3 || uVar3 == 0) {
    return;
  }
  lVar2 = *param_1;
  param_2 = param_2 & uVar1;
  param_3 = param_3 & uVar1;
  if (param_2 < param_3) {
    lVar2 = lVar2 + (ulonglong)param_2 * 0x30;
    param_3 = uVar3;
  }
  else {
    FUN_14700297b((ulonglong)param_2 * 0x30 + lVar2,(uVar1 + 1) - param_2);
  }
  FUN_14700297b(lVar2,param_3);
  return;
}



// FUNCTION 14700297b FUN_14700297b body=61 status=ok
// SIG undefined FUN_14700297b(void)

void FUN_14700297b(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1470029b8 FUN_1470029b8 body=97 status=ok
// SIG undefined FUN_1470029b8(void)

void FUN_1470029b8(longlong *param_1)

{
  if (param_1 == (longlong *)0x0) {
    return;
  }
  FUN_14700000d(param_1[4],(int)param_1[5]);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_146fff473(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 147002a1a FUN_147002a1a body=96 status=ok
// SIG undefined FUN_147002a1a(void)

void FUN_147002a1a(longlong param_1,int param_2)

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



// FUNCTION 147002a7a FUN_147002a7a body=735 status=ok
// SIG undefined FUN_147002a7a(void)

void FUN_147002a7a(longlong *param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar12 = (int)param_1[2] - *(int *)((longlong)param_1 + 0xc);
  if (iVar12 == 0 || param_2 == 0) {
    local_58 = 8;
    FUN_1446f8d3c(param_1,0,param_2,0x30);
  }
  else {
    lVar3 = *param_1;
    lVar9 = param_1[1];
    local_50 = 0;
    local_58 = 8;
    FUN_1446f8d3c(&local_50,0);
    lVar1 = local_50;
    uVar4 = *(uint *)((longlong)param_1 + 0xc) & *(uint *)(param_1 + 1);
    uVar5 = *(uint *)(param_1 + 1) & *(uint *)(param_1 + 2);
    if (uVar5 < uVar4 || uVar5 - uVar4 == 0) {
      uVar6 = (int)lVar9 + 1;
      uVar2 = uVar6 - uVar4;
      uVar11 = 0;
      if (uVar4 <= uVar6 && uVar2 != 0) {
        lVar9 = (ulonglong)uVar4 * 0x30 + lVar3;
        lVar7 = 0x20;
        uVar10 = uVar2;
        do {
          *(undefined8 *)(local_50 + -0x20 + lVar7) = 0;
          *(undefined8 *)(local_50 + -0x20 + lVar7) = *(undefined8 *)(lVar9 + -0x20 + lVar7);
          *(undefined8 *)(lVar9 + -0x20 + lVar7) = 0;
          *(undefined4 *)(local_50 + -0x18 + lVar7) = *(undefined4 *)(lVar9 + -0x18 + lVar7);
          *(undefined4 *)(local_50 + -0x14 + lVar7) = *(undefined4 *)(lVar9 + -0x14 + lVar7);
          *(undefined8 *)(lVar9 + -0x18 + lVar7) = 0;
          *(undefined8 *)(local_50 + -0x10 + lVar7) = 0;
          *(undefined8 *)(local_50 + -0x10 + lVar7) = *(undefined8 *)(lVar9 + -0x10 + lVar7);
          *(undefined8 *)(lVar9 + -0x10 + lVar7) = 0;
          *(undefined4 *)(local_50 + -8 + lVar7) = *(undefined4 *)(lVar9 + -8 + lVar7);
          *(undefined4 *)(local_50 + -4 + lVar7) = *(undefined4 *)(lVar9 + -4 + lVar7);
          *(undefined8 *)(lVar9 + -8 + lVar7) = 0;
          *(undefined2 *)(local_50 + 8 + lVar7) = *(undefined2 *)(lVar9 + 8 + lVar7);
          *(undefined8 *)(local_50 + lVar7) = *(undefined8 *)(lVar9 + lVar7);
          lVar7 = lVar7 + 0x30;
          uVar10 = uVar10 - 1;
          uVar11 = uVar2;
        } while (uVar10 != 0);
      }
      FUN_147002908(param_1,uVar4,uVar6);
      uVar4 = 0;
      if (uVar5 != 0) {
        uVar4 = 0;
        lVar9 = 0;
        do {
          uVar8 = (ulonglong)uVar11;
          uVar11 = uVar11 + 1;
          lVar7 = uVar8 * 0x30;
          *(undefined8 *)(lVar1 + lVar7) = 0;
          *(undefined8 *)(lVar1 + lVar7) = *(undefined8 *)(lVar3 + lVar9);
          *(undefined8 *)(lVar3 + lVar9) = 0;
          *(undefined4 *)(lVar1 + 8 + lVar7) = *(undefined4 *)(lVar3 + 8 + lVar9);
          *(undefined4 *)(lVar1 + 0xc + lVar7) = *(undefined4 *)(lVar3 + 0xc + lVar9);
          *(undefined8 *)(lVar3 + 8 + lVar9) = 0;
          *(undefined8 *)(lVar1 + 0x10 + lVar7) = 0;
          *(undefined8 *)(lVar1 + 0x10 + lVar7) = *(undefined8 *)(lVar3 + 0x10 + lVar9);
          *(undefined8 *)(lVar3 + 0x10 + lVar9) = 0;
          *(undefined4 *)(lVar1 + 0x18 + lVar7) = *(undefined4 *)(lVar3 + 0x18 + lVar9);
          *(undefined4 *)(lVar1 + 0x1c + lVar7) = *(undefined4 *)(lVar3 + 0x1c + lVar9);
          *(undefined8 *)(lVar3 + 0x18 + lVar9) = 0;
          *(undefined2 *)(lVar1 + 0x28 + lVar7) = *(undefined2 *)(lVar3 + 0x28 + lVar9);
          *(undefined8 *)(lVar1 + 0x20 + lVar7) = *(undefined8 *)(lVar3 + 0x20 + lVar9);
          lVar9 = lVar9 + 0x30;
        } while ((ulonglong)uVar5 * 0x30 != lVar9);
      }
    }
    else {
      lVar3 = (ulonglong)uVar4 * 0x30 + lVar3;
      lVar9 = 0;
      do {
        *(undefined8 *)(local_50 + lVar9) = 0;
        *(undefined8 *)(local_50 + lVar9) = *(undefined8 *)(lVar3 + lVar9);
        *(undefined8 *)(lVar3 + lVar9) = 0;
        *(undefined4 *)(local_50 + 8 + lVar9) = *(undefined4 *)(lVar3 + 8 + lVar9);
        *(undefined4 *)(local_50 + 0xc + lVar9) = *(undefined4 *)(lVar3 + 0xc + lVar9);
        *(undefined8 *)(lVar3 + 8 + lVar9) = 0;
        *(undefined8 *)(local_50 + 0x10 + lVar9) = 0;
        *(undefined8 *)(local_50 + 0x10 + lVar9) = *(undefined8 *)(lVar3 + 0x10 + lVar9);
        *(undefined8 *)(lVar3 + 0x10 + lVar9) = 0;
        *(undefined4 *)(local_50 + 0x18 + lVar9) = *(undefined4 *)(lVar3 + 0x18 + lVar9);
        *(undefined4 *)(local_50 + 0x1c + lVar9) = *(undefined4 *)(lVar3 + 0x1c + lVar9);
        *(undefined8 *)(lVar3 + 0x18 + lVar9) = 0;
        *(undefined2 *)(local_50 + 0x28 + lVar9) = *(undefined2 *)(lVar3 + 0x28 + lVar9);
        *(undefined8 *)(local_50 + 0x20 + lVar9) = *(undefined8 *)(lVar3 + 0x20 + lVar9);
        lVar9 = lVar9 + 0x30;
      } while ((ulonglong)(uVar5 - uVar4) * 0x30 != lVar9);
    }
    FUN_147002908(param_1,uVar4,uVar5);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_50;
  }
  *(int *)(param_1 + 1) = param_2 + -1;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(int *)(param_1 + 2) = iVar12;
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147002d5a FUN_147002d5a body=132 status=ok
// SIG undefined FUN_147002d5a(void)

void FUN_147002d5a(longlong param_1,int param_2)

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



// FUNCTION 147002de0 FUN_147002de0 body=62 status=ok
// SIG undefined FUN_147002de0(void)

void FUN_147002de0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147002e1e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 147002e1e FUN_147002e1e body=93 status=ok
// SIG undefined FUN_147002e1e(void)

ulonglong FUN_147002e1e(uint param_1,uint param_2)

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



// FUNCTION 147002e7c FUN_147002e7c body=98 status=ok
// SIG undefined FUN_147002e7c(void)

void FUN_147002e7c(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar1 = param_1;
  }
  lVar4 = param_1 + 0x40;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x48);
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0xc + (longlong)param_2 * 0x10);
  iVar3 = *(int *)(lVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)(lVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar4 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 8 + lVar4 * 0x10);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar4 * 0x10 + 8);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x10 + 8);
  FUN_147002ede();
  return;
}



// FUNCTION 147002ede FUN_147002ede body=72 status=ok
// SIG undefined FUN_147002ede(void)

void FUN_147002ede(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar1 = param_1;
  }
  lVar1 = *(longlong *)(lVar1 + (longlong)param_2 * 0x10);
  if (lVar1 != 0) {
    FUN_145c17a80(lVar1);
    FUN_1400020a8(lVar1);
  }
  FUN_146ffb97c(param_1,param_2);
  return;
}



// FUNCTION 147002f26 FUN_147002f26 body=330 status=ok
// SIG undefined FUN_147002f26(void)

void FUN_147002f26(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong local_78;
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
  lVar5 = param_1 + 0x40;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x48);
  }
  iVar6 = *(int *)(param_1 + 0x50);
  iVar3 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  if (*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x3c) < iVar3 >> 2) {
    lVar2 = param_1 + 0x20;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = lVar2;
    if (*(int *)(param_1 + 0x30) == 0) {
      iVar6 = 0;
    }
    else {
      FUN_144a81a4c(&local_50);
      iVar6 = *(int *)(param_1 + 0x30);
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar1 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar3 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar1, uStack_48 != lVar2)) {
      do {
        local_60 = uVar1;
        lVar4 = *(longlong *)(local_78 + 0x10);
        if (*(longlong *)(local_78 + 0x10) == 0) {
          lVar4 = local_78;
        }
        *(undefined4 *)(lVar5 + (longlong)*(int *)(lVar4 + 0xc + (longlong)iVar3 * 0x10) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_144a81a4c(&local_70);
        iVar3 = local_60._4_4_;
        uVar1 = local_60;
      } while (local_78 != param_1 ||
               (CONCAT44(uStack_64,uStack_68) != lVar2 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar2 = 0;
    do {
      *(undefined4 *)(lVar5 + lVar2 * 4) = 0xffffffff;
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 0x50));
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147003072 FUN_147003072 body=484 status=ok
// SIG undefined FUN_147003072(void)

void FUN_147003072(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1446efa72(param_1 + 0x48,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 0x50);
  uVar3 = local_58;
  if (uVar2 != 0) {
    lVar1 = param_1 + 0x40;
    uVar7 = 0;
    FUN_144a1cbf0(lVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        lVar5 = *(longlong *)(param_1 + 0x48);
        if (*(longlong *)(param_1 + 0x48) == 0) {
          lVar5 = lVar1;
        }
        *(undefined4 *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x50) + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar2 != uVar7);
    }
    local_40 = param_1 + 0x20;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if (*(int *)(param_1 + 0x30) != 0) {
      FUN_144a81a4c(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < *(int *)(local_40 + 0x10)) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar5 = *(longlong *)(local_70 + 0x10);
        if (*(longlong *)(local_70 + 0x10) == 0) {
          lVar5 = local_70;
        }
        lVar6 = (longlong)iVar4 * 0x10;
        uVar3 = *(undefined8 *)(lVar5 + lVar6);
        uVar2 = (uint)((ulonglong)uVar3 >> 0x10);
        uVar7 = (uint)uVar3 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar3 << 0x10 | uVar7) + (int)((ulonglong)uVar3 >> 0x20) +
                      (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar7 >> 4)) &
                (longlong)*(int *)(param_1 + 0x50) - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar5 + 0xc + lVar6) = iVar8;
        lVar10 = *(longlong *)(param_1 + 0x48);
        if (*(longlong *)(param_1 + 0x48) == 0) {
          lVar10 = lVar1;
        }
        *(undefined4 *)(lVar5 + 8 + lVar6) =
             *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x50) - 1U & uVar9) * 4);
        lVar5 = *(longlong *)(param_1 + 0x48);
        if (*(longlong *)(param_1 + 0x48) == 0) {
          lVar5 = lVar1;
        }
        *(int *)(lVar5 + ((longlong)iVar8 & (longlong)*(int *)(param_1 + 0x50) - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_144a81a4c(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < *(int *)(local_60 + 0x10));
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147003258 FUN_147003258 body=330 status=ok
// SIG undefined FUN_147003258(void)

void FUN_147003258(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong local_78;
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
  lVar5 = param_1 + 0x40;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x48);
  }
  iVar6 = *(int *)(param_1 + 0x50);
  iVar3 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  if (*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x3c) < iVar3 >> 2) {
    lVar2 = param_1 + 0x20;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = lVar2;
    if (*(int *)(param_1 + 0x30) == 0) {
      iVar6 = 0;
    }
    else {
      FUN_144a81a4c(&local_50);
      iVar6 = *(int *)(param_1 + 0x30);
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar1 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar3 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar1, uStack_48 != lVar2)) {
      do {
        local_60 = uVar1;
        lVar4 = *(longlong *)(local_78 + 0x10);
        if (*(longlong *)(local_78 + 0x10) == 0) {
          lVar4 = local_78;
        }
        *(undefined4 *)(lVar5 + (longlong)*(int *)(lVar4 + 0xc + (longlong)iVar3 * 0x10) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_144a81a4c(&local_70);
        iVar3 = local_60._4_4_;
        uVar1 = local_60;
      } while (local_78 != param_1 ||
               (CONCAT44(uStack_64,uStack_68) != lVar2 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar2 = 0;
    do {
      *(undefined4 *)(lVar5 + lVar2 * 4) = 0xffffffff;
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 0x50));
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1470033a3 FUN_1470033a3 body=50 status=ok
// SIG undefined FUN_1470033a3(void)

void FUN_1470033a3(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x80);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x12;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1470033d6 FUN_1470033d6 body=68 status=ok
// SIG undefined FUN_1470033d6(void)

void FUN_1470033d6(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_1470033a3(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_14700341c(param_1,param_2);
  return;
}



// FUNCTION 14700341c FUN_14700341c body=112 status=ok
// SIG undefined FUN_14700341c(void)

void FUN_14700341c(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x90,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x90)) {
      uVar2 = uVar1 / 0x90 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x90,8);
  }
  return;
}



// FUNCTION 14700348c FUN_14700348c body=147 status=ok
// SIG undefined FUN_14700348c(void)

void FUN_14700348c(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x90,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x90)) {
      uVar5 = uVar4 / 0x90 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x90,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147003520 FUN_147003520 body=104 status=ok
// SIG undefined FUN_147003520(void)

void FUN_147003520(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0x10;
    if (0x10 < param_2) {
      uVar2 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
      iVar1 = (int)(uVar2 >> 3);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_1468b3c36(param_1,0,iVar3,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x8c) = param_3;
  return;
}



// FUNCTION 147003588 FUN_147003588 body=285 status=ok
// SIG undefined FUN_147003588(void)

undefined4 * FUN_147003588(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  undefined4 uVar3;
  char cVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1470036a6(param_1,local_48);
  uVar1 = *param_3;
  *local_40 = uVar1;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar2 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar6 = (uint)uVar1 & 0xffff;
  iVar8 = ((uint)uVar1 << 0x10 | uVar6) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4);
  cVar4 = FUN_1470037a4(param_1,iVar8,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    cVar4 = FUN_14700391e(param_1,*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x3c));
    if (cVar4 == '\0') {
      uVar5 = (longlong)iVar8 & (longlong)*(int *)(param_1 + 0x50) - 1U;
      iVar8 = (int)uVar5;
      *(int *)((longlong)local_40 + 0xc) = iVar8;
      lVar7 = *(longlong *)(param_1 + 0x48);
      if (*(longlong *)(param_1 + 0x48) == 0) {
        lVar7 = param_1 + 0x40;
      }
      *(undefined4 *)(local_40 + 1) =
           *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x50) - 1U & uVar5) * 4);
      lVar7 = *(longlong *)(param_1 + 0x48);
      if (*(longlong *)(param_1 + 0x48) == 0) {
        lVar7 = param_1 + 0x40;
      }
      *(undefined4 *)(lVar7 + ((longlong)iVar8 & (longlong)*(int *)(param_1 + 0x50) - 1U) * 4) =
           uVar3;
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470036a6 FUN_1470036a6 body=254 status=ok
// SIG undefined FUN_1470036a6(void)

int * FUN_1470036a6(longlong param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)(param_1 + 0x3c) == 0) {
    iVar6 = *(int *)(param_1 + 0x18);
    *(int *)(param_1 + 0x18) = iVar6 + 1;
    if (*(int *)(param_1 + 0x1c) == iVar6) {
      FUN_147003824(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_14489e6aa(param_1 + 0x20,1);
    lVar4 = *(longlong *)(param_1 + 0x28);
    if (*(longlong *)(param_1 + 0x28) == 0) {
      lVar4 = param_1 + 0x20;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)(lVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x10);
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar4 = param_1;
    }
    iVar6 = *(int *)(param_1 + 0x38);
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(lVar4 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 0x38) = iVar3;
    iVar5 = *(int *)(param_1 + 0x3c) + -1;
    *(int *)(param_1 + 0x3c) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(lVar4 + (longlong)iVar3 * 0x10) = 0xffffffff;
    }
  }
  lVar4 = param_1 + 0x20;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x28);
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)(lVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar4 = param_1;
  }
  *(longlong *)(param_2 + 2) = lVar7 * 0x10 + lVar4;
  return param_2;
}



// FUNCTION 1470037a4 FUN_1470037a4 body=128 status=ok
// SIG undefined FUN_1470037a4(void)

undefined8 FUN_1470037a4(longlong param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong lVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x3c) != 1) &&
     (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x3c))) {
    lVar1 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x48);
    }
    iVar2 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0x50) - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)(param_1 + 0x10);
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar1 = param_1;
      }
      do {
        if (*(longlong *)(lVar1 + (longlong)iVar2 * 0x10) == *param_3) {
          FUN_1470038a2(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x10 + lVar1 + 8);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 147003824 FUN_147003824 body=124 status=ok
// SIG undefined FUN_147003824(void)

void FUN_147003824(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (param_2 <= (int)uVar1) {
    iVar6 = 1;
    if (1 < uVar1) {
      if (*(uint *)(param_1 + 0x1c) < 2) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar5 = (longlong)(int)uVar2;
      }
      else {
        lVar5 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar5 << 4,0);
      iVar3 = (int)(uVar4 >> 4);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar6 = iVar3;
      }
    }
    *(int *)(param_1 + 0x1c) = iVar6;
    FUN_146ffbcc8(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1470038a2 FUN_1470038a2 body=123 status=ok
// SIG undefined FUN_1470038a2(void)

void FUN_1470038a2(longlong param_1,int param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar4 = param_1;
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    *(int *)(lVar4 + (longlong)*(int *)(param_1 + 0x38) * 0x10) = param_2;
  }
  *(undefined4 *)(lVar4 + (longlong)param_2 * 0x10) = 0xffffffff;
  if (*(int *)(param_1 + 0x3c) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = *(undefined4 *)(param_1 + 0x38);
  }
  *(undefined4 *)(lVar4 + (longlong)param_2 * 0x10 + 4) = uVar5;
  *(int *)(param_1 + 0x38) = param_2;
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
  lVar4 = param_1 + 0x20;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x28);
  }
  iVar3 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar3 = param_2;
  }
  bVar2 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)(lVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 14700391e FUN_14700391e body=87 status=ok
// SIG undefined FUN_14700391e(void)

undefined8 FUN_14700391e(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar1 = (ulonglong)(((param_2 >> 1) - 1) + (uint)(param_2 >> 1 == 0)) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  iVar3 = 1 << ((byte)lVar2 & 0x1f);
  if (param_2 < 4) {
    iVar3 = 1;
  }
  if (((int)param_2 < 1) || (iVar3 <= *(int *)(param_1 + 0x50))) {
    uVar4 = 0;
  }
  else {
    *(int *)(param_1 + 0x50) = iVar3;
    FUN_147003072(param_1);
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 147003976 FUN_147003976 body=57 status=ok
// SIG undefined FUN_147003976(void)

void FUN_147003976(undefined8 *param_1,int param_2)

{
  FUN_146ffa660(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_1470039b0(param_1,param_2);
  return;
}



// FUNCTION 1470039b0 FUN_1470039b0 body=114 status=ok
// SIG undefined FUN_1470039b0(void)

void FUN_1470039b0(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0xb8,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0xb8)) {
      uVar2 = uVar1 / 0xb8 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xb8,8);
  }
  return;
}



// FUNCTION 147003a22 FUN_147003a22 body=480 status=ok
// SIG undefined FUN_147003a22(void)

void FUN_147003a22(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  uint uVar10;
  longlong lVar11;
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
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
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
        lVar11 = (longlong)iVar12 * 0x50;
        iVar6 = *(int *)(lVar3 + 8 + lVar11);
        puVar9 = &DAT_149dfb77a;
        iVar4 = 0;
        if (iVar6 != 0) {
          puVar9 = *(undefined2 **)(lVar3 + lVar11);
          iVar4 = iVar6 + -1;
        }
        iVar6 = FUN_144a49b4a(iVar4,puVar9);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x4c + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x48 + lVar11) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
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



// FUNCTION 147003c04 FUN_147003c04 body=385 status=ok
// SIG undefined FUN_147003c04(void)

undefined4 * FUN_147003c04(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  undefined1 auStack_78 [36];
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined4 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147003d86(param_1,local_50);
  puVar1 = (undefined4 *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  local_48[4] = puVar1[4];
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *local_48 = *puVar1;
  local_48[1] = uVar3;
  local_48[2] = uVar4;
  local_48[3] = uVar5;
  *(undefined8 *)(local_48 + 6) = 0;
  iVar10 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
  local_48[8] = iVar10;
  if ((longlong)iVar10 == 0) {
    local_48[9] = 0;
  }
  else {
    FUN_1446dd670(local_48 + 6,iVar10,0);
    memcpy(*(void **)(local_48 + 6),_Src,(longlong)iVar10 * 2);
  }
  local_48[10] = 0xffffffff;
  local_54 = local_50[0];
  lVar8 = 0;
  uVar11 = 0;
  do {
    uVar11 = (uint)*(byte *)((longlong)local_48 + lVar8) + uVar11 * 0x67;
    lVar8 = lVar8 + 1;
  } while (lVar8 != 0x14);
  cVar6 = FUN_147003e74(param_1,uVar11,local_48,&local_54);
  uVar3 = local_54;
  if (cVar6 == '\0') {
    uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar10 = 1;
    if (3 < uVar7) {
      uVar9 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar10 <= *(int *)(param_1 + 0x48))) {
      uVar11 = *(int *)(param_1 + 0x48) - 1U & uVar11;
      local_48[0xb] = uVar11;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_48[10] = *(undefined4 *)
                      (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar11) * 4
                      );
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar11) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar10;
      FUN_147003fe4(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147003d86 FUN_147003d86 body=238 status=ok
// SIG undefined FUN_147003d86(void)

int * FUN_147003d86(longlong *param_1,int *param_2)

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
      FUN_140044672(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x30);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x30) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x30 + *param_1;
  return param_2;
}



// FUNCTION 147003e74 FUN_147003e74 body=128 status=ok
// SIG undefined FUN_147003e74(void)

undefined8 FUN_147003e74(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

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
  int iVar10;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar10 = FUN_147003ef4(), iVar10 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar10 * 0x30);
    if (*(longlong *)(*param_1 + 0x18 + (longlong)iVar10 * 0x30) != 0) {
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
    *(undefined8 *)(puVar1 + 8) = *(undefined8 *)(param_3 + 8);
    puVar1[4] = uVar6;
    puVar1[5] = uVar7;
    puVar1[6] = uVar8;
    puVar1[7] = uVar9;
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_147003f6a(param_1,*param_4);
    *param_4 = iVar10;
    return 1;
  }
  return 0;
}



// FUNCTION 147003ef4 FUN_147003ef4 body=117 status=ok
// SIG undefined FUN_147003ef4(void)

int FUN_147003ef4(longlong *param_1,uint param_2,undefined1 (*param_3) [16])

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
        lVar4 = (longlong)iVar1 * 0x30;
        if (*(int *)(lVar2 + 0x10 + lVar4) == *(int *)param_3[1] &&
            *(undefined1 (*) [16])(lVar2 + lVar4) == *param_3) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar4 + lVar2 + 0x28);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 147003f6a FUN_147003f6a body=122 status=ok
// SIG undefined FUN_147003f6a(void)

void FUN_147003f6a(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x30) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30 + 4) = uVar4;
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



// FUNCTION 147003fe4 FUN_147003fe4 body=449 status=ok
// SIG undefined FUN_147003fe4(void)

void FUN_147003fe4(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
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
  uVar3 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
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
        lVar5 = (longlong)iVar4 * 0x30 + *local_70;
        lVar10 = 0;
        iVar7 = 0;
        do {
          iVar7 = (uint)*(byte *)(lVar5 + lVar10) + iVar7 * 0x67;
          lVar10 = lVar10 + 1;
        } while (lVar10 != 0x14);
        uVar8 = (longlong)iVar7 & (longlong)(int)param_1[9] - 1U;
        iVar7 = (int)uVar8;
        *(int *)(lVar5 + 0x2c) = iVar7;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar5 + 0x28) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
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



// FUNCTION 1470041a6 FUN_1470041a6 body=67 status=ok
// SIG undefined FUN_1470041a6(void)

void FUN_1470041a6(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_146ffa736(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_147003a22(param_1);
    return;
  }
  FUN_1470041ea(param_1);
  FUN_146ffa736(param_1,0);
  return;
}



// FUNCTION 1470041ea FUN_1470041ea body=326 status=ok
// SIG undefined FUN_1470041ea(void)

void FUN_1470041ea(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x4c + (longlong)iVar4 * 0x50) * 4) =
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



// FUNCTION 147004332 FUN_147004332 body=207 status=ok
// SIG undefined FUN_147004332(void)

int FUN_147004332(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_14700437c:
      lVar10 = (longlong)iVar1 * 0x50;
      iVar3 = *(int *)(lVar4 + 8 + lVar10);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_1470043f6;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_1470043f6;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_1470043e7;
    }
  }
  return -1;
LAB_1470043f6:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_1470043e7:
  iVar1 = *(int *)(lVar4 + 0x48 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_14700437c;
}



// FUNCTION 147004402 FUN_147004402 body=47 status=ok
// SIG undefined FUN_147004402(void)

void FUN_147004402(longlong param_1,undefined8 *param_2)

{
  FUN_147004432();
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    return;
  }
  FUN_147004706(*param_2,*(undefined4 *)(param_2 + 1));
  return;
}



// FUNCTION 147004432 FUN_147004432 body=431 status=ok
// SIG undefined FUN_147004432(void)

longlong * FUN_147004432(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [44];
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0xb8,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0xb8);
  local_3c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_3c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_3c,4);
    }
    else {
      FUN_14572512c(param_1,&local_3c);
    }
  }
  else {
    local_3c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_3c == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_146ffa660(*param_2,(int)param_2[1]);
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_1470039b0(param_2,0);
      }
    }
  }
  else if ((((int)local_3c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x1642c < local_3c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_3c;
    lVar5 = 0x10;
    lVar6 = 0;
    do {
      lVar3 = *param_2;
      FUN_14021219d(param_1,lVar3 + lVar5 + -0x10);
      FUN_146fedc8d(param_1,lVar3 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0xb8;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    FUN_147003976(param_2);
    if (0 < (int)local_3c) {
      iVar4 = 0;
      do {
        lVar5 = FUN_1470045e2(param_2);
        FUN_14021219d(param_1,lVar5);
        FUN_146fedc8d(param_1,lVar5 + 0x10);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_3c);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1470045e2 FUN_1470045e2 body=62 status=ok
// SIG undefined FUN_1470045e2(void)

longlong FUN_1470045e2(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147004670(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0xb8 + *param_1;
  FUN_147004620(lVar2);
  return lVar2;
}



// FUNCTION 147004620 FUN_147004620 body=79 status=ok
// SIG undefined FUN_147004620(void)

void FUN_147004620(void *param_1)

{
  memset(param_1,0,0xb8);
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0xffffffff00000080;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x78) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa0) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xa8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0xffffffff;
  return;
}



// FUNCTION 147004670 FUN_147004670 body=149 status=ok
// SIG undefined FUN_147004670(void)

void FUN_147004670(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xb8,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xb8)) {
      uVar5 = uVar4 / 0xb8 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xb8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147004706 FUN_147004706 body=1106 status=ok
// SIG undefined FUN_147004706(void)

void FUN_147004706(longlong param_1,uint param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  longlong *plVar6;
  uint uVar7;
  undefined8 *_Src;
  undefined8 *_Src_00;
  undefined8 *puVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  float fVar14;
  undefined1 auStack_448 [40];
  longlong *local_420;
  int local_414;
  undefined8 *local_410;
  longlong local_408;
  longlong local_400;
  undefined4 local_3f8 [190];
  undefined1 local_100 [184];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_448;
  if (1 < (int)param_2) {
    memset(local_3f8,0,0x2f0);
    local_400 = (ulonglong)param_2 * 0xb8 + param_1 + -0xb8;
    local_408 = param_1;
    fVar14 = logf((float)(int)param_2);
    local_3f8[0] = (int)(longlong)(fVar14 + fVar14);
    plVar6 = &local_408;
    do {
      _Src = (undefined8 *)*plVar6;
      _Src_00 = (undefined8 *)plVar6[1];
      iVar9 = (int)plVar6[2];
      iVar3 = (int)((ulonglong)((longlong)_Src_00 - (longlong)_Src) >> 3);
      local_420 = plVar6;
      if (iVar9 != 0) {
LAB_1470047c9:
        uVar7 = iVar3 * -0x1642c859 + 1;
        plVar6 = local_420;
        if (8 < (int)uVar7) {
          local_414 = iVar9;
          local_410 = _Src_00;
          memcpy(local_100,_Src + (ulonglong)(uVar7 >> 1) * 0x17,0xb8);
          memcpy(_Src + (ulonglong)(uVar7 >> 1) * 0x17,_Src,0xb8);
          memcpy(_Src,local_100,0xb8);
          puVar12 = _Src_00 + 0x17;
          puVar8 = _Src;
LAB_147004825:
          puVar13 = puVar8 + 0x17;
          if (puVar13 <= _Src_00) goto code_r0x000147004834;
          goto LAB_147004898;
        }
        for (; local_420 = plVar6, puVar12 = _Src, puVar8 = _Src, _Src < _Src_00;
            _Src_00 = _Src_00 + -0x17) {
joined_r0x000147004a47:
          puVar13 = puVar12 + 0x17;
          if (puVar13 <= _Src_00) {
            puVar4 = &DAT_149dfb77a;
            if (*(int *)(puVar12 + 0x18) != 0) {
              puVar4 = (undefined2 *)puVar12[0x17];
            }
            puVar5 = &DAT_149dfb77a;
            if (*(int *)(puVar8 + 1) != 0) {
              puVar5 = (undefined2 *)*puVar8;
            }
            lVar10 = 0;
            while( true ) {
              uVar1 = *(ushort *)((longlong)puVar5 + lVar10);
              uVar7 = (uint)uVar1;
              uVar2 = *(ushort *)((longlong)puVar4 + lVar10);
              uVar11 = (uint)uVar2;
              puVar12 = puVar13;
              if (uVar1 != uVar2) break;
              if (uVar1 == 0) goto joined_r0x000147004a47;
LAB_147004a91:
              lVar10 = lVar10 + 2;
            }
            if ((uVar2 | uVar1) < 0x80) {
              uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar1];
              uVar11 = (uint)(byte)(&DAT_149e05da0)[uVar2];
              if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_147004a91;
            }
            if ((int)(uVar7 - uVar11) < 0) {
              puVar8 = puVar13;
            }
            goto joined_r0x000147004a47;
          }
          memcpy(local_100,puVar8,0xb8);
          memcpy(puVar8,_Src_00,0xb8);
          memcpy(_Src_00,local_100,0xb8);
          plVar6 = local_420;
        }
        goto LAB_147004b19;
      }
LAB_147004a24:
      FUN_147004b59(_Src);
      plVar6 = local_420;
LAB_147004b19:
      plVar6 = plVar6 + -3;
    } while (&local_408 <= plVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_448) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000147004834:
  puVar4 = &DAT_149dfb77a;
  if (*(int *)(puVar8 + 0x18) != 0) {
    puVar4 = (undefined2 *)puVar8[0x17];
  }
  puVar5 = &DAT_149dfb77a;
  if (*(int *)(_Src + 1) != 0) {
    puVar5 = (undefined2 *)*_Src;
  }
  lVar10 = 0;
  while( true ) {
    uVar1 = *(ushort *)((longlong)puVar5 + lVar10);
    uVar7 = (uint)uVar1;
    uVar2 = *(ushort *)((longlong)puVar4 + lVar10);
    uVar11 = (uint)uVar2;
    if (uVar1 != uVar2) {
      if ((uVar2 | uVar1) < 0x80) {
        uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar1];
        uVar11 = (uint)(byte)(&DAT_149e05da0)[uVar2];
        if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_14700486a;
      }
      iVar9 = uVar7 - uVar11;
      goto LAB_147004894;
    }
    if (uVar1 == 0) break;
LAB_14700486a:
    lVar10 = lVar10 + 2;
  }
  iVar9 = 0;
LAB_147004894:
  puVar8 = puVar13;
  if (-1 < iVar9) goto LAB_147004825;
LAB_147004898:
  do {
    puVar8 = puVar12;
    puVar12 = puVar8 + -0x17;
    if (puVar12 <= _Src) break;
    puVar4 = &DAT_149dfb77a;
    if (*(int *)(_Src + 1) != 0) {
      puVar4 = (undefined2 *)*_Src;
    }
    puVar5 = &DAT_149dfb77a;
    if (*(int *)(puVar8 + -0x16) != 0) {
      puVar5 = (undefined2 *)puVar8[-0x17];
    }
    lVar10 = 0;
    while( true ) {
      uVar1 = *(ushort *)((longlong)puVar5 + lVar10);
      uVar7 = (uint)uVar1;
      uVar2 = *(ushort *)((longlong)puVar4 + lVar10);
      uVar11 = (uint)uVar2;
      if (uVar1 != uVar2) {
        if ((uVar2 | uVar1) < 0x80) {
          uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar1];
          uVar11 = (uint)(byte)(&DAT_149e05da0)[uVar2];
          if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1470048de;
        }
        iVar9 = uVar7 - uVar11;
        goto LAB_147004908;
      }
      if (uVar1 == 0) break;
LAB_1470048de:
      lVar10 = lVar10 + 2;
    }
    iVar9 = 0;
LAB_147004908:
  } while (-1 < iVar9);
  if (puVar13 <= puVar12) {
    memcpy(local_100,puVar13,0xb8);
    memcpy(puVar13,puVar12,0xb8);
    memcpy(puVar12,local_100,0xb8);
    puVar8 = puVar13;
    goto LAB_147004825;
  }
  memcpy(local_100,_Src,0xb8);
  memcpy(_Src,puVar12,0xb8);
  memcpy(puVar12,local_100,0xb8);
  iVar9 = local_414 + -1;
  puVar8 = puVar8 + -0x2e;
  if ((longlong)puVar8 - (longlong)_Src < (longlong)local_410 - (longlong)puVar13) {
    if (puVar13 < _Src_00) {
      *local_420 = (longlong)puVar13;
      local_420[1] = (longlong)_Src_00;
      *(int *)(local_420 + 2) = iVar9;
      local_420 = local_420 + 3;
    }
    plVar6 = local_420;
    if (puVar12 <= _Src + 0x17) goto LAB_147004b19;
  }
  else {
    plVar6 = local_420;
    if (_Src + 0x17 < puVar12) {
      *local_420 = (longlong)_Src;
      local_420[1] = (longlong)puVar8;
      *(int *)(local_420 + 2) = iVar9;
      plVar6 = local_420 + 3;
    }
    puVar8 = _Src_00;
    _Src = puVar13;
    if (_Src_00 <= puVar13) goto LAB_147004b19;
  }
  local_420 = plVar6;
  iVar3 = (int)((ulonglong)((longlong)puVar8 - (longlong)_Src) >> 3);
  _Src_00 = puVar8;
  if (iVar9 == 0) goto LAB_147004a24;
  goto LAB_1470047c9;
}



// FUNCTION 147004b59 FUN_147004b59 body=1034 status=ok
// SIG undefined FUN_147004b59(void)

void FUN_147004b59(void *param_1,uint param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  undefined2 *puVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  int iVar9;
  undefined2 *puVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  bool bVar17;
  undefined1 auStack_128 [40];
  undefined1 local_100 [184];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (param_2 != 0) {
    iVar14 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    do {
      iVar9 = iVar14 * 2 + 1;
      iVar3 = iVar14;
      if (iVar9 < (int)param_2) {
LAB_147004bc5:
        iVar6 = iVar3 * 2 + 2;
        iVar7 = iVar9;
        if (iVar6 < (int)param_2) {
          puVar5 = &DAT_149dfb77a;
          if (*(int *)((longlong)param_1 + (longlong)iVar9 * 0xb8 + 8) != 0) {
            puVar5 = *(undefined2 **)((longlong)param_1 + (longlong)iVar9 * 0xb8);
          }
          puVar10 = &DAT_149dfb77a;
          if (*(int *)((longlong)param_1 + (longlong)iVar6 * 0xb8 + 8) != 0) {
            puVar10 = *(undefined2 **)((longlong)param_1 + (longlong)iVar6 * 0xb8);
          }
          lVar12 = 0;
          while( true ) {
            uVar1 = *(ushort *)((longlong)puVar10 + lVar12);
            uVar4 = (uint)uVar1;
            uVar2 = *(ushort *)((longlong)puVar5 + lVar12);
            uVar13 = (uint)uVar2;
            iVar7 = iVar6;
            if (uVar1 != uVar2) break;
            if (uVar1 == 0) goto LAB_147004c47;
LAB_147004c18:
            lVar12 = lVar12 + 2;
          }
          if ((uVar2 | uVar1) < 0x80) {
            uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar1];
            uVar13 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_147004c18;
          }
          if ((int)(uVar4 - uVar13) < 0) {
            iVar7 = iVar9;
          }
        }
LAB_147004c47:
        lVar12 = (longlong)iVar7 * 0xb8;
        puVar5 = &DAT_149dfb77a;
        if (*(int *)((longlong)param_1 + lVar12 + 8) != 0) {
          puVar5 = *(undefined2 **)((longlong)param_1 + lVar12);
        }
        lVar15 = (longlong)iVar3 * 0xb8;
        puVar10 = &DAT_149dfb77a;
        if (*(int *)((longlong)param_1 + lVar15 + 8) != 0) {
          puVar10 = *(undefined2 **)((longlong)param_1 + lVar15);
        }
        lVar11 = 0;
        do {
          uVar1 = *(ushort *)((longlong)puVar10 + lVar11);
          uVar4 = (uint)uVar1;
          uVar2 = *(ushort *)((longlong)puVar5 + lVar11);
          uVar13 = (uint)uVar2;
          if (uVar1 == uVar2) {
            if (uVar1 == 0) break;
          }
          else {
            if (0x7f < (uVar2 | uVar1)) goto LAB_147004cb9;
            uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar1];
            uVar13 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[uVar2]) goto LAB_147004cb9;
          }
          lVar11 = lVar11 + 2;
        } while( true );
      }
LAB_147004d0b:
      bVar17 = iVar14 != 0;
      iVar14 = iVar14 + -1;
    } while (bVar17);
    if (1 < (int)param_2) {
      pvVar8 = (void *)(((ulonglong)param_2 - 1) * 0xb8 + (longlong)param_1);
      memcpy(local_100,param_1,0xb8);
      memcpy(param_1,pvVar8,0xb8);
      memcpy(pvVar8,local_100,0xb8);
      if (param_2 != 2) {
        uVar16 = (ulonglong)param_2 - 1;
LAB_147004db1:
        iVar14 = 1;
        iVar9 = 0;
        iVar3 = 0;
LAB_147004dba:
        iVar9 = iVar9 + 2;
        iVar7 = iVar14;
        if ((longlong)iVar9 < (longlong)uVar16) {
          puVar5 = &DAT_149dfb77a;
          if (*(int *)((longlong)param_1 + (longlong)iVar14 * 0xb8 + 8) != 0) {
            puVar5 = *(undefined2 **)((longlong)param_1 + (longlong)iVar14 * 0xb8);
          }
          lVar12 = (longlong)iVar9 * 0xb8;
          puVar10 = &DAT_149dfb77a;
          if (*(int *)((longlong)param_1 + lVar12 + 8) != 0) {
            puVar10 = *(undefined2 **)((longlong)param_1 + lVar12);
          }
          lVar12 = 0;
          while( true ) {
            uVar1 = *(ushort *)((longlong)puVar10 + lVar12);
            uVar4 = (uint)uVar1;
            uVar2 = *(ushort *)((longlong)puVar5 + lVar12);
            uVar13 = (uint)uVar2;
            iVar7 = iVar9;
            if (uVar1 != uVar2) break;
            if (uVar1 == 0) goto LAB_147004e3c;
LAB_147004e0e:
            lVar12 = lVar12 + 2;
          }
          if ((uVar2 | uVar1) < 0x80) {
            uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar1];
            uVar13 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_147004e0e;
          }
          if ((int)(uVar4 - uVar13) < 0) {
            iVar7 = iVar14;
          }
        }
LAB_147004e3c:
        lVar12 = (longlong)iVar7 * 0xb8;
        puVar5 = &DAT_149dfb77a;
        if (*(int *)((longlong)param_1 + lVar12 + 8) != 0) {
          puVar5 = *(undefined2 **)((longlong)param_1 + lVar12);
        }
        lVar15 = (longlong)iVar3 * 0xb8;
        puVar10 = &DAT_149dfb77a;
        if (*(int *)((longlong)param_1 + lVar15 + 8) != 0) {
          puVar10 = *(undefined2 **)((longlong)param_1 + lVar15);
        }
        lVar11 = 0;
        do {
          uVar1 = *(ushort *)((longlong)puVar10 + lVar11);
          uVar4 = (uint)uVar1;
          uVar2 = *(ushort *)((longlong)puVar5 + lVar11);
          uVar13 = (uint)uVar2;
          if (uVar1 == uVar2) {
            if (uVar1 == 0) goto LAB_147004f03;
          }
          else {
            if (0x7f < (uVar2 | uVar1)) goto LAB_147004ead;
            uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar1];
            uVar13 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[uVar2]) goto LAB_147004ead;
          }
          lVar11 = lVar11 + 2;
        } while( true );
      }
    }
  }
LAB_147004d77:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_147004cb9:
  if (-1 < (int)(uVar4 - uVar13)) goto LAB_147004d0b;
  memcpy(local_100,(void *)(lVar15 + (longlong)param_1),0xb8);
  memcpy((void *)(lVar15 + (longlong)param_1),(void *)(lVar12 + (longlong)param_1),0xb8);
  memcpy((void *)(lVar12 + (longlong)param_1),local_100,0xb8);
  iVar9 = iVar7 * 2 + 1;
  iVar3 = iVar7;
  if ((int)param_2 <= iVar9) goto LAB_147004d0b;
  goto LAB_147004bc5;
LAB_147004ead:
  if (-1 < (int)(uVar4 - uVar13)) goto LAB_147004f03;
  memcpy(local_100,(void *)(lVar15 + (longlong)param_1),0xb8);
  memcpy((void *)(lVar15 + (longlong)param_1),(void *)(lVar12 + (longlong)param_1),0xb8);
  memcpy((void *)(lVar12 + (longlong)param_1),local_100,0xb8);
  iVar9 = iVar7 * 2;
  iVar14 = iVar7 * 2 + 1;
  iVar3 = iVar7;
  if ((longlong)uVar16 <= (longlong)iVar14) goto LAB_147004f03;
  goto LAB_147004dba;
LAB_147004f03:
  pvVar8 = (void *)((uVar16 - 1) * 0xb8 + (longlong)param_1);
  memcpy(local_100,param_1,0xb8);
  memcpy(param_1,pvVar8,0xb8);
  memcpy(pvVar8,local_100,0xb8);
  bVar17 = uVar16 < 3;
  uVar16 = uVar16 - 1;
  if (bVar17) goto LAB_147004d77;
  goto LAB_147004db1;
}



// FUNCTION 147004f64 FUN_147004f64 body=94 status=ok
// SIG undefined FUN_147004f64(void)

longlong FUN_147004f64(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = **(longlong **)(param_1 + 8);
  if (lVar1 == 0) {
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  else {
    FUN_147004fc2(param_2,lVar1 + 8);
    *(undefined1 *)(param_2 + 0x48) = 1;
    FUN_146fedb88(lVar1 + 0x18);
    if (*(longlong *)(lVar1 + 8) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(*(undefined8 *)(param_1 + 8));
    *(longlong *)(param_1 + 8) = lVar1;
  }
  return param_2;
}



// FUNCTION 147004fc2 FUN_147004fc2 body=126 status=ok
// SIG undefined FUN_147004fc2(void)

void FUN_147004fc2(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  param_1[2] = 0;
  param_1[2] = param_2[2];
  param_2[2] = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  param_2[3] = 0;
  param_1[4] = 0;
  param_1[4] = param_2[4];
  param_2[4] = 0;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  param_2[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d) = *(undefined8 *)((longlong)param_2 + 0x3d);
  uVar1 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  return;
}



// FUNCTION 147005040 FUN_147005040 body=109 status=ok
// SIG undefined FUN_147005040(void)

longlong * FUN_147005040(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  FUN_1410e5bda(param_1 + 2,param_2 + 2);
  FUN_146ffbebe(param_1 + 4,param_2 + 4);
  lVar1 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = lVar1;
  *(undefined8 *)((longlong)param_1 + 0x3d) = *(undefined8 *)((longlong)param_2 + 0x3d);
  return param_1;
}



// FUNCTION 1470050ae FUN_1470050ae body=101 status=ok
// SIG undefined FUN_1470050ae(void)

undefined8 * FUN_1470050ae(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  lVar1 = **(longlong **)(param_1 + 8);
  if (lVar1 != 0) {
    *param_2 = *(undefined8 *)(lVar1 + 8);
    *(undefined8 *)(lVar1 + 8) = 0;
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar1 + 0x10);
    *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)(lVar1 + 0x14);
    *(undefined8 *)(lVar1 + 0x10) = 0;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(lVar1 + 0x28);
    uVar2 = *(undefined4 *)(lVar1 + 0x1c);
    uVar3 = *(undefined4 *)(lVar1 + 0x20);
    uVar4 = *(undefined4 *)(lVar1 + 0x24);
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(lVar1 + 0x18);
    *(undefined4 *)((longlong)param_2 + 0x14) = uVar2;
    *(undefined4 *)(param_2 + 3) = uVar3;
    *(undefined4 *)((longlong)param_2 + 0x1c) = uVar4;
    FUN_1400020a8(*(undefined8 *)(param_1 + 8));
    *(longlong *)(param_1 + 8) = lVar1;
  }
  *(bool *)(param_2 + 5) = lVar1 != 0;
  return param_2;
}



// FUNCTION 147005114 FUN_147005114 body=491 status=ok
// SIG undefined FUN_147005114(void)

longlong FUN_147005114(longlong *param_1,longlong *param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  bool bVar4;
  undefined2 *puVar5;
  longlong lVar6;
  void *_Src;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  undefined2 *puVar13;
  uint uVar14;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = *(uint *)(param_1 + 1);
  lVar6 = *param_1;
  uVar14 = 0;
  if (0 < (int)uVar3) {
    puVar5 = &DAT_149dfb77a;
    if ((int)param_2[1] != 0) {
      puVar5 = (undefined2 *)*param_2;
    }
    uVar14 = 0;
    uVar7 = (ulonglong)uVar3;
    uVar9 = uVar3;
    do {
      uVar7 = uVar7 >> 1;
      uVar10 = (uint)uVar7 + uVar14;
      lVar12 = (ulonglong)uVar10 * 0xb8;
      puVar13 = &DAT_149dfb77a;
      if (*(int *)(lVar6 + 8 + lVar12) != 0) {
        puVar13 = *(undefined2 **)(lVar6 + lVar12);
      }
      lVar12 = 0;
      while( true ) {
        uVar1 = *(ushort *)((longlong)puVar13 + lVar12);
        uVar2 = *(ushort *)((longlong)puVar5 + lVar12);
        if (uVar1 != uVar2) break;
        if (uVar1 == 0) goto LAB_1470051e1;
LAB_1470051b3:
        lVar12 = lVar12 + 2;
      }
      if ((uVar2 | uVar1) < 0x80) {
        if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[(uint)uVar2]) goto LAB_1470051b3;
        iVar11 = (uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
      }
      else {
        iVar11 = (uint)uVar1 - (uint)uVar2;
      }
      if (iVar11 < 0) {
        uVar14 = uVar10 + (uVar9 & 1);
      }
LAB_1470051e1:
      bVar4 = 1 < uVar9;
      uVar9 = (uint)uVar7;
    } while (bVar4);
    local_58 = param_2;
    if ((int)uVar14 < (int)uVar3) {
      lVar12 = (ulonglong)uVar14 * 0xb8;
      if (*(int *)(lVar6 + 8 + lVar12) == 0) {
        puVar13 = &DAT_149dfb77a;
      }
      else {
        puVar13 = *(undefined2 **)(lVar6 + lVar12);
      }
      lVar12 = lVar12 + lVar6;
      lVar8 = 0;
      while( true ) {
        uVar1 = *(ushort *)((longlong)puVar5 + lVar8);
        uVar9 = (uint)uVar1;
        uVar2 = *(ushort *)((longlong)puVar13 + lVar8);
        uVar10 = (uint)uVar2;
        if (uVar1 != uVar2) break;
        if (uVar1 == 0) goto LAB_1470052e6;
LAB_1470052b7:
        lVar8 = lVar8 + 2;
      }
      if ((uVar2 | uVar1) < 0x80) {
        uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar1];
        uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar2];
        if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1470052b7;
      }
      if ((int)(uVar9 - uVar10) < 0) goto LAB_147005218;
LAB_1470052e6:
      FUN_146ffa660(lVar12,1);
      goto LAB_147005256;
    }
  }
LAB_147005218:
  *(uint *)(param_1 + 1) = uVar3 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar3) {
    FUN_147004670(param_1,uVar3);
    lVar6 = *param_1;
  }
  _Src = (void *)(lVar6 + (ulonglong)uVar14 * 0xb8);
  memmove((void *)((longlong)_Src + 0xb8),_Src,(ulonglong)(uVar3 - uVar14) * 0xb8);
  lVar12 = (ulonglong)uVar14 * 0xb8 + *param_1;
LAB_147005256:
  local_50 = param_2;
  FUN_147005300(&local_50,lVar12);
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar12 + 0x10;
}


