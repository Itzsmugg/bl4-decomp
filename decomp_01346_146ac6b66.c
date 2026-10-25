// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146ac6b66 FUN_146ac6b66 body=38 status=ok
// SIG undefined FUN_146ac6b66(void)

undefined8 FUN_146ac6b66(undefined8 param_1,int param_2)

{
  FUN_146ac6b8c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ac6b8c FUN_146ac6b8c body=69 status=ok
// SIG undefined FUN_146ac6b8c(void)

void FUN_146ac6b8c(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_149f19ec8;
  param_1[4] = &PTR_LAB_149f19ed0;
  if ((param_1[1] != 0) && (lVar1 = *(longlong *)(param_1[1] + 8), lVar1 != 0)) {
    FUN_140c4c666(lVar1,param_1 + 4);
  }
  FUN_140cc7538(param_1);
  return;
}



// FUNCTION 146ac6bd2 FUN_146ac6bd2 body=93 status=ok
// SIG undefined FUN_146ac6bd2(void)

void FUN_146ac6bd2(longlong *param_1,uint param_2)

{
  void *_Dst;
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  
  lVar1 = *param_1;
  puVar2 = *(undefined8 **)(lVar1 + (longlong)(int)param_2 * 8);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  iVar3 = (int)param_1[1];
  if (~param_2 + iVar3 != 0) {
    _Dst = (void *)(lVar1 + (longlong)(int)param_2 * 8);
    memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)(int)(~param_2 + iVar3) << 3);
    iVar3 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar3 + -1;
  FUN_146ac6c30(param_1);
  return;
}



// FUNCTION 146ac6c30 FUN_146ac6c30 body=62 status=ok
// SIG undefined FUN_146ac6c30(void)

void FUN_146ac6c30(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146ac6c6e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 146ac6c6e FUN_146ac6c6e body=93 status=ok
// SIG undefined FUN_146ac6c6e(void)

ulonglong FUN_146ac6c6e(uint param_1,uint param_2)

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



// FUNCTION 146ac6ccc FUN_146ac6ccc body=90 status=ok
// SIG undefined FUN_146ac6ccc(void)

int FUN_146ac6ccc(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
    FUN_146ac6de8(param_1 + 0x18,iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 8) = uVar2;
  FUN_146ac6d86(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 8),param_1,param_2
               );
  return iVar1;
}



// FUNCTION 146ac6d26 FUN_146ac6d26 body=95 status=ok
// SIG undefined FUN_146ac6d26(void)

void FUN_146ac6d26(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 146ac6d86 FUN_146ac6d86 body=98 status=ok
// SIG undefined FUN_146ac6d86(void)

void FUN_146ac6d86(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 *puVar1;
  
  FUN_146ac6e6e();
  if ((*(char *)(param_3 + 0x54) == '\x01') &&
     ((undefined4 *)(param_3 + 0x50) != (undefined4 *)(param_1 + 0x40))) {
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_3 + 0x50);
    *(undefined1 *)(param_1 + 0x44) = 1;
  }
  puVar1 = (undefined1 *)(param_1 + 0x48);
  if (*(char *)(param_3 + 0x59) != '\0') {
    puVar1 = (undefined1 *)(param_3 + 0x58);
  }
  *(undefined1 *)(param_1 + 0x48) = *puVar1;
  puVar1 = (undefined1 *)(param_1 + 0x49);
  if (*(char *)(param_3 + 0x5b) != '\0') {
    puVar1 = (undefined1 *)(param_3 + 0x5a);
  }
  *(undefined1 *)(param_1 + 0x49) = *puVar1;
  return;
}



// FUNCTION 146ac6de8 FUN_146ac6de8 body=132 status=ok
// SIG undefined FUN_146ac6de8(void)

void FUN_146ac6de8(longlong param_1,int param_2)

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



// FUNCTION 146ac6e6e FUN_146ac6e6e body=91 status=ok
// SIG undefined FUN_146ac6e6e(void)

void FUN_146ac6e6e(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined4 *puVar1;
  
  FUN_146ac6eca();
  if (*(char *)(param_3 + 0x28) == '\x01') {
    FUN_140a55872(param_1 + 0x28,param_1 + 0x20,param_3 + 0x18);
  }
  puVar1 = (undefined4 *)(param_1 + 0x38);
  if (*(char *)(param_3 + 0x44) != '\0') {
    puVar1 = (undefined4 *)(param_3 + 0x40);
  }
  *(undefined4 *)(param_1 + 0x38) = *puVar1;
  puVar1 = (undefined4 *)(param_1 + 0x3c);
  if (*(char *)(param_3 + 0x4c) != '\0') {
    puVar1 = (undefined4 *)(param_3 + 0x48);
  }
  *(undefined4 *)(param_1 + 0x3c) = *puVar1;
  return;
}



// FUNCTION 146ac6eca FUN_146ac6eca body=150 status=ok
// SIG undefined FUN_146ac6eca(void)

void FUN_146ac6eca(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  lVar3 = *(longlong *)(param_3 + 8);
  if (lVar3 != 0) {
    lVar4 = *(longlong *)(param_3 + 0x10);
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    FUN_14149270a(param_1);
    plVar5 = *(longlong **)(param_1 + 0x18);
    *(longlong *)(param_1 + 0x10) = lVar3;
    *(longlong *)(param_1 + 0x18) = lVar4;
    FUN_140a5503c(param_1);
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
  }
  if ((param_2 != 0) && (*(longlong *)(param_1 + 8) == 0)) {
    *(longlong *)(param_1 + 8) = param_2;
    FUN_140a5503c(param_1);
    return;
  }
  return;
}



// FUNCTION 146ac6f60 FUN_146ac6f60 body=38 status=ok
// SIG undefined FUN_146ac6f60(void)

void FUN_146ac6f60(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146ac6f86(param_1);
    param_1 = param_1 + 0x60;
  }
  return;
}



// FUNCTION 146ac6f86 FUN_146ac6f86 body=80 status=ok
// SIG undefined FUN_146ac6f86(void)

void FUN_146ac6f86(longlong param_1)

{
  if (*(char *)(param_1 + 0x5b) == '\x01') {
    *(undefined1 *)(param_1 + 0x5b) = 0;
  }
  if (*(char *)(param_1 + 0x59) == '\x01') {
    *(undefined1 *)(param_1 + 0x59) = 0;
  }
  if (*(char *)(param_1 + 0x54) == '\x01') {
    *(undefined1 *)(param_1 + 0x54) = 0;
  }
  if (*(char *)(param_1 + 0x4c) == '\x01') {
    *(undefined1 *)(param_1 + 0x4c) = 0;
  }
  if (*(char *)(param_1 + 0x44) == '\x01') {
    *(undefined1 *)(param_1 + 0x44) = 0;
  }
  FUN_1449db362(param_1 + 0x30);
  FUN_146ac6fd6(param_1);
  return;
}



// FUNCTION 146ac6fd6 FUN_146ac6fd6 body=83 status=ok
// SIG undefined FUN_146ac6fd6(void)

void FUN_146ac6fd6(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  puVar4 = (undefined8 *)*param_1;
  if (puVar4 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146ac701e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar4)(puVar4,1);
    return;
  }
  return;
}



// FUNCTION 146ac702a FUN_146ac702a body=402 status=ok
// SIG undefined FUN_146ac702a(void)

void FUN_146ac702a(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar8 = param_2 - iVar1;
  if (uVar8 != 0 && iVar1 <= (int)param_2) {
    uVar6 = (ulonglong)param_2;
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_144748838(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar8;
    if ((uint)(iVar10 - iVar11) < uVar8) {
      FUN_1447030e2(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar6 * 0x38 + lVar2 + -0x34);
      do {
        iVar9 = (int)uVar6;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = iVar9 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar6 = uVar6 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar9 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -0xe;
      } while ((longlong)iVar11 < (longlong)uVar6);
    }
    if (iVar1 == 0) {
      plVar7 = param_1 + 2;
      *(uint *)(param_1 + 5) = uVar8;
      uVar12 = uVar8 + 0x1f >> 5;
      if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
        FUN_14499171c(plVar7,0,uVar12,4);
        *(uint *)((longlong)param_1 + 0x2c) = uVar8 + 0x1f & 0xffffffe0;
      }
      _Dst = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        _Dst = plVar7;
      }
      if (uVar8 < 0x101) {
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
          plVar7 = (longlong *)param_1[4];
        }
        bVar4 = -(char)(iVar1 % 0x20);
        *(uint *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    else if (-1 < (int)uVar8) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar8);
      FUN_1447c6044(param_1 + 2,uVar3,uVar8,0);
      return;
    }
  }
  return;
}



// FUNCTION 146ac71bc FUN_146ac71bc body=419 status=ok
// SIG undefined FUN_146ac71bc(void)

void FUN_146ac71bc(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
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



// FUNCTION 146ac7360 FUN_146ac7360 body=303 status=ok
// SIG undefined FUN_146ac7360(void)

undefined4 * FUN_146ac7360(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146ac7490(param_1,local_48);
  puVar1 = (uint *)param_3[1];
  uVar11 = *(uint *)*param_3;
  *local_40 = uVar11;
  uVar10 = puVar1[1];
  uVar2 = puVar1[2];
  uVar3 = puVar1[3];
  uVar4 = puVar1[4];
  uVar5 = puVar1[5];
  uVar6 = puVar1[6];
  uVar7 = puVar1[7];
  local_40[2] = *puVar1;
  local_40[3] = uVar10;
  local_40[4] = uVar2;
  local_40[5] = uVar3;
  local_40[6] = uVar4;
  local_40[7] = uVar5;
  local_40[8] = uVar6;
  local_40[9] = uVar7;
  *(undefined8 *)(local_40 + 10) = *(undefined8 *)(puVar1 + 8);
  local_40[0xc] = 0xffffffff;
  local_4c = local_48[0];
  cVar9 = FUN_146ac7572(param_1,uVar11,local_40,&local_4c);
  uVar8 = local_4c;
  if (cVar9 == '\0') {
    uVar10 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar13 = 1;
    if (3 < uVar10) {
      uVar12 = (ulonglong)(uVar10 & 0xfffffffe) + 0xf;
      lVar14 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar13 = 1 << ((byte)lVar14 & 0x1f);
    }
    if (((int)uVar10 < 1) || (iVar13 <= *(int *)(param_1 + 0x48))) {
      uVar11 = *(int *)(param_1 + 0x48) - 1U & uVar11;
      local_40[0xd] = uVar11;
      lVar14 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar14 = param_1 + 0x38;
      }
      local_40[0xc] =
           *(uint *)(lVar14 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar11) * 4)
      ;
      lVar14 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar14 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar14 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar11) * 4) = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar13;
      FUN_146ac71bc(param_1);
    }
  }
  *param_2 = uVar8;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ac7490 FUN_146ac7490 body=226 status=ok
// SIG undefined FUN_146ac7490(void)

int * FUN_146ac7490(longlong *param_1,int *param_2)

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



// FUNCTION 146ac7572 FUN_146ac7572 body=149 status=ok
// SIG undefined FUN_146ac7572(void)

undefined8 FUN_146ac7572(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
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
        piVar1 = (int *)(*param_1 + (longlong)iVar14 * 0x38);
        if (*(int *)(*param_1 + (longlong)iVar14 * 0x38) == *param_3) {
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          iVar6 = param_3[4];
          iVar7 = param_3[5];
          iVar8 = param_3[6];
          iVar9 = param_3[7];
          iVar10 = param_3[9];
          iVar11 = param_3[10];
          iVar12 = param_3[0xb];
          piVar1[8] = param_3[8];
          piVar1[9] = iVar10;
          piVar1[10] = iVar11;
          piVar1[0xb] = iVar12;
          piVar1[4] = iVar6;
          piVar1[5] = iVar7;
          piVar1[6] = iVar8;
          piVar1[7] = iVar9;
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_146ac7608(iVar2,*param_4);
          *param_4 = iVar14;
          return 1;
        }
        iVar14 = piVar1[0xc];
      } while (iVar14 != -1);
    }
  }
  return 0;
}



// FUNCTION 146ac7608 FUN_146ac7608 body=116 status=ok
// SIG undefined FUN_146ac7608(void)

void FUN_146ac7608(longlong *param_1,int param_2)

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



// FUNCTION 146ac767c FUN_146ac767c body=53 status=ok
// SIG undefined FUN_146ac767c(void)

void FUN_146ac767c(undefined8 *param_1)

{
  FUN_146aa7bc1(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    return;
  }
  FUN_146ac6d26(param_1,0);
  return;
}



// FUNCTION 146ac76b2 FUN_146ac76b2 body=80 status=ok
// SIG undefined FUN_146ac76b2(void)

longlong * FUN_146ac76b2(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_146aa7bc1(*param_1,(int)param_1[1]);
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



// FUNCTION 146ac7702 FUN_146ac7702 body=313 status=ok
// SIG undefined FUN_146ac7702(void)

longlong * FUN_146ac7702(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_146ac77fe:
    *puVar5 = &PTR_LAB_149f04fc0;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_149f19ef0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_146ac77fe;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f04fc0;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_149f19ef0;
    puVar5[3] = uVar10;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 146ac783c FUN_146ac783c body=64 status=ok
// SIG undefined FUN_146ac783c(void)

undefined8 * FUN_146ac783c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f19ef0;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ac7880 FUN_146ac7880 body=81 status=ok
// SIG undefined FUN_146ac7880(void)

undefined8 FUN_146ac7880(longlong param_1)

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



// FUNCTION 146ac78d8 FUN_146ac78d8 body=89 status=ok
// SIG undefined FUN_146ac78d8(void)

bool FUN_146ac78d8(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_146ac7923;
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
LAB_146ac7923:
  return lVar6 == param_2;
}



// FUNCTION 146ac794e FUN_146ac794e body=118 status=ok
// SIG undefined FUN_146ac794e(void)

void FUN_146ac794e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f04fc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f19ef0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 146ac79c4 FUN_146ac79c4 body=118 status=ok
// SIG undefined FUN_146ac79c4(void)

void FUN_146ac79c4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f04fc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f19ef0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 146ac7a3a FUN_146ac7a3a body=156 status=ok
// SIG undefined FUN_146ac7a3a(void)

void FUN_146ac7a3a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f04fc0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f19ef0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146ac7ac6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146ac7ad6 FUN_146ac7ad6 body=105 status=ok
// SIG undefined FUN_146ac7ad6(void)

undefined8 FUN_146ac7ad6(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_146ac7b2a:
    (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30),param_2);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_146ac7b2a;
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
    (**(code **)(param_1 + 0x28))
              ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18),param_2);
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
  return param_2;
}



// FUNCTION 146ac7b40 FUN_146ac7b40 body=143 status=ok
// SIG undefined FUN_146ac7b40(void)

ulonglong FUN_146ac7b40(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_146ac7bae:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146ac7bae;
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
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30),local_28);
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
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 146ac7bd0 FUN_146ac7bd0 body=313 status=ok
// SIG undefined FUN_146ac7bd0(void)

longlong * FUN_146ac7bd0(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_146ac7ccc:
    *puVar5 = &PTR_LAB_149f055c0;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_149f19f60;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_146ac7ccc;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f055c0;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_149f19f60;
    puVar5[3] = uVar10;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 146ac7d0a FUN_146ac7d0a body=64 status=ok
// SIG undefined FUN_146ac7d0a(void)

undefined8 * FUN_146ac7d0a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f19f60;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ac7d4e FUN_146ac7d4e body=81 status=ok
// SIG undefined FUN_146ac7d4e(void)

undefined8 FUN_146ac7d4e(longlong param_1)

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



// FUNCTION 146ac7da6 FUN_146ac7da6 body=89 status=ok
// SIG undefined FUN_146ac7da6(void)

bool FUN_146ac7da6(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_146ac7df1;
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
LAB_146ac7df1:
  return lVar6 == param_2;
}



// FUNCTION 146ac7e1c FUN_146ac7e1c body=118 status=ok
// SIG undefined FUN_146ac7e1c(void)

void FUN_146ac7e1c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f055c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f19f60;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 146ac7e92 FUN_146ac7e92 body=118 status=ok
// SIG undefined FUN_146ac7e92(void)

void FUN_146ac7e92(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f055c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f19f60;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 146ac7f08 FUN_146ac7f08 body=156 status=ok
// SIG undefined FUN_146ac7f08(void)

void FUN_146ac7f08(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f055c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f19f60;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146ac7f94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146ac7fa4 FUN_146ac7fa4 body=105 status=ok
// SIG undefined FUN_146ac7fa4(void)

undefined8 FUN_146ac7fa4(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_146ac7ff8:
    (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30),param_2);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_146ac7ff8;
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
    (**(code **)(param_1 + 0x28))
              ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18),param_2);
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
  return param_2;
}



// FUNCTION 146ac800e FUN_146ac800e body=143 status=ok
// SIG undefined FUN_146ac800e(void)

ulonglong FUN_146ac800e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_146ac807c:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146ac807c;
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
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30),&local_19);
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
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 146ac809e FUN_146ac809e body=313 status=ok
// SIG undefined FUN_146ac809e(void)

longlong * FUN_146ac809e(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_146ac819a:
    *puVar5 = &PTR_LAB_149f05a70;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_149f19fd0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_146ac819a;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f05a70;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_149f19fd0;
    puVar5[3] = uVar10;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 146ac81d8 FUN_146ac81d8 body=64 status=ok
// SIG undefined FUN_146ac81d8(void)

undefined8 * FUN_146ac81d8(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f19fd0;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ac821c FUN_146ac821c body=81 status=ok
// SIG undefined FUN_146ac821c(void)

undefined8 FUN_146ac821c(longlong param_1)

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



// FUNCTION 146ac8274 FUN_146ac8274 body=89 status=ok
// SIG undefined FUN_146ac8274(void)

bool FUN_146ac8274(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_146ac82bf;
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
LAB_146ac82bf:
  return lVar6 == param_2;
}



// FUNCTION 146ac82ea FUN_146ac82ea body=118 status=ok
// SIG undefined FUN_146ac82ea(void)

void FUN_146ac82ea(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05a70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f19fd0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 146ac8360 FUN_146ac8360 body=118 status=ok
// SIG undefined FUN_146ac8360(void)

void FUN_146ac8360(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05a70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f19fd0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 146ac83d6 FUN_146ac83d6 body=156 status=ok
// SIG undefined FUN_146ac83d6(void)

void FUN_146ac83d6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f05a70;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f19fd0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146ac8462. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146ac8472 FUN_146ac8472 body=105 status=ok
// SIG undefined FUN_146ac8472(void)

undefined8 FUN_146ac8472(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_146ac84c6:
    (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30),param_2);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_146ac84c6;
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
    (**(code **)(param_1 + 0x28))
              ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18),param_2);
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
  return param_2;
}



// FUNCTION 146ac84dc FUN_146ac84dc body=162 status=ok
// SIG undefined FUN_146ac84dc(void)

ulonglong FUN_146ac84dc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_58 [40];
  longlong *local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_146ac855c:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146ac855c;
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
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar4 != 0);
    if ((lVar4 != 0) &&
       ((**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30),local_30),
       local_30[0] != (longlong *)0x0)) {
      (**(code **)(*local_30[0] + 0x10))();
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
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 146ac8580 FUN_146ac8580 body=313 status=ok
// SIG undefined FUN_146ac8580(void)

longlong * FUN_146ac8580(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_146ac867c:
    *puVar5 = &PTR_LAB_149f055c0;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_149f1a040;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_146ac867c;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f055c0;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_149f1a040;
    puVar5[3] = uVar10;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 146ac86ba FUN_146ac86ba body=64 status=ok
// SIG undefined FUN_146ac86ba(void)

undefined8 * FUN_146ac86ba(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f1a040;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ac86fe FUN_146ac86fe body=81 status=ok
// SIG undefined FUN_146ac86fe(void)

undefined8 FUN_146ac86fe(longlong param_1)

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



// FUNCTION 146ac8756 FUN_146ac8756 body=89 status=ok
// SIG undefined FUN_146ac8756(void)

bool FUN_146ac8756(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_146ac87a1;
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
LAB_146ac87a1:
  return lVar6 == param_2;
}



// FUNCTION 146ac87cc FUN_146ac87cc body=118 status=ok
// SIG undefined FUN_146ac87cc(void)

void FUN_146ac87cc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f055c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f1a040;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 146ac8842 FUN_146ac8842 body=118 status=ok
// SIG undefined FUN_146ac8842(void)

void FUN_146ac8842(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f055c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f1a040;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 146ac88b8 FUN_146ac88b8 body=156 status=ok
// SIG undefined FUN_146ac88b8(void)

void FUN_146ac88b8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f055c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f1a040;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146ac8944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146ac8954 FUN_146ac8954 body=105 status=ok
// SIG undefined FUN_146ac8954(void)

undefined8 FUN_146ac8954(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_146ac89a8:
    (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30),param_2);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_146ac89a8;
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
    (**(code **)(param_1 + 0x28))
              ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18),param_2);
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
  return param_2;
}



// FUNCTION 146ac89be FUN_146ac89be body=143 status=ok
// SIG undefined FUN_146ac89be(void)

ulonglong FUN_146ac89be(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_146ac8a2c:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146ac8a2c;
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
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30),&local_19);
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
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 146ac8a4e FUN_146ac8a4e body=313 status=ok
// SIG undefined FUN_146ac8a4e(void)

longlong * FUN_146ac8a4e(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_146ac8b4a:
    *puVar5 = &PTR_LAB_149f04fc0;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_149f1a0b0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_146ac8b4a;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f04fc0;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_149f1a0b0;
    puVar5[3] = uVar10;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 146ac8b88 FUN_146ac8b88 body=64 status=ok
// SIG undefined FUN_146ac8b88(void)

undefined8 * FUN_146ac8b88(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f1a0b0;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ac8bcc FUN_146ac8bcc body=81 status=ok
// SIG undefined FUN_146ac8bcc(void)

undefined8 FUN_146ac8bcc(longlong param_1)

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



// FUNCTION 146ac8c24 FUN_146ac8c24 body=89 status=ok
// SIG undefined FUN_146ac8c24(void)

bool FUN_146ac8c24(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_146ac8c6f;
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
LAB_146ac8c6f:
  return lVar6 == param_2;
}



// FUNCTION 146ac8c9a FUN_146ac8c9a body=118 status=ok
// SIG undefined FUN_146ac8c9a(void)

void FUN_146ac8c9a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f04fc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f1a0b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 146ac8d10 FUN_146ac8d10 body=118 status=ok
// SIG undefined FUN_146ac8d10(void)

void FUN_146ac8d10(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f04fc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f1a0b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 146ac8d86 FUN_146ac8d86 body=156 status=ok
// SIG undefined FUN_146ac8d86(void)

void FUN_146ac8d86(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f04fc0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f1a0b0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146ac8e12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146ac8e22 FUN_146ac8e22 body=105 status=ok
// SIG undefined FUN_146ac8e22(void)

undefined8 FUN_146ac8e22(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_146ac8e76:
    (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30),param_2);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_146ac8e76;
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
    (**(code **)(param_1 + 0x28))
              ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18),param_2);
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
  return param_2;
}



// FUNCTION 146ac8e8c FUN_146ac8e8c body=143 status=ok
// SIG undefined FUN_146ac8e8c(void)

ulonglong FUN_146ac8e8c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_146ac8efa:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146ac8efa;
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
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30),local_28);
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
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 146ac8f1c FUN_146ac8f1c body=300 status=ok
// SIG undefined FUN_146ac8f1c(void)

