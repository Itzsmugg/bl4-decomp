// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148883a24 FUN_148883a24 body=142 status=ok
// SIG undefined FUN_148883a24(void)

void FUN_148883a24(int param_1,uint param_2)

{
  if (param_2 < 0x15) {
    if (DAT_14cb7ee68 == (void *)0x0) {
      return;
    }
    memmove(&DAT_14cb7ee18,DAT_14cb7ee68,(longlong)param_1 << 2);
    param_1 = 0;
    param_2 = 0;
  }
  else if (DAT_14cb7ee68 == (void *)0x0) {
    FUN_1446efa72(&DAT_14cb7ee68,0,param_2,4);
    memmove(DAT_14cb7ee68,&DAT_14cb7ee18,(longlong)param_1 << 2);
    return;
  }
  FUN_1446efa72(&DAT_14cb7ee68,param_1,param_2,4);
  return;
}



// FUNCTION 148883ab2 FUN_148883ab2 body=48 status=ok
// SIG undefined FUN_148883ab2(void)

void FUN_148883ab2(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x58,8);
  }
  return;
}



// FUNCTION 148883ae2 FUN_148883ae2 body=189 status=ok
// SIG undefined FUN_148883ae2(void)

longlong FUN_148883ae2(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x20;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x20) == DAT_14cb7fb80) {
          if (lVar3 != 0) goto LAB_148883b82;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_28 = &DAT_14cb7fb80;
  FUN_148883ba0(param_1,&local_1c);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_148883b82:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 148883ba0 FUN_148883ba0 body=300 status=ok
// SIG undefined FUN_148883ba0(void)

undefined4 * FUN_148883ba0(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined4 local_58 [2];
  undefined8 *local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148883cce(param_1,local_58);
  local_40 = 0;
  *local_50 = *(undefined8 *)*param_4;
  local_50[1] = 0;
  local_48 = 0;
  *(undefined4 *)(local_50 + 2) = 0;
  FUN_1449db362();
  *(undefined4 *)(local_50 + 3) = 0xffffffff;
  cVar1 = FUN_148883db4(param_1,param_3,local_50,local_58);
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
      *(uint *)((longlong)local_50 + 0x1c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_50 + 3) =
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
      FUN_148883ec2(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148883cce FUN_148883cce body=229 status=ok
// SIG undefined FUN_148883cce(void)

int * FUN_148883cce(longlong *param_1,int *param_2)

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



// FUNCTION 148883db4 FUN_148883db4 body=156 status=ok
// SIG undefined FUN_148883db4(void)

undefined8 FUN_148883db4(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
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
        if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          FUN_1449db362(puVar1 + 2);
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_148883e50(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 148883e50 FUN_148883e50 body=114 status=ok
// SIG undefined FUN_148883e50(void)

void FUN_148883e50(longlong *param_1,int param_2)

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



// FUNCTION 148883ec2 FUN_148883ec2 body=476 status=ok
// SIG undefined FUN_148883ec2(void)

void FUN_148883ec2(longlong *param_1)

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



// FUNCTION 1488840a0 FUN_1488840a0 body=134 status=ok
// SIG undefined FUN_1488840a0(void)

int FUN_1488840a0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  
  lVar2 = param_1[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_1;
    uVar5 = 0;
    do {
      cVar3 = FUN_14493b798(lVar1 + uVar5,param_2);
      if (cVar3 != '\0') {
        iVar4 = (int)(uVar5 >> 3) * -0x49249249;
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      uVar5 = uVar5 + 0x38;
    } while ((longlong)(int)lVar2 * 0x38 - uVar5 != 0);
  }
  iVar4 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar4 + 1U) {
    FUN_140f12bd2(param_1,iVar4);
  }
  FUN_14014e938((longlong)iVar4 * 0x38 + *param_1,param_2);
  return iVar4;
}



// FUNCTION 148884126 FUN_148884126 body=188 status=ok
// SIG undefined FUN_148884126(void)

void FUN_148884126(undefined8 param_1,undefined8 *param_2)

{
  void **ppvVar1;
  void *_Src;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  void *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1408db4c4(&local_48,param_1,0,1);
  _Src = local_38;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = local_48;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_44;
  *(undefined4 *)(param_2 + 2) = uStack_40;
  *(undefined4 *)((longlong)param_2 + 0x14) = uStack_3c;
  ppvVar1 = (void **)(param_2 + 3);
  if (ppvVar1 != &local_38) {
    *(int *)(param_2 + 4) = local_30;
    if (local_30 == 0 && *(int *)((longlong)param_2 + 0x24) == 0) {
      *(undefined4 *)((longlong)param_2 + 0x24) = 0;
    }
    else {
      FUN_1446dd670(ppvVar1,local_30);
      if (local_30 != 0) {
        memcpy(*ppvVar1,_Src,(longlong)local_30 * 2);
      }
    }
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488841e4 FUN_1488841e4 body=110 status=ok
// SIG undefined FUN_1488841e4(void)

void FUN_1488841e4(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (param_2 <= (int)uVar1) {
    iVar5 = 4;
    if (4 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x2c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x2c) = iVar5;
    FUN_148884254(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 148884254 FUN_148884254 body=132 status=ok
// SIG undefined FUN_148884254(void)

void FUN_148884254(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x20);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x20,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x20),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x20,param_2,param_3,8);
  return;
}



// FUNCTION 1488842d8 FUN_1488842d8 body=90 status=ok
// SIG undefined FUN_1488842d8(void)

void FUN_1488842d8(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x20c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x20c) = 0;
    if (*(void **)((longlong)param_1 + 0x200) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x200),
              (longlong)*(int *)((longlong)param_1 + 0x208) << 3);
      FUN_1446efa72((longlong)param_1 + 0x200,0,0,8);
      return;
    }
  }
  return;
}



// FUNCTION 148884332 FUN_148884332 body=141 status=ok
// SIG undefined FUN_148884332(void)

void FUN_148884332(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x200);
  if ((uint)param_3 < 0x41) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x200,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x200),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x200,param_2,param_3,8);
  return;
}



// FUNCTION 1488843c0 FUN_1488843c0 body=119 status=ok
// SIG undefined FUN_1488843c0(void)

void FUN_1488843c0(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x208);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x40;
    if (0x40 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x40 < *(uint *)(param_1 + 0x20c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x20c) = iVar5;
    FUN_148884332(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 148884438 FUN_148884438 body=141 status=ok
// SIG undefined FUN_148884438(void)

void FUN_148884438(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x100);
  if ((uint)param_3 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x100,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x100),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x100,param_2,param_3,8);
  return;
}



// FUNCTION 1488844c6 FUN_1488844c6 body=91 status=ok
// SIG undefined FUN_1488844c6(void)

void FUN_1488844c6(void)

{
  if (DAT_14cb7ee74 != 0) {
    DAT_14cb7ee74 = 0;
    if (DAT_14cb7ee68 != (void *)0x0) {
      memmove(&DAT_14cb7ee18,DAT_14cb7ee68,(longlong)DAT_14cb7ee70 << 2);
      FUN_1446efa72(&DAT_14cb7ee68,0,0,4);
      return;
    }
  }
  return;
}



// FUNCTION 148884522 FUN_148884522 body=76 status=ok
// SIG undefined FUN_148884522(void)

void FUN_148884522(void)

{
  int iVar1;
  
  iVar1 = FUN_14888456e(DAT_14cb7eeb8,DAT_14cb7eebc);
  if (iVar1 != DAT_14cb7eebc) {
    DAT_14cb7eebc = iVar1;
    FUN_1446f8d3c(&DAT_14cb7eeb0,DAT_14cb7eeb8,iVar1,0x30,8);
  }
  return;
}



// FUNCTION 14888456e FUN_14888456e body=112 status=ok
// SIG undefined FUN_14888456e(void)

ulonglong FUN_14888456e(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x30) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1488845a8;
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
LAB_1488845a8:
  return param_2 & 0xffffffff;
}



// FUNCTION 1488845de FUN_1488845de body=122 status=ok
// SIG undefined FUN_1488845de(void)

void FUN_1488845de(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x50) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x50) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x50 + 4) = uVar4;
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



// FUNCTION 148884658 FUN_148884658 body=64 status=ok
// SIG undefined FUN_148884658(void)

void FUN_148884658(void)

{
  if (DAT_14cb7eebc != 0) {
    DAT_14cb7eebc = 0;
    FUN_1446f8d3c(&DAT_14cb7eeb0,DAT_14cb7eeb8,0,0x30,8);
  }
  return;
}



// FUNCTION 148884698 FUN_148884698 body=136 status=ok
// SIG undefined FUN_148884698(void)

void FUN_148884698(longlong *param_1,int *param_2,longlong param_3)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)(ushort)((ulonglong)param_3 >> 0x10);
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_3 >> 0x20) +
                    ((int)param_3 << 0x10 | (uint)(ushort)param_3) + (uVar2 << 0x13 | uVar2) +
                    (uint)(ushort)((ushort)param_3 >> 4)) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x60) == param_3) goto LAB_1488846a8;
        iVar1 = *(int *)((longlong)iVar1 * 0x60 + *param_1 + 0x58);
      } while (iVar1 != -1);
    }
  }
  iVar1 = -1;
LAB_1488846a8:
  *param_2 = iVar1;
  return;
}



// FUNCTION 148884720 FUN_148884720 body=101 status=ok
// SIG undefined FUN_148884720(void)

void FUN_148884720(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x5c + (longlong)param_2 * 0x60);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x58 + lVar5 * 0x60);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x60 + 0x58);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x60 + 0x58);
  FUN_148884786(param_1,param_2,1);
  return;
}



// FUNCTION 148884786 FUN_148884786 body=150 status=ok
// SIG undefined FUN_148884786(void)

