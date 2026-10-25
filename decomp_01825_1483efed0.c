// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1483efed0 FUN_1483efed0 body=107 status=ok
// SIG undefined FUN_1483efed0(void)

/* WARNING: Removing unreachable block (ram,0x0001483eff02) */
/* WARNING: Removing unreachable block (ram,0x0001483efede) */
/* WARNING: Removing unreachable block (ram,0x0001483efef4) */
/* WARNING: Removing unreachable block (ram,0x0001483eff0d) */
/* WARNING: Removing unreachable block (ram,0x0001483efef6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1483efed0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = DAT_14cb46ee0;
  LOCK();
  UNLOCK();
  DAT_14cb46ee0 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    _DAT_14cb46ee8 = _DAT_14cb46ee8 + -1;
    UNLOCK();
    do {
      puVar1 = (undefined8 *)*puVar2;
      if (puVar2[2] != 0) {
        puVar2[2] = 0;
        puVar2[3] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      puVar2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
    LOCK();
    _DAT_14cb46ee8 = _DAT_14cb46ee8 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1483eff3c FUN_1483eff3c body=141 status=ok
// SIG undefined FUN_1483eff3c(void)

void FUN_1483eff3c(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xc0);
  if ((uint)param_3 < 0x19) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xc0,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0xc0),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xc0,param_2,param_3,8);
  return;
}



// FUNCTION 1483effca FUN_1483effca body=336 status=ok
// SIG undefined FUN_1483effca(void)

void FUN_1483effca(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint local_70;
  int iStack_6c;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar2 = param_1 + 0x250;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar6 = *(int *)(param_1 + 0x268);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar1;
  if ((iStack_4c != iVar6) || (uStack_58 != lVar2)) {
    do {
      lVar4 = *(longlong *)(*local_88 + (longlong)iStack_6c * 0x10);
      if (lVar4 != 0) {
        iVar3 = *(int *)(param_2 + 200);
        *(uint *)(param_2 + 200) = iVar3 + 1U;
        if (*(uint *)(param_2 + 0xcc) < iVar3 + 1U) {
          FUN_1483f011c(param_2,iVar3);
        }
        lVar5 = *(longlong *)(param_2 + 0xc0);
        if (*(longlong *)(param_2 + 0xc0) == 0) {
          lVar5 = param_2;
        }
        *(longlong *)(lVar5 + (longlong)iVar3 * 8) = lVar4;
      }
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar2 || iStack_6c != iVar6));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483f011c FUN_1483f011c body=119 status=ok
// SIG undefined FUN_1483f011c(void)

void FUN_1483f011c(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 200);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x18;
    if (0x18 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x18 < *(uint *)(param_1 + 0xcc)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0xcc) = iVar5;
    FUN_1483eff3c(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1483f0194 FUN_1483f0194 body=137 status=ok
// SIG undefined FUN_1483f0194(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1483f0194(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  LOCK();
  _DAT_14cb46ee8 = _DAT_14cb46ee8 + 1;
  UNLOCK();
  uVar1 = FUN_1483f021e(DAT_14cb46ee0);
  param_1[1] = uVar1;
  param_1[2] = &DAT_14cb46ee0;
  LOCK();
  _DAT_14cb46ee8 = _DAT_14cb46ee8 + 1;
  UNLOCK();
  param_1[3] = param_1;
  FUN_1483f02a0(param_1 + 1);
  LOCK();
  UNLOCK();
  LOCK();
  UNLOCK();
  param_1[4] = 0;
  param_1[5] = &DAT_14cb46ee0;
  LOCK();
  _DAT_14cb46ee8 = _DAT_14cb46ee8 + 1;
  UNLOCK();
  param_1[6] = param_1;
  FUN_1483f02a0(param_1 + 4);
  LOCK();
  _DAT_14cb46ee8 = _DAT_14cb46ee8 + -1;
  UNLOCK();
  return param_1;
}



// FUNCTION 1483f021e FUN_1483f021e body=130 status=ok
// SIG undefined FUN_1483f021e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1483f021e(undefined8 *param_1)

{
  uint uVar1;
  longlong lVar2;
  
  do {
    if (param_1 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    lVar2 = param_1[2];
    if ((lVar2 != 0) && ((*(uint *)(lVar2 + 8) & 0x40018000) == 0)) {
      uVar1 = *(uint *)(lVar2 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar2 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        if ((*(uint *)(lVar2 + 8 + (ulonglong)(uVar1 & 0xffff) * 0x18) >> 0x15 & 1) == 0) {
          lVar2 = lVar2 + (ulonglong)(uVar1 & 0xffff) * 0x18;
LAB_1483f0290:
          if ((*(uint *)(lVar2 + 8) >> 0x1c & 1) == 0) {
            return param_1;
          }
        }
      }
      else if ((_DAT_00000008 >> 0x15 & 1) == 0) {
        lVar2 = 0;
        goto LAB_1483f0290;
      }
    }
    param_1 = (undefined8 *)*param_1;
  } while( true );
}



// FUNCTION 1483f02a0 FUN_1483f02a0 body=61 status=ok
// SIG undefined FUN_1483f02a0(void)

void FUN_1483f02a0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  while ((lVar2 != 0 &&
         (plVar1 = (longlong *)param_1[2], lVar2 = FUN_1447210f0(*(undefined8 *)(lVar2 + 0x10)),
         lVar2 != *plVar1))) {
    lVar2 = FUN_1483f021e(*(undefined8 *)*param_1);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 1483f02de FUN_1483f02de body=132 status=ok
// SIG undefined FUN_1483f02de(void)

void FUN_1483f02de(longlong param_1,int param_2)

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



// FUNCTION 1483f0364 FUN_1483f0364 body=62 status=ok
// SIG undefined FUN_1483f0364(void)

void FUN_1483f0364(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1483f0412(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x28,8);
  }
  return;
}



// FUNCTION 1483f03a2 FUN_1483f03a2 body=111 status=ok
// SIG undefined FUN_1483f03a2(void)

void FUN_1483f03a2(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 0x18 + (longlong)(int)param_2 * 0x28) != 0) {
    FUN_1400020a8();
  }
  iVar2 = (int)param_1[1];
  iVar3 = ~param_2 + iVar2;
  if (iVar3 != 0) {
    iVar4 = 1;
    if (iVar3 < 1) {
      iVar4 = iVar3;
    }
    memmove((void *)(lVar1 + (longlong)(int)param_2 * 0x28),
            (void *)(lVar1 + (longlong)(iVar2 - iVar4) * 0x28),(longlong)iVar4 * 0x28);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 1483f0412 FUN_1483f0412 body=112 status=ok
// SIG undefined FUN_1483f0412(void)

ulonglong FUN_1483f0412(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x28) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1483f044c;
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
LAB_1483f044c:
  return param_2 & 0xffffffff;
}



// FUNCTION 1483f0482 FUN_1483f0482 body=199 status=ok
// SIG undefined FUN_1483f0482(void)

void FUN_1483f0482(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  lVar6 = param_1[1];
  if ((longlong)(int)lVar6 != 0) {
    lVar3 = *param_1;
    uVar7 = 0;
    do {
      cVar5 = FUN_144a7afa6(lVar3 + 8 + uVar7,param_2 + 1);
      if (cVar5 != '\0') {
        if ((int)(uVar7 >> 3) * -0x33333333 != -1) {
          return;
        }
        break;
      }
      uVar7 = uVar7 + 0x28;
    } while ((longlong)(int)lVar6 * 0x28 != uVar7);
  }
  iVar2 = (int)param_1[1];
  lVar6 = (longlong)iVar2;
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1483f054a(param_1,iVar2);
  }
  lVar3 = *param_1;
  *(undefined8 *)(lVar3 + lVar6 * 0x28) = *param_2;
  uVar4 = param_2[2];
  puVar1 = (undefined8 *)(lVar3 + 8 + lVar6 * 0x28);
  *puVar1 = param_2[1];
  puVar1[1] = uVar4;
  *(undefined8 *)(lVar3 + 0x18 + lVar6 * 0x28) = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar6 * 0x28) = param_2[3];
  param_2[3] = 0;
  *(undefined4 *)(lVar3 + 0x20 + lVar6 * 0x28) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(lVar3 + 0x24 + lVar6 * 0x28) = *(undefined4 *)((longlong)param_2 + 0x24);
  param_2[4] = 0;
  return;
}



// FUNCTION 1483f054a FUN_1483f054a body=147 status=ok
// SIG undefined FUN_1483f054a(void)

void FUN_1483f054a(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x28,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1483f05de FUN_1483f05de body=62 status=ok
// SIG undefined FUN_1483f05de(void)

void FUN_1483f05de(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1483f068c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x28,8);
  }
  return;
}



// FUNCTION 1483f061c FUN_1483f061c body=111 status=ok
// SIG undefined FUN_1483f061c(void)

void FUN_1483f061c(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 0x18 + (longlong)(int)param_2 * 0x28) != 0) {
    FUN_1400020a8();
  }
  iVar2 = (int)param_1[1];
  iVar3 = ~param_2 + iVar2;
  if (iVar3 != 0) {
    iVar4 = 1;
    if (iVar3 < 1) {
      iVar4 = iVar3;
    }
    memmove((void *)(lVar1 + (longlong)(int)param_2 * 0x28),
            (void *)(lVar1 + (longlong)(iVar2 - iVar4) * 0x28),(longlong)iVar4 * 0x28);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 1483f068c FUN_1483f068c body=112 status=ok
// SIG undefined FUN_1483f068c(void)

ulonglong FUN_1483f068c(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x28) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1483f06c6;
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
LAB_1483f06c6:
  return param_2 & 0xffffffff;
}



// FUNCTION 1483f06fc FUN_1483f06fc body=86 status=ok
// SIG undefined FUN_1483f06fc(void)

void FUN_1483f06fc(longlong param_1,uint param_2)

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



// FUNCTION 1483f0752 FUN_1483f0752 body=132 status=ok
// SIG undefined FUN_1483f0752(void)

void FUN_1483f0752(longlong param_1,int param_2)

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



// FUNCTION 1483f07d8 FUN_1483f07d8 body=132 status=ok
// SIG undefined FUN_1483f07d8(void)

void FUN_1483f07d8(longlong param_1,int param_2)

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



// FUNCTION 1483f085e FUN_1483f085e body=48 status=ok
// SIG undefined FUN_1483f085e(void)

void FUN_1483f085e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 1483f088e FUN_1483f088e body=96 status=ok
// SIG undefined FUN_1483f088e(void)

void FUN_1483f088e(longlong param_1,int param_2)

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



// FUNCTION 1483f08ee FUN_1483f08ee body=623 status=ok
// SIG undefined FUN_1483f08ee(void)

void FUN_1483f08ee(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong *local_160;
  undefined4 local_158;
  uint uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  uint local_148;
  int iStack_144;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  uint local_128;
  int iStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1800000000;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar10 = param_1 + 0x250;
  local_138 = 0x100000000;
  local_128 = 0xffffffff;
  iStack_124 = 0;
  uStack_120 = 0;
  uStack_130 = lVar10;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar9 = 0;
  }
  else {
    FUN_1449c0562(&local_138);
    iVar9 = *(int *)(param_1 + 0x268);
  }
  uStack_140 = CONCAT44(uStack_11c,uStack_120);
  local_148 = local_128;
  iStack_144 = iStack_124;
  local_158 = (undefined4)local_138;
  uStack_154 = local_138._4_4_;
  uStack_150 = (undefined4)uStack_130;
  uStack_14c = uStack_130._4_4_;
  local_160 = plVar1;
  if ((iStack_124 != iVar9) || (uStack_130 != lVar10)) {
    do {
      plVar3 = *(longlong **)(*local_160 + (longlong)iStack_144 * 0x10);
      if (plVar3 != (longlong *)0x0) {
        iVar2 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
          FUN_14587455c(param_3,iVar2);
        }
        *(longlong **)(*param_3 + (longlong)iVar2 * 8) = plVar3;
        lVar7 = FUN_144a7f016();
        if (((*(int *)(lVar7 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
            (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
             == lVar7 + 0x30)) &&
           (lVar7 = (**(code **)(*plVar3 + 0x5d8))(plVar3), uVar5 = local_50, lVar7 != 0)) {
          lVar11 = (longlong)(int)local_50;
          uVar6 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar6);
          if (local_50._4_4_ < uVar6) {
            FUN_1470e9d72(local_118,uVar5 & 0xffffffff);
          }
          puVar8 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar8 = local_118;
          }
          *(longlong *)(puVar8 + lVar11 * 8) = lVar7;
        }
      }
      local_148 = local_148 & ~uStack_154;
      FUN_1449c0562(&local_158);
    } while (local_160 != plVar1 ||
             (CONCAT44(uStack_14c,uStack_150) != lVar10 || iStack_144 != iVar9));
    lVar10 = (longlong)(int)local_50;
    puVar8 = local_118;
    if (local_58 != (undefined1 *)0x0) {
      puVar8 = local_58;
    }
    if (lVar10 != 0) {
      lVar7 = 0;
      do {
        uVar4 = *(undefined8 *)(puVar8 + lVar7);
        local_168 = *param_2;
        if ((local_168 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_1483f08ee(uVar4,&local_168,param_3);
        lVar7 = lVar7 + 8;
      } while (lVar10 * 8 != lVar7);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483f0b5e FUN_1483f0b5e body=312 status=ok
// SIG undefined FUN_1483f0b5e(void)

void FUN_1483f0b5e(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint local_70;
  int iStack_6c;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar2 = param_1 + 0x250;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar5 = *(int *)(param_1 + 0x268);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar1;
  if ((iStack_4c != iVar5) || (uStack_58 != lVar2)) {
    do {
      lVar4 = *(longlong *)(*local_88 + (longlong)iStack_6c * 0x10);
      if (lVar4 != 0) {
        iVar3 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
          FUN_14587455c(param_3,iVar3);
        }
        *(longlong *)(*param_3 + (longlong)iVar3 * 8) = lVar4;
      }
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar2 || iStack_6c != iVar5));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483f0c98 FUN_1483f0c98 body=741 status=ok
// SIG undefined FUN_1483f0c98(void)

void FUN_1483f0c98(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 *puVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong *local_160;
  undefined4 local_158;
  uint uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  uint local_148;
  int iStack_144;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  uint local_128;
  int iStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1800000000;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar12 = param_1 + 0x250;
  local_138 = 0x100000000;
  local_128 = 0xffffffff;
  iStack_124 = 0;
  uStack_120 = 0;
  uStack_130 = lVar12;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar11 = 0;
  }
  else {
    FUN_1449c0562(&local_138);
    iVar11 = *(int *)(param_1 + 0x268);
  }
  uStack_140 = CONCAT44(uStack_11c,uStack_120);
  local_148 = local_128;
  iStack_144 = iStack_124;
  local_158 = (undefined4)local_138;
  uStack_154 = local_138._4_4_;
  uStack_150 = (undefined4)uStack_130;
  uStack_14c = uStack_130._4_4_;
  local_160 = plVar1;
  if ((iStack_124 != iVar11) || (uStack_130 != lVar12)) {
    do {
      plVar3 = *(longlong **)(*local_160 + (longlong)iStack_144 * 0x10);
      if (plVar3 != (longlong *)0x0) {
        lVar8 = *param_2;
        if ((lVar8 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
LAB_1483f0dbc:
          lVar7 = FUN_144a78d6a();
          if ((lVar7 == 0) || (*(int *)(lVar8 + 0x38) < *(int *)(lVar7 + 0x38))) goto LAB_1483f0dd0;
          lVar9 = 0;
          if (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
              lVar7 + 0x30) {
            lVar9 = lVar8;
          }
        }
        else {
          if (lVar8 != 0) goto LAB_1483f0dbc;
LAB_1483f0dd0:
          lVar9 = 0;
        }
        if ((*(int *)(lVar9 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
            lVar9 + 0x30)) {
          iVar2 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
            FUN_14587455c(param_3,iVar2);
          }
          *(longlong **)(*param_3 + (longlong)iVar2 * 8) = plVar3;
        }
        lVar8 = FUN_144a7f016();
        if (((*(int *)(lVar8 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
            (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
             == lVar8 + 0x30)) &&
           (lVar8 = (**(code **)(*plVar3 + 0x5d8))(plVar3), uVar5 = local_50, lVar8 != 0)) {
          lVar7 = (longlong)(int)local_50;
          uVar6 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar6);
          if (local_50._4_4_ < uVar6) {
            FUN_1470e9d72(local_118,uVar5 & 0xffffffff);
          }
          puVar10 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar10 = local_118;
          }
          *(longlong *)(puVar10 + lVar7 * 8) = lVar8;
        }
      }
      local_148 = local_148 & ~uStack_154;
      FUN_1449c0562(&local_158);
    } while (local_160 != plVar1 ||
             (CONCAT44(uStack_14c,uStack_150) != lVar12 || iStack_144 != iVar11));
    lVar12 = (longlong)(int)local_50;
    puVar10 = local_118;
    if (local_58 != (undefined1 *)0x0) {
      puVar10 = local_58;
    }
    if (lVar12 != 0) {
      lVar8 = 0;
      do {
        uVar4 = *(undefined8 *)(puVar10 + lVar8);
        local_168 = *param_2;
        if ((local_168 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_1483f0c98(uVar4,&local_168,param_3);
        lVar8 = lVar8 + 8;
      } while (lVar12 * 8 != lVar8);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483f0f7e FUN_1483f0f7e body=52 status=ok
// SIG undefined FUN_1483f0f7e(void)

void FUN_1483f0f7e(longlong *param_1)

{
  FUN_1483f0fb2();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1483f0fb2 FUN_1483f0fb2 body=89 status=ok
// SIG undefined FUN_1483f0fb2(void)

void FUN_1483f0fb2(longlong param_1)

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



// FUNCTION 1483f100c FUN_1483f100c body=52 status=ok
// SIG undefined FUN_1483f100c(void)

void FUN_1483f100c(longlong *param_1)

{
  FUN_1483f1040();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1483f1040 FUN_1483f1040 body=89 status=ok
// SIG undefined FUN_1483f1040(void)

void FUN_1483f1040(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14472eb64(param_1,0);
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



// FUNCTION 1483f109a FUN_1483f109a body=118 status=ok
// SIG undefined FUN_1483f109a(void)

undefined4 FUN_1483f109a(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((longlong)*(int *)(param_1 + 0x1078) == 0) {
    uVar1 = 0;
  }
  else {
    lVar3 = (longlong)*(int *)(param_1 + 0x1078) * 0x28;
    lVar2 = *(longlong *)(param_1 + 0x1070) + 8;
    do {
      lVar3 = lVar3 + -0x28;
      uVar1 = FUN_144a7afa6(lVar2,param_2 + 8);
      if ((char)uVar1 != '\0') break;
      lVar2 = lVar2 + 0x28;
    } while (lVar3 != 0);
  }
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_1400020a8();
  }
  return uVar1;
}



// FUNCTION 1483f1110 FUN_1483f1110 body=312 status=ok
// SIG undefined FUN_1483f1110(void)

undefined4 * FUN_1483f1110(longlong param_1,undefined4 *param_2,ulonglong *param_3)

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
  FUN_1483f124a(param_1,local_48);
  uVar5 = *param_3;
  *local_40 = uVar5;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_1483f1330(param_1,uVar3,local_40,&local_4c);
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
      FUN_1483f141e(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483f124a FUN_1483f124a body=229 status=ok
// SIG undefined FUN_1483f124a(void)

int * FUN_1483f124a(longlong *param_1,int *param_2)

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



// FUNCTION 1483f1330 FUN_1483f1330 body=124 status=ok
// SIG undefined FUN_1483f1330(void)

undefined8 FUN_1483f1330(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_1483f13ac(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = (int)plVar1[1];
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 1483f13ac FUN_1483f13ac body=114 status=ok
// SIG undefined FUN_1483f13ac(void)

void FUN_1483f13ac(longlong *param_1,int param_2)

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



// FUNCTION 1483f141e FUN_1483f141e body=477 status=ok
// SIG undefined FUN_1483f141e(void)

void FUN_1483f141e(longlong *param_1)

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



// FUNCTION 1483f15fc FUN_1483f15fc body=285 status=ok
// SIG undefined FUN_1483f15fc(void)

undefined4 * FUN_1483f15fc(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  FUN_1483f171a(param_1,local_48);
  uVar1 = *param_3;
  *local_40 = uVar1;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (uint)((ulonglong)uVar1 >> 0x20) ^ (uint)uVar1;
  cVar3 = FUN_1483f1800(param_1,uVar8,local_40,&local_4c);
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
      *(uint *)((longlong)local_40 + 0xc) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 1) =
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
      FUN_1483f19e4(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483f171a FUN_1483f171a body=229 status=ok
// SIG undefined FUN_1483f171a(void)

int * FUN_1483f171a(longlong *param_1,int *param_2)

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



// FUNCTION 1483f1800 FUN_1483f1800 body=132 status=ok
// SIG undefined FUN_1483f1800(void)

undefined8 FUN_1483f1800(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_30 = *param_3;
    iVar1 = FUN_1483f1886();
    if (iVar1 != -1) {
      *(undefined8 *)(*param_1 + (longlong)iVar1 * 0x10) = *param_3;
      FUN_1483f193c(param_1,*param_4);
      *param_4 = iVar1;
      uVar2 = 1;
      goto LAB_1483f1824;
    }
  }
  uVar2 = 0;
LAB_1483f1824:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483f1886 FUN_1483f1886 body=180 status=ok
// SIG undefined FUN_1483f1886(void)

int FUN_1483f1886(longlong *param_1,uint param_2,undefined8 *param_3)

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
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x10);
        cVar1 = FUN_1483f19ae(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_1483f1914;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 8 + (longlong)iVar4 * 0x10);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_1483f1914:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483f193c FUN_1483f193c body=114 status=ok
// SIG undefined FUN_1483f193c(void)

void FUN_1483f193c(longlong *param_1,int param_2)

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



// FUNCTION 1483f19ae FUN_1483f19ae body=53 status=ok
// SIG undefined FUN_1483f19ae(void)

ulonglong FUN_1483f19ae(int *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1);
  }
  cVar1 = FUN_144729dda();
  if (cVar1 == '\0') {
    uVar2 = FUN_144729dda(param_2);
    uVar2 = uVar2 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 1483f19e4 FUN_1483f19e4 body=439 status=ok
// SIG undefined FUN_1483f19e4(void)

void FUN_1483f19e4(longlong *param_1)

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
        uVar10 = (longlong)
                 (int)((uint)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) ^
                      (uint)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 1483f1b9c FUN_1483f1b9c body=168 status=ok
// SIG undefined FUN_1483f1b9c(void)

longlong * FUN_1483f1b9c(longlong *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  uint local_38;
  longlong *local_30;
  code *local_28;
  longlong **local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  uVar1 = FUN_14482ca40();
  uVar2 = FUN_1411ae49e();
  local_20 = &local_30;
  local_28 = FUN_142840874;
  local_38 = uVar1 | 0x90000000;
  local_30 = param_1;
  FUN_140245161(uVar2,&local_28,1,0x10);
  lVar3 = (longlong)(int)param_1[2];
  do {
    lVar3 = lVar3 + 1;
    *(int *)(param_1 + 2) = (int)lVar3;
    if ((int)param_1[1] <= lVar3) break;
  } while (*(longlong *)(*param_1 + lVar3 * 8) == 0);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483f1c46 FUN_1483f1c46 body=168 status=ok
// SIG undefined FUN_1483f1c46(void)

longlong * FUN_1483f1c46(longlong *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  uint local_38;
  longlong *local_30;
  code *local_28;
  longlong **local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  uVar1 = FUN_14482ca40();
  uVar2 = FUN_140719952();
  local_20 = &local_30;
  local_28 = FUN_142840874;
  local_38 = uVar1 | 0x90200000;
  local_30 = param_1;
  FUN_140245161(uVar2,&local_28,1,0x30);
  lVar3 = (longlong)(int)param_1[2];
  do {
    lVar3 = lVar3 + 1;
    *(int *)(param_1 + 2) = (int)lVar3;
    if ((int)param_1[1] <= lVar3) break;
  } while (*(longlong *)(*param_1 + lVar3 * 8) == 0);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483f1d08 FUN_1483f1d08 body=372 status=ok
// SIG undefined FUN_1483f1d08(void)

void FUN_1483f1d08(longlong param_1,float param_2)

{
  float fVar1;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined4 local_138;
  uint uStack_134;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_104;
  undefined4 local_fc;
  longlong local_f0;
  undefined4 local_e8;
  uint local_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  longlong local_60;
  undefined4 local_58;
  uint local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined2 local_38;
  undefined1 local_36;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_178;
  fVar1 = 0.0;
  if (0.0 <= param_2) {
    fVar1 = param_2;
  }
  if ((*(float *)(param_1 + 0x1a0c) != fVar1) || (NAN(*(float *)(param_1 + 0x1a0c)) || NAN(fVar1)))
  {
    *(float *)(param_1 + 0x1a0c) = fVar1;
    local_158 = 0;
    uStack_150 = 0;
    local_148 = 0xffffffff00000001;
    local_140 = 0;
    local_138 = 0;
    local_110 = 0;
    local_108 = 0;
    local_130 = 0;
    uStack_128 = 0;
    local_104 = 0xffffffff00000080;
    local_fc = 0;
    local_f0 = 0;
    local_e8 = 0;
    local_e0 = local_e0 & 0xffffff00;
    uStack_d8 = 0;
    local_d0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0xffffffff00000001;
    local_b0 = 0;
    local_a8 = (ulonglong)uStack_134 << 0x20;
    local_80 = 0;
    local_78 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_74 = 0xffffffff00000080;
    local_6c = 0;
    local_60 = 0;
    local_58 = 0;
    FUN_140604072(&local_a0,&local_130);
    local_50 = local_e0;
    uStack_4c = uStack_dc;
    uStack_48 = (undefined4)uStack_d8;
    uStack_44 = uStack_d8._4_4_;
    local_40 = CONCAT44(uStack_cc,local_d0);
    local_38 = 0;
    local_36 = 0;
    local_e8 = 0;
    if (local_f0 != 0) {
      FUN_1400020a8();
    }
    FUN_140603fbe(&local_130);
    local_38 = CONCAT11(local_38._1_1_,1);
    FUN_143b281d4(param_1,&local_c8);
    local_58 = 0;
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    FUN_140603fbe(&local_a0);
  }
  if ((local_28 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483f1e7e FUN_1483f1e7e body=200 status=ok
// SIG undefined FUN_1483f1e7e(void)

longlong * FUN_1483f1e7e(longlong *param_1,double *param_2,double param_3,double param_4)

{
  double dVar1;
  double *pdVar2;
  longlong lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1482113de(0,4,1);
  dVar1 = param_2[1];
  param_4 = param_4 * 0.5;
  param_3 = param_3 * 0.5;
  pdVar2 = (double *)*param_1;
  *pdVar2 = *param_2 - param_3;
  pdVar2[1] = dVar1 - param_4;
  dVar1 = param_2[1];
  lVar3 = *param_1;
  *(double *)(lVar3 + 0x10) = *param_2 + param_3;
  *(double *)(lVar3 + 0x18) = dVar1 - param_4;
  dVar1 = param_2[1];
  lVar3 = *param_1;
  *(double *)(lVar3 + 0x20) = *param_2 + param_3;
  *(double *)(lVar3 + 0x28) = dVar1 + param_4;
  dVar1 = param_2[1];
  lVar3 = *param_1;
  *(double *)(lVar3 + 0x30) = *param_2 - param_3;
  *(double *)(lVar3 + 0x38) = param_4 + dVar1;
  return param_1;
}



// FUNCTION 1483f1f46 FUN_1483f1f46 body=107 status=ok
// SIG undefined FUN_1483f1f46(void)

void * FUN_1483f1f46(void *param_1,undefined8 *param_2)

{
  void *_Src;
  void *_Dst;
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  _Src = (void *)*param_2;
  uVar3 = param_2[1] - (longlong)_Src;
  uVar2 = uVar3 >> 2;
  iVar1 = (int)uVar2;
  *(int *)((longlong)param_1 + 0x18) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 4;
  }
  else {
    FUN_140de5076(param_1,uVar2,0);
    _Dst = *(void **)((longlong)param_1 + 0x10);
    if (*(void **)((longlong)param_1 + 0x10) == (void *)0x0) {
      _Dst = param_1;
    }
    memcpy(_Dst,_Src,(longlong)(uVar3 * 0x40000000) >> 0x1e & 0xfffffffffffffffc);
  }
  return param_1;
}



// FUNCTION 1483f1fb2 FUN_1483f1fb2 body=208 status=ok
// SIG undefined FUN_1483f1fb2(void)

void FUN_1483f1fb2(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x19b8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x19b0);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x420))(plVar3,0);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  *(undefined4 *)(param_1 + 0x19b8) = 0;
  if (*(int *)(param_1 + 0x19bc) < 0) {
    FUN_148401b90(param_1 + 0x19b0);
  }
  iVar1 = *(int *)(param_1 + 0x19c8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x19c0);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x420))(plVar3,0);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  *(undefined4 *)(param_1 + 0x19c8) = 0;
  if (-1 < *(int *)(param_1 + 0x19cc)) {
    return;
  }
  FUN_148401bc0(param_1 + 0x19c0);
  return;
}



// FUNCTION 1483f2084 FUN_1483f2084 body=3430 status=ok
// SIG undefined FUN_1483f2084(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1483f2084(longlong *param_1,char param_2)

{
  undefined8 *puVar1;
  double dVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 auVar7 [16];
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined2 *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  float fVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  double dVar35;
  double dVar36;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auStack_308 [32];
  longlong *local_2e8;
  undefined1 local_2e0;
  longlong *local_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 local_248;
  undefined8 local_240;
  undefined1 local_238 [16];
  double local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  double local_210;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  longlong lStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  longlong lStack_1c0;
  longlong local_1b8;
  longlong lStack_1b0;
  longlong local_1a8;
  longlong lStack_1a0;
  longlong local_198;
  undefined8 uStack_190;
  longlong local_188;
  undefined8 uStack_180;
  longlong local_178 [3];
  undefined8 uStack_160;
  double local_158;
  longlong local_148;
  longlong lStack_140;
  longlong local_138;
  longlong lStack_130;
  undefined8 local_120;
  undefined8 uStack_118;
  double local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined2 *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_308;
  lVar3 = param_1[0x15];
  iVar8 = (**(code **)(*param_1 + 0x570))();
  if (iVar8 == 0) {
    if ((local_c0 ^ (ulonglong)auStack_308) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
                    /* WARNING: Could not recover jumptable at 0x0001483f2169. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb00))(param_1);
    return;
  }
  (**(code **)(*param_1 + 0xa48))(param_1,&local_120);
  local_110 = (double)(*(float *)((longlong)param_1 + 0xff4) * 0.5) + local_110;
  fVar16 = (float)(**(code **)(*param_1 + 0xa58))(param_1);
  dVar17 = (double)*(float *)((longlong)param_1 + 0xff4) + ((double)fVar16 - local_110);
  local_158 = local_110;
  local_178[2] = local_120;
  uStack_160 = uStack_118;
  local_1f8 = (double)param_1[0x48];
  dStack_1f0 = (double)param_1[0x49];
  local_1e8 = (double)param_1[0x4a];
  lStack_1e0 = param_1[0x4b];
  local_1d8 = (double)param_1[0x4c];
  dStack_1d0 = (double)param_1[0x4d];
  local_1c8 = (double)param_1[0x4e];
  lStack_1c0 = param_1[0x4f];
  local_148 = param_1[0x50];
  lStack_140 = param_1[0x51];
  dVar2 = (double)param_1[0x4b];
  local_138 = param_1[0x52];
  lStack_130 = param_1[0x53];
  dVar36 = local_1e8 * 0.0 - local_1f8 * dVar17;
  dVar31 = local_1f8 * 0.0 - dStack_1f0 * 0.0;
  dVar35 = dVar17 * dStack_1f0 - local_1e8 * 0.0;
  dVar35 = dVar35 + dVar35;
  dVar36 = dVar36 + dVar36;
  dVar31 = dVar31 + dVar31;
  dVar6 = (local_1e8 * dVar35 - local_1f8 * dVar31) + (double)param_1[0x4b] * dVar36 + 0.0 +
          dStack_1d0;
  local_228 = dVar31 * dVar2 + dVar17 + (dVar36 * local_1f8 - dVar35 * dStack_1f0) + local_1c8;
  if (param_2 == '\0') {
    local_178[0] = 0;
    local_178[1] = 0;
  }
  else {
    FUN_1409ca648(param_1,local_178);
  }
  local_188 = 0;
  uStack_180 = 0;
  local_2e8 = &local_198;
  local_198 = 0;
  uStack_190 = 0;
  local_1b8 = local_148;
  lStack_1b0 = lStack_140;
  local_1a8 = local_138;
  lStack_1a0 = lStack_130;
  local_238._8_4_ = SUB84(dVar6,0);
  local_238._0_8_ = (dVar31 * dStack_1f0 - dVar36 * local_1e8) + dVar2 * dVar35 + 0.0 + local_1d8;
  local_238._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  local_220 = local_178[2];
  uStack_218 = uStack_160;
  local_210 = local_158;
  FUN_1483f2e3c(local_238,&local_1f8,local_178,&local_188);
  if (((int)param_1[0x337] != (int)uStack_180) ||
     (iVar8 = (int)param_1[0x337], (int)param_1[0x339] != (int)uStack_190)) {
    (**(code **)(*param_1 + 0xb00))(param_1);
    iVar8 = (int)uStack_180;
  }
  auVar7 = _DAT_1499387d0;
  if (0 < iVar8) {
    local_2d0 = param_1 + 0x336;
    dVar2 = (double)DAT_1499387d0;
    dVar31 = DAT_1499387d0._8_8_;
    lVar13 = 0;
    uVar14 = 0;
    do {
      lVar15 = local_188;
      FUN_140002266(&local_e8,L"OceanCollisionBoxComponent_%d",uVar14 & 0xffffffff);
      puVar12 = &DAT_149dfb77a;
      if ((int)uStack_e0 != 0) {
        puVar12 = local_e8;
      }
      FUN_1446f470e(&local_248,puVar12,1);
      uVar9 = FUN_14595b3ec();
      local_2e8 = (longlong *)((ulonglong)local_2e8 & 0xffffffff00000000);
      FUN_140af9fb2(&local_240,lVar3,uVar9,local_248);
      if (local_e8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (((longlong)(int)param_1[0x337] <= (longlong)uVar14) ||
         (lVar10 = *(longlong *)(*local_2d0 + uVar14 * 8), lVar10 == 0)) {
        lVar10 = FUN_1483f3a8a(lVar3,local_240);
        FUN_140486fc4(lVar10,param_1,0);
        if ((lVar10 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar10);
        }
        iVar8 = (int)param_1[0x337];
        *(uint *)(param_1 + 0x337) = iVar8 + 1U;
        if (*(uint *)((longlong)param_1 + 0x19bc) < iVar8 + 1U) {
          FUN_148401c26(local_2d0,iVar8);
        }
        *(longlong *)(*local_2d0 + (longlong)iVar8 * 8) = lVar10;
        if ((lVar10 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar10);
        }
      }
      FUN_1408c8a1a(lVar10);
      *(byte *)(lVar10 + 0x62c) = *(byte *)(lVar10 + 0x62c) | 1;
      local_258 = DAT_14c8464f0;
      local_268 = DAT_14c8464e0;
      uStack_260 = DAT_14c8464e8;
      auVar18 = *(undefined1 (*) [16])(lVar10 + 0x1b0);
      dVar6 = auVar18._0_8_;
      dVar17 = auVar18._8_8_;
      dVar36 = *(double *)(lVar10 + 0x1c0);
      puVar11 = *(undefined8 **)(lVar10 + 0x230);
      if (puVar11 == (undefined8 *)0x0) {
        puVar11 = (undefined8 *)FUN_14001cc68(0x40,0x10);
        uVar9 = DAT_14c8463d8;
        *puVar11 = DAT_14c8463d0;
        puVar11[1] = uVar9;
        uVar9 = DAT_14c8463e8;
        puVar11[2] = DAT_14c8463e0;
        puVar11[3] = uVar9;
        uVar9 = DAT_14c846500;
        puVar11[4] = DAT_14c8464f8;
        puVar11[5] = uVar9;
        puVar11[6] = DAT_14c846508;
        *(undefined8 **)(lVar10 + 0x230) = puVar11;
      }
      if (((((double)puVar11[4] != dVar6) || (NAN((double)puVar11[4]) || NAN(dVar6))) ||
          ((double)puVar11[5] != dVar17)) || (NAN((double)puVar11[5]) || NAN(dVar17))) {
LAB_1483f2548:
        auVar37._8_8_ = 0;
        auVar37._0_8_ = dVar36;
        auVar18 = divpd(auVar18,auVar7);
        auVar27 = divpd(auVar37,auVar7);
        auVar18 = roundpd(auVar18,auVar18,3);
        auVar27 = roundpd(auVar27,auVar27,3);
        dVar6 = dVar6 - auVar18._0_8_ * dVar2;
        dVar17 = dVar17 - auVar18._8_8_ * dVar31;
        auVar38._0_8_ = dVar36 - auVar27._0_8_ * dVar2;
        auVar38._8_8_ = 0.0 - auVar27._8_8_ * dVar31;
        auVar32._0_8_ = dVar6 + dVar2;
        auVar32._8_8_ = dVar17 + dVar31;
        auVar43._0_8_ = auVar38._0_8_ + dVar2;
        auVar43._8_8_ = auVar38._8_8_ + dVar31;
        auVar27._8_8_ = -(ulonglong)(0.0 <= dVar17);
        auVar27._0_8_ = -(ulonglong)(0.0 <= dVar6);
        auVar18._8_4_ = SUB84(dVar17,0);
        auVar18._0_8_ = dVar6;
        auVar18._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
        auVar18 = blendvpd(auVar32,auVar18,auVar27);
        auVar19._8_8_ = -(ulonglong)(0.0 <= auVar38._8_8_);
        auVar19._0_8_ = -(ulonglong)(0.0 <= auVar38._0_8_);
        auVar27 = blendvpd(auVar43,auVar38,auVar19);
        auVar28._0_8_ = auVar18._0_8_ + -360.0;
        auVar28._8_8_ = auVar18._8_8_ + -360.0;
        auVar20._8_8_ = -(ulonglong)(180.0 < auVar18._8_8_);
        auVar20._0_8_ = -(ulonglong)(180.0 < auVar18._0_8_);
        auVar18 = blendvpd(auVar18,auVar28,auVar20);
        dVar36 = auVar27._0_8_;
        *(undefined1 (*) [16])(puVar11 + 4) = auVar18;
        puVar11[6] = ~-(ulonglong)(180.0 < dVar36) & (ulonglong)dVar36 |
                     (ulonglong)(dVar36 + -360.0) & -(ulonglong)(180.0 < dVar36);
        FUN_144a7484c(puVar11 + 4,&local_e8);
        puVar11[2] = local_d8;
        puVar11[3] = uStack_d0;
        *puVar11 = local_e8;
        puVar11[1] = uStack_e0;
      }
      else if (((double)puVar11[6] != dVar36) || (NAN((double)puVar11[6]) || NAN(dVar36)))
      goto LAB_1483f2548;
      puVar1 = (undefined8 *)(lVar15 + lVar13);
      local_e8 = (undefined2 *)*puVar11;
      uStack_e0 = puVar11[1];
      local_d8 = puVar11[2];
      uStack_d0 = puVar11[3];
      local_108 = local_268;
      uStack_100 = uStack_260;
      local_f8 = local_258;
      local_2e0 = 0;
      local_2e8 = (longlong *)0x0;
      FUN_144927ad4(lVar10,&local_108,&local_e8,0);
      FUN_145733f44(param_1,lVar10);
      FUN_1457ba85c(param_1,lVar10);
      local_278 = puVar1[2];
      local_288 = *puVar1;
      uStack_280 = puVar1[1];
      auVar18 = *(undefined1 (*) [16])(lVar10 + 0x1b0);
      dVar6 = auVar18._0_8_;
      dVar17 = auVar18._8_8_;
      dVar36 = *(double *)(lVar10 + 0x1c0);
      puVar11 = *(undefined8 **)(lVar10 + 0x230);
      if (puVar11 == (undefined8 *)0x0) {
        puVar11 = (undefined8 *)FUN_14001cc68(0x40,0x10);
        uVar9 = DAT_14c8463d8;
        *puVar11 = DAT_14c8463d0;
        puVar11[1] = uVar9;
        uVar9 = DAT_14c8463e8;
        puVar11[2] = DAT_14c8463e0;
        puVar11[3] = uVar9;
        uVar9 = DAT_14c846500;
        puVar11[4] = DAT_14c8464f8;
        puVar11[5] = uVar9;
        puVar11[6] = DAT_14c846508;
        *(undefined8 **)(lVar10 + 0x230) = puVar11;
      }
      if ((((double)puVar11[4] != dVar6) || (NAN((double)puVar11[4]) || NAN(dVar6))) ||
         (((double)puVar11[5] != dVar17 || (NAN((double)puVar11[5]) || NAN(dVar17))))) {
LAB_1483f270f:
        auVar39._8_8_ = 0;
        auVar39._0_8_ = dVar36;
        auVar18 = divpd(auVar18,auVar7);
        auVar27 = divpd(auVar39,auVar7);
        auVar18 = roundpd(auVar18,auVar18,3);
        auVar27 = roundpd(auVar27,auVar27,3);
        dVar6 = dVar6 - auVar18._0_8_ * dVar2;
        dVar17 = dVar17 - auVar18._8_8_ * dVar31;
        auVar40._0_8_ = dVar36 - auVar27._0_8_ * dVar2;
        auVar40._8_8_ = 0.0 - auVar27._8_8_ * dVar31;
        auVar33._0_8_ = dVar6 + dVar2;
        auVar33._8_8_ = dVar17 + dVar31;
        auVar44._0_8_ = auVar40._0_8_ + dVar2;
        auVar44._8_8_ = auVar40._8_8_ + dVar31;
        auVar21._8_8_ = -(ulonglong)(0.0 <= dVar17);
        auVar21._0_8_ = -(ulonglong)(0.0 <= dVar6);
        auVar4._8_4_ = SUB84(dVar17,0);
        auVar4._0_8_ = dVar6;
        auVar4._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
        auVar18 = blendvpd(auVar33,auVar4,auVar21);
        auVar22._8_8_ = -(ulonglong)(0.0 <= auVar40._8_8_);
        auVar22._0_8_ = -(ulonglong)(0.0 <= auVar40._0_8_);
        auVar27 = blendvpd(auVar44,auVar40,auVar22);
        auVar29._0_8_ = auVar18._0_8_ + -360.0;
        auVar29._8_8_ = auVar18._8_8_ + -360.0;
        auVar23._8_8_ = -(ulonglong)(180.0 < auVar18._8_8_);
        auVar23._0_8_ = -(ulonglong)(180.0 < auVar18._0_8_);
        auVar18 = blendvpd(auVar18,auVar29,auVar23);
        dVar36 = auVar27._0_8_;
        *(undefined1 (*) [16])(puVar11 + 4) = auVar18;
        puVar11[6] = ~-(ulonglong)(180.0 < dVar36) & (ulonglong)dVar36 |
                     (ulonglong)(dVar36 + -360.0) & -(ulonglong)(180.0 < dVar36);
        FUN_144a7484c(puVar11 + 4,&local_e8);
        puVar11[2] = local_d8;
        puVar11[3] = uStack_d0;
        *puVar11 = local_e8;
        puVar11[1] = uStack_e0;
      }
      else if (((double)puVar11[6] != dVar36) || (NAN((double)puVar11[6]) || NAN(dVar36)))
      goto LAB_1483f270f;
      local_e8 = (undefined2 *)*puVar11;
      uStack_e0 = puVar11[1];
      local_d8 = puVar11[2];
      uStack_d0 = puVar11[3];
      local_108 = local_288;
      uStack_100 = uStack_280;
      local_f8 = local_278;
      local_2e0 = 0;
      local_2e8 = (longlong *)0x0;
      FUN_144927ad4(lVar10,&local_108,&local_e8,0);
      puVar11 = (undefined8 *)(lVar15 + 0x18 + lVar13);
      local_2a8 = *puVar11;
      uStack_2a0 = puVar11[1];
      local_298 = *(undefined8 *)(lVar15 + 0x28 + lVar13);
      FUN_140c9cc04(lVar10,&local_2a8,1);
      if ((*(byte *)(lVar10 + 0x9c) & 1) == 0) {
        FUN_140b506a4(lVar10);
      }
      uVar14 = uVar14 + 1;
      lVar13 = lVar13 + 0x38;
    } while ((longlong)uVar14 < (longlong)(int)uStack_180);
  }
  auVar7 = _DAT_1499387d0;
  if (0 < (int)uStack_190) {
    local_2d0 = param_1 + 0x338;
    dVar2 = (double)DAT_1499387d0;
    dVar31 = DAT_1499387d0._8_8_;
    lVar13 = 0;
    uVar14 = 0;
    do {
      lVar15 = local_198 + lVar13;
      FUN_140002266(&local_e8,L"OceanCollisionComponent_%d",uVar14 & 0xffffffff);
      puVar12 = &DAT_149dfb77a;
      if ((int)uStack_e0 != 0) {
        puVar12 = local_e8;
      }
      FUN_1446f470e(&local_2b0,puVar12,1);
      uVar9 = FUN_14595b3ec();
      local_2e8 = (longlong *)((ulonglong)local_2e8 & 0xffffffff00000000);
      FUN_140af9fb2(&local_240,lVar3,uVar9,local_2b0);
      if (local_e8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (((longlong)(int)param_1[0x339] <= (longlong)uVar14) ||
         (lVar10 = *(longlong *)(*local_2d0 + uVar14 * 8), lVar10 == 0)) {
        lVar10 = FUN_1483f3b42(lVar3,local_240);
        FUN_140486fc4(lVar10,param_1,0);
        if ((lVar10 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar10);
        }
        iVar8 = (int)param_1[0x339];
        *(uint *)(param_1 + 0x339) = iVar8 + 1U;
        if (*(uint *)((longlong)param_1 + 0x19cc) < iVar8 + 1U) {
          FUN_148401cac(local_2d0,iVar8);
        }
        *(longlong *)(*local_2d0 + (longlong)iVar8 * 8) = lVar10;
        if ((lVar10 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar10);
        }
      }
      FUN_1408c8a1a(lVar10);
      local_2b8 = DAT_14c8464f0;
      local_2c8 = DAT_14c8464e0;
      uStack_2c0 = DAT_14c8464e8;
      auVar18 = *(undefined1 (*) [16])(lVar10 + 0x1b0);
      dVar6 = auVar18._0_8_;
      dVar17 = auVar18._8_8_;
      dVar36 = *(double *)(lVar10 + 0x1c0);
      puVar11 = *(undefined8 **)(lVar10 + 0x230);
      if (puVar11 == (undefined8 *)0x0) {
        puVar11 = (undefined8 *)FUN_14001cc68(0x40,0x10);
        uVar9 = DAT_14c8463d8;
        *puVar11 = DAT_14c8463d0;
        puVar11[1] = uVar9;
        uVar9 = DAT_14c8463e8;
        puVar11[2] = DAT_14c8463e0;
        puVar11[3] = uVar9;
        uVar9 = DAT_14c846500;
        puVar11[4] = DAT_14c8464f8;
        puVar11[5] = uVar9;
        puVar11[6] = DAT_14c846508;
        *(undefined8 **)(lVar10 + 0x230) = puVar11;
      }
      if (((((double)puVar11[4] != dVar6) || (NAN((double)puVar11[4]) || NAN(dVar6))) ||
          ((double)puVar11[5] != dVar17)) || (NAN((double)puVar11[5]) || NAN(dVar17))) {
LAB_1483f2b3d:
        auVar41._8_8_ = 0;
        auVar41._0_8_ = dVar36;
        auVar18 = divpd(auVar18,auVar7);
        auVar27 = divpd(auVar41,auVar7);
        auVar18 = roundpd(auVar18,auVar18,3);
        auVar27 = roundpd(auVar27,auVar27,3);
        dVar6 = dVar6 - auVar18._0_8_ * dVar2;
        dVar17 = dVar17 - auVar18._8_8_ * dVar31;
        auVar42._0_8_ = dVar36 - auVar27._0_8_ * dVar2;
        auVar42._8_8_ = 0.0 - auVar27._8_8_ * dVar31;
        auVar34._0_8_ = dVar6 + dVar2;
        auVar34._8_8_ = dVar17 + dVar31;
        auVar45._0_8_ = auVar42._0_8_ + dVar2;
        auVar45._8_8_ = auVar42._8_8_ + dVar31;
        auVar24._8_8_ = -(ulonglong)(0.0 <= dVar17);
        auVar24._0_8_ = -(ulonglong)(0.0 <= dVar6);
        auVar5._8_4_ = SUB84(dVar17,0);
        auVar5._0_8_ = dVar6;
        auVar5._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
        auVar18 = blendvpd(auVar34,auVar5,auVar24);
        auVar25._8_8_ = -(ulonglong)(0.0 <= auVar42._8_8_);
        auVar25._0_8_ = -(ulonglong)(0.0 <= auVar42._0_8_);
        auVar27 = blendvpd(auVar45,auVar42,auVar25);
        auVar30._0_8_ = auVar18._0_8_ + -360.0;
        auVar30._8_8_ = auVar18._8_8_ + -360.0;
        auVar26._8_8_ = -(ulonglong)(180.0 < auVar18._8_8_);
        auVar26._0_8_ = -(ulonglong)(180.0 < auVar18._0_8_);
        auVar18 = blendvpd(auVar18,auVar30,auVar26);
        dVar36 = auVar27._0_8_;
        *(undefined1 (*) [16])(puVar11 + 4) = auVar18;
        puVar11[6] = ~-(ulonglong)(180.0 < dVar36) & (ulonglong)dVar36 |
                     (ulonglong)(dVar36 + -360.0) & -(ulonglong)(180.0 < dVar36);
        FUN_144a7484c(puVar11 + 4,&local_e8);
        puVar11[2] = local_d8;
        puVar11[3] = uStack_d0;
        *puVar11 = local_e8;
        puVar11[1] = uStack_e0;
      }
      else if (((double)puVar11[6] != dVar36) || (NAN((double)puVar11[6]) || NAN(dVar36)))
      goto LAB_1483f2b3d;
      local_e8 = (undefined2 *)*puVar11;
      uStack_e0 = puVar11[1];
      local_d8 = puVar11[2];
      uStack_d0 = puVar11[3];
      local_108 = local_2c8;
      uStack_100 = uStack_2c0;
      local_f8 = local_2b8;
      local_2e0 = 0;
      local_2e8 = (longlong *)0x0;
      FUN_144927ad4(lVar10,&local_108,&local_e8,0);
      FUN_145733f44(param_1,lVar10);
      FUN_1457ba85c(param_1,lVar10);
      FUN_1483e3258(lVar10,lVar15);
      if ((*(byte *)(lVar10 + 0x9c) & 1) == 0) {
        FUN_140b506a4(lVar10);
      }
      uVar14 = uVar14 + 1;
      lVar13 = lVar13 + 0x10;
    } while ((longlong)uVar14 < (longlong)(int)uStack_190);
  }
  FUN_148401bf0(local_198);
  if (local_198 != 0) {
    FUN_1400020a8();
  }
  if (local_188 != 0) {
    FUN_1400020a8();
  }
  if (local_178[0] != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_c0 ^ (ulonglong)auStack_308);
}



// FUNCTION 1483f2e3c FUN_1483f2e3c body=3149 status=ok
// SIG undefined FUN_1483f2e3c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1483f2e3c(double *param_1,double *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
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
  ulonglong uVar15;
  int iVar16;
  double dVar17;
  uint uVar18;
  double *pdVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  double *pdVar23;
  longlong lVar24;
  longlong lVar25;
  double dVar26;
  double dVar28;
  undefined1 auVar27 [16];
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined1 auVar33 [16];
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auStack_4e8 [32];
  double local_4c8;
  double local_4c0;
  double local_4b8;
  double dStack_4b0;
  double local_4a8;
  double dStack_4a0;
  undefined1 local_498 [16];
  undefined1 local_488 [16];
  undefined8 local_478;
  double dStack_470;
  double local_468;
  double dStack_460;
  double local_458;
  double dStack_450;
  double local_448;
  double dStack_440;
  longlong local_438;
  ulonglong uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  double local_418;
  double dStack_410;
  double local_408;
  double dStack_400;
  double local_3f8;
  double local_3f0;
  double dStack_3e8;
  undefined4 local_3e0;
  undefined4 uStack_3dc;
  double local_3d8;
  double local_3d0;
  double local_3c8;
  double local_3c0;
  double local_3b8;
  double local_3b0;
  double local_3a8;
  double local_3a0;
  double local_390;
  double local_388;
  longlong local_378;
  undefined8 uStack_370;
  longlong local_368;
  ulonglong uStack_360;
  double local_358;
  undefined8 uStack_350;
  double local_348;
  double local_340;
  double local_338;
  double local_330;
  double local_328;
  double local_320;
  double local_318;
  double dStack_310;
  undefined1 local_308 [16];
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  undefined8 uStack_2e0;
  undefined1 local_2d8 [16];
  double local_2c8;
  undefined8 uStack_2c0;
  double local_f0;
  
  dVar17 = (double)(DAT_14c707940 ^ (ulonglong)auStack_4e8);
  local_320 = param_1[2] + param_1[5];
  local_328 = param_1[1] + param_1[4];
  local_330 = *param_1 + param_1[3];
  local_338 = param_1[2] - param_1[5];
  local_340 = param_1[1] - param_1[4];
  local_348 = *param_1 - param_1[3];
  local_358 = 0.0;
  uStack_350 = 0;
  lVar25 = param_3[1];
  pdVar19 = param_1;
  local_f0 = dVar17;
  if ((longlong)(int)lVar25 != 0) {
    lVar20 = *param_3;
    lVar22 = 0;
    do {
      uVar4 = *(undefined8 *)(lVar20 + lVar22);
      pdVar19 = &local_318;
      dVar17 = (double)FUN_1483f7cd6(&local_318,uVar4,0);
      if ((((local_348 < (double)local_308._8_8_) && (local_318 < local_330)) &&
          (local_340 < local_2f8)) &&
         (((dStack_310 < local_328 && (local_338 < dStack_2f0)) &&
          ((double)local_308._0_8_ < local_320)))) {
        pdVar19 = &local_348;
        dVar17 = (double)FUN_146c894e0(pdVar19,&local_318);
        if (SUB81(dVar17,0) == '\0') {
          dVar17 = (double)(longlong)(int)uStack_350;
          uVar18 = (int)uStack_350 + 1;
          uStack_350 = CONCAT44(uStack_350._4_4_,uVar18);
          if (uStack_350._4_4_ < uVar18) {
            pdVar19 = &local_358;
            local_4c8 = dVar17;
            FUN_1483f07d8(pdVar19,dVar17);
            dVar17 = local_4c8;
          }
          *(undefined8 *)((longlong)local_358 + (longlong)dVar17 * 8) = uVar4;
          dVar17 = local_358;
        }
      }
      lVar22 = lVar22 + 8;
    } while ((longlong)(int)lVar25 * 8 != lVar22);
    if ((int)uStack_350 != 0) {
      local_368 = 0;
      uStack_360 = 0;
      FUN_1483f7f94(&local_358,&local_368);
      local_4a8 = *param_2;
      dStack_4a0 = param_2[1];
      local_4b8 = param_2[2];
      dStack_4b0 = param_2[3];
      local_448 = param_2[4];
      dStack_440 = param_2[5];
      local_458 = param_2[6];
      dStack_450 = param_2[7];
      local_468 = param_2[8];
      dStack_460 = param_2[9];
      local_478 = param_2[10];
      dStack_470 = param_2[0xb];
      local_378 = 0;
      uStack_370 = 0;
      if (0 < (int)uStack_360) {
        local_488._8_4_ = SUB84(dStack_4a0,0);
        local_488._0_8_ = dStack_4a0;
        local_488._12_4_ = (int)((ulonglong)dStack_4a0 >> 0x20);
        local_498._8_4_ = SUB84(dStack_4b0,0);
        local_498._0_8_ = dStack_4b0;
        local_498._12_4_ = (int)((ulonglong)dStack_4b0 >> 0x20);
        lVar25 = 0;
        lVar20 = 0;
        do {
          lVar22 = local_368 + lVar25;
          FUN_1483f7e2a(&local_3a8,lVar22);
          dVar5 = local_3a8 + -1000.0;
          dVar34 = local_390 + 1000.0;
          dVar17 = local_3a0 + -1000.0;
          dVar6 = local_388 + 1000.0;
          local_4c0 = local_338;
          local_3c8 = local_338;
          local_4c8 = local_320;
          local_3b0 = local_320;
          local_3d8 = dVar5;
          local_3d0 = dVar17;
          local_3c0 = dVar34;
          local_3b8 = dVar6;
          FUN_1483f786a(&local_318,&local_3d8,lVar22);
          local_428 = local_4a8;
          uStack_420 = (double)local_488._0_8_;
          local_418 = local_4b8;
          dStack_410 = (double)local_498._0_8_;
          local_408 = local_448;
          dStack_400 = dStack_440;
          local_3f8 = local_458;
          local_3f0 = local_468;
          dStack_3e8 = dStack_460;
          local_3e0 = (undefined4)local_478;
          uStack_3dc = local_478._4_4_;
          FUN_146c3cfa5(&local_318,&local_428,0);
          local_428 = 1.79769313486232e+308;
          uStack_420 = 1.79769313486232e+308;
          local_418 = 1.79769313486232e+308;
          dStack_410 = -1.79769313486232e+308;
          local_408 = -1.79769313486232e+308;
          dStack_400 = -1.79769313486232e+308;
          local_438 = 0;
          uStack_430 = 0;
          FUN_143b2fc70(&local_318,&local_428,&local_438);
          dVar32 = dStack_400;
          dVar11 = local_408;
          dVar10 = dStack_410;
          dVar9 = local_418;
          dVar8 = uStack_420;
          dVar7 = local_428;
          iVar16 = (int)param_4[1];
          *(uint *)(param_4 + 1) = iVar16 + 1U;
          if (*(uint *)((longlong)param_4 + 0xc) < iVar16 + 1U) {
            FUN_14177df02(param_4,iVar16);
          }
          lVar22 = *param_4;
          lVar21 = (longlong)iVar16 * 0x38;
          *(double *)(lVar22 + lVar21) = (dVar7 + dVar10) * 0.5;
          *(double *)(lVar22 + 8 + lVar21) = (dVar8 + dVar11) * 0.5;
          *(double *)(lVar22 + 0x10 + lVar21) = (dVar9 + dVar32) * 0.5;
          *(double *)(lVar22 + 0x18 + lVar21) = (dVar10 - dVar7) * 0.5;
          *(double *)(lVar22 + 0x20 + lVar21) = (dVar11 - dVar8) * 0.5;
          *(double *)(lVar22 + 0x28 + lVar21) = (dVar32 - dVar9) * 0.5;
          iVar16 = (int)param_5[1];
          *(uint *)(param_5 + 1) = iVar16 + 1U;
          if (*(uint *)((longlong)param_5 + 0xc) < iVar16 + 1U) {
            FUN_148402194(param_5,iVar16);
          }
          uVar15 = uStack_430;
          lVar21 = local_438;
          lVar22 = *param_5;
          lVar24 = (longlong)iVar16 * 0x10;
          puVar2 = (undefined8 *)(lVar22 + lVar24);
          *(undefined8 *)(lVar22 + lVar24) = 0;
          *(int *)(lVar22 + 8 + lVar24) = (int)uStack_430;
          if ((int)uStack_430 == 0) {
            *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
          }
          else {
            FUN_1478580d8(puVar2,uStack_430 & 0xffffffff,0);
            FUN_14785813a(*puVar2,lVar21,uVar15 & 0xffffffff);
          }
          uVar15 = uStack_370;
          lVar22 = (longlong)(int)uStack_370;
          uVar18 = (int)uStack_370 + 1;
          uStack_370 = CONCAT44(uStack_370._4_4_,uVar18);
          if (uStack_370._4_4_ < uVar18) {
            FUN_146bf26b8(&local_378,uVar15 & 0xffffffff);
          }
          lVar22 = lVar22 * 0x30;
          *(double *)(local_378 + lVar22) = dVar5;
          *(double *)(local_378 + 8 + lVar22) = dVar17;
          *(double *)(local_378 + 0x10 + lVar22) = local_4c0;
          *(double *)(local_378 + 0x18 + lVar22) = dVar34;
          *(double *)(local_378 + 0x20 + lVar22) = dVar6;
          *(double *)(local_378 + 0x28 + lVar22) = local_4c8;
          FUN_1400d7e1b(local_438,uStack_430 & 0xffffffff);
          if (local_438 != 0) {
            FUN_1400020a8();
          }
          FUN_141082778(&local_318);
          lVar20 = lVar20 + 1;
          lVar25 = lVar25 + 0x10;
        } while (lVar20 < (int)uStack_360);
      }
      local_318 = 0.0;
      dStack_310 = 0.0;
      FUN_1483f8a96(&local_348,&local_378,&local_318);
      dVar17 = local_318;
      lVar25 = (longlong)dStack_310._0_4_;
      if (lVar25 != 0) {
        lVar20 = 0;
        do {
          local_4c8 = *(double *)((longlong)dVar17 + 0x10 + lVar20);
          dVar5 = *(double *)((longlong)dVar17 + 0x28 + lVar20);
          local_4c0 = *(double *)((longlong)dVar17 + lVar20);
          local_4a8 = *(double *)((longlong)dVar17 + 8 + lVar20);
          dVar6 = *(double *)((longlong)dVar17 + 0x20 + lVar20);
          dVar7 = *(double *)((longlong)dVar17 + 0x18 + lVar20);
          dVar9 = (local_4c0 + dVar7) * 0.5 - param_2[4];
          dVar10 = (local_4a8 + dVar6) * 0.5 - param_2[5];
          dVar11 = (local_4c8 + dVar5) * 0.5 - param_2[6];
          dVar14 = *param_2;
          dVar28 = param_2[1];
          local_4b8 = param_2[8];
          dStack_4b0 = param_2[9];
          dVar32 = param_2[2] * -1.0;
          dVar34 = param_2[3] * 1.0;
          dVar12 = ABS(local_4b8);
          dVar13 = ABS(dStack_4b0);
          dVar8 = param_2[10];
          iVar16 = (int)param_4[1];
          *(uint *)(param_4 + 1) = iVar16 + 1U;
          if (*(uint *)((longlong)param_4 + 0xc) < iVar16 + 1U) {
            FUN_14177df02(param_4,iVar16);
          }
          dVar26 = -dVar14;
          dVar28 = -dVar28;
          dVar29 = dVar9 * dVar32 - dVar26 * dVar11;
          dVar30 = dVar10 * dVar26 - dVar9 * dVar28;
          dVar31 = dVar11 * dVar28 - dVar10 * dVar32;
          dVar31 = dVar31 + dVar31;
          dVar29 = dVar29 + dVar29;
          dVar30 = dVar30 + dVar30;
          auVar27._8_8_ = dStack_4b0;
          auVar27._0_8_ = local_4b8;
          auVar27 = divpd(_DAT_149934d80,auVar27);
          dVar10 = (double)(-(ulonglong)(9.99999993922529e-09 < dVar13) & auVar27._8_8_) *
                   (dVar14 * dVar30 + dVar32 * dVar31 + dVar34 * dVar29 + dVar10);
          lVar22 = *param_4;
          lVar21 = (longlong)iVar16 * 0x38;
          auVar3._8_4_ = SUB84(dVar10,0);
          auVar3._0_8_ = (double)(-(ulonglong)(9.99999993922529e-09 < dVar12) & auVar27._0_8_) *
                         ((dVar30 * dVar28 - dVar29 * dVar32) + dVar34 * dVar31 + dVar9);
          auVar3._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
          *(undefined1 (*) [16])(lVar22 + lVar21) = auVar3;
          *(double *)(lVar22 + 0x10 + lVar21) =
               (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar8)) & (ulonglong)(1.0 / dVar8))
               * (dVar34 * dVar30 + dVar11 + (dVar29 * dVar26 - dVar31 * dVar28));
          *(double *)(lVar22 + 0x18 + lVar21) = (dVar7 - local_4c0) * 0.5;
          *(double *)(lVar22 + 0x20 + lVar21) = (dVar6 - local_4a8) * 0.5;
          *(double *)(lVar22 + 0x28 + lVar21) = (dVar5 - local_4c8) * 0.5;
          lVar20 = lVar20 + 0x30;
        } while (lVar25 * 0x30 != lVar20);
      }
      if (local_318 != 0.0) {
        FUN_1400020a8(local_318);
      }
      if (local_378 != 0) {
        FUN_1400020a8();
      }
      FUN_148401f6a(local_368,uStack_360 & 0xffffffff);
      if (local_368 != 0) {
        FUN_1400020a8();
      }
      goto LAB_1483f328f;
    }
  }
  auVar3 = *(undefined1 (*) [16])(param_2 + 8);
  auVar27 = *(undefined1 (*) [16])(param_2 + 10);
  lVar25 = -(ulonglong)(9.99999993922529e-09 < ABS(auVar3._8_8_));
  auVar33._8_4_ = (int)lVar25;
  auVar33._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar3._0_8_));
  auVar33._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
  iVar16 = movmskpd(SUB84(dVar17,0),auVar33);
  lVar25 = -(ulonglong)(9.99999993922529e-09 < ABS(auVar27._8_8_));
  auVar35._8_4_ = (int)lVar25;
  auVar35._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar27._0_8_));
  auVar35._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
  uVar18 = movmskpd((int)pdVar19,auVar35);
  if ((uVar18 & 0x3fffffff) == 0 && iVar16 == 0) {
    pdVar19 = (double *)&DAT_14c846480;
    pdVar23 = &local_318;
    for (lVar25 = 0xc; lVar25 != 0; lVar25 = lVar25 + -1) {
      *pdVar23 = *pdVar19;
      pdVar19 = pdVar19 + 1;
      pdVar23 = pdVar23 + 1;
    }
  }
  else {
    auVar35 = divpd(_DAT_149934d80,auVar3);
    auVar33 = divpd(ZEXT816(0x3ff0000000000000),auVar27);
    dVar17 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar3._0_8_)) & auVar35._0_8_);
    dVar5 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar3._8_8_)) & auVar35._8_8_);
    local_2c8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar27._0_8_)) & auVar33._0_8_);
    local_318 = -*param_2;
    dStack_310 = -param_2[1];
    dVar7 = param_2[2] * -1.0;
    dVar8 = param_2[3] * 1.0;
    dVar32 = param_2[4] * dVar17;
    dVar34 = param_2[5] * dVar5;
    dVar6 = param_2[6] * local_2c8;
    local_308._8_4_ = SUB84(dVar8,0);
    local_308._0_8_ = dVar7;
    local_308._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    dVar10 = dVar34 * local_318 - dStack_310 * dVar32;
    dVar11 = dVar6 * dStack_310 - dVar7 * dVar34;
    dVar9 = dVar32 * dVar7 - local_318 * dVar6;
    dVar11 = dVar11 + dVar11;
    dVar9 = dVar9 + dVar9;
    dVar10 = dVar10 + dVar10;
    local_2f8 = 0.0 - ((dVar10 * dStack_310 - dVar9 * dVar7) + dVar8 * dVar11 + dVar32);
    dStack_2f0 = 0.0 - (dVar10 * *param_2 + dVar7 * dVar11 + dVar8 * dVar9 + dVar34);
    local_2e8 = 0.0 - (dVar8 * dVar10 + dVar6 + (dVar9 * local_318 - dVar11 * dStack_310));
    uStack_2e0 = 0;
    local_2d8._8_4_ = SUB84(dVar5,0);
    local_2d8._0_8_ = dVar17;
    local_2d8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    uStack_2c0 = 0;
  }
  FUN_144a80a4c(param_1,&local_428,&local_318);
  iVar16 = (int)param_4[1];
  *(uint *)(param_4 + 1) = iVar16 + 1U;
  if (*(uint *)((longlong)param_4 + 0xc) < iVar16 + 1U) {
    FUN_14177df02(param_4,iVar16);
  }
  lVar25 = *param_4;
  lVar20 = (longlong)iVar16 * 0x38;
  *(double *)(lVar25 + 0x30 + lVar20) = local_3f8;
  pdVar19 = (double *)(lVar25 + 0x20 + lVar20);
  *pdVar19 = local_408;
  pdVar19[1] = dStack_400;
  pdVar19 = (double *)(lVar25 + 0x10 + lVar20);
  *pdVar19 = local_418;
  pdVar19[1] = dStack_410;
  puVar1 = (undefined4 *)(lVar25 + lVar20);
  *puVar1 = (undefined4)local_428;
  puVar1[1] = local_428._4_4_;
  puVar1[2] = (undefined4)uStack_420;
  puVar1[3] = uStack_420._4_4_;
LAB_1483f328f:
  if (local_358 != 0.0) {
    FUN_1400020a8();
  }
  if (((ulonglong)local_f0 ^ (ulonglong)auStack_4e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483f3a8a FUN_1483f3a8a body=183 status=ok
// SIG undefined FUN_1483f3a8a(void)

undefined8 FUN_1483f3a8a(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_14595b4d6();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 8;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483f3b42 FUN_1483f3b42 body=183 status=ok
// SIG undefined FUN_1483f3b42(void)

undefined8 FUN_1483f3b42(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_14595b3ec();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 8;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483f3c02 FUN_1483f3c02 body=232 status=ok
// SIG undefined FUN_1483f3c02(void)

void FUN_1483f3c02(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1483f3cec(param_1,local_20,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483f3cec FUN_1483f3cec body=214 status=ok
// SIG undefined FUN_1483f3cec(void)

void FUN_1483f3cec(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  byte bVar2;
  
  if (param_1[0x338] == param_2) {
    lVar1 = param_1[0x33b];
    if (param_2 != 0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(param_2);
    }
    bVar2 = DAT_14c950c29;
    param_1[0x338] = param_2;
    if ((param_3 != 0) && ((bVar2 & 1) != 0)) {
      FUN_1456cec3c(param_3);
    }
    param_1[0x33b] = param_3;
    if (lVar1 == param_3) {
      return;
    }
  }
  else {
    if (param_2 != 0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(param_2);
    }
    bVar2 = DAT_14c950c29;
    param_1[0x338] = param_2;
    if ((param_3 != 0) && ((bVar2 & 1) != 0)) {
      FUN_1456cec3c(param_3);
    }
    param_1[0x33b] = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x0001483f3d42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xac0))(param_1);
  return;
}



// FUNCTION 1483f3dc2 FUN_1483f3dc2 body=191 status=ok
// SIG undefined FUN_1483f3dc2(void)

void FUN_1483f3dc2(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  lVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_20);
  }
  param_1[0x338] = lVar1;
  (**(code **)(*param_1 + 0xac0))(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483f3e82 FUN_1483f3e82 body=191 status=ok
// SIG undefined FUN_1483f3e82(void)

void FUN_1483f3e82(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  lVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_20);
  }
  param_1[0x33b] = lVar1;
  (**(code **)(*param_1 + 0xac0))(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483f3f46 FUN_1483f3f46 body=149 status=ok
// SIG undefined FUN_1483f3f46(void)

longlong * FUN_1483f3f46(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar1 = *(int *)(param_1 + 0x19b8);
  if (-1 < iVar1) {
    if (iVar1 != 0) {
      FUN_140337ccc(param_2);
      iVar1 = *(int *)(param_1 + 0x19b8);
      if ((longlong)iVar1 != 0) {
        lVar3 = *(longlong *)(param_1 + 0x19b0);
        lVar5 = 0;
        do {
          lVar4 = *(longlong *)(lVar3 + lVar5);
          if (lVar4 != 0) {
            iVar2 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar2 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
              FUN_140c43e06(param_2,iVar2);
            }
            *(longlong *)(*param_2 + (longlong)iVar2 * 8) = lVar4;
          }
          lVar5 = lVar5 + 8;
        } while ((longlong)iVar1 * 8 != lVar5);
      }
    }
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar1);
}



// FUNCTION 1483f3fdc FUN_1483f3fdc body=133 status=ok
// SIG undefined FUN_1483f3fdc(void)

void FUN_1483f3fdc(longlong param_1)

{
  int iVar1;
  byte bVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  
  lVar3 = FUN_140b94ea6();
  if (lVar3 != 0) {
    iVar1 = *(int *)(lVar3 + 0x628);
    bVar2 = FUN_147a244ec(lVar3);
    uVar4 = iVar1 - (uint)(bVar2 ^ 1);
    if (*(uint *)(param_1 + 0x19b8) != uVar4) {
LAB_1483f4050:
      FUN_1483f4062(param_1);
      return;
    }
    if (0 < (int)uVar4) {
      uVar5 = 0;
      do {
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x19b0) + uVar5 * 8);
        if (lVar3 == 0) goto LAB_1483f4050;
        FUN_1483f4248(param_1,lVar3,uVar5 & 0xffffffff);
        FUN_1448215fa(lVar3);
        uVar5 = uVar5 + 1;
      } while (uVar4 != uVar5);
    }
  }
  return;
}



// FUNCTION 1483f4062 FUN_1483f4062 body=484 status=ok
// SIG undefined FUN_1483f4062(void)

void FUN_1483f4062(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined2 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  (**(code **)(*param_1 + 0xb00))();
  lVar2 = param_1[0x15];
  lVar4 = FUN_140b94ea6(param_1);
  if (lVar4 != 0) {
    iVar7 = *(int *)(lVar4 + 0x628);
    bVar3 = FUN_147a244ec(lVar4);
    iVar7 = iVar7 - (uint)(bVar3 ^ 1);
    if (0 < iVar7) {
      iVar8 = 0;
      do {
        FUN_140002266(&local_58,L"SplineMeshComponent_%d",iVar8);
        puVar6 = &DAT_149dfb77a;
        if (local_50 != 0) {
          puVar6 = local_58;
        }
        FUN_1446f470e(&local_60,puVar6,1);
        local_70 = 0;
        local_78 = 0;
        plVar5 = (longlong *)FUN_1483f46c8(lVar2,local_60,8,0);
        FUN_1408c8a1a(plVar5);
        if ((plVar5 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(plVar5);
        }
        iVar1 = (int)param_1[0x337];
        *(uint *)(param_1 + 0x337) = iVar1 + 1U;
        if (*(uint *)((longlong)param_1 + 0x19bc) < iVar1 + 1U) {
          FUN_148401d92(param_1 + 0x336,iVar1);
        }
        *(longlong **)(param_1[0x336] + (longlong)iVar1 * 8) = plVar5;
        if ((plVar5 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(plVar5);
        }
        (**(code **)(*plVar5 + 0x588))(plVar5,*(undefined1 *)(*(longlong *)(lVar2 + 0x1c8) + 0x1fb))
        ;
        FUN_140486fc4(plVar5,param_1,0);
        lVar4 = param_1[0x16];
        if (lVar4 == 0) {
          lVar4 = FUN_1448abda6(param_1);
          if (lVar4 != 0) {
            lVar4 = param_1[0x16];
            if (lVar4 == 0) {
              lVar4 = FUN_1448abda6(param_1);
            }
            goto LAB_1483f41e5;
          }
        }
        else {
LAB_1483f41e5:
          if ((*(byte *)(lVar4 + 0x153) & 0x40) != 0) {
            FUN_140b506a4(plVar5);
          }
        }
        FUN_1483f4248(param_1,plVar5,iVar8);
        if (local_58 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        iVar8 = iVar8 + 1;
      } while (iVar7 != iVar8);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483f4248 FUN_1483f4248 body=1012 status=ok
// SIG undefined FUN_1483f4248(void)

void FUN_1483f4248(longlong *param_1,longlong *param_2,int param_3)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  undefined1 local_1c0;
  undefined8 *local_1b0;
  longlong local_1a8 [2];
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_88;
  double local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  if (param_2 != (longlong *)0x0) {
    *(byte *)((longlong)param_2 + 0x9f) = *(byte *)((longlong)param_2 + 0x9f) & 0xfd;
  }
  lVar7 = FUN_140b94ea6(param_1);
  if (lVar7 != 0) {
    iVar4 = *(int *)(lVar7 + 0x628);
    cVar6 = FUN_147a244ec(lVar7);
    iVar10 = param_3 + 1;
    if (iVar4 + -1 == param_3) {
      iVar10 = 0;
    }
    if (cVar6 == '\0') {
      iVar10 = param_3 + 1;
    }
    lVar11 = param_1[0x205];
    if (lVar11 == 0) {
      lVar9 = FUN_140702386();
      lVar11 = *(longlong *)(lVar9 + 0x110);
      if (lVar11 == 0) {
        FUN_140aa6c08(lVar9);
        lVar11 = *(longlong *)(lVar9 + 0x110);
      }
      lVar11 = *(longlong *)(lVar11 + 0x68);
    }
    (**(code **)(*param_2 + 0xa78))(param_2,lVar11);
    (**(code **)(*param_1 + 0xb78))(param_1);
    (**(code **)(*param_2 + 0x638))(param_2,0,param_1[0x208]);
    FUN_145733f44(param_1,param_2);
    FUN_1457ba85c(param_1,param_2);
    FUN_1417be62e(param_2,0);
    FUN_147a21058(lVar7,&local_88,param_3);
    FUN_147a21058(lVar7,&local_a0,iVar10);
    local_b8 = *(double *)(lVar11 + 0x220) + *(double *)(lVar11 + 0x220);
    local_c0 = *(double *)(lVar11 + 0x218) + *(double *)(lVar11 + 0x218);
    if (local_c0 <= 9.999999747378752e-05) {
      local_c0 = 9.999999747378752e-05;
    }
    if (local_b8 <= 9.999999747378752e-05) {
      local_b8 = 9.999999747378752e-05;
    }
    local_a8 = local_80 / local_b8;
    local_b0 = local_88 / local_c0;
    FUN_147a282d0(param_2,&local_b0,0);
    local_b8 = local_98 / local_b8;
    local_c0 = local_a0 / local_c0;
    FUN_147a28314(param_2,&local_c0,0);
    local_1c8._0_4_ = 0;
    FUN_147a1f174(lVar7,param_3,&local_d8,&local_f0);
    local_1c8 = (undefined8 *)((ulonglong)local_1c8._4_4_ << 0x20);
    FUN_147a1f174(lVar7,iVar10,&local_108,&local_120);
    local_1c8 = &local_138;
    local_128 = local_110;
    local_138 = local_120;
    uStack_130 = uStack_118;
    local_158 = local_108;
    uStack_150 = uStack_100;
    local_148 = local_f8;
    local_178 = local_f0;
    uStack_170 = uStack_e8;
    local_168 = local_e0;
    local_198 = local_d8;
    uStack_194 = uStack_d4;
    uStack_190 = uStack_d0;
    uStack_18c = uStack_cc;
    local_188 = local_c8;
    local_1c0 = 0;
    FUN_147a28118(param_2);
    FUN_147a2842a(param_2);
    lVar7 = (**(code **)(*param_2 + 0x7a0))(param_2);
    if (lVar7 != 0) {
      lVar7 = (**(code **)(*param_2 + 0x7a0))(param_2);
      if ((longlong)*(int *)(lVar7 + 0x70) != 0) {
        lVar11 = *(longlong *)(lVar7 + 0x68);
        lVar7 = (longlong)*(int *)(lVar7 + 0x70) * 0x100 + lVar11;
        do {
          iVar4 = *(int *)(lVar11 + 0x38);
          local_1a8[0] = 0;
          local_1a8[1] = 0;
          FUN_140627580(local_1a8,iVar4,1);
          if (0 < (longlong)iVar4) {
            lVar9 = 0;
            do {
              lVar5 = *(longlong *)(lVar11 + 0x30);
              dVar2 = *(double *)(lVar5 + 0x10 + lVar9 * 2);
              dVar3 = *(double *)(lVar5 + 8 + lVar9 * 2);
              *(float *)(local_1a8[0] + lVar9) = (float)*(double *)(lVar5 + lVar9 * 2);
              *(float *)(local_1a8[0] + 4 + lVar9) = (float)dVar3;
              *(float *)(local_1a8[0] + 8 + lVar9) = (float)dVar2;
              lVar9 = lVar9 + 0xc;
            } while ((longlong)iVar4 * 0xc != lVar9);
          }
          puVar8 = (undefined8 *)FUN_14001cc68(0xb0,0x10);
          FUN_146d83314(puVar8,local_1a8,0,0);
          if (puVar8 != (undefined8 *)0x0) {
            LOCK();
            *(int *)(puVar8 + 1) = *(int *)(puVar8 + 1) + 1;
            UNLOCK();
          }
          local_1b0 = puVar8;
          FUN_140ab29fc(lVar11,&local_1b0,1);
          if (local_1b0 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(local_1b0 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if ((*piVar1 == 0) && (*(int *)((longlong)local_1b0 + 0xc) == 0)) {
              (**(code **)*local_1b0)(local_1b0,1);
            }
          }
          if (local_1a8[0] != 0) {
            FUN_1400020a8();
          }
          lVar11 = lVar11 + 0x100;
        } while (lVar11 != lVar7);
      }
      FUN_1406cc378(param_2);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483f463e FUN_1483f463e body=122 status=ok
// SIG undefined FUN_1483f463e(void)

void FUN_1483f463e(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x19b8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x19b0);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x420))(plVar3,0);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  *(undefined4 *)(param_1 + 0x19b8) = 0;
  if (*(int *)(param_1 + 0x19bc) == 0) {
    return;
  }
  FUN_148401d32(param_1 + 0x19b0,0);
  return;
}



// FUNCTION 1483f46c8 FUN_1483f46c8 body=217 status=ok
// SIG undefined FUN_1483f46c8(void)

undefined8
FUN_1483f46c8(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
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
  uVar1 = FUN_141235872();
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



// FUNCTION 1483f47a2 FUN_1483f47a2 body=467 status=ok
// SIG undefined FUN_1483f47a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1483f47a2(double *param_1,double *param_2)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_b8 [44];
  undefined1 local_8c [4];
  double local_88;
  double dStack_80;
  double local_78;
  undefined1 local_64 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  dVar2 = *param_2 - param_1[4];
  dVar3 = param_2[1] - param_1[5];
  dVar7 = param_2[2] - param_1[6];
  auVar1 = *(undefined1 (*) [16])(param_1 + 8);
  dVar4 = -*param_1;
  dVar5 = -param_1[1];
  dVar9 = param_1[2] * -1.0;
  dVar10 = param_1[3] * 1.0;
  dVar12 = dVar2 * dVar9 - dVar4 * dVar7;
  dVar11 = dVar3 * dVar4 - dVar2 * dVar5;
  dVar6 = dVar7 * dVar5 - dVar3 * dVar9;
  dVar6 = dVar6 + dVar6;
  dVar12 = dVar12 + dVar12;
  dVar11 = dVar11 + dVar11;
  auVar8 = divpd(_DAT_149934d80,auVar1);
  local_88 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar8._0_8_) *
             ((dVar11 * dVar5 - dVar12 * dVar9) + dVar10 * dVar6 + dVar2);
  dStack_80 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar8._8_8_) *
              (*param_1 * dVar11 + dVar9 * dVar6 + dVar10 * dVar12 + dVar3);
  local_78 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_1[10])) &
                     (ulonglong)(1.0 / param_1[10])) *
             (dVar10 * dVar11 + dVar7 + (dVar12 * dVar4 - dVar6 * dVar5));
  FUN_14040e062(param_1 + 0xc,&local_88,local_8c,local_64);
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483f4976 FUN_1483f4976 body=553 status=ok
// SIG undefined FUN_1483f4976(void)

double * FUN_1483f4976(double *param_1,double *param_2)

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
  undefined1 auStack_b8 [32];
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1483f4ba0(param_1,&local_98);
  dVar10 = local_90 * DAT_14c8462d0 - DAT_14c8462c8 * local_88;
  dVar10 = dVar10 + dVar10;
  dVar2 = local_98 * DAT_14c8462c8 - DAT_14c8462c0 * local_90;
  dVar2 = dVar2 + dVar2;
  dVar7 = local_88 * DAT_14c8462c0 - DAT_14c8462d0 * local_98;
  dVar7 = dVar7 + dVar7;
  dVar1 = local_80 * dVar7 + DAT_14c8462c8;
  dVar6 = (local_98 * dVar7 - dVar10 * local_90) + local_80 * dVar2 + DAT_14c8462d0;
  *param_2 = (local_90 * dVar2 - dVar7 * local_88) + dVar10 * local_80 + DAT_14c8462c0;
  param_2[1] = (local_88 * dVar10 - dVar2 * local_98) + dVar1;
  dVar7 = *param_2;
  dVar10 = param_2[1];
  dVar3 = *param_1;
  dVar4 = param_1[1];
  dVar5 = param_1[2];
  dVar2 = param_1[3];
  dVar1 = param_1[3];
  dVar11 = dVar7 * dVar5 - dVar3 * dVar6;
  dVar8 = dVar10 * dVar3 - dVar7 * dVar4;
  dVar9 = dVar6 * dVar4 - dVar10 * dVar5;
  dVar9 = dVar9 + dVar9;
  dVar11 = dVar11 + dVar11;
  dVar8 = dVar8 + dVar8;
  *param_2 = (dVar8 * dVar4 - dVar11 * dVar5) + dVar2 * dVar9 + dVar7;
  param_2[1] = (dVar5 * dVar9 - dVar3 * dVar8) + dVar1 * dVar11 + dVar10;
  param_2[2] = dVar8 * dVar2 + dVar6 + (dVar11 * dVar3 - dVar9 * dVar4);
  if ((local_70 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483f4ba0 FUN_1483f4ba0 body=776 status=ok
// SIG undefined FUN_1483f4ba0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1483f4ba0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 in_R8;
  double dVar4;
  double dVar5;
  double dVar8;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar9 [16];
  undefined1 auStack_188 [40];
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  undefined1 local_118 [16];
  double local_108;
  double dStack_100;
  double local_f8;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_188;
  FUN_14099e59e(param_1 + 0x78,&local_128,in_R8,&DAT_14c8463d0);
  dVar4 = (double)local_118._0_8_ * (double)local_118._0_8_ + local_128 * local_128;
  dVar8 = (double)local_118._8_8_ * (double)local_118._8_8_ + dStack_120 * dStack_120;
  auVar6._0_8_ = dVar4 + dVar8;
  auVar6._8_8_ = dVar4 + dVar8;
  auVar7 = sqrtpd(auVar6,auVar6);
  auVar7 = divpd(_DAT_149934d80,auVar7);
  auVar9._0_8_ = auVar7._0_8_ * (double)local_118._0_8_;
  auVar9._8_8_ = auVar7._8_8_ * (double)local_118._8_8_;
  local_128 = (double)((ulonglong)(local_128 * auVar7._0_8_) &
                      -(ulonglong)(9.99999993922529e-09 <= auVar6._0_8_));
  dStack_120 = (double)((ulonglong)(dStack_120 * auVar7._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar6._8_8_));
  auVar7._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar6._8_8_);
  auVar7._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar6._0_8_);
  local_118 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar9,auVar7);
  FUN_140754464(param_1 + 0x60,&local_108,param_3,&DAT_14c8464e0);
  dVar4 = local_f8 * local_f8 + local_108 * local_108 + dStack_100 * dStack_100;
  if ((dVar4 != 1.0) || (NAN(dVar4))) {
    if (9.99999993922529e-09 <= dVar4) {
      local_148 = 1.0 / SQRT(dVar4);
      local_138 = local_f8 * local_148;
      dStack_140 = dStack_100 * local_148;
      local_148 = local_108 * local_148;
    }
    else {
      local_138 = DAT_14c8464f0;
      local_148 = DAT_14c8464e0;
      dStack_140 = DAT_14c8464e8;
    }
  }
  else {
    local_138 = local_f8;
    local_148 = local_108;
    dStack_140 = dStack_100;
  }
  dVar4 = *(double *)(param_1 + 200);
  dVar8 = *(double *)(param_1 + 0xd0);
  dVar1 = *(double *)(param_1 + 0xd8);
  dVar2 = dStack_120 * dVar1 - dVar8 * (double)local_118._0_8_;
  dVar2 = dVar2 + dVar2;
  dVar3 = local_128 * dVar8 - dVar4 * dStack_120;
  dVar3 = dVar3 + dVar3;
  dVar5 = (double)local_118._0_8_ * dVar4 - dVar1 * local_128;
  dVar5 = dVar5 + dVar5;
  local_150 = (local_128 * dVar5 - dVar2 * dStack_120) + (double)local_118._8_8_ * dVar3 + dVar1;
  local_158 = ((double)local_118._0_8_ * dVar2 - dVar3 * local_128) +
              (double)local_118._8_8_ * dVar5 + dVar8;
  local_160 = (dStack_120 * dVar3 - dVar5 * (double)local_118._0_8_) +
              dVar2 * (double)local_118._8_8_ + dVar4;
  FUN_14099e850(&local_108,&local_148);
  FUN_141706d54(&local_108,param_2);
  if ((local_80 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1483f4eaa FUN_1483f4eaa body=603 status=ok
// SIG undefined FUN_1483f4eaa(void)

double * FUN_1483f4eaa(double *param_1,double *param_2,undefined8 param_3)

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
  undefined1 auStack_98 [32];
  double local_78;
  double dStack_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140754464(param_1 + 0xc,&local_78,param_3,&DAT_14c8464e0);
  dVar4 = local_68 * local_68 + local_78 * local_78 + dStack_70 * dStack_70;
  if ((dVar4 != 1.0) || (NAN(dVar4))) {
    if (9.99999993922529e-09 <= dVar4) {
      dVar4 = 1.0 / SQRT(dVar4);
      *param_2 = local_78 * dVar4;
      param_2[1] = dStack_70 * dVar4;
      param_2[2] = local_68 * dVar4;
      goto LAB_1483f4f4c;
    }
    param_2[2] = DAT_14c8464f0;
    local_78 = DAT_14c8464e0;
    dStack_70 = DAT_14c8464e8;
  }
  else {
    param_2[2] = local_68;
  }
  *param_2 = local_78;
  param_2[1] = dStack_70;
LAB_1483f4f4c:
  dVar5 = *param_2 * param_1[8];
  dVar7 = param_2[1] * param_1[9];
  dVar3 = param_2[2] * param_1[10];
  dVar6 = *param_1;
  dVar1 = param_1[1];
  dVar2 = param_1[2];
  dVar4 = param_1[3];
  dVar8 = dVar7 * dVar6 - dVar5 * dVar1;
  dVar9 = dVar3 * dVar1 - dVar7 * dVar2;
  dVar10 = dVar5 * dVar2 - dVar6 * dVar3;
  dVar9 = dVar9 + dVar9;
  dVar10 = dVar10 + dVar10;
  dVar8 = dVar8 + dVar8;
  dVar3 = dVar8 * dVar4 + dVar3 + (dVar10 * dVar6 - dVar9 * dVar1);
  dVar4 = (dVar8 * dVar1 - dVar10 * dVar2) + dVar4 * dVar9 + dVar5;
  dVar10 = (dVar2 * dVar9 - dVar6 * dVar8) + param_1[3] * dVar10 + dVar7;
  *param_2 = dVar4;
  param_2[1] = dVar10;
  param_2[2] = dVar3;
  dVar6 = dVar3 * dVar3 + dVar4 * dVar4 + dVar10 * dVar10;
  if (9.99999993922529e-09 < dVar6) {
    dVar6 = 1.0 / SQRT(dVar6);
    *param_2 = dVar4 * dVar6;
    param_2[1] = dVar10 * dVar6;
    param_2[2] = dVar3 * dVar6;
  }
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483f5106 FUN_1483f5106 body=315 status=ok
// SIG undefined FUN_1483f5106(void)

undefined1 (*) [16]
FUN_1483f5106(double *param_1,undefined1 (*param_2) [16],undefined8 param_3,int param_4)

{
  double dVar1;
  undefined1 auVar2 [16];
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
  
  FUN_140703ce0(param_1 + 0xc,param_2,param_3,&DAT_14c8464e0);
  if (param_4 == 1) {
    dVar8 = *(double *)*param_2 * param_1[8];
    dVar9 = *(double *)(*param_2 + 8) * param_1[9];
    dVar7 = *(double *)param_2[1] * param_1[10];
    dVar4 = *param_1;
    dVar5 = param_1[1];
    dVar6 = param_1[2];
    dVar1 = param_1[3];
    dVar10 = dVar9 * dVar4 - dVar8 * dVar5;
    dVar11 = dVar7 * dVar5 - dVar9 * dVar6;
    dVar12 = dVar8 * dVar6 - dVar4 * dVar7;
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar10 = dVar10 + dVar10;
    dVar3 = (dVar6 * dVar11 - dVar4 * dVar10) + param_1[3] * dVar12 + dVar9 + param_1[5];
    dVar9 = param_1[6];
    auVar2._8_4_ = SUB84(dVar3,0);
    auVar2._0_8_ = (dVar10 * dVar5 - dVar12 * dVar6) + dVar1 * dVar11 + dVar8 + param_1[4];
    auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    *param_2 = auVar2;
    *(double *)param_2[1] = dVar10 * dVar1 + dVar7 + (dVar12 * dVar4 - dVar11 * dVar5) + dVar9;
  }
  return param_2;
}



// FUNCTION 1483f5242 FUN_1483f5242 body=970 status=ok
// SIG undefined FUN_1483f5242(void)

longlong * FUN_1483f5242(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined4 uStack_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3ff00000;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x3ff00000;
  param_1[0xe] = 0x3ff0000000000000;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0xffffffff00000000;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb9) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd1) = 0;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined8 *)((longlong)param_1 + 0x121) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  if (param_2 != (longlong *)0x0) {
    if (param_2[0x16] == 0) {
      lVar5 = FUN_1448abda6(param_2);
      *param_1 = lVar5;
      if (lVar5 == 0) goto LAB_1483f55ad;
    }
    else {
      *param_1 = param_2[0x16];
    }
    lVar5 = (**(code **)(*param_2 + 0xae0))(param_2);
    if ((lVar5 != 0) &&
       (lVar5 = (**(code **)(*(longlong *)(lVar5 + 0x390) + 0x18))(lVar5 + 0x390), lVar5 != 0)) {
      plVar7 = (longlong *)(lVar5 + 0xa0);
      lVar9 = lVar5 + 0xb0;
      local_68 = 0x100000000;
      local_58 = 0xffffffff;
      uStack_50 = 0;
      uStack_60 = lVar9;
      if (*(int *)(lVar5 + 200) == 0) {
        iVar6 = 0;
      }
      else {
        FUN_1449c0562(&local_68);
        iVar6 = *(int *)(lVar5 + 200);
      }
      uStack_70 = CONCAT44(uStack_4c,uStack_50);
      local_78 = local_58;
      uVar1 = local_78;
      uStack_88 = (undefined4)local_68;
      uStack_84 = local_68._4_4_;
      uStack_80 = (undefined4)uStack_60;
      uStack_7c = uStack_60._4_4_;
      local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
      iVar4 = local_78._4_4_;
      local_90 = plVar7;
      if ((local_78._4_4_ != iVar6) || (local_78 = uVar1, uStack_60 != lVar9)) {
        do {
          local_78 = uVar1;
          uVar1 = *(undefined8 *)(*local_90 + 8 + (longlong)iVar4 * 0x18);
          iVar4 = (int)param_1[2];
          *(uint *)(param_1 + 2) = iVar4 + 1U;
          if (*(uint *)((longlong)param_1 + 0x14) < iVar4 + 1U) {
            FUN_140c43e06(param_1 + 1,iVar4);
          }
          *(undefined8 *)(param_1[1] + (longlong)iVar4 * 8) = uVar1;
          local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
          FUN_1449c0562(&uStack_88);
          iVar4 = local_78._4_4_;
          uVar1 = local_78;
        } while (local_90 != plVar7 ||
                 (CONCAT44(uStack_7c,uStack_80) != lVar9 || local_78._4_4_ != iVar6));
      }
    }
    lVar5 = FUN_140b94ea6(param_2);
    if (lVar5 != 0) {
      plVar7 = (longlong *)(lVar5 + 0x240);
      plVar8 = param_1 + 4;
      for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
        *plVar8 = *plVar7;
        plVar7 = plVar7 + 1;
        plVar8 = plVar8 + 1;
      }
      FUN_1408d5a44(param_1 + 0x10,lVar5 + 0x620);
      FUN_147a1d862(lVar5,&local_90,1);
      param_1[0x1f] = CONCAT44(uStack_7c,uStack_80);
      *(undefined4 *)(param_1 + 0x1d) = (undefined4)local_90;
      *(undefined4 *)((longlong)param_1 + 0xec) = local_90._4_4_;
      *(undefined4 *)(param_1 + 0x1e) = uStack_88;
      *(uint *)((longlong)param_1 + 0xf4) = uStack_84;
    }
    lVar5 = param_2[0x207];
    if (lVar5 != 0) {
      FUN_1408d5b5a(param_1 + 0x20,lVar5 + 0x28);
      param_1[0x22] = *(longlong *)(lVar5 + 0x38);
      FUN_1408d5b5a(param_1 + 0x23,lVar5 + 0x40);
      param_1[0x25] = *(longlong *)(lVar5 + 0x50);
    }
    uVar10 = *(undefined4 *)((longlong)param_2 + 0x264);
    lVar9 = param_2[0x4d];
    uVar2 = *(undefined4 *)((longlong)param_2 + 0x26c);
    lVar5 = param_2[0x4e];
    *(int *)(param_1 + 0x26) = (int)param_2[0x4c];
    *(undefined4 *)((longlong)param_1 + 0x134) = uVar10;
    *(int *)(param_1 + 0x27) = (int)lVar9;
    *(undefined4 *)((longlong)param_1 + 0x13c) = uVar2;
    param_1[0x28] = lVar5;
    uVar3 = (**(code **)(*param_2 + 0xa40))(param_2);
    *(undefined1 *)(param_1 + 0x29) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0x14c) = *(undefined4 *)((longlong)param_2 + 0x62c);
    lVar5 = FUN_143b2833c(param_2);
    if (lVar5 != 0) {
      lVar9 = FUN_1414101aa();
      if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8
           ) == lVar9 + 0x30)) {
        FUN_1483e16a6(param_1 + 0x2a,lVar5 + 0x30);
      }
    }
    *(undefined4 *)(param_1 + 0x2c) = 0x3f800000;
    *(int *)((longlong)param_1 + 0x164) = (int)param_2[0xc5];
    uVar10 = FUN_1405b9a48(param_2);
    *(undefined4 *)(param_1 + 0x2d) = uVar10;
    *(int *)((longlong)param_1 + 0x16c) = (int)param_2[0x204];
  }
LAB_1483f55ad:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1483f560e FUN_1483f560e body=617 status=ok
// SIG undefined FUN_1483f560e(void)

void FUN_1483f560e(longlong param_1,double *param_2,float param_3,float param_4,char param_5,
                  float *param_6)

{
  longlong lVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_a8 [32];
  double local_88;
  double dStack_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((byte)(*(char *)(param_1 + 0x148) - 1U) < 2) {
    *param_6 = param_4;
    if ((param_3 != -1.0) || (NAN(param_3))) {
      fVar7 = expf(param_3 / (*(float *)(param_1 + 0x164) * -0.5));
      fVar6 = 1.0 - fVar7;
      if (1.0 <= 1.0 - fVar7) {
        fVar6 = 1.0;
      }
      if (fVar6 <= 0.0) {
        fVar6 = 0.0;
      }
    }
    else {
      fVar6 = 1.0;
    }
    fVar6 = fVar6 * param_6[1];
    param_6[1] = fVar6;
    if (0.0 < fVar6) {
      param_6[3] = *(float *)(param_1 + 0x168) * fVar6;
      if (param_5 == '\0') {
        fVar7 = (float)FUN_1483f5976(param_1,param_2,*param_6,&local_88);
        fVar6 = param_6[1];
        dVar2 = (double)fVar6;
        local_78 = (local_78 - *(double *)(param_6 + 8)) * dVar2 + *(double *)(param_6 + 8);
        dStack_80 = (dStack_80 - *(double *)(param_6 + 6)) * dVar2 + *(double *)(param_6 + 6);
        local_88 = (local_88 - *(double *)(param_6 + 4)) * dVar2 + *(double *)(param_6 + 4);
        if ((((local_88 != 0.0) || (NAN(local_88))) || (dStack_80 != 0.0)) ||
           (((NAN(dStack_80) || (local_78 != 0.0)) || (NAN(local_78))))) {
          *(double *)(param_6 + 8) = local_78;
          *(double *)(param_6 + 4) = local_88;
          *(double *)(param_6 + 6) = dStack_80;
        }
      }
      else if (*(int *)(param_1 + 0x158) < 1) {
        fVar7 = 0.0;
      }
      else {
        fVar6 = *param_6;
        fVar7 = 0.0;
        lVar3 = 0x38;
        lVar4 = 0;
        do {
          lVar1 = *(longlong *)(param_1 + 0x150);
          fVar5 = cosf((float)((*param_2 * *(double *)(lVar1 + -0x10 + lVar3) +
                               param_2[1] * *(double *)(lVar1 + -8 + lVar3)) -
                              (double)(*(float *)(lVar1 + lVar3) * fVar6)));
          fVar7 = fVar7 + fVar5 * *(float *)(lVar1 + -0x34 + lVar3);
          lVar4 = lVar4 + 1;
          lVar3 = lVar3 + 0x48;
        } while (lVar4 < *(int *)(param_1 + 0x158));
        fVar6 = param_6[1];
      }
      param_6[2] = fVar6 * fVar7;
    }
  }
  if ((local_70 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483f5878 FUN_1483f5878 body=180 status=ok
// SIG undefined FUN_1483f5878(void)

double * FUN_1483f5878(longlong param_1,double *param_2,undefined8 param_3)

{
  float fVar1;
  double dVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  fVar1 = (float)FUN_140753fde(param_1 + 0x118,param_3);
  FUN_1483f4eaa(param_1 + 0x20,&local_58,param_3);
  dVar2 = (double)fVar1;
  *param_2 = dVar2 * (double)CONCAT44(uStack_54,local_58);
  param_2[1] = local_50 * dVar2;
  param_2[2] = local_48 * dVar2;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483f592e FUN_1483f592e body=70 status=ok
// SIG undefined FUN_1483f592e(void)

void FUN_1483f592e(longlong param_1)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = 0;
  FUN_140753fde(param_1 + 0x118);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483f5976 FUN_1483f5976 body=1364 status=ok
// SIG undefined FUN_1483f5976(void)

void FUN_1483f5976(longlong param_1,double *param_2,float param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  float fVar12;
  undefined1 auStack_1f8 [32];
  double *local_1d8;
  float *local_1d0;
  undefined1 local_1c8 [32];
  double local_1a8;
  double local_1a0;
  double local_198;
  float local_18c;
  double local_188;
  double dStack_180;
  double local_178;
  undefined1 local_168 [32];
  double local_148;
  double dStack_140;
  double local_138;
  float local_12c [15];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  if ((longlong)*(int *)(param_1 + 0x158) == 0) {
    dVar4 = 0.0;
    dVar5 = 0.0;
    dVar10 = 0.0;
  }
  else {
    lVar6 = *(longlong *)(param_1 + 0x150);
    lVar7 = (longlong)*(int *)(param_1 + 0x158) * 0x48;
    dVar10 = 0.0;
    dVar5 = 0.0;
    dVar4 = 0.0;
    do {
      local_1d8 = &local_148;
      local_1d0 = local_12c;
      FUN_1483f5ecc(local_168,lVar6,param_2,param_3);
      if ((*(float *)(lVar6 + 0x40) != 0.0) ||
         (dVar3 = local_138, dVar1 = dStack_140, dVar2 = local_148, NAN(*(float *)(lVar6 + 0x40))))
      {
        fVar12 = *(float *)(lVar6 + 0x38);
        dVar3 = param_2[1];
        dVar1 = *(double *)(lVar6 + 0x30);
        dVar2 = *param_2;
        dVar11 = *(double *)(lVar6 + 0x28);
        fVar9 = (float)FUN_1447c7e44();
        uVar8 = -(uint)((float)((dVar2 * dVar11 + dVar3 * dVar1) - (double)(fVar12 * param_3)) < 0.0
                       );
        fVar12 = (float)(uVar8 & (uint)(6.2831855 - ABS(fVar9)) | ~uVar8 & (uint)fVar9);
        if (3.1415927 <= fVar12) {
          local_1a8 = (double)*(float *)(lVar6 + 0x40);
          local_198 = -*(double *)(lVar6 + 0x20) * local_1a8;
          local_1a0 = -*(double *)(lVar6 + 0x18) * local_1a8;
          local_1a8 = -*(double *)(lVar6 + 0x10) * local_1a8;
        }
        else {
          local_1a8 = (double)*(float *)(lVar6 + 0x40);
          local_198 = *(double *)(lVar6 + 0x20) * local_1a8;
          local_1a0 = *(double *)(lVar6 + 0x18) * local_1a8;
          local_1a8 = local_1a8 * *(double *)(lVar6 + 0x10);
        }
        local_198 = local_198 + param_2[2];
        local_1a0 = local_1a0 + param_2[1];
        local_1a8 = local_1a8 + *param_2;
        local_1d0 = &local_18c;
        local_1d8 = &local_188;
        FUN_1483f5ecc(local_1c8,lVar6,&local_1a8,param_3);
        if (3.1415927 <= fVar12) {
          local_18c = local_18c - *(float *)(lVar6 + 0x40);
          dVar3 = local_138;
          dVar1 = local_148;
          dVar2 = dStack_140;
          local_138 = local_178;
          local_148 = local_188;
          dStack_140 = dStack_180;
          fVar12 = local_12c[0];
          local_188 = dVar1;
          dStack_180 = dVar2;
          local_178 = dVar3;
          local_12c[0] = local_18c;
        }
        else {
          fVar12 = *(float *)(lVar6 + 0x40) + local_18c;
        }
        uVar8 = -(uint)(0.0 < fVar12 - local_12c[0]);
        dVar2 = (double)((0.0 - local_12c[0]) /
                        (float)(~uVar8 & 0x3f800000 | (uint)(fVar12 - local_12c[0]) & uVar8));
        dVar3 = (local_178 - local_138) * dVar2 + local_138;
        dVar1 = (dStack_180 - dStack_140) * dVar2 + dStack_140;
        dVar2 = (local_188 - local_148) * dVar2 + local_148;
      }
      dVar4 = dVar4 + dVar2;
      dVar5 = dVar5 + dVar1;
      dVar10 = dVar10 + dVar3;
      lVar6 = lVar6 + 0x48;
      lVar7 = lVar7 + -0x48;
    } while (lVar7 != 0);
  }
  dVar10 = 1.0 - dVar10;
  dVar3 = dVar10 * dVar10 + dVar4 * dVar4 + dVar5 * dVar5;
  if (((dVar3 != 1.0) || (dVar11 = dVar10, dVar1 = dVar5, dVar2 = dVar4, NAN(dVar3))) &&
     (dVar11 = DAT_14c8464f0, dVar1 = DAT_14c8464e8, dVar2 = DAT_14c8464e0,
     9.99999993922529e-09 <= dVar3)) {
    dVar3 = 1.0 / SQRT(dVar3);
    dVar11 = dVar10 * dVar3;
    dVar1 = dVar5 * dVar3;
    dVar2 = dVar4 * dVar3;
  }
  *param_4 = dVar2;
  param_4[1] = dVar1;
  param_4[2] = dVar11;
  if ((local_f0 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483f5ecc FUN_1483f5ecc body=453 status=ok
// SIG undefined FUN_1483f5ecc(void)

void FUN_1483f5ecc(double *param_1,longlong param_2,double *param_3,float param_4,double *param_5,
                  float *param_6)

{
  double dVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  
  fVar3 = (float)((*param_3 * *(double *)(param_2 + 0x28) + param_3[1] * *(double *)(param_2 + 0x30)
                  ) - (double)(param_4 * *(float *)(param_2 + 0x38)));
  fVar3 = (float)(longlong)
                 (fVar3 * 0.15915494 + *(float *)(&DAT_14a184448 + (ulonglong)(fVar3 < 0.0) * 4)) *
          -6.2831855 + fVar3;
  if (fVar3 <= 1.5707964) {
    if (-1.5707964 <= fVar3) {
      fVar4 = 1.0;
      goto LAB_1483f5f67;
    }
    fVar4 = -3.1415927;
  }
  else {
    fVar4 = 3.1415927;
  }
  fVar3 = fVar4 - fVar3;
  fVar4 = -1.0;
LAB_1483f5f67:
  fVar7 = fVar3 * fVar3;
  fVar3 = (((((fVar7 * -2.3889859e-08 + 2.7525562e-06) * fVar7 + -0.00019840874) * fVar7 +
            0.008333331) * fVar7 + -0.16666667) * fVar7 + 1.0) * fVar3;
  fVar5 = -*(float *)(param_2 + 0x40) * fVar3;
  *param_6 = fVar5;
  dVar6 = (double)fVar5;
  dVar1 = *(double *)(param_2 + 0x10);
  *param_1 = dVar1 * dVar6;
  dVar2 = *(double *)(param_2 + 0x18);
  param_1[1] = dVar6 * dVar2;
  param_1[2] = (double)((((((fVar7 * -2.6051615e-07 + 2.4760495e-05) * fVar7 + -0.0013888378) *
                           fVar7 + 0.041666638) * fVar7 + -0.5) * fVar7 + 1.0) * fVar4 *
                       *(float *)(param_2 + 4));
  dVar6 = (double)(fVar3 * *(float *)(param_2 + 0x3c));
  *param_5 = dVar1 * dVar6;
  param_5[1] = dVar2 * dVar6;
  param_5[2] = 0.0;
  return;
}



// FUNCTION 1483f6092 FUN_1483f6092 body=289 status=ok
// SIG undefined FUN_1483f6092(void)

ulonglong FUN_1483f6092(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = *(longlong *)(param_1 + 0x10);
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(param_2 >> 9) * 8);
  uVar7 = (ulonglong)(param_2 & 0x1ff);
  uVar2 = *(uint *)(lVar4 + uVar7 * 0xc);
  lVar5 = *(longlong *)(lVar3 + (ulonglong)(uVar2 >> 9) * 8);
  uVar6 = (ulonglong)uVar2 & 0x1ff;
  local_28 = *(undefined8 *)(lVar5 + 0x10 + uVar6 * 0x18);
  puVar1 = (undefined8 *)(lVar5 + uVar6 * 0x18);
  local_38 = *puVar1;
  uStack_30 = puVar1[1];
  uVar2 = *(uint *)(lVar4 + 4 + uVar7 * 0xc);
  lVar5 = *(longlong *)(lVar3 + (ulonglong)(uVar2 >> 9) * 8);
  uVar6 = (ulonglong)uVar2 & 0x1ff;
  local_48 = *(undefined8 *)(lVar5 + 0x10 + uVar6 * 0x18);
  puVar1 = (undefined8 *)(lVar5 + uVar6 * 0x18);
  local_58 = *puVar1;
  uStack_50 = puVar1[1];
  uVar2 = *(uint *)(lVar4 + 8 + uVar7 * 0xc);
  lVar3 = *(longlong *)(lVar3 + (ulonglong)(uVar2 >> 9) * 8);
  uVar6 = (ulonglong)uVar2 & 0x1ff;
  local_68 = *(undefined8 *)(lVar3 + 0x10 + uVar6 * 0x18);
  puVar1 = (undefined8 *)(lVar3 + uVar6 * 0x18);
  local_78 = *puVar1;
  uStack_70 = puVar1[1];
  dVar8 = (double)FUN_14831c0ee();
  dVar9 = 1.0;
  if (1.0 / dVar8 <= 1.0) {
    dVar9 = 1.0 / dVar8;
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return -(ulonglong)(1.0 < dVar8) & (ulonglong)dVar9 |
           ~-(ulonglong)(1.0 < dVar8) & (ulonglong)dVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483f61b4 FUN_1483f61b4 body=1591 status=ok
// SIG undefined FUN_1483f61b4(void)

void FUN_1483f61b4(longlong param_1,double param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  byte bVar3;
  longlong lVar4;
  char cVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  float *pfVar9;
  ulonglong uVar10;
  int iVar11;
  double dVar12;
  int *piVar13;
  float *pfVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_3b8 [32];
  undefined4 local_398;
  longlong local_390;
  float *local_388;
  ulonglong local_380;
  undefined1 local_378 [64];
  undefined8 local_338;
  double local_330;
  double local_328;
  undefined1 local_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined1 local_308;
  undefined8 local_304;
  undefined8 uStack_2fc;
  undefined8 local_2f0;
  int *local_2e0;
  double dStack_2d8;
  double local_2d0;
  longlong local_2c8 [5];
  double local_2a0;
  double local_298;
  double local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  undefined4 local_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  double local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  double local_228;
  undefined8 local_220;
  undefined4 local_218;
  undefined8 local_214;
  undefined4 local_20c;
  undefined8 local_208;
  undefined2 local_200;
  undefined1 local_1fe;
  double local_108;
  double dStack_100;
  double local_f8;
  undefined3 local_f0;
  undefined5 uStack_ed;
  undefined3 uStack_e8;
  undefined5 uStack_e5;
  uint uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  FUN_146c017d0(param_2);
  lVar16 = *(longlong *)(param_1 + 0x3a0);
  puVar7 = &DAT_14c846480;
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x1c8) + 0x240);
  }
  local_288 = *puVar7;
  uStack_280 = puVar7[1];
  local_278 = puVar7[2];
  uStack_270 = puVar7[3];
  local_268 = (double)puVar7[4];
  dStack_260 = (double)puVar7[5];
  local_258 = (double)puVar7[6];
  local_250 = *(undefined4 *)(puVar7 + 8);
  uStack_24c = *(undefined4 *)((longlong)puVar7 + 0x44);
  uStack_248 = *(undefined4 *)(puVar7 + 9);
  uStack_244 = *(undefined4 *)((longlong)puVar7 + 0x4c);
  local_240 = (double)puVar7[10];
  if ((longlong)*(int *)(lVar16 + 0x30) != 0) {
    pfVar14 = *(float **)(lVar16 + 0x28);
    pfVar9 = pfVar14 + (longlong)*(int *)(lVar16 + 0x30) * 0x10;
    local_390 = lVar16;
    local_388 = pfVar9;
    do {
      local_290 = (double)pfVar14[2];
      local_298 = (double)pfVar14[1];
      local_2a0 = (double)*pfVar14;
      local_108 = (double)pfVar14[3];
      local_f8 = local_290 * local_108;
      dStack_100 = local_298 * local_108;
      local_108 = local_2a0 * local_108;
      local_f0 = 0;
      uStack_ed = 0;
      uStack_e8 = 0;
      uStack_e5 = 0;
      uStack_e0 = 0;
      uStack_dc = 0;
      uStack_d8 = 0;
      uStack_d4 = 0x3ff00000;
      local_228 = DAT_14c8463c8;
      local_238 = (int *)CONCAT44(DAT_14c8463b8._4_4_,(undefined4)DAT_14c8463b8);
      uStack_230 = (double)CONCAT44(DAT_14c8463c0._4_4_,(undefined4)DAT_14c8463c0);
      FUN_146bfb7f2(&local_f0,&local_238,&local_2a0);
      bVar3 = *(byte *)((longlong)pfVar14 + 0x36);
      if (bVar3 != 0) {
        local_2c8[2] = 0;
        local_2c8[3] = 0;
        local_2c8[0] = 0;
        local_2c8[1] = 0;
        FUN_144a1a59e(local_2c8 + 2,bVar3,1);
        FUN_1407feed2(local_2c8,(uint)bVar3,1);
        local_380 = (ulonglong)(uint)bVar3;
        lVar15 = 0;
        uVar10 = 0;
        do {
          lVar8 = (longlong)
                  *(int *)(*(longlong *)(lVar16 + 0x38) +
                          ((longlong)(int)pfVar14[4] + uVar10) * 0x18);
          lVar4 = *(longlong *)(lVar16 + 0x58);
          local_2d0 = (double)*(float *)(lVar4 + 8 + lVar8 * 0xc);
          dStack_2d8 = (double)*(float *)(lVar4 + 4 + lVar8 * 0xc);
          local_2e0 = (int *)(double)*(float *)(lVar4 + lVar8 * 0xc);
          local_328 = local_2d0 * local_240;
          local_330 = dStack_2d8 * (double)CONCAT44(uStack_244,uStack_248);
          local_338 = (undefined **)((double)local_2e0 * (double)CONCAT44(uStack_24c,local_250));
          FUN_146bed047(&local_238,&local_288,&local_338);
          local_2d0 = local_228 + local_258;
          dStack_2d8 = uStack_230 + dStack_260;
          local_2e0 = (int *)((double)local_238 + local_268);
          local_218 = DAT_14c846338;
          local_220 = DAT_14c846330;
          local_20c = DAT_14c846338;
          local_214 = DAT_14c846330;
          local_208 = DAT_14c84635c;
          local_200 = 0;
          local_1fe = 0;
          local_238 = local_2e0;
          uStack_230 = dStack_2d8;
          local_228 = local_2d0;
          uVar6 = FUN_146c02208(param_2,&local_238);
          *(undefined4 *)(local_2c8[2] + uVar10 * 4) = uVar6;
          FUN_146bca7ae(&local_108,&local_238,&local_2e0,2);
          puVar1 = (undefined4 *)(local_2c8[0] + lVar15);
          *puVar1 = (undefined4)local_238;
          puVar1[1] = local_238._4_4_;
          puVar1[2] = (int)uStack_230;
          puVar1[3] = uStack_230._4_4_;
          uVar10 = uVar10 + 1;
          lVar15 = lVar15 + 0x10;
        } while (local_380 != uVar10);
        local_238 = (int *)0x0;
        uStack_230 = 0.0;
        FUN_146bd1316(local_2c8,&local_238,1);
        if ((longlong)(int)uStack_230 != 0) {
          piVar2 = local_238 + (longlong)(int)uStack_230 * 3;
          piVar13 = local_238;
          do {
            local_338 = (undefined **)
                        CONCAT44(*(undefined4 *)(local_2c8[2] + (longlong)piVar13[1] * 4),
                                 *(undefined4 *)(local_2c8[2] + (longlong)*piVar13 * 4));
            local_330 = (double)CONCAT44(local_330._4_4_,
                                         *(undefined4 *)(local_2c8[2] + (longlong)piVar13[2] * 4));
            FUN_146c01152(param_2,&local_338,0);
            piVar13 = piVar13 + 3;
          } while (piVar13 != piVar2);
        }
        pfVar9 = local_388;
        lVar16 = local_390;
        if (local_238 != (int *)0x0) {
          FUN_1400020a8(local_238);
        }
        if (local_2c8[0] != 0) {
          FUN_1400020a8();
        }
        if (local_2c8[2] != 0) {
          FUN_1400020a8();
        }
      }
      pfVar14 = pfVar14 + 0x10;
    } while (pfVar14 != pfVar9);
  }
  local_398 = 0;
  FUN_14831e774(param_2,&local_2a0,&local_2e0,local_2c8 + 2);
  local_338 = &PTR_FUN_149f36300;
  local_320 = 0;
  local_2f0 = 0;
  local_318 = 0;
  uStack_310 = 0;
  local_308 = 0;
  local_304 = 0;
  uStack_2fc = 0;
  local_328 = 9.999999974752427e-07;
  if (9.999999974752427e-07 <= local_2a0 * 0.1) {
    local_328 = local_2a0 * 0.1;
  }
  local_330 = param_2;
  FUN_146c3d996();
  cVar5 = FUN_146c047ec(param_2);
  if (cVar5 == '\0') {
    dStack_100 = 0.0;
    uStack_e8 = 0;
    uStack_e5 = 0;
    uStack_e0 = uStack_e0 & 0xff000000;
    local_f8 = 0.0;
    local_f0 = 0;
    uStack_ed = 0;
    uStack_dc = 2;
    uStack_d8 = 1;
    local_c8 = 0;
    local_b8 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_108 = param_2;
    FUN_146c68b4c(&local_108);
    if ((longlong)local_f8._0_4_ != 0) {
      lVar16 = (longlong)local_f8._0_4_ << 6;
      dVar12 = dStack_100;
      do {
        FUN_146c7f310(local_378,dVar12);
        FUN_1483150ae(&local_238,param_2,local_378);
        FUN_148315182(&local_238,0xffffffff);
        FUN_148315ddc(&local_238);
        dVar12 = (double)((longlong)dVar12 + 0x40);
        lVar16 = lVar16 + -0x40;
      } while (lVar16 != 0);
    }
    FUN_1482f1656(&local_108);
  }
  iVar11 = 5;
  do {
    FUN_143b2ed4e(param_2);
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  if ((local_60 ^ (ulonglong)auStack_3b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483f67ec FUN_1483f67ec body=1237 status=ok
// SIG undefined FUN_1483f67ec(void)

longlong FUN_1483f67ec(longlong param_1)

{
  undefined8 *puVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  longlong local_b8;
  undefined4 *local_b0;
  int local_a8 [4];
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_c8 = 0x18;
  FUN_146c5e8c6(param_1,8,0xc,0x18);
  local_b8 = param_1 + 0xa0;
  lVar19 = 0;
  uVar18 = 0;
  do {
    FUN_1483ad9de(local_b8,local_a8,uVar18 & 0xffffffff);
    lVar17 = *(longlong *)(param_1 + 8);
    *(double *)(lVar17 + 0x10 + lVar19) = local_98;
    puVar1 = (undefined8 *)(lVar17 + lVar19);
    *puVar1 = CONCAT44(local_a8[1],local_a8[0]);
    puVar1[1] = CONCAT44(local_a8[3],local_a8[2]);
    uVar18 = uVar18 + 1;
    lVar19 = lVar19 + 0x18;
  } while (uVar18 != 8);
  if (*(char *)(param_1 + 0xf0) == '\0') {
    dVar6 = 1.0;
  }
  else {
    dVar21 = *(double *)(param_1 + 0xe8) + *(double *)(param_1 + 0xe8);
    dVar6 = *(double *)(param_1 + 0xe0) + *(double *)(param_1 + 0xe0);
    dVar20 = *(double *)(param_1 + 0xd8) + *(double *)(param_1 + 0xd8);
    uVar18 = -(ulonglong)(-dVar21 <= dVar21);
    dVar21 = (double)(uVar18 & (ulonglong)dVar21 | ~uVar18 & (ulonglong)-dVar21);
    uVar18 = -(ulonglong)(-dVar6 <= dVar6);
    dVar6 = (double)(uVar18 & (ulonglong)dVar6 | ~uVar18 & (ulonglong)-dVar6);
    uVar18 = -(ulonglong)(-dVar20 <= dVar20);
    dVar20 = (double)(uVar18 & (ulonglong)dVar20 | ~uVar18 & (ulonglong)-dVar20);
    uVar18 = -(ulonglong)(dVar6 <= dVar20);
    dVar6 = (double)(~uVar18 & (ulonglong)dVar6 | uVar18 & (ulonglong)dVar20);
    uVar18 = -(ulonglong)(dVar21 <= dVar6);
    dVar6 = (double)(1.0 / (float)(double)(~uVar18 & (ulonglong)dVar21 | uVar18 & (ulonglong)dVar6))
    ;
  }
  uVar18 = 0;
  lVar17 = 0;
  lVar19 = 0;
  do {
    iVar16 = -(&DAT_149f3c5f0)[uVar18];
    if (iVar16 < 0) {
      iVar16 = (&DAT_149f3c5f0)[uVar18];
    }
    FUN_146bfcd44(local_b8,local_a8,iVar16 + -1);
    dVar21 = (double)(&DAT_149931160)[(0x15UL >> (uVar18 & 0x3f) & 1) == 0];
    dVar11 = (double)CONCAT44(local_a8[3],local_a8[2]);
    dVar10 = (double)CONCAT44(local_a8[1],local_a8[0]);
    iVar16 = (&DAT_149f3c574)[uVar18 * 4];
    lVar14 = (longlong)iVar16;
    lVar15 = *(longlong *)(param_1 + 8);
    iVar3 = (&DAT_149f3c570)[uVar18 * 4];
    lVar12 = (longlong)iVar3;
    dVar20 = *(double *)(lVar15 + lVar14 * 0x18);
    iVar4 = (&DAT_149f3c578)[uVar18 * 4];
    lVar13 = (longlong)iVar4;
    dVar22 = *(double *)(lVar15 + lVar13 * 0x18) - dVar20;
    dVar20 = dVar20 - *(double *)(lVar15 + lVar12 * 0x18);
    dVar23 = *(double *)(lVar15 + 8 + lVar14 * 0x18);
    dVar7 = *(double *)(lVar15 + 8 + lVar13 * 0x18) - dVar23;
    dVar23 = dVar23 - *(double *)(lVar15 + 8 + lVar12 * 0x18);
    dVar2 = *(double *)(lVar15 + 0x10 + lVar14 * 0x18);
    dVar8 = *(double *)(lVar15 + 0x10 + lVar13 * 0x18) - dVar2;
    dVar2 = dVar2 - *(double *)(lVar15 + 0x10 + lVar12 * 0x18);
    local_b0 = &DAT_149f3c570 + uVar18 * 4;
    lVar12 = (longlong)(int)lVar19;
    lVar15 = lVar12 * 0xc;
    lVar13 = 0;
    do {
      lVar14 = *(longlong *)(param_1 + 0x38);
      *(float *)(lVar14 + lVar15) = (float)(dVar21 * dVar10);
      *(float *)(lVar14 + 4 + lVar15) = (float)(dVar11 * dVar21);
      *(float *)(lVar14 + 8 + lVar15) = (float)(local_98 * dVar21);
      iVar5 = (&DAT_149f3c5d4)[lVar13 * 2];
      lVar14 = *(longlong *)(param_1 + 0x18) + lVar12 * 8 + 4;
      *(float *)(lVar14 + -4 + lVar13 * 8) =
           (float)((double)(int)(&DAT_149f3c5d0)[lVar13 * 2] *
                  SQRT(dVar2 * dVar2 + dVar20 * dVar20 + dVar23 * dVar23) * dVar6);
      *(float *)(lVar14 + lVar13 * 8) =
           (float)((double)iVar5 * SQRT(dVar8 * dVar8 + dVar22 * dVar22 + dVar7 * dVar7) * dVar6);
      local_a8[lVar13] = (int)lVar13 + (int)lVar19;
      lVar13 = lVar13 + 1;
      lVar15 = lVar15 + 0xc;
    } while (lVar13 != 4);
    iVar5 = iVar3;
    iVar9 = iVar4;
    if (*(char *)(param_1 + 0x98) != '\0') {
      iVar5 = iVar4;
      iVar9 = iVar3;
    }
    lVar19 = *(longlong *)(param_1 + 0x58);
    lVar15 = lVar17 * 0xc;
    *(int *)(lVar19 + lVar15) = iVar5;
    *(int *)(lVar19 + 4 + lVar15) = iVar16;
    *(int *)(lVar19 + 8 + lVar15) = iVar9;
    *(int *)(*(longlong *)(param_1 + 0x88) + lVar17 * 4) = (int)uVar18;
    iVar16 = local_a8[0];
    iVar5 = local_a8[2];
    if (*(char *)(param_1 + 0x98) != '\0') {
      iVar16 = local_a8[2];
      iVar5 = local_a8[0];
    }
    lVar19 = *(longlong *)(param_1 + 0x68);
    *(int *)(lVar19 + lVar15) = iVar16;
    *(int *)(lVar19 + 4 + lVar15) = local_a8[1];
    *(int *)(lVar19 + 8 + lVar15) = iVar5;
    iVar16 = local_a8[0];
    iVar5 = local_a8[2];
    if (*(char *)(param_1 + 0x98) != '\0') {
      iVar16 = local_a8[2];
      iVar5 = local_a8[0];
    }
    lVar19 = *(longlong *)(param_1 + 0x78);
    *(int *)(lVar19 + lVar15) = iVar16;
    *(int *)(lVar19 + 4 + lVar15) = local_a8[1];
    *(int *)(lVar19 + 8 + lVar15) = iVar5;
    iVar16 = (&DAT_149f3c57c)[uVar18 * 4];
    if (*(char *)(param_1 + 0x98) == '\0') {
      iVar16 = iVar3;
      iVar3 = (&DAT_149f3c57c)[uVar18 * 4];
    }
    lVar19 = *(longlong *)(param_1 + 0x58);
    lVar15 = (lVar17 * 4 + 4) * 3;
    *(int *)(lVar19 + lVar15) = iVar16;
    *(int *)(lVar19 + 4 + lVar15) = iVar4;
    *(int *)(lVar19 + 8 + lVar15) = iVar3;
    *(int *)(*(longlong *)(param_1 + 0x88) + 4 + lVar17 * 4) = (int)uVar18;
    iVar16 = local_a8[0];
    iVar3 = local_a8[3];
    if (*(char *)(param_1 + 0x98) != '\0') {
      iVar16 = local_a8[3];
      iVar3 = local_a8[0];
    }
    lVar19 = *(longlong *)(param_1 + 0x68);
    *(int *)(lVar19 + lVar15) = iVar16;
    *(int *)(lVar19 + 4 + lVar15) = local_a8[2];
    *(int *)(lVar19 + 8 + lVar15) = iVar3;
    iVar16 = local_a8[0];
    iVar3 = local_a8[3];
    if (*(char *)(param_1 + 0x98) != '\0') {
      iVar16 = local_a8[3];
      iVar3 = local_a8[0];
    }
    lVar19 = *(longlong *)(param_1 + 0x78);
    *(int *)(lVar19 + lVar15) = iVar16;
    *(int *)(lVar19 + 4 + lVar15) = local_a8[2];
    *(int *)(lVar19 + 8 + lVar15) = iVar3;
    lVar17 = lVar17 + 2;
    uVar18 = uVar18 + 1;
    lVar19 = lVar12 + 4;
  } while (uVar18 != 6);
  if ((local_90 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483f6cc2 FUN_1483f6cc2 body=410 status=ok
// SIG undefined FUN_1483f6cc2(void)

void FUN_1483f6cc2(double *param_1,undefined8 param_2)

{
  undefined1 auStack_178 [32];
  undefined **local_158;
  undefined1 local_150 [152];
  double local_b8;
  double local_b0;
  double local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  double local_80;
  double local_78;
  double local_70;
  undefined1 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  memset(local_150,0,0x91);
  local_158 = &PTR_FUN_14ae97758;
  local_68 = 1;
  local_a8 = (param_1[2] + param_1[5]) * 0.5;
  local_b0 = (param_1[1] + param_1[4]) * 0.5;
  local_b8 = (*param_1 + param_1[3]) * 0.5;
  local_70 = (param_1[5] - param_1[2]) * 0.5;
  local_78 = (param_1[4] - param_1[1]) * 0.5;
  local_80 = (param_1[3] - *param_1) * 0.5;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_88 = 0x3ff0000000000000;
  FUN_1483f67ec(&local_158);
  FUN_146c00e98(param_2,&local_158);
  FUN_146c017d0(param_2);
  FUN_146bd8050(&local_158);
  if ((local_60 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483f6e5e FUN_1483f6e5e body=335 status=ok
// SIG undefined FUN_1483f6e5e(void)

void FUN_1483f6e5e(undefined8 param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_2d8 [40];
  undefined1 local_2b0 [64];
  undefined **local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined1 local_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined1 local_240;
  undefined8 local_23c;
  undefined8 uStack_234;
  undefined8 local_228;
  undefined1 local_218 [304];
  undefined8 local_e8;
  longlong lStack_e0;
  undefined8 local_d8;
  undefined3 uStack_d0;
  undefined5 local_cd;
  undefined3 uStack_c8;
  undefined8 uStack_c5;
  undefined1 *local_bc;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  cVar1 = FUN_146c047ec();
  if (cVar1 == '\0') {
    local_270 = &PTR_FUN_149f36300;
    local_258 = 0;
    local_228 = 0;
    local_250 = 0;
    uStack_248 = 0;
    local_240 = 0;
    local_23c = 0;
    uStack_234 = 0;
    local_260 = 0x3ee4f8b588000000;
    local_268 = param_1;
    FUN_146c3d996();
    lStack_e0 = 0;
    uStack_c8 = 0;
    uStack_c5 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_cd = 0;
    local_bc = &DAT_100000002;
    local_a8 = 0;
    local_98 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_e8 = param_1;
    FUN_146c68b4c(&local_e8);
    if ((longlong)(int)local_d8 != 0) {
      lVar3 = (longlong)(int)local_d8 << 6;
      lVar2 = lStack_e0;
      do {
        FUN_146c7f310(local_2b0,lVar2);
        FUN_1483150ae(local_218,param_1,local_2b0);
        FUN_148315182(local_218,0xffffffff);
        FUN_148315ddc(local_218);
        lVar2 = lVar2 + 0x40;
        lVar3 = lVar3 + -0x40;
      } while (lVar3 != 0);
    }
    FUN_1482f1656(&local_e8);
  }
  if ((local_40 ^ (ulonglong)auStack_2d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483f6fae FUN_1483f6fae body=397 status=ok
// SIG undefined FUN_1483f6fae(void)

void FUN_1483f6fae(double *param_1,undefined8 *param_2,undefined8 *param_3)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68 [10];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  dVar8 = (double)(-(ulonglong)(0.0 <= param_1[5] - param_1[2]) &
                  (ulonglong)(param_1[5] - param_1[2]));
  dVar9 = (double)(-(ulonglong)(0.0 <= param_1[4] - param_1[1]) &
                  (ulonglong)(param_1[4] - param_1[1]));
  uVar6 = -(ulonglong)(dVar8 <= dVar9);
  dVar1 = (double)(~uVar6 & (ulonglong)dVar8 | uVar6 & (ulonglong)dVar9);
  dVar2 = (double)(-(ulonglong)(0.0 <= param_1[3] - *param_1) & (ulonglong)(param_1[3] - *param_1));
  uVar6 = -(ulonglong)(dVar1 <= dVar2);
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0x3ff0000000000000;
  param_3[6] = DAT_14c8464f0;
  uVar3 = DAT_14c8464e8;
  param_3[4] = DAT_14c8464e0;
  param_3[5] = uVar3;
  dVar8 = DAT_14c846518;
  param_3[7] = DAT_14c846510;
  param_3[8] = dVar8;
  param_3[9] = DAT_14c846520;
  dVar8 = param_1[2];
  dVar9 = param_1[5];
  dVar7 = (double)(uVar6 & (ulonglong)dVar2 | ~uVar6 & (ulonglong)dVar1);
  dVar2 = param_1[1];
  dVar1 = param_1[4];
  param_3[4] = (*param_1 + param_1[3]) * 0.5;
  param_3[5] = (dVar2 + dVar1) * 0.5;
  param_3[6] = (dVar8 + dVar9) * 0.5;
  dVar8 = DAT_14c846520 * dVar7;
  dVar9 = DAT_14c846518 * dVar7;
  param_3[7] = dVar7 * DAT_14c846510;
  param_3[8] = dVar9;
  param_3[9] = dVar8;
  FUN_1483f713c(param_3,local_68,0x3e45798ee2308c3a);
  puVar5 = local_68;
  for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *param_2 = *puVar5;
    puVar5 = puVar5 + 1;
    param_2 = param_2 + 1;
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483f713c FUN_1483f713c body=588 status=ok
// SIG undefined FUN_1483f713c(void)

undefined4 * FUN_1483f713c(double *param_1,undefined4 *param_2,double param_3)

{
  double dVar1;
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_b8 [32];
  double local_98;
  double local_90;
  double local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  dVar6 = *param_1;
  dVar5 = param_1[1];
  dVar4 = param_1[2];
  dVar1 = param_1[3];
  dVar3 = dVar1 * dVar1 + dVar4 * dVar4 + dVar6 * dVar6 + dVar5 * dVar5;
  local_80 = 0.0;
  uStack_78 = 0.0;
  local_70 = 0.0;
  uStack_68 = 0.0;
  if (0.0 < dVar3) {
    dVar3 = 1.0 / dVar3;
    uStack_68 = dVar1 * dVar3;
    local_70 = -dVar4 * dVar3;
    uStack_78 = -dVar5 * dVar3;
    local_80 = -dVar6 * dVar3;
  }
  dVar6 = param_1[7];
  dVar5 = param_1[8];
  uVar2 = -(ulonglong)(-dVar6 <= dVar6);
  dVar4 = (double)(-(ulonglong)
                    (param_3 < (double)(uVar2 & (ulonglong)dVar6 | ~uVar2 & (ulonglong)-dVar6)) &
                  (ulonglong)(1.0 / dVar6));
  uVar2 = -(ulonglong)(-dVar5 <= dVar5);
  dVar5 = (double)(-(ulonglong)
                    (param_3 < (double)(uVar2 & (ulonglong)dVar5 | ~uVar2 & (ulonglong)-dVar5)) &
                  (ulonglong)(1.0 / dVar5));
  dVar6 = param_1[9];
  uVar2 = -(ulonglong)(-dVar6 <= dVar6);
  dVar6 = (double)(-(ulonglong)
                    (param_3 < (double)(uVar2 & (ulonglong)dVar6 | ~uVar2 & (ulonglong)-dVar6)) &
                  (ulonglong)(1.0 / dVar6));
  local_88 = -param_1[6] * dVar6;
  local_90 = -param_1[5] * dVar5;
  local_98 = -param_1[4] * dVar4;
  FUN_146bed047(param_2 + 8,&local_80);
  param_2[4] = (undefined4)local_70;
  param_2[5] = local_70._4_4_;
  param_2[6] = (undefined4)uStack_68;
  param_2[7] = uStack_68._4_4_;
  *param_2 = (undefined4)local_80;
  param_2[1] = local_80._4_4_;
  param_2[2] = (undefined4)uStack_78;
  param_2[3] = uStack_78._4_4_;
  *(double *)(param_2 + 0xe) = dVar4;
  *(double *)(param_2 + 0x10) = dVar5;
  *(double *)(param_2 + 0x12) = dVar6;
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483f738a FUN_1483f738a body=1247 status=ok
// SIG undefined FUN_1483f738a(void)

undefined8 FUN_1483f738a(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_c98 [32];
  undefined1 local_c78;
  undefined8 local_c68;
  longlong local_c60;
  longlong local_c58;
  undefined8 local_c50;
  longlong local_c48;
  undefined1 local_c39;
  undefined1 *local_c38;
  undefined1 *local_c30;
  undefined4 local_c28;
  undefined4 uStack_c24;
  undefined4 uStack_c20;
  undefined4 uStack_c1c;
  undefined8 local_c18;
  undefined8 local_c08;
  undefined8 uStack_c00;
  undefined8 local_bf8;
  undefined1 local_be8 [656];
  undefined **local_958;
  undefined1 *local_950;
  undefined1 *local_948;
  undefined8 local_940;
  undefined8 uStack_938;
  undefined8 local_930;
  undefined8 local_928;
  undefined8 local_920;
  undefined8 uStack_918;
  undefined8 local_910;
  undefined8 local_908;
  undefined8 uStack_900;
  undefined8 local_8f8;
  undefined8 local_8f0;
  undefined8 uStack_8e8;
  undefined8 local_8e0;
  undefined8 local_8d8;
  undefined8 local_8d0;
  undefined8 uStack_8c8;
  undefined8 local_8c0;
  undefined8 local_8b8;
  undefined8 uStack_8b0;
  undefined8 local_8a8;
  undefined4 local_8a0;
  undefined8 local_898;
  undefined1 local_890;
  undefined8 local_888;
  undefined8 local_880;
  undefined2 local_878;
  undefined1 local_876;
  undefined8 local_870;
  undefined1 local_868;
  undefined8 local_860;
  undefined8 local_858;
  undefined2 local_850;
  undefined1 local_84e;
  undefined4 local_84c;
  undefined1 local_848;
  undefined8 local_844;
  undefined1 *local_838;
  undefined8 local_830;
  undefined8 uStack_828;
  undefined8 local_820;
  undefined8 local_818;
  undefined8 local_810;
  undefined8 uStack_808;
  undefined8 local_800;
  undefined4 local_7f8;
  undefined4 uStack_7f4;
  undefined4 uStack_7f0;
  undefined4 uStack_7ec;
  undefined8 local_7e8;
  undefined8 local_7e0;
  undefined8 uStack_7d8;
  undefined8 local_7d0;
  undefined8 uStack_7c8;
  undefined8 local_7b0;
  undefined4 local_7a8;
  undefined8 local_7a4;
  undefined4 local_79c;
  undefined8 local_790;
  undefined4 local_788;
  undefined1 local_780;
  undefined8 local_778;
  undefined8 uStack_770;
  undefined8 local_758;
  undefined4 local_750;
  undefined8 local_74c;
  undefined4 local_744;
  undefined8 local_738;
  undefined4 local_730;
  undefined8 local_728;
  undefined8 uStack_720;
  undefined8 local_708;
  undefined4 local_700;
  undefined8 local_6fc;
  undefined4 local_6f4;
  undefined8 local_6e8;
  undefined4 local_6e0;
  undefined2 local_6d8;
  undefined1 local_6d0 [544];
  undefined1 local_4b0 [544];
  undefined1 local_290 [544];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c98;
  local_c78 = 0;
  local_c68 = param_1;
  local_c50 = param_3;
  FUN_1411b354a(local_290,0,0,0);
  local_c08 = DAT_14c8464e0;
  uStack_c00 = DAT_14c8464e8;
  local_bf8 = DAT_14c8464f0;
  local_c18 = DAT_14c846520;
  local_c28 = (undefined4)DAT_14c846510;
  uStack_c24 = DAT_14c846510._4_4_;
  uStack_c20 = (undefined4)DAT_14c846518;
  uStack_c1c = DAT_14c846518._4_4_;
  if ((longlong)(int)param_2[1] != 0) {
    local_c58 = *param_2;
    local_c60 = (longlong)(int)param_2[1] << 3;
    lVar3 = 0;
    do {
      uVar1 = *(undefined8 *)(local_c58 + lVar3);
      local_c78 = 0;
      local_c48 = lVar3;
      FUN_1411b354a(local_4b0,0,0,0);
      FUN_1483f61b4(uVar1,local_4b0);
      FUN_146c3cd49(local_4b0,local_c50,0);
      local_c78 = 0;
      FUN_1411b354a(local_6d0,0,0,0);
      local_958 = &PTR_FUN_149f64a58;
      local_930 = 0;
      local_940 = 0;
      uStack_938 = 0;
      local_928 = 0x3ff0000000000000;
      local_910 = local_bf8;
      local_920 = local_c08;
      uStack_918 = uStack_c00;
      local_8f8 = local_c18;
      local_908 = CONCAT44(uStack_c24,local_c28);
      uStack_900 = CONCAT44(uStack_c1c,uStack_c20);
      local_8e0 = 0;
      local_8f0 = 0;
      uStack_8e8 = 0;
      local_8d8 = 0x3ff0000000000000;
      local_8c0 = local_bf8;
      local_8d0 = local_c08;
      uStack_8c8 = uStack_c00;
      local_8a8 = local_c18;
      local_8b8 = CONCAT44(uStack_c24,local_c28);
      uStack_8b0 = CONCAT44(uStack_c1c,uStack_c20);
      local_8a0 = 0;
      local_898 = 0x3eb0c6f7a0000000;
      local_890 = 1;
      local_888 = 0x3ff8000000000000;
      local_880 = 0x3fe0000000000000;
      local_878 = 0x101;
      local_876 = 0;
      local_870 = 0;
      local_868 = 0;
      local_860 = 0x3fb999999999999a;
      local_858 = 0x3fe0000000000000;
      local_850 = 0x101;
      local_84e = 1;
      local_84c = 0x358637bd;
      local_848 = 1;
      local_844 = 0xffffffff3c23d70a;
      local_820 = 0;
      local_830 = 0;
      uStack_828 = 0;
      local_818 = 0x3ff0000000000000;
      local_800 = DAT_14c8464f0;
      local_810 = DAT_14c8464e0;
      uStack_808 = DAT_14c8464e8;
      local_7e8 = DAT_14c846520;
      local_7f8 = (undefined4)DAT_14c846510;
      uStack_7f4 = DAT_14c846510._4_4_;
      uStack_7f0 = (undefined4)DAT_14c846518;
      uStack_7ec = DAT_14c846518._4_4_;
      local_7b0 = 0;
      local_7a8 = 0;
      local_7d0 = 0;
      uStack_7c8 = 0;
      local_7e0 = 0;
      uStack_7d8 = 0;
      local_7a4 = 0xffffffff00000080;
      local_79c = 0;
      local_790 = 0;
      local_788 = 0;
      local_780 = 0;
      local_758 = 0;
      local_750 = 0;
      local_778 = 0;
      uStack_770 = 0;
      local_74c = 0xffffffff00000080;
      local_744 = 0;
      local_738 = 0;
      local_730 = 0;
      local_708 = 0;
      local_700 = 0;
      local_728 = 0;
      uStack_720 = 0;
      local_6fc = 0xffffffff00000080;
      local_6f4 = 0;
      local_6e8 = 0;
      local_6e0 = 0;
      local_6d8 = 0x101;
      local_950 = local_290;
      local_948 = local_4b0;
      local_838 = local_6d0;
      cVar2 = FUN_146c6fae2(&local_958);
      if (cVar2 == '\0') {
        FUN_1483f6e5e(local_6d0);
      }
      FUN_146c3cd49(local_6d0,&local_830,0);
      FUN_146c00942(local_290,local_6d0);
      FUN_1482c3c14(local_be8,local_290);
      local_c30 = &local_c39;
      local_c38 = &LAB_148401e18;
      FUN_1482c3e64(local_be8,0);
      FUN_1482fed12(local_be8);
      FUN_146ec7826(&local_958);
      FUN_141082778(local_6d0);
      FUN_141082778(local_4b0);
      lVar3 = local_c48 + 8;
    } while (local_c60 != lVar3);
  }
  uVar1 = local_c68;
  FUN_146bffece(local_c68,local_290);
  FUN_141082778(local_290);
  if ((local_70 ^ (ulonglong)auStack_c98) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483f786a FUN_1483f786a body=1131 status=ok
// SIG undefined FUN_1483f786a(void)

undefined8 FUN_1483f786a(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_cf8 [32];
  uint local_cd8;
  undefined1 local_cc9;
  undefined1 *local_cc8;
  undefined1 *local_cc0;
  undefined4 local_cb8;
  undefined4 uStack_cb4;
  undefined4 uStack_cb0;
  undefined4 uStack_cac;
  undefined4 local_ca8;
  undefined4 uStack_ca4;
  undefined4 uStack_ca0;
  undefined4 uStack_c9c;
  undefined4 local_c98;
  undefined4 uStack_c94;
  undefined4 uStack_c90;
  undefined4 uStack_c8c;
  undefined1 local_c80 [8];
  undefined1 local_c78 [8];
  undefined1 local_c70 [8];
  undefined8 local_c68;
  undefined8 uStack_c60;
  undefined8 local_c58;
  undefined8 local_c50;
  undefined8 local_c48;
  undefined8 uStack_c40;
  undefined8 local_c38;
  undefined4 local_c30;
  undefined4 uStack_c2c;
  undefined4 uStack_c28;
  undefined4 uStack_c24;
  undefined8 local_c20;
  undefined8 local_c18;
  undefined8 uStack_c10;
  undefined8 local_c08;
  undefined8 local_c00;
  undefined8 local_bf8;
  undefined8 uStack_bf0;
  undefined8 local_be8;
  undefined4 local_be0;
  undefined4 uStack_bdc;
  undefined4 uStack_bd8;
  undefined4 uStack_bd4;
  undefined8 local_bd0;
  undefined1 local_bc8 [656];
  undefined **local_938;
  undefined1 *local_930;
  undefined1 *local_928;
  undefined8 local_920;
  undefined8 uStack_918;
  undefined8 local_910;
  undefined8 local_908;
  undefined8 local_900;
  undefined8 uStack_8f8;
  undefined8 local_8f0;
  undefined8 local_8e8;
  undefined8 uStack_8e0;
  undefined8 local_8d8;
  undefined8 local_8d0;
  undefined8 uStack_8c8;
  undefined8 local_8c0;
  undefined8 local_8b8;
  undefined8 local_8b0;
  undefined8 uStack_8a8;
  undefined8 local_8a0;
  undefined8 local_898;
  undefined8 uStack_890;
  undefined8 local_888;
  undefined4 local_880;
  undefined8 local_878;
  undefined1 local_870;
  undefined8 local_868;
  undefined8 local_860;
  undefined2 local_858;
  undefined1 local_856;
  undefined8 local_850;
  undefined1 local_848;
  undefined8 local_840;
  undefined8 local_838;
  undefined2 local_830;
  undefined1 local_82e;
  undefined4 local_82c;
  undefined1 local_828;
  undefined8 local_824;
  undefined1 *local_818;
  undefined8 local_810;
  undefined8 uStack_808;
  undefined8 local_800;
  undefined8 local_7f8;
  undefined8 local_7f0;
  undefined8 uStack_7e8;
  undefined8 local_7e0;
  undefined4 local_7d8;
  undefined4 uStack_7d4;
  undefined4 uStack_7d0;
  undefined4 uStack_7cc;
  undefined8 local_7c8;
  undefined8 local_7c0;
  undefined8 uStack_7b8;
  undefined8 local_7b0;
  undefined8 uStack_7a8;
  undefined8 local_790;
  undefined4 local_788;
  undefined8 local_784;
  undefined4 local_77c;
  undefined8 local_770;
  undefined4 local_768;
  undefined1 local_760;
  undefined8 local_758;
  undefined8 uStack_750;
  undefined8 local_738;
  undefined4 local_730;
  undefined8 local_72c;
  undefined4 local_724;
  undefined8 local_718;
  undefined4 local_710;
  undefined8 local_708;
  undefined8 uStack_700;
  undefined8 local_6e8;
  undefined4 local_6e0;
  undefined8 local_6dc;
  undefined4 local_6d4;
  undefined8 local_6c8;
  undefined4 local_6c0;
  undefined2 local_6b8;
  undefined1 local_6b0 [544];
  undefined1 local_490 [544];
  undefined1 local_270 [544];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_cf8;
  local_c08 = 0;
  local_c18 = 0;
  uStack_c10 = 0;
  local_c00 = 0x3ff0000000000000;
  local_bf8 = DAT_14c8464e0;
  uStack_bf0 = DAT_14c8464e8;
  local_be8 = DAT_14c8464f0;
  local_be0 = (undefined4)DAT_14c846510;
  uStack_bdc = DAT_14c846510._4_4_;
  uStack_bd8 = (undefined4)DAT_14c846518;
  uStack_bd4 = DAT_14c846518._4_4_;
  local_bd0 = DAT_14c846520;
  local_c58 = 0;
  local_c68 = 0;
  uStack_c60 = 0;
  local_c50 = 0x3ff0000000000000;
  local_c48 = DAT_14c8464e0;
  uStack_c40 = DAT_14c8464e8;
  local_c38 = DAT_14c8464f0;
  local_c30 = (undefined4)DAT_14c846510;
  uStack_c2c = DAT_14c846510._4_4_;
  uStack_c28 = (undefined4)DAT_14c846518;
  uStack_c24 = DAT_14c846518._4_4_;
  local_c20 = DAT_14c846520;
  FUN_1483f6fae(param_2,&local_c18);
  FUN_1483f738a(local_270,param_3,&local_c18);
  local_cd8 = 0;
  FUN_14831e774(local_270,local_c70,local_c78,local_c80);
  local_cd8 = local_cd8 & 0xffffff00;
  FUN_1411b354a(local_490,0,0,0);
  local_cb8 = *param_2;
  uStack_cb4 = param_2[1];
  uStack_cb0 = param_2[2];
  uStack_cac = param_2[3];
  local_ca8 = param_2[4];
  uStack_ca4 = param_2[5];
  uStack_ca0 = param_2[6];
  uStack_c9c = param_2[7];
  local_c98 = param_2[8];
  uStack_c94 = param_2[9];
  uStack_c90 = param_2[10];
  uStack_c8c = param_2[0xb];
  FUN_1483f6cc2(&local_cb8,local_490);
  FUN_146c3cd49(local_490,&local_c18,0);
  local_cd8 = local_cd8 & 0xffffff00;
  FUN_1411b354a(local_6b0,0,0,0);
  local_938 = &PTR_FUN_149f64a58;
  local_920 = 0;
  uStack_918 = 0;
  local_910 = 0;
  local_908 = 0x3ff0000000000000;
  local_900 = 0;
  uStack_8f8 = 0;
  local_8f0 = 0;
  local_8e8 = 0x3ff0000000000000;
  uStack_8e0 = 0x3ff0000000000000;
  local_8d8 = 0x3ff0000000000000;
  local_8d0 = 0;
  uStack_8c8 = 0;
  local_8c0 = 0;
  local_8b8 = 0x3ff0000000000000;
  local_8b0 = 0;
  uStack_8a8 = 0;
  local_8a0 = 0;
  local_898 = 0x3ff0000000000000;
  uStack_890 = 0x3ff0000000000000;
  local_888 = 0x3ff0000000000000;
  local_880 = 1;
  local_878 = 0x3eb0c6f7a0000000;
  local_870 = 1;
  local_868 = 0x3ff8000000000000;
  local_860 = 0x3fe0000000000000;
  local_858 = 0x101;
  local_856 = 0;
  local_850 = 0;
  local_848 = 0;
  local_840 = 0x3fb999999999999a;
  local_838 = 0x3fe0000000000000;
  local_830 = 0x101;
  local_82e = 1;
  local_82c = 0x358637bd;
  local_828 = 1;
  local_824 = 0xffffffff3c23d70a;
  local_800 = 0;
  local_810 = 0;
  uStack_808 = 0;
  local_7f8 = 0x3ff0000000000000;
  local_7f0 = DAT_14c8464e0;
  uStack_7e8 = DAT_14c8464e8;
  local_7e0 = DAT_14c8464f0;
  local_7d8 = (undefined4)DAT_14c846510;
  uStack_7d4 = DAT_14c846510._4_4_;
  uStack_7d0 = (undefined4)DAT_14c846518;
  uStack_7cc = DAT_14c846518._4_4_;
  local_7c8 = DAT_14c846520;
  local_790 = 0;
  local_788 = 0;
  local_7c0 = 0;
  uStack_7b8 = 0;
  local_7b0 = 0;
  uStack_7a8 = 0;
  local_784 = 0xffffffff00000080;
  local_77c = 0;
  local_770 = 0;
  local_768 = 0;
  local_760 = 0;
  local_738 = 0;
  local_730 = 0;
  local_758 = 0;
  uStack_750 = 0;
  local_72c = 0xffffffff00000080;
  local_724 = 0;
  local_718 = 0;
  local_710 = 0;
  local_6e8 = 0;
  local_6e0 = 0;
  local_708 = 0;
  uStack_700 = 0;
  local_6dc = 0xffffffff00000080;
  local_6d4 = 0;
  local_6c8 = 0;
  local_6c0 = 0;
  local_6b8 = 0x101;
  local_930 = local_490;
  local_928 = local_270;
  local_818 = local_6b0;
  cVar1 = FUN_146c6fae2(&local_938);
  if (cVar1 == '\0') {
    FUN_1483f6e5e(local_6b0);
  }
  FUN_146c3cd49(local_6b0,&local_810,0);
  FUN_1482c3c14(local_bc8,local_6b0);
  local_cc0 = &local_cc9;
  local_cc8 = &LAB_148401e18;
  FUN_1482c3e64(local_bc8,0);
  iVar2 = 5;
  do {
    FUN_143b2ed4e(local_6b0);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_146c3cd49(local_6b0,&local_c68,0);
  FUN_146bffece(param_1,local_6b0);
  FUN_1482fed12(local_bc8);
  FUN_146ec7826(&local_938);
  FUN_141082778(local_6b0);
  FUN_141082778(local_490);
  FUN_141082778(local_270);
  if ((local_50 ^ (ulonglong)auStack_cf8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483f7cd6 FUN_1483f7cd6 body=339 status=ok
// SIG undefined FUN_1483f7cd6(void)

double * FUN_1483f7cd6(double *param_1,undefined8 param_2,double param_3)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_d8 [32];
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14377f5b2(param_2,&local_b8);
  dVar1 = DAT_14c846520 * param_3;
  dVar2 = DAT_14c846518 * param_3;
  param_3 = param_3 * DAT_14c846510;
  *param_1 = (local_b8 - local_a0) - param_3;
  param_1[1] = (local_b0 - local_98) - dVar2;
  param_1[2] = (local_a8 - local_90) - dVar1;
  param_1[3] = local_b8 + local_a0 + param_3;
  param_1[4] = local_b0 + local_98 + dVar2;
  param_1[5] = local_a8 + local_90 + dVar1;
  if ((local_80 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483f7e2a FUN_1483f7e2a body=361 status=ok
// SIG undefined FUN_1483f7e2a(void)

undefined8 * FUN_1483f7e2a(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
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
  undefined1 auStack_e8 [40];
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar2 = param_2[1];
  if ((longlong)(int)lVar2 == 0) {
    uVar6 = 0xffffffff;
    uVar7 = 0x7fefffff;
    uVar4 = 0xffffffff;
    uVar5 = 0xffefffff;
    uVar8 = uVar4;
    uVar9 = uVar5;
    uVar10 = uVar6;
    uVar11 = uVar7;
    uVar12 = uVar4;
    uVar13 = uVar5;
    uVar14 = uVar6;
    uVar15 = uVar7;
  }
  else {
    lVar1 = *param_2;
    uVar4 = 0xffffffff;
    uVar5 = 0xffefffff;
    uVar6 = 0xffffffff;
    uVar7 = 0x7fefffff;
    lVar3 = 0;
    uVar8 = uVar4;
    uVar9 = uVar5;
    uVar10 = uVar6;
    uVar11 = uVar7;
    uVar12 = uVar4;
    uVar13 = uVar5;
    uVar14 = uVar6;
    uVar15 = uVar7;
    do {
      FUN_1483f7cd6(&local_c0,*(undefined8 *)(lVar1 + lVar3),0);
      if (local_c0 <= (double)CONCAT44(uVar11,uVar10)) {
        uVar10 = SUB84(local_c0,0);
        uVar11 = (undefined4)((ulonglong)local_c0 >> 0x20);
      }
      if (local_b8 <= (double)CONCAT44(uVar15,uVar14)) {
        uVar14 = SUB84(local_b8,0);
        uVar15 = (undefined4)((ulonglong)local_b8 >> 0x20);
      }
      if (local_b0 <= (double)CONCAT44(uVar7,uVar6)) {
        uVar6 = SUB84(local_b0,0);
        uVar7 = (undefined4)((ulonglong)local_b0 >> 0x20);
      }
      if ((double)CONCAT44(uVar5,uVar4) <= local_a8) {
        uVar4 = SUB84(local_a8,0);
        uVar5 = (undefined4)((ulonglong)local_a8 >> 0x20);
      }
      if ((double)CONCAT44(uVar13,uVar12) <= local_a0) {
        uVar12 = SUB84(local_a0,0);
        uVar13 = (undefined4)((ulonglong)local_a0 >> 0x20);
      }
      if ((double)CONCAT44(uVar9,uVar8) <= local_98) {
        uVar8 = SUB84(local_98,0);
        uVar9 = (undefined4)((ulonglong)local_98 >> 0x20);
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)(int)lVar2 * 8 != lVar3);
  }
  *param_1 = CONCAT44(uVar11,uVar10);
  param_1[1] = CONCAT44(uVar15,uVar14);
  param_1[2] = CONCAT44(uVar7,uVar6);
  param_1[3] = CONCAT44(uVar5,uVar4);
  param_1[4] = CONCAT44(uVar13,uVar12);
  param_1[5] = CONCAT44(uVar9,uVar8);
  if ((local_90 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1483f7f94 FUN_1483f7f94 body=1866 status=ok
// SIG undefined FUN_1483f7f94(void)

/* WARNING: Removing unreachable block (ram,0x0001483f813c) */
/* WARNING: Removing unreachable block (ram,0x0001483f82f3) */