longlong * FUN_146ac8f1c(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  plVar3 = (longlong *)FUN_14001cc68(0x5f0,0x10);
  FUN_146ac904a(plVar3);
  plVar4 = plVar3 + 2;
  local_30 = plVar4;
  local_28 = plVar3;
  FUN_146aca1f2(&local_30,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_146ac8fdb;
    param_1[1] = 0;
LAB_146ac8fa5:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_146ac8fdb;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar4;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = (longlong)plVar4;
    plVar4 = (longlong *)param_1[1];
    if (plVar3 != plVar4) {
      param_1[1] = (longlong)plVar3;
      if (plVar4 == (longlong *)0x0) goto LAB_146ac8fdb;
      goto LAB_146ac8fa5;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_146ac8fdb;
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
LAB_146ac8fdb:
  plVar4 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_38 = 0x5e0;
  FUN_140a52e78(*param_1,"SNotificationItemExternalImpl",
                ".\\Runtime/Slate/Private/Widgets/Notifications/SNotificationList.cpp",0x325);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ac904a FUN_146ac904a body=159 status=ok
// SIG undefined FUN_146ac904a(void)

undefined8 * FUN_146ac904a(undefined8 *param_1)

{
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_149f1a120;
  memset(param_1 + 2,0,0x5e0);
  FUN_146ac96c4(param_1 + 2);
  param_1[2] = &PTR_FUN_149f1a3e0;
  param_1[0xb3] = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  param_1[0xb5] = 0;
  *(undefined4 *)(param_1 + 0xb6) = 0;
  FUN_144a5dc74(param_1 + 0xb7);
  *(undefined1 *)(param_1 + 0xb9) = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  param_1[2] = &PTR_FUN_149f1a140;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  return param_1;
}



// FUNCTION 146ac90f4 FUN_146ac90f4 body=29 status=ok
// SIG undefined FUN_146ac90f4(void)

undefined8 FUN_146ac90f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ac9112 FUN_146ac9112 body=38 status=ok
// SIG undefined FUN_146ac9112(void)

undefined8 FUN_146ac9112(undefined8 param_1,int param_2)

{
  FUN_146aca1a8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ac9138 FUN_146ac9138 body=160 status=ok
// SIG undefined FUN_146ac9138(void)

void FUN_146ac9138(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  longlong *local_40;
  undefined4 local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14133824c(param_1 + 0x278);
  local_40 = *(longlong **)(param_1 + 0x278);
  uVar1 = *(undefined8 *)(param_1 + 0x340);
  if (local_40 != (longlong *)0x0) {
    (**(code **)(*local_40 + 8))();
  }
  local_38 = *(undefined4 *)(param_1 + 0x280);
  local_30 = *(undefined1 *)(param_1 + 0x288);
  local_28 = 0;
  local_20 = 0;
  FUN_1413a4324(&local_28,param_1 + 0x290);
  FUN_140a5cace(uVar1,&local_40);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ac91da FUN_146ac91da body=160 status=ok
// SIG undefined FUN_146ac91da(void)

void FUN_146ac91da(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  longlong *local_40;
  undefined4 local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14133824c(param_1 + 0x2a0);
  local_40 = *(longlong **)(param_1 + 0x2a0);
  uVar1 = *(undefined8 *)(param_1 + 0x350);
  if (local_40 != (longlong *)0x0) {
    (**(code **)(*local_40 + 8))();
  }
  local_38 = *(undefined4 *)(param_1 + 0x2a8);
  local_30 = *(undefined1 *)(param_1 + 0x2b0);
  local_28 = 0;
  local_20 = 0;
  FUN_1413a4324(&local_28,param_1 + 0x2b8);
  FUN_140a5cace(uVar1,&local_40);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ac927c FUN_146ac927c body=93 status=ok
// SIG undefined FUN_146ac927c(void)

void FUN_146ac927c(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  
  FUN_14009d848(param_1 + 0x598);
  if (*(longlong **)(param_3 + 0x18) != (longlong *)0x0 && *(int *)(param_3 + 0x20) != 0) {
    cVar1 = (**(code **)(**(longlong **)(param_3 + 0x18) + 0x30))();
    if (cVar1 != '\0') goto LAB_146ac92b9;
  }
  if (*(char *)(param_3 + 0x10) != '\x01') {
    return;
  }
LAB_146ac92b9:
  FUN_14133824c(param_1 + 0x5a8,param_3);
  return;
}



// FUNCTION 146ac92da FUN_146ac92da body=107 status=ok
// SIG undefined FUN_146ac92da(void)

void FUN_146ac92da(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 1;
  local_20 = 0;
  uStack_18 = 0;
  *(undefined1 *)(param_1 + 0x2fc) = 1;
  *(undefined4 *)(param_1 + 0x2f8) = param_2;
  local_28 = param_2;
  FUN_144a450dc(param_1 + 0x300,&local_20);
  FUN_1449db362(&local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ac9346 FUN_146ac9346 body=107 status=ok
// SIG undefined FUN_146ac9346(void)

void FUN_146ac9346(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 1;
  local_20 = 0;
  uStack_18 = 0;
  *(undefined1 *)(param_1 + 0x2cc) = 1;
  *(undefined4 *)(param_1 + 0x2c8) = param_2;
  local_28 = param_2;
  FUN_144a450dc(param_1 + 0x2d0,&local_20);
  FUN_1449db362(&local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ac93b2 FUN_146ac93b2 body=107 status=ok
// SIG undefined FUN_146ac93b2(void)

void FUN_146ac93b2(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 1;
  local_20 = 0;
  uStack_18 = 0;
  *(undefined1 *)(param_1 + 0x2e4) = 1;
  *(undefined4 *)(param_1 + 0x2e0) = param_2;
  local_28 = param_2;
  FUN_144a450dc(param_1 + 0x2e8,&local_20);
  FUN_1449db362(&local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ac9426 FUN_146ac9426 body=40 status=ok
// SIG undefined FUN_146ac9426(void)

void FUN_146ac9426(longlong param_1,undefined4 param_2)

{
  FUN_146ac9978();
                    /* WARNING: Could not recover jumptable at 0x000146ac944b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0x5d0))(*(undefined8 **)(param_1 + 0x5d0),param_2);
  return;
}



// FUNCTION 146ac9456 FUN_146ac9456 body=340 status=ok
// SIG undefined FUN_146ac9456(void)

void FUN_146ac9456(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  bool bVar8;
  undefined4 uVar9;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_14285ff5a(&local_90);
  lVar3 = param_1 + 0x368;
  FUN_146980d02(lVar3,&local_90);
  FUN_1402bc42a(&local_90);
  if (((*(int *)(param_1 + 0x2f0) != 0) && (*(longlong **)(param_1 + 0x2e8) != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x2e8) + 0x30))(), cVar5 != '\0')) {
    if (*(int *)(param_1 + 0x2f0) == 0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = *(longlong **)(param_1 + 0x2e8);
    }
    uVar9 = (**(code **)(*plVar7 + 0x58))();
    *(undefined4 *)(param_1 + 0x2e0) = uVar9;
  }
  local_98 = 0;
  FUN_14692f186(lVar3,&local_90,0,*(undefined4 *)(param_1 + 0x2e0));
  *(undefined4 *)(param_1 + 0x3d8) = (undefined4)local_90;
  *(undefined4 *)(param_1 + 0x3dc) = local_90._4_4_;
  *(undefined4 *)(param_1 + 0x3e0) = (undefined4)uStack_88;
  *(undefined4 *)(param_1 + 0x3e4) = uStack_88._4_4_;
  uStack_88 = *(longlong **)(param_1 + 0x10);
  if (uStack_88 == (longlong *)0x0) {
    uStack_88 = (longlong *)0x0;
    local_90 = 0;
  }
  else {
    iVar6 = (int)uStack_88[1];
    local_90 = 0;
    do {
      if (iVar6 == 0) {
        uStack_88 = (longlong *)0x0;
        goto LAB_146ac9533;
      }
      LOCK();
      iVar4 = (int)uStack_88[1];
      bVar8 = iVar6 == iVar4;
      if (bVar8) {
        *(int *)(uStack_88 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
    } while (!bVar8);
    local_90 = *(undefined8 *)(param_1 + 8);
  }
LAB_146ac9533:
  local_98 = 1;
  FUN_14692f4ee(lVar3,&local_90,0,0);
  plVar7 = uStack_88;
  if (uStack_88 != (longlong *)0x0) {
    LOCK();
    plVar1 = uStack_88 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*uStack_88)(uStack_88);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ac95ac FUN_146ac95ac body=278 status=ok
// SIG undefined FUN_146ac95ac(void)

void FUN_146ac95ac(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  *(undefined4 *)(param_1 + 0x330) = *param_2;
  *(undefined4 *)(param_1 + 0x334) = uVar4;
  *(undefined4 *)(param_1 + 0x338) = uVar5;
  *(undefined4 *)(param_1 + 0x33c) = uVar6;
  FUN_14285ff5a(&local_90);
  lVar3 = param_1 + 0x4f8;
  FUN_146980d02(lVar3,&local_90);
  FUN_1402bc42a(&local_90);
  local_98 = 0;
  FUN_14692f186(lVar3,&local_90,0,0x3f400000);
  *(undefined4 *)(param_1 + 0x478) = (undefined4)local_90;
  *(undefined4 *)(param_1 + 0x47c) = local_90._4_4_;
  *(undefined4 *)(param_1 + 0x480) = (undefined4)uStack_88;
  *(undefined4 *)(param_1 + 0x484) = uStack_88._4_4_;
  uStack_88 = *(longlong **)(param_1 + 0x10);
  if (uStack_88 == (longlong *)0x0) {
    uStack_88 = (longlong *)0x0;
    local_90 = 0;
  }
  else {
    iVar9 = (int)uStack_88[1];
    local_90 = 0;
    do {
      if (iVar9 == 0) {
        uStack_88 = (longlong *)0x0;
        goto LAB_146ac9652;
      }
      LOCK();
      iVar8 = (int)uStack_88[1];
      bVar10 = iVar9 == iVar8;
      if (bVar10) {
        *(int *)(uStack_88 + 1) = iVar9 + 1;
        iVar8 = iVar9;
      }
      iVar9 = iVar8;
      UNLOCK();
    } while (!bVar10);
    local_90 = *(undefined8 *)(param_1 + 8);
  }
LAB_146ac9652:
  local_98 = 1;
  FUN_14692f220(lVar3,&local_90,0,0);
  plVar7 = uStack_88;
  if (uStack_88 != (longlong *)0x0) {
    LOCK();
    plVar1 = uStack_88 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*uStack_88)(uStack_88);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ac96c4 FUN_146ac96c4 body=652 status=ok
// SIG undefined FUN_146ac96c4(void)

undefined8 * FUN_146ac96c4(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 *local_70;
  undefined4 local_68;
  undefined8 local_60;
  longlong *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140a55f88();
  *param_1 = &PTR_LAB_149f1a680;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  FUN_144a5dc74(param_1 + 0x4f);
  *(undefined1 *)(param_1 + 0x51) = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  FUN_144a5dc74(param_1 + 0x54);
  *(undefined1 *)(param_1 + 0x56) = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c5) = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2dd) = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2f5) = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  *(undefined8 *)((longlong)param_1 + 0x309) = 0;
  *(undefined8 *)((longlong)param_1 + 0x311) = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  *(undefined4 *)(param_1 + 0x66) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x334) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x67) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x33c) = 0x3f800000;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  FUN_14285ff5a(param_1 + 0x6d);
  FUN_14692ef24(param_1 + 0x7b,0,0);
  FUN_14285ff5a(param_1 + 0x7d);
  FUN_14692ef24(param_1 + 0x8b,0,0);
  FUN_14692ef24(param_1 + 0x8d,0,0);
  FUN_14692ef24(param_1 + 0x8f,0,0);
  FUN_14285ff5a(param_1 + 0x91);
  FUN_14285ff5a(param_1 + 0x9f);
  *(undefined4 *)(param_1 + 0xad) = 0xffffffff;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x57d) = 0;
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) & 0xfb;
  FUN_144a88240(param_1 + 3,param_1);
  uVar4 = FUN_1401cb356();
  local_70 = (undefined8 *)0x0;
  local_68 = 0;
  FUN_1446efa72(&local_70,0,3,0x10);
  puVar3 = local_70;
  local_68 = 3;
  *local_70 = &PTR_LAB_149e02020;
  uVar5 = FUN_144a3f946();
  puVar3[2] = uVar5;
  *puVar3 = &PTR_FUN_149f1a960;
  puVar3[3] = param_1;
  puVar3[4] = FUN_146ac9aa0;
  *(undefined4 *)(puVar3 + 5) = 0;
  local_78 = 0;
  FUN_1405f67fc(uVar4,&local_60,&local_70,L"SNotificationExtendable_Update");
  if (param_1 + 0xae != &local_60) {
    param_1[0xae] = local_60;
    local_60 = 0;
    plVar2 = (longlong *)param_1[0xaf];
    param_1[0xaf] = local_58;
    local_58 = (longlong *)0x0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
  }
  if (local_58 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_58 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_58 + 0x10))();
    }
  }
  FUN_1449db362(&local_70);
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ac9952 FUN_146ac9952 body=38 status=ok
// SIG undefined FUN_146ac9952(void)

undefined8 FUN_146ac9952(undefined8 param_1,int param_2)

{
  FUN_146ac9f86();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ac9978 FUN_146ac9978 body=295 status=ok
// SIG undefined FUN_146ac9978(void)

void FUN_146ac9978(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(uint *)(param_1 + 0x360) = param_2;
  if ((param_2 & 0xfffffffe) == 2) {
    FUN_14285ff5a(&local_90);
    lVar3 = param_1 + 0x4f8;
    FUN_146980d02(lVar3,&local_90);
    FUN_1402bc42a(&local_90);
    local_98 = 0;
    FUN_14692f186(lVar3,&local_90,0,0x3f400000);
    *(undefined4 *)(param_1 + 0x478) = (undefined4)local_90;
    *(undefined4 *)(param_1 + 0x47c) = local_90._4_4_;
    *(undefined4 *)(param_1 + 0x480) = (undefined4)uStack_88;
    *(undefined4 *)(param_1 + 0x484) = uStack_88._4_4_;
    uStack_88 = *(longlong **)(param_1 + 0x10);
    if (uStack_88 == (longlong *)0x0) {
      uStack_88 = (longlong *)0x0;
      local_90 = 0;
    }
    else {
      iVar6 = (int)uStack_88[1];
      local_90 = 0;
      do {
        if (iVar6 == 0) {
          uStack_88 = (longlong *)0x0;
          goto LAB_146ac9a43;
        }
        LOCK();
        iVar5 = (int)uStack_88[1];
        bVar7 = iVar6 == iVar5;
        if (bVar7) {
          *(int *)(uStack_88 + 1) = iVar6 + 1;
          iVar5 = iVar6;
        }
        iVar6 = iVar5;
        UNLOCK();
      } while (!bVar7);
      local_90 = *(undefined8 *)(param_1 + 8);
    }
LAB_146ac9a43:
    local_98 = 1;
    FUN_14692f220(lVar3,&local_90,0,0);
    plVar4 = uStack_88;
    if (uStack_88 != (longlong *)0x0) {
      LOCK();
      plVar1 = uStack_88 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*uStack_88)(uStack_88);
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
  if ((local_20 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ac9aa0 FUN_146ac9aa0 body=359 status=ok
// SIG undefined FUN_146ac9aa0(void)

undefined8 FUN_146ac9aa0(longlong *param_1,float param_2)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined4 uVar8;
  
  plVar1 = param_1 + 0x6d;
  cVar4 = FUN_14692f5de(plVar1);
  cVar5 = cVar4;
  if (*(char *)((longlong)param_1 + 0x584) == '\x01') {
    fVar2 = *(float *)(param_1 + 0xb0);
    *(float *)(param_1 + 0xb0) = param_2 + fVar2;
    cVar5 = '\x01';
    if (cVar4 == '\0') {
      if (((int)param_1[0x5b] != 0) && ((longlong *)param_1[0x5a] != (longlong *)0x0)) {
        cVar4 = (**(code **)(*(longlong *)param_1[0x5a] + 0x30))();
        if (cVar4 != '\0') {
          if ((int)param_1[0x5b] == 0) {
            plVar7 = (longlong *)0x0;
          }
          else {
            plVar7 = (longlong *)param_1[0x5a];
          }
          uVar8 = (**(code **)(*plVar7 + 0x58))();
          *(undefined4 *)(param_1 + 0x59) = uVar8;
        }
      }
      fVar3 = *(float *)(param_1 + 0x59);
      if (((int)param_1[0x61] != 0) && ((longlong *)param_1[0x60] != (longlong *)0x0)) {
        cVar4 = (**(code **)(*(longlong *)param_1[0x60] + 0x30))();
        if (cVar4 != '\0') {
          if ((int)param_1[0x61] == 0) {
            plVar7 = (longlong *)0x0;
          }
          else {
            plVar7 = (longlong *)param_1[0x60];
          }
          uVar8 = (**(code **)(*plVar7 + 0x58))();
          *(undefined4 *)(param_1 + 0x5f) = uVar8;
        }
      }
      if (param_2 + fVar2 <= fVar3 + *(float *)(param_1 + 0x5f)) {
        FUN_1459b8360(plVar1);
        goto LAB_146ac9afa;
      }
      (**(code **)(*param_1 + 0x288))(param_1);
    }
  }
  cVar4 = FUN_1459b8360(plVar1);
  if (cVar5 == '\x01' && cVar4 == '\0') {
    FUN_146ac9dc2(param_1);
  }
LAB_146ac9afa:
  cVar5 = FUN_1459b8360(param_1 + 0x7d);
  if ((cVar5 == '\0') && ((int)param_1[0xad] != -1)) {
    uVar6 = FUN_14171dbb4();
    FUN_14692fd60(uVar6,param_1 + 0xad);
  }
  return 1;
}



// FUNCTION 146ac9c0a FUN_146ac9c0a body=29 status=ok
// SIG undefined FUN_146ac9c0a(void)

undefined8 FUN_146ac9c0a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ac9c44 FUN_146ac9c44 body=101 status=ok
// SIG undefined FUN_146ac9c44(void)

void FUN_146ac9c44(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f1a960;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 146ac9caa FUN_146ac9caa body=101 status=ok
// SIG undefined FUN_146ac9caa(void)

void FUN_146ac9caa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f1a960;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 146ac9d10 FUN_146ac9d10 body=134 status=ok
// SIG undefined FUN_146ac9d10(void)

void FUN_146ac9d10(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f1a960;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146ac9d87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146ac9da8 FUN_146ac9da8 body=25 status=ok
// SIG undefined FUN_146ac9da8(void)

undefined8 FUN_146ac9da8(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 146ac9dc2 FUN_146ac9dc2 body=451 status=ok
// SIG undefined FUN_146ac9dc2(void)

void FUN_146ac9dc2(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14285ff5a(&local_a8);
  FUN_146980d02(param_1 + 0x6d,&local_a8);
  FUN_1402bc42a(&local_a8);
  FUN_14692ef24(&local_a8,0,0);
  *(undefined4 *)(param_1 + 0x7b) = (undefined4)local_a8;
  *(undefined4 *)((longlong)param_1 + 0x3dc) = local_a8._4_4_;
  *(undefined4 *)(param_1 + 0x7c) = (undefined4)uStack_a0;
  *(undefined4 *)((longlong)param_1 + 0x3e4) = uStack_a0._4_4_;
  (**(code **)(*param_1 + 0x278))(param_1,0);
  if ((int)param_1[0xad] != -1) {
    uVar9 = FUN_14171dbb4();
    FUN_14692fd60(uVar9,param_1 + 0xad);
  }
  plVar3 = (longlong *)param_1[0x4e];
  if (plVar3 != (longlong *)0x0) {
    iVar8 = (int)plVar3[1];
    do {
      if (iVar8 == 0) goto LAB_146ac9f5e;
      LOCK();
      iVar7 = (int)plVar3[1];
      bVar10 = iVar8 == iVar7;
      if (bVar10) {
        *(int *)(plVar3 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar10);
    plVar4 = (longlong *)param_1[0x4d];
    if (plVar4 != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[2];
      if (plVar5 == (longlong *)0x0) {
LAB_146ac9ed8:
        local_a8 = 0;
        uStack_a0 = (longlong *)0x0;
        bVar10 = true;
      }
      else {
        iVar8 = (int)plVar5[1];
        do {
          if (iVar8 == 0) goto LAB_146ac9ed8;
          LOCK();
          iVar7 = (int)plVar5[1];
          bVar10 = iVar8 == iVar7;
          if (bVar10) {
            *(int *)(plVar5 + 1) = iVar8 + 1;
            iVar7 = iVar8;
          }
          iVar8 = iVar7;
          UNLOCK();
        } while (!bVar10);
        lVar6 = param_1[1];
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
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
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        bVar10 = false;
        local_a8 = lVar6;
        uStack_a0 = plVar5;
      }
      plVar5 = uStack_a0;
      (**(code **)(*plVar4 + 0x248))(plVar4,&local_a8);
      plVar4 = uStack_a0;
      if (uStack_a0 != (longlong *)0x0) {
        LOCK();
        plVar1 = uStack_a0 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*uStack_a0)(uStack_a0);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      if (!bVar10) {
        LOCK();
        plVar4 = plVar5 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
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
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
LAB_146ac9f5e:
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ac9f86 FUN_146ac9f86 body=85 status=ok
// SIG undefined FUN_146ac9f86(void)

void FUN_146ac9f86(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f1a3e0;
  FUN_1449db362(param_1 + 0xb8);
  if ((longlong *)param_1[0xb5] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xb5] + 0x10))();
  }
  FUN_1449db362(param_1 + 0xb3);
  FUN_1449db362(param_1 + 0xb1);
  FUN_146ac9fdc(param_1);
  return;
}



// FUNCTION 146ac9fdc FUN_146ac9fdc body=459 status=ok
// SIG undefined FUN_146ac9fdc(void)

void FUN_146ac9fdc(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_LAB_149f1a680;
  if (*(int *)(param_1 + 0xad) != -1) {
    uVar4 = FUN_14171dbb4();
    FUN_14692fd60(uVar4,param_1 + 0xad);
  }
  FUN_1401cb356();
  local_28 = param_1[0xae];
  local_20 = param_1[0xaf];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
    UNLOCK();
  }
  FUN_140d61352(&local_28);
  plVar3 = (longlong *)param_1[0xaf];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  FUN_1402bc42a(param_1 + 0x9f);
  FUN_1402bc42a(param_1 + 0x91);
  FUN_1402bc42a(param_1 + 0x7d);
  FUN_1402bc42a(param_1 + 0x6d);
  plVar3 = (longlong *)param_1[0x6b];
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
  plVar3 = (longlong *)param_1[0x69];
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
  FUN_1449db362(param_1 + 100);
  FUN_1449db362(param_1 + 0x60);
  FUN_1449db362(param_1 + 0x5d);
  FUN_1449db362(param_1 + 0x5a);
  FUN_1449db362(param_1 + 0x57);
  if ((longlong *)param_1[0x54] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x54] + 0x10))();
  }
  FUN_1449db362(param_1 + 0x52);
  if ((longlong *)param_1[0x4f] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x4f] + 0x10))();
  }
  plVar3 = (longlong *)param_1[0x4e];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  *param_1 = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x3f);
  FUN_140c057ec(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146aca1a8 FUN_146aca1a8 body=74 status=ok
// SIG undefined FUN_146aca1a8(void)

void FUN_146aca1a8(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149f1a140;
  plVar3 = (longlong *)param_1[0xbb];
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
  FUN_146ac9f86(param_1);
  return;
}



// FUNCTION 146aca1f2 FUN_146aca1f2 body=167 status=ok
// SIG undefined FUN_146aca1f2(void)

void FUN_146aca1f2(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_146aca26d;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_146aca26d;
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
LAB_146aca26d:
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
                    /* WARNING: Could not recover jumptable at 0x000146aca28d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 146aca29a FUN_146aca29a body=3307 status=ok
// SIG undefined FUN_146aca29a(void)

void FUN_146aca29a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_dc8 [32];
  undefined1 *local_da8;
  undefined1 local_d99;
  undefined1 local_d98 [8];
  longlong *local_d90;
  undefined1 local_d79;
  undefined1 local_d78 [8];
  longlong *local_d70;
  undefined1 local_d59;
  undefined1 local_d58 [8];
  longlong *local_d50;
  undefined1 local_d39;
  undefined2 local_d38;
  undefined8 local_d30;
  undefined8 uStack_d28;
  undefined8 local_d20;
  undefined8 local_d18;
  undefined1 local_d10;
  undefined8 local_d08;
  undefined8 uStack_d00;
  undefined8 local_cf8;
  longlong *local_cf0;
  undefined8 local_ce8;
  longlong *local_ce0;
  undefined1 local_cd8 [8];
  longlong *local_cd0;
  undefined8 local_cc8;
  longlong *local_cc0;
  undefined4 local_cb8;
  undefined1 local_cb4;
  undefined8 local_cb0;
  undefined8 uStack_ca8;
  undefined8 local_ca0;
  longlong *local_c98;
  undefined8 local_c90;
  undefined8 local_c88;
  undefined1 local_c80;
  undefined8 local_c78;
  undefined8 uStack_c70;
  undefined8 local_c68;
  longlong *local_c60;
  undefined4 local_c58;
  undefined1 local_c54;
  undefined8 local_c50;
  undefined8 uStack_c48;
  undefined8 local_c40;
  undefined8 uStack_c38;
  undefined1 local_c30;
  undefined8 local_c28;
  undefined8 uStack_c20;
  undefined8 local_c18;
  longlong *local_c10;
  code *local_c08;
  longlong *plStack_c00;
  undefined1 local_bf8;
  undefined8 local_bf0;
  undefined8 uStack_be8;
  undefined8 local_bd8;
  longlong *local_bd0;
  undefined8 local_b80;
  longlong *local_b78;
  code *local_b28;
  ulonglong uStack_b20;
  undefined1 local_b18;
  undefined8 local_b10;
  undefined8 uStack_b08;
  undefined2 local_ab8;
  undefined1 local_ab0 [304];
  undefined4 local_980;
  undefined4 uStack_97c;
  undefined4 uStack_978;
  undefined4 uStack_974;
  undefined1 local_970;
  undefined8 local_968;
  undefined8 uStack_960;
  undefined1 local_958;
  undefined1 auStack_950 [80];
  undefined8 local_900;
  undefined1 local_8f8;
  undefined1 auStack_8f0 [16];
  undefined8 local_8e0;
  longlong *local_8d8;
  undefined1 local_7f0 [8];
  longlong *local_7e8;
  undefined1 local_638 [8];
  longlong *local_630;
  undefined8 local_460;
  longlong *local_458;
  undefined4 local_450;
  undefined1 local_44c;
  undefined1 local_448 [184];
  code *local_390;
  undefined4 local_388;
  undefined8 local_1e8;
  longlong *local_1e0;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined1 local_1c0;
  code *local_1b8;
  longlong *local_1b0;
  undefined4 local_1a8;
  undefined1 local_1a4;
  undefined1 local_1a0 [56];
  undefined8 local_168;
  undefined1 local_160;
  undefined1 auStack_158 [248];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_dc8;
  *(undefined1 *)(param_1 + 0x2cc) = *(undefined1 *)(param_2 + 0x1ac);
  *(undefined4 *)(param_1 + 0x2c8) = *(undefined4 *)(param_2 + 0x1a8);
  FUN_140a52b3c(param_1 + 0x2d0,param_2 + 0x1b0);
  *(undefined1 *)(param_1 + 0x2e4) = *(undefined1 *)(param_2 + 0x1c4);
  *(undefined4 *)(param_1 + 0x2e0) = *(undefined4 *)(param_2 + 0x1c0);
  FUN_140a52b3c(param_1 + 0x2e8,param_2 + 0x1c8);
  *(undefined1 *)(param_1 + 0x2fc) = *(undefined1 *)(param_2 + 0x1dc);
  *(undefined4 *)(param_1 + 0x2f8) = *(undefined4 *)(param_2 + 0x1d8);
  FUN_140a52b3c(param_1 + 0x300,param_2 + 0x1e0);
  uVar8 = *(undefined8 *)(param_2 + 0x1f8);
  lVar5 = *(longlong *)(param_2 + 0x200);
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar7 = *(longlong **)(param_1 + 0x5d8);
  *(undefined8 *)(param_1 + 0x5d0) = uVar8;
  *(longlong *)(param_1 + 0x5d8) = lVar5;
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
  local_c18 = DAT_14c98dec8;
  local_c10 = DAT_14c98ded0;
  if (DAT_14c98ded0 != (longlong *)0x0) {
    LOCK();
    *(int *)(DAT_14c98ded0 + 1) = (int)DAT_14c98ded0[1] + 1;
    UNLOCK();
  }
  cVar6 = (**(code **)(**(longlong **)(param_1 + 0x5d0) + 0x10))();
  if (cVar6 == '\0') {
    FUN_140a562d0(&local_390);
    local_b28 = (code *)0x0;
    uStack_b20 = 0;
    local_b18 = 1;
    local_b10 = 0;
    uStack_b08 = 0;
    local_1d0 = 0;
    uStack_1c8 = 0;
    local_1c0 = 1;
    FUN_144a450dc(&local_1b8,&local_b10);
    FUN_1449db362(&local_b10);
    plVar7 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
    if (plVar7 == (longlong *)0x0) {
      plVar7 = DAT_14c96b350;
    }
    FUN_1446ddc76(&local_c90,"NoBorder",1);
    local_c88 = (**(code **)(*plVar7 + 0x50))(plVar7,local_c90,0,0);
    local_c80 = 1;
    local_c78 = 0;
    uStack_c70 = 0;
    local_160 = 1;
    local_168 = local_c88;
    FUN_144a450dc(auStack_158,&local_c78);
    FUN_1449db362(&local_c78);
    local_b28 = FUN_146acb100;
    uStack_b20 = uStack_b20 & 0xffffffff00000000;
    FUN_146acb4d6(&local_390,param_1,&local_b28);
    local_b28 = FUN_146acb1d2;
    uStack_b20 = uStack_b20 & 0xffffffff00000000;
    FUN_146acb5a0(&local_390,param_1,&local_b28);
    local_b28 = FUN_146acb3a2;
    uStack_b20 = uStack_b20 & 0xffffffff00000000;
    FUN_146acb658(&local_390,param_1,&local_b28);
    FUN_140a53a96(local_638);
    local_cb8 = *(undefined4 *)(param_2 + 0x1f0);
    local_cb4 = 1;
    local_cb0 = 0;
    uStack_ca8 = 0;
    local_44c = 1;
    local_450 = local_cb8;
    FUN_144a450dc(local_448,&local_cb0);
    FUN_1449db362(&local_cb0);
    FUN_140a504fe(local_7f0);
    FUN_140a4fdf2(&local_b80,0);
    (**(code **)(**(longlong **)(param_1 + 0x5d0) + 8))(*(longlong **)(param_1 + 0x5d0),local_cd8);
    uVar8 = FUN_140a4fd40(&local_b80,local_cd8);
    uVar8 = FUN_140a5058c(local_7f0,uVar8);
    FUN_140a4fdf2(&local_bd8,0);
    FUN_140a562d0(&local_b28);
    local_c08 = (code *)0x0;
    plStack_c00 = (longlong *)0x0;
    local_bf8 = 1;
    local_bf0 = 0;
    uStack_be8 = 0;
    local_968 = 0;
    uStack_960 = 0;
    local_958 = 1;
    FUN_144a450dc(auStack_950,&local_bf0);
    FUN_1449db362(&local_bf0);
    plVar7 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
    if (plVar7 == (longlong *)0x0) {
      plVar7 = DAT_14c96b350;
    }
    FUN_1446ddc76(&local_d20,"NotificationList.ItemBackground_Border_Transparent",1);
    local_d18 = (**(code **)(*plVar7 + 0x50))(plVar7,local_d20,0,0);
    local_d10 = 1;
    local_d08 = 0;
    uStack_d00 = 0;
    local_8f8 = 1;
    local_900 = local_d18;
    FUN_144a450dc(auStack_8f0,&local_d08);
    FUN_1449db362(&local_d08);
    local_c08 = FUN_146acb710;
    plStack_c00 = (longlong *)((ulonglong)plStack_c00 & 0xffffffff00000000);
    FUN_146acb4d6(&local_b28,param_1);
    local_d38 = CONCAT11(1,DAT_14c96b23c);
    local_d30 = 0;
    uStack_d28 = 0;
    local_ab8 = local_d38;
    FUN_144a450dc(local_ab0,&local_d30);
    FUN_1449db362(&local_d30);
    local_da8 = &local_d39;
    FUN_140a55c32(&local_c08,"SBorder",
                  ".\\Runtime/Slate/Private/Widgets/Notifications/SNotificationList.cpp",0x2e3);
    FUN_140a530e4(&local_c08,&local_cf8,&local_b28);
    local_ce8 = local_cf8;
    local_ce0 = local_cf0;
    if (local_cf0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_cf0 + 1) = (int)local_cf0[1] + 1;
      UNLOCK();
    }
    uVar9 = FUN_140a4fd40(&local_bd8,&local_ce8);
    uVar8 = FUN_140a5058c(uVar8,uVar9);
    local_da8 = &local_d59;
    FUN_140a536a8(local_d58,"SOverlay",
                  ".\\Runtime/Slate/Private/Widgets/Notifications/SNotificationList.cpp",0x2dc);
    FUN_140a4ff16(local_d58,&local_cc8,uVar8);
    plVar1 = local_458;
    plVar7 = local_cc0;
    if (local_cc0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_cc0 + 1) = (int)local_cc0[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(local_cc0 + 1) = (int)local_cc0[1] + 1;
      UNLOCK();
    }
    local_460 = local_cc8;
    local_458 = local_cc0;
    if (plVar1 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar1 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar1)(plVar1);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    local_da8 = &local_d79;
    FUN_140a53d66(local_d78,&DAT_149efe19f,
                  ".\\Runtime/Slate/Private/Widgets/Notifications/SNotificationList.cpp",0x2d9);
    FUN_140a50bf4(local_d78,&local_ca0,local_638);
    plVar3 = local_1e0;
    plVar1 = local_c98;
    if (local_c98 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_c98 + 1) = (int)local_c98[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(local_c98 + 1) = (int)local_c98[1] + 1;
      UNLOCK();
    }
    local_1e8 = local_ca0;
    local_1e0 = local_c98;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar3 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
    local_da8 = &local_d99;
    FUN_140a55c32(local_d98,"SBorder",
                  ".\\Runtime/Slate/Private/Widgets/Notifications/SNotificationList.cpp",0x2d2);
    FUN_140a530e4(local_d98,&local_c68,&local_390);
    plVar3 = local_c10;
    if (local_c60 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_c60 + 1) = (int)local_c60[1] + 1;
      UNLOCK();
    }
    local_c18 = local_c68;
    local_c10 = local_c60;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar3 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
    if (local_c60 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_c60 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_c60)(local_c60);
        LOCK();
        piVar2 = (int *)((longlong)local_c60 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_c60 + 0x10))(local_c60);
        }
      }
    }
    if (local_d90 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_d90 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_d90)(local_d90);
        LOCK();
        piVar2 = (int *)((longlong)local_d90 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_d90 + 0x10))(local_d90);
        }
      }
    }
    if (plVar1 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar1 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar1)(plVar1);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    if (local_c98 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_c98 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_c98)(local_c98);
        LOCK();
        piVar2 = (int *)((longlong)local_c98 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_c98 + 0x10))(local_c98);
        }
      }
    }
    if (local_d70 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_d70 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_d70)(local_d70);
        LOCK();
        piVar2 = (int *)((longlong)local_d70 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_d70 + 0x10))(local_d70);
        }
      }
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
    if (local_cc0 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_cc0 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_cc0)(local_cc0);
        LOCK();
        piVar2 = (int *)((longlong)local_cc0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_cc0 + 0x10))(local_cc0);
        }
      }
    }
    if (local_d50 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_d50 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_d50)(local_d50);
        LOCK();
        piVar2 = (int *)((longlong)local_d50 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_d50 + 0x10))(local_d50);
        }
      }
    }
    plVar7 = local_ce0;
    if (local_ce0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_ce0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_ce0)(local_ce0);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    if (local_cf0 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_cf0 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_cf0)(local_cf0);
        LOCK();
        piVar2 = (int *)((longlong)local_cf0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_cf0 + 0x10))(local_cf0);
        }
      }
    }
    plVar7 = plStack_c00;
    if (plStack_c00 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_c00 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_c00)(plStack_c00);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    FUN_140a59028(&local_b28);
    FUN_1415b5e50(&local_bd8);
    if (local_cd0 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_cd0 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_cd0)(local_cd0);
        LOCK();
        piVar2 = (int *)((longlong)local_cd0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_cd0 + 0x10))(local_cd0);
        }
      }
    }
    FUN_1415b5e50(&local_b80);
    FUN_1415b5e16(local_7f0);
    FUN_140a5660c(local_638);
    FUN_140a59028(&local_390);
  }
  else {
    FUN_146acaf86(&local_b28);
    local_c40 = 0x4100000041800000;
    uStack_c38 = 0x4100000041800000;
    local_c30 = 1;
    local_c28 = 0;
    uStack_c20 = 0;
    local_970 = 1;
    local_980 = 0x41800000;
    uStack_97c = 0x41000000;
    uStack_978 = 0x41800000;
    uStack_974 = 0x41000000;
    FUN_144a450dc(&local_968,&local_c28);
    FUN_1449db362(&local_c28);
    local_390 = FUN_146acb100;
    local_388 = 0;
    FUN_146acb036(&local_b28,param_1,&local_390);
    local_390 = FUN_146acb1d2;
    local_388 = 0;
    FUN_146acb11a(&local_b28,param_1,&local_390);
    local_390 = FUN_146acb3a2;
    local_388 = 0;
    FUN_146acb2ea(&local_b28,param_1,&local_390);
    FUN_140a53a96(&local_390);
    local_c58 = *(undefined4 *)(param_2 + 0x1f0);
    local_c54 = 1;
    local_c50 = 0;
    uStack_c48 = 0;
    local_1a4 = 1;
    local_1a8 = local_c58;
    FUN_144a450dc(local_1a0,&local_c50);
    FUN_1449db362(&local_c50);
    (**(code **)(**(longlong **)(param_1 + 0x5d0) + 8))(*(longlong **)(param_1 + 0x5d0),&local_c08);
    plVar7 = local_1b0;
    if (plStack_c00 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_c00 + 1) = (int)plStack_c00[1] + 1;
      UNLOCK();
    }
    local_1b8 = local_c08;
    local_1b0 = plStack_c00;
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
    local_da8 = local_d58;
    FUN_140a53d66(local_638,&DAT_149efe19f,
                  ".\\Runtime/Slate/Private/Widgets/Notifications/SNotificationList.cpp",0x2c8);
    FUN_140a50bf4(local_638,&local_bd8,&local_390);
    plVar1 = local_8d8;
    plVar7 = local_bd0;
    if (local_bd0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_bd0 + 1) = (int)local_bd0[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(local_bd0 + 1) = (int)local_bd0[1] + 1;
      UNLOCK();
    }
    local_8e0 = local_bd8;
    local_8d8 = local_bd0;
    if (plVar1 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar1 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar1)(plVar1);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    FUN_146acc60c(local_7f0,0x2c2,local_d78);
    FUN_146acb3f2(local_7f0,&local_b80,&local_b28);
    plVar1 = local_c10;
    if (local_b78 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_b78 + 1) = (int)local_b78[1] + 1;
      UNLOCK();
    }
    local_c18 = local_b80;
    local_c10 = local_b78;
    if (plVar1 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar1 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar1)(plVar1);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    if (local_b78 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_b78 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_b78)(local_b78);
        LOCK();
        piVar2 = (int *)((longlong)local_b78 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_b78 + 0x10))(local_b78);
        }
      }
    }
    if (local_7e8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_7e8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_7e8)(local_7e8);
        LOCK();
        piVar2 = (int *)((longlong)local_7e8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_7e8 + 0x10))(local_7e8);
        }
      }
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
    if (local_bd0 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_bd0 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_bd0)(local_bd0);
        LOCK();
        piVar2 = (int *)((longlong)local_bd0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_bd0 + 0x10))(local_bd0);
        }
      }
    }
    if (local_630 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_630 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_630)(local_630);
        LOCK();
        piVar2 = (int *)((longlong)local_630 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_630 + 0x10))(local_630);
        }
      }
    }
    plVar7 = plStack_c00;
    if (plStack_c00 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_c00 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_c00)(plStack_c00);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    FUN_140a5660c(&local_390);
    FUN_146acb466(&local_b28);
  }
  FUN_140a58896(param_1 + 0x1e0,&local_c18);
  plVar7 = local_c10;
  if (local_c10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_c10 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_c10)(local_c10);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_dc8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146acaf86 FUN_146acaf86 body=176 status=ok
// SIG undefined FUN_146acaf86(void)

longlong FUN_146acaf86(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  
  FUN_140a5071c();
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined1 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined1 **)(param_1 + 0x1d0) = &DAT_3f8000003f800000;
  *(undefined1 **)(param_1 + 0x1d8) = &DAT_3f8000003f800000;
  *(undefined1 *)(param_1 + 0x1e0) = 1;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined1 **)(param_1 + 0x1f8) = &DAT_3f8000003f800000;
  *(undefined1 **)(param_1 + 0x200) = &DAT_3f8000003f800000;
  *(undefined1 *)(param_1 + 0x208) = 0;
  *(undefined1 *)(param_1 + 0x20c) = 1;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0x228) = 0x3ff0000000000000;
  *(undefined1 *)(param_1 + 0x230) = 1;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x248) = DAT_14c98dec8;
  lVar2 = DAT_14c98ded0;
  *(longlong *)(param_1 + 0x250) = DAT_14c98ded0;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 146acb036 FUN_146acb036 body=200 status=ok
// SIG undefined FUN_146acb036(void)

longlong FUN_146acb036(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint local_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uStack_40 = *(undefined4 *)(param_3 + 1);
  local_48 = *param_3;
  FUN_146acb794(local_58,param_2,&local_48);
  local_48 = 0x3f800000;
  uStack_40 = 0x3f800000;
  uStack_3c = 0x3f800000;
  local_38 = local_38 & 0xffffff00;
  local_34 = 1;
  local_30 = 0;
  local_28 = 0;
  FUN_140a5aaa0(&local_30,local_58);
  *(uint *)(param_1 + 0x208) = local_38;
  *(undefined4 *)(param_1 + 0x1f8) = (undefined4)local_48;
  *(undefined4 *)(param_1 + 0x1fc) = local_48._4_4_;
  *(undefined4 *)(param_1 + 0x200) = uStack_40;
  *(undefined4 *)(param_1 + 0x204) = uStack_3c;
  *(undefined1 *)(param_1 + 0x20c) = local_34;
  FUN_144a450dc(param_1 + 0x210,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_58);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146acb100 FUN_146acb100 body=26 status=ok
// SIG undefined FUN_146acb100(void)

longlong FUN_146acb100(undefined8 param_1,longlong param_2)

{
  FUN_146acb1d2();
  *(undefined1 *)(param_2 + 0x10) = 0;
  return param_2;
}



// FUNCTION 146acb11a FUN_146acb11a body=183 status=ok
// SIG undefined FUN_146acb11a(void)

longlong FUN_146acb11a(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = *param_3;
  uStack_40 = CONCAT44(uStack_40._4_4_,*(undefined4 *)(param_3 + 1));
  FUN_146acbc62(local_58,param_2,&local_48);
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 1;
  local_30 = 0;
  local_28 = 0;
  FUN_140a5c51c(&local_30,local_58);
  *(undefined1 *)(param_1 + 0x1e0) = local_38;
  *(undefined4 *)(param_1 + 0x1d0) = (undefined4)local_48;
  *(undefined4 *)(param_1 + 0x1d4) = local_48._4_4_;
  *(undefined4 *)(param_1 + 0x1d8) = (undefined4)uStack_40;
  *(undefined4 *)(param_1 + 0x1dc) = uStack_40._4_4_;
  FUN_144a450dc(param_1 + 0x1e8,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_58);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146acb1d2 FUN_146acb1d2 body=279 status=ok
// SIG undefined FUN_146acb1d2(void)

float * FUN_146acb1d2(longlong param_1,float *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  bool bVar8;
  bool bVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  
  plVar7 = *(longlong **)(param_1 + 0x270);
  bVar9 = true;
  if (plVar7 == (longlong *)0x0) {
LAB_146acb280:
    plVar7 = (longlong *)0x0;
  }
  else {
    iVar6 = (int)plVar7[1];
    do {
      if (iVar6 == 0) goto LAB_146acb280;
      LOCK();
      iVar5 = (int)plVar7[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar7 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar3 = *(longlong *)(param_1 + 0x268);
    if (lVar3 != 0) {
      plVar4 = *(longlong **)(lVar3 + 0x280);
      if (plVar4 != (longlong *)0x0) {
        iVar6 = (int)plVar4[1];
        do {
          if (iVar6 == 0) goto LAB_146acb274;
          LOCK();
          iVar5 = (int)plVar4[1];
          bVar9 = iVar6 == iVar5;
          if (bVar9) {
            *(int *)(plVar4 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          UNLOCK();
        } while (!bVar9);
        lVar3 = *(longlong *)(lVar3 + 0x278);
        if (lVar3 != 0) {
          uVar10 = FUN_14692ef30(param_1 + 0x3d8);
          FUN_14698086c(lVar3,uVar10);
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
LAB_146acb274:
      *param_2 = 1.0;
      param_2[1] = 1.0;
      param_2[2] = 1.0;
      param_2[3] = 1.0;
      goto LAB_146acb2bb;
    }
    bVar9 = false;
  }
  fVar11 = (float)FUN_14692ef30(param_1 + 0x3d8);
  fVar12 = fVar11 * 0.0 + 1.0;
  *param_2 = fVar12;
  param_2[1] = fVar12;
  param_2[2] = fVar12;
  param_2[3] = fVar11 + 0.0;
  if (bVar9) {
    return param_2;
  }
LAB_146acb2bb:
  LOCK();
  plVar4 = plVar7 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar2 = (int *)((longlong)plVar7 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
  return param_2;
}



// FUNCTION 146acb2ea FUN_146acb2ea body=183 status=ok
// SIG undefined FUN_146acb2ea(void)

longlong FUN_146acb2ea(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = *param_3;
  uStack_40 = CONCAT44(uStack_40._4_4_,*(undefined4 *)(param_3 + 1));
  FUN_146acc13e(local_58,param_2,&local_48);
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 1;
  local_30 = 0;
  local_28 = 0;
  FUN_140a51be2(&local_30,local_58);
  *(undefined1 *)(param_1 + 0x230) = local_38;
  *(undefined4 *)(param_1 + 0x220) = (undefined4)local_48;
  *(undefined4 *)(param_1 + 0x224) = local_48._4_4_;
  *(undefined4 *)(param_1 + 0x228) = (undefined4)uStack_40;
  *(undefined4 *)(param_1 + 0x22c) = uStack_40._4_4_;
  FUN_144a450dc(param_1 + 0x238,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_58);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146acb3a2 FUN_146acb3a2 body=79 status=ok
// SIG undefined FUN_146acb3a2(void)

double * FUN_146acb3a2(longlong param_1,double *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_14692ef30(param_1 + 0x468);
  fVar2 = (float)FUN_14692ef30(param_1 + 0x458);
  *param_2 = (double)fVar2;
  param_2[1] = (double)fVar1;
  return param_2;
}



// FUNCTION 146acb3f2 FUN_146acb3f2 body=115 status=ok
// SIG undefined FUN_146acb3f2(void)

longlong * FUN_146acb3f2(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_146aa533e(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 146acb466 FUN_146acb466 body=112 status=ok
// SIG undefined FUN_146acb466(void)

void FUN_146acb466(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x250);
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
  FUN_1449db362(param_1 + 0x238);
  FUN_1449db362(param_1 + 0x210);
  FUN_1449db362(param_1 + 0x1e8);
  FUN_1449db362(param_1 + 0x1c0);
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 146acb4d6 FUN_146acb4d6 body=200 status=ok
// SIG undefined FUN_146acb4d6(void)

longlong FUN_146acb4d6(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint local_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uStack_40 = *(undefined4 *)(param_3 + 1);
  local_48 = *param_3;
  FUN_146acb794(local_58,param_2,&local_48);
  local_48 = 0x3f800000;
  uStack_40 = 0x3f800000;
  uStack_3c = 0x3f800000;
  local_38 = local_38 & 0xffffff00;
  local_34 = 1;
  local_30 = 0;
  local_28 = 0;
  FUN_140a5aaa0(&local_30,local_58);
  *(uint *)(param_1 + 0x2d0) = local_38;
  *(undefined4 *)(param_1 + 0x2c0) = (undefined4)local_48;
  *(undefined4 *)(param_1 + 0x2c4) = local_48._4_4_;
  *(undefined4 *)(param_1 + 0x2c8) = uStack_40;
  *(undefined4 *)(param_1 + 0x2cc) = uStack_3c;
  *(undefined1 *)(param_1 + 0x2d4) = local_34;
  FUN_144a450dc(param_1 + 0x2d8,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_58);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146acb5a0 FUN_146acb5a0 body=183 status=ok
// SIG undefined FUN_146acb5a0(void)

longlong FUN_146acb5a0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = *param_3;
  uStack_40 = CONCAT44(uStack_40._4_4_,*(undefined4 *)(param_3 + 1));
  FUN_146acbc62(local_58,param_2,&local_48);
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 1;
  local_30 = 0;
  local_28 = 0;
  FUN_140a5c51c(&local_30,local_58);
  *(undefined1 *)(param_1 + 0x2a8) = local_38;
  *(undefined4 *)(param_1 + 0x298) = (undefined4)local_48;
  *(undefined4 *)(param_1 + 0x29c) = local_48._4_4_;
  *(undefined4 *)(param_1 + 0x2a0) = (undefined4)uStack_40;
  *(undefined4 *)(param_1 + 0x2a4) = uStack_40._4_4_;
  FUN_144a450dc(param_1 + 0x2b0,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_58);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146acb658 FUN_146acb658 body=183 status=ok
// SIG undefined FUN_146acb658(void)

longlong FUN_146acb658(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = *param_3;
  uStack_40 = CONCAT44(uStack_40._4_4_,*(undefined4 *)(param_3 + 1));
  FUN_146acc13e(local_58,param_2,&local_48);
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 1;
  local_30 = 0;
  local_28 = 0;
  FUN_140a51be2(&local_30,local_58);
  *(undefined1 *)(param_1 + 0x280) = local_38;
  *(undefined4 *)(param_1 + 0x270) = (undefined4)local_48;
  *(undefined4 *)(param_1 + 0x274) = local_48._4_4_;
  *(undefined4 *)(param_1 + 0x278) = (undefined4)uStack_40;
  *(undefined4 *)(param_1 + 0x27c) = uStack_40._4_4_;
  FUN_144a450dc(param_1 + 0x288,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_58);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146acb710 FUN_146acb710 body=132 status=ok
// SIG undefined FUN_146acb710(void)

undefined8 * FUN_146acb710(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  
  fVar1 = (float)FUN_14692ef30(param_1 + 0x478);
  if (*(int *)(param_1 + 0x360) == 3) {
    *param_2 = 0x3f800000;
  }
  else {
    if (*(int *)(param_1 + 0x360) != 2) {
      *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x338);
      *param_2 = *(undefined8 *)(param_1 + 0x330);
      goto LAB_146acb755;
    }
    *param_2 = 0x3f80000000000000;
  }
  *(undefined4 *)(param_2 + 1) = 0;
LAB_146acb755:
  *(uint *)((longlong)param_2 + 0xc) = ~-(uint)(1.0 - fVar1 == 1.0) & (uint)(1.0 - fVar1);
  *(undefined1 *)(param_2 + 2) = 0;
  return param_2;
}



// FUNCTION 146acb794 FUN_146acb794 body=313 status=ok
// SIG undefined FUN_146acb794(void)

longlong * FUN_146acb794(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_146acb890:
    *puVar5 = &PTR_LAB_149f05990;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_149f1a9e0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_146acb890;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f05990;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_149f1a9e0;
    puVar5[3] = uVar10;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 146acb8ce FUN_146acb8ce body=64 status=ok
// SIG undefined FUN_146acb8ce(void)

undefined8 * FUN_146acb8ce(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f1a9e0;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146acb912 FUN_146acb912 body=81 status=ok
// SIG undefined FUN_146acb912(void)

undefined8 FUN_146acb912(longlong param_1)

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



// FUNCTION 146acb96a FUN_146acb96a body=89 status=ok
// SIG undefined FUN_146acb96a(void)

bool FUN_146acb96a(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_146acb9b5;
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
LAB_146acb9b5:
  return lVar6 == param_2;
}



// FUNCTION 146acb9e0 FUN_146acb9e0 body=118 status=ok
// SIG undefined FUN_146acb9e0(void)

void FUN_146acb9e0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05990;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f1a9e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 146acba56 FUN_146acba56 body=118 status=ok
// SIG undefined FUN_146acba56(void)

void FUN_146acba56(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05990;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f1a9e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 146acbacc FUN_146acbacc body=156 status=ok
// SIG undefined FUN_146acbacc(void)

void FUN_146acbacc(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f05990;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f1a9e0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146acbb58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146acbb68 FUN_146acbb68 body=105 status=ok
// SIG undefined FUN_146acbb68(void)

undefined8 FUN_146acbb68(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_146acbbbc:
    (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30),param_2);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_146acbbbc;
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
    (**(code **)(param_1 + 0x28))
              ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18),param_2);
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
  return param_2;
}



// FUNCTION 146acbbd2 FUN_146acbbd2 body=143 status=ok
// SIG undefined FUN_146acbbd2(void)

ulonglong FUN_146acbbd2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_58 [44];
  undefined1 local_2c [20];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_146acbc40:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146acbc40;
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
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30),local_2c);
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
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 146acbc62 FUN_146acbc62 body=313 status=ok
// SIG undefined FUN_146acbc62(void)

longlong * FUN_146acbc62(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_146acbd5e:
    *puVar5 = &PTR_LAB_149f1aac0;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_149f1aa50;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_146acbd5e;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f1aac0;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_149f1aa50;
    puVar5[3] = uVar10;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 146acbd9c FUN_146acbd9c body=64 status=ok
// SIG undefined FUN_146acbd9c(void)

undefined8 * FUN_146acbd9c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f1aa50;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146acbde0 FUN_146acbde0 body=81 status=ok
// SIG undefined FUN_146acbde0(void)

undefined8 FUN_146acbde0(longlong param_1)

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



// FUNCTION 146acbe38 FUN_146acbe38 body=89 status=ok
// SIG undefined FUN_146acbe38(void)

bool FUN_146acbe38(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_146acbe83;
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
LAB_146acbe83:
  return lVar6 == param_2;
}



// FUNCTION 146acbeba FUN_146acbeba body=118 status=ok
// SIG undefined FUN_146acbeba(void)

void FUN_146acbeba(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f1aac0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f1aa50;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 146acbf30 FUN_146acbf30 body=118 status=ok
// SIG undefined FUN_146acbf30(void)

void FUN_146acbf30(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f1aac0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f1aa50;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 146acbfa6 FUN_146acbfa6 body=156 status=ok
// SIG undefined FUN_146acbfa6(void)

void FUN_146acbfa6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f1aac0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f1aa50;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146acc032. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146acc042 FUN_146acc042 body=105 status=ok
// SIG undefined FUN_146acc042(void)

undefined8 FUN_146acc042(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_146acc096:
    (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30),param_2);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_146acc096;
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
    (**(code **)(param_1 + 0x28))
              ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18),param_2);
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
  return param_2;
}



// FUNCTION 146acc0ac FUN_146acc0ac body=143 status=ok
// SIG undefined FUN_146acc0ac(void)

ulonglong FUN_146acc0ac(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_146acc11a:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146acc11a;
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
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30),local_28);
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
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 146acc13e FUN_146acc13e body=313 status=ok
// SIG undefined FUN_146acc13e(void)

longlong * FUN_146acc13e(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_146acc23a:
    *puVar5 = &PTR_LAB_149f04fc0;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_149f1ab30;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_146acc23a;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f04fc0;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_149f1ab30;
    puVar5[3] = uVar10;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 146acc278 FUN_146acc278 body=64 status=ok
// SIG undefined FUN_146acc278(void)

undefined8 * FUN_146acc278(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f1ab30;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146acc2bc FUN_146acc2bc body=81 status=ok
// SIG undefined FUN_146acc2bc(void)

undefined8 FUN_146acc2bc(longlong param_1)

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



// FUNCTION 146acc314 FUN_146acc314 body=89 status=ok
// SIG undefined FUN_146acc314(void)

bool FUN_146acc314(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_146acc35f;
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
LAB_146acc35f:
  return lVar6 == param_2;
}



// FUNCTION 146acc38a FUN_146acc38a body=118 status=ok
// SIG undefined FUN_146acc38a(void)

void FUN_146acc38a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f04fc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f1ab30;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 146acc400 FUN_146acc400 body=118 status=ok
// SIG undefined FUN_146acc400(void)

void FUN_146acc400(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f04fc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f1ab30;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 146acc476 FUN_146acc476 body=156 status=ok
// SIG undefined FUN_146acc476(void)

void FUN_146acc476(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f04fc0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f1ab30;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146acc502. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146acc512 FUN_146acc512 body=105 status=ok
// SIG undefined FUN_146acc512(void)

undefined8 FUN_146acc512(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_146acc566:
    (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30),param_2);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_146acc566;
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
    (**(code **)(param_1 + 0x28))
              ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18),param_2);
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
  return param_2;
}



// FUNCTION 146acc57c FUN_146acc57c body=143 status=ok
// SIG undefined FUN_146acc57c(void)

ulonglong FUN_146acc57c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_146acc5ea:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146acc5ea;
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
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30),local_28);
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
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 146acc60c FUN_146acc60c body=373 status=ok
// SIG undefined FUN_146acc60c(void)

undefined8 * FUN_146acc60c(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_3;
  plVar3 = (longlong *)FUN_14001cc68(0x2d0);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_149f1aba0;
  plVar4 = plVar3 + 2;
  memset(plVar4,0,0x2c0);
  FUN_140a55e66(plVar4);
  plVar3[2] = (longlong)&PTR_FUN_149f1abc0;
  plVar3[0x56] = 0;
  plVar3[0x57] = 0;
  local_50 = plVar4;
  local_48 = plVar3;
  FUN_146acc80e(&local_50,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_146acc710;
    param_1[1] = 0;
LAB_146acc6d8:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_146acc710;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar4;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = plVar4;
    plVar4 = (longlong *)param_1[1];
    if (plVar3 != plVar4) {
      param_1[1] = plVar3;
      if (plVar4 == (longlong *)0x0) goto LAB_146acc710;
      goto LAB_146acc6d8;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_146acc710;
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
LAB_146acc710:
  plVar4 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_48 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_58 = 0x2c0;
  FUN_140a52e78(*param_1,"SNotificationBackground",
                ".\\Runtime/Slate/Private/Widgets/Notifications/SNotificationList.cpp",param_2);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146acc782 FUN_146acc782 body=45 status=ok
// SIG undefined FUN_146acc782(void)

void FUN_146acc782(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x208);
  FUN_140c057ec(param_1 + 0x10);
  return;
}



// FUNCTION 146acc7b0 FUN_146acc7b0 body=29 status=ok
// SIG undefined FUN_146acc7b0(void)

undefined8 FUN_146acc7b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146acc7ce FUN_146acc7ce body=63 status=ok
// SIG undefined FUN_146acc7ce(void)

undefined8 * FUN_146acc7ce(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x3f);
  FUN_140c057ec(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146acc80e FUN_146acc80e body=167 status=ok
// SIG undefined FUN_146acc80e(void)

void FUN_146acc80e(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_146acc889;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_146acc889;
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
LAB_146acc889:
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
                    /* WARNING: Could not recover jumptable at 0x000146acc8a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 146acc8b6 FUN_146acc8b6 body=288 status=ok
// SIG undefined FUN_146acc8b6(void)

longlong * FUN_146acc8b6(longlong *param_1,undefined4 param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_3;
  plVar3 = (longlong *)FUN_146acc9d7();
  plVar4 = plVar3 + 2;
  local_38 = plVar4;
  local_30 = plVar3;
  FUN_146acca9c(&local_38,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_146acc96a;
    param_1[1] = 0;
LAB_146acc932:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_146acc96a;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar4;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = (longlong)plVar4;
    plVar4 = (longlong *)param_1[1];
    if (plVar3 != plVar4) {
      param_1[1] = (longlong)plVar3;
      if (plVar4 == (longlong *)0x0) goto LAB_146acc96a;
      goto LAB_146acc932;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_146acc96a;
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
LAB_146acc96a:
  plVar4 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_48 = 0x5d0;
  FUN_140a52e78(*param_1,"SNotificationItemImpl",
                ".\\Runtime/Slate/Private/Widgets/Notifications/SNotificationList.cpp",param_2);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146acc9d7 FUN_146acc9d7 body=156 status=ok
// SIG undefined FUN_146acc9d7(void)

undefined8 * FUN_146acc9d7(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x5e0);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_149f1ae10;
  memset(puVar1 + 2,0,0x5d0);
  FUN_146ac96c4(puVar1 + 2);
  puVar1[2] = &PTR_FUN_149f1a3e0;
  puVar1[0xb3] = 0;
  *(undefined4 *)(puVar1 + 0xb4) = 0;
  puVar1[0xb5] = 0;
  *(undefined4 *)(puVar1 + 0xb6) = 0;
  FUN_144a5dc74(puVar1 + 0xb7);
  *(undefined1 *)(puVar1 + 0xb9) = 0;
  puVar1[0xba] = 0;
  puVar1[0xbb] = 0;
  return puVar1;
}



// FUNCTION 146acca7e FUN_146acca7e body=29 status=ok
// SIG undefined FUN_146acca7e(void)

undefined8 FUN_146acca7e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146acca9c FUN_146acca9c body=167 status=ok
// SIG undefined FUN_146acca9c(void)

void FUN_146acca9c(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_146accb17;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_146accb17;
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
LAB_146accb17:
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
                    /* WARNING: Could not recover jumptable at 0x000146accb37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 146accb44 FUN_146accb44 body=901 status=ok
// SIG undefined FUN_146accb44(void)

void FUN_146accb44(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_348 [47];
  undefined1 local_319;
  code *local_318;
  undefined4 local_310;
  undefined4 uStack_30c;
  undefined8 local_300;
  longlong *local_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined1 local_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  longlong *local_2c0;
  undefined8 local_2b8;
  longlong *local_2b0;
  undefined4 local_2a8;
  undefined1 local_2a4;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined1 local_f0;
  undefined1 local_e8 [136];
  undefined8 local_60;
  longlong *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_348;
  *(undefined4 *)(param_1 + 0x360) = 0;
  FUN_14133824c(param_1 + 0x278,param_2 + 0x1a8);
  FUN_14133824c(param_1 + 0x2a0,param_2 + 0x1d0);
  local_2a8 = *(undefined4 *)(param_2 + 0x210);
  local_2a4 = 1;
  local_2a0 = 0;
  uStack_298 = 0;
  *(undefined1 *)(param_1 + 0x2cc) = 1;
  *(undefined4 *)(param_1 + 0x2c8) = local_2a8;
  FUN_144a450dc(param_1 + 0x2d0,&local_2a0);
  FUN_1449db362(&local_2a0);
  local_2a8 = *(undefined4 *)(param_2 + 0x214);
  local_2a4 = 1;
  local_2a0 = 0;
  uStack_298 = 0;
  *(undefined1 *)(param_1 + 0x2e4) = 1;
  *(undefined4 *)(param_1 + 0x2e0) = local_2a8;
  FUN_144a450dc(param_1 + 0x2e8,&local_2a0);
  FUN_1449db362(&local_2a0);
  local_2a8 = *(undefined4 *)(param_2 + 0x218);
  local_2a4 = 1;
  local_2a0 = 0;
  uStack_298 = 0;
  *(undefined1 *)(param_1 + 0x2fc) = 1;
  *(undefined4 *)(param_1 + 0x2f8) = local_2a8;
  FUN_144a450dc(param_1 + 0x300,&local_2a0);
  FUN_1449db362(&local_2a0);
  FUN_146acaf86(&local_2a8);
  local_2f0 = 0x4100000041800000;
  uStack_2e8 = 0x4100000041800000;
  local_2e0 = 1;
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_f0 = 1;
  local_100 = 0x41800000;
  uStack_fc = 0x41000000;
  uStack_f8 = 0x41800000;
  uStack_f4 = 0x41000000;
  FUN_144a450dc(local_e8,&local_2d8);
  FUN_1449db362(&local_2d8);
  local_318 = FUN_146acb100;
  local_310 = 0;
  FUN_146acceca(&local_2a8,param_1,&local_318);
  local_318 = FUN_146acb1d2;
  local_310 = 0;
  FUN_146accf94(&local_2a8,param_1,&local_318);
  local_318 = FUN_146acb3a2;
  local_310 = 0;
  FUN_146acd04c(&local_2a8,param_1,&local_318);
  FUN_146acd104(param_1,&local_300,param_2);
  plVar3 = local_58;
  if (local_2f8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2f8 + 1) = (int)local_2f8[1] + 1;
    UNLOCK();
  }
  local_60 = local_300;
  local_58 = local_2f8;
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
  FUN_146acc60c(&local_318,0x1ac,&local_319);
  FUN_146acb3f2(&local_318,&local_2c8,&local_2a8);
  local_2b8 = local_2c8;
  local_2b0 = local_2c0;
  if (local_2c0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2c0 + 1) = (int)local_2c0[1] + 1;
    UNLOCK();
  }
  FUN_140a58896(param_1 + 0x1e0,&local_2b8);
  plVar3 = local_2b0;
  if (local_2b0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_2b0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_2b0)(local_2b0);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_2c0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_2c0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_2c0)(local_2c0);
      LOCK();
      piVar2 = (int *)((longlong)local_2c0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_2c0 + 0x10))(local_2c0);
      }
    }
  }
  plVar3 = (longlong *)CONCAT44(uStack_30c,local_310);
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
  if (local_2f8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_2f8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_2f8)(local_2f8);
      LOCK();
      piVar2 = (int *)((longlong)local_2f8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_2f8 + 0x10))(local_2f8);
      }
    }
  }
  FUN_146acb466(&local_2a8);
  if ((local_50 ^ (ulonglong)auStack_348) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146acceca FUN_146acceca body=200 status=ok
// SIG undefined FUN_146acceca(void)

longlong FUN_146acceca(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint local_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uStack_40 = *(undefined4 *)(param_3 + 1);
  local_48 = *param_3;
  FUN_146acf06c(local_58,param_2,&local_48);
  local_48 = 0x3f800000;
  uStack_40 = 0x3f800000;
  uStack_3c = 0x3f800000;
  local_38 = local_38 & 0xffffff00;
  local_34 = 1;
  local_30 = 0;
  local_28 = 0;
  FUN_140a5aaa0(&local_30,local_58);
  *(uint *)(param_1 + 0x208) = local_38;
  *(undefined4 *)(param_1 + 0x1f8) = (undefined4)local_48;
  *(undefined4 *)(param_1 + 0x1fc) = local_48._4_4_;
  *(undefined4 *)(param_1 + 0x200) = uStack_40;
  *(undefined4 *)(param_1 + 0x204) = uStack_3c;
  *(undefined1 *)(param_1 + 0x20c) = local_34;
  FUN_144a450dc(param_1 + 0x210,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_58);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146accf94 FUN_146accf94 body=183 status=ok
// SIG undefined FUN_146accf94(void)

longlong FUN_146accf94(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = *param_3;
  uStack_40 = CONCAT44(uStack_40._4_4_,*(undefined4 *)(param_3 + 1));
  FUN_146acf53a(local_58,param_2,&local_48);
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 1;
  local_30 = 0;
  local_28 = 0;
  FUN_140a5c51c(&local_30,local_58);
  *(undefined1 *)(param_1 + 0x1e0) = local_38;
  *(undefined4 *)(param_1 + 0x1d0) = (undefined4)local_48;
  *(undefined4 *)(param_1 + 0x1d4) = local_48._4_4_;
  *(undefined4 *)(param_1 + 0x1d8) = (undefined4)uStack_40;
  *(undefined4 *)(param_1 + 0x1dc) = uStack_40._4_4_;
  FUN_144a450dc(param_1 + 0x1e8,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_58);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146acd04c FUN_146acd04c body=183 status=ok
// SIG undefined FUN_146acd04c(void)

longlong FUN_146acd04c(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = *param_3;
  uStack_40 = CONCAT44(uStack_40._4_4_,*(undefined4 *)(param_3 + 1));
  FUN_146acfa08(local_58,param_2,&local_48);
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 1;
  local_30 = 0;
  local_28 = 0;
  FUN_140a51be2(&local_30,local_58);
  *(undefined1 *)(param_1 + 0x230) = local_38;
  *(undefined4 *)(param_1 + 0x220) = (undefined4)local_48;
  *(undefined4 *)(param_1 + 0x224) = local_48._4_4_;
  *(undefined4 *)(param_1 + 0x228) = (undefined4)uStack_40;
  *(undefined4 *)(param_1 + 0x22c) = uStack_40._4_4_;
  FUN_144a450dc(param_1 + 0x238,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_58);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146acd104 FUN_146acd104 body=8039 status=ok
// SIG undefined FUN_146acd104(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * FUN_146acd104(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined ***pppuVar14;
  undefined1 auStack_1588 [32];
  code **local_1568;
  undefined1 local_1560;
  undefined1 local_1558;
  undefined1 local_1550;
  undefined1 local_1539;
  longlong local_1538;
  longlong local_1530;
  longlong local_1528;
  undefined8 *local_1520;
  longlong local_1518;
  longlong local_1510;
  undefined1 local_1501;
  undefined1 local_1500 [8];
  longlong *local_14f8;
  undefined1 local_14e1;
  undefined8 local_14e0;
  longlong *local_14d8;
  undefined1 local_14c9;
  undefined1 local_14c8 [8];
  longlong *local_14c0;
  undefined1 local_14a9;
  undefined1 local_14a8 [8];
  longlong *local_14a0;
  undefined8 local_1490;
  undefined1 local_1488;
  undefined8 local_1480;
  undefined4 local_1478;
  undefined8 local_1470;
  longlong *local_1468;
  undefined8 local_1460;
  longlong *local_1458;
  undefined1 local_1449;
  undefined1 local_1448 [8];
  longlong *local_1440;
  undefined8 local_1430;
  undefined8 local_1428;
  undefined1 local_1420;
  undefined8 local_1418;
  undefined8 uStack_1410;
  undefined2 local_1408;
  undefined8 local_1400;
  undefined8 uStack_13f8;
  undefined8 local_13f0;
  undefined8 local_13e8;
  undefined1 local_13e0;
  undefined8 local_13d8;
  undefined8 uStack_13d0;
  undefined8 local_13c8;
  longlong *local_13c0;
  undefined8 local_13b8;
  longlong *local_13b0;
  undefined8 local_13a8;
  longlong *local_13a0;
  undefined8 local_1398;
  longlong *local_1390;
  undefined8 local_1388;
  undefined8 uStack_1380;
  undefined1 local_1378;
  undefined8 local_1370;
  undefined4 local_1368;
  undefined8 local_1358;
  longlong *local_1350;
  undefined4 local_1348;
  undefined1 local_1344;
  undefined8 local_1340;
  undefined8 uStack_1338;
  undefined8 local_1330;
  longlong *local_1328;
  undefined8 local_1320;
  undefined4 local_1318;
  undefined8 local_1310;
  undefined4 local_1308;
  undefined8 local_1300;
  undefined4 local_12f8;
  undefined8 local_12f0;
  longlong *local_12e8;
  undefined4 local_12e0;
  undefined1 local_12d8;
  undefined8 local_12d0;
  undefined4 local_12c8;
  longlong *local_12c0;
  undefined4 local_12b8;
  undefined1 local_12b0;
  undefined8 local_12a8;
  undefined4 local_12a0;
  longlong *local_1298;
  undefined4 local_1290;
  undefined1 local_1288;
  undefined8 local_1280;
  undefined4 local_1278;
  undefined8 local_1270;
  longlong *local_1268;
  undefined4 local_1260;
  undefined1 local_1258;
  undefined8 local_1250;
  undefined4 local_1248;
  undefined8 local_1240;
  undefined8 uStack_1238;
  undefined1 local_1230;
  undefined8 local_1228;
  undefined8 uStack_1220;
  undefined2 local_1218;
  undefined8 local_1210;
  undefined4 local_1208;
  undefined8 local_1200;
  undefined8 uStack_11f8;
  undefined1 local_11f0;
  undefined8 local_11e8;
  undefined8 uStack_11e0;
  undefined8 local_11d8;
  undefined8 local_11d0;
  undefined8 uStack_11c8;
  undefined1 local_11c0;
  undefined8 local_11b8;
  undefined8 uStack_11b0;
  uint local_11a8;
  undefined1 local_11a4;
  undefined8 local_11a0;
  undefined8 uStack_1198;
  longlong *local_1190;
  undefined4 local_1188;
  undefined1 local_1180;
  undefined8 local_1178;
  undefined4 local_1170;
  undefined8 local_1168;
  undefined8 uStack_1160;
  undefined1 local_1158;
  undefined8 local_1150;
  undefined8 uStack_1148;
  uint local_1140;
  undefined1 local_113c;
  undefined8 local_1138;
  undefined8 uStack_1130;
  undefined8 local_1128;
  undefined1 local_1120 [96];
  undefined1 local_10c0;
  undefined8 local_10b8;
  undefined8 uStack_10b0;
  longlong *local_10a8;
  undefined4 local_10a0;
  undefined1 local_1098;
  undefined8 local_1090;
  undefined4 local_1088;
  undefined8 local_1080;
  longlong *local_1078;
  code *local_1070;
  longlong *plStack_1068;
  undefined1 local_1060;
  undefined8 local_1058;
  undefined8 uStack_1050;
  undefined1 local_1048 [64];
  undefined4 local_1008;
  undefined1 local_1004;
  undefined4 local_1000;
  undefined1 local_ffc;
  undefined8 local_ff0;
  longlong *local_fe8;
  undefined4 local_fb0;
  undefined1 local_fac;
  undefined4 local_fa8;
  undefined1 local_fa4;
  code *local_f98;
  undefined4 local_f90;
  undefined4 uStack_f8c;
  undefined4 local_f80;
  undefined4 uStack_f7c;
  undefined4 uStack_f78;
  undefined4 uStack_f74;
  undefined1 local_f70;
  undefined1 local_f68 [144];
  undefined8 local_ed8;
  undefined8 local_ed0;
  undefined1 local_ec8;
  undefined1 local_ec0;
  undefined8 local_eb8;
  undefined8 uStack_eb0;
  code *local_ea8;
  undefined4 local_ea0;
  undefined4 uStack_e9c;
  undefined ***local_e98;
  undefined **local_e88;
  longlong local_e80;
  longlong *local_e70;
  undefined8 local_d00;
  undefined1 local_cf8;
  undefined1 local_cf0 [128];
  code *local_c70;
  longlong *local_c68;
  code *local_ab8;
  longlong *local_ab0;
  code *local_9f8;
  undefined8 local_9f0;
  code *local_840;
  longlong *plStack_838;
  undefined1 local_830;
  undefined8 local_828;
  undefined8 uStack_820;
  undefined4 uStack_818;
  undefined4 uStack_814;
  undefined1 local_810;
  undefined1 local_808 [56];
  undefined2 local_7d0;
  undefined1 local_7c8 [104];
  undefined8 local_760;
  undefined8 local_758;
  undefined1 local_750;
  undefined1 local_748 [176];
  undefined8 local_698;
  longlong *local_690;
  undefined1 local_688 [16];
  undefined1 local_678 [16];
  undefined2 local_668;
  undefined1 local_660 [32];
  undefined4 local_640;
  undefined4 uStack_63c;
  undefined4 uStack_638;
  undefined4 uStack_634;
  undefined1 local_630;
  undefined1 local_628 [328];
  code *local_4e0;
  ulonglong uStack_4d8;
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 local_308;
  longlong *local_300;
  undefined4 local_2f8;
  undefined1 local_2f4;
  undefined1 local_2f0 [32];
  undefined1 local_2d0 [608];
  ulonglong local_70;
  undefined8 uStack_48;
  
  uStack_48 = 0x146acd11a;
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1588;
  FUN_146a75c0a(param_1 + 0x588,param_3 + 0x240);
  FUN_14009d848(param_1 + 0x598,param_3 + 0x278);
  FUN_14133824c(param_1 + 0x5a8,param_3 + 0x288);
  local_4e0 = *(code **)(param_3 + 0x208);
  uStack_4d8 = CONCAT71(uStack_4d8._1_7_,1);
  local_4d0 = 0;
  uStack_4c8 = 0;
  *(undefined1 *)(param_1 + 0x318) = 1;
  *(code **)(param_1 + 0x310) = local_4e0;
  local_1528 = param_1 + 800;
  local_1538 = param_1;
  local_1530 = param_3;
  FUN_144a450dc(local_1528,&local_4d0);
  FUN_1449db362(&local_4d0);
  FUN_1407679b0(&local_4e0);
  local_1568 = &local_ea8;
  FUN_14076837c(&local_840,"SVerticalBox",
                ".\\Runtime/Slate/Private/Widgets/Notifications/SNotificationList.cpp",0x1c2);
  FUN_14076784c(&local_840,&local_1080,&local_4e0);
  plVar9 = plStack_838;
  if (plStack_838 != (longlong *)0x0) {
    LOCK();
    plVar6 = plStack_838 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plStack_838)(plStack_838);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  FUN_14149255e(&local_4e0);
  FUN_140767c14(local_1080,&local_840,0xffffffff);
  FUN_140a570d8(&local_4e0);
  local_10a8 = *(longlong **)(local_1538 + 0x278);
  if (local_10a8 != (longlong *)0x0) {
    (**(code **)(*local_10a8 + 8))();
  }
  local_10a0 = *(undefined4 *)(local_1538 + 0x280);
  local_1098 = *(undefined1 *)(local_1538 + 0x288);
  local_1090 = 0;
  local_1088 = 0;
  local_1520 = param_2;
  FUN_1413a4324(&local_1090,local_1538 + 0x290);
  lVar8 = FUN_140a54906(&local_4e0,&local_10a8);
  plVar9 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar9 == (longlong *)0x0) {
    plVar9 = DAT_14c96b350;
  }
  FUN_1446f470e(&local_1128,L"NotificationList.FontBold",1);
  (**(code **)(*plVar9 + 0x88))(plVar9,&local_ea8,local_1128,0);
  FUN_144a87366(local_1120,&local_ea8);
  local_10c0 = 1;
  local_10b8 = 0;
  uStack_10b0 = 0;
  FUN_1412cc59c(lVar8 + 0x1d8,local_1120);
  *(undefined1 *)(lVar8 + 0x238) = local_10c0;
  FUN_144a450dc(lVar8 + 0x240,&local_10b8);
  FUN_141515cba(local_1120);
  local_1140 = -(uint)(*(float *)(local_1530 + 0x220) != -1.0) &
               (uint)(*(float *)(local_1530 + 0x220) + -50.0);
  local_113c = 1;
  local_1138 = 0;
  uStack_1130 = 0;
  *(undefined1 *)(lVar8 + 0x35c) = 1;
  *(uint *)(lVar8 + 0x358) = local_1140;
  FUN_144a450dc(lVar8 + 0x360,&local_1138);
  FUN_1449db362(&local_1138);
  local_1568 = &local_f98;
  FUN_140a54526(&local_9f8,"STextBlock",
                ".\\Runtime/Slate/Private/Widgets/Notifications/SNotificationList.cpp",0x1c6);
  if (local_9f0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_9f0 + 1) = (int)local_9f0[1] + 1;
    UNLOCK();
  }
  plVar9 = *(longlong **)(local_1538 + 0x348);
  *(code **)(local_1538 + 0x340) = local_9f8;
  *(longlong **)(local_1538 + 0x348) = local_9f0;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar9 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  FUN_140a52852(&local_9f8,&local_ab8,lVar8);
  local_c70 = local_ab8;
  local_c68 = local_ab0;
  if (local_ab0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_ab0 + 1) = (int)local_ab0[1] + 1;
    UNLOCK();
  }
  FUN_145aaf878(&plStack_838,&local_c70);
  plVar9 = local_c68;
  if (local_c68 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_c68 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_c68)(local_c68);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  plVar9 = local_ab0;
  if (local_ab0 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_ab0 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_ab0)(local_ab0);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  plVar9 = local_9f0;
  if (local_9f0 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_9f0 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_9f0)(local_9f0);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if (local_e70 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_e70 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_e70)(local_e70);
      LOCK();
      piVar1 = (int *)((longlong)local_e70 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_e70 + 0x10))(local_e70);
      }
    }
  }
  FUN_140a59ae6(&local_4e0);
  FUN_140767802(&local_840);
  FUN_140767c14(local_1080,&local_840,0xffffffff);
  local_1168 = 0x4120000000000000;
  uStack_1160 = 0x4000000000000000;
  local_1158 = 1;
  local_1150 = 0;
  uStack_1148 = 0;
  local_810 = 1;
  uStack_820 = 0x4120000000000000;
  uStack_818 = 0;
  uStack_814 = 0x40000000;
  FUN_144a450dc(local_808,&local_1150);
  FUN_1449db362(&local_1150);
  uVar10 = FUN_145aaf900(&plStack_838);
  FUN_140a570d8(&local_4e0);
  local_1190 = *(longlong **)(local_1538 + 0x2a0);
  if (local_1190 != (longlong *)0x0) {
    (**(code **)(*local_1190 + 8))();
  }
  lVar8 = local_1538;
  local_1188 = *(undefined4 *)(local_1538 + 0x2a8);
  local_1180 = *(undefined1 *)(local_1538 + 0x2b0);
  local_1178 = 0;
  local_1170 = 0;
  FUN_1413a4324(&local_1178,local_1538 + 0x2b8);
  uVar11 = FUN_140a54906(&local_4e0,&local_1190);
  local_e98 = (undefined ***)0x0;
  local_e88 = &PTR_LAB_149f1afc0;
  local_e80 = lVar8;
  local_ea8 = FUN_146ad097e;
  lVar8 = FUN_146a0e232(uVar11);
  local_11a8 = -(uint)(*(float *)(local_1530 + 0x220) != -1.0) &
               (uint)(*(float *)(local_1530 + 0x220) + -50.0);
  local_11a4 = 1;
  local_11a0 = 0;
  uStack_1198 = 0;
  *(undefined1 *)(lVar8 + 0x35c) = 1;
  *(uint *)(lVar8 + 0x358) = local_11a8;
  FUN_144a450dc(lVar8 + 0x360,&local_11a0);
  FUN_1449db362(&local_11a0);
  local_1568 = &local_f98;
  FUN_140a54526(&local_9f8,"STextBlock",
                ".\\Runtime/Slate/Private/Widgets/Notifications/SNotificationList.cpp",0x1d0);
  if (local_9f0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_9f0 + 1) = (int)local_9f0[1] + 1;
    UNLOCK();
  }
  plVar9 = *(longlong **)(local_1538 + 0x358);
  *(code **)(local_1538 + 0x350) = local_9f8;
  *(longlong **)(local_1538 + 0x358) = local_9f0;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar9 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  FUN_140a52852(&local_9f8,&local_ab8,lVar8);
  local_c70 = local_ab8;
  local_c68 = local_ab0;
  if (local_ab0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_ab0 + 1) = (int)local_ab0[1] + 1;
    UNLOCK();
  }
  FUN_145aaf878(uVar10,&local_c70);
  plVar9 = local_c68;
  if (local_c68 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_c68 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_c68)(local_c68);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if (local_ab0 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_ab0 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_ab0)(local_ab0);
      LOCK();
      piVar1 = (int *)((longlong)local_ab0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_ab0 + 0x10))(local_ab0);
      }
    }
  }
  plVar9 = local_9f0;
  if (local_9f0 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_9f0 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_9f0)(local_9f0);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if (local_ea8 != (code *)0x0) {
    pppuVar14 = local_e98;
    if (local_e98 == (undefined ***)0x0) {
      pppuVar14 = &local_e88;
    }
    (*(code *)(*pppuVar14)[2])();
  }
  FUN_140a59ae6(&local_4e0);
  FUN_140767802(&local_840);
  FUN_140767c14(local_1080,&local_840,0xffffffff);
  lVar12 = FUN_145aaf900(&plStack_838);
  local_11d0 = 0x4120000000000000;
  uStack_11c8 = 0x4000000000000000;
  local_11c0 = 1;
  local_11b8 = 0;
  uStack_11b0 = 0;
  *(undefined1 *)(lVar12 + 0x28) = 1;
  *(undefined4 *)(lVar12 + 0x18) = 0;
  *(undefined4 *)(lVar12 + 0x1c) = 0x41200000;
  *(undefined4 *)(lVar12 + 0x20) = 0;
  *(undefined4 *)(lVar12 + 0x24) = 0x40000000;
  FUN_144a450dc(lVar12 + 0x30,&local_11b8);
  FUN_1449db362(&local_11b8);
  *(undefined4 *)(lVar12 + 0x48) = 2;
  *(undefined1 *)(lVar12 + 0x4c) = 1;
  *(undefined4 *)(lVar12 + 0x40) = 1;
  *(undefined1 *)(lVar12 + 0x44) = 1;
  FUN_146a4ba9e(&local_4e0);
  lVar8 = local_1538;
  local_ea8 = FUN_146acff7a;
  local_ea0 = 0;
  FUN_146acfed6(&local_4e0,local_1538,&local_ea8);
  local_ea8 = FUN_146ad009e;
  local_ea0 = 0;
  FUN_146acffc6(&local_4e0,lVar8,&local_ea8);
  local_9f8 = (code *)&LAB_146ad00d8;
  local_9f0 = (longlong *)((ulonglong)local_9f0._4_4_ << 0x20);
  FUN_146ad13b4(&local_ea8,lVar8);
  FUN_144a450dc(local_2d0,&local_ea8);
  FUN_1449db362(&local_ea8);
  local_ea8 = FUN_146ad009e;
  local_ea0 = 0;
  FUN_146ad00f6(&local_4e0,lVar8,&local_ea8);
  FUN_1446ddc76(&local_11d8,"NotificationList.WidgetText",1);
  plVar9 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar9 == (longlong *)0x0) {
    plVar9 = DAT_14c96b350;
  }
  local_308 = FUN_140a57516(plVar9,local_11d8,0,0);
  FUN_146ad1850(&local_ea8,&local_ab8);
  FUN_146ad01c4(&local_ea8,&local_c70,&local_4e0);
  local_9f8 = local_c70;
  local_9f0 = local_c68;
  if (local_c68 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_c68 + 1) = (int)local_c68[1] + 1;
    UNLOCK();
  }
  FUN_145aaf878(lVar12,&local_9f8);
  plVar9 = local_9f0;
  if (local_9f0 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_9f0 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_9f0)(local_9f0);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  plVar9 = local_c68;
  if (local_c68 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_c68 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_c68)(local_c68);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  plVar9 = (longlong *)CONCAT44(uStack_e9c,local_ea0);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar9 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  FUN_146a4bbc8(&local_4e0);
  FUN_140767802(&local_840);
  FUN_140767c14(local_1080,&local_ea8,0xffffffff);
  lVar12 = FUN_145aaf900(&local_ea0);
  local_1200 = 0x4120000000000000;
  uStack_11f8 = 0x4000000000000000;
  local_11f0 = 1;
  local_11e8 = 0;
  uStack_11e0 = 0;
  *(undefined1 *)(lVar12 + 0x28) = 1;
  *(undefined4 *)(lVar12 + 0x18) = 0;
  *(undefined4 *)(lVar12 + 0x1c) = 0x41200000;
  *(undefined4 *)(lVar12 + 0x20) = 0;
  *(undefined4 *)(lVar12 + 0x24) = 0x40000000;
  FUN_144a450dc(lVar12 + 0x30,&local_11e8);
  FUN_1449db362(&local_11e8);
  *(undefined4 *)(lVar12 + 0x48) = 2;
  *(undefined1 *)(lVar12 + 0x4c) = 1;
  *(undefined4 *)(lVar12 + 0x40) = 1;
  *(undefined1 *)(lVar12 + 0x44) = 1;
  FUN_1469f91ec(&local_840);
  local_4e0 = FUN_146ad02dc;
  uStack_4d8 = uStack_4d8 & 0xffffffff00000000;
  FUN_146ad0238(&local_840,local_1538,&local_4e0);
  lVar8 = local_1530;
  local_1218 = *(undefined2 *)(local_1530 + 0x228);
  local_1210 = 0;
  local_1208 = 0;
  FUN_1469eaea6(&local_1210,local_1530 + 0x230);
  local_668 = local_1218;
  FUN_144a450dc(local_660,&local_1210);
  FUN_1449db362(&local_1210);
  FUN_146a75c0a(local_678,param_1 + 0x588);
  local_1240 = 0x40000000;
  uStack_1238 = 0x40000000;
  local_1230 = 1;
  local_1228 = 0;
  uStack_1220 = 0;
  local_630 = 1;
  local_640 = 0x40000000;
  uStack_63c = 0;
  uStack_638 = 0x40000000;
  uStack_634 = 0;
  FUN_144a450dc(local_628,&local_1228);
  FUN_1449db362(&local_1228);
  FUN_140a570d8(&local_4e0);
  local_1268 = *(longlong **)(lVar8 + 0x250);
  if (local_1268 != (longlong *)0x0) {
    (**(code **)(*local_1268 + 8))();
  }
  local_1260 = *(undefined4 *)(local_1530 + 600);
  local_1258 = *(undefined1 *)(local_1530 + 0x260);
  lVar8 = local_1530 + 0x268;
  local_1250 = 0;
  local_1248 = 0;
  FUN_1413a4324(&local_1250,lVar8);
  lVar13 = FUN_140a54906(&local_4e0,&local_1268);
  FUN_1446ddc76(&local_1270,"NotificationList.WidgetText",1);
  plVar9 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar9 == (longlong *)0x0) {
    plVar9 = DAT_14c96b350;
  }
  uVar10 = FUN_140a57516(plVar9,local_1270,0,0);
  *(undefined8 *)(lVar13 + 0x1d0) = uVar10;
  local_1298 = *(longlong **)(local_1530 + 0x250);
  if (local_1298 != (longlong *)0x0) {
    (**(code **)(*local_1298 + 8))();
  }
  local_1290 = *(undefined4 *)(local_1530 + 600);
  local_1288 = *(undefined1 *)(local_1530 + 0x260);
  local_1280 = 0;
  local_1278 = 0;
  FUN_1413a4324(&local_1280,lVar8);
  uVar10 = FUN_146a10d9c(lVar13,&local_1298);
  local_1568 = (code **)local_1048;
  FUN_140a54526(&local_9f8,"STextBlock",
                ".\\Runtime/Slate/Private/Widgets/Notifications/SNotificationList.cpp",499);
  FUN_140a52852(&local_9f8,&local_ff0,uVar10);
  plVar6 = local_690;
  plVar9 = local_fe8;
  if (local_fe8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_fe8 + 1) = (int)local_fe8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_fe8 + 1) = (int)local_fe8[1] + 1;
    UNLOCK();
  }
  local_698 = local_ff0;
  local_690 = local_fe8;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar6 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  local_1568 = &local_1070;
  FUN_1469fcac2(&local_c70,"SCheckBox",
                ".\\Runtime/Slate/Private/Widgets/Notifications/SNotificationList.cpp",0x1ed);
  FUN_1469f9992(&local_c70,&local_f98,&local_840);
  local_ab0 = (longlong *)CONCAT44(uStack_f8c,local_f90);
  local_ab8 = local_f98;
  if (local_ab0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_ab0 + 1) = (int)local_ab0[1] + 1;
    UNLOCK();
  }
  FUN_145aaf878(lVar12,&local_ab8);
  plVar6 = local_ab0;
  if (local_ab0 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_ab0 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_ab0)(local_ab0);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  plVar6 = (longlong *)CONCAT44(uStack_f8c,local_f90);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar6 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  plVar6 = local_c68;
  if (local_c68 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_c68 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_c68)(local_c68);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar9 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if (local_fe8 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_fe8 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_fe8)(local_fe8);
      LOCK();
      piVar1 = (int *)((longlong)local_fe8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_fe8 + 0x10))(local_fe8);
      }
    }
  }
  plVar9 = local_9f0;
  if (local_9f0 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_9f0 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_9f0)(local_9f0);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  FUN_140a59ae6(&local_4e0);
  FUN_1469f9dde(&local_840);
  FUN_140767802(&local_ea8);
  FUN_140a5296a(&local_4e0);
  local_1568 = &local_ea8;
  FUN_140a541dc(&local_840,"SHorizontalBox",
                ".\\Runtime/Slate/Private/Widgets/Notifications/SNotificationList.cpp",0x1fd);
  FUN_140a50ec6(&local_840,&local_9f8,&local_4e0);
  if (plStack_838 != (longlong *)0x0) {
    LOCK();
    plVar9 = plStack_838 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plStack_838)(plStack_838);
      LOCK();
      piVar1 = (int *)((longlong)plStack_838 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plStack_838 + 0x10))(plStack_838);
      }
    }
  }
  FUN_145ab33da(&local_4e0);
  if ((longlong)*(int *)(local_1530 + 0x200) != 0) {
    local_1518 = (longlong)*(int *)(local_1530 + 0x200) * 0x88 + *(longlong *)(local_1530 + 0x1f8);
    lVar8 = *(longlong *)(local_1530 + 0x1f8) + 0x18;
    do {
      FUN_146a24608(local_9f8,&local_840,0xffffffff);
      local_1510 = FUN_140a52578(&plStack_838);
      *(undefined4 *)(local_1510 + 0x48) = 2;
      *(undefined1 *)(local_1510 + 0x4c) = 1;
      local_4e0 = (code *)0x0;
      uStack_4d8 = 0x40800000;
      local_4d0 = CONCAT71(local_4d0._1_7_,1);
      uStack_4c8 = 0;
      uStack_4c0 = 0;
      *(undefined1 *)(local_1510 + 0x28) = 1;
      *(undefined4 *)(local_1510 + 0x18) = 0;
      *(undefined4 *)(local_1510 + 0x1c) = 0;
      *(undefined4 *)(local_1510 + 0x20) = 0x40800000;
      *(undefined4 *)(local_1510 + 0x24) = 0;
      FUN_144a450dc(local_1510 + 0x30,&uStack_4c8);
      FUN_1449db362(&uStack_4c8);
      FUN_145ab3d24(&local_4e0);
      local_12c0 = *(longlong **)(lVar8 + -0x18);
      if (local_12c0 != (longlong *)0x0) {
        (**(code **)(*local_12c0 + 8))();
      }
      local_12b8 = *(undefined4 *)(lVar8 + -0x10);
      local_12b0 = *(undefined1 *)(lVar8 + -8);
      local_12a8 = 0;
      local_12a0 = 0;
      FUN_1413a4324(&local_12a8,lVar8);
      uVar10 = FUN_1469d324e(&local_4e0,&local_12c0);
      lVar12 = 0;
      if (*(char *)(lVar8 + 0x20) != '\0') {
        lVar12 = 0x28;
      }
      local_12e8 = *(longlong **)(lVar8 + -0x18 + lVar12);
      if (local_12e8 != (longlong *)0x0) {
        (**(code **)(*local_12e8 + 8))();
      }
      local_12e0 = *(undefined4 *)(lVar8 + -0x10 + lVar12);
      local_12d8 = *(undefined1 *)(lVar8 + -8 + lVar12);
      local_12d0 = 0;
      local_12c8 = 0;
      FUN_1413a4324(&local_12d0,lVar8 + lVar12);
      lVar12 = FUN_1469cc670(uVar10,&local_12e8);
      FUN_1446ddc76(&local_12f0,"NotificationList.WidgetText",1);
      uVar10 = local_12f0;
      plVar9 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
      if (plVar9 == (longlong *)0x0) {
        plVar9 = DAT_14c96b350;
      }
      uVar10 = FUN_140a57516(plVar9,uVar10,0,0);
      *(undefined8 *)(lVar12 + 0x1c0) = uVar10;
      local_1300 = 0;
      local_12f8 = 0;
      FUN_14009d848(&local_1300,lVar8 + 0x38);
      lVar13 = local_1538;
      local_ea8 = FUN_146ad03a6;
      local_ea0 = 0;
      FUN_146ad0328(lVar12,local_1538,&local_ea8,&local_1300);
      uVar3 = *(undefined1 *)(lVar8 + 0x6b);
      uVar4 = *(undefined1 *)(lVar8 + 0x6a);
      local_1539 = *(undefined1 *)(lVar8 + 0x68);
      uVar5 = *(undefined1 *)(lVar8 + 0x69);
      local_1310 = 0;
      local_1308 = 0;
      FUN_146a48fa6(&local_1310,lVar8 + 0x48);
      local_ea8 = FUN_146ad04f4;
      local_ea0 = 0;
      local_1568 = (code **)CONCAT71(local_1568._1_7_,local_1539);
      local_1560 = uVar5;
      local_1558 = uVar4;
      local_1550 = uVar3;
      FUN_146ad040c(lVar12,lVar13,&local_ea8,&local_1310);
      local_1320 = 0;
      local_1318 = 0;
      FUN_146a4902a(&local_1320,lVar8 + 0x58);
      local_ea8 = FUN_146ad064e;
      local_ea0 = 0;
      FUN_146ad0594(lVar12,lVar13,&local_ea8,&local_1320);
      local_1568 = &local_f98;
      FUN_145ab3730(&local_ea8,"SButton",
                    ".\\Runtime/Slate/Private/Widgets/Notifications/SNotificationList.cpp");
      FUN_145ab34ca(&local_ea8,&local_ab8,lVar12);
      local_c70 = local_ab8;
      local_c68 = local_ab0;
      if (local_ab0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_ab0 + 1) = (int)local_ab0[1] + 1;
        UNLOCK();
      }
      FUN_140a4fe8e(local_1510,&local_c70);
      plVar9 = local_c68;
      if (local_c68 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_c68 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*local_c68)(local_c68);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      plVar9 = local_ab0;
      if (local_ab0 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_ab0 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*local_ab0)(local_ab0);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      plVar9 = (longlong *)CONCAT44(uStack_e9c,local_ea0);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar9 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      FUN_145ab35f4(&local_4e0);
      FUN_146a071ac(&local_840);
      lVar12 = lVar8 + 0x70;
      lVar8 = lVar8 + 0x88;
    } while (lVar12 != local_1518);
  }
  FUN_140767c14(local_1080,&local_4e0,0xffffffff);
  lVar8 = FUN_145aaf900(&uStack_4d8);
  local_840 = (code *)0x40a0000000000000;
  plStack_838 = (longlong *)0x0;
  local_830 = 1;
  local_828 = 0;
  uStack_820 = 0;
  *(undefined1 *)(lVar8 + 0x28) = 1;
  *(undefined4 *)(lVar8 + 0x18) = 0;
  *(undefined4 *)(lVar8 + 0x1c) = 0x40a00000;
  *(undefined4 *)(lVar8 + 0x20) = 0;
  *(undefined4 *)(lVar8 + 0x24) = 0;
  FUN_144a450dc(lVar8 + 0x30,&local_828);
  FUN_1449db362(&local_828);
  *(undefined4 *)(lVar8 + 0x48) = 2;
  *(undefined1 *)(lVar8 + 0x4c) = 1;
  *(undefined4 *)(lVar8 + 0x40) = 3;
  *(undefined1 *)(lVar8 + 0x44) = 1;
  local_840 = local_9f8;
  plStack_838 = local_9f0;
  if (local_9f0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_9f0 + 1) = (int)local_9f0[1] + 1;
    UNLOCK();
  }
  FUN_145aaf878(lVar8,&local_840);
  plVar9 = plStack_838;
  if (plStack_838 != (longlong *)0x0) {
    LOCK();
    plVar6 = plStack_838 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plStack_838)(plStack_838);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  FUN_140767802(&local_4e0);
  plVar9 = local_9f0;
  if (local_9f0 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_9f0 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_9f0)(local_9f0);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  FUN_140a53a96(&local_4e0);
  local_1348 = *(undefined4 *)(local_1530 + 0x220);
  local_1344 = 1;
  local_1340 = 0;
  uStack_1338 = 0;
  local_2f4 = 1;
  local_2f8 = local_1348;
  FUN_144a450dc(local_2f0,&local_1340);
  FUN_1449db362(&local_1340);
  FUN_140a5296a(&local_9f8);
  FUN_140a50426(&local_ab8);
  lVar8 = FUN_140a52578(&local_ab8);
  local_ea8 = (code *)&LAB_146ad06a2;
  local_ea0 = 0;
  FUN_146ad2dde(&local_840,local_1538);
  local_1388 = 0;
  uStack_1380 = 0;
  local_1378 = 1;
  local_1370 = 0;
  local_1368 = 0;
  FUN_140a58be0(&local_1370,&local_840);
  FUN_1449db362(&local_840);
  *(undefined1 *)(lVar8 + 0x28) = local_1378;
  *(undefined4 *)(lVar8 + 0x18) = (undefined4)local_1388;
  *(undefined4 *)(lVar8 + 0x1c) = local_1388._4_4_;
  *(undefined4 *)(lVar8 + 0x20) = (undefined4)uStack_1380;
  *(undefined4 *)(lVar8 + 0x24) = uStack_1380._4_4_;
  FUN_144a450dc(lVar8 + 0x30,&local_1370);
  FUN_1449db362(&local_1370);
  *(undefined4 *)(lVar8 + 0x48) = 1;
  *(undefined1 *)(lVar8 + 0x4c) = 1;
  *(undefined4 *)(lVar8 + 0x40) = 1;
  *(undefined1 *)(lVar8 + 0x44) = 1;
  FUN_140a504fe(&local_c70);
  FUN_140a4fdf2(&local_ff0,0);
  local_fa8 = 2;
  local_fa4 = 1;
  local_fb0 = 2;
  local_fac = 1;
  FUN_140a53334(&local_840);
  plVar9 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar9 == (longlong *)0x0) {
    plVar9 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_13f0,"NotificationList.Throbber",1);
  local_13e8 = (**(code **)(*plVar9 + 0x50))(plVar9,local_13f0,0,0);
  local_13e0 = 1;
  local_13d8 = 0;
  uStack_13d0 = 0;
  local_690 = (longlong *)CONCAT71(local_690._1_7_,1);
  local_698 = local_13e8;
  FUN_144a450dc(local_688,&local_13d8);
  FUN_1449db362(&local_13d8);
  if (*(char *)(local_1530 + 0x21c) == '\0') {
    local_1408 = CONCAT11(1,DAT_14c96b1e1);
    local_1400 = 0;
    uStack_13f8 = 0;
  }
  else {
    local_f98 = (code *)&LAB_146ad06e2;
    local_f90 = 0;
    FUN_146ad0a04(&local_ea8,local_1538);
    local_1408 = 0x119;
    local_1400 = 0;
    uStack_13f8 = (ulonglong)uStack_13f8._4_4_ << 0x20;
    FUN_140fe25fc(&local_1400,&local_ea8);
    FUN_1449db362(&local_ea8);
  }
  local_7d0 = local_1408;
  FUN_144a450dc(local_7c8,&local_1400);
  FUN_1449db362(&local_1400);
  local_ea8 = FUN_146ad07fc;
  local_ea0 = 0;
  FUN_146ad0704(&local_840,local_1538);
  local_1430 = 0x3fe0000000000000;
  local_1428 = 0x3fe0000000000000;
  local_1420 = 1;
  local_1418 = 0;
  uStack_1410 = 0;
  local_750 = 1;
  local_760 = 0x3fe0000000000000;
  local_758 = 0x3fe0000000000000;
  FUN_144a450dc(local_748,&local_1418);
  FUN_1449db362(&local_1418);
  local_1568 = (code **)&local_1449;
  FUN_140a554b8(local_1448,"SImage",
                ".\\Runtime/Slate/Private/Widgets/Notifications/SNotificationList.cpp",0x22a);
  FUN_140a52c70(local_1448,&local_13c8,&local_840);
  local_13b8 = local_13c8;
  local_13b0 = local_13c0;
  if (local_13c0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_13c0 + 1) = (int)local_13c0[1] + 1;
    UNLOCK();
  }
  uVar10 = FUN_140a4fd40(&local_ff0,&local_13b8);
  uVar10 = FUN_140a5058c(&local_c70,uVar10);
  FUN_140a4fdf2(local_1048,0);
  local_1000 = 2;
  local_ffc = 1;
  local_1008 = 2;
  local_1004 = 1;
  FUN_140a53334(&local_ea8);
  if (*(char *)(local_1530 + 0x21d) == '\x01') {
    local_1070 = FUN_146ad087a;
    plStack_1068 = (longlong *)((ulonglong)plStack_1068 & 0xffffffff00000000);
    FUN_146ad3798(&local_f98,local_1538);
    local_1490 = 0;
    local_1488 = 1;
    local_1480 = 0;
    local_1478 = 0;
    FUN_140a5c3e8(&local_1480,&local_f98);
    FUN_1449db362(&local_f98);
  }
  else {
    local_1488 = *(undefined1 *)(local_1538 + 0x318);
    local_1490 = *(undefined8 *)(local_1538 + 0x310);
    local_1480 = 0;
    local_1478 = 0;
    FUN_140a5c3e8(&local_1480,local_1528);
  }
  local_cf8 = local_1488;
  local_d00 = local_1490;
  FUN_144a450dc(local_cf0,&local_1480);
  FUN_1449db362(&local_1480);
  local_ed8 = 0x4040000000000000;
  local_ed0 = 0x4040000000000000;
  local_ec8 = 1;
  local_ec0 = 1;
  local_eb8 = 0;
  uStack_eb0 = 0;
  uVar11 = FUN_1469f8fd4(&local_ea8);
  local_1568 = (code **)&local_14a9;
  FUN_140a554b8(local_14a8,"SImage",
                ".\\Runtime/Slate/Private/Widgets/Notifications/SNotificationList.cpp",0x234);
  FUN_140a52c70(local_14a8,&local_1470,uVar11);
  local_1460 = local_1470;
  local_1458 = local_1468;
  if (local_1468 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1468 + 1) = (int)local_1468[1] + 1;
    UNLOCK();
  }
  uVar11 = FUN_140a4fd40(local_1048,&local_1460);
  uVar10 = FUN_140a5058c(uVar10,uVar11);
  local_1568 = (code **)&local_14c9;
  FUN_140a536a8(local_14c8,"SOverlay",
                ".\\Runtime/Slate/Private/Widgets/Notifications/SNotificationList.cpp",0x225);
  FUN_140a4ff16(local_14c8,&local_13a8,uVar10);
  puVar7 = local_1520;
  local_1398 = local_13a8;
  local_1390 = local_13a0;
  if (local_13a0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_13a0 + 1) = (int)local_13a0[1] + 1;
    UNLOCK();
  }
  uVar10 = FUN_140a4fe8e(lVar8,&local_1398);
  uVar10 = FUN_140a52392(&local_9f8,uVar10);
  FUN_140a50426(&local_f98);
  local_1070 = (code *)&DAT_41200000;
  plStack_1068 = (longlong *)0x0;
  local_1060 = 1;
  local_1058 = 0;
  uStack_1050 = 0;
  local_f70 = 1;
  local_f80 = 0x41200000;
  uStack_f7c = 0;
  uStack_f78 = 0;
  uStack_f74 = 0;
  FUN_144a450dc(local_f68,&local_1058);
  FUN_1449db362(&local_1058);
  local_14e0 = local_1080;
  local_14d8 = local_1078;
  if (local_1078 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1078 + 1) = (int)local_1078[1] + 1;
    UNLOCK();
  }
  uVar11 = FUN_140a4fe8e(&local_f98,&local_14e0);
  uVar10 = FUN_140a52392(uVar10,uVar11);
  local_1568 = (code **)&local_14e1;
  FUN_140a541dc(&local_1070,"SHorizontalBox",
                ".\\Runtime/Slate/Private/Widgets/Notifications/SNotificationList.cpp",0x21e);
  FUN_140a50ec6(&local_1070,&local_1358,uVar10);
  plVar6 = local_300;
  plVar9 = local_1350;
  if (local_1350 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1350 + 1) = (int)local_1350[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_1350 + 1) = (int)local_1350[1] + 1;
    UNLOCK();
  }
  local_308 = local_1358;
  local_300 = local_1350;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar6 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  local_1568 = (code **)&local_1501;
  FUN_140a53d66(local_1500,&DAT_149efe19f,
                ".\\Runtime/Slate/Private/Widgets/Notifications/SNotificationList.cpp",0x21b);
  FUN_140a50bf4(local_1500,&local_1330,&local_4e0);
  *puVar7 = local_1330;
  puVar7[1] = local_1328;
  if (local_1328 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1328 + 1) = (int)local_1328[1] + 1;
    UNLOCK();
    if (local_1328 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_1328 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_1328)(local_1328);
        LOCK();
        piVar1 = (int *)((longlong)local_1328 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_1328 + 0x10))(local_1328);
        }
      }
    }
  }
  if (local_14f8 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_14f8 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_14f8)(local_14f8);
      LOCK();
      piVar1 = (int *)((longlong)local_14f8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_14f8 + 0x10))(local_14f8);
      }
    }
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar9 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if (local_1350 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_1350 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_1350)(local_1350);
      LOCK();
      piVar1 = (int *)((longlong)local_1350 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1350 + 0x10))(local_1350);
      }
    }
  }
  plVar9 = plStack_1068;
  if (plStack_1068 != (longlong *)0x0) {
    LOCK();
    plVar6 = plStack_1068 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plStack_1068)(plStack_1068);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  plVar9 = local_14d8;
  if (local_14d8 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_14d8 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_14d8)(local_14d8);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  FUN_140a509a6(&local_f98);
  plVar9 = local_1390;
  if (local_1390 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_1390 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_1390)(local_1390);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if (local_13a0 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_13a0 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_13a0)(local_13a0);
      LOCK();
      piVar1 = (int *)((longlong)local_13a0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_13a0 + 0x10))(local_13a0);
      }
    }
  }
  if (local_14c0 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_14c0 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_14c0)(local_14c0);
      LOCK();
      piVar1 = (int *)((longlong)local_14c0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_14c0 + 0x10))(local_14c0);
      }
    }
  }
  plVar9 = local_1458;
  if (local_1458 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_1458 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_1458)(local_1458);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if (local_1468 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_1468 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_1468)(local_1468);
      LOCK();
      piVar1 = (int *)((longlong)local_1468 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1468 + 0x10))(local_1468);
      }
    }
  }
  if (local_14a0 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_14a0 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_14a0)(local_14a0);
      LOCK();
      piVar1 = (int *)((longlong)local_14a0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_14a0 + 0x10))(local_14a0);
      }
    }
  }
  FUN_140a55a86(&local_ea8);
  FUN_1415b5e50(local_1048);
  plVar9 = local_13b0;
  if (local_13b0 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_13b0 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_13b0)(local_13b0);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if (local_13c0 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_13c0 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_13c0)(local_13c0);
      LOCK();
      piVar1 = (int *)((longlong)local_13c0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_13c0 + 0x10))(local_13c0);
      }
    }
  }
  if (local_1440 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_1440 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_1440)(local_1440);
      LOCK();
      piVar1 = (int *)((longlong)local_1440 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1440 + 0x10))(local_1440);
      }
    }
  }
  FUN_140a55a86(&local_840);
  FUN_1415b5e50(&local_ff0);
  FUN_1415b5e16(&local_c70);
  FUN_140a509a6(&local_ab8);
  FUN_145ab33da(&local_9f8);
  FUN_140a5660c(&local_4e0);
  if (local_1078 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_1078 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_1078)(local_1078);
      LOCK();
      piVar1 = (int *)((longlong)local_1078 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1078 + 0x10))(local_1078);
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_1588) == DAT_14c707940) {
    return puVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146acf06c FUN_146acf06c body=313 status=ok
// SIG undefined FUN_146acf06c(void)

longlong * FUN_146acf06c(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_146acf168:
    *puVar5 = &PTR_LAB_149f05990;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_149f1ae30;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_146acf168;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f05990;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_149f1ae30;
    puVar5[3] = uVar10;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 146acf1a6 FUN_146acf1a6 body=64 status=ok
// SIG undefined FUN_146acf1a6(void)

undefined8 * FUN_146acf1a6(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f1ae30;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146acf1ea FUN_146acf1ea body=81 status=ok
// SIG undefined FUN_146acf1ea(void)

undefined8 FUN_146acf1ea(longlong param_1)

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



// FUNCTION 146acf242 FUN_146acf242 body=89 status=ok
// SIG undefined FUN_146acf242(void)

bool FUN_146acf242(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_146acf28d;
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
LAB_146acf28d:
  return lVar6 == param_2;
}



// FUNCTION 146acf2b8 FUN_146acf2b8 body=118 status=ok
// SIG undefined FUN_146acf2b8(void)

void FUN_146acf2b8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05990;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f1ae30;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 146acf32e FUN_146acf32e body=118 status=ok
// SIG undefined FUN_146acf32e(void)

void FUN_146acf32e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05990;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f1ae30;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 146acf3a4 FUN_146acf3a4 body=156 status=ok
// SIG undefined FUN_146acf3a4(void)

void FUN_146acf3a4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f05990;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f1ae30;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146acf430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146acf440 FUN_146acf440 body=105 status=ok
// SIG undefined FUN_146acf440(void)

undefined8 FUN_146acf440(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_146acf494:
    (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30),param_2);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_146acf494;
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
    (**(code **)(param_1 + 0x28))
              ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18),param_2);
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
  return param_2;
}



// FUNCTION 146acf4aa FUN_146acf4aa body=143 status=ok
// SIG undefined FUN_146acf4aa(void)

ulonglong FUN_146acf4aa(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_58 [44];
  undefined1 local_2c [20];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_146acf518:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146acf518;
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
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30),local_2c);
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
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 146acf53a FUN_146acf53a body=313 status=ok
// SIG undefined FUN_146acf53a(void)

longlong * FUN_146acf53a(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_146acf636:
    *puVar5 = &PTR_LAB_149f1aac0;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_149f1aea0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_146acf636;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f1aac0;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_149f1aea0;
    puVar5[3] = uVar10;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 146acf674 FUN_146acf674 body=64 status=ok
// SIG undefined FUN_146acf674(void)

undefined8 * FUN_146acf674(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f1aea0;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146acf6b8 FUN_146acf6b8 body=81 status=ok
// SIG undefined FUN_146acf6b8(void)

undefined8 FUN_146acf6b8(longlong param_1)

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



// FUNCTION 146acf710 FUN_146acf710 body=89 status=ok
// SIG undefined FUN_146acf710(void)

bool FUN_146acf710(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_146acf75b;
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
LAB_146acf75b:
  return lVar6 == param_2;
}



// FUNCTION 146acf786 FUN_146acf786 body=118 status=ok
// SIG undefined FUN_146acf786(void)

void FUN_146acf786(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f1aac0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f1aea0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 146acf7fc FUN_146acf7fc body=118 status=ok
// SIG undefined FUN_146acf7fc(void)

void FUN_146acf7fc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f1aac0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f1aea0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 146acf872 FUN_146acf872 body=156 status=ok
// SIG undefined FUN_146acf872(void)

void FUN_146acf872(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f1aac0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f1aea0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146acf8fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146acf90e FUN_146acf90e body=105 status=ok
// SIG undefined FUN_146acf90e(void)

undefined8 FUN_146acf90e(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_146acf962:
    (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30),param_2);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_146acf962;
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
    (**(code **)(param_1 + 0x28))
              ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18),param_2);
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
  return param_2;
}



// FUNCTION 146acf978 FUN_146acf978 body=143 status=ok
// SIG undefined FUN_146acf978(void)

ulonglong FUN_146acf978(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_146acf9e6:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146acf9e6;
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
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30),local_28);
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
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 146acfa08 FUN_146acfa08 body=313 status=ok
// SIG undefined FUN_146acfa08(void)

longlong * FUN_146acfa08(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_146acfb04:
    *puVar5 = &PTR_LAB_149f04fc0;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_149f1af10;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_146acfb04;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f04fc0;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_149f1af10;
    puVar5[3] = uVar10;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 146acfb42 FUN_146acfb42 body=64 status=ok
// SIG undefined FUN_146acfb42(void)

undefined8 * FUN_146acfb42(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f1af10;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146acfb86 FUN_146acfb86 body=81 status=ok
// SIG undefined FUN_146acfb86(void)

undefined8 FUN_146acfb86(longlong param_1)

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



// FUNCTION 146acfbde FUN_146acfbde body=89 status=ok
// SIG undefined FUN_146acfbde(void)

bool FUN_146acfbde(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_146acfc29;
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
LAB_146acfc29:
  return lVar6 == param_2;
}



// FUNCTION 146acfc54 FUN_146acfc54 body=118 status=ok
// SIG undefined FUN_146acfc54(void)

void FUN_146acfc54(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f04fc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f1af10;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 146acfcca FUN_146acfcca body=118 status=ok
// SIG undefined FUN_146acfcca(void)

void FUN_146acfcca(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f04fc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f1af10;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 146acfd40 FUN_146acfd40 body=156 status=ok
// SIG undefined FUN_146acfd40(void)

void FUN_146acfd40(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f04fc0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f1af10;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146acfdcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146acfddc FUN_146acfddc body=105 status=ok
// SIG undefined FUN_146acfddc(void)

undefined8 FUN_146acfddc(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_146acfe30:
    (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30),param_2);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_146acfe30;
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
    (**(code **)(param_1 + 0x28))
              ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18),param_2);
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
  return param_2;
}



// FUNCTION 146acfe46 FUN_146acfe46 body=143 status=ok
// SIG undefined FUN_146acfe46(void)

ulonglong FUN_146acfe46(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_146acfeb4:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146acfeb4;
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
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30),local_28);
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
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 146acfed6 FUN_146acfed6 body=163 status=ok
// SIG undefined FUN_146acfed6(void)

longlong FUN_146acfed6(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *param_3;
  local_30 = CONCAT44(local_30._4_4_,*(undefined4 *)(param_3 + 1));
  FUN_146ad0a04(local_48,param_2,&local_38);
  local_38 = CONCAT62(local_38._2_6_,0x119);
  local_30 = 0;
  local_28 = 0;
  FUN_140fe25fc(&local_30,local_48);
  *(undefined2 *)(param_1 + 0x70) = (undefined2)local_38;
  FUN_144a450dc(param_1 + 0x78,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_48);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146acff7a FUN_146acff7a body=76 status=ok
// SIG undefined FUN_146acff7a(void)

undefined1 * FUN_146acff7a(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  
  uVar2 = DAT_14c96b1e1;
  if ((*(int *)(param_1 + 0x5a0) != 0) && (*(longlong **)(param_1 + 0x598) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x598) + 0x30))();
    puVar3 = &DAT_14c96b1e1;
    if (cVar1 != '\0') {
      puVar3 = &DAT_14c96b238;
    }
    uVar2 = *puVar3;
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 146acffc6 FUN_146acffc6 body=215 status=ok
// SIG undefined FUN_146acffc6(void)

longlong FUN_146acffc6(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_88 [40];
  undefined1 local_60 [16];
  longlong *local_50;
  undefined4 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = *(undefined4 *)(param_3 + 1);
  local_50 = (longlong *)*param_3;
  FUN_146ad0ed2(local_60);
  FUN_144a5dc74(&local_50);
  local_40 = 1;
  local_38 = 0;
  local_30 = 0;
  FUN_1413a4324(&local_38,local_60);
  FUN_140008f88(param_1 + 0x1a8,&local_50);
  *(undefined1 *)(param_1 + 0x1b8) = local_40;
  FUN_144a450dc(param_1 + 0x1c0,&local_38);
  FUN_1449db362(&local_38);
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x10))();
  }
  FUN_1449db362(local_60);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ad009e FUN_146ad009e body=57 status=ok
// SIG undefined FUN_146ad009e(void)

longlong * FUN_146ad009e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_14142e2d2(param_1 + 0x5a8);
  plVar1 = (longlong *)*plVar2;
  *param_2 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_2 + 1) = (int)plVar2[1];
  return param_2;
}



// FUNCTION 146ad00f6 FUN_146ad00f6 body=205 status=ok
// SIG undefined FUN_146ad00f6(void)

longlong FUN_146ad00f6(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_88 [40];
  undefined1 local_60 [16];
  longlong *local_50;
  undefined4 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = *(undefined4 *)(param_3 + 1);
  local_50 = (longlong *)*param_3;
  FUN_146ad0ed2(local_60);
  FUN_144a5dc74(&local_50);
  local_40 = 1;
  local_38 = 0;
  local_30 = 0;
  FUN_1413a4324(&local_38,local_60);
  FUN_140008f88(param_1,&local_50);
  *(undefined1 *)(param_1 + 0x10) = local_40;
  FUN_144a450dc(param_1 + 0x18,&local_38);
  FUN_1449db362(&local_38);
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x10))();
  }
  FUN_1449db362(local_60);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ad01c4 FUN_146ad01c4 body=115 status=ok
// SIG undefined FUN_146ad01c4(void)

longlong * FUN_146ad01c4(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_146a4b536(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 146ad0238 FUN_146ad0238 body=163 status=ok
// SIG undefined FUN_146ad0238(void)

longlong FUN_146ad0238(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *param_3;
  local_30 = CONCAT44(local_30._4_4_,*(undefined4 *)(param_3 + 1));
  FUN_146ad0a04(local_48,param_2,&local_38);
  local_38 = CONCAT62(local_38._2_6_,0x119);
  local_30 = 0;
  local_28 = 0;
  FUN_140fe25fc(&local_30,local_48);
  *(undefined2 *)(param_1 + 0x70) = (undefined2)local_38;
  FUN_144a450dc(param_1 + 0x78,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_48);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ad02dc FUN_146ad02dc body=76 status=ok
// SIG undefined FUN_146ad02dc(void)

undefined1 * FUN_146ad02dc(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  
  uVar2 = DAT_14c96b1e1;
  if ((*(int *)(param_1 + 0x590) != 0) && (*(longlong **)(param_1 + 0x588) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x588) + 0x30))();
    puVar3 = &DAT_14c96b1e1;
    if (cVar1 != '\0') {
      puVar3 = &DAT_14c96b238;
    }
    uVar2 = *puVar3;
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 146ad0328 FUN_146ad0328 body=124 status=ok
// SIG undefined FUN_146ad0328(void)

longlong FUN_146ad0328(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *(undefined4 *)(param_3 + 1);
  local_40 = *param_3;
  FUN_146ad1aba(local_30);
  FUN_144a450dc(param_1 + 0x220,local_30);
  FUN_1449db362(local_30);
  FUN_1449db362(param_4);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ad03a6 FUN_146ad03a6 body=101 status=ok
// SIG undefined FUN_146ad03a6(void)

undefined1 * FUN_146ad03a6(undefined8 param_1,undefined1 *param_2,longlong *param_3)

{
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    (**(code **)(*(longlong *)*param_3 + 0x60))();
  }
  *param_2 = 1;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  FUN_1449db362(param_3);
  return param_2;
}



// FUNCTION 146ad040c FUN_146ad040c body=230 status=ok
// SIG undefined FUN_146ad040c(void)

longlong FUN_146ad040c(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 local_50 [16];
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_40 = *param_3;
  local_38 = CONCAT44(local_38._4_4_,*(undefined4 *)(param_3 + 1));
  local_60 = &stack0x00000040;
  local_68 = &stack0x00000038;
  local_70 = &stack0x00000030;
  local_78 = &stack0x00000028;
  FUN_146ad20d6(local_50,param_2,&local_40);
  local_40 = CONCAT62(local_40._2_6_,0x119);
  local_38 = 0;
  local_30 = 0;
  FUN_140fe25fc(&local_38,local_50);
  *(undefined2 *)(param_1 + 0x70) = (undefined2)local_40;
  FUN_144a450dc(param_1 + 0x78,&local_38);
  FUN_1449db362(&local_38);
  FUN_1449db362(local_50);
  FUN_1449db362(param_4);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ad04f4 FUN_146ad04f4 body=160 status=ok
// SIG undefined FUN_146ad04f4(void)

undefined1 *
FUN_146ad04f4(longlong param_1,undefined1 *param_2,longlong *param_3,undefined1 param_4,
             undefined1 param_5,undefined1 param_6,undefined1 param_7)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  
  if ((((int)param_3[1] == 0) || ((longlong *)*param_3 == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(*(longlong *)*param_3 + 0x30))(), cVar1 == '\0')) {
    uVar2 = DAT_14c96b238;
    switch(*(undefined4 *)(param_1 + 0x360)) {
    case 0:
      *param_2 = param_4;
      goto LAB_146ad057b;
    case 1:
      uVar2 = param_5;
      break;
    case 2:
      uVar2 = param_6;
      break;
    case 3:
      uVar2 = param_7;
    }
    *param_2 = uVar2;
  }
  else {
    if ((int)param_3[1] == 0) {
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3 = (longlong *)*param_3;
    }
    (**(code **)(*plVar3 + 0x58))(plVar3,param_2,*(undefined4 *)(param_1 + 0x360));
  }
LAB_146ad057b:
  FUN_1449db362(param_3);
  return param_2;
}



// FUNCTION 146ad0594 FUN_146ad0594 body=184 status=ok
// SIG undefined FUN_146ad0594(void)

longlong FUN_146ad0594(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [16];
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = *param_3;
  local_38 = CONCAT44(local_38._4_4_,*(undefined4 *)(param_3 + 1));
  FUN_146ad27ee(local_50,param_2,&local_40);
  local_40 = CONCAT62(local_40._2_6_,0x100);
  local_38 = 0;
  local_30 = 0;
  FUN_14096c7c0(&local_38,local_50);
  *(undefined2 *)(param_1 + 0x88) = (undefined2)local_40;
  FUN_144a450dc(param_1 + 0x90,&local_38);
  FUN_1449db362(&local_38);
  FUN_1449db362(local_50);
  FUN_1449db362(param_4);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ad064e FUN_146ad064e body=84 status=ok
// SIG undefined FUN_146ad064e(void)

ulonglong FUN_146ad064e(longlong param_1,longlong *param_2)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (((int)param_2[1] != 0) && ((longlong *)*param_2 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*(longlong *)*param_2 + 0x30))();
    if (cVar1 != '\0') {
      if ((int)param_2[1] == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = (longlong *)*param_2;
      }
      uVar2 = (**(code **)(*plVar3 + 0x58))(plVar3,*(undefined4 *)(param_1 + 0x360));
      uVar4 = (ulonglong)uVar2;
    }
  }
  FUN_1449db362(param_2);
  return uVar4 & 0xffffffff;
}



// FUNCTION 146ad0704 FUN_146ad0704 body=246 status=ok
// SIG undefined FUN_146ad0704(void)

longlong FUN_146ad0704(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char local_40;
  undefined1 local_3c;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uStack_50 = *(undefined4 *)(param_3 + 1);
  local_58 = *param_3;
  FUN_146ad32ac(local_68,param_2,&local_58);
  local_40 = '\0';
  local_3c = 1;
  local_38 = 0;
  local_30 = 0;
  FUN_140a51ef4(&local_38,local_68);
  if (&local_58 != (undefined8 *)(param_1 + 0xb0)) {
    if (local_40 == '\x01') {
      *(undefined8 *)(param_1 + 0xc0) = local_48;
      *(undefined4 *)(param_1 + 0xb0) = (undefined4)local_58;
      *(undefined4 *)(param_1 + 0xb4) = local_58._4_4_;
      *(undefined4 *)(param_1 + 0xb8) = uStack_50;
      *(undefined4 *)(param_1 + 0xbc) = uStack_4c;
      uVar1 = 1;
    }
    else {
      if (*(char *)(param_1 + 200) != '\x01') goto LAB_146ad0793;
      uVar1 = 0;
    }
    *(undefined1 *)(param_1 + 200) = uVar1;
  }
LAB_146ad0793:
  *(undefined1 *)(param_1 + 0xcc) = local_3c;
  FUN_144a450dc(param_1 + 0xd0,&local_38);
  FUN_1449db362(&local_38);
  if (local_40 == '\x01') {
    local_40 = '\0';
  }
  FUN_1449db362(local_68);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ad07fc FUN_146ad07fc body=126 status=ok
// SIG undefined FUN_146ad07fc(void)

float * FUN_146ad07fc(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_14692f614(param_1 + 0x488);
  fVar2 = (fVar1 + fVar1) * 3.1415927;
  fVar1 = sinf(fVar2);
  fVar2 = cosf(fVar2);
  *param_2 = fVar2;
  param_2[1] = fVar1;
  param_2[2] = -fVar1;
  param_2[3] = fVar2;
  param_2[4] = 0.0;
  param_2[5] = 0.0;
  *(undefined1 *)(param_2 + 6) = 1;
  return param_2;
}



// FUNCTION 146ad087a FUN_146ad087a body=258 status=ok
// SIG undefined FUN_146ad087a(void)

undefined8 FUN_146ad087a(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 *puVar5;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_1 + 0x360) == 3) {
    plVar2 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
    if (plVar2 == (longlong *)0x0) {
      plVar2 = DAT_14c96b350;
    }
    pcVar4 = "Icons.ErrorWithColor.Large";
    puVar5 = &local_28;
  }
  else {
    if (*(int *)(param_1 + 0x360) != 2) {
      if ((*(int *)(param_1 + 0x328) != 0) && (*(longlong **)(param_1 + 800) != (longlong *)0x0)) {
        cVar1 = (**(code **)(**(longlong **)(param_1 + 800) + 0x30))();
        if (cVar1 != '\0') {
          if (*(int *)(param_1 + 0x328) == 0) {
            plVar2 = (longlong *)0x0;
          }
          else {
            plVar2 = *(longlong **)(param_1 + 800);
          }
          uVar3 = (**(code **)(*plVar2 + 0x58))();
          *(undefined8 *)(param_1 + 0x310) = uVar3;
        }
      }
      uVar3 = *(undefined8 *)(param_1 + 0x310);
      goto LAB_146ad0913;
    }
    plVar2 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
    if (plVar2 == (longlong *)0x0) {
      plVar2 = DAT_14c96b350;
    }
    pcVar4 = "Icons.SuccessWithColor.Large";
    puVar5 = &local_20;
  }
  FUN_1446ddc76(puVar5,pcVar4,1);
  uVar3 = (**(code **)(*plVar2 + 0x50))(plVar2,*puVar5,0,0);
LAB_146ad0913:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ad097e FUN_146ad097e body=62 status=ok
// SIG undefined FUN_146ad097e(void)

undefined1 * FUN_146ad097e(undefined1 *param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  
  uVar2 = FUN_14142e2d2(*param_2 + 0x2a0);
  cVar1 = FUN_144a7c5f6(uVar2);
  puVar3 = &DAT_14c96b23c;
  if (cVar1 != '\0') {
    puVar3 = &DAT_14c96b1e1;
  }
  *param_1 = *puVar3;
  return param_1;
}



// FUNCTION 146ad09da FUN_146ad09da body=12 status=ok
// SIG undefined FUN_146ad09da(void)

void FUN_146ad09da(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000146ad09e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 146ad09e6 FUN_146ad09e6 body=29 status=ok
// SIG undefined FUN_146ad09e6(void)

undefined8 FUN_146ad09e6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ad0a04 FUN_146ad0a04 body=313 status=ok
// SIG undefined FUN_146ad0a04(void)

longlong * FUN_146ad0a04(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_146ad0b00:
    *puVar5 = &PTR_LAB_149f055c0;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_149f1afe0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_146ad0b00;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f055c0;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_149f1afe0;
    puVar5[3] = uVar10;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 146ad0b3e FUN_146ad0b3e body=64 status=ok
// SIG undefined FUN_146ad0b3e(void)

undefined8 * FUN_146ad0b3e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f1afe0;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ad0b82 FUN_146ad0b82 body=81 status=ok
// SIG undefined FUN_146ad0b82(void)

undefined8 FUN_146ad0b82(longlong param_1)

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



// FUNCTION 146ad0bda FUN_146ad0bda body=89 status=ok
// SIG undefined FUN_146ad0bda(void)

bool FUN_146ad0bda(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_146ad0c25;
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
LAB_146ad0c25:
  return lVar6 == param_2;
}



// FUNCTION 146ad0c50 FUN_146ad0c50 body=118 status=ok
// SIG undefined FUN_146ad0c50(void)

void FUN_146ad0c50(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f055c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f1afe0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 146ad0cc6 FUN_146ad0cc6 body=118 status=ok
// SIG undefined FUN_146ad0cc6(void)

void FUN_146ad0cc6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f055c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f1afe0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 146ad0d3c FUN_146ad0d3c body=156 status=ok
// SIG undefined FUN_146ad0d3c(void)

void FUN_146ad0d3c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f055c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f1afe0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146ad0dc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146ad0dd8 FUN_146ad0dd8 body=105 status=ok
// SIG undefined FUN_146ad0dd8(void)

undefined8 FUN_146ad0dd8(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_146ad0e2c:
    (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30),param_2);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_146ad0e2c;
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
    (**(code **)(param_1 + 0x28))
              ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18),param_2);
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
  return param_2;
}



// FUNCTION 146ad0e42 FUN_146ad0e42 body=143 status=ok
// SIG undefined FUN_146ad0e42(void)

ulonglong FUN_146ad0e42(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_146ad0eb0:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146ad0eb0;
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
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30),&local_19);
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
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 146ad0ed2 FUN_146ad0ed2 body=313 status=ok
// SIG undefined FUN_146ad0ed2(void)

longlong * FUN_146ad0ed2(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_146ad0fce:
    *puVar5 = &PTR_LAB_149f05a70;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_149f1b050;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_146ad0fce;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f05a70;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_149f1b050;
    puVar5[3] = uVar10;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 146ad100c FUN_146ad100c body=64 status=ok
// SIG undefined FUN_146ad100c(void)

undefined8 * FUN_146ad100c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f1b050;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ad1050 FUN_146ad1050 body=81 status=ok
// SIG undefined FUN_146ad1050(void)

undefined8 FUN_146ad1050(longlong param_1)

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



// FUNCTION 146ad10a8 FUN_146ad10a8 body=89 status=ok
// SIG undefined FUN_146ad10a8(void)

bool FUN_146ad10a8(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_146ad10f3;
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
LAB_146ad10f3:
  return lVar6 == param_2;
}



// FUNCTION 146ad111e FUN_146ad111e body=118 status=ok
// SIG undefined FUN_146ad111e(void)

void FUN_146ad111e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05a70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f1b050;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 146ad1194 FUN_146ad1194 body=118 status=ok
// SIG undefined FUN_146ad1194(void)

void FUN_146ad1194(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05a70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f1b050;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 146ad120a FUN_146ad120a body=156 status=ok
// SIG undefined FUN_146ad120a(void)

void FUN_146ad120a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f05a70;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f1b050;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146ad1296. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146ad12a6 FUN_146ad12a6 body=105 status=ok
// SIG undefined FUN_146ad12a6(void)

undefined8 FUN_146ad12a6(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_146ad12fa:
    (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30),param_2);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_146ad12fa;
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
    (**(code **)(param_1 + 0x28))
              ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18),param_2);
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
  return param_2;
}



// FUNCTION 146ad1310 FUN_146ad1310 body=162 status=ok
// SIG undefined FUN_146ad1310(void)

ulonglong FUN_146ad1310(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_58 [40];
  longlong *local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_146ad1390:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146ad1390;
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
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar4 != 0);
    if ((lVar4 != 0) &&
       ((**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30),local_30),
       local_30[0] != (longlong *)0x0)) {
      (**(code **)(*local_30[0] + 0x10))();
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
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 146ad13b4 FUN_146ad13b4 body=313 status=ok
// SIG undefined FUN_146ad13b4(void)

longlong * FUN_146ad13b4(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_146ad14b0:
    *puVar5 = &PTR_LAB_149e020b0;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_149f1b0c0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_146ad14b0;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149e020b0;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_149f1b0c0;
    puVar5[3] = uVar10;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 146ad14ee FUN_146ad14ee body=64 status=ok
// SIG undefined FUN_146ad14ee(void)

undefined8 * FUN_146ad14ee(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f1b0c0;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ad1532 FUN_146ad1532 body=81 status=ok
// SIG undefined FUN_146ad1532(void)

undefined8 FUN_146ad1532(longlong param_1)

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



// FUNCTION 146ad158a FUN_146ad158a body=89 status=ok
// SIG undefined FUN_146ad158a(void)

bool FUN_146ad158a(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_146ad15d5;
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
LAB_146ad15d5:
  return lVar6 == param_2;
}



// FUNCTION 146ad1600 FUN_146ad1600 body=118 status=ok
// SIG undefined FUN_146ad1600(void)

void FUN_146ad1600(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f1b0c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 146ad1676 FUN_146ad1676 body=118 status=ok
// SIG undefined FUN_146ad1676(void)

void FUN_146ad1676(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f1b0c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 146ad16ec FUN_146ad16ec body=156 status=ok
// SIG undefined FUN_146ad16ec(void)

void FUN_146ad16ec(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f1b0c0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146ad1778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146ad1788 FUN_146ad1788 body=100 status=ok
// SIG undefined FUN_146ad1788(void)

void FUN_146ad1788(longlong param_1)

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
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000146ad17d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000146ad17e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 146ad17ec FUN_146ad17ec body=100 status=ok
// SIG undefined FUN_146ad17ec(void)

ulonglong FUN_146ad17ec(longlong param_1)

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
LAB_146ad1845:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146ad1845;
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



// FUNCTION 146ad1850 FUN_146ad1850 body=372 status=ok
// SIG undefined FUN_146ad1850(void)

undefined8 * FUN_146ad1850(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  plVar3 = (longlong *)FUN_14001cc68(0x388);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_149f1b130;
  plVar4 = plVar3 + 2;
  memset(plVar4,0,0x378);
  FUN_145ab3964(plVar4);
  plVar3[2] = (longlong)&PTR_FUN_149f0e560;
  plVar3[0x6f] = 0;
  *(undefined4 *)(plVar3 + 0x70) = 0;
  local_30 = plVar4;
  local_28 = plVar3;
  FUN_146ad1a12(&local_30,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_146ad1957;
    param_1[1] = 0;
LAB_146ad1921:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_146ad1957;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar4;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = plVar4;
    plVar4 = (longlong *)param_1[1];
    if (plVar3 != plVar4) {
      param_1[1] = plVar3;
      if (plVar4 == (longlong *)0x0) goto LAB_146ad1957;
      goto LAB_146ad1921;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_146ad1957;
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
LAB_146ad1957:
  plVar4 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_38 = 0x378;
  FUN_140a52e78(*param_1,"SHyperlink",
                ".\\Runtime/Slate/Private/Widgets/Notifications/SNotificationList.cpp",0x1dd);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ad19c6 FUN_146ad19c6 body=45 status=ok
// SIG undefined FUN_146ad19c6(void)

void FUN_146ad19c6(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_149f0e560;
  FUN_1449db362(param_1 + 0x378);
  FUN_146a5ddd4(param_1 + 0x10);
  return;
}



// FUNCTION 146ad19f4 FUN_146ad19f4 body=29 status=ok
// SIG undefined FUN_146ad19f4(void)

undefined8 FUN_146ad19f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ad1a12 FUN_146ad1a12 body=167 status=ok
// SIG undefined FUN_146ad1a12(void)

void FUN_146ad1a12(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_146ad1a8d;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_146ad1a8d;
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
LAB_146ad1a8d:
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
                    /* WARNING: Could not recover jumptable at 0x000146ad1aad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 146ad1aba FUN_146ad1aba body=351 status=ok
// SIG undefined FUN_146ad1aba(void)

undefined8 *
FUN_146ad1aba(undefined8 *param_1,longlong param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar5 = *param_3;
  uVar4 = *(undefined4 *)(param_3 + 1);
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  uVar6 = *param_1;
  plStack_50 = *(longlong **)(param_2 + 0x10);
  if (plStack_50 == (longlong *)0x0) {
LAB_146ad1b1b:
    local_58 = 0;
    plStack_50 = (longlong *)0x0;
    bVar10 = true;
  }
  else {
    iVar9 = (int)plStack_50[1];
    do {
      if (iVar9 == 0) goto LAB_146ad1b1b;
      LOCK();
      iVar8 = (int)plStack_50[1];
      bVar10 = iVar9 == iVar8;
      if (bVar10) {
        *(int *)(plStack_50 + 1) = iVar9 + 1;
        iVar8 = iVar9;
      }
      iVar9 = iVar8;
      UNLOCK();
    } while (!bVar10);
    local_58 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
    UNLOCK();
    bVar10 = false;
  }
  plVar7 = plStack_50;
  local_68 = uVar5;
  local_60 = uVar4;
  FUN_146ad1c20(uVar6,&local_58,&local_68,param_4);
  plVar3 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (!bVar10) {
    LOCK();
    plVar3 = plVar7 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
    LOCK();
    plVar3 = plVar7 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_88);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146ad1c20 FUN_146ad1c20 body=122 status=ok
// SIG undefined FUN_146ad1c20(void)

undefined8 *
FUN_146ad1c20(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  *param_1 = &PTR_LAB_149f1b1c0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_14009d848(param_1 + 1,param_4);
  uVar4 = FUN_144a3f946();
  param_1[3] = uVar4;
  *param_1 = &PTR_FUN_149f1b150;
  param_1[4] = *param_2;
  lVar3 = param_2[1];
  param_1[5] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  param_1[6] = uVar2;
  *(undefined4 *)(param_1 + 7) = uVar1;
  return param_1;
}



// FUNCTION 146ad1c9a FUN_146ad1c9a body=83 status=ok
// SIG undefined FUN_146ad1c9a(void)

undefined8 * FUN_146ad1c9a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f1b150;
  plVar2 = (longlong *)param_1[5];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  *param_1 = &PTR_LAB_149f1b1c0;
  FUN_1449db362(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ad1cf2 FUN_146ad1cf2 body=81 status=ok
// SIG undefined FUN_146ad1cf2(void)

undefined8 FUN_146ad1cf2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x28);
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
    uVar6 = *(undefined8 *)(param_1 + 0x20);
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



// FUNCTION 146ad1d4a FUN_146ad1d4a body=89 status=ok
// SIG undefined FUN_146ad1d4a(void)

bool FUN_146ad1d4a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x28);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_146ad1d95;
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
    lVar6 = *(longlong *)(param_1 + 0x20);
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
LAB_146ad1d95:
  return lVar6 == param_2;
}



// FUNCTION 146ad1dcc FUN_146ad1dcc body=64 status=ok
// SIG undefined FUN_146ad1dcc(void)

void FUN_146ad1dcc(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  FUN_146ad2066(*param_2,param_1);
  return;
}



// FUNCTION 146ad1e0c FUN_146ad1e0c body=64 status=ok
// SIG undefined FUN_146ad1e0c(void)

void FUN_146ad1e0c(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  FUN_146ad2066(*param_2,param_1);
  return;
}



// FUNCTION 146ad1e4c FUN_146ad1e4c body=98 status=ok
// SIG undefined FUN_146ad1e4c(void)

void FUN_146ad1e4c(undefined8 param_1,LPCRITICAL_SECTION param_2)

{
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  FUN_146ad2066(param_2[1].DebugInfo,param_1);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146ad1e9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146ad1eae FUN_146ad1eae body=213 status=ok
// SIG undefined FUN_146ad1eae(void)

undefined8 FUN_146ad1eae(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar7 = *(longlong **)(param_1 + 0x28);
  bVar4 = true;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
    lVar8 = 0;
  }
  else {
    iVar6 = (int)plVar7[1];
    lVar8 = 0;
    do {
      if (iVar6 == 0) {
        plVar7 = (longlong *)0x0;
        goto LAB_146ad1efd;
      }
      LOCK();
      iVar5 = (int)plVar7[1];
      bVar9 = iVar6 == iVar5;
      if (bVar9) {
        *(int *)(plVar7 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar9);
    lVar8 = *(longlong *)(param_1 + 0x20);
    bVar4 = false;
  }
LAB_146ad1efd:
  pcVar3 = *(code **)(param_1 + 0x30);
  iVar6 = *(int *)(param_1 + 0x38);
  local_48 = 0;
  local_40 = 0;
  FUN_14009d848(&local_48,param_1 + 8);
  (*pcVar3)(iVar6 + lVar8,param_2,&local_48);
  if (!bVar4) {
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
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146ad1f84 FUN_146ad1f84 body=222 status=ok
// SIG undefined FUN_146ad1f84(void)

ulonglong FUN_146ad1f84(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  undefined8 unaff_RSI;
  ulonglong uVar8;
  bool bVar9;
  undefined1 auStack_128 [40];
  undefined8 local_100;
  undefined4 local_f8;
  undefined1 local_f0 [184];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_128;
  plVar3 = *(longlong **)(param_1 + 0x28);
  if (plVar3 == (longlong *)0x0) {
LAB_146ad2034:
    uVar8 = 0;
  }
  else {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_146ad2034;
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar9 = iVar7 == iVar6;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar9);
    lVar4 = *(longlong *)(param_1 + 0x20);
    uVar8 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      pcVar5 = *(code **)(param_1 + 0x30);
      iVar7 = *(int *)(param_1 + 0x38);
      local_100 = 0;
      local_f8 = 0;
      FUN_14009d848(&local_100,param_1 + 8);
      (*pcVar5)(lVar4 + iVar7,local_f0,&local_100);
      FUN_14493db24(local_f0);
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
  if ((local_38 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 146ad2066 FUN_146ad2066 body=111 status=ok
// SIG undefined FUN_146ad2066(void)

undefined8 * FUN_146ad2066(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_LAB_149f1b1c0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_14009d848(param_1 + 1,param_2 + 8);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  *param_1 = &PTR_FUN_149f1b150;
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  lVar1 = *(longlong *)(param_2 + 0x28);
  param_1[5] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  param_1[6] = *(undefined8 *)(param_2 + 0x30);
  param_1[7] = uVar2;
  return param_1;
}



// FUNCTION 146ad20d6 FUN_146ad20d6 body=411 status=ok
// SIG undefined FUN_146ad20d6(void)

undefined8 *
FUN_146ad20d6(undefined8 *param_1,longlong param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar5 = *param_3;
  uVar4 = *(undefined4 *)(param_3 + 1);
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,5,0x10);
  *(undefined4 *)(param_1 + 1) = 5;
  uVar6 = *param_1;
  plStack_50 = *(longlong **)(param_2 + 0x10);
  if (plStack_50 == (longlong *)0x0) {
LAB_146ad2145:
    local_58 = 0;
    plStack_50 = (longlong *)0x0;
    bVar10 = true;
  }
  else {
    iVar9 = (int)plStack_50[1];
    do {
      if (iVar9 == 0) goto LAB_146ad2145;
      LOCK();
      iVar8 = (int)plStack_50[1];
      bVar10 = iVar9 == iVar8;
      if (bVar10) {
        *(int *)(plStack_50 + 1) = iVar9 + 1;
        iVar8 = iVar9;
      }
      iVar9 = iVar8;
      UNLOCK();
    } while (!bVar10);
    local_58 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
    UNLOCK();
    bVar10 = false;
  }
  plVar7 = plStack_50;
  local_70 = param_8;
  local_78 = param_7;
  local_80 = param_6;
  local_88 = param_5;
  local_68 = uVar5;
  local_60 = uVar4;
  FUN_146ad2278(uVar6,&local_58,&local_68,param_4);
  plVar3 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (!bVar10) {
    LOCK();
    plVar3 = plVar7 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
    LOCK();
    plVar3 = plVar7 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_a8);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146ad2278 FUN_146ad2278 body=194 status=ok
// SIG undefined FUN_146ad2278(void)

undefined8 *
FUN_146ad2278(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined1 *param_5,undefined1 *param_6,undefined1 *param_7,undefined1 *param_8)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  *param_1 = &PTR_LAB_149f1b2a0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_146a48fa6(param_1 + 1,param_4);
  *(undefined1 *)(param_1 + 3) = *param_5;
  *(undefined1 *)((longlong)param_1 + 0x19) = *param_6;
  *(undefined1 *)((longlong)param_1 + 0x1a) = *param_7;
  *(undefined1 *)((longlong)param_1 + 0x1b) = *param_8;
  uVar4 = FUN_144a3f946();
  param_1[4] = uVar4;
  *param_1 = &PTR_FUN_149f1b230;
  param_1[5] = *param_2;
  lVar3 = param_2[1];
  param_1[6] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  param_1[7] = uVar2;
  *(undefined4 *)(param_1 + 8) = uVar1;
  return param_1;
}



// FUNCTION 146ad233a FUN_146ad233a body=83 status=ok
// SIG undefined FUN_146ad233a(void)

undefined8 * FUN_146ad233a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f1b230;
  plVar2 = (longlong *)param_1[6];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  *param_1 = &PTR_LAB_149f1b2a0;
  FUN_1449db362(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ad2392 FUN_146ad2392 body=81 status=ok
// SIG undefined FUN_146ad2392(void)

undefined8 FUN_146ad2392(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x30);
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
    uVar6 = *(undefined8 *)(param_1 + 0x28);
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



// FUNCTION 146ad23ea FUN_146ad23ea body=89 status=ok
// SIG undefined FUN_146ad23ea(void)

bool FUN_146ad23ea(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x30);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_146ad2435;
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
    lVar6 = *(longlong *)(param_1 + 0x28);
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
LAB_146ad2435:
  return lVar6 == param_2;
}



// FUNCTION 146ad246c FUN_146ad246c body=64 status=ok
// SIG undefined FUN_146ad246c(void)

void FUN_146ad246c(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  FUN_146ad2766(*param_2,param_1);
  return;
}



// FUNCTION 146ad24ac FUN_146ad24ac body=64 status=ok
// SIG undefined FUN_146ad24ac(void)

void FUN_146ad24ac(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  FUN_146ad2766(*param_2,param_1);
  return;
}



// FUNCTION 146ad24ec FUN_146ad24ec body=98 status=ok
// SIG undefined FUN_146ad24ec(void)

void FUN_146ad24ec(undefined8 param_1,LPCRITICAL_SECTION param_2)

{
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 5) {
    FUN_1446efa72(param_2 + 1,0,5,0x10);
    param_2[1].LockCount = 5;
  }
  FUN_146ad2766(param_2[1].DebugInfo,param_1);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146ad253f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146ad254e FUN_146ad254e body=284 status=ok
// SIG undefined FUN_146ad254e(void)

undefined8 FUN_146ad254e(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  int iVar8;
  code *pcVar9;
  undefined8 uVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined8 unaff_RBP;
  longlong *plVar13;
  longlong lVar14;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined1 local_80;
  undefined1 local_78;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar13 = *(longlong **)(param_1 + 0x30);
  if (plVar13 == (longlong *)0x0) {
    local_64 = (undefined4)CONCAT71((int7)(local_48 >> 8),1);
    plVar13 = (longlong *)0x0;
    lVar14 = 0;
  }
  else {
    uVar12 = (ulonglong)*(uint *)(plVar13 + 1);
    lVar14 = 0;
    do {
      uVar11 = (uint)uVar12;
      if (uVar11 == 0) {
        local_64 = (undefined4)CONCAT71((int7)(uVar12 >> 8),1);
        plVar13 = (longlong *)0x0;
        goto LAB_146ad258a;
      }
      LOCK();
      uVar3 = *(uint *)(plVar13 + 1);
      if (uVar11 == uVar3) {
        *(uint *)(plVar13 + 1) = uVar11 + 1;
      }
      else {
        uVar12 = (ulonglong)uVar3;
      }
      UNLOCK();
    } while (uVar11 != uVar3);
    lVar14 = *(longlong *)(param_1 + 0x28);
    local_64 = 0;
  }
LAB_146ad258a:
  pcVar9 = *(code **)(param_1 + 0x38);
  iVar8 = *(int *)(param_1 + 0x40);
  uVar4 = *(undefined1 *)(param_1 + 0x1b);
  uVar5 = *(undefined1 *)(param_1 + 0x1a);
  uVar6 = *(undefined1 *)(param_1 + 0x18);
  uVar7 = *(undefined1 *)(param_1 + 0x19);
  local_58 = 0;
  local_50 = 0;
  local_60 = param_2;
  FUN_146a48fa6(&local_58,param_1 + 8);
  uVar10 = local_60;
  local_88 = uVar7;
  local_80 = uVar5;
  local_78 = uVar4;
  (*pcVar9)(iVar8 + lVar14,local_60,&local_58,
            CONCAT71((int7)((ulonglong)unaff_RBP >> 8),uVar6) & 0xffffffff);
  if ((char)local_64 == '\0') {
    LOCK();
    plVar1 = plVar13 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar2 = (int *)((longlong)plVar13 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ad266c FUN_146ad266c body=246 status=ok
// SIG undefined FUN_146ad266c(void)

ulonglong FUN_146ad266c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  ulonglong uVar11;
  bool bVar12;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined1 local_80;
  undefined1 local_78;
  code *local_68;
  undefined1 local_59;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar7 = *(longlong **)(param_1 + 0x30);
  if (plVar7 == (longlong *)0x0) {
LAB_146ad26d1:
    uVar11 = 0;
  }
  else {
    iVar10 = (int)plVar7[1];
    do {
      if (iVar10 == 0) goto LAB_146ad26d1;
      LOCK();
      iVar9 = (int)plVar7[1];
      bVar12 = iVar10 == iVar9;
      if (bVar12) {
        *(int *)(plVar7 + 1) = iVar10 + 1;
        iVar9 = iVar10;
      }
      iVar10 = iVar9;
      UNLOCK();
    } while (!bVar12);
    lVar8 = *(longlong *)(param_1 + 0x28);
    uVar11 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar8 != 0);
    if (lVar8 != 0) {
      local_68 = *(code **)(param_1 + 0x38);
      iVar10 = *(int *)(param_1 + 0x40);
      uVar3 = *(undefined1 *)(param_1 + 0x1b);
      uVar4 = *(undefined1 *)(param_1 + 0x1a);
      uVar5 = *(undefined1 *)(param_1 + 0x18);
      uVar6 = *(undefined1 *)(param_1 + 0x19);
      local_58 = 0;
      local_50 = 0;
      FUN_146a48fa6(&local_58,param_1 + 8);
      local_88 = uVar6;
      local_80 = uVar4;
      local_78 = uVar3;
      (*local_68)(lVar8 + iVar10,&local_59,&local_58,
                  CONCAT71((int7)((ulonglong)unaff_RBP >> 8),uVar5) & 0xffffffff);
    }
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
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11 & 0xffffffff;
}



// FUNCTION 146ad2766 FUN_146ad2766 body=135 status=ok
// SIG undefined FUN_146ad2766(void)

undefined8 * FUN_146ad2766(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_LAB_149f1b2a0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_146a48fa6(param_1 + 1,param_2 + 8);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 0x18);
  *(undefined1 *)((longlong)param_1 + 0x19) = *(undefined1 *)(param_2 + 0x19);
  *(undefined1 *)((longlong)param_1 + 0x1a) = *(undefined1 *)(param_2 + 0x1a);
  *(undefined1 *)((longlong)param_1 + 0x1b) = *(undefined1 *)(param_2 + 0x1b);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  *param_1 = &PTR_FUN_149f1b230;
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  lVar1 = *(longlong *)(param_2 + 0x30);
  param_1[6] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  param_1[7] = *(undefined8 *)(param_2 + 0x38);
  param_1[8] = uVar2;
  return param_1;
}



// FUNCTION 146ad27ee FUN_146ad27ee body=351 status=ok
// SIG undefined FUN_146ad27ee(void)

undefined8 *
FUN_146ad27ee(undefined8 *param_1,longlong param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar5 = *param_3;
  uVar4 = *(undefined4 *)(param_3 + 1);
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  uVar6 = *param_1;
  plStack_50 = *(longlong **)(param_2 + 0x10);
  if (plStack_50 == (longlong *)0x0) {
LAB_146ad284f:
    local_58 = 0;
    plStack_50 = (longlong *)0x0;
    bVar10 = true;
  }
  else {
    iVar9 = (int)plStack_50[1];
    do {
      if (iVar9 == 0) goto LAB_146ad284f;
      LOCK();
      iVar8 = (int)plStack_50[1];
      bVar10 = iVar9 == iVar8;
      if (bVar10) {
        *(int *)(plStack_50 + 1) = iVar9 + 1;
        iVar8 = iVar9;
      }
      iVar9 = iVar8;
      UNLOCK();
    } while (!bVar10);
    local_58 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
    UNLOCK();
    bVar10 = false;
  }
  plVar7 = plStack_50;
  local_68 = uVar5;
  local_60 = uVar4;
  FUN_146ad2954(uVar6,&local_58,&local_68,param_4);
  plVar3 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (!bVar10) {
    LOCK();
    plVar3 = plVar7 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
    LOCK();
    plVar3 = plVar7 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_88);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}


