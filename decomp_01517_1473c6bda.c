// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1473c6bda FUN_1473c6bda body=27 status=ok
// SIG undefined FUN_1473c6bda(void)

undefined8 FUN_1473c6bda(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x28) + 8))();
  return param_2;
}



// FUNCTION 1473c6bf6 FUN_1473c6bf6 body=99 status=ok
// SIG undefined FUN_1473c6bf6(void)

void FUN_1473c6bf6(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a369490;
  if (param_1[5] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[5] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[4] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[4] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_14737f56a(param_1);
  return;
}



// FUNCTION 1473c6c5a FUN_1473c6c5a body=31 status=ok
// SIG undefined FUN_1473c6c5a(void)

void FUN_1473c6c5a(longlong param_1,int param_2)

{
  if (param_2 <= *(int *)(param_1 + 0x58)) {
    *(undefined4 *)(param_1 + 0x5c) = 0xb;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1473c6c7a FUN_1473c6c7a body=302 status=ok
// SIG undefined FUN_1473c6c7a(void)

undefined4 * FUN_1473c6c7a(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1473a06e8(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar4 = *(uint *)*param_3;
  *local_40 = uVar4;
  *(undefined8 *)(local_40 + 2) = *puVar1;
  local_40[4] = 0xffffffff;
  local_4c = local_48[0];
  local_58 = 0;
  cVar2 = FUN_1473a07ce(param_1,uVar4,local_40);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar3 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_40[5] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_40[4] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1473a08ec(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473c6daa FUN_1473c6daa body=48 status=ok
// SIG undefined FUN_1473c6daa(void)

void FUN_1473c6daa(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1473c6dda FUN_1473c6dda body=132 status=ok
// SIG undefined FUN_1473c6dda(void)

void FUN_1473c6dda(longlong param_1,int param_2)

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



// FUNCTION 1473c6e60 FUN_1473c6e60 body=62 status=ok
// SIG undefined FUN_1473c6e60(void)

void FUN_1473c6e60(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1473c6e9e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1473c6e9e FUN_1473c6e9e body=93 status=ok
// SIG undefined FUN_1473c6e9e(void)

ulonglong FUN_1473c6e9e(uint param_1,uint param_2)

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



// FUNCTION 1473c6efc FUN_1473c6efc body=38 status=ok
// SIG undefined FUN_1473c6efc(void)

undefined8 FUN_1473c6efc(undefined8 param_1,int param_2)

{
  FUN_140187f4a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473c6f22 FUN_1473c6f22 body=51 status=ok
// SIG undefined FUN_1473c6f22(void)

void FUN_1473c6f22(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 != 0) {
    FUN_1473af60e(lVar1);
    FUN_1400020a8(lVar1);
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  return;
}



// FUNCTION 1473c6f5a FUN_1473c6f5a body=118 status=ok
// SIG undefined FUN_1473c6f5a(void)

void FUN_1473c6f5a(longlong param_1,uint param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 2;
    if (2 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 * 0x18,0);
      iVar2 = (int)(uVar1 / 0x18);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar2) {
        iVar3 = iVar2;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_1473a02b6(param_1,0,iVar3,0x18);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x3c) = param_3;
  return;
}



// FUNCTION 1473c6fd0 FUN_1473c6fd0 body=101 status=ok
// SIG undefined FUN_1473c6fd0(void)

void FUN_1473c6fd0(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 2;
    if (2 < param_2) {
      uVar2 = FUN_144a3809e((longlong)(int)param_2 << 4,0);
      iVar1 = (int)(uVar2 >> 4);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_1473a0390(param_1,0,iVar3,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x2c) = param_3;
  return;
}



// FUNCTION 1473c7035 FUN_1473c7035 body=64 status=ok
// SIG undefined FUN_1473c7035(void)

void FUN_1473c7035(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + lVar2 * 8);
      if (lVar1 != 0) {
        FUN_1431b1aa6(lVar1);
        FUN_1400020a8(lVar1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 1473c7076 FUN_1473c7076 body=52 status=ok
// SIG undefined FUN_1473c7076(void)

void FUN_1473c7076(longlong *param_1)

{
  FUN_1473c70aa();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1473c70aa FUN_1473c70aa body=333 status=ok
// SIG undefined FUN_1473c70aa(void)

void FUN_1473c70aa(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
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
      plVar2 = *(longlong **)(*local_70 + 0x10 + (longlong)iStack_54 * 0x28);
      if (plVar2 != (longlong *)0x0) {
        if (*plVar2 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(plVar2);
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



// FUNCTION 1473c71f8 FUN_1473c71f8 body=52 status=ok
// SIG undefined FUN_1473c71f8(void)

void FUN_1473c71f8(longlong *param_1)

{
  FUN_1473c722c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1473c722c FUN_1473c722c body=333 status=ok
// SIG undefined FUN_1473c722c(void)

void FUN_1473c722c(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
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
      plVar2 = *(longlong **)(*local_70 + 0x10 + (longlong)iStack_54 * 0x58);
      if (plVar2 != (longlong *)0x0) {
        if (*plVar2 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(plVar2);
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140e91948(param_1,0);
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



// FUNCTION 1473c737a FUN_1473c737a body=132 status=ok
// SIG undefined FUN_1473c737a(void)

void FUN_1473c737a(longlong param_1,int param_2)

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



// FUNCTION 1473c7400 FUN_1473c7400 body=96 status=ok
// SIG undefined FUN_1473c7400(void)

void FUN_1473c7400(longlong *param_1,uint param_2)

{
  void *_Dst;
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  lVar1 = *param_1;
  lVar2 = *(longlong *)(lVar1 + (longlong)(int)param_2 * 8);
  if (lVar2 != 0) {
    FUN_1431b1aa6(lVar2);
    FUN_1400020a8(lVar2);
  }
  iVar3 = (int)param_1[1];
  if (~param_2 + iVar3 != 0) {
    _Dst = (void *)(lVar1 + (longlong)(int)param_2 * 8);
    memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)(int)(~param_2 + iVar3) << 3);
    iVar3 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar3 + -1;
  return;
}



// FUNCTION 1473c7460 FUN_1473c7460 body=138 status=ok
// SIG undefined FUN_1473c7460(void)

int FUN_1473c7460(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      lVar2 = *param_1;
      iVar1 = *param_3;
      puVar3 = *(undefined8 **)(param_3 + 2);
      do {
        lVar8 = (longlong)iVar7 * 0x58;
        if (*(int *)(lVar2 + lVar8) == iVar1) {
          puVar4 = *(undefined8 **)(lVar2 + lVar8 + 8);
          iVar5 = *(int *)(puVar4 + 1);
          if ((iVar5 == *(int *)(puVar3 + 1)) &&
             (iVar5 = memcmp((void *)*puVar4,(void *)*puVar3,(longlong)iVar5), iVar5 == 0)) {
            return iVar7;
          }
        }
        iVar7 = *(int *)(lVar2 + 0x50 + lVar8);
      } while (iVar7 != -1);
    }
  }
  return -1;
}



// FUNCTION 1473c74ea FUN_1473c74ea body=138 status=ok
// SIG undefined FUN_1473c74ea(void)

int FUN_1473c74ea(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      lVar2 = *param_1;
      iVar1 = *param_3;
      puVar3 = *(undefined8 **)(param_3 + 2);
      do {
        lVar7 = (longlong)iVar8;
        if (*(int *)(lVar2 + lVar7 * 0x28) == iVar1) {
          puVar4 = *(undefined8 **)(lVar2 + lVar7 * 0x28 + 8);
          iVar5 = *(int *)(puVar4 + 1);
          if ((iVar5 == *(int *)(puVar3 + 1)) &&
             (iVar5 = memcmp((void *)*puVar4,(void *)*puVar3,(longlong)iVar5), iVar5 == 0)) {
            return iVar8;
          }
        }
        iVar8 = *(int *)(lVar2 + 0x20 + lVar7 * 0x28);
      } while (iVar8 != -1);
    }
  }
  return -1;
}



// FUNCTION 1473c7574 FUN_1473c7574 body=144 status=ok
// SIG undefined FUN_1473c7574(void)

void FUN_1473c7574(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  longlong *plVar3;
  undefined8 *puVar4;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  puVar4 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar4 = 0;
  iVar1 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
  *(int *)(puVar4 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  }
  else {
    FUN_1447a127e(puVar4,iVar1,0);
    memcpy((void *)*puVar4,_Src,(longlong)iVar1);
  }
  plVar3 = *(longlong **)(param_2 + 0x10);
  *(undefined8 **)(param_2 + 0x10) = puVar4;
  if (plVar3 != (longlong *)0x0) {
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar3);
    puVar4 = *(undefined8 **)(param_2 + 0x10);
  }
  *(undefined8 **)(param_2 + 8) = puVar4;
  return;
}



// FUNCTION 1473c7604 FUN_1473c7604 body=307 status=ok
// SIG undefined FUN_1473c7604(void)

undefined4 * FUN_1473c7604(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_1473c7738(param_1,local_48);
  puVar1 = (uint *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  uVar7 = puVar1[1];
  uVar6 = puVar1[2];
  uVar3 = puVar1[3];
  *local_40 = *puVar1;
  local_40[1] = uVar7;
  local_40[2] = uVar6;
  local_40[3] = uVar3;
  *(undefined8 *)(local_40 + 4) = *(undefined8 *)(puVar1 + 4);
  puVar1[4] = 0;
  puVar1[5] = 0;
  *(undefined8 *)(local_40 + 6) = *puVar2;
  local_40[8] = 0xffffffff;
  local_4c = local_48[0];
  uVar7 = *local_40;
  cVar5 = FUN_1473c781e(param_1,uVar7,local_40,&local_4c);
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
      FUN_1473c7918(param_1);
    }
  }
  *param_2 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473c7738 FUN_1473c7738 body=230 status=ok
// SIG undefined FUN_1473c7738(void)

int * FUN_1473c7738(longlong *param_1,int *param_2)

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



// FUNCTION 1473c781e FUN_1473c781e body=135 status=ok
// SIG undefined FUN_1473c781e(void)

undefined8 FUN_1473c781e(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar10 = FUN_1473c74ea(), iVar10 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar10 * 0x28);
    plVar2 = *(longlong **)(puVar1 + 4);
    if (plVar2 != (longlong *)0x0) {
      if (*plVar2 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(plVar2);
    }
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    uVar7 = param_3[5];
    uVar8 = param_3[6];
    uVar9 = param_3[7];
    puVar1[4] = param_3[4];
    puVar1[5] = uVar7;
    puVar1[6] = uVar8;
    puVar1[7] = uVar9;
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_1473c78a6(param_1,*param_4);
    *param_4 = iVar10;
    return 1;
  }
  return 0;
}



// FUNCTION 1473c78a6 FUN_1473c78a6 body=114 status=ok
// SIG undefined FUN_1473c78a6(void)

void FUN_1473c78a6(longlong *param_1,int param_2)

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



// FUNCTION 1473c7918 FUN_1473c7918 body=419 status=ok
// SIG undefined FUN_1473c7918(void)

void FUN_1473c7918(longlong *param_1)

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



// FUNCTION 1473c7abc FUN_1473c7abc body=331 status=ok
// SIG undefined FUN_1473c7abc(void)

undefined4 * FUN_1473c7abc(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  char cVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  int iVar18;
  longlong lVar19;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1473c7c08(param_1,local_48);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (uint *)param_3[1];
  uVar12 = puVar1[1];
  *(undefined8 *)local_40 = *puVar1;
  *(undefined8 *)(local_40 + 2) = uVar12;
  *(undefined8 *)(local_40 + 4) = puVar1[2];
  puVar1[2] = 0;
  *(undefined8 *)(local_40 + 0x12) = *(undefined8 *)(puVar2 + 0xc);
  uVar16 = *puVar2;
  uVar15 = puVar2[1];
  uVar3 = puVar2[2];
  uVar4 = puVar2[3];
  uVar5 = puVar2[4];
  uVar6 = puVar2[5];
  uVar7 = puVar2[6];
  uVar8 = puVar2[7];
  uVar9 = puVar2[9];
  uVar10 = puVar2[10];
  uVar11 = puVar2[0xb];
  local_40[0xe] = puVar2[8];
  local_40[0xf] = uVar9;
  local_40[0x10] = uVar10;
  local_40[0x11] = uVar11;
  local_40[10] = uVar5;
  local_40[0xb] = uVar6;
  local_40[0xc] = uVar7;
  local_40[0xd] = uVar8;
  local_40[6] = uVar16;
  local_40[7] = uVar15;
  local_40[8] = uVar3;
  local_40[9] = uVar4;
  local_40[0x14] = 0xffffffff;
  local_4c = local_48[0];
  uVar16 = *local_40;
  cVar14 = FUN_1473c7cea(param_1,uVar16,local_40,&local_4c);
  uVar13 = local_4c;
  if (cVar14 == '\0') {
    uVar15 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar18 = 1;
    if (3 < uVar15) {
      uVar17 = (ulonglong)(uVar15 & 0xfffffffe) + 0xf;
      lVar19 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      iVar18 = 1 << ((byte)lVar19 & 0x1f);
    }
    if (((int)uVar15 < 1) || (iVar18 <= *(int *)(param_1 + 0x48))) {
      uVar16 = *(int *)(param_1 + 0x48) - 1U & uVar16;
      local_40[0x15] = uVar16;
      lVar19 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar19 = param_1 + 0x38;
      }
      local_40[0x14] =
           *(uint *)(lVar19 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar16) * 4)
      ;
      lVar19 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar19 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar19 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar16) * 4) = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar18;
      FUN_1473c7de8(param_1);
    }
  }
  *param_2 = uVar13;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473c7c08 FUN_1473c7c08 body=226 status=ok
// SIG undefined FUN_1473c7c08(void)

int * FUN_1473c7c08(longlong *param_1,int *param_2)

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
      FUN_1403e7a24(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x58);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x58) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x58 + *param_1;
  return param_2;
}



// FUNCTION 1473c7cea FUN_1473c7cea body=137 status=ok
// SIG undefined FUN_1473c7cea(void)

undefined8 FUN_1473c7cea(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar3 = FUN_1473c7460(), iVar3 != -1)) {
    lVar1 = *param_1;
    plVar2 = *(longlong **)(lVar1 + 0x10 + (longlong)iVar3 * 0x58);
    if (plVar2 != (longlong *)0x0) {
      if (*plVar2 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(plVar2);
    }
    memmove((void *)(lVar1 + (longlong)iVar3 * 0x58),param_3,0x50);
    FUN_1473c7d74(param_1,*param_4);
    *param_4 = iVar3;
    return 1;
  }
  return 0;
}



// FUNCTION 1473c7d74 FUN_1473c7d74 body=116 status=ok
// SIG undefined FUN_1473c7d74(void)

void FUN_1473c7d74(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x58) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x58) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x58 + 4) = uVar5;
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



// FUNCTION 1473c7de8 FUN_1473c7de8 body=419 status=ok
// SIG undefined FUN_1473c7de8(void)

void FUN_1473c7de8(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x58;
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



// FUNCTION 1473c7f8c FUN_1473c7f8c body=322 status=ok
// SIG undefined FUN_1473c7f8c(void)

void FUN_1473c7f8c(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x54 + (longlong)iVar4 * 0x58) * 4) =
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



// FUNCTION 1473c80d0 FUN_1473c80d0 body=303 status=ok
// SIG undefined FUN_1473c80d0(void)

void FUN_1473c80d0(longlong *param_1)

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
  local_38 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
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
      plVar1 = *(longlong **)(*local_68 + 0x10 + (longlong)iStack_4c * 0x58);
      if (plVar1 != (longlong *)0x0) {
        if (*plVar1 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(plVar1);
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_140e91948(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473c8200 FUN_1473c8200 body=322 status=ok
// SIG undefined FUN_1473c8200(void)

void FUN_1473c8200(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x24 + (longlong)iVar4 * 0x28) * 4) =
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



// FUNCTION 1473c8344 FUN_1473c8344 body=303 status=ok
// SIG undefined FUN_1473c8344(void)

void FUN_1473c8344(longlong *param_1)

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
  local_38 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
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
      plVar1 = *(longlong **)(*local_68 + 0x10 + (longlong)iStack_4c * 0x28);
      if (plVar1 != (longlong *)0x0) {
        if (*plVar1 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(plVar1);
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473c8474 FUN_1473c8474 body=326 status=ok
// SIG undefined FUN_1473c8474(void)

undefined4 * FUN_1473c8474(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_1473c85bc(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_1473c86a2(param_1,uVar4,local_40,&local_4c);
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
      FUN_1473c8728(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473c85bc FUN_1473c85bc body=230 status=ok
// SIG undefined FUN_1473c85bc(void)

int * FUN_1473c85bc(longlong *param_1,int *param_2)

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



// FUNCTION 1473c86a2 FUN_1473c86a2 body=134 status=ok
// SIG undefined FUN_1473c86a2(void)

undefined8 FUN_1473c86a2(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_1473a978c((int)lVar3,*param_4,1);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 1473c8728 FUN_1473c8728 body=474 status=ok
// SIG undefined FUN_1473c8728(void)

void FUN_1473c8728(longlong *param_1)

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



// FUNCTION 1473c8904 FUN_1473c8904 body=99 status=ok
// SIG undefined FUN_1473c8904(void)

undefined8 * FUN_1473c8904(undefined8 *param_1,int param_2)

{
  undefined **ppuVar1;
  longlong lVar2;
  
  ppuVar1 = &PTR_FUN_14a3694e0;
  *param_1 = &PTR_FUN_14a3694e0;
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    do {
      lVar2 = *(longlong *)(lVar2 + 8);
      FUN_1400020a8();
      param_1[1] = lVar2;
    } while (lVar2 != 0);
    ppuVar1 = (undefined **)*param_1;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  (*(code *)ppuVar1[1])(param_1,0);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473c8968 FUN_1473c8968 body=4 status=ok
// SIG undefined FUN_1473c8968(void)

void FUN_1473c8968(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}



// FUNCTION 1473c896c FUN_1473c896c body=306 status=ok
// SIG undefined FUN_1473c896c(void)

undefined4 * FUN_1473c896c(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1473c8aa0(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = uVar3;
  *(undefined4 *)(local_40 + 2) = uVar4;
  *(undefined4 *)((longlong)local_40 + 0x14) = uVar5;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar11 = (int)((ulonglong)uVar2 >> 0x20) * 0x17 + (int)uVar2;
  cVar6 = FUN_1473c8b86(param_1,uVar11,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar6 == '\0') {
    uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar7) {
      uVar8 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar11 = *(int *)(param_1 + 0x48) - 1U & uVar11;
      *(uint *)((longlong)local_40 + 0x1c) = uVar11;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar11) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar11) * 4) = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_1473c8c82(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473c8aa0 FUN_1473c8aa0 body=229 status=ok
// SIG undefined FUN_1473c8aa0(void)

int * FUN_1473c8aa0(longlong *param_1,int *param_2)

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



// FUNCTION 1473c8b86 FUN_1473c8b86 body=137 status=ok
// SIG undefined FUN_1473c8b86(void)

undefined8 FUN_1473c8b86(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_1473c8c10((int)lVar4,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 1473c8c10 FUN_1473c8c10 body=114 status=ok
// SIG undefined FUN_1473c8c10(void)

void FUN_1473c8c10(longlong *param_1,int param_2)

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



// FUNCTION 1473c8c82 FUN_1473c8c82 body=450 status=ok
// SIG undefined FUN_1473c8c82(void)

void FUN_1473c8c82(longlong *param_1)

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



// FUNCTION 1473c8e46 FUN_1473c8e46 body=230 status=ok
// SIG undefined FUN_1473c8e46(void)

undefined8 * FUN_1473c8e46(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined7 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  uVar5 = (undefined7)((ulonglong)param_2 >> 8);
  if ((longlong *)*param_3 != (longlong *)0x0 && (int)param_3[1] != 0) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,CONCAT71(uVar5,1));
      plVar2 = (longlong *)*param_3;
      if (plVar2 == (longlong *)0x0 || (int)param_3[1] == 0) {
        local_30 = 0;
      }
      else {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
      }
      *param_2 = local_30;
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



// FUNCTION 1473c8f2e FUN_1473c8f2e body=29 status=ok
// SIG undefined FUN_1473c8f2e(void)

undefined8 FUN_1473c8f2e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473c8f74 FUN_1473c8f74 body=93 status=ok
// SIG undefined FUN_1473c8f74(void)

void FUN_1473c8f74(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a369560;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a3694f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1473c8fd2 FUN_1473c8fd2 body=93 status=ok
// SIG undefined FUN_1473c8fd2(void)

void FUN_1473c8fd2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a369560;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a3694f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1473c9030 FUN_1473c9030 body=126 status=ok
// SIG undefined FUN_1473c9030(void)

void FUN_1473c9030(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a369560;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a3694f0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001473c909f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1473c90bc FUN_1473c90bc body=31 status=ok
// SIG undefined FUN_1473c90bc(void)

undefined8 FUN_1473c90bc(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1473c90de FUN_1473c90de body=230 status=ok
// SIG undefined FUN_1473c90de(void)

undefined8 * FUN_1473c90de(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined7 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  uVar5 = (undefined7)((ulonglong)param_2 >> 8);
  if ((longlong *)*param_3 != (longlong *)0x0 && (int)param_3[1] != 0) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,CONCAT71(uVar5,1));
      plVar2 = (longlong *)*param_3;
      if (plVar2 == (longlong *)0x0 || (int)param_3[1] == 0) {
        local_30 = 0;
      }
      else {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
      }
      *param_2 = local_30;
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



// FUNCTION 1473c91c6 FUN_1473c91c6 body=29 status=ok
// SIG undefined FUN_1473c91c6(void)

undefined8 FUN_1473c91c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473c920c FUN_1473c920c body=93 status=ok
// SIG undefined FUN_1473c920c(void)

void FUN_1473c920c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a369640;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a3695d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1473c926a FUN_1473c926a body=93 status=ok
// SIG undefined FUN_1473c926a(void)

void FUN_1473c926a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a369640;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a3695d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1473c92c8 FUN_1473c92c8 body=126 status=ok
// SIG undefined FUN_1473c92c8(void)

void FUN_1473c92c8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a369640;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a3695d0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001473c9337. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1473c9354 FUN_1473c9354 body=21 status=ok
// SIG undefined FUN_1473c9354(void)

undefined8 FUN_1473c9354(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1473c936c FUN_1473c936c body=95 status=ok
// SIG undefined FUN_1473c936c(void)

void FUN_1473c936c(longlong param_1,uint param_2)

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



// FUNCTION 1473c93cc FUN_1473c93cc body=132 status=ok
// SIG undefined FUN_1473c93cc(void)

void FUN_1473c93cc(longlong param_1,int param_2)

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



// FUNCTION 1473c9452 FUN_1473c9452 body=132 status=ok
// SIG undefined FUN_1473c9452(void)

void FUN_1473c9452(longlong param_1,int param_2)

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



// FUNCTION 1473c94d8 FUN_1473c94d8 body=369 status=ok
// SIG undefined FUN_1473c94d8(void)

longlong * FUN_1473c94d8(longlong *param_1,longlong *param_2)

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
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
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
      FUN_1473c964a(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x100000 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_1473b34a4(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x10;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_2c) ||
       (FUN_1473c964a(param_2), 0 < (int)local_2c)) {
      iVar4 = 0;
      do {
        uVar3 = FUN_1473c19ee(param_2);
        FUN_1473b34a4(param_1,uVar3);
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



// FUNCTION 1473c964a FUN_1473c964a body=95 status=ok
// SIG undefined FUN_1473c964a(void)

void FUN_1473c964a(longlong param_1,uint param_2)

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



// FUNCTION 1473c96aa FUN_1473c96aa body=369 status=ok
// SIG undefined FUN_1473c96aa(void)

longlong * FUN_1473c96aa(longlong *param_1,longlong *param_2)

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
            (param_1,(longlong)(int)param_2[1] << 5,(longlong)*(int *)((longlong)param_2 + 0xc) << 5
            );
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
      FUN_1473c9852(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x80000 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_1473b35a2(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x20;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_2c) ||
       (FUN_1473c9852(param_2), 0 < (int)local_2c)) {
      iVar4 = 0;
      do {
        uVar3 = FUN_1473c981c(param_2);
        FUN_1473b35a2(param_1,uVar3);
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



// FUNCTION 1473c981c FUN_1473c981c body=53 status=ok
// SIG undefined FUN_1473c981c(void)

longlong FUN_1473c981c(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1473c9452(param_1,iVar1);
  }
  return (longlong)iVar1 * 0x20 + *param_1;
}



// FUNCTION 1473c9852 FUN_1473c9852 body=95 status=ok
// SIG undefined FUN_1473c9852(void)

void FUN_1473c9852(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 5,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,8);
  }
  return;
}



// FUNCTION 1473c98b2 FUN_1473c98b2 body=399 status=ok
// SIG undefined FUN_1473c98b2(void)

longlong * FUN_1473c98b2(longlong *param_1,longlong *param_2)

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
      FUN_1473c9a42(param_2,0);
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
      FUN_1473b290f(param_1,*param_2 + lVar4);
      lVar6 = lVar6 + 1;
      lVar4 = lVar4 + 8;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_34) ||
       (FUN_1473c9a42(param_2), 0 < (int)local_34)) {
      iVar5 = 0;
      do {
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_1473c9aa2(param_2,iVar2);
        }
        FUN_1473b290f(param_1,(longlong)iVar2 * 8 + *param_2);
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



// FUNCTION 1473c9a42 FUN_1473c9a42 body=95 status=ok
// SIG undefined FUN_1473c9a42(void)

void FUN_1473c9a42(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,1);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,1);
  }
  return;
}



// FUNCTION 1473c9aa2 FUN_1473c9aa2 body=132 status=ok
// SIG undefined FUN_1473c9aa2(void)

void FUN_1473c9aa2(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,1);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1473c9b28 FUN_1473c9b28 body=414 status=ok
// SIG undefined FUN_1473c9b28(void)

longlong * FUN_1473c9b28(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ulonglong *puVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_68 [36];
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
  local_44 = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_44 = *(uint *)(param_2 + 1);
  }
  puVar4 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_44,4);
    }
    else {
      FUN_14572512c(param_1,&local_44);
    }
  }
  else {
    local_44 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar1;
  }
  if (local_44 == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_1473c141b(*param_2,(int)param_2[1]);
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_1473c9d02(param_2,0);
      }
    }
  }
  else if ((((int)local_44 < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x100000 < local_44 && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_44;
    lVar5 = 0;
    lVar7 = 0;
    do {
      FUN_1473c9d62(param_1,*param_2 + lVar5);
      lVar7 = lVar7 + 1;
      lVar5 = lVar5 + 0x10;
    } while (lVar7 < (int)param_2[1]);
  }
  else {
    FUN_1473c9cc8(param_2);
    if (0 < (int)local_44) {
      iVar6 = 0;
      do {
        iVar3 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
          FUN_1473c9f52(param_2,iVar3);
        }
        lVar5 = *param_2;
        puVar2 = (undefined8 *)(lVar5 + (longlong)iVar3 * 0x10);
        *puVar2 = 0;
        puVar2[1] = 0;
        FUN_1473c9d62(param_1,lVar5 + (longlong)iVar3 * 0x10);
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



// FUNCTION 1473c9cc8 FUN_1473c9cc8 body=57 status=ok
// SIG undefined FUN_1473c9cc8(void)

void FUN_1473c9cc8(undefined8 *param_1,int param_2)

{
  FUN_1473c141b(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_1473c9d02(param_1,param_2);
  return;
}



// FUNCTION 1473c9d02 FUN_1473c9d02 body=95 status=ok
// SIG undefined FUN_1473c9d02(void)

void FUN_1473c9d02(longlong param_1,uint param_2)

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



// FUNCTION 1473c9d62 FUN_1473c9d62 body=399 status=ok
// SIG undefined FUN_1473c9d62(void)

longlong * FUN_1473c9d62(longlong *param_1,longlong *param_2)

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
      FUN_1473c9ef2(param_2,0);
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
      FUN_1473b2b1d(param_1,*param_2 + lVar4);
      lVar6 = lVar6 + 1;
      lVar4 = lVar4 + 8;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_34) ||
       (FUN_1473c9ef2(param_2), 0 < (int)local_34)) {
      iVar5 = 0;
      do {
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_1473cb316(param_2,iVar2);
        }
        FUN_1473b2b1d(param_1,(longlong)iVar2 * 8 + *param_2);
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



// FUNCTION 1473c9ef2 FUN_1473c9ef2 body=95 status=ok
// SIG undefined FUN_1473c9ef2(void)

void FUN_1473c9ef2(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,4);
  }
  return;
}



// FUNCTION 1473c9f52 FUN_1473c9f52 body=132 status=ok
// SIG undefined FUN_1473c9f52(void)

void FUN_1473c9f52(longlong param_1,int param_2)

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



// FUNCTION 1473c9fd8 FUN_1473c9fd8 body=399 status=ok
// SIG undefined FUN_1473c9fd8(void)

longlong * FUN_1473c9fd8(longlong *param_1,longlong *param_2)

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
      FUN_1473ca168(param_2,0);
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
      FUN_1473b2bec(param_1,*param_2 + lVar4);
      lVar6 = lVar6 + 1;
      lVar4 = lVar4 + 8;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_34) ||
       (FUN_1473ca168(param_2), 0 < (int)local_34)) {
      iVar5 = 0;
      do {
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_1473ca1c8(param_2,iVar2);
        }
        FUN_1473b2bec(param_1,(longlong)iVar2 * 8 + *param_2);
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



// FUNCTION 1473ca168 FUN_1473ca168 body=95 status=ok
// SIG undefined FUN_1473ca168(void)

void FUN_1473ca168(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,4);
  }
  return;
}



// FUNCTION 1473ca1c8 FUN_1473ca1c8 body=132 status=ok
// SIG undefined FUN_1473ca1c8(void)

void FUN_1473ca1c8(longlong param_1,int param_2)

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



// FUNCTION 1473ca24e FUN_1473ca24e body=369 status=ok
// SIG undefined FUN_1473ca24e(void)

longlong * FUN_1473ca24e(longlong *param_1,longlong *param_2)

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
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
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
      FUN_1473ca3f6(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x100000 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_1473b2ce4(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x10;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_2c) ||
       (FUN_1473ca3f6(param_2), 0 < (int)local_2c)) {
      iVar4 = 0;
      do {
        uVar3 = FUN_1473ca3c0(param_2);
        FUN_1473b2ce4(param_1,uVar3);
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



// FUNCTION 1473ca3c0 FUN_1473ca3c0 body=53 status=ok
// SIG undefined FUN_1473ca3c0(void)

longlong FUN_1473ca3c0(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1473ca456(param_1,iVar1);
  }
  return (longlong)iVar1 * 0x10 + *param_1;
}



// FUNCTION 1473ca3f6 FUN_1473ca3f6 body=95 status=ok
// SIG undefined FUN_1473ca3f6(void)

void FUN_1473ca3f6(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,4);
  }
  return;
}



// FUNCTION 1473ca456 FUN_1473ca456 body=132 status=ok
// SIG undefined FUN_1473ca456(void)

void FUN_1473ca456(longlong param_1,int param_2)

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



// FUNCTION 1473ca4dc FUN_1473ca4dc body=128 status=ok
// SIG undefined FUN_1473ca4dc(void)

void FUN_1473ca4dc(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14ca784b0;
  if (DAT_14ca784e4 != 0) {
    *(int *)(DAT_14ca784b0 + (longlong)DAT_14ca784e0 * 0x10) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x10) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14ca784e4) {
    iVar4 = DAT_14ca784e0;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x10) = iVar4;
  DAT_14ca784e4 = DAT_14ca784e4 + 1;
  puVar3 = &DAT_14ca784c0;
  if (DAT_14ca784d0 != (undefined *)0x0) {
    puVar3 = DAT_14ca784d0;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14ca784e0 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 1473ca55c FUN_1473ca55c body=136 status=ok
// SIG undefined FUN_1473ca55c(void)

void FUN_1473ca55c(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x188);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x20;
    if (0x20 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (0x20 < *(uint *)(param_1 + 0x18c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0xc,0);
      iVar4 = (int)(uVar3 / 0xc);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x18c) = iVar5;
    FUN_1473ca5e6(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1473ca5e6 FUN_1473ca5e6 body=149 status=ok
// SIG undefined FUN_1473ca5e6(void)

void FUN_1473ca5e6(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x180);
  if ((uint)param_3 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0xc);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x180,0,param_3,0xc);
    memmove(*(void **)((longlong)param_1 + 0x180),param_1,(longlong)param_2 * 0xc);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x180,param_2,param_3,0xc);
  return;
}



// FUNCTION 1473ca67c FUN_1473ca67c body=119 status=ok
// SIG undefined FUN_1473ca67c(void)

void FUN_1473ca67c(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x208);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x20;
    if (0x20 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x20 < *(uint *)(param_1 + 0x20c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 4,0);
      iVar2 = (int)(uVar3 >> 4);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x20c) = iVar5;
    FUN_1473ca6f4(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1473ca6f4 FUN_1473ca6f4 body=141 status=ok
// SIG undefined FUN_1473ca6f4(void)

void FUN_1473ca6f4(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x200);
  if ((uint)param_3 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x200,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x200),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x200,param_2,param_3,0x10);
  return;
}



// FUNCTION 1473ca782 FUN_1473ca782 body=68 status=ok
// SIG undefined FUN_1473ca782(void)

void FUN_1473ca782(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_1473ca7c6();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_1446f4a44(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1473ca7c6 FUN_1473ca7c6 body=322 status=ok
// SIG undefined FUN_1473ca7c6(void)

void FUN_1473ca7c6(longlong *param_1)

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



// FUNCTION 1473ca90a FUN_1473ca90a body=68 status=ok
// SIG undefined FUN_1473ca90a(void)

void FUN_1473ca90a(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_1473ca94e();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_144727cd0(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1473ca94e FUN_1473ca94e body=322 status=ok
// SIG undefined FUN_1473ca94e(void)

void FUN_1473ca94e(longlong *param_1)

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



// FUNCTION 1473caa92 FUN_1473caa92 body=114 status=ok
// SIG undefined FUN_1473caa92(void)

int FUN_1473caa92(longlong *param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar1 = *param_1;
      do {
        cVar2 = FUN_1473cab04(lVar1 + (longlong)iVar4 * 0x140,param_3);
        if (cVar2 != '\0') {
          return iVar4;
        }
        iVar4 = *(int *)(lVar1 + 0x138 + (longlong)iVar4 * 0x140);
      } while (iVar4 != -1);
    }
  }
  return -1;
}



// FUNCTION 1473cab04 FUN_1473cab04 body=175 status=ok
// SIG undefined FUN_1473cab04(void)

undefined8 FUN_1473cab04(longlong param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  bool bVar7;
  
  if ((*(int *)(param_2 + 0x120) == *(int *)(param_1 + 0x120)) &&
     (*(int *)(param_2 + 0x128) == *(int *)(param_1 + 0x128))) {
    uVar1 = *(uint *)(param_2 + 0x118);
    uVar6 = (ulonglong)uVar1;
    if ((uVar1 == *(uint *)(param_1 + 0x118)) &&
       (*(int *)(param_2 + 0x124) == *(int *)(param_1 + 0x124))) {
      if (0 < (int)uVar1) {
        lVar4 = *(longlong *)(param_2 + 0x110);
        lVar5 = *(longlong *)(param_1 + 0x110);
        do {
          cVar2 = FUN_1473cabb4(lVar4,lVar5);
          if (cVar2 == '\0') {
            return 0;
          }
          lVar5 = lVar5 + 0x18;
          lVar4 = lVar4 + 0x18;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      lVar4 = 0;
      do {
        uVar3 = FUN_1473cabf2(param_1 + lVar4,param_2 + lVar4);
        bVar7 = lVar4 != 0xa0;
        lVar4 = lVar4 + 0x20;
      } while (((byte)uVar3 & bVar7) != 0);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 1473cabb4 FUN_1473cabb4 body=62 status=ok
// SIG undefined FUN_1473cabb4(void)

undefined8 FUN_1473cabb4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 extraout_var;
  
  if (*(int *)(param_2 + 2) == *(int *)(param_1 + 2)) {
    iVar1 = *(int *)(param_1 + 1);
    lVar2 = (longlong)iVar1;
    if (*(int *)(param_2 + 1) == iVar1) {
      if (iVar1 != 0) {
        iVar1 = memcmp((void *)*param_2,(void *)*param_1,lVar2 * 0x18);
        lVar2 = CONCAT44(extraout_var,iVar1);
        if (iVar1 != 0) {
          return 0;
        }
      }
      return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
    }
  }
  return 0;
}



// FUNCTION 1473cabf2 FUN_1473cabf2 body=89 status=ok
// SIG undefined FUN_1473cabf2(void)

undefined8 FUN_1473cabf2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 extraout_var;
  undefined8 uVar2;
  
  if ((((*(int *)(param_1 + 2) == *(int *)(param_2 + 2)) &&
       (*(int *)((longlong)param_1 + 0x14) == *(int *)((longlong)param_2 + 0x14))) &&
      (*(short *)((longlong)param_1 + 0x1a) == *(short *)((longlong)param_2 + 0x1a))) &&
     (((*(short *)(param_1 + 3) == *(short *)(param_2 + 3) &&
       (*(short *)((longlong)param_1 + 0x1c) == *(short *)((longlong)param_2 + 0x1c))) &&
      (*(int *)(param_1 + 1) == *(int *)(param_2 + 1))))) {
    iVar1 = memcmp((void *)*param_1,(void *)*param_2,(longlong)*(int *)(param_1 + 1) << 2);
    uVar2 = CONCAT71((int7)(CONCAT44(extraout_var,iVar1) >> 8),iVar1 == 0);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 1473cac4c FUN_1473cac4c body=309 status=ok
// SIG undefined FUN_1473cac4c(void)

undefined4 * FUN_1473cac4c(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
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
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1473cad82(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  FUN_1473caf74(local_40,*param_3);
  *(undefined8 *)(local_40 + 0x130) = *puVar1;
  *(undefined4 *)(local_40 + 0x138) = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = *(uint *)(local_40 + 0x120);
  cVar3 = FUN_1473cae72(param_1,uVar5,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      *(uint *)(local_40 + 0x13c) = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x138) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1473cb160(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473cad82 FUN_1473cad82 body=240 status=ok
// SIG undefined FUN_1473cad82(void)

int * FUN_1473cad82(longlong *param_1,int *param_2)

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
      FUN_1473caee0(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x140);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x140) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x140 + *param_1;
  return param_2;
}



// FUNCTION 1473cae72 FUN_1473cae72 body=109 status=ok
// SIG undefined FUN_1473cae72(void)

undefined8 FUN_1473cae72(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  int iVar1;
  void *_Dst;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar1 = FUN_1473caa92(), iVar1 != -1)) {
    _Dst = (void *)((longlong)iVar1 * 0x140 + *param_1);
    FUN_1473b5518(_Dst);
    memmove(_Dst,param_3,0x138);
    FUN_1473cb0e6(param_1,*param_4);
    *param_4 = iVar1;
    return 1;
  }
  return 0;
}



// FUNCTION 1473caee0 FUN_1473caee0 body=147 status=ok
// SIG undefined FUN_1473caee0(void)

void FUN_1473caee0(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x140,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x140)) {
      uVar5 = uVar4 / 0x140 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x140,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1473caf74 FUN_1473caf74 body=217 status=ok
// SIG undefined FUN_1473caf74(void)

longlong FUN_1473caf74(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_1473cb04e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xec) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  FUN_1473c1b0a(param_1 + 0xc0,param_2 + 0xc0);
  *(undefined8 *)(param_1 + 0x110) = 0;
  iVar1 = *(int *)(param_2 + 0x118);
  uVar2 = *(undefined8 *)(param_2 + 0x110);
  *(int *)(param_1 + 0x118) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x11c) = 0;
  }
  else {
    FUN_1473c1ca6((undefined8 *)(param_1 + 0x110),iVar1,0);
    FUN_1473c1d19(*(undefined8 *)(param_1 + 0x110),uVar2,iVar1);
  }
  *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_2 + 0x128);
  *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_2 + 0x120);
  return param_1;
}



// FUNCTION 1473cb04e FUN_1473cb04e body=151 status=ok
// SIG undefined FUN_1473cb04e(void)

longlong FUN_1473cb04e(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = 0;
  do {
    *(undefined8 *)(param_1 + lVar3) = 0;
    iVar1 = *(int *)(param_2 + 8 + lVar3);
    _Src = *(void **)(param_2 + lVar3);
    *(int *)(param_1 + 8 + lVar3) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)(param_1 + 0xc + lVar3) = 0;
    }
    else {
      FUN_1473c1e56((undefined8 *)(param_1 + lVar3),iVar1,0);
      memcpy(*(void **)(param_1 + lVar3),_Src,(longlong)iVar1 << 2);
    }
    uVar2 = *(undefined8 *)(param_2 + 0x10 + lVar3);
    *(undefined8 *)(param_1 + 0x16 + lVar3) = *(undefined8 *)(param_2 + 0x16 + lVar3);
    *(undefined8 *)(param_1 + 0x10 + lVar3) = uVar2;
    lVar3 = lVar3 + 0x20;
  } while (lVar3 != 0xc0);
  return param_1;
}



// FUNCTION 1473cb0e6 FUN_1473cb0e6 body=122 status=ok
// SIG undefined FUN_1473cb0e6(void)

void FUN_1473cb0e6(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x140) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x140) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x140 + 4) = uVar4;
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



// FUNCTION 1473cb160 FUN_1473cb160 body=437 status=ok
// SIG undefined FUN_1473cb160(void)

void FUN_1473cb160(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x140;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + 0x120 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x13c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x138 + lVar7) =
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



// FUNCTION 1473cb316 FUN_1473cb316 body=132 status=ok
// SIG undefined FUN_1473cb316(void)

void FUN_1473cb316(longlong param_1,int param_2)

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



// FUNCTION 1473cb39c FUN_1473cb39c body=138 status=ok
// SIG undefined FUN_1473cb39c(void)

int FUN_1473cb39c(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      lVar2 = *param_1;
      iVar1 = *param_3;
      puVar3 = *(undefined8 **)(param_3 + 2);
      do {
        lVar7 = (longlong)iVar8;
        if (*(int *)(lVar2 + lVar7 * 0x28) == iVar1) {
          puVar4 = *(undefined8 **)(lVar2 + lVar7 * 0x28 + 8);
          iVar5 = *(int *)(puVar4 + 1);
          if ((iVar5 == *(int *)(puVar3 + 1)) &&
             (iVar5 = memcmp((void *)*puVar4,(void *)*puVar3,(longlong)iVar5), iVar5 == 0)) {
            return iVar8;
          }
        }
        iVar8 = *(int *)(lVar2 + 0x20 + lVar7 * 0x28);
      } while (iVar8 != -1);
    }
  }
  return -1;
}



// FUNCTION 1473cb426 FUN_1473cb426 body=161 status=ok
// SIG undefined FUN_1473cb426(void)

void FUN_1473cb426(longlong *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = *param_2;
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar2) * 4);
    if (iVar7 != -1) {
      lVar3 = *param_1;
      puVar4 = *(undefined8 **)(param_2 + 2);
      do {
        piVar1 = (int *)(lVar3 + (longlong)iVar7 * 0x28);
        if (*piVar1 == iVar2) {
          iVar5 = *(int *)(*(undefined8 **)(piVar1 + 2) + 1);
          if (iVar5 == *(int *)(puVar4 + 1)) {
            iVar5 = memcmp((void *)**(undefined8 **)(piVar1 + 2),(void *)*puVar4,(longlong)iVar5);
            if (iVar5 == 0) {
              FUN_1473cb4c8(param_1,iVar7);
              return;
            }
          }
        }
        iVar7 = piVar1[8];
      } while (iVar7 != -1);
    }
  }
  return;
}



// FUNCTION 1473cb4c8 FUN_1473cb4c8 body=87 status=ok
// SIG undefined FUN_1473cb4c8(void)

void FUN_1473cb4c8(longlong *param_1,int param_2)

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
  FUN_1473cb520();
  return;
}