void FUN_1483f7f94(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  void *pvVar8;
  uint uVar9;
  uint uVar10;
  double *pdVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  double *pdVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  double dVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined1 auStack_148 [40];
  ulonglong local_120;
  undefined8 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  uVar10 = *(uint *)(param_1 + 1);
  if ((ulonglong)uVar10 == 1) {
    iVar13 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar13 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar13 + 1U) {
      FUN_148401e1c(param_2,iVar13);
    }
    lVar15 = *param_2;
    lVar14 = (longlong)iVar13 * 0x10;
    *(undefined8 *)(lVar15 + lVar14) = 0;
    iVar13 = (int)param_1[1];
    *(int *)(lVar15 + 8 + lVar14) = iVar13;
    if (iVar13 != 0) {
      FUN_148401ea2(lVar15 + lVar14,iVar13);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_c0 ^ (ulonglong)auStack_148);
    }
    *(undefined4 *)(lVar15 + lVar14 + 0xc) = 0;
  }
  else {
    uVar7 = *(undefined8 *)*param_1;
    local_108 = (undefined8 *)0x0;
    uStack_100 = (double)CONCAT44(uStack_100._4_4_,1);
    FUN_148401ea2(&local_108,1);
    *local_108 = uVar7;
    iVar13 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar13 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar13 + 1U) {
      FUN_148401e1c(param_2,iVar13);
    }
    lVar15 = *param_2;
    lVar14 = (longlong)iVar13 * 0x10;
    *(undefined8 *)(lVar15 + lVar14) = 0;
    *(undefined8 **)(lVar15 + lVar14) = local_108;
    *(int *)(lVar15 + 8 + lVar14) = (int)uStack_100;
    *(undefined4 *)(lVar15 + 0xc + lVar14) = uStack_100._4_4_;
    uStack_100 = 0.0;
    local_108 = (void *)0x0;
    local_d8 = 0;
    uStack_d0 = 0;
    FUN_1483f7cd6(&local_108,*(undefined8 *)*param_1,0x408f400000000000);
    uVar19 = uStack_d0;
    lVar15 = (longlong)(int)uStack_d0;
    uVar9 = (int)uStack_d0 + 1;
    uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar9);
    if (uStack_d0._4_4_ < uVar9) {
      FUN_146bf26b8(&local_d8,uVar19 & 0xffffffff);
    }
    lVar15 = lVar15 * 0x30;
    pdVar11 = (double *)(local_d8 + 0x20 + lVar15);
    *pdVar11 = local_e8;
    pdVar11[1] = dStack_e0;
    pdVar11 = (double *)(local_d8 + 0x10 + lVar15);
    *pdVar11 = local_f8;
    pdVar11[1] = dStack_f0;
    puVar1 = (undefined4 *)(local_d8 + lVar15);
    *puVar1 = (undefined4)local_108;
    puVar1[1] = local_108._4_4_;
    puVar1[2] = (int)uStack_100;
    puVar1[3] = uStack_100._4_4_;
    if (1 < (int)uVar10) {
      uVar19 = 1;
      do {
        FUN_1483f7cd6(&local_108,*(undefined8 *)(*param_1 + uVar19 * 8),0x408f400000000000);
        if (0 < (longlong)(int)param_2[1]) {
          pdVar11 = (double *)(local_d8 + 0x28);
          lVar15 = 0;
          do {
            dVar2 = pdVar11[-5];
            uVar21 = SUB84(dVar2,0);
            uVar22 = (undefined4)((ulonglong)dVar2 >> 0x20);
            if (dVar2 < dStack_f0) {
              dVar23 = pdVar11[-2];
              uVar24 = SUB84(dVar23,0);
              uVar25 = (undefined4)((ulonglong)dVar23 >> 0x20);
              if ((double)local_108 < dVar23) {
                dVar3 = pdVar11[-4];
                uVar28 = SUB84(dVar3,0);
                uVar29 = (undefined4)((ulonglong)dVar3 >> 0x20);
                if (dVar3 < local_e8) {
                  dVar4 = pdVar11[-1];
                  uVar26 = SUB84(dVar4,0);
                  uVar27 = (undefined4)((ulonglong)dVar4 >> 0x20);
                  if (uStack_100 < dVar4) {
                    dVar5 = pdVar11[-3];
                    uVar31 = SUB84(dVar5,0);
                    uVar32 = (undefined4)((ulonglong)dVar5 >> 0x20);
                    if (dVar5 < dStack_e0) {
                      dVar6 = *pdVar11;
                      uVar30 = (undefined4)((ulonglong)dVar6 >> 0x20);
                      if (local_f8 < dVar6) {
                        if ((double)local_108 <= dVar2) {
                          uVar21 = SUB84(local_108,0);
                          uVar22 = (undefined4)((ulonglong)local_108 >> 0x20);
                        }
                        pdVar11[-5] = (double)CONCAT44(uVar22,uVar21);
                        if (uStack_100 <= dVar3) {
                          uVar28 = SUB84(uStack_100,0);
                          uVar29 = (undefined4)((ulonglong)uStack_100 >> 0x20);
                        }
                        pdVar11[-4] = (double)CONCAT44(uVar29,uVar28);
                        if (local_f8 <= dVar5) {
                          uVar31 = SUB84(local_f8,0);
                          uVar32 = (undefined4)((ulonglong)local_f8 >> 0x20);
                        }
                        pdVar11[-3] = (double)CONCAT44(uVar32,uVar31);
                        if (dVar23 <= dStack_f0) {
                          uVar24 = SUB84(dStack_f0,0);
                          uVar25 = (undefined4)((ulonglong)dStack_f0 >> 0x20);
                        }
                        pdVar11[-2] = (double)CONCAT44(uVar25,uVar24);
                        if (dVar4 <= local_e8) {
                          uVar26 = SUB84(local_e8,0);
                          uVar27 = (undefined4)((ulonglong)local_e8 >> 0x20);
                        }
                        pdVar11[-1] = (double)CONCAT44(uVar27,uVar26);
                        uVar21 = SUB84(dVar6,0);
                        if (dVar6 <= dStack_e0) {
                          uVar30 = (undefined4)((ulonglong)dStack_e0 >> 0x20);
                          uVar21 = SUB84(dStack_e0,0);
                        }
                        *pdVar11 = (double)CONCAT44(uVar30,uVar21);
                        lVar14 = *param_2;
                        lVar12 = *param_1;
                        iVar13 = *(int *)(lVar14 + 8 + lVar15);
                        *(uint *)(lVar14 + 8 + lVar15) = iVar13 + 1U;
                        if (*(uint *)(lVar14 + 0xc + lVar15) < iVar13 + 1U) {
                          FUN_1483f07d8((longlong *)(lVar14 + lVar15),iVar13);
                        }
                        *(undefined8 *)(*(longlong *)(lVar14 + lVar15) + (longlong)iVar13 * 8) =
                             *(undefined8 *)(lVar12 + uVar19 * 8);
                        goto LAB_1483f8340;
                      }
                    }
                  }
                }
              }
            }
            lVar15 = lVar15 + 0x10;
            pdVar11 = pdVar11 + 6;
          } while ((longlong)(int)param_2[1] * 0x10 != lVar15);
        }
        uVar7 = *(undefined8 *)(*param_1 + uVar19 * 8);
        local_118 = (undefined8 *)0x0;
        local_110 = CONCAT44(local_110._4_4_,1);
        FUN_148401ea2(&local_118,1);
        *local_118 = uVar7;
        iVar13 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar13 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar13 + 1U) {
          FUN_148401e1c(param_2,iVar13);
        }
        uVar16 = uStack_d0;
        lVar15 = *param_2;
        lVar14 = (longlong)iVar13 * 0x10;
        *(undefined8 *)(lVar15 + lVar14) = 0;
        *(undefined8 **)(lVar15 + lVar14) = local_118;
        *(undefined4 *)(lVar15 + 8 + lVar14) = (undefined4)local_110;
        *(undefined4 *)(lVar15 + 0xc + lVar14) = local_110._4_4_;
        local_110 = 0;
        local_118 = (undefined8 *)0x0;
        lVar15 = (longlong)(int)uStack_d0;
        uVar9 = (int)uStack_d0 + 1;
        uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar9);
        if (uStack_d0._4_4_ < uVar9) {
          FUN_146bf26b8(&local_d8,uVar16 & 0xffffffff);
        }
        lVar15 = lVar15 * 0x30;
        pdVar11 = (double *)(local_d8 + 0x20 + lVar15);
        *pdVar11 = local_e8;
        pdVar11[1] = dStack_e0;
        pdVar11 = (double *)(local_d8 + 0x10 + lVar15);
        *pdVar11 = local_f8;
        pdVar11[1] = dStack_f0;
        puVar1 = (undefined4 *)(local_d8 + lVar15);
        *puVar1 = (undefined4)local_108;
        puVar1[1] = local_108._4_4_;
        puVar1[2] = (int)uStack_100;
        puVar1[3] = uStack_100._4_4_;
