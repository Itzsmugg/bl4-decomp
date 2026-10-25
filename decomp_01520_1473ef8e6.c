// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1473ef8e6 FUN_1473ef8e6 body=124 status=ok
// SIG undefined FUN_1473ef8e6(void)

void FUN_1473ef8e6(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1473efb20(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_1473efba6(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1473ef964 FUN_1473ef964 body=69 status=ok
// SIG undefined FUN_1473ef964(void)

int FUN_1473ef964(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_1473efcd4(param_1,iVar1);
  }
  FUN_1473efcb9((longlong)iVar1 * 0x14 + *param_1,param_2);
  return iVar1;
}



// FUNCTION 1473ef9a9 FUN_1473ef9a9 body=45 status=ok
// SIG undefined FUN_1473ef9a9(void)

void FUN_1473ef9a9(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 3) = 0xffffffff;
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    param_1 = param_1 + 5;
  }
  return;
}



// FUNCTION 1473ef9d6 FUN_1473ef9d6 body=147 status=ok
// SIG undefined FUN_1473ef9d6(void)

void FUN_1473ef9d6(longlong param_1,int param_2)

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



// FUNCTION 1473efa6a FUN_1473efa6a body=63 status=ok
// SIG undefined FUN_1473efa6a(void)

void FUN_1473efa6a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1473efaaa(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x28,8);
  }
  return;
}



// FUNCTION 1473efaaa FUN_1473efaaa body=117 status=ok
// SIG undefined FUN_1473efaaa(void)

ulonglong FUN_1473efaaa(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0x28) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x28,8);
      uVar1 = uVar1 / 0x28;
    }
  }
  return uVar1;
}



// FUNCTION 1473efb20 FUN_1473efb20 body=132 status=ok
// SIG undefined FUN_1473efb20(void)

void FUN_1473efb20(longlong param_1,int param_2)

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



// FUNCTION 1473efba6 FUN_1473efba6 body=63 status=ok
// SIG undefined FUN_1473efba6(void)

void FUN_1473efba6(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1473efbe6(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1473efbe6 FUN_1473efbe6 body=97 status=ok
// SIG undefined FUN_1473efbe6(void)

ulonglong FUN_1473efbe6(undefined8 param_1,uint param_2,uint param_3)

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



// FUNCTION 1473efc48 FUN_1473efc48 body=113 status=ok
// SIG undefined FUN_1473efc48(void)

void FUN_1473efc48(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x14,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x14)) {
      uVar2 = uVar1 / 0x14 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x14,4);
  }
  return;
}



// FUNCTION 1473efcb9 FUN_1473efcb9 body=27 status=ok
// SIG undefined FUN_1473efcb9(void)

void FUN_1473efcb9(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[1] = 0x88ba;
    *(undefined1 *)(param_1 + 2) = 0;
    param_1 = (undefined8 *)((longlong)param_1 + 0x14);
  }
  return;
}



// FUNCTION 1473efcd4 FUN_1473efcd4 body=147 status=ok
// SIG undefined FUN_1473efcd4(void)

void FUN_1473efcd4(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x14,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x14)) {
      uVar5 = uVar4 / 0x14 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x14,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1473efd68 FUN_1473efd68 body=95 status=ok
// SIG undefined FUN_1473efd68(void)

void FUN_1473efd68(longlong param_1,uint param_2)

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



// FUNCTION 1473efdc8 FUN_1473efdc8 body=48 status=ok
// SIG undefined FUN_1473efdc8(void)

void FUN_1473efdc8(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x28,8);
  }
  return;
}



// FUNCTION 1473efdf8 FUN_1473efdf8 body=100 status=ok
// SIG undefined FUN_1473efdf8(void)

void FUN_1473efdf8(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  
  FUN_1473ea2c4();
  if (*(longlong *)(param_1 + 0x3c8) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x3c8) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0x3c0) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x3c0) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_1473ef822(param_1);
  return;
}



// FUNCTION 1473efe5c FUN_1473efe5c body=58 status=ok
// SIG undefined FUN_1473efe5c(void)