// FUNCTION 1473cb520 FUN_1473cb520 body=70 status=ok
// SIG undefined FUN_1473cb520(void)

void FUN_1473cb520(longlong *param_1,int param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*param_1 + 0x10 + (longlong)param_2 * 0x28);
  if (plVar1 != (longlong *)0x0) {
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar1);
  }
  FUN_1473cb566(param_1,param_2);
  return;
}



// FUNCTION 1473cb566 FUN_1473cb566 body=114 status=ok
// SIG undefined FUN_1473cb566(void)

void FUN_1473cb566(longlong *param_1,int param_2)

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



// FUNCTION 1473cb5d8 FUN_1473cb5d8 body=307 status=ok
// SIG undefined FUN_1473cb5d8(void)

undefined4 * FUN_1473cb5d8(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_1473cb70c(param_1,local_48);
  puVar1 = (uint *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  uVar7 = puVar1[1];
  uVar6 = puVar1[2];
  uVar3 = puVar1[3];
  *local_40 = *puVar1;
  local_40[1] = uVar7;
  local_40[2] = uVar6;
  local_40[3] = uVar3;
  *(undefined8 *)(local_40 + 4) = *(undefined8 *)(puVar1 + 4);
  puVar1[4] = 0;
  puVar1[5] = 0;
  *(undefined8 *)(local_40 + 6) = *puVar2;
  local_40[8] = 0xffffffff;
  local_4c = local_48[0];
  uVar7 = *local_40;
  cVar5 = FUN_1473cb7f2(param_1,uVar7,local_40,&local_4c);
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
      FUN_1473cb87a(param_1);
    }
  }
  *param_2 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473cb70c FUN_1473cb70c body=230 status=ok
// SIG undefined FUN_1473cb70c(void)

int * FUN_1473cb70c(longlong *param_1,int *param_2)

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



// FUNCTION 1473cb7f2 FUN_1473cb7f2 body=135 status=ok
// SIG undefined FUN_1473cb7f2(void)

undefined8 FUN_1473cb7f2(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar10 = FUN_1473cb39c(), iVar10 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar10 * 0x28);
    plVar2 = *(longlong **)(puVar1 + 4);
    if (plVar2 != (longlong *)0x0) {
      if (*plVar2 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(plVar2);
    }
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    uVar7 = param_3[5];
    uVar8 = param_3[6];
    uVar9 = param_3[7];
    puVar1[4] = param_3[4];
    puVar1[5] = uVar7;
    puVar1[6] = uVar8;
    puVar1[7] = uVar9;
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_1473cb566(param_1,*param_4);
    *param_4 = iVar10;
    return 1;
  }
  return 0;
}



// FUNCTION 1473cb87a FUN_1473cb87a body=419 status=ok
// SIG undefined FUN_1473cb87a(void)

void FUN_1473cb87a(longlong *param_1)

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



// FUNCTION 1473cba1e FUN_1473cba1e body=180 status=ok
// SIG undefined FUN_1473cba1e(void)

longlong * FUN_1473cba1e(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  longlong *local_28;
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
        plVar2 = (longlong *)(*param_1 + (longlong)iVar1 * 0x18);
        if (*plVar2 == *param_3) {
          if (plVar2 != (longlong *)0x0) goto LAB_1473cbab5;
          break;
        }
        iVar1 = (int)plVar2[2];
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_1473cbad4(param_1,&local_1c,param_2);
  plVar2 = (longlong *)(*param_1 + (longlong)local_1c * 0x18);
LAB_1473cbab5:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar2 + 1;
}