LAB_1483f8340:
        uVar19 = uVar19 + 1;
      } while (uVar19 != uVar10);
    }
    uVar10 = *(uint *)(param_2 + 1);
    if (0 < (int)uVar10) {
      uVar19 = 0xffffffff;
      do {
        pdVar11 = (double *)(local_d8 + 0x58);
        uVar17 = 1;
        uVar9 = 0xffffffff;
        uVar16 = 0;
        do {
          if (uVar16 == (ulonglong)uVar10 - 1) goto LAB_1483f86d3;
          lVar15 = local_d8 + uVar16 * 0x30;
          pdVar18 = pdVar11;
          uVar20 = uVar17;
          do {
            if ((((*(double *)(local_d8 + uVar16 * 0x30) < pdVar18[-2]) &&
                 (pdVar18[-5] < *(double *)(lVar15 + 0x18))) &&
                (*(double *)(lVar15 + 8) < pdVar18[-1])) &&
               (((pdVar18[-4] < *(double *)(lVar15 + 0x20) &&
                 (*(double *)(lVar15 + 0x10) < *pdVar18)) &&
                (pdVar18[-3] < *(double *)(lVar15 + 0x28))))) {
              uVar9 = (uint)uVar20;
              uVar19 = uVar16 & 0xffffffff;
              break;
            }
            uVar20 = uVar20 + 1;
            pdVar18 = pdVar18 + 6;
          } while (uVar10 != uVar20);
          uVar17 = uVar17 + 1;
          pdVar11 = pdVar11 + 6;
          uVar16 = uVar16 + 1;
        } while ((int)uVar9 < 0);
        uVar16 = (ulonglong)uVar9;
        local_108 = (void *)0x0;
        uVar10 = *(uint *)(*param_2 + 8 + uVar16 * 0x10);
        pvVar8 = *(void **)(*param_2 + uVar16 * 0x10);
        uStack_100 = (double)CONCAT44(uStack_100._4_4_,uVar10);
        if ((longlong)(int)uVar10 == 0) {
          uStack_100 = (double)(ulonglong)uVar10;
        }
        else {
          FUN_148401ea2(&local_108,uVar10);
          memcpy(local_108,pvVar8,(longlong)(int)uVar10 << 3);
          if (0 < (int)uStack_100) {
            lVar15 = 0;
            local_120 = uVar16;
            do {
              pvVar8 = local_108;
              lVar14 = *param_2;
              lVar12 = (longlong)(int)uVar19 * 0x10;
              iVar13 = *(int *)(lVar14 + 8 + lVar12);
              *(uint *)(lVar14 + 8 + lVar12) = iVar13 + 1U;
              if (*(uint *)(lVar14 + 0xc + lVar12) < iVar13 + 1U) {
                FUN_1483f07d8((longlong *)(lVar14 + lVar12),iVar13);
              }
              *(undefined8 *)(*(longlong *)(lVar14 + lVar12) + (longlong)iVar13 * 8) =
                   *(undefined8 *)((longlong)pvVar8 + lVar15 * 8);
              lVar15 = lVar15 + 1;
              uVar16 = local_120;
            } while (lVar15 < (int)uStack_100);
          }
        }
        lVar15 = (longlong)(int)uVar19 * 0x30;
        lVar14 = uVar16 * 0x30;
        dVar2 = *(double *)(local_d8 + lVar15);
        uVar21 = SUB84(dVar2,0);
        uVar22 = (undefined4)((ulonglong)dVar2 >> 0x20);
        dVar23 = *(double *)(local_d8 + 8 + lVar15);
        dVar3 = *(double *)(local_d8 + lVar14);
        if (dVar3 <= dVar2) {
          uVar21 = SUB84(dVar3,0);
          uVar22 = (undefined4)((ulonglong)dVar3 >> 0x20);
        }
        *(ulonglong *)(local_d8 + lVar15) = CONCAT44(uVar22,uVar21);
        dVar2 = *(double *)(local_d8 + 8 + lVar14);
        if (dVar2 <= dVar23) {
          dVar23 = dVar2;
        }
        *(double *)(local_d8 + 8 + lVar15) = dVar23;
        dVar2 = *(double *)(local_d8 + 0x10 + lVar15);
        uVar21 = SUB84(dVar2,0);
        uVar22 = (undefined4)((ulonglong)dVar2 >> 0x20);
        dVar23 = *(double *)(local_d8 + 0x10 + lVar14);
        if (dVar23 <= dVar2) {
          uVar21 = SUB84(dVar23,0);
          uVar22 = (undefined4)((ulonglong)dVar23 >> 0x20);
        }
        *(ulonglong *)(local_d8 + 0x10 + lVar15) = CONCAT44(uVar22,uVar21);
        dVar2 = *(double *)(local_d8 + 0x18 + lVar15);
        uVar21 = SUB84(dVar2,0);
        uVar22 = (undefined4)((ulonglong)dVar2 >> 0x20);
        dVar23 = *(double *)(local_d8 + 0x18 + lVar14);
        if (dVar2 <= dVar23) {
          uVar21 = SUB84(dVar23,0);
          uVar22 = (undefined4)((ulonglong)dVar23 >> 0x20);
        }
        *(ulonglong *)(local_d8 + 0x18 + lVar15) = CONCAT44(uVar22,uVar21);
        dVar2 = *(double *)(local_d8 + 0x20 + lVar15);
        uVar21 = SUB84(dVar2,0);
        uVar22 = (undefined4)((ulonglong)dVar2 >> 0x20);
        dVar23 = *(double *)(local_d8 + 0x20 + lVar14);
        if (dVar2 <= dVar23) {
          uVar21 = SUB84(dVar23,0);
          uVar22 = (undefined4)((ulonglong)dVar23 >> 0x20);
        }
        *(ulonglong *)(local_d8 + 0x20 + lVar15) = CONCAT44(uVar22,uVar21);
        dVar2 = *(double *)(local_d8 + 0x28 + lVar15);
        uVar21 = SUB84(dVar2,0);
        uVar22 = (undefined4)((ulonglong)dVar2 >> 0x20);
        dVar23 = *(double *)(local_d8 + 0x28 + lVar14);
        if (dVar2 <= dVar23) {
          uVar21 = SUB84(dVar23,0);
          uVar22 = (undefined4)((ulonglong)dVar23 >> 0x20);
        }
        *(ulonglong *)(local_d8 + 0x28 + lVar15) = CONCAT44(uVar22,uVar21);
        FUN_148401efc(param_2,uVar9);
        iVar13 = ~uVar9 + (int)uStack_d0;
        if (iVar13 != 0) {
          if (0 < iVar13) {
            iVar13 = 1;
          }
          memmove((void *)(lVar14 + local_d8),
                  (void *)((longlong)((int)uStack_d0 - iVar13) * 0x30 + local_d8),
                  (longlong)iVar13 * 0x30);
        }
        uStack_d0 = CONCAT44(uStack_d0._4_4_,(int)uStack_d0 + -1);
        if (local_108 != (void *)0x0) {
          FUN_1400020a8();
        }
        uVar10 = *(uint *)(param_2 + 1);
      } while (0 < (int)uVar10);
    }
