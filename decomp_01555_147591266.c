// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147591266 FUN_147591266 body=79 status=ok
// SIG undefined FUN_147591266(void)

undefined8 * FUN_147591266(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a499160;
  if (*(char *)(param_1 + 10) == '\x01') {
    *(undefined1 *)(param_1 + 10) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (*(char *)(param_1 + 2) == '\x01') {
    *(undefined1 *)(param_1 + 2) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475912b6 FUN_1475912b6 body=89 status=ok
// SIG undefined FUN_1475912b6(void)

undefined8 * FUN_1475912b6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a499140;
  if (*(char *)(param_1 + 0xd) == '\x01') {
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  if (*(char *)(param_1 + 10) == '\x01') {
    *(undefined1 *)(param_1 + 10) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (*(char *)(param_1 + 2) == '\x01') {
    *(undefined1 *)(param_1 + 2) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147591310 FUN_147591310 body=105 status=ok
// SIG undefined FUN_147591310(void)

undefined8 * FUN_147591310(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a499120;
  if (*(char *)(param_1 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  if (*(char *)(param_1 + 0xd) == '\x01') {
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  if (*(char *)(param_1 + 10) == '\x01') {
    *(undefined1 *)(param_1 + 10) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (*(char *)(param_1 + 2) == '\x01') {
    *(undefined1 *)(param_1 + 2) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14759137a FUN_14759137a body=38 status=ok
// SIG undefined FUN_14759137a(void)

undefined8 FUN_14759137a(undefined8 param_1,int param_2)

{
  FUN_1475863e8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475913a0 FUN_1475913a0 body=150 status=ok
// SIG undefined FUN_1475913a0(void)

void FUN_1475913a0(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x88,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x88)) {
      uVar5 = uVar4 / 0x88 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x88,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14759143a FUN_14759143a body=132 status=ok
// SIG undefined FUN_14759143a(void)

void FUN_14759143a(longlong param_1,int param_2)

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



// FUNCTION 1475914c0 FUN_1475914c0 body=317 status=ok
// SIG undefined FUN_1475914c0(void)

int FUN_1475914c0(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  iVar7 = (int)param_1[1];
  lVar8 = (longlong)iVar7;
  if (lVar8 == 0) {
    iVar7 = 0;
  }
  else {
    plVar1 = (longlong *)*param_1;
    lVar5 = *(longlong *)*param_2;
    if ((lVar5 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar5);
    }
    iVar12 = 0;
    iVar9 = 0;
    bVar3 = *plVar1 == lVar5;
    do {
      lVar6 = (longlong)iVar9;
      iVar10 = iVar9;
      lVar5 = lVar6;
      iVar4 = iVar9 + 1;
      if (iVar9 + 1 < iVar7) {
        iVar4 = iVar7;
      }
      do {
        lVar5 = lVar5 + 1;
        iVar11 = iVar4;
        if (lVar8 <= lVar5) break;
        lVar2 = *(longlong *)*param_2;
        if ((lVar2 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar2);
        }
        iVar11 = iVar10 + 1;
        iVar10 = iVar11;
      } while (bVar3 == (plVar1[lVar5] == lVar2));
      if (bVar3 == false) {
        if (iVar12 != iVar9) {
          memmove(plVar1 + iVar12,plVar1 + lVar6,(longlong)(iVar11 - iVar9) << 3);
        }
        iVar12 = iVar12 + (iVar11 - iVar9);
      }
      iVar9 = iVar11;
      bVar3 = (bool)(bVar3 ^ 1);
    } while (lVar5 < lVar8);
    *(int *)(param_1 + 1) = iVar12;
    iVar7 = iVar7 - iVar12;
  }
  return iVar7;
}



// FUNCTION 1475915fe FUN_1475915fe body=63 status=ok
// SIG undefined FUN_1475915fe(void)

void FUN_1475915fe(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14759163e(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 14759163e FUN_14759163e body=97 status=ok
// SIG undefined FUN_14759163e(void)

ulonglong FUN_14759163e(undefined8 param_1,uint param_2,uint param_3)

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



// FUNCTION 1475916a0 FUN_1475916a0 body=96 status=ok
// SIG undefined FUN_1475916a0(void)

void FUN_1475916a0(longlong param_1,int param_2)

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



// FUNCTION 147591700 FUN_147591700 body=59 status=ok
// SIG undefined FUN_147591700(void)

undefined8 * FUN_147591700(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a499370;
  if (*(char *)((longlong)param_1 + 0x25) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x25) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x1c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14759173c FUN_14759173c body=48 status=ok
// SIG undefined FUN_14759173c(void)

void FUN_14759173c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,4);
  }
  return;
}



// FUNCTION 14759176c FUN_14759176c body=132 status=ok
// SIG undefined FUN_14759176c(void)

void FUN_14759176c(longlong param_1,int param_2)

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



// FUNCTION 1475917f2 FUN_1475917f2 body=190 status=ok
// SIG undefined FUN_1475917f2(void)

void FUN_1475917f2(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  ulonglong uVar6;
  
  lVar4 = param_1[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar2 = *param_1;
    uVar6 = 0;
    bVar5 = DAT_14c950c29;
    do {
      lVar3 = *param_2;
      if ((lVar3 != 0 & bVar5) == 1) {
        FUN_1456cec3c(lVar3);
        bVar5 = DAT_14c950c29;
      }
      if (*(longlong *)(lVar2 + uVar6) == lVar3) {
        if ((int)(~uVar6 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar6 = uVar6 + 8;
    } while ((longlong)(int)lVar4 * 8 != uVar6);
  }
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14759143a(param_1,iVar1);
  }
  lVar4 = *param_2;
  *(longlong *)(*param_1 + (longlong)iVar1 * 8) = lVar4;
  if ((lVar4 != 0 & DAT_14c950c29) != 1) {
    return;
  }
  FUN_1456cec3c();
  return;
}



// FUNCTION 1475918b0 FUN_1475918b0 body=31 status=ok
// SIG undefined FUN_1475918b0(void)

undefined8 FUN_1475918b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475918ea FUN_1475918ea body=29 status=ok
// SIG undefined FUN_1475918ea(void)

bool FUN_1475918ea(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147591908 FUN_147591908 body=26 status=ok
// SIG undefined FUN_147591908(void)

bool FUN_147591908(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147591922 FUN_147591922 body=68 status=ok
// SIG undefined FUN_147591922(void)

void FUN_147591922(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x30);
  *puVar2 = &PTR_LAB_149e020b0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14a499520;
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 147591966 FUN_147591966 body=68 status=ok
// SIG undefined FUN_147591966(void)

void FUN_147591966(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x30);
  *puVar2 = &PTR_LAB_149e020b0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14a499520;
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 1475919aa FUN_1475919aa body=108 status=ok
// SIG undefined FUN_1475919aa(void)

void FUN_1475919aa(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  EnterCriticalSection(param_2);
  puVar4 = (undefined8 *)FUN_144a72ab6(0x30,param_2 + 1);
  *puVar4 = &PTR_LAB_149e020b0;
  puVar4[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar4 = &PTR_FUN_14a499520;
  puVar4[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(puVar4 + 3) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)puVar4 + 0x1c) = uVar1;
  *(undefined4 *)(puVar4 + 4) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x24) = uVar3;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147591a07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147591a16 FUN_147591a16 body=39 status=ok
// SIG undefined FUN_147591a16(void)

void FUN_147591a16(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147591a39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 147591a3e FUN_147591a3e body=146 status=ok
// SIG undefined FUN_147591a3e(void)

bool FUN_147591a3e(longlong param_1)

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



// FUNCTION 147591ad2 FUN_147591ad2 body=332 status=ok
// SIG undefined FUN_147591ad2(void)

void FUN_147591ad2(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  longlong local_68;
  longlong local_60;
  undefined8 uStack_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = FUN_14633a864();
  local_50 = *(longlong *)(lVar5 + 0x18);
  uVar8 = *(uint *)(param_1 + 0x20);
  lVar5 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar5 = param_1;
  }
  if ((int)uVar8 < 1) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    local_70 = param_2;
    do {
      uVar1 = uVar7 + (uVar8 >> 1);
      local_68 = *(longlong *)(lVar5 + (ulonglong)uVar1 * 0x18);
      iVar4 = FUN_144a78538(&local_68,&local_50);
      uVar1 = (uVar8 & 1) + uVar1;
      if (-1 < iVar4) {
        uVar1 = uVar7;
      }
      uVar7 = uVar1;
      bVar3 = 1 < uVar8;
      uVar8 = uVar8 >> 1;
    } while (bVar3);
    uVar8 = *(uint *)(param_1 + 0x20);
    param_2 = local_70;
  }
  if ((int)uVar7 < (int)uVar8) {
    lVar5 = *(longlong *)(param_1 + 0x18);
    lVar6 = lVar5;
    if (lVar5 == 0) {
      lVar6 = param_1;
    }
    if (*(longlong *)(lVar6 + (ulonglong)uVar7 * 0x18) == local_50) goto LAB_147591bc0;
  }
  local_60 = 0;
  uStack_58 = 0;
  local_68 = local_50;
  FUN_140f93936(param_1,&local_68,uVar7);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  lVar5 = *(longlong *)(param_1 + 0x18);
LAB_147591bc0:
  if (lVar5 != 0) {
    param_1 = lVar5;
  }
  plVar2 = (longlong *)(param_1 + 8 + (ulonglong)uVar7 * 0x18);
  iVar4 = (int)plVar2[1];
  *(uint *)(plVar2 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)plVar2 + 0xc) < iVar4 + 1U) {
    FUN_140aec898(plVar2,iVar4);
  }
  *(undefined8 *)(*plVar2 + (longlong)iVar4 * 8) = param_2;
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147591c1f FUN_147591c1f body=516 status=ok
// SIG undefined FUN_147591c1f(void)

undefined8 *
FUN_147591c1f(undefined8 *param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  int iVar1;
  int iVar2;
  float fVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 auStack_128 [40];
  uint local_100;
  uint local_fc;
  undefined1 local_e0 [4];
  undefined1 local_dc [4];
  ulonglong local_d8;
  undefined1 local_d0 [96];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_d8 = param_3;
  iVar1 = FUN_147532ef8(param_2);
  FUN_147533040(param_2,local_dc);
  FUN_147533050(param_2,local_e0);
  iVar2 = FUN_147532f00(param_2,&local_d8);
  *param_1 = 0x7fefffffffffffff;
  param_1[1] = 0xffefffffffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  if (iVar2 < iVar1 && -1 < iVar2) {
    fVar3 = (float)(param_4 >> 0x20);
    do {
      FUN_147532f8a(param_2,local_d0,iVar2);
      FUN_14752b834(local_d0,&local_100);
      uVar6 = (uint)param_4;
      if (((int)uVar6 < (int)local_100) || ((local_100 == uVar6 && (fVar3 < 0.0)))) break;
      FUN_14752b834(local_d0,&local_100);
      uVar4 = local_d8;
      uVar7 = local_d8;
      if ((int)local_fc <= (int)(uint)local_d8) {
        if (0.0 <= (float)(local_d8 >> 0x20)) {
          uVar7 = (ulonglong)local_fc;
        }
        if (local_fc != (uint)local_d8) {
          uVar7 = (ulonglong)local_fc;
        }
        uVar4 = uVar7 & 0xffffffff;
      }
      if ((int)(uint)uVar4 <= (int)local_100) {
        if ((float)(uVar7 >> 0x20) <= 0.0) {
          uVar7 = (ulonglong)local_100;
        }
        if (local_100 != (uint)uVar4) {
          uVar7 = (ulonglong)local_100;
        }
      }
      FUN_14752b834(local_d0,&local_100);
      uVar4 = (ulonglong)local_fc;
      if (fVar3 < 0.0) {
        uVar4 = param_4;
      }
      if (local_fc != uVar6) {
        uVar4 = (ulonglong)local_fc;
      }
      if ((int)uVar6 < (int)local_fc) {
        uVar4 = param_4;
      }
      uVar5 = uVar4;
      if ((int)(uint)uVar4 <= (int)local_100) {
        if ((float)(uVar4 >> 0x20) <= 0.0) {
          uVar5 = (ulonglong)local_100;
        }
        if (local_100 != (uint)uVar4) {
          uVar5 = (ulonglong)local_100;
        }
      }
      FUN_14752f5ec(local_d0,&local_100,uVar7,uVar5);
      FUN_14752f572(param_1,&local_100);
      iVar2 = iVar2 + 1;
    } while (iVar1 != iVar2);
  }
  if ((local_70 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147591e2e FUN_147591e2e body=21 status=ok
// SIG undefined FUN_147591e2e(void)

undefined8 FUN_147591e2e(longlong param_1,undefined8 param_2,undefined1 *param_3)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  int7 iVar10;
  undefined8 uVar9;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auStack_a8 [40];
  undefined1 auStack_80 [8];
  int iStack_78;
  float fStack_74;
  byte bStack_70;
  ulonglong uStack_60;
  
  if ((*(int *)(param_1 + 0x60) == 0) || (iVar8 = (int)param_2, iVar8 < **(int **)(param_1 + 0x58)))
  {
    return 0;
  }
  uStack_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar13 = *(uint *)(param_1 + 0x60);
  if (uVar13 == 0) {
    if (*(char *)(param_1 + 0x69) != '\x01') {
LAB_140aef8f4:
      uVar9 = 0;
      goto LAB_140aef86b;
    }
    uVar7 = *(undefined1 *)(param_1 + 0x68);
    iVar10 = (int7)(uStack_60 >> 8);
  }
  else {
    piVar5 = *(int **)(param_1 + 0x58);
    iVar3 = *piVar5;
    iVar4 = piVar5[(int)(uVar13 - 1)];
    fVar14 = (float)((ulonglong)param_2 >> 0x20);
    if ((iVar8 < iVar3) || ((iVar3 == iVar8 && (fVar14 < 0.0)))) {
      bVar2 = *(byte *)(param_1 + 0x50);
      if (1 < bVar2 - 3) {
        if (bVar2 == 5) goto LAB_140aef8f4;
        FUN_140108ff7(auStack_80,iVar3,iVar4,param_2);
        if (iVar3 <= iVar8) goto LAB_140aef7d6;
        goto joined_r0x000140aef8e3;
      }
      uVar7 = **(undefined1 **)(param_1 + 0x70);
      iVar10 = (int7)((ulonglong)*(undefined1 **)(param_1 + 0x70) >> 8);
    }
    else {
      if ((iVar4 < iVar8) || ((iVar4 == iVar8 && (0.0 < fVar14)))) {
        if (*(byte *)(param_1 + 0x51) - 3 < 2) {
          iVar8 = *(int *)(param_1 + 0x78) + -1;
          uVar7 = *(undefined1 *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar8);
          iVar10 = (int7)(int3)((uint)iVar8 >> 8);
          goto LAB_140aef867;
        }
        if (*(byte *)(param_1 + 0x51) == 5) goto LAB_140aef8f4;
      }
      FUN_140108ff7(auStack_80,iVar3,iVar4,param_2);
LAB_140aef7d6:
      if ((iVar3 != iVar8) || (0.0 <= fVar14)) {
        if ((iVar4 < iVar8) || ((iVar4 == iVar8 && (0.0 < fVar14)))) {
          bVar2 = *(byte *)(param_1 + 0x51);
          goto joined_r0x000140aef8e3;
        }
      }
      else {
        bVar2 = *(byte *)(param_1 + 0x50);
joined_r0x000140aef8e3:
        if ((bVar2 == 2) && ((bStack_70 & 1) != 0)) {
          fVar14 = fStack_74 + 0.5 + -0.5;
          if (0.99999994 <= fVar14) {
            fVar14 = 0.99999994;
          }
          if (fVar14 <= 0.0) {
            fVar14 = 0.0;
          }
          fVar14 = 0.0 - fVar14;
          auVar15 = roundps(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14),1);
          iStack_78 = ((iVar4 + iVar3) - iStack_78) + -1 + (int)auVar15._0_4_;
          fStack_74 = (fVar14 - auVar15._0_4_) + 0.5 + -0.5;
          if (0.99999994 <= fStack_74) {
            fStack_74 = 0.99999994;
          }
          if (fStack_74 <= 0.0) {
            fStack_74 = 0.0;
          }
        }
      }
      if ((int)uVar13 < 1) {
        uVar12 = 0;
      }
      else {
        uVar12 = 0;
        do {
          uVar1 = (uVar13 >> 1) + uVar12;
          if ((piVar5[uVar1] <= iStack_78) && (piVar5[uVar1] != iStack_78 || 0.0 <= fStack_74)) {
            uVar12 = uVar1 + (uVar13 & 1);
          }
          bVar6 = 1 < uVar13;
          uVar13 = uVar13 >> 1;
        } while (bVar6);
      }
      uVar11 = 1;
      if (1 < (int)uVar12) {
        uVar11 = (ulonglong)uVar12;
      }
      uVar7 = *(undefined1 *)(*(longlong *)(param_1 + 0x70) + -1 + uVar11);
      iVar10 = (int7)((ulonglong)*(longlong *)(param_1 + 0x70) >> 8);
    }
  }
LAB_140aef867:
  *param_3 = uVar7;
  uVar9 = CONCAT71(iVar10,1);
LAB_140aef86b:
  if ((uStack_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 147591e48 FUN_147591e48 body=77 status=ok
// SIG undefined FUN_147591e48(void)

void FUN_147591e48(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x390);
  if ((lVar1 != 0) && ((*(uint *)(lVar1 + 8) >> 0x1e & 1) == 0)) {
    lVar2 = FUN_1447210f0(param_1);
    if (lVar2 != 0) {
      FUN_14010045e(lVar2,*(undefined8 *)(lVar1 + 0x30));
    }
    *(undefined8 *)(lVar1 + 0x30) = 0;
  }
  FUN_1407fb560(param_1);
  return;
}



// FUNCTION 147591ea2 FUN_147591ea2 body=129 status=ok
// SIG undefined FUN_147591ea2(void)

void FUN_147591ea2(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_140206818();
  lVar1 = *(longlong *)(param_1 + 0x390);
  if (lVar1 == 0) {
    lVar1 = FUN_147591f23(param_1);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x390) = lVar1;
  }
  lVar2 = FUN_1447210f0(param_1);
  if (lVar2 != 0) {
    FUN_14010045e(lVar2,*(undefined8 *)(lVar1 + 0x30));
    *(undefined8 *)(lVar1 + 0x30) = 0;
    FUN_147593270(lVar1,lVar2);
  }
  FUN_147591fd2(param_1);
  return;
}



// FUNCTION 147591f23 FUN_147591f23 body=174 status=ok
// SIG undefined FUN_147591f23(void)

undefined8 FUN_147591f23(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1458e6578();
  FUN_144a5c54a(local_a8,uVar1);
  local_98 = 0;
  local_90 = 8;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
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



// FUNCTION 147591fd2 FUN_147591fd2 body=391 status=ok
// SIG undefined FUN_147591fd2(void)

void FUN_147591fd2(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  byte bVar7;
  byte bVar8;
  longlong lVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  
  lVar9 = FUN_144a79cc8();
  if ((lVar9 != 0) && (lVar9 = *(longlong *)(param_1 + 0x390), lVar9 != 0)) {
    uVar1 = *(uint *)(lVar9 + 0x40);
    uVar14 = (ulonglong)(int)uVar1;
    if (uVar14 != 0) {
      plVar2 = *(longlong **)(lVar9 + 0x38);
      plVar3 = (longlong *)*plVar2;
      bVar7 = 1;
      if ((plVar3 != (longlong *)0x0) && ((*(uint *)(plVar3 + 1) >> 0x1e & 1) == 0)) {
        bVar7 = (**(code **)(*plVar3 + 0x2b0))(plVar3,0);
        bVar7 = bVar7 ^ 1;
      }
      iVar11 = 0;
      uVar13 = 0;
LAB_147592058:
      do {
        iVar6 = (int)uVar13;
        uVar13 = (ulonglong)(iVar6 + 1U);
        if ((int)(iVar6 + 1U) < (int)uVar1) {
          uVar13 = (longlong)iVar6 + 1;
          bVar5 = true;
          do {
            plVar3 = (longlong *)plVar2[uVar13];
            if ((plVar3 == (longlong *)0x0) || ((*(uint *)(plVar3 + 1) >> 0x1e & 1) != 0)) {
              if ((bVar7 & 1) == 0) goto LAB_1475920c2;
            }
            else {
              bVar8 = (**(code **)(*plVar3 + 0x2b0))(plVar3,0);
              if ((bVar7 & 1) == bVar8) goto LAB_1475920a8;
            }
            uVar13 = uVar13 + 1;
            bVar5 = (longlong)uVar13 < (longlong)uVar14;
          } while (uVar13 != uVar14);
          uVar13 = (ulonglong)uVar1;
LAB_1475920a8:
          if ((bVar7 & 1) != 0) {
            bVar7 = 0;
            if (!bVar5) break;
            goto LAB_147592058;
          }
        }
        else {
          if ((bVar7 & 1) != 0) break;
          bVar5 = false;
        }
LAB_1475920c2:
        iVar12 = (int)uVar13 - iVar6;
        if (iVar11 != iVar6) {
          memmove(plVar2 + iVar11,plVar2 + iVar6,(longlong)iVar12 << 3);
        }
        iVar11 = iVar11 + iVar12;
        bVar7 = 1;
      } while (bVar5);
      *(int *)(lVar9 + 0x40) = iVar11;
    }
    uVar10 = FUN_1447210f0(param_1);
    FUN_14759215a(uVar10);
    lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x390) + 0x40);
    if (lVar9 != 0) {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x390) + 0x38);
      lVar15 = 0;
      do {
        FUN_147592202(&DAT_14cab4128,*(undefined8 *)(lVar4 + lVar15));
        lVar15 = lVar15 + 8;
      } while (lVar9 * 8 != lVar15);
    }
  }
  return;
}



// FUNCTION 14759215a FUN_14759215a body=167 status=ok
// SIG undefined FUN_14759215a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14759215a(undefined8 param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cab4160) {
    FUN_144b3d300(&DAT_14cab4160);
    if (DAT_14cab4160 == -1) {
      DAT_14cab4128 = 0;
      _DAT_14cab4130 = 0;
      _DAT_14cab4138 = 2;
      _DAT_14cab413c = 0;
      ram0x00014cab4144 = 0;
      _DAT_14cab414c = 0;
      _DAT_14cab4150 = 2;
      DAT_14cab4158 = 0;
      atexit((_func_5014 *)&LAB_1432e1d54);
      _Init_thread_footer(&DAT_14cab4160);
    }
  }
  DAT_14cab4158 = param_1;
  return &DAT_14cab4128;
}



// FUNCTION 147592202 FUN_147592202 body=205 status=ok
// SIG undefined FUN_147592202(void)

undefined8 FUN_147592202(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((((param_2 != (longlong *)0x0) && (DAT_14cb0d2b0 != (longlong *)0x0)) &&
      (cVar1 = (**(code **)(*DAT_14cb0d2b0 + 0x2b0))(), cVar1 != '\0')) &&
     (lVar2 = FUN_140e3e8a6(DAT_14cb0d2b0), lVar2 != 0)) {
    plVar3 = (longlong *)FUN_1475939b4(lVar2,*(undefined8 *)(param_1 + 0x30));
    if ((longlong)(int)plVar3[1] != 0) {
      lVar4 = *plVar3;
      lVar5 = (longlong)(int)plVar3[1] << 3;
      do {
        cVar1 = FUN_14759f7be(lVar4,param_2);
        if (cVar1 != '\0') {
          return 0;
        }
        lVar4 = lVar4 + 8;
        lVar5 = lVar5 + -8;
      } while (lVar5 != 0);
    }
    (**(code **)(*param_2 + 0x2f0))(param_2,*(undefined8 *)(param_1 + 0x30));
    FUN_147593800(lVar2,*(undefined8 *)(param_1 + 0x30),param_2);
    (**(code **)(*param_2 + 0x300))(param_2,*(undefined8 *)(param_1 + 0x30));
    FUN_14759f344(param_1 + 0x18,0,param_2);
    return 1;
  }
  return 0;
}



// FUNCTION 1475922d0 FUN_1475922d0 body=87 status=ok
// SIG undefined FUN_1475922d0(void)

void FUN_1475922d0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  FUN_1401bc218(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  FUN_1401bc218(param_1 + 0x20);
  return;
}



// FUNCTION 147592328 FUN_147592328 body=175 status=ok
// SIG undefined FUN_147592328(void)

int * FUN_147592328(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144729dda(param_2);
  if (cVar1 != '\0') {
    local_28 = *param_2;
    if ((longlong)*(int *)(param_1 + 0x18) != 0) {
      piVar4 = *(int **)(param_1 + 0x10);
      lVar3 = (longlong)*(int *)(param_1 + 0x18) * 200;
      do {
        cVar1 = FUN_144729dda(&local_28);
        if (cVar1 != '\0') {
          lVar2 = FUN_14479d2ce(&local_28);
          if ((((*piVar4 == *(int *)(lVar2 + 0x2c)) && (piVar4[1] == *(int *)(lVar2 + 0x30))) &&
              (piVar4[2] == *(int *)(lVar2 + 0x34))) && (piVar4[3] == *(int *)(lVar2 + 0x38)))
          goto LAB_1475923b6;
        }
        piVar4 = piVar4 + 0x32;
        lVar3 = lVar3 + -200;
      } while (lVar3 != 0);
    }
  }
  piVar4 = (int *)0x0;
LAB_1475923b6:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return piVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475923d8 FUN_1475923d8 body=436 status=ok
// SIG undefined FUN_1475923d8(void)

void FUN_1475923d8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  byte *pbVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar7 = *(int *)(param_2 + 0x1c);
  if ((-1 < (longlong)iVar7) && (iVar7 < *(int *)(*(longlong *)(param_1 + 0x20) + 0x10))) {
    local_58 = *(undefined8 *)
                (*(longlong *)(*(longlong *)(param_1 + 0x20) + 8) + (longlong)iVar7 * 8);
    cVar4 = FUN_144729dda();
    if (cVar4 != '\0') {
      plVar6 = (longlong *)FUN_14479d2ce(&local_58);
      cVar4 = (**(code **)(*plVar6 + 0x2c0))(plVar6);
      if (cVar4 != '\0') {
        pbVar2 = *(byte **)(*(longlong *)(param_2 + 0x10) + 0x20);
        if (((pbVar2 != (byte *)0x0) && ((*pbVar2 & 1) != 0)) &&
           (*(char *)(*(longlong *)(param_2 + 0x10) + 0xb) != '\0')) {
          plVar6 = (longlong *)FUN_14479d2ce(&local_58);
          (**(code **)(*plVar6 + 0x2a8))(plVar6,0);
        }
      }
      *(undefined1 *)(param_2 + 0xc0) = 0;
      plVar6 = (longlong *)(param_2 + 0x70);
      lVar1 = param_2 + 0x80;
      local_50 = 0x100000000;
      local_40 = 0xffffffff;
      uStack_38 = 0;
      uStack_48 = lVar1;
      if (*(int *)(param_2 + 0x98) == 0) {
        iVar7 = 0;
      }
      else {
        FUN_1449c0562(&local_50);
        iVar7 = *(int *)(param_2 + 0x98);
      }
      uStack_60 = CONCAT44(uStack_34,uStack_38);
      local_68 = local_40;
      uVar3 = local_68;
      local_78 = (undefined4)local_50;
      uStack_74 = local_50._4_4_;
      uStack_70 = (undefined4)uStack_48;
      uStack_6c = uStack_48._4_4_;
      local_68._4_4_ = (int)((ulonglong)local_40 >> 0x20);
      iVar5 = local_68._4_4_;
      local_80 = plVar6;
      if ((local_68._4_4_ != iVar7) || (local_68 = uVar3, uStack_48 != lVar1)) {
        do {
          local_68 = uVar3;
          iVar5 = *(int *)(*local_80 + (longlong)iVar5 * 0xc);
          if ((-1 < (longlong)iVar5) && (iVar5 < *(int *)(param_1 + 0x18))) {
            FUN_1475923d8(param_1,(longlong)iVar5 * 200 + *(longlong *)(param_1 + 0x10));
          }
          local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~uStack_74);
          FUN_1449c0562(&local_78);
          iVar5 = local_68._4_4_;
          uVar3 = local_68;
        } while (local_80 != plVar6 ||
                 (CONCAT44(uStack_6c,uStack_70) != lVar1 || local_68._4_4_ != iVar7));
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14759258e FUN_14759258e body=170 status=ok
// SIG undefined FUN_14759258e(void)

void FUN_14759258e(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14759c129(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_14759e548(param_1 + 0x10);
  }
  lVar2 = FUN_14479d2ce(*(undefined8 *)(param_1 + 0x20));
  if (lVar2 != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x10);
    if (iVar1 != 0) {
      local_30 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 8);
      local_28 = iVar1;
      uVar3 = FUN_14479d2ce();
      FUN_147592639(uVar3,&local_30,param_1 + 0x10);
      *(undefined4 *)(param_1 + 0x28) = 1;
      FUN_1432e1c96(param_1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147592639 FUN_147592639 body=130 status=ok
// SIG undefined FUN_147592639(void)

void FUN_147592639(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14759c129(*param_3,*(undefined4 *)(param_3 + 1));
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) != 0) {
    FUN_14759e548(param_3);
  }
  if ((param_1 != 0) && (*(int *)(param_2 + 8) != 0)) {
    local_38 = param_1;
    local_30 = param_2;
    local_28 = param_3;
    FUN_147592864();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475926bc FUN_1475926bc body=319 status=ok
// SIG undefined FUN_1475926bc(void)

undefined8 FUN_1475926bc(longlong param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_14759e578(param_2,0);
  }
  lVar4 = FUN_14479d2ce(*(undefined8 *)(param_1 + 0x20));
  if (lVar4 != 0) {
    if (*(int *)(param_1 + 0x28) == 0) {
      FUN_14759258e(param_1);
    }
    uVar1 = *(uint *)(param_1 + 0x18);
    uVar5 = (ulonglong)uVar1;
    if (uVar5 != 0) {
      if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar5);
      }
      lVar4 = *(longlong *)(param_1 + 0x20);
      if (*(int *)((longlong)param_2 + 0xc) < (int)uVar1) {
        FUN_14759e578(param_2);
        uVar5 = (ulonglong)*(int *)(param_1 + 0x18);
        if (uVar5 != 0) {
          lVar8 = *(longlong *)(param_1 + 0x10);
          goto LAB_147592735;
        }
      }
      else {
        lVar8 = *(longlong *)(param_1 + 0x10);
LAB_147592735:
        lVar7 = uVar5 * 200 + lVar8;
        do {
          uVar6 = *(undefined8 *)(*(longlong *)(lVar4 + 8) + (longlong)*(int *)(lVar8 + 0x1c) * 8);
          local_48 = uVar6;
          cVar3 = FUN_144729dda(&local_48);
          if (cVar3 != '\0') {
            iVar2 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar2 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
              FUN_14759e5d8(param_2,iVar2);
            }
            *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = uVar6;
          }
          lVar8 = lVar8 + 200;
        } while (lVar8 != lVar7);
      }
      uVar6 = 1;
      goto LAB_14759278c;
    }
  }
  uVar6 = 0;
LAB_14759278c:
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 1475927fe FUN_1475927fe body=41 status=ok
// SIG undefined FUN_1475927fe(void)

void FUN_1475927fe(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_14759e578();
  return;
}



// FUNCTION 147592828 FUN_147592828 body=59 status=ok
// SIG undefined FUN_147592828(void)

void FUN_147592828(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0;
  FUN_14759c129(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  FUN_14759e548(param_1 + 0x10);
  return;
}



// FUNCTION 147592864 FUN_147592864 body=110 status=ok
// SIG undefined FUN_147592864(void)

void FUN_147592864(longlong *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)param_1[2];
  iVar1 = *(int *)((longlong)puVar2 + 0xc);
  FUN_14759c129(*puVar2,*(undefined4 *)(puVar2 + 1));
  *(undefined4 *)(puVar2 + 1) = 0;
  if ((iVar1 < 0) && (*(int *)((longlong)puVar2 + 0xc) != 0)) {
    FUN_14759e548(puVar2);
  }
  if ((*param_1 != 0) && (*(int *)(param_1[1] + 8) != 0)) {
    FUN_14759be82(param_1);
    FUN_14759beec(param_1);
    FUN_1432e42f6(param_1);
    return;
  }
  return;
}



// FUNCTION 1475928d2 FUN_1475928d2 body=344 status=ok
// SIG undefined FUN_1475928d2(void)

void FUN_1475928d2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  void *local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = (void *)*param_2;
  local_50 = (int)param_2[1];
  FUN_147592639(0,&local_58,&local_48);
  uVar4 = 0;
  if ((int)uStack_40 != 0) {
    local_58 = (void *)0x0;
    local_50 = (int)param_2[1];
    lVar5 = (longlong)local_50;
    pvVar3 = (void *)*param_2;
    if (lVar5 == 0) {
      local_4c = 0;
    }
    else {
      FUN_14759ba5a(&local_58,local_50,0);
      memcpy(local_58,pvVar3,lVar5 << 3);
    }
    FUN_1475927fe(param_2,(int)uStack_40);
    lVar5 = (longlong)(int)uStack_40;
    if (0 < lVar5) {
      lVar6 = 0;
      do {
        pvVar3 = local_58;
        iVar1 = *(int *)(local_48 + 0x1c + lVar6);
        if ((-1 < (longlong)iVar1) && (iVar1 < local_50)) {
          iVar2 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
            FUN_14759e5d8(param_2,iVar2);
          }
          *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) =
               *(undefined8 *)((longlong)pvVar3 + (longlong)iVar1 * 8);
        }
        lVar6 = lVar6 + 200;
      } while (lVar5 * 200 - lVar6 != 0);
    }
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
    uVar4 = (int)uStack_40;
  }
  FUN_14759c129(local_48,uVar4);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147592a46 FUN_147592a46 body=57 status=ok
// SIG undefined FUN_147592a46(void)

void FUN_147592a46(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a49b720;
  FUN_144a6a7e8(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760f98(param_1);
  return;
}



// FUNCTION 147592a80 FUN_147592a80 body=148 status=ok
// SIG undefined FUN_147592a80(void)

undefined8 * FUN_147592a80(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  FUN_141067f4a();
  *param_1 = &PTR_FUN_14a49b720;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(byte *)((longlong)param_1 + 10) = *(byte *)((longlong)param_1 + 10) | 0x26;
  if (0 < *(int *)(param_2 + 0x38)) {
    plVar1 = *(longlong **)(param_2 + 0x30);
    *(undefined4 *)(param_1 + 7) = 1;
    FUN_14060a7c0(param_1 + 6,0);
    plVar2 = (longlong *)param_1[6];
    lVar3 = *plVar1;
    *plVar2 = lVar3;
    plVar2[2] = 0;
    if (lVar3 != 0) {
      plVar4 = plVar1 + 4;
      if ((longlong *)plVar1[2] != (longlong *)0x0) {
        plVar4 = (longlong *)plVar1[2];
      }
      (**(code **)*plVar4)(plVar4,plVar2 + 2);
    }
  }
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  return param_1;
}



// FUNCTION 147592b14 FUN_147592b14 body=73 status=ok
// SIG undefined FUN_147592b14(void)

void FUN_147592b14(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    puVar5 = *(undefined8 **)(param_1 + 0x30);
    puVar4 = puVar5 + (longlong)*(int *)(param_1 + 0x38) * 8;
    do {
      pcVar1 = (code *)*puVar5;
      plVar3 = puVar5 + 4;
      if ((longlong *)puVar5[2] != (longlong *)0x0) {
        plVar3 = (longlong *)puVar5[2];
      }
      uVar2 = (**(code **)(*plVar3 + 8))();
      (*pcVar1)(uVar2);
      puVar5 = puVar5 + 8;
    } while (puVar5 != puVar4);
  }
  return;
}



// FUNCTION 147592b5e FUN_147592b5e body=134 status=ok
// SIG undefined FUN_147592b5e(void)

void FUN_147592b5e(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (*(int *)(param_1 + 0x38) == 0) {
    *(undefined4 *)(param_1 + 0x38) = 1;
    if (*(int *)(param_1 + 0x3c) == 0) {
      FUN_14060a7c0((longlong *)(param_1 + 0x30),0);
    }
    plVar3 = *(longlong **)(param_1 + 0x30);
    lVar1 = *param_2;
    *plVar3 = lVar1;
    plVar3[2] = 0;
    if (lVar1 != 0) {
      plVar2 = param_2 + 4;
      if ((longlong *)param_2[2] != (longlong *)0x0) {
        plVar2 = (longlong *)param_2[2];
      }
      (**(code **)*plVar2)(plVar2,plVar3 + 2);
    }
  }
  if (*param_2 != 0) {
    plVar3 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_2[2];
    }
                    /* WARNING: Could not recover jumptable at 0x000147592b8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))(plVar3);
    return;
  }
  return;
}



// FUNCTION 147592be4 FUN_147592be4 body=194 status=ok
// SIG undefined FUN_147592be4(void)

undefined8 FUN_147592be4(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144729dda(param_1 + 0x28);
  if (cVar1 == '\0') {
    FUN_140002266(param_2,L"FConstraintTickFunction::Tick[%p]",param_1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x28);
  local_28 = *(undefined8 *)(lVar2 + 0x18);
  FUN_1400021e4(&local_28,&local_38);
  puVar3 = local_38;
  if (local_30 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"FConstraintTickFunction::Tick[%p] (%s)",param_1,puVar3);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147592ca8 FUN_147592ca8 body=283 status=ok
// SIG undefined FUN_147592ca8(void)

void FUN_147592ca8(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
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
  *(char *)(param_1 + 0x28) = (char)param_2;
  plVar1 = (longlong *)(param_1 + 0x40);
  lVar2 = param_1 + 0x50;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = lVar2;
  if (*(int *)(param_1 + 0x68) == 0) {
    iVar4 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar4 = *(int *)(param_1 + 0x68);
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_80 = plVar1;
  if ((iStack_44 != iVar4) || (uStack_50 != lVar2)) {
    do {
      lVar5 = (longlong)iStack_64 * 0x50 + *local_80;
      cVar3 = FUN_144729dda(lVar5);
      if (cVar3 != '\0') {
        FUN_140cbebe8(lVar5 + 8,param_2);
      }
      local_68 = local_68 & ~uStack_74;
      FUN_1449c0562(&local_78);
    } while (local_80 != plVar1 || (CONCAT44(uStack_6c,uStack_70) != lVar2 || iStack_64 != iVar4));
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147592dc8 FUN_147592dc8 body=335 status=ok
// SIG undefined FUN_147592dc8(void)

void FUN_147592dc8(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
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
  plVar1 = (longlong *)(param_1 + 0x40);
  lVar2 = param_1 + 0x50;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0x68) == 0) {
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar7 = *(int *)(param_1 + 0x68);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar1;
  if ((iStack_4c != iVar7) || (uStack_58 != lVar2)) {
    do {
      lVar8 = (longlong)iStack_6c * 0x50 + *local_88;
      cVar4 = FUN_144729dda(lVar8);
      if ((cVar4 != '\0') && ((longlong)*(int *)(lVar8 + 0x40) != 0)) {
        puVar9 = *(undefined8 **)(lVar8 + 0x38);
        puVar10 = puVar9 + (longlong)*(int *)(lVar8 + 0x40) * 8;
        do {
          pcVar3 = (code *)*puVar9;
          plVar6 = puVar9 + 4;
          if ((longlong *)puVar9[2] != (longlong *)0x0) {
            plVar6 = (longlong *)puVar9[2];
          }
          uVar5 = (**(code **)(*plVar6 + 8))();
          (*pcVar3)(uVar5);
          puVar9 = puVar9 + 8;
        } while (puVar9 != puVar10);
      }
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar2 || iStack_6c != iVar7));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147592f18 FUN_147592f18 body=46 status=ok
// SIG undefined FUN_147592f18(void)

void FUN_147592f18(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = FUN_1411c515e();
  FUN_14092e757(uVar2,param_1,param_2,uVar1);
  return;
}



// FUNCTION 147592f46 FUN_147592f46 body=97 status=ok
// SIG undefined FUN_147592f46(void)

void FUN_147592f46(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  FUN_1446e0b6e();
  lVar3 = param_1[8];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = param_1[7];
    lVar5 = 0;
    do {
      plVar2 = *(longlong **)(lVar1 + lVar5);
      if (plVar2 != (longlong *)0x0) {
        uVar4 = (**(code **)(*param_1 + 0x180))(param_1);
        (**(code **)(*plVar2 + 0x2f0))(plVar2,uVar4);
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar5);
  }
  return;
}



// FUNCTION 147592fa8 FUN_147592fa8 body=340 status=ok
// SIG undefined FUN_147592fa8(void)

void FUN_147592fa8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(param_2 + 0x1c8);
  if (lVar1 != 0) {
    local_58 = 0;
    uStack_50 = 0;
    if (0 < *(int *)(param_1 + 0x40)) {
      lVar8 = 0;
      do {
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x38) + lVar8 * 8);
        if (((plVar2 != (longlong *)0x0) && ((*(uint *)(plVar2 + 1) >> 0x1e & 1) == 0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x2c8))(), cVar4 == '\0')) {
          plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x38) + lVar8 * 8);
          local_60 = 0;
          FUN_14485c47a(&local_60,lVar1);
          cVar4 = (**(code **)(*plVar2 + 0x2e0))(plVar2,local_60);
          uVar3 = uStack_50;
          if (cVar4 != '\0') {
            lVar7 = (longlong)(int)uStack_50;
            uVar5 = (int)uStack_50 + 1;
            uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
            if (uStack_50._4_4_ < uVar5) {
              FUN_1446f48e2(&local_58,uVar3 & 0xffffffff);
            }
            *(int *)(local_58 + lVar7 * 4) = (int)lVar8;
          }
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 < *(int *)(param_1 + 0x40));
      if ((int)uStack_50 != 0) {
        uVar6 = FUN_1447210f0(param_2);
        FUN_14759215a(uVar6);
        if (0 < (int)uStack_50) {
          uVar5 = (int)uStack_50 + 1;
          do {
            FUN_1475930fe(&DAT_14cab4128,uVar5 - 2,1);
            uVar5 = uVar5 - 1;
          } while (1 < uVar5);
        }
      }
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475930fe FUN_1475930fe body=369 status=ok
// SIG undefined FUN_1475930fe(void)

undefined8 FUN_1475930fe(longlong param_1,int param_2,uint param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48 [2];
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14cb0d2b0 != (longlong *)0x0) {
    cVar1 = (**(code **)(*DAT_14cb0d2b0 + 0x2b0))();
    if (cVar1 != '\0') {
      lVar2 = FUN_140e3e8a6(DAT_14cb0d2b0);
      if (lVar2 != 0) {
        FUN_147593a3e(lVar2,local_48,*(undefined8 *)(param_1 + 0x30));
        FUN_14479d2ce(local_48[0] + (longlong)param_2 * 8);
        lVar3 = FUN_14479d2ce((longlong)param_2 * 8 + local_48[0]);
        FUN_14759f344(param_1 + 0x18,2 - (param_3 & 0xff),lVar3);
        FUN_147593c14(lVar2,*(undefined8 *)(param_1 + 0x30),lVar3,param_3);
        lVar2 = FUN_147593476(param_1);
        if ((lVar2 != 0) && ((longlong)*(int *)(lVar2 + 0x40) != 0)) {
          lVar5 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar2 + 0x38) + lVar5) == lVar3) {
              local_50 = lVar3;
              if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
                FUN_1456cec3c(lVar3);
              }
              local_38 = &local_50;
              FUN_14759e380(lVar2 + 0x38);
              FUN_147593cca(lVar2 + 0x29,lVar2,lVar3,param_3);
              if (*(int *)(lVar2 + 0x40) == 0) {
                FUN_147593576(param_1);
              }
              break;
            }
            lVar5 = lVar5 + 8;
          } while ((longlong)*(int *)(lVar2 + 0x40) * 8 != lVar5);
        }
        if (local_48[0] != 0) {
          FUN_1400020a8();
        }
        uVar4 = 1;
        goto LAB_14759314c;
      }
    }
  }
  uVar4 = 0;
LAB_14759314c:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147593270 FUN_147593270 body=260 status=ok
// SIG undefined FUN_147593270(void)

void FUN_147593270(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x30) == 0) {
    local_38 = (undefined8 *)0x0;
    local_30 = 0;
    FUN_1446efa72(&local_38,0,3,0x10);
    puVar1 = local_38;
    local_30 = 3;
    *local_38 = &PTR_LAB_14a3a3510;
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
    local_38[2] = lVar3;
    *local_38 = &PTR_FUN_14a49f820;
    local_38[3] = 0;
    FUN_14485c47a(local_38 + 3,param_1);
    puVar1[4] = FUN_147592fa8;
    FUN_1417f9b76(param_2,&local_40,&local_38);
    *(undefined8 *)(param_1 + 0x30) = local_40;
    FUN_1449db362(&local_38);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147593376 FUN_147593376 body=84 status=ok
// SIG undefined FUN_147593376(void)

void FUN_147593376(void)

{
  FUN_144760e21(DAT_14cab4140,DAT_14cab4148);
  if (DAT_14cab4140 != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(DAT_14cab4128,DAT_14cab4130);
  if (DAT_14cab4128 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1475933ca FUN_1475933ca body=170 status=ok
// SIG undefined FUN_1475933ca(void)

longlong FUN_1475933ca(void)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined1 local_98 [64];
  longlong local_58;
  longlong *local_48;
  longlong local_38 [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = FUN_147593476(&DAT_14cab4128);
  uVar1 = DAT_14cab4158;
  if (lVar2 == 0) {
    FUN_1411371f6(local_98);
    uVar3 = FUN_145b32d30();
    local_a8 = local_98;
    lVar2 = FUN_141137228(uVar1,uVar3,0,0);
    if (local_58 != 0) {
      if (local_48 == (longlong *)0x0) {
        local_48 = local_38;
      }
      (**(code **)(*local_48 + 0x10))();
    }
    lVar2 = *(longlong *)(lVar2 + 0x390);
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147593476 FUN_147593476 body=256 status=ok
// SIG undefined FUN_147593476(void)

longlong FUN_147593476(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  byte bVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x30);
    iVar2 = *(int *)(lVar3 + 0xa8);
    if ((longlong)iVar2 != 0) {
      lVar4 = *(longlong *)(lVar3 + 0xa0);
      uVar10 = 0;
      lVar9 = 0;
      do {
        lVar5 = *(longlong *)(lVar4 + uVar10);
        if ((lVar5 != 0) && ((*(uint *)(lVar5 + 8) >> 0x1e & 1) == 0)) {
          lVar7 = FUN_145b32d30();
          if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
            if ((int)(~uVar10 >> 3) == 0) {
              return 0;
            }
            if (*(longlong *)(*(longlong *)(lVar3 + 0xa0) + (lVar9 >> 0x20) * 8) == 0) {
              return 0;
            }
            plVar1 = (longlong *)(*(longlong *)(lVar3 + 0xa0) + (lVar9 >> 0x20) * 8);
            uVar8 = FUN_145b32d30();
            bVar6 = FUN_144a7ca96(plVar1,uVar8);
            lVar3 = *plVar1;
            if ((lVar3 != 0 & bVar6) != 1) {
              return 0;
            }
            lVar3 = *(longlong *)(lVar3 + 0x390);
            if (DAT_14c950c29 == '\x01') {
              if (lVar3 != 0) {
                FUN_1456cec3c(lVar3);
                return lVar3;
              }
              return 0;
            }
            return lVar3;
          }
        }
        lVar9 = lVar9 + 0x100000000;
        uVar10 = uVar10 + 8;
        if ((longlong)iVar2 * 8 == uVar10) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}



// FUNCTION 147593576 FUN_147593576 body=308 status=ok
// SIG undefined FUN_147593576(void)

void FUN_147593576(longlong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x30);
    local_58 = 0;
    uStack_50 = 0;
    lVar8 = (longlong)*(int *)(lVar6 + 0xa8);
    if (lVar8 != 0) {
      lVar6 = *(longlong *)(lVar6 + 0xa0);
      lVar7 = 0;
      do {
        lVar5 = *(longlong *)(lVar6 + lVar7);
        if ((lVar5 != 0) && ((*(uint *)(lVar5 + 8) >> 0x1e & 1) == 0)) {
          lVar4 = FUN_145b32d30();
          uVar2 = uStack_50;
          if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
            uVar1 = *(undefined8 *)(lVar6 + lVar7);
            lVar5 = (longlong)(int)uStack_50;
            uVar3 = (int)uStack_50 + 1;
            uStack_50 = CONCAT44(uStack_50._4_4_,uVar3);
            if (uStack_50._4_4_ < uVar3) {
              FUN_1447d05f2(&local_58,uVar2 & 0xffffffff);
            }
            *(undefined8 *)(local_58 + lVar5 * 8) = uVar1;
          }
        }
        lVar5 = local_58;
        lVar7 = lVar7 + 8;
      } while (lVar8 * 8 != lVar7);
      lVar6 = (longlong)(int)uStack_50;
      if (lVar6 != 0) {
        lVar8 = 0;
        do {
          FUN_1412f3774(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(lVar5 + lVar8),1,1);
          lVar8 = lVar8 + 8;
        } while (lVar6 * 8 != lVar8);
      }
      if (local_58 != 0) {
        FUN_1400020a8(local_58);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475936ac FUN_1475936ac body=204 status=ok
// SIG undefined FUN_1475936ac(void)

void FUN_1475936ac(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  lVar1 = FUN_1475933ca();
  if (lVar1 == 0) {
    return;
  }
  iVar3 = *(int *)(lVar1 + 0x40);
  if ((longlong)iVar3 != 0) {
    lVar2 = 0;
    do {
      if (*(longlong **)(*(longlong *)(lVar1 + 0x38) + lVar2) == param_1) {
        return;
      }
      lVar2 = lVar2 + 8;
    } while ((longlong)iVar3 * 8 - lVar2 != 0);
  }
  if (DAT_14c950c29 == '\x01') {
    FUN_1456cec3c(param_1);
    iVar3 = *(int *)(lVar1 + 0x40);
  }
  *(uint *)(lVar1 + 0x40) = iVar3 + 1U;
  if (*(uint *)(lVar1 + 0x44) < iVar3 + 1U) {
    FUN_14759efbe((longlong *)(lVar1 + 0x38),iVar3);
  }
  *(longlong **)(*(longlong *)(lVar1 + 0x38) + (longlong)iVar3 * 8) = param_1;
  if (DAT_14c950c29 == '\x01') {
    FUN_1456cec3c(param_1);
  }
  (**(code **)(*param_1 + 0x170))(param_1,0,lVar1,0x10);
  FUN_147593778(lVar1 + 0x28,lVar1,param_1);
  return;
}



// FUNCTION 147593778 FUN_147593778 body=135 status=ok
// SIG undefined FUN_147593778(void)

void FUN_147593778(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14759f044(param_1,&local_40);
  if (local_40 != 0) {
    local_30 = param_2;
    local_28 = param_3;
    FUN_1447cd2ec();
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
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147593800 FUN_147593800 body=163 status=ok
// SIG undefined FUN_147593800(void)

void FUN_147593800(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar3 = FUN_145aa0e68();
  iVar4 = 0;
  if ((longlong)*(int *)(lVar3 + 0x10) != 0) {
    lVar5 = *(longlong *)(lVar3 + 8);
    lVar6 = (longlong)*(int *)(lVar3 + 0x10) << 3;
    do {
      cVar2 = FUN_14759f7be(lVar5,param_3);
      if (cVar2 != '\0') goto LAB_147593862;
      lVar5 = lVar5 + 8;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
    iVar4 = *(int *)(lVar3 + 0x10);
  }
  *(uint *)(lVar3 + 0x10) = iVar4 + 1U;
  if (*(uint *)(lVar3 + 0x14) < iVar4 + 1U) {
    FUN_14759e5d8(lVar3 + 8,iVar4);
  }
  puVar1 = (undefined8 *)(*(longlong *)(lVar3 + 8) + (longlong)iVar4 * 8);
  *puVar1 = 0;
  FUN_14485c47a(puVar1,param_3);
  FUN_14148aa64(lVar3);
LAB_147593862:
  FUN_14759556a(param_1 + 0x30,param_1,param_3);
  return;
}



// FUNCTION 1475938a4 FUN_1475938a4 body=270 status=ok
// SIG undefined FUN_1475938a4(void)

int FUN_1475938a4(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar9 = -1;
  if (((DAT_14cb0d2b0 != (longlong *)0x0) &&
      (cVar5 = (**(code **)(*DAT_14cb0d2b0 + 0x2b0))(), cVar5 != '\0')) &&
     (lVar6 = FUN_140e3e8a6(DAT_14cb0d2b0), lVar6 != 0)) {
    FUN_147593a3e(lVar6,&local_58,*(undefined8 *)(param_1 + 0x30));
    iVar9 = -1;
    if ((longlong)local_50 != 0) {
      iVar1 = *param_2;
      iVar2 = param_2[1];
      iVar3 = param_2[2];
      iVar4 = param_2[3];
      lVar8 = (longlong)local_50 << 3;
      iVar10 = 0;
      lVar6 = local_58;
      do {
        cVar5 = FUN_144729dda(lVar6);
        if (((cVar5 != '\0') && (lVar7 = FUN_14479d2ce(lVar6), *(int *)(lVar7 + 0x2c) == iVar1)) &&
           ((*(int *)(lVar7 + 0x30) == iVar2 &&
            ((*(int *)(lVar7 + 0x34) == iVar3 && (iVar9 = iVar10, *(int *)(lVar7 + 0x38) == iVar4)))
            ))) break;
        lVar6 = lVar6 + 8;
        iVar10 = iVar10 + 1;
        lVar8 = lVar8 + -8;
        iVar9 = -1;
      } while (lVar8 != 0);
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar9;
}



// FUNCTION 1475939b4 FUN_1475939b4 body=138 status=ok
// SIG undefined FUN_1475939b4(void)

undefined8 * FUN_1475939b4(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cab4240) {
    FUN_144b3d300(&DAT_14cab4240);
    if (DAT_14cab4240 == -1) {
      DAT_14cab4230 = 0;
      uRam000000014cab4238 = 0;
      atexit((_func_5014 *)&LAB_1432e20cc);
      _Init_thread_footer(&DAT_14cab4240);
    }
  }
  lVar1 = FUN_14759544a(param_1,param_2);
  puVar2 = &DAT_14cab4230;
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)(lVar1 + 8);
  }
  return puVar2;
}



// FUNCTION 147593a3e FUN_147593a3e body=226 status=ok
// SIG undefined FUN_147593a3e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_147593a3e(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cab4228) {
    FUN_144b3d300(&DAT_14cab4228);
    if (DAT_14cab4228 == -1) {
      DAT_14cab4218 = (void *)0x0;
      _DAT_14cab4220 = 0;
      atexit((_func_5014 *)&LAB_1432e20bb);
      _Init_thread_footer(&DAT_14cab4228);
    }
  }
  lVar2 = FUN_14759544a(param_1,param_3);
  if (lVar2 == 0) {
    *param_2 = 0;
    _Src = DAT_14cab4218;
    iVar1 = DAT_14cab4220;
  }
  else {
    *param_2 = 0;
    _Src = *(void **)(lVar2 + 8);
    iVar1 = *(int *)(lVar2 + 0x10);
  }
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_14759ba5a(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 << 3);
  }
  return param_2;
}



// FUNCTION 147593b20 FUN_147593b20 body=242 status=ok
// SIG undefined FUN_147593b20(void)

int FUN_147593b20(longlong param_1,longlong param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb0d2b0 != (longlong *)0x0) {
    cVar1 = (**(code **)(*DAT_14cb0d2b0 + 0x2b0))();
    if (cVar1 != '\0') {
      lVar2 = FUN_140e3e8a6(DAT_14cb0d2b0);
      if (lVar2 != 0) {
        FUN_147593a3e(lVar2,&local_48,*(undefined8 *)(param_1 + 0x30));
        iVar4 = 0;
        if ((longlong)local_40 != 0) {
          lVar5 = (longlong)local_40 << 3;
          lVar2 = local_48;
          do {
            cVar1 = FUN_144729dda(lVar2);
            if (cVar1 != '\0') {
              lVar3 = FUN_14479d2ce(lVar2);
              if (lVar3 == param_2) {
                if (iVar4 != 1) {
                  iVar4 = FUN_1475930fe(param_1,-iVar4,param_3);
                  goto LAB_147593be7;
                }
                break;
              }
            }
            lVar2 = lVar2 + 8;
            iVar4 = iVar4 + -1;
            lVar5 = lVar5 + -8;
          } while (lVar5 != 0);
          iVar4 = 0;
        }
LAB_147593be7:
        if (local_48 != 0) {
          FUN_1400020a8();
        }
        goto LAB_147593b71;
      }
    }
  }
  iVar4 = 0;
LAB_147593b71:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147593c14 FUN_147593c14 body=181 status=ok
// SIG undefined FUN_147593c14(void)

void FUN_147593c14(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1475955f2(param_1 + 0x31,param_1);
  (**(code **)(*param_3 + 0x2f8))(param_3,param_2);
  (**(code **)(*param_3 + 0x2b8))(param_3,0);
  lVar1 = FUN_1475954da(param_1,param_2);
  if (lVar1 != 0) {
    local_38 = 0;
    FUN_14485c47a(&local_38,param_3);
    local_30 = &local_38;
    FUN_14759fb36(lVar1 + 8);
    FUN_14148aa64(lVar1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147593cca FUN_147593cca body=145 status=ok
// SIG undefined FUN_147593cca(void)

void FUN_147593cca(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14759f1c4(param_1,&local_50);
  if (local_50 != 0) {
    local_40 = param_2;
    local_38 = param_3;
    local_30 = param_4;
    FUN_1447cd2ec();
  }
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
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147593d5c FUN_147593d5c body=41 status=ok
// SIG undefined FUN_147593d5c(void)

undefined8 FUN_147593d5c(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_1475938a4();
  if (iVar1 == -1) {
    return 0;
  }
  uVar2 = FUN_147593d86(param_1,iVar1);
  return uVar2;
}



// FUNCTION 147593d86 FUN_147593d86 body=167 status=ok
// SIG undefined FUN_147593d86(void)

undefined8 FUN_147593d86(longlong param_1,uint param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb0d2b0 != (longlong *)0x0) {
    cVar1 = (**(code **)(*DAT_14cb0d2b0 + 0x2b0))();
    if (cVar1 != '\0') {
      lVar2 = FUN_140e3e8a6(DAT_14cb0d2b0);
      if (lVar2 != 0) {
        FUN_147593a3e(lVar2,&local_28,*(undefined8 *)(param_1 + 0x30));
        uVar3 = 0;
        if ((-1 < (int)param_2) && ((int)param_2 < local_20)) {
          uVar3 = FUN_14479d2ce((ulonglong)param_2 * 8 + local_28);
        }
        if (local_28 != 0) {
          FUN_1400020a8();
        }
        goto LAB_147593dcc;
      }
    }
  }
  uVar3 = 0;
LAB_147593dcc:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147593e2e FUN_147593e2e body=1164 status=ok
// SIG undefined FUN_147593e2e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_147593e2e(longlong *param_1,int param_2,char param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  void *_Src;
  char cVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  uint uVar17;
  int iVar18;
  undefined1 auStack_d8 [36];
  uint local_b4;
  uint local_b0;
  uint local_ac;
  longlong local_a8;
  longlong local_a0;
  ulonglong local_98;
  longlong local_90;
  undefined8 *local_88;
  longlong *local_80;
  ulonglong local_78;
  longlong local_70;
  undefined8 *local_68;
  int local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cab4178) && (FUN_144b3d300(&DAT_14cab4178), DAT_14cab4178 == -1)) {
    DAT_14cab4168 = (void *)0x0;
    _DAT_14cab4170 = 0;
    atexit((_func_5014 *)&LAB_1432e1d59);
    _Init_thread_footer(&DAT_14cab4178);
  }
  if ((((param_2 == 0) || (DAT_14cb0d2b0 == (longlong *)0x0)) ||
      (cVar5 = (**(code **)(*DAT_14cb0d2b0 + 0x2b0))(), cVar5 == '\0')) ||
     (lVar8 = FUN_140e3e8a6(DAT_14cb0d2b0), lVar8 == 0)) {
    *param_1 = 0;
    uVar15 = _DAT_14cab4170;
    _Src = DAT_14cab4168;
    lVar8 = (longlong)DAT_14cab4170;
    *(int *)(param_1 + 1) = DAT_14cab4170;
    if (lVar8 != 0) {
      FUN_14759ba5a(param_1,uVar15 & 0xffffffff,0);
      memcpy((void *)*param_1,_Src,lVar8 << 3);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_d8);
    }
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_147593a3e(lVar8,&local_68,DAT_14cab4158);
    *param_1 = 0;
    param_1[1] = 0;
    if ((longlong)local_60 != 0) {
      lVar8 = (longlong)local_60 << 3;
      puVar16 = local_68;
      do {
        cVar5 = FUN_144729dda(puVar16);
        if (((cVar5 != '\0') && (lVar9 = FUN_14479d2ce(puVar16), lVar9 != 0)) &&
           ((*(uint *)(lVar9 + 8) >> 0x1e & 1) == 0)) {
          plVar10 = (longlong *)FUN_14479d2ce(puVar16);
          iVar6 = (**(code **)(*plVar10 + 0x2d8))(plVar10);
          if (iVar6 == param_2) {
            lVar9 = param_1[1];
            uVar7 = (int)lVar9 + 1;
            *(uint *)(param_1 + 1) = uVar7;
            if (*(uint *)((longlong)param_1 + 0xc) < uVar7) {
              FUN_14759e5d8(param_1);
            }
            *(undefined8 *)(*param_1 + (longlong)(int)lVar9 * 8) = *puVar16;
          }
        }
        puVar16 = puVar16 + 1;
        lVar8 = lVar8 + -8;
      } while (lVar8 != 0);
    }
    if (param_3 != '\0') {
      iVar6 = (int)param_1[1];
      uVar15 = (ulonglong)iVar6;
      lVar8 = *param_1;
      local_58 = &DAT_14cab4128;
      local_a8 = lVar8;
      local_80 = param_1;
      if (0 < (longlong)uVar15) {
        lVar9 = 0;
        do {
          if ((lVar9 + 1U < uVar15) &&
             (cVar5 = FUN_1432e4b0a(&local_58,lVar8 + 8,lVar8), cVar5 != '\0')) {
            uVar3 = *(undefined8 *)(local_a8 + lVar9 * 8);
            *(undefined8 *)(local_a8 + lVar9 * 8) = *(undefined8 *)(local_a8 + 8 + lVar9 * 8);
            *(undefined8 *)(local_a8 + 8 + lVar9 * 8) = uVar3;
          }
          lVar9 = lVar9 + 2;
          lVar8 = lVar8 + 0x10;
        } while ((int)lVar9 < iVar6);
        param_1 = local_80;
        if (2 < iVar6) {
          uVar11 = 2;
          local_78 = uVar15;
          do {
            local_b4 = (int)uVar11 * 2;
            local_70 = (longlong)(int)local_b4;
            lVar8 = 0;
            local_98 = uVar11;
            do {
              local_b0 = (int)local_78 - (int)lVar8;
              if ((int)local_b4 <= (int)local_b0) {
                local_b0 = local_b4;
              }
              local_90 = lVar8;
              if ((int)local_98 < (int)local_b0 && 0 < (int)local_98) {
                local_88 = local_58;
                local_a0 = local_a8 + lVar8 * 8;
                iVar6 = 0;
                uVar15 = local_98 & 0xffffffff;
                while( true ) {
                  local_ac = (uint)uVar15;
                  lVar8 = local_a0 + (longlong)(int)local_ac * 8;
                  local_50 = local_88;
                  iVar13 = 0;
                  if (local_ac - iVar6 != 0 && iVar6 <= (int)local_ac) {
                    lVar9 = local_a0 + (longlong)iVar6 * 8;
                    iVar13 = 0;
                    uVar7 = local_ac - iVar6;
                    do {
                      iVar18 = iVar13 + (uVar7 >> 1);
                      cVar5 = FUN_1432e4b0a(&local_50,lVar8,lVar9 + (longlong)iVar18 * 8);
                      if (cVar5 == '\0') {
                        iVar13 = iVar18 + (uVar7 & 1);
                      }
                      bVar4 = 1 < uVar7;
                      uVar7 = uVar7 >> 1;
                    } while (bVar4);
                  }
                  iVar13 = iVar13 + iVar6;
                  uVar15 = (ulonglong)local_ac;
                  iVar6 = local_ac - iVar13;
                  if (iVar6 == 0 || (int)local_ac < iVar13) break;
                  local_50 = local_88;
                  uVar7 = local_b0 - local_ac;
                  if (uVar7 == 0 || (int)local_b0 < (int)local_ac) {
                    iVar18 = 0;
                  }
                  else {
                    puVar16 = (undefined8 *)(local_a0 + (longlong)iVar13 * 8);
                    iVar18 = 0;
                    uVar15 = (ulonglong)uVar7;
                    do {
                      uVar15 = uVar15 >> 1;
                      uVar17 = iVar18 + (uint)uVar15;
                      cVar5 = FUN_1432e4b0a(&local_50,lVar8 + (ulonglong)uVar17 * 8,puVar16);
                      if (cVar5 != '\0') {
                        iVar18 = uVar17 + (uVar7 & 1);
                      }
                      bVar4 = 1 < uVar7;
                      uVar7 = (uint)uVar15;
                    } while (bVar4);
                    uVar15 = (ulonglong)(local_ac + iVar18);
                    if (0 < iVar18) {
                      puVar2 = puVar16 + (int)((local_ac + iVar18) - iVar13);
                      puVar14 = puVar16 + iVar6;
                      puVar12 = puVar16 + iVar6;
                      do {
                        while( true ) {
                          puVar1 = puVar14 + 1;
                          uVar3 = *puVar16;
                          *puVar16 = *puVar14;
                          puVar16 = puVar16 + 1;
                          *puVar14 = uVar3;
                          if (puVar1 == puVar2) break;
                          puVar14 = puVar1;
                          if (puVar16 == puVar12) {
                            puVar12 = puVar1;
                          }
                        }
                        puVar14 = puVar12;
                      } while (puVar16 != puVar12);
                    }
                  }
                  if (((int)local_b0 <= (int)uVar15) ||
                     (iVar6 = iVar13 + iVar18 + 1, (int)uVar15 <= iVar6)) break;
                }
              }
              lVar8 = local_90 + local_70;
            } while (lVar8 < (longlong)local_78);
            uVar11 = (ulonglong)local_b4;
            param_1 = local_80;
          } while ((int)local_b4 < (int)local_78);
        }
      }
    }
    if (local_68 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1475942be FUN_1475942be body=152 status=ok
// SIG undefined FUN_1475942be(void)

void FUN_1475942be(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (((param_2 == param_3) || (param_2 == 0)) || (param_3 == 0)) {
    return;
  }
  if ((longlong)*(int *)(param_3 + 0x18) != 0) {
    lVar2 = *(longlong *)(param_3 + 0x10);
    lVar1 = (longlong)*(int *)(param_3 + 0x18) << 4;
    do {
      if (*(longlong *)(lVar2 + 8) == param_2) {
        if (lVar2 != 0) {
          return;
        }
        break;
      }
      lVar2 = lVar2 + 0x10;
      lVar1 = lVar1 + -0x10;
    } while (lVar1 != 0);
  }
  if ((longlong)*(int *)(param_2 + 0x18) != 0) {
    lVar2 = *(longlong *)(param_2 + 0x10);
    lVar1 = (longlong)*(int *)(param_2 + 0x18) << 4;
    do {
      if (*(longlong *)(lVar2 + 8) == param_3) {
        if (lVar2 != 0) {
          FUN_1401c4d5c(param_2,param_1,param_3);
        }
        break;
      }
      lVar2 = lVar2 + 0x10;
      lVar1 = lVar1 + -0x10;
    } while (lVar1 != 0);
  }
  FUN_14082bc44(param_3,param_1,param_2);
  return;
}



// FUNCTION 147594356 FUN_147594356 body=86 status=ok
// SIG undefined FUN_147594356(void)

void FUN_147594356(void)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (DAT_14cb0d2b0 != (longlong *)0x0) {
    cVar1 = (**(code **)(*DAT_14cb0d2b0 + 0x2b0))();
    if (cVar1 != '\0') {
      lVar2 = FUN_140e3e8a6(DAT_14cb0d2b0);
      if (lVar2 != 0) {
        uVar3 = FUN_145aa0e68(lVar2,DAT_14cab4158);
        uVar3 = FUN_147595684(uVar3);
        FUN_147592828(uVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1475943ac FUN_1475943ac body=671 status=ok
// SIG undefined FUN_1475943ac(void)

void FUN_1475943ac(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auStack_88 [36];
  int local_64;
  longlong *local_60;
  int local_58;
  int local_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((param_1[1] != 0 || *param_1 != 0) || param_1[2] != 0) || param_1[3] != 0) {
    if ((((((param_2[1] != 0 || *param_2 != 0) || param_2[2] != 0) || param_2[3] != 0) &&
         (param_1[3] != param_2[3] ||
          (param_1[2] != param_2[2] || (param_1[1] != param_2[1] || *param_1 != *param_2)))) &&
        (DAT_14cb0d2b0 != (longlong *)0x0)) &&
       ((cVar4 = (**(code **)(*DAT_14cb0d2b0 + 0x2b0))(), cVar4 != '\0' &&
        (lVar5 = FUN_140e3e8a6(DAT_14cb0d2b0), lVar5 != 0)))) {
      local_60 = (longlong *)FUN_1475939b4(lVar5,DAT_14cab4158);
      if ((longlong)(int)local_60[1] != 0) {
        iVar1 = *param_1;
        iVar12 = param_1[1];
        iVar2 = param_1[2];
        local_64 = param_1[3];
        lVar13 = *local_60;
        lVar11 = (longlong)(int)local_60[1] << 3;
        iVar10 = 0;
        do {
          cVar4 = FUN_144729dda(lVar13);
          if (((cVar4 != '\0') && (lVar6 = FUN_14479d2ce(lVar13), *(int *)(lVar6 + 0x2c) == iVar1))
             && ((*(int *)(lVar6 + 0x30) == iVar12 &&
                 ((*(int *)(lVar6 + 0x34) == iVar2 && (*(int *)(lVar6 + 0x38) == local_64))))))
          goto LAB_1475944f0;
          lVar13 = lVar13 + 8;
          iVar10 = iVar10 + 1;
          lVar11 = lVar11 + -8;
        } while (lVar11 != 0);
        iVar10 = -1;
LAB_1475944f0:
        if ((longlong)(int)local_60[1] != 0) {
          lVar13 = *local_60;
          iVar1 = *param_2;
          local_64 = param_2[1];
          local_54 = param_2[2];
          local_58 = param_2[3];
          lVar6 = (longlong)(int)local_60[1] << 3;
          iVar12 = 0;
          lVar11 = 0;
          do {
            cVar4 = FUN_144729dda(lVar13);
            if ((((cVar4 != '\0') &&
                 (lVar7 = FUN_14479d2ce(lVar13), plVar3 = local_60, *(int *)(lVar7 + 0x2c) == iVar1)
                 ) && (*(int *)(lVar7 + 0x30) == local_64)) &&
               ((*(int *)(lVar7 + 0x34) == local_54 && (*(int *)(lVar7 + 0x38) == local_58)))) {
              if ((iVar10 != iVar12) && ((iVar10 != -1 && (iVar12 != -1)))) {
                lVar13 = FUN_14479d2ce((longlong)iVar10 * 8 + *local_60);
                local_50 = 0;
                FUN_14485c47a(&local_50,*(undefined8 *)(DAT_14cab4158 + 0x30));
                uVar8 = FUN_14759e65e(lVar13 + 0x40,
                                      (uint)((ulonglong)local_50 >> 0x20) ^ (uint)local_50,&local_50
                                     );
                lVar13 = FUN_14479d2ce((lVar11 >> 0x20) * 8 + *plVar3);
                local_50 = 0;
                FUN_14485c47a(&local_50,*(undefined8 *)(DAT_14cab4158 + 0x30));
                uVar9 = FUN_14759e65e(lVar13 + 0x40,
                                      (uint)((ulonglong)local_50 >> 0x20) ^ (uint)local_50,&local_50
                                     );
                FUN_1475942be(lVar5,uVar8,uVar9);
                FUN_147594356();
              }
              break;
            }
            lVar13 = lVar13 + 8;
            lVar11 = lVar11 + 0x100000000;
            iVar12 = iVar12 + 1;
            lVar6 = lVar6 + -8;
          } while (lVar6 != 0);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14759464c FUN_14759464c body=170 status=ok
// SIG undefined FUN_14759464c(void)

undefined8 * FUN_14759464c(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if (DAT_14cb0d2b0 != (longlong *)0x0) {
    cVar1 = (**(code **)(*DAT_14cb0d2b0 + 0x2b0))();
    if (cVar1 != '\0') {
      lVar2 = FUN_140e3e8a6(DAT_14cb0d2b0);
      if (lVar2 != 0) {
        puVar3 = (undefined8 *)FUN_1475939b4(lVar2,*(undefined8 *)(param_1 + 0x30));
        return puVar3;
      }
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cab4190) {
    FUN_144b3d300(&DAT_14cab4190);
    if (DAT_14cab4190 == -1) {
      DAT_14cab4180 = 0;
      uRam000000014cab4188 = 0;
      atexit((_func_5014 *)&LAB_1432e1d6a);
      _Init_thread_footer(&DAT_14cab4190);
    }
  }
  return &DAT_14cab4180;
}



// FUNCTION 1475946f6 FUN_1475946f6 body=606 status=ok
// SIG undefined FUN_1475946f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1475946f6(longlong param_1,longlong *param_2,byte param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  void *_Src;
  ulonglong uVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  
  if (((DAT_14cb0d2b0 == (longlong *)0x0) ||
      (cVar5 = (**(code **)(*DAT_14cb0d2b0 + 0x2b0))(), cVar5 == '\0')) ||
     (lVar8 = FUN_140e3e8a6(DAT_14cb0d2b0), lVar8 == 0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cab41a8) && (FUN_144b3d300(&DAT_14cab41a8), DAT_14cab41a8 == -1)) {
      DAT_14cab4198 = (void *)0x0;
      _DAT_14cab41a0 = 0;
      atexit((_func_5014 *)&LAB_1432e1d7b);
      _Init_thread_footer(&DAT_14cab41a8);
    }
    *param_2 = 0;
    uVar4 = _DAT_14cab41a0;
    _Src = DAT_14cab4198;
    lVar8 = (longlong)DAT_14cab41a0;
    *(int *)(param_2 + 1) = DAT_14cab41a0;
    if (lVar8 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      FUN_14759ba5a(param_2,uVar4 & 0xffffffff,0);
      memcpy((void *)*param_2,_Src,lVar8 << 3);
    }
  }
  else {
    if ((DAT_14c761010 & param_3) == 1) {
      *param_2 = 0;
      param_2[1] = 0;
      uVar9 = FUN_145aa0e68(lVar8,*(undefined8 *)(param_1 + 0x30));
      uVar9 = FUN_147595684(uVar9);
      cVar5 = FUN_1475926bc(uVar9,param_2);
      if (cVar5 != '\0') {
        return param_2;
      }
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
    }
    FUN_147593a3e(lVar8,param_2,*(undefined8 *)(param_1 + 0x30));
    iVar1 = (int)param_2[1];
    lVar8 = (longlong)iVar1;
    if (lVar8 != 0) {
      lVar2 = *param_2;
      bVar6 = FUN_144a76f74(lVar2,1,0);
      iVar12 = 0;
      iVar13 = 0;
      do {
        lVar11 = (longlong)iVar13;
        iVar3 = iVar13 + 1;
        if (iVar13 + 1 < iVar1) {
          iVar3 = iVar1;
        }
        lVar16 = lVar2 + 8 + lVar11 * 8;
        iVar14 = iVar13;
        lVar10 = lVar11;
        do {
          lVar10 = lVar10 + 1;
          iVar15 = iVar3;
          if (lVar8 <= lVar10) break;
          bVar7 = FUN_144a76f74(lVar16,1,0);
          iVar14 = iVar14 + 1;
          lVar16 = lVar16 + 8;
          iVar15 = iVar14;
        } while ((bVar6 & 1) == bVar7);
        if ((bVar6 & 1) == 0) {
          if (iVar12 != iVar13) {
            memmove((void *)(lVar2 + (longlong)iVar12 * 8),(void *)(lVar2 + lVar11 * 8),
                    (longlong)(iVar15 - iVar13) << 3);
          }
          iVar12 = iVar12 + (iVar15 - iVar13);
        }
        iVar13 = iVar15;
        bVar6 = bVar6 ^ 1;
      } while (lVar10 < lVar8);
      *(int *)(param_2 + 1) = iVar12;
    }
    if (param_3 != 0) {
      FUN_1475928d2(*(undefined8 *)(param_1 + 0x30),param_2);
    }
  }
  return param_2;
}



// FUNCTION 147594954 FUN_147594954 body=159 status=ok
// SIG undefined FUN_147594954(void)

void FUN_147594954(undefined8 param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb0d2b0 != (longlong *)0x0) {
    cVar1 = (**(code **)(*DAT_14cb0d2b0 + 0x2b0))();
    if (cVar1 != '\0') {
      lVar2 = FUN_140e3e8a6(DAT_14cb0d2b0);
      if (lVar2 != 0) {
        uVar3 = FUN_145aa0e68(lVar2,DAT_14cab4158);
        uVar3 = FUN_147595684(uVar3);
        local_28 = 0;
        FUN_14485c47a(&local_28,param_1);
        FUN_1432e1d02(uVar3,&local_28);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475949f4 FUN_1475949f4 body=104 status=ok
// SIG undefined FUN_1475949f4(void)

void FUN_1475949f4(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((DAT_14c761010 == '\x01') && (DAT_14cb0d2b0 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*DAT_14cb0d2b0 + 0x2b0))();
    if (cVar1 != '\0') {
      lVar2 = FUN_140e3e8a6(DAT_14cb0d2b0);
      if (lVar2 != 0) {
        uVar3 = FUN_145aa0e68(lVar2,*(undefined8 *)(param_1 + 0x30));
        lVar2 = FUN_147595684(uVar3);
        if (*(int *)(lVar2 + 0x28) == 2) {
          FUN_1432e1c2e(lVar2);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 147594a68 FUN_147594a68 body=499 status=ok
// SIG undefined FUN_147594a68(void)

void FUN_147594a68(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_3c != 0;
  uVar1 = FUN_1432e1d8c(local_20,local_28,local_30,local_38);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147594c5c FUN_147594c5c body=233 status=ok
// SIG undefined FUN_147594c5c(void)

void FUN_147594c5c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [39];
  undefined1 local_21;
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
  local_21 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1432e1f4a(local_20,local_21);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147594d46 FUN_147594d46 body=316 status=ok
// SIG undefined FUN_147594d46(void)

void FUN_147594d46(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar2 = &local_30;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147595394(local_28,puVar2);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147594e84 FUN_147594e84 body=337 status=ok
// SIG undefined FUN_147594e84(void)

void FUN_147594e84(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar2 = &local_30;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1432e1e94(local_28,puVar2);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147594fd6 FUN_147594fd6 body=218 status=ok
// SIG undefined FUN_147594fd6(void)

void FUN_147594fd6(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1475950b2(&local_30,local_20);
  if (&local_30 == param_3) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_30;
    *(undefined4 *)(param_3 + 1) = local_28;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_24;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475950b2 FUN_1475950b2 body=130 status=ok
// SIG undefined FUN_1475950b2(void)

longlong * FUN_1475950b2(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  FUN_14759215a(param_2);
  plVar2 = (longlong *)FUN_14759464c(&DAT_14cab4128);
  if ((longlong)(int)plVar2[1] != 0) {
    lVar4 = *plVar2;
    lVar5 = (longlong)(int)plVar2[1] << 3;
    do {
      uVar3 = FUN_14479d2ce(lVar4);
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_14759f556(param_1,iVar1);
      }
      *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar3;
      lVar4 = lVar4 + 8;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  return param_1;
}



// FUNCTION 14759513a FUN_14759513a body=246 status=ok
// SIG undefined FUN_14759513a(void)

void FUN_14759513a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
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
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  uVar1 = local_24;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14759215a(local_20);
  uVar2 = FUN_1475930fe(&DAT_14cab4128,uVar1,0);
  *param_3 = uVar2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147595238 FUN_147595238 body=231 status=ok
// SIG undefined FUN_147595238(void)

void FUN_147595238(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
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
  uVar1 = FUN_147595320(local_20,local_28);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147595320 FUN_147595320 body=112 status=ok
// SIG undefined FUN_147595320(void)

undefined8 FUN_147595320(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined7 uVar5;
  byte bVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  FUN_14759215a();
  bVar6 = 0x28;
  plVar2 = (longlong *)FUN_14759464c(&DAT_14cab4128);
  if (0 < (int)plVar2[1]) {
    lVar9 = 0;
    uVar8 = 0;
    do {
      lVar7 = *plVar2 + lVar9;
      lVar3 = FUN_14479d2ce(lVar7);
      bVar6 = (byte)lVar7;
      if (lVar3 == param_2) {
        uVar4 = FUN_1475930fe(&DAT_14cab4128,uVar8 & 0xffffffff,0);
        bVar6 = (byte)uVar4;
        uVar5 = (undefined7)((ulonglong)uVar4 >> 8);
        bVar1 = 1;
        goto LAB_14759536d;
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 8;
    } while ((longlong)uVar8 < (longlong)(int)plVar2[1]);
  }
  bVar1 = 0;
  uVar5 = 0;
LAB_14759536d:
  return CONCAT71(uVar5,bVar1 & bVar6);
}



// FUNCTION 147595394 FUN_147595394 body=85 status=ok
// SIG undefined FUN_147595394(void)

longlong FUN_147595394(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_1 == (longlong *)0x0) {
    lVar2 = 0;
  }
  else {
    uVar1 = FUN_1409ffe1d();
    lVar2 = FUN_14759a315(uVar1);
    FUN_14485c47a(lVar2 + 0x60,param_1);
    *(undefined8 *)(lVar2 + 0x68) = *param_2;
    (**(code **)(*param_1 + 0x588))(param_1,2);
  }
  return lVar2;
}



// FUNCTION 1475953ea FUN_1475953ea body=96 status=ok
// SIG undefined FUN_1475953ea(void)

longlong * FUN_1475953ea(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if ((param_2 != 0) && (plVar2 = (longlong *)FUN_147596956(param_2), plVar2 != (longlong *)0x0)) {
    lVar1 = *plVar2;
    *param_1 = lVar1;
    param_1[2] = 0;
    if (lVar1 == 0) {
      return param_1;
    }
    plVar3 = plVar2 + 4;
    if ((longlong *)plVar2[2] != (longlong *)0x0) {
      plVar3 = (longlong *)plVar2[2];
    }
    (**(code **)*plVar3)(plVar3,param_1 + 2);
    return param_1;
  }
  *param_1 = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 14759544a FUN_14759544a body=144 status=ok
// SIG undefined FUN_14759544a(void)

longlong FUN_14759544a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(char *)(param_1 + 0x48) == '\x01') {
    FUN_145aa0ffc(param_1);
  }
  iVar2 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar2 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x38);
    lVar4 = 0;
    do {
      lVar3 = FUN_14479d2ce(lVar1 + lVar4);
      if (lVar3 == param_2) {
        iVar2 = (int)(lVar4 >> 3) * -0x33333333;
        if (iVar2 == -1) {
          return 0;
        }
        return (longlong)iVar2 * 0x28 + *(longlong *)(param_1 + 0x38);
      }
      lVar4 = lVar4 + 0x28;
    } while ((longlong)iVar2 * 0x28 != lVar4);
  }
  return 0;
}



// FUNCTION 1475954da FUN_1475954da body=144 status=ok
// SIG undefined FUN_1475954da(void)

longlong FUN_1475954da(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(char *)(param_1 + 0x48) == '\x01') {
    FUN_145aa0ffc(param_1);
  }
  iVar2 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar2 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x38);
    lVar4 = 0;
    do {
      lVar3 = FUN_14479d2ce(lVar1 + lVar4);
      if (lVar3 == param_2) {
        iVar2 = (int)(lVar4 >> 3) * -0x33333333;
        if (iVar2 == -1) {
          return 0;
        }
        return (longlong)iVar2 * 0x28 + *(longlong *)(param_1 + 0x38);
      }
      lVar4 = lVar4 + 0x28;
    } while ((longlong)iVar2 * 0x28 != lVar4);
  }
  return 0;
}



// FUNCTION 14759556a FUN_14759556a body=135 status=ok
// SIG undefined FUN_14759556a(void)

void FUN_14759556a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14759f836(param_1,&local_40);
  if (local_40 != 0) {
    local_30 = param_2;
    local_28 = param_3;
    FUN_1447cd2ec();
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
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475955f2 FUN_1475955f2 body=145 status=ok
// SIG undefined FUN_1475955f2(void)

void FUN_1475955f2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14759f9b6(param_1,&local_50);
  if (local_50 != 0) {
    local_40 = param_2;
    local_38 = param_3;
    local_30 = param_4;
    FUN_1447cd2ec();
  }
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
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147595684 FUN_147595684 body=308 status=ok
// SIG undefined FUN_147595684(void)

longlong FUN_147595684(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (lVar3 != 0) goto LAB_1475956a3;
  plVar4 = (longlong *)FUN_14001cc68(0x40,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14a49f9b0;
  plVar5 = plVar4 + 2;
  plVar4[2] = 0;
  plVar4[3] = 0;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plVar4[6] = param_1;
  *(undefined4 *)(plVar4 + 7) = 0;
  local_30 = plVar5;
  local_28 = plVar4;
  FUN_1475a0020(&local_30,plVar5);
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x18) = 0x10;
    plVar5 = *(longlong **)(param_1 + 0x20);
    if (plVar5 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x20) = 0;
LAB_147595753:
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
joined_r0x00014759577e:
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
    *(longlong **)(param_1 + 0x18) = plVar5;
    plVar5 = *(longlong **)(param_1 + 0x20);
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
        goto joined_r0x00014759577e;
      }
    }
    else {
      *(longlong **)(param_1 + 0x20) = plVar4;
      if (plVar5 != (longlong *)0x0) goto LAB_147595753;
    }
  }
  plVar5 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x18);
LAB_1475956a3:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475957c2 FUN_1475957c2 body=5 status=ok
// SIG undefined FUN_1475957c2(void)

longlong FUN_1475957c2(longlong param_1)

{
  return param_1 + 0x48;
}



// FUNCTION 1475957c8 FUN_1475957c8 body=118 status=ok
// SIG undefined FUN_1475957c8(void)

void FUN_1475957c8(longlong *param_1,undefined4 param_2,char param_3)

{
  longlong lVar1;
  
  if (((char)param_1[5] == '\0') && ((longlong)(int)param_1[10] != 0)) {
    lVar1 = 0;
    do {
      if ((*(int *)(param_1[9] + 8 + lVar1) != 0) && (*(longlong *)(param_1[9] + lVar1) != 0)) {
        *(undefined1 *)(param_1 + 5) = 1;
        if (param_3 != '\0') {
          (**(code **)(*param_1 + 0x2e0))(param_1);
        }
        FUN_1475a00c4(param_1 + 9,param_1,param_2);
        *(undefined1 *)(param_1 + 5) = 0;
        return;
      }
      lVar1 = lVar1 + 0x10;
    } while ((longlong)(int)param_1[10] * 0x10 != lVar1);
  }
  return;
}



// FUNCTION 14759584e FUN_14759584e body=344 status=ok
// SIG undefined FUN_14759584e(void)

void FUN_14759584e(longlong param_1,longlong *param_2,undefined4 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_a8 [40];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong local_60;
  undefined1 local_54 [16];
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((*(int *)(param_1 + 0x30) != 0 || *(int *)(param_1 + 0x2c) != 0) ||
      *(int *)(param_1 + 0x34) != 0) || *(int *)(param_1 + 0x38) != 0) {
    local_68 = *param_4;
    local_60 = param_4[1];
    if (local_60 != 0) {
      LOCK();
      *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
      UNLOCK();
    }
    FUN_14179f016((undefined4 *)(param_1 + 0x2c),local_54,param_3,&local_68);
    uVar4 = FUN_1447addd0(local_54,0x10);
    iVar5 = FUN_1475a0174(param_2,uVar4 ^ local_44,local_54);
    if (iVar5 != -1) {
      uVar6 = FUN_147552f3e(*param_4);
      uVar4 = FUN_1447addd0(local_54,0x10);
      iVar5 = FUN_1475a0174(param_2,uVar4 ^ local_44,local_54);
      lVar7 = 0;
      if (iVar5 != -1) {
        lVar7 = (longlong)iVar5 * 0x30 + *param_2;
      }
      FUN_14757416c(lVar7 + 0x14,&local_80,param_3,uVar6);
      *(undefined4 *)(param_1 + 0x2c) = local_80;
      *(undefined4 *)(param_1 + 0x30) = uStack_7c;
      *(undefined4 *)(param_1 + 0x34) = uStack_78;
      *(undefined4 *)(param_1 + 0x38) = uStack_74;
      *(undefined4 *)(param_1 + 0x3c) = local_70;
      *(undefined4 *)(param_1 + 0x40) = local_6c;
    }
  }
  plVar3 = (longlong *)param_4[1];
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
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475959c8 FUN_1475959c8 body=79 status=ok
// SIG undefined FUN_1475959c8(void)

void FUN_1475959c8(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_144729dda(param_1 + 0x60);
  if ((cVar1 != '\0') && (lVar2 = FUN_14479d2ce(param_1 + 0x60), lVar2 != 0)) {
    for (lVar2 = *(longlong *)(lVar2 + 0xa8); lVar2 != 0; lVar2 = FUN_144944cf2(lVar2)) {
      FUN_14759681e(lVar2);
    }
  }
  return;
}



// FUNCTION 147595a17 FUN_147595a17 body=52 status=ok
// SIG undefined FUN_147595a17(void)

void FUN_147595a17(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    for (lVar1 = *(longlong *)(param_1 + 0xa8); lVar1 != 0; lVar1 = FUN_144944cf2(lVar1)) {
      FUN_14759681e(lVar1);
    }
  }
  return;
}



// FUNCTION 147595a4c FUN_147595a4c body=614 status=ok
// SIG undefined FUN_147595a4c(void)

void FUN_147595a4c(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined1 local_c8 [64];
  double local_88;
  double dStack_80;
  double local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar1 = param_1 + 0xc;
  cVar3 = FUN_144729dda(plVar1);
  if (cVar3 == '\0') goto LAB_147595b8b;
  (**(code **)(*param_1 + 0x2b8))(param_1,local_c8);
  dVar8 = (double)(-(ulonglong)(0.0 < local_88) & 0x3ff0000000000000 |
                  (ulonglong)
                  (~(uint)(-(ulonglong)(0.0 < local_88) >> 0x20) &
                  (uint)(-(ulonglong)(local_88 < 0.0) >> 0x20) & 0xbff00000) << 0x20);
  uVar7 = -(ulonglong)(0.0 < *(double *)(param_2 + 0x40));
  dVar9 = (double)(uVar7 & 0x3ff0000000000000 |
                  (ulonglong)
                  (~(uint)(uVar7 >> 0x20) &
                  (uint)(-(ulonglong)(*(double *)(param_2 + 0x40) < 0.0) >> 0x20) & 0xbff00000) <<
                  0x20);
  bVar2 = true;
  if ((dVar8 == dVar9) && (!NAN(dVar8) && !NAN(dVar9))) {
    dVar9 = (double)(-(ulonglong)(0.0 < dStack_80) & 0x3ff0000000000000 |
                    (ulonglong)
                    (~(uint)(-(ulonglong)(0.0 < dStack_80) >> 0x20) &
                    (uint)(-(ulonglong)(dStack_80 < 0.0) >> 0x20) & 0xbff00000) << 0x20);
    uVar7 = -(ulonglong)(0.0 < *(double *)(param_2 + 0x48));
    dVar8 = (double)(uVar7 & 0x3ff0000000000000 |
                    ~uVar7 & -(ulonglong)(*(double *)(param_2 + 0x48) < 0.0) & 0xbff0000000000000);
    if ((dVar9 == dVar8) && (!NAN(dVar9) && !NAN(dVar8))) {
      uVar7 = -(ulonglong)(0.0 < *(double *)(param_2 + 0x50));
      bVar2 = (double)(uVar7 & 0x3ff0000000000000 |
                      ~uVar7 & -(ulonglong)(*(double *)(param_2 + 0x50) < 0.0) & 0xbff0000000000000)
              != (double)(-(ulonglong)(0.0 < local_78) & 0x3ff0000000000000 |
                         (ulonglong)
                         (~(uint)(-(ulonglong)(0.0 < local_78) >> 0x20) &
                         (uint)(-(ulonglong)(local_78 < 0.0) >> 0x20) & 0xbff00000) << 0x20);
    }
  }
  uVar4 = FUN_14479d2ce(plVar1);
  local_d8 = 0;
  FUN_140613f88(uVar4,param_2,0,0);
  lVar5 = FUN_14479d2ce(plVar1);
  lVar6 = *(longlong *)(lVar5 + 0xb0);
  if (lVar6 == 0) {
    lVar6 = FUN_1448abda6(lVar5);
    if (lVar6 != 0) goto LAB_147595c8f;
  }
  else {
LAB_147595c8f:
    FUN_14759215a(lVar6);
    uVar4 = FUN_14479d2ce(plVar1);
    FUN_14009c94e(&DAT_14cab4128,uVar4);
  }
  if (bVar2) {
    uVar4 = FUN_14479d2ce(plVar1);
    FUN_1448215fa(uVar4);
  }
LAB_147595b8b:
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147595cb4 FUN_147595cb4 body=135 status=ok
// SIG undefined FUN_147595cb4(void)

void FUN_147595cb4(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  param_1 = param_1 + 0x60;
  cVar1 = FUN_144729dda(param_1);
  if (cVar1 == '\0') {
    return;
  }
  uVar2 = FUN_14479d2ce(param_1);
  FUN_144927a08(uVar2,param_2,0,0,0);
  lVar3 = FUN_14479d2ce(param_1);
  lVar4 = *(longlong *)(lVar3 + 0xb0);
  if ((lVar4 == 0) && (lVar4 = FUN_1448abda6(lVar3), lVar4 == 0)) {
    return;
  }
  FUN_14759215a(lVar4);
  uVar2 = FUN_14479d2ce(param_1);
  FUN_14009c94e(&DAT_14cab4128,uVar2);
  return;
}



// FUNCTION 147595d3c FUN_147595d3c body=79 status=ok
// SIG undefined FUN_147595d3c(void)

undefined8 * FUN_147595d3c(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  cVar1 = FUN_144729dda(param_1 + 0x60);
  if (cVar1 == '\0') {
    puVar4 = &DAT_14c846480;
    puVar5 = param_2;
    for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  else {
    uVar2 = FUN_14479d2ce(param_1 + 0x60);
    FUN_14480333a(uVar2,param_2);
  }
  return param_2;
}



// FUNCTION 147595d8c FUN_147595d8c body=91 status=ok
// SIG undefined FUN_147595d8c(void)

undefined8 * FUN_147595d8c(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  cVar1 = FUN_144729dda(param_1 + 0x60);
  if (cVar1 == '\0') {
    puVar4 = &DAT_14c846480;
    puVar5 = param_2;
    for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  else {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0x60);
    (**(code **)(*plVar2 + 0x4a8))(plVar2,param_2,*(undefined8 *)(param_1 + 0x68),0);
  }
  return param_2;
}



// FUNCTION 147595df2 FUN_147595df2 body=46 status=ok
// SIG undefined FUN_147595df2(void)

longlong FUN_147595df2(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_144729dda(param_1 + 0x60);
  if (cVar1 == '\0') {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_14479d2ce(param_1 + 0x60);
    lVar2 = lVar2 + 0x40;
  }
  return lVar2;
}



// FUNCTION 147595e20 FUN_147595e20 body=79 status=ok
// SIG undefined FUN_147595e20(void)

uint FUN_147595e20(longlong param_1)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  
  cVar1 = FUN_144729dda(param_1 + 0x60);
  uVar2 = 0;
  if (cVar1 != '\0') {
    uVar3 = FUN_14479d2ce(param_1 + 0x60);
    uVar2 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    uVar2 = uVar2 >> 0x10 ^ uVar2;
  }
  return uVar2;
}



// FUNCTION 147595e7c FUN_147595e7c body=136 status=ok
// SIG undefined FUN_147595e7c(void)

undefined1 FUN_147595e7c(longlong param_1,longlong *param_2)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar2 = (**(code **)(*param_2 + 0x318))(param_2);
  if (uVar2 != 0) {
    cVar1 = FUN_144729dda(param_1 + 0x60);
    if (cVar1 != '\0') {
      uVar3 = FUN_14479d2ce(param_1 + 0x60);
      do {
        uVar3 = *(ulonglong *)(uVar3 + 0x120);
        if (uVar3 == 0) {
          return 0;
        }
        uVar4 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
      } while ((uVar4 >> 0x10 ^ uVar4) != uVar2);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 147595f04 FUN_147595f04 body=147 status=ok
// SIG undefined FUN_147595f04(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_147595f04(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_144729dda(param_1 + 0x60);
  if (cVar1 == '\0') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cab42b0) {
      FUN_144b3d300(&DAT_14cab42b0);
      if (DAT_14cab42b0 == -1) {
        _DAT_14cab42a0 = 0;
        uRam000000014cab42a8 = 0;
        _Init_thread_footer(&DAT_14cab42b0);
      }
    }
    uVar2 = uRam000000014cab42a8;
    *param_2 = _DAT_14cab42a0;
    param_2[1] = uVar2;
  }
  else {
    uVar2 = FUN_14479d2ce(param_1 + 0x60);
    FUN_1432e2114(param_2,uVar2);
  }
  return param_2;
}



// FUNCTION 147595f98 FUN_147595f98 body=116 status=ok
// SIG undefined FUN_147595f98(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_147595f98(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cab42c8) {
    FUN_144b3d300(&DAT_14cab42c8);
    if (DAT_14cab42c8 == -1) {
      _DAT_14cab42b8 = 0;
      _DAT_14cab42c0 = 0;
      _Init_thread_footer(&DAT_14cab42c8);
    }
  }
  uVar1 = CONCAT44(uRam000000014cab42c4,_DAT_14cab42c0);
  *param_2 = _DAT_14cab42b8;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 14759600c FUN_14759600c body=147 status=ok
// SIG undefined FUN_14759600c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14759600c(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cab42e0) {
    FUN_144b3d300(&DAT_14cab42e0);
    if (DAT_14cab42e0 == -1) {
      _DAT_14cab42d0 = 0;
      _DAT_14cab42d8 = 0;
      _Init_thread_footer(&DAT_14cab42e0);
    }
  }
  if (param_3 == 0) {
    uVar1 = CONCAT44(uRam000000014cab42dc,_DAT_14cab42d8);
    *param_2 = _DAT_14cab42d0;
    param_2[1] = uVar1;
  }
  else {
    uVar1 = FUN_14757509a(param_3);
    FUN_1475960a0(uVar1,param_2);
  }
  return param_2;
}



// FUNCTION 1475960a0 FUN_1475960a0 body=63 status=ok
// SIG undefined FUN_1475960a0(void)

undefined8 * FUN_1475960a0(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  lVar1 = FUN_145b24df8();
  lVar1 = FUN_14752639a(param_1,*(undefined8 *)(lVar1 + 0x18));
  if (lVar1 == 0) {
    uVar2 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(lVar1 + 0x10);
    uVar2 = *(undefined8 *)(lVar1 + 8);
  }
  *param_2 = uVar2;
  *(undefined4 *)(param_2 + 1) = uVar3;
  return param_2;
}



// FUNCTION 1475960e0 FUN_1475960e0 body=1229 status=ok
// SIG undefined FUN_1475960e0(void)

undefined8
FUN_1475960e0(undefined8 param_1,longlong *param_2,longlong *param_3,uint *param_4,
             undefined8 param_5,longlong param_6)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  undefined4 uVar20;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar21;
  undefined1 auStack_198 [40];
  longlong *local_170;
  longlong *local_168;
  undefined1 local_160 [24];
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  longlong *plStack_130;
  undefined8 local_120 [3];
  undefined8 *local_108;
  undefined8 uStack_100;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_170 = param_3;
  if (param_6 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = 0;
    if (((int)param_2[1] != 0) && ((int)param_2[1] == (int)param_3[1])) {
      uVar5 = *param_4;
      local_108 = (undefined8 *)0x0;
      uStack_100 = 0;
      if ((~uVar5 & 7) == 0) {
        uStack_100 = 3;
        FUN_1447808da(&local_108,0);
        *local_108 = 0x100000000;
        *(undefined4 *)(local_108 + 1) = 2;
      }
      uVar14 = uStack_100;
      if ((uVar5 & 0x38) == 0x38) {
        iVar12 = (int)uStack_100;
        lVar18 = (longlong)(int)uStack_100;
        uStack_100 = CONCAT44(uStack_100._4_4_,(int)uStack_100 + 3);
        if ((uint)(uStack_100._4_4_ - iVar12) < 3) {
          FUN_1447808da(&local_108,uVar14 & 0xffffffff);
        }
        *(undefined8 *)((longlong)local_108 + lVar18 * 4) = 0x400000003;
        *(undefined4 *)((longlong)local_108 + lVar18 * 4 + 8) = 5;
      }
      uVar14 = uStack_100;
      if ((uVar5 & 0x1c0) == 0x1c0) {
        iVar12 = (int)uStack_100;
        lVar18 = (longlong)(int)uStack_100;
        uStack_100 = CONCAT44(uStack_100._4_4_,(int)uStack_100 + 3);
        if ((uint)(uStack_100._4_4_ - iVar12) < 3) {
          FUN_1447808da(&local_108,uVar14 & 0xffffffff);
        }
        *(undefined8 *)((longlong)local_108 + lVar18 * 4) = 0x700000006;
        *(undefined4 *)((longlong)local_108 + lVar18 * 4 + 8) = 8;
      }
      uVar13 = FUN_14757509a(param_6);
      lVar18 = FUN_145b24df8();
      lVar18 = FUN_14752639a(uVar13,*(undefined8 *)(lVar18 + 0x18));
      if (lVar18 == 0) {
        lVar18 = 0;
      }
      else {
        lVar18 = *(longlong *)(lVar18 + 8);
      }
      puVar6 = (undefined8 *)*local_170;
      local_148 = *puVar6;
      uStack_140 = puVar6[1];
      local_138 = *(undefined4 *)(puVar6 + 2);
      uStack_134 = *(undefined4 *)((longlong)puVar6 + 0x14);
      plStack_130 = (longlong *)puVar6[3];
      FUN_1448052ee(&local_148,local_120);
      uVar20 = (undefined4)puVar6[10];
      uVar14 = 0;
      do {
        lVar15 = *(longlong *)(lVar18 + uVar14 * 8);
        if (*(char *)(lVar15 + 0x80) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x000147596322. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar13 = (*(code *)((longlong)&DAT_14a4a0050 +
                             (longlong)(int)(&DAT_14a4a0050)[uVar14 & 0xffffffff]))
                             (&DAT_14a4a0050,lVar15,puVar6[9],local_120[0]);
          return uVar13;
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 != 9);
      if (0 < (int)param_2[1]) {
        lVar15 = 0;
        local_168 = param_2;
        do {
          lVar7 = *local_168;
          lVar17 = *local_170;
          lVar16 = lVar15 * 0x60;
          puVar1 = (undefined4 *)(lVar17 + 0x20 + lVar16);
          uVar8 = *puVar1;
          uVar9 = puVar1[1];
          uVar10 = puVar1[2];
          uVar11 = puVar1[3];
          uVar13 = *(undefined8 *)(lVar17 + 0x30 + lVar16);
          local_148 = *(undefined8 *)(lVar17 + lVar16);
          uStack_140 = ((undefined8 *)(lVar17 + lVar16))[1];
          puVar1 = (undefined4 *)(lVar17 + 0x10 + lVar16);
          local_138 = *puVar1;
          uStack_134 = puVar1[1];
          plStack_130 = *(longlong **)(puVar1 + 2);
          uVar20 = FUN_1448052ee(&local_148,local_160);
          puVar6 = local_108;
          lVar19 = (longlong)(int)uStack_100;
          if (lVar19 != 0) {
            uVar2 = *(undefined8 *)(lVar17 + 0x50 + lVar16);
            uVar3 = *(undefined8 *)(lVar17 + lVar16 + 0x40);
            uVar4 = *(undefined8 *)(lVar17 + lVar16 + 0x48);
            lVar17 = 0;
            do {
              switch(*(int *)((longlong)puVar6 + lVar17)) {
              case 0:
                uVar20 = uVar8;
                uVar21 = uVar9;
                break;
              case 1:
                uVar20 = uVar10;
                uVar21 = uVar11;
                break;
              case 2:
                uVar20 = (int)uVar13;
                uVar21 = (int)((ulonglong)uVar13 >> 0x20);
                break;
              case 3:
                uVar20 = (int)local_160._16_8_;
                uVar21 = SUB84(local_160._16_8_,4);
                break;
              case 4:
                uVar20 = (int)local_160._0_8_;
                uVar21 = SUB84(local_160._0_8_,4);
                break;
              case 5:
                uVar20 = (int)local_160._8_8_;
                uVar21 = SUB84(local_160._8_8_,4);
                break;
              case 6:
                uVar20 = (int)uVar3;
                uVar21 = (int)((ulonglong)uVar3 >> 0x20);
                break;
              case 7:
                uVar20 = (int)uVar4;
                uVar21 = (int)((ulonglong)uVar4 >> 0x20);
                break;
              case 8:
                uVar20 = (int)uVar2;
                uVar21 = (int)((ulonglong)uVar2 >> 0x20);
                break;
              default:
                uVar20 = 0;
                uVar21 = 0;
              }
              lVar16 = *(longlong *)(lVar18 + (longlong)*(int *)((longlong)puVar6 + lVar17) * 8);
              FUN_140861d3c(&local_148,lVar16,lVar16 + 0x58,lVar16 + 0x88);
              plStack_130 = (longlong *)(lVar16 + 0x68);
              iVar12 = FUN_147525ee8(&local_148,*(undefined4 *)(lVar7 + lVar15 * 4),0);
              if (iVar12 == -1) {
                local_f0 = CONCAT44(uVar21,uVar20);
                local_e8 = 0;
                uStack_e0 = 0;
                local_d8 = 0x200000000;
                uVar20 = FUN_14753f7ce(&local_148,*(undefined4 *)(lVar7 + lVar15 * 4),&local_f0);
              }
              else {
                *(ulonglong *)(*plStack_130 + (longlong)iVar12 * 0x20) = CONCAT44(uVar21,uVar20);
                uVar20 = extraout_XMM0_Da;
              }
              lVar17 = lVar17 + 4;
            } while (lVar19 * 4 != lVar17);
          }
          lVar15 = lVar15 + 1;
        } while (lVar15 < (int)local_168[1]);
      }
      lVar18 = (longlong)(int)uStack_100;
      if (lVar18 != 0) {
        lVar15 = 0;
        do {
          thunk_FUN_14752901c(uVar20,0);
          lVar15 = lVar15 + 4;
          uVar20 = extraout_XMM0_Da_00;
        } while (lVar18 * 4 != lVar15);
      }
      if (local_108 != (undefined8 *)0x0) {
        FUN_1400020a8(local_108);
      }
      uVar13 = 1;
    }
  }
  if ((local_d0 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13;
}



// FUNCTION 1475965ea FUN_1475965ea body=504 status=ok
// SIG undefined FUN_1475965ea(void)

void FUN_1475965ea(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  longlong local_120;
  undefined8 local_118;
  int local_110;
  undefined1 local_108 [192];
  undefined1 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar1 = param_1 + 0x60;
  lVar5 = FUN_144a34e94(lVar1,1);
  local_128 = *param_3;
  local_120 = param_3[1];
  if (local_120 != 0) {
    LOCK();
    *(int *)(local_120 + 8) = *(int *)(local_120 + 8) + 1;
    UNLOCK();
  }
  FUN_1410cbcd8(param_1 + 0x2c,&local_118,param_2,&local_128);
  if (local_110 != 0) {
    lVar6 = FUN_14479d2ce(local_118);
    if (lVar6 != 0) {
      lVar7 = FUN_144a6c4d8();
      if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8
           ) == lVar7 + 0x30)) {
        local_48 = (undefined1 *)0x0;
        local_40 = 0x1800000000;
        FUN_140a44582(lVar6,local_108);
        puVar8 = local_48;
        if (local_48 == (undefined1 *)0x0) {
          puVar8 = local_108;
        }
        if ((longlong)(int)local_40 != 0) {
          uVar9 = 0;
          lVar7 = 0;
          do {
            if ((lVar5 != 0) &&
               (*(longlong *)(*(longlong *)(puVar8 + uVar9) + 0x18) == *(longlong *)(lVar5 + 0x18)))
            {
              if ((int)(~uVar9 >> 3) != 0) {
                puVar10 = (undefined8 *)(puVar8 + (lVar7 >> 0x20) * 8);
                goto LAB_1475967a7;
              }
              break;
            }
            lVar7 = lVar7 + 0x100000000;
            uVar9 = uVar9 + 8;
          } while ((longlong)(int)local_40 * 8 != uVar9);
        }
        puVar10 = (undefined8 *)(lVar6 + 0x1c8);
LAB_1475967a7:
        FUN_14485c47a(lVar1,*puVar10);
        if (local_48 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        goto LAB_1475966d5;
      }
    }
    lVar5 = FUN_14479d2ce(local_118);
    if (lVar5 != 0) {
      lVar6 = FUN_144a799b0();
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8
           ) == lVar6 + 0x30)) {
        FUN_14485c47a(lVar1,lVar5);
      }
    }
  }
LAB_1475966d5:
  plVar4 = (longlong *)param_3[1];
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
  if ((local_38 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475967e4 FUN_1475967e4 body=57 status=ok
// SIG undefined FUN_1475967e4(void)

void FUN_1475967e4(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_1459e43dc();
  lVar2 = FUN_14092e757(uVar1,param_1,param_2,0);
  *(undefined8 *)(lVar2 + 0x60) = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(lVar2 + 0x68) = *(undefined8 *)(param_1 + 0x68);
  return;
}



// FUNCTION 14759681e FUN_14759681e body=96 status=ok
// SIG undefined FUN_14759681e(void)

void FUN_14759681e(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_144a74fb4();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_1475a092c(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14759687f FUN_14759687f body=116 status=ok
// SIG undefined FUN_14759687f(void)

void FUN_14759687f(longlong *param_1)

{
  if ((param_1 != (longlong *)0x0) && ((*(byte *)((longlong)param_1 + 0xc72) & 0x40) == 0)) {
    FUN_1407396de(param_1,0x3cf5c28f,0);
    (**(code **)(*param_1 + 0xaf8))(param_1,0);
    FUN_1447a916a(param_1);
    FUN_1447a91cc(param_1,0,0);
    (**(code **)(*param_1 + 0xb38))(param_1);
    FUN_1448c69c8(param_1);
    FUN_1448c6f34(param_1);
    return;
  }
  return;
}



// FUNCTION 1475968f4 FUN_1475968f4 body=97 status=ok
// SIG undefined FUN_1475968f4(void)

longlong * FUN_1475968f4(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if ((param_2 != 0) && (lVar2 = FUN_147596956(param_2), lVar2 != 0)) {
    lVar1 = *(longlong *)(lVar2 + 0x40);
    *param_1 = lVar1;
    param_1[2] = 0;
    if (lVar1 == 0) {
      return param_1;
    }
    puVar3 = (undefined8 *)(lVar2 + 0x60);
    if (*(undefined8 **)(lVar2 + 0x50) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(lVar2 + 0x50);
    }
    (**(code **)*puVar3)(puVar3,param_1 + 2);
    return param_1;
  }
  *param_1 = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 147596956 FUN_147596956 body=167 status=ok
// SIG undefined FUN_147596956(void)

longlong FUN_147596956(ulonglong param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = &DAT_14cab4320;
  if (DAT_14cab4328 != (undefined4 *)0x0) {
    puVar4 = DAT_14cab4328;
  }
  do {
    if (DAT_14cab42f0 != DAT_14cab431c) {
      uVar2 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      iVar3 = puVar4[(uVar2 >> 0x10 ^ uVar2) & DAT_14cab4330 - 1U];
      while (iVar3 != -1) {
        lVar1 = DAT_14cab42e8 + (longlong)iVar3 * 0xa0;
        if (*(ulonglong *)(DAT_14cab42e8 + (longlong)iVar3 * 0xa0) == param_1) {
          if (lVar1 != 0) {
            return lVar1 + 0x10;
          }
          break;
        }
        iVar3 = *(int *)(lVar1 + 0x90);
      }
    }
    param_1 = *(ulonglong *)(param_1 + 0x40);
    if (param_1 == 0) {
      return 0;
    }
  } while( true );
}



// FUNCTION 147596a2e FUN_147596a2e body=452 status=ok
// SIG undefined FUN_147596a2e(void)

longlong FUN_147596a2e(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
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
  uVar3 = FUN_1458989be();
  lVar4 = FUN_14092e757(uVar3,param_1,param_2,0);
  plVar1 = *(longlong **)(param_1 + 0x98);
  if (plVar1 != (longlong *)0x0) {
    lVar5 = (**(code **)(*plVar1 + 0x2d8))(plVar1,lVar4);
    if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar5);
    }
    *(longlong *)(lVar4 + 0x98) = lVar5;
  }
  plVar1 = *(longlong **)(param_1 + 0x90);
  if (plVar1 != (longlong *)0x0) {
    lVar5 = (**(code **)(*plVar1 + 0x2d8))(plVar1,lVar4);
    if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar5);
    }
    *(longlong *)(lVar4 + 0x90) = lVar5;
  }
  plVar1 = (longlong *)(param_1 + 0x40);
  lVar5 = param_1 + 0x50;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = lVar5;
  if (*(int *)(param_1 + 0x68) == 0) {
    iVar8 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar8 = *(int *)(param_1 + 0x68);
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_80 = plVar1;
  if ((iStack_44 != iVar8) || (uStack_50 != lVar5)) {
    do {
      lVar7 = (longlong)iStack_64 * 0x50 + *local_80;
      cVar2 = FUN_144729dda(lVar7);
      if (cVar2 != '\0') {
        uVar3 = FUN_14479d2ce(lVar7);
        uVar6 = FUN_144a7757c();
        FUN_144a78ede(uVar3,uVar6);
      }
      local_68 = local_68 & ~uStack_74;
      FUN_1449c0562(&local_78);
    } while (local_80 != plVar1 || (CONCAT44(uStack_6c,uStack_70) != lVar5 || iStack_64 != iVar8));
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147596bf4 FUN_147596bf4 body=68 status=ok
// SIG undefined FUN_147596bf4(void)

void FUN_147596bf4(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_140457ffc(*(longlong *)(param_1 + 0x98) + 0x48,param_1);
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_140457ffc(*(longlong *)(param_1 + 0x90) + 0x48,param_1);
    return;
  }
  return;
}



// FUNCTION 147596c38 FUN_147596c38 body=118 status=ok
// SIG undefined FUN_147596c38(void)

void FUN_147596c38(longlong param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_147596bf4();
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_147596cb0(*(longlong *)(param_1 + 0x98) + 0x48,local_18,param_1);
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_147596cb0(*(longlong *)(param_1 + 0x90) + 0x48,local_18,param_1);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147596cb0 FUN_147596cb0 body=244 status=ok
// SIG undefined FUN_147596cb0(void)

undefined8 FUN_147596cb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_14a49fac0;
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
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14a49fa50;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = &LAB_147596da6;
  FUN_1475a1024(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147596db4 FUN_147596db4 body=92 status=ok
// SIG undefined FUN_147596db4(void)

void FUN_147596db4(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  
  plVar1 = (longlong *)param_1[0x12];
  if ((plVar1 != (longlong *)0x0) && (param_1[0x13] != 0)) {
    cVar2 = (**(code **)(*plVar1 + 0x2a0))(plVar1,1);
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(*(longlong *)param_1[0x13] + 0x2a0))((longlong *)param_1[0x13],1);
      if (cVar2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000147596e02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x318))(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147596e10 FUN_147596e10 body=593 status=ok
// SIG undefined FUN_147596e10(void)

void FUN_147596e10(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *(longlong *)(param_1 + 0x90);
  if (lVar3 != 0) {
    uVar6 = FUN_1458989be();
    lVar3 = FUN_144a78ede(lVar3,uVar6);
    if (lVar3 != param_1) {
      (**(code **)(**(longlong **)(param_1 + 0x90) + 0x170))
                (*(longlong **)(param_1 + 0x90),0,param_1,0x10);
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x98);
  if (lVar3 != 0) {
    uVar6 = FUN_1458989be();
    lVar3 = FUN_144a78ede(lVar3,uVar6);
    if (lVar3 != param_1) {
      (**(code **)(**(longlong **)(param_1 + 0x98) + 0x170))
                (*(longlong **)(param_1 + 0x98),0,param_1,0x10);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x90);
  if ((plVar1 == (longlong *)0x0) || ((*(uint *)(plVar1 + 1) >> 0x1e & 1) != 0)) {
LAB_147596e8b:
    lVar3 = 0;
  }
  else {
    cVar2 = (**(code **)(*plVar1 + 0x2a0))(plVar1,1);
    if (cVar2 == '\0') goto LAB_147596e8b;
    lVar3 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x310))();
  }
  plVar1 = *(longlong **)(param_1 + 0x98);
  if ((plVar1 == (longlong *)0x0) || ((*(uint *)(plVar1 + 1) >> 0x1e & 1) != 0)) {
LAB_147596ec7:
    lVar4 = 0;
  }
  else {
    cVar2 = (**(code **)(*plVar1 + 0x2a0))(plVar1,1);
    if (cVar2 == '\0') goto LAB_147596ec7;
    lVar4 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x310))();
  }
  if ((lVar3 != 0) && (lVar4 != lVar3)) {
    local_40 = 0;
    FUN_14485c47a(&local_40,*(undefined8 *)(param_2 + 0x30));
    uVar6 = FUN_14759e65e(param_1 + 0x40,(uint)((ulonglong)local_40 >> 0x20) ^ (uint)local_40,
                          &local_40);
    uVar7 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x308))();
    FUN_14082bc44(uVar6,uVar7,lVar3);
  }
  if (lVar4 != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x98) + 800))(*(longlong **)(param_1 + 0x98),&local_40);
    lVar3 = FUN_14479d2ce(&local_40);
    if (lVar3 != 0) {
      lVar5 = FUN_144a74fb4();
      if (((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) && (DAT_14cab4408 != '\x01'))
      goto LAB_147596f2d;
    }
    local_40 = 0;
    FUN_14485c47a(&local_40,*(undefined8 *)(param_2 + 0x30));
    uVar6 = FUN_14759e65e(param_1 + 0x40,(uint)((ulonglong)local_40 >> 0x20) ^ (uint)local_40,
                          &local_40);
    FUN_14082bc44(lVar4,param_1,uVar6);
  }
LAB_147596f2d:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147597062 FUN_147597062 body=339 status=ok
// SIG undefined FUN_147597062(void)

void FUN_147597062(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == 0) goto LAB_147597104;
  plVar1 = *(longlong **)(param_1 + 0x90);
  if ((plVar1 == (longlong *)0x0) || ((*(uint *)(plVar1 + 1) >> 0x1e & 1) != 0)) {
LAB_1475970c0:
    lVar4 = 0;
  }
  else {
    cVar2 = (**(code **)(*plVar1 + 0x2a0))(plVar1,1);
    if (cVar2 == '\0') goto LAB_1475970c0;
    lVar4 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x310))();
  }
  plVar1 = *(longlong **)(param_1 + 0x98);
  if ((plVar1 == (longlong *)0x0) || ((*(uint *)(plVar1 + 1) >> 0x1e & 1) != 0)) {
LAB_1475970f8:
    lVar5 = 0;
  }
  else {
    cVar2 = (**(code **)(*plVar1 + 0x2a0))(plVar1,1);
    if (cVar2 == '\0') goto LAB_1475970f8;
    lVar5 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x310))();
  }
  if ((lVar4 != 0) && (lVar5 != lVar4)) {
    local_30 = 0;
    FUN_14485c47a(&local_30,*(undefined8 *)(param_2 + 0x30));
    lVar4 = FUN_14759e65e(param_1 + 0x40,(uint)((ulonglong)local_30 >> 0x20) ^ (uint)local_30,
                          &local_30);
    if (*(int *)(lVar4 + 0x18) == 0) {
      (**(code **)(**(longlong **)(param_1 + 0x90) + 0x330))
                (*(longlong **)(param_1 + 0x90),&local_30);
      bVar3 = FUN_144b00e3a(&local_30,1,0);
      if ((local_28 != 0 & bVar3) == 1) {
        uVar6 = FUN_14479d2ce(&local_30);
        FUN_14082bc44(lVar4,uVar6,local_28);
      }
    }
  }
LAB_147597104:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475971b6 FUN_1475971b6 body=2888 status=ok
// SIG undefined FUN_1475971b6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1475971b6(longlong *param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  void *pvVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  uint uVar18;
  int iVar19;
  undefined8 *puVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  void *pvVar24;
  void *pvVar25;
  undefined1 auStack_198 [32];
  void *local_178;
  uint local_16c;
  uint local_168;
  uint local_164;
  longlong local_160;
  void *local_158;
  void *local_150;
  longlong local_148;
  ulonglong local_140;
  longlong local_138;
  undefined8 *local_130;
  longlong local_128;
  longlong *local_120;
  longlong local_118;
  void *local_110;
  ulonglong local_108;
  longlong local_100;
  void *local_f8;
  undefined8 uStack_f0;
  void *local_e8;
  undefined8 uStack_e0;
  undefined8 *local_d0;
  int local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if ((((param_1 != (longlong *)0x0) && ((*(uint *)(param_1 + 1) >> 0x1e & 1) == 0)) &&
      (lVar4 = (**(code **)(*param_1 + 0x180))(param_1), lVar4 != 0)) &&
     ((((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0 &&
       (plVar10 = (longlong *)param_1[0x13], plVar10 != (longlong *)0x0)) &&
      (((*(uint *)(plVar10 + 1) >> 0x1e & 1) == 0 &&
       ((cVar3 = (**(code **)(*plVar10 + 0x2a0))(plVar10,1), cVar3 != '\0' &&
        (lVar5 = (**(code **)(*(longlong *)param_1[0x13] + 0x310))(), lVar5 != 0)))))))) {
    FUN_14759215a(lVar4);
    if ((DAT_14cb0d2b0 == (longlong *)0x0) ||
       ((cVar3 = (**(code **)(*DAT_14cb0d2b0 + 0x2b0))(), cVar3 == '\0' ||
        (lVar6 = FUN_140e3e8a6(DAT_14cb0d2b0), lVar6 == 0)))) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cab4460) && (FUN_144b3d300(&DAT_14cab4460), DAT_14cab4460 == -1))
      {
        DAT_14cab4450 = (void *)0x0;
        _DAT_14cab4458 = 0;
        atexit((_func_5014 *)&LAB_1432e481c);
        _Init_thread_footer(&DAT_14cab4460);
      }
      pvVar25 = DAT_14cab4450;
      local_f8 = (void *)0x0;
      lVar5 = (longlong)DAT_14cab4458;
      uStack_f0 = CONCAT44(uStack_f0._4_4_,DAT_14cab4458);
      if (lVar5 == 0) {
        uStack_f0 = _DAT_14cab4458 & 0xffffffff;
      }
      else {
        FUN_14759ba5a(&local_f8,_DAT_14cab4458 & 0xffffffff,0);
        memcpy(local_f8,pvVar25,lVar5 << 3);
      }
    }
    else {
      FUN_147593a3e(lVar6,&local_b8,DAT_14cab4158);
      local_f8 = (void *)0x0;
      uStack_f0 = 0;
      if ((longlong)(int)uStack_b0 != 0) {
        lVar6 = (longlong)(int)uStack_b0 << 3;
        puVar17 = local_b8;
        do {
          lVar9 = FUN_14479d2ce(puVar17);
          if (lVar9 != 0) {
            lVar12 = FUN_1458989be();
            iVar19 = *(int *)(lVar12 + 0x38);
            if ((((iVar19 <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + (longlong)iVar19 * 8) ==
                  lVar12 + 0x30)) &&
                (plVar10 = *(longlong **)(lVar9 + 0x98), plVar10 != (longlong *)0x0)) &&
               ((*(uint *)(plVar10 + 1) >> 0x1e & 1) == 0)) {
              cVar3 = (**(code **)(*plVar10 + 0x2a0))
                                (plVar10,CONCAT71((int7)(int3)((uint)iVar19 >> 8),1));
              if (cVar3 != '\0') {
                plVar10 = *(longlong **)(lVar9 + 0x90);
                if (((plVar10 == (longlong *)0x0) || ((*(uint *)(plVar10 + 1) >> 0x1e & 1) != 0)) ||
                   (cVar3 = (**(code **)(*plVar10 + 0x2a0))(plVar10,1), cVar3 == '\0')) {
                  lVar9 = 0;
                }
                else {
                  lVar9 = (**(code **)(**(longlong **)(lVar9 + 0x90) + 0x310))();
                }
                uVar16 = uStack_f0;
                if (lVar9 == lVar5) {
                  lVar9 = (longlong)(int)uStack_f0;
                  uVar18 = (int)uStack_f0 + 1;
                  uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar18);
                  if (uStack_f0._4_4_ < uVar18) {
                    FUN_14759e5d8(&local_f8,uVar16 & 0xffffffff);
                  }
                  *(undefined8 *)((longlong)local_f8 + lVar9 * 8) = *puVar17;
                }
              }
            }
          }
          puVar17 = puVar17 + 1;
          lVar6 = lVar6 + -8;
        } while (lVar6 != 0);
      }
      if (local_b8 != (undefined8 *)0x0) {
        FUN_1400020a8(local_b8);
      }
    }
    if ((longlong)(int)uStack_f0 != 0) {
      local_98 = 0;
      local_90 = 0;
      local_b8 = (undefined8 *)0x0;
      uStack_b0 = 0;
      local_8c = 0xffffffff00000080;
      local_84 = 0;
      local_78 = 0;
      local_70 = 0;
      pvVar25 = (void *)((longlong)local_f8 + (longlong)(int)uStack_f0 * 8);
      param_1 = param_1 + 8;
      pvVar15 = local_f8;
      local_178 = pvVar25;
      local_128 = lVar4;
      local_120 = param_1;
      do {
        local_d0 = (undefined8 *)0x0;
        FUN_14485c47a(&local_d0,*(undefined8 *)(lVar4 + 0x30));
        uVar7 = FUN_14759e65e(param_1,(uint)((ulonglong)local_d0 >> 0x20) ^ (uint)local_d0,&local_d0
                             );
        lVar5 = FUN_14479d2ce(pvVar15);
        local_d0 = (undefined8 *)0x0;
        FUN_14485c47a(&local_d0,*(undefined8 *)(lVar4 + 0x30));
        uVar8 = FUN_14759e65e(lVar5 + 0x40,(uint)((ulonglong)local_d0 >> 0x20) ^ (uint)local_d0,
                              &local_d0);
        cVar3 = FUN_1432e3edc(uVar8,uVar7,&local_b8);
        if (cVar3 != '\0') {
          lVar5 = FUN_14479d2ce(pvVar15);
          if (lVar5 == 0) {
LAB_147597447:
            lVar5 = 0;
          }
          else {
            lVar6 = FUN_1458989be();
            if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar6 + 0x38) * 8) != lVar6 + 0x30)) goto LAB_147597447;
          }
          lVar6 = lVar5 + 0x40;
          local_d0 = (undefined8 *)0x0;
          FUN_14485c47a(&local_d0,*(undefined8 *)(lVar4 + 0x30));
          lVar9 = FUN_14759e65e(lVar6,(uint)((ulonglong)local_d0 >> 0x20) ^ (uint)local_d0,&local_d0
                               );
          if (*(char *)(lVar9 + 0xb) != '\0') {
            local_160 = (**(code **)(**(longlong **)(lVar5 + 0x90) + 0x308))();
            FUN_14759215a(lVar4);
            local_148 = lVar6;
            if (((DAT_14cb0d2b0 == (longlong *)0x0) ||
                (cVar3 = (**(code **)(*DAT_14cb0d2b0 + 0x2b0))(), cVar3 == '\0')) ||
               (lVar6 = FUN_140e3e8a6(DAT_14cb0d2b0), lVar6 == 0)) {
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14cab4478) &&
                 (FUN_144b3d300(&DAT_14cab4478), DAT_14cab4478 == -1)) {
                DAT_14cab4468 = (void *)0x0;
                _DAT_14cab4470 = 0;
                atexit((_func_5014 *)&LAB_1432e482d);
                _Init_thread_footer(&DAT_14cab4478);
              }
              pvVar25 = DAT_14cab4468;
              local_e8 = (void *)0x0;
              lVar6 = (longlong)DAT_14cab4470;
              uStack_e0 = CONCAT44(uStack_e0._4_4_,DAT_14cab4470);
              if (lVar6 != 0) {
                FUN_14759ba5a(&local_e8,_DAT_14cab4470 & 0xffffffff,0);
                memcpy(local_e8,pvVar25,lVar6 << 3);
                goto LAB_14759762b;
              }
              uStack_e0 = _DAT_14cab4470 & 0xffffffff;
            }
            else {
              local_118 = lVar5;
              local_110 = pvVar15;
              FUN_147593a3e(lVar6,&local_d0,DAT_14cab4158);
              local_e8 = (void *)0x0;
              uStack_e0 = 0;
              if ((longlong)local_c8 != 0) {
                lVar4 = (longlong)local_c8 << 3;
                puVar17 = local_d0;
                do {
                  lVar5 = FUN_14479d2ce(puVar17);
                  if (lVar5 != 0) {
                    lVar6 = FUN_1458989be();
                    if ((((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38))
                         && (*(longlong *)
                              (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
                              (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) &&
                        ((plVar10 = *(longlong **)(lVar5 + 0x98), plVar10 != (longlong *)0x0 &&
                         ((((*(uint *)(plVar10 + 1) >> 0x1e & 1) == 0 &&
                           (cVar3 = (**(code **)(*plVar10 + 0x2a0))(), cVar3 != '\0')) &&
                          (lVar5 = (**(code **)(**(longlong **)(lVar5 + 0x98) + 0x308))(),
                          lVar5 != 0)))))) &&
                       ((lVar5 == local_160 && ((*(uint *)(lVar5 + 8) & 0x40000000) == 0)))) {
                      lVar5 = (longlong)(int)uStack_e0;
                      uVar18 = (int)uStack_e0 + 1;
                      uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar18);
                      if (uStack_e0._4_4_ < uVar18) {
                        FUN_14759e5d8(&local_e8);
                      }
                      *(undefined8 *)((longlong)local_e8 + lVar5 * 8) = *puVar17;
                    }
                  }
                  puVar17 = puVar17 + 1;
                  lVar4 = lVar4 + -8;
                } while (lVar4 != 0);
              }
              if (local_d0 != (undefined8 *)0x0) {
                FUN_1400020a8(local_d0);
              }
              iVar19 = (int)uStack_e0;
              uVar16 = (ulonglong)(int)uStack_e0;
              local_158 = local_e8;
              local_c0 = &DAT_14cab4128;
              pvVar15 = local_110;
              param_1 = local_120;
              lVar5 = local_118;
              lVar4 = local_128;
              if (0 < (longlong)uVar16) {
                lVar4 = 0;
                pvVar25 = local_e8;
                do {
                  if ((lVar4 + 1U < uVar16) &&
                     (cVar3 = FUN_1432e483e(&local_c0,(longlong)pvVar25 + 8,pvVar25), cVar3 != '\0')
                     ) {
                    uVar7 = *(undefined8 *)((longlong)local_158 + lVar4 * 8);
                    *(undefined8 *)((longlong)local_158 + lVar4 * 8) =
                         *(undefined8 *)((longlong)local_158 + lVar4 * 8 + 8);
                    *(undefined8 *)((longlong)local_158 + lVar4 * 8 + 8) = uVar7;
                  }
                  lVar4 = lVar4 + 2;
                  pvVar25 = (void *)((longlong)pvVar25 + 0x10);
                } while ((int)lVar4 < iVar19);
                pvVar15 = local_110;
                param_1 = local_120;
                lVar5 = local_118;
                lVar4 = local_128;
                if (2 < iVar19) {
                  uVar13 = 2;
                  local_108 = uVar16;
                  do {
                    local_16c = (int)uVar13 * 2;
                    local_100 = (longlong)(int)local_16c;
                    lVar4 = 0;
                    local_140 = uVar13;
                    do {
                      local_168 = (int)local_108 - (int)lVar4;
                      if ((int)local_16c <= (int)local_168) {
                        local_168 = local_16c;
                      }
                      local_138 = lVar4;
                      if ((int)local_140 < (int)local_168 && 0 < (int)local_140) {
                        local_130 = local_c0;
                        local_150 = (void *)((longlong)local_158 + lVar4 * 8);
                        iVar19 = 0;
                        uVar16 = local_140 & 0xffffffff;
                        while( true ) {
                          pvVar15 = local_150;
                          local_164 = (uint)uVar16;
                          pvVar25 = (void *)((longlong)local_150 + (longlong)(int)local_164 * 8);
                          local_d0 = local_130;
                          iVar23 = 0;
                          uVar18 = local_164 - iVar19;
                          if (uVar18 != 0 && iVar19 <= (int)local_164) {
                            iVar23 = 0;
                            uVar16 = (ulonglong)uVar18;
                            do {
                              uVar16 = uVar16 >> 1;
                              iVar22 = (uint)uVar16 + iVar23;
                              cVar3 = FUN_1432e483e(&local_d0,pvVar25,
                                                    (longlong)pvVar15 +
                                                    (longlong)iVar22 * 8 + (longlong)iVar19 * 8);
                              if (cVar3 == '\0') {
                                iVar23 = iVar22 + (uVar18 & 1);
                              }
                              bVar2 = 1 < uVar18;
                              uVar18 = (uint)uVar16;
                            } while (bVar2);
                          }
                          iVar23 = iVar23 + iVar19;
                          uVar16 = (ulonglong)local_164;
                          iVar19 = local_164 - iVar23;
                          if (iVar19 == 0 || (int)local_164 < iVar23) break;
                          local_d0 = local_130;
                          uVar18 = local_168 - local_164;
                          if (uVar18 == 0 || (int)local_168 < (int)local_164) {
                            iVar22 = 0;
                          }
                          else {
                            puVar17 = (undefined8 *)((longlong)local_150 + (longlong)iVar23 * 8);
                            iVar22 = 0;
                            uVar16 = (ulonglong)uVar18;
                            do {
                              uVar16 = uVar16 >> 1;
                              uVar21 = (uint)uVar16 + iVar22;
                              cVar3 = FUN_1432e483e(&local_d0,
                                                    (void *)((longlong)pvVar25 +
                                                            (ulonglong)uVar21 * 8),puVar17);
                              if (cVar3 != '\0') {
                                iVar22 = uVar21 + (uVar18 & 1);
                              }
                              bVar2 = 1 < uVar18;
                              uVar18 = (uint)uVar16;
                            } while (bVar2);
                            uVar16 = (ulonglong)(local_164 + iVar22);
                            if (0 < iVar22) {
                              puVar11 = puVar17 + (int)((local_164 + iVar22) - iVar23);
                              puVar20 = puVar17 + iVar19;
                              puVar14 = puVar17 + iVar19;
                              do {
                                while( true ) {
                                  puVar1 = puVar20 + 1;
                                  uVar7 = *puVar17;
                                  *puVar17 = *puVar20;
                                  puVar17 = puVar17 + 1;
                                  *puVar20 = uVar7;
                                  if (puVar1 == puVar11) break;
                                  puVar20 = puVar1;
                                  if (puVar17 == puVar14) {
                                    puVar14 = puVar1;
                                  }
                                }
                                puVar20 = puVar14;
                              } while (puVar17 != puVar14);
                            }
                          }
                          if (((int)local_168 <= (int)uVar16) ||
                             (iVar19 = iVar23 + iVar22 + 1, (int)uVar16 <= iVar19)) break;
                        }
                      }
                      lVar4 = local_138 + local_100;
                    } while (lVar4 < (longlong)local_108);
                    uVar13 = (ulonglong)local_16c;
                    pvVar15 = local_110;
                    param_1 = local_120;
                    lVar5 = local_118;
                    lVar4 = local_128;
                  } while ((int)local_16c < (int)local_108);
                }
              }
LAB_14759762b:
              if ((longlong)(int)uStack_e0 != 0) {
                lVar6 = (longlong)(int)uStack_e0 << 3;
                pvVar24 = local_e8;
                do {
                  cVar3 = FUN_144729dda(pvVar24);
                  if (((cVar3 != '\0') && (lVar9 = FUN_14479d2ce(pvVar24), lVar9 != 0)) &&
                     ((*(uint *)(lVar9 + 8) >> 0x1e & 1) == 0)) {
                    plVar10 = (longlong *)FUN_14479d2ce(pvVar24);
                    cVar3 = (**(code **)(*plVar10 + 0x2c0))(plVar10);
                    if (cVar3 != '\0') goto LAB_147597552;
                  }
                  pvVar24 = (void *)((longlong)pvVar24 + 8);
                  lVar6 = lVar6 + -8;
                } while (lVar6 != 0);
              }
            }
            pvVar24 = (void *)0x0;
LAB_147597552:
            pvVar25 = local_178;
            plVar10 = *(longlong **)(lVar5 + 0x90);
            if (((plVar10 != (longlong *)0x0) && ((*(uint *)(plVar10 + 1) >> 0x1e & 1) == 0)) &&
               ((cVar3 = (**(code **)(*plVar10 + 0x2a0))(plVar10,1), cVar3 != '\0' &&
                (lVar5 = (**(code **)(**(longlong **)(lVar5 + 0x90) + 0x310))(), lVar5 != 0)))) {
              if (pvVar24 == (void *)0x0) {
                local_d0 = (undefined8 *)0x0;
                FUN_14485c47a(&local_d0,*(undefined8 *)(lVar4 + 0x30));
                uVar7 = FUN_14759e65e(local_148,(uint)((ulonglong)local_d0 >> 0x20) ^ (uint)local_d0
                                      ,&local_d0);
                FUN_14082bc44(uVar7,local_160,lVar5);
                pvVar25 = local_178;
              }
              else {
                local_d0 = (undefined8 *)0x0;
                FUN_14485c47a(&local_d0,*(undefined8 *)(lVar4 + 0x30));
                uVar7 = FUN_14759e65e(local_148,(uint)((ulonglong)local_d0 >> 0x20) ^ (uint)local_d0
                                      ,&local_d0);
                FUN_1401c4d5c(uVar7,local_160,lVar5);
                pvVar25 = local_178;
              }
            }
            if (local_e8 != (void *)0x0) {
              FUN_1400020a8();
            }
          }
        }
        pvVar15 = (void *)((longlong)pvVar15 + 8);
      } while (pvVar15 != pvVar25);
      local_70 = 0;
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      FUN_1475a0f96(&local_b8);
    }
    if (local_f8 != (void *)0x0) {
      FUN_1400020a8(local_f8);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147597d08 FUN_147597d08 body=65 status=ok
// SIG undefined FUN_147597d08(void)

undefined8 FUN_147597d08(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x98);
  if (plVar1 != (longlong *)0x0) {
    cVar2 = (**(code **)(*plVar1 + 0x2a0))(plVar1,1);
    if (cVar2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000147597d3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x318))();
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 147597d4a FUN_147597d4a body=212 status=ok
// SIG undefined FUN_147597d4a(void)

undefined8 FUN_147597d4a(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = *(longlong **)(param_1 + 0x98);
  local_18 = param_2;
  if (plVar1 == (longlong *)0x0) {
LAB_147597d98:
    local_20 = 0;
  }
  else {
    cVar2 = (**(code **)(*plVar1 + 0x2a0))(plVar1,1);
    if (cVar2 == '\0') goto LAB_147597d98;
    (**(code **)(**(longlong **)(param_1 + 0x98) + 800))(*(longlong **)(param_1 + 0x98),&local_20);
  }
  cVar2 = FUN_1401246e4(&local_20,&local_18);
  uVar3 = 1;
  if (cVar2 != '\0') goto LAB_147597e02;
  plVar1 = *(longlong **)(param_1 + 0x90);
  if (plVar1 == (longlong *)0x0) {
LAB_147597dea:
    local_28 = 0;
  }
  else {
    cVar2 = (**(code **)(*plVar1 + 0x2a0))(plVar1,1);
    if (cVar2 == '\0') goto LAB_147597dea;
    (**(code **)(**(longlong **)(param_1 + 0x90) + 800))(*(longlong **)(param_1 + 0x90),&local_28);
  }
  uVar3 = FUN_1401246e4(&local_28,&local_18);
LAB_147597e02:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147597e20 FUN_147597e20 body=74 status=ok
// SIG undefined FUN_147597e20(void)

undefined8 FUN_147597e20(longlong param_1)

{
  char cVar1;
  
  if (*(longlong **)(param_1 + 0x98) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x2c8))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  if (*(longlong **)(param_1 + 0x90) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x2c8))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 147597e6a FUN_147597e6a body=282 status=ok
// SIG undefined FUN_147597e6a(void)

void FUN_147597e6a(longlong param_1,undefined4 param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  undefined1 local_3c [20];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_147597f86(local_3c,param_1);
  if (*(longlong **)(param_1 + 0x98) != (longlong *)0x0) {
    cVar4 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x2c8))();
    if (cVar4 != '\0') {
      plVar3 = *(longlong **)(param_1 + 0x98);
      local_50 = *param_3;
      local_48 = param_3[1];
      if (local_48 != 0) {
        LOCK();
        *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
        UNLOCK();
      }
      (**(code **)(*plVar3 + 0x2d0))(plVar3,param_2,&local_50,param_4);
    }
  }
  if (*(longlong **)(param_1 + 0x90) != (longlong *)0x0) {
    cVar4 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x2c8))();
    if (cVar4 != '\0') {
      plVar3 = *(longlong **)(param_1 + 0x90);
      local_60 = *param_3;
      local_58 = param_3[1];
      if (local_58 != 0) {
        LOCK();
        *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
        UNLOCK();
      }
      (**(code **)(*plVar3 + 0x2d0))(plVar3,param_2,&local_60,param_4);
    }
  }
  FUN_147597fc6(local_3c);
  plVar3 = (longlong *)param_3[1];
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
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147597f86 FUN_147597f86 body=63 status=ok
// SIG undefined FUN_147597f86(void)

undefined8 * FUN_147597f86(undefined8 *param_1,longlong *param_2)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  *param_1 = 0;
  FUN_14485c47a();
  param_1[1] = 0;
  if (param_2 != (longlong *)0x0) {
    uVar1 = (**(code **)(*param_2 + 0x2b0))(param_2,1);
  }
  *(undefined1 *)(param_1 + 2) = uVar1;
  return param_1;
}



// FUNCTION 147597fc6 FUN_147597fc6 body=233 status=ok
// SIG undefined FUN_147597fc6(void)

void FUN_147597fc6(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x10) == '\0') {
    cVar1 = FUN_144729dda();
    if (cVar1 != '\0') {
      plVar2 = (longlong *)FUN_14479d2ce(param_1);
      if (plVar2 != (longlong *)0x0) {
        cVar1 = (**(code **)(*plVar2 + 0x2b0))(plVar2,1);
        if (cVar1 != '\0') {
          plVar3 = (longlong *)plVar2[0x13];
          if ((plVar3 == (longlong *)0x0) || ((*(uint *)(plVar3 + 1) >> 0x1e & 1) != 0)) {
            plVar3 = (longlong *)0x0;
          }
          else {
            (**(code **)(*plVar3 + 800))(plVar3,local_28);
            plVar3 = (longlong *)FUN_14479d2ce(local_28);
          }
          cVar1 = FUN_144729dda(param_1 + 8);
          if (cVar1 == '\0') {
            if (plVar3 == (longlong *)0x0) goto LAB_14759807e;
            lVar4 = (**(code **)(*plVar3 + 0x180))(plVar3);
          }
          else {
            lVar4 = FUN_14479d2ce(param_1 + 8);
          }
          if ((lVar4 != 0) && ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0)) {
            FUN_1432e27b0(lVar4,plVar2);
          }
        }
      }
    }
  }
LAB_14759807e:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475980b0 FUN_1475980b0 body=67 status=ok
// SIG undefined FUN_1475980b0(void)

void FUN_1475980b0(longlong *param_1,char param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x2c0))();
  if (cVar1 == '\0') {
    return;
  }
  if (param_2 != '\0') {
    (**(code **)(*(longlong *)param_1[0x12] + 0x2e0))();
  }
  FUN_147592dc8(param_1,0);
  return;
}



// FUNCTION 1475980f4 FUN_1475980f4 body=49 status=ok
// SIG undefined FUN_1475980f4(void)

void FUN_1475980f4(longlong param_1,char param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x28);
  FUN_147592ca8();
  if (cVar1 == param_2) {
    return;
  }
  FUN_1475971b6(param_1);
  return;
}



// FUNCTION 147598126 FUN_147598126 body=464 status=ok
// SIG undefined FUN_147598126(void)

void FUN_147598126(longlong param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 == (longlong *)0x0) goto LAB_147598204;
  (**(code **)(*param_2 + 800))(param_2,&local_50);
  plVar1 = (longlong *)FUN_14479d2ce(&local_50);
  if (plVar1 == (longlong *)0x0) goto LAB_147598204;
  lVar2 = (**(code **)(*plVar1 + 0x180))(plVar1);
  if (lVar2 == 0) goto LAB_147598204;
  if (*(longlong **)(param_1 + 0x98) == param_2) {
    if (param_3 == '\x02') goto LAB_1475982dc;
    plVar3 = *(longlong **)(param_1 + 0x90);
    if (param_3 != '\x03') {
      bVar4 = false;
      goto LAB_1475981c9;
    }
    local_50 = param_1;
    local_48 = lVar2;
    if ((plVar3 != (longlong *)0x0) && ((*(uint *)(plVar3 + 1) >> 0x1e & 1) == 0)) {
      (**(code **)(*plVar3 + 800))(plVar3,local_40);
      plVar3 = (longlong *)FUN_14479d2ce(local_40);
      if (plVar3 != (longlong *)0x0 && plVar3 != plVar1) goto LAB_1475981ed;
      plVar3 = *(longlong **)(param_1 + 0x90);
    }
    bVar5 = plVar3 == param_2;
    bVar4 = true;
    bVar6 = false;
LAB_1475981e2:
    if ((bool)(bVar5 & bVar4)) goto LAB_1475981ed;
    if ((!bVar6 || *(longlong **)(param_1 + 0x98) != param_2) || (DAT_14c761010 != '\x01'))
    goto LAB_147598204;
  }
  else {
    plVar3 = *(longlong **)(param_1 + 0x90);
    if (param_3 == '\x02' && plVar3 == param_2) {
LAB_1475982dc:
      FUN_147596e10(param_1,lVar2);
      FUN_1432e27b0(lVar2,param_1);
      goto LAB_147598204;
    }
    bVar4 = param_3 == '\x03';
LAB_1475981c9:
    bVar5 = plVar3 == param_2;
    bVar6 = param_3 == '\x01';
    local_50 = param_1;
    local_48 = lVar2;
    if (!bVar6 || !bVar5) goto LAB_1475981e2;
LAB_1475981ed:
    if (DAT_14c761010 != '\x01') {
      FUN_1432e3ca4(&local_50);
      goto LAB_147598204;
    }
  }
  FUN_14759215a(lVar2);
  FUN_147594954(param_1);
LAB_147598204:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475982f8 FUN_1475982f8 body=107 status=ok
// SIG undefined FUN_1475982f8(void)

byte FUN_1475982f8(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x98);
  if ((((plVar1 != (longlong *)0x0) && ((*(uint *)(plVar1 + 1) >> 0x1e & 1) == 0)) &&
      (cVar2 = (**(code **)(*plVar1 + 0x2a0))(), cVar2 != '\0')) &&
     ((plVar1 = *(longlong **)(param_1 + 0x90), plVar1 != (longlong *)0x0 &&
      ((*(uint *)(plVar1 + 1) >> 0x1e & 1) == 0)))) {
    bVar3 = (**(code **)(*plVar1 + 0x2a0))(plVar1,param_2);
    if ((bVar3 & (byte)param_2) == 1) {
      return *(byte *)(param_1 + 0x29);
    }
    return bVar3 & ((byte)param_2 ^ 1);
  }
  return 0;
}



// FUNCTION 147598380 FUN_147598380 body=213 status=ok
// SIG undefined FUN_147598380(void)

void FUN_147598380(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined1 local_68 [64];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != 0) {
    local_70 = 0;
    FUN_14485c47a(&local_70,*(undefined8 *)(param_2 + 0x30));
    lVar1 = FUN_14759e65e(param_1 + 8,(uint)((ulonglong)local_70 >> 0x20) ^ (uint)local_70,&local_70
                         );
    if (*(int *)(lVar1 + 0x38) == 0) {
      (**(code **)(*param_1 + 0x2a0))(param_1,local_68);
      FUN_147592b5e(lVar1,local_68);
    }
    FUN_1402eb876(lVar1,*(undefined8 *)(param_2 + 0x30));
    FUN_14485c47a(lVar1 + 0x28,param_1);
    FUN_147596e10(param_1,param_2);
    FUN_147596c38(param_1);
    *(undefined1 *)((longlong)param_1 + 0x29) = 1;
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147598456 FUN_147598456 body=258 status=ok
// SIG undefined FUN_147598456(void)

void FUN_147598456(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    local_30 = 0;
    FUN_14485c47a(&local_30,*(undefined8 *)(param_2 + 0x30));
    uVar3 = FUN_14759e65e(param_1 + 0x40,(uint)((ulonglong)local_30 >> 0x20) ^ (uint)local_30,
                          &local_30);
    FUN_140cbebe8(uVar3,0);
    FUN_1405f3418(uVar3);
    plVar1 = *(longlong **)(param_1 + 0x98);
    if ((plVar1 != (longlong *)0x0) && ((*(uint *)(plVar1 + 1) >> 0x1e & 1) == 0)) {
      cVar2 = (**(code **)(*plVar1 + 0x2a0))(plVar1,1);
      if (cVar2 != '\0') {
        lVar4 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x310))();
        if (lVar4 != 0) {
          FUN_1401c4d5c(lVar4,param_1,uVar3);
        }
      }
    }
    local_38 = 0;
    FUN_14485c47a(&local_38,*(undefined8 *)(param_2 + 0x30));
    FUN_1475a13a4(param_1 + 0x40,local_38);
    FUN_147596bf4(param_1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14759856e FUN_14759856e body=307 status=ok
// SIG undefined FUN_14759856e(void)

void FUN_14759856e(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_108 [32];
  undefined8 local_e8 [4];
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined8 local_88 [4];
  double local_68;
  double dStack_60;
  double local_58;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar1 = *(longlong **)(param_1 + 0x90);
  if (plVar1 == (longlong *)0x0) {
LAB_1475985c2:
    puVar5 = &DAT_14c846480;
    puVar6 = local_88;
    for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
  }
  else {
    cVar3 = (**(code **)(*plVar1 + 0x2a0))(plVar1,1);
    if (cVar3 == '\0') goto LAB_1475985c2;
    (**(code **)(**(longlong **)(param_1 + 0x90) + 0x2b8))(*(longlong **)(param_1 + 0x90),local_88);
  }
  plVar1 = *(longlong **)(param_1 + 0x98);
  if (plVar1 != (longlong *)0x0) {
    cVar3 = (**(code **)(*plVar1 + 0x2a0))(plVar1,1);
    if (cVar3 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x98) + 0x2b8))
                (*(longlong **)(param_1 + 0x98),local_e8);
      goto LAB_14759861f;
    }
  }
  puVar5 = &DAT_14c846480;
  puVar6 = local_e8;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
LAB_14759861f:
  *(undefined8 *)(param_1 + 200) = DAT_14c8464f0;
  uVar2 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0xb8) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0xc0) = uVar2;
  if ((*(char *)(param_1 + 0xa0) != '\0') || (*(char *)(param_1 + 0xa8) == '\x01')) {
    *(double *)(param_1 + 0xb8) = local_c8 - local_68;
    *(double *)(param_1 + 0xc0) = dStack_c0 - dStack_60;
    *(double *)(param_1 + 200) = local_b8 - local_58;
  }
  if ((local_20 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475986c8 FUN_1475986c8 body=444 status=ok
// SIG undefined FUN_1475986c8(void)

void FUN_1475986c8(longlong *param_1,longlong param_2,byte param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_108 [32];
  undefined8 local_e8 [4];
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined8 local_88 [4];
  double local_68;
  double dStack_60;
  double local_58;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_147598126();
  cVar2 = (**(code **)(*param_1 + 0x2c0))(param_1);
  if (((((cVar2 == '\0') || (param_2 == 0)) || ((char)param_1[0x15] == '\0')) ||
      ((param_1[0x13] != param_2 || (1 < param_3)))) ||
     (iVar3 = FUN_147598886(param_1), iVar3 == (int)param_1[0x16])) goto LAB_14759871f;
  *(int *)(param_1 + 0x16) = iVar3;
  if (param_3 == 1) {
    plVar1 = (longlong *)param_1[0x12];
    if (plVar1 == (longlong *)0x0) {
LAB_1475987ca:
      puVar5 = &DAT_14c846480;
      puVar6 = local_88;
      for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
    }
    else {
      cVar2 = (**(code **)(*plVar1 + 0x2a0))(plVar1,1);
      if (cVar2 == '\0') goto LAB_1475987ca;
      (**(code **)(*(longlong *)param_1[0x12] + 0x2b8))((longlong *)param_1[0x12],local_88);
    }
    plVar1 = (longlong *)param_1[0x13];
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x2a0))(plVar1,1), cVar2 == '\0')) {
      puVar5 = &DAT_14c846480;
      puVar6 = local_e8;
      for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
    }
    else {
      (**(code **)(*(longlong *)param_1[0x13] + 0x2b8))((longlong *)param_1[0x13],local_e8);
    }
    local_58 = local_b8 - local_58;
    local_68 = local_c8 - local_68;
    dStack_60 = dStack_c0 - dStack_60;
  }
  else {
    plVar1 = (longlong *)param_1[0x13];
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x2a0))(plVar1,1), cVar2 == '\0')) {
      puVar5 = &DAT_14c846480;
      puVar6 = local_88;
      for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
    }
    else {
      (**(code **)(*(longlong *)param_1[0x13] + 0x2c0))((longlong *)param_1[0x13],local_88);
    }
  }
  param_1[0x17] = (longlong)local_68;
  param_1[0x18] = (longlong)dStack_60;
  param_1[0x19] = (longlong)local_58;
LAB_14759871f:
  if ((local_20 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147598886 FUN_147598886 body=315 status=ok
// SIG undefined FUN_147598886(void)

void FUN_147598886(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_e8 [4];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_88 [4];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_128;
  plVar1 = *(longlong **)(param_1 + 0x98);
  if (plVar1 == (longlong *)0x0) {
LAB_1475988db:
    puVar6 = &DAT_14c846480;
    puVar7 = local_88;
    for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  else {
    cVar2 = (**(code **)(*plVar1 + 0x2a0))(plVar1,1);
    if (cVar2 == '\0') goto LAB_1475988db;
    (**(code **)(**(longlong **)(param_1 + 0x98) + 0x2c0))(*(longlong **)(param_1 + 0x98),local_88);
  }
  local_e8[0] = local_68;
  local_e8[1] = uStack_60;
  local_e8[2] = local_58;
  uVar3 = FUN_1448eb174(local_e8,0x18,0);
  uVar3 = FUN_144a78877(0,uVar3);
  plVar1 = *(longlong **)(param_1 + 0x98);
  if (plVar1 != (longlong *)0x0) {
    cVar2 = (**(code **)(*plVar1 + 0x2a0))(plVar1,1);
    if (cVar2 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x98) + 0x2b8))
                (*(longlong **)(param_1 + 0x98),local_e8);
      goto LAB_14759896e;
    }
  }
  puVar6 = &DAT_14c846480;
  puVar7 = local_e8;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
LAB_14759896e:
  local_108 = local_c8;
  uStack_100 = uStack_c0;
  local_f8 = local_b8;
  uVar4 = FUN_1448eb174(&local_108,0x18,0);
  FUN_144a78877(uVar3,uVar4);
  if ((local_28 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475989c2 FUN_1475989c2 body=629 status=ok
// SIG undefined FUN_1475989c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1475989c2(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  char cVar6;
  longlong lVar7;
  double *pdVar8;
  double *pdVar9;
  ulonglong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auStack_158 [32];
  double local_138 [12];
  double local_d8 [13];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_158;
  plVar1 = *(longlong **)(param_1 + 0x90);
  if (plVar1 == (longlong *)0x0) {
LAB_147598a46:
    pdVar8 = (double *)&DAT_14c846480;
    pdVar9 = local_d8;
    for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
      *pdVar9 = *pdVar8;
      pdVar8 = pdVar8 + 1;
      pdVar9 = pdVar9 + 1;
    }
  }
  else {
    cVar6 = (**(code **)(*plVar1 + 0x2a0))(plVar1,1);
    if (cVar6 == '\0') goto LAB_147598a46;
    (**(code **)(**(longlong **)(param_1 + 0x90) + 0x2b8))(*(longlong **)(param_1 + 0x90),local_d8);
  }
  plVar1 = *(longlong **)(param_1 + 0x98);
  if (plVar1 != (longlong *)0x0) {
    cVar6 = (**(code **)(*plVar1 + 0x2a0))(plVar1,1);
    if (cVar6 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x98) + 0x2b8))
                (*(longlong **)(param_1 + 0x98),local_138);
      goto LAB_147598aa3;
    }
  }
  pdVar8 = (double *)&DAT_14c846480;
  pdVar9 = local_138;
  for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
    *pdVar9 = *pdVar8;
    pdVar8 = pdVar8 + 1;
    pdVar9 = pdVar9 + 1;
  }
LAB_147598aa3:
  uVar5 = DAT_14c8463e8;
  *(undefined8 *)(param_1 + 0xd0) = DAT_14c8463e0;
  *(undefined8 *)(param_1 + 0xd8) = uVar5;
  uVar4 = DAT_14c8463d8._4_4_;
  uVar3 = (undefined4)DAT_14c8463d8;
  uVar2 = DAT_14c8463d0._4_4_;
  *(undefined4 *)(param_1 + 0xc0) = (undefined4)DAT_14c8463d0;
  *(undefined4 *)(param_1 + 0xc4) = uVar2;
  *(undefined4 *)(param_1 + 200) = uVar3;
  *(undefined4 *)(param_1 + 0xcc) = uVar4;
  if ((*(char *)(param_1 + 0xa0) != '\0') || (*(char *)(param_1 + 0xa8) == '\x01')) {
    dVar13 = local_d8[2] * -1.0;
    dVar15 = local_d8[3] * 1.0;
    dVar17 = local_138[1] * dVar13 * -1.0 +
             ((local_138[0] * dVar15 - local_d8[0] * local_138[3] * 1.0) -
             local_138[2] * local_d8[1]);
    dVar18 = local_138[0] * dVar13 * 1.0 +
             ((local_138[1] * dVar15 - local_d8[0] * local_138[2] * -1.0) -
             local_138[3] * local_d8[1]);
    dVar14 = local_138[3] * dVar13 * 1.0 +
             local_d8[1] * local_138[0] + (dVar15 * local_138[2] - local_d8[0] * local_138[1] * 1.0)
    ;
    dVar16 = local_138[2] * dVar13 * -1.0 +
             local_d8[1] * local_138[1] +
             (dVar15 * local_138[3] - local_d8[0] * local_138[0] * -1.0);
    dVar13 = dVar14 * dVar14 + dVar17 * dVar17;
    dVar15 = dVar16 * dVar16 + dVar18 * dVar18;
    auVar11._0_8_ = dVar13 + dVar15;
    auVar11._8_8_ = dVar13 + dVar15;
    uVar10 = -(ulonglong)(9.99999993922529e-09 <= auVar11._8_8_);
    auVar12 = sqrtpd(auVar11,auVar11);
    auVar12 = divpd(_DAT_149934d80,auVar12);
    auVar19._0_8_ = auVar12._0_8_ * dVar14;
    auVar19._8_8_ = auVar12._8_8_ * dVar16;
    *(ulonglong *)(param_1 + 0xc0) =
         (ulonglong)(dVar17 * auVar12._0_8_) & -(ulonglong)(9.99999993922529e-09 <= auVar11._0_8_);
    *(ulonglong *)(param_1 + 200) = (ulonglong)(dVar18 * auVar12._8_8_) & uVar10;
    auVar12._8_4_ = (int)uVar10;
    auVar12._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar11._0_8_);
    auVar12._12_4_ = (int)(uVar10 >> 0x20);
    auVar12 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar19,auVar12);
    *(undefined1 (*) [16])(param_1 + 0xd0) = auVar12;
  }
  if ((local_70 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147598c5e FUN_147598c5e body=695 status=ok
// SIG undefined FUN_147598c5e(void)

void FUN_147598c5e(longlong *param_1,longlong param_2,byte param_3)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  double dVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  double *pdVar7;
  double *pdVar8;
  undefined1 auStack_158 [32];
  double local_138 [12];
  double local_d8 [13];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_147598126();
  cVar4 = (**(code **)(*param_1 + 0x2c0))(param_1);
  if ((((cVar4 == '\0') || (param_2 == 0)) || ((char)param_1[0x15] == '\0')) ||
     ((param_1[0x13] != param_2 || (1 < param_3)))) goto LAB_147598ce5;
  iVar5 = FUN_147598f16(param_1);
  if (iVar5 == (int)param_1[0x16]) goto LAB_147598ce5;
  *(int *)(param_1 + 0x16) = iVar5;
  if (param_3 != 1) {
    plVar1 = (longlong *)param_1[0x13];
    if (plVar1 == (longlong *)0x0) {
LAB_147598e04:
      pdVar7 = (double *)&DAT_14c846480;
      pdVar8 = local_d8;
      for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
        *pdVar8 = *pdVar7;
        pdVar7 = pdVar7 + 1;
        pdVar8 = pdVar8 + 1;
      }
    }
    else {
      cVar4 = (**(code **)(*plVar1 + 0x2a0))(plVar1,1);
      if (cVar4 == '\0') goto LAB_147598e04;
      (**(code **)(*(longlong *)param_1[0x13] + 0x2c0))((longlong *)param_1[0x13],local_d8);
    }
    param_1[0x18] = (longlong)local_d8[0];
    param_1[0x19] = (longlong)local_d8[1];
    param_1[0x1a] = (longlong)local_d8[2];
    param_1[0x1b] = (longlong)local_d8[3];
    goto LAB_147598ce5;
  }
  plVar1 = (longlong *)param_1[0x12];
  if (plVar1 == (longlong *)0x0) {
LAB_147598dbb:
    pdVar7 = (double *)&DAT_14c846480;
    pdVar8 = local_d8;
    for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
      *pdVar8 = *pdVar7;
      pdVar7 = pdVar7 + 1;
      pdVar8 = pdVar8 + 1;
    }
  }
  else {
    cVar4 = (**(code **)(*plVar1 + 0x2a0))(plVar1,1);
    if (cVar4 == '\0') goto LAB_147598dbb;
    (**(code **)(*(longlong *)param_1[0x12] + 0x2b8))((longlong *)param_1[0x12],local_d8);
  }
  plVar1 = (longlong *)param_1[0x13];
  if (plVar1 == (longlong *)0x0) {
LAB_147598e42:
    pdVar7 = (double *)&DAT_14c846480;
    pdVar8 = local_138;
    for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
      *pdVar8 = *pdVar7;
      pdVar7 = pdVar7 + 1;
      pdVar8 = pdVar8 + 1;
    }
  }
  else {
    cVar4 = (**(code **)(*plVar1 + 0x2a0))(plVar1,1);
    if (cVar4 == '\0') goto LAB_147598e42;
    (**(code **)(*(longlong *)param_1[0x13] + 0x2b8))((longlong *)param_1[0x13],local_138);
  }
  local_d8[2] = local_d8[2] * -1.0;
  local_d8[3] = local_d8[3] * 1.0;
  dVar3 = local_138[2] * local_d8[2] * -1.0 +
          local_d8[1] * local_138[1] +
          (local_d8[3] * local_138[3] - local_d8[0] * local_138[0] * -1.0);
  param_1[0x18] =
       (longlong)
       (local_138[1] * local_d8[2] * -1.0 +
       ((local_138[0] * local_d8[3] - local_d8[0] * local_138[3] * 1.0) - local_138[2] * local_d8[1]
       ));
  param_1[0x19] =
       (longlong)
       (local_138[0] * local_d8[2] * 1.0 +
       ((local_138[1] * local_d8[3] - local_d8[0] * local_138[2] * -1.0) -
       local_138[3] * local_d8[1]));
  auVar2._8_4_ = SUB84(dVar3,0);
  auVar2._0_8_ = local_138[3] * local_d8[2] * 1.0 +
                 local_d8[1] * local_138[0] +
                 (local_d8[3] * local_138[2] - local_d8[0] * local_138[1] * 1.0);
  auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x1a) = auVar2;
LAB_147598ce5:
  if ((local_70 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147598f16 FUN_147598f16 body=343 status=ok
// SIG undefined FUN_147598f16(void)

void FUN_147598f16(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 local_100 [24];
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_148;
  plVar1 = *(longlong **)(param_1 + 0x98);
  if (plVar1 == (longlong *)0x0) {
LAB_147598f6b:
    puVar6 = &DAT_14c846480;
    puVar7 = &local_88;
    for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  else {
    cVar2 = (**(code **)(*plVar1 + 0x2a0))(plVar1,1);
    if (cVar2 == '\0') goto LAB_147598f6b;
    (**(code **)(**(longlong **)(param_1 + 0x98) + 0x2c0))(*(longlong **)(param_1 + 0x98),&local_88)
    ;
  }
  local_e8._0_4_ = (undefined4)local_88;
  local_e8._4_4_ = local_88._4_4_;
  uStack_e0 = uStack_80;
  uStack_dc = uStack_7c;
  local_d8 = local_78;
  uStack_d4 = uStack_74;
  uStack_d0 = uStack_70;
  uStack_cc = uStack_6c;
  FUN_1449413b4(&local_e8,&local_128);
  uVar3 = FUN_1448eb174(&local_128,0x18,0);
  uVar3 = FUN_144a78877(0,uVar3);
  plVar1 = *(longlong **)(param_1 + 0x98);
  if (plVar1 != (longlong *)0x0) {
    cVar2 = (**(code **)(*plVar1 + 0x2a0))(plVar1,1);
    if (cVar2 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x98) + 0x2b8))
                (*(longlong **)(param_1 + 0x98),&local_e8);
      goto LAB_14759900c;
    }
  }
  puVar6 = &DAT_14c846480;
  puVar7 = &local_e8;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
LAB_14759900c:
  local_128 = (undefined4)local_e8;
  uStack_124 = local_e8._4_4_;
  uStack_120 = uStack_e0;
  uStack_11c = uStack_dc;
  local_118 = local_d8;
  uStack_114 = uStack_d4;
  uStack_110 = uStack_d0;
  uStack_10c = uStack_cc;
  FUN_1449413b4(&local_128,local_100);
  uVar4 = FUN_1448eb174(local_100,0x18,0);
  FUN_144a78877(uVar3,uVar4);
  if ((local_28 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14759906e FUN_14759906e body=411 status=ok
// SIG undefined FUN_14759906e(void)

void FUN_14759906e(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_118 [32];
  undefined8 local_f8 [8];
  undefined1 local_b8 [16];
  double local_a8;
  undefined8 local_98 [8];
  double local_58;
  double dStack_50;
  double local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  plVar1 = *(longlong **)(param_1 + 0x90);
  if (plVar1 == (longlong *)0x0) {
LAB_1475990cb:
    puVar5 = &DAT_14c846480;
    puVar6 = local_98;
    for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
  }
  else {
    cVar3 = (**(code **)(*plVar1 + 0x2a0))(plVar1,1);
    if (cVar3 == '\0') goto LAB_1475990cb;
    (**(code **)(**(longlong **)(param_1 + 0x90) + 0x2b8))(*(longlong **)(param_1 + 0x90),local_98);
  }
  plVar1 = *(longlong **)(param_1 + 0x98);
  if (plVar1 != (longlong *)0x0) {
    cVar3 = (**(code **)(*plVar1 + 0x2a0))(plVar1,1);
    if (cVar3 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x98) + 0x2b8))
                (*(longlong **)(param_1 + 0x98),local_f8);
      goto LAB_147599128;
    }
  }
  puVar5 = &DAT_14c846480;
  puVar6 = local_f8;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
LAB_147599128:
  *(undefined8 *)(param_1 + 200) = DAT_14c846520;
  uVar2 = DAT_14c846518;
  *(undefined8 *)(param_1 + 0xb8) = DAT_14c846510;
  *(undefined8 *)(param_1 + 0xc0) = uVar2;
  if (*(char *)(param_1 + 0xa0) == '\x01') {
    auVar7._8_8_ = dStack_50;
    auVar7._0_8_ = local_58;
    auVar7 = divpd(local_b8,auVar7);
    *(ulonglong *)(param_1 + 0xb8) =
         -(ulonglong)(9.999999747378752e-05 < ABS(local_58)) & auVar7._0_8_;
    *(ulonglong *)(param_1 + 0xc0) =
         -(ulonglong)(9.999999747378752e-05 < ABS(dStack_50)) & auVar7._8_8_;
    *(ulonglong *)(param_1 + 200) =
         -(ulonglong)(9.999999747378752e-05 < ABS(local_48)) & (ulonglong)(local_a8 / local_48);
  }
  if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147599230 FUN_147599230 body=564 status=ok
// SIG undefined FUN_147599230(void)

void FUN_147599230(longlong *param_1,longlong param_2,byte param_3)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auVar11 [16];
  undefined1 auStack_c8 [32];
  undefined8 local_a8 [8];
  double local_68;
  double dStack_60;
  double local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_147598126();
  cVar6 = (**(code **)(*param_1 + 0x2c0))(param_1);
  if ((((cVar6 == '\0') || (param_2 == 0)) || ((char)param_1[0x15] == '\0')) ||
     ((param_1[0x13] != param_2 || (1 < param_3)))) goto LAB_147599299;
  iVar7 = FUN_147599466(param_1);
  if (iVar7 == (int)param_1[0x16]) goto LAB_147599299;
  *(int *)(param_1 + 0x16) = iVar7;
  if (param_3 != 1) {
    plVar1 = (longlong *)param_1[0x13];
    if (plVar1 == (longlong *)0x0) {
LAB_1475993a0:
      puVar9 = &DAT_14c846480;
      puVar10 = local_a8;
      for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
    }
    else {
      cVar6 = (**(code **)(*plVar1 + 0x2a0))(plVar1,1);
      if (cVar6 == '\0') goto LAB_1475993a0;
      (**(code **)(*(longlong *)param_1[0x13] + 0x2c0))((longlong *)param_1[0x13],local_a8);
    }
    param_1[0x17] = (longlong)local_68;
    param_1[0x18] = (longlong)dStack_60;
    param_1[0x19] = (longlong)local_58;
    goto LAB_147599299;
  }
  plVar1 = (longlong *)param_1[0x12];
  if (plVar1 == (longlong *)0x0) {
LAB_14759934e:
    puVar9 = &DAT_14c846480;
    puVar10 = local_a8;
    for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
  }
  else {
    cVar6 = (**(code **)(*plVar1 + 0x2a0))(plVar1,1);
    if (cVar6 == '\0') goto LAB_14759934e;
    (**(code **)(*(longlong *)param_1[0x12] + 0x2b8))((longlong *)param_1[0x12],local_a8);
  }
  dVar5 = local_58;
  dVar4 = dStack_60;
  dVar3 = local_68;
  auVar11._8_8_ = dStack_60;
  auVar11._0_8_ = local_68;
  plVar1 = (longlong *)param_1[0x13];
  if (plVar1 == (longlong *)0x0) {
LAB_1475993d5:
    puVar9 = &DAT_14c846480;
    puVar10 = local_a8;
    for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
  }
  else {
    cVar6 = (**(code **)(*plVar1 + 0x2a0))(plVar1,1);
    if (cVar6 == '\0') goto LAB_1475993d5;
    (**(code **)(*(longlong *)param_1[0x13] + 0x2b8))((longlong *)param_1[0x13],local_a8);
  }
  auVar2._8_8_ = dStack_60;
  auVar2._0_8_ = local_68;
  auVar11 = divpd(auVar2,auVar11);
  param_1[0x17] = -(ulonglong)(9.999999747378752e-05 < ABS(dVar3)) & auVar11._0_8_;
  param_1[0x18] = -(ulonglong)(9.999999747378752e-05 < ABS(dVar4)) & auVar11._8_8_;
  param_1[0x19] = -(ulonglong)(9.999999747378752e-05 < ABS(dVar5)) & (ulonglong)(local_58 / dVar5);
LAB_147599299:
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147599466 FUN_147599466 body=321 status=ok
// SIG undefined FUN_147599466(void)

void FUN_147599466(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_e8 [8];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_88 [8];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_128;
  plVar1 = *(longlong **)(param_1 + 0x98);
  if (plVar1 == (longlong *)0x0) {
LAB_1475994bb:
    puVar6 = &DAT_14c846480;
    puVar7 = local_88;
    for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  else {
    cVar2 = (**(code **)(*plVar1 + 0x2a0))(plVar1,1);
    if (cVar2 == '\0') goto LAB_1475994bb;
    (**(code **)(**(longlong **)(param_1 + 0x98) + 0x2c0))(*(longlong **)(param_1 + 0x98),local_88);
  }
  local_e8[0] = local_48;
  local_e8[1] = uStack_40;
  local_e8[2] = local_38;
  uVar3 = FUN_1448eb174(local_e8,0x18,0);
  uVar3 = FUN_144a78877(0,uVar3);
  plVar1 = *(longlong **)(param_1 + 0x98);
  if (plVar1 != (longlong *)0x0) {
    cVar2 = (**(code **)(*plVar1 + 0x2a0))(plVar1,1);
    if (cVar2 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x98) + 0x2b8))
                (*(longlong **)(param_1 + 0x98),local_e8);
      goto LAB_14759954e;
    }
  }
  puVar6 = &DAT_14c846480;
  puVar7 = local_e8;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
LAB_14759954e:
  local_108 = local_a8;
  uStack_100 = uStack_a0;
  local_f8 = local_98;
  uVar4 = FUN_1448eb174(&local_108,0x18,0);
  FUN_144a78877(uVar3,uVar4);
  if ((local_28 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475995a8 FUN_1475995a8 body=462 status=ok
// SIG undefined FUN_1475995a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1475995a8(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  double *pdVar4;
  undefined8 *puVar5;
  double *pdVar6;
  undefined8 *puVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar12;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auStack_168 [32];
  undefined8 local_148 [12];
  double local_e8 [2];
  undefined1 local_d8 [48];
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88 [12];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_168;
  plVar1 = *(longlong **)(param_1 + 0x90);
  if (plVar1 == (longlong *)0x0) {
LAB_1475995fe:
    puVar5 = &DAT_14c846480;
    puVar7 = local_88;
    for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  else {
    cVar2 = (**(code **)(*plVar1 + 0x2a0))(plVar1,1);
    if (cVar2 == '\0') goto LAB_1475995fe;
    (**(code **)(**(longlong **)(param_1 + 0x90) + 0x2b8))(*(longlong **)(param_1 + 0x90),local_88);
  }
  plVar1 = *(longlong **)(param_1 + 0x98);
  if (plVar1 != (longlong *)0x0) {
    cVar2 = (**(code **)(*plVar1 + 0x2a0))(plVar1,1);
    if (cVar2 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x98) + 0x2b8))
                (*(longlong **)(param_1 + 0x98),local_e8);
      goto LAB_147599661;
    }
  }
  pdVar4 = (double *)&DAT_14c846480;
  pdVar6 = local_e8;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pdVar6 = *pdVar4;
    pdVar4 = pdVar4 + 1;
    pdVar6 = pdVar6 + 1;
  }
LAB_147599661:
  puVar5 = &DAT_14c846480;
  puVar7 = (undefined8 *)(param_1 + 0xc0);
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  if ((*(char *)(param_1 + 0xa0) != '\0') || (*(char *)(param_1 + 0xa8) == '\x01')) {
    if (*(char *)(param_1 + 0x120) == '\0') {
      local_a8 = _DAT_149934d80;
      local_98 = 0x3ff0000000000000;
      uStack_90 = 0;
      dVar9 = (double)local_d8._0_8_ * (double)local_d8._0_8_ + local_e8[0] * local_e8[0];
      dVar12 = (double)local_d8._8_8_ * (double)local_d8._8_8_ + local_e8[1] * local_e8[1];
      auVar10._0_8_ = dVar9 + dVar12;
      auVar10._8_8_ = dVar9 + dVar12;
      auVar11 = sqrtpd(auVar10,auVar10);
      auVar11 = divpd(_DAT_149934d80,auVar11);
      auVar8._0_8_ = auVar11._0_8_ * (double)local_d8._0_8_;
      auVar8._8_8_ = auVar11._8_8_ * (double)local_d8._8_8_;
      local_e8[0] = (double)((ulonglong)(local_e8[0] * auVar11._0_8_) &
                            -(ulonglong)(1e-08 <= auVar10._0_8_));
      local_e8[1] = (double)((ulonglong)(local_e8[1] * auVar11._8_8_) &
                            -(ulonglong)(1e-08 <= auVar10._8_8_));
      auVar11._8_8_ = -(ulonglong)(1e-08 <= auVar10._8_8_);
      auVar11._0_8_ = -(ulonglong)(1e-08 <= auVar10._0_8_);
      local_d8._0_16_ = blendvpd(_DAT_149935300,auVar8,auVar11);
    }
    FUN_1449437a2(local_e8,local_148,local_88);
    puVar5 = local_148;
    puVar7 = (undefined8 *)(param_1 + 0xc0);
    for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147599778 FUN_147599778 body=575 status=ok
// SIG undefined FUN_147599778(void)

void FUN_147599778(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_110 [24];
  undefined8 local_f8 [3];
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_98 [3];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_158;
  plVar1 = *(longlong **)(param_1 + 0x98);
  if (plVar1 == (longlong *)0x0) {
LAB_1475997cf:
    puVar6 = &DAT_14c846480;
    puVar7 = local_98;
    for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  else {
    cVar2 = (**(code **)(*plVar1 + 0x2a0))(plVar1,1);
    if (cVar2 == '\0') goto LAB_1475997cf;
    (**(code **)(**(longlong **)(param_1 + 0x98) + 0x2c0))(*(longlong **)(param_1 + 0x98),local_98);
  }
  local_f8[0] = local_78;
  local_f8[1] = uStack_70;
  local_f8[2] = local_68;
  uVar3 = FUN_1448eb174(local_f8,0x18,0);
  uVar3 = FUN_144a78877(0,uVar3);
  uStack_e0 = uStack_80;
  uStack_dc = uStack_7c;
  FUN_1449413b4(local_f8,&local_138);
  uVar4 = FUN_1448eb174(&local_138,0x18,0);
  uVar3 = FUN_144a78877(uVar3,uVar4);
  local_f8[0] = local_58;
  local_f8[1] = uStack_50;
  local_f8[2] = local_48;
  uVar4 = FUN_1448eb174(local_f8,0x18,0);
  uVar3 = FUN_144a78877(uVar3,uVar4);
  plVar1 = *(longlong **)(param_1 + 0x98);
  if (plVar1 != (longlong *)0x0) {
    cVar2 = (**(code **)(*plVar1 + 0x2a0))(plVar1,1);
    if (cVar2 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x98) + 0x2b8))
                (*(longlong **)(param_1 + 0x98),local_f8);
      goto LAB_1475998e2;
    }
  }
  puVar6 = &DAT_14c846480;
  puVar7 = local_f8;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
LAB_1475998e2:
  local_138 = local_d8;
  uStack_130 = uStack_d0;
  local_128 = local_c8;
  uVar4 = FUN_1448eb174(&local_138,0x18,0);
  uVar3 = FUN_144a78877(uVar3,uVar4);
  local_138 = local_f8[0];
  uStack_130 = local_f8[1];
  local_128 = local_f8[2];
  uStack_120 = uStack_e0;
  uStack_11c = uStack_dc;
  FUN_1449413b4(&local_138,local_110);
  uVar4 = FUN_1448eb174(local_110,0x18,0);
  uVar3 = FUN_144a78877(uVar3,uVar4);
  local_138 = local_b8;
  uStack_130 = uStack_b0;
  local_128 = local_a8;
  uVar4 = FUN_1448eb174(&local_138,0x18,0);
  FUN_144a78877(uVar3,uVar4);
  if ((local_30 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475999de FUN_1475999de body=603 status=ok
// SIG undefined FUN_1475999de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1475999de(longlong *param_1,longlong param_2,byte param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  double *pdVar4;
  longlong *plVar5;
  longlong *plVar6;
  double *pdVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar12;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auStack_168 [32];
  longlong local_148 [12];
  double local_e8 [2];
  undefined1 local_d8 [48];
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88 [13];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_147598126();
  cVar1 = (**(code **)(*param_1 + 0x2c0))(param_1);
  if (((((cVar1 == '\0') || (param_2 == 0)) || ((char)param_1[0x15] == '\0')) ||
      ((param_1[0x13] != param_2 || (1 < param_3)))) ||
     (iVar2 = FUN_147599778(param_1), iVar2 == (int)param_1[0x16])) goto LAB_147599a35;
  *(int *)(param_1 + 0x16) = iVar2;
  if (param_3 == 1) {
    plVar5 = (longlong *)param_1[0x12];
    if (plVar5 == (longlong *)0x0) {
LAB_147599ae0:
      plVar5 = &DAT_14c846480;
      plVar6 = local_88;
      for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
        *plVar6 = *plVar5;
        plVar5 = plVar5 + 1;
        plVar6 = plVar6 + 1;
      }
    }
    else {
      cVar1 = (**(code **)(*plVar5 + 0x2a0))(plVar5,1);
      if (cVar1 == '\0') goto LAB_147599ae0;
      (**(code **)(*(longlong *)param_1[0x12] + 0x2b8))((longlong *)param_1[0x12],local_88);
    }
    plVar5 = (longlong *)param_1[0x13];
    if ((plVar5 == (longlong *)0x0) ||
       (cVar1 = (**(code **)(*plVar5 + 0x2a0))(plVar5,1), cVar1 == '\0')) {
      pdVar4 = (double *)&DAT_14c846480;
      pdVar7 = local_e8;
      for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
        *pdVar7 = *pdVar4;
        pdVar4 = pdVar4 + 1;
        pdVar7 = pdVar7 + 1;
      }
    }
    else {
      (**(code **)(*(longlong *)param_1[0x13] + 0x2b8))((longlong *)param_1[0x13],local_e8);
    }
    if ((char)param_1[0x24] == '\0') {
      local_a8 = _DAT_149934d80;
      local_98 = 0x3ff0000000000000;
      uStack_90 = 0;
      dVar9 = (double)local_d8._0_8_ * (double)local_d8._0_8_ + local_e8[0] * local_e8[0];
      dVar12 = (double)local_d8._8_8_ * (double)local_d8._8_8_ + local_e8[1] * local_e8[1];
      auVar10._0_8_ = dVar9 + dVar12;
      auVar10._8_8_ = dVar9 + dVar12;
      auVar11 = sqrtpd(auVar10,auVar10);
      auVar11 = divpd(_DAT_149934d80,auVar11);
      auVar8._0_8_ = auVar11._0_8_ * (double)local_d8._0_8_;
      auVar8._8_8_ = auVar11._8_8_ * (double)local_d8._8_8_;
      local_e8[0] = (double)((ulonglong)(local_e8[0] * auVar11._0_8_) &
                            -(ulonglong)(1e-08 <= auVar10._0_8_));
      local_e8[1] = (double)((ulonglong)(local_e8[1] * auVar11._8_8_) &
                            -(ulonglong)(1e-08 <= auVar10._8_8_));
      auVar11._8_8_ = -(ulonglong)(1e-08 <= auVar10._8_8_);
      auVar11._0_8_ = -(ulonglong)(1e-08 <= auVar10._0_8_);
      local_d8._0_16_ = blendvpd(_DAT_149935300,auVar8,auVar11);
    }
    plVar5 = local_148;
    FUN_1449437a2(local_e8,plVar5,local_88);
  }
  else {
    plVar5 = (longlong *)param_1[0x13];
    if ((plVar5 == (longlong *)0x0) ||
       (cVar1 = (**(code **)(*plVar5 + 0x2a0))(plVar5,1), cVar1 == '\0')) {
      plVar5 = &DAT_14c846480;
      plVar6 = local_88;
      for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
        *plVar6 = *plVar5;
        plVar5 = plVar5 + 1;
        plVar6 = plVar6 + 1;
      }
    }
    else {
      (**(code **)(*(longlong *)param_1[0x13] + 0x2c0))((longlong *)param_1[0x13],local_88);
    }
    plVar5 = local_88;
  }
  plVar6 = param_1 + 0x18;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *plVar6 = *plVar5;
    plVar5 = plVar5 + 1;
    plVar6 = plVar6 + 1;
  }
LAB_147599a35:
  if ((local_20 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147599c3a FUN_147599c3a body=871 status=ok
// SIG undefined FUN_147599c3a(void)

void FUN_147599c3a(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  double *pdVar4;
  double *pdVar5;
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
  undefined1 auStack_e8 [32];
  double local_c8 [4];
  double local_a8;
  double dStack_a0;
  double local_98;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *(undefined1 *)(param_1 + 0xa0) = 0;
  *(undefined1 *)(param_1 + 0xa8) = 0;
  plVar1 = *(longlong **)(param_1 + 0x90);
  if ((plVar1 == (longlong *)0x0) ||
     (cVar2 = (**(code **)(*plVar1 + 0x2a0))(plVar1,1), cVar2 == '\0')) {
    pdVar4 = (double *)&DAT_14c846480;
    pdVar5 = local_c8;
    for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
      *pdVar5 = *pdVar4;
      pdVar4 = pdVar4 + 1;
      pdVar5 = pdVar5 + 1;
    }
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x90) + 0x2b8))(*(longlong **)(param_1 + 0x90),local_c8);
  }
  dVar13 = local_98;
  dVar8 = dStack_a0;
  dVar12 = local_a8;
  plVar1 = *(longlong **)(param_1 + 0x98);
  if ((plVar1 == (longlong *)0x0) ||
     (cVar2 = (**(code **)(*plVar1 + 0x2a0))(plVar1,1), cVar2 == '\0')) {
    pdVar4 = (double *)&DAT_14c846480;
    pdVar5 = local_c8;
    for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
      *pdVar5 = *pdVar4;
      pdVar4 = pdVar4 + 1;
      pdVar5 = pdVar5 + 1;
    }
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x98) + 0x2b8))(*(longlong **)(param_1 + 0x98),local_c8);
  }
  dVar13 = dVar13 - local_98;
  dVar12 = dVar12 - local_a8;
  dVar8 = dVar8 - dStack_a0;
  dVar7 = dVar13 * dVar13 + dVar12 * dVar12 + dVar8 * dVar8;
  if (((dVar7 != 1.0) || (dVar9 = dVar13, dVar11 = dVar8, dVar6 = dVar12, NAN(dVar7))) &&
     (dVar9 = DAT_14c8464f0, dVar11 = DAT_14c8464e8, dVar6 = DAT_14c8464e0,
     9.99999993922529e-09 <= dVar7)) {
    dVar7 = 1.0 / SQRT(dVar7);
    dVar9 = dVar13 * dVar7;
    dVar11 = dVar8 * dVar7;
    dVar6 = dVar7 * dVar12;
  }
  if (((9.999999747378752e-05 < ABS(dVar6)) || (9.999999747378752e-05 < ABS(dVar11))) ||
     (9.999999747378752e-05 < ABS(dVar9))) {
    dVar8 = local_c8[2] * -1.0;
    dVar10 = local_c8[3] * 1.0;
    dVar12 = -local_c8[0];
    dVar7 = -local_c8[1];
    dVar15 = dVar6 * dVar8 - dVar12 * dVar9;
    dVar13 = dVar11 * dVar12 - dVar6 * dVar7;
    dVar14 = dVar9 * dVar7 - dVar11 * dVar8;
    dVar14 = dVar14 + dVar14;
    dVar15 = dVar15 + dVar15;
    dVar13 = dVar13 + dVar13;
    dVar12 = dVar10 * dVar13 + dVar9 + (dVar15 * dVar12 - dVar14 * dVar7);
    dVar7 = (dVar13 * dVar7 - dVar15 * dVar8) + dVar10 * dVar14 + dVar6;
    dVar13 = local_c8[0] * dVar13 + dVar8 * dVar14 + dVar10 * dVar15 + dVar11;
    dVar8 = dVar12 * dVar12 + dVar7 * dVar7 + dVar13 * dVar13;
    if (((dVar8 != 1.0) || (dVar9 = dVar7, dVar11 = dVar13, dVar6 = dVar12, NAN(dVar8))) &&
       (dVar9 = DAT_14c8464e0, dVar11 = DAT_14c8464e8, dVar6 = DAT_14c8464f0,
       9.99999993922529e-09 <= dVar8)) {
      dVar8 = 1.0 / SQRT(dVar8);
      dVar9 = dVar8 * dVar7;
      dVar11 = dVar13 * dVar8;
      dVar6 = dVar12 * dVar8;
    }
    *(double *)(param_1 + 0xb0) = dVar9;
    *(double *)(param_1 + 0xb8) = dVar11;
    *(double *)(param_1 + 0xc0) = dVar6;
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147599fcc FUN_147599fcc body=841 status=ok
// SIG undefined FUN_147599fcc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147599fcc(double *param_1,double *param_2,double *param_3)

{
  undefined1 auVar1 [16];
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar19;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  
  dVar13 = *param_2;
  dVar14 = param_2[1];
  dVar6 = *param_3;
  dVar16 = param_3[1];
  dVar9 = param_2[2];
  dVar19 = param_3[2];
  dVar15 = dVar9 * dVar19 + dVar13 * dVar6 + dVar14 * dVar16 + 1.0;
  if (9.99999993922529e-09 <= dVar15) {
    *param_1 = dVar14 * dVar19 - dVar16 * dVar9;
    param_1[1] = dVar9 * dVar6 - dVar19 * dVar13;
    param_1[2] = dVar13 * dVar16 - dVar6 * dVar14;
    param_1[3] = dVar15;
    dVar13 = *param_1;
    dVar14 = param_1[1];
    dVar6 = param_1[2];
    dVar16 = param_1[3];
  }
  else {
    dVar5 = ABS(dVar13);
    dVar20 = ABS(dVar14);
    pdVar2 = (double *)&DAT_14c8463a0;
    if (dVar20 < dVar5) {
      pdVar2 = (double *)&DAT_14c846388;
    }
    pdVar3 = (double *)&DAT_14c8463a8;
    if (dVar20 < dVar5) {
      pdVar3 = (double *)&DAT_14c846390;
    }
    dVar15 = 2.0 - dVar15;
    dVar12 = dVar6 * dVar14 - dVar13 * dVar16;
    dVar21 = dVar13 * dVar19 - dVar9 * dVar6;
    dVar6 = dVar16 * dVar9 - dVar19 * dVar14;
    dVar16 = dVar12 * dVar12 + dVar6 * dVar6;
    dVar19 = dVar15 * dVar15 + dVar21 * dVar21;
    auVar17._0_8_ = dVar16 + dVar19;
    auVar17._8_8_ = dVar16 + dVar19;
    auVar18 = sqrtpd(auVar17,auVar17);
    auVar18 = divpd(_DAT_149934d80,auVar18);
    auVar22._0_8_ = auVar18._0_8_ * dVar12;
    auVar22._8_8_ = auVar18._8_8_ * dVar15;
    dVar6 = (double)((ulonglong)(dVar6 * auVar18._0_8_) &
                    -(ulonglong)(9.99999993922529e-09 <= auVar17._0_8_));
    dVar16 = (double)((ulonglong)(dVar21 * auVar18._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar17._8_8_));
    auVar18._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar17._8_8_);
    auVar18._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar17._0_8_);
    auVar18 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar22,auVar18);
    pdVar4 = (double *)&DAT_14c8463b0;
    if (dVar20 < dVar5) {
      pdVar4 = (double *)&DAT_14c846398;
    }
    dVar19 = dVar13 * *pdVar3 - *pdVar2 * dVar14;
    dVar5 = dVar9 * *pdVar2 - *pdVar4 * dVar13;
    dVar15 = dVar14 * *pdVar4 - *pdVar3 * dVar9;
    dVar20 = (dVar14 * dVar19 - dVar5 * dVar9) * 0.999999999999999;
    dVar19 = (dVar9 * dVar15 - dVar19 * dVar13) * 0.999999999999999;
    dVar9 = (dVar13 * dVar5 - dVar15 * dVar14) * 0.999999999999999;
    dVar15 = auVar18._0_8_;
    dVar5 = auVar18._8_8_;
    auVar7._8_4_ = SUB84(dVar16,0);
    auVar7._12_4_ = (undefined4)((ulonglong)dVar16 >> 0x20);
    auVar10._8_4_ = SUB84(dVar6,0);
    auVar10._0_8_ = dVar6;
    auVar10._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    auVar7._0_8_ = dVar16;
    dVar13 = dVar19 * dVar15 * -1.0 +
             dVar9 * dVar16 + dVar6 * -4.371139000186241e-08 * 1.0 + dVar5 * dVar20;
    dVar14 = dVar20 * dVar15 * 1.0 +
             auVar7._8_8_ * -4.371139000186241e-08 + auVar10._8_8_ * dVar9 * -1.0 + dVar5 * dVar19;
    dVar6 = dVar15 * -4.371139000186241e-08 * 1.0 +
            ((dVar6 * dVar19 * 1.0 + dVar5 * dVar9) - dVar20 * dVar16);
    dVar16 = dVar9 * dVar15 * -1.0 +
             ((auVar10._8_8_ * dVar20 * -1.0 + dVar5 * -4.371139000186241e-08) -
             dVar19 * auVar7._8_8_);
  }
  dVar9 = dVar6 * dVar6 + dVar13 * dVar13;
  dVar19 = dVar16 * dVar16 + dVar14 * dVar14;
  auVar8._0_8_ = dVar9 + dVar19;
  auVar8._8_8_ = dVar9 + dVar19;
  auVar18 = sqrtpd(auVar8,auVar8);
  auVar18 = divpd(_DAT_149934d80,auVar18);
  auVar11._0_8_ = auVar18._0_8_ * dVar6;
  auVar11._8_8_ = auVar18._8_8_ * dVar16;
  *param_1 = (double)((ulonglong)(dVar13 * auVar18._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar8._0_8_));
  param_1[1] = (double)((ulonglong)(dVar14 * auVar18._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar8._8_8_));
  auVar1._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar8._8_8_);
  auVar1._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar8._0_8_);
  auVar18 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar11,auVar1);
  *(undefined1 (*) [16])(param_1 + 2) = auVar18;
  return;
}



// FUNCTION 14759a315 FUN_14759a315 body=174 status=ok
// SIG undefined FUN_14759a315(void)

undefined8 FUN_14759a315(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1459e43dc();
  FUN_144a5c54a(local_a8,uVar1);
  local_98 = 0;
  local_90 = 8;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
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



// FUNCTION 14759a3c4 FUN_14759a3c4 body=328 status=ok
// SIG undefined FUN_14759a3c4(void)

undefined8 FUN_14759a3c4(undefined8 *param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  longlong local_50;
  longlong local_48;
  int local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((DAT_14cb0d2b0 == (longlong *)0x0) ||
      (cVar2 = (**(code **)(*DAT_14cb0d2b0 + 0x2b0))(), cVar2 == '\0')) ||
     (lVar3 = FUN_140e3e8a6(DAT_14cb0d2b0), lVar3 == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = *param_1;
    uVar4 = FUN_145b32e1a();
    local_58 = 0;
    FUN_140af9fb2(&local_38,lVar3,uVar4,uVar5);
    FUN_147593a3e(lVar3,&local_48,DAT_14cab4158);
    lVar1 = local_38;
    if ((longlong)local_40 != 0) {
      lVar8 = (longlong)local_40 << 3;
      lVar7 = local_48;
      do {
        cVar2 = FUN_144729dda(lVar7);
        if ((cVar2 != '\0') && (lVar6 = FUN_14479d2ce(lVar7), *(longlong *)(lVar6 + 0x18) == lVar1))
        {
          if (lVar7 != 0) {
            uVar5 = *param_1;
            uVar4 = FUN_145b32e1a();
            local_58 = 2;
            FUN_140af9fb2(&local_50,lVar3,uVar4,uVar5);
            local_38 = local_50;
          }
          break;
        }
        lVar7 = lVar7 + 8;
        lVar8 = lVar8 + -8;
      } while (lVar8 != 0);
    }
    uVar5 = FUN_1475a1534(lVar3,local_38);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 14759a50e FUN_14759a50e body=328 status=ok
// SIG undefined FUN_14759a50e(void)

undefined8 FUN_14759a50e(undefined8 *param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  longlong local_50;
  longlong local_48;
  int local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((DAT_14cb0d2b0 == (longlong *)0x0) ||
      (cVar2 = (**(code **)(*DAT_14cb0d2b0 + 0x2b0))(), cVar2 == '\0')) ||
     (lVar3 = FUN_140e3e8a6(DAT_14cb0d2b0), lVar3 == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = *param_1;
    uVar4 = FUN_145b32f04();
    local_58 = 0;
    FUN_140af9fb2(&local_38,lVar3,uVar4,uVar5);
    FUN_147593a3e(lVar3,&local_48,DAT_14cab4158);
    lVar1 = local_38;
    if ((longlong)local_40 != 0) {
      lVar8 = (longlong)local_40 << 3;
      lVar7 = local_48;
      do {
        cVar2 = FUN_144729dda(lVar7);
        if ((cVar2 != '\0') && (lVar6 = FUN_14479d2ce(lVar7), *(longlong *)(lVar6 + 0x18) == lVar1))
        {
          if (lVar7 != 0) {
            uVar5 = *param_1;
            uVar4 = FUN_145b32f04();
            local_58 = 2;
            FUN_140af9fb2(&local_50,lVar3,uVar4,uVar5);
            local_38 = local_50;
          }
          break;
        }
        lVar7 = lVar7 + 8;
        lVar8 = lVar8 + -8;
      } while (lVar8 != 0);
    }
    uVar5 = FUN_1475a15ec(lVar3,local_38);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 14759a658 FUN_14759a658 body=328 status=ok
// SIG undefined FUN_14759a658(void)

undefined8 FUN_14759a658(undefined8 *param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  longlong local_50;
  longlong local_48;
  int local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((DAT_14cb0d2b0 == (longlong *)0x0) ||
      (cVar2 = (**(code **)(*DAT_14cb0d2b0 + 0x2b0))(), cVar2 == '\0')) ||
     (lVar3 = FUN_140e3e8a6(DAT_14cb0d2b0), lVar3 == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = *param_1;
    uVar4 = FUN_145b32fee();
    local_58 = 0;
    FUN_140af9fb2(&local_38,lVar3,uVar4,uVar5);
    FUN_147593a3e(lVar3,&local_48,DAT_14cab4158);
    lVar1 = local_38;
    if ((longlong)local_40 != 0) {
      lVar8 = (longlong)local_40 << 3;
      lVar7 = local_48;
      do {
        cVar2 = FUN_144729dda(lVar7);
        if ((cVar2 != '\0') && (lVar6 = FUN_14479d2ce(lVar7), *(longlong *)(lVar6 + 0x18) == lVar1))
        {
          if (lVar7 != 0) {
            uVar5 = *param_1;
            uVar4 = FUN_145b32fee();
            local_58 = 2;
            FUN_140af9fb2(&local_50,lVar3,uVar4,uVar5);
            local_38 = local_50;
          }
          break;
        }
        lVar7 = lVar7 + 8;
        lVar8 = lVar8 + -8;
      } while (lVar8 != 0);
    }
    uVar5 = FUN_1475a16a4(lVar3,local_38);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 14759a7a2 FUN_14759a7a2 body=328 status=ok
// SIG undefined FUN_14759a7a2(void)

undefined8 FUN_14759a7a2(undefined8 *param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  longlong local_50;
  longlong local_48;
  int local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((DAT_14cb0d2b0 == (longlong *)0x0) ||
      (cVar2 = (**(code **)(*DAT_14cb0d2b0 + 0x2b0))(), cVar2 == '\0')) ||
     (lVar3 = FUN_140e3e8a6(DAT_14cb0d2b0), lVar3 == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = *param_1;
    uVar4 = FUN_145b330d8();
    local_58 = 0;
    FUN_140af9fb2(&local_38,lVar3,uVar4,uVar5);
    FUN_147593a3e(lVar3,&local_48,DAT_14cab4158);
    lVar1 = local_38;
    if ((longlong)local_40 != 0) {
      lVar8 = (longlong)local_40 << 3;
      lVar7 = local_48;
      do {
        cVar2 = FUN_144729dda(lVar7);
        if ((cVar2 != '\0') && (lVar6 = FUN_14479d2ce(lVar7), *(longlong *)(lVar6 + 0x18) == lVar1))
        {
          if (lVar7 != 0) {
            uVar5 = *param_1;
            uVar4 = FUN_145b330d8();
            local_58 = 2;
            FUN_140af9fb2(&local_50,lVar3,uVar4,uVar5);
            local_38 = local_50;
          }
          break;
        }
        lVar7 = lVar7 + 8;
        lVar8 = lVar8 + -8;
      } while (lVar8 != 0);
    }
    uVar5 = FUN_1475a175c(lVar3,local_38);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 14759a8ec FUN_14759a8ec body=328 status=ok
// SIG undefined FUN_14759a8ec(void)

undefined8 FUN_14759a8ec(undefined8 *param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  longlong local_50;
  longlong local_48;
  int local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((DAT_14cb0d2b0 == (longlong *)0x0) ||
      (cVar2 = (**(code **)(*DAT_14cb0d2b0 + 0x2b0))(), cVar2 == '\0')) ||
     (lVar3 = FUN_140e3e8a6(DAT_14cb0d2b0), lVar3 == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = *param_1;
    uVar4 = FUN_145b331c2();
    local_58 = 0;
    FUN_140af9fb2(&local_38,lVar3,uVar4,uVar5);
    FUN_147593a3e(lVar3,&local_48,DAT_14cab4158);
    lVar1 = local_38;
    if ((longlong)local_40 != 0) {
      lVar8 = (longlong)local_40 << 3;
      lVar7 = local_48;
      do {
        cVar2 = FUN_144729dda(lVar7);
        if ((cVar2 != '\0') && (lVar6 = FUN_14479d2ce(lVar7), *(longlong *)(lVar6 + 0x18) == lVar1))
        {
          if (lVar7 != 0) {
            uVar5 = *param_1;
            uVar4 = FUN_145b331c2();
            local_58 = 2;
            FUN_140af9fb2(&local_50,lVar3,uVar4,uVar5);
            local_38 = local_50;
          }
          break;
        }
        lVar7 = lVar7 + 8;
        lVar8 = lVar8 + -8;
      } while (lVar8 != 0);
    }
    uVar5 = FUN_1475a1814(lVar3,local_38);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 14759aa36 FUN_14759aa36 body=994 status=ok
// SIG undefined FUN_14759aa36(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14759aa36(undefined8 param_1,longlong *param_2,longlong *param_3,char param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  void *_Src;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  int local_98;
  int local_94;
  longlong *local_90;
  longlong *local_88;
  longlong local_80;
  void *local_78;
  undefined8 uStack_70;
  undefined8 *local_60;
  int local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  cVar4 = (**(code **)(*param_2 + 0x2b0))(param_2,1);
  if (cVar4 != '\0') {
    plVar1 = (longlong *)param_2[0x13];
    iVar5 = (**(code **)(*plVar1 + 0x318))(plVar1);
    (**(code **)(*plVar1 + 800))(plVar1,&local_60);
    lVar7 = FUN_14479d2ce(&local_60);
    FUN_14759215a(param_1);
    if (((DAT_14cb0d2b0 == (longlong *)0x0) ||
        (cVar4 = (**(code **)(*DAT_14cb0d2b0 + 0x2b0))(), cVar4 == '\0')) ||
       (lVar8 = FUN_140e3e8a6(DAT_14cb0d2b0), lVar8 == 0)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cab4518) && (FUN_144b3d300(&DAT_14cab4518), DAT_14cab4518 == -1))
      {
        DAT_14cab4508 = (void *)0x0;
        _DAT_14cab4510 = 0;
        atexit((_func_5014 *)&LAB_1432e76ce);
        _Init_thread_footer(&DAT_14cab4518);
      }
      _Src = DAT_14cab4508;
      local_78 = (void *)0x0;
      lVar7 = (longlong)DAT_14cab4510;
      uStack_70 = CONCAT44(uStack_70._4_4_,DAT_14cab4510);
      if (lVar7 == 0) {
        uStack_70 = _DAT_14cab4510 & 0xffffffff;
      }
      else {
        FUN_14759ba5a(&local_78,_DAT_14cab4510 & 0xffffffff,0);
        memcpy(local_78,_Src,lVar7 << 3);
      }
    }
    else {
      local_94 = iVar5;
      local_80 = lVar7;
      FUN_147593a3e(lVar8,&local_60,DAT_14cab4158);
      local_78 = (void *)0x0;
      uStack_70 = 0;
      if ((longlong)local_58 != 0) {
        lVar7 = (longlong)local_58 << 3;
        puVar10 = local_60;
        do {
          plVar9 = (longlong *)FUN_14479d2ce(puVar10);
          if (plVar9 != (longlong *)0x0) {
            lVar8 = FUN_1458989be();
            if (((*(int *)(lVar8 + 0x38) <= *(int *)(plVar9[2] + 0x38)) && (plVar9 != param_2)) &&
               ((*(longlong *)
                  (*(longlong *)(plVar9[2] + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
                 lVar8 + 0x30 && (plVar2 = (longlong *)plVar9[0x12], plVar2 != (longlong *)0x0)))) {
              local_a0 = plVar2;
              iVar5 = (**(code **)(*plVar2 + 0x318))();
              if (iVar5 == local_94) goto LAB_14759ac86;
              if (local_80 != 0 && param_4 == '\x01') {
                (**(code **)(*local_a0 + 800))(local_a0,&local_50);
                lVar8 = FUN_14479d2ce(&local_50);
                if (((lVar8 == local_80) &&
                    (cVar4 = (**(code **)(*plVar1 + 0x328))(plVar1,local_a0), cVar4 == '\0')) &&
                   (cVar4 = FUN_1432e40b8(param_1,local_a0,plVar1), cVar4 == '\0')) {
                  local_88 = (longlong *)plVar9[0x13];
                  if (local_88 == (longlong *)0x0) {
LAB_14759ac86:
                    uVar3 = uStack_70;
                    lVar8 = (longlong)(int)(uint)uStack_70;
                    uVar6 = (uint)uStack_70 + 1;
                    uStack_70 = CONCAT44(uStack_70._4_4_,uVar6);
                    if (uStack_70._4_4_ < uVar6) {
                      FUN_14759e5d8(&local_78,uVar3 & 0xffffffff);
                    }
                    *(undefined8 *)((longlong)local_78 + lVar8 * 8) = *puVar10;
                  }
                  else {
                    plVar9 = (longlong *)param_2[0x12];
                    local_98 = (**(code **)(*local_88 + 0x318))();
                    local_90 = plVar9;
                    iVar5 = (**(code **)(*plVar9 + 0x318))(plVar9);
                    if (local_98 != iVar5) {
                      local_50 = 0;
                      FUN_14485c47a(&local_50,param_1);
                      cVar4 = FUN_14759b1ae(&local_50,local_90,local_88);
                      if ((cVar4 == '\0') &&
                         (cVar4 = FUN_14759b1ae(&local_50,local_90,local_a0), cVar4 == '\0'))
                      goto LAB_14759ac86;
                    }
                  }
                }
              }
            }
          }
          puVar10 = puVar10 + 1;
          lVar7 = lVar7 + -8;
        } while (lVar7 != 0);
      }
      if (local_60 != (undefined8 *)0x0) {
        FUN_1400020a8(local_60);
      }
    }
    lVar7 = (longlong)(int)(uint)uStack_70;
    if (lVar7 != 0) {
      iVar5 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar5 + (uint)uStack_70;
      if ((uint)(*(int *)((longlong)param_3 + 0xc) - iVar5) < (uint)uStack_70) {
        FUN_14759e5d8(param_3,iVar5);
      }
      memcpy((void *)((longlong)iVar5 * 8 + *param_3),local_78,lVar7 << 3);
    }
    if (local_78 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14759ae1a FUN_14759ae1a body=914 status=ok
// SIG undefined FUN_14759ae1a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14759ae1a(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  void *pvVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined1 auStack_b8 [32];
  void *local_98;
  undefined8 uStack_90;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 *local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  cVar4 = (**(code **)(*param_2 + 0x2b0))(param_2,1);
  if (cVar4 != '\0') {
    FUN_14759215a(param_1);
    (**(code **)(*(longlong *)param_2[0x13] + 800))((longlong *)param_2[0x13],&local_70);
    lVar8 = FUN_14479d2ce(&local_70);
    if (lVar8 != 0) {
      lVar9 = FUN_144a799b0();
      iVar5 = *(int *)(lVar9 + 0x38);
      if ((iVar5 <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
         (*(longlong *)(*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)iVar5 * 8) ==
          lVar9 + 0x30)) {
        local_88 = (undefined8 *)0x0;
        uStack_80 = 0;
        FUN_1407329d4(lVar8,CONCAT71((int7)(int3)((uint)iVar5 >> 8),1),&local_88);
        if ((longlong)(int)uStack_80 != 0) {
          puVar1 = local_88 + (int)uStack_80;
          puVar13 = local_88;
          do {
            iVar5 = FUN_1432e3e1d(*puVar13);
            if (iVar5 != 0) {
              if (((DAT_14cb0d2b0 == (longlong *)0x0) ||
                  (cVar4 = (**(code **)(*DAT_14cb0d2b0 + 0x2b0))(), cVar4 == '\0')) ||
                 (lVar8 = FUN_140e3e8a6(DAT_14cb0d2b0), lVar8 == 0)) {
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x110) < DAT_14cab4500) &&
                   (FUN_144b3d300(&DAT_14cab4500), DAT_14cab4500 == -1)) {
                  DAT_14cab44f0 = (void *)0x0;
                  _DAT_14cab44f8 = 0;
                  atexit((_func_5014 *)&LAB_1432e76bd);
                  _Init_thread_footer(&DAT_14cab4500);
                }
                pvVar11 = DAT_14cab44f0;
                local_98 = (void *)0x0;
                lVar8 = (longlong)DAT_14cab44f8;
                uStack_90 = CONCAT44(uStack_90._4_4_,DAT_14cab44f8);
                if (lVar8 == 0) goto LAB_14759af89;
                FUN_14759ba5a(&local_98,_DAT_14cab44f8 & 0xffffffff,0);
                memcpy(local_98,pvVar11,lVar8 << 3);
              }
              else {
                FUN_147593a3e(lVar8,&local_70,DAT_14cab4158);
                local_98 = (void *)0x0;
                uStack_90 = 0;
                if ((longlong)local_68 != 0) {
                  lVar8 = (longlong)local_68 << 3;
                  puVar12 = local_70;
                  do {
                    lVar9 = FUN_14479d2ce(puVar12);
                    if (lVar9 != 0) {
                      lVar10 = FUN_1458989be();
                      iVar6 = *(int *)(lVar10 + 0x38);
                      if (((iVar6 <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
                          (*(longlong *)
                            (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + (longlong)iVar6 * 8
                            ) == lVar10 + 0x30)) &&
                         ((plVar2 = *(longlong **)(lVar9 + 0x98), plVar2 != (longlong *)0x0 &&
                          ((cVar4 = (**(code **)(*plVar2 + 0x2a0))
                                              (plVar2,CONCAT71((int7)(int3)((uint)iVar6 >> 8),1)),
                           cVar4 != '\0' &&
                           (iVar6 = (**(code **)(*plVar2 + 0x318))(plVar2), uVar3 = uStack_90,
                           iVar6 == iVar5)))))) {
                        lVar9 = (longlong)(int)uStack_90;
                        uVar7 = (int)uStack_90 + 1;
                        uStack_90 = CONCAT44(uStack_90._4_4_,uVar7);
                        if (uStack_90._4_4_ < uVar7) {
                          FUN_14759e5d8(&local_98,uVar3 & 0xffffffff);
                        }
                        *(undefined8 *)((longlong)local_98 + lVar9 * 8) = *puVar12;
                      }
                    }
                    puVar12 = puVar12 + 1;
                    lVar8 = lVar8 + -8;
                  } while (lVar8 != 0);
                }
                if (local_70 != (undefined8 *)0x0) {
                  FUN_1400020a8(local_70);
                }
              }
              if ((longlong)(int)uStack_90 != 0) {
                lVar8 = (longlong)(int)uStack_90 << 3;
                pvVar11 = local_98;
                do {
                  lVar9 = FUN_14479d2ce(pvVar11);
                  FUN_1475943ac((longlong)param_2 + 0x2c,lVar9 + 0x2c);
                  lVar9 = FUN_14479d2ce(pvVar11);
                  if (lVar9 != 0) {
                    lVar10 = FUN_1458989be();
                    if (((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38))
                        && (*(longlong *)
                             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
                             (longlong)*(int *)(lVar10 + 0x38) * 8) == lVar10 + 0x30)) &&
                       (FUN_140056680(&local_70,L"Attachment Dependency"),
                       local_70 != (undefined8 *)0x0)) {
                      FUN_1400020a8();
                    }
                  }
                  pvVar11 = (void *)((longlong)pvVar11 + 8);
                  lVar8 = lVar8 + -8;
                } while (lVar8 != 0);
              }
              if (local_98 != (void *)0x0) {
                FUN_1400020a8(local_98);
              }
            }
LAB_14759af89:
            puVar13 = puVar13 + 1;
          } while (puVar13 != puVar1);
        }
        if (local_88 != (undefined8 *)0x0) {
          FUN_1400020a8(local_88);
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14759b1ae FUN_14759b1ae body=302 status=ok
// SIG undefined FUN_14759b1ae(void)

ulonglong FUN_14759b1ae(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar1 = (**(code **)(*param_2 + 0x328))(param_2,param_3);
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (cVar1 != '\0') goto LAB_14759b1ea;
  cVar1 = FUN_144729dda(param_1);
  if (cVar1 != '\0') {
    lVar2 = FUN_14479d2ce(param_1);
    if ((lVar2 != 0) && ((*(uint *)(lVar2 + 8) >> 0x1e & 1) == 0)) {
      cVar1 = FUN_1432e40b8(lVar2,param_2,param_3);
      if (cVar1 != '\0') goto LAB_14759b1ea;
      local_68 = 0;
      local_60 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_5c = 0xffffffff00000080;
      local_54 = 0;
      local_48 = 0;
      local_40 = 0;
      uVar3 = (**(code **)(*param_2 + 0x310))(param_2);
      uVar4 = (**(code **)(*param_3 + 0x310))(param_3);
      cVar1 = FUN_1432e3edc(uVar3,uVar4,&local_88);
      local_40 = 0;
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      FUN_1475a0f96(&local_88);
      if (cVar1 != '\0') goto LAB_14759b1ea;
    }
  }
  uVar5 = 0;
LAB_14759b1ea:
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14759b2de FUN_14759b2de body=57 status=ok
// SIG undefined FUN_14759b2de(void)

undefined8 * FUN_14759b2de(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("Runtime\\Experimental\\Animation\\Constraints\\Public\\ConstraintsManager.h",0x52,
                L"Pure virtual not implemented (%s)",L"GetFunction");
  *param_2 = 0;
  param_2[2] = 0;
  return param_2;
}



// FUNCTION 14759b318 FUN_14759b318 body=42 status=ok
// SIG undefined FUN_14759b318(void)

undefined8 FUN_14759b318(void)

{
  FUN_140033559("Runtime\\Experimental\\Animation\\Constraints\\Public\\ConstraintsManager.h",0x58,
                L"Pure virtual not implemented (%s)",L"IsValid");
  return 0;
}



// FUNCTION 14759b342 FUN_14759b342 body=42 status=ok
// SIG undefined FUN_14759b342(void)

undefined8 FUN_14759b342(void)

{
  FUN_140033559("Runtime\\Experimental\\Animation\\Constraints\\Public\\ConstraintsManager.h",0x5f,
                L"Pure virtual not implemented (%s)",L"HasBoundObjects");
  return 0;
}



// FUNCTION 14759b36c FUN_14759b36c body=90 status=ok
// SIG undefined FUN_14759b36c(void)

void FUN_14759b36c(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_140033559("Runtime\\Experimental\\Animation\\Constraints\\Public\\ConstraintsManager.h",0x61,
                L"Pure virtual not implemented (%s)",L"ResolveBoundObjects");
  plVar3 = *(longlong **)(param_3 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x00014759b3bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14759b3c6 FUN_14759b3c6 body=42 status=ok
// SIG undefined FUN_14759b3c6(void)

undefined8 FUN_14759b3c6(void)

{
  FUN_140033559("Runtime\\Experimental\\Animation\\Constraints\\Public\\ConstraintsManager.h",100,
                L"Pure virtual not implemented (%s)",L"GetTargetHash");
  return 0;
}



// FUNCTION 14759b3f0 FUN_14759b3f0 body=42 status=ok
// SIG undefined FUN_14759b3f0(void)

undefined8 FUN_14759b3f0(void)

{
  FUN_140033559("Runtime\\Experimental\\Animation\\Constraints\\Public\\ConstraintsManager.h",0x66,
                L"Pure virtual not implemented (%s)",L"ReferencesObject");
  return 0;
}



// FUNCTION 14759b41a FUN_14759b41a body=41 status=ok
// SIG undefined FUN_14759b41a(void)

void FUN_14759b41a(void)

{
  FUN_140033559("Runtime\\Experimental\\Animation\\Constraints\\Public\\ConstraintsManager.h",0x6a,
                L"Pure virtual not implemented (%s)",L"UTickableConstraint::InitConstraint");
  return;
}



// FUNCTION 14759b444 FUN_14759b444 body=41 status=ok
// SIG undefined FUN_14759b444(void)

void FUN_14759b444(void)

{
  FUN_140033559("Runtime\\Experimental\\Animation\\Constraints\\Public\\ConstraintsManager.h",0x6c,
                L"Pure virtual not implemented (%s)",L"UTickableConstraint::DeInitConstraint");
  return;
}



// FUNCTION 14759b46e FUN_14759b46e body=41 status=ok
// SIG undefined FUN_14759b46e(void)

void FUN_14759b46e(void)

{
  FUN_140033559("Runtime\\Experimental\\Animation\\Constraints\\Public\\ConstraintsManager.h",0x6e,
                L"Pure virtual not implemented (%s)",L"UTickableConstraint::AddedToWorld");
  return;
}



// FUNCTION 14759b498 FUN_14759b498 body=38 status=ok
// SIG undefined FUN_14759b498(void)

undefined8 FUN_14759b498(undefined8 param_1,int param_2)

{
  FUN_147592a46();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14759b4ca FUN_14759b4ca body=42 status=ok
// SIG undefined FUN_14759b4ca(void)

undefined8 FUN_14759b4ca(void)

{
  FUN_140033559("Runtime\\Experimental\\Animation\\Constraints\\Public\\TransformableHandle.h",0x3c,
                L"Pure virtual not implemented (%s)",L"IsValid");
  return 0;
}



// FUNCTION 14759b4f4 FUN_14759b4f4 body=41 status=ok
// SIG undefined FUN_14759b4f4(void)

void FUN_14759b4f4(void)

{
  FUN_140033559("Runtime\\Experimental\\Animation\\Constraints\\Public\\TransformableHandle.h",0x3f,
                L"Pure virtual not implemented (%s)",L"SetGlobalTransform");
  return;
}



// FUNCTION 14759b51e FUN_14759b51e body=41 status=ok
// SIG undefined FUN_14759b51e(void)

void FUN_14759b51e(void)

{
  FUN_140033559("Runtime\\Experimental\\Animation\\Constraints\\Public\\TransformableHandle.h",0x41,
                L"Pure virtual not implemented (%s)",L"SetLocalTransform");
  return;
}



// FUNCTION 14759b548 FUN_14759b548 body=70 status=ok
// SIG undefined FUN_14759b548(void)

undefined8 * FUN_14759b548(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  FUN_140033559("Runtime\\Experimental\\Animation\\Constraints\\Public\\TransformableHandle.h",0x43,
                L"Pure virtual not implemented (%s)",L"GetGlobalTransform");
  puVar2 = &DAT_14c846480;
  puVar3 = param_2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return param_2;
}



// FUNCTION 14759b58e FUN_14759b58e body=70 status=ok
// SIG undefined FUN_14759b58e(void)

undefined8 * FUN_14759b58e(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  FUN_140033559("Runtime\\Experimental\\Animation\\Constraints\\Public\\TransformableHandle.h",0x45,
                L"Pure virtual not implemented (%s)",L"GetLocalTransform");
  puVar2 = &DAT_14c846480;
  puVar3 = param_2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return param_2;
}



// FUNCTION 14759b5d4 FUN_14759b5d4 body=90 status=ok
// SIG undefined FUN_14759b5d4(void)

void FUN_14759b5d4(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_140033559("Runtime\\Experimental\\Animation\\Constraints\\Public\\TransformableHandle.h",0x4b,
                L"Pure virtual not implemented (%s)",L"ResolveBoundObjects");
  plVar3 = *(longlong **)(param_3 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x00014759b623. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14759b62e FUN_14759b62e body=42 status=ok
// SIG undefined FUN_14759b62e(void)

undefined8 FUN_14759b62e(void)

{
  FUN_140033559("Runtime\\Experimental\\Animation\\Constraints\\Public\\TransformableHandle.h",0x4e,
                L"Pure virtual not implemented (%s)",L"Duplicate");
  return 0;
}



// FUNCTION 14759b65a FUN_14759b65a body=62 status=ok
// SIG undefined FUN_14759b65a(void)

undefined8 * FUN_14759b65a(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("Runtime\\Experimental\\Animation\\Constraints\\Public\\TransformableHandle.h",0x5e,
                L"Pure virtual not implemented (%s)",L"GetFloatChannels");
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return param_2;
}



// FUNCTION 14759b698 FUN_14759b698 body=62 status=ok
// SIG undefined FUN_14759b698(void)

undefined8 * FUN_14759b698(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("Runtime\\Experimental\\Animation\\Constraints\\Public\\TransformableHandle.h",0x60,
                L"Pure virtual not implemented (%s)",L"GetDoubleChannels");
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return param_2;
}



// FUNCTION 14759b6d6 FUN_14759b6d6 body=42 status=ok
// SIG undefined FUN_14759b6d6(void)

undefined8 FUN_14759b6d6(void)

{
  FUN_140033559("Runtime\\Experimental\\Animation\\Constraints\\Public\\TransformableHandle.h",0x67,
                L"Pure virtual not implemented (%s)",L"AddTransformKeys");
  return 0;
}



// FUNCTION 14759b700 FUN_14759b700 body=42 status=ok
// SIG undefined FUN_14759b700(void)

undefined8 FUN_14759b700(void)

{
  FUN_140033559("Runtime\\Experimental\\Animation\\Constraints\\Public\\TransformableHandle.h",0x6d,
                L"Pure virtual not implemented (%s)",L"GetPrerequisiteObject");
  return 0;
}



// FUNCTION 14759b72a FUN_14759b72a body=42 status=ok
// SIG undefined FUN_14759b72a(void)

undefined8 FUN_14759b72a(void)

{
  FUN_140033559("Runtime\\Experimental\\Animation\\Constraints\\Public\\TransformableHandle.h",0x72,
                L"Pure virtual not implemented (%s)",L"GetTickFunction");
  return 0;
}



// FUNCTION 14759b754 FUN_14759b754 body=42 status=ok
// SIG undefined FUN_14759b754(void)

undefined8 FUN_14759b754(void)

{
  FUN_140033559("Runtime\\Experimental\\Animation\\Constraints\\Public\\TransformableHandle.h",0x75,
                L"Pure virtual not implemented (%s)",L"GetHash");
  return 0;
}



// FUNCTION 14759b77e FUN_14759b77e body=55 status=ok
// SIG undefined FUN_14759b77e(void)

undefined8 * FUN_14759b77e(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("Runtime\\Experimental\\Animation\\Constraints\\Public\\TransformableHandle.h",0x78,
                L"Pure virtual not implemented (%s)",L"GetTarget");
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14759b7b6 FUN_14759b7b6 body=42 status=ok
// SIG undefined FUN_14759b7b6(void)

undefined8 FUN_14759b7b6(void)

{
  FUN_140033559("Runtime\\Experimental\\Animation\\Constraints\\Public\\TransformableHandle.h",0x7b,
                L"Pure virtual not implemented (%s)",L"HasDirectDependencyWith");
  return 0;
}



// FUNCTION 14759b7e0 FUN_14759b7e0 body=54 status=ok
// SIG undefined FUN_14759b7e0(void)

undefined8 * FUN_14759b7e0(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("Runtime\\Experimental\\Animation\\Constraints\\Public\\TransformableHandle.h",0x7e,
                L"Pure virtual not implemented (%s)",L"GetPrimaryPrerequisite");
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 14759b816 FUN_14759b816 body=41 status=ok
// SIG undefined FUN_14759b816(void)

void FUN_14759b816(void)

{
  FUN_140033559("Runtime\\Experimental\\Animation\\Constraints\\Public\\TransformConstraint.h",0x86,
                L"Pure virtual not implemented (%s)",L"ComputeOffset");
  return;
}



// FUNCTION 14759b886 FUN_14759b886 body=54 status=ok
// SIG undefined FUN_14759b886(void)

undefined1 FUN_14759b886(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14759b99a(param_2,param_3);
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return 1;
}



// FUNCTION 14759b8e4 FUN_14759b8e4 body=59 status=ok
// SIG undefined FUN_14759b8e4(void)

undefined8 FUN_14759b8e4(longlong *param_1)

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



// FUNCTION 14759b92a FUN_14759b92a body=34 status=ok
// SIG undefined FUN_14759b92a(void)

void FUN_14759b92a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_1457b7348(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 14759b99a FUN_14759b99a body=104 status=ok
// SIG undefined FUN_14759b99a(void)

undefined8 * FUN_14759b99a(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *param_1 = *param_2;
  FUN_14759ba02(param_1 + 1,param_2 + 1);
  uVar3 = param_2[3];
  lVar4 = param_2[4];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_1[4];
  param_1[3] = uVar3;
  param_1[4] = lVar4;
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
  return param_1;
}



// FUNCTION 14759ba02 FUN_14759ba02 body=88 status=ok
// SIG undefined FUN_14759ba02(void)

undefined8 * FUN_14759ba02(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14759ba5a(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 14759ba5a FUN_14759ba5a body=98 status=ok
// SIG undefined FUN_14759ba5a(void)

void FUN_14759ba5a(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,4);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14759babe FUN_14759babe body=32 status=ok
// SIG undefined FUN_14759babe(void)

void FUN_14759babe(undefined8 param_1,undefined8 *param_2)

{
  FUN_140aec500(param_2);
  *param_2 = &PTR_FUN_14a49f3e0;
  return;
}



// FUNCTION 14759bade FUN_14759bade body=32 status=ok
// SIG undefined FUN_14759bade(void)

void FUN_14759bade(undefined8 param_1,undefined8 *param_2)

{
  FUN_140aec500(param_2);
  *param_2 = &PTR_FUN_14a49f3e0;
  return;
}



// FUNCTION 14759bb22 FUN_14759bb22 body=63 status=ok
// SIG undefined FUN_14759bb22(void)

undefined1 FUN_14759bb22(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14753b184(param_2,param_3);
    param_3 = param_3 + 0x108;
    param_2 = param_2 + 0x108;
  }
  return 1;
}



// FUNCTION 14759bb8e FUN_14759bb8e body=59 status=ok
// SIG undefined FUN_14759bb8e(void)

undefined8 FUN_14759bb8e(longlong *param_1)

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



// FUNCTION 14759bbda FUN_14759bbda body=38 status=ok
// SIG undefined FUN_14759bbda(void)

void FUN_14759bbda(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x108) == '\x01') {
    FUN_140bb7e7c(param_2);
    *(undefined1 *)(param_2 + 0x108) = 0;
  }
  return;
}



// FUNCTION 14759bc4e FUN_14759bc4e body=38 status=ok
// SIG undefined FUN_14759bc4e(void)

undefined8 FUN_14759bc4e(undefined8 param_1,int param_2)

{
  FUN_140bb7e7c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14759bc88 FUN_14759bc88 body=49 status=ok
// SIG undefined FUN_14759bc88(void)

longlong FUN_14759bc88(longlong param_1,longlong param_2)

{
  FUN_140861d3c(param_2,param_1,param_1 + 0x58,param_1 + 0x80);
  *(longlong *)(param_2 + 0x18) = param_1 + 0x70;
  return param_2;
}



// FUNCTION 14759bcba FUN_14759bcba body=43 status=ok
// SIG undefined FUN_14759bcba(void)

void FUN_14759bcba(undefined8 param_1,undefined8 *param_2)

{
  FUN_140aec500(param_2);
  *param_2 = &PTR_FUN_14a49f3e0;
  param_2[0x21] = 0;
  return;
}



// FUNCTION 14759bce6 FUN_14759bce6 body=43 status=ok
// SIG undefined FUN_14759bce6(void)

void FUN_14759bce6(undefined8 param_1,undefined8 *param_2)

{
  FUN_140aec500(param_2);
  *param_2 = &PTR_FUN_14a49f3e0;
  param_2[0x21] = 0;
  return;
}



// FUNCTION 14759bd30 FUN_14759bd30 body=104 status=ok
// SIG undefined FUN_14759bd30(void)

undefined1 FUN_14759bd30(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14753b184(param_2,param_3);
    lVar1 = *(longlong *)(param_3 + 0x108);
    if (DAT_14c950c29 == '\x01') {
      if (lVar1 == 0) {
        lVar1 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar1 = *(longlong *)(param_3 + 0x108);
      }
    }
    param_3 = param_3 + 0x110;
    *(longlong *)(param_2 + 0x108) = lVar1;
    param_2 = param_2 + 0x110;
  }
  return 1;
}



// FUNCTION 14759bdc0 FUN_14759bdc0 body=59 status=ok
// SIG undefined FUN_14759bdc0(void)

undefined8 FUN_14759bdc0(longlong *param_1)

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



// FUNCTION 14759be0c FUN_14759be0c body=38 status=ok
// SIG undefined FUN_14759be0c(void)

void FUN_14759be0c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x110) == '\x01') {
    FUN_140bb7e7c(param_2);
    *(undefined1 *)(param_2 + 0x110) = 0;
  }
  return;
}



// FUNCTION 14759be82 FUN_14759be82 body=106 status=ok
// SIG undefined FUN_14759be82(void)

void FUN_14759be82(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = (longlong)*(int *)(*(longlong *)(param_1 + 8) + 8);
  if (0 < lVar5) {
    lVar3 = 0;
    lVar6 = 0;
    iVar4 = 0;
    do {
      cVar1 = FUN_144729dda(**(longlong **)(param_1 + 8) + lVar3);
      if (cVar1 != '\0') {
        lVar2 = FUN_14759c152(param_1,**(longlong **)(param_1 + 8) + lVar3);
        *(int *)(lVar2 + 0x18) = iVar4;
        iVar4 = iVar4 + 1;
        *(int *)(lVar2 + 0x1c) = (int)lVar6;
      }
      lVar6 = lVar6 + 1;
      lVar3 = lVar3 + 8;
    } while (lVar5 != lVar6);
  }
  return;
}



// FUNCTION 14759beec FUN_14759beec body=572 status=ok
// SIG undefined FUN_14759beec(void)

void FUN_14759beec(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_148 [40];
  undefined1 local_120 [4];
  undefined4 local_11c;
  longlong local_118;
  undefined1 local_110 [24];
  int local_f8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar2 = (longlong)(int)(*(longlong **)(param_1 + 0x10))[1];
  if (lVar2 != 0) {
    lVar6 = **(longlong **)(param_1 + 0x10);
    lVar2 = lVar2 * 200 + lVar6;
    do {
      lVar9 = (longlong)*(int *)(*(longlong *)(lVar6 + 0x10) + 0x18);
      if (lVar9 != 0) {
        lVar7 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x10);
        lVar9 = lVar9 * 0x10 + lVar7;
LAB_14759bf4e:
        cVar1 = FUN_144b00e3a(lVar7,1,0);
        if ((cVar1 != '\0') && (*(longlong *)(lVar7 + 8) != 0)) {
          plVar10 = *(longlong **)(param_1 + 0x10);
          local_118 = *(longlong *)(lVar7 + 8);
          FUN_14759c38c(local_110,lVar6);
          lVar4 = (longlong)(int)plVar10[1];
          if (lVar4 != 0) {
            lVar8 = *plVar10;
            plVar10 = (longlong *)(lVar8 + 0x10);
            lVar5 = 0;
            do {
              if (((int)plVar10[1] != local_f8) && (*plVar10 == local_118)) {
                FUN_1475922d0(local_110);
                lVar8 = lVar8 - lVar5;
                if (lVar8 == 0) goto LAB_14759bf69;
                if ((int)plVar10[3] == *(int *)((longlong)plVar10 + 0x44)) goto LAB_14759c04e;
                lVar4 = lVar8 + 0x58;
                if (plVar10[10] != 0) {
                  lVar4 = plVar10[10];
                }
                iVar3 = *(int *)(lVar4 + (ulonglong)
                                         ((int)plVar10[0xb] - 1U & *(uint *)(lVar6 + 0x18)) * 4);
                if (iVar3 == -1) goto LAB_14759c04e;
                goto LAB_14759bfa2;
              }
              lVar5 = lVar5 + -200;
              plVar10 = plVar10 + 0x19;
            } while (lVar4 * -200 - lVar5 != 0);
          }
          FUN_1475922d0(local_110);
        }
        goto LAB_14759bf69;
      }
LAB_14759c01c:
      lVar6 = lVar6 + 200;
    } while (lVar6 != lVar2);
  }
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while (iVar3 = *(int *)(plVar10[2] + (longlong)iVar3 * 0xc + 4), iVar3 != -1) {
LAB_14759bfa2:
    if (*(uint *)(plVar10[2] + (longlong)iVar3 * 0xc) == *(uint *)(lVar6 + 0x18))
    goto LAB_14759c06c;
  }
LAB_14759c04e:
  local_11c = (undefined4)plVar10[1];
  FUN_140db0a94(lVar6 + 0x20,local_120,&local_11c,0);
LAB_14759c06c:
  if (*(int *)(lVar6 + 0x78) != *(int *)(lVar6 + 0xa4)) {
    lVar4 = lVar6 + 0xa8;
    if (*(longlong *)(lVar6 + 0xb0) != 0) {
      lVar4 = *(longlong *)(lVar6 + 0xb0);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)(*(int *)(lVar6 + 0xb8) - 1U & *(uint *)(plVar10 + 1)) * 4);
    if (iVar3 != -1) {
      do {
        if (*(uint *)(*(longlong *)(lVar6 + 0x70) + (longlong)iVar3 * 0xc) == *(uint *)(plVar10 + 1)
           ) goto LAB_14759bf69;
        iVar3 = *(int *)(*(longlong *)(lVar6 + 0x70) + (longlong)iVar3 * 0xc + 4);
      } while (iVar3 != -1);
    }
  }
  local_11c = *(undefined4 *)(lVar6 + 0x18);
  FUN_140db0a94(lVar8 + 0x70,local_120,&local_11c,0);
LAB_14759bf69:
  lVar7 = lVar7 + 0x10;
  if (lVar7 == lVar9) goto LAB_14759c01c;
  goto LAB_14759bf4e;
}



// FUNCTION 14759c129 FUN_14759c129 body=41 status=ok
// SIG undefined FUN_14759c129(void)

void FUN_14759c129(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1475922d0(param_1);
    param_1 = param_1 + 200;
  }
  return;
}



// FUNCTION 14759c152 FUN_14759c152 body=490 status=ok
// SIG undefined FUN_14759c152(void)

longlong FUN_14759c152(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_138 [40];
  undefined8 local_110;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_108 = *param_2;
  lVar5 = (longlong)(int)((longlong *)param_1[2])[1];
  if (lVar5 != 0) {
    lVar1 = *(longlong *)param_1[2];
    lVar7 = 0;
    do {
      cVar3 = FUN_14759c33e(&local_108,lVar1 + lVar7);
      if (cVar3 != '\0') {
        iVar4 = (int)(lVar7 >> 3) * -0x3d70a3d7;
        if (iVar4 != -1) {
          lVar5 = (longlong)iVar4 * 200 + *(longlong *)param_1[2];
          goto LAB_14759c1ea;
        }
        break;
      }
      lVar7 = lVar7 + 200;
    } while (lVar5 * 200 - lVar7 != 0);
  }
  uStack_f0 = 0xffffffffffffffff;
  local_c8 = 0;
  local_c0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_bc = 0xffffffff00000080;
  local_b4 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  lVar5 = FUN_14479d2ce(param_2);
  local_108 = *(undefined8 *)(lVar5 + 0x2c);
  uStack_100 = *(undefined4 *)(lVar5 + 0x34);
  uStack_fc = *(undefined4 *)(lVar5 + 0x38);
  lVar5 = FUN_14479d2ce(param_2);
  local_110 = 0;
  FUN_14485c47a(&local_110,*(undefined8 *)(*param_1 + 0x30));
  local_f8 = FUN_14759e65e(lVar5 + 0x40,(uint)((ulonglong)local_110 >> 0x20) ^ (uint)local_110,
                           &local_110);
  plVar2 = (longlong *)param_1[2];
  iVar4 = (int)plVar2[1];
  *(uint *)(plVar2 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)plVar2 + 0xc) < iVar4 + 1U) {
    FUN_14759e4b0(plVar2,iVar4);
  }
  lVar7 = *plVar2;
  lVar6 = (longlong)iVar4 * 200;
  lVar5 = lVar7 + lVar6;
  lVar1 = lVar7 + 0x20 + lVar6;
  *(undefined4 *)(lVar1 + -0x10) = (undefined4)local_f8;
  *(undefined4 *)(lVar1 + -0xc) = local_f8._4_4_;
  *(undefined4 *)(lVar1 + -8) = (undefined4)uStack_f0;
  *(undefined4 *)(lVar1 + -4) = uStack_f0._4_4_;
  *(undefined4 *)(lVar1 + -0x20) = (undefined4)local_108;
  *(undefined4 *)(lVar1 + -0x1c) = local_108._4_4_;
  *(undefined4 *)(lVar1 + -0x18) = uStack_100;
  *(undefined4 *)(lVar1 + -0x14) = uStack_fc;
  FUN_146b7eae6(lVar1,&local_e8);
  FUN_146b7eae6(lVar7 + lVar6 + 0x70,&local_98);
  *(undefined1 *)(lVar7 + lVar6 + 0xc0) = local_48;
  FUN_1475922d0(&local_108);
LAB_14759c1ea:
  if ((local_38 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 14759c33e FUN_14759c33e body=78 status=ok
// SIG undefined FUN_14759c33e(void)

bool FUN_14759c33e(undefined8 param_1,int *param_2)

{
  char cVar1;
  longlong lVar2;
  bool bVar3;
  
  cVar1 = FUN_144729dda();
  if (cVar1 == '\0') {
    bVar3 = false;
  }
  else {
    lVar2 = FUN_14479d2ce(param_1);
    bVar3 = param_2[3] == *(int *)(lVar2 + 0x38) &&
            (param_2[2] == *(int *)(lVar2 + 0x34) &&
            (param_2[1] == *(int *)(lVar2 + 0x30) && *param_2 == *(int *)(lVar2 + 0x2c)));
  }
  return bVar3;
}



// FUNCTION 14759c38c FUN_14759c38c body=173 status=ok
// SIG undefined FUN_14759c38c(void)

undefined4 * FUN_14759c38c(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[5];
  uVar6 = param_2[6];
  uVar7 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  param_1[7] = uVar7;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  *(undefined8 *)(param_1 + 0x10) = 0;
  param_1[0x12] = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0x13) = 0xffffffff00000080;
  param_1[0x15] = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  param_1[0x1a] = 0;
  FUN_146b7a2e2(param_1 + 8,param_2 + 8);
  *(undefined8 *)(param_1 + 0x24) = 0;
  param_1[0x26] = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x27) = 0xffffffff00000080;
  param_1[0x29] = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  param_1[0x2e] = 0;
  FUN_146b7a2e2(param_1 + 0x1c,param_2 + 0x1c);
  *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
  return param_1;
}



// FUNCTION 14759c43a FUN_14759c43a body=1319 status=ok
// SIG undefined FUN_14759c43a(void)

void FUN_14759c43a(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_118 [40];
  longlong local_f0;
  undefined1 local_e4 [4];
  longlong *local_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
    plVar5 = param_2 + 7;
    if ((longlong *)param_2[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_2[8];
    }
    iVar2 = *(int *)((longlong)plVar5 +
                    (ulonglong)((int)param_2[9] - 1U & *(uint *)(param_1 + 0x18)) * 4);
    if (iVar2 != -1) {
      do {
        lVar4 = *param_2 + (longlong)iVar2 * 0x10;
        if (*(uint *)(*param_2 + (longlong)iVar2 * 0x10) == *(uint *)(param_1 + 0x18))
        goto LAB_14759c46f;
        iVar2 = *(int *)(lVar4 + 8);
      } while (iVar2 != -1);
    }
  }
  lVar4 = 0;
LAB_14759c46f:
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(lVar4 + 4);
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    local_78 = 0;
    local_70 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    uVar8 = *(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x54);
    if ((int)uVar8 < 0) goto LAB_14759c95a;
    FUN_146b7f620(&local_98,uVar8);
    iVar2 = 1;
    if (3 < uVar8) {
      uVar8 = (uVar8 | 1) + 0xe;
      iVar2 = 0x1f;
      if (uVar8 != 0) {
        for (; uVar8 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar2 = 1 << ((byte)iVar2 & 0x1f);
    }
    if ((local_50 == 0) || (local_50 < iVar2)) {
      local_50 = iVar2;
      FUN_1449809d4();
    }
    plVar5 = (longlong *)(param_1 + 0x20);
    lVar4 = param_1 + 0x30;
    local_b8 = 0x100000000;
    local_a8 = 0xffffffff;
    local_a0 = 0;
    iVar2 = 0;
    local_b0 = lVar4;
    if (*(int *)(param_1 + 0x48) != 0) {
      FUN_1449c0562(&local_b8);
      iVar2 = *(int *)(param_1 + 0x48);
    }
    local_c8 = local_a8;
    uVar1 = local_c8;
    local_c0 = local_a0;
    local_bc = local_9c;
    local_d8 = local_b8;
    local_d0 = local_b0;
    local_c8._4_4_ = (int)((ulonglong)local_a8 >> 0x20);
    local_f0 = param_1;
    local_e0 = plVar5;
    if ((local_c8._4_4_ != iVar2) || (local_b0 != lVar4)) {
      iVar3 = local_c8._4_4_;
      local_c8 = uVar1;
      do {
        if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
          uVar8 = *(uint *)(*local_e0 + (longlong)iVar3 * 0xc);
          plVar6 = (longlong *)param_2[8];
          if ((longlong *)param_2[8] == (longlong *)0x0) {
            plVar6 = param_2 + 7;
          }
          iVar3 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_2[9] - 1U & uVar8) * 4);
          if (iVar3 != -1) {
            do {
              lVar7 = *param_2 + (longlong)iVar3 * 0x10;
              if (*(uint *)(*param_2 + (longlong)iVar3 * 0x10) == uVar8) goto LAB_14759c7f5;
              iVar3 = *(int *)(lVar7 + 8);
            } while (iVar3 != -1);
          }
        }
        lVar7 = 0;
LAB_14759c7f5:
        local_b8 = CONCAT44(local_b8._4_4_,*(undefined4 *)(lVar7 + 4));
        FUN_140db0a94(&local_98,local_e4,&local_b8,0);
        local_c8 = CONCAT44(local_c8._4_4_,(uint)local_c8 & ~local_d8._4_4_);
        FUN_1449c0562(&local_d8);
        iVar3 = local_c8._4_4_;
        uVar1 = local_c8;
      } while (local_e0 != plVar5 || (local_d0 != lVar4 || local_c8._4_4_ != iVar2));
    }
    local_c8 = uVar1;
    FUN_14759db7a(plVar5,&local_98);
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_1401bc218();
    param_1 = local_f0;
  }
  if (*(int *)(param_1 + 0x78) != *(int *)(param_1 + 0xa4)) {
    local_78 = 0;
    local_70 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    uVar8 = *(int *)(param_1 + 0x78) - *(int *)(param_1 + 0xa4);
    if ((int)uVar8 < 0) {
LAB_14759c95a:
      local_50 = 0;
      local_58 = 0;
      local_64 = 0;
      local_6c = 0xffffffff00000080;
      local_70 = 0;
      local_78 = 0;
      uStack_90 = 0;
      local_98 = 0;
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar8);
    }
    FUN_146b7f620(&local_98,uVar8);
    iVar2 = 1;
    if (3 < uVar8) {
      uVar8 = (uVar8 | 1) + 0xe;
      iVar2 = 0x1f;
      if (uVar8 != 0) {
        for (; uVar8 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar2 = 1 << ((byte)iVar2 & 0x1f);
    }
    if ((local_50 == 0) || (local_50 < iVar2)) {
      local_50 = iVar2;
      FUN_1449809d4();
    }
    plVar5 = (longlong *)(param_1 + 0x70);
    lVar4 = param_1 + 0x80;
    local_b8 = 0x100000000;
    local_a8 = 0xffffffff;
    local_a0 = 0;
    iVar2 = 0;
    local_b0 = lVar4;
    if (*(int *)(param_1 + 0x98) != 0) {
      FUN_1449c0562(&local_b8);
      iVar2 = *(int *)(param_1 + 0x98);
    }
    local_c8 = local_a8;
    uVar1 = local_c8;
    local_c0 = local_a0;
    local_bc = local_9c;
    local_d8 = local_b8;
    local_d0 = local_b0;
    local_c8._4_4_ = (int)((ulonglong)local_a8 >> 0x20);
    local_e0 = plVar5;
    if ((local_c8._4_4_ != iVar2) || (local_b0 != lVar4)) {
      iVar3 = local_c8._4_4_;
      local_c8 = uVar1;
      do {
        if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
          uVar8 = *(uint *)(*local_e0 + (longlong)iVar3 * 0xc);
          plVar6 = (longlong *)param_2[8];
          if ((longlong *)param_2[8] == (longlong *)0x0) {
            plVar6 = param_2 + 7;
          }
          iVar3 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_2[9] - 1U & uVar8) * 4);
          if (iVar3 != -1) {
            do {
              lVar7 = *param_2 + (longlong)iVar3 * 0x10;
              if (*(uint *)(*param_2 + (longlong)iVar3 * 0x10) == uVar8) goto LAB_14759c8b9;
              iVar3 = *(int *)(lVar7 + 8);
            } while (iVar3 != -1);
          }
        }
        lVar7 = 0;
LAB_14759c8b9:
        local_b8 = CONCAT44(local_b8._4_4_,*(undefined4 *)(lVar7 + 4));
        FUN_140db0a94(&local_98,local_e4,&local_b8,0);
        local_c8 = CONCAT44(local_c8._4_4_,(uint)local_c8 & ~local_d8._4_4_);
        FUN_1449c0562(&local_d8);
        iVar3 = local_c8._4_4_;
        uVar1 = local_c8;
      } while (local_e0 != plVar5 || (local_d0 != lVar4 || local_c8._4_4_ != iVar2));
    }
    local_c8 = uVar1;
    FUN_14759db7a(plVar5,&local_98);
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_1401bc218(&local_98);
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14759c964 FUN_14759c964 body=105 status=ok
// SIG undefined FUN_14759c964(void)

undefined8 FUN_14759c964(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_2 * 200,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2 >> 3;
  uVar3 = SUB168(auVar1 * ZEXT816(0x28f5c28f5c28f5c3),0);
  uVar2 = (uVar2 >> 3) / 0x19;
  uVar5 = 0x7fffffff;
  if (param_2 <= (int)uVar2) {
    uVar5 = uVar2 & 0xffffffff;
  }
  iVar4 = (int)uVar5;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(param_1,0,uVar5,200,8);
  }
  *(int *)(param_1 + 0xc) = iVar4;
  return uVar3;
}



// FUNCTION 14759c9cd FUN_14759c9cd body=55 status=ok
// SIG undefined FUN_14759c9cd(void)

void FUN_14759c9cd(longlong param_1,longlong param_2,int param_3)

{
  do {
    FUN_14759c38c(param_1,param_2);
    param_1 = param_1 + 200;
    param_2 = param_2 + 200;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 14759ca04 FUN_14759ca04 body=1393 status=ok
// SIG undefined FUN_14759ca04(void)

ulonglong FUN_14759ca04(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 auStack_3b8 [40];
  ulonglong local_390;
  longlong *local_388;
  undefined1 local_37c [4];
  longlong local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined1 *local_360;
  undefined8 local_358;
  undefined4 local_350;
  undefined4 local_34c;
  longlong local_348 [4];
  undefined8 local_328;
  undefined4 local_320;
  undefined8 local_31c;
  undefined4 local_314;
  longlong local_308;
  undefined4 local_300;
  longlong local_2f8;
  undefined8 uStack_2f0;
  undefined1 local_2e8 [16];
  undefined8 local_2d8;
  int local_2d0;
  undefined8 local_2cc;
  int local_2c4;
  longlong local_2b8;
  undefined4 local_2b0;
  longlong local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_288;
  undefined4 local_280;
  undefined8 local_27c;
  int local_274;
  undefined8 local_268;
  int local_260;
  longlong local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  ulonglong uStack_240;
  longlong local_238;
  undefined8 uStack_230;
  undefined1 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  plVar9 = &local_2a8;
  local_288 = 0;
  local_280 = 0;
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_27c = 0xffffffff00000080;
  local_274 = 0;
  local_268 = 0;
  local_260 = 0;
  local_c8 = 0;
  local_258 = 0;
  uStack_250 = 0;
  local_248 = 0;
  uStack_240 = 0;
  local_238 = 0;
  uStack_230 = 0;
  local_2d8 = 0;
  local_2d0 = 0;
  local_2f8 = 0;
  uStack_2f0 = 0;
  local_2cc = 0xffffffff00000080;
  local_2c4 = 0;
  local_2b8 = 0;
  local_2b0 = 0;
  FUN_14759cf77(plVar9,param_1,param_2);
  uVar10 = uStack_240;
  local_328 = 0;
  local_320 = 0;
  local_348[0] = 0;
  local_348[1] = 0;
  local_31c = 0xffffffff00000080;
  local_314 = 0;
  local_308 = 0;
  local_300 = 0;
  local_378 = 0;
  uStack_370 = 0;
  uVar7 = (uint)uStack_240;
  uVar15 = uStack_240 & 0xffffffff;
  if ((int)(uint)uStack_240 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar15);
  }
  local_388 = param_1;
  if (uVar15 != 0) {
    FUN_14481578e(&local_378,uVar15);
    if ((uint)((int)uStack_2a0 - local_274) < uVar7) {
      FUN_1400bac10(&local_2a8,uVar10 & 0xffffffff);
      iVar5 = 1;
      if (3 < uVar7) {
        uVar4 = (uVar7 | 1) + 0xe;
        iVar5 = 0x1f;
        if (uVar4 != 0) {
          for (; uVar4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        iVar5 = 1 << ((byte)iVar5 & 0x1f);
      }
      if ((local_260 == 0) || (local_260 < iVar5)) {
        local_260 = iVar5;
        FUN_144a56d22();
      }
    }
    plVar9 = &local_b8;
    local_b8 = (longlong *)((ulonglong)local_b8._4_4_ << 0x20);
    do {
      FUN_1447cbafe(&local_2a8,&local_368,plVar9,0);
      iVar5 = (int)local_b8 + 1;
      local_b8 = (longlong *)CONCAT44(local_b8._4_4_,iVar5);
    } while (iVar5 < (int)uVar7);
  }
  local_390 = uVar15;
  if (local_274 < (int)uStack_2a0) {
    do {
      uVar10 = 0;
      if ((int)uStack_2f0 == local_2c4) goto LAB_14759ce3a;
      FUN_1402226aa(local_348);
      local_368 = 0x100000000;
      local_360 = local_2e8;
      local_358 = 0xffffffff;
      local_350 = 0;
      iVar5 = 0;
      if (local_2d0 != 0) {
        FUN_1449c0562(&local_368);
        iVar5 = local_2d0;
      }
      local_a0 = local_358;
      uVar3 = local_a0;
      local_98 = local_350;
      local_94 = local_34c;
      uStack_b0 = local_368;
      local_a8 = local_360;
      local_b8 = &local_2f8;
      local_a0._4_4_ = (int)((ulonglong)local_358 >> 0x20);
      iVar6 = local_a0._4_4_;
      if ((local_a0._4_4_ != iVar5) || (local_a0 = uVar3, local_360 != local_2e8)) {
        do {
          local_a0 = uVar3;
          iVar6 = *(int *)(*local_b8 + (longlong)iVar6 * 0xc);
          lVar14 = (longlong)*(int *)(local_258 + 8 + (longlong)iVar6 * 0x10);
          if (lVar14 != 0) {
            lVar2 = *(longlong *)(local_258 + (longlong)iVar6 * 0x10);
            lVar13 = 0;
            do {
              iVar1 = *(int *)(lVar2 + lVar13);
              local_368 = CONCAT44(local_368._4_4_,iVar1);
              iVar8 = *(int *)(local_238 + (longlong)iVar1 * 4);
              if ((iVar8 != -1) &&
                 (iVar8 = iVar8 + -1, *(int *)(local_238 + (longlong)iVar1 * 4) = iVar8, iVar8 == 0)
                 ) {
                FUN_1447cbafe(local_348,local_37c,&local_368,0);
              }
              lVar13 = lVar13 + 4;
            } while (lVar14 * 4 != lVar13);
          }
          FUN_144a7cc9e(&local_2a8,iVar6);
          uVar10 = uStack_370;
          lVar14 = (longlong)(int)uStack_370;
          uVar7 = (int)uStack_370 + 1;
          uStack_370 = CONCAT44(uStack_370._4_4_,uVar7);
          if (uStack_370._4_4_ < uVar7) {
            FUN_1446f48e2(&local_378,uVar10 & 0xffffffff);
          }
          *(int *)(local_378 + lVar14 * 4) = iVar6;
          local_a0 = CONCAT44(local_a0._4_4_,(uint)local_a0 & ~uStack_b0._4_4_);
          FUN_1449c0562(&uStack_b0);
          iVar6 = local_a0._4_4_;
          uVar3 = local_a0;
        } while (local_b8 != &local_2f8 || (local_a8 != local_2e8 || local_a0._4_4_ != iVar5));
      }
      plVar9 = local_348;
      plVar11 = &local_b8;
      for (lVar14 = 10; lVar14 != 0; lVar14 = lVar14 + -1) {
        *plVar11 = *plVar9;
        plVar9 = plVar9 + 1;
        plVar11 = plVar11 + 1;
      }
      plVar9 = &local_2f8;
      plVar11 = local_348;
      for (lVar14 = 10; lVar14 != 0; lVar14 = lVar14 + -1) {
        *plVar11 = *plVar9;
        plVar9 = plVar9 + 1;
        plVar11 = plVar11 + 1;
      }
      plVar9 = &local_b8;
      plVar11 = &local_2f8;
      for (lVar14 = 10; lVar14 != 0; lVar14 = lVar14 + -1) {
        *plVar11 = *plVar9;
        plVar9 = plVar9 + 1;
        plVar11 = plVar11 + 1;
      }
    } while (local_274 < (int)uStack_2a0);
  }
  local_b8 = (longlong *)0x0;
  uStack_b0 = 0;
  if (local_390 != 0) {
    FUN_14481578e(&local_b8);
  }
  plVar11 = local_388;
  lVar14 = local_388[1];
  if ((longlong)(int)lVar14 != 0) {
    lVar2 = *local_388;
    lVar13 = 0;
    plVar9 = &local_b8;
    do {
      lVar12 = (longlong)(int)uStack_b0;
      uVar7 = (int)uStack_b0 + 1;
      uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar7);
      if (uStack_b0._4_4_ < uVar7) {
        FUN_1446f48e2(plVar9);
      }
      *(undefined4 *)((longlong)local_b8 + lVar12 * 4) = *(undefined4 *)(lVar2 + lVar13);
      lVar13 = lVar13 + 4;
    } while ((longlong)(int)lVar14 * 4 != lVar13);
    lVar14 = (longlong)(int)plVar11[1];
    if (lVar14 != 0) {
      lVar2 = *plVar11;
      lVar13 = 0;
      do {
        *(undefined4 *)(lVar2 + lVar13) =
             *(undefined4 *)((longlong)local_b8 + (longlong)*(int *)(local_378 + lVar13) * 4);
        lVar13 = lVar13 + 4;
      } while (lVar14 * 4 != lVar13);
    }
  }
  if (local_b8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  uVar10 = CONCAT71((int7)((ulonglong)plVar9 >> 8),1);
LAB_14759ce3a:
  if (local_378 != 0) {
    FUN_1400020a8();
  }
  local_300 = 0;
  if (local_308 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(local_348);
  local_2b0 = 0;
  if (local_2b8 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_2f8);
  FUN_14759d360(&local_2a8);
  if ((local_60 ^ (ulonglong)auStack_3b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10 & 0xffffffff;
}



// FUNCTION 14759cf77 FUN_14759cf77 body=999 status=ok
// SIG undefined FUN_14759cf77(void)

void FUN_14759cf77(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 param_4)

{
  uint *puVar1;
  uint uVar2;
  int *piVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  longlong lVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  int *piVar11;
  int *piVar12;
  undefined4 *puVar13;
  uint *puVar14;
  int *piVar15;
  longlong *plVar16;
  longlong lVar17;
  undefined1 auStack_108 [40];
  longlong *local_e0;
  undefined8 local_d8;
  int *local_d0;
  longlong *local_c8;
  longlong local_c0;
  undefined1 local_b4 [4];
  undefined4 local_b0;
  undefined4 uStack_ac;
  int local_a8;
  int local_9c;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar2 = *(uint *)(param_2 + 1);
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  local_d8 = param_4;
  local_c0 = param_3;
  if ((longlong)(int)uVar2 != 0) {
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar2);
    }
    FUN_140ab2830(&local_98,uVar2);
    iVar6 = 1;
    if (3 < uVar2) {
      uVar5 = (uVar2 | 1) + 0xe;
      iVar6 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      iVar6 = 1 << ((byte)iVar6 & 0x1f);
    }
    if ((local_50 == 0) || (local_50 < iVar6)) {
      local_50 = iVar6;
      FUN_140264164();
    }
  }
  local_e0 = (longlong *)(param_1 + 0x60);
  local_9c = 0;
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    puVar13 = (undefined4 *)*param_2;
    lVar17 = (longlong)*(int *)(param_2 + 1) << 2;
    do {
      local_b0 = 0xffffffff;
      piVar7 = (int *)FUN_144a6203e(&local_98,*puVar13,puVar13,&local_b0);
      iVar6 = local_9c + 1;
      *piVar7 = local_9c;
      puVar13 = puVar13 + 1;
      lVar17 = lVar17 + -4;
      local_9c = iVar6;
    } while (lVar17 != 0);
  }
  FUN_140bfc200((longlong *)(param_1 + 0x50),uVar2,1);
  FUN_140bfc200(local_e0,uVar2,1);
  FUN_144a1a59e((longlong *)(param_1 + 0x70),uVar2,1);
  local_9c = 0;
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    piVar7 = (int *)*param_2;
    local_d0 = piVar7 + *(int *)(param_2 + 1);
    local_c8 = (longlong *)(param_1 + 0x70);
    do {
      FUN_146b309a8(**(longlong **)(local_c0 + 0x10) + (longlong)*piVar7 * 200 + 0x20,&local_b0);
      plVar16 = (longlong *)((longlong)local_9c * 0x10 + *local_e0);
      if ((longlong)local_a8 != 0) {
        puVar14 = (uint *)CONCAT44(uStack_ac,local_b0);
        puVar1 = puVar14 + local_a8;
        do {
          if ((int)uStack_90 != local_64) {
            puVar9 = local_58;
            if (local_58 == (undefined1 *)0x0) {
              puVar9 = local_60;
            }
            iVar6 = *(int *)(puVar9 + (ulonglong)(local_50 - 1U & *puVar14) * 4);
            while (iVar6 != -1) {
              lVar17 = local_98 + (longlong)iVar6 * 0x10;
              if (*(uint *)(local_98 + (longlong)iVar6 * 0x10) == *puVar14) {
                if ((undefined4 *)(lVar17 + 4) != (undefined4 *)0x0 && lVar17 != 0) {
                  iVar6 = (int)plVar16[1];
                  *(uint *)(plVar16 + 1) = iVar6 + 1U;
                  if (*(uint *)((longlong)plVar16 + 0xc) < iVar6 + 1U) {
                    FUN_1446f48e2(plVar16,iVar6);
                  }
                  *(undefined4 *)(*plVar16 + (longlong)iVar6 * 4) = *(undefined4 *)(lVar17 + 4);
                }
                break;
              }
              iVar6 = *(int *)(lVar17 + 8);
            }
          }
          puVar14 = puVar14 + 1;
        } while (puVar14 != puVar1);
      }
      FUN_1406de246(*plVar16,(int)plVar16[1]);
      plVar4 = local_c8;
      uVar10 = (ulonglong)(int)plVar16[1];
      if (1 < (longlong)uVar10) {
        piVar3 = (int *)*plVar16;
        lVar17 = uVar10 * 4 + -4;
        piVar11 = piVar3;
        piVar15 = piVar3;
        do {
          piVar12 = piVar11;
          if ((*piVar11 != piVar15[1]) && (piVar12 = piVar11 + 1, piVar15 != piVar11)) {
            *piVar12 = piVar15[1];
          }
          piVar15 = piVar15 + 1;
          lVar17 = lVar17 + -4;
          piVar11 = piVar12;
        } while (lVar17 != 0);
        uVar10 = (ulonglong)((longlong)piVar12 + (4 - (longlong)piVar3)) >> 2;
      }
      FUN_144a1a59e(plVar16,uVar10,0);
      lVar17 = (longlong)(int)plVar16[1];
      *(int *)(*plVar4 + (longlong)local_9c * 4) = (int)plVar16[1];
      if (lVar17 == 0) {
        FUN_1447cbafe(local_d8,local_b4,&local_9c,0);
        lVar17 = (longlong)(int)plVar16[1];
        if (lVar17 != 0) goto LAB_14759d26d;
      }
      else {
LAB_14759d26d:
        piVar11 = (int *)*plVar16;
        piVar3 = piVar11 + lVar17;
        do {
          lVar17 = *(longlong *)(param_1 + 0x50);
          lVar8 = (longlong)*piVar11 * 0x10;
          iVar6 = *(int *)(lVar17 + 8 + lVar8);
          *(uint *)(lVar17 + 8 + lVar8) = iVar6 + 1U;
          if (*(uint *)(lVar17 + 0xc + lVar8) < iVar6 + 1U) {
            FUN_1446f48e2((longlong *)(lVar17 + lVar8),iVar6);
          }
          *(int *)(*(longlong *)(lVar17 + lVar8) + (longlong)iVar6 * 4) = local_9c;
          piVar11 = piVar11 + 1;
        } while (piVar11 != piVar3);
      }
      local_9c = local_9c + 1;
      if (CONCAT44(uStack_ac,local_b0) != 0) {
        FUN_1400020a8();
      }
      piVar7 = piVar7 + 1;
    } while (piVar7 != local_d0);
  }
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a6bfa8(&local_98);
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14759d360 FUN_14759d360 body=138 status=ok
// SIG undefined FUN_14759d360(void)

void FUN_14759d360(longlong param_1)

{
  if (*(char *)(param_1 + 0x1e0) == '\x01') {
    FUN_14759d3ea(param_1 + 0x80);
    *(undefined1 *)(param_1 + 0x1e0) = 0;
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  FUN_144716727(*(undefined8 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x68));
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  FUN_144716727(*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x58));
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1);
  return;
}



// FUNCTION 14759d3ea FUN_14759d3ea body=201 status=ok
// SIG undefined FUN_14759d3ea(void)

void FUN_14759d3ea(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x150) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x138) = 0;
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0xf0);
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1);
  return;
}



// FUNCTION 14759d4b3 FUN_14759d4b3 body=925 status=ok
// SIG undefined FUN_14759d4b3(void)

void FUN_14759d4b3(longlong param_1,uint param_2)

{
  void *pvVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  void *pvVar5;
  uint uVar6;
  longlong *plVar7;
  void *pvVar8;
  void *_Src;
  void *pvVar9;
  void *_Src_00;
  int iVar10;
  void *pvVar11;
  float fVar12;
  undefined1 auStack_458 [32];
  longlong *local_438;
  int local_42c;
  void *local_428;
  void *local_420;
  longlong local_418;
  longlong local_410;
  undefined4 local_408 [190];
  undefined1 local_110 [200];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_458;
  if (1 < (int)param_2) {
    memset(local_408,0,0x2f0);
    local_410 = (ulonglong)param_2 * 200 + param_1 + -200;
    local_418 = param_1;
    fVar12 = logf((float)(int)param_2);
    local_408[0] = (int)(longlong)(fVar12 + fVar12);
    plVar7 = &local_418;
    do {
      pvVar5 = (void *)*plVar7;
      pvVar8 = (void *)plVar7[1];
      iVar10 = (int)plVar7[2];
      iVar3 = (int)((ulonglong)((longlong)pvVar8 - (longlong)pvVar5) >> 3);
      _Src = pvVar8;
      _Src_00 = pvVar5;
      pvVar11 = pvVar5;
      local_438 = plVar7;
      if (iVar10 != 0) {
LAB_14759d594:
        uVar6 = iVar3 * -0x3d70a3d7 + 1;
        plVar7 = local_438;
        if (8 < (int)uVar6) {
          pvVar11 = (void *)((ulonglong)(uVar6 >> 1) * 200 + (longlong)_Src_00);
          local_42c = iVar10;
          local_428 = pvVar5;
          local_420 = pvVar8;
          memcpy(local_110,pvVar11,200);
          memcpy(pvVar11,_Src_00,200);
          memcpy(_Src_00,local_110,200);
          pvVar5 = (void *)((longlong)_Src + 200);
          pvVar11 = _Src_00;
          do {
            pvVar8 = (void *)((longlong)pvVar11 + 200);
            pvVar1 = (void *)((longlong)pvVar11 + 200);
            do {
              pvVar11 = pvVar1;
              pvVar4 = pvVar8;
              if (_Src < pvVar11) break;
              cVar2 = FUN_14759daf0(_Src_00,pvVar11);
              pvVar8 = (void *)((longlong)pvVar4 + 200);
              pvVar1 = (void *)((longlong)pvVar11 + 200);
            } while (cVar2 == '\0');
            pvVar1 = (void *)((longlong)pvVar5 + -400);
            do {
              pvVar9 = pvVar5;
              pvVar8 = pvVar1;
              pvVar5 = (void *)((longlong)pvVar9 + -200);
              if (pvVar5 <= _Src_00) break;
              cVar2 = FUN_14759daf0(pvVar5,_Src_00);
              pvVar1 = (void *)((longlong)pvVar8 + -200);
            } while (cVar2 == '\0');
            if (pvVar5 < pvVar11) goto LAB_14759d6a4;
            memcpy(local_110,pvVar11,200);
            memcpy(pvVar11,pvVar5,200);
            memcpy(pvVar5,local_110,200);
          } while( true );
        }
        for (; local_438 = plVar7, pvVar8 = _Src_00, pvVar5 = _Src_00, _Src_00 < _Src;
            _Src = (void *)((longlong)_Src + -200)) {
          while (pvVar11 = pvVar8, pvVar5 = (void *)((longlong)pvVar5 + 200), pvVar5 <= _Src) {
            cVar2 = FUN_14759daf0(pvVar11,pvVar5);
            pvVar8 = pvVar5;
            if (cVar2 == '\0') {
              pvVar8 = pvVar11;
            }
          }
          memcpy(local_110,pvVar11,200);
          memcpy(pvVar11,_Src,200);
          memcpy(_Src,local_110,200);
          plVar7 = local_438;
        }
        goto LAB_14759d827;
      }
LAB_14759d841:
      FUN_14759d851(pvVar11);
      plVar7 = local_438;
LAB_14759d827:
      plVar7 = plVar7 + -3;
    } while (&local_418 <= plVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_458) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14759d6a4:
  memcpy(local_110,_Src_00,200);
  memcpy(_Src_00,pvVar5,200);
  memcpy(pvVar5,local_110,200);
  iVar10 = local_42c + -1;
  pvVar9 = (void *)((longlong)pvVar9 + -400);
  if ((longlong)pvVar8 - (longlong)local_428 < (longlong)local_420 - (longlong)pvVar4) {
    plVar7 = local_438;
    if (pvVar11 < _Src) {
      *local_438 = (longlong)pvVar11;
      local_438[1] = (longlong)_Src;
      *(int *)(local_438 + 2) = iVar10;
      plVar7 = local_438 + 3;
    }
    pvVar11 = _Src_00;
    if (pvVar5 <= (void *)((longlong)_Src_00 + 200U)) goto LAB_14759d827;
  }
  else {
    if ((void *)((longlong)_Src_00 + 200U) < pvVar5) {
      *local_438 = (longlong)_Src_00;
      local_438[1] = (longlong)pvVar9;
      *(int *)(local_438 + 2) = iVar10;
      local_438 = local_438 + 3;
    }
    plVar7 = local_438;
    pvVar8 = _Src;
    pvVar9 = _Src;
    _Src_00 = pvVar4;
    if (_Src <= pvVar11) goto LAB_14759d827;
  }
  local_438 = plVar7;
  iVar3 = (int)((ulonglong)((longlong)pvVar8 - (longlong)_Src_00) >> 3);
  _Src = pvVar9;
  pvVar5 = _Src_00;
  _Src_00 = pvVar11;
  if (iVar10 == 0) goto LAB_14759d841;
  goto LAB_14759d594;
}



// FUNCTION 14759d851 FUN_14759d851 body=669 status=ok
// SIG undefined FUN_14759d851(void)

void FUN_14759d851(void *param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  void *pvVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined1 auStack_138 [40];
  undefined1 local_110 [200];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (param_2 != 0) {
    iVar3 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar5 = iVar3;
joined_r0x00014759d8a3:
    do {
      iVar2 = iVar3 * 2 + 1;
      if (iVar2 < (int)param_2) {
        iVar4 = iVar3 * 2 + 2;
        if ((iVar4 < (int)param_2) &&
           (cVar1 = FUN_14759daf0((void *)((longlong)iVar4 * 200 + (longlong)param_1),
                                  (void *)((longlong)iVar2 * 200 + (longlong)param_1)),
           cVar1 == '\0')) {
          iVar2 = iVar4;
        }
        pvVar7 = (void *)((longlong)iVar3 * 200 + (longlong)param_1);
        pvVar6 = (void *)((longlong)iVar2 * 200 + (longlong)param_1);
        cVar1 = FUN_14759daf0(pvVar7,pvVar6);
        if (cVar1 != '\0') {
          memcpy(local_110,pvVar7,200);
          memcpy(pvVar7,pvVar6,200);
          memcpy(pvVar6,local_110,200);
          iVar3 = iVar2;
          goto joined_r0x00014759d8a3;
        }
      }
      bVar9 = iVar5 != 0;
      iVar3 = iVar5 + -1;
      iVar5 = iVar3;
    } while (bVar9);
    if (1 < (int)param_2) {
      pvVar6 = (void *)(((ulonglong)param_2 - 1) * 200 + (longlong)param_1);
      memcpy(local_110,param_1,200);
      memcpy(param_1,pvVar6,200);
      memcpy(pvVar6,local_110,200);
      if (param_2 != 2) {
        uVar8 = (ulonglong)param_2 - 1;
        do {
          iVar3 = 0;
          iVar2 = 1;
          iVar5 = 0;
          do {
            iVar3 = iVar3 + 2;
            iVar4 = iVar2;
            if (((longlong)iVar3 < (longlong)uVar8) &&
               (cVar1 = FUN_14759daf0((void *)((longlong)iVar3 * 200 + (longlong)param_1),
                                      (void *)((longlong)iVar2 * 200 + (longlong)param_1)),
               cVar1 == '\0')) {
              iVar4 = iVar3;
            }
            pvVar7 = (void *)((longlong)iVar5 * 200 + (longlong)param_1);
            pvVar6 = (void *)((longlong)iVar4 * 200 + (longlong)param_1);
            cVar1 = FUN_14759daf0(pvVar7,pvVar6);
            if (cVar1 == '\0') break;
            memcpy(local_110,pvVar7,200);
            memcpy(pvVar7,pvVar6,200);
            memcpy(pvVar6,local_110,200);
            iVar3 = iVar4 * 2;
            iVar2 = iVar4 * 2 + 1;
            iVar5 = iVar4;
          } while ((longlong)iVar2 < (longlong)uVar8);
          pvVar6 = (void *)((uVar8 - 1) * 200 + (longlong)param_1);
          memcpy(local_110,param_1,200);
          memcpy(param_1,pvVar6,200);
          memcpy(pvVar6,local_110,200);
          bVar9 = 2 < uVar8;
          uVar8 = uVar8 - 1;
        } while (bVar9);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14759daf0 FUN_14759daf0 body=138 status=ok
// SIG undefined FUN_14759daf0(void)

ulonglong FUN_14759daf0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_2 + 0x10);
  if (lVar4 == 0 || lVar1 == 0) {
    return (ulonglong)
           CONCAT31((int3)((uint)*(int *)(param_1 + 0x1c) >> 8),
                    *(int *)(param_1 + 0x1c) < *(int *)(param_2 + 0x1c));
  }
  if ((longlong)*(int *)(lVar1 + 0x18) != 0) {
    lVar3 = *(longlong *)(lVar1 + 0x10);
    lVar2 = (longlong)*(int *)(lVar1 + 0x18) << 4;
    do {
      if (*(longlong *)(lVar3 + 8) == lVar4) {
        if (lVar3 != 0) {
          return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
        }
        break;
      }
      lVar3 = lVar3 + 0x10;
      lVar2 = lVar2 + -0x10;
    } while (lVar2 != 0);
  }
  if ((longlong)*(int *)(lVar4 + 0x18) == 0) {
    bVar5 = true;
  }
  else {
    lVar3 = *(longlong *)(lVar4 + 0x10);
    lVar4 = (longlong)*(int *)(lVar4 + 0x18) << 4;
    do {
      if (*(longlong *)(lVar3 + 8) == lVar1) goto LAB_14759db4e;
      lVar3 = lVar3 + 0x10;
      lVar4 = lVar4 + -0x10;
    } while (lVar4 != 0);
    lVar3 = 0;
LAB_14759db4e:
    bVar5 = lVar3 == 0;
  }
  return (ulonglong)
         CONCAT31((int3)((uint)*(int *)(param_2 + 0x1c) >> 8),
                  *(int *)(param_1 + 0x1c) < *(int *)(param_2 + 0x1c) & bVar5);
}



// FUNCTION 14759db7a FUN_14759db7a body=93 status=ok
// SIG undefined FUN_14759db7a(void)

longlong FUN_14759db7a(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_146b7eb62(param_1);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 14759dbd8 FUN_14759dbd8 body=55 status=ok
// SIG undefined FUN_14759dbd8(void)

void FUN_14759dbd8(undefined8 param_1,undefined8 *param_2)

{
  FUN_141067f4a(param_2);
  *param_2 = &PTR_FUN_14a49b720;
  *(undefined1 *)(param_2 + 1) = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  *(byte *)((longlong)param_2 + 10) = *(byte *)((longlong)param_2 + 10) | 0x26;
  return;
}



// FUNCTION 14759dc10 FUN_14759dc10 body=55 status=ok
// SIG undefined FUN_14759dc10(void)

void FUN_14759dc10(undefined8 param_1,undefined8 *param_2)

{
  FUN_141067f4a(param_2);
  *param_2 = &PTR_FUN_14a49b720;
  *(undefined1 *)(param_2 + 1) = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  *(byte *)((longlong)param_2 + 10) = *(byte *)((longlong)param_2 + 10) | 0x26;
  return;
}



// FUNCTION 14759dc98 FUN_14759dc98 body=59 status=ok
// SIG undefined FUN_14759dc98(void)

undefined8 FUN_14759dc98(longlong *param_1)

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



// FUNCTION 14759dcde FUN_14759dcde body=34 status=ok
// SIG undefined FUN_14759dcde(void)

void FUN_14759dcde(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_147592a46(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 14759dd50 FUN_14759dd50 body=189 status=ok
// SIG undefined FUN_14759dd50(void)

int FUN_14759dd50(longlong *param_1,uint param_2,undefined8 *param_3)

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
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x50);
        cVar1 = FUN_14069bc62(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_14759dd79;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x48 + (longlong)iVar4 * 0x50);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_14759dd79:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 14759de0e FUN_14759de0e body=312 status=ok
// SIG undefined FUN_14759de0e(void)

undefined4 * FUN_14759de0e(longlong param_1,undefined4 *param_2,ulonglong *param_3)

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
  FUN_14759df48(param_1,local_48);
  uVar5 = *param_3;
  *local_40 = uVar5;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_14759e02e(param_1,uVar3,local_40,&local_4c);
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
      FUN_14759e11c(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14759df48 FUN_14759df48 body=229 status=ok
// SIG undefined FUN_14759df48(void)

int * FUN_14759df48(longlong *param_1,int *param_2)

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



// FUNCTION 14759e02e FUN_14759e02e body=124 status=ok
// SIG undefined FUN_14759e02e(void)

undefined8 FUN_14759e02e(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_14759e0aa(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = (int)plVar1[1];
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 14759e0aa FUN_14759e0aa body=114 status=ok
// SIG undefined FUN_14759e0aa(void)

void FUN_14759e0aa(longlong *param_1,int param_2)

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



// FUNCTION 14759e11c FUN_14759e11c body=477 status=ok
// SIG undefined FUN_14759e11c(void)

void FUN_14759e11c(longlong *param_1)

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



// FUNCTION 14759e2fa FUN_14759e2fa body=132 status=ok
// SIG undefined FUN_14759e2fa(void)

void FUN_14759e2fa(longlong param_1,int param_2)

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



// FUNCTION 14759e380 FUN_14759e380 body=303 status=ok
// SIG undefined FUN_14759e380(void)

void FUN_14759e380(longlong *param_1,undefined8 *param_2)

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



// FUNCTION 14759e4b0 FUN_14759e4b0 body=150 status=ok
// SIG undefined FUN_14759e4b0(void)

void FUN_14759e4b0(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 200,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 200)) {
      uVar5 = uVar4 / 200 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,200,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14759e548 FUN_14759e548 body=48 status=ok
// SIG undefined FUN_14759e548(void)

void FUN_14759e548(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,200,8);
  }
  return;
}



// FUNCTION 14759e578 FUN_14759e578 body=95 status=ok
// SIG undefined FUN_14759e578(void)

void FUN_14759e578(longlong param_1,uint param_2)

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



// FUNCTION 14759e5d8 FUN_14759e5d8 body=132 status=ok
// SIG undefined FUN_14759e5d8(void)

void FUN_14759e5d8(longlong param_1,int param_2)

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



// FUNCTION 14759e65e FUN_14759e65e body=141 status=ok
// SIG undefined FUN_14759e65e(void)

longlong FUN_14759e65e(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_14759e6ec();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x50;
    if (lVar3 + lVar2 != 0) goto LAB_14759e69b;
  }
  local_30 = param_3;
  FUN_14759e7dc(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 * 0x50;
LAB_14759e69b:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 + lVar3 + 8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14759e6ec FUN_14759e6ec body=184 status=ok
// SIG undefined FUN_14759e6ec(void)

int FUN_14759e6ec(longlong *param_1,uint param_2,undefined8 *param_3)

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
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x50);
        cVar1 = FUN_14759e7a6(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_14759e77e;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x48 + (longlong)iVar4 * 0x50);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_14759e77e:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14759e7a6 FUN_14759e7a6 body=53 status=ok
// SIG undefined FUN_14759e7a6(void)

ulonglong FUN_14759e7a6(int *param_1,int *param_2)

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



// FUNCTION 14759e7dc FUN_14759e7dc body=272 status=ok
// SIG undefined FUN_14759e7dc(void)

undefined4 * FUN_14759e7dc(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14759e8ee(param_1,local_48);
  FUN_14759ea86(param_4,local_40);
  *(undefined4 *)(local_40 + 0x48) = 0xffffffff;
  cVar1 = FUN_14759e9dc(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 0x4c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x48) =
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
      FUN_14759eb8c(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14759e8ee FUN_14759e8ee body=238 status=ok
// SIG undefined FUN_14759e8ee(void)

int * FUN_14759e8ee(longlong *param_1,int *param_2)

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



// FUNCTION 14759e9dc FUN_14759e9dc body=169 status=ok
// SIG undefined FUN_14759e9dc(void)

undefined8 FUN_14759e9dc(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_38 = *param_3;
    iVar2 = FUN_14759dd50();
    if (iVar2 != -1) {
      lVar1 = *param_1;
      FUN_147592a46((longlong)iVar2 * 0x50 + lVar1 + 8);
      memmove((void *)(lVar1 + (longlong)iVar2 * 0x50),param_3,0x48);
      FUN_14759eb12(param_1,*param_4);
      *param_4 = iVar2;
      uVar3 = 1;
      goto LAB_14759ea02;
    }
  }
  uVar3 = 0;
LAB_14759ea02:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14759ea86 FUN_14759ea86 body=139 status=ok
// SIG undefined FUN_14759ea86(void)

undefined8 * FUN_14759ea86(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_88 [40];
  undefined **local_60;
  undefined1 local_58;
  byte local_56;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_141067f4a(&local_60);
  local_60 = &PTR_FUN_14a49b720;
  local_58 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  local_56 = local_56 | 0x26;
  *param_2 = *(undefined8 *)*param_1;
  FUN_147592a80(param_2 + 1,&local_60);
  FUN_147592a46(&local_60);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14759eb12 FUN_14759eb12 body=122 status=ok
// SIG undefined FUN_14759eb12(void)

void FUN_14759eb12(longlong *param_1,int param_2)

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



// FUNCTION 14759eb8c FUN_14759eb8c body=440 status=ok
// SIG undefined FUN_14759eb8c(void)

void FUN_14759eb8c(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x50;
        uVar10 = (longlong)
                 (int)((uint)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) ^
                      (uint)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x4c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x48 + lVar7) =
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



// FUNCTION 14759ed46 FUN_14759ed46 body=29 status=ok
// SIG undefined FUN_14759ed46(void)

undefined8 FUN_14759ed46(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14759ed7e FUN_14759ed7e body=29 status=ok
// SIG undefined FUN_14759ed7e(void)

bool FUN_14759ed7e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14759ed9c FUN_14759ed9c body=26 status=ok
// SIG undefined FUN_14759ed9c(void)

bool FUN_14759ed9c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14759edb6 FUN_14759edb6 body=24 status=ok
// SIG undefined FUN_14759edb6(void)

bool FUN_14759edb6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14759edce FUN_14759edce body=93 status=ok
// SIG undefined FUN_14759edce(void)

void FUN_14759edce(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3a3510;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a49f820;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}