// FUNCTION 1473cbad4 FUN_1473cbad4 body=278 status=ok
// SIG undefined FUN_1473cbad4(void)

undefined4 * FUN_1473cbad4(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1473cbbec(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  cVar1 = FUN_1473cbcd2(param_1,param_3,local_40,local_48);
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
      FUN_1473cbdc4(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473cbbec FUN_1473cbbec body=230 status=ok
// SIG undefined FUN_1473cbbec(void)

int * FUN_1473cbbec(longlong *param_1,int *param_2)

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



// FUNCTION 1473cbcd2 FUN_1473cbcd2 body=128 status=ok
// SIG undefined FUN_1473cbcd2(void)

undefined8 FUN_1473cbcd2(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_1473cbd52((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 1473cbd52 FUN_1473cbd52 body=114 status=ok
// SIG undefined FUN_1473cbd52(void)

void FUN_1473cbd52(longlong *param_1,int param_2)

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



// FUNCTION 1473cbdc4 FUN_1473cbdc4 body=447 status=ok
// SIG undefined FUN_1473cbdc4(void)

void FUN_1473cbdc4(longlong *param_1)

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



// FUNCTION 1473cbf84 FUN_1473cbf84 body=102 status=ok
// SIG undefined FUN_1473cbf84(void)

void FUN_1473cbf84(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 +
                    ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x18) == param_2) {
          FUN_1473cbfea(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 1473cbfea FUN_1473cbfea body=87 status=ok
// SIG undefined FUN_1473cbfea(void)

void FUN_1473cbfea(longlong *param_1,int param_2)

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
  FUN_1473cbd52();
  return;
}



// FUNCTION 1473cc042 FUN_1473cc042 body=125 status=ok
// SIG undefined FUN_1473cc042(void)

void FUN_1473cc042(longlong *param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar3 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar3) {
      FUN_1473c93cc(param_1,iVar1);
    }
    puVar2 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_1);
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      puVar2 = puVar2 + 2;
    }
    return;
  }
  if (param_2 < iVar1) {
    *(int *)(param_1 + 1) = param_2;
    FUN_1473cc0c0(param_1);
    return;
  }
  return;
}



// FUNCTION 1473cc0c0 FUN_1473cc0c0 body=62 status=ok
// SIG undefined FUN_1473cc0c0(void)

void FUN_1473cc0c0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1473cc0fe(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 1473cc0fe FUN_1473cc0fe body=93 status=ok
// SIG undefined FUN_1473cc0fe(void)

ulonglong FUN_1473cc0fe(uint param_1,uint param_2)

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



// FUNCTION 1473cc15c FUN_1473cc15c body=147 status=ok
// SIG undefined FUN_1473cc15c(void)

void FUN_1473cc15c(longlong param_1,int param_2)

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



// FUNCTION 1473cc1f0 FUN_1473cc1f0 body=132 status=ok
// SIG undefined FUN_1473cc1f0(void)

void FUN_1473cc1f0(longlong param_1,int param_2)

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



// FUNCTION 1473cc276 FUN_1473cc276 body=147 status=ok
// SIG undefined FUN_1473cc276(void)

void FUN_1473cc276(longlong param_1,int param_2)

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



// FUNCTION 1473cc30a FUN_1473cc30a body=147 status=ok
// SIG undefined FUN_1473cc30a(void)

void FUN_1473cc30a(longlong param_1,int param_2)

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



// FUNCTION 1473cc39e FUN_1473cc39e body=132 status=ok
// SIG undefined FUN_1473cc39e(void)

void FUN_1473cc39e(longlong param_1,int param_2)

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



// FUNCTION 1473cc424 FUN_1473cc424 body=132 status=ok
// SIG undefined FUN_1473cc424(void)

void FUN_1473cc424(longlong param_1,int param_2)

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



// FUNCTION 1473cc4a9 FUN_1473cc4a9 body=53 status=ok
// SIG undefined FUN_1473cc4a9(void)

void FUN_1473cc4a9(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x41;
    do {
      *(undefined8 *)(param_1 + -0x21) = 0;
      *(undefined4 *)(param_1 + -0x19) = 0;
      *(undefined8 *)(param_1 + -0x41) = 0;
      *(undefined8 *)(param_1 + -0x39) = 0;
      *(undefined8 *)(param_1 + -0x35) = 0;
      *(undefined8 *)(param_1 + -0x2d) = 0;
      *(undefined8 *)(param_1 + -0x11) = 0;
      *(undefined8 *)(param_1 + -9) = 0;
      *(undefined2 *)(param_1 + -1) = 1;
      param_1 = param_1 + 0x48;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1473cc4de FUN_1473cc4de body=147 status=ok
// SIG undefined FUN_1473cc4de(void)

void FUN_1473cc4de(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x48,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x48)) {
      uVar5 = uVar4 / 0x48 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x48,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1473cc572 FUN_1473cc572 body=132 status=ok
// SIG undefined FUN_1473cc572(void)

void FUN_1473cc572(longlong param_1,int param_2)

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



// FUNCTION 1473cc5f8 FUN_1473cc5f8 body=62 status=ok
// SIG undefined FUN_1473cc5f8(void)

void FUN_1473cc5f8(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1473cc636(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x28,8);
  }
  return;
}



// FUNCTION 1473cc636 FUN_1473cc636 body=112 status=ok
// SIG undefined FUN_1473cc636(void)

ulonglong FUN_1473cc636(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x28) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1473cc670;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x28,8);
      param_2 = param_2 / 0x28;
    }
  }
LAB_1473cc670:
  return param_2 & 0xffffffff;
}



// FUNCTION 1473cc6a6 FUN_1473cc6a6 body=86 status=ok
// SIG undefined FUN_1473cc6a6(void)

void FUN_1473cc6a6(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
  uVar2 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 3)) {
    uVar2 = uVar1 >> 3 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 1473cc6fc FUN_1473cc6fc body=132 status=ok
// SIG undefined FUN_1473cc6fc(void)

void FUN_1473cc6fc(longlong param_1,int param_2)

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



// FUNCTION 1473cc782 FUN_1473cc782 body=111 status=ok
// SIG undefined FUN_1473cc782(void)

void FUN_1473cc782(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x98,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x98)) {
      uVar2 = uVar1 / 0x98 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x98,4);
  }
  return;
}



// FUNCTION 1473cc7f2 FUN_1473cc7f2 body=146 status=ok
// SIG undefined FUN_1473cc7f2(void)

void FUN_1473cc7f2(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x98,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x98)) {
      uVar5 = uVar4 / 0x98 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x98,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1473cc886 FUN_1473cc886 body=336 status=ok
// SIG undefined FUN_1473cc886(void)

undefined4 * FUN_1473cc886(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_1473cc9d8(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  *local_40 = *(ulonglong *)*param_3;
  local_40[1] = *puVar1;
  *puVar1 = 0;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(*local_40 >> 0x14) & 0xffff ^ (uint)(*local_40 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_1473ccabe(param_1,uVar4,local_40,&local_4c);
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
      FUN_1473ccbdc(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473cc9d8 FUN_1473cc9d8 body=230 status=ok
// SIG undefined FUN_1473cc9d8(void)

int * FUN_1473cc9d8(longlong *param_1,int *param_2)

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



// FUNCTION 1473ccabe FUN_1473ccabe body=172 status=ok
// SIG undefined FUN_1473ccabe(void)

undefined8 FUN_1473ccabe(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
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
        plVar6 = (longlong *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*plVar6 == *param_3) {
          if (plVar6[1] != 0) {
            LOCK();
            puVar1 = (uint *)(plVar6[1] + 8);
            uVar2 = *puVar1;
            *puVar1 = *puVar1 - 1;
            UNLOCK();
            if ((uVar2 & 0x3fffffff) == 1) {
              FUN_144a54812();
            }
          }
          uVar3 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar6 = (int)*param_3;
          *(undefined4 *)((longlong)plVar6 + 4) = uVar3;
          *(int *)(plVar6 + 1) = (int)lVar5;
          *(undefined4 *)((longlong)plVar6 + 0xc) = uVar4;
          FUN_1473ccb6a(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = (int)plVar6[2];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 1473ccb6a FUN_1473ccb6a body=114 status=ok
// SIG undefined FUN_1473ccb6a(void)

void FUN_1473ccb6a(longlong *param_1,int param_2)

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



// FUNCTION 1473ccbdc FUN_1473ccbdc body=474 status=ok
// SIG undefined FUN_1473ccbdc(void)

void FUN_1473ccbdc(longlong *param_1)

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



// FUNCTION 1473ccdb7 FUN_1473ccdb7 body=64 status=ok
// SIG undefined FUN_1473ccdb7(void)

void FUN_1473ccdb7(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x80);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-4] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x21;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1473ccdf8 FUN_1473ccdf8 body=103 status=ok
// SIG undefined FUN_1473ccdf8(void)

undefined8 FUN_1473ccdf8(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = FUN_144a3809e((ulonglong)param_2 * 0x108,0);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  iVar4 = (int)(uVar2 / 0x108);
  iVar5 = 0x7fffffff;
  if ((int)param_2 <= iVar4) {
    iVar5 = iVar4;
  }
  if (iVar5 == *(int *)(param_1 + 0x210c)) {
    return SUB168(auVar1 * ZEXT816(0xf83e0f83e0f83e1),0);
  }
  *(int *)(param_1 + 0x210c) = iVar5;
  uVar3 = FUN_1473cce60(param_1,*(undefined4 *)(param_1 + 0x2108));
  return uVar3;
}



// FUNCTION 1473cce60 FUN_1473cce60 body=155 status=ok
// SIG undefined FUN_1473cce60(void)

void FUN_1473cce60(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x2100);
  if ((uint)param_3 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x108);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x2100,0,param_3,0x108);
    memmove(*(void **)((longlong)param_1 + 0x2100),param_1,(longlong)param_2 * 0x108);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x2100,param_2,param_3,0x108);
  return;
}



// FUNCTION 1473ccefc FUN_1473ccefc body=120 status=ok
// SIG undefined FUN_1473ccefc(void)

void FUN_1473ccefc(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0x20;
    if (0x20 < param_2) {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x50,0);
      iVar2 = (int)(uVar1 / 0x50);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar2) {
        iVar3 = iVar2;
      }
    }
  }
  if (iVar3 != *(int *)(param_1 + 0xa0c)) {
    *(int *)(param_1 + 0xa0c) = iVar3;
    FUN_1473ccf74(param_1,*(undefined4 *)(param_1 + 0xa08));
    return;
  }
  return;
}



// FUNCTION 1473ccf74 FUN_1473ccf74 body=149 status=ok
// SIG undefined FUN_1473ccf74(void)

void FUN_1473ccf74(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xa00);
  if ((uint)param_3 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x50);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xa00,0,param_3,0x50);
    memmove(*(void **)((longlong)param_1 + 0xa00),param_1,(longlong)param_2 * 0x50);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xa00,param_2,param_3,0x50);
  return;
}



// FUNCTION 1473cd00a FUN_1473cd00a body=103 status=ok
// SIG undefined FUN_1473cd00a(void)