LAB_1483f86d3:
    if (local_d8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_c0 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483f873e FUN_1483f873e body=855 status=ok
// SIG undefined FUN_1483f873e(void)

void FUN_1483f873e(double *param_1,double *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  double *pdVar2;
  double dVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 local_158 [32];
  double local_138 [6];
  ulonglong local_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  double local_e8;
  double dStack_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  double local_c8;
  ulonglong local_c0;
  double local_b8;
  double local_b0;
  ulonglong local_a8;
  double local_a0;
  double local_98;
  ulonglong local_90;
  ulonglong local_88;
  double local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)local_158;
  dVar14 = param_2[3];
  local_138[0] = *param_1;
  if (local_138[0] < dVar14) {
    dVar15 = *param_2;
    local_f0 = param_1[3];
    if (dVar15 < local_f0) {
      dVar16 = param_2[4];
      local_a0 = param_1[1];
      if (local_a0 < dVar16) {
        dVar3 = param_2[1];
        local_b8 = param_1[4];
        if (((dVar3 < local_b8) && (local_c8 = param_1[2], local_c8 < param_2[5])) &&
           (local_b0 = param_1[5], param_2[2] < local_b0)) {
          local_138[1] = param_1[1];
          local_138[2] = param_1[2];
          local_138[4] = param_1[4];
          local_138[5] = param_1[5];
          local_138[3] = (double)(~-(ulonglong)(local_138[0] <= dVar15) & (ulonglong)local_138[0] |
                                 (ulonglong)dVar15 & -(ulonglong)(local_138[0] <= dVar15));
          local_100 = param_1[1];
          dStack_f8 = param_1[2];
          local_e8 = param_1[4];
          dStack_e0 = param_1[5];
          local_108 = ~-(ulonglong)(dVar14 <= local_f0) & (ulonglong)local_f0 |
                      (ulonglong)dVar14 & -(ulonglong)(dVar14 <= local_f0);
          local_d8 = (ulonglong)local_138[3];
          local_d0 = ~-(ulonglong)(dVar16 <= local_b8) & (ulonglong)local_b8 |
                     (ulonglong)dVar16 & -(ulonglong)(dVar16 <= local_b8);
          local_c0 = local_108;
          local_a8 = (ulonglong)local_138[3];
          local_98 = local_c8;
          local_90 = local_108;
          local_88 = ~-(ulonglong)(local_a0 <= dVar3) & (ulonglong)local_a0 |
                     (ulonglong)dVar3 & -(ulonglong)(local_a0 <= dVar3);
          local_80 = local_b0;
          lVar13 = 0;
          do {
            dVar14 = *(double *)((longlong)local_138 + lVar13 + 0x18) -
                     *(double *)((longlong)local_138 + lVar13);
            dVar15 = *(double *)((longlong)local_138 + lVar13 + 0x20) -
                     *(double *)((longlong)local_138 + lVar13 + 8);
            dVar16 = *(double *)((longlong)local_138 + lVar13 + 0x28) -
                     *(double *)((longlong)local_138 + lVar13 + 0x10);
            if (0.0 < (double)(-(ulonglong)(0.0 <= dVar16) & (ulonglong)dVar16) *
                      (double)(-(ulonglong)(0.0 <= dVar15) & (ulonglong)dVar15) *
                      (double)(-(ulonglong)(0.0 <= dVar14) & (ulonglong)dVar14)) {
              iVar4 = (int)param_3[1];
              *(uint *)(param_3 + 1) = iVar4 + 1U;
              if (*(uint *)((longlong)param_3 + 0xc) < iVar4 + 1U) {
                FUN_146bf26b8(param_3,iVar4);
              }
              lVar11 = *param_3;
              lVar12 = (longlong)iVar4 * 0x30;
              uVar5 = *(undefined8 *)((longlong)local_138 + lVar13);
              uVar6 = *(undefined8 *)((longlong)local_138 + lVar13 + 8);
              uVar7 = *(undefined8 *)((longlong)local_138 + lVar13 + 0x10);
              uVar8 = *(undefined8 *)((longlong)local_138 + lVar13 + 0x18);
              uVar9 = *(undefined8 *)((longlong)local_138 + lVar13 + 0x28);
              puVar1 = (undefined8 *)(lVar11 + 0x20 + lVar12);
              *puVar1 = *(undefined8 *)((longlong)local_138 + lVar13 + 0x20);
              puVar1[1] = uVar9;
              puVar1 = (undefined8 *)(lVar11 + 0x10 + lVar12);
              *puVar1 = uVar7;
              puVar1[1] = uVar8;
              *(undefined8 *)(lVar11 + lVar12) = uVar5;
              ((undefined8 *)(lVar11 + lVar12))[1] = uVar6;
            }
            lVar13 = lVar13 + 0x30;
          } while (lVar13 != 0xc0);
          if ((local_70 ^ (ulonglong)local_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0();
          }
          return;
        }
      }
    }
  }
  iVar4 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar4 + 1U) {
    FUN_146bf26b8(param_3,iVar4);
  }
  lVar13 = *param_3;
  lVar11 = (longlong)iVar4 * 0x30;
  dVar14 = *param_1;
  dVar15 = param_1[1];
  dVar16 = param_1[2];
  dVar3 = param_1[3];
  dVar10 = param_1[5];
  pdVar2 = (double *)(lVar13 + 0x20 + lVar11);
  *pdVar2 = param_1[4];
  pdVar2[1] = dVar10;
  pdVar2 = (double *)(lVar13 + 0x10 + lVar11);
  *pdVar2 = dVar16;
  pdVar2[1] = dVar3;
  *(double *)(lVar13 + lVar11) = dVar14;
  ((double *)(lVar13 + lVar11))[1] = dVar15;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_70 ^ (ulonglong)local_158);
}