longlong FUN_1473efe5c(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0x400) != 0) {
    FUN_1400020a8();
  }
  FUN_1473ef822(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473efe96 FUN_1473efe96 body=38 status=ok
// SIG undefined FUN_1473efe96(void)

undefined8 FUN_1473efe96(undefined8 param_1,int param_2)

{
  FUN_1473efebc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473efebc FUN_1473efebc body=103 status=ok
// SIG undefined FUN_1473efebc(void)

void FUN_1473efebc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a370f80;
  FUN_1473ea7de(param_1 + 3);
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a343240;
  FUN_147365bf9(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1473eff24 FUN_1473eff24 body=52 status=ok
// SIG undefined FUN_1473eff24(void)

void FUN_1473eff24(longlong *param_1)

{
  FUN_1473eff58();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1473eff58 FUN_1473eff58 body=324 status=ok
// SIG undefined FUN_1473eff58(void)

void FUN_1473eff58(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
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
      puVar3 = *(undefined8 **)(*local_68 + 0x10 + (longlong)iStack_4c * 0x20);
      if (puVar3 != (undefined8 *)0x0) {
        LOCK();
        piVar2 = (int *)(puVar3 + 1);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)*puVar3)(puVar3,1);
        }
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



// FUNCTION 1473f009e FUN_1473f009e body=52 status=ok
// SIG undefined FUN_1473f009e(void)

void FUN_1473f009e(longlong *param_1)

{
  FUN_1431cc6f8();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1473f00d2 FUN_1473f00d2 body=52 status=ok
// SIG undefined FUN_1473f00d2(void)

void FUN_1473f00d2(longlong *param_1)

{
  FUN_1473f0106();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1473f0106 FUN_1473f0106 body=313 status=ok
// SIG undefined FUN_1473f0106(void)

void FUN_1473f0106(longlong *param_1)

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
      if (*(longlong *)(*local_68 + 8 + (longlong)iStack_4c * 0x28) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
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
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473f0240 FUN_1473f0240 body=38 status=ok
// SIG undefined FUN_1473f0240(void)

undefined8 FUN_1473f0240(undefined8 param_1,int param_2)

{
  FUN_1473f0266();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473f0266 FUN_1473f0266 body=114 status=ok
// SIG undefined FUN_1473f0266(void)

void FUN_1473f0266(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14a370fb0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_1473f6016(param_1 + 6);
  FUN_1473f02d8(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  puVar1 = (undefined8 *)param_1[2];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *param_1 = &PTR_FUN_149e002e8;
  return;
}



// FUNCTION 1473f02d8 FUN_1473f02d8 body=52 status=ok
// SIG undefined FUN_1473f02d8(void)

void FUN_1473f02d8(longlong param_1,int param_2)

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



// FUNCTION 1473f030c FUN_1473f030c body=132 status=ok
// SIG undefined FUN_1473f030c(void)

void FUN_1473f030c(longlong param_1,int param_2)

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



// FUNCTION 1473f0392 FUN_1473f0392 body=52 status=ok
// SIG undefined FUN_1473f0392(void)

undefined8 * FUN_1473f0392(undefined8 *param_1,int param_2)

{
  FUN_1473ebb46(param_1 + 2);
  *param_1 = &PTR_FUN_14a37f858;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473f03c6 FUN_1473f03c6 body=76 status=ok
// SIG undefined FUN_1473f03c6(void)

void FUN_1473f03c6(void)

{
  int iVar1;
  
  iVar1 = FUN_1473f0412(DAT_14ca797f8,DAT_14ca797fc);
  if (iVar1 != DAT_14ca797fc) {
    DAT_14ca797fc = iVar1;
    FUN_1446f8d3c(&DAT_14ca797f0,DAT_14ca797f8,iVar1,8,8);
  }
  return;
}



// FUNCTION 1473f0412 FUN_1473f0412 body=93 status=ok
// SIG undefined FUN_1473f0412(void)

ulonglong FUN_1473f0412(uint param_1,uint param_2)

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



// FUNCTION 1473f0470 FUN_1473f0470 body=53 status=ok
// SIG undefined FUN_1473f0470(void)

void FUN_1473f0470(void)

{
  FUN_1473f04a6();
  if (DAT_14ca79a30 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14ca79a10 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1473f04a6 FUN_1473f04a6 body=105 status=ok
// SIG undefined FUN_1473f04a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1473f04a6(void)

{
  DAT_14ca79a18 = 0;
  if (DAT_14ca79a1c != 0) {
    FUN_140442250(&DAT_14ca79a10,0);
  }
  _DAT_14ca79a40 = 0xffffffff;
  DAT_14ca79a38 = 0;
  if (0x80 < DAT_14ca79a3c) {
    DAT_14ca79a3c = 0x80;
    FUN_1446efbd8(&DAT_14ca79a20,0);
    return;
  }
  return;
}



// FUNCTION 1473f0510 FUN_1473f0510 body=466 status=ok
// SIG undefined FUN_1473f0510(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1473f0510(longlong *param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  byte bVar6;
  longlong *_Dst;
  longlong *plVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  longlong lVar12;
  undefined1 in_XMM1 [16];
  undefined1 auVar13 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar14 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  lVar4 = (**(code **)(*param_1 + 8))();
  bVar6 = *(byte *)(lVar4 + 0x30);
  bVar5 = (*(byte *)((longlong)param_1 + 0xb4) & 8) >> 3;
  uVar10 = ((uint)bVar5 + (uint)bVar5 * 4 + 1) * (uint)bVar6;
  *(uint *)(param_1 + 0x15) = uVar10;
  if (bVar6 != 0) {
    plVar7 = param_1 + 0x13;
    uVar9 = uVar10 + 0x1f >> 5;
    if (*(int *)((longlong)param_1 + 0xac) + 0x1fU >> 5 < uVar9) {
      FUN_144aa70c6(plVar7,0,uVar9,4);
      *(uint *)((longlong)param_1 + 0xac) = uVar10 + 0x1f & 0xfe0;
    }
    auVar1 = _DAT_149931e80;
    _Dst = (longlong *)param_1[0x14];
    if ((longlong *)param_1[0x14] == (longlong *)0x0) {
      _Dst = plVar7;
    }
    if (uVar10 < 0x101) {
      iVar2 = -((uint)param_2 & 0xff);
      uVar9 = uVar9 + (uVar9 == 0);
      lVar4 = (ulonglong)uVar9 - 1;
      auVar11._8_4_ = (int)lVar4;
      auVar11._0_8_ = lVar4;
      auVar11._12_4_ = (int)((ulonglong)lVar4 >> 0x20);
      auVar13 = pmovsxbq(in_XMM1,0x302);
      auVar14 = pmovsxbq(in_XMM2,0x100);
      uVar8 = 0;
      auVar11 = auVar11 ^ _DAT_149931e80;
      auVar15 = pmovsxbq(in_XMM5,0x404);
      do {
        auVar16 = auVar14 ^ auVar1;
        lVar4 = auVar11._0_8_;
        lVar12 = auVar11._8_8_;
        if ((bool)(~(lVar4 < auVar16._0_8_) & 1)) {
          *(int *)((longlong)_Dst + uVar8) = iVar2;
        }
        if (auVar16._8_8_ <= lVar12) {
          *(int *)((longlong)_Dst + uVar8 + 4) = iVar2;
        }
        auVar16 = auVar13 ^ auVar1;
        if (auVar16._0_8_ <= lVar4) {
          *(int *)((longlong)_Dst + uVar8 + 8) = iVar2;
        }
        if (auVar16._8_8_ <= lVar12) {
          *(int *)((longlong)_Dst + uVar8 + 0xc) = iVar2;
        }
        lVar4 = auVar14._8_8_;
        auVar14._0_8_ = auVar14._0_8_ + auVar15._0_8_;
        auVar14._8_8_ = lVar4 + auVar15._8_8_;
        lVar4 = auVar13._8_8_;
        auVar13._0_8_ = auVar13._0_8_ + auVar15._0_8_;
        auVar13._8_8_ = lVar4 + auVar15._8_8_;
        uVar8 = uVar8 + 0x10;
      } while ((uVar9 * 4 + 0xc & 0x7fff0) != uVar8);
    }
    else {
      memset(_Dst,(int)CONCAT71((int7)((param_2 & 0xffffffff) >> 8),-(char)(param_2 & 0xffffffff)),
             (ulonglong)(uVar9 << 2));
    }
    iVar2 = (int)param_1[0x15];
    iVar3 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar3 = iVar2;
    }
    if (iVar2 % 0x20 != 0) {
      if ((longlong *)param_1[0x14] != (longlong *)0x0) {
        plVar7 = (longlong *)param_1[0x14];
      }
      bVar6 = -(char)(iVar2 % 0x20);
      *(uint *)((longlong)plVar7 + (longlong)(iVar3 >> 5) * 4) =
           (uint)(*(int *)((longlong)plVar7 + (longlong)(iVar3 >> 5) * 4) << (bVar6 & 0x1f)) >>
           (bVar6 & 0x1f);
    }
  }
  return;
}



// FUNCTION 1473f06e2 FUN_1473f06e2 body=53 status=ok
// SIG undefined FUN_1473f06e2(void)

void FUN_1473f06e2(void)

{
  FUN_1473f0718();
  if (DAT_14ca79a88 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14ca79a68 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1473f0718 FUN_1473f0718 body=383 status=ok
// SIG undefined FUN_1473f0718(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1473f0718(void)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  undefined *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined *local_28;
  uint local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0x100000000;
  local_28 = &DAT_14ca79a78;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (DAT_14ca79a90 != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = &DAT_14ca79a68;
  local_50 = local_30;
  local_48 = local_28;
  local_40 = local_20;
  iStack_3c = iStack_1c;
  local_38 = local_18;
  local_34 = local_14;
  if (iStack_1c < *(int *)(local_28 + 0x18)) {
    do {
      lVar1 = *local_58;
      lVar3 = (longlong)iStack_3c * 0x40;
      LOCK();
      DAT_14ca79910 = DAT_14ca79910 - *(int *)(lVar1 + 0x28 + lVar3);
      UNLOCK();
      iVar2 = *(int *)(lVar1 + 0x30 + lVar3);
      if (iVar2 == -1) {
        iVar2 = *(int *)(lVar1 + lVar3 + 0x28);
      }
      LOCK();
      DAT_14ca79914 = DAT_14ca79914 - iVar2;
      UNLOCK();
      if (*(longlong *)(lVar1 + lVar3 + 0x20) != 0) {
        FUN_1400020a8();
      }
      local_40 = local_40 & ~local_50._4_4_;
      FUN_1449c0562(&local_50);
    } while (iStack_3c < *(int *)(local_48 + 0x18));
  }
  DAT_14ca79a70 = 0;
  if (DAT_14ca79a74 != 0) {
    FUN_140b7ce44(&DAT_14ca79a68,0);
  }
  _DAT_14ca79a98 = 0xffffffff;
  DAT_14ca79a90 = 0;
  if (0x80 < DAT_14ca79a94) {
    DAT_14ca79a94 = 0x80;
    FUN_1446efbd8(&DAT_14ca79a78,0);
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473f0898 FUN_1473f0898 body=195 status=ok
// SIG undefined FUN_1473f0898(void)

longlong FUN_1473f0898(uint param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined *puVar3;
  undefined1 auStack_48 [40];
  int *local_20;
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14ca79ac8 != DAT_14ca79af4) {
    puVar3 = &DAT_14ca79af8;
    if (DAT_14ca79b00 != (undefined *)0x0) {
      puVar3 = DAT_14ca79b00;
    }
    iVar1 = *(int *)(puVar3 + (ulonglong)(DAT_14ca79b08 - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        lVar2 = DAT_14ca79ac0 + (longlong)iVar1 * 0x20;
        if (*(int *)(DAT_14ca79ac0 + (longlong)iVar1 * 0x20) == *param_2) {
          if (lVar2 != 0) goto LAB_1473f093f;
          break;
        }
        iVar1 = *(int *)(lVar2 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_20 = param_2;
  FUN_1473f095c(&local_14,param_1);
  lVar2 = (longlong)local_14 * 0x20 + DAT_14ca79ac0;
LAB_1473f093f:
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2 + 8;
}



// FUNCTION 1473f095c FUN_1473f095c body=295 status=ok
// SIG undefined FUN_1473f095c(void)

undefined4 * FUN_1473f095c(undefined4 *param_1,uint param_2,undefined8 *param_3)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14012501e(&DAT_14ca79ac0,local_48);
  *local_40 = *(undefined4 *)*param_3;
  *(undefined8 *)(local_40 + 2) = 0;
  *(undefined8 *)(local_40 + 4) = 0;
  local_40[6] = 0xffffffff;
  cVar2 = FUN_1473f0a84(param_2,local_40,local_48);
  if (cVar2 == '\0') {
    uVar5 = DAT_14ca79ac8 - DAT_14ca79af4;
    iVar6 = 1;
    if (3 < uVar5) {
      uVar3 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= DAT_14ca79b08)) {
      param_2 = DAT_14ca79b08 - 1U & param_2;
      local_40[7] = param_2;
      puVar4 = DAT_14ca79b00;
      if (DAT_14ca79b00 == (undefined *)0x0) {
        puVar4 = &DAT_14ca79af8;
      }
      local_40[6] = *(undefined4 *)(puVar4 + (ulonglong)(DAT_14ca79b08 - 1U & param_2) * 4);
      puVar4 = DAT_14ca79b00;
      if (DAT_14ca79b00 == (undefined *)0x0) {
        puVar4 = &DAT_14ca79af8;
      }
      *(undefined4 *)(puVar4 + (ulonglong)(DAT_14ca79b08 - 1U & param_2) * 4) = local_48[0];
    }
    else {
      DAT_14ca79b08 = iVar6;
      FUN_1403faa6c(&DAT_14ca79ac0);
    }
  }
  *param_1 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473f0a84 FUN_1473f0a84 body=183 status=ok
// SIG undefined FUN_1473f0a84(void)

undefined8 FUN_1473f0a84(uint param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  
  if ((DAT_14ca79ac8 - DAT_14ca79af4 != 1) && (DAT_14ca79ac8 != DAT_14ca79af4)) {
    puVar6 = &DAT_14ca79af8;
    if (DAT_14ca79b00 != (undefined *)0x0) {
      puVar6 = DAT_14ca79b00;
    }
    iVar7 = *(int *)(puVar6 + (ulonglong)(DAT_14ca79b08 - 1U & param_1) * 4);
    if (iVar7 != -1) {
      do {
        piVar1 = (int *)(DAT_14ca79ac0 + (longlong)iVar7 * 0x20);
        if (*(int *)(DAT_14ca79ac0 + (longlong)iVar7 * 0x20) == *param_2) {
          if (*(longlong *)(piVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          iVar2 = *param_2;
          iVar3 = param_2[1];
          iVar4 = param_2[2];
          iVar5 = param_2[3];
          *(undefined8 *)(piVar1 + 4) = *(undefined8 *)(param_2 + 4);
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_147020f2e(&DAT_14ca79ac0,*param_3,1);
          *param_3 = iVar7;
          return 1;
        }
        iVar7 = piVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 1473f0b3c FUN_1473f0b3c body=566 status=ok
// SIG undefined FUN_1473f0b3c(void)

longlong * FUN_1473f0b3c(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 *puVar3;
  int *piVar4;
  undefined1 auStack_d8 [32];
  uint local_b8 [34];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_1473f1012(param_2,param_1);
  FUN_1473f12fc(param_2,param_1 + 0x10);
  lVar1 = param_1 + 0x20;
  FUN_1473f1644(param_2,lVar1);
  lVar2 = param_1 + 0x30;
  FUN_1473f1644(param_2,lVar2);
  FUN_1402ee999(param_2,param_3);
  FUN_1473f0f30(param_2,param_1 + 0x40);
  puVar3 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,(undefined1 *)(param_1 + 0x44),1);
  }
  else {
    *(undefined1 *)(param_1 + 0x44) = *puVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  puVar3 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,(undefined1 *)(param_1 + 0x45),1);
  }
  else {
    *(undefined1 *)(param_1 + 0x45) = *puVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  puVar3 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,(undefined1 *)(param_1 + 0x46),1);
  }
  else {
    *(undefined1 *)(param_1 + 0x46) = *puVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  piVar4 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar4 + 1) {
    local_b8[0] = (uint)*(byte *)(param_1 + 0x47);
    (**(code **)(*param_2 + 0x170))(param_2,local_b8,4);
    if (1 < local_b8[0]) {
      FUN_14572541c(param_2);
    }
    *(bool *)(param_1 + 0x47) = local_b8[0] != 0;
  }
  else {
    *(bool *)(param_1 + 0x47) = *piVar4 != 0;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    FUN_1427879d8(local_b8);
    FUN_1473f0f82(local_b8,lVar1);
    FUN_1473f0f82(local_b8,lVar2);
    FUN_140c54d7a(local_b8);
    FUN_142787a10(local_b8,param_1 + 0x48);
    FUN_1473f1a14(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x28) = 0;
    if (*(int *)(param_1 + 0x2c) != 0) {
      FUN_1473f1a40(lVar1,0);
    }
    FUN_1473f1a14(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
    *(undefined4 *)(param_1 + 0x38) = 0;
    if (*(int *)(param_1 + 0x3c) != 0) {
      FUN_1473f1a40(lVar2,0);
    }
    FUN_1427879f6(local_b8);
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473f0d73 FUN_1473f0d73 body=445 status=ok
// SIG undefined FUN_1473f0d73(void)

longlong * FUN_1473f0d73(longlong *param_1,undefined2 *param_2)

{
  char *pcVar1;
  undefined2 *puVar2;
  undefined1 *puVar3;
  char *pcVar4;
  undefined1 uVar5;
  
  puVar2 = *(undefined2 **)param_1[1];
  if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,2);
    }
    else {
      thunk_FUN_1457251a8(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
  }
  puVar3 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,param_2 + 1,1);
  }
  else {
    *(undefined1 *)(param_2 + 1) = *puVar3;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar3 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,(undefined1 *)((longlong)param_2 + 3),1);
  }
  else {
    *(undefined1 *)((longlong)param_2 + 3) = *puVar3;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  pcVar1 = (char *)(param_2 + 2);
  pcVar4 = *(char **)param_1[1];
  if ((char *)((undefined8 *)param_1[1])[1] < pcVar4 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,pcVar1,1);
  }
  else {
    *pcVar1 = *pcVar4;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    if ((byte)(*pcVar1 + 0x99U) < 0xf) {
      uVar5 = (&DAT_14a3716bc)[(byte)(*pcVar1 + 0x99U)];
    }
    else {
      uVar5 = 0;
    }
    *(undefined1 *)((longlong)param_2 + 5) = uVar5;
  }
  puVar2 = *(undefined2 **)param_1[1];
  if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 3,2);
    }
    else {
      thunk_FUN_1457251a8(param_1);
    }
  }
  else {
    param_2[3] = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
  }
  param_2 = param_2 + 4;
  puVar2 = *(undefined2 **)param_1[1];
  if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,2);
    }
    else {
      thunk_FUN_1457251a8(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
  }
  return param_1;
}



// FUNCTION 1473f0f30 FUN_1473f0f30 body=82 status=ok
// SIG undefined FUN_1473f0f30(void)

longlong * FUN_1473f0f30(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 1473f0f82 FUN_1473f0f82 body=85 status=ok
// SIG undefined FUN_1473f0f82(void)

void FUN_1473f0f82(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)(int)param_2[1] != 0) {
    lVar1 = (longlong)(int)param_2[1] * 0x18;
    lVar2 = *param_2 + 0x10;
    do {
      FUN_140c54e34(param_1,lVar2,4);
      FUN_140c54e34(param_1,*(undefined8 *)(lVar2 + -0x10),(longlong)*(int *)(lVar2 + -8));
      lVar2 = lVar2 + 0x18;
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 1473f0fd8 FUN_1473f0fd8 body=57 status=ok
// SIG undefined FUN_1473f0fd8(void)

void FUN_1473f0fd8(undefined8 *param_1,int param_2)

{
  FUN_1473f1a14(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_1473f1a40(param_1,param_2);
  return;
}



// FUNCTION 1473f1012 FUN_1473f1012 body=414 status=ok
// SIG undefined FUN_1473f1012(void)

longlong * FUN_1473f1012(longlong *param_1,longlong *param_2)

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
      FUN_1473f11eb(*param_2,(int)param_2[1]);
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_1473f1216(param_2,0);
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
      FUN_1473f12fc(param_1,*param_2 + lVar5);
      lVar7 = lVar7 + 1;
      lVar5 = lVar5 + 0x10;
    } while (lVar7 < (int)param_2[1]);
  }
  else {
    FUN_1473f11b2(param_2);
    if (0 < (int)local_44) {
      iVar6 = 0;
      do {
        iVar3 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
          FUN_1473f1276(param_2,iVar3);
        }
        lVar5 = *param_2;
        puVar2 = (undefined8 *)(lVar5 + (longlong)iVar3 * 0x10);
        *puVar2 = 0;
        puVar2[1] = 0;
        FUN_1473f12fc(param_1,lVar5 + (longlong)iVar3 * 0x10);
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



// FUNCTION 1473f11b2 FUN_1473f11b2 body=57 status=ok
// SIG undefined FUN_1473f11b2(void)

void FUN_1473f11b2(undefined8 *param_1,int param_2)

{
  FUN_1473f11eb(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_1473f1216(param_1,param_2);
  return;
}



// FUNCTION 1473f11eb FUN_1473f11eb body=43 status=ok
// SIG undefined FUN_1473f11eb(void)

void FUN_1473f11eb(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 1473f1216 FUN_1473f1216 body=95 status=ok
// SIG undefined FUN_1473f1216(void)

void FUN_1473f1216(longlong param_1,uint param_2)

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



// FUNCTION 1473f1276 FUN_1473f1276 body=132 status=ok
// SIG undefined FUN_1473f1276(void)

void FUN_1473f1276(longlong param_1,int param_2)

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



// FUNCTION 1473f12fc FUN_1473f12fc body=399 status=ok
// SIG undefined FUN_1473f12fc(void)

longlong * FUN_1473f12fc(longlong *param_1,longlong *param_2)

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
            (param_1,(longlong)(int)param_2[1] << 2,(longlong)*(int *)((longlong)param_2 + 0xc) << 2
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
      FUN_1473f155e(param_2,0);
    }
  }
  else if ((((int)local_34 < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x400000 < local_34 && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_34;
    lVar4 = 0;
    lVar6 = 0;
    do {
      FUN_1473f148c(param_1,*param_2 + lVar4);
      lVar6 = lVar6 + 1;
      lVar4 = lVar4 + 4;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_34) ||
       (FUN_1473f155e(param_2), 0 < (int)local_34)) {
      iVar5 = 0;
      do {
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_1473f15be(param_2,iVar2);
        }
        FUN_1473f148c(param_1,(longlong)iVar2 * 4 + *param_2);
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



// FUNCTION 1473f148c FUN_1473f148c body=209 status=ok
// SIG undefined FUN_1473f148c(void)

longlong * FUN_1473f148c(longlong *param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = *(undefined2 **)param_1[1];
  if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,2);
    }
    else {
      thunk_FUN_1457251a8(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
  }
  puVar2 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,param_2 + 1,1);
  }
  else {
    *(undefined1 *)(param_2 + 1) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar2 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,(undefined1 *)((longlong)param_2 + 3),1);
  }
  else {
    *(undefined1 *)((longlong)param_2 + 3) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  return param_1;
}



// FUNCTION 1473f155e FUN_1473f155e body=95 status=ok
// SIG undefined FUN_1473f155e(void)

void FUN_1473f155e(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 2,2);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 2)) {
      uVar2 = uVar1 >> 2 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,4,2);
  }
  return;
}



// FUNCTION 1473f15be FUN_1473f15be body=132 status=ok
// SIG undefined FUN_1473f15be(void)

void FUN_1473f15be(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 2,2);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,4,2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1473f1644 FUN_1473f1644 body=371 status=ok
// SIG undefined FUN_1473f1644(void)

longlong * FUN_1473f1644(longlong *param_1,longlong *param_2)

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
            (param_1,(longlong)(int)param_2[1] * 0x18,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x18);
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
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_1473f1a14(*param_2,(int)param_2[1]);
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_1473f1a40(param_2,0);
      }
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0xaaaaa < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_1473f17b8(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x18;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    FUN_1473f0fd8(param_2);
    if (0 < (int)local_2c) {
      iVar4 = 0;
      do {
        uVar3 = FUN_1473f181e(param_2);
        FUN_1473f17b8(param_1,uVar3);
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



// FUNCTION 1473f17b8 FUN_1473f17b8 body=102 status=ok
// SIG undefined FUN_1473f17b8(void)

longlong * FUN_1473f17b8(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_1473f185e();
  puVar2 = (undefined4 *)(param_2 + 0x10);
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,puVar2,4);
    }
    else {
      FUN_14572512c(param_1,puVar2);
    }
  }
  else {
    *puVar2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 1473f181e FUN_1473f181e body=63 status=ok
// SIG undefined FUN_1473f181e(void)

longlong FUN_1473f181e(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1473f1980(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x18 + *param_1;
  FUN_1473f1978(lVar2);
  return lVar2;
}



// FUNCTION 1473f185e FUN_1473f185e body=281 status=ok
// SIG undefined FUN_1473f185e(void)

longlong * FUN_1473f185e(longlong *param_1,undefined8 *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  uint uVar3;
  undefined1 auStack_48 [44];
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)*(int *)(param_2 + 1),(longlong)*(int *)((longlong)param_2 + 0xc));
  local_1c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_1c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_1c,4);
    }
    else {
      FUN_14572512c(param_1,&local_1c);
    }
  }
  else {
    local_1c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_1c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_141701710(param_2,0);
    }
  }
  else if ((((int)local_1c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x1000000 < local_1c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else {
    *(uint *)(param_2 + 1) = local_1c;
    uVar3 = local_1c;
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_1409e00a6(param_2,local_1c,*(undefined4 *)((longlong)param_2 + 0xc));
      uVar3 = *(uint *)(param_2 + 1);
    }
    (**(code **)(*param_1 + 0x170))(param_1,*param_2,(longlong)(int)uVar3);
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1473f1978 FUN_1473f1978 body=7 status=ok
// SIG undefined FUN_1473f1978(void)

void FUN_1473f1978(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 1473f1980 FUN_1473f1980 body=147 status=ok
// SIG undefined FUN_1473f1980(void)

void FUN_1473f1980(longlong param_1,int param_2)

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



// FUNCTION 1473f1a14 FUN_1473f1a14 body=43 status=ok
// SIG undefined FUN_1473f1a14(void)

void FUN_1473f1a14(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 1473f1a40 FUN_1473f1a40 body=112 status=ok
// SIG undefined FUN_1473f1a40(void)

void FUN_1473f1a40(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x18,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x18)) {
      uVar2 = uVar1 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x18,8);
  }
  return;
}



// FUNCTION 1473f1ab0 FUN_1473f1ab0 body=111 status=ok
// SIG undefined FUN_1473f1ab0(void)

void FUN_1473f1ab0(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 10,2);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 10)) {
      uVar2 = uVar1 / 10 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,10,2);
  }
  return;
}



// FUNCTION 1473f1b20 FUN_1473f1b20 body=146 status=ok
// SIG undefined FUN_1473f1b20(void)

void FUN_1473f1b20(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 10,2);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 10)) {
      uVar5 = uVar4 / 10 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,10,2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1473f1bb4 FUN_1473f1bb4 body=95 status=ok
// SIG undefined FUN_1473f1bb4(void)

undefined8 * FUN_1473f1bb4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1473f11eb(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1473f1ccc(param_1,iVar1);
      FUN_1473f1d2e(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1473f1c14 FUN_1473f1c14 body=88 status=ok
// SIG undefined FUN_1473f1c14(void)

undefined8 * FUN_1473f1c14(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1473f1da6(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 2);
      }
    }
  }
  return param_1;
}



// FUNCTION 1473f1c6c FUN_1473f1c6c body=95 status=ok
// SIG undefined FUN_1473f1c6c(void)

undefined8 * FUN_1473f1c6c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1473f1a14(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1473f1e08(param_1,iVar1);
      FUN_1473f1e7b(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1473f1ccc FUN_1473f1ccc body=98 status=ok
// SIG undefined FUN_1473f1ccc(void)

void FUN_1473f1ccc(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,8);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1473f1d2e FUN_1473f1d2e body=119 status=ok
// SIG undefined FUN_1473f1d2e(void)

void FUN_1473f1d2e(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  int *piVar2;
  
  if (param_3 != 0) {
    piVar2 = (int *)(param_2 + 8);
    do {
      *param_1 = 0;
      iVar1 = *piVar2;
      _Src = *(void **)(piVar2 + -2);
      *(int *)(param_1 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_1473f1da6(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 2);
      }
      param_1 = param_1 + 2;
      piVar2 = piVar2 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1473f1da6 FUN_1473f1da6 body=98 status=ok
// SIG undefined FUN_1473f1da6(void)

void FUN_1473f1da6(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 2,2);
    iVar1 = (int)(uVar2 >> 2);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,4,2);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1473f1e08 FUN_1473f1e08 body=115 status=ok
// SIG undefined FUN_1473f1e08(void)

void FUN_1473f1e08(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    iVar2 = (int)(uVar1 / 0x18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x18,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1473f1e7b FUN_1473f1e7b body=121 status=ok
// SIG undefined FUN_1473f1e7b(void)

void FUN_1473f1e7b(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined4 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = (undefined4 *)(param_2 + 0x10);
    do {
      *param_1 = 0;
      iVar1 = puVar2[-2];
      _Src = *(void **)(puVar2 + -4);
      *(int *)(param_1 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_1409e00a6(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1);
      }
      *(undefined4 *)(param_1 + 2) = *puVar2;
      param_1 = param_1 + 3;
      puVar2 = puVar2 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1473f1ef4 FUN_1473f1ef4 body=110 status=ok
// SIG undefined FUN_1473f1ef4(void)

void FUN_1473f1ef4(longlong *param_1)

{
  FUN_1473f1a14(param_1[6],(int)param_1[7]);
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_1473f1a14(param_1[4],(int)param_1[5]);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_1473f11eb(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1473f1f62 FUN_1473f1f62 body=46 status=ok
// SIG undefined FUN_1473f1f62(void)

void FUN_1473f1f62(void)

{
  DAT_14ca79c30 = 0;
  if (DAT_14ca79c28 != 0) {
    FUN_1400020a8();
  }
  FUN_1473f2948();
  FUN_1473f291a();
  return;
}



// FUNCTION 1473f1f90 FUN_1473f1f90 body=198 status=ok
// SIG undefined FUN_1473f1f90(void)

undefined4 * FUN_1473f1f90(undefined4 *param_1)

{
  *param_1 = 0x800;
  *(undefined8 *)(param_1 + 10) = 0;
  param_1[0xc] = 0;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 3) = 0;
  param_1[5] = 0;
  *(undefined8 *)(param_1 + 0xd) = 0xffffffff00000080;
  param_1[0xf] = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  param_1[0x14] = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  param_1[0x1a] = 0x800;
  FUN_1473f2056(param_1 + 2,0x800);
  *(undefined8 *)(param_1 + 0x24) = 0;
  param_1[0x26] = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x27) = 0xffffffff00000080;
  param_1[0x29] = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  param_1[0x2e] = 0;
  FUN_1473f2594(param_1 + 0x1c,10000);
  if ((int)param_1[0x2e] < 0x2000) {
    param_1[0x2e] = 0x2000;
    FUN_1473f274c(param_1 + 0x1c);
  }
  return param_1;
}



// FUNCTION 1473f2056 FUN_1473f2056 body=290 status=ok
// SIG undefined FUN_1473f2056(void)

void FUN_1473f2056(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  iVar2 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
    iVar2 = (int)param_1[5];
  }
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_70 = local_50;
  local_68 = local_48;
  local_78 = param_1;
  if ((iStack_3c != iVar2) || (local_48 != plVar1)) {
    do {
      if (*(longlong *)(*local_78 + (longlong)iStack_5c * 0x10) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (local_78 != param_1 || (local_68 != plVar1 || iStack_5c != iVar2));
  }
  *(undefined4 *)(param_1 + 0xc) = param_2;
  FUN_1473f217a(param_1,param_2);
  param_1[10] = 0;
  param_1[0xb] = 0;
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473f217a FUN_1473f217a body=110 status=ok
// SIG undefined FUN_1473f217a(void)

void FUN_1473f217a(longlong param_1,uint param_2)

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
    FUN_1473f232c(param_1,param_2);
    *(int *)(param_1 + 0x48) = iVar3;
    FUN_1473f23ae(param_1);
    return;
  }
  FUN_1473f21e8(param_1);
  FUN_1473f232c(param_1,param_2);
  return;
}



// FUNCTION 1473f21e8 FUN_1473f21e8 body=322 status=ok
// SIG undefined FUN_1473f21e8(void)

void FUN_1473f21e8(longlong *param_1)

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



// FUNCTION 1473f232c FUN_1473f232c body=128 status=ok
// SIG undefined FUN_1473f232c(void)

void FUN_1473f232c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14474875a(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 1473f23ae FUN_1473f23ae body=485 status=ok
// SIG undefined FUN_1473f23ae(void)

void FUN_1473f23ae(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined1 auStack_108 [32];
  longlong *local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_d0;
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
    local_b8 = param_1 + 2;
    local_c0 = 0x100000000;
    local_b0 = 0xffffffff;
    local_a8 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_c0);
    }
    local_e0 = local_c0;
    local_d8 = local_b8;
    local_d0 = local_b0;
    uVar4 = local_d0;
    local_c8 = local_a8;
    local_c4 = local_a4;
    local_d0._4_4_ = (int)((ulonglong)local_b0 >> 0x20);
    local_e8 = param_1;
    if (local_d0._4_4_ < (int)local_b8[3]) {
      iVar5 = local_d0._4_4_;
      local_d0 = uVar4;
      do {
        lVar3 = *local_e8;
        lVar13 = (longlong)iVar5 * 0x10;
        puVar10 = *(undefined4 **)(lVar3 + lVar13);
        puVar12 = &local_c0;
        for (lVar8 = 0x1e; lVar8 != 0; lVar8 = lVar8 + -1) {
          *(undefined4 *)puVar12 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar12 = (undefined8 *)((longlong)puVar12 + 4);
        }
        iVar6 = (*(code *)PTR_FUN_14c75b148)(&local_c0,0x78,0);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0xc + lVar13) = iVar6;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar3 + 8 + lVar13) =
             *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_d0 = CONCAT44(local_d0._4_4_,(uint)local_d0 & ~local_e0._4_4_);
        FUN_1449c0562(&local_e0);
        iVar5 = local_d0._4_4_;
        uVar4 = local_d0;
      } while (local_d0._4_4_ < (int)local_d8[3]);
    }
  }
  local_d0 = uVar4;
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1473f2594 FUN_1473f2594 body=439 status=ok
// SIG undefined FUN_1473f2594(void)

void FUN_1473f2594(longlong *param_1,uint param_2)

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
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar6);
    }
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_140d97c6c(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar8;
    if ((uint)(iVar10 - iVar11) < uVar8) {
      FUN_140f20a84(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar6 * 0x90 + lVar2 + -0x8c);
      do {
        iVar9 = (int)uVar6;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x90) = iVar9 + -1;
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
        puVar5 = puVar5 + -0x24;
      } while ((longlong)iVar11 < (longlong)uVar6);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar8;
      if (param_2 != 0) {
        plVar7 = param_1 + 2;
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
    }
    else if (-1 < (int)uVar8) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar8);
      FUN_1447c6044(param_1 + 2,uVar3,uVar8,0);
      return;
    }
  }
  return;
}



// FUNCTION 1473f274c FUN_1473f274c body=460 status=ok
// SIG undefined FUN_1473f274c(void)

void FUN_1473f274c(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar10 = (longlong)iVar5 * 0x90;
        iVar6 = (*(code *)PTR_FUN_14c75b148)(lVar3 + lVar10,0x78,0);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x8c + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x88 + lVar10) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1473f291a FUN_1473f291a body=46 status=ok
// SIG undefined FUN_1473f291a(void)

void FUN_1473f291a(void)

{
  DAT_14ca79be0 = 0;
  if (DAT_14ca79bd8 != 0) {
    FUN_1400020a8();
  }
  FUN_1473f2a20();
  FUN_1473f29e8();
  return;
}



// FUNCTION 1473f2948 FUN_1473f2948 body=53 status=ok
// SIG undefined FUN_1473f2948(void)

void FUN_1473f2948(void)

{
  FUN_1473f297e();
  if (DAT_14ca79c08 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14ca79be8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1473f297e FUN_1473f297e body=105 status=ok
// SIG undefined FUN_1473f297e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1473f297e(void)

{
  DAT_14ca79bf0 = 0;
  if (DAT_14ca79bf4 != 0) {
    FUN_144a544ac(&DAT_14ca79be8,0);
  }
  _DAT_14ca79c18 = 0xffffffff;
  DAT_14ca79c10 = 0;
  if (0x80 < DAT_14ca79c14) {
    DAT_14ca79c14 = 0x80;
    FUN_1446efbd8(&DAT_14ca79bf8,0);
    return;
  }
  return;
}



// FUNCTION 1473f29e8 FUN_1473f29e8 body=55 status=ok
// SIG undefined FUN_1473f29e8(void)

void FUN_1473f29e8(void)

{
  FUN_1473f2056(&DAT_14ca79b30,0);
  DAT_14ca79b78 = 0;
  if (DAT_14ca79b70 != 0) {
    FUN_1400020a8();
  }
  FUN_1473f2a56();
  return;
}



// FUNCTION 1473f2a20 FUN_1473f2a20 body=53 status=ok
// SIG undefined FUN_1473f2a20(void)

void FUN_1473f2a20(void)

{
  FUN_1431cc958();
  if (DAT_14ca79bb8 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14ca79b98 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1473f2a56 FUN_1473f2a56 body=62 status=ok
// SIG undefined FUN_1473f2a56(void)

void FUN_1473f2a56(void)

{
  FUN_1473f232c(&DAT_14ca79b30,0);
  if (DAT_14ca79b50 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14ca79b30 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1473f2a94 FUN_1473f2a94 body=154 status=ok
// SIG undefined FUN_1473f2a94(void)

ulonglong FUN_1473f2a94(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  byte bVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  lVar2 = DAT_14ca79850;
  uVar6 = (ulonglong)_tls_index;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar6 * 8);
  iVar8 = DAT_14ca79b38 - DAT_14ca79b64;
  if (*(int *)(lVar1 + 0xc60) == 0x40000002) {
    uVar7 = 0;
  }
  else {
    uVar6 = FUN_144a61b4f();
    uVar6 = uVar6 ^ 1;
    uVar7 = uVar6 & 0xff;
  }
  iVar4 = DAT_14ca79b2c;
  lVar3 = DAT_14ca79868;
  uVar6 = CONCAT71((int7)(uVar6 >> 8),1);
  if ((iVar8 != *(int *)(lVar2 + uVar7 * 4)) && (DAT_14ca79b38 - DAT_14ca79b64 != DAT_14ca79b90)) {
    if (*(int *)(lVar1 + 0xc60) == 0x40000002) {
      uVar6 = 0;
    }
    else {
      bVar5 = FUN_144a61b4f();
      uVar6 = (ulonglong)(bVar5 ^ 1);
    }
    uVar6 = (ulonglong)(*(int *)(lVar3 + uVar6 * 4) < iVar4);
  }
  return uVar6;
}



// FUNCTION 1473f2b2e FUN_1473f2b2e body=179 status=ok
// SIG undefined FUN_1473f2b2e(void)

undefined8 FUN_1473f2b2e(undefined8 param_1,undefined4 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined1 auStack_58 [40];
  undefined4 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined4 *)FUN_14001cc68(0x90,0x10);
  puVar2 = local_30;
  for (lVar1 = 0x1e; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  *(undefined8 *)(local_30 + 0x20) = 0;
  *(undefined8 *)(local_30 + 0x22) = *param_3;
  *(undefined4 **)(local_30 + 0x1e) = DAT_14ca79b88;
  if (DAT_14ca79b88 != (undefined4 *)0x0) {
    *(undefined4 **)((longlong)DAT_14ca79b88 + 0x80) = local_30;
  }
  if (DAT_14ca79b80 == (undefined4 *)0x0) {
    DAT_14ca79b80 = local_30;
  }
  DAT_14ca79b88 = local_30;
  FUN_1473f3208(param_1,&local_30);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473f2be2 FUN_1473f2be2 body=333 status=ok
// SIG undefined FUN_1473f2be2(void)

undefined4 * FUN_1473f2be2(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1473f2d30(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  puVar9 = (undefined4 *)*param_3;
  puVar10 = local_40;
  for (lVar6 = 0x1e; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  FUN_1431ccd90(local_40 + 0x1e,*puVar1);
  local_40[0x22] = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = (*(code *)PTR_FUN_14c75b148)(local_40,0x78,0);
  cVar3 = FUN_1431ccd00(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
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
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_40[0x23] = uVar4;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      local_40[0x22] =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_1473f274c(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473f2d30 FUN_1473f2d30 body=238 status=ok
// SIG undefined FUN_1473f2d30(void)

int * FUN_1473f2d30(longlong *param_1,int *param_2)

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
      FUN_140f20a84(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x90);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x90) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x90 + *param_1;
  return param_2;
}



// FUNCTION 1473f2e2a FUN_1473f2e2a body=61 status=ok
// SIG undefined FUN_1473f2e2a(void)

void FUN_1473f2e2a(longlong param_1)

{
  if (*(char *)(param_1 + 0x1b0) == '\x01') {
    FUN_1473f2e68(param_1 + 0x120);
    *(undefined1 *)(param_1 + 0x1b0) = 0;
  }
  FUN_1473f2e68(param_1 + 0x90);
  FUN_1473f2e68(param_1);
  return;
}



// FUNCTION 1473f2e68 FUN_1473f2e68 body=78 status=ok
// SIG undefined FUN_1473f2e68(void)

void FUN_1473f2e68(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  FUN_1473f2eb6(*(undefined8 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x78));
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  FUN_1473f1ef4(param_1);
  return;
}



// FUNCTION 1473f2eb6 FUN_1473f2eb6 body=43 status=ok
// SIG undefined FUN_1473f2eb6(void)

void FUN_1473f2eb6(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 1473f2ee2 FUN_1473f2ee2 body=165 status=ok
// SIG undefined FUN_1473f2ee2(void)

int FUN_1473f2ee2(longlong *param_1,uint param_2,undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  bool bVar4;
  longlong *plVar5;
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
  ulonglong uVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        pauVar6 = (undefined1 (*) [16])(*param_1 + (longlong)iVar3 * 0x90);
        uVar8 = 0;
        pauVar7 = param_3;
        do {
          auVar1 = *pauVar6;
          auVar2 = *pauVar7;
          bVar4 = *(int *)pauVar7[1] == *(int *)pauVar6[1];
          if (4 < uVar8) break;
          uVar8 = uVar8 + 1;
          pauVar6 = (undefined1 (*) [16])(pauVar6[1] + 4);
          pauVar7 = (undefined1 (*) [16])(pauVar7[1] + 4);
        } while (bVar4 && auVar2 == auVar1);
        if (bVar4 && auVar2 == auVar1) {
          return iVar3;
        }
        iVar3 = *(int *)(*param_1 + 0x88 + (longlong)iVar3 * 0x90);
      } while (iVar3 != -1);
    }
  }
  return -1;
}



// FUNCTION 1473f2f88 FUN_1473f2f88 body=122 status=ok
// SIG undefined FUN_1473f2f88(void)

void FUN_1473f2f88(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x90) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x90) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x90 + 4) = uVar4;
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



// FUNCTION 1473f3002 FUN_1473f3002 body=312 status=ok
// SIG undefined FUN_1473f3002(void)

void FUN_1473f3002(longlong *param_1,undefined4 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 (*pauVar8) [16];
  undefined4 *puVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  undefined1 (*pauVar12) [16];
  undefined1 auStack_1b8 [40];
  undefined4 local_190 [30];
  undefined4 local_118 [30];
  undefined4 local_a0 [30];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    puVar9 = param_2;
    puVar11 = local_190;
    for (lVar5 = 0x1e; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar11 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    }
    iVar4 = (*(code *)PTR_FUN_14c75b148)(local_190,0x78,0);
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar6 + ((longlong)iVar4 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar4 != -1) {
      lVar5 = *param_1;
      do {
        puVar9 = param_2;
        pauVar8 = (undefined1 (*) [16])local_a0;
        for (lVar7 = 0x1e; lVar7 != 0; lVar7 = lVar7 + -1) {
          *(undefined4 *)*pauVar8 = *puVar9;
          puVar9 = puVar9 + 1;
          pauVar8 = (undefined1 (*) [16])(*pauVar8 + 4);
        }
        puVar9 = *(undefined4 **)(lVar5 + (longlong)iVar4 * 0x10);
        pauVar8 = (undefined1 (*) [16])local_118;
        for (lVar7 = 0x1e; lVar7 != 0; lVar7 = lVar7 + -1) {
          *(undefined4 *)*pauVar8 = *puVar9;
          puVar9 = puVar9 + 1;
          pauVar8 = (undefined1 (*) [16])(*pauVar8 + 4);
        }
        uVar10 = 0;
        pauVar8 = (undefined1 (*) [16])local_a0;
        pauVar12 = (undefined1 (*) [16])local_118;
        do {
          auVar1 = *pauVar12;
          auVar2 = *pauVar8;
          bVar3 = *(int *)pauVar8[1] == *(int *)pauVar12[1];
          if (4 < uVar10) break;
          uVar10 = uVar10 + 1;
          pauVar12 = (undefined1 (*) [16])(pauVar12[1] + 4);
          pauVar8 = (undefined1 (*) [16])(pauVar8[1] + 4);
        } while (bVar3 && auVar2 == auVar1);
        if (bVar3 && auVar2 == auVar1) {
          FUN_1473f313c(param_1);
          break;
        }
        iVar4 = *(int *)(lVar5 + (longlong)iVar4 * 0x10 + 8);
      } while (iVar4 != -1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473f313c FUN_1473f313c body=90 status=ok
// SIG undefined FUN_1473f313c(void)

void FUN_1473f313c(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0xc + (longlong)param_2 * 0x10);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 8 + lVar5 * 0x10);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x10 + 8);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x10 + 8);
  FUN_1473f3196();
  return;
}



// FUNCTION 1473f3196 FUN_1473f3196 body=114 status=ok
// SIG undefined FUN_1473f3196(void)

void FUN_1473f3196(longlong *param_1,int param_2)

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



// FUNCTION 1473f3208 FUN_1473f3208 body=344 status=ok
// SIG undefined FUN_1473f3208(void)

undefined4 * FUN_1473f3208(undefined4 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined1 auStack_e8 [44];
  undefined4 local_bc;
  undefined4 local_b8 [2];
  undefined8 *local_b0;
  undefined4 local_a8 [30];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1473f3362(local_b8);
  puVar9 = (undefined4 *)*param_2;
  *local_b0 = puVar9;
  *(undefined4 *)(local_b0 + 1) = 0xffffffff;
  local_bc = local_b8[0];
  puVar10 = local_a8;
  for (lVar6 = 0x1e; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  uVar3 = (*(code *)PTR_FUN_14c75b148)(local_a8,0x78,0);
  cVar2 = FUN_1473f3470(uVar3,local_b0,&local_bc);
  uVar1 = local_bc;
  if (cVar2 == '\0') {
    uVar4 = DAT_14ca79b38 - DAT_14ca79b64;
    iVar8 = 1;
    if (3 < uVar4) {
      uVar7 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar8 <= DAT_14ca79b78)) {
      uVar3 = DAT_14ca79b78 - 1U & uVar3;
      *(uint *)((longlong)local_b0 + 0xc) = uVar3;
      puVar5 = DAT_14ca79b70;
      if (DAT_14ca79b70 == (undefined *)0x0) {
        puVar5 = &DAT_14ca79b68;
      }
      *(undefined4 *)(local_b0 + 1) =
           *(undefined4 *)(puVar5 + ((longlong)DAT_14ca79b78 - 1U & (longlong)(int)uVar3) * 4);
      puVar5 = DAT_14ca79b70;
      if (DAT_14ca79b70 == (undefined *)0x0) {
        puVar5 = &DAT_14ca79b68;
      }
      *(undefined4 *)(puVar5 + ((longlong)DAT_14ca79b78 - 1U & (longlong)(int)uVar3) * 4) = local_bc
      ;
    }
    else {
      DAT_14ca79b78 = iVar8;
      FUN_1473f23ae(&DAT_14ca79b30);
    }
  }
  *param_1 = uVar1;
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473f3362 FUN_1473f3362 body=269 status=ok
// SIG undefined FUN_1473f3362(void)

int * FUN_1473f3362(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14ca79b60;
  iVar4 = DAT_14ca79b38;
  if (DAT_14ca79b64 == 0) {
    iVar2 = DAT_14ca79b38 + 1;
    bVar7 = DAT_14ca79b3c == DAT_14ca79b38;
    DAT_14ca79b38 = iVar2;
    if (bVar7) {
      FUN_1446efaca(&DAT_14ca79b30,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14ca79b40,1);
    puVar3 = DAT_14ca79b50;
    if (DAT_14ca79b50 == (undefined *)0x0) {
      puVar3 = &DAT_14ca79b40;
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
    lVar6 = (longlong)DAT_14ca79b60;
    DAT_14ca79b60 = *(int *)(DAT_14ca79b30 + 4 + lVar6 * 0x10);
    DAT_14ca79b64 = DAT_14ca79b64 + -1;
    iVar4 = iVar2;
    if (DAT_14ca79b64 != 0) {
      *(undefined4 *)(DAT_14ca79b30 + (longlong)DAT_14ca79b60 * 0x10) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14ca79b40;
  if (DAT_14ca79b50 != (undefined *)0x0) {
    puVar3 = DAT_14ca79b50;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0x10 + DAT_14ca79b30;
  return param_1;
}



// FUNCTION 1473f3470 FUN_1473f3470 body=96 status=ok
// SIG undefined FUN_1473f3470(void)

undefined8 FUN_1473f3470(undefined8 param_1,undefined8 *param_2,int *param_3)

{
  int iVar1;
  
  if ((DAT_14ca79b38 - DAT_14ca79b64 != 1) && (iVar1 = FUN_1473f34d0(param_1,*param_2), iVar1 != -1)
     ) {
    *(undefined8 *)(DAT_14ca79b30 + (longlong)iVar1 * 0x10) = *param_2;
    FUN_1473f3196(&DAT_14ca79b30,*param_3);
    *param_3 = iVar1;
    return 1;
  }
  return 0;
}



// FUNCTION 1473f34d0 FUN_1473f34d0 body=273 status=ok
// SIG undefined FUN_1473f34d0(void)

int FUN_1473f34d0(uint param_1,undefined4 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  bool bVar3;
  int iVar4;
  longlong lVar5;
  undefined1 (*pauVar6) [16];
  undefined4 *puVar7;
  undefined1 (*pauVar8) [16];
  ulonglong uVar9;
  undefined *puVar10;
  undefined1 auStack_138 [40];
  undefined4 local_110 [30];
  undefined4 local_98 [30];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (DAT_14ca79b38 != DAT_14ca79b64) {
    puVar10 = &DAT_14ca79b68;
    if (DAT_14ca79b70 != (undefined *)0x0) {
      puVar10 = DAT_14ca79b70;
    }
    iVar4 = *(int *)(puVar10 + (ulonglong)(DAT_14ca79b78 - 1U & param_1) * 4);
    if (iVar4 != -1) {
      do {
        puVar7 = param_2;
        pauVar6 = (undefined1 (*) [16])local_98;
        for (lVar5 = 0x1e; lVar5 != 0; lVar5 = lVar5 + -1) {
          *(undefined4 *)*pauVar6 = *puVar7;
          puVar7 = puVar7 + 1;
          pauVar6 = (undefined1 (*) [16])(*pauVar6 + 4);
        }
        puVar7 = *(undefined4 **)(DAT_14ca79b30 + (longlong)iVar4 * 0x10);
        pauVar6 = (undefined1 (*) [16])local_110;
        for (lVar5 = 0x1e; lVar5 != 0; lVar5 = lVar5 + -1) {
          *(undefined4 *)*pauVar6 = *puVar7;
          puVar7 = puVar7 + 1;
          pauVar6 = (undefined1 (*) [16])(*pauVar6 + 4);
        }
        uVar9 = 0;
        pauVar6 = (undefined1 (*) [16])local_98;
        pauVar8 = (undefined1 (*) [16])local_110;
        do {
          auVar1 = *pauVar8;
          auVar2 = *pauVar6;
          bVar3 = *(int *)pauVar6[1] == *(int *)pauVar8[1];
          if (4 < uVar9) break;
          uVar9 = uVar9 + 1;
          pauVar8 = (undefined1 (*) [16])(pauVar8[1] + 4);
          pauVar6 = (undefined1 (*) [16])(pauVar6[1] + 4);
        } while (bVar3 && auVar2 == auVar1);
        if (bVar3 && auVar2 == auVar1) goto LAB_1473f34ff;
        iVar4 = *(int *)(DAT_14ca79b30 + 8 + (longlong)iVar4 * 0x10);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_1473f34ff:
  if ((local_20 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 1473f35e2 FUN_1473f35e2 body=336 status=ok
// SIG undefined FUN_1473f35e2(void)

undefined4 * FUN_1473f35e2(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined4 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1473f3734(local_40);
  puVar1 = (undefined8 *)param_2[1];
  puVar10 = (undefined4 *)*param_2;
  puVar11 = local_38;
  for (lVar7 = 0x1e; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  *(undefined8 *)(local_38 + 0x1e) = *puVar1;
  local_38[0x20] = 0xffffffff;
  local_44 = local_40[0];
  uVar4 = (*(code *)PTR_FUN_14c75b148)(local_38,0x78,0);
  cVar3 = FUN_1473f3854(uVar4,local_38,&local_44);
  uVar2 = local_44;
  if (cVar3 == '\0') {
    uVar5 = DAT_14ca79bf0 - DAT_14ca79c1c;
    iVar9 = 1;
    if (3 < uVar5) {
      uVar8 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar9 <= DAT_14ca79c30)) {
      uVar4 = DAT_14ca79c30 - 1U & uVar4;
      local_38[0x21] = uVar4;
      puVar6 = DAT_14ca79c28;
      if (DAT_14ca79c28 == (undefined *)0x0) {
        puVar6 = &DAT_14ca79c20;
      }
      local_38[0x20] =
           *(undefined4 *)(puVar6 + ((longlong)DAT_14ca79c30 - 1U & (longlong)(int)uVar4) * 4);
      puVar6 = DAT_14ca79c28;
      if (DAT_14ca79c28 == (undefined *)0x0) {
        puVar6 = &DAT_14ca79c20;
      }
      *(undefined4 *)(puVar6 + ((longlong)DAT_14ca79c30 - 1U & (longlong)(int)uVar4) * 4) = local_44
      ;
    }
    else {
      DAT_14ca79c30 = iVar9;
      FUN_1473f3a00();
    }
  }
  *param_1 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473f3734 FUN_1473f3734 body=287 status=ok
// SIG undefined FUN_1473f3734(void)

int * FUN_1473f3734(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14ca79c18;
  iVar4 = DAT_14ca79bf0;
  if (DAT_14ca79c1c == 0) {
    iVar2 = DAT_14ca79bf0 + 1;
    bVar7 = DAT_14ca79bf4 == DAT_14ca79bf0;
    DAT_14ca79bf0 = iVar2;
    if (bVar7) {
      FUN_1401600aa(&DAT_14ca79be8,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14ca79bf8,1);
    puVar3 = DAT_14ca79c08;
    if (DAT_14ca79c08 == (undefined *)0x0) {
      puVar3 = &DAT_14ca79bf8;
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
    lVar6 = (longlong)DAT_14ca79c18;
    DAT_14ca79c18 = *(int *)(DAT_14ca79be8 + 4 + lVar6 * 0x88);
    DAT_14ca79c1c = DAT_14ca79c1c + -1;
    iVar4 = iVar2;
    if (DAT_14ca79c1c != 0) {
      *(undefined4 *)(DAT_14ca79be8 + (longlong)DAT_14ca79c18 * 0x88) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14ca79bf8;
  if (DAT_14ca79c08 != (undefined *)0x0) {
    puVar3 = DAT_14ca79c08;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0x88 + DAT_14ca79be8;
  return param_1;
}



// FUNCTION 1473f3854 FUN_1473f3854 body=99 status=ok
// SIG undefined FUN_1473f3854(void)

undefined8 FUN_1473f3854(undefined8 param_1,void *param_2,int *param_3)

{
  int iVar1;
  
  if ((DAT_14ca79bf0 - DAT_14ca79c1c != 1) && (iVar1 = FUN_1473f38b8(), iVar1 != -1)) {
    memmove((void *)((longlong)iVar1 * 0x88 + DAT_14ca79be8),param_2,0x80);
    FUN_1473f3972(*param_3);
    *param_3 = iVar1;
    return 1;
  }
  return 0;
}



// FUNCTION 1473f38b8 FUN_1473f38b8 body=185 status=ok
// SIG undefined FUN_1473f38b8(void)

int FUN_1473f38b8(uint param_1,undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  bool bVar4;
  undefined *puVar5;
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
  ulonglong uVar8;
  
  if (DAT_14ca79bf0 != DAT_14ca79c1c) {
    puVar5 = &DAT_14ca79c20;
    if (DAT_14ca79c28 != (undefined *)0x0) {
      puVar5 = DAT_14ca79c28;
    }
    for (iVar3 = *(int *)(puVar5 + (ulonglong)(DAT_14ca79c30 - 1U & param_1) * 4); iVar3 != -1;
        iVar3 = *(int *)(DAT_14ca79be8 + 0x80 + (longlong)iVar3 * 0x88)) {
      pauVar6 = (undefined1 (*) [16])(DAT_14ca79be8 + (longlong)iVar3 * 0x88);
      uVar8 = 0;
      pauVar7 = param_2;
      do {
        auVar1 = *pauVar6;
        auVar2 = *pauVar7;
        bVar4 = *(int *)pauVar7[1] == *(int *)pauVar6[1];
        if (4 < uVar8) break;
        uVar8 = uVar8 + 1;
        pauVar6 = (undefined1 (*) [16])(pauVar6[1] + 4);
        pauVar7 = (undefined1 (*) [16])(pauVar7[1] + 4);
      } while (bVar4 && auVar2 == auVar1);
      if (bVar4 && auVar2 == auVar1) {
        return iVar3;
      }
    }
  }
  return -1;
}



// FUNCTION 1473f3972 FUN_1473f3972 body=142 status=ok
// SIG undefined FUN_1473f3972(void)

void FUN_1473f3972(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14ca79be8;
  if (DAT_14ca79c1c != 0) {
    *(int *)(DAT_14ca79be8 + (longlong)DAT_14ca79c18 * 0x88) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x88) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14ca79c1c) {
    iVar4 = DAT_14ca79c18;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x88) = iVar4;
  DAT_14ca79c1c = DAT_14ca79c1c + 1;
  puVar3 = &DAT_14ca79bf8;
  if (DAT_14ca79c08 != (undefined *)0x0) {
    puVar3 = DAT_14ca79c08;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14ca79c18 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 1473f3a00 FUN_1473f3a00 body=499 status=ok
// SIG undefined FUN_1473f3a00(void)

void FUN_1473f3a00(void)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  undefined *puVar8;
  uint uVar9;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14ca79c28 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14ca79c28,0,0,4);
  }
  uVar3 = DAT_14ca79c30;
  uVar4 = local_60;
  if (DAT_14ca79c30 != 0) {
    uVar9 = 0;
    FUN_144a1cbf0(&DAT_14ca79c20,0,DAT_14ca79c30,4);
    if (0 < (int)uVar3) {
      do {
        puVar8 = DAT_14ca79c28;
        if (DAT_14ca79c28 == (undefined *)0x0) {
          puVar8 = &DAT_14ca79c20;
        }
        *(undefined4 *)(puVar8 + (ulonglong)(DAT_14ca79c30 + 0x7fffffff & uVar9) * 4) = 0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar3 != uVar9);
    }
    local_50 = 0x100000000;
    local_48 = &DAT_14ca79bf8;
    local_40 = 0xffffffff;
    local_38 = 0;
    if (DAT_14ca79c10 != 0) {
      FUN_1449c0562(&local_50);
    }
    local_78 = &DAT_14ca79be8;
    local_70 = local_50;
    local_68 = local_48;
    local_60 = local_40;
    uVar4 = local_60;
    local_58 = local_38;
    local_54 = local_34;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    if (local_60._4_4_ < *(int *)(local_48 + 0x18)) {
      iVar5 = local_60._4_4_;
      local_60 = uVar4;
      do {
        lVar1 = *local_78;
        lVar2 = (longlong)iVar5 * 0x88;
        iVar6 = (*(code *)PTR_FUN_14c75b148)(lVar1 + lVar2,0x78,0);
        uVar7 = (longlong)iVar6 & (longlong)(int)DAT_14ca79c30 - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar1 + 0x84 + lVar2) = iVar6;
        puVar8 = DAT_14ca79c28;
        if (DAT_14ca79c28 == (undefined *)0x0) {
          puVar8 = &DAT_14ca79c20;
        }
        *(undefined4 *)(lVar1 + 0x80 + lVar2) =
             *(undefined4 *)(puVar8 + ((longlong)(int)DAT_14ca79c30 - 1U & uVar7) * 4);
        puVar8 = DAT_14ca79c28;
        if (DAT_14ca79c28 == (undefined *)0x0) {
          puVar8 = &DAT_14ca79c20;
        }
        *(int *)(puVar8 + ((longlong)iVar6 & (longlong)(int)DAT_14ca79c30 - 1U) * 4) = iVar5;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar5 = local_60._4_4_;
        uVar4 = local_60;
      } while (local_60._4_4_ < *(int *)(local_68 + 0x18));
    }
  }
  local_60 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1473f3bf4 FUN_1473f3bf4 body=61 status=ok
// SIG undefined FUN_1473f3bf4(void)

undefined8 FUN_1473f3bf4(undefined8 param_1,char param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_1473f3c32();
  if (puVar1 != (undefined8 *)0x0) {
    return *puVar1;
  }
  if (param_2 != '\0') {
    uVar2 = FUN_1431ccf08();
    return uVar2;
  }
  uVar2 = FUN_1473f3d46(param_1);
  return uVar2;
}



// FUNCTION 1473f3c32 FUN_1473f3c32 body=274 status=ok
// SIG undefined FUN_1473f3c32(void)

longlong FUN_1473f3c32(undefined4 *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 auStack_b8 [32];
  undefined4 local_98 [30];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar6 = param_1;
  puVar7 = local_98;
  for (lVar4 = 0x1e; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  uVar2 = (*(code *)PTR_FUN_14c75b148)(local_98,0x78,0);
  iVar3 = FUN_1473f34d0(uVar2,param_1);
  if ((iVar3 == -1) ||
     (plVar5 = (longlong *)((longlong)iVar3 * 0x10 + DAT_14ca79b30), plVar5 == (longlong *)0x0)) {
    lVar4 = 0;
  }
  else {
    lVar4 = *plVar5;
    if ((DAT_14ca79b80 == lVar4) && (*(longlong *)(DAT_14ca79b80 + 0x80) != 0)) {
      DAT_14ca79b80 = *(longlong *)(DAT_14ca79b80 + 0x80);
    }
    lVar1 = DAT_14ca79b88;
    if (DAT_14ca79b88 != lVar4) {
      lVar1 = *(longlong *)(lVar4 + 0x80);
      if (*(longlong *)(lVar4 + 0x78) != 0) {
        *(longlong *)(*(longlong *)(lVar4 + 0x78) + 0x80) = lVar1;
      }
      if (lVar1 != 0) {
        *(undefined8 *)(lVar1 + 0x78) = *(undefined8 *)(lVar4 + 0x78);
      }
      *(undefined8 *)(lVar4 + 0x80) = 0;
      *(longlong *)(lVar4 + 0x78) = DAT_14ca79b88;
      lVar1 = lVar4;
      if (DAT_14ca79b88 != 0) {
        *(longlong *)(DAT_14ca79b88 + 0x80) = lVar4;
      }
    }
    DAT_14ca79b88 = lVar1;
    lVar4 = *plVar5 + 0x88;
  }
  if ((local_20 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4;
}



// FUNCTION 1473f3d46 FUN_1473f3d46 body=95 status=ok
// SIG undefined FUN_1473f3d46(void)

undefined8 FUN_1473f3d46(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  uVar5 = 0;
  uVar1 = (*(code *)PTR_FUN_14c75b148)(param_1,0x78,0);
  iVar2 = FUN_1473f2ee2(&DAT_14ca79b98,uVar1,param_1);
  if (iVar2 != -1) {
    lVar3 = (longlong)iVar2 * 0x90 + DAT_14ca79b98;
    puVar4 = (undefined8 *)(lVar3 + 0x78);
    if (puVar4 == (undefined8 *)0x0 || lVar3 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *puVar4;
    }
  }
  return uVar5;
}



// FUNCTION 1473f3da6 FUN_1473f3da6 body=112 status=ok
// SIG undefined FUN_1473f3da6(void)

void FUN_1473f3da6(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  longlong lVar4;
  
  puVar3 = &DAT_14ca79bd0;
  if (DAT_14ca79bd8 != (undefined *)0x0) {
    puVar3 = DAT_14ca79bd8;
  }
  lVar4 = (longlong)*(int *)(DAT_14ca79b98 + 0x8c + (longlong)param_1 * 0x90);
  iVar2 = *(int *)(puVar3 + lVar4 * 4);
  if (iVar2 == param_1) {
    puVar1 = (undefined4 *)(puVar3 + lVar4 * 4);
  }
  else {
    do {
      lVar4 = (longlong)iVar2;
      iVar2 = *(int *)(DAT_14ca79b98 + 0x88 + lVar4 * 0x90);
    } while (iVar2 != param_1);
    puVar1 = (undefined4 *)(DAT_14ca79b98 + lVar4 * 0x90 + 0x88);
  }
  *puVar1 = *(undefined4 *)(DAT_14ca79b98 + (longlong)param_1 * 0x90 + 0x88);
  FUN_1431cd1bc();
  return;
}



// FUNCTION 1473f3f9e FUN_1473f3f9e body=59 status=ok
// SIG undefined FUN_1473f3f9e(void)

void FUN_1473f3f9e(void)

{
  if (1 < DAT_14ca79be0) {
    FUN_1431cc958();
    DAT_14ca79be0 = 1;
    FUN_1473f274c(&DAT_14ca79b98);
    return;
  }
  FUN_1473f3fda();
  FUN_1431cc958();
  return;
}



// FUNCTION 1473f3fda FUN_1473f3fda body=387 status=ok
// SIG undefined FUN_1473f3fda(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1473f3fda(void)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
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
  puVar5 = &DAT_14ca79bd0;
  if (DAT_14ca79bd8 != (undefined *)0x0) {
    puVar5 = DAT_14ca79bd8;
  }
  iVar4 = DAT_14ca79be0 + 3;
  if (-1 < DAT_14ca79be0) {
    iVar4 = DAT_14ca79be0;
  }
  if (DAT_14ca79ba0 - _DAT_14ca79bcc < iVar4 >> 2) {
    local_50 = 0x100000000;
    uStack_48 = &DAT_14ca79ba8;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    if (DAT_14ca79bc0 == 0) {
      iVar4 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar4 = DAT_14ca79bc0;
    }
    local_78 = &DAT_14ca79b98;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar1 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    if ((local_60._4_4_ != iVar4) || (uStack_48 != &DAT_14ca79ba8)) {
      iVar3 = local_60._4_4_;
      local_60 = uVar1;
      do {
        *(undefined4 *)(puVar5 + (longlong)*(int *)(*local_78 + 0x8c + (longlong)iVar3 * 0x90) * 4)
             = 0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar3 = local_60._4_4_;
        uVar1 = local_60;
      } while (local_78 != &DAT_14ca79b98 ||
               ((undefined4 *)CONCAT44(uStack_64,uStack_68) != &DAT_14ca79ba8 ||
               local_60._4_4_ != iVar4));
    }
  }
  else {
    uVar1 = local_60;
    if (0 < DAT_14ca79be0) {
      lVar2 = 0;
      do {
        *(undefined4 *)(puVar5 + lVar2 * 4) = 0xffffffff;
        lVar2 = lVar2 + 1;
      } while (lVar2 < DAT_14ca79be0);
    }
  }
  local_60 = uVar1;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1473f415e FUN_1473f415e body=52 status=ok
// SIG undefined FUN_1473f415e(void)

void FUN_1473f415e(void)

{
  if (1 < DAT_14ca79c30) {
    FUN_1473f297e();
    DAT_14ca79c30 = 1;
    FUN_1473f3a00();
    return;
  }
  FUN_1473f4192();
  FUN_1473f297e();
  return;
}



// FUNCTION 1473f4192 FUN_1473f4192 body=393 status=ok
// SIG undefined FUN_1473f4192(void)

void FUN_1473f4192(void)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
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
  puVar5 = &DAT_14ca79c20;
  if (DAT_14ca79c28 != (undefined *)0x0) {
    puVar5 = DAT_14ca79c28;
  }
  iVar4 = DAT_14ca79c30 + 3;
  if (-1 < DAT_14ca79c30) {
    iVar4 = DAT_14ca79c30;
  }
  if (DAT_14ca79bf0 - DAT_14ca79c1c < iVar4 >> 2) {
    local_50 = 0x100000000;
    uStack_48 = &DAT_14ca79bf8;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    if (DAT_14ca79c10 == 0) {
      iVar4 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar4 = DAT_14ca79c10;
    }
    local_78 = &DAT_14ca79be8;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar1 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    if ((local_60._4_4_ != iVar4) || (uStack_48 != &DAT_14ca79bf8)) {
      iVar3 = local_60._4_4_;
      local_60 = uVar1;
      do {
        *(undefined4 *)(puVar5 + (longlong)*(int *)(*local_78 + 0x84 + (longlong)iVar3 * 0x88) * 4)
             = 0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar3 = local_60._4_4_;
        uVar1 = local_60;
      } while (local_78 != &DAT_14ca79be8 ||
               ((undefined *)CONCAT44(uStack_64,uStack_68) != &DAT_14ca79bf8 ||
               local_60._4_4_ != iVar4));
    }
  }
  else {
    uVar1 = local_60;
    if (0 < DAT_14ca79c30) {
      lVar2 = 0;
      do {
        *(undefined4 *)(puVar5 + lVar2 * 4) = 0xffffffff;
        lVar2 = lVar2 + 1;
      } while (lVar2 < DAT_14ca79c30);
    }
  }
  local_60 = uVar1;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1473f431c FUN_1473f431c body=423 status=ok
// SIG undefined FUN_1473f431c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_1473f431c(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1473f2d30(&DAT_14ca79b98,local_48);
  puVar1 = (undefined8 *)param_2[1];
  puVar13 = (undefined4 *)*param_2;
  puVar14 = local_40;
  for (lVar10 = 0x1e; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar14 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar14 = puVar14 + 1;
  }
  *(undefined8 *)(local_40 + 0x1e) = *puVar1;
  puVar1 = (undefined8 *)puVar1[1];
  puVar8 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar8 = *puVar1;
  *puVar1 = 0;
  *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)puVar8 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  uVar2 = *(undefined4 *)((longlong)puVar1 + 0x14);
  uVar3 = *(undefined4 *)(puVar1 + 3);
  uVar4 = *(undefined4 *)((longlong)puVar1 + 0x1c);
  *(undefined4 *)(puVar8 + 2) = *(undefined4 *)(puVar1 + 2);
  *(undefined4 *)((longlong)puVar8 + 0x14) = uVar2;
  *(undefined4 *)(puVar8 + 3) = uVar3;
  *(undefined4 *)((longlong)puVar8 + 0x1c) = uVar4;
  *(undefined8 **)(local_40 + 0x20) = puVar8;
  local_40[0x22] = 0xffffffff;
  local_4c = local_48[0];
  uVar6 = (*(code *)PTR_FUN_14c75b148)(local_40,0x78,0);
  cVar5 = FUN_1431ccd00(&DAT_14ca79b98,uVar6,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar5 == '\0') {
    uVar7 = DAT_14ca79ba0 - _DAT_14ca79bcc;
    iVar12 = 1;
    if (3 < uVar7) {
      uVar11 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar12 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar12 <= DAT_14ca79be0)) {
      uVar6 = DAT_14ca79be0 - 1U & uVar6;
      local_40[0x23] = uVar6;
      puVar9 = DAT_14ca79bd8;
      if (DAT_14ca79bd8 == (undefined *)0x0) {
        puVar9 = &DAT_14ca79bd0;
      }
      local_40[0x22] =
           *(undefined4 *)(puVar9 + ((longlong)DAT_14ca79be0 - 1U & (longlong)(int)uVar6) * 4);
      puVar9 = DAT_14ca79bd8;
      if (DAT_14ca79bd8 == (undefined *)0x0) {
        puVar9 = &DAT_14ca79bd0;
      }
      *(undefined4 *)(puVar9 + ((longlong)DAT_14ca79be0 - 1U & (longlong)(int)uVar6) * 4) = local_4c
      ;
    }
    else {
      DAT_14ca79be0 = iVar12;
      FUN_1473f274c(&DAT_14ca79b98);
    }
  }
  *param_1 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473f44c4 FUN_1473f44c4 body=156 status=ok
// SIG undefined FUN_1473f44c4(void)

void FUN_1473f44c4(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  longlong local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    local_58[0] = *param_2;
    local_48 = param_2[2];
    param_2[2] = 0;
    local_38 = (undefined4)param_2[4];
    uStack_34 = *(undefined4 *)((longlong)param_2 + 0x24);
    uStack_30 = (undefined4)param_2[5];
    uStack_2c = *(undefined4 *)((longlong)param_2 + 0x2c);
    local_28 = (undefined4)param_2[6];
    uStack_24 = *(undefined4 *)((longlong)param_2 + 0x34);
    uStack_20 = (undefined4)param_2[7];
    uStack_1c = *(undefined4 *)((longlong)param_2 + 0x3c);
    if (local_58[0] != 0) {
      *param_2 = 0;
    }
    FUN_1473f4562(local_38,local_58);
  }
  if (*param_2 != 0) {
    plVar1 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473f4562 FUN_1473f4562 body=210 status=ok
// SIG undefined FUN_1473f4562(void)

void FUN_1473f4562(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar5 = param_2 + 4;
  local_38 = *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x88);
  pcVar1 = (code *)*param_2;
  plVar4 = (longlong *)param_2[2];
  if ((longlong *)param_2[2] == (longlong *)0x0) {
    plVar4 = plVar5;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  cVar2 = (*pcVar1)(uVar3,&local_38);
  if (cVar2 != '\0') {
    do {
      FUN_1431ccc10(param_1);
      local_38 = *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x88);
      pcVar1 = (code *)*param_2;
      plVar4 = (longlong *)param_2[2];
      if ((longlong *)param_2[2] == (longlong *)0x0) {
        plVar4 = plVar5;
      }
      uVar3 = (**(code **)(*plVar4 + 8))();
      cVar2 = (*pcVar1)(uVar3,&local_38);
    } while (cVar2 != '\0');
  }
  if (*param_2 != 0) {
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar5 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473f4636 FUN_1473f4636 body=140 status=ok
// SIG undefined FUN_1473f4636(void)

void FUN_1473f4636(int param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = DAT_14ca79490;
  if (param_1 <= (int)DAT_14ca79490) {
    if (DAT_14ca79494 == 0) {
      uVar2 = 4;
      if (4 < DAT_14ca79490) {
        uVar2 = DAT_14ca79490;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)DAT_14ca79490 + ((ulonglong)((longlong)(int)DAT_14ca79490 * 3) >> 3) +
              0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    DAT_14ca79494 = (int)uVar5;
    FUN_1446f8d3c(&DAT_14ca79488,param_1,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1473f46c4 FUN_1473f46c4 body=338 status=ok
// SIG undefined FUN_1473f46c4(void)

undefined4 * FUN_1473f46c4(undefined4 *param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  ulonglong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1473f4818(local_40);
  puVar1 = (ulonglong *)param_2[1];
  uVar8 = *(ulonglong *)*param_2;
  *local_38 = uVar8;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar5 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  cVar4 = FUN_1473f4926(uVar5,local_38,&local_44);
  uVar3 = local_44;
  if (cVar4 == '\0') {
    uVar6 = DAT_14ca794a0 - DAT_14ca794cc;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar2 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14ca794e0)) {
      uVar5 = DAT_14ca794e0 - 1U & uVar5;
      *(uint *)((longlong)local_38 + 0x14) = uVar5;
      puVar7 = DAT_14ca794d8;
      if (DAT_14ca794d8 == (undefined *)0x0) {
        puVar7 = &DAT_14ca794d0;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14ca794e0 - 1U & (longlong)(int)uVar5) * 4);
      puVar7 = DAT_14ca794d8;
      if (DAT_14ca794d8 == (undefined *)0x0) {
        puVar7 = &DAT_14ca794d0;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14ca794e0 - 1U & (longlong)(int)uVar5) * 4) = local_44
      ;
    }
    else {
      DAT_14ca794e0 = iVar9;
      FUN_1473f4a36();
    }
  }
  *param_1 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473f4818 FUN_1473f4818 body=270 status=ok
// SIG undefined FUN_1473f4818(void)

int * FUN_1473f4818(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14ca794c8;
  iVar4 = DAT_14ca794a0;
  if (DAT_14ca794cc == 0) {
    iVar2 = DAT_14ca794a0 + 1;
    bVar7 = DAT_14ca794a4 == DAT_14ca794a0;
    DAT_14ca794a0 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14ca79498,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14ca794a8,1);
    puVar3 = DAT_14ca794b8;
    if (DAT_14ca794b8 == (undefined *)0x0) {
      puVar3 = &DAT_14ca794a8;
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
    lVar6 = (longlong)DAT_14ca794c8;
    DAT_14ca794c8 = *(int *)(DAT_14ca79498 + 4 + lVar6 * 0x18);
    DAT_14ca794cc = DAT_14ca794cc + -1;
    iVar4 = iVar2;
    if (DAT_14ca794cc != 0) {
      *(undefined4 *)(DAT_14ca79498 + (longlong)DAT_14ca794c8 * 0x18) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14ca794a8;
  if (DAT_14ca794b8 != (undefined *)0x0) {
    puVar3 = DAT_14ca794b8;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14ca79498;
  return param_1;
}



// FUNCTION 1473f4926 FUN_1473f4926 body=143 status=ok
// SIG undefined FUN_1473f4926(void)

undefined8 FUN_1473f4926(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14ca794a0 - DAT_14ca794cc != 1) && (DAT_14ca794a0 != DAT_14ca794cc)) {
    puVar6 = &DAT_14ca794d0;
    if (DAT_14ca794d8 != (undefined *)0x0) {
      puVar6 = DAT_14ca794d8;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14ca794e0 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14ca79498 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_1473f49b6(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
    }
  }
  return 0;
}



// FUNCTION 1473f49b6 FUN_1473f49b6 body=128 status=ok
// SIG undefined FUN_1473f49b6(void)

void FUN_1473f49b6(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14ca79498;
  if (DAT_14ca794cc != 0) {
    *(int *)(DAT_14ca79498 + (longlong)DAT_14ca794c8 * 0x18) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x18) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14ca794cc) {
    iVar4 = DAT_14ca794c8;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x18) = iVar4;
  DAT_14ca794cc = DAT_14ca794cc + 1;
  puVar3 = &DAT_14ca794a8;
  if (DAT_14ca794b8 != (undefined *)0x0) {
    puVar3 = DAT_14ca794b8;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14ca794c8 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 1473f4a36 FUN_1473f4a36 body=515 status=ok
// SIG undefined FUN_1473f4a36(void)

void FUN_1473f4a36(void)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  undefined *puVar5;
  uint uVar6;
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
  if (DAT_14ca794d8 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14ca794d8,0,0,4);
  }
  uVar7 = DAT_14ca794e0;
  uVar2 = local_50;
  if (DAT_14ca794e0 != 0) {
    uVar6 = 0;
    FUN_144a1cbf0(&DAT_14ca794d0,0,DAT_14ca794e0,4);
    if (0 < (int)uVar7) {
      do {
        puVar5 = DAT_14ca794d8;
        if (DAT_14ca794d8 == (undefined *)0x0) {
          puVar5 = &DAT_14ca794d0;
        }
        *(undefined4 *)(puVar5 + (ulonglong)(DAT_14ca794e0 + 0x7fffffff & uVar6) * 4) = 0xffffffff;
        uVar6 = uVar6 + 1;
      } while (uVar7 != uVar6);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14ca794a8;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14ca794c0 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14ca79498;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar3 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar4 = (longlong)iVar3;
        uVar9 = *(ulonglong *)(lVar1 + lVar4 * 0x18);
        uVar7 = ((uint)(uVar9 >> 0x14) & 0xffff ^ (uint)(uVar9 >> 4)) * -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        uVar9 = (longlong)(int)(uVar7 >> 0x10 ^ uVar7) & (longlong)(int)DAT_14ca794e0 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar4 * 0x18) = iVar8;
        puVar5 = DAT_14ca794d8;
        if (DAT_14ca794d8 == (undefined *)0x0) {
          puVar5 = &DAT_14ca794d0;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar4 * 0x18) =
             *(undefined4 *)(puVar5 + ((longlong)(int)DAT_14ca794e0 - 1U & uVar9) * 4);
        puVar5 = DAT_14ca794d8;
        if (DAT_14ca794d8 == (undefined *)0x0) {
          puVar5 = &DAT_14ca794d0;
        }
        *(int *)(puVar5 + ((longlong)iVar8 & (longlong)(int)DAT_14ca794e0 - 1U) * 4) = iVar3;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar3 = local_50._4_4_;
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



// FUNCTION 1473f4c3a FUN_1473f4c3a body=154 status=ok
// SIG undefined FUN_1473f4c3a(void)

void FUN_1473f4c3a(int *param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  
  if (DAT_14ca794a0 != DAT_14ca794cc) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    puVar3 = &DAT_14ca794d0;
    if (DAT_14ca794d8 != (undefined *)0x0) {
      puVar3 = DAT_14ca794d8;
    }
    for (iVar1 = *(int *)(puVar3 + (ulonglong)(DAT_14ca794e0 - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
        iVar1 != -1; iVar1 = *(int *)(DAT_14ca79498 + (longlong)iVar1 * 0x18 + 0x10)) {
      if (*(ulonglong *)(DAT_14ca79498 + (longlong)iVar1 * 0x18) == param_2) goto LAB_1473f4c50;
    }
  }
  iVar1 = -1;
LAB_1473f4c50:
  *param_1 = iVar1;
  return;
}



// FUNCTION 1473f4cd4 FUN_1473f4cd4 body=93 status=ok
// SIG undefined FUN_1473f4cd4(void)

void FUN_1473f4cd4(int param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined *puVar4;
  longlong lVar5;
  
  puVar4 = &DAT_14ca794d0;
  if (DAT_14ca794d8 != (undefined *)0x0) {
    puVar4 = DAT_14ca794d8;
  }
  lVar1 = DAT_14ca79498 + (longlong)param_1 * 0x18;
  lVar5 = (longlong)*(int *)(lVar1 + 0x14);
  iVar3 = *(int *)(puVar4 + lVar5 * 4);
  if (iVar3 == param_1) {
    puVar2 = (undefined4 *)(puVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(DAT_14ca79498 + 0x10 + lVar5 * 0x18);
    } while (iVar3 != param_1);
    puVar2 = (undefined4 *)(DAT_14ca79498 + lVar5 * 0x18 + 0x10);
  }
  *puVar2 = *(undefined4 *)(lVar1 + 0x10);
  FUN_1473f49b6();
  return;
}



// FUNCTION 1473f4d32 FUN_1473f4d32 body=76 status=ok
// SIG undefined FUN_1473f4d32(void)

void FUN_1473f4d32(void)

{
  int iVar1;
  
  iVar1 = FUN_1473f4d7e(DAT_14ca79490,DAT_14ca79494);
  if (iVar1 != DAT_14ca79494) {
    DAT_14ca79494 = iVar1;
    FUN_1446f8d3c(&DAT_14ca79488,DAT_14ca79490,iVar1,8,8);
  }
  return;
}



// FUNCTION 1473f4d7e FUN_1473f4d7e body=93 status=ok
// SIG undefined FUN_1473f4d7e(void)

ulonglong FUN_1473f4d7e(uint param_1,uint param_2)

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



// FUNCTION 1473f4ddc FUN_1473f4ddc body=303 status=ok
// SIG undefined FUN_1473f4ddc(void)

void FUN_1473f4ddc(longlong *param_1)

{
  undefined4 *_Dst;
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  
  iVar7 = DAT_14c760d28;
  lVar2 = *param_1;
  _Dst = (undefined4 *)(lVar2 + 0x38);
  lVar8 = (longlong)(int)DAT_14c760d28;
  if (lVar8 < 0x3ff) {
    uVar1 = (&DAT_14ca7b3e0)[lVar8];
    *_Dst = uVar1;
    uVar6 = DAT_14c760d28 + 1;
  }
  else {
    iVar3 = 0x400 - DAT_14c760d28;
    memcpy(_Dst,&DAT_14ca7b3e0 + lVar8,(longlong)iVar3 * 4);
    (*DAT_14ca7fc70)(0x400,&DAT_14ca7b3e0);
    uVar6 = iVar7 - 0x3ff;
    memcpy(_Dst + iVar3,&DAT_14ca7b3e0,(ulonglong)uVar6 * 4);
    uVar1 = *_Dst;
  }
  DAT_14c760d28 = uVar6;
  FUN_1473e46fe(*(undefined4 *)(lVar2 + 0x3c),uVar1);
  (*DAT_14ca7fc78)(*(undefined4 *)(lVar2 + 0x3c),*(undefined4 *)(lVar2 + 0x20),0,
                   (uint)((*(byte *)(lVar2 + 0x28) & 6) != 0) * 4 + 0x88e4);
  uVar6 = DAT_14c760d2c;
  lVar8 = param_1[1];
  if (lVar8 != 0) {
    uVar4 = (ulonglong)*(uint *)(lVar2 + 0x20);
    if (DAT_14c760d2c == 0) {
      (*DAT_14ca7ff50)(*(undefined4 *)(lVar2 + 0x3c),0,uVar4,lVar8);
    }
    else if (*(uint *)(lVar2 + 0x20) != 0) {
      iVar7 = 0;
      do {
        uVar5 = (uint)uVar4;
        if (uVar6 < uVar5) {
          uVar4 = (ulonglong)uVar6;
        }
        (*DAT_14ca7ff50)(*(undefined4 *)(lVar2 + 0x3c),iVar7,uVar4,lVar8);
        iVar7 = iVar7 + (int)uVar4;
        lVar8 = lVar8 + uVar4;
        uVar5 = uVar5 - (int)uVar4;
        uVar4 = (ulonglong)uVar5;
      } while (uVar5 != 0);
    }
  }
  LOCK();
  DAT_14ca84ee0 = DAT_14ca84ee0 + (ulonglong)*(uint *)(lVar2 + 0x20);
  UNLOCK();
  return;
}



// FUNCTION 1473f4f0c FUN_1473f4f0c body=58 status=ok
// SIG undefined FUN_1473f4f0c(void)

undefined8 * FUN_1473f4f0c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a371220;
  FUN_1431cd306();
  *param_1 = &PTR_FUN_14a37f858;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473f4f46 FUN_1473f4f46 body=307 status=ok
// SIG undefined FUN_1473f4f46(void)

undefined4 *
FUN_1473f4f46(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1473f507a(param_1,local_50);
  puVar1 = (undefined8 *)param_3[1];
  uVar4 = *(uint *)*param_3;
  *local_48 = uVar4;
  *(undefined8 *)(local_48 + 1) = *puVar1;
  local_48[3] = 0xffffffff;
  local_54 = local_50[0];
  local_68 = param_4;
  cVar2 = FUN_1473f5160(param_1,uVar4,local_48);
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
      local_48[4] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_48[3] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1473f5284(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473f507a FUN_1473f507a body=230 status=ok
// SIG undefined FUN_1473f507a(void)

int * FUN_1473f507a(longlong *param_1,int *param_2)

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
      FUN_140171ad2(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x14);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x14) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x14 + *param_1;
  return param_2;
}



// FUNCTION 1473f5160 FUN_1473f5160 body=154 status=ok
// SIG undefined FUN_1473f5160(void)

void FUN_1473f5160(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  int *piVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  longlong *plVar4;
  int iVar5;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar5 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar5 * 0x14);
        if (*piVar1 == *param_3) {
          uVar2 = *(undefined8 *)param_3;
          piVar1[2] = param_3[2];
          *(undefined8 *)piVar1 = uVar2;
          FUN_1473f51fa(param_1,*param_4,1);
          *param_4 = iVar5;
          uVar3 = 1;
          goto LAB_1473f51ca;
        }
        iVar5 = piVar1[3];
      } while (iVar5 != -1);
    }
  }
  uVar3 = 0;
LAB_1473f51ca:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar3;
  }
  return;
}



// FUNCTION 1473f51fa FUN_1473f51fa body=138 status=ok
// SIG undefined FUN_1473f51fa(void)

void FUN_1473f51fa(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x14 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x14) = param_2;
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
      puVar7 = puVar7 + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1473f5284 FUN_1473f5284 body=419 status=ok
// SIG undefined FUN_1473f5284(void)

void FUN_1473f5284(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar6 * 0x14);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x10 + lVar6 * 0x14) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0xc + lVar6 * 0x14) =
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



// FUNCTION 1473f5428 FUN_1473f5428 body=341 status=ok
// SIG undefined FUN_1473f5428(void)

void FUN_1473f5428(longlong param_1,int param_2,longlong *param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = (undefined4)param_3[2];
  lVar3 = *param_3;
  if ((lVar3 == 0) || (*(longlong *)(lVar3 + 0x80) != param_4)) {
    if (*(int *)(param_1 + 0x410) != param_2) {
      (*DAT_14ca7fbe0)(param_2 + 0x84c0);
      *(int *)(param_1 + 0x410) = param_2;
    }
    uVar2 = *(undefined4 *)(param_4 + 0x18);
    (*DAT_14ca7fd38)(uVar1,0x2802,*(undefined4 *)(param_4 + 0x14));
    (*DAT_14ca7fd38)(uVar1,0x2803,uVar2);
    (*DAT_14ca7fd38)(uVar1,0x8072,*(undefined4 *)(param_4 + 0x1c));
    (*DAT_14ca7fd38)(uVar1,0x8501,*(undefined4 *)(param_4 + 0x20));
    iVar4 = *(int *)(param_4 + 0x28);
    if ((*(char *)((longlong)param_3 + 0x1c) == '\0') && (iVar4 - 0x2700U < 4)) {
      iVar4 = *(int *)(&DAT_14a3716cc + (ulonglong)(iVar4 - 0x2700U) * 4);
    }
    iVar5 = 0x2701;
    if (DAT_14ca79c3c == 0) {
      iVar5 = iVar4;
    }
    if (iVar4 != 0x2703) {
      iVar5 = iVar4;
    }
    (*DAT_14ca7fd38)(uVar1,0x2801,iVar5);
    (*DAT_14ca7fd38)(uVar1,0x2800,*(undefined4 *)(param_4 + 0x24));
    if (DAT_14ca7a3d0 == '\x01') {
      iVar4 = 1;
      if (1 < *(int *)(param_4 + 0x2c)) {
        iVar4 = *(int *)(param_4 + 0x2c);
      }
      (*DAT_14ca7fd38)(uVar1,0x84fe,iVar4);
    }
    (*DAT_14ca7fd38)(uVar1,0x884c,*(undefined4 *)(param_4 + 0x30));
    (*DAT_14ca7fd38)(uVar1,0x884d,*(undefined4 *)(param_4 + 0x34));
    if (lVar3 != 0) {
      *(longlong *)(*param_3 + 0x80) = param_4;
    }
  }
  return;
}



// FUNCTION 1473f557d FUN_1473f557d body=245 status=ok
// SIG undefined FUN_1473f557d(void)

void FUN_1473f557d(float *param_1,longlong param_2,ushort *param_3,longlong param_4)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 auStack_88 [32];
  ushort *local_68;
  float *local_60;
  undefined4 *local_58;
  float local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_4c = (float)DAT_14c866ff8;
  uVar3 = (uint)*param_3 & *(uint *)(param_2 + 0x10);
  local_68 = param_3;
  if (uVar3 != 0) {
    do {
      uVar2 = 0;
      if (uVar3 != 0) {
        for (; (uVar3 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
        }
      }
      uVar4 = (ulonglong)uVar2;
      uVar1 = *(undefined8 *)(param_4 + uVar4 * 8);
      local_60 = &local_4c;
      local_58 = param_1;
      FUN_1473f5673(uVar1,uVar4,*(undefined8 *)(param_2 + 0x58),&local_60);
      local_60 = param_1;
      FUN_1473f56fd(uVar1,uVar2,*(undefined8 *)(param_2 + 0x18),&local_60);
      local_60 = param_1;
      FUN_1473f576a(uVar1,uVar4,*(undefined8 *)(param_2 + 0x28),&local_60);
      local_60 = param_1;
      FUN_1473f57d8(uVar1,uVar2,*(undefined8 *)(param_2 + 0x38),&local_60);
      uVar3 = uVar3 - 1 & uVar3;
    } while (uVar3 != 0);
  }
  *local_68 = 0;
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473f5673 FUN_1473f5673 body=138 status=ok
// SIG undefined FUN_1473f5673(void)

void FUN_1473f5673(longlong param_1,uint param_2,longlong param_3,undefined8 *param_4)

{
  double dVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint *puVar7;
  double dVar8;
  
  if ((param_3 != 0) && (uVar6 = (ulonglong)*(uint *)(param_3 + (ulonglong)param_2 * 4), uVar6 != 0)
     ) {
    lVar4 = *(longlong *)(param_1 + 0x10);
    iVar2 = *(int *)(param_1 + 0x18);
    puVar7 = (uint *)(param_3 + uVar6 * 4);
    uVar3 = *puVar7;
    do {
      puVar7 = puVar7 + 1;
      uVar6 = (ulonglong)(uVar3 >> 8) & 0xffff;
      if ((int)uVar6 < iVar2) {
        dVar8 = (double)*(float *)*param_4;
        lVar5 = *(longlong *)(lVar4 + uVar6 * 8);
        dVar1 = *(double *)(lVar5 + 0x58);
        if ((dVar1 != dVar8) || (NAN(dVar1) || NAN(dVar8))) {
          *(double *)(lVar5 + 0x58) = dVar8;
        }
        FUN_1473e6264(param_4[1]);
      }
      uVar3 = *puVar7;
    } while (uVar3 >> 0x18 == param_2);
  }
  return;
}



// FUNCTION 1473f56fd FUN_1473f56fd body=109 status=ok
// SIG undefined FUN_1473f56fd(void)

void FUN_1473f56fd(longlong param_1,uint param_2,longlong param_3,undefined8 *param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint *puVar5;
  
  if ((param_3 != 0) && (uVar4 = (ulonglong)*(uint *)(param_3 + (ulonglong)param_2 * 4), uVar4 != 0)
     ) {
    lVar3 = *(longlong *)(param_1 + 0x10);
    iVar1 = *(int *)(param_1 + 0x18);
    puVar5 = (uint *)(param_3 + uVar4 * 4);
    uVar2 = *puVar5;
    do {
      puVar5 = puVar5 + 1;
      uVar4 = (ulonglong)(uVar2 >> 8) & 0xffff;
      if ((int)uVar4 < iVar1) {
        FUN_1473e635a(*param_4,*(undefined8 *)(lVar3 + uVar4 * 8));
      }
      uVar2 = *puVar5;
    } while (uVar2 >> 0x18 == param_2);
  }
  return;
}



// FUNCTION 1473f576a FUN_1473f576a body=110 status=ok
// SIG undefined FUN_1473f576a(void)

void FUN_1473f576a(longlong param_1,uint param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  uint *puVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  
  if ((param_3 != 0) && (uVar5 = (ulonglong)*(uint *)(param_3 + (ulonglong)param_2 * 4), uVar5 != 0)
     ) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    iVar1 = *(int *)(param_1 + 0x18);
    puVar3 = (uint *)(param_3 + uVar5 * 4);
    uVar4 = *puVar3;
    do {
      puVar3 = puVar3 + 1;
      uVar6 = uVar4 >> 8 & 0xffff;
      if ((int)uVar6 < iVar1) {
        *(undefined8 *)
         (*(longlong *)(*(longlong *)*param_4 + 0x140) +
         ((ulonglong)(uVar4 & 0xff) + (longlong)(int)((longlong *)*param_4)[2]) * 8) =
             *(undefined8 *)(lVar2 + (ulonglong)uVar6 * 8);
      }
      uVar4 = *puVar3;
    } while (uVar4 >> 0x18 == param_2);
  }
  return;
}



// FUNCTION 1473f57d8 FUN_1473f57d8 body=109 status=ok
// SIG undefined FUN_1473f57d8(void)

void FUN_1473f57d8(longlong param_1,uint param_2,longlong param_3,undefined8 *param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint *puVar5;
  
  if ((param_3 != 0) && (uVar4 = (ulonglong)*(uint *)(param_3 + (ulonglong)param_2 * 4), uVar4 != 0)
     ) {
    lVar3 = *(longlong *)(param_1 + 0x10);
    iVar1 = *(int *)(param_1 + 0x18);
    puVar5 = (uint *)(param_3 + uVar4 * 4);
    uVar2 = *puVar5;
    do {
      puVar5 = puVar5 + 1;
      uVar4 = (ulonglong)(uVar2 >> 8) & 0xffff;
      if ((int)uVar4 < iVar1) {
        FUN_1473e617a(*param_4,*(undefined8 *)(lVar3 + uVar4 * 8));
      }
      uVar2 = *puVar5;
    } while (uVar2 >> 0x18 == param_2);
  }
  return;
}



// FUNCTION 1473f5845 FUN_1473f5845 body=206 status=ok
// SIG undefined FUN_1473f5845(void)

void FUN_1473f5845(longlong param_1,longlong *param_2,longlong *param_3)

{
  ushort *puVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  if (0 < *(int *)(param_1 + 0x80)) {
    lVar5 = 0;
    do {
      uVar4 = (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x78) + lVar5);
      if (uVar4 != 0xff) {
        lVar2 = *(longlong *)(*param_2 + uVar4 * 8);
        FUN_144b0ddfe(lVar2,uVar4,*(undefined4 *)(*(longlong *)(param_1 + 0x48) + lVar5 * 4));
        if (lVar2 != 0) {
          lVar3 = *param_3;
          uVar4 = (ulonglong)*(byte *)(param_3 + 1);
          *(longlong *)(uVar4 * 0x70 + lVar3 + 0x4f8 + lVar5 * 8) = lVar2;
          *(undefined4 *)(uVar4 * 0x38 + lVar3 + 0x798 + lVar5 * 4) = 0;
          puVar1 = (ushort *)(lVar3 + 0x8f0 + uVar4 * 2);
          *puVar1 = *puVar1 | (ushort)(1 << ((byte)lVar5 & 0x1f));
          *(undefined1 *)(lVar3 + 0x8ee) = 1;
          if ((DAT_14ca7a384 != '\x01') || (*(char *)(lVar2 + 0x5d) == '\0')) {
            *(undefined1 *)(lVar3 + 0x8e8 + uVar4) = 1;
          }
        }
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x80));
  }
  return;
}



// FUNCTION 1473f5913 FUN_1473f5913 body=206 status=ok
// SIG undefined FUN_1473f5913(void)

void FUN_1473f5913(longlong param_1,longlong *param_2,longlong *param_3)

{
  ushort *puVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  if (0 < *(int *)(param_1 + 0x80)) {
    lVar5 = 0;
    do {
      uVar4 = (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x78) + lVar5);
      if (uVar4 != 0xff) {
        lVar2 = *(longlong *)(*param_2 + uVar4 * 8);
        FUN_144b0ddfe(lVar2,uVar4,*(undefined4 *)(*(longlong *)(param_1 + 0x48) + lVar5 * 4));
        if (lVar2 != 0) {
          lVar3 = *param_3;
          uVar4 = (ulonglong)*(byte *)(param_3 + 1);
          *(longlong *)(uVar4 * 0x70 + lVar3 + 0x4f8 + lVar5 * 8) = lVar2;
          *(undefined4 *)(uVar4 * 0x38 + lVar3 + 0x798 + lVar5 * 4) = 0;
          puVar1 = (ushort *)(lVar3 + 0x8f0 + uVar4 * 2);
          *puVar1 = *puVar1 | (ushort)(1 << ((byte)lVar5 & 0x1f));
          *(undefined1 *)(lVar3 + 0x8ee) = 1;
          if ((DAT_14ca7a384 != '\x01') || (*(char *)(lVar2 + 0x5d) == '\0')) {
            *(undefined1 *)(lVar3 + 0x8e8 + uVar4) = 1;
          }
        }
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x80));
  }
  return;
}



// FUNCTION 1473f59e1 FUN_1473f59e1 body=206 status=ok
// SIG undefined FUN_1473f59e1(void)

void FUN_1473f59e1(longlong param_1,longlong *param_2,longlong *param_3)

{
  ushort *puVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  if (0 < *(int *)(param_1 + 0x80)) {
    lVar5 = 0;
    do {
      uVar4 = (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x78) + lVar5);
      if (uVar4 != 0xff) {
        lVar2 = *(longlong *)(*param_2 + uVar4 * 8);
        FUN_144b0ddfe(lVar2,uVar4,*(undefined4 *)(*(longlong *)(param_1 + 0x48) + lVar5 * 4));
        if (lVar2 != 0) {
          lVar3 = *param_3;
          uVar4 = (ulonglong)*(byte *)(param_3 + 1);
          *(longlong *)(uVar4 * 0x70 + lVar3 + 0x4f8 + lVar5 * 8) = lVar2;
          *(undefined4 *)(uVar4 * 0x38 + lVar3 + 0x798 + lVar5 * 4) = 0;
          puVar1 = (ushort *)(lVar3 + 0x8f0 + uVar4 * 2);
          *puVar1 = *puVar1 | (ushort)(1 << ((byte)lVar5 & 0x1f));
          *(undefined1 *)(lVar3 + 0x8ee) = 1;
          if ((DAT_14ca7a384 != '\x01') || (*(char *)(lVar2 + 0x5d) == '\0')) {
            *(undefined1 *)(lVar3 + 0x8e8 + uVar4) = 1;
          }
        }
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x80));
  }
  return;
}



// FUNCTION 1473f5aaf FUN_1473f5aaf body=206 status=ok
// SIG undefined FUN_1473f5aaf(void)

void FUN_1473f5aaf(longlong param_1,longlong *param_2,longlong *param_3)

{
  ushort *puVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  if (0 < *(int *)(param_1 + 0x80)) {
    lVar5 = 0;
    do {
      uVar4 = (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x78) + lVar5);
      if (uVar4 != 0xff) {
        lVar2 = *(longlong *)(*param_2 + uVar4 * 8);
        FUN_144b0ddfe(lVar2,uVar4,*(undefined4 *)(*(longlong *)(param_1 + 0x48) + lVar5 * 4));
        if (lVar2 != 0) {
          lVar3 = *param_3;
          uVar4 = (ulonglong)*(byte *)(param_3 + 1);
          *(longlong *)(uVar4 * 0x70 + lVar3 + 0x4f8 + lVar5 * 8) = lVar2;
          *(undefined4 *)(uVar4 * 0x38 + lVar3 + 0x798 + lVar5 * 4) = 0;
          puVar1 = (ushort *)(lVar3 + 0x8f0 + uVar4 * 2);
          *puVar1 = *puVar1 | (ushort)(1 << ((byte)lVar5 & 0x1f));
          *(undefined1 *)(lVar3 + 0x8ee) = 1;
          if ((DAT_14ca7a384 != '\x01') || (*(char *)(lVar2 + 0x5d) == '\0')) {
            *(undefined1 *)(lVar3 + 0x8e8 + uVar4) = 1;
          }
        }
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x80));
  }
  return;
}



// FUNCTION 1473f5b7e FUN_1473f5b7e body=213 status=ok
// SIG undefined FUN_1473f5b7e(void)

undefined8 * FUN_1473f5b7e(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  param_1[2] = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x26) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e) = 0;
  *param_1 = &PTR_FUN_14a371260;
  param_1[7] = 0xffffffff00000004;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  lVar2 = 0x78;
  do {
    *(undefined1 *)((longlong)param_1 + lVar2 + -8) = 0;
    puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x14) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 4;
    *(undefined8 **)((longlong)param_1 + lVar2) = puVar1;
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0xb8);
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  FUN_1473ec0e0(param_1 + 7);
  FUN_1473e9a20(param_1);
  return param_1;
}



// FUNCTION 1473f5c54 FUN_1473f5c54 body=87 status=ok
// SIG undefined FUN_1473f5c54(void)

void FUN_1473f5c54(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a371260;
  FUN_1473ea72e(param_1 + 0x18);
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1473f5cac FUN_1473f5cac body=38 status=ok
// SIG undefined FUN_1473f5cac(void)

undefined8 FUN_1473f5cac(undefined8 param_1,int param_2)

{
  FUN_1473f5c54();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473f5cd2 FUN_1473f5cd2 body=47 status=ok
// SIG undefined FUN_1473f5cd2(void)

void FUN_1473f5cd2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xa8,0x10);
  FUN_1473f5d02(uVar1,param_2,param_3);
  return;
}



// FUNCTION 1473f5d02 FUN_1473f5d02 body=141 status=ok
// SIG undefined FUN_1473f5d02(void)

undefined8 * FUN_1473f5d02(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *param_1 = &PTR_FUN_14a343270;
  FUN_140056680(param_1 + 9);
  param_1[0xb] = param_3;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *param_1 = &PTR_FUN_14a371280;
  param_1[0xe] = 0xffffffff00000001;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  FUN_1473ec0e0(param_1 + 0xe);
  return param_1;
}



// FUNCTION 1473f5d90 FUN_1473f5d90 body=38 status=ok
// SIG undefined FUN_1473f5d90(void)

undefined8 FUN_1473f5d90(undefined8 param_1,int param_2)

{
  FUN_1473f5e4e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473f5db6 FUN_1473f5db6 body=74 status=ok
// SIG undefined FUN_1473f5db6(void)

void FUN_1473f5db6(longlong param_1)

{
  int iVar1;
  
  if ((DAT_14ca813bc == '\x01') && (*(char *)(param_1 + 0xa0) == '\0')) {
    iVar1 = (*(int *)(param_1 + 0x74) + 1) % *(int *)(param_1 + 0x70);
    FUN_1473ebe22(*(undefined8 *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar1 * 8));
    *(int *)(param_1 + 0x74) = iVar1;
    *(undefined1 *)(param_1 + 0xa0) = 1;
  }
  return;
}



// FUNCTION 1473f5e00 FUN_1473f5e00 body=77 status=ok
// SIG undefined FUN_1473f5e00(void)

void FUN_1473f5e00(longlong param_1)

{
  int iVar1;
  
  if ((DAT_14ca813bc == '\x01') && (*(char *)(param_1 + 0xa0) == '\x01')) {
    FUN_1473ebe22(*(undefined8 *)
                   (*(longlong *)(param_1 + 0x90) + (longlong)*(int *)(param_1 + 0x74) * 8));
    iVar1 = *(int *)(param_1 + 0x78) + 1;
    if (*(int *)(param_1 + 0x70) <= iVar1) {
      iVar1 = *(int *)(param_1 + 0x70);
    }
    *(int *)(param_1 + 0x78) = iVar1;
    *(undefined1 *)(param_1 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 1473f5e4e FUN_1473f5e4e body=74 status=ok
// SIG undefined FUN_1473f5e4e(void)

void FUN_1473f5e4e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a371280;
  FUN_1473ea7de(param_1 + 0xe);
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_147365ce2(param_1);
  return;
}



// FUNCTION 1473f5e98 FUN_1473f5e98 body=34 status=ok
// SIG undefined FUN_1473f5e98(void)

void FUN_1473f5e98(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14a371310;
  return;
}



// FUNCTION 1473f5eba FUN_1473f5eba body=31 status=ok
// SIG undefined FUN_1473f5eba(void)

undefined8 FUN_1473f5eba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473f5ef6 FUN_1473f5ef6 body=93 status=ok
// SIG undefined FUN_1473f5ef6(void)

void FUN_1473f5ef6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a3712a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1473f5f54 FUN_1473f5f54 body=126 status=ok
// SIG undefined FUN_1473f5f54(void)

void FUN_1473f5f54(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a3712a0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001473f5fc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1473f5fde FUN_1473f5fde body=21 status=ok
// SIG undefined FUN_1473f5fde(void)

undefined8 FUN_1473f5fde(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1473f5ff4 FUN_1473f5ff4 body=29 status=ok
// SIG undefined FUN_1473f5ff4(void)

undefined8 FUN_1473f5ff4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473f6016 FUN_1473f6016 body=52 status=ok
// SIG undefined FUN_1473f6016(void)

void FUN_1473f6016(longlong *param_1)

{
  FUN_1473f604a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1473f604a FUN_1473f604a body=91 status=ok
// SIG undefined FUN_1473f604a(void)

void FUN_1473f604a(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1473f60a6(param_1,0);
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



// FUNCTION 1473f60a6 FUN_1473f60a6 body=95 status=ok
// SIG undefined FUN_1473f60a6(void)

void FUN_1473f60a6(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 7,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 7)) {
      uVar2 = uVar1 >> 7 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x80,4);
  }
  return;
}



// FUNCTION 1473f6106 FUN_1473f6106 body=431 status=ok
// SIG undefined FUN_1473f6106(void)

void FUN_1473f6106(longlong *param_1,uint param_2)

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
      FUN_1473f60a6(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_1473f647c(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar9 * 0x80 + lVar2 + -0x7c);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x80) = iVar8 + -1;
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
        puVar5 = puVar5 + -0x20;
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



// FUNCTION 1473f62b6 FUN_1473f62b6 body=453 status=ok
// SIG undefined FUN_1473f62b6(void)

void FUN_1473f62b6(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar10 = (longlong)iVar5 * 0x80;
        iVar6 = (*(code *)PTR_FUN_14c75b148)(lVar3 + lVar10,0x78,0);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x7c + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x78 + lVar10) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1473f647c FUN_1473f647c body=132 status=ok
// SIG undefined FUN_1473f647c(void)

void FUN_1473f647c(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 7,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 7)) {
      uVar5 = uVar3 >> 7 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x80,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1473f6502 FUN_1473f6502 body=305 status=ok
// SIG undefined FUN_1473f6502(void)

undefined4 * FUN_1473f6502(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1473f6634(param_1,local_48);
  puVar8 = local_40;
  for (lVar5 = 0x1e; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar8 = *param_3;
    param_3 = param_3 + 1;
    puVar8 = puVar8 + 1;
  }
  local_40[0x1e] = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = (*(code *)PTR_FUN_14c75b148)(local_40,0x78,0);
  cVar2 = FUN_1473f671c(param_1,uVar3,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      local_40[0x1f] = uVar3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      local_40[0x1e] =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1473f62b6(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473f6634 FUN_1473f6634 body=231 status=ok
// SIG undefined FUN_1473f6634(void)

int * FUN_1473f6634(longlong *param_1,int *param_2)

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
      FUN_1473f647c(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x80);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x80) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x80 + *param_1;
  return param_2;
}



// FUNCTION 1473f671c FUN_1473f671c body=91 status=ok
// SIG undefined FUN_1473f671c(void)

undefined8 FUN_1473f671c(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  int iVar1;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar1 = FUN_1473f6778(), iVar1 != -1)) {
    memmove((void *)((longlong)iVar1 * 0x80 + *param_1),param_3,0x78);
    FUN_1473f6812(param_1,*param_4);
    *param_4 = iVar1;
    return 1;
  }
  return 0;
}



// FUNCTION 1473f6778 FUN_1473f6778 body=154 status=ok
// SIG undefined FUN_1473f6778(void)

int FUN_1473f6778(longlong *param_1,uint param_2,undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  bool bVar4;
  longlong *plVar5;
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
  ulonglong uVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        pauVar6 = (undefined1 (*) [16])(*param_1 + (longlong)iVar3 * 0x80);
        uVar8 = 0;
        pauVar7 = param_3;
        do {
          auVar1 = *pauVar6;
          auVar2 = *pauVar7;
          bVar4 = *(int *)pauVar7[1] == *(int *)pauVar6[1];
          if (4 < uVar8) break;
          uVar8 = uVar8 + 1;
          pauVar6 = (undefined1 (*) [16])(pauVar6[1] + 4);
          pauVar7 = (undefined1 (*) [16])(pauVar7[1] + 4);
        } while (bVar4 && auVar2 == auVar1);
        if (bVar4 && auVar2 == auVar1) {
          return iVar3;
        }
        iVar3 = *(int *)(*param_1 + 0x78 + (longlong)iVar3 * 0x80);
      } while (iVar3 != -1);
    }
  }
  return -1;
}



// FUNCTION 1473f6812 FUN_1473f6812 body=114 status=ok
// SIG undefined FUN_1473f6812(void)

void FUN_1473f6812(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x80) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x80) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x80 + 4) = uVar4;
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



// FUNCTION 1473f6884 FUN_1473f6884 body=29 status=ok
// SIG undefined FUN_1473f6884(void)

undefined8 FUN_1473f6884(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473f68be FUN_1473f68be body=93 status=ok
// SIG undefined FUN_1473f68be(void)

void FUN_1473f68be(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a371370;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1473f691c FUN_1473f691c body=93 status=ok
// SIG undefined FUN_1473f691c(void)

void FUN_1473f691c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a371370;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1473f697a FUN_1473f697a body=126 status=ok
// SIG undefined FUN_1473f697a(void)

void FUN_1473f697a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a371370;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001473f69e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1473f6a06 FUN_1473f6a06 body=31 status=ok
// SIG undefined FUN_1473f6a06(void)

undefined8 FUN_1473f6a06(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1473f6a26 FUN_1473f6a26 body=29 status=ok
// SIG undefined FUN_1473f6a26(void)

undefined8 FUN_1473f6a26(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473f6a60 FUN_1473f6a60 body=93 status=ok
// SIG undefined FUN_1473f6a60(void)

void FUN_1473f6a60(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a3713e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1473f6abe FUN_1473f6abe body=93 status=ok
// SIG undefined FUN_1473f6abe(void)

void FUN_1473f6abe(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a3713e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1473f6b1c FUN_1473f6b1c body=126 status=ok
// SIG undefined FUN_1473f6b1c(void)

void FUN_1473f6b1c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a3713e0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001473f6b8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1473f6ba8 FUN_1473f6ba8 body=21 status=ok
// SIG undefined FUN_1473f6ba8(void)

undefined8 FUN_1473f6ba8(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1473f6bbe FUN_1473f6bbe body=322 status=ok
// SIG undefined FUN_1473f6bbe(void)

void FUN_1473f6bbe(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x7c + (longlong)iVar4 * 0x80) * 4) =
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



// FUNCTION 1473f6d02 FUN_1473f6d02 body=115 status=ok
// SIG undefined FUN_1473f6d02(void)

int FUN_1473f6d02(longlong *param_1,uint param_2,int *param_3)

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
        lVar4 = (longlong)iVar1 * 0x20;
        if ((((*(int *)(lVar2 + lVar4) == *param_3) && (*(int *)(lVar2 + 4 + lVar4) == param_3[1]))
            && (*(int *)(lVar2 + 8 + lVar4) == param_3[2])) &&
           (*(int *)(lVar2 + 0xc + lVar4) == param_3[3])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar4 + lVar2 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1473f6d76 FUN_1473f6d76 body=315 status=ok
// SIG undefined FUN_1473f6d76(void)

undefined4 * FUN_1473f6d76(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  longlong *plVar2;
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
  FUN_1473f6eb2(param_1,local_48);
  puVar1 = (undefined4 *)*param_3;
  plVar2 = (longlong *)param_3[1];
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *local_40 = *puVar1;
  local_40[1] = uVar3;
  local_40[2] = uVar4;
  local_40[3] = uVar5;
  lVar11 = *plVar2;
  *(longlong *)(local_40 + 4) = lVar11;
  if (lVar11 != 0) {
    LOCK();
    *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
    UNLOCK();
  }
  local_40[6] = 0xffffffff;
  local_4c = local_48[0];
  uVar7 = FUN_1447addd0(local_40,0x10);
  cVar6 = FUN_1473f6f98(param_1,uVar7,local_40,&local_4c);
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
      local_40[7] = uVar7;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      local_40[6] = *(undefined4 *)
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
      FUN_1473f7088(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473f6eb2 FUN_1473f6eb2 body=229 status=ok
// SIG undefined FUN_1473f6eb2(void)

int * FUN_1473f6eb2(longlong *param_1,int *param_2)

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



// FUNCTION 1473f6f98 FUN_1473f6f98 body=126 status=ok
// SIG undefined FUN_1473f6f98(void)

undefined8 FUN_1473f6f98(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar8 = FUN_1473f6d02(), iVar8 != -1)) {
    puVar2 = (undefined4 *)(*param_1 + (longlong)iVar8 * 0x20);
    puVar3 = *(undefined8 **)(*param_1 + 0x10 + (longlong)iVar8 * 0x20);
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    uVar4 = *param_3;
    uVar5 = param_3[1];
    uVar6 = param_3[2];
    uVar7 = param_3[3];
    *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(param_3 + 4);
    *puVar2 = uVar4;
    puVar2[1] = uVar5;
    puVar2[2] = uVar6;
    puVar2[3] = uVar7;
    FUN_1473f7016(param_1,*param_4);
    *param_4 = iVar8;
    return 1;
  }
  return 0;
}



// FUNCTION 1473f7016 FUN_1473f7016 body=114 status=ok
// SIG undefined FUN_1473f7016(void)

void FUN_1473f7016(longlong *param_1,int param_2)

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



// FUNCTION 1473f7088 FUN_1473f7088 body=449 status=ok
// SIG undefined FUN_1473f7088(void)

void FUN_1473f7088(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar10 = (longlong)iVar5 * 0x20;
        iVar6 = FUN_1447addd0(lVar3 + lVar10,0x10);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x1c + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar10) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1473f724a FUN_1473f724a body=434 status=ok
// SIG undefined FUN_1473f724a(void)

void FUN_1473f724a(longlong *param_1,uint param_2)

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
      FUN_144a544ac(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_1401600aa(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar9 * 0x88 + lVar2 + -0x84);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x88) = iVar8 + -1;
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
        puVar5 = puVar5 + -0x22;
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



// FUNCTION 1473f73fc FUN_1473f73fc body=463 status=ok
// SIG undefined FUN_1473f73fc(void)

void FUN_1473f73fc(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint uVar10;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar5 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar5 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar6 = local_70._4_4_;
      local_70 = uVar5;
      do {
        lVar3 = *local_88;
        lVar4 = (longlong)iVar6 * 0x88;
        iVar7 = (*(code *)PTR_FUN_14c75b148)(lVar3 + lVar4,0x78,0);
        uVar8 = (longlong)iVar7 & (longlong)(int)param_1[9] - 1U;
        iVar7 = (int)uVar8;
        *(int *)(lVar3 + 0x84 + lVar4) = iVar7;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x80 + lVar4) =
             *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar6 = local_70._4_4_;
        uVar5 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar5;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1473f75cc FUN_1473f75cc body=378 status=ok
// SIG undefined FUN_1473f75cc(void)

undefined4 * FUN_1473f75cc(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1473f7748(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  puVar12 = (undefined4 *)*param_3;
  puVar13 = local_40;
  for (lVar9 = 0x1e; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar13 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar13 = puVar13 + 1;
  }
  puVar1 = (undefined8 *)*puVar1;
  puVar8 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar8 = *puVar1;
  *puVar1 = 0;
  *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)puVar8 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  uVar2 = *(undefined4 *)((longlong)puVar1 + 0x14);
  uVar3 = *(undefined4 *)(puVar1 + 3);
  uVar4 = *(undefined4 *)((longlong)puVar1 + 0x1c);
  *(undefined4 *)(puVar8 + 2) = *(undefined4 *)(puVar1 + 2);
  *(undefined4 *)((longlong)puVar8 + 0x14) = uVar2;
  *(undefined4 *)(puVar8 + 3) = uVar3;
  *(undefined4 *)((longlong)puVar8 + 0x1c) = uVar4;
  *(undefined8 **)(local_40 + 0x1e) = puVar8;
  local_40[0x20] = 0xffffffff;
  local_4c = local_48[0];
  uVar6 = (*(code *)PTR_FUN_14c75b148)(local_40,0x78,0);
  cVar5 = FUN_1431cd5d6(param_1,uVar6,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar5 == '\0') {
    uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar11 = 1;
    if (3 < uVar7) {
      uVar10 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar11 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & uVar6;
      local_40[0x21] = uVar6;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      local_40[0x20] =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar11;
      FUN_1473f73fc(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473f7748 FUN_1473f7748 body=251 status=ok
// SIG undefined FUN_1473f7748(void)

int * FUN_1473f7748(longlong *param_1,int *param_2)

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
      FUN_1401600aa(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x88);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x88) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x88 + *param_1;
  return param_2;
}



// FUNCTION 1473f7844 FUN_1473f7844 body=168 status=ok
// SIG undefined FUN_1473f7844(void)

int FUN_1473f7844(longlong *param_1,uint param_2,undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  bool bVar4;
  longlong *plVar5;
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
  ulonglong uVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        pauVar6 = (undefined1 (*) [16])(*param_1 + (longlong)iVar3 * 0x88);
        uVar8 = 0;
        pauVar7 = param_3;
        do {
          auVar1 = *pauVar6;
          auVar2 = *pauVar7;
          bVar4 = *(int *)pauVar7[1] == *(int *)pauVar6[1];
          if (4 < uVar8) break;
          uVar8 = uVar8 + 1;
          pauVar6 = (undefined1 (*) [16])(pauVar6[1] + 4);
          pauVar7 = (undefined1 (*) [16])(pauVar7[1] + 4);
        } while (bVar4 && auVar2 == auVar1);
        if (bVar4 && auVar2 == auVar1) {
          return iVar3;
        }
        iVar3 = *(int *)(*param_1 + 0x80 + (longlong)iVar3 * 0x88);
      } while (iVar3 != -1);
    }
  }
  return -1;
}



// FUNCTION 1473f78ec FUN_1473f78ec body=128 status=ok
// SIG undefined FUN_1473f78ec(void)

void FUN_1473f78ec(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x88) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x88) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x88 + 4) = uVar4;
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



// FUNCTION 1473f796c FUN_1473f796c body=378 status=ok
// SIG undefined FUN_1473f796c(void)

undefined4 * FUN_1473f796c(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1473f7748(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  puVar12 = (undefined4 *)*param_3;
  puVar13 = local_40;
  for (lVar9 = 0x1e; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar13 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar13 = puVar13 + 1;
  }
  puVar1 = (undefined8 *)*puVar1;
  puVar8 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar8 = *puVar1;
  *puVar1 = 0;
  *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)puVar8 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  uVar2 = *(undefined4 *)((longlong)puVar1 + 0x14);
  uVar3 = *(undefined4 *)(puVar1 + 3);
  uVar4 = *(undefined4 *)((longlong)puVar1 + 0x1c);
  *(undefined4 *)(puVar8 + 2) = *(undefined4 *)(puVar1 + 2);
  *(undefined4 *)((longlong)puVar8 + 0x14) = uVar2;
  *(undefined4 *)(puVar8 + 3) = uVar3;
  *(undefined4 *)((longlong)puVar8 + 0x1c) = uVar4;
  *(undefined8 **)(local_40 + 0x1e) = puVar8;
  local_40[0x20] = 0xffffffff;
  local_4c = local_48[0];
  uVar6 = (*(code *)PTR_FUN_14c75b148)(local_40,0x78,0);
  cVar5 = FUN_1431cd5d6(param_1,uVar6,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar5 == '\0') {
    uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar11 = 1;
    if (3 < uVar7) {
      uVar10 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar11 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & uVar6;
      local_40[0x21] = uVar6;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      local_40[0x20] =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar11;
      FUN_1473f73fc(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473f7ae8 FUN_1473f7ae8 body=112 status=ok
// SIG undefined FUN_1473f7ae8(void)

void FUN_1473f7ae8(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x84 + (longlong)param_2 * 0x88);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x80 + lVar5 * 0x88);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x88 + 0x80);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x88 + 0x80);
  FUN_1431cd666();
  return;
}



// FUNCTION 1473f7b58 FUN_1473f7b58 body=95 status=ok
// SIG undefined FUN_1473f7b58(void)

void FUN_1473f7b58(longlong param_1,uint param_2)

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



// FUNCTION 1473f7bb8 FUN_1473f7bb8 body=132 status=ok
// SIG undefined FUN_1473f7bb8(void)

void FUN_1473f7bb8(longlong param_1,int param_2)

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



// FUNCTION 1473f7c3e FUN_1473f7c3e body=207 status=ok
// SIG undefined FUN_1473f7c3e(void)

int FUN_1473f7c3e(uint param_1,void *param_2)

{
  void *_Buf1;
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined *puVar7;
  
  lVar5 = DAT_14ca79a10;
  if (DAT_14ca79a18 != DAT_14ca79a44) {
    puVar7 = &DAT_14ca79a48;
    if (DAT_14ca79a50 != (undefined *)0x0) {
      puVar7 = DAT_14ca79a50;
    }
    iVar2 = *(int *)(puVar7 + (ulonglong)(DAT_14ca79a58 - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar4 = *(longlong *)((longlong)param_2 + 0xc0);
      iVar3 = *(int *)((longlong)param_2 + 200);
      cVar1 = *(char *)((longlong)param_2 + 0xcc);
      do {
        _Buf1 = (void *)(lVar5 + (longlong)iVar2 * 0xe0);
        iVar6 = memcmp(_Buf1,param_2,0xc0);
        if ((((iVar6 == 0) && (*(longlong *)((longlong)_Buf1 + 0xc0) == lVar4)) &&
            (*(int *)((longlong)_Buf1 + 200) == iVar3)) &&
           (*(char *)((longlong)_Buf1 + 0xcc) == cVar1)) {
          return iVar2;
        }
        iVar2 = *(int *)(lVar5 + 0xd8 + (longlong)iVar2 * 0xe0);
      } while (iVar2 != -1);
    }
  }
  return -1;
}



// FUNCTION 1473f7d0e FUN_1473f7d0e body=356 status=ok
// SIG undefined FUN_1473f7d0e(void)

undefined4 * FUN_1473f7d0e(undefined4 *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  undefined *puVar9;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  void *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1473f7e74(local_40);
  puVar1 = (undefined4 *)param_2[1];
  memcpy(local_38,(void *)*param_2,0xd0);
  *(undefined4 *)((longlong)local_38 + 0xd0) = *puVar1;
  *(undefined4 *)((longlong)local_38 + 0xd8) = 0xffffffff;
  local_44 = local_40[0];
  uVar5 = FUN_1448eb174(local_38,0xc0,0);
  uVar6 = ((uint)(*(ulonglong *)((longlong)local_38 + 0xc0) >> 0x14) & 0xffff ^
          (uint)(*(ulonglong *)((longlong)local_38 + 0xc0) >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar5 = uVar6 >> 0x10 ^
          uVar5 ^ *(uint *)((longlong)local_38 + 200) ^ (int)*(char *)((longlong)local_38 + 0xcc) ^
          uVar6;
  cVar4 = FUN_1473f7f88(uVar5,local_38,&local_44);
  uVar3 = local_44;
  if (cVar4 == '\0') {
    uVar6 = DAT_14ca79a18 - DAT_14ca79a44;
    iVar8 = 1;
    if (3 < uVar6) {
      uVar7 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar2 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= DAT_14ca79a58)) {
      uVar5 = DAT_14ca79a58 - 1U & uVar5;
      *(uint *)((longlong)local_38 + 0xdc) = uVar5;
      puVar9 = &DAT_14ca79a48;
      if (DAT_14ca79a50 != (undefined *)0x0) {
        puVar9 = DAT_14ca79a50;
      }
      *(undefined4 *)((longlong)local_38 + 0xd8) =
           *(undefined4 *)(puVar9 + (longlong)(int)uVar5 * 4);
      *(undefined4 *)(puVar9 + (longlong)(int)uVar5 * 4) = local_44;
    }
    else {
      DAT_14ca79a58 = iVar8;
      FUN_1473f80b4(&DAT_14ca79a10);
    }
  }
  *param_1 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473f7e74 FUN_1473f7e74 body=275 status=ok
// SIG undefined FUN_1473f7e74(void)

int * FUN_1473f7e74(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14ca79a40;
  iVar4 = DAT_14ca79a18;
  if (DAT_14ca79a44 == 0) {
    iVar2 = DAT_14ca79a18 + 1;
    bVar7 = DAT_14ca79a1c == DAT_14ca79a18;
    DAT_14ca79a18 = iVar2;
    if (bVar7) {
      FUN_14041fbf2(&DAT_14ca79a10,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14ca79a20,1);
    puVar3 = DAT_14ca79a30;
    if (DAT_14ca79a30 == (undefined *)0x0) {
      puVar3 = &DAT_14ca79a20;
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
    lVar6 = (longlong)DAT_14ca79a40;
    DAT_14ca79a40 = *(int *)(DAT_14ca79a10 + 4 + lVar6 * 0xe0);
    DAT_14ca79a44 = DAT_14ca79a44 + -1;
    iVar4 = iVar2;
    if (DAT_14ca79a44 != 0) {
      *(undefined4 *)(DAT_14ca79a10 + (longlong)DAT_14ca79a40 * 0xe0) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14ca79a20;
  if (DAT_14ca79a30 != (undefined *)0x0) {
    puVar3 = DAT_14ca79a30;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0xe0 + DAT_14ca79a10;
  return param_1;
}



// FUNCTION 1473f7f88 FUN_1473f7f88 body=109 status=ok
// SIG undefined FUN_1473f7f88(void)

undefined8 FUN_1473f7f88(undefined8 param_1,void *param_2,int *param_3)

{
  int iVar1;
  
  if ((DAT_14ca79a18 - DAT_14ca79a44 != 1) && (iVar1 = FUN_1473f7c3e(), iVar1 != -1)) {
    memmove((void *)((longlong)iVar1 * 0xe0 + DAT_14ca79a10),param_2,0xd8);
    FUN_1473f7ff6(&DAT_14ca79a10,*param_3);
    *param_3 = iVar1;
    return 1;
  }
  return 0;
}



// FUNCTION 1473f7ff6 FUN_1473f7ff6 body=122 status=ok
// SIG undefined FUN_1473f7ff6(void)

void FUN_1473f7ff6(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0xe0) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xe0) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xe0 + 4) = uVar5;
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



// FUNCTION 1473f8070 FUN_1473f8070 body=68 status=ok
// SIG undefined FUN_1473f8070(void)

void FUN_1473f8070(longlong param_1,uint param_2)

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
  FUN_1473f80b4(param_1);
  return;
}



// FUNCTION 1473f80b4 FUN_1473f80b4 body=524 status=ok
// SIG undefined FUN_1473f80b4(void)

void FUN_1473f80b4(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar5 = *(uint *)(param_1 + 9);
  uVar3 = local_70;
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar5,4);
    if (0 < (int)uVar5) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar5 != uVar9);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar3 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar4 = local_70._4_4_;
      local_70 = uVar3;
      do {
        lVar2 = *local_88;
        lVar10 = (longlong)iVar4 * 0xe0;
        uVar5 = FUN_1448eb174(lVar2 + lVar10,0xc0,0);
        uVar8 = *(ulonglong *)(lVar2 + 0xc0 + lVar10);
        uVar9 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
        uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
        uVar8 = (longlong)
                (int)(uVar9 >> 0x10 ^
                     uVar5 ^ *(uint *)(lVar2 + 200 + lVar10) ^ (int)*(char *)(lVar2 + 0xcc + lVar10)
                     ^ uVar9) & (longlong)(int)param_1[9] - 1U;
        iVar7 = (int)uVar8;
        *(int *)(lVar2 + 0xdc + lVar10) = iVar7;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0xd8 + lVar10) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar4 = local_70._4_4_;
        uVar3 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar3;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1473f82c2 FUN_1473f82c2 body=104 status=ok
// SIG undefined FUN_1473f82c2(void)

void FUN_1473f82c2(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0xdc + (longlong)param_2 * 0xe0);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0xd8 + lVar5 * 0xe0);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0xe0 + 0xd8);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0xe0 + 0xd8);
  FUN_1473f7ff6();
  return;
}



// FUNCTION 1473f832a FUN_1473f832a body=132 status=ok
// SIG undefined FUN_1473f832a(void)

longlong FUN_1473f832a(undefined4 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar1 = FUN_1473f83b0();
  if (iVar1 != -1) {
    lVar2 = (longlong)iVar1 * 0x40;
    if (DAT_14ca79a68 + lVar2 != 0) goto LAB_1473f8363;
  }
  local_28 = param_2;
  FUN_1473f8424(&local_1c,param_1);
  lVar2 = (longlong)local_1c << 6;
LAB_1473f8363:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 + DAT_14ca79a68 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473f83b0 FUN_1473f83b0 body=116 status=ok
// SIG undefined FUN_1473f83b0(void)

int FUN_1473f83b0(uint param_1,int *param_2)

{
  int iVar1;
  undefined *puVar2;
  longlong lVar3;
  
  if (DAT_14ca79a70 != DAT_14ca79a9c) {
    puVar2 = &DAT_14ca79aa0;
    if (DAT_14ca79aa8 != (undefined *)0x0) {
      puVar2 = DAT_14ca79aa8;
    }
    iVar1 = *(int *)(puVar2 + (ulonglong)(DAT_14ca79ab0 - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = (longlong)iVar1 * 0x40;
        if (((*(int *)(DAT_14ca79a68 + lVar3) == *param_2) &&
            (*(int *)(DAT_14ca79a68 + lVar3 + 4) == param_2[1])) &&
           (*(int *)(DAT_14ca79a68 + lVar3 + 8) == param_2[2])) {
          return iVar1;
        }
        iVar1 = *(int *)(DAT_14ca79a68 + 0x38 + lVar3);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1473f8424 FUN_1473f8424 body=370 status=ok
// SIG undefined FUN_1473f8424(void)

undefined4 * FUN_1473f8424(undefined4 *param_1,uint param_2,longlong *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  undefined *puVar5;
  ulonglong uVar6;
  int iVar7;
  undefined1 auStack_68 [40];
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1473f8598(local_40);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  uVar6 = (ulonglong)DAT_14c892f54;
  puVar1 = (undefined8 *)*param_3;
  *(undefined4 *)(local_38 + 1) = *(undefined4 *)(puVar1 + 1);
  *local_38 = *puVar1;
  local_38[2] = uVar6;
  *(undefined4 *)(local_38 + 3) = 0;
  local_38[4] = 0;
  local_38[5] = 0;
  *(undefined4 *)(local_38 + 6) = 0xffffffff;
  *(undefined4 *)(local_38 + 7) = 0xffffffff;
  cVar3 = FUN_1473f86a6(param_2,local_38);
  if (cVar3 == '\0') {
    uVar4 = DAT_14ca79a70 - DAT_14ca79a9c;
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar2 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= DAT_14ca79ab0)) {
      param_2 = DAT_14ca79ab0 - 1U & param_2;
      *(uint *)((longlong)local_38 + 0x3c) = param_2;
      puVar5 = DAT_14ca79aa8;
      if (DAT_14ca79aa8 == (undefined *)0x0) {
        puVar5 = &DAT_14ca79aa0;
      }
      *(undefined4 *)(local_38 + 7) =
           *(undefined4 *)(puVar5 + ((longlong)DAT_14ca79ab0 - 1U & (longlong)(int)param_2) * 4);
      puVar5 = DAT_14ca79aa8;
      if (DAT_14ca79aa8 == (undefined *)0x0) {
        puVar5 = &DAT_14ca79aa0;
      }
      *(undefined4 *)(puVar5 + ((longlong)DAT_14ca79ab0 - 1U & (longlong)(int)param_2) * 4) =
           local_40[0];
    }
    else {
      DAT_14ca79ab0 = iVar7;
      FUN_1473f8818(&DAT_14ca79a68);
    }
  }
  *param_1 = local_40[0];
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473f8598 FUN_1473f8598 body=269 status=ok
// SIG undefined FUN_1473f8598(void)

int * FUN_1473f8598(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14ca79a98;
  iVar4 = DAT_14ca79a70;
  if (DAT_14ca79a9c == 0) {
    iVar2 = DAT_14ca79a70 + 1;
    bVar7 = DAT_14ca79a74 == DAT_14ca79a70;
    DAT_14ca79a70 = iVar2;
    if (bVar7) {
      FUN_1406cd6a8(&DAT_14ca79a68,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14ca79a78,1);
    puVar3 = DAT_14ca79a88;
    if (DAT_14ca79a88 == (undefined *)0x0) {
      puVar3 = &DAT_14ca79a78;
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
    lVar6 = (longlong)DAT_14ca79a98;
    DAT_14ca79a98 = *(int *)(DAT_14ca79a68 + 4 + lVar6 * 0x40);
    DAT_14ca79a9c = DAT_14ca79a9c + -1;
    iVar4 = iVar2;
    if (DAT_14ca79a9c != 0) {
      *(undefined4 *)(DAT_14ca79a68 + (longlong)DAT_14ca79a98 * 0x40) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14ca79a78;
  if (DAT_14ca79a88 != (undefined *)0x0) {
    puVar3 = DAT_14ca79a88;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0x40 + DAT_14ca79a68;
  return param_1;
}



// FUNCTION 1473f86a6 FUN_1473f86a6 body=173 status=ok
// SIG undefined FUN_1473f86a6(void)

undefined8 FUN_1473f86a6(undefined8 param_1,undefined4 *param_2,int *param_3)

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
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  undefined8 uVar16;
  longlong lVar17;
  
  if (DAT_14ca79a70 - DAT_14ca79a9c == 1) {
    uVar16 = 0;
  }
  else {
    iVar14 = FUN_1473f83b0();
    uVar16 = 0;
    if (iVar14 != -1) {
      lVar17 = (longlong)iVar14 * 0x40;
      LOCK();
      DAT_14ca79910 = DAT_14ca79910 - *(int *)(DAT_14ca79a68 + 0x28 + lVar17);
      UNLOCK();
      iVar15 = *(int *)(DAT_14ca79a68 + 0x30 + lVar17);
      if (iVar15 == -1) {
        iVar15 = *(int *)(DAT_14ca79a68 + 0x28 + lVar17);
      }
      LOCK();
      DAT_14ca79914 = DAT_14ca79914 - iVar15;
      UNLOCK();
      puVar1 = (undefined4 *)(DAT_14ca79a68 + lVar17);
      if (*(longlong *)(DAT_14ca79a68 + 0x20 + lVar17) != 0) {
        FUN_1400020a8();
      }
      uVar2 = *param_2;
      uVar3 = param_2[1];
      uVar4 = param_2[2];
      uVar5 = param_2[3];
      uVar6 = param_2[4];
      uVar7 = param_2[5];
      uVar8 = param_2[6];
      uVar9 = param_2[7];
      uVar10 = param_2[8];
      uVar11 = param_2[9];
      uVar12 = param_2[10];
      uVar13 = param_2[0xb];
      *(undefined8 *)(puVar1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
      puVar1[8] = uVar10;
      puVar1[9] = uVar11;
      puVar1[10] = uVar12;
      puVar1[0xb] = uVar13;
      puVar1[4] = uVar6;
      puVar1[5] = uVar7;
      puVar1[6] = uVar8;
      puVar1[7] = uVar9;
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      FUN_1473f8754(*param_3);
      *param_3 = iVar14;
      uVar16 = 1;
    }
  }
  return uVar16;
}



// FUNCTION 1473f8754 FUN_1473f8754 body=128 status=ok
// SIG undefined FUN_1473f8754(void)

void FUN_1473f8754(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14ca79a68;
  if (DAT_14ca79a9c != 0) {
    *(int *)(DAT_14ca79a68 + (longlong)DAT_14ca79a98 * 0x40) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x40) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14ca79a9c) {
    iVar4 = DAT_14ca79a98;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x40) = iVar4;
  DAT_14ca79a9c = DAT_14ca79a9c + 1;
  puVar3 = &DAT_14ca79a78;
  if (DAT_14ca79a88 != (undefined *)0x0) {
    puVar3 = DAT_14ca79a88;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14ca79a98 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 1473f87d4 FUN_1473f87d4 body=68 status=ok
// SIG undefined FUN_1473f87d4(void)

void FUN_1473f87d4(longlong param_1,uint param_2)

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
  FUN_1473f8818(param_1);
  return;
}



// FUNCTION 1473f8818 FUN_1473f8818 body=439 status=ok
// SIG undefined FUN_1473f8818(void)

void FUN_1473f8818(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x40;
        uVar10 = (longlong)
                 (int)(*(uint *)(lVar3 + 4 + lVar7) ^ *(uint *)(lVar3 + lVar7) ^
                      *(uint *)(lVar3 + 8 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x3c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x38 + lVar7) =
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



// FUNCTION 1473f89d0 FUN_1473f89d0 body=114 status=ok
// SIG undefined FUN_1473f89d0(void)

void FUN_1473f89d0(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 10,2);
    iVar2 = (int)(uVar1 / 10);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,10,2);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1473f8a42 FUN_1473f8a42 body=110 status=ok
// SIG undefined FUN_1473f8a42(void)

void FUN_1473f8a42(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x40);
  if (param_2 <= (int)uVar1) {
    iVar5 = 7;
    if (7 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (7 < *(uint *)(param_1 + 0x44)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x44) = iVar5;
    FUN_1473f8ab2(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1473f8ab2 FUN_1473f8ab2 body=132 status=ok
// SIG undefined FUN_1473f8ab2(void)

void FUN_1473f8ab2(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x38);
  if ((uint)param_3 < 8) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x38,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x38),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x38,param_2,param_3,8);
  return;
}



// FUNCTION 1473f8b36 FUN_1473f8b36 body=95 status=ok
// SIG undefined FUN_1473f8b36(void)

void FUN_1473f8b36(longlong param_1,uint param_2)

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



// FUNCTION 1473f8b96 FUN_1473f8b96 body=132 status=ok
// SIG undefined FUN_1473f8b96(void)

void FUN_1473f8b96(longlong param_1,int param_2)

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



// FUNCTION 1473f8c1c FUN_1473f8c1c body=132 status=ok
// SIG undefined FUN_1473f8c1c(void)

void FUN_1473f8c1c(longlong param_1,int param_2)

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



// FUNCTION 1473f8ca2 FUN_1473f8ca2 body=89 status=ok
// SIG undefined FUN_1473f8ca2(void)

void FUN_1473f8ca2(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x10 + *param_1);
  FUN_1473f2eb6(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1473f8cfc FUN_1473f8cfc body=62 status=ok
// SIG undefined FUN_1473f8cfc(void)

void FUN_1473f8cfc(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1473f8d3a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 1473f8d3a FUN_1473f8d3a body=93 status=ok
// SIG undefined FUN_1473f8d3a(void)

ulonglong FUN_1473f8d3a(uint param_1,uint param_2)

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



// FUNCTION 1473f8d98 FUN_1473f8d98 body=183 status=ok
// SIG undefined FUN_1473f8d98(void)

longlong FUN_1473f8d98(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                      longlong param_5)

{
  FUN_1431cae2e(param_1,param_2,param_3 + 0xa0,0,0);
  FUN_1431cae2e(param_1 + 0x90,param_2,param_4 + 0xa0,1,*(undefined1 *)(param_1 + 0x45));
  *(undefined1 *)(param_1 + 0x1b0) = 0;
  *(undefined1 *)(param_1 + 0x1b8) = *(undefined1 *)(param_4 + 0x124);
  if (param_5 != 0) {
    FUN_1431cae2e(param_1 + 0x120,param_2,param_5 + 0xa0,2,
                  (uint)*(byte *)(param_1 + 0xd5) + (uint)*(byte *)(param_1 + 0x45));
    *(undefined1 *)(param_1 + 0x1b0) = 1;
  }
  return param_1;
}



// FUNCTION 1473f8e50 FUN_1473f8e50 body=59 status=ok
// SIG undefined FUN_1473f8e50(void)

void FUN_1473f8e50(void)

{
  if (1 < DAT_14ca79ab0) {
    FUN_1473f0718();
    DAT_14ca79ab0 = 1;
    FUN_1473f8818(&DAT_14ca79a68);
    return;
  }
  FUN_1473f8e8c();
  FUN_1473f0718();
  return;
}



// FUNCTION 1473f8e8c FUN_1473f8e8c body=364 status=ok
// SIG undefined FUN_1473f8e8c(void)

void FUN_1473f8e8c(void)

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
  puVar5 = &DAT_14ca79aa0;
  if (DAT_14ca79aa8 != (undefined *)0x0) {
    puVar5 = DAT_14ca79aa8;
  }
  iVar4 = DAT_14ca79ab0 + 3;
  if (-1 < DAT_14ca79ab0) {
    iVar4 = DAT_14ca79ab0;
  }
  if (DAT_14ca79a70 - DAT_14ca79a9c < iVar4 >> 2) {
    local_50 = 0x100000000;
    uStack_48 = &DAT_14ca79a78;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    if (DAT_14ca79a90 == 0) {
      iVar4 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar4 = DAT_14ca79a90;
    }
    local_78 = &DAT_14ca79a68;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar1 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    if ((local_60._4_4_ != iVar4) || (uStack_48 != &DAT_14ca79a78)) {
      iVar2 = local_60._4_4_;
      local_60 = uVar1;
      do {
        *(undefined4 *)(puVar5 + (longlong)*(int *)(*local_78 + 0x3c + (longlong)iVar2 * 0x40) * 4)
             = 0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar2 = local_60._4_4_;
        uVar1 = local_60;
      } while (local_78 != &DAT_14ca79a68 ||
               ((undefined *)CONCAT44(uStack_64,uStack_68) != &DAT_14ca79a78 ||
               local_60._4_4_ != iVar4));
    }
  }
  else {
    uVar1 = local_60;
    if (0 < DAT_14ca79ab0) {
      lVar3 = 0;
      do {
        *(undefined4 *)(puVar5 + lVar3 * 4) = 0xffffffff;
        lVar3 = lVar3 + 1;
      } while (lVar3 < DAT_14ca79ab0);
    }
  }
  local_60 = uVar1;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1473f8ffa FUN_1473f8ffa body=429 status=ok
// SIG undefined FUN_1473f8ffa(void)

void FUN_1473f8ffa(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  
  if (*(longlong *)(param_1 + 0x15398) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x15110) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x15110) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x150e8));
  if (*(char *)(param_1 + 0x150e0) == '\x01') {
    FUN_1473f5c54(param_1 + 0x15010);
    *(undefined1 *)(param_1 + 0x150e0) = 0;
  }
  *(undefined4 *)(param_1 + 0x15000) = 0;
  if (*(longlong *)(param_1 + 0x14ff8) != 0) {
    FUN_1400020a8();
  }
  FUN_1473f91a8(param_1 + 0x14fb8);
  if (*(longlong *)(param_1 + 0x14fa8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x14cd0) != 0) {
    FUN_1400020a8();
  }
  FUN_1473ef822(param_1 + 0x148d0);
  if (*(longlong *)(param_1 + 0x14600) != 0) {
    FUN_1400020a8();
  }
  FUN_1473ef822(param_1 + 0x14200);
  *(undefined ***)(param_1 + 0x940) = &PTR_FUN_14a343b20;
  FUN_144725486(param_1 + 0x940);
  FUN_147368a2e(param_1 + 0x940);
  if (*(longlong *)(param_1 + 0x930) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x930) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0x920) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x918) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x918) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_1473efdf8(param_1 + 0x128);
  *(undefined ***)(param_1 + 0x18) = &PTR_LAB_14a1e4500;
  if (*(longlong *)(param_1 + 0x110) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x110) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_14631aa72(param_1);
  return;
}



// FUNCTION 1473f91a8 FUN_1473f91a8 body=52 status=ok
// SIG undefined FUN_1473f91a8(void)

void FUN_1473f91a8(longlong *param_1)

{
  FUN_1473f91dc();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1473f91dc FUN_1473f91dc body=89 status=ok
// SIG undefined FUN_1473f91dc(void)

void FUN_1473f91dc(longlong param_1)

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



// FUNCTION 1473f9236 FUN_1473f9236 body=50 status=ok
// SIG undefined FUN_1473f9236(void)

void FUN_1473f9236(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FUN_1400020a8();
  }
  FUN_1473f1ef4(param_1 + 0xa8);
  FUN_140540150(param_1);
  return;
}



// FUNCTION 1473f9268 FUN_1473f9268 body=50 status=ok
// SIG undefined FUN_1473f9268(void)

void FUN_1473f9268(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FUN_1400020a8();
  }
  FUN_1473f1ef4(param_1 + 0xa8);
  FUN_140540150(param_1);
  return;
}



// FUNCTION 1473f929a FUN_1473f929a body=50 status=ok
// SIG undefined FUN_1473f929a(void)

void FUN_1473f929a(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FUN_1400020a8();
  }
  FUN_1473f1ef4(param_1 + 0xa8);
  FUN_140540150(param_1);
  return;
}



// FUNCTION 1473f92cc FUN_1473f92cc body=50 status=ok
// SIG undefined FUN_1473f92cc(void)

void FUN_1473f92cc(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_1400020a8();
  }
  FUN_1473f1ef4(param_1 + 0xb0);
  FUN_140540150(param_1);
  return;
}



// FUNCTION 1473f92fe FUN_1473f92fe body=342 status=ok
// SIG undefined FUN_1473f92fe(void)

void FUN_1473f92fe(void)

{
  uint *puVar1;
  uint uVar2;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  undefined *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined2 local_38;
  undefined8 local_30;
  undefined *local_28;
  uint local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_30 = 0x100000000;
  local_28 = &DAT_14ca7c408;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (DAT_14ca7c420 != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = local_20;
  iStack_54 = iStack_1c;
  local_50 = local_18;
  local_4c = local_14;
  local_68 = local_30;
  local_60 = local_28;
  local_70 = &DAT_14ca7c3f8;
  local_48 = &DAT_14ca7c3f8;
  local_40 = &DAT_14ca7c3f8;
  local_38 = 0;
  if (iStack_1c < *(int *)(local_28 + 0x18)) {
    do {
      LOCK();
      puVar1 = (uint *)(*(longlong *)(*local_70 + 0x20 + (longlong)iStack_54 * 0x30) + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < *(int *)(local_60 + 0x18));
    if (((local_38 & 1) != 0) && (local_38._1_1_ == '\x01')) {
      FUN_147402014(local_40,*(int *)(local_40 + 1) - *(int *)((longlong)local_40 + 0x34));
    }
  }
  FUN_147402216();
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473f9456 FUN_1473f9456 body=666 status=ok
// SIG undefined FUN_1473f9456(void)

undefined8 * FUN_1473f9456(undefined8 param_1,undefined8 *param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong lVar7;
  byte *pbVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined1 auStack_78 [40];
  byte *local_50;
  byte *local_48;
  byte **local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = FUN_1406e99b6(param_3);
  iVar4 = FUN_1474023c4(uVar3,param_3);
  if ((iVar4 != -1) && (lVar7 = (longlong)iVar4 * 0x30 + DAT_14ca7c3f8, lVar7 != 0)) {
    pbVar8 = *(byte **)(lVar7 + 0x20);
    goto LAB_1473f94a3;
  }
  pbVar8 = (byte *)FUN_14001cc68(0x38,0x10);
  pbVar8[8] = 0;
  pbVar8[9] = 0;
  pbVar8[10] = 0;
  pbVar8[0xb] = 0;
  pbVar8[0xc] = 1;
  pbVar8[0xd] = pbVar8[0xd] | 3;
  *(undefined ***)pbVar8 = &PTR_FUN_14a3718b0;
  pbVar8[0x30] = 0;
  pbVar8[0x31] = 0;
  pbVar8[0x32] = 0;
  pbVar8[0x33] = 0;
  pbVar8[0x34] = 7;
  pbVar8[0x35] = 2;
  pbVar8[0x36] = 0;
  pbVar8[0x37] = 0;
  uVar5 = 0x2901;
  uVar3 = 0x2901;
  if ((byte)(param_3[1] - 1) < 3) {
    uVar3 = *(undefined4 *)(&DAT_14a374c90 + (ulonglong)(byte)(param_3[1] - 1) * 4);
  }
  *(undefined4 *)(pbVar8 + 0x14) = uVar3;
  if ((byte)(param_3[2] - 1) < 3) {
    uVar5 = *(undefined4 *)(&DAT_14a374c90 + (ulonglong)(byte)(param_3[2] - 1) * 4);
  }
  *(undefined4 *)(pbVar8 + 0x18) = uVar5;
  uVar3 = 0x2901;
  if ((byte)(param_3[3] - 1) < 3) {
    uVar3 = *(undefined4 *)(&DAT_14a374c90 + (ulonglong)(byte)(param_3[3] - 1) * 4);
  }
  *(undefined4 *)(pbVar8 + 0x1c) = uVar3;
  *(int *)(pbVar8 + 0x20) = (int)*(float *)(param_3 + 4);
  pbVar8[0x2c] = 1;
  pbVar8[0x2d] = 0;
  pbVar8[0x2e] = 0;
  pbVar8[0x2f] = 0;
  bVar1 = param_3[0x18];
  bVar2 = *param_3;
  local_50 = pbVar8;
  if (bVar2 - 3 < 2) {
    uVar3 = 0x2601;
    if (bVar1 == 0) {
      uVar3 = 0x2703;
    }
    pbVar8[0x24] = 1;
    pbVar8[0x25] = 0x26;
    pbVar8[0x26] = 0;
    pbVar8[0x27] = 0;
    *(undefined4 *)(pbVar8 + 0x28) = uVar3;
    uVar12 = DAT_14c760d4c;
    uVar6 = FUN_144abc9cb(*(undefined4 *)(param_3 + 0x10));
    if (uVar6 < uVar12) {
      uVar12 = uVar6;
    }
    *(uint *)(pbVar8 + 0x2c) = uVar12;
  }
  else {
    if (bVar2 == 1) {
      uVar9 = 0x270100002601;
    }
    else {
      if (bVar2 == 2) {
        pbVar8[0x24] = 1;
        pbVar8[0x25] = 0x26;
        pbVar8[0x26] = 0;
        pbVar8[0x27] = 0;
        uVar3 = 0x2601;
        if (bVar1 == 0) {
          uVar3 = 0x2703;
        }
        *(undefined4 *)(pbVar8 + 0x28) = uVar3;
        goto LAB_1473f9602;
      }
      uVar9 = 0x270000002600;
    }
    *(undefined8 *)(pbVar8 + 0x24) = uVar9;
  }
LAB_1473f9602:
  uVar3 = 0;
  if (bVar1 != 0) {
    pbVar8[0x34] = 1;
    pbVar8[0x35] = 2;
    pbVar8[0x36] = 0;
    pbVar8[0x37] = 0;
    uVar3 = 0x884e;
  }
  *(undefined4 *)(pbVar8 + 0x30) = uVar3;
  if ((DAT_14ca79c3c != 0) && (*(int *)(pbVar8 + 0x28) == 0x2703)) {
    pbVar8[0x28] = 1;
    pbVar8[0x29] = 0x27;
    pbVar8[0x2a] = 0;
    pbVar8[0x2b] = 0;
  }
  pbVar8[0x10] = 0;
  pbVar8[0x11] = 0;
  pbVar8[0x12] = 0;
  pbVar8[0x13] = 0;
  local_48 = pbVar8;
  if (DAT_14ca85164 == '\x01') {
    FUN_1431d5910(&local_48);
  }
  else {
    puVar10 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    puVar11 = puVar10 + 3;
    if (DAT_14ca85108 < puVar11) {
      FUN_140023dd8(&DAT_14ca85100,0x20);
      puVar10 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
      puVar11 = puVar10 + 3;
    }
    DAT_14ca85160 = DAT_14ca85160 + 1;
    DAT_14ca85100 = puVar11;
    *DAT_14ca85130 = puVar10;
    DAT_14ca85130 = puVar10 + 1;
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_14a374b10;
    puVar10[2] = pbVar8;
  }
  LOCK();
  *(int *)(pbVar8 + 8) = *(int *)(pbVar8 + 8) + 1;
  UNLOCK();
  local_40 = &local_50;
  local_48 = param_3;
  FUN_147402446(local_34);
  pbVar8 = local_50;
LAB_1473f94a3:
  *param_2 = pbVar8;
  if (pbVar8 != (byte *)0x0) {
    LOCK();
    *(int *)(pbVar8 + 8) = *(int *)(pbVar8 + 8) + 1;
    UNLOCK();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473f96f2 FUN_1473f96f2 body=176 status=ok
// SIG undefined FUN_1473f96f2(void)

undefined8 * FUN_1473f96f2(undefined8 param_1,undefined8 *param_2,char *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  *(undefined4 *)(puVar1 + 1) = 0;
  *(undefined1 *)((longlong)puVar1 + 0xc) = 2;
  *(byte *)((longlong)puVar1 + 0xd) = *(byte *)((longlong)puVar1 + 0xd) | 3;
  *puVar1 = &PTR_FUN_14a374920;
  if (param_3[1] == '\x02') {
    uVar2 = DAT_14ca7a390 ^ 0x405;
  }
  else {
    uVar2 = 0;
    if (param_3[1] == '\x01') {
      uVar2 = DAT_14ca7a390 | 0x404;
    }
  }
  *(uint *)((longlong)puVar1 + 0x14) = uVar2;
  iVar3 = 0x1b00;
  if (*param_3 != '\0') {
    iVar3 = (*param_3 != '\x01') + 0x1b01;
  }
  *(int *)(puVar1 + 2) = iVar3;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)((longlong)puVar1 + 0x1c) = *(undefined4 *)(param_3 + 8);
  *(char *)(puVar1 + 4) = param_3[0xc];
  *param_2 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1473f9824 FUN_1473f9824 body=404 status=ok
// SIG undefined FUN_1473f9824(void)

undefined8 * FUN_1473f9824(undefined8 param_1,undefined8 *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  *(undefined4 *)(puVar2 + 1) = 0;
  *(undefined1 *)((longlong)puVar2 + 0xc) = 3;
  *(byte *)((longlong)puVar2 + 0xd) = *(byte *)((longlong)puVar2 + 0xd) | 3;
  *puVar2 = &PTR_FUN_14a374930;
  uVar5 = (ulonglong)(byte)param_3[1];
  uVar1 = *param_3;
  uVar3 = 0x207;
  uVar6 = 0x207;
  uVar4 = 1;
  if (uVar5 == 7) {
    uVar4 = uVar1;
  }
  *(undefined1 *)(puVar2 + 2) = uVar4;
  *(undefined1 *)((longlong)puVar2 + 0x11) = uVar1;
  if (uVar5 < 7) {
    uVar6 = *(undefined4 *)(&DAT_14a374c9c + uVar5 * 4);
  }
  *(undefined4 *)((longlong)puVar2 + 0x14) = uVar6;
  uVar1 = param_3[7];
  uVar4 = 1;
  if (param_3[2] == '\0') {
    uVar4 = uVar1;
  }
  *(undefined1 *)(puVar2 + 3) = uVar4;
  *(undefined1 *)((longlong)puVar2 + 0x19) = uVar1;
  if ((ulonglong)(byte)param_3[3] < 7) {
    uVar3 = *(undefined4 *)(&DAT_14a374c9c + (ulonglong)(byte)param_3[3] * 4);
  }
  *(undefined4 *)((longlong)puVar2 + 0x1c) = uVar3;
  uVar3 = 0x1e00;
  uVar6 = 0x1e00;
  if ((byte)(param_3[4] - 1) < 7) {
    uVar6 = *(undefined4 *)(&DAT_14a374cb8 + (ulonglong)(byte)(param_3[4] - 1) * 4);
  }
  *(undefined4 *)(puVar2 + 4) = uVar6;
  if ((byte)(param_3[5] - 1) < 7) {
    uVar3 = *(undefined4 *)(&DAT_14a374cb8 + (ulonglong)(byte)(param_3[5] - 1) * 4);
  }
  *(undefined4 *)((longlong)puVar2 + 0x24) = uVar3;
  uVar6 = 0x1e00;
  if ((byte)(param_3[6] - 1) < 7) {
    uVar6 = *(undefined4 *)(&DAT_14a374cb8 + (ulonglong)(byte)(param_3[6] - 1) * 4);
  }
  *(undefined4 *)(puVar2 + 5) = uVar6;
  uVar6 = 0x207;
  if ((ulonglong)(byte)param_3[8] < 7) {
    uVar6 = *(undefined4 *)(&DAT_14a374c9c + (ulonglong)(byte)param_3[8] * 4);
  }
  *(undefined4 *)((longlong)puVar2 + 0x2c) = uVar6;
  uVar3 = 0x1e00;
  uVar6 = 0x1e00;
  if ((byte)(param_3[9] - 1) < 7) {
    uVar6 = *(undefined4 *)(&DAT_14a374cb8 + (ulonglong)(byte)(param_3[9] - 1) * 4);
  }
  *(undefined4 *)(puVar2 + 6) = uVar6;
  if ((byte)(param_3[10] - 1) < 7) {
    uVar3 = *(undefined4 *)(&DAT_14a374cb8 + (ulonglong)(byte)(param_3[10] - 1) * 4);
  }
  *(undefined4 *)((longlong)puVar2 + 0x34) = uVar3;
  uVar6 = 0x1e00;
  if ((byte)(param_3[0xb] - 1) < 7) {
    uVar6 = *(undefined4 *)(&DAT_14a374cb8 + (ulonglong)(byte)(param_3[0xb] - 1) * 4);
  }
  *(undefined4 *)(puVar2 + 7) = uVar6;
  *(uint *)((longlong)puVar2 + 0x3c) = (uint)(byte)param_3[0xc];
  *(uint *)(puVar2 + 8) = (uint)(byte)param_3[0xd];
  *param_2 = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1473f99b8 FUN_1473f99b8 body=777 status=ok
// SIG undefined FUN_1473f99b8(void)

undefined8 FUN_1473f99b8(longlong param_1,undefined1 *param_2)

{
  int iVar1;
  uint3 uVar2;
  uint7 uVar3;
  undefined1 uVar5;
  uint7 uVar4;
  
  param_2[7] = *(undefined1 *)(param_1 + 0x19);
  param_2[2] = *(undefined1 *)(param_1 + 0x18);
  *param_2 = *(undefined1 *)(param_1 + 0x11);
  param_2[0xc] = *(undefined1 *)(param_1 + 0x3c);
  param_2[0xd] = *(undefined1 *)(param_1 + 0x40);
  uVar5 = (undefined1)(0x3050201040006 >> ((char)*(int *)(param_1 + 0x14) * '\b' & 0x3fU));
  if (6 < *(int *)(param_1 + 0x14) - 0x200U) {
    uVar5 = 7;
  }
  param_2[1] = uVar5;
  uVar5 = (undefined1)(0x3050201040006 >> ((char)*(int *)(param_1 + 0x1c) * '\b' & 0x3fU));
  if (6 < *(int *)(param_1 + 0x1c) - 0x200U) {
    uVar5 = 7;
  }
  param_2[3] = uVar5;
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 < 0x1e02) {
    if (iVar1 == 0) {
      uVar5 = 1;
    }
    else if (iVar1 == 0x150a) {
      uVar5 = 5;
    }
    else {
      if (iVar1 != 0x1e01) goto LAB_1473f9a86;
      uVar5 = 2;
    }
  }
  else if (iVar1 < 0x8507) {
    if (iVar1 == 0x1e02) {
      uVar5 = 3;
    }
    else if (iVar1 == 0x1e03) {
      uVar5 = 4;
    }
    else {
LAB_1473f9a86:
      uVar5 = 0;
    }
  }
  else if (iVar1 == 0x8507) {
    uVar5 = 6;
  }
  else {
    if (iVar1 != 0x8508) goto LAB_1473f9a86;
    uVar5 = 7;
  }
  param_2[4] = uVar5;
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 < 0x1e02) {
    if (iVar1 == 0) {
      uVar5 = 1;
    }
    else if (iVar1 == 0x150a) {
      uVar5 = 5;
    }
    else {
      if (iVar1 != 0x1e01) goto LAB_1473f9aee;
      uVar5 = 2;
    }
  }
  else if (iVar1 < 0x8507) {
    if (iVar1 == 0x1e02) {
      uVar5 = 3;
    }
    else if (iVar1 == 0x1e03) {
      uVar5 = 4;
    }
    else {
LAB_1473f9aee:
      uVar5 = 0;
    }
  }
  else if (iVar1 == 0x8507) {
    uVar5 = 6;
  }
  else {
    if (iVar1 != 0x8508) goto LAB_1473f9aee;
    uVar5 = 7;
  }
  param_2[5] = uVar5;
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 < 0x1e02) {
    if (iVar1 == 0) {
      uVar5 = 1;
    }
    else if (iVar1 == 0x150a) {
      uVar5 = 5;
    }
    else {
      if (iVar1 != 0x1e01) goto LAB_1473f9b56;
      uVar5 = 2;
    }
  }
  else if (iVar1 < 0x8507) {
    if (iVar1 == 0x1e02) {
      uVar5 = 3;
    }
    else if (iVar1 == 0x1e03) {
      uVar5 = 4;
    }
    else {
LAB_1473f9b56:
      uVar5 = 0;
    }
  }
  else if (iVar1 == 0x8507) {
    uVar5 = 6;
  }
  else {
    if (iVar1 != 0x8508) goto LAB_1473f9b56;
    uVar5 = 7;
  }
  param_2[6] = uVar5;
  uVar5 = 7;
  if (*(int *)(param_1 + 0x2c) - 0x200U < 7) {
    uVar5 = (undefined1)(0x3050201040006 >> ((char)*(int *)(param_1 + 0x2c) * '\b' & 0x3fU));
  }
  param_2[8] = uVar5;
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 < 0x1e02) {
    if (iVar1 == 0) {
      uVar5 = 1;
    }
    else if (iVar1 == 0x150a) {
      uVar5 = 5;
    }
    else {
      if (iVar1 != 0x1e01) goto LAB_1473f9be4;
      uVar5 = 2;
    }
  }
  else if (iVar1 < 0x8507) {
    if (iVar1 == 0x1e02) {
      uVar5 = 3;
    }
    else if (iVar1 == 0x1e03) {
      uVar5 = 4;
    }
    else {
LAB_1473f9be4:
      uVar5 = 0;
    }
  }
  else if (iVar1 == 0x8507) {
    uVar5 = 6;
  }
  else {
    if (iVar1 != 0x8508) goto LAB_1473f9be4;
    uVar5 = 7;
  }
  param_2[9] = uVar5;
  iVar1 = *(int *)(param_1 + 0x34);
  if (iVar1 < 0x1e02) {
    if (iVar1 == 0) {
      uVar5 = 1;
    }
    else if (iVar1 == 0x150a) {
      uVar5 = 5;
    }
    else {
      if (iVar1 != 0x1e01) goto LAB_1473f9c4c;
      uVar5 = 2;
    }
  }
  else if (iVar1 < 0x8507) {
    if (iVar1 == 0x1e02) {
      uVar5 = 3;
    }
    else if (iVar1 == 0x1e03) {
      uVar5 = 4;
    }
    else {
LAB_1473f9c4c:
      uVar5 = 0;
    }
  }
  else if (iVar1 == 0x8507) {
    uVar5 = 6;
  }
  else {
    if (iVar1 != 0x8508) goto LAB_1473f9c4c;
    uVar5 = 7;
  }
  param_2[10] = uVar5;
  iVar1 = *(int *)(param_1 + 0x38);
  uVar2 = (uint3)((uint)iVar1 >> 8);
  uVar3 = (uint7)uVar2;
  uVar4 = (uint7)uVar2;
  if (iVar1 < 0x1e02) {
    if (iVar1 == 0) {
      uVar5 = 1;
      goto LAB_1473f9cba;
    }
    if (iVar1 == 0x150a) {
      uVar5 = 5;
      goto LAB_1473f9cba;
    }
    if (iVar1 == 0x1e01) {
      uVar5 = 2;
      uVar4 = uVar3;
      goto LAB_1473f9cba;
    }
  }
  else if (iVar1 < 0x8507) {
    if (iVar1 == 0x1e02) {
      uVar5 = 3;
      uVar4 = uVar3;
      goto LAB_1473f9cba;
    }
    if (iVar1 == 0x1e03) {
      uVar5 = 4;
      goto LAB_1473f9cba;
    }
  }
  else {
    if (iVar1 == 0x8507) {
      uVar5 = 6;
      uVar4 = uVar3;
      goto LAB_1473f9cba;
    }
    if (iVar1 == 0x8508) {
      uVar5 = 7;
      uVar4 = uVar3;
      goto LAB_1473f9cba;
    }
  }
  uVar5 = 0;
  uVar4 = 0;
LAB_1473f9cba:
  param_2[0xb] = uVar5;
  return CONCAT71(uVar4,1);
}



// FUNCTION 1473f9cc2 FUN_1473f9cc2 body=474 status=ok
// SIG undefined FUN_1473f9cc2(void)

longlong * FUN_1473f9cc2(undefined8 param_1,longlong *param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte bVar9;
  undefined4 uVar10;
  bool bVar11;
  
  lVar4 = FUN_14001cc68(0x170,0x10);
  FUN_1473f9e9c(lVar4,param_3);
  *(byte *)(lVar4 + 0x16c) = param_3[0x39];
  bVar1 = param_3[0x38];
  lVar5 = 0x6c;
  pbVar7 = param_3;
  do {
    pbVar8 = param_3;
    if (bVar1 != 0) {
      pbVar8 = pbVar7;
    }
    bVar2 = *pbVar8;
    if ((longlong)(char)bVar2 == 0) {
      bVar11 = true;
      if ((((pbVar8[2] == 0) && (pbVar8[1] == 1)) && (pbVar8[3] == 0)) && (pbVar8[5] == 0)) {
        bVar11 = pbVar8[4] != 1;
      }
      *(bool *)(lVar4 + -0x20 + lVar5) = bVar11;
      uVar6 = 0x8006;
    }
    else {
      *(undefined1 *)(lVar4 + -0x20 + lVar5) = 1;
      uVar6 = 0x8006;
      if (bVar2 < 5) {
        uVar6 = *(undefined4 *)(&DAT_14a374cd0 + (longlong)(char)bVar2 * 4);
      }
    }
    *(undefined4 *)(lVar4 + -0x1c + lVar5) = uVar6;
    bVar3 = pbVar8[1];
    bVar2 = bVar3 - 1;
    uVar10 = 0;
    uVar6 = 0;
    if (bVar2 < 0xb) {
      uVar6 = *(undefined4 *)(&DAT_14a374ce4 + (ulonglong)bVar2 * 4);
    }
    *(undefined4 *)(lVar4 + -0x18 + lVar5) = uVar6;
    bVar2 = pbVar8[2];
    bVar9 = bVar2 - 1;
    if (bVar9 < 0xb) {
      uVar10 = *(undefined4 *)(&DAT_14a374ce4 + (ulonglong)bVar9 * 4);
    }
    *(undefined4 *)(lVar4 + -0x14 + lVar5) = uVar10;
    bVar9 = pbVar8[5];
    bVar11 = true;
    if (bVar9 == bVar2) {
      bVar11 = pbVar8[4] != bVar3;
    }
    *(bool *)(lVar4 + -0x10 + lVar5) = bVar11;
    uVar6 = 0x8006;
    if ((byte)(pbVar8[3] - 1) < 4) {
      uVar6 = *(undefined4 *)(&DAT_14a374cd4 + (ulonglong)(byte)(pbVar8[3] - 1) * 4);
    }
    *(undefined4 *)(lVar4 + -0xc + lVar5) = uVar6;
    uVar10 = 0;
    uVar6 = 0;
    if ((byte)(pbVar8[4] - 1) < 0xb) {
      uVar6 = *(undefined4 *)(&DAT_14a374ce4 + (ulonglong)(byte)(pbVar8[4] - 1) * 4);
    }
    *(undefined4 *)(lVar4 + -8 + lVar5) = uVar6;
    bVar9 = bVar9 - 1;
    if (bVar9 < 0xb) {
      uVar10 = *(undefined4 *)(&DAT_14a374ce4 + (ulonglong)bVar9 * 4);
    }
    *(undefined4 *)(lVar4 + -4 + lVar5) = uVar10;
    bVar2 = pbVar8[6];
    *(uint *)(lVar4 + lVar5) =
         bVar2 & 8 | bVar2 & 4 | bVar2 & 2 | *(uint *)(lVar4 + lVar5) & 0xfffffff0 | bVar2 & 1;
    lVar5 = lVar5 + 0x24;
    pbVar7 = pbVar7 + 7;
  } while (lVar5 != 0x18c);
  *param_2 = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1473f9e9c FUN_1473f9e9c body=119 status=ok
// SIG undefined FUN_1473f9e9c(void)

void FUN_1473f9e9c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 4;
  *(byte *)((longlong)param_1 + 0xd) = *(byte *)((longlong)param_1 + 0xd) | 3;
  *param_1 = &PTR_FUN_14a374940;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_2[4];
  uVar5 = param_2[5];
  uVar6 = *(undefined8 *)((longlong)param_2 + 0x2a);
  uVar7 = *(undefined8 *)((longlong)param_2 + 0x32);
  param_1[2] = *param_2;
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  param_1[5] = uVar3;
  param_1[6] = uVar4;
  param_1[7] = uVar5;
  *(undefined8 *)((longlong)param_1 + 0x3a) = uVar6;
  *(undefined8 *)((longlong)param_1 + 0x42) = uVar7;
  *(undefined1 *)((longlong)param_1 + 0x16c) = 0;
  lVar8 = 0x6c;
  do {
    *(undefined1 *)((longlong)param_1 + lVar8 + -0x20) = 0;
    *(undefined8 *)((longlong)param_1 + lVar8 + -0xc) = 0;
    *(undefined4 *)((longlong)param_1 + lVar8 + -4) = 0;
    *(undefined8 *)((longlong)param_1 + lVar8 + -0x1c) = 0;
    *(undefined8 *)((longlong)param_1 + lVar8 + -0x17) = 0;
    *(byte *)((longlong)param_1 + lVar8) = *(byte *)((longlong)param_1 + lVar8) & 0xf0;
    lVar8 = lVar8 + 0x24;
  } while (lVar8 != 0x18c);
  return;
}



// FUNCTION 1473f9f14 FUN_1473f9f14 body=237 status=ok
// SIG undefined FUN_1473f9f14(void)

void FUN_1473f9f14(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  FUN_1473ef768();
  puVar1 = (undefined8 *)FUN_144a7d36f(0x428);
  *puVar1 = 6;
  lVar2 = 8;
  do {
    FUN_1473ef344((longlong)puVar1 + lVar2);
    lVar2 = lVar2 + 0xb0;
  } while (lVar2 != 0x428);
  *(undefined8 **)(param_1 + 0x3b8) = puVar1 + 1;
  FUN_1473ef36a(puVar1 + 1,DAT_14c760d10 << 4);
  FUN_1473ef36a(*(longlong *)(param_1 + 0x3b8) + 0xb0,DAT_14c760d14 << 4);
  FUN_1473ef36a(*(longlong *)(param_1 + 0x3b8) + 0x160,DAT_14c760d18 << 4);
  *(undefined8 *)(param_1 + 0x3b0) = 0;
  FUN_1473ef36a(*(longlong *)(param_1 + 0x3b8) + 0x370,DAT_14c760d1c << 4);
  *(undefined2 *)(param_1 + 0x7c4) = 0x101;
  *(undefined4 *)(param_1 + 0x7c0) = 0x1010101;
  *(undefined8 *)(param_1 + 0x7c8) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 2000) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x7c6) = 1;
  return;
}



// FUNCTION 1473fa002 FUN_1473fa002 body=46 status=ok
// SIG undefined FUN_1473fa002(void)

undefined8 *
FUN_1473fa002(undefined8 param_1,undefined8 *param_2,longlong param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1431eab2a(param_3,param_4,*(byte *)(param_3 + 0x30) - 1);
  *param_2 = uVar1;
  *(undefined4 *)(param_2 + 1) = 1;
  return param_2;
}



// FUNCTION 1473fa088 FUN_1473fa088 body=601 status=ok
// SIG undefined FUN_1473fa088(void)

undefined8 * FUN_1473fa088(undefined8 *param_1,longlong *param_2,undefined8 *param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  undefined2 *puVar9;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined8 local_7c;
  undefined2 local_74;
  undefined2 local_72;
  undefined1 local_70;
  undefined1 local_6f;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined1 local_6c;
  undefined1 local_6b;
  undefined4 local_68;
  undefined2 *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(param_3 + 1) == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  else {
    puVar9 = (undefined2 *)*param_3;
  }
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 8))(param_2);
  local_6e = *(undefined1 *)((longlong)puVar2 + 0x32);
  local_a0 = *puVar2;
  local_6d = *(undefined1 *)((longlong)puVar2 + 0x33);
  local_6c = *(undefined1 *)((longlong)puVar2 + 0x34);
  local_7c = *(undefined8 *)((longlong)puVar2 + 0x24);
  local_74 = *(undefined2 *)((longlong)puVar2 + 0x2c);
  local_72 = *(undefined2 *)((longlong)puVar2 + 0x2e);
  local_70 = *(undefined1 *)(puVar2 + 6);
  local_6f = *(undefined1 *)((longlong)puVar2 + 0x31);
  local_88 = *(undefined4 *)(puVar2 + 3);
  local_98 = *(undefined4 *)(puVar2 + 1);
  uStack_94 = *(undefined4 *)((longlong)puVar2 + 0xc);
  uStack_90 = *(undefined4 *)(puVar2 + 2);
  uStack_8c = *(undefined4 *)((longlong)puVar2 + 0x14);
  local_80 = *(undefined4 *)(puVar2 + 4);
  local_6b = *(undefined1 *)((longlong)puVar2 + 0x35);
  local_84 = *(undefined4 *)((longlong)puVar2 + 0x1c);
  local_68 = 0x70;
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = puVar9;
  FUN_1400f7c82(param_1);
  param_1[0xc] = 0;
  *param_1 = &PTR_FUN_14a3725c0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)((longlong)param_2 + 0x6c);
  *(int *)(param_1 + 0xe) = (int)param_2[0xe];
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0x20;
  bVar4 = *(byte *)((longlong)param_2 + 0xb4) & 1;
  bVar1 = *(byte *)((longlong)param_1 + 0xb4);
  *(byte *)((longlong)param_1 + 0xb4) = bVar1 & 0xfc | bVar4;
  bVar5 = *(byte *)((longlong)param_2 + 0xb4) & 4;
  *(byte *)((longlong)param_1 + 0xb4) = bVar1 & 0xf8 | bVar4 | bVar5;
  bVar6 = *(byte *)((longlong)param_2 + 0xb4) & 8;
  *(byte *)((longlong)param_1 + 0xb4) = bVar1 & 0xf0 | bVar4 | bVar5 | bVar6;
  bVar7 = *(byte *)((longlong)param_2 + 0xb4) & 0x10;
  *(byte *)((longlong)param_1 + 0xb4) = bVar1 & 0xe0 | bVar4 | bVar5 | bVar6 | bVar7;
  bVar8 = *(byte *)((longlong)param_2 + 0xb4) & 0x20;
  *(byte *)((longlong)param_1 + 0xb4) = bVar1 & 0x80 | bVar4 | bVar5 | bVar6 | bVar7 | bVar8 | 0x40;
  *(byte *)((longlong)param_1 + 0xb4) =
       bVar4 | bVar5 | bVar6 | bVar7 | bVar8 | 0x40 | *(byte *)((longlong)param_2 + 0xb4) & 0x80;
  if (DAT_14ca85164 == '\x01') {
    if ((param_2[0xf] != 0) && ((*(byte *)(param_2[0xf] + 0x10) & 1) == 0)) {
      FUN_1431cefae(param_2,0);
    }
    *(int *)(param_1 + 0xd) = (int)param_2[0xd];
  }
  else {
    puVar3 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    puVar2 = puVar3 + 4;
    if (DAT_14ca85108 < puVar2) {
      FUN_140023dd8(&DAT_14ca85100,0x28);
      puVar3 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
      puVar2 = puVar3 + 4;
    }
    DAT_14ca85160 = DAT_14ca85160 + 1;
    DAT_14ca85100 = puVar2;
    *DAT_14ca85130 = puVar3;
    DAT_14ca85130 = puVar3 + 1;
    puVar3[1] = 0;
    *puVar3 = &PTR_FUN_14a374b18;
    puVar3[2] = param_1;
    puVar3[3] = param_2;
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473fa2e2 FUN_1473fa2e2 body=228 status=ok
// SIG undefined FUN_1473fa2e2(void)

undefined8 * FUN_1473fa2e2(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  
  FUN_1400f7c82();
  param_1[0xc] = 0;
  *param_1 = &PTR_FUN_14a3725c0;
  *(undefined4 *)(param_1 + 0xd) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 100);
  param_1[0x14] = 0;
  param_1[0x15] = 0x2000000000;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0x68);
  bVar2 = *(byte *)(param_2 + 0x6c) >> 5 & 1;
  bVar1 = *(byte *)((longlong)param_1 + 0xb4);
  *(byte *)((longlong)param_1 + 0xb4) = bVar1 & 0xfc | bVar2;
  bVar3 = *(byte *)(param_2 + 0x6c) & 4;
  *(byte *)((longlong)param_1 + 0xb4) = bVar1 & 0xf8 | bVar2 | bVar3;
  bVar4 = (*(byte *)(param_2 + 0x6c) & 1) << 3;
  *(byte *)((longlong)param_1 + 0xb4) = bVar1 & 0xf0 | bVar2 | bVar3 | bVar4;
  bVar5 = (*(byte *)(param_2 + 0x6c) & 2) << 3;
  *(byte *)((longlong)param_1 + 0xb4) = bVar1 & 0xe0 | bVar2 | bVar3 | bVar4 | bVar5;
  bVar6 = (*(byte *)(param_2 + 0x6c) & 8) << 2;
  *(byte *)((longlong)param_1 + 0xb4) = bVar1 & 0x80 | bVar2 | bVar3 | bVar4 | bVar5 | bVar6 | 0x40;
  *(byte *)((longlong)param_1 + 0xb4) =
       bVar2 | bVar3 | bVar4 | bVar5 | bVar6 | 0x40 | *(char *)(param_2 + 0x6c) * '\x02' & 0x80U;
  return param_1;
}



// FUNCTION 1473fa3c6 FUN_1473fa3c6 body=307 status=ok
// SIG undefined FUN_1473fa3c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1473fa3c6(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_1;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca7a398);
    if (*(int *)(*(longlong *)(param_1 + 0x78) + 0x14) != -1) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14ca7fb10) {
        FUN_144b3d300(&DAT_14ca7fb10);
        if (DAT_14ca7fb10 == -1) {
          DAT_14ca7fac8 = 0;
          _DAT_14ca7fad0 = 0;
          DAT_14ca7faa8 = 0;
          _DAT_14ca7fab0 = 0;
          _DAT_14ca7fad4 = 0xffffffff00000080;
          DAT_14ca7fadc = 0;
          DAT_14ca7fae8 = 0;
          DAT_14ca7faf0 = 0;
          DAT_14ca7faf8 = 0;
          DAT_14ca7fb00 = 0;
          DAT_14ca7fb08 = 10000;
          FUN_147400fb2(&DAT_14ca7faa8,10000);
          atexit((_func_5014 *)&LAB_1431d56d4);
          _Init_thread_footer(&DAT_14ca7fb10);
        }
      }
      FUN_1473fdad2(&local_18);
      *(undefined4 *)(*(longlong *)(param_1 + 0x78) + 0x14) = 0xffffffff;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473fa50a FUN_1473fa50a body=246 status=ok
// SIG undefined FUN_1473fa50a(void)

void FUN_1473fa50a(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x14210);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x14208);
    lVar3 = 0;
    do {
      if (*(int *)(lVar2 + 0x14 + lVar3) == param_2) {
        *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0;
      }
      lVar3 = lVar3 + 0x28;
    } while ((longlong)iVar1 * 0x28 != lVar3);
  }
  iVar1 = *(int *)(param_1 + 0x148e0);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x148d8);
    lVar3 = 0;
    do {
      if (*(int *)(lVar2 + 0x14 + lVar3) == param_2) {
        *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0;
      }
      lVar3 = lVar3 + 0x28;
    } while ((longlong)iVar1 * 0x28 != lVar3);
  }
  iVar1 = *(int *)(param_1 + 0x138);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x130);
    lVar3 = 0;
    do {
      if (*(int *)(lVar2 + 0x14 + lVar3) == param_2) {
        *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0;
      }
      lVar3 = lVar3 + 0x28;
    } while ((longlong)iVar1 * 0x28 != lVar3);
  }
  FUN_1474029ea(param_1 + 0x14fb8,param_2);
  lVar2 = *(longlong *)(param_1 + 0x398);
  if (lVar2 != 0) {
    if ((*(longlong *)(lVar2 + 0x78) != 0) &&
       ((*(byte *)(*(longlong *)(lVar2 + 0x78) + 0x10) & 1) == 0)) {
      FUN_1431cefae(lVar2,1);
    }
    if (*(int *)(lVar2 + 0x68) == param_2) {
      *(undefined8 *)(param_1 + 0x398) = 0;
    }
  }
  return;
}



// FUNCTION 1473fa600 FUN_1473fa600 body=468 status=ok
// SIG undefined FUN_1473fa600(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1473fa600(undefined8 param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  longlong local_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = (**(code **)(*param_2 + 8))(param_2);
  if ((*(byte *)(lVar3 + 2) & 4) == 0) {
    puVar7 = &DAT_14ca7fcb8;
    if (-1 < *(char *)((longlong)param_2 + 0xb4)) {
      puVar7 = &DAT_14ca7fb68;
    }
    (*(code *)*puVar7)(1,&local_4c);
    *(undefined4 *)(param_2 + 0xd) = local_4c;
    if ((param_2[0xf] == 0) || ((*(byte *)(param_2[0xf] + 0x10) & 1) != 0)) {
      FUN_1473fa7d6(param_1,param_2,param_3,param_4);
    }
    else {
      _DAT_14ca7c4d4 = _DAT_14ca7c4d4 + 1;
      lVar3 = (**(code **)(*param_2 + 8))(param_2);
      _DAT_14ca7c4d8 =
           _DAT_14ca7c4d8 + (uint)(byte)(&DAT_14ca79c50)[(ulonglong)*(byte *)(lVar3 + 0x33) * 0x14];
      local_58 = param_3;
      if (param_3 != 0) {
        uVar6 = (ulonglong)((uint)*(byte *)(lVar3 + 0x33) * 0x30);
        uVar1 = *(uint *)((longlong)&DAT_14c87341c + uVar6);
        uVar2 = *(uint *)((longlong)&DAT_14c873420 + uVar6);
        lVar3 = (**(code **)(*param_2 + 8))(param_2);
        if (*(char *)(lVar3 + 0x30) != '\0') {
          local_60 = (ulonglong)uVar1 - 1;
          local_68 = (ulonglong)uVar2 - 1;
          uVar5 = 0;
          uVar4 = 0;
          do {
            iVar9 = *(int *)(lVar3 + 0x24) >> ((byte)uVar4 & 0x1f);
            uVar10 = (ulonglong)(iVar9 + (uint)(iVar9 == 0)) + local_60;
            iVar9 = *(int *)(lVar3 + 0x28) >> ((byte)uVar4 & 0x1f);
            uVar8 = (ulonglong)(iVar9 + (uint)(iVar9 == 0)) + local_68;
            iVar9 = ((uint)((int)uVar8 - (int)(uVar8 % (ulonglong)uVar2)) / uVar2) *
                    ((uint)((int)uVar10 - (int)(uVar10 % (ulonglong)uVar1)) / uVar1) *
                    *(int *)((longlong)&DAT_14c873428 + uVar6) *
                    (uint)(ushort)(*(short *)(lVar3 + 0x2e) +
                                  (ushort)(*(short *)(lVar3 + 0x2e) == 0));
            FUN_1473fad36(param_2[0xf],uVar4,(ulonglong)uVar5 + local_58,iVar9);
            uVar5 = uVar5 + iVar9;
            uVar4 = uVar4 + 1;
          } while (uVar4 < *(byte *)(lVar3 + 0x30));
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473fa7d6 FUN_1473fa7d6 body=1375 status=ok
// SIG undefined FUN_1473fa7d6(void)

void FUN_1473fa7d6(longlong param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  HGLRC pHVar7;
  longlong lVar8;
  longlong lVar9;
  code *pcVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  undefined8 *puVar16;
  uint uVar17;
  undefined4 uVar18;
  ulonglong uVar19;
  undefined1 auStack_118 [32];
  uint local_f8;
  uint local_f0;
  uint local_e8;
  int local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  int local_bc;
  longlong *local_b8;
  int *local_b0;
  longlong local_a8;
  undefined8 local_a0;
  int **local_98;
  undefined8 local_90;
  int **local_88;
  uint *local_80;
  int **local_78;
  undefined8 *local_70;
  int *local_68;
  int local_60;
  uint local_5c;
  undefined8 local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  uVar14 = *(uint *)(param_2 + 0xd);
  local_a8 = param_3;
  local_5c = uVar14;
  local_58 = param_4;
  puVar6 = (uint *)(**(code **)(*param_2 + 8))(param_2);
  iVar13 = *(int *)((longlong)param_2 + 0x6c);
  lVar9 = (ulonglong)*(byte *)((longlong)puVar6 + 0x33) * 0x14;
  piVar1 = (int *)(&DAT_14ca79c40 + lVar9);
  uVar17 = *puVar6 >> 4 & 1;
  local_60 = iVar13;
  if (piVar1[uVar17] == 0) {
    local_f8 = uVar17;
    FUN_140033559(".\\Runtime/OpenGLDrv/Private/OpenGLTexture.cpp",0x213,
                  L"Texture format \'%s\' not supported (sRGB=%d).",
                  *(undefined8 *)
                   ((longlong)&DAT_14c873410 +
                   (ulonglong)((uint)*(byte *)((longlong)puVar6 + 0x33) * 0x30)));
  }
  lVar8 = *(longlong *)(param_1 + 0x14fa0);
  if (lVar8 == 0) {
    lVar15 = *(longlong *)(param_1 + 0x15008);
    local_bc = iVar13;
    pHVar7 = wglGetCurrentContext();
    lVar8 = param_1 + 0x14200;
    if (pHVar7 == *(HGLRC *)(lVar15 + 0x40)) {
      lVar8 = param_1 + 0x148d0;
    }
    *(longlong *)(param_1 + 0x14fa0) = lVar8;
    iVar13 = local_bc;
  }
  if (*(int *)(lVar8 + 0x44c) != 0) {
    (*DAT_14ca7fba8)(0x88ec,0);
    *(undefined4 *)(lVar8 + 0x44c) = 0;
  }
  if (*(char *)((longlong)param_2 + 0xb4) < '\0') {
    uVar19 = 0;
    goto LAB_1473faa61;
  }
  lVar15 = (longlong)DAT_14c760d20 + -1;
  if ((*(int *)(*(longlong *)(lVar8 + 8) + 0x10 + lVar15 * 0x28) != iVar13) ||
     (*(uint *)(*(longlong *)(lVar8 + 8) + 0x14 + lVar15 * 0x28) != uVar14)) {
    local_e8 = (uint)(byte)puVar6[0xc];
    local_f0 = 0;
    local_f8 = uVar14;
    FUN_1473e5556(param_1,lVar8,lVar15,iVar13);
  }
  if ((((&DAT_14ca79c51)[lVar9] == '\x01') && ((*puVar6 & 1) == 0)) || (*piVar1 == 0x8057)) {
    (*DAT_14ca7fd38)(iVar13,0x8e42,0x1905);
    (*DAT_14ca7fd38)(iVar13,0x8e44,0x1903);
  }
  lVar8 = (**(code **)(*param_2 + 8))(param_2);
  if (*(byte *)(lVar8 + 0x31) < 2) {
    uVar18 = 0x812f;
    if ((iVar13 != 0x8d65) && ((puVar6[9] & puVar6[9] - 1) == 0)) {
      uVar18 = 0x812f;
      if ((puVar6[10] & puVar6[10] - 1) == 0) {
        uVar18 = 0x2901;
      }
    }
    (*DAT_14ca7fd38)(iVar13,0x2802,uVar18);
    (*DAT_14ca7fd38)(iVar13,0x2803,uVar18);
    (*DAT_14ca7fd38)(iVar13,0x8072,uVar18);
    (*DAT_14ca7fd38)(iVar13,0x2800,0x2600);
    (*DAT_14ca7fd38)(iVar13,0x2801,(1 < (byte)puVar6[0xc] | 0x26) << 8);
    if (DAT_14ca7a3d0 == '\x01') {
      (*DAT_14ca7fd38)(iVar13,0x84fe,1);
    }
  }
  uVar19 = 0;
  (*DAT_14ca7fd38)(iVar13,0x813c,0);
  local_68 = (int *)((ulonglong)((byte)puVar6[0xc] - 1) << 0x20);
  local_80 = &local_5c;
  local_78 = &local_68;
  FUN_1473f4f46(param_1 + 0x14fb8,local_4c,&local_80,0);
  iVar13 = local_60;
  if (local_60 == 0x8d65) goto LAB_1473faa61;
  local_78 = (int **)&local_60;
  local_70 = &local_58;
  local_80 = puVar6;
  if (local_60 < 0x9009) {
    if (local_60 == 0x806f) {
      uVar14 = (uint)(ushort)puVar6[0xb];
LAB_1473fac0c:
      uVar3 = puVar6[9];
      uVar19 = (ulonglong)uVar3;
      uVar4 = puVar6[10];
      iVar5 = piVar1[uVar17];
      bVar2 = (byte)puVar6[0xc];
      local_b8 = param_2;
      local_b0 = piVar1;
      if (DAT_14ca7f940 == (code *)0x0) {
        if (bVar2 != 0) {
          local_bc = *(int *)(&DAT_14ca79c48 + lVar9);
          uVar18 = *(undefined4 *)(&DAT_14ca79c4c + lVar9);
          uVar17 = 0;
          do {
            bVar11 = (byte)uVar17;
            local_f0 = uVar14;
            if ((iVar13 != 0x8c1a) && (iVar13 != 0x9009)) {
              local_f0 = uVar14 >> (bVar11 & 0x1f);
              local_f0 = local_f0 + (local_f0 == 0);
            }
            iVar12 = (int)uVar4 >> (bVar11 & 0x1f);
            local_f8 = iVar12 + (uint)(iVar12 == 0);
            iVar12 = (int)uVar3 >> (bVar11 & 0x1f);
            local_e0 = local_bc;
            local_d0 = 0;
            local_e8 = 0;
            local_d8 = uVar18;
            (*DAT_14ca7fb78)(iVar13,uVar17,iVar5,iVar12 + (uint)(iVar12 == 0));
            uVar17 = uVar17 + 1;
          } while (bVar2 != uVar17);
        }
      }
      else {
        local_f8 = uVar4;
        local_f0 = uVar14;
        (*DAT_14ca7f940)(local_60,bVar2,iVar5,uVar19);
      }
      param_2 = local_b8;
      if (local_a8 == 0) goto LAB_1473fad2e;
      local_68 = local_b0;
      puVar16 = &local_a0;
      local_98 = &local_68;
      pcVar10 = FUN_1431d5b16;
    }
    else {
      if (local_60 == 0x8c1a) {
        uVar14 = (uint)*(ushort *)((longlong)puVar6 + 0x2e);
        goto LAB_1473fac0c;
      }
LAB_1473faba2:
      if (DAT_14ca7f938 != (code *)0x0) {
        local_f8 = puVar6[10];
        (*DAT_14ca7f938)(local_60,(byte)puVar6[0xc],piVar1[uVar17],puVar6[9]);
      }
      if (local_a8 == 0) goto LAB_1473fad2e;
      puVar16 = &local_90;
      pcVar10 = FUN_1431d5a74;
      local_88 = &local_68;
      local_68 = piVar1;
    }
    *puVar16 = pcVar10;
    FUN_1431cf6cc(&local_80);
  }
  else {
    if (local_60 == 0x9009) {
      uVar14 = (uint)*(ushort *)((longlong)puVar6 + 0x2e) * 6;
      goto LAB_1473fac0c;
    }
    if (local_60 != 0x9100) goto LAB_1473faba2;
    lVar9 = (**(code **)(*param_2 + 8))(param_2);
    if (DAT_14ca7f950 != (code *)0x0) {
      local_f8 = puVar6[10];
      local_f0 = CONCAT31(local_f0._1_3_,1);
      (*DAT_14ca7f950)(local_60,*(undefined1 *)(lVar9 + 0x31),piVar1[uVar17],puVar6[9]);
      uVar19 = 0;
    }
  }
LAB_1473fad2e:
  uVar19 = CONCAT71((int7)(uVar19 >> 8),1);
LAB_1473faa61:
  FUN_1473f0510(param_2,uVar19);
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1473fad36 FUN_1473fad36 body=127 status=ok
// SIG undefined FUN_1473fad36(void)

void FUN_1473fad36(longlong *param_1,int param_2,void *param_3,uint param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x10;
  if (*(int *)(lVar1 + 8 + lVar2) == 0) {
    DAT_14ca7c500 = DAT_14ca7c500 + 1;
  }
  if (-1 < (int)param_4) {
    if (*(int *)(lVar1 + lVar2 + 0xc) < (int)param_4) {
      FUN_144893a1c(lVar1 + lVar2,param_4);
      lVar1 = *param_1;
    }
    FUN_140393c76(lVar1 + lVar2,param_4,1);
    if (param_3 != (void *)0x0) {
      memcpy(*(void **)(*param_1 + lVar2),param_3,(ulonglong)param_4);
    }
    DAT_14ca7c4f8 = DAT_14ca7c4f8 + param_4;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_4);
}