void FUN_1473cd00a(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0x20;
    if (0x20 < param_2) {
      uVar2 = FUN_144a3809e((ulonglong)param_2 << 3,0);
      iVar1 = (int)(uVar2 >> 3);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (iVar3 != *(int *)(param_1 + 0x10c)) {
    *(int *)(param_1 + 0x10c) = iVar3;
    FUN_1473cd072(param_1,*(undefined4 *)(param_1 + 0x108));
    return;
  }
  return;
}



// FUNCTION 1473cd072 FUN_1473cd072 body=141 status=ok
// SIG undefined FUN_1473cd072(void)

void FUN_1473cd072(void *param_1,int param_2,undefined8 param_3)

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



// FUNCTION 1473cd0ff FUN_1473cd0ff body=117 status=ok
// SIG undefined FUN_1473cd0ff(void)

void FUN_1473cd0ff(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0x100000000;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0x100000000;
  *(undefined4 *)(param_1 + 0x90) = 0x3b9d13f0;
  *(undefined8 *)(param_1 + 0x94) = 0;
  *(undefined8 *)(param_1 + 0x9c) = 0;
  *(undefined8 *)(param_1 + 0xa4) = 0;
  *(undefined8 *)(param_1 + 0xac) = 0;
  *(undefined8 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xbc) = 0;
  *(undefined8 *)(param_1 + 0xc4) = 0;
  *(undefined8 *)(param_1 + 0xcc) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0x3b9d1404;
  *(undefined8 *)(param_1 + 0xe4) = 0;
  *(undefined8 *)(param_1 + 0xec) = 0;
  *(undefined8 *)(param_1 + 0xf4) = 0;
  *(undefined8 *)(param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0x104) = 0;
  return;
}



// FUNCTION 1473cd174 FUN_1473cd174 body=139 status=ok
// SIG undefined FUN_1473cd174(void)

void FUN_1473cd174(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x2108);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x20;
    if (0x20 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (0x20 < *(uint *)(param_1 + 0x210c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x108,0);
      iVar4 = (int)(uVar3 / 0x108);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x210c) = iVar5;
    FUN_1473cce60(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1473cd200 FUN_1473cd200 body=136 status=ok
// SIG undefined FUN_1473cd200(void)

void FUN_1473cd200(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0xa08);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x20;
    if (0x20 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (0x20 < *(uint *)(param_1 + 0xa0c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x50,0);
      iVar4 = (int)(uVar3 / 0x50);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0xa0c) = iVar5;
    FUN_1473ccf74(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1473cd28a FUN_1473cd28a body=119 status=ok
// SIG undefined FUN_1473cd28a(void)

void FUN_1473cd28a(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x108);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x20;
    if (0x20 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x20 < *(uint *)(param_1 + 0x10c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x10c) = iVar5;
    FUN_1473cd072(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1473cd302 FUN_1473cd302 body=98 status=ok
// SIG undefined FUN_1473cd302(void)

void FUN_1473cd302(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1473cd364 FUN_1473cd364 body=52 status=ok
// SIG undefined FUN_1473cd364(void)

void FUN_1473cd364(void)

{
  if (1 < DAT_14ca78668) {
    FUN_1461926c4();
    DAT_14ca78668 = 1;
    FUN_1473cd506();
    return;
  }
  FUN_1473cd398();
  FUN_1461926c4();
  return;
}



// FUNCTION 1473cd398 FUN_1473cd398 body=364 status=ok
// SIG undefined FUN_1473cd398(void)

void FUN_1473cd398(void)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
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
  puVar5 = &DAT_14ca78658;
  if (DAT_14ca78660 != (undefined *)0x0) {
    puVar5 = DAT_14ca78660;
  }
  iVar4 = DAT_14ca78668 + 3;
  if (-1 < DAT_14ca78668) {
    iVar4 = DAT_14ca78668;
  }
  if (DAT_14ca78628 - DAT_14ca78654 < iVar4 >> 2) {
    local_50 = 0x100000000;
    uStack_48 = &DAT_14ca78630;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    if (DAT_14ca78648 == 0) {
      iVar4 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar4 = DAT_14ca78648;
    }
    local_78 = &DAT_14ca78620;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar1 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    if ((local_60._4_4_ != iVar4) || (uStack_48 != &DAT_14ca78630)) {
      iVar2 = local_60._4_4_;
      local_60 = uVar1;
      do {
        *(undefined4 *)(puVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar2 * 0x18) * 4)
             = 0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar2 = local_60._4_4_;
        uVar1 = local_60;
      } while (local_78 != &DAT_14ca78620 ||
               ((undefined *)CONCAT44(uStack_64,uStack_68) != &DAT_14ca78630 ||
               local_60._4_4_ != iVar4));
    }
  }
  else {
    uVar1 = local_60;
    if (0 < DAT_14ca78668) {
      lVar3 = 0;
      do {
        *(undefined4 *)(puVar5 + lVar3 * 4) = 0xffffffff;
        lVar3 = lVar3 + 1;
      } while (lVar3 < DAT_14ca78668);
    }
  }
  local_60 = uVar1;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1473cd506 FUN_1473cd506 body=464 status=ok
// SIG undefined FUN_1473cd506(void)

void FUN_1473cd506(void)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
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
  if (DAT_14ca78660 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14ca78660,0,0,4);
  }
  uVar2 = DAT_14ca78668;
  uVar3 = local_50;
  if (DAT_14ca78668 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14ca78658,0,DAT_14ca78668,4);
    if (0 < (int)uVar2) {
      do {
        puVar6 = DAT_14ca78660;
        if (DAT_14ca78660 == (undefined *)0x0) {
          puVar6 = &DAT_14ca78658;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14ca78668 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar2 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14ca78630;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14ca78648 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14ca78620;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar3 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar3;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar9 = (longlong)(int)DAT_14ca78668 - 1U & (longlong)*(int *)(lVar1 + lVar5 * 0x18);
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14ca78660;
        if (DAT_14ca78660 == (undefined *)0x0) {
          puVar6 = &DAT_14ca78658;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14ca78668 - 1U & uVar9) * 4);
        puVar6 = DAT_14ca78660;
        if (DAT_14ca78660 == (undefined *)0x0) {
          puVar6 = &DAT_14ca78658;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14ca78668 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar3 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar3;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1473cd6d8 FUN_1473cd6d8 body=95 status=ok
// SIG undefined FUN_1473cd6d8(void)

void FUN_1473cd6d8(longlong param_1,uint param_2)

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



// FUNCTION 1473cd738 FUN_1473cd738 body=132 status=ok
// SIG undefined FUN_1473cd738(void)

void FUN_1473cd738(longlong param_1,int param_2)

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



// FUNCTION 1473cd7be FUN_1473cd7be body=147 status=ok
// SIG undefined FUN_1473cd7be(void)

void FUN_1473cd7be(longlong param_1,int param_2)

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



// FUNCTION 1473cd852 FUN_1473cd852 body=147 status=ok
// SIG undefined FUN_1473cd852(void)

void FUN_1473cd852(longlong param_1,int param_2)

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



// FUNCTION 1473cd8e6 FUN_1473cd8e6 body=132 status=ok
// SIG undefined FUN_1473cd8e6(void)

void FUN_1473cd8e6(longlong param_1,int param_2)

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



// FUNCTION 1473cd96c FUN_1473cd96c body=96 status=ok
// SIG undefined FUN_1473cd96c(void)

void FUN_1473cd96c(longlong param_1,int param_2)

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



// FUNCTION 1473cd9cc FUN_1473cd9cc body=96 status=ok
// SIG undefined FUN_1473cd9cc(void)

void FUN_1473cd9cc(longlong param_1,int param_2)

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



// FUNCTION 1473cda2c FUN_1473cda2c body=132 status=ok
// SIG undefined FUN_1473cda2c(void)

void FUN_1473cda2c(longlong param_1,int param_2)

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



// FUNCTION 1473cdab2 FUN_1473cdab2 body=209 status=ok
// SIG undefined FUN_1473cdab2(void)

int FUN_1473cdab2(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  iVar4 = (int)param_1[1];
  lVar5 = (longlong)iVar4;
  if (lVar5 == 0) {
    iVar4 = 0;
  }
  else {
    plVar1 = (longlong *)*param_1;
    iVar3 = 0;
    bVar10 = *plVar1 == *(longlong *)*param_2;
    iVar7 = 0;
    do {
      iVar2 = iVar7 + 1;
      if (iVar7 + 1 < iVar4) {
        iVar2 = iVar4;
      }
      iVar8 = iVar7;
      lVar6 = (longlong)iVar7;
      do {
        lVar6 = lVar6 + 1;
        iVar9 = iVar2;
        if (lVar5 <= lVar6) break;
        iVar8 = iVar8 + 1;
        iVar9 = iVar8;
      } while (bVar10 == (plVar1[lVar6] == *(longlong *)*param_2));
      if (bVar10 == false) {
        if (iVar3 != iVar7) {
          memmove(plVar1 + iVar3,plVar1 + iVar7,(longlong)(iVar9 - iVar7) << 3);
        }
        iVar3 = iVar3 + (iVar9 - iVar7);
      }
      bVar10 = (bool)(bVar10 ^ 1);
      iVar7 = iVar9;
    } while (lVar6 < lVar5);
    *(int *)(param_1 + 1) = iVar3;
    iVar4 = iVar4 - iVar3;
  }
  return iVar4;
}



// FUNCTION 1473cdb83 FUN_1473cdb83 body=67 status=ok
// SIG undefined FUN_1473cdb83(void)

void FUN_1473cdb83(longlong param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_2 != 0) {
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + lVar4 * 8);
      if (lVar3 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar3 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
      lVar4 = lVar4 + 1;
    } while (param_2 != (int)lVar4);
  }
  return;
}



// FUNCTION 1473cdbc6 FUN_1473cdbc6 body=132 status=ok
// SIG undefined FUN_1473cdbc6(void)

void FUN_1473cdbc6(longlong param_1,int param_2)

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



// FUNCTION 1473cdc4c FUN_1473cdc4c body=123 status=ok
// SIG undefined FUN_1473cdc4c(void)

void FUN_1473cdc4c(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (param_2 != 0) {
    LOCK();
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
    UNLOCK();
  }
  local_18 = param_2;
  FUN_1473ce050(param_1 + 0x1e8,&local_18);
  if (local_18 != 0) {
    LOCK();
    puVar1 = (uint *)(local_18 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473cdcd6 FUN_1473cdcd6 body=308 status=ok
// SIG undefined FUN_1473cdcd6(void)

undefined4 * FUN_1473cdcd6(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  undefined *puVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  uint *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1473cde0c(local_40);
  puVar1 = (undefined8 *)param_2[1];
  *local_38 = *(uint *)*param_2;
  *(undefined8 *)(local_38 + 2) = *puVar1;
  *puVar1 = 0;
  local_38[4] = 0xffffffff;
  local_44 = local_40[0];
  uVar7 = *local_38;
  cVar4 = FUN_1473cdf1a(uVar7,local_38,&local_44);
  uVar3 = local_44;
  if (cVar4 == '\0') {
    uVar5 = DAT_14ca78628 - DAT_14ca78654;
    iVar9 = 1;
    if (3 < uVar5) {
      uVar8 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar2 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar9 <= DAT_14ca78668)) {
      uVar7 = DAT_14ca78668 - 1U & uVar7;
      local_38[5] = uVar7;
      puVar6 = DAT_14ca78660;
      if (DAT_14ca78660 == (undefined *)0x0) {
        puVar6 = &DAT_14ca78658;
      }
      local_38[4] = *(uint *)(puVar6 + ((longlong)DAT_14ca78668 - 1U & (longlong)(int)uVar7) * 4);
      puVar6 = DAT_14ca78660;
      if (DAT_14ca78660 == (undefined *)0x0) {
        puVar6 = &DAT_14ca78658;
      }
      *(undefined4 *)(puVar6 + ((longlong)DAT_14ca78668 - 1U & (longlong)(int)uVar7) * 4) = local_44
      ;
    }
    else {
      DAT_14ca78668 = iVar9;
      FUN_1473cd506();
    }
  }
  *param_1 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473cde0c FUN_1473cde0c body=270 status=ok
// SIG undefined FUN_1473cde0c(void)

int * FUN_1473cde0c(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14ca78650;
  iVar4 = DAT_14ca78628;
  if (DAT_14ca78654 == 0) {
    iVar2 = DAT_14ca78628 + 1;
    bVar7 = DAT_14ca7862c == DAT_14ca78628;
    DAT_14ca78628 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14ca78620,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14ca78630,1);
    puVar3 = DAT_14ca78640;
    if (DAT_14ca78640 == (undefined *)0x0) {
      puVar3 = &DAT_14ca78630;
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
    lVar6 = (longlong)DAT_14ca78650;
    DAT_14ca78650 = *(int *)(DAT_14ca78620 + 4 + lVar6 * 0x18);
    DAT_14ca78654 = DAT_14ca78654 + -1;
    iVar4 = iVar2;
    if (DAT_14ca78654 != 0) {
      *(undefined4 *)(DAT_14ca78620 + (longlong)DAT_14ca78650 * 0x18) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14ca78630;
  if (DAT_14ca78640 != (undefined *)0x0) {
    puVar3 = DAT_14ca78640;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14ca78620;
  return param_1;
}



// FUNCTION 1473cdf1a FUN_1473cdf1a body=182 status=ok
// SIG undefined FUN_1473cdf1a(void)

undefined8 FUN_1473cdf1a(uint param_1,int *param_2,int *param_3)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  int iVar8;
  
  if ((DAT_14ca78628 - DAT_14ca78654 != 1) && (DAT_14ca78628 != DAT_14ca78654)) {
    puVar7 = &DAT_14ca78658;
    if (DAT_14ca78660 != (undefined *)0x0) {
      puVar7 = DAT_14ca78660;
    }
    iVar8 = *(int *)(puVar7 + (ulonglong)(DAT_14ca78668 - 1U & param_1) * 4);
    if (iVar8 != -1) {
      do {
        piVar2 = (int *)(DAT_14ca78620 + (longlong)iVar8 * 0x18);
        if (*piVar2 == *param_2) {
          if (*(longlong *)(piVar2 + 2) != 0) {
            LOCK();
            puVar1 = (uint *)(*(longlong *)(piVar2 + 2) + 8);
            uVar3 = *puVar1;
            *puVar1 = *puVar1 - 1;
            UNLOCK();
            if ((uVar3 & 0x3fffffff) == 1) {
              FUN_144a54812();
            }
          }
          iVar4 = param_2[1];
          iVar5 = param_2[2];
          iVar6 = param_2[3];
          *piVar2 = *param_2;
          piVar2[1] = iVar4;
          piVar2[2] = iVar5;
          piVar2[3] = iVar6;
          FUN_1473cdfd0(*param_3);
          *param_3 = iVar8;
          return 1;
        }
        iVar8 = piVar2[4];
      } while (iVar8 != -1);
    }
  }
  return 0;
}



// FUNCTION 1473cdfd0 FUN_1473cdfd0 body=128 status=ok
// SIG undefined FUN_1473cdfd0(void)

void FUN_1473cdfd0(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14ca78620;
  if (DAT_14ca78654 != 0) {
    *(int *)(DAT_14ca78620 + (longlong)DAT_14ca78650 * 0x18) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x18) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14ca78654) {
    iVar4 = DAT_14ca78650;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x18) = iVar4;
  DAT_14ca78654 = DAT_14ca78654 + 1;
  puVar3 = &DAT_14ca78630;
  if (DAT_14ca78640 != (undefined *)0x0) {
    puVar3 = DAT_14ca78640;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14ca78650 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 1473ce050 FUN_1473ce050 body=112 status=ok
// SIG undefined FUN_1473ce050(void)

void FUN_1473ce050(longlong *param_1,longlong *param_2)

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
    FUN_144ab4262(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + lVar4 * 8) = *param_2;
  *param_2 = 0;
  return;
}



// FUNCTION 1473ce0c0 FUN_1473ce0c0 body=3484 status=ok
// SIG undefined FUN_1473ce0c0(void)

void FUN_1473ce0c0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char cVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  longlong *plVar15;
  longlong lVar16;
  char cVar17;
  undefined4 uVar18;
  uint uVar19;
  int iVar20;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  undefined4 *puVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  byte bVar24;
  longlong lVar25;
  ulonglong uVar26;
  undefined4 uVar27;
  longlong lVar28;
  undefined1 auStack_108 [47];
  char local_d9;
  longlong local_d8;
  undefined4 local_cc;
  longlong local_c8;
  undefined4 local_bc;
  uint local_b8;
  uint local_b4;
  ulonglong local_b0;
  longlong *local_a8;
  undefined4 local_9c;
  ulonglong local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_b8 = -1 << (*(byte *)(param_2 + 0x382) & 0x1f);
  if (((*(char *)(param_2 + 0x37e) != '\0' & DAT_14ca84f34) == 1) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x958) + 0x20f8) & 0x40) != 0)) {
    local_bc = (undefined4)
               CONCAT71((int7)((ulonglong)unaff_RDI >> 8),
                        *(int *)(*(longlong *)(param_1 + 0x958) + 0x24c0) == 1);
  }
  else {
    local_bc = 0;
  }
  if ((DAT_14ca8507f == '\x01') &&
     ((*(byte *)(*(longlong *)(param_1 + 0x958) + 0x20fc) & 0x80) != 0)) {
    local_cc = (undefined4)
               CONCAT71((int7)((ulonglong)unaff_RSI >> 8),*(char *)(param_2 + 0x37d) != '\0');
  }
  else {
    local_cc = 0;
  }
  uVar3 = *(undefined1 *)(param_2 + 0x381);
  local_d9 = *(char *)(param_2 + 0x37b);
  if ((char)local_bc != '\0') {
    puVar14 = (undefined4 *)(param_2 + 0x60);
    if (*(char *)(param_2 + 0x37e) == '\0') {
      puVar14 = (undefined4 *)0x0;
    }
    *(undefined4 *)(param_1 + 0x830) = 0x3b9c73c9;
    *(undefined8 *)(param_1 + 0x838) = 0;
    *(undefined4 *)(param_1 + 0x840) = *puVar14;
    *(undefined4 *)(param_1 + 0x844) = puVar14[1];
    *(undefined4 *)(param_1 + 0x848) = 1;
    *(longlong *)(param_1 + 0x860) = param_1 + 0x830;
  }
  local_b4 = CONCAT31(local_b4._1_3_,uVar3);
  if ((char)local_cc != '\0') {
    puVar14 = (undefined4 *)(param_2 + 0xa8);
    if (*(char *)(param_2 + 0x37d) == '\0') {
      puVar14 = (undefined4 *)0x0;
    }
    *(undefined4 *)(param_1 + 0x870) = 0x3b9c73c9;
    *(undefined8 *)(param_1 + 0x878) = 0;
    *(undefined4 *)(param_1 + 0x880) = *puVar14;
    *(undefined4 *)(param_1 + 0x884) = puVar14[1];
    *(undefined4 *)(param_1 + 0x888) = 0;
    *(undefined1 **)(param_1 + 0x8a0) = &DAT_100000001;
    *(longlong *)(param_1 + 0x8a8) = param_1 + 0x870;
  }
  bVar24 = *(byte *)(param_2 + 0x379);
  local_d8 = param_1;
  local_c8 = param_2;
  if (bVar24 != 0) {
    plVar15 = (longlong *)(param_1 + 0x440);
    plVar1 = (longlong *)(param_1 + 0x450);
    uVar26 = 0;
    do {
      lVar16 = 0;
      if (*(char *)(param_2 + 0x379) != '\0') {
        lVar16 = param_2;
      }
      uVar27 = *(undefined4 *)(lVar16 + uVar26 * 8);
      uVar12 = *(undefined4 *)(lVar16 + 4 + uVar26 * 8);
      iVar20 = *(int *)(param_1 + 0x448);
      *(uint *)(param_1 + 0x448) = iVar20 + 1U;
      if (*(uint *)(param_1 + 0x44c) < iVar20 + 1U) {
        FUN_1473cef04(plVar15,iVar20);
        param_2 = local_c8;
        param_1 = local_d8;
      }
      lVar16 = *plVar15;
      lVar28 = (longlong)iVar20 * 0x20;
      *(undefined4 *)(lVar16 + lVar28) = 0x3b9c73c9;
      *(undefined8 *)(lVar16 + 8 + lVar28) = 0;
      *(undefined4 *)(lVar16 + 0x10 + lVar28) = uVar27;
      *(undefined4 *)(lVar16 + 0x14 + lVar28) = uVar12;
      *(undefined4 *)(lVar16 + 0x18 + lVar28) = 0;
      if (*(char *)(param_2 + 0x37c) != '\0') {
        uVar27 = *(undefined4 *)(param_2 + 0x68 + uVar26 * 8);
        uVar12 = *(undefined4 *)(param_2 + 0x6c + uVar26 * 8);
        iVar20 = *(int *)(param_1 + 0x458);
        *(uint *)(param_1 + 0x458) = iVar20 + 1U;
        if (*(uint *)(param_1 + 0x45c) < iVar20 + 1U) {
          FUN_1473cef04(plVar1,iVar20);
          param_2 = local_c8;
          param_1 = local_d8;
        }
        lVar16 = *plVar1;
        lVar28 = (longlong)iVar20 * 0x20;
        *(undefined4 *)(lVar16 + lVar28) = 0x3b9c73c9;
        *(undefined8 *)(lVar16 + 8 + lVar28) = 0;
        *(undefined4 *)(lVar16 + 0x10 + lVar28) = uVar27;
        *(undefined4 *)(lVar16 + 0x14 + lVar28) = uVar12;
        *(undefined4 *)(lVar16 + 0x18 + lVar28) = 0;
      }
      uVar26 = uVar26 + 1;
    } while ((uint)bVar24 != uVar26);
  }
  uVar27 = local_cc;
  cVar11 = (char)local_b4;
  iVar20 = (uint)bVar24 - (uint)(1 < bVar24 && (char)local_b4 == '\x03');
  uVar19 = local_b4 & 0xff;
  cVar17 = (char)local_bc;
  if (local_d9 == '\0') {
    iVar4 = *(int *)(param_1 + 0x448);
    if (iVar20 == -1) {
      iVar20 = iVar4;
    }
    *(int *)(param_1 + 0x28) = iVar20;
    lVar16 = *(longlong *)(param_1 + 0x440);
    uVar18 = 0;
    uVar12 = 0xffffffff;
    lVar25 = 0x30;
    uVar23 = 0;
    lVar28 = lVar16;
  }
  else {
    uVar26 = *(ulonglong *)(*(longlong *)(param_1 + 0x958) + 0x20f8) & 0x41004000000;
    puVar13 = (undefined4 *)0x0;
    puVar14 = puVar13;
    if (*(char *)(param_2 + 0x37b) != '\0') {
      puVar13 = (undefined4 *)(param_2 + 0x40);
      puVar14 = (undefined4 *)(param_2 + 0x48);
    }
    *(undefined4 *)(param_1 + 0x5c0) = 0x3b9c73c9;
    if (puVar14 == (undefined4 *)0x0 || uVar26 != 0x41004000000) {
      *(undefined8 *)(param_1 + 0x5c8) = 0;
      *(undefined4 *)(param_1 + 0x5d0) = *puVar13;
      if (uVar26 == 0x41004000000) goto LAB_1473ce3eb;
      uVar12 = FUN_1473952d6(puVar13[1],puVar14[4]);
      lVar16 = local_c8;
      param_1 = local_d8;
    }
    else {
      puVar21 = (undefined4 *)0x0;
      if (puVar14[4] != 0) {
        puVar21 = puVar14;
      }
      *(undefined4 **)(param_1 + 0x5c8) = puVar21;
      *(undefined4 *)(param_1 + 0x5d0) = *puVar13;
LAB_1473ce3eb:
      uVar12 = puVar13[1];
      lVar16 = param_2;
    }
    *(undefined4 *)(param_1 + 0x5d4) = uVar12;
    *(undefined4 *)(param_1 + 0x5d8) = 0;
    if ((cVar11 == '\x02') || ((uVar19 | 2) == 3)) {
      puVar14 = (undefined4 *)(param_2 + 0x40);
      if (*(char *)(lVar16 + 0x37b) == '\0') {
        puVar14 = (undefined4 *)0x0;
      }
      uVar12 = *puVar14;
      *(undefined4 *)(param_1 + 0x5b0) = uVar12;
      *(undefined8 *)(param_1 + 0x5b4) = 0x23b9c9308;
      uVar18 = 0x3b9c9308;
      uVar23 = 2;
    }
    else {
      uVar12 = 0xffffffff;
      uVar23 = 0;
      uVar18 = 0;
    }
    iVar4 = *(int *)(param_1 + 0x448);
    if (iVar20 == -1) {
      iVar20 = iVar4;
    }
    *(int *)(param_1 + 0x28) = iVar20;
    lVar16 = *(longlong *)(param_1 + 0x440);
    *(longlong *)(param_1 + 0x30) = lVar16;
    lVar25 = 0x40;
    lVar28 = param_1 + 0x5c0;
  }
  *(longlong *)(param_1 + lVar25) = lVar28;
  bVar24 = (byte)uVar27 ^ 1;
  if ((bVar24 == 0) && (param_1 = local_d8, (uVar19 | 2) != 3)) {
    uVar6 = *(undefined8 *)(local_d8 + 8);
    *(longlong *)(local_d8 + 8) = local_d8 + 0x890;
    *(undefined8 *)(local_d8 + 0x898) = uVar6;
  }
  local_b8 = ~local_b8;
  if (cVar17 != '\0') {
    uVar6 = *(undefined8 *)(local_d8 + 8);
    *(longlong *)(local_d8 + 8) = local_d8 + 0x850;
    *(undefined8 *)(local_d8 + 0x858) = uVar6;
    param_1 = local_d8;
  }
  *(uint *)(param_1 + 0x18) = local_b8;
  if ((uVar19 | 2) == 3) {
    *(undefined4 *)(local_d8 + 0x80) = 1;
    *(longlong *)(local_d8 + 0x88) = lVar16;
    *(undefined4 *)(local_d8 + 0x470) = uVar12;
    *(undefined4 *)(local_d8 + 0x474) = uVar18;
    *(undefined4 *)(local_d8 + 0x478) = uVar23;
    *(longlong *)(local_d8 + 0x78) = local_d8 + 0x460;
    *(undefined4 *)(local_d8 + 0x74) = 1;
    *(longlong *)(local_d8 + 0x98) = local_d8 + 0x5a0;
    if (cVar11 != '\x03' && bVar24 == 0) {
      uVar6 = *(undefined8 *)(local_d8 + 0x60);
      *(longlong *)(local_d8 + 0x60) = local_d8 + 0x890;
      *(undefined8 *)(local_d8 + 0x898) = uVar6;
    }
    if (cVar17 != '\0') {
      uVar6 = *(undefined8 *)(local_d8 + 0x60);
      *(longlong *)(local_d8 + 0x60) = local_d8 + 0x850;
      *(undefined8 *)(local_d8 + 0x858) = uVar6;
    }
    *(uint *)(local_d8 + 0x70) = local_b8;
    *(undefined4 *)(local_d8 + 0x2d0) = 0;
    *(undefined4 *)(local_d8 + 0x2d4) = 1;
    *(undefined4 *)(local_d8 + 0x2d8) = 0x300;
    *(undefined4 *)(local_d8 + 0x2dc) = 0x80;
    *(undefined8 *)(local_d8 + 0x2e0) = 0x1000000400;
    *(undefined4 *)(local_d8 + 0x2e8) = 1;
    local_b0 = 2;
    local_98 = 1;
    param_1 = local_d8;
  }
  else {
    local_b0 = 1;
    local_98 = 0;
  }
  if (cVar11 == '\x02') {
    lVar25 = local_b0 * 0x58;
    lVar28 = param_1 + lVar25;
    *(int *)(param_1 + 0x28 + lVar25) = iVar4;
    *(longlong *)(param_1 + 0x30 + lVar25) = lVar16;
    *(longlong *)(param_1 + 0x40 + lVar25) = param_1 + 0x5a0;
    *(undefined4 *)(param_1 + 0x470) = uVar12;
    *(undefined4 *)(param_1 + 0x474) = uVar18;
    *(undefined4 *)(param_1 + 0x478) = uVar23;
    *(longlong *)(param_1 + 0x20 + lVar25) = param_1 + 0x460;
    *(undefined4 *)(param_1 + 0x1c + lVar25) = 1;
    if (cVar17 != '\0') {
      uVar6 = *(undefined8 *)(lVar28 + 8);
      *(longlong *)(lVar28 + 8) = param_1 + 0x850;
      *(undefined8 *)(param_1 + 0x858) = uVar6;
    }
    *(uint *)(lVar28 + 0x18) = local_b8;
    uVar19 = (uint)local_98;
    uVar26 = (ulonglong)(uVar19 * 0x30);
    puVar2 = (undefined8 *)(param_1 + 0x2d0 + uVar26);
    *puVar2 = 0x100000000;
    puVar2[1] = 0x8000000700;
    *(undefined8 *)(param_1 + 0x2e0 + uVar26) = 0x1000000500;
    *(undefined4 *)(param_1 + 0x2e8 + uVar26) = 1;
    lVar25 = (ulonglong)((int)local_b0 + 1) * 0x58;
    lVar28 = param_1 + lVar25;
    *(undefined4 *)(param_1 + 0x28 + lVar25) = 1;
    *(longlong *)(param_1 + 0x30 + lVar25) = lVar16;
    *(longlong *)(param_1 + 0x40 + lVar25) = param_1 + 0x5a0;
    *(undefined4 *)(param_1 + 0x490) = uVar12;
    *(undefined4 *)(param_1 + 0x494) = uVar18;
    *(undefined4 *)(param_1 + 0x498) = uVar23;
    *(undefined8 *)(param_1 + 0x4b0) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x4b8) = 0;
    if (1 < iVar4) {
      lVar25 = 0;
      do {
        *(undefined4 *)(param_1 + 0x4d0 + lVar25) = *(undefined4 *)(lVar16 + 0x30 + lVar25);
        *(undefined8 *)(param_1 + 0x4d4 + lVar25) = 0x100000005;
        lVar25 = lVar25 + 0x20;
      } while ((ulonglong)(iVar4 + 1U) * 0x20 + -0x40 != lVar25);
    }
    *(longlong *)(lVar28 + 0x20) = param_1 + 0x480;
    *(uint *)(lVar28 + 0x1c) = iVar4 + 1U;
    if (cVar17 != '\0') {
      uVar6 = *(undefined8 *)(lVar28 + 8);
      *(longlong *)(lVar28 + 8) = param_1 + 0x850;
      *(undefined8 *)(param_1 + 0x858) = uVar6;
    }
    local_b0 = (ulonglong)((int)local_b0 + 2);
    *(uint *)(lVar28 + 0x18) = local_b8;
    local_98 = (ulonglong)(uVar19 | 2);
    uVar26 = (ulonglong)((uVar19 + 1) * 0x30);
    puVar14 = (undefined4 *)(param_1 + 0x2d0 + uVar26);
    *puVar14 = 1;
    puVar14[1] = 2;
    puVar14[2] = 0x400;
    puVar14[3] = 0x80;
    *(undefined8 *)(param_1 + 0x2e0 + uVar26) = 0x1000000100;
    *(uint *)(param_1 + 0x2e4 + uVar26) = (uint)(DAT_14ca78760 == 1) << 5 | 0x10;
    *(undefined4 *)(param_1 + 0x2e8 + uVar26) = 1;
    uVar27 = local_cc;
  }
  iVar20 = (int)local_b0;
  if (cVar11 == '\x03') {
    lVar28 = param_1 + local_b0 * 0x58;
    *(undefined4 *)(param_1 + 0x720) = *(undefined4 *)(lVar16 + 0x30);
    *(undefined1 **)(param_1 + 0x724) = &DAT_100000002;
    *(undefined8 *)(param_1 + 0x600) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x608) = 0;
    *(undefined4 *)(param_1 + 0x620) = *(undefined4 *)(lVar16 + 0x10);
    *(undefined8 *)(param_1 + 0x624) = 0x100000005;
    *(longlong *)(param_1 + 0x40 + local_b0 * 0x58) = param_1 + 0x5a0;
    if ((char)uVar27 != '\0') {
      uVar6 = *(undefined8 *)(lVar28 + 8);
      *(longlong *)(lVar28 + 8) = param_1 + 0x890;
      *(undefined8 *)(param_1 + 0x898) = uVar6;
    }
    local_b0 = (ulonglong)(iVar20 + 1);
    *(longlong *)(lVar28 + 0x20) = param_1 + 0x5f0;
    *(undefined4 *)(lVar28 + 0x1c) = 2;
    *(undefined4 *)(lVar28 + 0x28) = 1;
    *(longlong *)(lVar28 + 0x30) = param_1 + 0x710;
    *(uint *)(lVar28 + 0x18) = local_b8;
    iVar20 = (int)local_98;
    local_98 = (ulonglong)(iVar20 + 1);
    uVar26 = (ulonglong)(uint)(iVar20 * 0x30);
    puVar14 = (undefined4 *)(param_1 + 0x2d0 + uVar26);
    *puVar14 = 1;
    puVar14[1] = 2;
    puVar14[2] = 0x400;
    puVar14[3] = 0x80;
    *(undefined8 *)(param_1 + 0x2e0 + uVar26) = 0x1000000100;
    *(undefined4 *)(param_1 + 0x2e8 + uVar26) = 1;
  }
  else {
    if (cVar11 == '\x01') {
      uVar19 = *(uint *)(param_1 + 0x458);
      if (1 < (longlong)(int)uVar19) {
        *(uint *)(param_1 + 0x458) = uVar19 + 1;
        if (*(uint *)(param_1 + 0x45c) <= uVar19) {
          FUN_1473cef04(param_1 + 0x450,uVar19);
          param_1 = local_d8;
        }
        lVar16 = *(longlong *)(param_1 + 0x450);
        lVar28 = (longlong)(int)uVar19 * 0x20;
        *(undefined4 *)(lVar16 + lVar28) = 0x3b9c73c9;
        puVar2 = (undefined8 *)(lVar16 + 8 + lVar28);
        *puVar2 = 0;
        puVar2[1] = 0;
        *(undefined4 *)(lVar16 + 0x18 + lVar28) = 0;
        *(undefined4 *)
         (*(longlong *)(param_1 + 0x450) + 0x10 + (longlong)(*(int *)(param_1 + 0x458) + -1) * 0x20)
             = 0xffffffff;
        puVar2 = *(undefined8 **)(param_1 + 0x450);
        lVar16 = (longlong)(*(int *)(param_1 + 0x458) + -1);
        uVar6 = puVar2[lVar16 * 4];
        uVar7 = (puVar2 + lVar16 * 4)[1];
        local_78 = puVar2[lVar16 * 4 + 2];
        uStack_70 = (puVar2 + lVar16 * 4 + 2)[1];
        uVar8 = *puVar2;
        uVar9 = puVar2[1];
        uVar10 = puVar2[3];
        puVar2[lVar16 * 4 + 2] = puVar2[2];
        (puVar2 + lVar16 * 4 + 2)[1] = uVar10;
        puVar2[lVar16 * 4] = uVar8;
        (puVar2 + lVar16 * 4)[1] = uVar9;
        local_88._0_4_ = (undefined4)uVar6;
        local_88._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
        uStack_80._0_4_ = (undefined4)uVar7;
        uStack_80._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
        puVar2[2] = local_78;
        puVar2[3] = uStack_70;
        *(undefined4 *)puVar2 = (undefined4)local_88;
        *(undefined4 *)((longlong)puVar2 + 4) = local_88._4_4_;
        *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_80;
        *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_80._4_4_;
        if (1 < *(int *)(param_1 + 0x458)) {
          *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x450);
        }
        *(longlong *)(param_1 + 0x38 + (ulonglong)(iVar20 - 1) * 0x58) =
             *(longlong *)(param_1 + 0x450) + (longlong)(*(int *)(param_1 + 0x458) + -1) * 0x20;
        local_88 = uVar6;
        uStack_80 = uVar7;
        goto LAB_1473ce8f3;
      }
    }
    else {
      uVar19 = *(uint *)(param_1 + 0x458);
    }
    if (0 < (int)uVar19) {
      *(undefined8 *)(param_1 + 0x38 + (ulonglong)(iVar20 - 1) * 0x58) =
           *(undefined8 *)(param_1 + 0x450);
    }
  }
LAB_1473ce8f3:
  lVar16 = local_c8;
  if (*(char *)(local_c8 + 0x378) != '\0') {
    plVar15 = (longlong *)(param_1 + 0x5e0);
    local_90 = local_c8 + 0x360;
    puVar14 = (undefined4 *)(local_c8 + 0xb0);
    uVar26 = 0;
    local_a8 = plVar15;
    cVar17 = local_d9;
    do {
      if ((cVar17 == '\0') || (uVar26 != *(uint *)(param_1 + 0x5d0))) {
        uVar27 = *puVar14;
        uVar12 = puVar14[1];
        uVar18 = puVar14[2];
        uVar23 = puVar14[3];
        uVar5 = puVar14[4];
        uVar22 = puVar14[5];
        local_cc = puVar14[6];
        local_b4 = puVar14[7];
        local_bc = puVar14[8];
        iVar20 = *(int *)(param_1 + 0x5e8);
        *(uint *)(param_1 + 0x5e8) = iVar20 + 1U;
        if (*(uint *)(param_1 + 0x5ec) < iVar20 + 1U) {
          local_9c = uVar22;
          FUN_1473cef8a(plVar15,iVar20);
          plVar15 = local_a8;
          lVar16 = local_c8;
          param_1 = local_d8;
          uVar22 = local_9c;
          cVar17 = local_d9;
        }
        lVar28 = *plVar15;
        lVar25 = (longlong)iVar20 * 0x38;
        *(undefined4 *)(lVar28 + lVar25) = 0x3b9c73c8;
        *(undefined8 *)(lVar28 + 8 + lVar25) = 0;
        *(undefined4 *)(lVar28 + 0x10 + lVar25) = uVar27;
        *(undefined4 *)(lVar28 + 0x14 + lVar25) = uVar12;
        *(undefined4 *)(lVar28 + 0x18 + lVar25) = uVar18;
        *(undefined4 *)(lVar28 + 0x1c + lVar25) = uVar23;
        *(undefined4 *)(lVar28 + 0x20 + lVar25) = uVar5;
        *(undefined4 *)(lVar28 + 0x24 + lVar25) = uVar22;
        *(undefined4 *)(lVar28 + 0x28 + lVar25) = local_cc;
        *(uint *)(lVar28 + 0x2c + lVar25) = local_b4;
        *(undefined4 *)(lVar28 + 0x30 + lVar25) = local_bc;
      }
      else {
        lVar28 = local_90;
        if (*(char *)(lVar16 + 0x37b) == '\0') {
          lVar28 = 0;
        }
        FUN_1473cee5e(&local_88,puVar14,lVar28,
                      (~*(ulonglong *)(*(longlong *)(param_1 + 0x958) + 0x20f8) & 0x41004000000) ==
                      0);
        iVar20 = *(int *)(local_d8 + 0x5e8);
        *(uint *)(local_d8 + 0x5e8) = iVar20 + 1U;
        if (*(uint *)(local_d8 + 0x5ec) < iVar20 + 1U) {
          FUN_1473cef8a(local_a8,iVar20);
        }
        lVar16 = *local_a8;
        lVar28 = (longlong)iVar20 * 0x38;
        *(undefined8 *)(lVar16 + 0x30 + lVar28) = local_58;
        puVar2 = (undefined8 *)(lVar16 + 0x20 + lVar28);
        *puVar2 = local_68;
        puVar2[1] = uStack_60;
        puVar2 = (undefined8 *)(lVar16 + 0x10 + lVar28);
        *puVar2 = local_78;
        puVar2[1] = uStack_70;
        puVar13 = (undefined4 *)(lVar16 + lVar28);
        *puVar13 = (undefined4)local_88;
        puVar13[1] = local_88._4_4_;
        puVar13[2] = (undefined4)uStack_80;
        puVar13[3] = uStack_80._4_4_;
        plVar15 = local_a8;
        lVar16 = local_c8;
        param_1 = local_d8;
        cVar17 = local_d9;
      }
      uVar26 = uVar26 + 1;
      puVar14 = puVar14 + 9;
    } while (uVar26 < *(byte *)(lVar16 + 0x378));
  }
  *(undefined4 *)(param_1 + 0x91c) = *(undefined4 *)(param_1 + 0x5e8);
  *(undefined8 *)(param_1 + 0x920) = *(undefined8 *)(param_1 + 0x5e0);
  *(int *)(param_1 + 0x928) = (int)local_b0;
  *(longlong *)(param_1 + 0x930) = param_1;
  *(int *)(param_1 + 0x938) = (int)local_98;
  *(longlong *)(param_1 + 0x940) = param_1 + 0x2c0;
  *(uint *)(param_1 + 0x960) = local_b8;
  *(uint *)(param_1 + 0x964) = local_b8;
  *(uint *)(param_1 + 0x968) = local_b8;
  if (*(char *)(lVar16 + 0x382) != '\0') {
    if ((*(byte *)(*(longlong *)(param_1 + 0x958) + 0x20fb) & 4) == 0) {
      *(int *)(param_1 + 0x8d8) = (int)local_b0;
      *(longlong *)(param_1 + 0x8e0) = param_1 + 0x960;
      *(undefined4 *)(param_1 + 0x8e8) = 0;
      *(undefined8 *)(param_1 + 0x8f0) = 0;
      *(undefined4 *)(param_1 + 0x8f8) = 1;
      *(longlong *)(param_1 + 0x900) = param_1 + 0x968;
      *(undefined8 *)(param_1 + 0x8d0) = *(undefined8 *)(param_1 + 0x910);
      *(longlong *)(param_1 + 0x910) = param_1 + 0x8c8;
    }
    else {
      *(undefined4 *)(param_1 + 0x948) = 1;
      *(longlong *)(param_1 + 0x950) = param_1 + 0x968;
    }
  }
  if (((*(byte *)(*(longlong *)(param_1 + 0x958) + 0x20f8) & 0x10) != 0) &&
     (*(char *)(lVar16 + 0x37e) != '\0')) {
    *(undefined8 *)(param_1 + 0x8c0) = *(undefined8 *)(lVar16 + 0x60);
    *(undefined8 *)(param_1 + 0x8b8) = *(undefined8 *)(param_1 + 0x910);
    *(longlong *)(param_1 + 0x910) = param_1 + 0x8b0;
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473cee5e FUN_1473cee5e body=165 status=ok
// SIG undefined FUN_1473cee5e(void)

undefined4 * FUN_1473cee5e(undefined4 *param_1,undefined4 *param_2,longlong param_3,char param_4)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (param_4 == '\0') {
    *param_1 = 0x3b9c73c8;
    lVar3 = 0;
  }
  else {
    iVar1 = param_2[1];
    *param_1 = 0x3b9c73c8;
    lVar3 = 0;
    if (((param_3 != 0) && (iVar1 - 0x7fU < 4)) && (lVar3 = 0, *(int *)(param_3 + 0x14) != 0)) {
      lVar3 = param_3;
    }
  }
  *(longlong *)(param_1 + 2) = lVar3;
  param_1[4] = *param_2;
  param_1[5] = param_2[1];
  param_1[6] = param_2[2];
  param_1[7] = param_2[3];
  param_1[8] = param_2[4];
  param_1[9] = param_2[5];
  param_1[10] = param_2[6];
  if (param_4 == '\0') {
    uVar2 = FUN_1473952d6(param_2[7],*(undefined4 *)(param_3 + 0x10));
    param_1[0xb] = uVar2;
    uVar2 = FUN_1473952d6(param_2[8],*(undefined4 *)(param_3 + 0x14));
  }
  else {
    param_1[0xb] = param_2[7];
    uVar2 = param_2[8];
  }
  param_1[0xc] = uVar2;
  return param_1;
}



// FUNCTION 1473cef04 FUN_1473cef04 body=132 status=ok
// SIG undefined FUN_1473cef04(void)

void FUN_1473cef04(longlong param_1,int param_2)

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



// FUNCTION 1473cef8a FUN_1473cef8a body=143 status=ok
// SIG undefined FUN_1473cef8a(void)

void FUN_1473cef8a(longlong param_1,int param_2)

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



// FUNCTION 1473cf01a FUN_1473cf01a body=2565 status=ok
// SIG undefined FUN_1473cf01a(void)

void FUN_1473cf01a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  longlong *plVar13;
  undefined4 uVar14;
  int iVar15;
  longlong lVar16;
  undefined4 uVar17;
  char cVar18;
  longlong lVar19;
  char cVar20;
  ulonglong uVar21;
  uint uVar22;
  bool bVar23;
  bool bVar24;
  undefined1 auStack_e8 [39];
  char local_c1;
  longlong local_c0;
  uint local_b4;
  longlong local_b0;
  uint local_a4;
  longlong *local_a0;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  ulonglong local_88;
  ulonglong local_80;
  longlong local_78;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined8 local_5c;
  undefined8 uStack_54;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_a4 = -1 << (*(byte *)(param_2 + 0x382) & 0x1f);
  if (((*(char *)(param_2 + 0x37e) != '\0' & DAT_14ca84f34) == 1) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x558) + 0x20f8) & 0x40) != 0)) {
    bVar23 = *(int *)(*(longlong *)(param_1 + 0x558) + 0x24c0) == 1;
  }
  else {
    bVar23 = false;
  }
  if ((DAT_14ca8507f == '\x01') &&
     ((*(byte *)(*(longlong *)(param_1 + 0x558) + 0x20fc) & 0x80) != 0)) {
    bVar24 = *(char *)(param_2 + 0x37d) != '\0';
  }
  else {
    bVar24 = false;
  }
  uVar3 = *(undefined1 *)(param_2 + 0x381);
  local_c1 = *(char *)(param_2 + 0x37b);
  if (bVar23) {
    puVar11 = (undefined4 *)(param_2 + 0x60);
    if (*(char *)(param_2 + 0x37e) == '\0') {
      puVar11 = (undefined4 *)0x0;
    }
    *(undefined4 *)(param_1 + 0x440) = 0x3b9c73c9;
    *(undefined8 *)(param_1 + 0x448) = 0;
    *(undefined4 *)(param_1 + 0x450) = *puVar11;
    *(undefined4 *)(param_1 + 0x454) = puVar11[1];
    *(undefined4 *)(param_1 + 0x458) = 1;
    *(longlong *)(param_1 + 0x470) = param_1 + 0x440;
  }
  local_b4 = CONCAT31(local_b4._1_3_,uVar3);
  if (bVar24) {
    puVar11 = (undefined4 *)(param_2 + 0xa8);
    if (*(char *)(param_2 + 0x37d) == '\0') {
      puVar11 = (undefined4 *)0x0;
    }
    *(undefined4 *)(param_1 + 0x480) = 0x3b9c73c9;
    *(undefined8 *)(param_1 + 0x488) = 0;
    *(undefined4 *)(param_1 + 0x490) = *puVar11;
    *(undefined4 *)(param_1 + 0x494) = puVar11[1];
    *(undefined4 *)(param_1 + 0x498) = 0;
    *(undefined1 **)(param_1 + 0x4b0) = &DAT_100000001;
    *(longlong *)(param_1 + 0x4b8) = param_1 + 0x480;
  }
  bVar4 = *(byte *)(param_2 + 0x379);
  local_c0 = param_2;
  local_b0 = param_1;
  cVar18 = local_c1;
  if (bVar4 != 0) {
    plVar13 = (longlong *)(param_1 + 800);
    plVar1 = (longlong *)(param_1 + 0x330);
    uVar21 = 0;
    do {
      lVar19 = 0;
      if (*(char *)(param_2 + 0x379) != '\0') {
        lVar19 = param_2;
      }
      uVar8 = *(undefined8 *)(lVar19 + uVar21 * 8);
      iVar15 = *(int *)(param_1 + 0x328);
      *(uint *)(param_1 + 0x328) = iVar15 + 1U;
      if (*(uint *)(param_1 + 0x32c) < iVar15 + 1U) {
        FUN_1473cfaa4(plVar13,iVar15);
        param_2 = local_c0;
        param_1 = local_b0;
        cVar18 = local_c1;
      }
      *(undefined8 *)(*plVar13 + (longlong)iVar15 * 8) = uVar8;
      if (*(char *)(param_2 + 0x37c) != '\0') {
        uVar8 = *(undefined8 *)(param_2 + 0x68 + uVar21 * 8);
        iVar15 = *(int *)(param_1 + 0x338);
        *(uint *)(param_1 + 0x338) = iVar15 + 1U;
        if (*(uint *)(param_1 + 0x33c) < iVar15 + 1U) {
          FUN_1473cfaa4(plVar1,iVar15);
          param_2 = local_c0;
          param_1 = local_b0;
          cVar18 = local_c1;
        }
        *(undefined8 *)(*plVar1 + (longlong)iVar15 * 8) = uVar8;
      }
      uVar21 = uVar21 + 1;
    } while ((uint)bVar4 != uVar21);
  }
  cVar20 = (char)local_b4;
  iVar15 = (uint)bVar4 - (uint)(1 < bVar4 && (char)local_b4 == '\x03');
  uVar22 = local_b4 & 0xff;
  if (cVar18 == '\0') {
    iVar12 = *(int *)(param_1 + 0x328);
    if (iVar15 == -1) {
      iVar15 = iVar12;
    }
    *(int *)(param_1 + 0x18) = iVar15;
    puVar10 = *(undefined4 **)(param_1 + 800);
    uVar14 = 0;
    uVar9 = 0xffffffff;
    lVar19 = 0x20;
    puVar11 = puVar10;
  }
  else {
    uVar14 = 0;
    bVar23 = *(char *)(param_2 + 0x37b) != '\0';
    puVar11 = (undefined4 *)0x0;
    if (bVar23) {
      puVar11 = (undefined4 *)(param_2 + 0x40);
    }
    *(undefined4 *)(param_1 + 0x398) = *puVar11;
    uVar9 = *(undefined4 *)(param_2 + 0x58);
    if (!bVar23) {
      uVar9 = 0;
    }
    uVar9 = FUN_1473952d6(puVar11[1],uVar9);
    *(undefined4 *)(local_b0 + 0x39c) = uVar9;
    if ((cVar20 == '\x02') || ((uVar22 | 2) == 3)) {
      puVar11 = (undefined4 *)(param_2 + 0x40);
      if (*(char *)(local_c0 + 0x37b) == '\0') {
        puVar11 = (undefined4 *)0x0;
      }
      uVar9 = *puVar11;
      *(undefined4 *)(local_b0 + 0x390) = uVar9;
      *(undefined4 *)(local_b0 + 0x394) = 0x3b9c9308;
      uVar14 = 0x3b9c9308;
    }
    else {
      uVar9 = 0xffffffff;
    }
    puVar11 = (undefined4 *)(local_b0 + 0x398);
    iVar12 = *(int *)(local_b0 + 0x328);
    if (iVar15 == -1) {
      iVar15 = iVar12;
    }
    *(int *)(local_b0 + 0x18) = iVar15;
    puVar10 = *(undefined4 **)(local_b0 + 800);
    *(undefined4 **)(local_b0 + 0x20) = puVar10;
    lVar19 = 0x30;
    param_2 = local_c0;
    param_1 = local_b0;
  }
  *(undefined4 **)(param_1 + lVar19) = puVar11;
  bVar23 = (uVar22 | 2) != 3;
  if (bVar23) {
    local_80 = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x60) = 1;
    *(undefined4 **)(param_1 + 0x68) = puVar10;
    *(undefined4 *)(param_1 + 0x340) = uVar9;
    *(undefined4 *)(param_1 + 0x344) = uVar14;
    *(longlong *)(param_1 + 0x58) = param_1 + 0x340;
    *(undefined4 *)(param_1 + 0x50) = 1;
    *(longlong *)(param_1 + 0x78) = param_1 + 0x390;
    *(undefined4 *)(param_1 + 0x240) = 0;
    *(undefined4 *)(param_1 + 0x244) = 1;
    *(undefined4 *)(param_1 + 0x248) = 0x300;
    *(undefined4 *)(param_1 + 0x24c) = 0x80;
    *(undefined8 *)(param_1 + 0x250) = 0x1000000400;
    *(undefined4 *)(param_1 + 600) = 1;
    local_80 = 2;
  }
  local_88 = (ulonglong)!bVar23;
  if (cVar20 == '\x02') {
    *(int *)(param_1 + 0x18 + local_80 * 0x48) = iVar12;
    *(undefined4 **)(param_1 + 0x20 + local_80 * 0x48) = puVar10;
    *(longlong *)(param_1 + 0x30 + local_80 * 0x48) = param_1 + 0x390;
    *(undefined4 *)(param_1 + 0x340) = uVar9;
    *(undefined4 *)(param_1 + 0x344) = uVar14;
    *(longlong *)(param_1 + 0x10 + local_80 * 0x48) = param_1 + 0x340;
    *(undefined4 *)(param_1 + 8 + local_80 * 0x48) = 1;
    *(undefined8 *)(param_1 + 0x240) = 0x100000000;
    *(undefined8 *)(param_1 + 0x248) = 0x8000000700;
    *(undefined8 *)(param_1 + 0x250) = 0x1000000500;
    *(undefined4 *)(param_1 + 600) = 1;
    lVar19 = param_1 + (ulonglong)((int)local_80 + 1) * 0x48;
    *(undefined4 *)(lVar19 + 0x18) = 1;
    *(undefined4 **)(lVar19 + 0x20) = puVar10;
    *(longlong *)(lVar19 + 0x30) = param_1 + 0x390;
    *(undefined4 *)(param_1 + 0x348) = uVar9;
    *(undefined4 *)(param_1 + 0x34c) = uVar14;
    *(undefined8 *)(param_1 + 0x350) = 0xffffffff;
    if (1 < iVar12) {
      lVar16 = 0;
      do {
        *(undefined4 *)(param_1 + 0x358 + lVar16 * 8) = puVar10[lVar16 * 2 + 2];
        *(undefined4 *)(param_1 + 0x35c + lVar16 * 8) = 5;
        lVar16 = lVar16 + 1;
      } while ((ulonglong)(iVar12 + 1U) - 2 != lVar16);
    }
    local_80 = (ulonglong)((int)local_80 + 2);
    *(longlong *)(lVar19 + 0x10) = param_1 + 0x348;
    *(uint *)(lVar19 + 8) = iVar12 + 1U;
    local_88 = 2;
    *(undefined4 *)(param_1 + 0x25c) = 1;
    *(undefined4 *)(param_1 + 0x260) = 2;
    *(undefined4 *)(param_1 + 0x264) = 0x400;
    *(undefined4 *)(param_1 + 0x268) = 0x80;
    *(undefined8 *)(param_1 + 0x26c) = 0x1000000100;
    *(uint *)(param_1 + 0x270) = (uint)(DAT_14ca78760 == 1) << 5 | 0x10;
    *(undefined4 *)(param_1 + 0x274) = 1;
    param_2 = local_c0;
    cVar20 = (char)local_b4;
  }
  iVar15 = (int)local_80;
  if (cVar20 == '\x03') {
    *(undefined4 *)(param_1 + 0x3f8) = puVar10[2];
    *(undefined4 *)(param_1 + 0x3fc) = 2;
    *(undefined8 *)(param_1 + 0x3b0) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x3b8) = *puVar10;
    *(undefined4 *)(param_1 + 0x3bc) = 5;
    *(longlong *)(param_1 + 0x30 + local_80 * 0x48) = param_1 + 0x390;
    *(longlong *)(param_1 + 0x10 + local_80 * 0x48) = param_1 + 0x3b0;
    *(undefined4 *)(param_1 + 8 + local_80 * 0x48) = 2;
    *(undefined4 *)(param_1 + 0x18 + local_80 * 0x48) = 1;
    *(longlong *)(param_1 + 0x20 + local_80 * 0x48) = param_1 + 0x3f8;
    lVar19 = local_88 * 0x1c;
    puVar11 = (undefined4 *)(param_1 + 0x240 + lVar19);
    *puVar11 = 1;
    puVar11[1] = 2;
    puVar11[2] = 0x400;
    puVar11[3] = 0x80;
    *(undefined8 *)(param_1 + 0x250 + lVar19) = 0x1000000100;
    *(undefined4 *)(param_1 + 600 + lVar19) = 1;
    param_2 = local_c0;
    local_88 = (ulonglong)((int)local_88 + 1);
    local_80 = (ulonglong)(iVar15 + 1);
    goto LAB_1473cf542;
  }
  if (cVar20 == '\x01') {
    uVar22 = *(uint *)(param_1 + 0x338);
    if ((longlong)(int)uVar22 < 2) goto LAB_1473cf914;
    *(uint *)(param_1 + 0x338) = uVar22 + 1;
    if (*(uint *)(param_1 + 0x33c) <= uVar22) {
      FUN_1473cfaa4(param_1 + 0x330,uVar22);
      param_2 = local_c0;
      param_1 = local_b0;
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x330) + (longlong)(int)uVar22 * 8) = 0;
    *(undefined4 *)(*(longlong *)(param_1 + 0x330) + (longlong)(*(int *)(param_1 + 0x338) + -1) * 8)
         = 0xffffffff;
    puVar2 = *(undefined8 **)(param_1 + 0x330);
    iVar12 = *(int *)(param_1 + 0x338) + -1;
    uVar8 = puVar2[iVar12];
    puVar2[iVar12] = *puVar2;
    *puVar2 = uVar8;
    if (1 < *(int *)(param_1 + 0x338)) {
      *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x330);
    }
    lVar19 = *(longlong *)(param_1 + 0x330) + (longlong)(*(int *)(param_1 + 0x338) + -1) * 8;
  }
  else {
    uVar22 = *(uint *)(param_1 + 0x338);
LAB_1473cf914:
    if ((int)uVar22 < 1) goto LAB_1473cf542;
    lVar19 = *(longlong *)(param_1 + 0x330);
  }
  *(longlong *)(param_1 + 0x28 + (ulonglong)(iVar15 - 1) * 0x48) = lVar19;