// FUNCTION 1483f8a96 FUN_1483f8a96 body=755 status=ok
// SIG undefined FUN_1483f8a96(void)

void FUN_1483f8a96(double *param_1,longlong *param_2,longlong *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  void *_Src;
  longlong lVar8;
  double *pdVar9;
  undefined4 *puVar10;
  longlong lVar11;
  undefined4 *puVar12;
  double *pdVar13;
  bool bVar14;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  void *local_f8;
  ulonglong uStack_f0;
  double *local_e8;
  undefined8 uStack_e0;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_e8 = (double *)0x0;
  local_f8 = (void *)0x0;
  uStack_f0 = 0;
  uStack_e0 = 1;
  FUN_146bf26b8(&local_e8,0);
  dVar1 = *param_1;
  dVar2 = param_1[1];
  dVar3 = param_1[2];
  dVar4 = param_1[3];
  dVar5 = param_1[5];
  local_e8[4] = param_1[4];
  local_e8[5] = dVar5;
  local_e8[2] = dVar3;
  local_e8[3] = dVar4;
  *local_e8 = dVar1;
  local_e8[1] = dVar2;
  if ((longlong)(int)param_2[1] != 0) {
    puVar12 = (undefined4 *)*param_2;
    puVar10 = puVar12 + (longlong)(int)param_2[1] * 0xc;
    do {
      local_128 = *puVar12;
      uStack_124 = puVar12[1];
      uStack_120 = puVar12[2];
      uStack_11c = puVar12[3];
      local_118 = *(undefined8 *)(puVar12 + 4);
      uStack_110 = *(undefined8 *)(puVar12 + 6);
      local_108 = *(undefined8 *)(puVar12 + 8);
      uStack_100 = *(undefined8 *)(puVar12 + 10);
      if ((longlong)(int)uStack_e0 != 0) {
        lVar11 = (longlong)(int)uStack_e0 * 0x30;
        pdVar13 = local_e8;
        do {
          FUN_1483f873e(pdVar13,&local_128,&local_f8);
          pdVar13 = pdVar13 + 6;
          lVar11 = lVar11 + -0x30;
        } while (lVar11 != 0);
      }
      _Src = local_f8;
      iVar7 = (int)uStack_f0;
      lVar11 = (longlong)(int)uStack_f0;
      uStack_e0 = CONCAT44(uStack_e0._4_4_,(int)uStack_f0);
      if ((int)uStack_f0 == 0 && uStack_e0._4_4_ == 0) {
        uStack_e0 = uStack_f0 & 0xffffffff;
      }
      else {
        FUN_148401f96(&local_e8,uStack_f0 & 0xffffffff);
        if (iVar7 != 0) {
          memcpy(local_e8,_Src,lVar11 * 0x30);
        }
      }
      bVar14 = (longlong)uStack_f0 < 0;
      uStack_f0 = uStack_f0 & 0xffffffff00000000;
      if (bVar14) {
        FUN_14840200a(&local_f8,0);
      }
      puVar12 = puVar12 + 0xc;
    } while (puVar12 != puVar10);
  }
  if ((longlong)(int)uStack_e0 != 0) {
    pdVar9 = local_e8 + (longlong)(int)uStack_e0 * 6;
    pdVar13 = local_e8;
    do {
      dVar1 = pdVar13[2];
      dVar2 = pdVar13[5];
      dVar3 = *pdVar13;
      dVar4 = pdVar13[1];
      dVar5 = pdVar13[3];
      dVar6 = pdVar13[4];
      iVar7 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar7 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar7 + 1U) {
        FUN_146bf26b8(param_3,iVar7);
      }
      lVar11 = *param_3;
      lVar8 = (longlong)iVar7 * 0x30;
      *(double *)(lVar11 + lVar8) = dVar3 + -10.0;
      *(double *)(lVar11 + 8 + lVar8) = dVar4 + -10.0;
      *(double *)(lVar11 + 0x10 + lVar8) = dVar1;
      *(double *)(lVar11 + 0x18 + lVar8) = dVar5 + 10.0;
      *(double *)(lVar11 + 0x20 + lVar8) = dVar6 + 10.0;
      *(double *)(lVar11 + 0x28 + lVar8) = dVar2;
      pdVar13 = pdVar13 + 6;
    } while (pdVar13 != pdVar9);
  }
  if (local_f8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_e8 != (double *)0x0) {
    FUN_1400020a8();
  }
  if ((local_d0 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483f8d8a FUN_1483f8d8a body=700 status=ok
// SIG undefined FUN_1483f8d8a(void)

ulonglong FUN_1483f8d8a(undefined8 *param_1)

{
  int iVar1;
  double *pdVar2;
  bool bVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double *pdVar7;
  int iVar8;
  int iVar9;
  double *pdVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  int iVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  
  iVar1 = *(int *)(param_1 + 1);
  pdVar2 = (double *)*param_1;
  uVar11 = 0;
  pdVar7 = pdVar2 + 3;
  lVar14 = 1;
  dVar18 = *pdVar2;
  dVar21 = pdVar2[1];
  do {
    pdVar10 = pdVar7;
    dVar19 = pdVar10[-1];
    dVar20 = *pdVar10;
    dVar21 = dVar20 - dVar21;
    dVar18 = dVar19 - dVar18;
    dVar23 = SQRT(dVar18 * dVar18 + dVar21 * dVar21);
    if (0.0 < dVar23) {
      dVar22 = dVar21 * (1.0 / dVar23);
    }
    else {
      dVar22 = 0.0;
    }
    dVar23 = (double)(-(ulonglong)(0.0 < dVar23) & (ulonglong)(dVar18 * (1.0 / dVar23)));
    uVar11 = uVar11 - 1;
    lVar15 = lVar14;
  } while ((dVar23 * dVar23 + dVar22 * dVar22 <= 0.99) &&
          (lVar15 = lVar14 + 1, bVar3 = lVar14 < (longlong)iVar1 + -1, pdVar7 = pdVar10 + 2,
          lVar14 = lVar15, dVar18 = dVar19, dVar21 = dVar20, bVar3));
  if (iVar1 + uVar11 == 1) {
LAB_1483f8ff8:
    uVar16 = 0;
  }
  else {
    uVar16 = CONCAT71((int7)((ulonglong)lVar15 >> 8),1);
    if ((int)~uVar11 < iVar1) {
      uVar26 = SUB84(pdVar10[-3],0);
      uVar27 = (undefined4)((ulonglong)pdVar10[-3] >> 0x20);
      uVar24 = SUB84(pdVar10[-2],0);
      uVar25 = (undefined4)((ulonglong)pdVar10[-2] >> 0x20);
      iVar12 = -uVar11;
      iVar17 = 0;
      do {
        iVar12 = iVar12 + 1;
        uVar13 = (longlong)iVar12 % (longlong)iVar1 & 0xffffffff;
        dVar18 = pdVar2[uVar13 * 2];
        dVar21 = pdVar2[uVar13 * 2 + 1];
        dVar4 = (dVar18 - (double)CONCAT44(uVar27,uVar26)) * dVar22 -
                (dVar21 - (double)CONCAT44(uVar25,uVar24)) * dVar23;
        iVar9 = -(uint)(dVar4 < 0.0);
        if (0.0 < dVar4) {
          iVar9 = 1;
        }
        iVar8 = iVar17;
        if (((iVar9 != 0) && (iVar8 = iVar9, iVar17 != 0)) && (iVar8 = iVar17, iVar9 * iVar17 < 0))
        goto LAB_1483f8ff8;
        iVar17 = iVar8;
        dVar4 = dVar21 - dVar20;
        dVar5 = dVar18 - dVar19;
        dVar6 = SQRT(dVar5 * dVar5 + dVar4 * dVar4);
        if (0.0 < dVar6) {
          dVar4 = dVar4 * (1.0 / dVar6);
        }
        else {
          dVar4 = 0.0;
        }
        dVar5 = (double)(-(ulonglong)(0.0 < dVar6) & (ulonglong)(dVar5 * (1.0 / dVar6)));
        if (0.99 < dVar5 * dVar5 + dVar4 * dVar4) {
          uVar24 = SUB84(dVar20,0);
          uVar25 = (undefined4)((ulonglong)dVar20 >> 0x20);
          uVar26 = SUB84(dVar19,0);
          uVar27 = (undefined4)((ulonglong)dVar19 >> 0x20);
          dVar19 = dVar18;
          dVar20 = dVar21;
          dVar22 = dVar4;
          dVar23 = dVar5;
        }
      } while (iVar12 <= iVar1);
    }
  }
  return uVar16 & 0xffffffff;
}



// FUNCTION 1483f9046 FUN_1483f9046 body=290 status=ok
// SIG undefined FUN_1483f9046(void)

void FUN_1483f9046(longlong *param_1,double *param_2,double *param_3,longlong param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_a8 [40];
  longlong local_80;
  double local_78;
  double local_70;
  double local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar8 = (int)param_1[1];
  plVar1 = (longlong *)(param_4 + 0x30);
  local_80 = param_4;
  FUN_14051b394(plVar1,iVar8 * 2,1);
  if (0 < (longlong)iVar8) {
    lVar9 = (longlong)iVar8 * 0x18;
    lVar11 = 8;
    lVar12 = 0;
    do {
      puVar2 = (undefined4 *)(*param_1 + -8 + lVar11);
      local_60 = *puVar2;
      uStack_5c = puVar2[1];
      uStack_58 = puVar2[2];
      uStack_54 = puVar2[3];
      local_50 = 0;
      FUN_146bed047(&local_78,param_2 + 3,&local_60);
      dVar3 = param_2[2];
      dVar4 = param_2[1];
      dVar5 = *param_2;
      lVar10 = *plVar1;
      *(double *)(lVar10 + lVar12) = local_78 + dVar5;
      *(double *)(lVar10 + 8 + lVar12) = local_70 + dVar4;
      *(double *)(lVar10 + 0x10 + lVar12) = local_68 + dVar3;
      dVar6 = param_3[2];
      dVar7 = param_3[1];
      lVar10 = *plVar1 + lVar9;
      *(double *)(lVar12 + lVar10) = local_78 + dVar5 + *param_3;
      *(double *)(lVar12 + 8 + lVar10) = local_70 + dVar4 + dVar7;
      *(double *)(lVar12 + 0x10 + lVar10) = local_68 + dVar3 + dVar6;
      lVar12 = lVar12 + 0x18;
      lVar11 = lVar11 + 0x10;
    } while (lVar9 != lVar12);
  }
  FUN_1479b2c20(local_80);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483f916a FUN_1483f916a body=3293 status=ok
// SIG undefined FUN_1483f916a(void)

void FUN_1483f916a(longlong param_1,double *param_2,longlong *param_3)

{
  double *pdVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  void *pvVar16;
  longlong *plVar17;
  void *pvVar18;
  char cVar19;
  uint uVar20;
  ulonglong uVar21;
  uint uVar22;
  ulonglong uVar23;
  uint uVar24;
  uint uVar25;
  ulonglong uVar26;
  longlong lVar27;
  uint uVar28;
  uint uVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  undefined1 auStack_1a8 [32];
  double *local_188;
  longlong *local_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined4 local_160;
  void *local_158;
  undefined8 uStack_150;
  undefined8 *local_148;
  undefined8 uStack_140;
  longlong local_138;
  undefined8 uStack_130;
  double local_128;
  double dStack_120;
  undefined8 local_110;
  undefined8 uStack_108;
  double local_100;
  void *local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  dVar5 = param_2[3];
  dVar39 = param_2[4];
  dVar37 = param_2[5] + param_2[5];
  uVar28 = *(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24);
  uVar25 = 0;
  if ((uVar28 != 0) &&
     (uVar25 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x28) - 1U))) {
    uVar20 = 1;
    uVar22 = 1;
    if (1 < (int)uVar28) {
      uVar20 = uVar28;
    }
    do {
      uVar25 = uVar20;
      if (uVar20 == uVar22) break;
      uVar24 = uVar22 >> 9;
      uVar29 = uVar22 & 0x1ff;
      uVar25 = uVar22;
      uVar22 = uVar22 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x28))[uVar24] +
                                         (ulonglong)uVar29 * 2) - 1U));
  }
  dVar15 = 1.0 - ((dVar39 + dVar39) * dVar39 + dVar5 * (dVar5 + dVar5));
  dVar14 = dVar37 * dVar39 - (dVar5 + dVar5) * param_2[6];
  dVar5 = dVar5 * dVar37 + param_2[6] * (dVar39 + dVar39);
  local_188 = param_2;
  local_180 = param_3;
  if (uVar25 != uVar28) {
    do {
      lVar32 = *(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar25 >> 9) * 8);
      uVar21 = (ulonglong)(uVar25 & 0x1ff);
      local_e8 = *(double *)(lVar32 + 0x10 + uVar21 * 0x18);
      pdVar1 = (double *)(lVar32 + uVar21 * 0x18);
      local_f8 = (void *)*pdVar1;
      dStack_f0 = pdVar1[1];
      FUN_146bca7ae(param_2,&local_128,&local_f8,2);
      local_100 = (local_e8 - param_2[2]) * dVar15 +
                  ((double)local_f8 - *param_2) * dVar5 + (dStack_f0 - param_2[1]) * dVar14;
      local_110 = local_128;
      uStack_108 = dStack_120;
      cVar19 = FUN_146bfed03(&local_110);
      if (cVar19 != '\0') {
        lVar32 = *(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar25 >> 9) * 8);
        *(double *)(lVar32 + 0x10 + uVar21 * 0x18) = local_100;
        puVar2 = (undefined4 *)(lVar32 + uVar21 * 0x18);
        *puVar2 = (undefined4)local_110;
        puVar2[1] = local_110._4_4_;
        puVar2[2] = (undefined4)uStack_108;
        puVar2[3] = uStack_108._4_4_;
        if (*(char *)(param_1 + 0x210) == '\x01') {
          LOCK();
          *(int *)(param_1 + 0x214) = *(int *)(param_1 + 0x214) + 1;
          UNLOCK();
        }
      }
      uVar20 = uVar25 + 1;
      if ((int)(uVar25 + 1) < (int)uVar28) {
        uVar20 = uVar28;
      }
      do {
        uVar22 = uVar20;
        if (uVar20 - 1 == uVar25) break;
        uVar25 = uVar25 + 1;
        uVar22 = uVar25;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_1 + 0x28) +
                                             (ulonglong)(uVar25 >> 9) * 8) +
                                           (ulonglong)(uVar25 & 0x1ff) * 2) - 1U));
      uVar25 = uVar22;
    } while (uVar25 != uVar28);
  }
  local_128 = 0.0;
  dStack_120 = 0.0;
  local_f8 = (void *)((ulonglong)local_f8 & 0xffffffffffffff00);
  FUN_14475e60e(&local_128,&local_f8,*(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144));
  local_138 = 0;
  uStack_130 = 0;
  iVar8 = *(int *)(param_1 + 0x170);
  if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar8);
  }
  if (iVar8 != 0) {
    FUN_14481578e(&local_138);
  }
  uVar28 = *(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144);
  uVar25 = 0;
  if ((uVar28 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x148) - 1U))) {
    uVar20 = 1;
    uVar22 = 1;
    if (1 < (int)uVar28) {
      uVar20 = uVar28;
    }
    do {
      uVar25 = uVar20;
      if (uVar20 == uVar22) break;
      uVar24 = uVar22 >> 9;
      uVar29 = uVar22 & 0x1ff;
      uVar25 = uVar22;
      uVar22 = uVar22 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x148))[uVar24] +
                                         (ulonglong)uVar29 * 2) - 1U));
  }
  if (uVar25 != uVar28) {
    do {
      uVar21 = uStack_130;
      lVar32 = (longlong)(int)(uint)uStack_130;
      uVar20 = (uint)uStack_130 + 1;
      uStack_130 = CONCAT44(uStack_130._4_4_,uVar20);
      if (uStack_130._4_4_ < uVar20) {
        FUN_1446f48e2(&local_138,uVar21 & 0xffffffff);
      }
      *(uint *)(local_138 + lVar32 * 4) = uVar25;
      uVar20 = uVar25 + 1;
      if ((int)(uVar25 + 1) < (int)uVar28) {
        uVar20 = uVar28;
      }
      do {
        uVar22 = uVar20;
        if (uVar20 - 1 == uVar25) break;
        uVar25 = uVar25 + 1;
        uVar22 = uVar25;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_1 + 0x148) +
                                             (ulonglong)(uVar25 >> 9) * 8) +
                                           (ulonglong)(uVar25 & 0x1ff) * 2) - 1U));
      uVar25 = uVar22;
    } while (uVar25 != uVar28);
  }
  local_148 = (undefined8 *)0x0;
  uStack_140 = 0;
  local_158 = (void *)0x0;
  uStack_150 = 0;
  uVar25 = (uint)uStack_130;
  while (0 < (int)uVar25) {
    uVar28 = *(uint *)(local_138 + -4 + (ulonglong)uVar25 * 4);
    uStack_130._4_4_ = (uint)(uStack_130 >> 0x20);
    uStack_130 = CONCAT44(uStack_130._4_4_,uVar25 - 1);
    uVar25 = uVar25 - 1;
    if (*(char *)((longlong)local_128 + (longlong)(int)uVar28) == '\0') {
      *(undefined1 *)((longlong)local_128 + (longlong)(int)uVar28) = 1;
      lVar32 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(uVar28 >> 9) * 8);
      lVar27 = (ulonglong)((uVar28 & 0x1ff) << 2) * 3;
      uVar9 = *(undefined4 *)(lVar32 + 8 + lVar27);
      uStack_108._4_4_ = (undefined4)((ulonglong)uStack_108 >> 0x20);
      uStack_108 = (double)CONCAT44(uStack_108._4_4_,uVar9);
      local_110 = *(double *)(lVar32 + lVar27);
      lVar32 = *(longlong *)(*(longlong *)(param_1 + 0x180) + (ulonglong)(uVar28 >> 9) * 8);
      local_160 = *(undefined4 *)(lVar32 + 8 + lVar27);
      local_168 = *(undefined8 *)(lVar32 + lVar27);
      FUN_1407feed2(&local_148,3,CONCAT71((uint7)(uint3)((uint)uVar9 >> 8),1));
      puVar3 = (undefined8 *)
               (*(longlong *)
                 (*(longlong *)(param_1 + 0x10) + ((ulonglong)local_110 >> 9 & 0x7fffff) * 8) +
               ((ulonglong)local_110 & 0x1ff) * 0x18);
      uVar13 = puVar3[1];
      *local_148 = *puVar3;
      local_148[1] = uVar13;
      puVar3 = (undefined8 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(local_110._4_4_ >> 9) * 8)
               + ((ulonglong)local_110._4_4_ & 0x1ff) * 0x18);
      uVar13 = puVar3[1];
      local_148[2] = *puVar3;
      local_148[3] = uVar13;
      puVar3 = (undefined8 *)
               (*(longlong *)
                 (*(longlong *)(param_1 + 0x10) + ((ulonglong)uStack_108 >> 9 & 0x7fffff) * 8) +
               ((ulonglong)uStack_108 & 0x1ff) * 0x18);
      uVar13 = puVar3[1];
      local_148[4] = *puVar3;
      local_148[5] = uVar13;
      lVar32 = 0;
      do {
        puVar3 = local_148;
        uVar25 = *(uint *)((longlong)&local_168 + lVar32 * 4);
        uVar13 = *(undefined8 *)
                  (*(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(uVar25 >> 9) * 8) + 8
                  + (ulonglong)((uVar25 & 0x1ff) << 4));
        uVar20 = (uint)uVar13;
        uVar25 = (uint)((ulonglong)uVar13 >> 0x20);
        if (uVar28 != uVar20) {
          uVar25 = uVar20;
        }
        if ((uVar25 != 0xffffffff) &&
           (*(char *)((longlong)local_128 + (longlong)(int)uVar25) == '\0')) {
          lVar27 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(uVar25 >> 9) * 8);
          local_170 = *(undefined4 *)(lVar27 + 8 + (ulonglong)(uVar25 & 0x1ff) * 0xc);
          local_178 = *(undefined8 *)(lVar27 + (ulonglong)(uVar25 & 0x1ff) * 0xc);
          uVar20 = (int)lVar32 + 1;
          if (lVar32 == 2) {
            uVar20 = 0;
          }
          uVar26 = (ulonglong)uVar20;
          uVar21 = (ulonglong)((int)lVar32 - 1);
          iVar8 = *(int *)((longlong)&local_110 + lVar32 * 4);
          iVar10 = *(int *)((longlong)&local_110 + uVar26 * 4);
          lVar27 = 0;
          do {
            lVar31 = lVar27 + 1;
            lVar30 = 0;
            if (lVar27 != 2) {
              lVar30 = lVar31;
            }
            iVar11 = *(int *)((longlong)&local_178 + lVar30 * 4);
            iVar12 = *(int *)((longlong)&local_178 + lVar27 * 4);
            if (iVar12 == iVar10) {
              if (iVar11 == iVar8) {
LAB_1483f96cf:
                uVar23 = (ulonglong)((int)lVar27 - 1);
                if (lVar27 == 0) {
                  uVar23 = 2;
                }
                uVar22 = *(uint *)((longlong)&local_178 + uVar23 * 4);
                goto LAB_1483f96dd;
              }
            }
            else if (iVar12 == iVar8 && iVar11 == iVar10) goto LAB_1483f96cf;
            lVar27 = lVar31;
          } while (lVar31 != 3);
          uVar22 = 0xffffffff;
LAB_1483f96dd:
          if (lVar32 == 0) {
            uVar21 = 2;
          }
          dVar39 = (double)local_148[uVar21 * 2];
          dVar37 = (double)local_148[uVar21 * 2 + 1];
          dVar36 = (double)local_148[lVar32 * 2 + 1] - dVar37;
          dVar38 = (double)local_148[lVar32 * 2] - dVar39;
          dVar33 = SQRT(dVar38 * dVar38 + dVar36 * dVar36);
          if (0.0 < dVar33) {
            dVar36 = dVar36 * (1.0 / dVar33);
          }
          else {
            dVar36 = 0.0;
          }
          lVar27 = *(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar22 >> 9) * 8);
          dVar6 = *(double *)(lVar27 + (ulonglong)(uVar22 & 0x1ff) * 0x18);
          dVar7 = *(double *)(lVar27 + 8 + (ulonglong)(uVar22 & 0x1ff) * 0x18);
          dVar34 = dVar6 - dVar39;
          dVar35 = dVar7 - dVar37;
          if (0.0 <= dVar36 * dVar34 -
                     (double)(-(ulonglong)(0.0 < dVar33) & (ulonglong)((1.0 / dVar33) * dVar38)) *
                     dVar35) {
            dVar37 = (double)local_148[uVar26 * 2 + 1] - dVar37;
            dVar39 = (double)local_148[uVar26 * 2] - dVar39;
            dVar33 = SQRT(dVar39 * dVar39 + dVar37 * dVar37);
            if (0.0 < dVar33) {
              dVar37 = dVar37 * (1.0 / dVar33);
            }
            else {
              dVar37 = 0.0;
            }
            if (dVar34 * dVar37 -
                dVar35 * (double)(-(ulonglong)(0.0 < dVar33) & (ulonglong)((1.0 / dVar33) * dVar39))
                <= 0.0) {
              iVar8 = (int)uStack_140;
              lVar27 = (longlong)(int)uStack_140;
              uStack_150 = CONCAT44(uStack_150._4_4_,(int)uStack_140);
              if ((int)uStack_140 == 0 && uStack_150._4_4_ == 0) {
                uStack_150 = uStack_140 & 0xffffffff;
              }
              else {
                FUN_144721d4c(&local_158,uStack_140 & 0xffffffff);
                if (iVar8 != 0) {
                  memcpy(local_158,puVar3,lVar27 << 4);
                }
              }
              uVar21 = uStack_140;
              iVar8 = (int)uStack_140;
              uVar22 = (int)uStack_140 + 1;
              uStack_140 = CONCAT44(uStack_140._4_4_,uVar22);
              if (uStack_140._4_4_ < uVar22) {
                FUN_14489624a(&local_148,uVar21 & 0xffffffff);
              }
              memmove(local_148 + uVar26 * 2 + 2,local_148 + uVar26 * 2,
                      (ulonglong)(iVar8 - uVar20) << 4);
              puVar3 = local_148;
              local_148[uVar26 * 2] = dVar6;
              local_148[uVar26 * 2 + 1] = dVar7;
              local_f8 = (void *)0x0;
              lVar27 = (longlong)(int)uStack_140;
              dStack_f0 = (double)CONCAT44(dStack_f0._4_4_,(int)uStack_140);
              if (lVar27 == 0) {
                dStack_f0 = (double)(uStack_140 & 0xffffffff);
                cVar19 = FUN_1483f8d8a(&local_f8);
                pvVar16 = local_158;
              }
              else {
                FUN_144721d4c(&local_f8,uStack_140 & 0xffffffff,0);
                memcpy(local_f8,puVar3,lVar27 << 4);
                pvVar18 = local_f8;
                cVar19 = FUN_1483f8d8a(&local_f8);
                pvVar16 = local_158;
                if (pvVar18 != (void *)0x0) {
                  FUN_1400020a8(pvVar18);
                  pvVar16 = local_158;
                }
              }
              local_158 = pvVar16;
              if (cVar19 != '\0') {
                *(undefined1 *)((longlong)local_128 + (longlong)(int)uVar25) = 1;
                break;
              }
              uStack_140._4_4_ = (uint)(uStack_140 >> 0x20);
              iVar8 = (int)uStack_150;
              lVar27 = (longlong)(int)uStack_150;
              uStack_140 = CONCAT44(uStack_140._4_4_,(int)uStack_150);
              if ((int)uStack_150 == 0 && uStack_140._4_4_ == 0) {
                uStack_140 = uStack_150 & 0xffffffff;
              }
              else {
                FUN_144721d4c(&local_148,uStack_150 & 0xffffffff);
                if (iVar8 != 0) {
                  memcpy(local_148,pvVar16,lVar27 << 4);
                }
              }
            }
          }
        }
        lVar32 = lVar32 + 1;
      } while (lVar32 != 3);
      puVar3 = local_148;
      local_f8 = (void *)0x0;
      lVar32 = (longlong)(int)uStack_140;
      dStack_f0 = (double)CONCAT44(dStack_f0._4_4_,(int)uStack_140);
      if (lVar32 == 0) {
        dStack_f0 = (double)(uStack_140 & 0xffffffff);
      }
      else {
        FUN_144721d4c(&local_f8,uStack_140 & 0xffffffff,0);
        memcpy(local_f8,puVar3,lVar32 << 4);
      }
      plVar17 = local_180;
      iVar8 = (int)local_180[1];
      *(uint *)(local_180 + 1) = iVar8 + 1U;
      if (*(uint *)((longlong)local_180 + 0xc) < iVar8 + 1U) {
        FUN_148279f30(local_180,iVar8);
      }
      pvVar16 = local_f8;
      lVar32 = *plVar17;
      lVar31 = (longlong)iVar8 * 0x10;
      puVar3 = (undefined8 *)(lVar32 + lVar31);
      *(undefined8 *)(lVar32 + lVar31) = 0;
      lVar27 = (longlong)dStack_f0._0_4_;
      *(int *)(lVar32 + 8 + lVar31) = dStack_f0._0_4_;
      if (lVar27 == 0) {
        *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
      }
      else {
        FUN_144721d4c(puVar3,(ulonglong)dStack_f0 & 0xffffffff,0);
        memcpy((void *)*puVar3,pvVar16,lVar27 << 4);
      }
      if (local_f8 != (void *)0x0) {
        FUN_1400020a8();
      }
      uVar25 = (uint)uStack_130;
    }
  }
  uVar28 = *(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24);
  uVar25 = 0;
  if ((uVar28 != 0) &&
     (uVar25 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x28) - 1U))) {
    uVar20 = 1;
    uVar22 = 1;
    if (1 < (int)uVar28) {
      uVar20 = uVar28;
    }
    do {
      uVar25 = uVar20;
      if (uVar20 == uVar22) break;
      uVar24 = uVar22 >> 9;
      uVar29 = uVar22 & 0x1ff;
      uVar25 = uVar22;
      uVar22 = uVar22 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x28))[uVar24] +
                                         (ulonglong)uVar29 * 2) - 1U));
  }
  if (uVar25 != uVar28) {
    pdVar1 = local_188 + 3;
    do {
      lVar32 = *(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar25 >> 9) * 8);
      uVar21 = (ulonglong)(uVar25 & 0x1ff);
      puVar3 = (undefined8 *)(lVar32 + uVar21 * 0x18);
      local_f8 = (void *)*puVar3;
      dStack_f0 = (double)puVar3[1];
      dVar39 = *(double *)(lVar32 + 0x10 + uVar21 * 0x18);
      local_e8 = 0.0;
      FUN_146bed047(&local_110,pdVar1,&local_f8);
      local_e8 = dVar15 * dVar39 + local_100 + local_188[2];
      dStack_f0 = dVar14 * dVar39 + uStack_108 + local_188[1];
      local_f8 = (void *)(dVar39 * dVar5 + local_110 + *local_188);
      cVar19 = FUN_146bfed03(&local_f8);
      if (cVar19 != '\0') {
        lVar32 = *(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar25 >> 9) * 8);
        *(double *)(lVar32 + 0x10 + uVar21 * 0x18) = local_e8;
        pdVar4 = (double *)(lVar32 + uVar21 * 0x18);
        *pdVar4 = (double)local_f8;
        pdVar4[1] = dStack_f0;
        if (*(char *)(param_1 + 0x210) == '\x01') {
          LOCK();
          *(int *)(param_1 + 0x214) = *(int *)(param_1 + 0x214) + 1;
          UNLOCK();
        }
      }
      uVar20 = uVar25 + 1;
      if ((int)(uVar25 + 1) < (int)uVar28) {
        uVar20 = uVar28;
      }
      do {
        uVar22 = uVar20;
        if (uVar20 - 1 == uVar25) break;
        uVar25 = uVar25 + 1;
        uVar22 = uVar25;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_1 + 0x28) +
                                             (ulonglong)(uVar25 >> 9) * 8) +
                                           (ulonglong)(uVar25 & 0x1ff) * 2) - 1U));
      uVar25 = uVar22;
    } while (uVar25 != uVar28);
  }
  if (local_158 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_148 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_138 != 0) {
    FUN_1400020a8();
  }
  if (local_128 != 0.0) {
    FUN_1400020a8();
  }
  if ((local_e0 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483f9e4a FUN_1483f9e4a body=98 status=ok
// SIG undefined FUN_1483f9e4a(void)

void FUN_1483f9e4a(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0x40) {
    FUN_14840207c(param_1);
  }
  iVar6 = 0x40;
  do {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
      FUN_14840210e(param_1,iVar2);
    }
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar2 * 0x10);
    *puVar1 = *param_2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  return;
}