void FUN_148884786(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 14888481c FUN_14888481c body=136 status=ok
// SIG undefined FUN_14888481c(void)

void FUN_14888481c(longlong *param_1,longlong param_2)

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
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x60) == param_2) {
          FUN_148884720(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x60 + *param_1 + 0x58);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 1488848be FUN_1488848be body=29 status=ok
// SIG undefined FUN_1488848be(void)

bool FUN_1488848be(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1488848dc FUN_1488848dc body=26 status=ok
// SIG undefined FUN_1488848dc(void)

bool FUN_1488848dc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1488848f6 FUN_1488848f6 body=24 status=ok
// SIG undefined FUN_1488848f6(void)

bool FUN_1488848f6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14888491a FUN_14888491a body=93 status=ok
// SIG undefined FUN_14888491a(void)

void FUN_14888491a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b40aa60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40a9f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148884978 FUN_148884978 body=93 status=ok
// SIG undefined FUN_148884978(void)

void FUN_148884978(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b40aa60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40a9f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1488849d6 FUN_1488849d6 body=126 status=ok
// SIG undefined FUN_1488849d6(void)

void FUN_1488849d6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b40aa60;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b40a9f0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148884a45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148884a54 FUN_148884a54 body=58 status=ok
// SIG undefined FUN_148884a54(void)

void FUN_148884a54(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148884a8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 148884a8e FUN_148884a8e body=186 status=ok
// SIG undefined FUN_148884a8e(void)

bool FUN_148884a8e(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
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
    local_48 = param_5;
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



// FUNCTION 148884b50 FUN_148884b50 body=81 status=ok
// SIG undefined FUN_148884b50(void)

undefined8 FUN_148884b50(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 148884ba8 FUN_148884ba8 body=89 status=ok
// SIG undefined FUN_148884ba8(void)

bool FUN_148884ba8(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148884bf3;
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
LAB_148884bf3:
  return lVar6 == param_2;
}



// FUNCTION 148884c02 FUN_148884c02 body=118 status=ok
// SIG undefined FUN_148884c02(void)

void FUN_148884c02(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40aad0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148884c78 FUN_148884c78 body=156 status=ok
// SIG undefined FUN_148884c78(void)

void FUN_148884c78(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b40aad0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148884d04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148884d14 FUN_148884d14 body=94 status=ok
// SIG undefined FUN_148884d14(void)

void FUN_148884d14(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000148884d5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148884d67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 148884d72 FUN_148884d72 body=48 status=ok
// SIG undefined FUN_148884d72(void)

void FUN_148884d72(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 148884da2 FUN_148884da2 body=9 status=ok
// SIG undefined FUN_148884da2(void)

void FUN_148884da2(longlong param_1)

{
  FUN_140333dee(param_1 + 0x10);
  return;
}



// FUNCTION 148884dac FUN_148884dac body=29 status=ok
// SIG undefined FUN_148884dac(void)

undefined8 FUN_148884dac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148884dca FUN_148884dca body=38 status=ok
// SIG undefined FUN_148884dca(void)

undefined8 FUN_148884dca(undefined8 param_1,int param_2)

{
  FUN_140333dee();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148884df0 FUN_148884df0 body=167 status=ok
// SIG undefined FUN_148884df0(void)

void FUN_148884df0(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148884e6b;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148884e6b;
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
LAB_148884e6b:
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
                    /* WARNING: Could not recover jumptable at 0x000148884e8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148884e98 FUN_148884e98 body=31 status=ok
// SIG undefined FUN_148884e98(void)

undefined8 FUN_148884e98(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148884ed2 FUN_148884ed2 body=29 status=ok
// SIG undefined FUN_148884ed2(void)

bool FUN_148884ed2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148884ef0 FUN_148884ef0 body=26 status=ok
// SIG undefined FUN_148884ef0(void)

bool FUN_148884ef0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148884f0a FUN_148884f0a body=93 status=ok
// SIG undefined FUN_148884f0a(void)

void FUN_148884f0a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b40abf0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40ab80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148884f68 FUN_148884f68 body=93 status=ok
// SIG undefined FUN_148884f68(void)

void FUN_148884f68(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b40abf0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40ab80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148884fc6 FUN_148884fc6 body=126 status=ok
// SIG undefined FUN_148884fc6(void)

void FUN_148884fc6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b40abf0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b40ab80;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148885035. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148885044 FUN_148885044 body=174 status=ok
// SIG undefined FUN_148885044(void)

void FUN_148885044(longlong param_1,longlong *param_2,longlong *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = FUN_14479d2ce(param_1 + 0x18);
  pcVar1 = *(code **)(param_1 + 0x20);
  local_30 = *param_3;
  *param_3 = 0;
  local_28 = (undefined4)param_3[1];
  local_24 = *(undefined4 *)((longlong)param_3 + 0xc);
  param_3[1] = 0;
  local_40 = *param_2;
  *param_2 = 0;
  local_38 = (undefined4)param_2[1];
  local_34 = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  (*pcVar1)(uVar2);
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488850f4 FUN_1488850f4 body=254 status=ok
// SIG undefined FUN_1488850f4(void)

bool FUN_1488850f4(longlong param_1,longlong *param_2,longlong *param_3)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar2 = FUN_144a61b4f();
  if (cVar2 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar4 = local_40;
  }
  else {
    lVar4 = 0;
  }
  lVar3 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar3 != 0) {
    pcVar1 = *(code **)(param_1 + 0x20);
    local_40 = *param_3;
    *param_3 = 0;
    local_38 = (undefined4)param_3[1];
    local_34 = *(undefined4 *)((longlong)param_3 + 0xc);
    param_3[1] = 0;
    local_50 = *param_2;
    *param_2 = 0;
    local_48 = (undefined4)param_2[1];
    local_44 = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    (*pcVar1)(lVar3);
  }
  if ((lVar4 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar4);
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar3 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488851f6 FUN_1488851f6 body=31 status=ok
// SIG undefined FUN_1488851f6(void)

undefined8 FUN_1488851f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148885232 FUN_148885232 body=93 status=ok
// SIG undefined FUN_148885232(void)

void FUN_148885232(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40ac60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148885290 FUN_148885290 body=126 status=ok
// SIG undefined FUN_148885290(void)

void FUN_148885290(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b40ac60;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488852ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14888530e FUN_14888530e body=21 status=ok
// SIG undefined FUN_14888530e(void)

undefined8 FUN_14888530e(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148885324 FUN_148885324 body=31 status=ok
// SIG undefined FUN_148885324(void)

undefined8 FUN_148885324(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14888535a FUN_14888535a body=93 status=ok
// SIG undefined FUN_14888535a(void)

void FUN_14888535a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a90a240;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40acd0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1488853b8 FUN_1488853b8 body=93 status=ok
// SIG undefined FUN_1488853b8(void)

void FUN_1488853b8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a90a240;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40acd0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148885416 FUN_148885416 body=126 status=ok
// SIG undefined FUN_148885416(void)

void FUN_148885416(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a90a240;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b40acd0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148885485. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1488854a2 FUN_1488854a2 body=23 status=ok
// SIG undefined FUN_1488854a2(void)

undefined8 FUN_1488854a2(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  (**(code **)(param_1 + 0x18))(param_2,param_3);
  return 1;
}



// FUNCTION 1488854ba FUN_1488854ba body=31 status=ok
// SIG undefined FUN_1488854ba(void)

undefined8 FUN_1488854ba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488854f4 FUN_1488854f4 body=29 status=ok
// SIG undefined FUN_1488854f4(void)

bool FUN_1488854f4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148885512 FUN_148885512 body=93 status=ok
// SIG undefined FUN_148885512(void)

void FUN_148885512(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a8e9b60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40ae90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148885570 FUN_148885570 body=93 status=ok
// SIG undefined FUN_148885570(void)

void FUN_148885570(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a8e9b60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40ae90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1488855ce FUN_1488855ce body=126 status=ok
// SIG undefined FUN_1488855ce(void)

void FUN_1488855ce(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a8e9b60;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b40ae90;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014888563d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14888564c FUN_14888564c body=48 status=ok
// SIG undefined FUN_14888564c(void)

void FUN_14888564c(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148885679. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 14888567c FUN_14888567c body=31 status=ok
// SIG undefined FUN_14888567c(void)

undefined8 FUN_14888567c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488856b6 FUN_1488856b6 body=26 status=ok
// SIG undefined FUN_1488856b6(void)

bool FUN_1488856b6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1488856d0 FUN_1488856d0 body=93 status=ok
// SIG undefined FUN_1488856d0(void)

void FUN_1488856d0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40af00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14888572e FUN_14888572e body=93 status=ok
// SIG undefined FUN_14888572e(void)

void FUN_14888572e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40af00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14888578c FUN_14888578c body=126 status=ok
// SIG undefined FUN_14888578c(void)

void FUN_14888578c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b40af00;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488857fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14888580a FUN_14888580a body=35 status=ok
// SIG undefined FUN_14888580a(void)

void FUN_14888580a(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148885829. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 14888582e FUN_14888582e body=107 status=ok
// SIG undefined FUN_14888582e(void)

undefined4 * FUN_14888582e(undefined4 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if ((*(char *)(param_1 + 8) == '\x01') &&
     (plVar3 = *(longlong **)(param_1 + 6), plVar3 != (longlong *)0x0)) {
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
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined1 *)(param_1 + 8) = 1;
  return param_1;
}



// FUNCTION 14888589a FUN_14888589a body=100 status=ok
// SIG undefined FUN_14888589a(void)

undefined8 * FUN_14888589a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = DAT_14cb7fb80;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 2) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_145732088(param_1 + 1,iVar1,0);
    FUN_14573204f(param_1[1],uVar2,iVar1);
  }
  *(undefined1 *)(param_1 + 7) = 0;
  return param_1;
}



// FUNCTION 1488858fe FUN_1488858fe body=132 status=ok
// SIG undefined FUN_1488858fe(void)

void FUN_1488858fe(longlong param_1,int param_2)

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



// FUNCTION 148885984 FUN_148885984 body=364 status=ok
// SIG undefined FUN_148885984(void)

undefined4 * FUN_148885984(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148885af2(param_1,local_48);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  uVar10 = *puVar1;
  *local_40 = uVar10;
  local_40[1] = puVar1[1];
  lVar8 = puVar1[2];
  local_40[2] = lVar8;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
    uVar10 = *local_40;
  }
  local_40[3] = *puVar2;
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (uint)((ulonglong)uVar10 >> 0x10);
  uVar5 = (uint)uVar10 & 0xffff;
  uVar9 = ((uint)uVar10 << 0x10 | uVar5) + (int)((ulonglong)uVar10 >> 0x20) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar5 >> 4);
  cVar4 = FUN_148885bd8(param_1,uVar9,local_40,&local_4c);
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
      FUN_148885d06(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148885af2 FUN_148885af2 body=230 status=ok
// SIG undefined FUN_148885af2(void)

int * FUN_148885af2(longlong *param_1,int *param_2)

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



// FUNCTION 148885bd8 FUN_148885bd8 body=188 status=ok
// SIG undefined FUN_148885bd8(void)

undefined8 FUN_148885bd8(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar11 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar11 = (longlong *)param_1[8];
    }
    iVar12 = *(int *)((longlong)plVar11 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar12 != -1) {
      do {
        plVar11 = (longlong *)(*param_1 + (longlong)iVar12 * 0x28);
        if (*plVar11 == *param_3) {
          plVar3 = (longlong *)plVar11[2];
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
          lVar8 = *param_3;
          uVar4 = *(undefined4 *)((longlong)param_3 + 4);
          lVar9 = param_3[1];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
          uVar6 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar10 = param_3[3];
          uVar7 = *(undefined4 *)((longlong)param_3 + 0x1c);
          *(int *)(plVar11 + 2) = (int)param_3[2];
          *(undefined4 *)((longlong)plVar11 + 0x14) = uVar6;
          *(int *)(plVar11 + 3) = (int)lVar10;
          *(undefined4 *)((longlong)plVar11 + 0x1c) = uVar7;
          *(int *)plVar11 = (int)lVar8;
          *(undefined4 *)((longlong)plVar11 + 4) = uVar4;
          *(int *)(plVar11 + 1) = (int)lVar9;
          *(undefined4 *)((longlong)plVar11 + 0xc) = uVar5;
          FUN_148885c94(param_1,*param_4);
          *param_4 = iVar12;
          return 1;
        }
        iVar12 = (int)plVar11[4];
      } while (iVar12 != -1);
    }
  }
  return 0;
}



// FUNCTION 148885c94 FUN_148885c94 body=114 status=ok
// SIG undefined FUN_148885c94(void)

void FUN_148885c94(longlong *param_1,int param_2)

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



// FUNCTION 148885d06 FUN_148885d06 body=473 status=ok
// SIG undefined FUN_148885d06(void)

void FUN_148885d06(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x28);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 148885ee0 FUN_148885ee0 body=125 status=ok
// SIG undefined FUN_148885ee0(void)

void FUN_148885ee0(longlong *param_1,longlong *param_2)

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
        if ((int)(~uVar3 >> 4) != 0) {
          return;
        }
        break;
      }
      uVar3 = uVar3 + 0x10;
    } while (lVar4 << 4 != uVar3);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148885f5e(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + lVar4 * 0x10) = *param_2;
  *(longlong *)(lVar2 + 8 + lVar4 * 0x10) = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  return;
}



// FUNCTION 148885f5e FUN_148885f5e body=132 status=ok
// SIG undefined FUN_148885f5e(void)

void FUN_148885f5e(longlong param_1,int param_2)

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



// FUNCTION 148885fe4 FUN_148885fe4 body=263 status=ok
// SIG undefined FUN_148885fe4(void)

void FUN_148885fe4(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  
  iVar1 = (int)param_1[1];
  lVar13 = (longlong)iVar1;
  if (lVar13 != 0) {
    plVar2 = (longlong *)*param_1;
    iVar12 = 0;
    bVar7 = *plVar2 == *(longlong *)*param_2;
    iVar4 = 0;
    do {
      lVar10 = (longlong)iVar4;
      iVar8 = iVar4 + 1;
      if (iVar4 + 1 < iVar1) {
        iVar8 = iVar1;
      }
      plVar9 = plVar2 + lVar10 * 2 + 2;
      iVar5 = iVar4;
      lVar11 = lVar10;
      do {
        lVar11 = lVar11 + 1;
        iVar6 = iVar8;
        if (lVar13 <= lVar11) break;
        lVar3 = *plVar9;
        iVar5 = iVar5 + 1;
        plVar9 = plVar9 + 2;
        iVar6 = iVar5;
      } while (bVar7 == (lVar3 == *(longlong *)*param_2));
      iVar8 = iVar6 - iVar4;
      if (bVar7 == false) {
        if (iVar12 != iVar4) {
          memmove(plVar2 + (longlong)iVar12 * 2,plVar2 + lVar10 * 2,(longlong)iVar8 << 4);
        }
        iVar12 = iVar12 + iVar8;
      }
      else {
        FUN_1459488ac(plVar2 + lVar10 * 2,iVar8);
      }
      bVar7 = (bool)(bVar7 ^ 1);
      iVar4 = iVar6;
    } while (lVar11 < lVar13);
    *(int *)(param_1 + 1) = iVar12;
  }
  return;
}



// FUNCTION 1488860eb FUN_1488860eb body=77 status=ok
// SIG undefined FUN_1488860eb(void)

void FUN_1488860eb(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x20);
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
      plVar4 = plVar4 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 148886138 FUN_148886138 body=328 status=ok
// SIG undefined FUN_148886138(void)

void FUN_148886138(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x10c + (longlong)iVar4 * 0x110) * 4) =
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



// FUNCTION 148886282 FUN_148886282 body=278 status=ok
// SIG undefined FUN_148886282(void)

void FUN_148886282(longlong *param_1)

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
      FUN_147d9cbd0((longlong)iStack_44 * 0x110 + *local_60);
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_140e3154e(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14888639a FUN_14888639a body=120 status=ok
// SIG undefined FUN_14888639a(void)

void FUN_14888639a(uint param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_1 * 0x30,8);
    uVar2 = 0x7fffffff;
    if ((int)param_1 <= (int)(uVar1 / 0x30)) {
      uVar2 = uVar1 / 0x30 & 0xffffffff;
    }
  }
  if ((int)uVar2 != DAT_14cb7fba4) {
    DAT_14cb7fba4 = (int)uVar2;
    FUN_1446f8d3c(&DAT_14cb7fb98,DAT_14cb7fba0,uVar2,0x30,8);
  }
  return;
}



// FUNCTION 148886412 FUN_148886412 body=159 status=ok
// SIG undefined FUN_148886412(void)

void FUN_148886412(int param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = DAT_14cb7fba0;
  if (param_1 <= (int)DAT_14cb7fba0) {
    if (DAT_14cb7fba4 == 0) {
      uVar2 = 4;
      if (4 < DAT_14cb7fba0) {
        uVar2 = DAT_14cb7fba0;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)DAT_14cb7fba0 * 3) >> 3) + (longlong)(int)DAT_14cb7fba0 +
              0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x30,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    DAT_14cb7fba4 = (int)uVar5;
    FUN_1446f8d3c(&DAT_14cb7fb98,param_1,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1488864b2 FUN_1488864b2 body=31 status=ok
// SIG undefined FUN_1488864b2(void)

undefined8 FUN_1488864b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488864ec FUN_1488864ec body=93 status=ok
// SIG undefined FUN_1488864ec(void)

void FUN_1488864ec(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40b3d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14888654a FUN_14888654a body=93 status=ok
// SIG undefined FUN_14888654a(void)

void FUN_14888654a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40b3d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1488865a8 FUN_1488865a8 body=126 status=ok
// SIG undefined FUN_1488865a8(void)

void FUN_1488865a8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b40b3d0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148886617. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148886626 FUN_148886626 body=35 status=ok
// SIG undefined FUN_148886626(void)

void FUN_148886626(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148886645. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 14888664a FUN_14888664a body=142 status=ok
// SIG undefined FUN_14888664a(void)

bool FUN_14888664a(longlong param_1)

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



// FUNCTION 1488866da FUN_1488866da body=118 status=ok
// SIG undefined FUN_1488866da(void)

void FUN_1488866da(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  void *_Dst;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 8 + (longlong)(int)param_2 * 0x10);
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
  if (~param_2 + iVar5 != 0) {
    _Dst = (void *)(lVar3 + (longlong)(int)param_2 * 0x10);
    memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(int)(~param_2 + iVar5) << 4);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 148886750 FUN_148886750 body=62 status=ok
// SIG undefined FUN_148886750(void)

void FUN_148886750(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14888678e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 14888678e FUN_14888678e body=93 status=ok
// SIG undefined FUN_14888678e(void)

ulonglong FUN_14888678e(uint param_1,uint param_2)

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



// FUNCTION 1488867ec FUN_1488867ec body=88 status=ok
// SIG undefined FUN_1488867ec(void)

void FUN_1488867ec(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 4)) {
    uVar3 = uVar1 >> 4 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,0x10,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 148886844 FUN_148886844 body=40 status=ok
// SIG undefined FUN_148886844(void)

void FUN_148886844(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
    lVar1 = *(longlong *)(param_2 + 8 + lVar2);
    *(longlong *)(param_1 + 8 + lVar2) = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    lVar2 = lVar2 + 0x10;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 14888686c FUN_14888686c body=128 status=ok
// SIG undefined FUN_14888686c(void)

void FUN_14888686c(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar3 = *param_1;
  iVar1 = (int)param_1[1];
  lVar5 = (longlong)iVar1;
  if (lVar5 != 0) {
    uVar4 = 0;
    do {
      if (*(longlong *)(lVar3 + uVar4) == *param_2) {
        if ((int)(~uVar4 >> 4) != 0) {
          return;
        }
        break;
      }
      uVar4 = uVar4 + 0x10;
    } while (lVar5 << 4 != uVar4);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1488868ec(param_1,iVar1);
    lVar3 = *param_1;
  }
  *(longlong *)(lVar3 + lVar5 * 0x10) = *param_2;
  lVar2 = param_2[1];
  *(longlong *)(lVar3 + 8 + lVar5 * 0x10) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1488868ec FUN_1488868ec body=132 status=ok
// SIG undefined FUN_1488868ec(void)

void FUN_1488868ec(longlong param_1,int param_2)

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



// FUNCTION 148886972 FUN_148886972 body=263 status=ok
// SIG undefined FUN_148886972(void)

void FUN_148886972(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  
  iVar1 = (int)param_1[1];
  lVar13 = (longlong)iVar1;
  if (lVar13 != 0) {
    plVar2 = (longlong *)*param_1;
    iVar12 = 0;
    bVar7 = *plVar2 == *(longlong *)*param_2;
    iVar4 = 0;
    do {
      lVar10 = (longlong)iVar4;
      iVar8 = iVar4 + 1;
      if (iVar4 + 1 < iVar1) {
        iVar8 = iVar1;
      }
      plVar9 = plVar2 + lVar10 * 2 + 2;
      iVar5 = iVar4;
      lVar11 = lVar10;
      do {
        lVar11 = lVar11 + 1;
        iVar6 = iVar8;
        if (lVar13 <= lVar11) break;
        lVar3 = *plVar9;
        iVar5 = iVar5 + 1;
        plVar9 = plVar9 + 2;
        iVar6 = iVar5;
      } while (bVar7 == (lVar3 == *(longlong *)*param_2));
      iVar8 = iVar6 - iVar4;
      if (bVar7 == false) {
        if (iVar12 != iVar4) {
          memmove(plVar2 + (longlong)iVar12 * 2,plVar2 + lVar10 * 2,(longlong)iVar8 << 4);
        }
        iVar12 = iVar12 + iVar8;
      }
      else {
        FUN_1459487c5(plVar2 + lVar10 * 2,iVar8);
      }
      bVar7 = (bool)(bVar7 ^ 1);
      iVar4 = iVar6;
    } while (lVar11 < lVar13);
    *(int *)(param_1 + 1) = iVar12;
  }
  return;
}



// FUNCTION 148886a7a FUN_148886a7a body=118 status=ok
// SIG undefined FUN_148886a7a(void)

void FUN_148886a7a(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  void *_Dst;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 8 + (longlong)(int)param_2 * 0x10);
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
  if (~param_2 + iVar5 != 0) {
    _Dst = (void *)(lVar3 + (longlong)(int)param_2 * 0x10);
    memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(int)(~param_2 + iVar5) << 4);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 148886af0 FUN_148886af0 body=62 status=ok
// SIG undefined FUN_148886af0(void)

void FUN_148886af0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148886b2e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 148886b2e FUN_148886b2e body=93 status=ok
// SIG undefined FUN_148886b2e(void)

ulonglong FUN_148886b2e(uint param_1,uint param_2)

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



// FUNCTION 148886b96 FUN_148886b96 body=29 status=ok
// SIG undefined FUN_148886b96(void)

undefined8 FUN_148886b96(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148886bb4 FUN_148886bb4 body=116 status=ok
// SIG undefined FUN_148886bb4(void)

void FUN_148886bb4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x70);
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
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  FUN_1457e9428(param_1 + 0x18);
  plVar3 = *(longlong **)(param_1 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148886c1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 148886c28 FUN_148886c28 body=164 status=ok
// SIG undefined FUN_148886c28(void)

void FUN_148886c28(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if (((*param_2 != 0) && (param_2[1] != 0)) && (0 < *(int *)(param_2[1] + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *param_2 = (longlong)param_2;
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *param_2 = (longlong)param_2;
    if ((longlong *)param_2[1] == plVar2) goto LAB_148886ca0;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      param_2[1] = (longlong)plVar2;
      goto LAB_148886ca0;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  param_2[1] = (longlong)plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_148886ca0:
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
                    /* WARNING: Could not recover jumptable at 0x000148886cc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148886ccc FUN_148886ccc body=132 status=ok
// SIG undefined FUN_148886ccc(void)

void FUN_148886ccc(longlong param_1,int param_2)

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



// FUNCTION 148886d52 FUN_148886d52 body=9 status=ok
// SIG undefined FUN_148886d52(void)

void FUN_148886d52(longlong param_1)

{
  FUN_148886f18(param_1 + 0x10);
  return;
}



// FUNCTION 148886d5c FUN_148886d5c body=29 status=ok
// SIG undefined FUN_148886d5c(void)

undefined8 FUN_148886d5c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148886d7a FUN_148886d7a body=143 status=ok
// SIG undefined FUN_148886d7a(void)

void FUN_148886d7a(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_LAB_14b40b4a0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0x100000063;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  return;
}



// FUNCTION 148886e0a FUN_148886e0a body=38 status=ok
// SIG undefined FUN_148886e0a(void)

undefined8 FUN_148886e0a(undefined8 param_1,int param_2)

{
  FUN_148886f18();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148886e30 FUN_148886e30 body=32 status=ok
// SIG undefined FUN_148886e30(void)

undefined8 FUN_148886e30(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Gamepad Reconnect Handler");
  return param_2;
}



// FUNCTION 148886e50 FUN_148886e50 body=195 status=ok
// SIG undefined FUN_148886e50(void)

void FUN_148886e50(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [40];
  undefined4 *local_50;
  ulonglong *local_48;
  longlong local_40;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = (undefined4)DAT_14c9658a8;
  uStack_2c = DAT_14c9658a8._4_4_;
  uStack_28 = (undefined4)DAT_14c9658b0;
  uStack_24 = DAT_14c9658b0._4_4_;
  local_20 = DAT_14c9658b8;
  if (DAT_14c9658b8 != (longlong *)0x0) {
    LOCK();
    *(int *)(DAT_14c9658b8 + 1) = (int)DAT_14c9658b8[1] + 1;
    UNLOCK();
  }
  local_50 = &local_30;
  local_48 = &local_18;
  FUN_145731ff4(&local_40);
  FUN_143d6d0ba(param_1,&local_40);
  FUN_144a65a1e(local_40,local_38);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  plVar3 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148886f18 FUN_148886f18 body=191 status=ok
// SIG undefined FUN_148886f18(void)

void FUN_148886f18(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_14b40b4a0;
  FUN_1459488ac(param_1[0x1c],*(undefined4 *)(param_1 + 0x1d));
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_148886fd8(param_1 + 0x10);
  FUN_148887164(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_1488871ec(param_1 + 3);
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148886fcb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 148886fd8 FUN_148886fd8 body=52 status=ok
// SIG undefined FUN_148886fd8(void)

void FUN_148886fd8(longlong *param_1)

{
  FUN_14888700c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14888700c FUN_14888700c body=343 status=ok
// SIG undefined FUN_14888700c(void)

void FUN_14888700c(longlong *param_1)

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
      plVar4 = *(longlong **)(*local_70 + 0x10 + (longlong)iStack_54 * 0x28);
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
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148887164 FUN_148887164 body=38 status=ok
// SIG undefined FUN_148887164(void)

void FUN_148887164(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14888718a(param_1);
    param_1 = param_1 + 0x40;
  }
  return;
}



// FUNCTION 14888718a FUN_14888718a body=97 status=ok
// SIG undefined FUN_14888718a(void)

void FUN_14888718a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 0x38) == '\x01') {
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
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  FUN_144a65a1e(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1488871ec FUN_1488871ec body=52 status=ok
// SIG undefined FUN_1488871ec(void)

void FUN_1488871ec(longlong *param_1)

{
  FUN_148887220();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148887220 FUN_148887220 body=310 status=ok
// SIG undefined FUN_148887220(void)

void FUN_148887220(longlong *param_1)

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
      FUN_1449db362(*local_68 + (longlong)iStack_4c * 0x20 + 8);
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



// FUNCTION 148887358 FUN_148887358 body=167 status=ok
// SIG undefined FUN_148887358(void)

void FUN_148887358(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1488873d3;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1488873d3;
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
LAB_1488873d3:
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
                    /* WARNING: Could not recover jumptable at 0x0001488873f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148887400 FUN_148887400 body=29 status=ok
// SIG undefined FUN_148887400(void)

undefined8 FUN_148887400(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148887438 FUN_148887438 body=29 status=ok
// SIG undefined FUN_148887438(void)

bool FUN_148887438(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148887456 FUN_148887456 body=26 status=ok
// SIG undefined FUN_148887456(void)

bool FUN_148887456(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148887470 FUN_148887470 body=24 status=ok
// SIG undefined FUN_148887470(void)

bool FUN_148887470(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148887494 FUN_148887494 body=93 status=ok
// SIG undefined FUN_148887494(void)

void FUN_148887494(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b40b570;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40b500;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1488874f2 FUN_1488874f2 body=93 status=ok
// SIG undefined FUN_1488874f2(void)

void FUN_1488874f2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b40b570;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40b500;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148887550 FUN_148887550 body=126 status=ok
// SIG undefined FUN_148887550(void)

void FUN_148887550(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b40b570;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b40b500;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488875bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1488875ce FUN_1488875ce body=40 status=ok
// SIG undefined FUN_1488875ce(void)

void FUN_1488875ce(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001488875f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 1488875f6 FUN_1488875f6 body=152 status=ok
// SIG undefined FUN_1488875f6(void)

bool FUN_1488875f6(longlong param_1,undefined8 param_2)

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



// FUNCTION 148887692 FUN_148887692 body=169 status=ok
// SIG undefined FUN_148887692(void)

ulonglong FUN_148887692(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  byte bVar6;
  undefined7 uVar7;
  byte bVar8;
  
  plVar2 = (longlong *)FUN_14888773c(param_2);
  bVar8 = false;
  if (plVar2 != (longlong *)0x0) {
    uVar3 = FUN_1413dc03c();
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x288))(plVar2,uVar3);
    bVar8 = false;
    if (plVar2 != (longlong *)0x0) {
      uVar3 = FUN_1413dc03c();
      plVar4 = (longlong *)FUN_144718840(plVar2,uVar3);
      bVar8 = plVar2 == plVar4;
      if (plVar4 != (longlong *)0x0 && !(bool)bVar8) {
        cVar1 = FUN_1489aed5e(plVar4);
        uVar7 = (undefined7)((ulonglong)plVar2 >> 8);
        bVar6 = 1;
        if (cVar1 != '\0') {
          bVar8 = 1;
          if (*(char *)(param_1 + 0x28) != '\x01') goto LAB_14888772a;
          uVar3 = (**(code **)(*plVar4 + 0x50))(plVar4);
          bVar6 = 1;
          lVar5 = FUN_143e564f2(uVar3,1);
          if (lVar5 != 0) {
            bVar8 = FUN_1489ae7c6(lVar5);
            goto LAB_14888772a;
          }
        }
        bVar6 = 1;
        bVar8 = 0;
        goto LAB_14888772a;
      }
    }
  }
  bVar6 = 0;
  uVar7 = 0;
LAB_14888772a:
  return CONCAT71(uVar7,bVar6 & bVar8) & 0xffffffff;
}



// FUNCTION 14888773c FUN_14888773c body=76 status=ok
// SIG undefined FUN_14888773c(void)

undefined8 FUN_14888773c(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (*(longlong *)(*param_1 + 0x18) != 0) {
    lVar3 = *(longlong *)(*param_1 + 0x18) + 0x48;
    cVar1 = FUN_144729dda(lVar3);
    if (cVar1 != '\0') {
      lVar3 = FUN_14479d2ce(lVar3);
      if (*(longlong **)(lVar3 + 0xa8) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148887779. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(**(longlong **)(lVar3 + 0xa8) + 0x5d0))();
        return uVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 148887788 FUN_148887788 body=57 status=ok
// SIG undefined FUN_148887788(void)

void FUN_148887788(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1414b4ac4(&DAT_14cb7fc30);
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_14b1898b0;
  *(undefined4 *)(puVar1 + 4) = 0xa008;
  return;
}



// FUNCTION 1488877c2 FUN_1488877c2 body=44 status=ok
// SIG undefined FUN_1488877c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1488877c2(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb7fc3c = _DAT_14cb7fc3c + -1;
  *param_1 = DAT_14cb7fc30;
  DAT_14cb7fc30 = param_1;
  return;
}



// FUNCTION 1488877ee FUN_1488877ee body=57 status=ok
// SIG undefined FUN_1488877ee(void)

void FUN_1488877ee(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = 0;
  *param_1 = &PTR_FUN_14b1898b0;
  *(undefined4 *)(param_1 + 4) = 0xa008;
  return;
}



// FUNCTION 148887828 FUN_148887828 body=22 status=ok
// SIG undefined FUN_148887828(void)

undefined8 FUN_148887828(int *param_1)

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
  
  plVar4 = DAT_14cb807c8;
  if (DAT_14cb807c8 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cb807c8 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb807c8 + 0x154) & 1) == 0) ||
       ((int)DAT_14cb807c8[0x3a] <= *(int *)((longlong)DAT_14cb807c8 + 0x1fc))) {
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
    cVar5 = (**(code **)(*DAT_14cb807c8 + 0x300))(DAT_14cb807c8);
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



// FUNCTION 14888783e FUN_14888783e body=119 status=ok
// SIG undefined FUN_14888783e(void)

undefined8 FUN_14888783e(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *(undefined8 *)(param_1 + 0x18);
  FUN_1446dcdd4(local_38);
  if (DAT_14cb807e8 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144837462(DAT_14cb807e8,local_38);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488878b6 FUN_1488878b6 body=22 status=ok
// SIG undefined FUN_1488878b6(void)

undefined8 FUN_1488878b6(int *param_1)

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
  
  plVar4 = DAT_14cb807e8;
  if (DAT_14cb807e8 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cb807e8 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb807e8 + 0x154) & 1) == 0) ||
       ((int)DAT_14cb807e8[0x3a] <= *(int *)((longlong)DAT_14cb807e8 + 0x1fc))) {
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
    cVar5 = (**(code **)(*DAT_14cb807e8 + 0x300))(DAT_14cb807e8);
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



// FUNCTION 1488878cc FUN_1488878cc body=323 status=ok
// SIG undefined FUN_1488878cc(void)

void FUN_1488878cc(longlong *param_1,longlong param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    puVar3 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_2 + 8) != (undefined4 *)0x0) {
      puVar3 = *(undefined4 **)(param_2 + 8);
    }
    FUN_1447325ac(puVar3,&local_28,1);
    if ((int)param_1[4] != *(int *)((longlong)param_1 + 0x4c)) {
      uVar1 = (uint)((ulonglong)local_28 >> 0x10);
      uVar5 = (uint)local_28 & 0xffff;
      plVar4 = param_1 + 10;
      if ((longlong *)param_1[0xb] != (longlong *)0x0) {
        plVar4 = (longlong *)param_1[0xb];
      }
      iVar2 = *(int *)((longlong)plVar4 +
                      (ulonglong)
                      ((int)param_1[0xc] - 1U &
                      (int)((ulonglong)local_28 >> 0x20) + ((uint)local_28 << 0x10 | uVar5) +
                      (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar5 >> 4)) * 4);
      if (iVar2 != -1) {
        do {
          plVar4 = (longlong *)(param_1[3] + (longlong)iVar2 * 0x28);
          if (*plVar4 == local_28) {
            if (plVar4 + 1 != (longlong *)0x0 && plVar4 != (longlong *)0x0) {
              FUN_14889d68a(plVar4 + 1,param_2,param_3);
            }
            break;
          }
          iVar2 = (int)plVar4[4];
        } while (iVar2 != -1);
      }
    }
    if ((longlong)(int)param_1[1] != 0) {
      lVar6 = 0;
      do {
        if ((*(int *)(*param_1 + 8 + lVar6) != 0) && (*(longlong *)(*param_1 + lVar6) != 0)) {
          FUN_14889d68a(param_1,param_2,param_3);
          break;
        }
        lVar6 = lVar6 + 0x10;
      } while ((longlong)(int)param_1[1] * 0x10 != lVar6);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148887a10 FUN_148887a10 body=61 status=ok
// SIG undefined FUN_148887a10(void)

void FUN_148887a10(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *param_2;
  uVar2 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar3 = (uint)uVar1 & 0xffff;
  FUN_14889d73a(param_1 + 0x18,
                ((uint)uVar1 << 0x10 | uVar3) + (int)((ulonglong)uVar1 >> 0x20) +
                (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar3 >> 4),param_2);
  return;
}



// FUNCTION 148887a4e FUN_148887a4e body=278 status=ok
// SIG undefined FUN_148887a4e(void)

void FUN_148887a4e(longlong param_1,undefined8 param_2)

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
  plVar1 = (longlong *)(param_1 + 0x18);
  lVar2 = param_1 + 0x28;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = lVar2;
  if (*(int *)(param_1 + 0x40) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar3 = *(int *)(param_1 + 0x40);
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
      FUN_140457ffc(*local_80 + (longlong)iStack_64 * 0x28 + 8,param_2);
      local_68 = local_68 & ~uStack_74;
      FUN_1449c0562(&local_78);
    } while (local_80 != plVar1 || (CONCAT44(uStack_6c,uStack_70) != lVar2 || iStack_64 != iVar3));
  }
  FUN_140457ffc(param_1,param_2);
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148887ca6 FUN_148887ca6 body=278 status=ok
// SIG undefined FUN_148887ca6(void)

void FUN_148887ca6(longlong param_1,undefined8 param_2)

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
  plVar1 = (longlong *)(param_1 + 0x18);
  lVar2 = param_1 + 0x28;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = lVar2;
  if (*(int *)(param_1 + 0x40) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar3 = *(int *)(param_1 + 0x40);
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
      FUN_140457ffc(*local_80 + (longlong)iStack_64 * 0x28 + 8,param_2);
      local_68 = local_68 & ~uStack_74;
      FUN_1449c0562(&local_78);
    } while (local_80 != plVar1 || (CONCAT44(uStack_6c,uStack_70) != lVar2 || iStack_64 != iVar3));
  }
  FUN_140457ffc(param_1,param_2);
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148887dca FUN_148887dca body=38 status=ok
// SIG undefined FUN_148887dca(void)

void FUN_148887dca(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140cbef6c(&DAT_14cb7fd20);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_14b189be0;
  return;
}



// FUNCTION 148887df0 FUN_148887df0 body=44 status=ok
// SIG undefined FUN_148887df0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148887df0(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb7fd2c = _DAT_14cb7fd2c + -1;
  *param_1 = DAT_14cb7fd20;
  DAT_14cb7fd20 = param_1;
  return;
}



// FUNCTION 148887e1c FUN_148887e1c body=38 status=ok
// SIG undefined FUN_148887e1c(void)

void FUN_148887e1c(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14b189be0;
  return;
}



// FUNCTION 148887e42 FUN_148887e42 body=96 status=ok
// SIG undefined FUN_148887e42(void)

undefined8 FUN_148887e42(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_148887ea2();
  if ((lVar2 != 0) && (cVar1 = FUN_144b085f6(lVar2), cVar1 != '\0')) {
    return 1;
  }
  lVar2 = FUN_14888783e(param_2);
  if (((lVar2 != 0) && (lVar2 = FUN_148887f3c(param_1,lVar2), lVar2 != 0)) &&
     (cVar1 = FUN_144b085f6(lVar2), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 148887ea2 FUN_148887ea2 body=153 status=ok
// SIG undefined FUN_148887ea2(void)

longlong FUN_148887ea2(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x50) != *(int *)(param_1 + 0x7c)) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    lVar3 = param_1 + 0x80;
    if (*(longlong *)(param_1 + 0x88) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x88);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x90) - 1U & (uVar1 >> 0x10 ^ uVar1)) *
                             4);
    if (iVar4 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x48) + (longlong)iVar4 * 0x38;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar4 * 0x38) == param_2)
        goto LAB_148887eac;
        iVar4 = *(int *)(lVar3 + 0x30);
      } while (iVar4 != -1);
    }
  }
  lVar3 = 0;
LAB_148887eac:
  lVar2 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 148887f3c FUN_148887f3c body=166 status=ok
// SIG undefined FUN_148887f3c(void)

longlong FUN_148887f3c(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0xa0) != *(int *)(param_1 + 0xcc)) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    lVar3 = param_1 + 0xd0;
    if (*(longlong *)(param_1 + 0xd8) != 0) {
      lVar3 = *(longlong *)(param_1 + 0xd8);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0xe0) - 1U & (uVar1 >> 0x10 ^ uVar1)) *
                             4);
    if (iVar4 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x98) + (longlong)iVar4 * 0x38;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar4 * 0x38) == param_2)
        goto LAB_148887f4c;
        iVar4 = *(int *)(lVar3 + 0x30);
      } while (iVar4 != -1);
    }
  }
  lVar3 = 0;
LAB_148887f4c:
  lVar2 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 148887fe2 FUN_148887fe2 body=138 status=ok
// SIG undefined FUN_148887fe2(void)

void FUN_148887fe2(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    uVar2 = FUN_14888806c();
    cVar1 = FUN_144b085f6(uVar2);
    FUN_1400bc96c(uVar2);
    if ((cVar1 == '\0') && ((longlong)*(int *)(param_1 + 0x20) != 0)) {
      lVar3 = 0;
      do {
        if ((*(int *)(*(longlong *)(param_1 + 0x18) + 8 + lVar3) != 0) &&
           (*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar3) != 0)) {
          FUN_14889de14(param_1 + 0x18,param_2);
          return;
        }
        lVar3 = lVar3 + 0x10;
      } while ((longlong)*(int *)(param_1 + 0x20) * 0x10 != lVar3);
    }
  }
  return;
}



// FUNCTION 14888806c FUN_14888806c body=240 status=ok
// SIG undefined FUN_14888806c(void)

longlong FUN_14888806c(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)(param_1 + 0x48);
  if (*(int *)(param_1 + 0x50) != *(int *)(param_1 + 0x7c)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    lVar4 = param_1 + 0x80;
    if (*(longlong *)(param_1 + 0x88) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x88);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x90) - 1U & (uVar2 >> 0x10 ^ uVar2)) *
                             4);
    if (iVar3 != -1) {
      do {
        lVar4 = *plVar1 + (longlong)iVar3 * 0x38;
        if (*(ulonglong *)(*plVar1 + (longlong)iVar3 * 0x38) == param_2) {
          if (lVar4 != 0) goto LAB_14888813f;
          break;
        }
        iVar3 = *(int *)(lVar4 + 0x30);
      } while (iVar3 != -1);
    }
  }
  local_28 = &local_30;
  local_30 = param_2;
  FUN_14889df5c(plVar1,&local_1c);
  lVar4 = (longlong)local_1c * 0x38 + *plVar1;
LAB_14888813f:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4 + 8;
}



// FUNCTION 14888815e FUN_14888815e body=45 status=ok
// SIG undefined FUN_14888815e(void)

void FUN_14888815e(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_148887ea2();
    if (lVar1 != 0) {
      FUN_1400bc8c2(lVar1,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 14888818c FUN_14888818c body=138 status=ok
// SIG undefined FUN_14888818c(void)

void FUN_14888818c(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    uVar2 = FUN_148888216();
    cVar1 = FUN_144b085f6(uVar2);
    FUN_1400bc96c(uVar2);
    if ((cVar1 == '\0') && ((longlong)*(int *)(param_1 + 0x38) != 0)) {
      lVar3 = 0;
      do {
        if ((*(int *)(*(longlong *)(param_1 + 0x30) + 8 + lVar3) != 0) &&
           (*(longlong *)(*(longlong *)(param_1 + 0x30) + lVar3) != 0)) {
          FUN_14889deb8(param_1 + 0x30,param_2);
          return;
        }
        lVar3 = lVar3 + 0x10;
      } while ((longlong)*(int *)(param_1 + 0x38) * 0x10 != lVar3);
    }
  }
  return;
}



// FUNCTION 148888216 FUN_148888216 body=249 status=ok
// SIG undefined FUN_148888216(void)

longlong FUN_148888216(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)(param_1 + 0x98);
  if (*(int *)(param_1 + 0xa0) != *(int *)(param_1 + 0xcc)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    lVar4 = param_1 + 0xd0;
    if (*(longlong *)(param_1 + 0xd8) != 0) {
      lVar4 = *(longlong *)(param_1 + 0xd8);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0xe0) - 1U & (uVar2 >> 0x10 ^ uVar2)) *
                             4);
    if (iVar3 != -1) {
      do {
        lVar4 = *plVar1 + (longlong)iVar3 * 0x38;
        if (*(ulonglong *)(*plVar1 + (longlong)iVar3 * 0x38) == param_2) {
          if (lVar4 != 0) goto LAB_1488882f2;
          break;
        }
        iVar3 = *(int *)(lVar4 + 0x30);
      } while (iVar3 != -1);
    }
  }
  local_28 = &local_30;
  local_30 = param_2;
  FUN_14889e4b0(plVar1,&local_1c);
  lVar4 = (longlong)local_1c * 0x38 + *plVar1;
LAB_1488882f2:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4 + 8;
}



// FUNCTION 148888310 FUN_148888310 body=45 status=ok
// SIG undefined FUN_148888310(void)

void FUN_148888310(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_148887f3c();
    if (lVar1 != 0) {
      FUN_1400bc8c2(lVar1,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 14888833e FUN_14888833e body=953 status=ok
// SIG undefined FUN_14888833e(void)

void FUN_14888833e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  float fVar3;
  longlong lVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  int iVar11;
  undefined1 auStack_f8 [40];
  longlong local_d0;
  undefined2 *local_c8;
  int local_c0;
  longlong *local_b8;
  undefined4 local_b0;
  uint uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined2 *local_90;
  longlong lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2 != 0) {
    fVar3 = *(float *)(param_2 + 0x2c0);
    *(float *)(param_2 + 0x2c0) = fVar3 + 15.0;
    FUN_140056680(&local_90,L"{c:y}Locked Actions{c}: ");
    plVar1 = (longlong *)(param_1 + 0x48);
    lVar2 = param_1 + 0x58;
    local_80 = (undefined2 *)0x100000000;
    local_70._0_4_ = 0xffffffff;
    local_70._4_4_ = 0;
    uStack_68 = 0;
    uStack_78 = lVar2;
    if (*(int *)(param_1 + 0x70) == 0) {
      iVar11 = 0;
    }
    else {
      FUN_1449c0562(&local_80);
      iVar11 = *(int *)(param_1 + 0x70);
    }
    local_d0 = param_2 + 0xa8;
    uStack_98 = CONCAT44(uStack_64,uStack_68);
    local_a0._0_4_ = (uint)local_70;
    local_a0._4_4_ = local_70._4_4_;
    local_b0 = (undefined4)local_80;
    uStack_ac = local_80._4_4_;
    uStack_a8 = (undefined4)uStack_78;
    uStack_a4 = uStack_78._4_4_;
    local_b8 = plVar1;
    if ((local_70._4_4_ != iVar11) || (uStack_78 != lVar2)) {
      do {
        lVar4 = *local_b8;
        lVar8 = (longlong)local_a0._4_4_;
        cVar6 = FUN_144b085f6(lVar4 + lVar8 * 0x38 + 8);
        if (cVar6 != '\0') {
          FUN_1410a642a(&local_c8,*(undefined8 *)(lVar4 + lVar8 * 0x38));
          puVar10 = &DAT_149dfb77a;
          if (local_c0 != 0) {
            puVar10 = local_c8;
          }
          puVar9 = &DAT_149dfb77a;
          if ((int)lStack_88 != 0) {
            puVar9 = local_90;
          }
          FUN_140002266(&local_80,L"%s %s",puVar9,puVar10);
          if (local_90 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          local_90 = local_80;
          lStack_88 = uStack_78;
          local_80 = (undefined2 *)0x0;
          uStack_78 = 0;
          if (local_c8 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
        }
        local_a0._0_4_ = (uint)local_a0 & ~uStack_ac;
        FUN_1449c0562(&local_b0);
      } while (local_b8 != plVar1 ||
               (CONCAT44(uStack_a4,uStack_a8) != lVar2 || local_a0._4_4_ != iVar11));
    }
    lVar2 = local_d0;
    FUN_1470e5e3a(local_d0,&local_90);
    if (local_90 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    FUN_140056680(&local_90,L"{c:y}Locked Groups{c}: ");
    plVar1 = (longlong *)(param_1 + 0x98);
    lVar4 = param_1 + 0xa8;
    local_80 = (undefined2 *)0x100000000;
    local_70 = 0xffffffff;
    uStack_68 = 0;
    uStack_78 = lVar4;
    if (*(int *)(param_1 + 0xc0) == 0) {
      iVar11 = 0;
    }
    else {
      FUN_1449c0562(&local_80);
      iVar11 = *(int *)(param_1 + 0xc0);
    }
    uStack_98 = CONCAT44(uStack_64,uStack_68);
    local_a0 = local_70;
    uVar5 = local_a0;
    local_b0 = (undefined4)local_80;
    uStack_ac = local_80._4_4_;
    uStack_a8 = (undefined4)uStack_78;
    uStack_a4 = uStack_78._4_4_;
    local_a0._4_4_ = (int)((ulonglong)local_70 >> 0x20);
    iVar7 = local_a0._4_4_;
    local_b8 = plVar1;
    if ((local_a0._4_4_ != iVar11) || (local_a0 = uVar5, uStack_78 != lVar4)) {
      do {
        local_a0 = uVar5;
        lVar8 = *local_b8;
        cVar6 = FUN_144b085f6(lVar8 + (longlong)iVar7 * 0x38 + 8);
        if (cVar6 != '\0') {
          FUN_1410a642a(&local_c8,*(undefined8 *)(lVar8 + (longlong)iVar7 * 0x38));
          puVar10 = &DAT_149dfb77a;
          if (local_c0 != 0) {
            puVar10 = local_c8;
          }
          puVar9 = &DAT_149dfb77a;
          if ((int)lStack_88 != 0) {
            puVar9 = local_90;
          }
          FUN_140002266(&local_80,L"%s %s",puVar9,puVar10);
          if (local_90 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          local_90 = local_80;
          lStack_88 = uStack_78;
          local_80 = (undefined2 *)0x0;
          uStack_78 = 0;
          if (local_c8 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
        }
        local_a0 = CONCAT44(local_a0._4_4_,(uint)local_a0 & ~uStack_ac);
        FUN_1449c0562(&local_b0);
        iVar7 = local_a0._4_4_;
        uVar5 = local_a0;
      } while (local_b8 != plVar1 ||
               (CONCAT44(uStack_a4,uStack_a8) != lVar4 || local_a0._4_4_ != iVar11));
    }
    FUN_1470e5e3a(lVar2,&local_90);
    if (local_90 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    *(float *)(param_2 + 0x2c0) = fVar3;
  }
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488886f8 FUN_1488886f8 body=121 status=ok
// SIG undefined FUN_1488886f8(void)

void FUN_1488886f8(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  if ((longlong)*(int *)(param_1 + 0x10) != 0) {
    puVar4 = *(undefined8 **)(param_1 + 8);
    puVar6 = puVar4 + (longlong)*(int *)(param_1 + 0x10) * 6;
    do {
      iVar1 = (int)param_2[1];
      lVar5 = (longlong)iVar1;
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_14011bb82(param_2,iVar1);
      }
      lVar2 = *param_2;
      *(undefined8 *)(lVar2 + lVar5 * 0x18) = *puVar4;
      *(undefined8 *)(lVar2 + 8 + lVar5 * 0x18) = puVar4[1];
      lVar3 = puVar4[2];
      *(longlong *)(lVar2 + 0x10 + lVar5 * 0x18) = lVar3;
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        UNLOCK();
      }
      puVar4 = puVar4 + 6;
    } while (puVar4 != puVar6);
  }
  return;
}



// FUNCTION 148888772 FUN_148888772 body=329 status=ok
// SIG undefined FUN_148888772(void)

void FUN_148888772(longlong param_1,longlong *param_2,double *param_3)

{
  longlong *plVar1;
  int *piVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  
  lVar8 = *param_2;
  lVar9 = param_2[1];
  plVar10 = (longlong *)param_2[2];
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  dVar3 = *param_3;
  dVar4 = param_3[1];
  dVar5 = param_3[2];
  lVar11 = *(longlong *)(param_1 + 8);
  iVar7 = *(int *)(param_1 + 0x10);
  lVar13 = (longlong)iVar7;
  if (lVar13 != 0) {
    lVar12 = 0;
    do {
      if (*(longlong *)(lVar11 + lVar12) == lVar8) {
        dVar6 = *(double *)(lVar11 + 0x18 + lVar12);
        if ((dVar6 == dVar3) && (!NAN(dVar6) && !NAN(dVar3))) {
          dVar6 = *(double *)(lVar11 + 0x20 + lVar12);
          if ((dVar6 == dVar4) && (!NAN(dVar6) && !NAN(dVar4))) {
            dVar6 = *(double *)(lVar11 + 0x28 + lVar12);
            if ((dVar6 == dVar5) && (!NAN(dVar6) && !NAN(dVar5))) goto LAB_14888884b;
          }
        }
      }
      lVar12 = lVar12 + 0x30;
    } while (lVar13 * 0x30 != lVar12);
  }
  *(uint *)(param_1 + 0x10) = iVar7 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar7 + 1U) {
    FUN_14889ec78((longlong *)(param_1 + 8),iVar7);
    lVar11 = *(longlong *)(param_1 + 8);
  }
  lVar13 = lVar13 * 0x30;
  lVar12 = lVar11 + lVar13;
  *(longlong *)(lVar11 + lVar13) = lVar8;
  *(longlong *)(lVar11 + 8 + lVar13) = lVar9;
  *(longlong **)(lVar11 + 0x10 + lVar13) = plVar10;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  *(double *)(lVar12 + 0x18) = dVar3;
  *(double *)(lVar12 + 0x20) = dVar4;
  *(double *)(lVar12 + 0x28) = dVar5;
LAB_14888884b:
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar10 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148888885. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar10 + 0x10))(plVar10);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1488888bc FUN_1488888bc body=65 status=ok
// SIG undefined FUN_1488888bc(void)

uint FUN_1488888bc(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  
  if ((longlong)*(int *)(param_1 + 0x10) == 0) {
    uVar3 = 0;
  }
  else {
    lVar4 = *(longlong *)(param_1 + 8);
    lVar2 = (longlong)*(int *)(param_1 + 0x10) * 0x30;
    uVar3 = 0;
    do {
      uVar1 = FUN_140230656(lVar4);
      uVar3 = uVar3 | 1 << (uVar1 & 0x1f);
      lVar4 = lVar4 + 0x30;
      lVar2 = lVar2 + -0x30;
    } while (lVar2 != 0);
  }
  return uVar3;
}



// FUNCTION 14888890e FUN_14888890e body=133 status=ok
// SIG undefined FUN_14888890e(void)

void FUN_14888890e(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = *(longlong *)(param_1 + 8);
  iVar1 = *(int *)(param_1 + 0x10);
  lVar3 = (longlong)iVar1;
  if (lVar3 != 0) {
    lVar4 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar4) == *param_2) {
        return;
      }
      lVar4 = lVar4 + 0x18;
    } while (lVar3 * 0x18 != lVar4);
  }
  *(uint *)(param_1 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar1 + 1U) {
    FUN_14011bb82((longlong *)(param_1 + 8),iVar1);
    lVar2 = *(longlong *)(param_1 + 8);
  }
  *(longlong *)(lVar2 + lVar3 * 0x18) = *param_2;
  *(longlong *)(lVar2 + 8 + lVar3 * 0x18) = param_2[1];
  lVar4 = param_2[2];
  *(longlong *)(lVar2 + 0x10 + lVar3 * 0x18) = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 148888994 FUN_148888994 body=65 status=ok
// SIG undefined FUN_148888994(void)

uint FUN_148888994(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  
  if ((longlong)*(int *)(param_1 + 0x10) == 0) {
    uVar3 = 0;
  }
  else {
    lVar4 = *(longlong *)(param_1 + 8);
    lVar2 = (longlong)*(int *)(param_1 + 0x10) * 0x18;
    uVar3 = 0;
    do {
      uVar1 = FUN_140230656(lVar4);
      uVar3 = uVar3 | 1 << (uVar1 & 0x1f);
      lVar4 = lVar4 + 0x18;
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != 0);
  }
  return uVar3;
}



// FUNCTION 1488889d6 FUN_1488889d6 body=112 status=ok
// SIG undefined FUN_1488889d6(void)

void FUN_1488889d6(longlong param_1,undefined8 param_2,float param_3)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  float fVar4;
  
  cVar2 = FUN_148888a46();
  bVar1 = *(byte *)(param_1 + 0x19);
  if (cVar2 == '\0') {
    *(bool *)(param_1 + 0x18) = bVar1 != 0;
    if (bVar1 != 0) {
      *(undefined1 *)(param_1 + 0x19) = 0;
      *(undefined4 *)(param_1 + 0x1c) = 0;
      *(char *)(param_1 + 0x20) = *(char *)(param_1 + 0x20) + '\x01';
    }
  }
  else if (bVar1 != 3) {
    fVar4 = *(float *)(param_1 + 0x1c);
    bVar3 = fVar4 <= 0.033 ^ 3;
    *(bool *)(param_1 + 0x18) = bVar1 != bVar3;
    if (bVar1 != bVar3) {
      *(byte *)(param_1 + 0x19) = bVar3;
      fVar4 = 0.0;
    }
    *(float *)(param_1 + 0x1c) = fVar4 + param_3;
  }
  return;
}



// FUNCTION 148888a46 FUN_148888a46 body=134 status=ok
// SIG undefined FUN_148888a46(void)

undefined8 FUN_148888a46(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  uint3 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_1;
  local_18 = param_1[1];
  local_10 = param_1[2];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  lVar3 = FUN_144b23a76(param_2,&local_20);
  if (lVar3 != 0) {
    iVar1 = *(int *)(lVar3 + 0xa0);
    if (iVar1 <= *(int *)(lVar3 + 0x90)) {
      uVar2 = (uint3)((uint)iVar1 >> 8);
      uVar4 = CONCAT71((uint7)uVar2,1);
      if (*(int *)(lVar3 + 0x90) == iVar1) {
        uVar5 = (ulonglong)CONCAT31(uVar2,*(undefined1 *)(lVar3 + 0x34)) & 0xffffffffffffff02;
        uVar4 = CONCAT71((int7)(uVar5 >> 8),(byte)uVar5 >> 1);
      }
      goto LAB_148888aa4;
    }
  }
  uVar4 = 0;
LAB_148888aa4:
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148888ace FUN_148888ace body=101 status=ok
// SIG undefined FUN_148888ace(void)

void FUN_148888ace(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  FUN_147acf862(param_2);
  lVar4 = param_1[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar1 = *param_1;
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + lVar5);
      if (((lVar2 != 0) && (*(int *)(lVar2 + 0x20) != 0)) &&
         (plVar3 = *(longlong **)(lVar2 + 0x18), plVar3 != (longlong *)0x0)) {
        (**(code **)(*plVar3 + 0x60))(plVar3,param_2);
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)(int)lVar4 * 0x10 != lVar5);
  }
  FUN_147acf868(param_2);
  return;
}



// FUNCTION 148888b34 FUN_148888b34 body=325 status=ok
// SIG undefined FUN_148888b34(void)

undefined8 * FUN_148888b34(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = *param_3;
  param_1[3] = param_3[1];
  lVar7 = param_3[2];
  param_1[4] = lVar7;
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
  }
  param_1[5] = param_2;
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xf8;
  *(undefined2 *)((longlong)param_1 + 0x31) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  lVar7 = FUN_146912824(param_1 + 2);
  iVar3 = *(int *)(lVar7 + 8);
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  plVar6 = param_1 + 7;
  if (*(int *)((longlong)param_1 + 0x44) < iVar3) {
    FUN_14889ed0c(plVar6);
  }
  plVar8 = (longlong *)FUN_146912824(param_1 + 2);
  if ((longlong)(int)plVar8[1] != 0) {
    puVar9 = (undefined8 *)*plVar8;
    puVar2 = puVar9 + (longlong)(int)plVar8[1] * 3;
    do {
      iVar3 = *(int *)(param_1 + 8);
      lVar7 = (longlong)iVar3;
      *(uint *)(param_1 + 8) = iVar3 + 1U;
      if (*(uint *)((longlong)param_1 + 0x44) < iVar3 + 1U) {
        FUN_14889ed7c(plVar6,iVar3);
      }
      lVar4 = *plVar6;
      *(undefined8 *)(lVar4 + lVar7 * 0x28) = *puVar9;
      *(undefined8 *)(lVar4 + 8 + lVar7 * 0x28) = puVar9[1];
      lVar5 = puVar9[2];
      *(longlong *)(lVar4 + 0x10 + lVar7 * 0x28) = lVar5;
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
        UNLOCK();
      }
      lVar4 = lVar4 + lVar7 * 0x28;
      *(undefined2 *)(lVar4 + 0x18) = 0;
      *(undefined4 *)(lVar4 + 0x1c) = 0;
      *(undefined1 *)(lVar4 + 0x20) = 0;
      puVar9 = puVar9 + 3;
    } while (puVar9 != puVar2);
  }
  plVar6 = (longlong *)param_3[2];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar6 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return param_1;
}



// FUNCTION 148888c7a FUN_148888c7a body=227 status=ok
// SIG undefined FUN_148888c7a(void)

void FUN_148888c7a(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined1 auStack_58 [32];
  char *local_38;
  char local_22;
  byte local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xfe;
  bVar1 = *(byte *)(param_1 + 0x31);
  *(undefined1 *)(param_1 + 0x31) = 0;
  local_21 = 0;
  local_38 = &local_22;
  local_22 = '\0';
  FUN_148888d7e(param_1,param_2,&local_21,(byte *)(param_1 + 0x31));
  bVar2 = *(byte *)(param_1 + 0x32);
  if (bVar2 < 2) {
    if (local_22 == '\0') {
      bVar3 = *(byte *)(param_1 + 0x31);
      if (bVar3 == 0) goto LAB_148888d55;
      if (*(uint *)(param_1 + 0x40) == (uint)bVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
      if ((bVar2 != 1) || (bVar1 <= bVar3)) {
        if (bVar2 == 0) {
          *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) | 2;
          *(undefined1 *)(param_1 + 0x32) = 1;
        }
        goto LAB_148888d18;
      }
    }
LAB_148888d37:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if (bVar2 == 3) {
    if (*(uint *)(param_1 + 0x40) == (uint)local_21) {
LAB_148888d55:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
  }
  else if (bVar2 == 2) {
    if (*(uint *)(param_1 + 0x40) == (uint)local_21) goto LAB_148888d55;
    if (local_21 != 0) goto LAB_148888d37;
  }
LAB_148888d18:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148888d7e FUN_148888d7e body=134 status=ok
// SIG undefined FUN_148888d7e(void)

void FUN_148888d7e(longlong param_1,undefined4 param_2,char *param_3,char *param_4,char *param_5)

{
  longlong lVar1;
  char cVar2;
  char *pcVar3;
  longlong lVar4;
  
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x38);
    lVar1 = lVar4 + (longlong)*(int *)(param_1 + 0x40) * 0x28;
    do {
      FUN_1488889d6(lVar4,*(undefined8 *)(param_1 + 0x28),param_2);
      cVar2 = *(char *)(lVar4 + 0x19);
      pcVar3 = param_3;
      if (((cVar2 == '\0') || (pcVar3 = param_5, cVar2 == '\x03')) ||
         (pcVar3 = param_4, cVar2 == '\x02')) {
        *pcVar3 = *pcVar3 + '\x01';
      }
      lVar4 = lVar4 + 0x28;
    } while (lVar4 != lVar1);
  }
  return;
}



// FUNCTION 1488891a6 FUN_1488891a6 body=321 status=ok
// SIG undefined FUN_1488891a6(void)

void FUN_1488891a6(longlong param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) | 1;
    cVar2 = FUN_1488892e8();
    if (cVar2 != '\0') {
      local_50 = *(undefined8 *)(param_1 + 0x10);
      local_48 = *(undefined8 *)(param_1 + 0x18);
      local_40 = *(longlong *)(param_1 + 0x20);
      if (local_40 != 0) {
        LOCK();
        *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
        UNLOCK();
      }
      FUN_147acf640(param_2,&local_50);
    }
    if ((*(char *)(param_1 + 0x32) == '\x01') ||
       ((*(char *)(param_1 + 0x32) == '\x02' && ((*(byte *)(param_1 + 0x30) & 2) != 0)))) {
      FUN_148889386(param_1,param_2);
    }
    lVar4 = *(longlong *)(param_1 + 0x48);
    iVar1 = *(int *)(param_1 + 0x50);
    uVar3 = 0;
    if ((longlong)iVar1 != 0) {
      lVar5 = 0;
      do {
        uVar3 = *(undefined4 *)(lVar4 + 0x18 + lVar5);
        local_68 = *(undefined8 *)(lVar4 + lVar5);
        local_60 = *(undefined8 *)(lVar4 + 8 + lVar5);
        local_58 = *(longlong *)(lVar4 + 0x10 + lVar5);
        if (local_58 != 0) {
          LOCK();
          *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
          UNLOCK();
        }
        FUN_147acf71e(param_2,&local_68,uVar3);
        lVar5 = lVar5 + 0x20;
      } while ((longlong)iVar1 * 0x20 != lVar5);
      uVar3 = *(undefined4 *)(param_1 + 0x50);
      lVar4 = *(longlong *)(param_1 + 0x48);
    }
    iVar1 = *(int *)(param_1 + 0x54);
    FUN_14889ee10(lVar4,uVar3);
    *(undefined4 *)(param_1 + 0x50) = 0;
    if ((iVar1 < 0) && (*(int *)(param_1 + 0x54) != 0)) {
      FUN_14889ee5a(param_1 + 0x48);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488892e8 FUN_1488892e8 body=156 status=ok
// SIG undefined FUN_1488892e8(void)

undefined8 FUN_1488892e8(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar2 = (longlong *)FUN_146912824(param_1 + 0x10);
  if ((longlong)(int)plVar2[1] == 0) {
    uVar3 = 0;
  }
  else {
    puVar4 = (undefined8 *)*plVar2;
    puVar1 = puVar4 + (longlong)(int)plVar2[1] * 3;
    do {
      local_40 = *puVar4;
      local_38 = puVar4[1];
      local_30 = puVar4[2];
      if (local_30 != 0) {
        LOCK();
        *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
        UNLOCK();
      }
      uVar3 = FUN_147acf584(param_2,&local_40);
    } while (((char)uVar3 == '\0') && (puVar4 = puVar4 + 3, puVar4 != puVar1));
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 148889386 FUN_148889386 body=148 status=ok
// SIG undefined FUN_148889386(void)

void FUN_148889386(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar2 = (longlong *)FUN_146912824(param_1 + 0x10);
  if ((longlong)(int)plVar2[1] != 0) {
    puVar3 = (undefined8 *)*plVar2;
    puVar1 = puVar3 + (longlong)(int)plVar2[1] * 3;
    do {
      local_40 = *puVar3;
      local_38 = puVar3[1];
      local_30 = puVar3[2];
      if (local_30 != 0) {
        LOCK();
        *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
        UNLOCK();
      }
      FUN_147acf6ca(param_2,&local_40);
      puVar3 = puVar3 + 3;
    } while (puVar3 != puVar1);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14888941c FUN_14888941c body=121 status=ok
// SIG undefined FUN_14888941c(void)

void FUN_14888941c(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xf8;
  *(undefined2 *)(param_1 + 0x31) = 0;
  iVar1 = *(int *)(param_1 + 0x54);
  FUN_14889ee10(*(undefined8 *)(param_1 + 0x48));
  *(undefined4 *)(param_1 + 0x50) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x54) != 0)) {
    FUN_14889ee5a(param_1 + 0x48);
  }
  iVar1 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    lVar3 = 0;
    do {
      *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0;
      *(undefined4 *)(lVar2 + 0x1c + lVar3) = 0;
      *(undefined1 *)(lVar2 + 0x20 + lVar3) = 0;
      lVar3 = lVar3 + 0x28;
    } while ((longlong)iVar1 * 0x28 != lVar3);
  }
  return;
}



// FUNCTION 148889496 FUN_148889496 body=114 status=ok
// SIG undefined FUN_148889496(void)

void FUN_148889496(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    lVar1 = (longlong)*(int *)(param_1 + 0x40) * 0x28;
    do {
      if (*(char *)(param_1 + 0x32) == '\0') {
LAB_1488894c8:
        if (*(char *)(lVar2 + 0x20) != '\0') {
          FUN_148889866(param_1,lVar2,0);
          uVar3 = 1;
LAB_1488894ee:
          FUN_148889866(param_1,lVar2,uVar3);
        }
      }
      else if (*(char *)(param_1 + 0x32) == '\x03') {
        if (*(char *)(lVar2 + 0x19) == '\0') goto LAB_1488894c8;
        uVar3 = 0;
        goto LAB_1488894ee;
      }
      lVar2 = lVar2 + 0x28;
      lVar1 = lVar1 + -0x28;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 148889508 FUN_148889508 body=481 status=ok
// SIG undefined FUN_148889508(void)

longlong * FUN_148889508(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_2 = 0;
  lVar5 = *(longlong *)(param_1 + 0x60);
  param_2[1] = lVar5;
  if (lVar5 == 0) {
LAB_14888956b:
    lVar5 = *param_2;
    plVar7 = (longlong *)0x0;
  }
  else {
    iVar4 = *(int *)(lVar5 + 8);
    do {
      if (iVar4 == 0) {
        param_2[1] = 0;
        goto LAB_14888956b;
      }
      LOCK();
      iVar3 = *(int *)(lVar5 + 8);
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(lVar5 + 8) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar8);
    plVar7 = (longlong *)param_2[1];
    if (plVar7 == (longlong *)0x0) goto LAB_14888956b;
    lVar5 = *(longlong *)(param_1 + 0x58);
    *param_2 = lVar5;
  }
  if (lVar5 != 0) goto LAB_148889575;
  FUN_1488896ea(&local_60,param_1);
  plVar6 = (longlong *)FUN_14001cc68(0x38,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14b40cd60;
  local_50 = local_60;
  local_60 = 0;
  local_48 = local_58;
  local_58 = 0;
  FUN_14889f1f2(plVar6 + 2,param_1 + 0x10);
  if (plVar6 == (longlong *)0x0) {
    *param_2 = 0x10;
    if (plVar7 != (longlong *)0x0) {
      param_2[1] = 0;
LAB_148889660:
      LOCK();
      plVar2 = plVar7 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
      if (plVar6 != (longlong *)0x0) goto LAB_148889682;
    }
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    plVar7 = (longlong *)param_2[1];
    *param_2 = (longlong)(plVar6 + 2);
    if (plVar6 == plVar7) {
      LOCK();
      plVar7 = plVar6 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    else {
      param_2[1] = (longlong)plVar6;
      if (plVar7 != (longlong *)0x0) goto LAB_148889660;
    }
LAB_148889682:
    LOCK();
    plVar7 = plVar6 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  FUN_1449db362(&local_60);
  lVar5 = *param_2;
  plVar7 = (longlong *)param_2[1];
LAB_148889575:
  *(longlong *)(param_1 + 0x58) = lVar5;
  plVar6 = *(longlong **)(param_1 + 0x60);
  if (plVar6 != plVar7) {
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
      UNLOCK();
      plVar6 = *(longlong **)(param_1 + 0x60);
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 0x60) = plVar7;
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1488896ea FUN_1488896ea body=380 status=ok
// SIG undefined FUN_1488896ea(void)

longlong * FUN_1488896ea(longlong *param_1,undefined8 *param_2)

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
LAB_1488897f4:
    *puVar3 = &PTR_LAB_14b40ccf0;
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
    *puVar3 = &PTR_FUN_14b40cc80;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = FUN_1488891a6;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_1488897f4;
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
    *puVar3 = &PTR_LAB_14b40ccf0;
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
    *puVar3 = &PTR_FUN_14b40cc80;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = FUN_1488891a6;
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



// FUNCTION 148889866 FUN_148889866 body=104 status=ok
// SIG undefined FUN_148889866(void)

void FUN_148889866(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar1 + 1U) {
    FUN_14889f33a((longlong *)(param_1 + 0x48),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x48);
  lVar4 = (longlong)iVar1 * 0x20;
  *(undefined8 *)(lVar2 + lVar4) = *param_2;
  *(undefined8 *)(lVar2 + 8 + lVar4) = param_2[1];
  lVar3 = param_2[2];
  *(longlong *)(lVar2 + 0x10 + lVar4) = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(lVar2 + lVar4 + 0x18) = param_3;
  return;
}



// FUNCTION 1488898ce FUN_1488898ce body=542 status=ok
// SIG undefined FUN_1488898ce(void)

undefined8 *
FUN_1488898ce(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar5 = FUN_1469127fc(param_4);
  if (cVar5 == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
    goto LAB_148889908;
  }
  if ((longlong)(int)param_1[1] == 0) {
LAB_148889933:
    plVar8 = (longlong *)0x0;
  }
  else {
    plVar6 = (longlong *)*param_1;
    lVar7 = (longlong)(int)param_1[1] << 4;
    plVar8 = (longlong *)0x0;
    do {
      plVar9 = (longlong *)*plVar6;
      if (plVar9[2] == *param_4) {
        if (plVar6 == (longlong *)0x0) goto LAB_148889933;
        plVar8 = (longlong *)plVar6[1];
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
        }
        if (plVar9 != (longlong *)0x0) goto LAB_148889ab8;
        break;
      }
      plVar6 = plVar6 + 2;
      lVar7 = lVar7 + -0x10;
    } while (lVar7 != 0);
  }
  plVar6 = (longlong *)FUN_14889f3bf(param_3,param_4);
  plVar9 = plVar6 + 2;
  local_48 = plVar9;
  local_40 = plVar6;
  FUN_14889f56c(&local_48,plVar9);
  iVar3 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
    FUN_14889f610(param_1,iVar3);
  }
  lVar7 = *param_1;
  lVar10 = (longlong)iVar3 * 0x10;
  *(longlong **)(lVar7 + lVar10) = plVar9;
  *(longlong **)(lVar7 + 8 + lVar10) = plVar6;
  if (plVar6 == (longlong *)0x0) {
LAB_1488899a2:
    plVar6 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    plVar9 = *(longlong **)(lVar7 + lVar10);
    plVar6 = (longlong *)((longlong *)(lVar7 + lVar10))[1];
    if (plVar6 == (longlong *)0x0) goto LAB_1488899a2;
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  if (plVar6 == plVar8) {
    if (plVar8 == (longlong *)0x0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      LOCK();
      plVar2 = plVar6 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      plVar4 = plVar8;
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1;
        UNLOCK();
        plVar8 = plVar6;
        goto joined_r0x000148889a17;
      }
    }
  }
  else {
    plVar4 = plVar6;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar8 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1;
        UNLOCK();
joined_r0x000148889a17:
        if (iVar3 == 0) {
          (**(code **)(*plVar8 + 0x10))();
        }
      }
    }
  }
  plVar8 = plVar4;
  plVar6 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_40 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if (plVar9 == (longlong *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
LAB_148889ab8:
    FUN_148889508(plVar9,param_2);
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar8 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
LAB_148889908:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148889aee FUN_148889aee body=324 status=ok
// SIG undefined FUN_148889aee(void)

void FUN_148889aee(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  int local_60;
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 != 0) {
    FUN_140002266(local_58,L"{c:o}GBX INPUT CHORDS{c} %i",(int)param_1[1]);
    FUN_1470e5e3a(param_2 + 0xa8,local_58);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    lVar3 = param_1[1];
    if ((longlong)(int)lVar3 != 0) {
      lVar2 = *param_1;
      lVar6 = 0;
      do {
        cVar1 = *(char *)(*(longlong *)(lVar2 + lVar6) + 0x32);
        uVar4 = 0x72;
        if (cVar1 != '\x02') {
          uVar4 = 0x67;
          if (cVar1 == '\x01') {
            uVar4 = 0x62;
          }
          if (cVar1 == '\x03') {
            uVar4 = 0x79;
          }
        }
        FUN_14171cb22(*(longlong *)(lVar2 + lVar6) + 0x10,&local_68);
        puVar5 = &DAT_149dfb77a;
        if (local_60 != 0) {
          puVar5 = local_68;
        }
        FUN_140002266(local_58,L"   {c:%c}[%s]{c}",uVar4,puVar5);
        FUN_1470e5e3a(param_2 + 0xa8,local_58);
        if (local_58[0] != 0) {
          FUN_1400020a8();
        }
        if (local_68 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        lVar6 = lVar6 + 0x10;
      } while ((longlong)(int)lVar3 * 0x10 != lVar6);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148889c34 FUN_148889c34 body=335 status=ok
// SIG undefined FUN_148889c34(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_148889c34(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb7fdc0) {
    FUN_144b3d300(&DAT_14cb7fdc0);
    if (DAT_14cb7fdc0 == -1) {
      DAT_14cb7fdb0 = 0;
      _DAT_14cb7fdb8 = 0;
      atexit(FUN_143d71440);
      _Init_thread_footer(&DAT_14cb7fdc0);
    }
  }
  uVar4 = _DAT_14cb7fdb8;
  FUN_144a65a1e(DAT_14cb7fdb0,_DAT_14cb7fdb8 & 0xffffffff);
  uVar3 = _DAT_14cb7fdb8 >> 0x20;
  _DAT_14cb7fdb8 = _DAT_14cb7fdb8 & 0xffffffff00000000;
  if (((longlong)uVar4 < 0) && ((int)uVar3 != 0)) {
    FUN_145811e2e(&DAT_14cb7fdb0,0);
  }
  *param_1 = *param_2;
  plVar2 = (longlong *)param_2[1];
  plVar5 = (longlong *)param_1[1];
  if (plVar5 != plVar2) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar5 = (longlong *)param_1[1];
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))();
      }
    }
    param_1[1] = plVar2;
  }
  (**(code **)(*param_3 + 8))(param_3,&DAT_14cb7fdb0);
  if ((longlong)DAT_14cb7fdb8 != 0) {
    lVar7 = (longlong)DAT_14cb7fdb8 * 0x18;
    lVar6 = DAT_14cb7fdb0;
    do {
      FUN_14011b67e(param_1 + 2,lVar6);
      lVar6 = lVar6 + 0x18;
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != 0);
  }
  return param_1;
}



// FUNCTION 148889d84 FUN_148889d84 body=123 status=ok
// SIG undefined FUN_148889d84(void)

undefined8 FUN_148889d84(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  
  if ((longlong)*(int *)(param_1 + 0x18) != 0) {
    lVar1 = (longlong)*(int *)(param_1 + 0x18) * 0x18;
    lVar3 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x10) + lVar3) == *param_2) {
        return 1;
      }
      lVar3 = lVar3 + 0x18;
    } while (lVar1 != lVar3);
    lVar3 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x10) + lVar3) == DAT_14c966e68) {
        cVar2 = FUN_140f47498(param_2);
        if (cVar2 != '\0') {
          return 0;
        }
        cVar2 = FUN_144a8fce0(param_2);
        if (cVar2 != '\0') {
          return 0;
        }
        cVar2 = FUN_144aa26b8(param_2);
        if (cVar2 != '\0') {
          return 0;
        }
        return 1;
      }
      lVar3 = lVar3 + 0x18;
    } while (lVar1 != lVar3);
  }
  return 0;
}



// FUNCTION 148889e00 FUN_148889e00 body=119 status=ok
// SIG undefined FUN_148889e00(void)

void FUN_148889e00(longlong *param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  plVar2 = (longlong *)param_1[1];
  if (plVar2 != (longlong *)0x0) {
    iVar6 = (int)plVar2[1];
    do {
      if (iVar6 == 0) goto LAB_148889e59;
      LOCK();
      iVar5 = (int)plVar2[1];
      bVar7 = iVar6 == iVar5;
      if (bVar7) {
        *(int *)(plVar2 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar7);
    plVar3 = (longlong *)*param_1;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x48))(plVar3,param_2,param_1 + 4,param_3);
    }
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
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
LAB_148889e59:
  param_1[9] = *(longlong *)(param_3 + 0x178);
  lVar4 = *(longlong *)(param_3 + 0x170);
  param_1[7] = *(longlong *)(param_3 + 0x168);
  param_1[8] = lVar4;
  return;
}



// FUNCTION 148889e78 FUN_148889e78 body=154 status=ok
// SIG undefined FUN_148889e78(void)

longlong FUN_148889e78(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  FUN_148889c34();
  FUN_1486bf370(param_1 + 0x20,param_3);
  if ((longlong)*(int *)(param_1 + 0x18) == 0) {
    bVar4 = false;
  }
  else {
    lVar3 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + lVar3);
      if (lVar2 == DAT_14c966e68) break;
      bVar4 = (longlong)*(int *)(param_1 + 0x18) * 0x18 + -0x18 != lVar3;
      lVar3 = lVar3 + 0x18;
    } while (bVar4);
    bVar4 = lVar2 == DAT_14c966e68;
  }
  *(bool *)(param_1 + 0x38) = bVar4;
  *(undefined1 *)(param_1 + 0x39) = 0;
  *(undefined8 *)(param_1 + 0x40) = DAT_14c966e80;
  *(undefined8 *)(param_1 + 0x48) = DAT_14c966e88;
  lVar3 = DAT_14c966e90;
  *(longlong *)(param_1 + 0x50) = DAT_14c966e90;
  if (lVar3 != 0) {
    LOCK();
    piVar1 = (int *)(lVar3 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 148889f12 FUN_148889f12 body=119 status=ok
// SIG undefined FUN_148889f12(void)

void FUN_148889f12(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  if (*(char *)((longlong)param_1 + 0x39) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x39) = 0;
    FUN_1413a517a(param_1 + 8,&DAT_14c966e80);
    plVar3 = (longlong *)param_1[1];
    if (plVar3 != (longlong *)0x0) {
      iVar5 = (int)plVar3[1];
      do {
        if (iVar5 == 0) {
          return;
        }
        LOCK();
        iVar4 = (int)plVar3[1];
        bVar6 = iVar5 == iVar4;
        if (bVar6) {
          *(int *)(plVar3 + 1) = iVar5 + 1;
          iVar4 = iVar5;
        }
        iVar5 = iVar4;
        UNLOCK();
      } while (!bVar6);
      if ((longlong *)*param_1 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*param_1 + 0x18))();
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
                    /* WARNING: Could not recover jumptable at 0x000148889f7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 148889f8a FUN_148889f8a body=196 status=ok
// SIG undefined FUN_148889f8a(void)

void FUN_148889f8a(longlong param_1,undefined8 param_2,longlong *param_3,int param_4)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_4 == 1) {
    if ((*(char *)(param_1 + 0x39) == '\x01') && (*(longlong *)(param_1 + 0x40) == *param_3)) {
      FUN_1413a517a(param_1 + 0x40,&DAT_14c966e80);
      if (*(char *)(param_1 + 0x39) == '\x01') {
        *(undefined1 *)(param_1 + 0x39) = 0;
        uVar2 = 1;
LAB_14888a015:
        FUN_14888a04e(param_1,param_2,uVar2);
        return;
      }
    }
  }
  else if ((param_4 == 0) &&
          ((*(char *)(param_1 + 0x39) != '\x01' || (*(char *)(param_1 + 0x38) == '\x01')))) {
    cVar1 = FUN_148889d84(param_1,param_3);
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x39) == '\x01') {
        *(undefined1 *)(param_1 + 0x39) = 0;
        FUN_14888a04e(param_1,param_2,1);
        FUN_1413a517a(param_1 + 0x40,&DAT_14c966e80);
      }
      FUN_1413a517a(param_1 + 0x40,param_3);
      if (*(char *)(param_1 + 0x39) == '\0') {
        *(undefined1 *)(param_1 + 0x39) = 1;
        uVar2 = 0;
        goto LAB_14888a015;
      }
    }
  }
  return;
}



// FUNCTION 14888a04e FUN_14888a04e body=89 status=ok
// SIG undefined FUN_14888a04e(void)

void FUN_14888a04e(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = (longlong *)param_1[1];
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    if ((longlong *)*param_1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_1 + 0x40))();
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
                    /* WARNING: Could not recover jumptable at 0x00014888a09c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14888a0a8 FUN_14888a0a8 body=299 status=ok
// SIG undefined FUN_14888a0a8(void)

void FUN_14888a0a8(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*param_2 == 0) {
    if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  FUN_14485c47a(param_1 + 0x268);
  FUN_14888a1e8(*param_2,&local_40);
  plVar1 = local_38;
  *(undefined8 *)(param_1 + 0x290) = local_40;
  local_40 = 0;
  plVar3 = *(longlong **)(param_1 + 0x298);
  if (local_38 != plVar3) {
    local_38 = (longlong *)0x0;
    *(longlong **)(param_1 + 0x298) = plVar1;
    if (plVar3 == (longlong *)0x0) goto LAB_14888a169;
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
  plVar3 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
LAB_14888a169:
  lVar5 = param_2[2];
  if ((longlong)(int)lVar5 != 0) {
    lVar4 = param_2[1];
    lVar6 = 0;
    do {
      FUN_143d714e4(param_1,*(undefined8 *)(lVar4 + lVar6));
      lVar6 = lVar6 + 8;
    } while ((longlong)(int)lVar5 * 8 != lVar6);
  }
  FUN_14888a35a(param_1,param_2[3]);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
}



// FUNCTION 14888a1e8 FUN_14888a1e8 body=369 status=ok
// SIG undefined FUN_14888a1e8(void)

longlong * FUN_14888a1e8(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *(longlong *)(param_1 + 0x548);
  if (lVar3 != 0) goto LAB_14888a212;
  plVar4 = (longlong *)FUN_14001cc68(0xf8);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b40d1b0;
  plVar5 = plVar4 + 2;
  memset(plVar5,0,0xe8);
  FUN_1488a4b6a(plVar5);
  local_38 = plVar5;
  local_30 = plVar4;
  FUN_1488a4d6a(&local_38,plVar5);
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x548) = 0x10;
    plVar5 = *(longlong **)(param_1 + 0x550);
    if (plVar5 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x550) = 0;
LAB_14888a2ef:
      LOCK();
      plVar4 = plVar5 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x00014888a31c:
        if (iVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x548) = plVar5;
    plVar5 = *(longlong **)(param_1 + 0x550);
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar5 = plVar4;
        goto joined_r0x00014888a31c;
      }
    }
    else {
      *(longlong **)(param_1 + 0x550) = plVar4;
      if (plVar5 != (longlong *)0x0) goto LAB_14888a2ef;
    }
  }
  plVar5 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_30 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x548);
LAB_14888a212:
  *param_2 = lVar3;
  lVar3 = *(longlong *)(param_1 + 0x550);
  param_2[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14888a35a FUN_14888a35a body=379 status=ok
// SIG undefined FUN_14888a35a(void)

void FUN_14888a35a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar5 = FUN_144729dda(param_1 + 0x268);
  if (cVar5 != '\0') {
    lVar3 = *(longlong *)(param_1 + 0x280);
    if (lVar3 != 0) {
      if (*(longlong *)(lVar3 + 0x18) == param_2) goto LAB_14888a3a1;
      FUN_148887a4e(param_1 + 0x198,lVar3);
      FUN_148887ca6(param_1 + 0x200,lVar3);
      *(undefined8 *)(param_1 + 0x280) = 0;
      plVar4 = *(longlong **)(param_1 + 0x288);
      if (plVar4 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x288) = 0;
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
    }
    if (param_2 != 0) {
      uVar6 = FUN_14479d2ce(param_1 + 0x268);
      FUN_143d7176a(uVar6,&local_38,param_2);
      if (local_38 != (longlong *)0x0) {
        (**(code **)(*local_38 + 8))(local_38,param_1);
        if (local_30 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_30 + 1) = (int)local_30[1] + 1;
          UNLOCK();
        }
        plVar4 = *(longlong **)(param_1 + 0x288);
        *(longlong **)(param_1 + 0x280) = local_38;
        *(longlong **)(param_1 + 0x288) = local_30;
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
      }
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_30 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar2 = (int *)((longlong)local_30 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_30 + 0x10))(local_30);
          }
        }
      }
    }
  }
LAB_14888a3a1:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14888a58e FUN_14888a58e body=116 status=ok
// SIG undefined FUN_14888a58e(void)

ulonglong FUN_14888a58e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  longlong lVar5;
  
  if ((longlong)*(int *)(param_1 + 0x278) != 0) {
    plVar3 = *(longlong **)(param_1 + 0x270);
    lVar5 = (longlong)*(int *)(param_1 + 0x278) << 4;
    do {
      if ((*plVar3 != 0) && (*(longlong *)(*plVar3 + 0x10) == param_2)) {
        if (plVar3 != (longlong *)0x0) {
          plVar3 = (longlong *)plVar3[1];
          uVar4 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
            UNLOCK();
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
          goto LAB_14888a5c5;
        }
        break;
      }
      plVar3 = plVar3 + 2;
      lVar5 = lVar5 + -0x10;
    } while (lVar5 != 0);
  }
  uVar4 = 0;
LAB_14888a5c5:
  return uVar4 & 0xffffffff;
}



// FUNCTION 14888a602 FUN_14888a602 body=266 status=ok
// SIG undefined FUN_14888a602(void)

longlong * FUN_14888a602(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar4 = (longlong *)FUN_14001cc68(0x68,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b40d170;
  plVar1 = plVar4 + 2;
  plVar4[2] = 0;
  plVar4[3] = 0;
  plVar4[4] = param_3;
  plVar4[5] = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[8] = 0;
  plVar4[9] = 0;
  plVar4[10] = 0;
  *(undefined8 *)((longlong)plVar4 + 0x51) = 0;
  *(undefined8 *)((longlong)plVar4 + 0x59) = 0;
  local_48 = plVar1;
  local_40 = plVar4;
  FUN_1488a3ed8(&local_48,plVar1);
  (**(code **)(*(longlong *)(param_1 + 0x4a0) + 0x10))(param_1 + 0x4a0,local_58,param_3);
  FUN_14888fe20(plVar1,local_58);
  plVar3 = local_40;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_40)(local_40);
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
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14888a70e FUN_14888a70e body=254 status=ok
// SIG undefined FUN_14888a70e(void)

undefined8
FUN_14888a70e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b40ce10;
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
  *local_48 = &PTR_FUN_14b40cda0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_14889f696(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14888a816 FUN_14888a816 body=68 status=ok
// SIG undefined FUN_14888a816(void)

void FUN_14888a816(longlong param_1,longlong param_2)

{
  char cVar1;
  
  if (param_2 != 0) {
    cVar1 = FUN_144729dda(param_1 + 0x48);
    if (cVar1 == '\0') {
      FUN_14485c47a(param_1 + 0x48,param_2);
      FUN_14888ba22(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 14888a85a FUN_14888a85a body=95 status=ok
// SIG undefined FUN_14888a85a(void)

void FUN_14888a85a(longlong param_1)

{
  if (*(char *)(param_1 + 0x2c0) == '\0') {
    FUN_14889fbda(param_1 + 0x2c8);
    FUN_145d52a9d(*(undefined8 *)(param_1 + 0x318),*(undefined4 *)(param_1 + 800));
    *(undefined4 *)(param_1 + 800) = 0;
    if (*(int *)(param_1 + 0x324) != 0) {
      FUN_14889ff44(param_1 + 0x318);
    }
    *(undefined1 *)(param_1 + 0x2c0) = 1;
  }
  return;
}



// FUNCTION 14888a8ba FUN_14888a8ba body=3701 status=ok
// SIG undefined FUN_14888a8ba(void)

void FUN_14888a8ba(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  ulonglong uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  char cVar16;
  undefined8 **ppuVar17;
  longlong lVar18;
  longlong *plVar19;
  longlong *plVar20;
  longlong *plVar21;
  longlong *plVar22;
  longlong *plVar23;
  undefined8 *puVar24;
  int iVar25;
  longlong lVar26;
  undefined8 *puVar27;
  uint uVar28;
  ulonglong uVar29;
  longlong *plVar30;
  int iVar31;
  longlong lVar32;
  uint uVar33;
  int iVar34;
  longlong *plVar35;
  int iVar36;
  longlong lVar37;
  longlong *plVar38;
  longlong *plVar39;
  bool bVar40;
  float fVar41;
  undefined1 auStack_3f8 [47];
  undefined1 local_3c9;
  longlong *local_3c8;
  undefined8 *local_3c0;
  longlong *local_3b8;
  longlong local_3b0;
  undefined8 *local_3a8;
  undefined8 *local_3a0;
  longlong *local_398;
  longlong local_390;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_3f8;
  uVar3 = *(undefined1 *)((longlong)param_1 + 0x382);
  *(undefined2 *)((longlong)param_1 + 0x381) = 0x100;
  FUN_14888b730();
  FUN_14888b784(param_1);
  FUN_148888ace(param_1 + 99);
  local_3b8 = param_1 + 0x59;
  if ((int)param_1[0x5a] != *(int *)((longlong)param_1 + 0x2fc)) {
    uVar33 = (uint)((ulonglong)DAT_14c966e68 >> 0x10);
    uVar28 = (uint)DAT_14c966e68 & 0xffff;
    plVar22 = param_1 + 0x60;
    if ((longlong *)param_1[0x61] != (longlong *)0x0) {
      plVar22 = (longlong *)param_1[0x61];
    }
    iVar31 = *(int *)((longlong)plVar22 +
                     (ulonglong)
                     ((int)param_1[0x62] - 1U &
                     (int)((ulonglong)DAT_14c966e68 >> 0x20) +
                     ((uint)DAT_14c966e68 << 0x10 | uVar28) + (uVar33 << 0x13 | uVar33 & 0xffff) +
                     (uVar28 >> 4)) * 4);
    if (iVar31 != -1) {
      do {
        lVar26 = *local_3b8 + (longlong)iVar31 * 0x30;
        if (*(longlong *)(*local_3b8 + (longlong)iVar31 * 0x30) == DAT_14c966e68)
        goto LAB_14888a94e;
        iVar31 = *(int *)(lVar26 + 0x28);
      } while (iVar31 != -1);
    }
  }
  lVar26 = 0;
LAB_14888a94e:
  local_3b0 = lVar26 + 0x18;
  if (lVar26 == 0) {
    local_3b0 = 0;
  }
  lVar26 = (longlong)(int)((longlong *)param_2[4])[1];
  local_3c9 = uVar3;
  local_3c8 = param_1;
  local_3c0 = param_2;
  if (lVar26 != 0) {
    plVar22 = *(longlong **)param_2[4];
    plVar21 = plVar22 + lVar26 * 4;
    do {
      local_3a8 = (undefined8 *)*plVar22;
      local_3a0 = (undefined8 *)plVar22[1];
      local_398 = (longlong *)plVar22[2];
      if (local_398 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_398 + 1) = (int)local_398[1] + 1;
        UNLOCK();
      }
      local_390 = plVar22[3];
      if ((*(byte *)(local_390 + 0x34) & 4) == 0) {
        if ((int)local_3b8[1] != *(int *)((longlong)local_3b8 + 0x34)) {
          uVar33 = (uint)((ulonglong)local_3a8 >> 0x10);
          uVar28 = (uint)local_3a8 & 0xffff;
          plVar19 = local_3b8 + 7;
          if ((longlong *)local_3b8[8] != (longlong *)0x0) {
            plVar19 = (longlong *)local_3b8[8];
          }
          iVar31 = *(int *)((longlong)plVar19 +
                           (ulonglong)
                           ((int)local_3b8[9] - 1U &
                           (int)((ulonglong)local_3a8 >> 0x20) + ((uint)local_3a8 << 0x10 | uVar28)
                           + (uVar33 << 0x13 | uVar33 & 0xffff) + (uVar28 >> 4)) * 4);
          if (iVar31 != -1) {
            do {
              lVar26 = *local_3b8 + (longlong)iVar31 * 0x30;
              if (*(undefined8 **)(*local_3b8 + (longlong)iVar31 * 0x30) == local_3a8) {
                if (lVar26 + 0x18 != 0 && lVar26 != 0) {
                  FUN_143d7a398(&local_3c0,lVar26 + 0x18,&local_3a8);
                }
                break;
              }
              iVar31 = *(int *)(lVar26 + 0x28);
            } while (iVar31 != -1);
          }
        }
        lVar26 = local_3b0;
        if ((((local_3b0 != 0) && (cVar16 = FUN_140f47498(&local_3a8), cVar16 == '\0')) &&
            (cVar16 = FUN_144a8fce0(&local_3a8), cVar16 == '\0')) &&
           (cVar16 = FUN_144aa26b8(&local_3a8), cVar16 == '\0')) {
          FUN_143d7a398(&local_3c0,lVar26,&local_3a8);
        }
      }
      plVar19 = local_398;
      if (local_398 != (longlong *)0x0) {
        LOCK();
        plVar23 = local_398 + 1;
        *(int *)plVar23 = (int)*plVar23 + -1;
        UNLOCK();
        if ((int)*plVar23 == 0) {
          (**(code **)*local_398)(local_398);
          LOCK();
          piVar1 = (int *)((longlong)plVar19 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar19 + 0x10))(plVar19);
          }
        }
      }
      plVar22 = plVar22 + 4;
    } while (plVar22 != plVar21);
  }
  iVar31 = DAT_14cb7fde0;
  puVar24 = DAT_14cb7fdd8;
  lVar26 = (longlong)DAT_14cb7fde0;
  if (1 < lVar26) {
    memset(&local_398,0,0x2f0);
    local_3a8 = puVar24;
    local_3a0 = puVar24 + lVar26 * 6 + -6;
    fVar41 = logf((float)iVar31);
    local_398 = (longlong *)CONCAT44(local_398._4_4_,(int)(longlong)(fVar41 + fVar41));
    ppuVar17 = &local_3a8;
    do {
      plVar21 = *ppuVar17;
      plVar19 = ppuVar17[1];
      iVar31 = *(int *)(ppuVar17 + 2);
      iVar36 = (int)((ulonglong)((longlong)plVar19 - (longlong)plVar21) >> 4) * -0x55555555;
      uVar33 = iVar36 + 1;
      plVar23 = plVar21;
      plVar22 = plVar19;
      if (iVar31 != 0) {
LAB_14888ab6f:
        if (8 < (int)uVar33) {
          uVar29 = (ulonglong)(uVar33 >> 1);
          lVar26 = plVar21[uVar29 * 6];
          lVar32 = (plVar21 + uVar29 * 6)[1];
          lVar37 = plVar21[uVar29 * 6 + 2];
          lVar5 = (plVar21 + uVar29 * 6 + 2)[1];
          lVar18 = plVar21[uVar29 * 6 + 4];
          lVar9 = (plVar21 + uVar29 * 6 + 4)[1];
          lVar10 = *plVar21;
          lVar11 = plVar21[1];
          lVar12 = plVar21[2];
          lVar13 = plVar21[3];
          lVar14 = plVar21[5];
          plVar21[uVar29 * 6 + 4] = plVar21[4];
          (plVar21 + uVar29 * 6 + 4)[1] = lVar14;
          plVar21[uVar29 * 6 + 2] = lVar12;
          (plVar21 + uVar29 * 6 + 2)[1] = lVar13;
          plVar21[uVar29 * 6] = lVar10;
          (plVar21 + uVar29 * 6)[1] = lVar11;
          plVar21[4] = lVar18;
          plVar21[5] = lVar9;
          plVar21[2] = lVar37;
          plVar21[3] = lVar5;
          *plVar21 = lVar26;
          plVar21[1] = lVar32;
          plVar35 = plVar22 + 6;
          plVar20 = plVar21;
          do {
            plVar15 = plVar20 + 6;
            plVar30 = plVar20 + 6;
            do {
              plVar39 = plVar30;
              plVar20 = plVar15;
              if (plVar22 < plVar20) break;
              bVar40 = *(uint *)(plVar21 + 1) < *(uint *)(plVar20 + 1);
              if (*(uint *)(plVar21 + 1) == *(uint *)(plVar20 + 1)) {
                bVar40 = *(uint *)((longlong)plVar21 + 0xc) < *(uint *)((longlong)plVar20 + 0xc);
              }
              plVar15 = plVar20 + 6;
              plVar30 = plVar39 + 6;
            } while (!bVar40);
            plVar15 = plVar35 + -0xc;
            do {
              plVar30 = plVar35;
              plVar38 = plVar15;
              plVar35 = plVar30 + -6;
              if (plVar35 <= plVar21) break;
              bVar40 = *(uint *)(plVar30 + -5) < *(uint *)(plVar21 + 1);
              if (*(uint *)(plVar30 + -5) == *(uint *)(plVar21 + 1)) {
                bVar40 = *(uint *)((longlong)plVar30 + -0x24) < *(uint *)((longlong)plVar21 + 0xc);
              }
              plVar15 = plVar38 + -6;
            } while (!bVar40);
            if (plVar35 < plVar20) goto LAB_14888acf3;
            lVar26 = *plVar20;
            lVar32 = plVar20[1];
            lVar37 = plVar20[2];
            lVar5 = plVar20[3];
            lVar18 = plVar20[4];
            lVar9 = plVar20[5];
            lVar10 = *plVar35;
            lVar11 = plVar30[-5];
            lVar12 = plVar30[-4];
            lVar13 = plVar30[-3];
            lVar14 = plVar30[-1];
            plVar20[4] = plVar30[-2];
            plVar20[5] = lVar14;
            plVar20[2] = lVar12;
            plVar20[3] = lVar13;
            *plVar20 = lVar10;
            plVar20[1] = lVar11;
            plVar30[-2] = lVar18;
            plVar30[-1] = lVar9;
            plVar30[-4] = lVar37;
            plVar30[-3] = lVar5;
            *plVar35 = lVar26;
            plVar30[-5] = lVar32;
          } while( true );
        }
        for (; plVar19 = plVar21, plVar23 = plVar21, plVar21 < plVar22; plVar22 = plVar22 + -6) {
          while (plVar35 = plVar19, plVar19 = plVar23 + 6, plVar19 <= plVar22) {
            bVar40 = *(uint *)(plVar35 + 1) < *(uint *)(plVar19 + 1);
            if (*(uint *)(plVar35 + 1) == *(uint *)(plVar19 + 1)) {
              bVar40 = *(uint *)((longlong)plVar35 + 0xc) < *(uint *)((longlong)plVar23 + 0x3c);
            }
            plVar23 = plVar19;
            if (!bVar40) {
              plVar19 = plVar35;
            }
          }
          local_a8 = *plVar35;
          uStack_a0 = plVar35[1];
          local_98 = plVar35[2];
          uStack_90 = plVar35[3];
          local_88 = plVar35[4];
          uStack_80 = plVar35[5];
          lVar13 = local_88;
          lVar14 = uStack_80;
          lVar11 = local_98;
          lVar12 = uStack_90;
          lVar9 = local_a8;
          lVar10 = uStack_a0;
          lVar26 = *plVar22;
          lVar32 = plVar22[1];
          lVar37 = plVar22[2];
          lVar5 = plVar22[3];
          lVar18 = plVar22[5];
          plVar35[4] = plVar22[4];
          plVar35[5] = lVar18;
          plVar35[2] = lVar37;
          plVar35[3] = lVar5;
          *plVar35 = lVar26;
          plVar35[1] = lVar32;
          local_a8._4_4_ = (undefined4)((ulonglong)local_a8 >> 0x20);
          uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
          local_98._4_4_ = (undefined4)((ulonglong)local_98 >> 0x20);
          uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
          local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
          uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
          *(undefined4 *)(plVar22 + 4) = (undefined4)local_88;
          *(undefined4 *)((longlong)plVar22 + 0x24) = local_88._4_4_;
          *(undefined4 *)(plVar22 + 5) = (undefined4)uStack_80;
          *(undefined4 *)((longlong)plVar22 + 0x2c) = uStack_80._4_4_;
          *(undefined4 *)(plVar22 + 2) = (undefined4)local_98;
          *(undefined4 *)((longlong)plVar22 + 0x14) = local_98._4_4_;
          *(undefined4 *)(plVar22 + 3) = (undefined4)uStack_90;
          *(undefined4 *)((longlong)plVar22 + 0x1c) = uStack_90._4_4_;
          *(undefined4 *)plVar22 = (undefined4)local_a8;
          *(undefined4 *)((longlong)plVar22 + 4) = local_a8._4_4_;
          *(undefined4 *)(plVar22 + 1) = (undefined4)uStack_a0;
          *(undefined4 *)((longlong)plVar22 + 0xc) = uStack_a0._4_4_;
          local_a8 = lVar9;
          uStack_a0 = lVar10;
          local_98 = lVar11;
          uStack_90 = lVar12;
          local_88 = lVar13;
          uStack_80 = lVar14;
        }
        goto LAB_14888b24f;
      }
LAB_14888adf1:
      if (uVar33 != 0) {
        iVar31 = (iVar36 - (iVar36 + -1 >> 0x1f)) + -1 >> 1;
        iVar36 = iVar31;
joined_r0x00014888ae18:
        do {
          iVar34 = iVar31 * 2 + 1;
          if (iVar34 < (int)uVar33) {
            iVar25 = iVar31 * 2 + 2;
            if (iVar25 < (int)uVar33) {
              bVar40 = *(uint *)(plVar21 + (longlong)iVar25 * 6 + 1) <
                       *(uint *)(plVar21 + (longlong)iVar34 * 6 + 1);
              if (*(uint *)(plVar21 + (longlong)iVar25 * 6 + 1) ==
                  *(uint *)(plVar21 + (longlong)iVar34 * 6 + 1)) {
                bVar40 = *(uint *)((longlong)plVar21 + (longlong)iVar25 * 0x30 + 0xc) <
                         *(uint *)((longlong)plVar21 + (longlong)iVar34 * 0x30 + 0xc);
              }
              if (!bVar40) {
                iVar34 = iVar25;
              }
            }
            lVar26 = (longlong)iVar31;
            lVar32 = (longlong)iVar34;
            bVar40 = *(uint *)(plVar21 + lVar26 * 6 + 1) < *(uint *)(plVar21 + lVar32 * 6 + 1);
            if (*(uint *)(plVar21 + lVar26 * 6 + 1) == *(uint *)(plVar21 + lVar32 * 6 + 1)) {
              bVar40 = *(uint *)((longlong)plVar21 + lVar26 * 0x30 + 0xc) <
                       *(uint *)((longlong)plVar21 + lVar32 * 0x30 + 0xc);
            }
            if (bVar40) {
              plVar22 = plVar21 + lVar26 * 6;
              plVar19 = plVar21 + lVar32 * 6;
              local_a8 = *plVar22;
              uStack_a0 = plVar22[1];
              local_98 = plVar22[2];
              uStack_90 = plVar22[3];
              local_88 = plVar22[4];
              uStack_80 = plVar22[5];
              lVar13 = local_88;
              lVar14 = uStack_80;
              lVar11 = local_98;
              lVar12 = uStack_90;
              lVar9 = local_a8;
              lVar10 = uStack_a0;
              lVar26 = *plVar19;
              lVar32 = plVar19[1];
              lVar37 = plVar19[2];
              lVar5 = plVar19[3];
              lVar18 = plVar19[5];
              plVar22[4] = plVar19[4];
              plVar22[5] = lVar18;
              plVar22[2] = lVar37;
              plVar22[3] = lVar5;
              *plVar22 = lVar26;
              plVar22[1] = lVar32;
              local_a8._4_4_ = (undefined4)((ulonglong)local_a8 >> 0x20);
              uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
              local_98._4_4_ = (undefined4)((ulonglong)local_98 >> 0x20);
              uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
              local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
              uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
              *(undefined4 *)(plVar19 + 4) = (undefined4)local_88;
              *(undefined4 *)((longlong)plVar19 + 0x24) = local_88._4_4_;
              *(undefined4 *)(plVar19 + 5) = (undefined4)uStack_80;
              *(undefined4 *)((longlong)plVar19 + 0x2c) = uStack_80._4_4_;
              *(undefined4 *)(plVar19 + 2) = (undefined4)local_98;
              *(undefined4 *)((longlong)plVar19 + 0x14) = local_98._4_4_;
              *(undefined4 *)(plVar19 + 3) = (undefined4)uStack_90;
              *(undefined4 *)((longlong)plVar19 + 0x1c) = uStack_90._4_4_;
              *(undefined4 *)plVar19 = (undefined4)local_a8;
              *(undefined4 *)((longlong)plVar19 + 4) = local_a8._4_4_;
              *(undefined4 *)(plVar19 + 1) = (undefined4)uStack_a0;
              *(undefined4 *)((longlong)plVar19 + 0xc) = uStack_a0._4_4_;
              iVar31 = iVar34;
              local_a8 = lVar9;
              uStack_a0 = lVar10;
              local_98 = lVar11;
              uStack_90 = lVar12;
              local_88 = lVar13;
              uStack_80 = lVar14;
              goto joined_r0x00014888ae18;
            }
          }
          bVar40 = iVar36 != 0;
          iVar31 = iVar36 + -1;
          iVar36 = iVar31;
        } while (bVar40);
        if (1 < (int)uVar33) {
          uVar29 = (ulonglong)uVar33 - 1;
          local_a8 = *plVar21;
          uStack_a0 = plVar21[1];
          local_98 = plVar21[2];
          uStack_90 = plVar21[3];
          local_88 = plVar21[4];
          uStack_80 = plVar21[5];
          lVar13 = local_88;
          lVar14 = uStack_80;
          lVar11 = local_98;
          lVar12 = uStack_90;
          lVar9 = local_a8;
          lVar10 = uStack_a0;
          lVar26 = plVar21[uVar29 * 6];
          lVar32 = (plVar21 + uVar29 * 6)[1];
          lVar37 = plVar21[uVar29 * 6 + 2];
          lVar5 = (plVar21 + uVar29 * 6 + 2)[1];
          lVar18 = (plVar21 + uVar29 * 6 + 4)[1];
          plVar21[4] = plVar21[uVar29 * 6 + 4];
          plVar21[5] = lVar18;
          plVar21[2] = lVar37;
          plVar21[3] = lVar5;
          *plVar21 = lVar26;
          plVar21[1] = lVar32;
          local_a8._4_4_ = (undefined4)((ulonglong)local_a8 >> 0x20);
          uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
          local_98._4_4_ = (undefined4)((ulonglong)local_98 >> 0x20);
          uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
          local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
          uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
          plVar22 = plVar21 + uVar29 * 6 + 4;
          *(undefined4 *)plVar22 = (undefined4)local_88;
          *(undefined4 *)((longlong)plVar22 + 4) = local_88._4_4_;
          *(undefined4 *)(plVar22 + 1) = (undefined4)uStack_80;
          *(undefined4 *)((longlong)plVar22 + 0xc) = uStack_80._4_4_;
          plVar22 = plVar21 + uVar29 * 6 + 2;
          *(undefined4 *)plVar22 = (undefined4)local_98;
          *(undefined4 *)((longlong)plVar22 + 4) = local_98._4_4_;
          *(undefined4 *)(plVar22 + 1) = (undefined4)uStack_90;
          *(undefined4 *)((longlong)plVar22 + 0xc) = uStack_90._4_4_;
          plVar22 = plVar21 + uVar29 * 6;
          *(undefined4 *)plVar22 = (undefined4)local_a8;
          *(undefined4 *)((longlong)plVar22 + 4) = local_a8._4_4_;
          *(undefined4 *)(plVar22 + 1) = (undefined4)uStack_a0;
          *(undefined4 *)((longlong)plVar22 + 0xc) = uStack_a0._4_4_;
          local_a8 = lVar9;
          uStack_a0 = lVar10;
          local_98 = lVar11;
          uStack_90 = lVar12;
          local_88 = lVar13;
          uStack_80 = lVar14;
          if (uVar33 != 2) {
            do {
              iVar31 = 0;
              iVar34 = 1;
              iVar36 = 0;
              do {
                lVar26 = (longlong)(iVar31 + 2);
                iVar25 = iVar34;
                if (lVar26 < (longlong)uVar29) {
                  bVar40 = *(uint *)(plVar21 + lVar26 * 6 + 1) <
                           *(uint *)(plVar21 + (longlong)iVar34 * 6 + 1);
                  if (*(uint *)(plVar21 + lVar26 * 6 + 1) ==
                      *(uint *)(plVar21 + (longlong)iVar34 * 6 + 1)) {
                    bVar40 = *(uint *)((longlong)plVar21 + lVar26 * 0x30 + 0xc) <
                             *(uint *)((longlong)plVar21 + (longlong)iVar34 * 0x30 + 0xc);
                  }
                  if (!bVar40) {
                    iVar25 = iVar31 + 2;
                  }
                }
                lVar26 = (longlong)iVar36;
                lVar32 = (longlong)iVar25;
                bVar40 = *(uint *)(plVar21 + lVar26 * 6 + 1) < *(uint *)(plVar21 + lVar32 * 6 + 1);
                if (*(uint *)(plVar21 + lVar26 * 6 + 1) == *(uint *)(plVar21 + lVar32 * 6 + 1)) {
                  bVar40 = *(uint *)((longlong)plVar21 + lVar26 * 0x30 + 0xc) <
                           *(uint *)((longlong)plVar21 + lVar32 * 0x30 + 0xc);
                }
                if (!bVar40) break;
                plVar19 = plVar21 + lVar26 * 6;
                plVar22 = plVar21 + lVar32 * 6;
                lVar26 = *plVar19;
                lVar32 = plVar19[1];
                lVar37 = plVar19[2];
                lVar5 = plVar19[3];
                lVar18 = plVar19[4];
                lVar9 = plVar19[5];
                lVar10 = *plVar22;
                lVar11 = plVar22[1];
                lVar12 = plVar22[2];
                lVar13 = plVar22[3];
                lVar14 = plVar22[5];
                plVar19[4] = plVar22[4];
                plVar19[5] = lVar14;
                plVar19[2] = lVar12;
                plVar19[3] = lVar13;
                *plVar19 = lVar10;
                plVar19[1] = lVar11;
                plVar22[4] = lVar18;
                plVar22[5] = lVar9;
                plVar22[2] = lVar37;
                plVar22[3] = lVar5;
                *plVar22 = lVar26;
                plVar22[1] = lVar32;
                iVar31 = iVar25 * 2;
                iVar34 = iVar25 * 2 + 1;
                iVar36 = iVar25;
              } while ((longlong)iVar34 < (longlong)uVar29);
              uVar2 = uVar29 - 1;
              local_a8 = *plVar21;
              uStack_a0 = plVar21[1];
              local_98 = plVar21[2];
              uStack_90 = plVar21[3];
              local_88 = plVar21[4];
              uStack_80 = plVar21[5];
              lVar13 = local_88;
              lVar14 = uStack_80;
              lVar11 = local_98;
              lVar12 = uStack_90;
              lVar9 = local_a8;
              lVar10 = uStack_a0;
              lVar26 = plVar21[uVar2 * 6];
              lVar32 = (plVar21 + uVar2 * 6)[1];
              lVar37 = plVar21[uVar2 * 6 + 2];
              lVar5 = (plVar21 + uVar2 * 6 + 2)[1];
              lVar18 = (plVar21 + uVar2 * 6 + 4)[1];
              plVar21[4] = plVar21[uVar2 * 6 + 4];
              plVar21[5] = lVar18;
              plVar21[2] = lVar37;
              plVar21[3] = lVar5;
              *plVar21 = lVar26;
              plVar21[1] = lVar32;
              local_a8._4_4_ = (undefined4)((ulonglong)local_a8 >> 0x20);
              uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
              local_98._4_4_ = (undefined4)((ulonglong)local_98 >> 0x20);
              uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
              local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
              uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
              plVar22 = plVar21 + uVar2 * 6 + 4;
              *(undefined4 *)plVar22 = (undefined4)local_88;
              *(undefined4 *)((longlong)plVar22 + 4) = local_88._4_4_;
              *(undefined4 *)(plVar22 + 1) = (undefined4)uStack_80;
              *(undefined4 *)((longlong)plVar22 + 0xc) = uStack_80._4_4_;
              plVar22 = plVar21 + uVar2 * 6 + 2;
              *(undefined4 *)plVar22 = (undefined4)local_98;
              *(undefined4 *)((longlong)plVar22 + 4) = local_98._4_4_;
              *(undefined4 *)(plVar22 + 1) = (undefined4)uStack_90;
              *(undefined4 *)((longlong)plVar22 + 0xc) = uStack_90._4_4_;
              plVar22 = plVar21 + uVar2 * 6;
              *(undefined4 *)plVar22 = (undefined4)local_a8;
              *(undefined4 *)((longlong)plVar22 + 4) = local_a8._4_4_;
              *(undefined4 *)(plVar22 + 1) = (undefined4)uStack_a0;
              *(undefined4 *)((longlong)plVar22 + 0xc) = uStack_a0._4_4_;
              bVar40 = 2 < uVar29;
              uVar29 = uVar2;
              local_a8 = lVar9;
              uStack_a0 = lVar10;
              local_98 = lVar11;
              uStack_90 = lVar12;
              local_88 = lVar13;
              uStack_80 = lVar14;
            } while (bVar40);
          }
        }
      }
LAB_14888b24f:
      ppuVar17 = ppuVar17 + -3;
    } while (&local_3a8 <= ppuVar17);
  }
  if (DAT_14cb7fde0 != 0) {
    puVar27 = DAT_14cb7fdd8 + (longlong)DAT_14cb7fde0 * 6;
    puVar24 = DAT_14cb7fdd8;
    do {
      FUN_148889f8a(*puVar24,local_3c0,puVar24 + 2,*(undefined4 *)(puVar24 + 5));
      puVar24 = puVar24 + 6;
    } while (puVar24 != puVar27);
  }
  iVar31 = DAT_14cb7fde4;
  FUN_143d7a7f1(DAT_14cb7fdd8);
  DAT_14cb7fde0 = 0;
  if ((iVar31 < 0) && (DAT_14cb7fde4 != 0)) {
    FUN_143d7a5f2(0);
  }
  plVar22 = local_3c8;
  DAT_14cb7fdf0 = 0;
  if (DAT_14cb7fdf4 < 0) {
    FUN_14480809c(&DAT_14cb7fde8);
  }
  if ((longlong)(int)plVar22[0x57] != 0) {
    lVar26 = local_3c8[0x56];
    lVar32 = (longlong)(int)plVar22[0x57] * 0x50 + lVar26;
    do {
      uVar33 = DAT_14cb7fdd0;
      lVar37 = (longlong)(int)DAT_14cb7fdd0;
      DAT_14cb7fdd0 = DAT_14cb7fdd0 + 1;
      if (DAT_14cb7fdd4 < DAT_14cb7fdd0) {
        FUN_143d7a83a(uVar33);
      }
      puVar24 = DAT_14cb7fdc8;
      DAT_14cb7fdc8[lVar37 * 0x31] = lVar26;
      puVar24[lVar37 * 0x31 + 0x29] = 0;
      puVar24[lVar37 * 0x31 + 0x2a] = 0xa00000000;
      puVar24[lVar37 * 0x31 + 0x2b] = &PTR_FUN_14b189ef0;
      puVar24[lVar37 * 0x31 + 0x2c] = 0;
      (puVar24 + lVar37 * 0x31 + 0x2c)[1] = 0;
      puVar24[lVar37 * 0x31 + 0x2e] = 0;
      (puVar24 + lVar37 * 0x31 + 0x2e)[1] = 0;
      puVar24[lVar37 * 0x31 + 0x30] = 0;
      puVar24 = DAT_14cb7fdc8;
      if ((longlong)*(int *)(lVar26 + 0x18) != 0) {
        puVar27 = DAT_14cb7fdc8 + lVar37 * 0x31 + 1;
        plVar21 = *(longlong **)(lVar26 + 0x10);
        plVar22 = plVar21 + (longlong)*(int *)(lVar26 + 0x18) * 3;
        do {
          uVar4 = *param_2;
          local_a8 = *plVar21;
          uStack_a0 = plVar21[1];
          local_98 = plVar21[2];
          if (local_98 != 0) {
            LOCK();
            *(int *)(local_98 + 8) = *(int *)(local_98 + 8) + 1;
            UNLOCK();
          }
          fVar41 = (float)FUN_143774bb6(uVar4,&local_a8);
          local_3a8 = (undefined8 *)*plVar21;
          local_3a0 = (undefined8 *)plVar21[1];
          local_398 = (longlong *)plVar21[2];
          if (local_398 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_398 + 1) = (int)local_398[1] + 1;
            UNLOCK();
          }
          local_390 = CONCAT44(local_390._4_4_,fVar41);
          FUN_14889ce4a(puVar27,&local_3a8);
          plVar19 = local_398;
          if (local_398 != (longlong *)0x0) {
            LOCK();
            plVar23 = local_398 + 1;
            *(int *)plVar23 = (int)*plVar23 + -1;
            UNLOCK();
            if ((int)*plVar23 == 0) {
              (**(code **)*local_398)(local_398);
              LOCK();
              piVar1 = (int *)((longlong)plVar19 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar19 + 0x10))(plVar19);
              }
            }
          }
          dVar6 = 0.0;
          if ((longlong)*(int *)(lVar26 + 0x30) != 0) {
            lVar5 = *(longlong *)(lVar26 + 0x28);
            lVar18 = 0;
            do {
              if (*(longlong *)(lVar5 + lVar18) == *plVar21) {
                dVar6 = (double)fVar41;
                dVar7 = *(double *)(lVar5 + 0x28 + lVar18) * dVar6;
                dVar8 = *(double *)(lVar5 + 0x20 + lVar18) * dVar6;
                dVar6 = dVar6 * *(double *)(lVar5 + 0x18 + lVar18);
                goto LAB_14888b482;
              }
              lVar18 = lVar18 + 0x30;
            } while ((longlong)*(int *)(lVar26 + 0x30) * 0x30 != lVar18);
          }
          dVar8 = 0.0;
          dVar7 = 0.0;
LAB_14888b482:
          puVar24[lVar37 * 0x31 + 0x2e] = dVar6 + (double)puVar24[lVar37 * 0x31 + 0x2e];
          puVar24[lVar37 * 0x31 + 0x2f] = dVar8 + (double)puVar24[lVar37 * 0x31 + 0x2f];
          puVar24[lVar37 * 0x31 + 0x30] = dVar7 + (double)puVar24[lVar37 * 0x31 + 0x30];
          local_3c0 = (undefined8 *)*plVar21;
          local_3b8 = (longlong *)plVar21[1];
          local_3b0 = plVar21[2];
          if (local_3b0 != 0) {
            LOCK();
            *(int *)(local_3b0 + 8) = *(int *)(local_3b0 + 8) + 1;
            UNLOCK();
          }
          FUN_147acf6ca(param_2);
          plVar21 = plVar21 + 3;
        } while (plVar21 != plVar22);
      }
      lVar26 = lVar26 + 0x50;
    } while (lVar26 != lVar32);
  }
  if ((longlong)(int)DAT_14cb7fdd0 == 0) {
    uVar33 = 0;
  }
  else {
    puVar27 = DAT_14cb7fdc8 + (longlong)(int)DAT_14cb7fdd0 * 0x31;
    puVar24 = DAT_14cb7fdc8;
    do {
      FUN_148889e00(*puVar24,param_2,puVar24 + 1);
      puVar24 = puVar24 + 0x31;
      uVar33 = DAT_14cb7fdd0;
    } while (puVar24 != puVar27);
  }
  uVar28 = DAT_14cb7fdd4;
  FUN_143d7a9b0(DAT_14cb7fdc8,uVar33);
  DAT_14cb7fdd0 = 0;
  if (((int)uVar28 < 0) && (DAT_14cb7fdd4 != 0)) {
    FUN_143d7a9de();
  }
  if ((longlong)(int)local_3c8[0x4f] != 0) {
    plVar22 = (longlong *)local_3c8[0x4e];
    plVar21 = plVar22 + (longlong)(int)local_3c8[0x4f] * 2;
    do {
      lVar26 = *plVar22;
      if ((lVar26 != 0) && (iVar31 = *(int *)(lVar26 + 0x40), (longlong)iVar31 != 0)) {
        lVar26 = *(longlong *)(lVar26 + 0x38);
        lVar32 = 0;
        do {
          plVar19 = *(longlong **)(lVar26 + lVar32);
          if ((*(byte *)(plVar19 + 0xb) & 4) != 0) {
            (**(code **)(*plVar19 + 0x10))(plVar19,param_2);
          }
          lVar32 = lVar32 + 0x10;
        } while ((longlong)iVar31 * 0x10 != lVar32);
      }
      plVar22 = plVar22 + 2;
    } while (plVar22 != plVar21);
  }
  *(undefined1 *)((longlong)local_3c8 + 0x382) = local_3c9;
  if ((char)local_3c8[0x70] == '\x01') {
    *(undefined1 *)(local_3c8 + 0x70) = 0;
    (**(code **)(*local_3c8 + 0x490))();
  }
  if ((local_70 ^ (ulonglong)auStack_3f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14888acf3:
  local_a8 = *plVar21;
  uStack_a0 = plVar21[1];
  local_98 = plVar21[2];
  uStack_90 = plVar21[3];
  local_88 = plVar21[4];
  uStack_80 = plVar21[5];
  lVar13 = local_88;
  lVar14 = uStack_80;
  lVar11 = local_98;
  lVar12 = uStack_90;
  lVar9 = local_a8;
  lVar10 = uStack_a0;
  lVar26 = *plVar35;
  lVar32 = plVar30[-5];
  lVar37 = plVar30[-4];
  lVar5 = plVar30[-3];
  lVar18 = plVar30[-1];
  plVar21[4] = plVar30[-2];
  plVar21[5] = lVar18;
  plVar21[2] = lVar37;
  plVar21[3] = lVar5;
  *plVar21 = lVar26;
  plVar21[1] = lVar32;
  local_a8._4_4_ = (undefined4)((ulonglong)local_a8 >> 0x20);
  uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
  local_98._4_4_ = (undefined4)((ulonglong)local_98 >> 0x20);
  uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
  local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
  *(undefined4 *)(plVar30 + -2) = (undefined4)local_88;
  *(undefined4 *)((longlong)plVar30 + -0xc) = local_88._4_4_;
  *(undefined4 *)(plVar30 + -1) = (undefined4)uStack_80;
  *(undefined4 *)((longlong)plVar30 + -4) = uStack_80._4_4_;
  *(undefined4 *)(plVar30 + -4) = (undefined4)local_98;
  *(undefined4 *)((longlong)plVar30 + -0x1c) = local_98._4_4_;
  *(undefined4 *)(plVar30 + -3) = (undefined4)uStack_90;
  *(undefined4 *)((longlong)plVar30 + -0x14) = uStack_90._4_4_;
  *(undefined4 *)plVar35 = (undefined4)local_a8;
  *(undefined4 *)((longlong)plVar30 + -0x2c) = local_a8._4_4_;
  *(undefined4 *)(plVar30 + -5) = (undefined4)uStack_a0;
  *(undefined4 *)((longlong)plVar30 + -0x24) = uStack_a0._4_4_;
  iVar31 = iVar31 + -1;
  plVar30 = plVar30 + -0xc;
  local_a8 = lVar9;
  uStack_a0 = lVar10;
  local_98 = lVar11;
  uStack_90 = lVar12;
  local_88 = lVar13;
  uStack_80 = lVar14;
  if ((longlong)plVar38 - (longlong)plVar23 < (longlong)plVar19 - (longlong)plVar39) {
    if (plVar20 < plVar22) {
      *ppuVar17 = plVar20;
      ppuVar17[1] = plVar22;
      *(int *)(ppuVar17 + 2) = iVar31;
      ppuVar17 = ppuVar17 + 3;
    }
    plVar39 = plVar21;
    plVar19 = plVar38;
    if (plVar35 <= plVar21 + 6) goto LAB_14888b24f;
  }
  else {
    if (plVar21 + 6 < plVar35) {
      *ppuVar17 = plVar21;
      ppuVar17[1] = plVar30;
      *(int *)(ppuVar17 + 2) = iVar31;
      ppuVar17 = ppuVar17 + 3;
    }
    plVar21 = plVar20;
    plVar30 = plVar22;
    plVar19 = plVar22;
    if (plVar22 <= plVar20) goto LAB_14888b24f;
  }
  iVar36 = (int)((ulonglong)((longlong)plVar19 - (longlong)plVar39) >> 4) * -0x55555555;
  uVar33 = iVar36 + 1;
  plVar23 = plVar39;
  plVar22 = plVar30;
  if (iVar31 == 0) goto LAB_14888adf1;
  goto LAB_14888ab6f;
}



// FUNCTION 14888b730 FUN_14888b730 body=84 status=ok
// SIG undefined FUN_14888b730(void)

void FUN_14888b730(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(char *)(param_1 + 899) == '\x01') {
    *(undefined1 *)(param_1 + 899) = 0;
    FUN_14888b998();
    iVar1 = *(int *)(param_1 + 0x278);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x270);
      lVar3 = 0;
      do {
        FUN_14888ba22(*(undefined8 *)(lVar2 + lVar3));
        lVar3 = lVar3 + 0x10;
      } while ((longlong)iVar1 * 0x10 != lVar3);
    }
  }
  return;
}



// FUNCTION 14888b784 FUN_14888b784 body=437 status=ok
// SIG undefined FUN_14888b784(void)

void FUN_14888b784(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  char cVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(char *)(param_1 + 0x2c0) == '\x01') {
    FUN_14889fbda(param_1 + 0x2c8);
    if ((longlong)*(int *)(param_1 + 0x2a8) != 0) {
      lVar13 = *(longlong *)(param_1 + 0x2a0);
      lVar12 = (longlong)*(int *)(param_1 + 0x2a8) * 0x58 + lVar13;
      local_68 = param_1 + 0x268;
      local_60 = param_1 + 0x318;
      do {
        if ((longlong)*(int *)(lVar13 + 0x18) != 0) {
          puVar11 = *(undefined8 **)(lVar13 + 0x10);
          lVar9 = (longlong)*(int *)(lVar13 + 0x18) * 0x18;
          do {
            uVar4 = *puVar11;
            uVar5 = (uint)((ulonglong)uVar4 >> 0x10);
            uVar10 = (uint)uVar4 & 0xffff;
            plVar7 = (longlong *)
                     FUN_14889ff74(param_1 + 0x2c8,
                                   ((uint)uVar4 << 0x10 | uVar10) + (int)((ulonglong)uVar4 >> 0x20)
                                   + (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar10 >> 4),puVar11);
            iVar3 = (int)plVar7[1];
            *(uint *)(plVar7 + 1) = iVar3 + 1U;
            if (*(uint *)((longlong)plVar7 + 0xc) < iVar3 + 1U) {
              FUN_1488a036e(plVar7,iVar3);
            }
            *(longlong *)(*plVar7 + (longlong)iVar3 * 8) = lVar13;
            cVar6 = FUN_1469127fc(puVar11);
            if ((cVar6 != '\0') && (cVar6 = FUN_144729dda(local_68), cVar6 != '\0')) {
              lVar8 = FUN_14479d2ce(local_68);
              FUN_1488898ce(lVar8 + 0x558,local_58,lVar8,puVar11);
              FUN_1488a03f4(local_60,local_58);
              plVar7 = local_50;
              if (local_50 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_50 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*local_50)(local_50);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar7 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar7 + 0x10))(plVar7);
                  }
                }
              }
            }
            puVar11 = puVar11 + 3;
            lVar9 = lVar9 + -0x18;
          } while (lVar9 != 0);
        }
        lVar13 = lVar13 + 0x58;
      } while (lVar13 != lVar12);
    }
    *(undefined1 *)(param_1 + 0x2c0) = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14888b93a FUN_14888b93a body=93 status=ok
// SIG undefined FUN_14888b93a(void)

void FUN_14888b93a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(char *)(param_1 + 0x382) == '\x01') {
    *(undefined1 *)(param_1 + 0x380) = 1;
  }
  else if (*(char *)(param_1 + 0x381) == '\0') {
    if ((longlong)*(int *)(param_1 + 0x2a8) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x2a0);
      lVar1 = (longlong)*(int *)(param_1 + 0x2a8) * 0x58;
      do {
        FUN_148889f12(lVar2);
        lVar2 = lVar2 + 0x58;
        lVar1 = lVar1 + -0x58;
      } while (lVar1 != 0);
    }
    *(undefined1 *)(param_1 + 0x381) = 1;
  }
  return;
}



// FUNCTION 14888b998 FUN_14888b998 body=137 status=ok
// SIG undefined FUN_14888b998(void)

void FUN_14888b998(longlong *param_1)

{
  (**(code **)(*param_1 + 0x490))();
  FUN_145d52a07(param_1[0x54],(int)param_1[0x55]);
  *(undefined4 *)(param_1 + 0x55) = 0;
  if (*(int *)((longlong)param_1 + 0x2ac) != 0) {
    FUN_1488a04f8(param_1 + 0x54);
  }
  FUN_14888a85a(param_1);
  FUN_145d529df(param_1[0x56],(int)param_1[0x57]);
  *(undefined4 *)(param_1 + 0x57) = 0;
  if (*(int *)((longlong)param_1 + 700) == 0) {
    return;
  }
  FUN_1488a0528(param_1 + 0x56);
  return;
}



// FUNCTION 14888ba22 FUN_14888ba22 body=149 status=ok
// SIG undefined FUN_14888ba22(void)

void FUN_14888ba22(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar4 = FUN_144729dda(param_1 + 0x48);
  if (cVar4 != '\0') {
    local_38 = FUN_14479d2ce(param_1 + 0x48);
    iVar1 = *(int *)(param_1 + 0x30);
    local_40 = param_1;
    local_30 = param_1 + 0x18;
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x28);
      lVar5 = 0;
      do {
        plVar3 = *(longlong **)(lVar2 + lVar5);
        (**(code **)(*plVar3 + 0x70))(plVar3,&local_40);
        lVar5 = lVar5 + 0x10;
      } while ((longlong)iVar1 * 0x10 != lVar5);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14888bab8 FUN_14888bab8 body=8240 status=ok
// SIG undefined FUN_14888bab8(void)

void FUN_14888bab8(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  wchar_t *param_5)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  byte bVar7;
  undefined4 uVar8;
  undefined2 uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  undefined1 *puVar14;
  undefined2 *puVar15;
  longlong *plVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  undefined8 *puVar20;
  int iVar21;
  uint uVar22;
  wchar_t *pwVar23;
  longlong *plVar24;
  longlong *plVar25;
  undefined2 *puVar26;
  int iVar27;
  undefined2 **ppuVar28;
  ulonglong uVar29;
  longlong lVar30;
  longlong *_Src;
  longlong lVar31;
  uint uVar32;
  longlong lVar33;
  bool bVar34;
  float fVar35;
  undefined1 auStack_2b8 [32];
  wchar_t *local_298;
  longlong *local_290;
  longlong local_288;
  longlong local_280;
  longlong *local_278;
  longlong local_270;
  ulonglong local_268;
  longlong local_260;
  longlong local_258;
  undefined2 *local_250;
  int local_248;
  undefined2 *local_240;
  int local_238;
  undefined2 **local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined4 local_210;
  int local_20c;
  longlong local_208;
  undefined8 uStack_200;
  undefined2 **local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  ulonglong local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 *local_198;
  int local_190;
  undefined8 local_130;
  undefined8 *local_128;
  int local_120;
  undefined4 local_11c;
  undefined2 *local_118;
  undefined8 uStack_110;
  longlong local_108 [2];
  longlong *local_f8;
  uint local_f0;
  uint local_ec;
  int iStack_e8;
  int local_e4;
  undefined1 local_e0 [8];
  undefined1 *local_d8;
  uint local_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  if (param_2 != 0) {
    *(undefined4 *)(param_2 + 0xd8) = 0x3f800000;
    *(undefined4 *)(param_2 + 0xdc) = 0;
    *(undefined4 *)(param_2 + 0xe0) = 0;
    *(undefined4 *)(param_2 + 0xe4) = 0x3f800000;
    pwVar23 = L"-- FLUSHED --";
    if (*(char *)(param_1 + 0x381) == '\0') {
      pwVar23 = L"";
    }
    local_1f8 = *(undefined2 ***)(param_1 + 0x18);
    FUN_1400021e4(&local_1f8,&local_118);
    puVar26 = &DAT_149dfb77a;
    if ((int)uStack_110 != 0) {
      puVar26 = local_118;
    }
    if (*(longlong *)(param_1 + 0xa8) == 0) {
      FUN_140056680(&local_230,&DAT_149e01fe8);
    }
    else {
      local_1f8 = *(undefined2 ***)(*(longlong *)(param_1 + 0xa8) + 0x18);
      FUN_1400021e4(&local_1f8,&local_230);
    }
    local_280 = param_2 + 0xa8;
    ppuVar28 = local_230;
    if ((int)local_228 == 0) {
      ppuVar28 = (undefined2 **)&DAT_149dfb77a;
    }
    local_298 = pwVar23;
    FUN_140002266(&local_1f8,L"GBX INPUT COMPONENT: {c:g}%s::%s{c}  {c:r}%s{c}",ppuVar28,puVar26);
    FUN_1470e5e3a(local_280,&local_1f8);
    if (local_1f8 != (undefined2 **)0x0) {
      FUN_1400020a8();
    }
    if (local_230 != (undefined2 **)0x0) {
      FUN_1400020a8();
    }
    if (local_118 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0x280) != 0) {
      FUN_1410a642a(&local_118,*(undefined8 *)(*(longlong *)(param_1 + 0x280) + 0x18));
      puVar26 = local_118;
      if ((int)uStack_110 == 0) {
        puVar26 = &DAT_149dfb77a;
      }
      FUN_140002266(&local_1f8,L"  Bound Action Handler: [{c:g}%s{c}]",puVar26);
      FUN_1470e5e3a(local_280,&local_1f8);
      if (local_1f8 != (undefined2 **)0x0) {
        FUN_1400020a8();
      }
      if (local_118 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    local_288 = param_2;
    local_270 = param_1;
    if (0 < *(int *)(param_1 + 0x278)) {
      FUN_140056680(&local_1f8,L"  Bound Schema: ");
      if ((longlong)*(int *)(param_1 + 0x278) != 0) {
        plVar25 = *(longlong **)(local_270 + 0x270);
        local_290 = plVar25 + (longlong)*(int *)(param_1 + 0x278) * 2;
        do {
          if (*plVar25 == 0) {
            uVar17 = 0;
          }
          else {
            uVar17 = *(undefined8 *)(*plVar25 + 0x10);
          }
          FUN_1410a642a(&local_208,uVar17);
          FUN_140ba7826(&local_230,L" [{c:g}",&local_208);
          FUN_144a882a8(&local_118,&local_230,L"{c}]");
          iVar27 = (int)uStack_110 + -1;
          if ((int)uStack_110 == 0) {
            iVar27 = 0;
          }
          FUN_1400020e8(&local_1f8,local_118,iVar27);
          if (local_118 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          if (local_230 != (undefined2 **)0x0) {
            FUN_1400020a8();
          }
          if (local_208 != 0) {
            FUN_1400020a8();
          }
          lVar13 = local_288;
          lVar33 = (longlong)*(int *)(*plVar25 + 0x30);
          if (lVar33 != 0) {
            lVar31 = *(longlong *)(*plVar25 + 0x28);
            lVar30 = 0;
            do {
              plVar16 = *(longlong **)(lVar31 + lVar30);
              local_298 = param_5;
              (**(code **)(*plVar16 + 0x58))(plVar16,lVar13,param_3,param_4);
              lVar30 = lVar30 + 0x10;
            } while (lVar33 * 0x10 != lVar30);
          }
          plVar25 = plVar25 + 2;
        } while (plVar25 != local_290);
      }
      FUN_1470e5e3a(local_280,&local_1f8);
      if (local_1f8 != (undefined2 **)0x0) {
        FUN_1400020a8();
      }
    }
    lVar33 = local_270;
    lVar13 = local_288;
    *(undefined8 *)(local_288 + 0xd8) = 0;
    *(undefined1 **)(local_288 + 0xe0) = &DAT_3f8000003f800000;
    local_118 = (undefined2 *)((ulonglong)local_118 & 0xffffffff00000000);
    FUN_140056680(&local_1f8,L"==== BUTTONS ====");
    FUN_147d8f316(local_280,&local_1f8,&local_118);
    if (local_1f8 != (undefined2 **)0x0) {
      FUN_1400020a8();
    }
    fVar4 = *(float *)(lVar13 + 0x2c0);
    *(float *)(lVar13 + 0x2c0) = fVar4 + 15.0;
    local_f8 = (longlong *)0x0;
    local_f0 = 0;
    local_118 = (undefined2 *)0x0;
    uStack_110 = 0;
    local_ec = 0x80;
    iStack_e8 = -1;
    local_e4 = 0;
    local_d8 = (undefined1 *)0x0;
    local_268 = 0;
    local_d0 = 0;
    lVar13 = (longlong)*(int *)(lVar33 + 0x2a8);
    if (lVar13 == 0) {
      fVar35 = 0.0;
    }
    else {
      plVar25 = *(longlong **)(lVar33 + 0x2a0);
      plVar16 = plVar25 + lVar13 * 0xb;
      fVar35 = 0.0;
      local_278 = plVar16;
      do {
        local_208 = 0;
        plVar19 = (longlong *)plVar25[1];
        if (plVar19 != (longlong *)0x0) {
          iVar27 = (int)plVar19[1];
          do {
            if (iVar27 == 0) goto LAB_14888bfb8;
            LOCK();
            iVar12 = (int)plVar19[1];
            bVar34 = iVar27 == iVar12;
            if (bVar34) {
              *(int *)(plVar19 + 1) = iVar27 + 1;
              iVar12 = iVar27;
            }
            iVar27 = iVar12;
            UNLOCK();
          } while (!bVar34);
          if (*plVar25 != 0) {
            if (*(longlong *)(*plVar25 + 0x28) == 0) {
              uVar17 = 0;
            }
            else {
              uVar17 = FUN_14888ea02();
            }
            FUN_144a79b68(&local_208,uVar17);
          }
          LOCK();
          plVar24 = plVar19 + 1;
          *(int *)plVar24 = (int)*plVar24 + -1;
          UNLOCK();
          if ((int)*plVar24 == 0) {
            (**(code **)*plVar19)(plVar19);
            LOCK();
            piVar1 = (int *)((longlong)plVar19 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar19 + 0x10))(plVar19);
            }
          }
        }
LAB_14888bfb8:
        FUN_1400021e4(&local_208,&local_230);
        FUN_147d8f5e6(local_280,&local_1f8,&local_230);
        if ((double)fVar35 <= (double)local_1f8) {
          fVar35 = (float)(double)local_1f8;
        }
        if (local_230 != (undefined2 **)0x0) {
          FUN_1400020a8();
        }
        iVar12 = iStack_e8;
        uVar29 = uStack_110;
        lVar13 = local_208;
        uVar22 = (uint)((ulonglong)local_208 >> 0x10);
        uVar11 = (uint)local_208 & 0xffff;
        uVar22 = ((uint)local_208 << 0x10 | uVar11) + (int)((ulonglong)local_208 >> 0x20) +
                 (uVar22 << 0x13 | uVar22 & 0xffff) + (uVar11 >> 4);
        iVar27 = (int)uStack_110;
        if ((int)uStack_110 != local_e4) {
          puVar14 = local_d8;
          if (local_d8 == (undefined1 *)0x0) {
            puVar14 = local_e0;
          }
          iVar21 = *(int *)(puVar14 + (ulonglong)(local_d0 - 1 & uVar22) * 4);
          while (iVar21 != -1) {
            puVar26 = local_118 + (longlong)iVar21 * 0x3c;
            if (*(longlong *)(local_118 + (longlong)iVar21 * 0x3c) == local_208) {
              if (puVar26 != (undefined2 *)0x0) goto LAB_14888c0b0;
              break;
            }
            iVar21 = *(int *)(puVar26 + 0x38);
          }
        }
        if (local_e4 == 0) {
          uStack_110 = CONCAT44(uStack_110._4_4_,(int)uStack_110 + 1);
          if (uStack_110._4_4_ == iVar27) {
            FUN_1410fd1ac(&local_118,uVar29 & 0xffffffff);
          }
          lVar33 = (longlong)iVar27;
          iVar12 = FUN_144a54ea4(local_108,1);
          plVar16 = local_f8;
          if (local_f8 == (longlong *)0x0) {
            plVar16 = local_108;
          }
          iVar21 = iVar12 + 0x1f;
          if (-1 < iVar12) {
            iVar21 = iVar12;
          }
          bVar7 = (byte)iVar12 & 0x1f;
          puVar2 = (uint *)((longlong)plVar16 + (longlong)(iVar21 >> 5) * 4);
          *puVar2 = *puVar2 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
          iVar12 = iVar27;
        }
        else {
          lVar33 = (longlong)iStack_e8;
          iStack_e8 = *(int *)(local_118 + lVar33 * 0x3c + 2);
          local_e4 = local_e4 + -1;
          if (local_e4 != 0) {
            *(undefined4 *)(local_118 + (longlong)*(int *)(local_118 + lVar33 * 0x3c + 2) * 0x3c) =
                 0xffffffff;
          }
        }
        uVar32 = 1;
        uVar11 = 1 << ((byte)iVar12 & 0x1f);
        plVar16 = local_f8;
        if (local_f8 == (longlong *)0x0) {
          plVar16 = local_108;
        }
        iVar27 = iVar12 + 0x1f;
        if (-1 < iVar12) {
          iVar27 = iVar12;
        }
        local_258 = (longlong)(iVar27 >> 5);
        local_260 = CONCAT44(local_260._4_4_,uVar11);
        puVar2 = (uint *)((longlong)plVar16 + local_258 * 4);
        *puVar2 = *puVar2 | uVar11;
        local_290 = (longlong *)(lVar33 * 0x78);
        local_198 = (undefined8 *)0x0;
        local_1a8 = 0;
        uStack_1a0 = 0;
        local_1b8 = 0;
        uStack_1b0 = 0;
        local_1c8 = 0;
        uStack_1c0 = 0;
        local_1d8 = 0;
        uStack_1d0 = 0;
        local_1e8 = (longlong *)0x0;
        uStack_1e0 = 0;
        local_1f8 = (undefined2 **)0x0;
        uStack_1f0 = (undefined2 **)0x0;
        plVar19 = (longlong *)((longlong)local_290 + (longlong)local_118);
        _Src = (longlong *)(local_118 + lVar33 * 0x3c);
        *plVar19 = lVar13;
        *(undefined1 *)(plVar19 + 1) = 0;
        plVar16 = &uStack_1f0;
        plVar24 = plVar19 + 2;
        for (lVar13 = 10; lVar13 != 0; lVar13 = lVar13 + -1) {
          *plVar24 = *plVar16;
          plVar16 = plVar16 + 1;
          plVar24 = plVar24 + 1;
        }
        plVar19[0xc] = 0;
        plVar19[0xd] = 0x500000000;
        local_198 = (undefined8 *)0x500000000;
        FUN_14889d24e(&uStack_1f0);
        plVar16 = local_278;
        plVar24 = local_290;
        *(undefined4 *)(plVar19 + 0xe) = 0xffffffff;
        uVar11 = (int)uStack_110 - local_e4;
        if (uVar11 != 1) {
          if ((int)uStack_110 != local_e4) {
            puVar14 = local_d8;
            if (local_d8 == (undefined1 *)0x0) {
              puVar14 = local_e0;
            }
            iVar27 = *(int *)(puVar14 + (ulonglong)(local_d0 - 1 & uVar22) * 4);
            if (iVar27 != -1) {
              do {
                puVar26 = local_118 + (longlong)iVar27 * 0x3c;
                if (*(longlong *)(local_118 + (longlong)iVar27 * 0x3c) == *_Src) {
                  FUN_14889d24e(puVar26 + 8);
                  memmove(puVar26,_Src,0x70);
                  if (local_e4 != 0) {
                    *(int *)(local_118 + (longlong)iStack_e8 * 0x3c) = iVar12;
                  }
                  *(undefined4 *)((longlong)local_118 + (longlong)local_290) = 0xffffffff;
                  iVar27 = -1;
                  if (0 < local_e4) {
                    iVar27 = iStack_e8;
                  }
                  *(int *)((longlong)(local_118 + 2) + (longlong)local_290) = iVar27;
                  iStack_e8 = iVar12;
                  local_e4 = local_e4 + 1;
                  plVar19 = local_f8;
                  if (local_f8 == (longlong *)0x0) {
                    plVar19 = local_108;
                  }
                  puVar2 = (uint *)((longlong)plVar19 + local_258 * 4);
                  *puVar2 = *puVar2 & ((uint)local_260 ^ 0xffffffff);
                  plVar24 = local_290;
                  goto LAB_14888c5ec;
                }
                iVar27 = *(int *)(puVar26 + 0x38);
              } while (iVar27 != -1);
            }
          }
          if (3 < uVar11) {
            uVar29 = (ulonglong)(uVar11 & 0xfffffffe) + 0xf;
            lVar13 = 0x3f;
            if (uVar29 != 0) {
              for (; uVar29 >> lVar13 == 0; lVar13 = lVar13 + -1) {
              }
            }
            uVar32 = 1 << ((byte)lVar13 & 0x1f);
          }
        }
        if (((int)uVar11 < 1) || ((int)uVar32 <= (int)local_d0)) {
          uVar22 = local_d0 - 1 & uVar22;
          *(uint *)((longlong)_Src + 0x74) = uVar22;
          puVar14 = local_d8;
          if (local_d8 == (undefined1 *)0x0) {
            puVar14 = local_e0;
          }
          *(undefined4 *)(_Src + 0xe) =
               *(undefined4 *)(puVar14 + ((longlong)(int)local_d0 - 1U & (longlong)(int)uVar22) * 4)
          ;
          puVar14 = local_d8;
          if (local_d8 == (undefined1 *)0x0) {
            puVar14 = local_e0;
          }
          *(int *)(puVar14 + ((longlong)(int)local_d0 - 1U & (longlong)(int)uVar22) * 4) = iVar12;
        }
        else {
          local_d0 = uVar32;
          if ((local_d8 == (undefined1 *)0x0) || (FUN_1446efa72(&local_d8,0,0,4), local_d0 != 0)) {
            uVar22 = local_d0;
            FUN_144a1cbf0(local_e0,0,local_d0,4);
            if (0 < (int)uVar22) {
              uVar11 = 0;
              do {
                puVar14 = local_d8;
                if (local_d8 == (undefined1 *)0x0) {
                  puVar14 = local_e0;
                }
                *(undefined4 *)(puVar14 + (ulonglong)(local_d0 + 0x7fffffff & uVar11) * 4) =
                     0xffffffff;
                uVar11 = uVar11 + 1;
              } while (uVar22 != uVar11);
            }
            local_230 = (undefined2 **)0x100000000;
            local_228 = (undefined2 **)local_108;
            local_220 = (longlong *)0xffffffff;
            local_218 = local_218 & 0xffffffff00000000;
            if (local_f0 != 0) {
              FUN_1449c0562(&local_230);
            }
            local_1f8 = &local_118;
            uStack_1e0 = (ulonglong)local_220;
            local_1d8 = local_218;
            uStack_1f0 = local_230;
            local_1e8 = (longlong *)local_228;
            while (uStack_1e0._4_4_ < (int)local_1e8[3]) {
              puVar26 = *local_1f8;
              lVar13 = (longlong)uStack_1e0._4_4_;
              uVar17 = *(undefined8 *)(puVar26 + lVar13 * 0x3c);
              uVar22 = (uint)((ulonglong)uVar17 >> 0x10);
              uVar11 = (uint)uVar17 & 0xffff;
              uVar29 = (longlong)
                       (int)(((uint)uVar17 << 0x10 | uVar11) + (int)((ulonglong)uVar17 >> 0x20) +
                             (uVar22 << 0x13 | uVar22 & 0xffff) + (uVar11 >> 4)) &
                       (longlong)(int)local_d0 - 1U;
              iVar27 = (int)uVar29;
              *(int *)(puVar26 + lVar13 * 0x3c + 0x3a) = iVar27;
              puVar14 = local_d8;
              if (local_d8 == (undefined1 *)0x0) {
                puVar14 = local_e0;
              }
              *(undefined4 *)(puVar26 + lVar13 * 0x3c + 0x38) =
                   *(undefined4 *)(puVar14 + ((longlong)(int)local_d0 - 1U & uVar29) * 4);
              puVar14 = local_d8;
              if (local_d8 == (undefined1 *)0x0) {
                puVar14 = local_e0;
              }
              *(int *)(puVar14 + ((longlong)iVar27 & (longlong)(int)local_d0 - 1U) * 4) =
                   uStack_1e0._4_4_;
              uStack_1e0 = CONCAT44(uStack_1e0._4_4_,(uint)uStack_1e0 & ~uStack_1f0._4_4_);
              FUN_1449c0562(&uStack_1f0);
            }
          }
        }
LAB_14888c5ec:
        puVar26 = (undefined2 *)((longlong)local_118 + (longlong)plVar24);
LAB_14888c0b0:
        *(byte *)(puVar26 + 4) = *(byte *)(puVar26 + 4) | *(byte *)((longlong)plVar25 + 0x39);
        lVar13 = plVar25[1];
        if (lVar13 == 0) {
LAB_14888c0d6:
          lVar13 = 0;
          lVar33 = 0;
        }
        else {
          iVar27 = *(int *)(lVar13 + 8);
          do {
            if (iVar27 == 0) goto LAB_14888c0d6;
            LOCK();
            iVar12 = *(int *)(lVar13 + 8);
            bVar34 = iVar27 == iVar12;
            if (bVar34) {
              *(int *)(lVar13 + 8) = iVar27 + 1;
              iVar12 = iVar27;
            }
            iVar27 = iVar12;
            UNLOCK();
          } while (!bVar34);
          lVar33 = *plVar25;
        }
        iVar27 = *(int *)(puVar26 + 0x34);
        *(uint *)(puVar26 + 0x34) = iVar27 + 1U;
        if (*(uint *)(puVar26 + 0x36) < iVar27 + 1U) {
          FUN_1488a0558(puVar26 + 8);
        }
        puVar15 = puVar26 + 8;
        if (*(undefined2 **)(puVar26 + 0x30) != (undefined2 *)0x0) {
          puVar15 = *(undefined2 **)(puVar26 + 0x30);
        }
        *(longlong *)(puVar15 + (longlong)iVar27 * 8) = lVar33;
        *(longlong *)(puVar15 + (longlong)iVar27 * 8 + 4) = lVar13;
        plVar25 = plVar25 + 0xb;
      } while (plVar25 != plVar16);
    }
    local_1f8 = (undefined2 **)0x100000000;
    uStack_1f0 = (undefined2 **)local_108;
    local_1e8._0_4_ = 0xffffffff;
    local_1e8._4_4_ = 0;
    uStack_1e0 = uStack_1e0 & 0xffffffff00000000;
    if (local_f0 != 0) {
      FUN_1449c0562(&local_1f8);
      local_268 = (ulonglong)local_f0;
    }
    local_218._0_4_ = (uint)local_1e8;
    local_218._4_4_ = local_1e8._4_4_;
    local_210 = (uint)uStack_1e0;
    local_20c = uStack_1e0._4_4_;
    local_228 = local_1f8;
    local_220 = (longlong *)uStack_1f0;
    local_230 = &local_118;
    if ((local_1e8._4_4_ != (uint)local_268) || (uStack_1f0 != (undefined2 **)local_108)) {
      do {
        puVar18 = (undefined8 *)(*local_230 + (longlong)(int)local_218._4_4_ * 0x3c);
        local_1f8 = (undefined2 **)*puVar18;
        uStack_1f0 = (undefined2 **)CONCAT71(uStack_1f0._1_7_,*(undefined1 *)(puVar18 + 1));
        local_198 = (undefined8 *)0x0;
        puVar20 = (undefined8 *)puVar18[0xc];
        if ((undefined8 *)puVar18[0xc] == (undefined8 *)0x0) {
          puVar20 = puVar18 + 2;
        }
        FUN_14889d0ea(&local_1e8,puVar20,*(undefined4 *)(puVar18 + 0xd));
        uVar5 = *(undefined4 *)(local_288 + 0x2c4);
        FUN_1400021e4(&local_1f8,&local_240);
        puVar26 = &DAT_149dfb77a;
        if (local_238 != 0) {
          puVar26 = local_240;
        }
        uVar17 = 0x67;
        if ((char)uStack_1f0 != '\0') {
          uVar17 = 0x72;
        }
        FUN_140002266(&local_208,L"[{c:%c}%s{c}] ",uVar17,puVar26);
        FUN_1470e5e3a(local_280,&local_208);
        if (local_208 != 0) {
          FUN_1400020a8();
        }
        if (local_240 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        fVar6 = *(float *)(local_288 + 0x2c0);
        *(float *)(local_288 + 0x2c0) = fVar35 + fVar6 + 10.0;
        *(undefined4 *)(local_288 + 0x2c4) = uVar5;
        local_208 = 0;
        uStack_200 = 0;
        puVar20 = local_198;
        if (local_198 == (undefined8 *)0x0) {
          puVar20 = &local_1e8;
        }
        lVar13 = (longlong)local_190;
        if (lVar13 != 0) {
          lVar33 = 0;
          do {
            lVar31 = *(longlong *)(*(longlong *)((longlong)puVar20 + lVar33) + 0x18);
            plVar25 = *(longlong **)(*(longlong *)((longlong)puVar20 + lVar33) + 0x20);
            if (plVar25 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar25 + 1) = (int)plVar25[1] + 1;
              UNLOCK();
            }
            if (lVar31 == 0) {
              uVar17 = 0;
            }
            else {
              uVar17 = *(undefined8 *)(lVar31 + 0x10);
            }
            if (*(longlong *)((longlong)puVar20 + lVar33) != 0) {
              FUN_1410a642a(&local_250,uVar17);
              puVar26 = &DAT_149dfb77a;
              if (local_248 != 0) {
                puVar26 = local_250;
              }
              uVar9 = (**(code **)(**(longlong **)((longlong)puVar20 + lVar33) + 0x60))();
              FUN_140002266(&local_240,L" [{c:%c}%s{c}]",uVar9,puVar26);
              iVar27 = local_238 + -1;
              if (local_238 == 0) {
                iVar27 = 0;
              }
              FUN_1400020e8(&local_208,local_240,iVar27);
              if (local_240 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              if (local_250 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
            }
            if (plVar25 != (longlong *)0x0) {
              LOCK();
              plVar16 = plVar25 + 1;
              *(int *)plVar16 = (int)*plVar16 + -1;
              UNLOCK();
              if ((int)*plVar16 == 0) {
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
            lVar33 = lVar33 + 0x10;
          } while (lVar13 * 0x10 != lVar33);
        }
        FUN_1470e5e3a(local_280,&local_208);
        *(float *)(local_288 + 0x2c0) = fVar6;
        if (local_208 != 0) {
          FUN_1400020a8();
        }
        FUN_14889d24e(&local_1e8);
        local_218._0_4_ = (uint)local_218 & ~local_228._4_4_;
        FUN_1449c0562(&local_228);
      } while (local_230 != &local_118 ||
               (local_220 != local_108 || local_218._4_4_ != (uint)local_268));
    }
    lVar13 = local_288;
    *(float *)(local_288 + 0x2c0) = fVar4;
    local_d0 = 0;
    if (local_d8 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    local_230 = (undefined2 **)0x100000000;
    local_220._0_4_ = 0xffffffff;
    local_220._4_4_ = 0;
    local_218 = (ulonglong)local_218._4_4_ << 0x20;
    local_228 = (undefined2 **)local_108;
    if (local_f0 != 0) {
      FUN_1449c0562(&local_230);
    }
    local_1f8 = &local_118;
    uStack_1f0 = local_230;
    local_1e8 = (longlong *)local_228;
    uStack_1e0._0_4_ = (uint)local_220;
    uStack_1e0._4_4_ = local_220._4_4_;
    local_1d8 = local_218;
    while (uStack_1e0._4_4_ < (int)local_1e8[3]) {
      FUN_14889d24e(*local_1f8 + (longlong)uStack_1e0._4_4_ * 0x3c + 8);
      uStack_1e0._0_4_ = (uint)uStack_1e0 & ~uStack_1f0._4_4_;
      FUN_1449c0562(&uStack_1f0);
    }
    uVar29 = uStack_110 >> 0x20;
    uStack_110 = uStack_110 & 0xffffffff00000000;
    if ((int)uVar29 != 0) {
      FUN_1410fd13e(&local_118,0);
    }
    iStack_e8 = 0xffffffff;
    local_e4 = 0;
    local_f0 = 0;
    if (0x80 < local_ec) {
      local_ec = 0x80;
      FUN_1446efbd8(local_108,0);
    }
    if (local_f8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_118 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(lVar13 + 0xd8) = 0;
    *(undefined1 **)(lVar13 + 0xe0) = &DAT_3f8000003f800000;
    local_118 = (undefined2 *)((ulonglong)local_118 & 0xffffffff00000000);
    FUN_140056680(&local_1f8,L"==== AXES ====");
    FUN_147d8f316(local_280,&local_1f8,&local_118);
    if (local_1f8 != (undefined2 **)0x0) {
      FUN_1400020a8();
    }
    fVar4 = *(float *)(lVar13 + 0x2c0);
    *(float *)(lVar13 + 0x2c0) = fVar4 + 15.0;
    plVar25 = (longlong *)0x0;
    local_f8 = (longlong *)0x0;
    local_f0 = 0;
    local_118 = (undefined2 *)0x0;
    uStack_110 = 0;
    local_ec = 0x80;
    iStack_e8 = -1;
    local_e4 = 0;
    local_d8 = (undefined1 *)0x0;
    local_d0 = 0;
    if ((longlong)*(int *)(local_270 + 0x2b8) == 0) {
      local_1f8 = (undefined2 **)0x100000000;
      uStack_1f0 = (undefined2 **)local_108;
      local_1e8._0_4_ = 0xffffffff;
      local_1e8._4_4_ = 0;
      uStack_1e0._0_4_ = 0;
      fVar35 = 0.0;
    }
    else {
      plVar25 = *(longlong **)(local_270 + 0x2b0);
      local_278 = plVar25 + (longlong)*(int *)(local_270 + 0x2b8) * 10;
      fVar35 = 0.0;
      do {
        local_208 = 0;
        plVar16 = (longlong *)plVar25[1];
        if (plVar16 != (longlong *)0x0) {
          iVar27 = (int)plVar16[1];
          do {
            if (iVar27 == 0) goto LAB_14888c9eb;
            LOCK();
            iVar12 = (int)plVar16[1];
            bVar34 = iVar27 == iVar12;
            if (bVar34) {
              *(int *)(plVar16 + 1) = iVar27 + 1;
              iVar12 = iVar27;
            }
            iVar27 = iVar12;
            UNLOCK();
          } while (!bVar34);
          if (*plVar25 != 0) {
            if (*(longlong *)(*plVar25 + 0x28) == 0) {
              uVar17 = 0;
            }
            else {
              uVar17 = FUN_14888ea02();
            }
            FUN_144a79b68(&local_208,uVar17);
          }
          LOCK();
          plVar19 = plVar16 + 1;
          *(int *)plVar19 = (int)*plVar19 + -1;
          UNLOCK();
          if ((int)*plVar19 == 0) {
            (**(code **)*plVar16)(plVar16);
            LOCK();
            piVar1 = (int *)((longlong)plVar16 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar16 + 0x10))(plVar16);
            }
          }
        }
LAB_14888c9eb:
        FUN_1400021e4(&local_208,&local_230);
        FUN_147d8f5e6(local_280,&local_1f8,&local_230);
        if ((double)fVar35 <= (double)local_1f8) {
          fVar35 = (float)(double)local_1f8;
        }
        if (local_230 != (undefined2 **)0x0) {
          FUN_1400020a8();
        }
        iVar12 = iStack_e8;
        uVar29 = uStack_110;
        lVar33 = local_208;
        uVar22 = (uint)((ulonglong)local_208 >> 0x10);
        uVar11 = (uint)local_208 & 0xffff;
        uVar22 = ((uint)local_208 << 0x10 | uVar11) + (int)((ulonglong)local_208 >> 0x20) +
                 (uVar22 << 0x13 | uVar22 & 0xffff) + (uVar11 >> 4);
        iVar27 = (int)uStack_110;
        if ((int)uStack_110 != local_e4) {
          puVar14 = local_d8;
          if (local_d8 == (undefined1 *)0x0) {
            puVar14 = local_e0;
          }
          iVar21 = *(int *)(puVar14 + (ulonglong)(local_d0 - 1 & uVar22) * 4);
          while (iVar21 != -1) {
            puVar26 = local_118 + (longlong)iVar21 * 0x74;
            if (*(longlong *)(local_118 + (longlong)iVar21 * 0x74) == local_208) {
              lVar13 = local_288;
              if (puVar26 != (undefined2 *)0x0) goto LAB_14888cea5;
              break;
            }
            iVar21 = *(int *)(puVar26 + 0x70);
          }
        }
        if (local_e4 == 0) {
          uStack_110 = CONCAT44(uStack_110._4_4_,(int)uStack_110 + 1);
          if (uStack_110._4_4_ == iVar27) {
            FUN_1404f0360(&local_118,uVar29 & 0xffffffff);
          }
          lVar31 = (longlong)iVar27;
          iVar12 = FUN_144a54ea4(local_108,1);
          plVar16 = local_f8;
          if (local_f8 == (longlong *)0x0) {
            plVar16 = local_108;
          }
          iVar21 = iVar12 + 0x1f;
          if (-1 < iVar12) {
            iVar21 = iVar12;
          }
          bVar7 = (byte)iVar12 & 0x1f;
          puVar2 = (uint *)((longlong)plVar16 + (longlong)(iVar21 >> 5) * 4);
          *puVar2 = *puVar2 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
          iVar12 = iVar27;
        }
        else {
          lVar31 = (longlong)iStack_e8;
          iStack_e8 = *(int *)(local_118 + lVar31 * 0x74 + 2);
          local_e4 = local_e4 + -1;
          if (local_e4 != 0) {
            *(undefined4 *)(local_118 + (longlong)*(int *)(local_118 + lVar31 * 0x74 + 2) * 0x74) =
                 0xffffffff;
          }
        }
        puVar26 = local_118;
        uVar11 = 1;
        uVar32 = 1 << ((byte)iVar12 & 0x1f);
        plVar16 = local_f8;
        if (local_f8 == (longlong *)0x0) {
          plVar16 = local_108;
        }
        iVar27 = iVar12 + 0x1f;
        if (-1 < iVar12) {
          iVar27 = iVar12;
        }
        local_260 = (longlong)(iVar27 >> 5);
        puVar2 = (uint *)((longlong)plVar16 + local_260 * 4);
        *puVar2 = *puVar2 | uVar32;
        local_290 = (longlong *)(local_118 + lVar31 * 0x74);
        *(longlong *)(local_118 + lVar31 * 0x74) = lVar33;
        *(undefined8 *)(local_118 + lVar31 * 0x74 + 0x68) = 0;
        local_130 = 0;
        *(undefined8 *)(local_118 + lVar31 * 0x74 + 0x6c) = 0x500000000;
        local_128 = (undefined8 *)0x500000000;
        FUN_143d7ac2c(&local_1f8);
        lVar13 = local_288;
        *(undefined4 *)(puVar26 + lVar31 * 0x74 + 0x70) = 0xffffffff;
        uVar10 = (int)uStack_110 - local_e4;
        if (uVar10 != 1) {
          if ((int)uStack_110 != local_e4) {
            puVar14 = local_d8;
            if (local_d8 == (undefined1 *)0x0) {
              puVar14 = local_e0;
            }
            iVar27 = *(int *)(puVar14 + (ulonglong)(local_d0 - 1 & uVar22) * 4);
            if (iVar27 != -1) {
              do {
                puVar26 = local_118 + (longlong)iVar27 * 0x74;
                if (*(longlong *)(local_118 + (longlong)iVar27 * 0x74) == *local_290) {
                  FUN_143d7ac2c(puVar26 + 4);
                  memmove(puVar26,local_290,0xe0);
                  if (local_e4 != 0) {
                    *(int *)(local_118 + (longlong)iStack_e8 * 0x74) = iVar12;
                  }
                  *(undefined4 *)(local_118 + lVar31 * 0x74) = 0xffffffff;
                  iVar27 = -1;
                  if (0 < local_e4) {
                    iVar27 = iStack_e8;
                  }
                  *(int *)(local_118 + lVar31 * 0x74 + 2) = iVar27;
                  iStack_e8 = iVar12;
                  local_e4 = local_e4 + 1;
                  plVar16 = local_f8;
                  if (local_f8 == (longlong *)0x0) {
                    plVar16 = local_108;
                  }
                  puVar2 = (uint *)((longlong)plVar16 + local_260 * 4);
                  *puVar2 = *puVar2 & (uVar32 ^ 0xffffffff);
                  lVar13 = local_288;
                  goto LAB_14888ce95;
                }
                iVar27 = *(int *)(puVar26 + 0x70);
              } while (iVar27 != -1);
            }
          }
          if (3 < uVar10) {
            uVar29 = (ulonglong)(uVar10 & 0xfffffffe) + 0xf;
            lVar33 = 0x3f;
            if (uVar29 != 0) {
              for (; uVar29 >> lVar33 == 0; lVar33 = lVar33 + -1) {
              }
            }
            uVar11 = 1 << ((byte)lVar33 & 0x1f);
          }
        }
        if (((int)uVar10 < 1) || ((int)uVar11 <= (int)local_d0)) {
          uVar22 = local_d0 - 1 & uVar22;
          *(uint *)((longlong)local_290 + 0xe4) = uVar22;
          puVar14 = local_d8;
          if (local_d8 == (undefined1 *)0x0) {
            puVar14 = local_e0;
          }
          *(undefined4 *)(local_290 + 0x1c) =
               *(undefined4 *)(puVar14 + ((longlong)(int)local_d0 - 1U & (longlong)(int)uVar22) * 4)
          ;
          puVar14 = local_d8;
          if (local_d8 == (undefined1 *)0x0) {
            puVar14 = local_e0;
          }
          *(int *)(puVar14 + ((longlong)(int)local_d0 - 1U & (longlong)(int)uVar22) * 4) = iVar12;
        }
        else {
          local_d0 = uVar11;
          if ((local_d8 == (undefined1 *)0x0) || (FUN_1446efa72(&local_d8,0,0), local_d0 != 0)) {
            uVar22 = local_d0;
            FUN_144a1cbf0(local_e0,0,local_d0);
            if (0 < (int)uVar22) {
              uVar11 = 0;
              do {
                puVar14 = local_d8;
                if (local_d8 == (undefined1 *)0x0) {
                  puVar14 = local_e0;
                }
                *(undefined4 *)(puVar14 + (ulonglong)(local_d0 + 0x7fffffff & uVar11) * 4) =
                     0xffffffff;
                uVar11 = uVar11 + 1;
              } while (uVar22 != uVar11);
            }
            local_230 = (undefined2 **)0x100000000;
            local_228 = (undefined2 **)local_108;
            local_220._0_4_ = 0xffffffff;
            local_220._4_4_ = 0;
            local_218 = local_218 & 0xffffffff00000000;
            if (local_f0 != 0) {
              FUN_1449c0562(&local_230);
            }
            local_1f8 = &local_118;
            uStack_1e0._0_4_ = (uint)local_220;
            uStack_1e0._4_4_ = local_220._4_4_;
            local_1d8 = local_218;
            uStack_1f0 = local_230;
            local_1e8 = (longlong *)local_228;
            while (uStack_1e0._4_4_ < (int)local_1e8[3]) {
              puVar26 = *local_1f8;
              lVar33 = (longlong)uStack_1e0._4_4_;
              uVar17 = *(undefined8 *)(puVar26 + lVar33 * 0x74);
              uVar22 = (uint)((ulonglong)uVar17 >> 0x10);
              uVar11 = (uint)uVar17 & 0xffff;
              uVar29 = (longlong)
                       (int)(((uint)uVar17 << 0x10 | uVar11) + (int)((ulonglong)uVar17 >> 0x20) +
                             (uVar22 << 0x13 | uVar22 & 0xffff) + (uVar11 >> 4)) &
                       (longlong)(int)local_d0 - 1U;
              iVar27 = (int)uVar29;
              *(int *)(puVar26 + lVar33 * 0x74 + 0x72) = iVar27;
              puVar14 = local_d8;
              if (local_d8 == (undefined1 *)0x0) {
                puVar14 = local_e0;
              }
              *(undefined4 *)(puVar26 + lVar33 * 0x74 + 0x70) =
                   *(undefined4 *)(puVar14 + ((longlong)(int)local_d0 - 1U & uVar29) * 4);
              puVar14 = local_d8;
              if (local_d8 == (undefined1 *)0x0) {
                puVar14 = local_e0;
              }
              *(int *)(puVar14 + ((longlong)iVar27 & (longlong)(int)local_d0 - 1U) * 4) =
                   uStack_1e0._4_4_;
              uStack_1e0._0_4_ = (uint)uStack_1e0 & ~uStack_1f0._4_4_;
              FUN_1449c0562(&uStack_1f0);
            }
          }
        }
LAB_14888ce95:
        puVar26 = local_118 + lVar31 * 0x74;
LAB_14888cea5:
        iVar27 = *(int *)(puVar26 + 0x6c);
        uVar22 = iVar27 + 1;
        *(uint *)(puVar26 + 0x6c) = uVar22;
        if (*(uint *)(puVar26 + 0x6e) < uVar22) {
          FUN_143d7ad3e(puVar26 + 4);
        }
        puVar15 = *(undefined2 **)(puVar26 + 0x68);
        if (*(undefined2 **)(puVar26 + 0x68) == (undefined2 *)0x0) {
          puVar15 = puVar26 + 4;
        }
        puVar3 = (undefined4 *)(puVar15 + (longlong)iVar27 * 0x14);
        FUN_143d7ad35(puVar3);
        plVar16 = (longlong *)plVar25[1];
        if (plVar16 == (longlong *)0x0) {
LAB_14888cf0a:
          plVar16 = (longlong *)0x0;
          lVar33 = 0;
        }
        else {
          iVar27 = (int)plVar16[1];
          do {
            if (iVar27 == 0) goto LAB_14888cf0a;
            LOCK();
            iVar12 = (int)plVar16[1];
            bVar34 = iVar27 == iVar12;
            if (bVar34) {
              *(int *)(plVar16 + 1) = iVar27 + 1;
              iVar12 = iVar27;
            }
            iVar27 = iVar12;
            UNLOCK();
          } while (!bVar34);
          lVar33 = *plVar25;
        }
        *(longlong *)(puVar3 + 6) = lVar33;
        plVar19 = *(longlong **)(puVar3 + 8);
        if (plVar16 == plVar19) {
          if (plVar16 != (longlong *)0x0) {
            LOCK();
            plVar19 = plVar16 + 1;
            *(int *)plVar19 = (int)*plVar19 + -1;
            UNLOCK();
            if ((int)*plVar19 == 0) {
              (**(code **)*plVar16)(plVar16);
              LOCK();
              piVar1 = (int *)((longlong)plVar16 + 0xc);
              *piVar1 = *piVar1 + -1;
              iVar27 = *piVar1;
              UNLOCK();
              plVar19 = plVar16;
              goto joined_r0x00014888cf5a;
            }
          }
        }
        else {
          *(longlong **)(puVar3 + 8) = plVar16;
          if (plVar19 != (longlong *)0x0) {
            LOCK();
            plVar16 = plVar19 + 1;
            *(int *)plVar16 = (int)*plVar16 + -1;
            UNLOCK();
            if ((int)*plVar16 == 0) {
              (**(code **)*plVar19)(plVar19);
              LOCK();
              piVar1 = (int *)((longlong)plVar19 + 0xc);
              *piVar1 = *piVar1 + -1;
              iVar27 = *piVar1;
              UNLOCK();
joined_r0x00014888cf5a:
              if (iVar27 == 0) {
                (**(code **)(*plVar19 + 0x10))(plVar19);
              }
            }
          }
        }
        *(longlong *)(puVar3 + 4) = plVar25[9];
        uVar5 = *(undefined4 *)((longlong)plVar25 + 0x3c);
        lVar33 = plVar25[8];
        uVar8 = *(undefined4 *)((longlong)plVar25 + 0x44);
        *puVar3 = (int)plVar25[7];
        puVar3[1] = uVar5;
        puVar3[2] = (int)lVar33;
        puVar3[3] = uVar8;
        plVar25 = plVar25 + 10;
      } while (plVar25 != local_278);
      local_1f8 = (undefined2 **)0x100000000;
      uStack_1f0 = (undefined2 **)local_108;
      local_1e8._0_4_ = 0xffffffff;
      local_1e8._4_4_ = 0;
      uStack_1e0._0_4_ = 0;
      if (local_f0 == 0) {
        plVar25 = (longlong *)0x0;
      }
      else {
        FUN_1449c0562(&local_1f8);
        plVar25 = (longlong *)(ulonglong)local_f0;
      }
    }
    local_218._0_4_ = (uint)local_1e8;
    local_218._4_4_ = local_1e8._4_4_;
    local_210 = (uint)uStack_1e0;
    local_20c = uStack_1e0._4_4_;
    local_228 = local_1f8;
    local_220 = (longlong *)uStack_1f0;
    local_230 = &local_118;
    if ((local_1e8._4_4_ != (uint)plVar25) ||
       (plVar16 = local_108, uStack_1f0 != (undefined2 **)local_108)) {
      local_290 = local_108;
      local_278 = plVar25;
      do {
        puVar26 = *local_230;
        lVar33 = (longlong)(int)local_218._4_4_;
        local_1f8 = *(undefined2 ***)(puVar26 + lVar33 * 0x74);
        local_128 = (undefined8 *)0x0;
        iVar27 = *(int *)(puVar26 + lVar33 * 0x74 + 0x6c);
        local_120 = iVar27;
        if (iVar27 == 0) {
          local_11c = 5;
        }
        else {
          puVar15 = puVar26 + lVar33 * 0x74 + 4;
          if (*(undefined2 **)(puVar26 + lVar33 * 0x74 + 0x68) != (undefined2 *)0x0) {
            puVar15 = *(undefined2 **)(puVar26 + lVar33 * 0x74 + 0x68);
          }
          FUN_143d7aa1e(&uStack_1f0,iVar27);
          puVar20 = local_128;
          if (local_128 == (undefined8 *)0x0) {
            puVar20 = &uStack_1f0;
          }
          FUN_143d7ab59(puVar20,puVar15,iVar27);
        }
        uVar5 = *(undefined4 *)(lVar13 + 0x2c4);
        FUN_1400021e4(&local_1f8,&local_240);
        puVar26 = &DAT_149dfb77a;
        if (local_238 != 0) {
          puVar26 = local_240;
        }
        FUN_140002266(&local_208,L"[{c:w}%s{c}] ",puVar26);
        FUN_1470e5e3a(local_280,&local_208);
        if (local_208 != 0) {
          FUN_1400020a8();
        }
        if (local_240 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        fVar6 = *(float *)(lVar13 + 0x2c0);
        *(float *)(lVar13 + 0x2c0) = fVar35 + fVar6 + 10.0;
        *(undefined4 *)(lVar13 + 0x2c4) = uVar5;
        local_208 = 0;
        uStack_200 = 0;
        puVar20 = local_128;
        if (local_128 == (undefined8 *)0x0) {
          puVar20 = &uStack_1f0;
        }
        lVar13 = (longlong)local_120;
        if (lVar13 != 0) {
          lVar33 = 0;
          do {
            if (*(longlong *)((longlong)puVar20 + lVar33 + 0x18) != 0) {
              local_298 = *(wchar_t **)((longlong)puVar20 + lVar33 + 0x10);
              FUN_140002266(&local_250,L"X=%3.3f Y=%3.3f Z=%3.3f",
                            *(undefined8 *)((longlong)puVar20 + lVar33),
                            *(undefined8 *)((longlong)puVar20 + lVar33 + 8));
              puVar26 = &DAT_149dfb77a;
              if (local_248 != 0) {
                puVar26 = local_250;
              }
              uVar9 = (**(code **)(**(longlong **)((longlong)puVar20 + lVar33 + 0x18) + 0x60))();
              FUN_140002266(&local_240,L" [{c:%c}%s{c}]",uVar9,puVar26);
              iVar27 = local_238 + -1;
              if (local_238 == 0) {
                iVar27 = 0;
              }
              FUN_1400020e8(&local_208,local_240,iVar27);
              if (local_240 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              if (local_250 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
            }
            lVar33 = lVar33 + 0x28;
          } while (lVar13 * 0x28 != lVar33);
        }
        FUN_1470e5e3a(local_280,&local_208);
        lVar13 = local_288;
        *(float *)(local_288 + 0x2c0) = fVar6;
        if (local_208 != 0) {
          FUN_1400020a8();
        }
        FUN_143d7ac2c(&uStack_1f0);
        local_218._0_4_ = (uint)local_218 & ~local_228._4_4_;
        FUN_1449c0562(&local_228);
        plVar16 = local_290;
      } while (local_230 != &local_118 ||
               (local_220 != local_290 || local_218._4_4_ != (uint)local_278));
    }
    *(float *)(lVar13 + 0x2c0) = fVar4;
    local_d0 = 0;
    if (local_d8 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    local_230 = (undefined2 **)0x100000000;
    local_220 = (longlong *)0xffffffff;
    local_218 = (ulonglong)local_218._4_4_ << 0x20;
    local_228 = (undefined2 **)plVar16;
    if (local_f0 != 0) {
      FUN_1449c0562(&local_230);
    }
    local_1f8 = &local_118;
    uStack_1f0 = local_230;
    local_1e8 = (longlong *)local_228;
    uStack_1e0 = (ulonglong)local_220;
    uVar29 = uStack_1e0;
    local_1d8 = local_218;
    uStack_1e0._4_4_ = (int)((ulonglong)local_220 >> 0x20);
    if (uStack_1e0._4_4_ < (int)local_228[3]) {
      iVar27 = uStack_1e0._4_4_;
      uStack_1e0 = uVar29;
      do {
        FUN_143d7ac2c(*local_1f8 + (longlong)iVar27 * 0x74 + 4);
        uStack_1e0 = CONCAT44(uStack_1e0._4_4_,(uint)uStack_1e0 & ~uStack_1f0._4_4_);
        FUN_1449c0562(&uStack_1f0);
        iVar27 = uStack_1e0._4_4_;
        uVar29 = uStack_1e0;
      } while (uStack_1e0._4_4_ < (int)local_1e8[3]);
    }
    uStack_1e0 = uVar29;
    uVar29 = uStack_110 >> 0x20;
    uStack_110 = uStack_110 & 0xffffffff00000000;
    if ((int)uVar29 != 0) {
      FUN_140032aa6(&local_118,0);
    }
    iStack_e8 = 0xffffffff;
    local_e4 = 0;
    local_f0 = 0;
    if (0x80 < local_ec) {
      local_ec = 0x80;
      FUN_1446efbd8(plVar16,0);
    }
    if (local_f8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_118 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_c0 ^ (ulonglong)auStack_2b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14888daea FUN_14888daea body=44 status=ok
// SIG undefined FUN_14888daea(void)

void FUN_14888daea(longlong *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x490))();
  FUN_14888db16(param_1);
  FUN_140674d22(param_1,param_2);
  return;
}



// FUNCTION 14888db16 FUN_14888db16 body=90 status=ok
// SIG undefined FUN_14888db16(void)

void FUN_14888db16(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x290) != 0) {
    if (*(longlong *)(param_1 + 0x388) != 0) {
      FUN_14480f766(*(longlong *)(param_1 + 0x290) + 0x18);
    }
    if (*(longlong *)(param_1 + 0x390) != 0) {
      FUN_14480f766(*(longlong *)(param_1 + 0x290) + 0x30);
    }
    *(undefined8 *)(param_1 + 0x388) = 0;
    *(undefined8 *)(param_1 + 0x390) = 0;
  }
  return;
}



// FUNCTION 14888db70 FUN_14888db70 body=254 status=ok
// SIG undefined FUN_14888db70(void)

undefined8
FUN_14888db70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b40cef0;
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
  *local_48 = &PTR_FUN_14b40ce80;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1488a05c8(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14888dc70 FUN_14888dc70 body=167 status=ok
// SIG undefined FUN_14888dc70(void)

void FUN_14888dc70(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  int *piVar2;
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  if (param_2 != 0) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    piVar2 = (int *)FUN_1488a0cfc(param_1 + 0x328,uVar1 >> 0x10 ^ uVar1,&local_20);
    if (((piVar2[1] != 0 || *piVar2 != 0) || piVar2[2] != 0) || piVar2[3] != 0) {
      FUN_1488878cc(param_1 + 0x198,local_20,1);
      piVar2[0] = 0;
      piVar2[1] = 0;
      piVar2[2] = 0;
      piVar2[3] = 0;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14888dd18 FUN_14888dd18 body=254 status=ok
// SIG undefined FUN_14888dd18(void)

undefined8
FUN_14888dd18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b40cfd0;
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
  *local_48 = &PTR_FUN_14b40cf60;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1488a0962(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14888de18 FUN_14888de18 body=351 status=ok
// SIG undefined FUN_14888de18(void)

void FUN_14888de18(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  undefined4 local_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar4 = local_80;
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x328);
    lVar2 = param_1 + 0x338;
    local_70 = 0x100000000;
    local_60 = 0xffffffff;
    uStack_58 = 0;
    uStack_68 = lVar2;
    if (*(int *)(param_1 + 0x350) == 0) {
      iVar7 = 0;
    }
    else {
      FUN_1449c0562(&local_70);
      iVar7 = *(int *)(param_1 + 0x350);
    }
    uStack_78 = CONCAT44(uStack_54,uStack_58);
    local_80 = local_60;
    uVar4 = local_80;
    local_90 = (undefined4)local_70;
    uStack_8c = local_70._4_4_;
    uStack_88 = (undefined4)uStack_68;
    uStack_84 = uStack_68._4_4_;
    local_80._4_4_ = (int)((ulonglong)local_60 >> 0x20);
    local_98 = plVar1;
    if ((local_80._4_4_ != iVar7) || (uStack_68 != lVar2)) {
      iVar5 = local_80._4_4_;
      local_80 = uVar4;
      do {
        lVar3 = *local_98;
        lVar6 = (longlong)iVar5 * 0x20;
        if (((*(int *)(lVar3 + 0xc + lVar6) != 0 || *(int *)(lVar3 + 8 + lVar6) != 0) ||
            *(int *)(lVar3 + 0x10 + lVar6) != 0) || *(int *)(lVar3 + 0x14 + lVar6) != 0) {
          FUN_1488878cc(param_1 + 0x198,*(undefined8 *)(lVar3 + lVar6),1);
          *(undefined8 *)(lVar3 + lVar6 + 8) = 0;
          *(undefined8 *)(lVar3 + lVar6 + 0x10) = 0;
        }
        local_80 = CONCAT44(local_80._4_4_,(uint)local_80 & ~uStack_8c);
        FUN_1449c0562(&local_90);
        iVar5 = local_80._4_4_;
        uVar4 = local_80;
      } while (local_98 != plVar1 ||
               (CONCAT44(uStack_84,uStack_88) != lVar2 || local_80._4_4_ != iVar7));
    }
  }
  local_80 = uVar4;
  if ((local_50 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14888df78 FUN_14888df78 body=144 status=ok
// SIG undefined FUN_14888df78(void)

bool FUN_14888df78(longlong param_1,longlong param_2,ulonglong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  undefined1 auStack_38 [32];
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar9 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
  uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
  local_18 = param_3;
  piVar8 = (int *)FUN_1488a0cfc(param_1 + 0x328,uVar9 >> 0x10 ^ uVar9,&local_18);
  iVar1 = piVar8[1];
  iVar2 = *piVar8;
  iVar3 = piVar8[2];
  iVar4 = piVar8[3];
  if (((iVar1 == 0 && iVar2 == 0) && iVar3 == 0) && iVar4 == 0) {
    iVar5 = *(int *)(param_2 + 0x3c);
    iVar6 = *(int *)(param_2 + 0x40);
    iVar7 = *(int *)(param_2 + 0x44);
    *piVar8 = *(int *)(param_2 + 0x38);
    piVar8[1] = iVar5;
    piVar8[2] = iVar6;
    piVar8[3] = iVar7;
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return ((iVar1 == 0 && iVar2 == 0) && iVar3 == 0) && iVar4 == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14888e00a FUN_14888e00a body=72 status=ok
// SIG undefined FUN_14888e00a(void)

void FUN_14888e00a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_14888e052();
  if (cVar1 == '\0') {
    return;
  }
  FUN_1488878cc(param_1 + 0x198,param_3,1);
  FUN_14888e126(param_1,param_2,param_3);
  return;
}



// FUNCTION 14888e052 FUN_14888e052 body=212 status=ok
// SIG undefined FUN_14888e052(void)

undefined4 FUN_14888e052(longlong param_1,longlong param_2,ulonglong param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x330) != *(int *)(param_1 + 0x35c)) {
    uVar1 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    lVar2 = param_1 + 0x360;
    if (*(longlong *)(param_1 + 0x368) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x368);
    }
    iVar3 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x370) - 1U & (uVar1 >> 0x10 ^ uVar1)) *
                             4);
    if (iVar3 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 0x328) + (longlong)iVar3 * 0x20;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x328) + (longlong)iVar3 * 0x20) == param_3) {
          if ((lVar2 + 8U & 0xfffffffffffffff7) == 0) {
            return 0;
          }
          uVar1 = *(uint *)(lVar2 + 8) ^ *(uint *)(param_2 + 0x38);
          return CONCAT31((int3)(uVar1 >> 8),
                          *(int *)(lVar2 + 0x14) == *(int *)(param_2 + 0x44) &&
                          (*(int *)(lVar2 + 0x10) == *(int *)(param_2 + 0x40) &&
                          (*(int *)(lVar2 + 0xc) == *(int *)(param_2 + 0x3c) && uVar1 == 0)));
        }
        iVar3 = *(int *)(lVar2 + 0x18);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 14888e126 FUN_14888e126 body=156 status=ok
// SIG undefined FUN_14888e126(void)

void FUN_14888e126(longlong param_1,longlong param_2,ulonglong param_3)

{
  int *piVar1;
  uint uVar2;
  undefined1 auStack_38 [32];
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar2 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  local_18 = param_3;
  piVar1 = (int *)FUN_1488a0cfc(param_1 + 0x328,uVar2 >> 0x10 ^ uVar2,&local_18);
  if ((((*piVar1 == *(int *)(param_2 + 0x38)) && (piVar1[1] == *(int *)(param_2 + 0x3c))) &&
      (piVar1[2] == *(int *)(param_2 + 0x40))) && (piVar1[3] == *(int *)(param_2 + 0x44))) {
    piVar1[0] = 0;
    piVar1[1] = 0;
    piVar1[2] = 0;
    piVar1[3] = 0;
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14888e1c4 FUN_14888e1c4 body=38 status=ok
// SIG undefined FUN_14888e1c4(void)

void FUN_14888e1c4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140cbef6c(&DAT_14cb7fe58);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_14b18a210;
  return;
}



// FUNCTION 14888e1ea FUN_14888e1ea body=44 status=ok
// SIG undefined FUN_14888e1ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14888e1ea(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb7fe64 = _DAT_14cb7fe64 + -1;
  *param_1 = DAT_14cb7fe58;
  DAT_14cb7fe58 = param_1;
  return;
}



// FUNCTION 14888e216 FUN_14888e216 body=38 status=ok
// SIG undefined FUN_14888e216(void)

void FUN_14888e216(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14b18a210;
  return;
}



// FUNCTION 14888e23c FUN_14888e23c body=22 status=ok
// SIG undefined FUN_14888e23c(void)

undefined8 FUN_14888e23c(int *param_1)

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
  
  plVar4 = DAT_14cb80808;
  if (DAT_14cb80808 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cb80808 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb80808 + 0x154) & 1) == 0) ||
       ((int)DAT_14cb80808[0x3a] <= *(int *)((longlong)DAT_14cb80808 + 0x1fc))) {
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
    cVar5 = (**(code **)(*DAT_14cb80808 + 0x300))(DAT_14cb80808);
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



// FUNCTION 14888e252 FUN_14888e252 body=205 status=ok
// SIG undefined FUN_14888e252(void)

void FUN_14888e252(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = param_2;
  if (param_2 != 0) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    local_38 = 0;
    uStack_30 = 0;
    plVar3 = (longlong *)FUN_1488a12ae(0,uVar2 >> 0x10 ^ uVar2,&local_28);
    iVar1 = (int)plVar3[1];
    *(uint *)(plVar3 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
      FUN_1488a1a90(plVar3,iVar1);
    }
    FUN_1488a1880((longlong)iVar1 * 0x78 + *plVar3,param_3);
    FUN_1488a1288(local_38,uStack_30 & 0xffffffff);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14888e320 FUN_14888e320 body=143 status=ok
// SIG undefined FUN_14888e320(void)

longlong FUN_14888e320(longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar3 +
                    (ulonglong)((int)param_1[9] - 1U & (uVar1 >> 0x10 ^ uVar1)) * 4);
    if (iVar5 != -1) {
      do {
        lVar4 = *param_1 + (longlong)iVar5 * 0x20;
        if (*(ulonglong *)(*param_1 + (longlong)iVar5 * 0x20) == param_2) goto LAB_14888e32a;
        iVar5 = *(int *)(lVar4 + 0x18);
      } while (iVar5 != -1);
    }
  }
  lVar4 = 0;
LAB_14888e32a:
  lVar2 = lVar4 + 8;
  if (lVar4 == 0) {
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 14888e3b0 FUN_14888e3b0 body=368 status=ok
// SIG undefined FUN_14888e3b0(void)

void FUN_14888e3b0(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong *local_48;
  undefined **local_40;
  longlong *local_38;
  undefined4 local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_4 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    plVar6 = *(longlong **)(param_2 + 0x10);
    if (plVar6 == (longlong *)0x0) {
LAB_14888e420:
      plVar6 = (longlong *)0x0;
    }
    else {
      iVar5 = (int)plVar6[1];
      do {
        if (iVar5 == 0) goto LAB_14888e420;
        LOCK();
        iVar4 = (int)plVar6[1];
        bVar7 = iVar5 == iVar4;
        if (bVar7) {
          *(int *)(plVar6 + 1) = iVar5 + 1;
          iVar4 = iVar5;
        }
        iVar5 = iVar4;
        UNLOCK();
      } while (!bVar7);
    }
    local_40 = (undefined **)0x0;
    if (plVar6 != (longlong *)0x0) {
      local_40 = *(undefined ***)(param_2 + 8);
    }
    local_38 = plVar6;
    FUN_143d719d2(uVar3);
    if (plVar6 != (longlong *)0x0) {
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
  }
  else if (**(longlong **)(param_1 + 0x10) != 0) {
    FUN_14888e522(**(longlong **)(param_1 + 0x10),&local_40,param_4);
    if (local_28 == 1) {
      uVar3 = *(undefined8 *)(param_1 + 8);
      plVar6 = *(longlong **)(param_2 + 0x10);
      if (plVar6 == (longlong *)0x0) {
LAB_14888e49d:
        plVar6 = (longlong *)0x0;
      }
      else {
        iVar5 = (int)plVar6[1];
        do {
          if (iVar5 == 0) goto LAB_14888e49d;
          LOCK();
          iVar4 = (int)plVar6[1];
          bVar7 = iVar5 == iVar4;
          if (bVar7) {
            *(int *)(plVar6 + 1) = iVar5 + 1;
            iVar4 = iVar5;
          }
          iVar5 = iVar4;
          UNLOCK();
        } while (!bVar7);
      }
      local_50 = 0;
      if (plVar6 != (longlong *)0x0) {
        local_50 = *(undefined8 *)(param_2 + 8);
      }
      local_48 = plVar6;
      FUN_143d719d2(uVar3,&local_50,&local_40);
      if (plVar6 != (longlong *)0x0) {
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
    }
    if ((local_28 & 1) != 0) {
      local_40 = &PTR_FUN_14b18a090;
      FUN_144a65a1e(local_38,local_30);
      if (local_38 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14888e522 FUN_14888e522 body=76 status=ok
// SIG undefined FUN_14888e522(void)

longlong FUN_14888e522(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14888fa9c(param_1,param_3);
  if (lVar1 == 0) {
    FUN_14888f594(*(undefined8 *)(param_1 + 0x30),param_2,param_3);
  }
  else {
    FUN_1486bf370(param_2,lVar1 + 0x18);
    *(undefined1 *)(param_2 + 0x18) = 1;
  }
  return param_2;
}



// FUNCTION 14888e56e FUN_14888e56e body=368 status=ok
// SIG undefined FUN_14888e56e(void)

void FUN_14888e56e(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong *local_48;
  undefined **local_40;
  longlong *local_38;
  undefined4 local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_4 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    plVar6 = *(longlong **)(param_2 + 0x10);
    if (plVar6 == (longlong *)0x0) {
LAB_14888e5de:
      plVar6 = (longlong *)0x0;
    }
    else {
      iVar5 = (int)plVar6[1];
      do {
        if (iVar5 == 0) goto LAB_14888e5de;
        LOCK();
        iVar4 = (int)plVar6[1];
        bVar7 = iVar5 == iVar4;
        if (bVar7) {
          *(int *)(plVar6 + 1) = iVar5 + 1;
          iVar4 = iVar5;
        }
        iVar5 = iVar4;
        UNLOCK();
      } while (!bVar7);
    }
    local_40 = (undefined **)0x0;
    if (plVar6 != (longlong *)0x0) {
      local_40 = *(undefined ***)(param_2 + 8);
    }
    local_38 = plVar6;
    FUN_143d71a4a(uVar3);
    if (plVar6 != (longlong *)0x0) {
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
  }
  else if (**(longlong **)(param_1 + 0x10) != 0) {
    FUN_14888e6e0(**(longlong **)(param_1 + 0x10),&local_40,param_4);
    if (local_28 == 1) {
      uVar3 = *(undefined8 *)(param_1 + 8);
      plVar6 = *(longlong **)(param_2 + 0x10);
      if (plVar6 == (longlong *)0x0) {
LAB_14888e65b:
        plVar6 = (longlong *)0x0;
      }
      else {
        iVar5 = (int)plVar6[1];
        do {
          if (iVar5 == 0) goto LAB_14888e65b;
          LOCK();
          iVar4 = (int)plVar6[1];
          bVar7 = iVar5 == iVar4;
          if (bVar7) {
            *(int *)(plVar6 + 1) = iVar5 + 1;
            iVar4 = iVar5;
          }
          iVar5 = iVar4;
          UNLOCK();
        } while (!bVar7);
      }
      local_50 = 0;
      if (plVar6 != (longlong *)0x0) {
        local_50 = *(undefined8 *)(param_2 + 8);
      }
      local_48 = plVar6;
      FUN_143d71a4a(uVar3,&local_50,&local_40);
      if (plVar6 != (longlong *)0x0) {
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
    }
    if ((local_28 & 1) != 0) {
      local_40 = &PTR_FUN_14b189ef0;
      FUN_1486ba411(local_38,local_30);
      if (local_38 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14888e6e0 FUN_14888e6e0 body=76 status=ok
// SIG undefined FUN_14888e6e0(void)

longlong FUN_14888e6e0(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14888fb1c(param_1,param_3);
  if (lVar1 == 0) {
    FUN_14888f6f6(*(undefined8 *)(param_1 + 0x30),param_2,param_3);
  }
  else {
    FUN_1486bf498(param_2,lVar1 + 0x18);
    *(undefined1 *)(param_2 + 0x18) = 1;
  }
  return param_2;
}



// FUNCTION 14888e72c FUN_14888e72c body=113 status=ok
// SIG undefined FUN_14888e72c(void)

undefined8 * FUN_14888e72c(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_14b18a3f0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf8;
  FUN_1412e3d1e(&local_28);
  *(undefined4 *)(param_1 + 7) = local_28;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_24;
  *(undefined4 *)(param_1 + 8) = uStack_20;
  *(undefined4 *)((longlong)param_1 + 0x44) = uStack_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14888e79e FUN_14888e79e body=438 status=ok
// SIG undefined FUN_14888e79e(void)

void FUN_14888e79e(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  
  param_1[1] = *param_2;
  plVar3 = (longlong *)param_2[1];
  plVar5 = (longlong *)param_1[2];
  if (plVar5 != plVar3) {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      plVar5 = (longlong *)param_1[2];
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))();
      }
    }
    param_1[2] = (longlong)plVar3;
  }
  lVar4 = *param_3;
  plVar3 = (longlong *)param_3[1];
  if (plVar3 == (longlong *)0x0) {
    param_1[3] = lVar4;
    plVar5 = (longlong *)param_1[4];
    if (plVar5 != (longlong *)0x0) {
      param_1[4] = 0;
LAB_14888e82d:
      LOCK();
      plVar3 = plVar5 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x00014888e85f:
        if (iVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    param_1[3] = lVar4;
    plVar5 = (longlong *)param_1[4];
    if (plVar3 == plVar5) {
      LOCK();
      plVar5 = plVar3 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar5 = plVar3;
        goto joined_r0x00014888e85f;
      }
    }
    else {
      param_1[4] = (longlong)plVar3;
      if (plVar5 != (longlong *)0x0) goto LAB_14888e82d;
    }
  }
  lVar4 = *param_4;
  plVar3 = (longlong *)param_4[1];
  if (plVar3 == (longlong *)0x0) {
    param_1[5] = lVar4;
    plVar5 = (longlong *)param_1[6];
    if (plVar5 == (longlong *)0x0) goto LAB_14888e8e2;
    param_1[6] = 0;
LAB_14888e8a8:
    LOCK();
    plVar3 = plVar5 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_14888e8e2;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar5;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    param_1[5] = lVar4;
    plVar5 = (longlong *)param_1[6];
    if (plVar3 != plVar5) {
      param_1[6] = (longlong)plVar3;
      if (plVar5 == (longlong *)0x0) goto LAB_14888e8e2;
      goto LAB_14888e8a8;
    }
    LOCK();
    plVar5 = plVar3 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_14888e8e2;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_14888e8e2:
  (**(code **)(*param_1 + 0x68))(param_1);
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar3 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  plVar3 = (longlong *)param_3[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar3 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014888e941. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14888e954 FUN_14888e954 body=23 status=ok
// SIG undefined FUN_14888e954(void)

void FUN_14888e954(longlong param_1)

{
  FUN_14888e96c();
  *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) & 0xfd;
  return;
}



// FUNCTION 14888e96c FUN_14888e96c body=141 status=ok
// SIG undefined FUN_14888e96c(void)

void FUN_14888e96c(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    lVar3 = FUN_14479d2ce(*(longlong *)(param_1 + 0x18) + 0x48);
    if ((lVar3 != 0) && (iVar1 = *(int *)(param_1 + 0x50), (longlong)iVar1 != 0)) {
      lVar2 = *(longlong *)(param_1 + 0x48);
      lVar4 = 0;
      do {
        if (*(longlong *)(lVar2 + lVar4) != 0) {
          FUN_14888e00a(lVar3,param_1);
        }
        lVar4 = lVar4 + 8;
      } while ((longlong)iVar1 * 8 != lVar4);
    }
    *(undefined4 *)(param_1 + 0x50) = 0;
    if (*(int *)(param_1 + 0x54) != 0) {
      FUN_1488a1f56(param_1 + 0x48);
      return;
    }
  }
  return;
}



// FUNCTION 14888ea02 FUN_14888ea02 body=119 status=ok
// SIG undefined FUN_14888ea02(void)

undefined8 FUN_14888ea02(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *(undefined8 *)(param_1 + 8);
  FUN_1446dcdd4(local_38);
  if (DAT_14cb80848 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144837462(DAT_14cb80848,local_38);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14888ea7a FUN_14888ea7a body=38 status=ok
// SIG undefined FUN_14888ea7a(void)

void FUN_14888ea7a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140cbef6c(&DAT_14cb7ffe0);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_14b18c640;
  return;
}



// FUNCTION 14888eaa0 FUN_14888eaa0 body=44 status=ok
// SIG undefined FUN_14888eaa0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14888eaa0(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb7ffec = _DAT_14cb7ffec + -1;
  *param_1 = DAT_14cb7ffe0;
  DAT_14cb7ffe0 = param_1;
  return;
}



// FUNCTION 14888eacc FUN_14888eacc body=38 status=ok
// SIG undefined FUN_14888eacc(void)

void FUN_14888eacc(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14b18c640;
  return;
}



// FUNCTION 14888eaf2 FUN_14888eaf2 body=38 status=ok
// SIG undefined FUN_14888eaf2(void)

void FUN_14888eaf2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140cbef6c(&DAT_14cb800d8);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_14b18d080;
  return;
}



// FUNCTION 14888eb18 FUN_14888eb18 body=44 status=ok
// SIG undefined FUN_14888eb18(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14888eb18(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb800e4 = _DAT_14cb800e4 + -1;
  *param_1 = DAT_14cb800d8;
  DAT_14cb800d8 = param_1;
  return;
}



// FUNCTION 14888eb44 FUN_14888eb44 body=38 status=ok
// SIG undefined FUN_14888eb44(void)

void FUN_14888eb44(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14b18d080;
  return;
}



// FUNCTION 14888eb6a FUN_14888eb6a body=93 status=ok
// SIG undefined FUN_14888eb6a(void)

longlong FUN_14888eb6a(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1400f6f32();
  if (((lVar1 != 0) && (*(longlong *)(lVar1 + 0x30) != 0)) &&
     (lVar1 = FUN_1489b066a(*(longlong *)(lVar1 + 0x30),&DAT_14cb80180,param_2), lVar1 != 0)) {
    lVar2 = FUN_145b7b17a();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 14888ebc8 FUN_14888ebc8 body=126 status=ok
// SIG undefined FUN_14888ebc8(void)

void FUN_14888ebc8(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14888ec58(param_1,&local_28,param_2 + 0x1c);
  FUN_14888ee72(local_28,param_4);
  if (local_20 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_20 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14888ec58 FUN_14888ec58 body=536 status=ok
// SIG undefined FUN_14888ec58(void)

undefined8 * FUN_14888ec58(longlong param_1,undefined8 *param_2,uint *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  longlong *local_50;
  uint *local_48;
  undefined8 **local_40;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar2 = (longlong *)(param_1 + 0x100);
  if (*(int *)(param_1 + 0x108) != *(int *)(param_1 + 0x134)) {
    lVar7 = param_1 + 0x138;
    if (*(longlong *)(param_1 + 0x140) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x140);
    }
    iVar6 = *(int *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x148) - 1U & *param_3) * 4);
    if (iVar6 != -1) {
      do {
        lVar7 = *plVar2 + (longlong)iVar6 * 0x20;
        if (*(uint *)(*plVar2 + (longlong)iVar6 * 0x20) == *param_3) {
          if (lVar7 != 0) goto LAB_14888edcf;
          break;
        }
        iVar6 = *(int *)(lVar7 + 0x18);
      } while (iVar6 != -1);
    }
  }
  puVar4 = (undefined8 *)FUN_14001cc68(0x78,0x10);
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  *(undefined4 *)(puVar4 + 4) = 2;
  puVar4[9] = 0;
  *(undefined4 *)(puVar4 + 10) = 0;
  *(undefined8 *)((longlong)puVar4 + 0x24) = 0;
  *(undefined8 *)((longlong)puVar4 + 0x2c) = 0;
  *(undefined4 *)((longlong)puVar4 + 0x34) = 0;
  *(undefined8 *)((longlong)puVar4 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar4 + 0x5c) = 0;
  puVar4[0xd] = 0;
  *(undefined4 *)(puVar4 + 0xe) = 0;
  local_58 = puVar4;
  plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14b40d040;
  plVar5[2] = (longlong)puVar4;
  local_50 = plVar5;
  if (puVar4 != (undefined8 *)0x0) {
    if (plVar5 == (longlong *)0x0) {
      *puVar4 = puVar4;
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      *puVar4 = puVar4;
      if ((longlong *)puVar4[1] != plVar5) {
        LOCK();
        *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
        UNLOCK();
        plVar3 = (longlong *)puVar4[1];
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))();
          }
        }
        puVar4[1] = plVar5;
      }
      LOCK();
      plVar3 = plVar5 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  local_40 = &local_58;
  local_48 = param_3;
  FUN_1488a1f86(plVar2,&local_34);
  plVar5 = local_50;
  lVar7 = *plVar2;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_50 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  lVar7 = lVar7 + (longlong)local_34 * 0x20;
LAB_14888edcf:
  *param_2 = *(undefined8 *)(lVar7 + 8);
  lVar7 = *(longlong *)(lVar7 + 0x10);
  param_2[1] = lVar7;
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14888ee72 FUN_14888ee72 body=731 status=ok
// SIG undefined FUN_14888ee72(void)

void FUN_14888ee72(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  longlong local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong *local_80;
  longlong *local_78;
  undefined8 *local_70;
  undefined1 local_64 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1488a329e(param_1 + 0x28);
  puVar4 = (undefined8 *)FUN_144a06846(param_2,&DAT_14cb803b0);
  local_88 = *puVar4;
  local_80 = (longlong *)puVar4[1];
  if (local_80 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_80 + 1) = (int)local_80[1] + 1;
    UNLOCK();
  }
  cVar3 = FUN_144a8220c(&local_88);
  if ((cVar3 != '\0') && (cVar3 = FUN_144a79b3c(&local_88), cVar3 != '\0')) {
    plVar5 = (longlong *)FUN_1407cbaec(&local_88);
    if ((longlong)(int)plVar5[2] != 0) {
      lVar7 = *plVar5;
      lVar8 = (longlong)(int)plVar5[2] << 4;
      do {
        uVar6 = FUN_144a06846(lVar7,&DAT_14cb803d8);
        uVar6 = FUN_144a7cdd6(uVar6,0);
        FUN_1446ddc76(&local_a8,uVar6,1);
        local_a0 = local_a8;
        local_98 = 0xa001;
        local_90 = 0;
        if (local_a8 != 0) {
          local_b8 = 0;
          uStack_b0 = 0;
          local_c8 = 0;
          uStack_c0 = 0;
          puVar4 = (undefined8 *)FUN_144a06846(lVar7,&DAT_14cb80428);
          local_d8 = *puVar4;
          local_d0 = (longlong *)puVar4[1];
          if (local_d0 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
            UNLOCK();
          }
          cVar3 = FUN_144a8220c(&local_d8);
          if (((cVar3 == '\0') || (cVar3 = FUN_144a79b3c(&local_d8), cVar3 == '\0')) ||
             (cVar3 = FUN_1488906d8(&local_d8,&local_c8), cVar3 != '\0')) {
            puVar4 = (undefined8 *)FUN_144a06846(lVar7,&DAT_14cb80450);
            local_e8 = *puVar4;
            local_e0 = (longlong *)puVar4[1];
            if (local_e0 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
              UNLOCK();
            }
            cVar3 = FUN_144a8220c(&local_e8);
            if (((cVar3 == '\0') || (cVar3 = FUN_144a79b3c(&local_e8), cVar3 == '\0')) ||
               (cVar3 = FUN_1488909ac(&local_e8,&local_c8), cVar3 != '\0')) {
              local_78 = &local_a0;
              local_70 = &local_c8;
              FUN_1488a3612(param_1 + 0x28,local_64,&local_78);
            }
            plVar5 = local_e0;
            if (local_e0 != (longlong *)0x0) {
              LOCK();
              plVar2 = local_e0 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
                (**(code **)*local_e0)(local_e0);
                LOCK();
                piVar1 = (int *)((longlong)plVar5 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar5 + 0x10))(plVar5);
                }
              }
            }
          }
          plVar5 = local_d0;
          if (local_d0 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_d0 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*local_d0)(local_d0);
              LOCK();
              piVar1 = (int *)((longlong)plVar5 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
              }
            }
          }
          FUN_148890d4a(&local_c8);
        }
        lVar7 = lVar7 + 0x10;
        lVar8 = lVar8 + -0x10;
      } while (lVar8 != 0);
    }
  }
  FUN_1447f69b6(param_1 + 0x10);
  plVar5 = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_80 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14888f14e FUN_14888f14e body=181 status=ok
// SIG undefined FUN_14888f14e(void)

undefined8
FUN_14888f14e(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14888ec58(param_1,&local_38,param_2 + 0x1c);
  FUN_14888f204(local_38,local_28);
  FUN_1446dcc2e(param_5,local_28);
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
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14888f204 FUN_14888f204 body=596 status=ok
// SIG undefined FUN_14888f204(void)

undefined8 FUN_14888f204(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int *piVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined1 auStack_e8 [40];
  undefined1 local_c0 [8];
  longlong *local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong local_a0;
  uint local_98;
  int iStack_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  iVar7 = 0;
  FUN_144aa7a80(local_88,2,0);
  plVar1 = (longlong *)(param_1 + 0x28);
  lVar2 = param_1 + 0x38;
  local_70 = 0x100000000;
  local_60 = 0xffffffff;
  iStack_5c = 0;
  local_58 = 0;
  local_68 = lVar2;
  if (*(int *)(param_1 + 0x50) != 0) {
    FUN_1449c0562(&local_70);
    iVar7 = *(int *)(param_1 + 0x50);
  }
  local_98 = local_60;
  iStack_94 = iStack_5c;
  local_90 = local_58;
  local_8c = uStack_54;
  local_a8 = local_70;
  local_a0 = local_68;
  local_b0 = plVar1;
  if ((iStack_5c != iVar7) || (local_68 != lVar2)) {
    do {
      if ((*(longlong *)(*local_b0 + (longlong)iStack_94 * 0x40) != 0) &&
         (puVar6 = (undefined8 *)(*local_b0 + (longlong)iStack_94 * 0x40),
         *(int *)(puVar6 + 1) - 1U < 0xfffffffe)) {
        FUN_144aa7a80(local_c0,3,0);
        local_78 = *puVar6;
        FUN_1446dcdd4(&local_70);
        FUN_148890d90(local_c0,&local_70);
        if (CONCAT44(uStack_54,local_58) != 0) {
          FUN_1400020a8();
        }
        FUN_148890e2e(puVar6 + 3,local_c0);
        FUN_14173818c(local_88,local_c0,0);
        plVar5 = local_b8;
        if (local_b8 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_b8 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*local_b8)(local_b8);
            LOCK();
            piVar3 = (int *)((longlong)plVar5 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
      }
      local_98 = local_98 & ~local_a8._4_4_;
      FUN_1449c0562(&local_a8);
    } while (local_b0 != plVar1 || (local_a0 != lVar2 || iStack_94 != iVar7));
  }
  FUN_144aa7a80(param_2,3,0);
  FUN_14161210c(param_2,&DAT_14cb803b0,local_88);
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_80 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar3 = (int *)((longlong)local_80 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_80 + 0x10))(local_80);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14888f45a FUN_14888f45a body=79 status=ok
// SIG undefined FUN_14888f45a(void)

void FUN_14888f45a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14888f4aa();
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_14b18d4d0;
  *(undefined4 *)(puVar1 + 4) = 0xa004;
  *(undefined1 *)(puVar1 + 6) = 0;
  *(undefined4 *)(puVar1 + 8) = 0xa001;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  return;
}



// FUNCTION 14888f4aa FUN_14888f4aa body=101 status=ok
// SIG undefined FUN_14888f4aa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14888f4aa(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  puVar2 = DAT_14cb80230;
  if (DAT_14cb80230 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)FUN_140595974(0xe00,0);
    lVar4 = 0x1f;
    puVar1 = puVar2;
    do {
      puVar3 = puVar1 + 0xe;
      *puVar1 = puVar3;
      lVar4 = lVar4 + -1;
      puVar1 = puVar3;
    } while (lVar4 != 0);
    *puVar3 = DAT_14cb80230;
    _DAT_14cb80238 = _DAT_14cb80238 + 0x20;
  }
  DAT_14cb80230 = (undefined8 *)*puVar2;
  _DAT_14cb8023c = _DAT_14cb8023c + 1;
  return;
}



// FUNCTION 14888f510 FUN_14888f510 body=44 status=ok
// SIG undefined FUN_14888f510(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14888f510(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb8023c = _DAT_14cb8023c + -1;
  *param_1 = DAT_14cb80230;
  DAT_14cb80230 = param_1;
  return;
}



// FUNCTION 14888f53c FUN_14888f53c body=88 status=ok
// SIG undefined FUN_14888f53c(void)

void FUN_14888f53c(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = 0;
  *param_1 = &PTR_FUN_14b18d4d0;
  *(undefined4 *)(param_1 + 4) = 0xa004;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 8) = 0xa001;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  return;
}



// FUNCTION 14888f594 FUN_14888f594 body=213 status=ok
// SIG undefined FUN_14888f594(void)

longlong FUN_14888f594(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar3 = &DAT_14c9485f0;
  if (*(undefined4 **)(param_3 + 8) != (undefined4 *)0x0) {
    puVar3 = *(undefined4 **)(param_3 + 8);
  }
  FUN_1447325ac(puVar3,&local_28);
  do {
    if (param_1 == 0) {
      uVar2 = 0;
LAB_14888f645:
      *(undefined1 *)(param_2 + 0x18) = uVar2;
      if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
        return param_2;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    if ((longlong)*(int *)(param_1 + 0x58) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x50);
      lVar4 = 8;
      lVar5 = 0;
      do {
        if ((*(longlong *)(lVar1 + -8 + lVar4) == local_28) && (*(int *)(lVar1 + lVar4) == 0xa002))
        {
          if (lVar1 - lVar5 != 0) {
            FUN_1486bf370(param_2,(lVar1 - lVar5) + 0x18);
            uVar2 = 1;
            goto LAB_14888f645;
          }
          break;
        }
        lVar5 = lVar5 + -0x30;
        lVar4 = lVar4 + 0x30;
      } while (-lVar5 != (longlong)*(int *)(param_1 + 0x58) * 0x30);
    }
    param_1 = FUN_14888f66a(param_1 + 0x38);
  } while( true );
}



// FUNCTION 14888f66a FUN_14888f66a body=138 status=ok
// SIG undefined FUN_14888f66a(void)

longlong FUN_14888f66a(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = param_1[2];
  if (lVar1 == 0) {
    local_48 = *param_1;
    FUN_1446dcdd4(local_40);
    if (DAT_14cb80868 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = FUN_144837462(DAT_14cb80868,local_40);
    }
    if (local_28 != 0) {
      FUN_1400020a8();
    }
    param_1[2] = lVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14888f6f6 FUN_14888f6f6 body=213 status=ok
// SIG undefined FUN_14888f6f6(void)

longlong FUN_14888f6f6(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar3 = &DAT_14c9485f0;
  if (*(undefined4 **)(param_3 + 8) != (undefined4 *)0x0) {
    puVar3 = *(undefined4 **)(param_3 + 8);
  }
  FUN_1447325ac(puVar3,&local_28);
  do {
    if (param_1 == 0) {
      uVar2 = 0;
LAB_14888f7a7:
      *(undefined1 *)(param_2 + 0x18) = uVar2;
      if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
        return param_2;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    if ((longlong)*(int *)(param_1 + 0x68) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x60);
      lVar4 = 8;
      lVar5 = 0;
      do {
        if ((*(longlong *)(lVar1 + -8 + lVar4) == local_28) && (*(int *)(lVar1 + lVar4) == 0xa002))
        {
          if (lVar1 - lVar5 != 0) {
            FUN_1486bf498(param_2,(lVar1 - lVar5) + 0x18);
            uVar2 = 1;
            goto LAB_14888f7a7;
          }
          break;
        }
        lVar5 = lVar5 + -0x30;
        lVar4 = lVar4 + 0x30;
      } while (-lVar5 != (longlong)*(int *)(param_1 + 0x68) * 0x30);
    }
    param_1 = FUN_14888f66a(param_1 + 0x38);
  } while( true );
}



// FUNCTION 14888f7cc FUN_14888f7cc body=22 status=ok
// SIG undefined FUN_14888f7cc(void)

undefined8 FUN_14888f7cc(int *param_1)

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
  
  plVar4 = DAT_14cb80888;
  if (DAT_14cb80888 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cb80888 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb80888 + 0x154) & 1) == 0) ||
       ((int)DAT_14cb80888[0x3a] <= *(int *)((longlong)DAT_14cb80888 + 0x1fc))) {
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
    cVar5 = (**(code **)(*DAT_14cb80888 + 0x300))(DAT_14cb80888);
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



// FUNCTION 14888f7e2 FUN_14888f7e2 body=246 status=ok
// SIG undefined FUN_14888f7e2(void)

void FUN_14888f7e2(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b40bc38;
  if (param_1[0xb] != 0) {
    FUN_140457ffc(param_1[0xb] + 0x10,param_1);
    param_1[0xb] = 0;
    plVar3 = (longlong *)param_1[0xc];
    if (plVar3 != (longlong *)0x0) {
      param_1[0xc] = 0;
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
  plVar3 = (longlong *)param_1[0xc];
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
  FUN_1458918eb(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_1458918a3(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014888f8cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14888f8d8 FUN_14888f8d8 body=145 status=ok
// SIG undefined FUN_14888f8d8(void)

void FUN_14888f8d8(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  code *local_40;
  undefined4 local_38;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined1 *)(param_1 + 0x6a) = 1;
  lVar1 = *(longlong *)(param_1 + 0x58);
  if (lVar1 != 0) {
    local_40 = FUN_14888f96a;
    local_38 = 0;
    FUN_1488a2690(local_30,param_1);
    FUN_1448b6402(lVar1 + 0x10,&local_40,local_30);
    FUN_1449db362(local_30);
    FUN_14888f96a(param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14888f96a FUN_14888f96a body=137 status=ok
// SIG undefined FUN_14888f96a(void)

void FUN_14888f96a(longlong param_1)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  bool bVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    uVar2 = *(undefined1 *)(param_1 + 0x6b);
    *(undefined1 *)(param_1 + 0x6b) = 1;
    local_20 = *(longlong *)(param_1 + 0x10);
    if (local_20 == 0) {
      local_20 = 0;
      local_28 = 0;
    }
    else {
      iVar3 = *(int *)(local_20 + 8);
      local_28 = 0;
      do {
        if (iVar3 == 0) {
          local_20 = 0;
          goto LAB_14888f9bd;
        }
        LOCK();
        iVar1 = *(int *)(local_20 + 8);
        bVar4 = iVar3 == iVar1;
        if (bVar4) {
          *(int *)(local_20 + 8) = iVar3 + 1;
          iVar1 = iVar3;
        }
        iVar3 = iVar1;
        UNLOCK();
      } while (!bVar4);
      local_28 = *(undefined8 *)(param_1 + 8);
    }
LAB_14888f9bd:
    FUN_143d71de4();
    *(undefined1 *)(param_1 + 0x6b) = uVar2;
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14888f9f4 FUN_14888f9f4 body=167 status=ok
// SIG undefined FUN_14888f9f4(void)

void FUN_14888f9f4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(char *)(param_1 + 0x6b) == '\0') && (*(longlong *)(param_1 + 0x58) != 0)) {
    plVar3 = *(longlong **)(param_1 + 0x10);
    if (plVar3 == (longlong *)0x0) {
LAB_14888fa87:
      local_28 = 0;
      plStack_20 = (longlong *)0x0;
      FUN_143d72254();
    }
    else {
      iVar5 = (int)plVar3[1];
      do {
        if (iVar5 == 0) goto LAB_14888fa87;
        LOCK();
        iVar4 = (int)plVar3[1];
        bVar6 = iVar5 == iVar4;
        if (bVar6) {
          *(int *)(plVar3 + 1) = iVar5 + 1;
          iVar4 = iVar5;
        }
        iVar5 = iVar4;
        UNLOCK();
      } while (!bVar6);
      local_28 = *(undefined8 *)(param_1 + 8);
      plStack_20 = plVar3;
      FUN_143d72254();
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
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14888fa9c FUN_14888fa9c body=127 status=ok
// SIG undefined FUN_14888fa9c(void)

longlong * FUN_14888fa9c(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar1 = FUN_1405c60c4(param_2);
  FUN_1447325ac(uVar1,&local_18,1);
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    plVar2 = *(longlong **)(param_1 + 0x38);
    lVar3 = (longlong)*(int *)(param_1 + 0x40) * 0x30;
    do {
      if ((*plVar2 == local_18) && ((int)plVar2[1] == 0xa002)) goto LAB_14888faff;
      plVar2 = plVar2 + 6;
      lVar3 = lVar3 + -0x30;
    } while (lVar3 != 0);
  }
  plVar2 = (longlong *)0x0;
LAB_14888faff:
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return plVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