LAB_1473cf542:
  local_a4 = ~local_a4;
  if (*(char *)(param_2 + 0x378) != '\0') {
    plVar13 = (longlong *)(param_1 + 0x3a0);
    local_78 = param_2 + 0x360;
    puVar11 = (undefined4 *)(param_2 + 0xb0);
    uVar21 = 0;
    local_a0 = plVar13;
    cVar18 = local_c1;
    do {
      if ((cVar18 == '\0') || (uVar21 != *(uint *)(param_1 + 0x398))) {
        uVar14 = *puVar11;
        uVar9 = puVar11[1];
        uVar5 = puVar11[2];
        uVar6 = puVar11[3];
        uVar7 = puVar11[4];
        uVar17 = puVar11[5];
        local_b4 = puVar11[6];
        local_8c = puVar11[7];
        local_90 = puVar11[8];
        iVar15 = *(int *)(param_1 + 0x3a8);
        lVar19 = (longlong)iVar15;
        *(uint *)(param_1 + 0x3a8) = iVar15 + 1U;
        if (*(uint *)(param_1 + 0x3ac) < iVar15 + 1U) {
          local_94 = uVar17;
          FUN_1473cfb2a(plVar13,iVar15);
          plVar13 = local_a0;
          param_2 = local_c0;
          param_1 = local_b0;
          uVar17 = local_94;
          cVar18 = local_c1;
        }
        lVar16 = *plVar13;
        *(undefined4 *)(lVar16 + lVar19 * 0x24) = uVar14;
        *(undefined4 *)(lVar16 + 4 + lVar19 * 0x24) = uVar9;
        *(undefined4 *)(lVar16 + 8 + lVar19 * 0x24) = uVar5;
        *(undefined4 *)(lVar16 + 0xc + lVar19 * 0x24) = uVar6;
        *(undefined4 *)(lVar16 + 0x10 + lVar19 * 0x24) = uVar7;
        *(undefined4 *)(lVar16 + 0x14 + lVar19 * 0x24) = uVar17;
        *(uint *)(lVar16 + 0x18 + lVar19 * 0x24) = local_b4;
        *(undefined4 *)(lVar16 + 0x1c + lVar19 * 0x24) = local_8c;
        *(undefined4 *)(lVar16 + 0x20 + lVar19 * 0x24) = local_90;
      }
      else {
        lVar19 = local_78;
        if (*(char *)(param_2 + 0x37b) == '\0') {
          lVar19 = 0;
        }
        FUN_1473cfa20(&local_6c,puVar11,lVar19);
        iVar15 = *(int *)(local_b0 + 0x3a8);
        lVar19 = (longlong)iVar15;
        *(uint *)(local_b0 + 0x3a8) = iVar15 + 1U;
        if (*(uint *)(local_b0 + 0x3ac) < iVar15 + 1U) {
          FUN_1473cfb2a(local_a0,iVar15);
        }
        lVar16 = *local_a0;
        *(undefined4 *)(lVar16 + 0x20 + lVar19 * 0x24) = local_4c;
        puVar2 = (undefined8 *)(lVar16 + 0x10 + lVar19 * 0x24);
        *puVar2 = local_5c;
        puVar2[1] = uStack_54;
        puVar10 = (undefined4 *)(lVar16 + lVar19 * 0x24);
        *puVar10 = local_6c;
        puVar10[1] = uStack_68;
        puVar10[2] = uStack_64;
        puVar10[3] = uStack_60;
        plVar13 = local_a0;
        param_2 = local_c0;
        param_1 = local_b0;
        cVar18 = local_c1;
      }
      uVar21 = uVar21 + 1;
      puVar11 = puVar11 + 9;
    } while (uVar21 < *(byte *)(param_2 + 0x378));
  }
  *(undefined4 *)(param_1 + 0x52c) = *(undefined4 *)(param_1 + 0x3a8);
  *(undefined8 *)(param_1 + 0x530) = *(undefined8 *)(param_1 + 0x3a0);
  *(int *)(param_1 + 0x538) = (int)local_80;
  *(longlong *)(param_1 + 0x540) = param_1;
  *(int *)(param_1 + 0x548) = (int)local_88;
  *(longlong *)(param_1 + 0x550) = param_1 + 0x240;
  *(uint *)(param_1 + 0x560) = local_a4;
  *(uint *)(param_1 + 0x564) = local_a4;
  *(uint *)(param_1 + 0x568) = local_a4;
  if ((*(char *)(param_2 + 0x382) != '\0') &&
     ((*(byte *)(*(longlong *)(param_1 + 0x558) + 0x20fb) & 4) == 0)) {
    *(int *)(param_1 + 0x4e8) = (int)local_80;
    *(longlong *)(param_1 + 0x4f0) = param_1 + 0x560;
    *(undefined4 *)(param_1 + 0x4f8) = 0;
    *(undefined8 *)(param_1 + 0x500) = 0;
    *(undefined4 *)(param_1 + 0x508) = 1;
    *(longlong *)(param_1 + 0x510) = param_1 + 0x568;
    *(undefined8 *)(param_1 + 0x4e0) = *(undefined8 *)(param_1 + 0x520);
    *(longlong *)(param_1 + 0x520) = param_1 + 0x4d8;
  }
  if (((*(byte *)(*(longlong *)(param_1 + 0x558) + 0x20f8) & 0x10) != 0) &&
     (*(char *)(param_2 + 0x37e) != '\0')) {
    *(undefined8 *)(param_1 + 0x4d0) = *(undefined8 *)(param_2 + 0x60);
    *(undefined8 *)(param_1 + 0x4c8) = *(undefined8 *)(param_1 + 0x520);
    *(longlong *)(param_1 + 0x520) = param_1 + 0x4c0;
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1473cfa20 FUN_1473cfa20 body=131 status=ok
// SIG undefined FUN_1473cfa20(void)

undefined4 * FUN_1473cfa20(undefined4 *param_1,undefined4 *param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  if ((param_3 == 0) || (3 < param_2[1] - 0x7f)) {
    uVar1 = 0;
    uVar2 = FUN_1473952d6(param_2[7],0);
    param_1[7] = uVar2;
  }
  else {
    uVar1 = FUN_1473952d6(param_2[7],*(undefined4 *)(param_3 + 0x10));
    param_1[7] = uVar1;
    uVar1 = *(undefined4 *)(param_3 + 0x14);
  }
  uVar1 = FUN_1473952d6(param_2[8],uVar1);
  param_1[8] = uVar1;
  return param_1;
}



// FUNCTION 1473cfaa4 FUN_1473cfaa4 body=132 status=ok
// SIG undefined FUN_1473cfaa4(void)

void FUN_1473cfaa4(longlong param_1,int param_2)

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



// FUNCTION 1473cfb2a FUN_1473cfb2a body=147 status=ok
// SIG undefined FUN_1473cfb2a(void)

void FUN_1473cfb2a(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x24,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x24)) {
      uVar5 = uVar4 / 0x24 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x24,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1473cfbbe FUN_1473cfbbe body=68 status=ok
// SIG undefined FUN_1473cfbbe(void)

void FUN_1473cfbbe(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_1473cfc02();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_144727cd0(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1473cfc02 FUN_1473cfc02 body=322 status=ok
// SIG undefined FUN_1473cfc02(void)

void FUN_1473cfc02(longlong *param_1)

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



// FUNCTION 1473cfd46 FUN_1473cfd46 body=68 status=ok
// SIG undefined FUN_1473cfd46(void)

void FUN_1473cfd46(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_1473cfd8a();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_144727cd0(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1473cfd8a FUN_1473cfd8a body=322 status=ok
// SIG undefined FUN_1473cfd8a(void)

void FUN_1473cfd8a(longlong *param_1)

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



// FUNCTION 1473cfece FUN_1473cfece body=287 status=ok
// SIG undefined FUN_1473cfece(void)

undefined4 * FUN_1473cfece(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
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
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1473cffee(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *local_40 = uVar5;
  *(undefined8 *)(local_40 + 2) = *puVar1;
  local_40[4] = 0xffffffff;
  local_4c = local_48[0];
  cVar3 = FUN_1473d00d4(param_1,uVar5,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_40[5] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[4] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1473d020a(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473cffee FUN_1473cffee body=230 status=ok
// SIG undefined FUN_1473cffee(void)

int * FUN_1473cffee(longlong *param_1,int *param_2)

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



// FUNCTION 1473d00d4 FUN_1473d00d4 body=128 status=ok
// SIG undefined FUN_1473d00d4(void)

undefined8 FUN_1473d00d4(longlong *param_1,uint param_2,int *param_3,int *param_4)

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
        piVar1 = (int *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*piVar1 == *param_3) {
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_1473d0154(iVar2,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = piVar1[4];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 1473d0154 FUN_1473d0154 body=114 status=ok
// SIG undefined FUN_1473d0154(void)

void FUN_1473d0154(longlong *param_1,int param_2)

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



// FUNCTION 1473d01c6 FUN_1473d01c6 body=68 status=ok
// SIG undefined FUN_1473d01c6(void)

void FUN_1473d01c6(longlong param_1,uint param_2)

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
  FUN_1473d020a(param_1);
  return;
}



// FUNCTION 1473d020a FUN_1473d020a body=419 status=ok
// SIG undefined FUN_1473d020a(void)

void FUN_1473d020a(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar6 * 0x18);
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



// FUNCTION 1473d03ae FUN_1473d03ae body=132 status=ok
// SIG undefined FUN_1473d03ae(void)

void FUN_1473d03ae(longlong param_1,int param_2)

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



// FUNCTION 1473d0434 FUN_1473d0434 body=87 status=ok
// SIG undefined FUN_1473d0434(void)

void FUN_1473d0434(longlong *param_1,int param_2)

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
  FUN_1473d0154();
  return;
}



// FUNCTION 1473d048c FUN_1473d048c body=34 status=ok
// SIG undefined FUN_1473d048c(void)

void FUN_1473d048c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14a3698c0;
  return;
}



// FUNCTION 1473d04ae FUN_1473d04ae body=31 status=ok
// SIG undefined FUN_1473d04ae(void)

undefined8 FUN_1473d04ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473d04ea FUN_1473d04ea body=93 status=ok
// SIG undefined FUN_1473d04ea(void)

void FUN_1473d04ea(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a369850;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1473d0548 FUN_1473d0548 body=126 status=ok
// SIG undefined FUN_1473d0548(void)

void FUN_1473d0548(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a369850;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001473d05b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1473d05d2 FUN_1473d05d2 body=21 status=ok
// SIG undefined FUN_1473d05d2(void)

undefined8 FUN_1473d05d2(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1473d05e8 FUN_1473d05e8 body=29 status=ok
// SIG undefined FUN_1473d05e8(void)

undefined8 FUN_1473d05e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473d0606 FUN_1473d0606 body=67 status=ok
// SIG undefined FUN_1473d0606(void)

void FUN_1473d0606(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_1473a948a(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_1473d078e(param_1);
    return;
  }
  FUN_1473d064a(param_1);
  FUN_1473a948a(param_1,0);
  return;
}



// FUNCTION 1473d064a FUN_1473d064a body=322 status=ok
// SIG undefined FUN_1473d064a(void)

void FUN_1473d064a(longlong *param_1)

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



// FUNCTION 1473d078e FUN_1473d078e body=419 status=ok
// SIG undefined FUN_1473d078e(void)

void FUN_1473d078e(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar6 * 0x18);
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



// FUNCTION 1473d0932 FUN_1473d0932 body=52 status=ok
// SIG undefined FUN_1473d0932(void)

void FUN_1473d0932(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      puVar1 = *(undefined8 **)(param_1 + lVar2 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 1473d0966 FUN_1473d0966 body=62 status=ok
// SIG undefined FUN_1473d0966(void)

void FUN_1473d0966(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1473d09a4(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x104,4);
  }
  return;
}



// FUNCTION 1473d09a4 FUN_1473d09a4 body=118 status=ok
// SIG undefined FUN_1473d09a4(void)

ulonglong FUN_1473d09a4(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x104) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1473d09e1;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x104,4);
      param_2 = param_2 / 0x104;
    }
  }
LAB_1473d09e1:
  return param_2 & 0xffffffff;
}



// FUNCTION 1473d0a1a FUN_1473d0a1a body=285 status=ok
// SIG undefined FUN_1473d0a1a(void)

undefined4 * FUN_1473d0a1a(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  uint *puVar1;
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
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1473c23e4(param_1,local_48);
  puVar1 = (uint *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *local_40 = uVar5;
  local_40[1] = *puVar1;
  local_40[2] = 0xffffffff;
  local_4c = local_48[0];
  cVar3 = FUN_1473c24ca(param_1,uVar5,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_40[3] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[2] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1473c25bc(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473d0b38 FUN_1473d0b38 body=19 status=ok
// SIG undefined FUN_1473d0b38(void)

void FUN_1473d0b38(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 1473d0b4c FUN_1473d0b4c body=147 status=ok
// SIG undefined FUN_1473d0b4c(void)

void FUN_1473d0b4c(longlong param_1,int param_2)

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



// FUNCTION 1473d0be0 FUN_1473d0be0 body=98 status=ok
// SIG undefined FUN_1473d0be0(void)

void FUN_1473d0be0(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x18 + *param_1);
  FUN_1473c1c7b(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 0x18),(longlong)iVar2 * 0x18);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1473d0c42 FUN_1473d0c42 body=338 status=ok
// SIG undefined FUN_1473d0c42(void)

void FUN_1473d0c42(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  void *_Dst;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  uint uVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  int iVar17;
  
  iVar2 = *(int *)((longlong)param_1 + 0x34);
  if ((longlong)iVar2 != 0) {
    uVar3 = *(uint *)(param_1 + 1);
    iVar8 = uVar3 - iVar2;
    iVar7 = iVar8;
    if ((int)param_1[6] != -1) {
      lVar5 = *param_1;
      iVar9 = (int)param_1[6];
      uVar11 = uVar3;
      do {
        iVar4 = *(int *)(lVar5 + 4 + (longlong)iVar9 * 0x10);
        if (iVar9 < iVar8) {
          puVar15 = (undefined8 *)((longlong)iVar9 * 0x10 + lVar5);
          plVar16 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar16 = param_1 + 2;
          }
          puVar13 = (undefined8 *)((longlong)(int)(uVar11 - 1) * 0x10 + lVar5 + 0x10);
          uVar10 = uVar11;
          do {
            puVar12 = puVar13;
            uVar11 = uVar10 - 1;
            uVar14 = uVar10 + 0x1e;
            if (-1 < (int)uVar11) {
              uVar14 = uVar11;
            }
            puVar13 = puVar12 + -2;
            uVar10 = uVar11;
          } while ((*(uint *)((longlong)plVar16 + (longlong)((int)uVar14 >> 5) * 4) >>
                    (uVar11 & 0x1f) & 1) == 0);
          uVar6 = puVar12[-1];
          *puVar15 = *puVar13;
          puVar15[1] = uVar6;
          plVar16 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar16 = param_1 + 2;
          }
          iVar17 = iVar9 + 0x1f;
          if (-1 < iVar9) {
            iVar17 = iVar9;
          }
          puVar1 = (uint *)((longlong)plVar16 + (longlong)(iVar17 >> 5) * 4);
          *puVar1 = *puVar1 | 1 << ((byte)iVar9 & 0x1f);
        }
        iVar9 = iVar4;
      } while (iVar4 != -1);
      iVar9 = (int)param_1[1] - uVar3;
      if (iVar9 != 0) {
        _Dst = (void *)((longlong)iVar8 * 0x10 + *param_1);
        memmove(_Dst,(void *)((longlong)iVar2 * 0x10 + (longlong)_Dst),(longlong)iVar9 << 4);
        iVar7 = (int)param_1[1] - iVar2;
      }
    }
    *(int *)(param_1 + 1) = iVar7;
    FUN_144a6134a(param_1 + 2,iVar8,iVar2);
    param_1[6] = 0xffffffff;
    if (*(int *)((longlong)param_1 + 0xc) != (int)param_1[1]) {
      FUN_14472eb64(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1473d0d94 FUN_1473d0d94 body=95 status=ok
// SIG undefined FUN_1473d0d94(void)

void FUN_1473d0d94(longlong param_1,uint param_2)

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



// FUNCTION 1473d0df4 FUN_1473d0df4 body=132 status=ok
// SIG undefined FUN_1473d0df4(void)

void FUN_1473d0df4(longlong param_1,int param_2)

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



// FUNCTION 1473d0e7a FUN_1473d0e7a body=111 status=ok
// SIG undefined FUN_1473d0e7a(void)

int FUN_1473d0e7a(longlong *param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar1 = *param_1;
      do {
        cVar2 = FUN_1473cabb4(lVar1 + (longlong)iVar4 * 0x30,param_3);
        if (cVar2 != '\0') {
          return iVar4;
        }
        iVar4 = *(int *)(lVar1 + 0x28 + (longlong)iVar4 * 0x30);
      } while (iVar4 != -1);
    }
  }
  return -1;
}



// FUNCTION 1473d0eea FUN_1473d0eea body=283 status=ok
// SIG undefined FUN_1473d0eea(void)

undefined4 * FUN_1473d0eea(longlong param_1,undefined4 *param_2,undefined8 param_3)

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
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1473d1006(param_1,local_48);
  FUN_1473d1174(param_3,local_40);
  *(undefined4 *)(local_40 + 0x28) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = *(uint *)(local_40 + 0x10);
  cVar2 = FUN_1473d10f4(param_1,uVar4,local_40,&local_4c);
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
      *(uint *)(local_40 + 0x2c) = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x28) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1473d125e(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473d1006 FUN_1473d1006 body=238 status=ok
// SIG undefined FUN_1473d1006(void)

int * FUN_1473d1006(longlong *param_1,int *param_2)

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



// FUNCTION 1473d10f4 FUN_1473d10f4 body=127 status=ok
// SIG undefined FUN_1473d10f4(void)

undefined8 FUN_1473d10f4(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

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
     (iVar10 = FUN_1473d0e7a(), iVar10 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar10 * 0x30);
    if (*(longlong *)(*param_1 + (longlong)iVar10 * 0x30) != 0) {
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
    FUN_1473d11e4(param_1,*param_4);
    *param_4 = iVar10;
    return 1;
  }
  return 0;
}



// FUNCTION 1473d1174 FUN_1473d1174 body=111 status=ok
// SIG undefined FUN_1473d1174(void)

undefined8 * FUN_1473d1174(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *_Src;
  undefined8 uVar4;
  
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
    FUN_1473c1d94(param_2,iVar1);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 0x18);
  }
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(puVar2 + 2);
  uVar4 = puVar3[1];
  param_2[3] = *puVar3;
  param_2[4] = uVar4;
  return param_2;
}



// FUNCTION 1473d11e4 FUN_1473d11e4 body=122 status=ok
// SIG undefined FUN_1473d11e4(void)

void FUN_1473d11e4(longlong *param_1,int param_2)

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



// FUNCTION 1473d125e FUN_1473d125e body=424 status=ok
// SIG undefined FUN_1473d125e(void)

void FUN_1473d125e(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x30;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + 0x10 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x2c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x28 + lVar7) =
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



// FUNCTION 1473d1407 FUN_1473d1407 body=68 status=ok
// SIG undefined FUN_1473d1407(void)

char FUN_1473d1407(longlong param_1,longlong param_2,int param_3)

{
  char cVar1;
  
  if (param_3 == 0) {
    cVar1 = '\x01';
  }
  else {
    do {
      param_3 = param_3 + -1;
      cVar1 = FUN_1473d144c(param_1,param_2);
      if (cVar1 == '\0') {
        return '\0';
      }
      param_1 = param_1 + 8;
      param_2 = param_2 + 8;
    } while (param_3 != 0);
  }
  return cVar1;
}



// FUNCTION 1473d144c FUN_1473d144c body=56 status=ok
// SIG undefined FUN_1473d144c(void)

undefined2 FUN_1473d144c(char *param_1,char *param_2)

{
  undefined2 uVar1;
  
  if ((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
     ((param_1[3] == param_2[3] && (*(short *)(param_1 + 4) == *(short *)(param_2 + 4))))) {
    uVar1 = CONCAT11((char)((ushort)*(short *)(param_1 + 6) >> 8),
                     *(short *)(param_1 + 6) == *(short *)(param_2 + 6));
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 1473d1484 FUN_1473d1484 body=84 status=ok
// SIG undefined FUN_1473d1484(void)

void FUN_1473d1484(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  *param_1 = &PTR_FUN_14a360698;
  lVar3 = param_1[0x21];
  LOCK();
  puVar1 = (uint *)(lVar3 + 0x30);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 - 1;
  UNLOCK();
  if ((uVar2 & 0x3fffffff) == 1) {
    FUN_144a54812(lVar3 + 0x28);
  }
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  FUN_1473c280c(param_1);
  return;
}



// FUNCTION 1473d14d8 FUN_1473d14d8 body=97 status=ok
// SIG undefined FUN_1473d14d8(void)

void FUN_1473d14d8(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  *param_1 = &PTR_FUN_14a3606a0;
  LOCK();
  puVar1 = (uint *)(param_1[0x2d] + 8);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 - 1;
  UNLOCK();
  if ((uVar2 & 0x3fffffff) == 1) {
    FUN_144a54812();
  }
  lVar3 = 0x130;
  do {
    if (*(longlong *)((longlong)param_1 + lVar3) != 0) {
      FUN_1400020a8();
    }
    lVar3 = lVar3 + -0x10;
  } while (lVar3 != 0xe0);
  FUN_1473c280c(param_1);
  return;
}



// FUNCTION 1473d153a FUN_1473d153a body=339 status=ok
// SIG undefined FUN_1473d153a(void)

void FUN_1473d153a(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14a362070;
  if (DAT_14ca84e01 == '\x01') {
    FUN_1473d9d2e(param_1[0xae]);
    lVar3 = param_1[0xae];
    if (lVar3 != 0) {
      FUN_1473d9c44(lVar3);
      FUN_1400020a8(lVar3);
    }
    param_1[0xae] = 0;
  }
  lVar3 = param_1[0x2a];
  if (lVar3 != 0) {
    FUN_1473998a2(lVar3);
    FUN_1400020a8(lVar3);
  }
  param_1[0x2a] = 0;
  puVar4 = (undefined8 *)param_1[0x27];
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  lVar3 = param_1[0x2e];
  if (lVar3 != 0) {
    FUN_1473b03a0(lVar3);
    FUN_1400020a8(lVar3);
  }
  lVar3 = param_1[0x2f];
  if (lVar3 != 0) {
    FUN_1473afb00(lVar3);
    FUN_1400020a8(lVar3);
  }
  if (param_1[0xaf] != 0) {
    FUN_1400020a8();
  }
  FUN_1473da3d0(param_1 + 0x93);
  FUN_1447a1747(param_1[0x28],*(undefined4 *)(param_1 + 0x29));
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_14a1e4500;
  if (param_1[0x1f] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x1f] + 8);
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



// FUNCTION 1473d168e FUN_1473d168e body=99 status=ok
// SIG undefined FUN_1473d168e(void)

void FUN_1473d168e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = 0;
  do {
    FUN_1473de260(param_1 + 0x60 + lVar1);
    lVar1 = lVar1 + 0x50;
  } while (lVar1 != 0x3c0);
  param_1 = param_1 + 0x3d0;
  lVar1 = -0x3c0;
  do {
    *(undefined4 *)(param_1 + 0x48) = 0;
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1473ddb62(param_1);
    param_1 = param_1 + -0x50;
    lVar1 = lVar1 + 0x50;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 1473d16f2 FUN_1473d16f2 body=256 status=ok
// SIG undefined FUN_1473d16f2(void)

void FUN_1473d16f2(longlong param_1,longlong param_2,longlong param_3)

{
  PSRWLOCK SRWLock;
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar6 = 0;
  do {
    lVar1 = *(longlong *)(param_2 + lVar6 * 8);
    if (lVar1 != 0) {
      lVar2 = (&DAT_14a36beb0)[(int)lVar6];
      SRWLock = (PSRWLOCK)(param_1 + lVar2 * 8);
      AcquireSRWLockShared(SRWLock);
      lVar2 = lVar2 * 0x50;
      if (*(int *)(param_1 + 0x68 + lVar2) != *(int *)(param_1 + 0x94 + lVar2)) {
        plVar3 = (longlong *)(lVar2 + param_1 + 0x60);
        plVar5 = plVar3 + 7;
        if ((longlong *)plVar3[8] != (longlong *)0x0) {
          plVar5 = (longlong *)plVar3[8];
        }
        iVar4 = *(int *)((longlong)plVar5 +
                        (ulonglong)
                        ((int)plVar3[9] - 1U & (int)((ulonglong)lVar1 >> 0x20) * 0x17 + (int)lVar1)
                        * 4);
        if (iVar4 != -1) {
          do {
            plVar5 = (longlong *)(*plVar3 + (longlong)iVar4 * 0x18);
            if (*plVar5 == lVar1) {
              if (plVar5 + 1 != (longlong *)0x0 && plVar5 != (longlong *)0x0) {
                *(longlong *)(param_3 + lVar6 * 8) = plVar5[1];
              }
              break;
            }
            iVar4 = (int)plVar5[2];
          } while (iVar4 != -1);
        }
      }
      ReleaseSRWLockShared(SRWLock);
    }
    lVar6 = lVar6 + 1;
    if (lVar6 == 5) {
      return;
    }
  } while( true );
}



// FUNCTION 1473d17f2 FUN_1473d17f2 body=533 status=ok
// SIG undefined FUN_1473d17f2(void)

longlong * FUN_1473d17f2(longlong *param_1,ulonglong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  int local_6c;
  ulonglong local_68;
  undefined8 uStack_60;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_50,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_50);
    }
  }
  else {
    local_50 = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  iVar7 = local_50;
  if (DAT_14ca78938 == 0) {
    if (local_50 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(local_50);
    }
    if (*(int *)((longlong)param_2 + 0xc) < local_50) {
      FUN_144893a1c(param_2,local_50);
    }
    FUN_140393c76(param_2,local_50,1);
    (**(code **)(*param_1 + 0x170))(param_1,*param_2,local_50);
  }
  else {
    FUN_1401a700c(&local_68,0x105);
    iVar7 = FUN_1410fe39e(local_68 & 0xffffffff,iVar7,0,0);
    if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar7);
    }
    if (*(int *)((longlong)param_2 + 0xc) < iVar7) {
      FUN_144893a1c(param_2,iVar7);
    }
    FUN_140393c76(param_2,iVar7,1);
    local_68 = 0;
    uStack_60 = 0;
    FUN_140393c76(&local_68,local_50,1);
    (**(code **)(*param_1 + 0x170))(param_1,local_68,local_50);
    uVar4 = local_68;
    uVar5 = (undefined4)uStack_60;
    uVar3 = *param_2;
    local_6c = iVar7;
    FUN_1401a700c(&local_4c,0x105);
    local_88 = uVar5;
    local_78 = 0;
    local_80 = 0x20;
    cVar6 = FUN_1427731c2(local_4c,uVar3,&local_6c,uVar4);
    if (cVar6 == '\0') {
      if (&local_68 != param_2) {
        if (*param_2 != 0) {
          FUN_1400020a8();
        }
        *param_2 = local_68;
        local_68 = 0;
        *(undefined4 *)(param_2 + 1) = (undefined4)uStack_60;
        *(undefined4 *)((longlong)param_2 + 0xc) = uStack_60._4_4_;
        uStack_60 = 0;
      }
    }
    else {
      *(int *)(param_2 + 2) = local_50;
      FUN_140393c76(param_2,local_6c,1);
    }
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1473d1a0a FUN_1473d1a0a body=318 status=ok
// SIG undefined FUN_1473d1a0a(void)

undefined8 * FUN_1473d1a0a(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar5 = *(uint *)(param_2 + 2);
  if (uVar5 == 0xffffffff) {
    iVar4 = *(int *)(param_2 + 1);
    *param_1 = *param_2;
    *(int *)(param_1 + 1) = iVar4 >> 2;
    param_1[2] = 0;
    param_1[3] = 0;
    if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  }
  local_58 = 0;
  uStack_50 = 0;
  uVar6 = *(uint *)(param_2 + 1);
  uVar2 = uVar5;
  if ((int)uVar5 < 0) {
    uVar2 = uVar6;
  }
  iVar4 = (int)uVar2 >> 2;
  if (-1 < iVar4) {
    if (3 < uVar2) {
      FUN_14480809c(&local_58,iVar4);
      uVar6 = *(uint *)(param_2 + 1);
      uVar5 = *(uint *)(param_2 + 2);
    }
    if (-1 < (int)uVar5) {
      uVar6 = uVar5;
    }
    FUN_14017c08a(&local_58,(int)uVar6 >> 2,1);
    uVar3 = local_58;
    local_78 = (longlong)*(int *)(param_2 + 1);
    uVar1 = *param_2;
    iVar4 = *(int *)(param_2 + 1);
    if (-1 < *(int *)(param_2 + 2)) {
      iVar4 = *(int *)(param_2 + 2);
    }
    FUN_1401a700c(&local_44,0x105);
    local_68 = 0;
    local_70 = 0;
    FUN_140aa9920(local_44,uVar3,(longlong)iVar4,uVar1);
    param_1[2] = local_58;
    *(undefined4 *)(param_1 + 3) = (undefined4)uStack_50;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_50._4_4_;
    *param_1 = local_58;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_50;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_98);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar4);
}



// FUNCTION 1473d1b4a FUN_1473d1b4a body=178 status=ok
// SIG undefined FUN_1473d1b4a(void)

void FUN_1473d1b4a(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
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
  *(undefined4 *)((longlong)param_1 + 0x5f) = *(undefined4 *)((longlong)param_2 + 0x5f);
  uVar1 = param_2[6];
  uVar2 = param_2[7];
  uVar3 = param_2[8];
  uVar4 = param_2[9];
  uVar5 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar5;
  param_1[8] = uVar3;
  param_1[9] = uVar4;
  param_1[6] = uVar1;
  param_1[7] = uVar2;
  param_1[0xd] = 0;
  param_1[0xd] = param_2[0xd];
  param_2[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  *(undefined4 *)((longlong)param_1 + 0x74) = *(undefined4 *)((longlong)param_2 + 0x74);
  param_2[0xe] = 0;
  return;
}



// FUNCTION 1473d1bfc FUN_1473d1bfc body=1102 status=ok
// SIG undefined FUN_1473d1bfc(void)

longlong * FUN_1473d1bfc(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint uVar3;
  void *_Src;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined1 *puVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  uint *_Src_00;
  undefined1 auStack_a8 [36];
  uint local_84;
  ulonglong local_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined1 local_68 [16];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar3 = *(uint *)(param_2 + 1);
  if (uVar3 < 5) {
    uVar5 = *(undefined4 *)((longlong)param_2 + 4);
    lVar14 = param_2[1];
    uVar6 = *(undefined4 *)((longlong)param_2 + 0xc);
    *(int *)param_1 = (int)*param_2;
    *(undefined4 *)((longlong)param_1 + 4) = uVar5;
    *(int *)(param_1 + 1) = (int)lVar14;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar6;
    param_1[2] = 0;
    iVar13 = (int)param_2[3];
    _Src = (void *)param_2[2];
    *(int *)(param_1 + 3) = iVar13;
    if ((longlong)iVar13 != 0) {
      FUN_1447bda9e(param_1 + 2,iVar13,0);
      memcpy((void *)param_1[2],_Src,(longlong)iVar13 << 2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_a8);
    }
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    puVar4 = (undefined4 *)*param_2;
    iVar13 = uVar3 + 2;
    local_78 = 0;
    uStack_70 = 0;
    if (iVar13 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar13);
    }
    if (iVar13 == 0) {
      iVar9 = 0;
      iVar13 = 0;
    }
    else {
      FUN_14480809c(&local_78);
      iVar13 = (uint)uStack_70;
      iVar9 = uStack_70._4_4_;
    }
    uStack_70 = CONCAT44(uStack_70._4_4_,iVar13 + 5);
    if ((uint)(iVar9 - iVar13) < 5) {
      FUN_1447808da(&local_78,iVar13);
    }
    *(undefined4 *)(local_78 + 0x10 + (longlong)iVar13 * 4) = puVar4[4];
    uVar5 = puVar4[1];
    uVar6 = puVar4[2];
    uVar7 = puVar4[3];
    puVar1 = (undefined4 *)(local_78 + (longlong)iVar13 * 4);
    *puVar1 = *puVar4;
    puVar1[1] = uVar5;
    puVar1[2] = uVar6;
    puVar1[3] = uVar7;
    local_58 = (undefined1 *)0x0;
    local_50 = 0x400000000;
    lVar14 = local_78;
    if (uVar3 != 5) {
      local_80 = 0;
      uVar17 = 5;
      local_84 = 0;
      do {
        uVar15 = local_50;
        _Src_00 = puVar4 + (int)uVar17;
        uVar10 = *_Src_00;
        uVar16 = uVar10 >> 0x10;
        uVar12 = uVar10 & 0xffff;
        iVar13 = (int)local_50;
        if (uVar12 < 0x2b) {
          if (uVar12 == 0x15) {
            if (_Src_00[3] == 1) {
              local_80 = (ulonglong)_Src_00[1];
            }
          }
          else if ((uVar12 == 0x19) && (_Src_00[3] == 6)) {
            _Src_00[6] = 1;
            uVar12 = (int)local_50 + 1;
            local_50 = CONCAT44(local_50._4_4_,uVar12);
            if (local_50._4_4_ < uVar12) {
              FUN_1447de67e(local_68,uVar15 & 0xffffffff);
            }
            puVar11 = local_58;
            if (local_58 == (undefined1 *)0x0) {
              puVar11 = local_68;
            }
            uVar12 = _Src_00[1];
LAB_1473d1de3:
            *(uint *)(puVar11 + (longlong)iVar13 * 4) = uVar12;
          }
        }
        else if (uVar12 == 0x2b) {
          if ((_Src_00[1] == (uint)local_80) && (_Src_00[3] == 0)) {
            local_84 = _Src_00[2];
          }
        }
        else if (uVar12 == 0x3d) {
          puVar11 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar11 = local_68;
          }
          if ((longlong)(int)local_50 != 0) {
            lVar14 = 0;
            do {
              if (*(uint *)(puVar11 + lVar14) == _Src_00[1]) {
                uVar12 = (int)local_50 + 1;
                local_50 = CONCAT44(local_50._4_4_,uVar12);
                if (local_50._4_4_ < uVar12) {
                  FUN_1447de67e(local_68);
                }
                puVar11 = local_58;
                if (local_58 == (undefined1 *)0x0) {
                  puVar11 = local_68;
                }
                uVar12 = _Src_00[2];
                goto LAB_1473d1de3;
              }
              lVar14 = lVar14 + 4;
            } while ((longlong)(int)local_50 * 4 - lVar14 != 0);
          }
        }
        else if (uVar12 == 0x62) {
          puVar11 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar11 = local_68;
          }
          if ((int)local_50 != 0) {
            lVar14 = 0;
            do {
              if (*(uint *)(puVar11 + lVar14) == _Src_00[3]) {
                lVar14 = (longlong)(int)(uint)uStack_70;
                uVar10 = (uint)uStack_70 + 1;
                if (uStack_70._4_4_ < uVar10) {
                  uVar15 = uStack_70 & 0xffffffff;
                  uStack_70._0_4_ = uVar10;
                  FUN_1447808da(&local_78,uVar15);
                  uVar10 = (uint)uStack_70;
                }
                uStack_70._0_4_ = uVar10;
                uVar10 = (uint)uStack_70;
                *(undefined4 *)(local_78 + lVar14 * 4) = 0x70062;
                lVar14 = (longlong)(int)(uint)uStack_70;
                iVar13 = (uint)uStack_70 + 4;
                uVar12 = uStack_70._4_4_ - (uint)uStack_70;
                uStack_70._0_4_ = iVar13;
                if (uVar12 < 4) {
                  FUN_1447808da(&local_78,uVar10);
                }
                iVar13 = (uint)uStack_70;
                uVar10 = _Src_00[2];
                uVar12 = _Src_00[3];
                uVar8 = _Src_00[4];
                puVar2 = (uint *)(local_78 + lVar14 * 4);
                *puVar2 = _Src_00[1];
                puVar2[1] = uVar10;
                puVar2[2] = uVar12;
                puVar2[3] = uVar8;
                lVar14 = (longlong)(int)(uint)uStack_70;
                uStack_70._0_4_ = (uint)uStack_70 + 1;
                if (uStack_70._4_4_ < (uint)uStack_70) {
                  FUN_1447808da(&local_78,iVar13);
                }
                uVar10 = (uint)uStack_70;
                *(undefined4 *)(local_78 + lVar14 * 4) = 0x40;
                lVar14 = (longlong)(int)(uint)uStack_70;
                uStack_70._0_4_ = (uint)uStack_70 + 1;
                if (uStack_70._4_4_ < (uint)uStack_70) {
                  FUN_1447808da(&local_78,uVar10);
                }
                *(uint *)(local_78 + lVar14 * 4) = local_84;
                goto LAB_1473d1e31;
              }
              lVar14 = lVar14 + 4;
            } while ((longlong)(int)local_50 * 4 != lVar14);
          }
        }
        uVar15 = uStack_70;
        iVar13 = (uint)uStack_70;
        lVar14 = (longlong)(int)(uint)uStack_70;
        uStack_70 = CONCAT44(uStack_70._4_4_,(uint)uStack_70 + uVar16);
        if (uStack_70._4_4_ - iVar13 < uVar16) {
          FUN_1447808da(&local_78,uVar15 & 0xffffffff);
        }
        if (0xffff < uVar10) {
          memcpy((void *)(lVar14 * 4 + local_78),_Src_00,(ulonglong)(uVar16 * 4));
        }
LAB_1473d1e31:
        uVar17 = uVar16 + uVar17;
        lVar14 = local_78;
      } while (uVar17 < uVar3);
    }
    param_1[2] = lVar14;
    local_78 = 0;
    uVar5 = (uint)uStack_70;
    *(uint *)(param_1 + 3) = (uint)uStack_70;
    *(uint *)((longlong)param_1 + 0x1c) = uStack_70._4_4_;
    uStack_70 = 0;
    *param_1 = lVar14;
    *(undefined4 *)(param_1 + 1) = uVar5;
    if ((local_58 != (undefined1 *)0x0) && (FUN_1400020a8(), local_78 != 0)) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473d2052 FUN_1473d2052 body=18 status=ok
// SIG undefined FUN_1473d2052(void)

bool FUN_1473d2052(longlong param_1,longlong param_2)

{
  if (1 < *(ushort *)(param_2 + 4)) {
    return *(int *)(param_1 + 0x50) != 0;
  }
  return false;
}



// FUNCTION 1473d2064 FUN_1473d2064 body=185 status=ok
// SIG undefined FUN_1473d2064(void)

undefined8 FUN_1473d2064(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_88 [40];
  undefined1 local_60 [16];
  longlong local_50;
  undefined1 *local_40;
  undefined8 local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca793b8);
  FUN_1473d211e(param_1,local_60,param_3);
  FUN_1431b43a7(param_2,*(undefined8 *)(param_1 + 0x100),local_60);
  local_40 = &stack0x00000028;
  local_38 = param_2;
  FUN_1473de6d4(param_1 + 0x90,local_2c);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca793b8);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473d211e FUN_1473d211e body=175 status=ok
// SIG undefined FUN_1473d211e(void)

undefined4 * FUN_1473d211e(longlong param_1,undefined4 *param_2,longlong param_3)

{
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1473d1a0a(param_2,param_1 + 0xe8);
  if ((1 < *(ushort *)(param_3 + 4)) && (*(int *)(param_1 + 0x50) != 0)) {
    FUN_1473d1bfc(&local_40,param_2);
    *param_2 = local_40;
    param_2[1] = uStack_3c;
    param_2[2] = uStack_38;
    param_2[3] = uStack_34;
    if (&local_40 == param_2) {
      if (local_30 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_2 + 4) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_2 + 4) = local_30;
      param_2[6] = local_28;
      param_2[7] = local_24;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473d21ce FUN_1473d21ce body=353 status=ok
// SIG undefined FUN_1473d21ce(void)

longlong * FUN_1473d21ce(longlong param_1,longlong *param_2,uint param_3)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  uint *local_30;
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  do {
    while (uVar4 = param_3, uVar4 != 1) {
      if ((uVar4 != 2) || (param_3 = 0, *(char *)(param_1 + 0x12a) != '\x01')) goto LAB_1473d2212;
    }
    param_3 = 0;
  } while (*(char *)(param_1 + 0x129) == '\x01');
LAB_1473d2212:
  local_24 = uVar4;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca793b8);
  if (*(int *)(param_1 + 0x148) != *(int *)(param_1 + 0x174)) {
    lVar2 = param_1 + 0x178;
    if (*(longlong *)(param_1 + 0x180) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x180);
    }
    uVar3 = *(uint *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x188) - 1U & uVar4) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x140) + (longlong)(int)uVar3 * 0x18);
        if (*puVar1 == uVar4) {
          if (puVar1 + 2 != (uint *)0x0 && puVar1 != (uint *)0x0) {
            lVar2 = *(longlong *)(puVar1 + 2);
            *param_2 = lVar2;
            if (lVar2 != 0) {
              LOCK();
              *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
              UNLOCK();
            }
            goto LAB_1473d22db;
          }
          break;
        }
        uVar3 = puVar1[4];
      } while (uVar3 != 0xffffffff);
    }
  }
  local_30 = &local_24;
  local_38 = param_1;
  if (uVar4 == 1) {
    if (*(char *)(param_1 + 0x129) != '\x02') {
LAB_1473d22b5:
      local_40 = 0;
      goto LAB_1473d22d8;
    }
    param_1 = param_1 + 0x1b8;
  }
  else if (uVar4 == 2) {
    if (*(char *)(param_1 + 0x12a) != '\x02') goto LAB_1473d22b5;
    param_1 = param_1 + 0x1d0;
  }
  else {
    param_1 = param_1 + 0x198;
  }
  FUN_1431b44aa(&local_38,&local_40,param_1);
LAB_1473d22d8:
  *param_2 = local_40;
LAB_1473d22db:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca793b8);
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1473d2330 FUN_1473d2330 body=183 status=ok
// SIG undefined FUN_1473d2330(void)

undefined8 FUN_1473d2330(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_88 [32];
  undefined1 local_68 [16];
  longlong local_58;
  undefined4 local_44;
  undefined4 *local_40;
  undefined8 local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_44 = param_4;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca793b8);
  FUN_1473d1a0a(local_68,param_1 + 0xe8);
  FUN_1431b43a7(param_2,*(undefined8 *)(param_1 + 0x100),local_68);
  local_40 = &local_44;
  local_38 = param_2;
  FUN_1473de6d4(param_1 + 0x90,local_2c);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca793b8);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473d23e8 FUN_1473d23e8 body=219 status=ok
// SIG undefined FUN_1473d23e8(void)

void FUN_1473d23e8(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  PSRWLOCK SRWLock;
  
  *param_1 = &PTR_LAB_14a369f50;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca793b8);
  FUN_1473deb9a(param_1 + 0x12,0);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca793b8);
  uVar1 = param_1[2];
  lVar2 = param_1[0x20];
  SRWLock = (PSRWLOCK)(lVar2 + (ulonglong)*(byte *)(param_1 + 0x1c) * 8 + 0x6b8);
  AcquireSRWLockExclusive(SRWLock);
  FUN_1473de5a4(lVar2 + (ulonglong)((uint)*(byte *)(param_1 + 0x1c) * 0x50) + 0x718,uVar1);
  ReleaseSRWLockExclusive(SRWLock);
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1b) = 0;
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  FUN_1473ddbf0(param_1 + 0x12);
  FUN_1473d24fe(param_1 + 3);
  return;
}