// FUNCTION 1483f9eac FUN_1483f9eac body=229 status=ok
// SIG undefined FUN_1483f9eac(void)

void FUN_1483f9eac(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14ae97770;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x1f);
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_14834fda2(param_1[0x1b],*(undefined4 *)(param_1 + 0x1c));
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_144716727(param_1[0x19],*(undefined4 *)(param_1 + 0x1a));
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_1483fdbe8(param_1[0x17],*(undefined4 *)(param_1 + 0x18));
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    plVar1 = param_1 + 0xc;
    if ((longlong *)param_1[10] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[10];
    }
                    /* WARNING: Could not recover jumptable at 0x0001483f9f85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    return;
  }
  return;
}



// FUNCTION 1483f9f9e FUN_1483f9f9e body=42 status=ok
// SIG undefined FUN_1483f9f9e(void)

void FUN_1483f9f9e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1483f9fd4 FUN_1483f9fd4 body=96 status=ok
// SIG undefined FUN_1483f9fd4(void)

undefined8 FUN_1483f9fd4(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f39988();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cb48918,1);
  return uVar3;
}



// FUNCTION 1483fa034 FUN_1483fa034 body=52 status=ok
// SIG undefined FUN_1483fa034(void)

void FUN_1483fa034(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1483fa068 FUN_1483fa068 body=42 status=ok
// SIG undefined FUN_1483fa068(void)

void FUN_1483fa068(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1483fa0c6 FUN_1483fa0c6 body=96 status=ok
// SIG undefined FUN_1483fa0c6(void)

undefined8 FUN_1483fa0c6(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f39f7c();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cb489a0,1);
  return uVar3;
}



// FUNCTION 1483fa126 FUN_1483fa126 body=52 status=ok
// SIG undefined FUN_1483fa126(void)

void FUN_1483fa126(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1483fa15a FUN_1483fa15a body=109 status=ok
// SIG undefined FUN_1483fa15a(void)

undefined * FUN_1483fa15a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb48a2c) {
    FUN_144b3d300(&DAT_14cb48a2c);
    if (DAT_14cb48a2c == -1) {
      FUN_1446f470e(&DAT_14cb48a24,L"FWaterInfoRenderingDepthPass",1);
      _Init_thread_footer(&DAT_14cb48a2c);
    }
  }
  return &DAT_14cb48a24;
}



// FUNCTION 1483fa1c8 FUN_1483fa1c8 body=109 status=ok
// SIG undefined FUN_1483fa1c8(void)

undefined * FUN_1483fa1c8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb48a38) {
    FUN_144b3d300(&DAT_14cb48a38);
    if (DAT_14cb48a38 == -1) {
      FUN_1446f470e(&DAT_14cb48a30,L"FWaterInfoRenderingColorPass",1);
      _Init_thread_footer(&DAT_14cb48a38);
    }
  }
  return &DAT_14cb48a30;
}



// FUNCTION 1483fa236 FUN_1483fa236 body=109 status=ok
// SIG undefined FUN_1483fa236(void)

undefined * FUN_1483fa236(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb48a44) {
    FUN_144b3d300(&DAT_14cb48a44);
    if (DAT_14cb48a44 == -1) {
      FUN_1446f470e(&DAT_14cb48a3c,L"FWaterInfoRenderingDilationPass",1);
      _Init_thread_footer(&DAT_14cb48a44);
    }
  }
  return &DAT_14cb48a3c;
}



// FUNCTION 1483fa2a4 FUN_1483fa2a4 body=280 status=ok
// SIG undefined FUN_1483fa2a4(void)

undefined8 * FUN_1483fa2a4(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 *local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140056680(local_38,L"WaterInfoDepthPass");
  local_48 = param_2;
  FUN_147cc7ce0(param_1,local_38,0,1);
  *param_1 = &PTR_FUN_14ae984c0;
  if (local_38[0] != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14ae98490;
  if (*(int *)(param_3 + 8) != *(int *)(param_3 + 0x34)) {
    puVar1 = (undefined8 *)FUN_14001cc68(0x58,0x10);
    *puVar1 = &PTR_FUN_14ae98598;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined8 *)((longlong)puVar1 + 0x34) = 0xffffffff00000080;
    *(undefined4 *)((longlong)puVar1 + 0x3c) = 0;
    puVar1[9] = 0;
    *(undefined4 *)(puVar1 + 10) = 0;
    FUN_1483fefd0(puVar1 + 1,param_3);
    local_38[0] = puVar1;
    FUN_147cc7db8(param_1,local_38);
    if (local_38[0] != (undefined8 *)0x0) {
      (**(code **)*local_38[0])(local_38[0],1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483fa3be FUN_1483fa3be body=142 status=ok
// SIG undefined FUN_1483fa3be(void)

undefined8 * FUN_1483fa3be(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140056680(local_30,L"WaterInfoColorPass");
  local_38 = param_2;
  FUN_147cc7ce0(param_1,local_30,1,2);
  *param_1 = &PTR_FUN_14ae984c0;
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14ae985d0;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483fa44e FUN_1483fa44e body=181 status=ok
// SIG undefined FUN_1483fa44e(void)

undefined8 * FUN_1483fa44e(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140056680(local_30,L"WaterInfoDilationPass");
  local_38 = param_2;
  FUN_147cc7ce0(param_1,local_30,0,1);
  *param_1 = &PTR_FUN_14ae984c0;
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14ae98650;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483fa52e FUN_1483fa52e body=84 status=ok
// SIG undefined FUN_1483fa52e(void)

void FUN_1483fa52e(longlong param_1,double *param_2)

{
  double dVar1;
  
  if ((9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x670) - *param_2)) ||
     (9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x678) - param_2[1]))) {
    dVar1 = param_2[1];
    *(double *)(param_1 + 0x670) = *param_2;
    *(double *)(param_1 + 0x678) = dVar1;
    *(undefined1 *)(param_1 + 0x811) = 1;
  }
  return;
}



// FUNCTION 1483fa582 FUN_1483fa582 body=339 status=ok
// SIG undefined FUN_1483fa582(void)

undefined8 *
FUN_1483fa582(undefined8 *param_1,undefined8 param_2,undefined4 *param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
             undefined4 param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  FUN_144b1dcb8();
  *param_1 = &PTR_FUN_14ae98f00;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *(undefined4 *)(param_1 + 0x29) = *param_3;
  *(undefined4 *)((longlong)param_1 + 0x14c) = uVar1;
  *(undefined4 *)(param_1 + 0x2a) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x154) = uVar3;
  param_1[0x2b] = *(undefined8 *)(param_3 + 4);
  *(undefined4 *)(param_1 + 0x2c) = param_4;
  *(undefined4 *)((longlong)param_1 + 0x164) = param_5;
  *(undefined4 *)(param_1 + 0x2d) = param_6;
  *(undefined4 *)((longlong)param_1 + 0x16c) = param_7;
  *(undefined4 *)(param_1 + 0x2e) = param_8;
  *(undefined4 *)((longlong)param_1 + 0x174) = param_9;
  puVar4 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  *(undefined4 *)(puVar4 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)puVar4 + 0xc) = 0x105;
  *(undefined1 *)((longlong)puVar4 + 0xe) = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_14ae98f60;
  *(undefined4 *)(puVar4 + 3) = 0;
  *(undefined4 *)((longlong)puVar4 + 0x1c) = param_4;
  puVar4[4] = 0;
  param_1[0x26] = puVar4;
  puVar4 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  uVar1 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(puVar4 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)puVar4 + 0xc) = 0x105;
  *(undefined1 *)((longlong)puVar4 + 0xe) = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_14ae98fc0;
  *(undefined4 *)(puVar4 + 3) = 0;
  *(undefined4 *)((longlong)puVar4 + 0x1c) = uVar1;
  param_1[0x27] = puVar4;
  return param_1;
}



// FUNCTION 1483fa6d6 FUN_1483fa6d6 body=339 status=ok
// SIG undefined FUN_1483fa6d6(void)

undefined8 *
FUN_1483fa6d6(undefined8 *param_1,undefined8 param_2,undefined4 *param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
             undefined4 param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  FUN_144b1dcb8();
  *param_1 = &PTR_FUN_14ae99020;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *(undefined4 *)(param_1 + 0x29) = *param_3;
  *(undefined4 *)((longlong)param_1 + 0x14c) = uVar1;
  *(undefined4 *)(param_1 + 0x2a) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x154) = uVar3;
  param_1[0x2b] = *(undefined8 *)(param_3 + 4);
  *(undefined4 *)(param_1 + 0x2c) = param_4;
  *(undefined4 *)((longlong)param_1 + 0x164) = param_5;
  *(undefined4 *)(param_1 + 0x2d) = param_6;
  *(undefined4 *)((longlong)param_1 + 0x16c) = param_7;
  *(undefined4 *)(param_1 + 0x2e) = param_8;
  *(undefined4 *)((longlong)param_1 + 0x174) = param_9;
  puVar4 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  *(undefined4 *)(puVar4 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)puVar4 + 0xc) = 0x105;
  *(undefined1 *)((longlong)puVar4 + 0xe) = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_14ae98f60;
  *(undefined4 *)(puVar4 + 3) = 0;
  *(undefined4 *)((longlong)puVar4 + 0x1c) = param_4;
  puVar4[4] = 0;
  param_1[0x26] = puVar4;
  puVar4 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  uVar1 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(puVar4 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)puVar4 + 0xc) = 0x105;
  *(undefined1 *)((longlong)puVar4 + 0xe) = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_14ae98fc0;
  *(undefined4 *)(puVar4 + 3) = 0;
  *(undefined4 *)((longlong)puVar4 + 0x1c) = uVar1;
  param_1[0x27] = puVar4;
  return param_1;
}



// FUNCTION 1483fa82a FUN_1483fa82a body=581 status=ok
// SIG undefined FUN_1483fa82a(void)

void FUN_1483fa82a(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [80];
  longlong local_98;
  undefined4 uStack_90;
  undefined2 uStack_8c;
  undefined2 uStack_8a;
  undefined4 uStack_88;
  undefined2 uStack_84;
  undefined1 local_82;
  undefined8 local_81;
  undefined8 uStack_79;
  undefined8 local_71;
  undefined8 uStack_69;
  undefined8 local_61;
  undefined5 uStack_59;
  undefined3 uStack_54;
  undefined5 uStack_51;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar3 = (longlong)param_4 * 0x10;
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x438) + lVar3);
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x438) + 8 + lVar3);
  if (param_3 < iVar4) {
    lVar3 = (longlong)param_3;
    lVar5 = lVar3 * 0xe0;
    do {
      lVar2 = *plVar1;
      FUN_14052082e(lVar2 + lVar5);
      FUN_1407f1458(lVar5 + 0xb0 + lVar2);
      lVar3 = lVar3 + 1;
      lVar5 = lVar5 + 0xe0;
    } while (lVar3 < (int)plVar1[1]);
    FUN_1483faa72(plVar1,param_3);
    iVar4 = (int)plVar1[1];
  }
  if (iVar4 < param_3) {
    local_98 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    uStack_8a = 0;
    uStack_88 = 0;
    uStack_84 = 0;
    local_82 = 1;
    local_81 = 0;
    uStack_79 = 0;
    local_71 = 0;
    uStack_69 = 0;
    local_61 = 0;
    uStack_59 = 0;
    uStack_54 = 0;
    uStack_51 = 0;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cb47958) {
      FUN_144b3d300(&DAT_14cb47958);
      if (DAT_14cb47958 == -1) {
        FUN_1446ddc76(&DAT_14cb47950,"FWaterMeshSceneProxy",1);
        _Init_thread_footer(&DAT_14cb47958);
      }
    }
    lVar3 = *(longlong *)
             (*(longlong *)
               (*(longlong *)(*(longlong *)(param_1 + 0x2a8) + (longlong)param_4 * 8) + 0x138) +
             0x10);
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
      local_98 = lVar3;
    }
    uStack_8c = 0;
    uStack_8a = 0;
    uStack_88 = 0;
    uStack_84 = 0x101;
    if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_3);
    }
    if (*(int *)((longlong)plVar1 + 0xc) < param_3) {
      FUN_148405236(plVar1,param_3);
    }
    iVar4 = (int)plVar1[1];
    if (iVar4 < param_3) {
      do {
        lVar3 = FUN_1483faaec(plVar1);
        FUN_1474121b6((longlong)&local_61 + 1,CONCAT44(iVar4,DAT_14cb47950));
        FUN_147377468(local_e8,&local_98);
        FUN_141793e86(lVar3 + 0x40,local_e8);
        FUN_14005bca4(local_e8);
        FUN_14742848e(lVar3,param_2);
        iVar4 = iVar4 + 1;
      } while (param_3 != iVar4);
    }
    FUN_14005bca4(&local_98);
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483faa72 FUN_1483faa72 body=121 status=ok
// SIG undefined FUN_1483faa72(void)

void FUN_1483faa72(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_148405094(param_1,iVar1);
    }
    FUN_148405048((longlong)iVar1 * 0xe0 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_148405128(param_1,param_2,iVar1 - param_2);
    FUN_14840518a(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1483faaec FUN_1483faaec body=67 status=ok
// SIG undefined FUN_1483faaec(void)

longlong FUN_1483faaec(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148405094(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0xe0 + *param_1;
  FUN_148405048(lVar2,1);
  return lVar2;
}



// FUNCTION 1483fab30 FUN_1483fab30 body=3527 status=ok
// SIG undefined FUN_1483fab30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1483fab30(longlong param_1,longlong param_2)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  int *piVar17;
  undefined8 *puVar18;
  int *piVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  longlong lVar22;
  int iVar23;
  int *piVar24;
  ulonglong uVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  longlong lVar30;
  int iVar31;
  longlong lVar32;
  uint uVar33;
  int iVar34;
  longlong lVar35;
  ulonglong uVar36;
  int *piVar37;
  longlong lVar38;
  undefined1 auStack_678 [32];
  longlong local_658;
  longlong local_650;
  int *local_648;
  longlong local_640;
  undefined8 *local_638;
  ulonglong local_630;
  int local_624;
  ulonglong local_620;
  longlong local_618;
  longlong local_610;
  undefined8 uStack_608;
  undefined8 local_600;
  undefined8 uStack_5f8;
  undefined4 uStack_5f0;
  undefined4 uStack_5ec;
  undefined4 uStack_5e8;
  undefined8 local_5e0;
  undefined8 uStack_5d8;
  undefined8 local_5d0;
  undefined8 uStack_5c8;
  undefined8 *local_5c0;
  undefined4 local_5b8;
  undefined4 local_5b4;
  undefined4 local_5b0;
  undefined4 uStack_5ac;
  undefined4 uStack_5a8;
  undefined4 uStack_5a4;
  undefined8 local_5a0;
  longlong local_598;
  longlong local_590;
  uint uStack_588;
  uint uStack_584;
  undefined4 uStack_580;
  undefined4 uStack_57c;
  undefined4 uStack_578;
  undefined4 uStack_574;
  undefined1 uStack_570;
  byte bStack_56f;
  undefined2 uStack_56e;
  undefined2 uStack_56c;
  undefined2 uStack_56a;
  undefined4 uStack_568;
  undefined8 uStack_560;
  undefined4 uStack_558;
  undefined4 local_554;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  undefined4 uStack_548;
  undefined4 uStack_544;
  undefined8 *local_540;
  undefined4 uStack_538;
  undefined4 uStack_534;
  undefined4 uStack_530;
  undefined8 uStack_52c;
  undefined4 uStack_524;
  undefined8 local_520;
  longlong local_518 [3];
  undefined8 uStack_500;
  int *local_4f8;
  undefined8 uStack_4f0;
  int local_4e8;
  uint local_4d4;
  undefined4 local_4d0;
  undefined4 local_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined8 local_4b8;
  undefined8 local_4a8;
  uint local_4a0;
  undefined4 local_49c;
  undefined1 local_498;
  undefined4 local_494;
  int local_490;
  int local_48c;
  longlong local_488;
  undefined8 local_480;
  undefined1 local_478;
  undefined4 local_474;
  undefined4 local_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428 [2];
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 *local_350;
  uint local_348;
  uint local_344;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  uint uStack_318;
  uint uStack_314;
  byte local_310;
  undefined8 local_308;
  longlong lStack_300;
  undefined4 local_2f8;
  undefined4 local_2f4;
  undefined4 local_2f0;
  undefined4 local_2ec;
  undefined4 local_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  longlong local_1e8;
  undefined8 local_1d8;
  longlong local_c8;
  undefined8 local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined1 local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_678;
  if (((((*(int *)(param_1 + 0x310) != 0) && (*(int *)(param_1 + 0x42c) != 0)) &&
       (*(int *)(DAT_14cb49688 + 4) != 0)) &&
      ((*(int *)(DAT_14cb49560 + 4) != 0 && (*(int *)(DAT_14cb49578 + 4) != 0)))) &&
     (*(int *)(DAT_14cb47918 + 4) != 0)) {
    lVar16 = *(longlong *)(param_2 + 0x148);
    local_4b8 = *(undefined8 *)(lVar16 + 0x1058);
    local_4c8 = *(undefined4 *)(lVar16 + 0x1048);
    uStack_4c4 = *(undefined4 *)(lVar16 + 0x104c);
    uStack_4c0 = *(undefined4 *)(lVar16 + 0x1050);
    uStack_4bc = *(undefined4 *)(lVar16 + 0x1054);
    local_640 = param_2;
    FUN_14482eabc(param_1);
    uVar26 = *(int *)(param_1 + 0x42c) * *(int *)(param_1 + 0x330);
    local_4f8 = (int *)0x0;
    uStack_4f0 = 0;
    local_518[2] = 0;
    uStack_500 = 0;
    local_4e8 = 0;
    uVar25 = (ulonglong)uVar26;
    local_658 = param_1;
    if ((int)uVar26 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar25);
    }
    if (uVar26 == 0) {
      iVar14 = 0;
      iVar28 = 0;
    }
    else {
      FUN_14481578e(local_518 + 2);
      iVar28 = (int)uStack_500;
      iVar14 = uStack_500._4_4_;
    }
    lVar22 = local_658 + 0x2c8;
    uStack_500 = CONCAT44(uStack_500._4_4_,iVar28 + uVar26);
    if ((uint)(iVar14 - iVar28) < uVar26) {
      FUN_1446f48e2(local_518 + 2);
    }
    memset((void *)((longlong)iVar28 * 4 + local_518[2]),0,uVar25 * 4);
    lVar38 = local_658;
    local_308 = 0;
    lStack_300 = (ulonglong)local_4d4 << 0x20;
    local_2f0 = local_4d0;
    local_2f8 = *(undefined4 *)(local_658 + 0x2c8);
    local_2f4 = *(undefined4 *)(local_658 + 0x42c);
    local_2ec = *(undefined4 *)(local_658 + 0x430);
    local_2c8 = *(undefined8 *)(lVar16 + 0x1030);
    uStack_2c0 = *(undefined8 *)(lVar16 + 0x1038);
    local_2b8 = *(undefined8 *)(lVar16 + 0x1040);
    local_2d0 = local_4b8;
    local_2e0 = CONCAT44(uStack_4c4,local_4c8);
    uStack_2d8 = CONCAT44(uStack_4bc,uStack_4c0);
    local_1e8 = 0;
    local_1d8 = 0x600000000;
    local_2e8 = *(undefined4 *)(local_658 + 0x420);
    local_c8 = 0;
    local_b8 = 0x800000000;
    local_80 = *(int *)(DAT_14cb47780 + 4) != 0;
    local_88 = *(undefined8 *)(local_658 + 0x418);
    local_a8 = *(undefined4 *)(local_658 + 0x3f8);
    uStack_a4 = *(undefined4 *)(local_658 + 0x3fc);
    uStack_a0 = *(undefined4 *)(local_658 + 0x400);
    uStack_9c = *(undefined4 *)(local_658 + 0x404);
    local_98 = *(undefined4 *)(local_658 + 0x408);
    uStack_94 = *(undefined4 *)(local_658 + 0x40c);
    uStack_90 = *(undefined4 *)(local_658 + 0x410);
    uStack_8c = *(undefined4 *)(local_658 + 0x414);
    FUN_143b39e2a(lVar22,&local_308,local_518 + 2);
    lVar16 = local_658;
    if (local_4e8 != 0) {
      uVar33 = *(uint *)(lVar38 + 0x330);
      uVar4 = *(uint *)(lVar38 + 0x42c);
      uVar15 = (ulonglong)uVar4;
      if (0 < (int)uVar4) {
        lVar22 = 0;
        uVar36 = 0;
        do {
          iVar28 = 0;
          if (0 < (int)uVar33) {
            piVar17 = (int *)(local_518[2] + lVar22);
            iVar28 = 0;
            uVar20 = (ulonglong)uVar33;
            do {
              iVar28 = iVar28 + *piVar17;
              piVar17 = piVar17 + (int)uVar15;
              uVar20 = uVar20 - 1;
            } while (uVar20 != 0);
          }
          FUN_1483fa82a(lVar16,*(undefined8 *)(local_640 + 0x110),iVar28,uVar36 & 0xffffffff);
          uVar36 = uVar36 + 1;
          uVar15 = (ulonglong)*(int *)(lVar16 + 0x42c);
          lVar22 = lVar22 + 4;
        } while ((longlong)uVar36 < (longlong)uVar15);
      }
      local_518[0] = 0;
      local_518[1] = 0;
      local_620 = (ulonglong)uVar33;
      FUN_144a8c360(local_518,uVar26,1);
      if (1 < (int)uVar26) {
        lVar16 = 0;
        do {
          *(int *)(local_518[0] + 4 + lVar16 * 4) =
               *(int *)(local_518[2] + lVar16 * 4) + *(int *)(local_518[0] + lVar16 * 4);
          lVar16 = lVar16 + 1;
        } while (uVar25 - 1 != lVar16);
      }
      puVar18 = (undefined8 *)(longlong)(int)uStack_4f0;
      if (0 < (longlong)puVar18) {
        puVar21 = (undefined8 *)0x0;
        local_648 = local_4f8;
        piVar17 = local_4f8;
        do {
          if (((undefined8 *)((longlong)puVar21 + 1U) < puVar18) && (piVar17[0xc] < *piVar17)) {
            uVar7 = *(undefined8 *)piVar17;
            uVar8 = *(undefined8 *)(piVar17 + 2);
            local_3e8 = *(undefined8 *)(piVar17 + 4);
            uStack_3e0 = *(undefined8 *)(piVar17 + 6);
            local_3d8 = *(undefined8 *)(piVar17 + 8);
            uStack_3d0 = *(undefined8 *)(piVar17 + 10);
            *(undefined8 *)(piVar17 + 8) = *(undefined8 *)(piVar17 + 0x14);
            *(undefined8 *)(piVar17 + 10) = *(undefined8 *)(piVar17 + 0x16);
            *(undefined8 *)(piVar17 + 4) = *(undefined8 *)(piVar17 + 0x10);
            *(undefined8 *)(piVar17 + 6) = *(undefined8 *)(piVar17 + 0x12);
            *(undefined8 *)piVar17 = *(undefined8 *)(piVar17 + 0xc);
            *(undefined8 *)(piVar17 + 2) = *(undefined8 *)(piVar17 + 0xe);
            local_3f8._0_4_ = (int)uVar7;
            local_3f8._4_4_ = (int)((ulonglong)uVar7 >> 0x20);
            uStack_3f0._0_4_ = (int)uVar8;
            uStack_3f0._4_4_ = (int)((ulonglong)uVar8 >> 0x20);
            *(undefined8 *)(piVar17 + 0x14) = local_3d8;
            *(undefined8 *)(piVar17 + 0x16) = uStack_3d0;
            *(undefined8 *)(piVar17 + 0x10) = local_3e8;
            *(undefined8 *)(piVar17 + 0x12) = uStack_3e0;
            piVar17[0xc] = (int)local_3f8;
            piVar17[0xd] = local_3f8._4_4_;
            piVar17[0xe] = (int)uStack_3f0;
            piVar17[0xf] = uStack_3f0._4_4_;
            local_3f8 = uVar7;
            uStack_3f0 = uVar8;
          }
          puVar21 = (undefined8 *)((longlong)puVar21 + 2);
          piVar17 = piVar17 + 0x18;
        } while (puVar21 < puVar18);
        if (2 < (int)uStack_4f0) {
          iVar28 = 2;
          do {
            iVar14 = iVar28 * 2;
            local_650 = CONCAT44(local_650._4_4_,iVar14);
            local_630 = (ulonglong)iVar14;
            lVar16 = 0;
            do {
              iVar29 = (int)uStack_4f0 - (int)lVar16;
              if (iVar14 <= iVar29) {
                iVar29 = iVar14;
              }
              if (iVar28 < iVar29 && 0 < iVar28) {
                iVar23 = 0;
                iVar27 = iVar28;
                while( true ) {
                  iVar31 = 0;
                  if (iVar27 - iVar23 != 0 && iVar23 <= iVar27) {
                    iVar31 = 0;
                    uVar26 = iVar27 - iVar23;
                    do {
                      iVar34 = (uVar26 >> 1) + iVar31;
                      if (local_4f8[lVar16 * 0xc + (longlong)iVar23 * 0xc + (longlong)iVar34 * 0xc]
                          <= local_4f8[lVar16 * 0xc + (longlong)iVar27 * 0xc]) {
                        iVar31 = iVar34 + (uVar26 & 1);
                      }
                      bVar6 = 1 < uVar26;
                      uVar26 = uVar26 >> 1;
                    } while (bVar6);
                  }
                  iVar31 = iVar31 + iVar23;
                  iVar23 = iVar27 - iVar31;
                  if (iVar23 == 0 || iVar27 < iVar31) break;
                  if (iVar29 - iVar27 == 0 || iVar29 < iVar27) {
                    iVar34 = 0;
                  }
                  else {
                    piVar17 = local_4f8 + lVar16 * 0xc + (longlong)iVar31 * 0xc;
                    iVar34 = 0;
                    uVar25 = (ulonglong)(uint)(iVar29 - iVar27);
                    do {
                      uVar33 = (int)(uVar25 >> 1) + iVar34;
                      uVar26 = (uint)uVar25;
                      if ((local_4f8 + lVar16 * 0xc + (longlong)iVar27 * 0xc)
                          [(ulonglong)uVar33 * 0xc] < *piVar17) {
                        iVar34 = uVar33 + (uVar26 & 1);
                      }
                      uVar25 = uVar25 >> 1;
                    } while (1 < uVar26);
                    iVar27 = iVar27 + iVar34;
                    if (0 < iVar34) {
                      piVar37 = piVar17 + (longlong)(iVar27 - iVar31) * 0xc;
                      piVar19 = piVar17 + (longlong)iVar23 * 0xc;
                      piVar24 = piVar17 + (longlong)iVar23 * 0xc;
                      do {
                        while( true ) {
                          piVar1 = piVar19 + 0xc;
                          uVar7 = *(undefined8 *)piVar17;
                          uVar8 = *(undefined8 *)(piVar17 + 2);
                          local_3e8 = *(undefined8 *)(piVar17 + 4);
                          uStack_3e0 = *(undefined8 *)(piVar17 + 6);
                          local_3d8 = *(undefined8 *)(piVar17 + 8);
                          uStack_3d0 = *(undefined8 *)(piVar17 + 10);
                          uVar9 = *(undefined8 *)piVar19;
                          uVar10 = *(undefined8 *)(piVar19 + 2);
                          uVar11 = *(undefined8 *)(piVar19 + 4);
                          uVar12 = *(undefined8 *)(piVar19 + 6);
                          uVar13 = *(undefined8 *)(piVar19 + 10);
                          *(undefined8 *)(piVar17 + 8) = *(undefined8 *)(piVar19 + 8);
                          *(undefined8 *)(piVar17 + 10) = uVar13;
                          *(undefined8 *)(piVar17 + 4) = uVar11;
                          *(undefined8 *)(piVar17 + 6) = uVar12;
                          *(undefined8 *)piVar17 = uVar9;
                          *(undefined8 *)(piVar17 + 2) = uVar10;
                          piVar17 = piVar17 + 0xc;
                          local_3f8._0_4_ = (int)uVar7;
                          local_3f8._4_4_ = (int)((ulonglong)uVar7 >> 0x20);
                          uStack_3f0._0_4_ = (int)uVar8;
                          uStack_3f0._4_4_ = (int)((ulonglong)uVar8 >> 0x20);
                          *(undefined8 *)(piVar19 + 8) = local_3d8;
                          *(undefined8 *)(piVar19 + 10) = uStack_3d0;
                          *(undefined8 *)(piVar19 + 4) = local_3e8;
                          *(undefined8 *)(piVar19 + 6) = uStack_3e0;
                          *piVar19 = (int)local_3f8;
                          piVar19[1] = local_3f8._4_4_;
                          piVar19[2] = (int)uStack_3f0;
                          piVar19[3] = uStack_3f0._4_4_;
                          if (piVar1 == piVar37) break;
                          piVar19 = piVar1;
                          if (piVar17 == piVar24) {
                            piVar24 = piVar1;
                          }
                        }
                        piVar19 = piVar24;
                        local_3f8 = uVar7;
                        uStack_3f0 = uVar8;
                      } while (piVar17 != piVar24);
                    }
                  }
                  if ((iVar29 <= iVar27) || (iVar23 = iVar31 + iVar34 + 1, iVar27 <= iVar23)) break;
                }
              }
              lVar16 = lVar16 + local_630;
            } while (lVar16 < (longlong)puVar18);
            iVar28 = iVar14;
            local_638 = puVar18;
          } while (iVar14 < (int)uStack_4f0);
        }
      }
      local_350 = (undefined8 *)0x0;
      local_348 = 0;
      local_344 = 1;
      local_340 = 0;
      uStack_338 = 0;
      local_330 = 0;
      uStack_328 = 0xffffffff;
      local_320 = 0xff0000ffffffff;
      uStack_318 = uStack_318 & 0xffffff00;
      uStack_314 = 0x40c00f07;
      local_310 = local_310 & 0xfc;
      FUN_141793e06(&local_3f8);
      lVar16 = local_658;
      uStack_314 = (*(byte *)(local_658 + 0x6b) & 1) * 0x40 + (uStack_314 & 0xbffe3cbf) + 0x200;
      local_320 = local_320 & 0xffffffff00000000;
      lVar22 = (longlong)(int)local_348;
      local_348 = local_348 + 1;
      if (local_344 < local_348) {
        FUN_1400cd0f8(&local_3f8);
      }
      puVar18 = local_350;
      if (local_350 == (undefined8 *)0x0) {
        puVar18 = &local_3f8;
      }
      memset(puVar18 + lVar22 * 0x15,0,0xa8);
      if (0 < *(int *)(lVar16 + 0x42c)) {
        local_648 = (int *)(lVar16 + 0x100);
        lVar38 = 0;
        lVar22 = local_640;
        uVar25 = local_620;
        do {
          puVar18 = local_350;
          local_340 = *(undefined8 *)(*(longlong *)(lVar16 + 0x2a8) + lVar38 * 8);
          puVar21 = local_350;
          if (local_350 == (undefined8 *)0x0) {
            puVar21 = &local_3f8;
          }
          *(undefined4 *)(puVar21 + 0xc) = 1;
          *(undefined4 *)(puVar21 + 0xb) = 0;
          *(int *)((longlong)puVar21 + 0x5c) =
               *(int *)(*(longlong *)
                         (*(longlong *)(*(longlong *)(lVar16 + 0x2a8) + lVar38 * 8) + 0x138) + 0x18)
               / 3;
          *(undefined4 *)(puVar21 + 0xd) = 0;
          *(int *)((longlong)puVar21 + 0x6c) =
               *(int *)(*(longlong *)
                         (*(longlong *)(*(longlong *)(lVar16 + 0x2a8) + lVar38 * 8) + 0x130) + 0x18)
               + -1;
          puVar21[3] = *(undefined8 *)
                        (*(longlong *)(*(longlong *)(lVar16 + 0x2a8) + lVar38 * 8) + 0x138);
          *(uint *)((longlong)puVar21 + 0x54) = *(uint *)((longlong)puVar21 + 0x54) & 0xfffffff8 | 2
          ;
          puVar21[1] = &DAT_14cb05598;
          if (0 < (int)uVar25) {
            local_638 = puVar18;
            if (puVar18 == (undefined8 *)0x0) {
              local_638 = &local_3f8;
            }
            uVar15 = 0;
            iVar28 = 0;
            do {
              local_650 = (longlong)(*(int *)(lVar16 + 0x42c) * (int)uVar15 + (int)lVar38);
              uVar26 = *(uint *)(local_518[2] + local_650 * 4);
              if (((ulonglong)uVar26 != 0) &&
                 (uStack_338 = *(undefined8 *)(*(longlong *)(lVar16 + 0x328) + uVar15 * 8),
                 0 < (int)uVar26)) {
                lVar30 = (longlong)iVar28 * 0xe0;
                lVar32 = 0;
                local_630 = (ulonglong)uVar26;
                local_624 = iVar28;
                do {
                  puVar18 = (undefined8 *)FUN_143b45590(*(undefined8 *)(lVar22 + 0xe8));
                  puVar18[1] = 0;
                  *puVar18 = &PTR_FUN_14ae99170;
                  puVar18[2] = 0;
                  puVar18[3] = 0;
                  puVar18[4] = 0;
                  puVar18[5] = 0;
                  puVar18[6] = 0;
                  puVar18[7] = 0;
                  puVar18[8] = 0;
                  puVar18[9] = 0;
                  puVar18[10] = 0;
                  puVar18[0xb] = 0;
                  puVar18[0xc] = 0;
                  lVar22 = *(int *)(local_518[0] + local_650 * 4) + lVar32;
                  local_428[0] = *(undefined8 *)
                                  (*(longlong *)
                                    (*(longlong *)(*(longlong *)(lVar16 + 0x2a8) + lVar38 * 8) +
                                    0x130) + 0x20);
                  local_418 = *(undefined8 *)(local_4f8 + lVar22 * 0xc + 4);
                  uStack_410 = *(undefined8 *)(local_4f8 + lVar22 * 0xc + 4 + 2);
                  local_408 = *(undefined8 *)(local_4f8 + lVar22 * 0xc + 8);
                  uStack_400 = *(undefined8 *)(local_4f8 + lVar22 * 0xc + 8 + 2);
                  puVar18[2] = *(undefined8 *)(**(longlong **)(lVar16 + 0x3e0) + 8);
                  *(undefined1 *)(puVar18 + 1) = 0;
                  FUN_143b3a5b2(&local_598,local_428);
                  lVar22 = puVar18[3];
                  puVar18[3] = local_598;
                  local_598 = 0;
                  if (lVar22 != 0) {
                    LOCK();
                    puVar2 = (uint *)(lVar22 + 8);
                    uVar26 = *puVar2;
                    *puVar2 = *puVar2 - 1;
                    UNLOCK();
                    if ((uVar26 & 0x3fffffff) == 1) {
                      FUN_144a54812();
                    }
                    if (local_598 != 0) {
                      LOCK();
                      puVar2 = (uint *)(local_598 + 8);
                      uVar26 = *puVar2;
                      *puVar2 = *puVar2 - 1;
                      UNLOCK();
                      if ((uVar26 & 0x3fffffff) == 1) {
                        FUN_144a54812();
                      }
                    }
                  }
                  local_638[7] = puVar18 + 1;
                  lVar35 = *(longlong *)(*(longlong *)(lVar16 + 0x438) + lVar38 * 0x10) + lVar30;
                  uStack_580 = 0;
                  uStack_57c = 0;
                  uStack_578 = 0;
                  local_590 = 0;
                  uStack_588 = 0;
                  uStack_584 = 0;
                  uStack_570 = 0xff;
                  bStack_56f = bStack_56f & 0xe0;
                  uStack_56e = 0;
                  uStack_56c = 0x100;
                  uStack_568 = 0;
                  local_520 = 0;
                  uStack_550 = 0;
                  uStack_54c = 0;
                  uStack_548 = 0;
                  uStack_560 = 0;
                  uStack_558 = 0;
                  local_554 = 0;
                  uStack_530 = 0;
                  uStack_52c = 0;
                  local_540 = (undefined8 *)0x0;
                  uStack_534 = 0;
                  uStack_538 = 1;
                  local_598 = lVar35;
                  FUN_140518214(&local_540,0);
                  uVar26 = uStack_588;
                  piVar17 = local_648;
                  puVar18 = local_540;
                  for (lVar16 = 0x10; lVar16 != 0; lVar16 = lVar16 + -1) {
                    *puVar18 = *(undefined8 *)piVar17;
                    piVar17 = piVar17 + 2;
                    puVar18 = puVar18 + 1;
                  }
                  lVar16 = (longlong)(int)uStack_588;
                  uStack_588 = uStack_588 + 1;
                  if (uStack_584 < uStack_588) {
                    FUN_147471df6(&local_590,uVar26);
                  }
                  lVar22 = local_590;
                  lVar16 = lVar16 * 0xf0;
                  *(undefined8 *)(local_590 + 0xa8 + lVar16) = 0;
                  puVar18 = local_350;
                  if (local_350 == (undefined8 *)0x0) {
                    puVar18 = &local_3f8;
                  }
                  FUN_144739392(local_590 + lVar16,puVar18,local_348,0);
                  uVar26 = uStack_588;
                  lVar5 = local_590;
                  *(byte *)(lVar22 + 0xe8 + lVar16) = local_310;
                  puVar3 = (undefined4 *)(lVar22 + 0xd8 + lVar16);
                  *puVar3 = (undefined4)local_320;
                  puVar3[1] = local_320._4_4_;
                  puVar3[2] = uStack_318;
                  puVar3[3] = uStack_314;
                  puVar3 = (undefined4 *)(lVar22 + 200 + lVar16);
                  *puVar3 = (undefined4)local_330;
                  puVar3[1] = local_330._4_4_;
                  puVar3[2] = (undefined4)uStack_328;
                  puVar3[3] = uStack_328._4_4_;
                  puVar3 = (undefined4 *)(lVar22 + 0xb8 + lVar16);
                  *puVar3 = (undefined4)local_340;
                  puVar3[1] = local_340._4_4_;
                  puVar3[2] = (undefined4)uStack_338;
                  puVar3[3] = uStack_338._4_4_;
                  local_4a8 = 0;
                  local_4a0 = uStack_588;
                  if (uStack_588 == 0) {
                    local_49c = 0;
                  }
                  else {
                    FUN_147471e8a(&local_4a8,uStack_588,0);
                    FUN_147471efc(local_4a8,lVar5,uVar26);
                  }
                  lVar22 = local_640;
                  lVar16 = local_658;
                  local_498 = 0;
                  lVar5 = *(longlong *)(local_658 + 0x2a8);
                  local_494 = *(undefined4 *)
                               (*(longlong *)(*(longlong *)(lVar5 + lVar38 * 8) + 0x130) + 0x18);
                  local_490 = *(int *)(*(longlong *)(*(longlong *)(lVar5 + lVar38 * 8) + 0x130) +
                                      0x18) * 0xc;
                  local_48c = *(int *)(*(longlong *)(*(longlong *)(lVar5 + lVar38 * 8) + 0x138) +
                                      0x18) / 3;
                  local_480 = 0;
                  local_478 = 1;
                  local_474 = 0;
                  local_438 = _DAT_14c846280;
                  uStack_430 = _DAT_14c846288;
                  local_448 = _DAT_14c846270;
                  uStack_440 = _DAT_14c846278;
                  local_458 = _DAT_14c846260;
                  uStack_450 = _DAT_14c846268;
                  local_468 = DAT_14c846250;
                  uStack_464 = DAT_14c846254;
                  uStack_460 = (undefined4)DAT_14c846258;
                  uStack_45c = DAT_14c846258._4_4_;
                  local_488 = lVar35;
                  FUN_147ceea5a(local_640,&local_4a8);
                  local_618 = local_598;
                  uStack_608 = CONCAT44(uStack_584,uStack_588);
                  local_610 = local_590;
                  local_590 = 0;
                  uStack_588 = 0;
                  uStack_584 = 0;
                  local_600 = CONCAT44(uStack_57c,uStack_580);
                  uStack_5f8 = CONCAT44(uStack_574,uStack_578);
                  uStack_5f0 = CONCAT22(uStack_56e,CONCAT11(bStack_56f,uStack_570));
                  uStack_5ec = CONCAT22(uStack_56a,uStack_56c);
                  uStack_5e8 = uStack_568;
                  uStack_5d8 = CONCAT44(local_554,uStack_558);
                  local_5e0 = uStack_560;
                  uStack_560 = 0;
                  uStack_558 = 0;
                  local_554 = 0;
                  local_5d0 = CONCAT44(uStack_54c,uStack_550);
                  uStack_5c8 = CONCAT44(uStack_544,uStack_548);
                  local_5c0 = local_540;
                  local_540 = (undefined8 *)0x0;
                  local_5b8 = uStack_538;
                  local_5b4 = uStack_534;
                  uStack_538 = 0;
                  uStack_534 = 0;
                  local_5b0 = uStack_530;
                  uStack_5ac = (undefined4)uStack_52c;
                  uStack_5a8 = uStack_52c._4_4_;
                  uStack_5a4 = uStack_524;
                  local_5a0 = local_520;
                  local_520 = 0;
                  FUN_147cee9b0(lVar22,&local_618);
                  FUN_1472aaabe(&local_598);
                  lVar30 = lVar30 + 0xe0;
                  lVar32 = lVar32 + 1;
                } while ((int)local_630 != (int)lVar32);
                iVar28 = local_624 + (int)lVar32;
                uVar25 = local_620;
              }
              uVar15 = uVar15 + 1;
            } while (uVar15 != uVar25);
          }
          lVar38 = lVar38 + 1;
        } while (lVar38 < *(int *)(lVar16 + 0x42c));
      }
      FUN_1446fc232(&local_3f8);
      if (local_518[0] != 0) {
        FUN_1400020a8();
      }
    }
    if (local_c8 != 0) {
      FUN_1400020a8();
    }
    if (local_1e8 != 0) {
      FUN_1400020a8();
    }
    if (local_4f8 != (int *)0x0) {
      FUN_1400020a8();
    }
    if (local_518[2] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_70 ^ (ulonglong)auStack_678) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483fb8fa FUN_1483fb8fa body=3251 status=ok
// SIG undefined FUN_1483fb8fa(void)

void FUN_1483fb8fa(longlong param_1,undefined8 param_2)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  int iVar14;
  int iVar15;
  double *pdVar16;
  int *piVar17;
  longlong lVar18;
  double *pdVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  uint *puVar23;
  ulonglong uVar24;
  longlong lVar25;
  uint uVar26;
  float fVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  float fVar31;
  double dVar32;
  double dVar33;
  float fVar34;
  undefined1 auStack_308 [40];
  float local_2e0;
  uint local_2dc;
  longlong local_2d8;
  longlong local_2d0;
  ulonglong local_2c8;
  undefined8 local_2c0;
  double *local_2b8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  longlong local_298 [2];
  double local_288;
  undefined8 uStack_280;
  float local_278;
  float local_274;
  float local_270;
  undefined4 local_26c;
  float local_268;
  float local_264;
  float local_260;
  undefined4 local_25c;
  float local_258;
  float local_254;
  float local_250;
  undefined4 local_24c;
  float local_248;
  float local_244;
  float local_240;
  undefined4 local_23c;
  double local_238;
  double dStack_230;
  undefined8 local_228;
  int iStack_220;
  int iStack_21c;
  int local_218;
  float fStack_214;
  float fStack_210;
  undefined1 uStack_20c;
  undefined1 uStack_20b;
  undefined2 uStack_20a;
  double local_208;
  double dStack_200;
  double local_1f8 [8];
  uint local_1b8 [2];
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  double local_1a0 [2];
  float local_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  float local_180;
  undefined4 uStack_17c;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  undefined4 local_fc;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_308;
  local_2d8 = *(longlong *)(param_1 + 0x318);
  uVar24 = (ulonglong)*(uint *)(param_1 + 800);
  local_288 = 0.0;
  uStack_280 = 0;
  if ((int)*(uint *)(param_1 + 800) < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar24);
  }
  if (uVar24 != 0) {
    FUN_1484052a6(local_298 + 2,uVar24);
    lVar18 = 0;
    do {
      piVar17 = (int *)FUN_1483fc5b0(local_298 + 2);
      *piVar17 = (int)*(short *)(local_2d8 + 0x36 + lVar18);
      piVar17[1] = (int)*(short *)(local_2d8 + 0x38 + lVar18);
      piVar17[2] = (int)*(short *)(local_2d8 + 0x3a + lVar18);
      piVar17[3] = (int)*(short *)(local_2d8 + 0x3c + lVar18);
      piVar17[4] = (int)*(char *)(local_2d8 + 0x3e + lVar18);
      piVar17[5] = 0;
      piVar17[6] = (int)(float)(*(double *)(local_2d8 + 0x18 + lVar18) - *(double *)(param_1 + 1000)
                               );
      piVar17[9] = *(int *)(local_2d8 + 0x30 + lVar18);
      lVar18 = lVar18 + 0x40;
    } while (uVar24 << 6 != lVar18);
  }
  uVar24 = *(ulonglong *)(param_1 + 0x2d4);
  uVar6 = uVar24 * 2;
  local_2a0 = *(double *)(param_1 + 0x2e0);
  local_2a8 = *(double *)(param_1 + 0x2e8);
  uVar21 = uVar6 & 0xfffffffefffffffe;
  iVar14 = (int)uVar6;
  fVar27 = *(float *)(param_1 + 0x2cc);
  local_2b0 = *(double *)(param_1 + 1000);
  dVar29 = *(double *)(param_1 + 0x3f0) - local_2b0;
  dVar2 = ((double)(int)(uVar21 >> 0x20) * (double)fVar27 * 0.5 + local_2a8) - local_2a8;
  dVar28 = ((double)iVar14 * (double)fVar27 * 0.5 + local_2a0) - local_2a0;
  local_128 = (dVar29 + -1.0) - dVar29;
  uStack_130 = dVar2 - dVar2;
  local_138 = dVar28 - dVar28;
  dVar32 = local_128 * local_128 + local_138 * local_138 + uStack_130 * uStack_130;
  if ((dVar32 != 1.0) || (NAN(dVar32))) {
    if (9.99999993922529e-09 <= dVar32) {
      dVar32 = 1.0 / SQRT(dVar32);
      local_128 = local_128 * dVar32;
      uStack_130 = uStack_130 * dVar32;
      local_138 = local_138 * dVar32;
      goto LAB_1483fbaa4;
    }
    local_138 = DAT_14c8464e0;
    uStack_130 = DAT_14c8464e8;
    local_128 = DAT_14c8464f0;
  }
  else {
LAB_1483fbaa4:
  }
  local_2e0 = (float)dVar29;
  local_1f8[2] = uStack_130 * 0.0 + local_138;
  local_1f8[1] = local_138 * 0.0 + local_128 * -0.0;
  local_1f8[0] = uStack_130 * -0.0 - local_128;
  dVar32 = local_1f8[2] * local_1f8[2] + local_1f8[0] * local_1f8[0] + local_1f8[1] * local_1f8[1];
  if ((dVar32 != 1.0) || (NAN(dVar32))) {
    if (dVar32 < 9.99999993922529e-09) {
      local_1f8[0] = DAT_14c8464e0;
      local_1f8[1] = DAT_14c8464e8;
      local_1f8[2] = DAT_14c8464f0;
      goto LAB_1483fbb63;
    }
    dVar32 = 1.0 / SQRT(dVar32);
    local_1f8[2] = local_1f8[2] * dVar32;
    local_1f8[1] = local_1f8[1] * dVar32;
    local_1f8[0] = local_1f8[0] * dVar32;
  }
LAB_1483fbb63:
  fVar34 = 1.0 / local_2e0;
  local_228 = local_138 * local_1f8[1] - local_1f8[0] * uStack_130;
  dStack_230 = local_128 * local_1f8[0] - local_1f8[2] * local_138;
  local_238 = uStack_130 * local_1f8[2] - local_1f8[1] * local_128;
  lVar18 = 0;
  do {
    *(undefined8 *)(local_1b8 + lVar18) = *(undefined8 *)((longlong)local_1f8 + lVar18);
    *(undefined8 *)((longlong)&uStack_1b0 + lVar18 * 4) =
         *(undefined8 *)((longlong)&local_238 + lVar18);
    *(undefined8 *)((longlong)local_1a0 + lVar18 * 4 + -8) =
         *(undefined8 *)((longlong)&local_138 + lVar18);
    *(undefined8 *)((longlong)local_1a0 + lVar18 * 4) = 0;
    lVar18 = lVar18 + 8;
  } while (lVar18 != 0x18);
  dVar28 = -dVar28;
  local_158 = (local_1f8[0] * dVar28 - local_1f8[1] * dVar2) - local_1f8[2] * dVar29;
  puVar23 = local_1b8;
  local_150 = (local_238 * dVar28 - dStack_230 * dVar2) - local_228 * dVar29;
  local_148 = (dVar28 * local_138 - uStack_130 * dVar2) - local_128 * dVar29;
  local_140 = 0x3ff0000000000000;
  local_138 = (double)CONCAT44((float)(double)CONCAT44(uStack_1b0._4_4_,(undefined4)uStack_1b0),
                               (float)(double)CONCAT44(local_1b8[1],local_1b8[0]));
  uStack_130 = (double)CONCAT44((float)local_1a0[0],
                                (float)(double)CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_1a8));
  local_120 = (float)(double)CONCAT44(uStack_184,local_188);
  local_128 = (double)CONCAT44((float)(double)CONCAT44(uStack_18c,local_190),(float)local_1a0[1]);
  local_11c = (float)(double)CONCAT44(uStack_17c,local_180);
  local_118 = (float)local_178;
  local_114 = (float)local_170;
  local_110 = (float)local_168;
  local_10c = (float)local_160;
  local_108 = (float)local_158;
  local_104 = (float)local_150;
  local_100 = (float)local_148;
  local_fc = 0x3f800000;
  fVar31 = (float)iVar14 * fVar27 * 0.5;
  fVar27 = (float)(int)((uint)(uVar24 >> 0x1f) & 0xfffffffe) * fVar27 * 0.5;
  local_180 = (1.0 / local_2e0) * -0.0 + 1.0;
  uVar26 = -(uint)(fVar31 != 0.0);
  local_1b8[0] = ~uVar26 & 0x3f800000 | (uint)(1.0 / fVar31) & uVar26;
  uVar26 = -(uint)(fVar27 != 0.0);
  uStack_1a8._4_4_ = ~uVar26 & 0x3f800000 | (uint)(1.0 / fVar27) & uVar26;
  local_1b8[1] = 0;
  uStack_1b0._0_4_ = 0;
  uStack_1b0._4_4_ = 0;
  uStack_1a8._0_4_ = 0;
  local_190 = -(1.0 / local_2e0);
  local_1a0[0] = 0.0;
  local_1a0[1] = 0.0;
  uStack_18c = 0;
  local_188 = 0;
  uStack_184 = 0;
  uStack_17c = 0x3f800000;
  FUN_144afeb32(local_1f8);
  local_298[0] = 0;
  local_298[1] = 0;
  if ((longlong)*(int *)(param_1 + 0x340) == 0) {
    uVar24 = 1;
  }
  else {
    pdVar19 = *(double **)(param_1 + 0x338);
    local_2b8 = pdVar19 + (longlong)*(int *)(param_1 + 0x340) * 0xe;
    uVar24 = CONCAT71((int7)((ulonglong)puVar23 >> 8),1);
    local_2d0 = param_1;
    local_2c8 = uVar21;
    local_2c0 = param_2;
    do {
      lVar18 = **(longlong **)pdVar19[0xc];
      lVar25 = lVar18 + 0x10;
      if (*(longlong *)(lVar18 + 0x30) != 0) {
        lVar25 = *(longlong *)(lVar18 + 0x30);
      }
      iVar14 = *(int *)(lVar18 + 0x38);
      if ((longlong)iVar14 != 0) {
        lVar22 = 0;
        do {
          if (*(longlong *)(lVar18 + 0x1a8) != 0) {
            dVar7 = *pdVar19;
            dVar8 = pdVar19[1];
            dVar9 = pdVar19[2];
            dVar10 = pdVar19[8];
            dVar11 = pdVar19[9];
            dVar12 = pdVar19[10];
            dVar4 = pdVar19[6] - local_2b0;
            dVar5 = pdVar19[5] - local_2a8;
            dVar3 = pdVar19[4] - local_2a0;
            lVar20 = (longlong)*(int *)(pdVar19 + 0xd) * 0x40;
            dVar29 = pdVar19[3];
            dVar2 = pdVar19[3];
            local_2dc = (uint)uVar24;
            pdVar16 = (double *)FUN_1483fc5f0(local_298);
            dVar30 = dVar8 + dVar8;
            dVar33 = dVar9 + dVar9;
            dVar28 = dVar7 * (dVar7 + dVar7);
            dVar32 = dVar33 * dVar29;
            dVar2 = (dVar7 + dVar7) * dVar2;
            local_278 = (float)((1.0 - (dVar9 * dVar33 + dVar8 * dVar30)) * dVar10);
            local_274 = (float)((dVar30 * dVar7 + dVar32) * dVar10);
            dVar29 = dVar30 * dVar29;
            local_270 = (float)((dVar33 * dVar7 - dVar29) * dVar10);
            local_268 = (float)((dVar30 * dVar7 - dVar32) * dVar11);
            local_26c = 0;
            local_264 = (float)((1.0 - (dVar9 * dVar33 + dVar28)) * dVar11);
            local_260 = (float)((dVar33 * dVar8 + dVar2) * dVar11);
            local_25c = 0;
            local_258 = (float)((dVar29 + dVar33 * dVar7) * dVar12);
            local_254 = (float)((dVar33 * dVar8 - dVar2) * dVar12);
            local_250 = (float)((1.0 - (dVar28 + dVar8 * dVar30)) * dVar12);
            local_24c = 0;
            local_248 = (float)dVar3;
            local_244 = (float)dVar5;
            local_240 = (float)dVar4;
            local_23c = 0x3f800000;
            FUN_144afeb32(&local_238,&local_278,local_1f8);
            auVar13._4_4_ = fStack_214;
            auVar13._0_4_ = local_218;
            auVar13._8_4_ = fStack_210;
            auVar13[0xc] = uStack_20c;
            auVar13[0xd] = uStack_20b;
            auVar13._14_2_ = uStack_20a;
            pdVar16[6] = local_208;
            pdVar16[7] = dStack_200;
            *(undefined1 (*) [16])(pdVar16 + 4) = auVar13;
            *(undefined4 *)(pdVar16 + 2) = (undefined4)local_228;
            *(undefined4 *)((longlong)pdVar16 + 0x14) = local_228._4_4_;
            *(int *)(pdVar16 + 3) = iStack_220;
            *(int *)((longlong)pdVar16 + 0x1c) = iStack_21c;
            *pdVar16 = local_238;
            pdVar16[1] = dStack_230;
            pdVar16[8] = *(double *)(lVar18 + 0x128);
            pdVar16[9] = *(double *)(lVar18 + 200);
            pdVar16[10] = *(double *)(lVar18 + 0x1a8);
            *(undefined4 *)(pdVar16 + 0xb) = *(undefined4 *)(lVar25 + 4 + lVar22);
            *(undefined4 *)((longlong)pdVar16 + 0x5c) = *(undefined4 *)(lVar25 + 8 + lVar22);
            *(undefined4 *)(pdVar16 + 0xc) = 0;
            *(int *)((longlong)pdVar16 + 100) =
                 (*(int *)(lVar25 + 0x10 + lVar22) - *(int *)(lVar25 + 0xc + lVar22)) + 1;
            *(undefined4 *)(pdVar16 + 0xd) = *(undefined4 *)(pdVar19 + 0xd);
            *(uint *)((longlong)pdVar16 + 0x6c) = (uint)*(byte *)((longlong)pdVar19 + 0x6c);
            *(float *)(pdVar16 + 0xe) =
                 (float)(*(double *)(local_2d8 + 0x20 + lVar20) - *(double *)(local_2d0 + 1000)) *
                 fVar34;
            *(float *)((longlong)pdVar16 + 0x74) =
                 (float)(((double)*(float *)(local_2d8 + 0x30 + lVar20) +
                         *(double *)(local_2d8 + 0x28 + lVar20)) - *(double *)(local_2d0 + 1000)) *
                 fVar34;
            *(float *)(pdVar16 + 0xf) = *(float *)(local_2d8 + 0x30 + lVar20) * fVar34;
            *(undefined1 *)((longlong)pdVar16 + 0x7c) = *(undefined1 *)((longlong)pdVar19 + 0x6d);
            uVar24 = 0;
            if ((local_2dc & 1) != 0) {
              iVar15 = *(int *)(lVar18 + 0x1d0);
              if (iVar15 < 0) {
                iVar1 = *(int *)(lVar18 + 0x1c0);
                if (*(char *)(lVar18 + 0x1d4) == '\x01') {
                  iVar15 = iVar1 + 3;
                  if (-1 < iVar1) {
                    iVar15 = iVar1;
                  }
                  iVar15 = iVar15 >> 2;
                }
                else {
                  iVar15 = iVar1 / 2;
                }
              }
              uVar24 = 0;
              if (((uint)(*(int *)(lVar18 + 0x14c) * -0x55555555) < 0x55555556) &&
                 (*(int *)(lVar18 + 0x14c) == iVar15)) {
                if (*(int *)(lVar18 + 0x108) == 3) {
                  uVar24 = (ulonglong)*(byte *)(lVar18 + 0x110);
                }
                else {
                  uVar24 = 0;
                }
              }
            }
          }
          lVar22 = lVar22 + 0x1c;
        } while ((longlong)iVar14 * 0x1c != lVar22);
      }
      pdVar19 = pdVar19 + 0xe;
      uVar21 = local_2c8;
      param_2 = local_2c0;
      param_1 = local_2d0;
    } while (pdVar19 != local_2b8);
  }
  local_238 = local_288;
  dStack_230 = (double)CONCAT44(dStack_230._4_4_,(undefined4)uStack_280);
  iStack_220 = *(int *)(DAT_14cb47798 + 4);
  if (7 < iStack_220) {
    iStack_220 = 8;
  }
  if (iStack_220 < 2) {
    iStack_220 = 1;
  }
  iStack_21c = 8;
  if (*(int *)(DAT_14cb477b0 + 4) < 8) {
    iStack_21c = *(int *)(DAT_14cb477b0 + 4);
  }
  if (iStack_21c < 2) {
    iStack_21c = 1;
  }
  local_218 = 0x10;
  if (*(int *)(DAT_14cb477c8 + 4) < 0x10) {
    local_218 = *(int *)(DAT_14cb477c8 + 4);
  }
  if (local_218 < 2) {
    local_218 = 1;
  }
  fStack_214 = *(float *)(DAT_14cb477f8 + 4);
  if (fStack_214 <= 0.0) {
    fStack_214 = 0.0;
  }
  fStack_210 = local_2e0;
  uStack_20c = *(int *)(DAT_14cb477e0 + 4) == 1;
  if ((uVar24 & 1) == 0) {
    uStack_20b = false;
  }
  else {
    uStack_20b = *(int *)(DAT_14cb47810 + 4) != 0;
  }
  local_228 = (double)uVar21;
  FUN_143b3a6a8(param_1 + 0x3b8,param_2,&local_238,local_298);
  if (local_298[0] != 0) {
    FUN_1400020a8();
  }
  if (local_288 != 0.0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_308) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483fc5b0 FUN_1483fc5b0 body=63 status=ok
// SIG undefined FUN_1483fc5b0(void)

longlong FUN_1483fc5b0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14840532c(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x28 + *param_1;
  FUN_14840530d(lVar2);
  return lVar2;
}



// FUNCTION 1483fc5f0 FUN_1483fc5f0 body=59 status=ok
// SIG undefined FUN_1483fc5f0(void)

longlong FUN_1483fc5f0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148405416(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x80 + *param_1;
  FUN_1484053c0(lVar2);
  return lVar2;
}



// FUNCTION 1483fc62c FUN_1483fc62c body=126 status=ok
// SIG undefined FUN_1483fc62c(void)

void FUN_1483fc62c(undefined4 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined1 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = *param_1;
  local_40 = param_1[6];
  uStack_3c = param_1[7];
  uStack_38 = param_1[8];
  uStack_34 = param_1[9];
  local_28 = param_1[10];
  uStack_24 = param_1[0xb];
  uStack_20 = param_1[0xc];
  uStack_1c = param_1[0xd];
  local_30 = 0;
  local_18 = 0;
  local_10 = 1;
  local_48 = 0;
  local_58 = param_3;
  FUN_14486e48c(*(undefined8 *)(param_1 + 0x10),param_1 + 0x10,&local_40,param_2);
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483fc6ac FUN_1483fc6ac body=42 status=ok
// SIG undefined FUN_1483fc6ac(void)

void FUN_1483fc6ac(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1483fc6e2 FUN_1483fc6e2 body=96 status=ok
// SIG undefined FUN_1483fc6e2(void)

undefined8 FUN_1483fc6e2(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e67142();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cb48a78,1);
  return uVar3;
}



// FUNCTION 1483fc742 FUN_1483fc742 body=52 status=ok
// SIG undefined FUN_1483fc742(void)

void FUN_1483fc742(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1483fc776 FUN_1483fc776 body=42 status=ok
// SIG undefined FUN_1483fc776(void)

void FUN_1483fc776(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1483fc7ac FUN_1483fc7ac body=96 status=ok
// SIG undefined FUN_1483fc7ac(void)

undefined8 FUN_1483fc7ac(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e79058();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cb48b00,1);
  return uVar3;
}



// FUNCTION 1483fc80c FUN_1483fc80c body=52 status=ok
// SIG undefined FUN_1483fc80c(void)

void FUN_1483fc80c(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1483fc840 FUN_1483fc840 body=42 status=ok
// SIG undefined FUN_1483fc840(void)

void FUN_1483fc840(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1483fc876 FUN_1483fc876 body=96 status=ok
// SIG undefined FUN_1483fc876(void)

undefined8 FUN_1483fc876(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f1f336();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cb48b88,1);
  return uVar3;
}



// FUNCTION 1483fc8d6 FUN_1483fc8d6 body=52 status=ok
// SIG undefined FUN_1483fc8d6(void)

void FUN_1483fc8d6(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1483fc90a FUN_1483fc90a body=42 status=ok
// SIG undefined FUN_1483fc90a(void)

void FUN_1483fc90a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1483fc940 FUN_1483fc940 body=96 status=ok
// SIG undefined FUN_1483fc940(void)

undefined8 FUN_1483fc940(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e676ac();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cb48c10,1);
  return uVar3;
}



// FUNCTION 1483fc9a0 FUN_1483fc9a0 body=52 status=ok
// SIG undefined FUN_1483fc9a0(void)

void FUN_1483fc9a0(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1483fc9d4 FUN_1483fc9d4 body=42 status=ok
// SIG undefined FUN_1483fc9d4(void)

void FUN_1483fc9d4(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1483fca0a FUN_1483fca0a body=96 status=ok
// SIG undefined FUN_1483fca0a(void)

undefined8 FUN_1483fca0a(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e4c584();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cb48c98,1);
  return uVar3;
}



// FUNCTION 1483fca6a FUN_1483fca6a body=52 status=ok
// SIG undefined FUN_1483fca6a(void)

void FUN_1483fca6a(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1483fca9e FUN_1483fca9e body=42 status=ok
// SIG undefined FUN_1483fca9e(void)

void FUN_1483fca9e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1483fcad4 FUN_1483fcad4 body=96 status=ok
// SIG undefined FUN_1483fcad4(void)

undefined8 FUN_1483fcad4(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e67c16();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cb48d20,1);
  return uVar3;
}



// FUNCTION 1483fcb34 FUN_1483fcb34 body=52 status=ok
// SIG undefined FUN_1483fcb34(void)

void FUN_1483fcb34(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1483fcb68 FUN_1483fcb68 body=42 status=ok
// SIG undefined FUN_1483fcb68(void)

void FUN_1483fcb68(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1483fcb9e FUN_1483fcb9e body=96 status=ok
// SIG undefined FUN_1483fcb9e(void)

undefined8 FUN_1483fcb9e(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f5d4fa();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cb48da8,1);
  return uVar3;
}



// FUNCTION 1483fcbfe FUN_1483fcbfe body=52 status=ok
// SIG undefined FUN_1483fcbfe(void)

void FUN_1483fcbfe(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1483fcc32 FUN_1483fcc32 body=42 status=ok
// SIG undefined FUN_1483fcc32(void)

void FUN_1483fcc32(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1483fcc68 FUN_1483fcc68 body=96 status=ok
// SIG undefined FUN_1483fcc68(void)

undefined8 FUN_1483fcc68(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145ee037e();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cb48e30,1);
  return uVar3;
}



// FUNCTION 1483fccc8 FUN_1483fccc8 body=52 status=ok
// SIG undefined FUN_1483fccc8(void)

void FUN_1483fccc8(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1483fccfc FUN_1483fccfc body=42 status=ok
// SIG undefined FUN_1483fccfc(void)

void FUN_1483fccfc(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1483fcd32 FUN_1483fcd32 body=96 status=ok
// SIG undefined FUN_1483fcd32(void)

undefined8 FUN_1483fcd32(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145ed6118();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cb48eb8,1);
  return uVar3;
}



// FUNCTION 1483fcd92 FUN_1483fcd92 body=52 status=ok
// SIG undefined FUN_1483fcd92(void)

void FUN_1483fcd92(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1483fcdc6 FUN_1483fcdc6 body=42 status=ok
// SIG undefined FUN_1483fcdc6(void)

void FUN_1483fcdc6(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1483fcdfc FUN_1483fcdfc body=96 status=ok
// SIG undefined FUN_1483fcdfc(void)

undefined8 FUN_1483fcdfc(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e9c41a();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cb48f40,1);
  return uVar3;
}



// FUNCTION 1483fce5c FUN_1483fce5c body=52 status=ok
// SIG undefined FUN_1483fce5c(void)

void FUN_1483fce5c(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1483fce90 FUN_1483fce90 body=42 status=ok
// SIG undefined FUN_1483fce90(void)

void FUN_1483fce90(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1483fcec6 FUN_1483fcec6 body=96 status=ok
// SIG undefined FUN_1483fcec6(void)

undefined8 FUN_1483fcec6(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f0eae4();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cb48fc8,1);
  return uVar3;
}



// FUNCTION 1483fcf26 FUN_1483fcf26 body=52 status=ok
// SIG undefined FUN_1483fcf26(void)

void FUN_1483fcf26(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1483fcf5a FUN_1483fcf5a body=42 status=ok
// SIG undefined FUN_1483fcf5a(void)

void FUN_1483fcf5a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1483fcf90 FUN_1483fcf90 body=96 status=ok
// SIG undefined FUN_1483fcf90(void)

undefined8 FUN_1483fcf90(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e795c6();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cb49050,1);
  return uVar3;
}



// FUNCTION 1483fcff0 FUN_1483fcff0 body=52 status=ok
// SIG undefined FUN_1483fcff0(void)

void FUN_1483fcff0(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1483fd024 FUN_1483fd024 body=42 status=ok
// SIG undefined FUN_1483fd024(void)

void FUN_1483fd024(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1483fd080 FUN_1483fd080 body=96 status=ok
// SIG undefined FUN_1483fd080(void)

undefined8 FUN_1483fd080(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f3a570();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cb490d8,1);
  return uVar3;
}



// FUNCTION 1483fd0e0 FUN_1483fd0e0 body=52 status=ok
// SIG undefined FUN_1483fd0e0(void)

void FUN_1483fd0e0(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1483fd114 FUN_1483fd114 body=230 status=ok
// SIG undefined FUN_1483fd114(void)

void FUN_1483fd114(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined8 uStack_64;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_145f1f336();
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_1448f70da(*param_4,&DAT_14cb48b88,param_5,&local_a8);
  local_a8 = param_5;
  local_98 = *(undefined4 *)param_4;
  uStack_94 = *(undefined4 *)((longlong)param_4 + 4);
  uStack_90 = *(undefined4 *)(param_4 + 1);
  uStack_8c = *(undefined4 *)((longlong)param_4 + 0xc);
  local_88 = *param_6;
  local_80 = param_6[1];
  local_78 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_a0 = param_2;
  FUN_145f1f336();
  FUN_148405c5c(param_1,param_3,param_5,&local_a8);
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483fd1fc FUN_1483fd1fc body=230 status=ok
// SIG undefined FUN_1483fd1fc(void)

void FUN_1483fd1fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined8 uStack_64;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_145e676ac();
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_1448f70da(*param_4,&DAT_14cb48c10,param_5,&local_a8);
  local_a8 = param_5;
  local_98 = *(undefined4 *)param_4;
  uStack_94 = *(undefined4 *)((longlong)param_4 + 4);
  uStack_90 = *(undefined4 *)(param_4 + 1);
  uStack_8c = *(undefined4 *)((longlong)param_4 + 0xc);
  local_88 = *param_6;
  local_80 = param_6[1];
  local_78 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_a0 = param_2;
  FUN_145e676ac();
  FUN_148405e04(param_1,param_3,param_5,&local_a8);
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483fd2e3 FUN_1483fd2e3 body=177 status=ok
// SIG undefined FUN_1483fd2e3(void)

void FUN_1483fd2e3(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145e4c584();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14cb48c98,param_4);
  local_78 = &DAT_14cb48c98;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_148405fac(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483fd395 FUN_1483fd395 body=177 status=ok
// SIG undefined FUN_1483fd395(void)

void FUN_1483fd395(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145e67c16();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14cb48d20,param_4);
  local_78 = &DAT_14cb48d20;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_14840638c(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483fd447 FUN_1483fd447 body=177 status=ok
// SIG undefined FUN_1483fd447(void)

void FUN_1483fd447(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145f5d4fa();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14cb48da8,param_4);
  local_78 = &DAT_14cb48da8;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_14840676c(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483fd4f9 FUN_1483fd4f9 body=177 status=ok
// SIG undefined FUN_1483fd4f9(void)

void FUN_1483fd4f9(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145e9c41a();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14cb48f40,param_4);
  local_78 = &DAT_14cb48f40;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_148406ef8(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483fd5ab FUN_1483fd5ab body=177 status=ok
// SIG undefined FUN_1483fd5ab(void)

void FUN_1483fd5ab(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145f0eae4();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14cb48fc8,param_4);
  local_78 = &DAT_14cb48fc8;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_1484072d8(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483fd65d FUN_1483fd65d body=177 status=ok
// SIG undefined FUN_1483fd65d(void)

void FUN_1483fd65d(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145e795c6();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14cb49050,param_4);
  local_78 = &DAT_14cb49050;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_1484076b8(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483fd70f FUN_1483fd70f body=177 status=ok
// SIG undefined FUN_1483fd70f(void)

void FUN_1483fd70f(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145f3a570();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14cb490d8,param_4);
  local_78 = &DAT_14cb490d8;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_148407a98(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483fd7ce FUN_1483fd7ce body=38 status=ok
// SIG undefined FUN_1483fd7ce(void)

undefined8 FUN_1483fd7ce(undefined8 param_1,undefined8 param_2)

{
  FUN_1446f470e(param_2,L"Plugins",1);
  return param_2;
}



// FUNCTION 1483fd7f4 FUN_1483fd7f4 body=45 status=ok
// SIG undefined FUN_1483fd7f4(void)

longlong FUN_1483fd7f4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e248(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483fd822 FUN_1483fd822 body=48 status=ok
// SIG undefined FUN_1483fd822(void)

longlong FUN_1483fd822(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_14006e248(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483fd852 FUN_1483fd852 body=48 status=ok
// SIG undefined FUN_1483fd852(void)

longlong FUN_1483fd852(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_14006e248(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483fd882 FUN_1483fd882 body=48 status=ok
// SIG undefined FUN_1483fd882(void)

longlong FUN_1483fd882(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_14006e248(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483fd8d0 FUN_1483fd8d0 body=45 status=ok
// SIG undefined FUN_1483fd8d0(void)

longlong FUN_1483fd8d0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145a0b918(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483fd8fe FUN_1483fd8fe body=48 status=ok
// SIG undefined FUN_1483fd8fe(void)

longlong FUN_1483fd8fe(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_145a0b918(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483fd92e FUN_1483fd92e body=48 status=ok
// SIG undefined FUN_1483fd92e(void)

longlong FUN_1483fd92e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_145a0b918(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483fd95e FUN_1483fd95e body=48 status=ok
// SIG undefined FUN_1483fd95e(void)

longlong FUN_1483fd95e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_145a0b918(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483fd98e FUN_1483fd98e body=45 status=ok
// SIG undefined FUN_1483fd98e(void)

longlong FUN_1483fd98e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140e3bf2c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483fd9bc FUN_1483fd9bc body=48 status=ok
// SIG undefined FUN_1483fd9bc(void)

longlong FUN_1483fd9bc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_140e3bf2c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483fd9ec FUN_1483fd9ec body=48 status=ok
// SIG undefined FUN_1483fd9ec(void)

longlong FUN_1483fd9ec(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_140e3bf2c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483fda1c FUN_1483fda1c body=48 status=ok
// SIG undefined FUN_1483fda1c(void)

longlong FUN_1483fda1c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_140e3bf2c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483fda50 FUN_1483fda50 body=45 status=ok
// SIG undefined FUN_1483fda50(void)

longlong FUN_1483fda50(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_141061e0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483fda7e FUN_1483fda7e body=48 status=ok
// SIG undefined FUN_1483fda7e(void)

longlong FUN_1483fda7e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_141061e0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483fdaae FUN_1483fdaae body=48 status=ok
// SIG undefined FUN_1483fdaae(void)

longlong FUN_1483fdaae(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_141061e0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483fdade FUN_1483fdade body=48 status=ok
// SIG undefined FUN_1483fdade(void)

longlong FUN_1483fdade(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_141061e0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483fdb0e FUN_1483fdb0e body=117 status=ok
// SIG undefined FUN_1483fdb0e(void)

void * FUN_1483fdb0e(void *param_1,undefined8 *param_2)

{
  void *_Src;
  void *_Dst;
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  _Src = (void *)*param_2;
  uVar1 = param_2[1] - (longlong)_Src;
  uVar3 = uVar1 >> 2;
  iVar2 = (int)uVar3;
  *(int *)((longlong)param_1 + 0x18) = iVar2;
  if (*(int *)((longlong)param_1 + 0x1c) == 0 && iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 4;
  }
  else {
    FUN_140de5076(param_1,uVar3 & 0xffffffff);
    if (iVar2 != 0) {
      _Dst = *(void **)((longlong)param_1 + 0x10);
      if (*(void **)((longlong)param_1 + 0x10) == (void *)0x0) {
        _Dst = param_1;
      }
      memcpy(_Dst,_Src,(longlong)(uVar1 * 0x40000000) >> 0x1e & 0xfffffffffffffffc);
    }
  }
  return param_1;
}



// FUNCTION 1483fdb84 FUN_1483fdb84 body=38 status=ok
// SIG undefined FUN_1483fdb84(void)

undefined8 FUN_1483fdb84(undefined8 param_1,int param_2)

{
  FUN_146bd8050();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483fdbaa FUN_1483fdbaa body=38 status=ok
// SIG undefined FUN_1483fdbaa(void)

undefined8 FUN_1483fdbaa(undefined8 param_1,int param_2)

{
  FUN_1483f9eac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483fdbe8 FUN_1483fdbe8 body=38 status=ok
// SIG undefined FUN_1483fdbe8(void)

void FUN_1483fdbe8(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1483fdc0e(param_1);
    param_1 = param_1 + 0x30;
  }
  return;
}



// FUNCTION 1483fdc0e FUN_1483fdc0e body=72 status=ok
// SIG undefined FUN_1483fdc0e(void)

void FUN_1483fdc0e(longlong param_1)

{
  FUN_146c7d72c(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  FUN_146be9485(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1483fdcca FUN_1483fdcca body=59 status=ok
// SIG undefined FUN_1483fdcca(void)

undefined8 FUN_1483fdcca(longlong *param_1)

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



// FUNCTION 1483fdde0 FUN_1483fdde0 body=59 status=ok
// SIG undefined FUN_1483fdde0(void)

undefined8 FUN_1483fdde0(longlong *param_1)

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



// FUNCTION 1483fdebe FUN_1483fdebe body=118 status=ok
// SIG undefined FUN_1483fdebe(void)

undefined8 FUN_1483fdebe(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      *(undefined1 *)(param_2 + lVar3) = *(undefined1 *)(param_3 + lVar3);
      lVar2 = *(longlong *)(param_3 + 8 + lVar3);
      if (DAT_14c950c29 == '\x01') {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + 8 + lVar3);
        }
      }
      lVar1 = param_2 + lVar3;
      *(longlong *)(lVar1 + 8) = lVar2;
      *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(param_3 + 0x10 + lVar3);
      *(undefined4 *)(lVar1 + 0x18) = *(undefined4 *)(param_3 + 0x18 + lVar3);
      lVar3 = lVar3 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1483fdf5c FUN_1483fdf5c body=59 status=ok
// SIG undefined FUN_1483fdf5c(void)

undefined8 FUN_1483fdf5c(longlong *param_1)

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



// FUNCTION 1483fe04e FUN_1483fe04e body=127 status=ok
// SIG undefined FUN_1483fe04e(void)

undefined1 FUN_1483fe04e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (param_4 != 0) {
    lVar8 = 0;
    bVar6 = DAT_14c950c29;
    do {
      *(undefined8 *)(param_2 + lVar8) = *(undefined8 *)(param_3 + lVar8);
      lVar7 = *(longlong *)(param_3 + 8 + lVar8);
      if ((bVar6 & 1) != 0) {
        if (lVar7 == 0) {
          lVar7 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar7 = *(longlong *)(param_3 + 8 + lVar8);
          bVar6 = DAT_14c950c29;
        }
      }
      lVar1 = param_2 + lVar8;
      *(longlong *)(lVar1 + 8) = lVar7;
      puVar2 = (undefined4 *)(param_3 + 0x10 + lVar8);
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      *(undefined4 *)(lVar1 + 0x10) = *puVar2;
      *(undefined4 *)(lVar1 + 0x14) = uVar3;
      *(undefined4 *)(lVar1 + 0x18) = uVar4;
      *(undefined4 *)(lVar1 + 0x1c) = uVar5;
      *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_3 + 0x20 + lVar8);
      lVar8 = lVar8 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1483fe0f6 FUN_1483fe0f6 body=59 status=ok
// SIG undefined FUN_1483fe0f6(void)

undefined8 FUN_1483fe0f6(longlong *param_1)

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



// FUNCTION 1483fe210 FUN_1483fe210 body=59 status=ok
// SIG undefined FUN_1483fe210(void)

undefined8 FUN_1483fe210(longlong *param_1)

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



// FUNCTION 1483fe340 FUN_1483fe340 body=59 status=ok
// SIG undefined FUN_1483fe340(void)

undefined8 FUN_1483fe340(longlong *param_1)

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



// FUNCTION 1483fe49c FUN_1483fe49c body=173 status=ok
// SIG undefined FUN_1483fe49c(void)

undefined1 FUN_1483fe49c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  byte bVar10;
  longlong lVar11;
  longlong lVar12;
  
  if (param_4 != 0) {
    lVar12 = 0;
    bVar10 = DAT_14c950c29;
    do {
      *(undefined8 *)(param_2 + 0x10 + lVar12) = *(undefined8 *)(param_3 + 0x10 + lVar12);
      puVar3 = (undefined4 *)(param_3 + lVar12);
      uVar5 = puVar3[1];
      uVar6 = puVar3[2];
      uVar7 = puVar3[3];
      puVar1 = (undefined4 *)(param_2 + lVar12);
      *puVar1 = *puVar3;
      puVar1[1] = uVar5;
      puVar1[2] = uVar6;
      puVar1[3] = uVar7;
      *(undefined8 *)(param_2 + 0x18 + lVar12) = *(undefined8 *)(param_3 + 0x18 + lVar12);
      lVar11 = *(longlong *)(param_3 + 0x20 + lVar12);
      if ((bVar10 & 1) != 0) {
        if (lVar11 == 0) {
          lVar11 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar11 = *(longlong *)(param_3 + 0x20 + lVar12);
          bVar10 = DAT_14c950c29;
        }
      }
      lVar2 = param_2 + lVar12;
      *(longlong *)(lVar2 + 0x20) = lVar11;
      puVar4 = (undefined8 *)(param_3 + 0x28 + lVar12);
      uVar9 = puVar4[1];
      *(undefined8 *)(lVar2 + 0x28) = *puVar4;
      *(undefined8 *)(lVar2 + 0x30) = uVar9;
      *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)(param_3 + 0x38 + lVar12);
      puVar4 = (undefined8 *)(param_3 + 0x40 + lVar12);
      uVar9 = puVar4[1];
      puVar1 = (undefined4 *)(param_3 + 0x4c + lVar12);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      uVar7 = puVar1[2];
      uVar8 = puVar1[3];
      *(undefined8 *)(lVar2 + 0x40) = *puVar4;
      *(undefined8 *)(lVar2 + 0x48) = uVar9;
      *(undefined4 *)(lVar2 + 0x4c) = uVar5;
      *(undefined4 *)(lVar2 + 0x50) = uVar6;
      *(undefined4 *)(lVar2 + 0x54) = uVar7;
      *(undefined4 *)(lVar2 + 0x58) = uVar8;
      lVar12 = lVar12 + 0x60;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1483fe572 FUN_1483fe572 body=59 status=ok
// SIG undefined FUN_1483fe572(void)

undefined8 FUN_1483fe572(longlong *param_1)

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



// FUNCTION 1483fe69a FUN_1483fe69a body=59 status=ok
// SIG undefined FUN_1483fe69a(void)

undefined8 FUN_1483fe69a(longlong *param_1)

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



// FUNCTION 1483fe73c FUN_1483fe73c body=138 status=ok
// SIG undefined FUN_1483fe73c(void)

code * FUN_1483fe73c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DilationOverwriteMinimumDistance";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x740000005b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1483fe7c6;
}



// FUNCTION 1483fe7c6 FUN_1483fe7c6 body=138 status=ok
// SIG undefined FUN_1483fe7c6(void)

code * FUN_1483fe7c6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"UndergroundDilationDepthOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x700000005a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1483fe850;
}



// FUNCTION 1483fe850 FUN_1483fe850 body=138 status=ok
// SIG undefined FUN_1483fe850(void)

code * FUN_1483fe850(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CaptureZ";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6c00000059;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f39b72;
}



// FUNCTION 1483fe8da FUN_1483fe8da body=138 status=ok
// SIG undefined FUN_1483fe8da(void)

code * FUN_1483fe8da(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"WaterHeightExtents";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6000000057;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1483fe964;
}



// FUNCTION 1483fe964 FUN_1483fe964 body=138 status=ok
// SIG undefined FUN_1483fe964(void)

code * FUN_1483fe964(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DilationTextureSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5800000056;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f39c84;
}



// FUNCTION 1483fe9ee FUN_1483fe9ee body=138 status=ok
// SIG undefined FUN_1483fe9ee(void)

code * FUN_1483fe9ee(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ColorTextureSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4800000054;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1483fea78;
}



// FUNCTION 1483fea78 FUN_1483fea78 body=138 status=ok
// SIG undefined FUN_1483fea78(void)

code * FUN_1483fea78(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ColorTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000053;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1483feb02;
}



// FUNCTION 1483feb02 FUN_1483feb02 body=138 status=ok
// SIG undefined FUN_1483feb02(void)

code * FUN_1483feb02(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DepthTextureSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3800000052;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f39bfa;
}



// FUNCTION 1483feb90 FUN_1483feb90 body=138 status=ok
// SIG undefined FUN_1483feb90(void)

code * FUN_1483feb90(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"BlurRadius";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x48000000bd;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1483fec1a;
}



// FUNCTION 1483fec1a FUN_1483fec1a body=138 status=ok
// SIG undefined FUN_1483fec1a(void)

code * FUN_1483fec1a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CaptureZ";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x44000000bc;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1483feca4;
}



// FUNCTION 1483feca4 FUN_1483feca4 body=138 status=ok
// SIG undefined FUN_1483feca4(void)

code * FUN_1483feca4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GroundZMin";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000000bb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f3a166;
}



// FUNCTION 1483fed2e FUN_1483fed2e body=138 status=ok
// SIG undefined FUN_1483fed2e(void)

code * FUN_1483fed2e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"WaterZMin";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x38000000b9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f3a1ee;
}



// FUNCTION 1483fedbc FUN_1483fedbc body=38 status=ok
// SIG undefined FUN_1483fedbc(void)

undefined8 FUN_1483fedbc(undefined8 param_1,int param_2)

{
  FUN_1472dbdd6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483fede8 FUN_1483fede8 body=242 status=ok
// SIG undefined FUN_1483fede8(void)

void FUN_1483fede8(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined2 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 local_30;
  undefined8 local_2c;
  undefined8 uStack_24;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = DAT_14ca83a40;
  local_80 = DAT_14ca83a30;
  uStack_7c = DAT_14ca83a34;
  uStack_78 = DAT_14ca83a38;
  uStack_74 = DAT_14ca83a3c;
  local_64 = *(undefined8 *)(param_1 + 0x28);
  local_88 = 9;
  local_6c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_68 = 0;
  local_5c = 0xa00010100010001;
  local_54 = 0xff00;
  uVar2 = FUN_14472bf7a(param_2,&local_88,L"WaterDepthTexture",0);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  lVar1 = **(longlong **)(param_1 + 0x30);
  local_50 = *(undefined4 *)(lVar1 + 0x4d8);
  uStack_4c = *(undefined4 *)(lVar1 + 0x4dc);
  uStack_48 = *(undefined4 *)(lVar1 + 0x4e0);
  uStack_44 = *(undefined4 *)(lVar1 + 0x4e4);
  local_2c = 0x100000000;
  uStack_24 = 0x100000000;
  local_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0x3f800000;
  local_30 = 1;
  FUN_1401a4871(param_2,uVar2);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483feedc FUN_1483feedc body=38 status=ok
// SIG undefined FUN_1483feedc(void)

undefined8 FUN_1483feedc(undefined8 param_1,int param_2)

{
  FUN_1472dbdd6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483fef02 FUN_1483fef02 body=126 status=ok
// SIG undefined FUN_1483fef02(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1483fef02(void)

{
  FUN_140033559(".\\../Plugins/Experimental/Water/Source/Runtime/Private/WaterInfoRendering.cpp",
                0x3c8,L"Pure virtual not implemented (%s)",
                L"FWaterInfoCustomRenderPassBase::GetTypeName");
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb48a50) {
    FUN_144b3d300(&DAT_14cb48a50);
    if (DAT_14cb48a50 == -1) {
      _DAT_14cb48a48 = 0;
      _Init_thread_footer(&DAT_14cb48a50);
    }
  }
  return &DAT_14cb48a48;
}



// FUNCTION 1483fef80 FUN_1483fef80 body=73 status=ok
// SIG undefined FUN_1483fef80(void)

undefined8 * FUN_1483fef80(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ae98598;
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_1409da246(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483fefd0 FUN_1483fefd0 body=122 status=ok
// SIG undefined FUN_1483fefd0(void)

longlong FUN_1483fefd0(longlong param_1,longlong param_2)

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
    FUN_1483ff04a(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1483ff04a FUN_1483ff04a body=115 status=ok
// SIG undefined FUN_1483ff04a(void)

undefined8 * FUN_1483ff04a(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1409da27e(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_144869a3c(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 << 4);
    }
  }
  return param_1;
}



// FUNCTION 1483ff0be FUN_1483ff0be body=38 status=ok
// SIG undefined FUN_1483ff0be(void)

undefined8 FUN_1483ff0be(undefined8 param_1,int param_2)

{
  FUN_1472dbdd6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483ff0ea FUN_1483ff0ea body=242 status=ok
// SIG undefined FUN_1483ff0ea(void)

void FUN_1483ff0ea(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined2 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 local_30;
  undefined8 local_2c;
  undefined8 uStack_24;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = DAT_14ca83a40;
  local_80 = DAT_14ca83a30;
  uStack_7c = DAT_14ca83a34;
  uStack_78 = DAT_14ca83a38;
  uStack_74 = DAT_14ca83a3c;
  local_64 = *(undefined8 *)(param_1 + 0x28);
  local_88 = 9;
  local_6c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_68 = 0;
  local_5c = 0x100010100010001;
  local_54 = 0xff00;
  uVar2 = FUN_14472bf7a(param_2,&local_88,L"WaterColorTexture",0);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  lVar1 = **(longlong **)(param_1 + 0x30);
  local_50 = *(undefined4 *)(lVar1 + 0x4d8);
  uStack_4c = *(undefined4 *)(lVar1 + 0x4dc);
  uStack_48 = *(undefined4 *)(lVar1 + 0x4e0);
  uStack_44 = *(undefined4 *)(lVar1 + 0x4e4);
  local_2c = 0x100000000;
  uStack_24 = 0x100000000;
  local_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0x3f800000;
  local_30 = 1;
  FUN_1401a4871(param_2,uVar2);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483ff1de FUN_1483ff1de body=38 status=ok
// SIG undefined FUN_1483ff1de(void)

undefined8 FUN_1483ff1de(undefined8 param_1,int param_2)

{
  FUN_1472dbdd6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483ff20a FUN_1483ff20a body=242 status=ok
// SIG undefined FUN_1483ff20a(void)

void FUN_1483ff20a(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined2 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 local_30;
  undefined8 local_2c;
  undefined8 uStack_24;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = DAT_14ca83a40;
  local_80 = DAT_14ca83a30;
  uStack_7c = DAT_14ca83a34;
  uStack_78 = DAT_14ca83a38;
  uStack_74 = DAT_14ca83a3c;
  local_64 = *(undefined8 *)(param_1 + 0x28);
  local_88 = 9;
  local_6c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_68 = 0;
  local_5c = 0xa00010100010001;
  local_54 = 0xff00;
  uVar2 = FUN_14472bf7a(param_2,&local_88,L"WaterDilationTexture",0);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  lVar1 = **(longlong **)(param_1 + 0x30);
  local_50 = *(undefined4 *)(lVar1 + 0x4d8);
  uStack_4c = *(undefined4 *)(lVar1 + 0x4dc);
  uStack_48 = *(undefined4 *)(lVar1 + 0x4e0);
  uStack_44 = *(undefined4 *)(lVar1 + 0x4e4);
  local_2c = 0x100000000;
  uStack_24 = 0x100000000;
  local_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0x3f800000;
  local_30 = 1;
  FUN_1401a4871(param_2,uVar2);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483ff2fe FUN_1483ff2fe body=434 status=ok
// SIG undefined FUN_1483ff2fe(void)

void FUN_1483ff2fe(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined8 local_44;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  undefined1 local_34;
  undefined1 local_33;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = *(longlong *)(param_1 + 0x20);
  local_36 = *(undefined1 *)(lVar1 + 0x92);
  local_68 = *(undefined8 *)(lVar1 + 0x60);
  local_35 = *(undefined1 *)(lVar1 + 0x93);
  local_34 = *(undefined1 *)(lVar1 + 0x94);
  local_44 = *(undefined8 *)(lVar1 + 0x84);
  local_3c = *(undefined2 *)(lVar1 + 0x8c);
  local_3a = *(undefined2 *)(lVar1 + 0x8e);
  local_38 = *(undefined1 *)(lVar1 + 0x90);
  local_37 = *(undefined1 *)(lVar1 + 0x91);
  local_60 = *(undefined4 *)(lVar1 + 0x68);
  uStack_5c = *(undefined4 *)(lVar1 + 0x6c);
  uStack_58 = *(undefined4 *)(lVar1 + 0x70);
  uStack_54 = *(undefined4 *)(lVar1 + 0x74);
  local_50 = *(undefined4 *)(lVar1 + 0x78);
  local_48 = *(undefined4 *)(lVar1 + 0x80);
  local_33 = *(undefined1 *)(lVar1 + 0x95);
  local_4c = *(undefined4 *)(lVar1 + 0x7c);
  uVar2 = FUN_14472bf7a(param_2,&local_68,L"WaterInfoMerged",0);
  local_88 = *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + 0x20);
  local_80 = *(undefined8 *)(param_1 + 0x20);
  local_78 = param_1 + 0xc0;
  FUN_143b3c030(param_2,**(undefined8 **)(param_1 + 0x30),uVar2,
                *(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x20));
  uVar3 = FUN_14472bf7a(param_2,*(longlong *)(param_1 + 0x20) + 0x60,L"WaterInfoFinalized",0);
  local_88 = param_1 + 0xc0;
  FUN_143b3c63e(param_2,**(undefined8 **)(param_1 + 0x30),uVar2,uVar3);
  puVar4 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 0xa8) + 0x10))();
  uVar2 = FUN_1447ebf30(param_2,*puVar4,L"WaterInfoTexture",0);
  local_80 = DAT_14c967818;
  local_88 = DAT_14c967818;
  FUN_1448018f7(param_2,uVar3,uVar2);
  FUN_14178e91e(param_2,uVar2,0x70,1);
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483ff4b2 FUN_1483ff4b2 body=142 status=ok
// SIG undefined FUN_1483ff4b2(void)

void FUN_1483ff4b2(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  *(undefined1 (*) [16])(param_1 + 6) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 10) = (undefined1  [16])0x0;
  lVar1 = 0x92;
  do {
    *(undefined1 (*) [16])((longlong)param_1 + lVar1 + -0x12) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)param_1 + lVar1 + -2) = 0xffff0000;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0x152);
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  *(undefined1 (*) [16])(param_1 + 0x28) = (undefined1  [16])0x0;
  *(undefined2 *)(param_1 + 0x2a) = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x164) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  *(undefined2 *)((longlong)param_1 + 0x16c) = 0;
  param_1[0x2e] = 0;
  return;
}



// FUNCTION 1483ff540 FUN_1483ff540 body=29 status=ok
// SIG undefined FUN_1483ff540(void)

undefined8 FUN_1483ff540(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483ff55e FUN_1483ff55e body=131 status=ok
// SIG undefined FUN_1483ff55e(void)

void FUN_1483ff55e(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  param_1[6] = 0;
  lVar1 = 0x62;
  do {
    *(undefined1 (*) [16])((longlong)param_1 + lVar1 + -0x12) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)param_1 + lVar1 + -2) = 0xffff0000;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0x122);
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  *(undefined1 (*) [16])(param_1 + 0x22) = (undefined1  [16])0x0;
  *(undefined2 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x25) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 300) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x26) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x27) = 0;
  *(undefined2 *)((longlong)param_1 + 0x13c) = 0;
  param_1[0x28] = 0;
  return;
}



// FUNCTION 1483ff5e2 FUN_1483ff5e2 body=29 status=ok
// SIG undefined FUN_1483ff5e2(void)

undefined8 FUN_1483ff5e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483ff600 FUN_1483ff600 body=98 status=ok
// SIG undefined FUN_1483ff600(void)

void FUN_1483ff600(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1483ff662 FUN_1483ff662 body=111 status=ok
// SIG undefined FUN_1483ff662(void)

void FUN_1483ff662(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x70,0x10);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 4;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x70,0x10);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1483ff6d2 FUN_1483ff6d2 body=48 status=ok
// SIG undefined FUN_1483ff6d2(void)

void FUN_1483ff6d2(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x20,8);
  }
  return;
}



// FUNCTION 1483ff702 FUN_1483ff702 body=114 status=ok
// SIG undefined FUN_1483ff702(void)

void FUN_1483ff702(longlong *param_1,int param_2)

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



// FUNCTION 1483ff774 FUN_1483ff774 body=138 status=ok
// SIG undefined FUN_1483ff774(void)

code * FUN_1483ff774(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaxWaveHeight";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000052;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1483ff7fe;
}



// FUNCTION 1483ff7fe FUN_1483ff7fe body=138 status=ok
// SIG undefined FUN_1483ff7fe(void)

code * FUN_1483ff7fe(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"WaterBodyMaxZ";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc00000051;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e79246;
}



// FUNCTION 1483ff888 FUN_1483ff888 body=138 status=ok
// SIG undefined FUN_1483ff888(void)

code * FUN_1483ff888(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Priority";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000004f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1483ff912;
}



// FUNCTION 1483ff912 FUN_1483ff912 body=132 status=ok
// SIG undefined FUN_1483ff912(void)

undefined1 * FUN_1483ff912(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"WaterBodyRenderDataIndex";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e79242;
}



// FUNCTION 1483ff996 FUN_1483ff996 body=138 status=ok
// SIG undefined FUN_1483ff996(void)

code * FUN_1483ff996(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ZBoundsPadding";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000075;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f1f5a4;
}



// FUNCTION 1483ffa20 FUN_1483ffa20 body=138 status=ok
// SIG undefined FUN_1483ffa20(void)

code * FUN_1483ffa20(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ZBoundsRasterTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000071;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1483ffaaa;
}



// FUNCTION 1483ffaaa FUN_1483ffaaa body=138 status=ok
// SIG undefined FUN_1483ffaaa(void)

code * FUN_1483ffaaa(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"WaterBodyRasterTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000070;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1483ffb34;
}



// FUNCTION 1483ffb34 FUN_1483ffb34 body=138 status=ok
// SIG undefined FUN_1483ffb34(void)

code * FUN_1483ffb34(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ZBoundsRasterTextureMS";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2DMS";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000006f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f1f520;
}



// FUNCTION 1483ffbc2 FUN_1483ffbc2 body=138 status=ok
// SIG undefined FUN_1483ffbc2(void)

code * FUN_1483ffbc2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"WaterZBoundsTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000088;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e6789a;
}



// FUNCTION 1483ffc4c FUN_1483ffc4c body=138 status=ok
// SIG undefined FUN_1483ffc4c(void)

code * FUN_1483ffc4c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumDrawBuckets";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000000a0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1483ffcd6;
}



// FUNCTION 1483ffcd6 FUN_1483ffcd6 body=138 status=ok
// SIG undefined FUN_1483ffcd6(void)

code * FUN_1483ffcd6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OcclusionQueryArgs";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000009f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e4c772;
}



// FUNCTION 1483ffd60 FUN_1483ffd60 body=138 status=ok
// SIG undefined FUN_1483ffd60(void)

code * FUN_1483ffd60(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumDispatchedThreads";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xbc000000e3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1483ffdea;
}



// FUNCTION 1483ffdea FUN_1483ffdea body=138 status=ok
// SIG undefined FUN_1483ffdea(void)

code * FUN_1483ffdea(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumLODs";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb8000000e2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1483ffe74;
}



// FUNCTION 1483ffe74 FUN_1483ffe74 body=138 status=ok
// SIG undefined FUN_1483ffe74(void)

code * FUN_1483ffe74(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ForceCollapseDensityLevel";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb4000000e1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146488aa8;
}



// FUNCTION 1483ffefe FUN_1483ffefe body=138 status=ok
// SIG undefined FUN_1483ffefe(void)

code * FUN_1483ffefe(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LODScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xac000000df;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1483fff88;
}



// FUNCTION 1483fff88 FUN_1483fff88 body=138 status=ok
// SIG undefined FUN_1483fff88(void)

code * FUN_1483fff88(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LeafSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa8000000de;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148400012;
}



// FUNCTION 148400012 FUN_148400012 body=138 status=ok
// SIG undefined FUN_148400012(void)

code * FUN_148400012(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ViewIndex";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa4000000dd;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14840009c;
}



// FUNCTION 14840009c FUN_14840009c body=138 status=ok
// SIG undefined FUN_14840009c(void)

code * FUN_14840009c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"QuadTreeResolutionY";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa0000000dc;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f5d68a;
}



// FUNCTION 148400126 FUN_148400126 body=138 status=ok
// SIG undefined FUN_148400126(void)

code * FUN_148400126(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ObserverPosition";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x90000000da;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1484001b0;
}



// FUNCTION 1484001b0 FUN_1484001b0 body=138 status=ok
// SIG undefined FUN_1484001b0(void)

code * FUN_1484001b0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"QuadTreePosition";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000000d9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14840023a;
}



// FUNCTION 14840023a FUN_14840023a body=138 status=ok
// SIG undefined FUN_14840023a(void)

code * FUN_14840023a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HZBViewSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x78000000d8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1484002c4;
}



// FUNCTION 1484002c4 FUN_1484002c4 body=138 status=ok
// SIG undefined FUN_1484002c4(void)

code * FUN_1484002c4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HZBSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x70000000d7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14840034e;
}



// FUNCTION 14840034e FUN_14840034e body=138 status=ok
// SIG undefined FUN_14840034e(void)

code * FUN_14840034e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CullingBoundsAABB";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x60000000d6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1484003d8;
}