// FUNCTION 1473d24c4 FUN_1473d24c4 body=58 status=ok
// SIG undefined FUN_1473d24c4(void)

void FUN_1473d24c4(longlong param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca793b8);
  FUN_1473deb9a(param_1 + 0x90,0);
                    /* WARNING: Could not recover jumptable at 0x0001473d24f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca793b8);
  return;
}



// FUNCTION 1473d24fe FUN_1473d24fe body=75 status=ok
// SIG undefined FUN_1473d24fe(void)

void FUN_1473d24fe(longlong *param_1)

{
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
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



// FUNCTION 1473d254a FUN_1473d254a body=97 status=ok
// SIG undefined FUN_1473d254a(void)

longlong * FUN_1473d254a(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  lVar1 = FUN_1473d25ac(*(longlong *)(param_1 + 0x48) + 0x6b8,&local_28,
                        *(longlong *)(param_1 + 0x48));
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473d25ac FUN_1473d25ac body=1034 status=ok
// SIG undefined FUN_1473d25ac(void)

undefined8 * FUN_1473d25ac(PSRWLOCK param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  byte bVar5;
  int iVar6;
  PSRWLOCK pRVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_278 [32];
  longlong *local_258;
  longlong local_250;
  undefined8 *local_248;
  undefined8 *local_240;
  PSRWLOCK local_238;
  undefined8 *local_230;
  longlong local_228 [2];
  undefined4 local_218;
  undefined4 local_210 [2];
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined **local_1a8 [18];
  undefined8 local_118;
  PSRWLOCK local_110;
  undefined8 *local_108;
  undefined8 local_100;
  longlong local_f8;
  longlong *local_f0;
  undefined8 **local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined8 uStack_a4;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined7 uStack_80;
  undefined4 uStack_79;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_278;
  iVar6 = (int)param_2[1];
  iVar2 = (*(code *)PTR_FUN_14c75b148)(*param_2,iVar6,0);
  lVar13 = CONCAT44(iVar2,iVar6);
  local_f8 = lVar13;
  puVar3 = (undefined8 *)FUN_1473b6016(param_1);
  if (puVar3 == (undefined8 *)0x0) {
    local_238 = (PSRWLOCK)*param_2;
    local_240 = (undefined8 *)(longlong)(int)param_2[1];
    memset(local_1a8,0,0x90);
    FUN_144869430(local_1a8);
    local_118 = 0;
    local_1a8[0] = &PTR_FUN_149e1ddc0;
    local_110 = local_238;
    local_108 = local_240;
    local_100 = 0x7fffffffffffffff;
    FUN_140996f94(local_1a8,1);
    (*(code *)local_1a8[0][0x1e])(local_1a8,1);
    uStack_a8 = 0;
    uStack_a4 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    local_ac = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    uStack_79 = 0;
    local_70 = 0;
    uStack_68 = 0;
    FUN_1473ded4b(local_1a8);
    local_210[0] = 0;
    local_208 = 0;
    uStack_200 = 0;
    local_1f8 = 0;
    uStack_1f0 = 0;
    local_1e8 = 0;
    uStack_1e0 = 0;
    local_1d8 = 0;
    uStack_1d0 = 0;
    local_1c8 = 0;
    uStack_1c0 = 0;
    local_1b8 = 0;
    uStack_1b0 = 0;
    FUN_1402ee999(local_1a8);
    local_228[0] = 0;
    local_228[1] = 0;
    local_218 = 0xffffffff;
    FUN_1473d17f2(local_1a8);
    AcquireSRWLockExclusive(param_1);
    if (*(int *)&param_1[0xd].Ptr != *(int *)((longlong)&param_1[0x12].Ptr + 4)) {
      pRVar7 = param_1 + 0x13;
      if (param_1[0x14].Ptr != (PSRWLOCK)0x0) {
        pRVar7 = param_1[0x14].Ptr;
      }
      iVar6 = *(int *)((longlong)&pRVar7->Ptr +
                      (ulonglong)(*(int *)&param_1[0x15].Ptr - 1U & iVar2 * 0x17 + iVar6) * 4);
      if (iVar6 != -1) {
        do {
          plVar1 = (longlong *)((longlong)param_1[0xc].Ptr + (longlong)iVar6 * 0x18);
          if (*plVar1 == lVar13) {
            if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
              lVar13 = plVar1[1];
              puVar3 = (undefined8 *)(lVar13 + -0xa0);
              if (lVar13 == 0) {
                puVar3 = (undefined8 *)0x0;
              }
              goto LAB_1473d292c;
            }
            break;
          }
          iVar6 = (int)plVar1[2];
        } while (iVar6 != -1);
      }
    }
    local_238 = param_1 + 0xc;
    puVar3 = (undefined8 *)FUN_14001cc68(0x1a8);
    lVar11 = 0;
    *(undefined4 *)(puVar3 + 1) = 0;
    *(undefined1 *)((longlong)puVar3 + 0xc) = 6;
    *(byte *)((longlong)puVar3 + 0xd) = *(byte *)((longlong)puVar3 + 0xd) | 3;
    local_240 = puVar3 + 2;
    *(undefined4 *)(puVar3 + 2) = 0;
    memset(puVar3 + 3,0,0x85);
    *(byte *)((longlong)puVar3 + 0x9d) = *(byte *)((longlong)puVar3 + 0x9d) & 0xfc;
    *(undefined2 *)((longlong)puVar3 + 0x9e) = 0;
    *puVar3 = &PTR_FUN_14a36bab0;
    puVar8 = puVar3 + 0x14;
    puVar3[0x14] = &PTR_LAB_14a36bac0;
    local_248 = puVar3 + 0xf;
    local_258 = local_228;
    local_250 = lVar13;
    FUN_1431b4220(puVar8,param_3,0,&local_d8);
    *puVar3 = &PTR_FUN_14a36bab0;
    puVar3[0x14] = &PTR_LAB_14a36bac0;
    FUN_1473df926(local_240,local_210);
    if (puVar3 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)0x0;
    }
    local_e8 = &local_230;
    local_f0 = &local_f8;
    local_230 = puVar8;
    FUN_1473dfae6(local_238);
    lVar13 = *param_2 + (longlong)(int)param_2[1];
    if (3 < (ulonglong)(longlong)(int)param_2[1]) {
      lVar11 = (longlong)*(int *)(lVar13 + -4);
    }
    lVar11 = -lVar11;
    do {
      lVar12 = lVar11;
      if (-5 < lVar12) goto LAB_1473d292c;
      uVar9 = (ulonglong)*(uint *)(lVar13 + 1 + lVar12);
      bVar14 = *(char *)(lVar13 + lVar12) != 'p';
      uVar10 = uVar9;
      if (!bVar14 && uVar9 == 5) {
        uVar10 = 0;
      }
      lVar11 = uVar10 + 5 + lVar12;
    } while (bVar14 || uVar9 != 5);
    pbVar4 = (byte *)(lVar13 + lVar12 + 5);
    if (pbVar4 != (byte *)0x0) {
      bVar5 = *(byte *)((longlong)puVar3 + 0x9d);
      if (*(char *)((longlong)puVar3 + 0x9c) == '\x05') {
        bVar5 = bVar5 & 0xfe | *pbVar4 >> 4 & 1;
        *(byte *)((longlong)puVar3 + 0x9d) = bVar5;
      }
      *(byte *)((longlong)puVar3 + 0x9d) = bVar5 & 0xfd | *pbVar4 >> 4 & 2;
      *(bool *)((longlong)puVar3 + 0x181) = (*pbVar4 & 6) != 0;
    }
LAB_1473d292c:
    ReleaseSRWLockExclusive(param_1);
    if (local_228[0] != 0) {
      FUN_1400020a8();
    }
    FUN_14178cab0(local_210);
    FUN_1473d24fe(&local_d8);
    FUN_144a7fc42(local_1a8);
  }
  if ((local_60 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar3;
}



// FUNCTION 1473d29b8 FUN_1473d29b8 body=97 status=ok
// SIG undefined FUN_1473d29b8(void)

longlong * FUN_1473d29b8(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  lVar1 = FUN_1473d2a1a(*(longlong *)(param_1 + 0x48) + 0x6b8,&local_28,
                        *(longlong *)(param_1 + 0x48));
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473d2a1a FUN_1473d2a1a body=1058 status=ok
// SIG undefined FUN_1473d2a1a(void)

undefined8 * FUN_1473d2a1a(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  PSRWLOCK SRWLock;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_288 [32];
  longlong *local_268;
  longlong local_260;
  undefined8 *local_258;
  longlong *local_248;
  PSRWLOCK local_240;
  undefined8 *local_238;
  undefined8 *local_230;
  longlong local_228 [2];
  undefined4 local_218;
  undefined4 local_210 [2];
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined **local_1a8 [18];
  undefined8 local_118;
  PSRWLOCK local_110;
  longlong *local_108;
  undefined8 local_100;
  longlong local_f8;
  longlong *local_f0;
  undefined8 **local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined8 uStack_a4;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined7 uStack_80;
  undefined4 uStack_79;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_288;
  iVar6 = (int)param_2[1];
  iVar2 = (*(code *)PTR_FUN_14c75b148)(*param_2,iVar6,0);
  lVar12 = CONCAT44(iVar2,iVar6);
  local_f8 = lVar12;
  puVar3 = (undefined8 *)FUN_1473b60d8(param_1);
  if (puVar3 == (undefined8 *)0x0) {
    local_240 = (PSRWLOCK)*param_2;
    local_248 = (longlong *)(longlong)(int)param_2[1];
    memset(local_1a8,0,0x90);
    FUN_144869430(local_1a8);
    local_118 = 0;
    local_1a8[0] = &PTR_FUN_149e1ddc0;
    local_110 = local_240;
    local_108 = local_248;
    local_100 = 0x7fffffffffffffff;
    FUN_140996f94(local_1a8,1);
    (*(code *)local_1a8[0][0x1e])(local_1a8,1);
    uStack_a8 = 0;
    uStack_a4 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    local_ac = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    uStack_79 = 0;
    local_70 = 0;
    uStack_68 = 0;
    FUN_1473ded4b(local_1a8);
    local_210[0] = 0;
    local_208 = 0;
    uStack_200 = 0;
    local_1f8 = 0;
    uStack_1f0 = 0;
    local_1e8 = 0;
    uStack_1e0 = 0;
    local_1d8 = 0;
    uStack_1d0 = 0;
    local_1c8 = 0;
    uStack_1c0 = 0;
    local_1b8 = 0;
    uStack_1b0 = 0;
    FUN_1402ee999(local_1a8);
    local_228[0] = 0;
    local_228[1] = 0;
    local_218 = 0xffffffff;
    FUN_1473d17f2(local_1a8);
    SRWLock = (PSRWLOCK)(param_1 + 0x18);
    AcquireSRWLockExclusive(SRWLock);
    if (*(int *)(param_1 + 0x158) != *(int *)(param_1 + 0x184)) {
      lVar7 = param_1 + 0x188;
      if (*(longlong *)(param_1 + 400) != 0) {
        lVar7 = *(longlong *)(param_1 + 400);
      }
      iVar6 = *(int *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x198) - 1U & iVar2 * 0x17 + iVar6) *
                               4);
      if (iVar6 != -1) {
        do {
          plVar1 = (longlong *)(*(longlong *)(param_1 + 0x150) + (longlong)iVar6 * 0x18);
          if (*plVar1 == lVar12) {
            if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
              lVar12 = plVar1[1];
              puVar3 = (undefined8 *)(lVar12 + -0xa0);
              if (lVar12 == 0) {
                puVar3 = (undefined8 *)0x0;
              }
              goto LAB_1473d2db2;
            }
            break;
          }
          iVar6 = (int)plVar1[2];
        } while (iVar6 != -1);
      }
    }
    local_248 = (longlong *)(param_1 + 0x150);
    local_240 = SRWLock;
    puVar3 = (undefined8 *)FUN_14001cc68(0x1a8);
    lVar7 = 0;
    *(undefined4 *)(puVar3 + 1) = 0;
    *(undefined1 *)((longlong)puVar3 + 0xc) = 9;
    *(byte *)((longlong)puVar3 + 0xd) = *(byte *)((longlong)puVar3 + 0xd) | 3;
    local_238 = puVar3 + 2;
    *(undefined4 *)(puVar3 + 2) = 0;
    memset(puVar3 + 3,0,0x84);
    *(undefined1 *)((longlong)puVar3 + 0x9c) = 3;
    *(byte *)((longlong)puVar3 + 0x9d) = *(byte *)((longlong)puVar3 + 0x9d) & 0xfc;
    *(undefined2 *)((longlong)puVar3 + 0x9e) = 0;
    *puVar3 = &PTR_FUN_14a36bae0;
    puVar11 = puVar3 + 0x14;
    puVar3[0x14] = &PTR_LAB_14a36baf0;
    local_258 = puVar3 + 0xf;
    local_268 = local_228;
    local_260 = lVar12;
    FUN_1431b4220(puVar11,param_3,3,&local_d8);
    *puVar3 = &PTR_FUN_14a36bae0;
    puVar3[0x14] = &PTR_LAB_14a36baf0;
    FUN_1473df926(local_238,local_210);
    if (puVar3 == (undefined8 *)0x0) {
      puVar11 = (undefined8 *)0x0;
    }
    local_e8 = &local_230;
    local_f0 = &local_f8;
    local_230 = puVar11;
    FUN_1473dfae6(local_248);
    lVar12 = *param_2 + (longlong)(int)param_2[1];
    if (3 < (ulonglong)(longlong)(int)param_2[1]) {
      lVar7 = (longlong)*(int *)(lVar12 + -4);
    }
    lVar7 = -lVar7;
    do {
      lVar8 = lVar7;
      SRWLock = local_240;
      if (-5 < lVar8) goto LAB_1473d2db2;
      uVar9 = (ulonglong)*(uint *)(lVar12 + 1 + lVar8);
      bVar13 = *(char *)(lVar12 + lVar8) != 'p';
      uVar10 = uVar9;
      if (!bVar13 && uVar9 == 5) {
        uVar10 = 0;
      }
      lVar7 = uVar10 + 5 + lVar8;
    } while (bVar13 || uVar9 != 5);
    pbVar4 = (byte *)(lVar12 + lVar8 + 5);
    if (pbVar4 != (byte *)0x0) {
      bVar5 = *(byte *)((longlong)puVar3 + 0x9d);
      if (*(char *)((longlong)puVar3 + 0x9c) == '\x05') {
        bVar5 = bVar5 & 0xfe | *pbVar4 >> 4 & 1;
        *(byte *)((longlong)puVar3 + 0x9d) = bVar5;
      }
      *(byte *)((longlong)puVar3 + 0x9d) = bVar5 & 0xfd | *pbVar4 >> 4 & 2;
      *(bool *)((longlong)puVar3 + 0x181) = (*pbVar4 & 6) != 0;
    }
LAB_1473d2db2:
    ReleaseSRWLockExclusive(SRWLock);
    if (local_228[0] != 0) {
      FUN_1400020a8();
    }
    FUN_14178cab0(local_210);
    FUN_1473d24fe(&local_d8);
    FUN_144a7fc42(local_1a8);
  }
  if ((local_60 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar3;
}



// FUNCTION 1473d2e3e FUN_1473d2e3e body=97 status=ok
// SIG undefined FUN_1473d2e3e(void)

longlong * FUN_1473d2e3e(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  lVar1 = FUN_1473d2ea0(*(longlong *)(param_1 + 0x48) + 0x6b8,&local_28,
                        *(longlong *)(param_1 + 0x48));
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473d2ea0 FUN_1473d2ea0 body=1058 status=ok
// SIG undefined FUN_1473d2ea0(void)

undefined8 * FUN_1473d2ea0(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  PSRWLOCK SRWLock;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_288 [32];
  longlong *local_268;
  longlong local_260;
  undefined8 *local_258;
  longlong *local_248;
  PSRWLOCK local_240;
  undefined8 *local_238;
  undefined8 *local_230;
  longlong local_228 [2];
  undefined4 local_218;
  undefined4 local_210 [2];
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined **local_1a8 [18];
  undefined8 local_118;
  PSRWLOCK local_110;
  longlong *local_108;
  undefined8 local_100;
  longlong local_f8;
  longlong *local_f0;
  undefined8 **local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined8 uStack_a4;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined7 uStack_80;
  undefined4 uStack_79;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_288;
  iVar6 = (int)param_2[1];
  iVar2 = (*(code *)PTR_FUN_14c75b148)(*param_2,iVar6,0);
  lVar12 = CONCAT44(iVar2,iVar6);
  local_f8 = lVar12;
  puVar3 = (undefined8 *)FUN_1473b61a6(param_1);
  if (puVar3 == (undefined8 *)0x0) {
    local_240 = (PSRWLOCK)*param_2;
    local_248 = (longlong *)(longlong)(int)param_2[1];
    memset(local_1a8,0,0x90);
    FUN_144869430(local_1a8);
    local_118 = 0;
    local_1a8[0] = &PTR_FUN_149e1ddc0;
    local_110 = local_240;
    local_108 = local_248;
    local_100 = 0x7fffffffffffffff;
    FUN_140996f94(local_1a8,1);
    (*(code *)local_1a8[0][0x1e])(local_1a8,1);
    uStack_a8 = 0;
    uStack_a4 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    local_ac = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    uStack_79 = 0;
    local_70 = 0;
    uStack_68 = 0;
    FUN_1473ded4b(local_1a8);
    local_210[0] = 0;
    local_208 = 0;
    uStack_200 = 0;
    local_1f8 = 0;
    uStack_1f0 = 0;
    local_1e8 = 0;
    uStack_1e0 = 0;
    local_1d8 = 0;
    uStack_1d0 = 0;
    local_1c8 = 0;
    uStack_1c0 = 0;
    local_1b8 = 0;
    uStack_1b0 = 0;
    FUN_1402ee999(local_1a8);
    local_228[0] = 0;
    local_228[1] = 0;
    local_218 = 0xffffffff;
    FUN_1473d17f2(local_1a8);
    SRWLock = (PSRWLOCK)(param_1 + 8);
    AcquireSRWLockExclusive(SRWLock);
    if (*(int *)(param_1 + 0xb8) != *(int *)(param_1 + 0xe4)) {
      lVar7 = param_1 + 0xe8;
      if (*(longlong *)(param_1 + 0xf0) != 0) {
        lVar7 = *(longlong *)(param_1 + 0xf0);
      }
      iVar6 = *(int *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0xf8) - 1U & iVar2 * 0x17 + iVar6) * 4
                      );
      if (iVar6 != -1) {
        do {
          plVar1 = (longlong *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar6 * 0x18);
          if (*plVar1 == lVar12) {
            if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
              lVar12 = plVar1[1];
              puVar3 = (undefined8 *)(lVar12 + -0xa0);
              if (lVar12 == 0) {
                puVar3 = (undefined8 *)0x0;
              }
              goto LAB_1473d3238;
            }
            break;
          }
          iVar6 = (int)plVar1[2];
        } while (iVar6 != -1);
      }
    }
    local_248 = (longlong *)(param_1 + 0xb0);
    local_240 = SRWLock;
    puVar3 = (undefined8 *)FUN_14001cc68(0x1a8);
    lVar7 = 0;
    *(undefined4 *)(puVar3 + 1) = 0;
    *(undefined1 *)((longlong)puVar3 + 0xc) = 7;
    *(byte *)((longlong)puVar3 + 0xd) = *(byte *)((longlong)puVar3 + 0xd) | 3;
    local_238 = puVar3 + 2;
    *(undefined4 *)(puVar3 + 2) = 0;
    memset(puVar3 + 3,0,0x84);
    *(undefined1 *)((longlong)puVar3 + 0x9c) = 1;
    *(byte *)((longlong)puVar3 + 0x9d) = *(byte *)((longlong)puVar3 + 0x9d) & 0xfc;
    *(undefined2 *)((longlong)puVar3 + 0x9e) = 0;
    *puVar3 = &PTR_FUN_14a36bb10;
    puVar11 = puVar3 + 0x14;
    puVar3[0x14] = &PTR_LAB_14a36bb20;
    local_258 = puVar3 + 0xf;
    local_268 = local_228;
    local_260 = lVar12;
    FUN_1431b4220(puVar11,param_3,1,&local_d8);
    *puVar3 = &PTR_FUN_14a36bb10;
    puVar3[0x14] = &PTR_LAB_14a36bb20;
    FUN_1473df926(local_238,local_210);
    if (puVar3 == (undefined8 *)0x0) {
      puVar11 = (undefined8 *)0x0;
    }
    local_e8 = &local_230;
    local_f0 = &local_f8;
    local_230 = puVar11;
    FUN_1473dfae6(local_248);
    lVar12 = *param_2 + (longlong)(int)param_2[1];
    if (3 < (ulonglong)(longlong)(int)param_2[1]) {
      lVar7 = (longlong)*(int *)(lVar12 + -4);
    }
    lVar7 = -lVar7;
    do {
      lVar8 = lVar7;
      SRWLock = local_240;
      if (-5 < lVar8) goto LAB_1473d3238;
      uVar9 = (ulonglong)*(uint *)(lVar12 + 1 + lVar8);
      bVar13 = *(char *)(lVar12 + lVar8) != 'p';
      uVar10 = uVar9;
      if (!bVar13 && uVar9 == 5) {
        uVar10 = 0;
      }
      lVar7 = uVar10 + 5 + lVar8;
    } while (bVar13 || uVar9 != 5);
    pbVar4 = (byte *)(lVar12 + lVar8 + 5);
    if (pbVar4 != (byte *)0x0) {
      bVar5 = *(byte *)((longlong)puVar3 + 0x9d);
      if (*(char *)((longlong)puVar3 + 0x9c) == '\x05') {
        bVar5 = bVar5 & 0xfe | *pbVar4 >> 4 & 1;
        *(byte *)((longlong)puVar3 + 0x9d) = bVar5;
      }
      *(byte *)((longlong)puVar3 + 0x9d) = bVar5 & 0xfd | *pbVar4 >> 4 & 2;
      *(bool *)((longlong)puVar3 + 0x181) = (*pbVar4 & 6) != 0;
    }
LAB_1473d3238:
    ReleaseSRWLockExclusive(SRWLock);
    if (local_228[0] != 0) {
      FUN_1400020a8();
    }
    FUN_14178cab0(local_210);
    FUN_1473d24fe(&local_d8);
    FUN_144a7fc42(local_1a8);
  }
  if ((local_60 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar3;
}



// FUNCTION 1473d32c4 FUN_1473d32c4 body=97 status=ok
// SIG undefined FUN_1473d32c4(void)

longlong * FUN_1473d32c4(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  lVar1 = FUN_1473d3326(*(longlong *)(param_1 + 0x48) + 0x6b8,&local_28,
                        *(longlong *)(param_1 + 0x48));
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473d3326 FUN_1473d3326 body=1058 status=ok
// SIG undefined FUN_1473d3326(void)

undefined8 * FUN_1473d3326(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  PSRWLOCK SRWLock;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_288 [32];
  longlong *local_268;
  longlong local_260;
  undefined8 *local_258;
  longlong *local_248;
  PSRWLOCK local_240;
  undefined8 *local_238;
  undefined8 *local_230;
  longlong local_228 [2];
  undefined4 local_218;
  undefined4 local_210 [2];
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined **local_1a8 [18];
  undefined8 local_118;
  PSRWLOCK local_110;
  longlong *local_108;
  undefined8 local_100;
  longlong local_f8;
  longlong *local_f0;
  undefined8 **local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined8 uStack_a4;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined7 uStack_80;
  undefined4 uStack_79;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_288;
  iVar6 = (int)param_2[1];
  iVar2 = (*(code *)PTR_FUN_14c75b148)(*param_2,iVar6,0);
  lVar12 = CONCAT44(iVar2,iVar6);
  local_f8 = lVar12;
  puVar3 = (undefined8 *)FUN_1473b6274(param_1);
  if (puVar3 == (undefined8 *)0x0) {
    local_240 = (PSRWLOCK)*param_2;
    local_248 = (longlong *)(longlong)(int)param_2[1];
    memset(local_1a8,0,0x90);
    FUN_144869430(local_1a8);
    local_118 = 0;
    local_1a8[0] = &PTR_FUN_149e1ddc0;
    local_110 = local_240;
    local_108 = local_248;
    local_100 = 0x7fffffffffffffff;
    FUN_140996f94(local_1a8,1);
    (*(code *)local_1a8[0][0x1e])(local_1a8,1);
    uStack_a8 = 0;
    uStack_a4 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    local_ac = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    uStack_79 = 0;
    local_70 = 0;
    uStack_68 = 0;
    FUN_1473ded4b(local_1a8);
    local_210[0] = 0;
    local_208 = 0;
    uStack_200 = 0;
    local_1f8 = 0;
    uStack_1f0 = 0;
    local_1e8 = 0;
    uStack_1e0 = 0;
    local_1d8 = 0;
    uStack_1d0 = 0;
    local_1c8 = 0;
    uStack_1c0 = 0;
    local_1b8 = 0;
    uStack_1b0 = 0;
    FUN_1402ee999(local_1a8);
    local_228[0] = 0;
    local_228[1] = 0;
    local_218 = 0xffffffff;
    FUN_1473d17f2(local_1a8);
    SRWLock = (PSRWLOCK)(param_1 + 0x10);
    AcquireSRWLockExclusive(SRWLock);
    if (*(int *)(param_1 + 0x108) != *(int *)(param_1 + 0x134)) {
      lVar7 = param_1 + 0x138;
      if (*(longlong *)(param_1 + 0x140) != 0) {
        lVar7 = *(longlong *)(param_1 + 0x140);
      }
      iVar6 = *(int *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x148) - 1U & iVar2 * 0x17 + iVar6) *
                               4);
      if (iVar6 != -1) {
        do {
          plVar1 = (longlong *)(*(longlong *)(param_1 + 0x100) + (longlong)iVar6 * 0x18);
          if (*plVar1 == lVar12) {
            if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
              lVar12 = plVar1[1];
              puVar3 = (undefined8 *)(lVar12 + -0xa0);
              if (lVar12 == 0) {
                puVar3 = (undefined8 *)0x0;
              }
              goto LAB_1473d36be;
            }
            break;
          }
          iVar6 = (int)plVar1[2];
        } while (iVar6 != -1);
      }
    }
    local_248 = (longlong *)(param_1 + 0x100);
    local_240 = SRWLock;
    puVar3 = (undefined8 *)FUN_14001cc68(0x1a8);
    lVar7 = 0;
    *(undefined4 *)(puVar3 + 1) = 0;
    *(undefined1 *)((longlong)puVar3 + 0xc) = 8;
    *(byte *)((longlong)puVar3 + 0xd) = *(byte *)((longlong)puVar3 + 0xd) | 3;
    local_238 = puVar3 + 2;
    *(undefined4 *)(puVar3 + 2) = 0;
    memset(puVar3 + 3,0,0x84);
    *(undefined1 *)((longlong)puVar3 + 0x9c) = 2;
    *(byte *)((longlong)puVar3 + 0x9d) = *(byte *)((longlong)puVar3 + 0x9d) & 0xfc;
    *(undefined2 *)((longlong)puVar3 + 0x9e) = 0;
    *puVar3 = &PTR_FUN_14a36bb40;
    puVar11 = puVar3 + 0x14;
    puVar3[0x14] = &PTR_LAB_14a36bb50;
    local_258 = puVar3 + 0xf;
    local_268 = local_228;
    local_260 = lVar12;
    FUN_1431b4220(puVar11,param_3,2,&local_d8);
    *puVar3 = &PTR_FUN_14a36bb40;
    puVar3[0x14] = &PTR_LAB_14a36bb50;
    FUN_1473df926(local_238,local_210);
    if (puVar3 == (undefined8 *)0x0) {
      puVar11 = (undefined8 *)0x0;
    }
    local_e8 = &local_230;
    local_f0 = &local_f8;
    local_230 = puVar11;
    FUN_1473dfae6(local_248);
    lVar12 = *param_2 + (longlong)(int)param_2[1];
    if (3 < (ulonglong)(longlong)(int)param_2[1]) {
      lVar7 = (longlong)*(int *)(lVar12 + -4);
    }
    lVar7 = -lVar7;
    do {
      lVar8 = lVar7;
      SRWLock = local_240;
      if (-5 < lVar8) goto LAB_1473d36be;
      uVar9 = (ulonglong)*(uint *)(lVar12 + 1 + lVar8);
      bVar13 = *(char *)(lVar12 + lVar8) != 'p';
      uVar10 = uVar9;
      if (!bVar13 && uVar9 == 5) {
        uVar10 = 0;
      }
      lVar7 = uVar10 + 5 + lVar8;
    } while (bVar13 || uVar9 != 5);
    pbVar4 = (byte *)(lVar12 + lVar8 + 5);
    if (pbVar4 != (byte *)0x0) {
      bVar5 = *(byte *)((longlong)puVar3 + 0x9d);
      if (*(char *)((longlong)puVar3 + 0x9c) == '\x05') {
        bVar5 = bVar5 & 0xfe | *pbVar4 >> 4 & 1;
        *(byte *)((longlong)puVar3 + 0x9d) = bVar5;
      }
      *(byte *)((longlong)puVar3 + 0x9d) = bVar5 & 0xfd | *pbVar4 >> 4 & 2;
      *(bool *)((longlong)puVar3 + 0x181) = (*pbVar4 & 6) != 0;
    }
LAB_1473d36be:
    ReleaseSRWLockExclusive(SRWLock);
    if (local_228[0] != 0) {
      FUN_1400020a8();
    }
    FUN_14178cab0(local_210);
    FUN_1473d24fe(&local_d8);
    FUN_144a7fc42(local_1a8);
  }
  if ((local_60 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar3;
}


