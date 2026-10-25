// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147689cba FUN_147689cba body=89 status=ok
// SIG undefined FUN_147689cba(void)

void FUN_147689cba(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1447a08a2(param_1,0);
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



// FUNCTION 147689d14 FUN_147689d14 body=52 status=ok
// SIG undefined FUN_147689d14(void)

void FUN_147689d14(longlong *param_1)

{
  FUN_147689d48();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147689d48 FUN_147689d48 body=89 status=ok
// SIG undefined FUN_147689d48(void)

void FUN_147689d48(longlong param_1)

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



// FUNCTION 147689da2 FUN_147689da2 body=114 status=ok
// SIG undefined FUN_147689da2(void)

void FUN_147689da2(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a4d8160;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_147689c86(param_1 + 0xd);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_147689d14(param_1 + 3);
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147689e08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 147689e14 FUN_147689e14 body=132 status=ok
// SIG undefined FUN_147689e14(void)

void FUN_147689e14(longlong param_1,int param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  int local_3c;
  undefined8 *local_38;
  int *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0xc);
  *(undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0xc) = *param_3;
  local_3c = param_2;
  FUN_147689e9a(param_1 + 0x18);
  local_38 = param_3;
  local_30 = &local_3c;
  FUN_14768831a(param_1 + 0x18,local_24);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147689e9a FUN_147689e9a body=127 status=ok
// SIG undefined FUN_147689e9a(void)

void FUN_147689e9a(longlong *param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = FUN_144a78877(*param_2,param_2[1]);
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar2;
        if ((*(int *)(lVar1 + lVar4 * 0x14) == *param_2) &&
           (*(int *)(lVar1 + 4 + lVar4 * 0x14) == param_2[1])) {
          FUN_147689f1a(param_1);
          return;
        }
        iVar2 = *(int *)(lVar1 + lVar4 * 0x14 + 0xc);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 147689f1a FUN_147689f1a body=87 status=ok
// SIG undefined FUN_147689f1a(void)

void FUN_147689f1a(longlong *param_1,int param_2)

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
  lVar1 = lVar2 + (longlong)param_2 * 0x14;
  lVar6 = (longlong)*(int *)(lVar1 + 0x10);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0xc + lVar6 * 0x14);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x14 + 0xc);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0xc);
  FUN_1476885bc();
  return;
}



// FUNCTION 147689f72 FUN_147689f72 body=114 status=ok
// SIG undefined FUN_147689f72(void)

void FUN_147689f72(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0xc) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0xc);
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



// FUNCTION 147689fe4 FUN_147689fe4 body=62 status=ok
// SIG undefined FUN_147689fe4(void)

void FUN_147689fe4(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14768a022(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 14768a022 FUN_14768a022 body=93 status=ok
// SIG undefined FUN_14768a022(void)

ulonglong FUN_14768a022(uint param_1,uint param_2)

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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,4);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 14768a080 FUN_14768a080 body=167 status=ok
// SIG undefined FUN_14768a080(void)

void FUN_14768a080(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_14768a0fb;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_14768a0fb;
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
LAB_14768a0fb:
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
                    /* WARNING: Could not recover jumptable at 0x00014768a11b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14768a128 FUN_14768a128 body=191 status=ok
// SIG undefined FUN_14768a128(void)

undefined8 * FUN_14768a128(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[7] = 0x10000000000;
  param_1[0xc] = 0x10000000000;
  param_1[0x13] = 0x10000000000;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x18] = 0x10000000000;
  local_32 = *(undefined2 *)((longlong)param_1 + 2);
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_1 + 3,&local_48);
  local_32 = *(undefined2 *)((longlong)param_1 + 4);
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_1 + 3,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14768a1e8 FUN_14768a1e8 body=87 status=ok
// SIG undefined FUN_14768a1e8(void)

void FUN_14768a1e8(longlong param_1)

{
  int *piVar1;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x20) + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)(param_1 + 0x28) == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)(param_1 + 0x20) + 8));
    }
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 8) + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)(param_1 + 0x10) == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014768a231. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)(param_1 + 8) + 8));
      return;
    }
  }
  return;
}



// FUNCTION 14768a240 FUN_14768a240 body=103 status=ok
// SIG undefined FUN_14768a240(void)

void FUN_14768a240(short *param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong *puVar2;
  longlong lVar3;
  
  lVar1 = param_3[1];
  FUN_1403f967c(param_3,1);
  if (*(ushort *)(param_2 + 0xc) != 0) {
    puVar2 = *(ulonglong **)(param_2 + 0x28);
    lVar3 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar2 + 0x1e) == *param_1) goto LAB_14768a288;
      puVar2 = puVar2 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  puVar2 = (ulonglong *)0x0;
LAB_14768a288:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar2) {
    *(int *)(*param_3 + (longlong)(int)lVar1 * 4) =
         (int)*puVar2 - (int)*(ulonglong *)(param_2 + 0x20);
  }
  return;
}



// FUNCTION 14768a2a8 FUN_14768a2a8 body=114 status=ok
// SIG undefined FUN_14768a2a8(void)

void FUN_14768a2a8(longlong *param_1,int param_2)

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



// FUNCTION 14768a31a FUN_14768a31a body=307 status=ok
// SIG undefined FUN_14768a31a(void)

void FUN_14768a31a(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
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
  local_40 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
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
      lVar1 = *local_70;
      lVar2 = (longlong)iStack_54 * 0x20;
      FUN_140ee3645(*(undefined8 *)(lVar1 + 8 + lVar2),*(undefined4 *)(lVar1 + 0x10 + lVar2));
      if (*(longlong *)(lVar1 + 8 + lVar2) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14768a44e FUN_14768a44e body=248 status=ok
// SIG undefined FUN_14768a44e(void)

longlong * FUN_14768a44e(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
  lVar3 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar3 = *param_2;
    }
  }
  *param_1 = lVar3;
  plVar1 = param_2 + 1;
  lVar3 = FUN_1446ddbd2();
  if (param_2[1] == 0) {
    if ((int)param_2[4] != 0) goto LAB_14768a49d;
  }
  else {
    cVar2 = FUN_144729dda(param_2 + 2);
    if ((cVar2 != '\0') || ((int)param_2[4] == 0)) {
      lVar4 = *plVar1;
      goto LAB_14768a510;
    }
LAB_14768a49d:
    lVar4 = FUN_14007daa4(plVar1,0,0);
    if (lVar4 != 0) {
      lVar5 = *(longlong *)(lVar4 + 8);
      if (*(ulonglong *)(lVar3 + 8) == 0) {
        bVar6 = lVar5 != 0;
        if (lVar5 != lVar3 && bVar6) {
          do {
            lVar5 = *(longlong *)(lVar5 + 0x30);
            bVar6 = lVar5 != 0;
            if (lVar5 == lVar3) break;
          } while (lVar5 != 0);
        }
        if (bVar6) goto LAB_14768a4c2;
      }
      else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0) {
LAB_14768a4c2:
        *plVar1 = lVar4;
        goto LAB_14768a510;
      }
    }
    if (*plVar1 != 0) {
      *plVar1 = 0;
      param_2[2] = 0;
    }
  }
  lVar4 = 0;
LAB_14768a510:
  param_1[1] = lVar4;
  param_1[2] = param_2[2];
  FUN_1406fa324(param_1 + 3,param_2 + 3);
  return param_1;
}



// FUNCTION 14768a546 FUN_14768a546 body=51 status=ok
// SIG undefined FUN_14768a546(void)

void FUN_14768a546(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[6] = 0;
    param_1[7] = 0xffffffff;
    *(undefined4 *)(param_1 + 8) = 0;
    param_1 = param_1 + 9;
  }
  return;
}



// FUNCTION 14768a57a FUN_14768a57a body=98 status=ok
// SIG undefined FUN_14768a57a(void)

void FUN_14768a57a(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x48 + *param_1);
  FUN_140ee3645(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 0x48),(longlong)iVar2 * 0x48);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 14768a5dc FUN_14768a5dc body=62 status=ok
// SIG undefined FUN_14768a5dc(void)

void FUN_14768a5dc(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14768a61a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x48,8);
  }
  return;
}



// FUNCTION 14768a61a FUN_14768a61a body=112 status=ok
// SIG undefined FUN_14768a61a(void)

ulonglong FUN_14768a61a(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x48) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_14768a654;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x48,8);
      param_2 = param_2 / 0x48;
    }
  }
LAB_14768a654:
  return param_2 & 0xffffffff;
}



// FUNCTION 14768a68a FUN_14768a68a body=734 status=ok
// SIG undefined FUN_14768a68a(void)

void FUN_14768a68a(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  undefined1 auStack_a8 [32];
  undefined8 local_88 [9];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 != 0) {
    iVar4 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar6 = iVar4;
joined_r0x00014768a6d2:
    do {
      iVar5 = iVar6 * 2 + 1;
      if (iVar5 < (int)param_2) {
        iVar12 = iVar6 * 2 + 2;
        if (iVar12 < (int)param_2) {
          lVar10 = (longlong)iVar12;
          uVar1 = *(undefined8 *)((longlong)param_1 + (longlong)iVar5 * 0x48 + 0x3c);
          uVar2 = *(undefined8 *)((longlong)param_1 + lVar10 * 0x48 + 0x3c);
          iVar13 = (int)uVar2;
          iVar8 = (int)uVar1;
          if ((iVar13 < iVar8) ||
             ((float)((ulonglong)uVar2 >> 0x20) < (float)((ulonglong)uVar1 >> 0x20) &&
              iVar13 == iVar8)) goto LAB_14768a73d;
        }
        else {
LAB_14768a73d:
          lVar10 = (longlong)iVar5;
          iVar12 = iVar5;
        }
        uVar1 = *(undefined8 *)((longlong)param_1 + lVar10 * 0x48 + 0x3c);
        uVar2 = *(undefined8 *)((longlong)param_1 + (longlong)iVar6 * 0x48 + 0x3c);
        iVar8 = (int)uVar2;
        iVar5 = (int)uVar1;
        if ((iVar8 < iVar5) ||
           ((iVar8 == iVar5 &&
            ((float)((ulonglong)uVar2 >> 0x20) < (float)((ulonglong)uVar1 >> 0x20))))) {
          puVar7 = param_1 + (longlong)iVar6 * 9;
          puVar9 = local_88;
          for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
            *puVar9 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          }
          puVar7 = param_1 + lVar10 * 9;
          puVar9 = param_1 + (longlong)iVar6 * 9;
          for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
            *puVar9 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          }
          puVar7 = local_88;
          puVar9 = param_1 + lVar10 * 9;
          for (lVar3 = 9; iVar6 = iVar12, lVar3 != 0; lVar3 = lVar3 + -1) {
            *puVar9 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          }
          goto joined_r0x00014768a6d2;
        }
      }
      bVar14 = iVar4 != 0;
      iVar4 = iVar4 + -1;
      iVar6 = iVar4;
    } while (bVar14);
    if (1 < (int)param_2) {
      puVar7 = param_1;
      puVar9 = local_88;
      for (lVar10 = 9; lVar10 != 0; lVar10 = lVar10 + -1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      puVar7 = param_1 + ((ulonglong)param_2 - 1) * 9;
      puVar9 = param_1;
      for (lVar10 = 9; lVar10 != 0; lVar10 = lVar10 + -1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      puVar7 = local_88;
      puVar9 = param_1 + ((ulonglong)param_2 - 1) * 9;
      for (lVar10 = 9; lVar10 != 0; lVar10 = lVar10 + -1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      if (param_2 != 2) {
        uVar11 = (ulonglong)param_2 - 1;
        do {
          iVar4 = 0;
          iVar6 = 1;
          iVar5 = 0;
          do {
            lVar10 = (longlong)(iVar4 + 2);
            if (lVar10 < (longlong)uVar11) {
              uVar1 = *(undefined8 *)((longlong)param_1 + (longlong)iVar6 * 0x48 + 0x3c);
              uVar2 = *(undefined8 *)((longlong)param_1 + lVar10 * 0x48 + 0x3c);
              iVar8 = (int)uVar2;
              iVar12 = (int)uVar1;
              if ((iVar8 < iVar12) ||
                 (iVar13 = iVar4 + 2,
                 (float)((ulonglong)uVar2 >> 0x20) < (float)((ulonglong)uVar1 >> 0x20) &&
                 iVar8 == iVar12)) goto LAB_14768a880;
            }
            else {
LAB_14768a880:
              lVar10 = (longlong)iVar6;
              iVar13 = iVar6;
            }
            uVar1 = *(undefined8 *)((longlong)param_1 + lVar10 * 0x48 + 0x3c);
            uVar2 = *(undefined8 *)((longlong)param_1 + (longlong)iVar5 * 0x48 + 0x3c);
            iVar4 = (int)uVar2;
            iVar6 = (int)uVar1;
            if ((iVar6 <= iVar4) &&
               ((iVar4 != iVar6 ||
                ((float)((ulonglong)uVar1 >> 0x20) <= (float)((ulonglong)uVar2 >> 0x20))))) break;
            puVar7 = param_1 + (longlong)iVar5 * 9;
            puVar9 = local_88;
            for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
              *puVar9 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar9 = puVar9 + 1;
            }
            puVar7 = param_1 + lVar10 * 9;
            puVar9 = param_1 + (longlong)iVar5 * 9;
            for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
              *puVar9 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar9 = puVar9 + 1;
            }
            puVar7 = local_88;
            puVar9 = param_1 + lVar10 * 9;
            for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
              *puVar9 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar9 = puVar9 + 1;
            }
            iVar4 = iVar13 * 2;
            iVar6 = iVar13 * 2 + 1;
            iVar5 = iVar13;
          } while ((longlong)iVar6 < (longlong)uVar11);
          puVar7 = param_1;
          puVar9 = local_88;
          for (lVar10 = 9; lVar10 != 0; lVar10 = lVar10 + -1) {
            *puVar9 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          }
          puVar7 = param_1 + (uVar11 - 1) * 9;
          puVar9 = param_1;
          for (lVar10 = 9; lVar10 != 0; lVar10 = lVar10 + -1) {
            *puVar9 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          }
          puVar7 = local_88;
          puVar9 = param_1 + (uVar11 - 1) * 9;
          for (lVar10 = 9; lVar10 != 0; lVar10 = lVar10 + -1) {
            *puVar9 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          }
          bVar14 = 2 < uVar11;
          uVar11 = uVar11 - 1;
        } while (bVar14);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14768a969 FUN_14768a969 body=837 status=ok
// SIG undefined FUN_14768a969(void)

void FUN_14768a969(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  float fVar18;
  undefined1 auStack_3b8 [32];
  longlong local_398;
  longlong local_390;
  undefined4 local_388 [190];
  undefined8 local_90 [9];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  if (1 < (int)param_2) {
    memset(local_388,0,0x2f0);
    local_390 = param_1 + (ulonglong)param_2 * 0x48 + -0x48;
    local_398 = param_1;
    fVar18 = logf((float)(int)param_2);
    local_388[0] = (int)(longlong)(fVar18 + fVar18);
    plVar17 = &local_398;
    do {
      puVar1 = (undefined8 *)*plVar17;
      puVar13 = (undefined8 *)plVar17[1];
      iVar14 = (int)plVar17[2];
      iVar2 = (int)((ulonglong)((longlong)puVar13 - (longlong)puVar1) >> 3);
      puVar9 = puVar1;
      puVar16 = puVar13;
      if (iVar14 != 0) {
LAB_14768aa3f:
        uVar4 = iVar2 * 0x38e38e39 + 1;
        if (8 < (int)uVar4) {
          puVar8 = puVar1 + (ulonglong)(uVar4 >> 1) * 9;
          puVar11 = local_90;
          for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
            *puVar11 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar11 = puVar11 + 1;
          }
          puVar8 = puVar1;
          puVar11 = puVar1 + (ulonglong)(uVar4 >> 1) * 9;
          for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
            *puVar11 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar11 = puVar11 + 1;
          }
          puVar8 = local_90;
          puVar11 = puVar1;
          for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
            *puVar11 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar11 = puVar11 + 1;
          }
          puVar8 = puVar13 + 9;
          puVar11 = puVar1;
          do {
            puVar7 = puVar11 + 9;
            puVar6 = puVar11 + 9;
            do {
              puVar11 = puVar6;
              puVar5 = puVar7;
              if (puVar13 < puVar11) break;
              iVar2 = (int)*(undefined8 *)((longlong)puVar11 + 0x3c);
              iVar10 = (int)*(undefined8 *)((longlong)puVar1 + 0x3c);
              if (iVar2 < iVar10) break;
              puVar7 = puVar5 + 9;
              puVar6 = puVar11 + 9;
            } while ((iVar2 != iVar10) ||
                    ((float)((ulonglong)*(undefined8 *)((longlong)puVar1 + 0x3c) >> 0x20) <=
                     (float)((ulonglong)*(undefined8 *)((longlong)puVar11 + 0x3c) >> 0x20)));
            puVar7 = puVar8 + -9;
            puVar6 = puVar8 + -0x12;
            do {
              puVar15 = puVar6;
              puVar8 = puVar7;
              if (puVar8 <= puVar1) break;
              iVar2 = (int)*(undefined8 *)((longlong)puVar1 + 0x3c);
              iVar10 = (int)*(undefined8 *)((longlong)puVar8 + 0x3c);
              if (iVar2 < iVar10) break;
              puVar7 = puVar8 + -9;
              puVar6 = puVar15 + -9;
            } while ((iVar2 != iVar10) ||
                    ((float)((ulonglong)*(undefined8 *)((longlong)puVar8 + 0x3c) >> 0x20) <=
                     (float)((ulonglong)*(undefined8 *)((longlong)puVar1 + 0x3c) >> 0x20)));
            lVar3 = 9;
            puVar7 = puVar1;
            puVar6 = puVar11;
            puVar12 = local_90;
            if (puVar8 < puVar11) goto code_r0x00014768ab43;
            for (; lVar3 != 0; lVar3 = lVar3 + -1) {
              *puVar12 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar12 = puVar12 + 1;
            }
            puVar7 = puVar8;
            puVar6 = puVar11;
            for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
              *puVar6 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar6 = puVar6 + 1;
            }
            puVar7 = local_90;
            puVar6 = puVar8;
            for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
              *puVar6 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar6 = puVar6 + 1;
            }
          } while( true );
        }
        while (puVar9 = puVar1, puVar16 = puVar1, puVar1 < puVar13) {
          while (puVar8 = puVar16 + 9, puVar8 <= puVar13) {
            puVar11 = (undefined8 *)((longlong)puVar16 + 0x84);
            iVar2 = (int)*puVar11;
            iVar14 = (int)*(undefined8 *)((longlong)puVar9 + 0x3c);
            puVar16 = puVar8;
            if ((iVar2 < iVar14) ||
               ((float)((ulonglong)*puVar11 >> 0x20) <
                (float)((ulonglong)*(undefined8 *)((longlong)puVar9 + 0x3c) >> 0x20) &&
                iVar2 == iVar14)) {
              puVar9 = puVar8;
            }
          }
          puVar16 = puVar13 + -9;
          puVar8 = puVar9;
          puVar11 = local_90;
          for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
            *puVar11 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar11 = puVar11 + 1;
          }
          puVar8 = puVar13;
          for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
            *puVar9 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar9 = puVar9 + 1;
          }
          puVar9 = local_90;
          puVar8 = puVar13;
          for (lVar3 = 9; puVar13 = puVar16, lVar3 != 0; lVar3 = lVar3 + -1) {
            *puVar8 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar8 = puVar8 + 1;
          }
        }
        goto LAB_14768ac8b;
      }
LAB_14768aca5:
      FUN_14768acaf(puVar1);
LAB_14768ac8b:
      plVar17 = plVar17 + -3;
    } while (&local_398 <= plVar17);
  }
  if ((local_48 ^ (ulonglong)auStack_3b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x00014768ab43:
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar12 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar12 = puVar12 + 1;
  }
  puVar7 = puVar8;
  puVar6 = puVar1;
  for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar6 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar7 = local_90;
  puVar6 = puVar8;
  for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar6 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar6 = puVar6 + 1;
  }
  iVar14 = iVar14 + -1;
  puVar7 = puVar8 + -9;
  if ((longlong)puVar15 - (longlong)puVar9 < (longlong)puVar16 - (longlong)puVar5) {
    if (puVar11 < puVar13) {
      *plVar17 = (longlong)puVar11;
      plVar17[1] = (longlong)puVar13;
      *(int *)(plVar17 + 2) = iVar14;
      plVar17 = plVar17 + 3;
    }
    puVar5 = puVar1;
    if (puVar8 <= puVar1 + 9) goto LAB_14768ac8b;
  }
  else {
    if (puVar1 + 9 < puVar8) {
      *plVar17 = (longlong)puVar1;
      plVar17[1] = (longlong)puVar7;
      *(int *)(plVar17 + 2) = iVar14;
      plVar17 = plVar17 + 3;
    }
    puVar1 = puVar11;
    puVar7 = puVar13;
    puVar15 = puVar13;
    if (puVar13 <= puVar11) goto LAB_14768ac8b;
  }
  iVar2 = (int)((ulonglong)((longlong)puVar15 - (longlong)puVar5) >> 3);
  puVar13 = puVar7;
  puVar9 = puVar5;
  puVar16 = puVar15;
  if (iVar14 == 0) goto LAB_14768aca5;
  goto LAB_14768aa3f;
}



// FUNCTION 14768acaf FUN_14768acaf body=734 status=ok
// SIG undefined FUN_14768acaf(void)

void FUN_14768acaf(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  undefined1 auStack_a8 [32];
  undefined8 local_88 [9];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 != 0) {
    iVar4 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar6 = iVar4;
joined_r0x00014768acf7:
    do {
      iVar5 = iVar6 * 2 + 1;
      if (iVar5 < (int)param_2) {
        iVar12 = iVar6 * 2 + 2;
        if (iVar12 < (int)param_2) {
          lVar10 = (longlong)iVar12;
          uVar1 = *(undefined8 *)((longlong)param_1 + lVar10 * 0x48 + 0x3c);
          uVar2 = *(undefined8 *)((longlong)param_1 + (longlong)iVar5 * 0x48 + 0x3c);
          iVar13 = (int)uVar2;
          iVar8 = (int)uVar1;
          if ((iVar13 < iVar8) ||
             ((float)((ulonglong)uVar2 >> 0x20) < (float)((ulonglong)uVar1 >> 0x20) &&
              iVar13 == iVar8)) goto LAB_14768ad62;
        }
        else {
LAB_14768ad62:
          lVar10 = (longlong)iVar5;
          iVar12 = iVar5;
        }
        uVar1 = *(undefined8 *)((longlong)param_1 + (longlong)iVar6 * 0x48 + 0x3c);
        uVar2 = *(undefined8 *)((longlong)param_1 + lVar10 * 0x48 + 0x3c);
        iVar8 = (int)uVar2;
        iVar5 = (int)uVar1;
        if ((iVar8 < iVar5) ||
           ((iVar8 == iVar5 &&
            ((float)((ulonglong)uVar2 >> 0x20) < (float)((ulonglong)uVar1 >> 0x20))))) {
          puVar7 = param_1 + (longlong)iVar6 * 9;
          puVar9 = local_88;
          for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
            *puVar9 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          }
          puVar7 = param_1 + lVar10 * 9;
          puVar9 = param_1 + (longlong)iVar6 * 9;
          for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
            *puVar9 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          }
          puVar7 = local_88;
          puVar9 = param_1 + lVar10 * 9;
          for (lVar3 = 9; iVar6 = iVar12, lVar3 != 0; lVar3 = lVar3 + -1) {
            *puVar9 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          }
          goto joined_r0x00014768acf7;
        }
      }
      bVar14 = iVar4 != 0;
      iVar4 = iVar4 + -1;
      iVar6 = iVar4;
    } while (bVar14);
    if (1 < (int)param_2) {
      puVar7 = param_1;
      puVar9 = local_88;
      for (lVar10 = 9; lVar10 != 0; lVar10 = lVar10 + -1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      puVar7 = param_1 + ((ulonglong)param_2 - 1) * 9;
      puVar9 = param_1;
      for (lVar10 = 9; lVar10 != 0; lVar10 = lVar10 + -1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      puVar7 = local_88;
      puVar9 = param_1 + ((ulonglong)param_2 - 1) * 9;
      for (lVar10 = 9; lVar10 != 0; lVar10 = lVar10 + -1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      if (param_2 != 2) {
        uVar11 = (ulonglong)param_2 - 1;
        do {
          iVar4 = 0;
          iVar6 = 1;
          iVar5 = 0;
          do {
            lVar10 = (longlong)(iVar4 + 2);
            if (lVar10 < (longlong)uVar11) {
              uVar1 = *(undefined8 *)((longlong)param_1 + lVar10 * 0x48 + 0x3c);
              uVar2 = *(undefined8 *)((longlong)param_1 + (longlong)iVar6 * 0x48 + 0x3c);
              iVar8 = (int)uVar2;
              iVar12 = (int)uVar1;
              if ((iVar8 < iVar12) ||
                 (iVar13 = iVar4 + 2,
                 (float)((ulonglong)uVar2 >> 0x20) < (float)((ulonglong)uVar1 >> 0x20) &&
                 iVar8 == iVar12)) goto LAB_14768aea5;
            }
            else {
LAB_14768aea5:
              lVar10 = (longlong)iVar6;
              iVar13 = iVar6;
            }
            uVar1 = *(undefined8 *)((longlong)param_1 + (longlong)iVar5 * 0x48 + 0x3c);
            uVar2 = *(undefined8 *)((longlong)param_1 + lVar10 * 0x48 + 0x3c);
            iVar4 = (int)uVar2;
            iVar6 = (int)uVar1;
            if ((iVar6 <= iVar4) &&
               ((iVar4 != iVar6 ||
                ((float)((ulonglong)uVar1 >> 0x20) <= (float)((ulonglong)uVar2 >> 0x20))))) break;
            puVar7 = param_1 + (longlong)iVar5 * 9;
            puVar9 = local_88;
            for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
              *puVar9 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar9 = puVar9 + 1;
            }
            puVar7 = param_1 + lVar10 * 9;
            puVar9 = param_1 + (longlong)iVar5 * 9;
            for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
              *puVar9 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar9 = puVar9 + 1;
            }
            puVar7 = local_88;
            puVar9 = param_1 + lVar10 * 9;
            for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
              *puVar9 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar9 = puVar9 + 1;
            }
            iVar4 = iVar13 * 2;
            iVar6 = iVar13 * 2 + 1;
            iVar5 = iVar13;
          } while ((longlong)iVar6 < (longlong)uVar11);
          puVar7 = param_1;
          puVar9 = local_88;
          for (lVar10 = 9; lVar10 != 0; lVar10 = lVar10 + -1) {
            *puVar9 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          }
          puVar7 = param_1 + (uVar11 - 1) * 9;
          puVar9 = param_1;
          for (lVar10 = 9; lVar10 != 0; lVar10 = lVar10 + -1) {
            *puVar9 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          }
          puVar7 = local_88;
          puVar9 = param_1 + (uVar11 - 1) * 9;
          for (lVar10 = 9; lVar10 != 0; lVar10 = lVar10 + -1) {
            *puVar9 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          }
          bVar14 = 2 < uVar11;
          uVar11 = uVar11 - 1;
        } while (bVar14);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14768afa8 FUN_14768afa8 body=29 status=ok
// SIG undefined FUN_14768afa8(void)

bool FUN_14768afa8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14768afc6 FUN_14768afc6 body=26 status=ok
// SIG undefined FUN_14768afc6(void)

bool FUN_14768afc6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14768afe0 FUN_14768afe0 body=93 status=ok
// SIG undefined FUN_14768afe0(void)

void FUN_14768afe0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a4d81d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14768b03e FUN_14768b03e body=93 status=ok
// SIG undefined FUN_14768b03e(void)

void FUN_14768b03e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a4d81d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14768b09c FUN_14768b09c body=126 status=ok
// SIG undefined FUN_14768b09c(void)

void FUN_14768b09c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a4d81d0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014768b10b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14768b11a FUN_14768b11a body=35 status=ok
// SIG undefined FUN_14768b11a(void)

void FUN_14768b11a(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014768b139. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 14768b13e FUN_14768b13e body=38 status=ok
// SIG undefined FUN_14768b13e(void)

undefined8 FUN_14768b13e(undefined8 param_1,int param_2)

{
  FUN_145ec2ebc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14768b170 FUN_14768b170 body=74 status=ok
// SIG undefined FUN_14768b170(void)

void FUN_14768b170(longlong param_1,int param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *(undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x28);
  FUN_14768b1f0();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14768b1ca FUN_14768b1ca body=38 status=ok
// SIG undefined FUN_14768b1ca(void)

undefined8 FUN_14768b1ca(undefined8 param_1,int param_2)

{
  FUN_145ec2ebc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14768b1f0 FUN_14768b1f0 body=135 status=ok
// SIG undefined FUN_14768b1f0(void)

void FUN_14768b1f0(longlong param_1,int param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  int local_3c;
  undefined8 *local_38;
  int *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x28);
  *(undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x28) = *param_3;
  local_3c = param_2;
  FUN_14621f65a(param_1 + 0x18);
  local_38 = param_3;
  local_30 = &local_3c;
  FUN_1458160bc(param_1 + 0x18,local_24,&local_38,0);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14768b278 FUN_14768b278 body=62 status=ok
// SIG undefined FUN_14768b278(void)

void FUN_14768b278(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14768b2b6(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x1c,4);
  }
  return;
}



// FUNCTION 14768b2b6 FUN_14768b2b6 body=121 status=ok
// SIG undefined FUN_14768b2b6(void)

ulonglong FUN_14768b2b6(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x1c) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_14768b2f3;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x1c,4);
      param_2 = param_2 / 0x1c;
    }
  }
LAB_14768b2f3:
  return param_2 & 0xffffffff;
}



// FUNCTION 14768b330 FUN_14768b330 body=66 status=ok
// SIG undefined FUN_14768b330(void)

void FUN_14768b330(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14a4d8318;
  plVar3 = *(longlong **)(param_1 + 0x28);
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
                    /* WARNING: Could not recover jumptable at 0x00014768b36e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14768b372 FUN_14768b372 body=83 status=ok
// SIG undefined FUN_14768b372(void)

undefined8 * FUN_14768b372(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a4d8318;
  plVar3 = (longlong *)param_1[3];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14768b3c6 FUN_14768b3c6 body=239 status=ok
// SIG undefined FUN_14768b3c6(void)

void FUN_14768b3c6(longlong *param_1,int *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  longlong lVar9;
  uint uVar10;
  
  uVar2 = *(uint *)(param_1 + 1);
  lVar9 = *param_1;
  if ((int)uVar2 < 1) {
    uVar10 = 0;
  }
  else {
    iVar6 = *param_2;
    uVar10 = 0;
    uVar7 = uVar2;
    do {
      uVar1 = (uVar7 >> 1) + uVar10;
      if (*(int *)(lVar9 + (ulonglong)uVar1 * 0x1c) < iVar6) {
        uVar10 = uVar1 + (uVar7 & 1);
      }
      bVar3 = 1 < uVar7;
      uVar7 = uVar7 >> 1;
    } while (bVar3);
    if ((int)uVar10 < (int)uVar2) {
      if (*(int *)(lVar9 + (ulonglong)uVar10 * 0x1c) <= iVar6) {
        piVar8 = (int *)(lVar9 + (ulonglong)uVar10 * 0x1c);
        goto LAB_14768b481;
      }
    }
  }
  *(uint *)(param_1 + 1) = uVar2 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar2) {
    FUN_14768b4b6(param_1,uVar2);
    lVar9 = *param_1;
  }
  lVar4 = (ulonglong)uVar10 * 0x1c;
  memmove((void *)(lVar9 + lVar4 + 0x1c),(void *)(lVar9 + lVar4),(ulonglong)(uVar2 - uVar10) * 0x1c)
  ;
  piVar8 = (int *)(lVar4 + *param_1);
  iVar6 = *param_2;
LAB_14768b481:
  *piVar8 = iVar6;
  uVar5 = param_3[1];
  *(undefined8 *)(piVar8 + 1) = *param_3;
  *(undefined8 *)(piVar8 + 3) = uVar5;
  *(undefined8 *)(piVar8 + 5) = param_3[2];
  return;
}



// FUNCTION 14768b4b6 FUN_14768b4b6 body=157 status=ok
// SIG undefined FUN_14768b4b6(void)

void FUN_14768b4b6(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x1c,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x1c)) {
      uVar5 = uVar4 / 0x1c & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x1c,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14768b554 FUN_14768b554 body=220 status=ok
// SIG undefined FUN_14768b554(void)

void FUN_14768b554(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  ulonglong *local_48;
  undefined2 local_3a;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_3a = 0xffff;
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = *(undefined2 *)(param_1 + 2);
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = *(undefined2 *)(param_1 + 4);
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = *(undefined2 *)(param_1 + 6);
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14768b632 FUN_14768b632 body=478 status=ok
// SIG undefined FUN_14768b632(void)

void FUN_14768b632(undefined8 param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  int local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  int local_88;
  undefined8 local_80;
  undefined8 *local_78;
  int local_70;
  undefined8 local_68;
  undefined8 *local_60;
  int local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar4 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar4 + 0xc) != 0) {
    puVar9 = *(undefined8 **)(lVar4 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar9 + 0x1e) == *(short *)(param_3 + 6)) goto LAB_14768b67f;
      puVar9 = puVar9 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  puVar9 = (undefined8 *)0x0;
LAB_14768b67f:
  iVar1 = *(int *)(lVar4 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar9 + 1));
  }
  LOCK();
  *(int *)(puVar9 + 3) = *(int *)(puVar9 + 3) + 1;
  UNLOCK();
  lVar4 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar4 + 0xc) != 0) {
    puVar10 = *(undefined8 **)(lVar4 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar10 + 0x1e) == *(short *)(param_3 + 4)) goto LAB_14768b6b5;
      puVar10 = puVar10 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  puVar10 = (undefined8 *)0x0;
LAB_14768b6b5:
  uVar5 = *puVar9;
  iVar2 = *(int *)(lVar4 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar10 + 1));
  }
  LOCK();
  *(int *)(puVar10 + 3) = *(int *)(puVar10 + 3) + 1;
  UNLOCK();
  lVar4 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar4 + 0xc) != 0) {
    puVar8 = *(undefined8 **)(lVar4 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar8 + 0x1e) == *(short *)(param_3 + 2)) goto LAB_14768b6f8;
      puVar8 = puVar8 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  puVar8 = (undefined8 *)0x0;
LAB_14768b6f8:
  uVar6 = *puVar10;
  iVar3 = *(int *)(lVar4 + 0x14);
  local_a4 = iVar1;
  local_a0 = param_1;
  if (iVar3 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar8 + 1));
  }
  LOCK();
  *(int *)(puVar8 + 3) = *(int *)(puVar8 + 3) + 1;
  UNLOCK();
  local_80 = *puVar8;
  local_98 = *(undefined8 *)
              (*(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8) + 0x18)
  ;
  local_58 = local_a4;
  local_b8 = uVar6;
  local_b0 = uVar5;
  local_90 = puVar8;
  local_88 = iVar3;
  local_78 = puVar10;
  local_70 = iVar2;
  local_68 = uVar6;
  local_60 = puVar9;
  local_50 = uVar5;
  FUN_14115c9d0(local_a0);
  FUN_14768b812(&local_98);
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14768b812 FUN_14768b812 body=120 status=ok
// SIG undefined FUN_14768b812(void)

void FUN_14768b812(longlong param_1)

{
  int *piVar1;
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x38) + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)(param_1 + 0x40) == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)(param_1 + 0x38) + 8));
    }
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x20) + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)(param_1 + 0x28) == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)(param_1 + 0x20) + 8));
    }
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 8) + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)(param_1 + 0x10) == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014768b87c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)(param_1 + 8) + 8));
      return;
    }
  }
  return;
}



// FUNCTION 14768b88a FUN_14768b88a body=219 status=ok
// SIG undefined FUN_14768b88a(void)

undefined8 *
FUN_14768b88a(undefined8 *param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 2);
  uVar3 = param_3[1];
  *param_1 = *param_3;
  param_1[1] = uVar3;
  param_1[7] = 0x10000000000;
  param_1[0xc] = 0x10000000000;
  param_1[0x13] = 0x10000000000;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x18] = 0x10000000000;
  FUN_1461f27be(0,param_1 + 3);
  param_1[0x19] = param_2;
  param_1[0x1a] = *(undefined8 *)(param_2 + 0x248);
  uVar3 = *param_4;
  uVar4 = *param_5;
  plVar5 = (longlong *)param_5[1];
  if (plVar5 == (longlong *)0x0) {
    param_1[0x1b] = uVar3;
    param_1[0x1c] = uVar4;
    param_1[0x1d] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    param_1[0x1b] = uVar3;
    param_1[0x1c] = uVar4;
    param_1[0x1d] = plVar5;
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
  }
  return param_1;
}



// FUNCTION 14768b966 FUN_14768b966 body=78 status=ok
// SIG undefined FUN_14768b966(void)

void FUN_14768b966(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0xe8);
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
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14768b9b4 FUN_14768b9b4 body=98 status=ok
// SIG undefined FUN_14768b9b4(void)

void FUN_14768b9b4(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x18 + *param_1);
  FUN_1410fbb3e(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 0x18),(longlong)iVar2 * 0x18);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 14768ba16 FUN_14768ba16 body=62 status=ok
// SIG undefined FUN_14768ba16(void)

void FUN_14768ba16(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14768ba54(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 14768ba54 FUN_14768ba54 body=112 status=ok
// SIG undefined FUN_14768ba54(void)

ulonglong FUN_14768ba54(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_14768ba8e;
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
LAB_14768ba8e:
  return param_2 & 0xffffffff;
}



// FUNCTION 14768bac4 FUN_14768bac4 body=180 status=ok
// SIG undefined FUN_14768bac4(void)

longlong * FUN_14768bac4(longlong *param_1,uint param_2,longlong *param_3)

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
        plVar2 = (longlong *)(*param_1 + (longlong)iVar1 * 0x48);
        if (*plVar2 == *param_3) {
          if (plVar2 != (longlong *)0x0) goto LAB_14768bb5b;
          break;
        }
        iVar1 = (int)plVar2[8];
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_14768bb7a(param_1,&local_1c,param_2);
  plVar2 = (longlong *)(*param_1 + (longlong)local_1c * 0x48);
LAB_14768bb5b:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar2 + 1;
}



// FUNCTION 14768bb7a FUN_14768bb7a body=339 status=ok
// SIG undefined FUN_14768bb7a(void)

undefined4 * FUN_14768bb7a(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined4 local_78 [2];
  undefined8 *local_70;
  undefined6 local_68;
  undefined2 uStack_62;
  undefined2 uStack_60;
  undefined4 uStack_5e;
  undefined2 uStack_5a;
  undefined2 local_58;
  undefined4 uStack_56;
  undefined2 uStack_52;
  undefined6 uStack_50;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14768bcce(param_1,local_78);
  uStack_48 = 0;
  local_58 = 0;
  uStack_56 = 0;
  uStack_52 = 0;
  uStack_50 = 0;
  uStack_4a = 0;
  local_68 = 0;
  uStack_62 = 0;
  uStack_60 = 0;
  uStack_5e = 0;
  uStack_5a = 0;
  *local_70 = *(undefined8 *)*param_4;
  *(undefined1 *)((longlong)local_70 + 9) = 0;
  *(undefined4 *)(local_70 + 2) = 0;
  *(undefined4 *)((longlong)local_70 + 0x14) = 0;
  *(undefined4 *)(local_70 + 3) = 0;
  *(undefined4 *)((longlong)local_70 + 0x1c) = 0;
  local_70[4] = 0;
  local_70[5] = 0;
  local_70[6] = 0;
  local_70[7] = 0x200000000;
  *(undefined4 *)(local_70 + 8) = 0xffffffff;
  cVar1 = FUN_14768bdb4(param_1,param_3,local_70,local_78);
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
      *(uint *)((longlong)local_70 + 0x44) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_70 + 8) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_78[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_14768bee6(param_1);
    }
  }
  *param_2 = local_78[0];
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14768bcce FUN_14768bcce body=230 status=ok
// SIG undefined FUN_14768bcce(void)

int * FUN_14768bcce(longlong *param_1,int *param_2)

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
      FUN_14021b4e8(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x48);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x48) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x48 + *param_1;
  return param_2;
}



// FUNCTION 14768bdb4 FUN_14768bdb4 body=191 status=ok
// SIG undefined FUN_14768bdb4(void)

undefined8 FUN_14768bdb4(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  int iVar17;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar16 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar16 = (longlong *)param_1[8];
    }
    iVar17 = *(int *)((longlong)plVar16 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar17 != -1) {
      do {
        plVar16 = (longlong *)(*param_1 + (longlong)iVar17 * 0x48);
        if (*plVar16 == *param_3) {
          if (plVar16[6] != 0) {
            FUN_1400020a8();
          }
          if (*(char *)((longlong)plVar16 + 9) == '\x01') {
            *(undefined1 *)((longlong)plVar16 + 9) = 0;
          }
          lVar9 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar10 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          lVar11 = param_3[2];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar12 = param_3[3];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0x1c);
          lVar13 = param_3[4];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0x24);
          lVar14 = param_3[5];
          uVar6 = *(undefined4 *)((longlong)param_3 + 0x2c);
          uVar7 = *(undefined4 *)((longlong)param_3 + 0x34);
          lVar15 = param_3[7];
          uVar8 = *(undefined4 *)((longlong)param_3 + 0x3c);
          *(int *)(plVar16 + 6) = (int)param_3[6];
          *(undefined4 *)((longlong)plVar16 + 0x34) = uVar7;
          *(int *)(plVar16 + 7) = (int)lVar15;
          *(undefined4 *)((longlong)plVar16 + 0x3c) = uVar8;
          *(int *)(plVar16 + 4) = (int)lVar13;
          *(undefined4 *)((longlong)plVar16 + 0x24) = uVar5;
          *(int *)(plVar16 + 5) = (int)lVar14;
          *(undefined4 *)((longlong)plVar16 + 0x2c) = uVar6;
          *(int *)(plVar16 + 2) = (int)lVar11;
          *(undefined4 *)((longlong)plVar16 + 0x14) = uVar3;
          *(int *)(plVar16 + 3) = (int)lVar12;
          *(undefined4 *)((longlong)plVar16 + 0x1c) = uVar4;
          *(int *)plVar16 = (int)lVar9;
          *(undefined4 *)((longlong)plVar16 + 4) = uVar1;
          *(int *)(plVar16 + 1) = (int)lVar10;
          *(undefined4 *)((longlong)plVar16 + 0xc) = uVar2;
          FUN_14768be74(param_1,*param_4);
          *param_4 = iVar17;
          return 1;
        }
        iVar17 = (int)plVar16[8];
      } while (iVar17 != -1);
    }
  }
  return 0;
}



// FUNCTION 14768be74 FUN_14768be74 body=114 status=ok
// SIG undefined FUN_14768be74(void)

void FUN_14768be74(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x48) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x48);
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



// FUNCTION 14768bee6 FUN_14768bee6 body=473 status=ok
// SIG undefined FUN_14768bee6(void)

void FUN_14768bee6(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x48);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x44 + lVar6 * 0x48) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x40 + lVar6 * 0x48) =
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



// FUNCTION 14768c0c0 FUN_14768c0c0 body=73 status=ok
// SIG undefined FUN_14768c0c0(void)

void FUN_14768c0c0(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14768c10a FUN_14768c10a body=48 status=ok
// SIG undefined FUN_14768c10a(void)

void FUN_14768c10a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 14768c13a FUN_14768c13a body=132 status=ok
// SIG undefined FUN_14768c13a(void)

void FUN_14768c13a(longlong *param_1,longlong param_2)

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
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x48) == param_2) {
          FUN_14768c1be(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)(*param_1 + (longlong)iVar2 * 0x48 + 0x40);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 14768c1be FUN_14768c1be body=87 status=ok
// SIG undefined FUN_14768c1be(void)

void FUN_14768c1be(longlong *param_1,int param_2)

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
  lVar1 = lVar2 + (longlong)param_2 * 0x48;
  lVar6 = (longlong)*(int *)(lVar1 + 0x44);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x40 + lVar6 * 0x48);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x48 + 0x40);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x40);
  FUN_14768c216();
  return;
}



// FUNCTION 14768c216 FUN_14768c216 body=67 status=ok
// SIG undefined FUN_14768c216(void)

void FUN_14768c216(longlong *param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = *param_1 + (longlong)param_2 * 0x48;
  if (*(longlong *)(lVar1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(lVar1 + 9) == '\x01') {
    *(undefined1 *)(lVar1 + 9) = 0;
  }
  FUN_14768be74(param_1,param_2);
  return;
}



// FUNCTION 14768c25a FUN_14768c25a body=155 status=ok
// SIG undefined FUN_14768c25a(void)

undefined8 FUN_14768c25a(longlong *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)((ulonglong)param_2 >> 0x10);
    uVar4 = (uint)param_2 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)
                     (int)(((uint)param_2 << 0x10 | uVar4) + (int)((ulonglong)param_2 >> 0x20) +
                           (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x18) == param_2) {
          FUN_14768c2f6(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 14768c2f6 FUN_14768c2f6 body=93 status=ok
// SIG undefined FUN_14768c2f6(void)

void FUN_14768c2f6(longlong *param_1,int param_2)

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
  FUN_14768c354(param_1,param_2,1);
  return;
}



// FUNCTION 14768c354 FUN_14768c354 body=138 status=ok
// SIG undefined FUN_14768c354(void)

void FUN_14768c354(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x18 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = param_2;
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
      puVar7 = puVar7 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14768c3de FUN_14768c3de body=355 status=ok
// SIG undefined FUN_14768c3de(void)

undefined4 *
FUN_14768c3de(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14768c542(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar8 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar5 >> 4);
  local_58 = param_4;
  cVar3 = FUN_14768c628(param_1,uVar8,local_40);
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_40 + 0x14) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
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
      FUN_14768c6bc(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14768c542 FUN_14768c542 body=230 status=ok
// SIG undefined FUN_14768c542(void)

int * FUN_14768c542(longlong *param_1,int *param_2)

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
      FUN_1403951a8(param_1,iVar6);
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



// FUNCTION 14768c628 FUN_14768c628 body=148 status=ok
// SIG undefined FUN_14768c628(void)

void FUN_14768c628(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 uVar5;
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
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar6 = (int)lVar3;
          *(undefined4 *)((longlong)plVar6 + 4) = uVar1;
          *(int *)(plVar6 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar6 + 0xc) = uVar2;
          FUN_14768c354((int)lVar3,*param_4,1);
          *param_4 = iVar7;
          uVar5 = 1;
          goto LAB_14768c692;
        }
        iVar7 = (int)plVar6[2];
      } while (iVar7 != -1);
    }
  }
  uVar5 = 0;
LAB_14768c692:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar5;
  }
  return;
}



// FUNCTION 14768c6bc FUN_14768c6bc body=473 status=ok
// SIG undefined FUN_14768c6bc(void)

void FUN_14768c6bc(longlong *param_1)

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



// FUNCTION 14768c896 FUN_14768c896 body=124 status=ok
// SIG undefined FUN_14768c896(void)

void FUN_14768c896(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (param_2 <= (int)uVar1) {
    iVar6 = 2;
    if (2 < uVar1) {
      if (*(uint *)(param_1 + 0x2c) < 3) {
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
    *(int *)(param_1 + 0x2c) = iVar6;
    FUN_14768c914(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14768c914 FUN_14768c914 body=132 status=ok
// SIG undefined FUN_14768c914(void)

void FUN_14768c914(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x20);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x20,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x20),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x20,param_2,param_3,0x10);
  return;
}



// FUNCTION 14768c998 FUN_14768c998 body=128 status=ok
// SIG undefined FUN_14768c998(void)

void FUN_14768c998(longlong *param_1,longlong *param_2)

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
    FUN_14768ca18(param_1,iVar1);
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



// FUNCTION 14768ca18 FUN_14768ca18 body=132 status=ok
// SIG undefined FUN_14768ca18(void)

void FUN_14768ca18(longlong param_1,int param_2)

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



// FUNCTION 14768ca9e FUN_14768ca9e body=120 status=ok
// SIG undefined FUN_14768ca9e(void)

void FUN_14768ca9e(longlong param_1)

{
  int *piVar1;
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x38) + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)(param_1 + 0x40) == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)(param_1 + 0x38) + 8));
    }
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x20) + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)(param_1 + 0x28) == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)(param_1 + 0x20) + 8));
    }
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 8) + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)(param_1 + 0x10) == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014768cb08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)(param_1 + 8) + 8));
      return;
    }
  }
  return;
}



// FUNCTION 14768cb16 FUN_14768cb16 body=38 status=ok
// SIG undefined FUN_14768cb16(void)

undefined8 FUN_14768cb16(undefined8 param_1,int param_2)

{
  FUN_14768cf74();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14768cb48 FUN_14768cb48 body=114 status=ok
// SIG undefined FUN_14768cb48(void)

void FUN_14768cb48(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *(undefined8 *)(*(longlong *)(param_1 + 0x68) + 0x10 + (longlong)param_2 * 0x20);
  puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x20);
  local_38 = *puVar1;
  uStack_34 = puVar1[1];
  uStack_30 = puVar1[2];
  uStack_2c = puVar1[3];
  FUN_14769a0fe(&local_38,param_4);
  FUN_14768d014(param_1,param_2,&local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14768cbbc FUN_14768cbbc body=912 status=ok
// SIG undefined FUN_14768cbbc(void)

ulonglong FUN_14768cbbc(longlong param_1,int param_2,char param_3,char param_4,undefined8 param_5)

{
  uint uVar1;
  void *pvVar2;
  byte bVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  ulonglong unaff_RBP;
  undefined7 uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
    cVar6 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))();
    unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),3);
    if (cVar6 == '\0') goto LAB_14768cc42;
  }
  uVar10 = (undefined7)(unaff_RBP >> 8);
  if (param_3 == '\x01') {
    if (param_4 == '\0') {
      puVar8 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x20);
      local_58 = *puVar8;
      uStack_54 = puVar8[1];
      uStack_50 = puVar8[2];
      uStack_4c = puVar8[3];
      puVar8 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + 0x10 + (longlong)param_2 * 0x20);
      local_48 = *puVar8;
      uStack_44 = puVar8[1];
      uStack_40 = puVar8[2];
      uStack_3c = puVar8[3];
      FUN_145bce72e(param_1 + 0x18);
      FUN_145bce6be(param_1 + 0x68,param_2);
      uVar7 = *(uint *)(param_1 + 0xa8);
      lVar4 = *(longlong *)(param_1 + 0xa0);
      uVar13 = 0;
      uVar12 = uVar7;
      if (0 < (int)uVar7) {
        do {
          uVar1 = (uVar12 >> 1) + uVar13;
          if (*(int *)(lVar4 + (ulonglong)uVar1 * 8) < param_2) {
            uVar13 = uVar1 + (uVar12 & 1);
          }
          bVar5 = 1 < uVar12;
          uVar12 = uVar12 >> 1;
        } while (bVar5);
      }
      if (((int)uVar13 < (int)uVar7) && (*(int *)(lVar4 + (ulonglong)uVar13 * 8) <= param_2)) {
        if (~uVar13 + uVar7 != 0) {
          pvVar2 = (void *)(lVar4 + (ulonglong)uVar13 * 8);
          memmove(pvVar2,(void *)((longlong)pvVar2 + 8),(longlong)(int)(~uVar13 + uVar7) << 3);
          uVar7 = *(uint *)(param_1 + 0xa8);
        }
        *(uint *)(param_1 + 0xa8) = uVar7 - 1;
LAB_14768cf43:
        FUN_14768352a(param_1 + 0xa0);
      }
LAB_14768ce46:
      if ((uStack_3c & 1) != 0) {
        FUN_14769a1b8(&local_58,uStack_40,param_5);
      }
      unaff_RBP = 0;
      goto LAB_14768cc42;
    }
    unaff_RBP = CONCAT71(uVar10,3);
    if ((*(byte *)(*(longlong *)(param_1 + 0x68) + 0x1c + (longlong)param_2 * 0x20) & 1) == 0)
    goto LAB_14768cc42;
    puVar8 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x20);
  }
  else {
    uVar7 = *(uint *)(param_1 + 0xa8);
    lVar4 = *(longlong *)(param_1 + 0xa0);
    uVar9 = 0;
    if (0 < (int)uVar7) {
      uVar11 = (ulonglong)uVar7;
      uVar12 = uVar7;
      do {
        uVar11 = uVar11 >> 1;
        uVar13 = (uint)uVar11 + (int)uVar9;
        if (*(int *)(lVar4 + (ulonglong)uVar13 * 8) < param_2) {
          uVar9 = (ulonglong)(uVar13 + (uVar12 & 1));
        }
        bVar5 = 1 < uVar12;
        uVar12 = (uint)uVar11;
      } while (bVar5);
    }
    if ((((int)uVar9 < (int)uVar7) && (*(int *)(lVar4 + uVar9 * 8) <= param_2)) &&
       (puVar8 = (undefined4 *)(lVar4 + uVar9 * 8 + 4), puVar8 != (undefined4 *)0x0)) {
      FUN_14769a1b8((longlong)param_2 * 0x20 + *(longlong *)(param_1 + 0x68),*puVar8);
      uVar7 = *(uint *)(param_1 + 0xa8);
      lVar4 = *(longlong *)(param_1 + 0xa0);
      uVar13 = 0;
      uVar12 = uVar7;
      if (0 < (int)uVar7) {
        do {
          uVar1 = (uVar12 >> 1) + uVar13;
          if (*(int *)(lVar4 + (ulonglong)uVar1 * 8) < param_2) {
            uVar13 = uVar1 + (uVar12 & 1);
          }
          bVar5 = 1 < uVar12;
          uVar12 = uVar12 >> 1;
        } while (bVar5);
      }
      unaff_RBP = CONCAT71(uVar10,1);
      if (((int)uVar13 < (int)uVar7) && (*(int *)(lVar4 + (ulonglong)uVar13 * 8) <= param_2)) {
        if (~uVar13 + uVar7 != 0) {
          pvVar2 = (void *)(lVar4 + (ulonglong)uVar13 * 8);
          memmove(pvVar2,(void *)((longlong)pvVar2 + 8),(longlong)(int)(~uVar13 + uVar7) << 3);
          uVar7 = *(uint *)(param_1 + 0xa8);
        }
        *(uint *)(param_1 + 0xa8) = uVar7 - 1;
        FUN_14768352a(param_1 + 0xa0);
      }
      goto LAB_14768cc42;
    }
    unaff_RBP = CONCAT71(uVar10,1);
    if (param_4 == '\x01') {
      bVar3 = *(byte *)(*(longlong *)(param_1 + 0x68) + 0x1c + (longlong)param_2 * 0x20);
      if ((bVar3 & 1) == 0) goto LAB_14768cc42;
      puVar8 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x20);
      *(byte *)(puVar8 + 7) = bVar3 | 2;
    }
    else {
      if (param_4 != '\0') goto LAB_14768cc42;
      puVar8 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x20);
      bVar3 = *(byte *)(*(longlong *)(param_1 + 0x68) + 0x1c + (longlong)param_2 * 0x20);
      if ((bVar3 & 2) == 0) {
        local_58 = *puVar8;
        uStack_54 = puVar8[1];
        uStack_50 = puVar8[2];
        uStack_4c = puVar8[3];
        local_48 = puVar8[4];
        uStack_44 = puVar8[5];
        uStack_40 = puVar8[6];
        uStack_3c = puVar8[7];
        FUN_145bce72e(param_1 + 0x18);
        FUN_145bce6be(param_1 + 0x68,param_2);
        uVar7 = *(uint *)(param_1 + 0xa8);
        lVar4 = *(longlong *)(param_1 + 0xa0);
        uVar13 = 0;
        uVar12 = uVar7;
        if (0 < (int)uVar7) {
          do {
            uVar1 = (uVar12 >> 1) + uVar13;
            if (*(int *)(lVar4 + (ulonglong)uVar1 * 8) < param_2) {
              uVar13 = uVar1 + (uVar12 & 1);
            }
            bVar5 = 1 < uVar12;
            uVar12 = uVar12 >> 1;
          } while (bVar5);
        }
        if (((int)uVar13 < (int)uVar7) && (*(int *)(lVar4 + (ulonglong)uVar13 * 8) <= param_2)) {
          if (~uVar13 + uVar7 != 0) {
            pvVar2 = (void *)(lVar4 + (ulonglong)uVar13 * 8);
            memmove(pvVar2,(void *)((longlong)pvVar2 + 8),(longlong)(int)(~uVar13 + uVar7) << 3);
            uVar7 = *(uint *)(param_1 + 0xa8);
          }
          *(uint *)(param_1 + 0xa8) = uVar7 - 1;
          goto LAB_14768cf43;
        }
        goto LAB_14768ce46;
      }
      if ((bVar3 & 1) == 0) goto LAB_14768cc42;
    }
  }
  FUN_14769a1b8(puVar8,puVar8[6],param_5);
LAB_14768cc42:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RBP & 0xffffffff;
}



// FUNCTION 14768cf4e FUN_14768cf4e body=38 status=ok
// SIG undefined FUN_14768cf4e(void)

undefined8 FUN_14768cf4e(undefined8 param_1,int param_2)

{
  FUN_14768cf74();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14768cf74 FUN_14768cf74 body=160 status=ok
// SIG undefined FUN_14768cf74(void)

void FUN_14768cf74(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a4d83a0;
  plVar3 = (longlong *)param_1[0x1a];
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
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_140f81c32(param_1 + 0xd);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_140f81bbc(param_1 + 3);
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014768d010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14768d014 FUN_14768d014 body=150 status=ok
// SIG undefined FUN_14768d014(void)

void FUN_14768d014(longlong param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  int local_3c;
  undefined4 *local_38;
  int *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = *(longlong *)(param_1 + 0x68);
  lVar6 = (longlong)param_2 * 0x20;
  local_48 = *(undefined8 *)(lVar2 + 0x10 + lVar6);
  local_58 = *(undefined8 *)(lVar2 + lVar6);
  uStack_50 = ((undefined8 *)(lVar2 + lVar6))[1];
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  puVar1 = (undefined4 *)(lVar2 + lVar6);
  *puVar1 = *param_3;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  *(undefined8 *)(lVar2 + 0x10 + lVar6) = *(undefined8 *)(param_3 + 4);
  local_3c = param_2;
  FUN_145bce72e(param_1 + 0x18);
  local_38 = param_3;
  local_30 = &local_3c;
  FUN_1457dc220(param_1 + 0x18,local_24);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14768d0ac FUN_14768d0ac body=38 status=ok
// SIG undefined FUN_14768d0ac(void)

undefined8 FUN_14768d0ac(undefined8 param_1,int param_2)

{
  FUN_14768d71e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14768d0de FUN_14768d0de body=111 status=ok
// SIG undefined FUN_14768d0de(void)

void FUN_14768d0de(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *(undefined8 *)(*(longlong *)(param_1 + 0x68) + 0x10 + (longlong)param_2 * 0x2c);
  puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x2c);
  local_38 = *puVar1;
  uStack_34 = puVar1[1];
  uStack_30 = puVar1[2];
  uStack_2c = puVar1[3];
  FUN_14769a2ac(&local_38,param_4);
  FUN_14768d7bc(param_1,param_2,&local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14768d14e FUN_14768d14e body=966 status=ok
// SIG undefined FUN_14768d14e(void)

ulonglong FUN_14768d14e(longlong param_1,int param_2,char param_3,char param_4,undefined8 param_5)

{
  void *pvVar1;
  byte bVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  ulonglong unaff_RBP;
  undefined7 uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  uint uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))();
    unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),3);
    if (cVar5 == '\0') goto LAB_14768d1d3;
  }
  uVar9 = (undefined7)(unaff_RBP >> 8);
  if (param_3 == '\x01') {
    if (param_4 == '\0') {
      lVar3 = *(longlong *)(param_1 + 0x68);
      lVar8 = (longlong)param_2 * 0x2c;
      puVar7 = (undefined4 *)(lVar3 + lVar8);
      local_68 = *puVar7;
      uStack_64 = puVar7[1];
      uStack_60 = puVar7[2];
      uStack_5c = puVar7[3];
      puVar7 = (undefined4 *)(lVar3 + 0x10 + lVar8);
      local_58 = *puVar7;
      uStack_54 = puVar7[1];
      uStack_50 = puVar7[2];
      uStack_4c = puVar7[3];
      lVar8 = lVar3 + 0x1c + lVar8;
      uStack_48 = *(undefined4 *)(lVar8 + 4);
      uStack_44 = *(undefined4 *)(lVar8 + 8);
      uStack_40 = *(uint *)(lVar8 + 0xc);
      FUN_145bce72e(param_1 + 0x18);
      FUN_14768d854(param_1 + 0x68,param_2);
      uVar6 = *(uint *)(param_1 + 0xa8);
      lVar8 = *(longlong *)(param_1 + 0xa0);
      uVar13 = 0;
      uVar12 = uVar6;
      if (0 < (int)uVar6) {
        do {
          uVar11 = (uVar12 >> 1) + uVar13;
          if (*(int *)(lVar8 + (ulonglong)uVar11 * 0x14) < param_2) {
            uVar13 = uVar11 + (uVar12 & 1);
          }
          bVar4 = 1 < uVar12;
          uVar12 = uVar12 >> 1;
        } while (bVar4);
      }
      if (((int)uVar13 < (int)uVar6) && (*(int *)(lVar8 + (ulonglong)uVar13 * 0x14) <= param_2)) {
        if (~uVar13 + uVar6 != 0) {
          pvVar1 = (void *)(lVar8 + (ulonglong)uVar13 * 0x14);
          memmove(pvVar1,(void *)((longlong)pvVar1 + 0x14),(longlong)(int)(~uVar13 + uVar6) * 0x14);
          uVar6 = *(uint *)(param_1 + 0xa8);
        }
        *(uint *)(param_1 + 0xa8) = uVar6 - 1;
LAB_14768d50b:
        FUN_14768d8c8(param_1 + 0xa0);
      }
LAB_14768d3f6:
      if ((uStack_40 & 1) != 0) {
        FUN_14769a458(&local_68,&uStack_50,param_5);
      }
      unaff_RBP = 0;
      goto LAB_14768d1d3;
    }
    unaff_RBP = CONCAT71(uVar9,3);
    if ((*(byte *)(*(longlong *)(param_1 + 0x68) + 0x28 + (longlong)param_2 * 0x2c) & 1) == 0)
    goto LAB_14768d1d3;
    puVar7 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x2c);
  }
  else {
    uVar6 = *(uint *)(param_1 + 0xa8);
    lVar8 = *(longlong *)(param_1 + 0xa0);
    uVar12 = 0;
    if (0 < (int)uVar6) {
      uVar10 = (ulonglong)uVar6;
      uVar13 = uVar6;
      do {
        uVar10 = uVar10 >> 1;
        uVar11 = (uint)uVar10 + uVar12;
        if (*(int *)(lVar8 + (ulonglong)uVar11 * 0x14) < param_2) {
          uVar12 = uVar11 + (uVar13 & 1);
        }
        bVar4 = 1 < uVar13;
        uVar13 = (uint)uVar10;
      } while (bVar4);
    }
    if ((((int)uVar12 < (int)uVar6) && (*(int *)(lVar8 + (ulonglong)uVar12 * 0x14) <= param_2)) &&
       (lVar8 + (ulonglong)uVar12 * 0x14 != -4)) {
      FUN_14769a458((longlong)param_2 * 0x2c + *(longlong *)(param_1 + 0x68));
      uVar6 = *(uint *)(param_1 + 0xa8);
      lVar8 = *(longlong *)(param_1 + 0xa0);
      uVar13 = 0;
      uVar12 = uVar6;
      if (0 < (int)uVar6) {
        do {
          uVar11 = (uVar12 >> 1) + uVar13;
          if (*(int *)(lVar8 + (ulonglong)uVar11 * 0x14) < param_2) {
            uVar13 = uVar11 + (uVar12 & 1);
          }
          bVar4 = 1 < uVar12;
          uVar12 = uVar12 >> 1;
        } while (bVar4);
      }
      unaff_RBP = CONCAT71(uVar9,1);
      if (((int)uVar13 < (int)uVar6) && (*(int *)(lVar8 + (ulonglong)uVar13 * 0x14) <= param_2)) {
        if (~uVar13 + uVar6 != 0) {
          pvVar1 = (void *)(lVar8 + (ulonglong)uVar13 * 0x14);
          memmove(pvVar1,(void *)((longlong)pvVar1 + 0x14),(longlong)(int)(~uVar13 + uVar6) * 0x14);
          uVar6 = *(uint *)(param_1 + 0xa8);
        }
        *(uint *)(param_1 + 0xa8) = uVar6 - 1;
        FUN_14768d8c8(param_1 + 0xa0);
      }
      goto LAB_14768d1d3;
    }
    unaff_RBP = CONCAT71(uVar9,1);
    if (param_4 == '\x01') {
      bVar2 = *(byte *)(*(longlong *)(param_1 + 0x68) + 0x28 + (longlong)param_2 * 0x2c);
      if ((bVar2 & 1) == 0) goto LAB_14768d1d3;
      puVar7 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x2c);
      *(byte *)(puVar7 + 10) = bVar2 | 2;
    }
    else {
      if (param_4 != '\0') goto LAB_14768d1d3;
      puVar7 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x2c);
      bVar2 = *(byte *)(*(longlong *)(param_1 + 0x68) + 0x28 + (longlong)param_2 * 0x2c);
      if ((bVar2 & 2) == 0) {
        local_68 = *puVar7;
        uStack_64 = puVar7[1];
        uStack_60 = puVar7[2];
        uStack_5c = puVar7[3];
        local_58 = puVar7[4];
        uStack_54 = puVar7[5];
        uStack_50 = puVar7[6];
        uStack_4c = puVar7[7];
        uStack_48 = puVar7[8];
        uStack_44 = puVar7[9];
        uStack_40 = puVar7[10];
        FUN_145bce72e(param_1 + 0x18);
        FUN_14768d854(param_1 + 0x68,param_2);
        uVar6 = *(uint *)(param_1 + 0xa8);
        lVar8 = *(longlong *)(param_1 + 0xa0);
        uVar13 = 0;
        uVar12 = uVar6;
        if (0 < (int)uVar6) {
          do {
            uVar11 = (uVar12 >> 1) + uVar13;
            if (*(int *)(lVar8 + (ulonglong)uVar11 * 0x14) < param_2) {
              uVar13 = uVar11 + (uVar12 & 1);
            }
            bVar4 = 1 < uVar12;
            uVar12 = uVar12 >> 1;
          } while (bVar4);
        }
        if (((int)uVar13 < (int)uVar6) && (*(int *)(lVar8 + (ulonglong)uVar13 * 0x14) <= param_2)) {
          if (~uVar13 + uVar6 != 0) {
            pvVar1 = (void *)(lVar8 + (ulonglong)uVar13 * 0x14);
            memmove(pvVar1,(void *)((longlong)pvVar1 + 0x14),(longlong)(int)(~uVar13 + uVar6) * 0x14
                   );
            uVar6 = *(uint *)(param_1 + 0xa8);
          }
          *(uint *)(param_1 + 0xa8) = uVar6 - 1;
          goto LAB_14768d50b;
        }
        goto LAB_14768d3f6;
      }
      if ((bVar2 & 1) == 0) goto LAB_14768d1d3;
    }
  }
  FUN_14769a458(puVar7,puVar7 + 6,param_5);
LAB_14768d1d3:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RBP & 0xffffffff;
}



// FUNCTION 14768d516 FUN_14768d516 body=480 status=ok
// SIG undefined FUN_14768d516(void)

undefined8 FUN_14768d516(longlong param_1,int param_2,char param_3)

{
  undefined4 *puVar1;
  void *pvVar2;
  byte *pbVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar4 = *(longlong **)(param_1 + 0xb8);
  lVar14 = (longlong)param_2;
  if (plVar4 != (longlong *)0x0) {
    cVar7 = (**(code **)(*plVar4 + 8))(plVar4,lVar14 * 0x2c + *(longlong *)(param_1 + 0x68));
    uVar9 = 3;
    if (cVar7 == '\0') goto LAB_14768d5c7;
  }
  if (param_3 == '\x01') {
    local_38 = *(undefined8 *)(*(longlong *)(param_1 + 0x68) + 0x10 + lVar14 * 0x2c);
    puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + lVar14 * 0x2c);
    local_48 = *puVar1;
    uStack_44 = puVar1[1];
    uStack_40 = puVar1[2];
    uStack_3c = puVar1[3];
    FUN_145bce72e(param_1 + 0x18);
    FUN_14768d854(param_1 + 0x68,param_2);
    uVar8 = *(uint *)(param_1 + 0xa8);
    uVar10 = (ulonglong)uVar8;
    lVar14 = *(longlong *)(param_1 + 0xa0);
    uVar13 = 0;
    if (0 < (int)uVar8) {
      do {
        uVar12 = (int)(uVar10 >> 1) + uVar13;
        uVar11 = (uint)uVar10;
        if (*(int *)(lVar14 + (ulonglong)uVar12 * 0x14) < param_2) {
          uVar13 = uVar12 + (uVar11 & 1);
        }
        uVar10 = uVar10 >> 1;
      } while (1 < uVar11);
    }
    if (((int)uVar13 < (int)uVar8) && (*(int *)(lVar14 + (ulonglong)uVar13 * 0x14) <= param_2)) {
      if (~uVar13 + uVar8 != 0) {
        pvVar2 = (void *)(lVar14 + (ulonglong)uVar13 * 0x14);
        memmove(pvVar2,(void *)((longlong)pvVar2 + 0x14),(longlong)(int)(~uVar13 + uVar8) * 0x14);
        uVar8 = *(uint *)(param_1 + 0xa8);
      }
      *(uint *)(param_1 + 0xa8) = uVar8 - 1;
      FUN_14768d8c8(param_1 + 0xa0);
    }
    uVar9 = 0;
  }
  else {
    uVar8 = *(uint *)(param_1 + 0xa8);
    lVar5 = *(longlong *)(param_1 + 0xa0);
    uVar11 = 0;
    uVar13 = uVar8;
    if (0 < (int)uVar8) {
      do {
        uVar12 = (uVar13 >> 1) + uVar11;
        if (*(int *)(lVar5 + (ulonglong)uVar12 * 0x14) < param_2) {
          uVar11 = uVar12 + (uVar13 & 1);
        }
        bVar6 = 1 < uVar13;
        uVar13 = uVar13 >> 1;
      } while (bVar6);
    }
    if (((int)uVar11 < (int)uVar8) && (*(int *)(lVar5 + (ulonglong)uVar11 * 0x14) <= param_2)) {
      if (~uVar11 + uVar8 != 0) {
        pvVar2 = (void *)(lVar5 + (ulonglong)uVar11 * 0x14);
        memmove(pvVar2,(void *)((longlong)pvVar2 + 0x14),(longlong)(int)(~uVar11 + uVar8) * 0x14);
        uVar8 = *(uint *)(param_1 + 0xa8);
      }
      *(uint *)(param_1 + 0xa8) = uVar8 - 1;
      FUN_14768d8c8(param_1 + 0xa0);
    }
    else {
      pbVar3 = (byte *)(*(longlong *)(param_1 + 0x68) + 0x28 + lVar14 * 0x2c);
      *pbVar3 = *pbVar3 | 2;
    }
    uVar9 = 1;
  }
LAB_14768d5c7:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 14768d6f8 FUN_14768d6f8 body=38 status=ok
// SIG undefined FUN_14768d6f8(void)

undefined8 FUN_14768d6f8(undefined8 param_1,int param_2)

{
  FUN_14768d71e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14768d71e FUN_14768d71e body=158 status=ok
// SIG undefined FUN_14768d71e(void)

void FUN_14768d71e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a4d8460;
  plVar3 = (longlong *)param_1[0x1a];
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
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_140f81aa4(param_1 + 0xd);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_140f81bbc(param_1 + 3);
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014768d7b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14768d7bc FUN_14768d7bc body=150 status=ok
// SIG undefined FUN_14768d7bc(void)

void FUN_14768d7bc(longlong param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  int local_3c;
  undefined4 *local_38;
  int *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = *(longlong *)(param_1 + 0x68);
  lVar6 = (longlong)param_2 * 0x2c;
  local_48 = *(undefined8 *)(lVar2 + 0x10 + lVar6);
  local_58 = *(undefined8 *)(lVar2 + lVar6);
  uStack_50 = ((undefined8 *)(lVar2 + lVar6))[1];
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  puVar1 = (undefined4 *)(lVar2 + lVar6);
  *puVar1 = *param_3;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  *(undefined8 *)(lVar2 + 0x10 + lVar6) = *(undefined8 *)(param_3 + 4);
  local_3c = param_2;
  FUN_145bce72e(param_1 + 0x18);
  local_38 = param_3;
  local_30 = &local_3c;
  FUN_1457dc220(param_1 + 0x18,local_24);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14768d854 FUN_14768d854 body=116 status=ok
// SIG undefined FUN_14768d854(void)

void FUN_14768d854(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x2c) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x2c) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x2c + 4) = uVar5;
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



// FUNCTION 14768d8c8 FUN_14768d8c8 body=62 status=ok
// SIG undefined FUN_14768d8c8(void)

void FUN_14768d8c8(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14768d906(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x14,4);
  }
  return;
}



// FUNCTION 14768d906 FUN_14768d906 body=112 status=ok
// SIG undefined FUN_14768d906(void)

ulonglong FUN_14768d906(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x14) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_14768d940;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x14,4);
      param_2 = param_2 / 0x14;
    }
  }
LAB_14768d940:
  return param_2 & 0xffffffff;
}



// FUNCTION 14768d976 FUN_14768d976 body=752 status=ok
// SIG undefined FUN_14768d976(void)

void FUN_14768d976(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 local_100;
  char local_ed;
  int local_ec;
  int local_e8;
  int local_e4;
  longlong local_e0;
  longlong local_d8;
  undefined8 local_d0;
  longlong local_c8;
  longlong local_c0;
  int local_b8;
  undefined8 local_b0;
  undefined8 *local_a8;
  int local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  int local_88;
  undefined8 local_80;
  undefined8 *local_78;
  int local_70;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (((*(short *)(param_1 + 2) != -1) && (*(short *)(param_1 + 4) != -1)) &&
     (*(short *)(param_1 + 6) != -1)) {
    local_ed = *(char *)(param_2 + 0x270);
    FUN_14150e78a(&local_60);
    local_e8 = *(int *)(param_2 + 0x10);
    lVar3 = param_1;
    uVar4 = param_4;
    if (local_50 != local_e8) {
      do {
        local_d0 = uVar4;
        local_d8 = lVar3;
        iVar10 = local_50;
        lVar8 = local_58;
        lVar6 = local_d8;
        lVar3 = *(longlong *)(*(longlong *)(local_58 + 0x60) + (longlong)local_50 * 8);
        if (local_ed == '\0') {
          *(undefined4 *)(lVar3 + 0x14) = 0;
          local_e0 = lVar3;
        }
        else {
          local_e0 = 0;
        }
        if (*(ushort *)(lVar3 + 0xc) != 0) {
          puVar11 = *(undefined8 **)(lVar3 + 0x28);
          lVar7 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
          do {
            if (*(short *)((longlong)puVar11 + 0x1e) == *(short *)(local_d8 + 6))
            goto LAB_14768da83;
            puVar11 = puVar11 + 4;
            lVar7 = lVar7 + -0x20;
          } while (lVar7 != 0);
        }
        puVar11 = (undefined8 *)0x0;
LAB_14768da83:
        iVar1 = *(int *)(lVar3 + 0x14);
        if (iVar1 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(puVar11 + 1));
        }
        LOCK();
        *(int *)(puVar11 + 3) = *(int *)(puVar11 + 3) + 1;
        UNLOCK();
        uVar4 = *puVar11;
        local_c8 = lVar8;
        if (*(ushort *)(lVar3 + 0xc) != 0) {
          puVar9 = *(undefined8 **)(lVar3 + 0x28);
          lVar8 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
          do {
            if (*(short *)((longlong)puVar9 + 0x1e) == *(short *)(lVar6 + 4)) goto LAB_14768dabc;
            puVar9 = puVar9 + 4;
            lVar8 = lVar8 + -0x20;
          } while (lVar8 != 0);
        }
        puVar9 = (undefined8 *)0x0;
LAB_14768dabc:
        iVar2 = *(int *)(lVar3 + 0x14);
        local_e4 = iVar1;
        if (iVar2 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(puVar9 + 1));
        }
        LOCK();
        *(int *)(puVar9 + 3) = *(int *)(puVar9 + 3) + 1;
        UNLOCK();
        uVar5 = *puVar9;
        if (*(ushort *)(lVar3 + 0xc) != 0) {
          puVar12 = *(undefined8 **)(lVar3 + 0x28);
          lVar8 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
          do {
            if (*(short *)((longlong)puVar12 + 0x1e) == *(short *)(lVar6 + 2)) goto LAB_14768daee;
            puVar12 = puVar12 + 4;
            lVar8 = lVar8 + -0x20;
          } while (lVar8 != 0);
        }
        puVar12 = (undefined8 *)0x0;
LAB_14768daee:
        iVar1 = *(int *)(lVar3 + 0x14);
        if (iVar1 == 1) {
          local_ec = iVar10;
          AcquireSRWLockShared((PSRWLOCK)(puVar12 + 1));
          iVar10 = local_ec;
        }
        LOCK();
        *(int *)(puVar12 + 3) = *(int *)(puVar12 + 3) + 1;
        UNLOCK();
        local_98 = *puVar12;
        local_b0 = *(undefined8 *)(lVar3 + 0x18);
        local_70 = local_e4;
        local_c0 = local_c8;
        local_108 = uVar5;
        local_100 = uVar4;
        local_b8 = iVar10;
        local_a8 = puVar12;
        local_a0 = iVar1;
        local_90 = puVar9;
        local_88 = iVar2;
        local_80 = uVar5;
        local_78 = puVar11;
        local_68 = uVar4;
        FUN_14768dc68(local_d0,&local_c0);
        FUN_14768de02(&local_b0);
        if (local_e0 != 0) {
          *(undefined4 *)(local_e0 + 0x14) = 1;
        }
        local_50 = FUN_1403b8464(&local_60,local_50 + 1);
        lVar3 = local_d8;
        uVar4 = local_d0;
      } while (local_50 != local_e8);
    }
    if (local_60 != 0) {
      if (*(char *)(local_58 + 0x270) == '\0') {
        *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      }
      else {
        LOCK();
        *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
        UNLOCK();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14768dc68 FUN_14768dc68 body=408 status=ok
// SIG undefined FUN_14768dc68(void)

void FUN_14768dc68(longlong *param_1,undefined4 *param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined1 auStack_c8 [40];
  ulonglong local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_84;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  byte local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  byte local_50;
  undefined2 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar1 = *param_1;
  local_78 = *param_2;
  uStack_74 = param_2[1];
  uStack_70 = param_2[2];
  uStack_6c = param_2[3];
  local_90 = param_3;
  FUN_140cd6274(&local_68);
  if (**(int **)(lVar1 + 0xb0) != 0 || (local_64 & 1) != 0) {
    local_98 = FUN_140732858();
    local_a0 = (ulonglong)local_68;
    if (0 < (int)local_68) {
      uVar5 = 0;
      do {
        FUN_14768de7a(lVar1,&local_84,param_5,param_6);
        local_54 = *(undefined4 *)(param_4 + uVar5 * 4);
        local_4a = *(undefined2 *)(local_90 + uVar5 * 2);
        local_58 = local_7c;
        local_60 = local_84;
        local_50 = local_64;
        FUN_1449da5a2(local_98,&local_4a,&local_60);
        lVar3 = FUN_1400e4054(*(undefined8 *)(lVar1 + 0xb0),&local_84);
        if (lVar3 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = (undefined4)
                  CONCAT71((int7)((ulonglong)param_4 >> 8),'\x02' - (*(short *)(lVar3 + 0xe) == 0));
        }
        cVar2 = FUN_1457dbe74(lVar1,local_7c,uVar4);
        if (cVar2 == '\0') {
          uVar6 = FUN_14769a16e(param_5,param_6);
          local_60 = CONCAT44(local_60._4_4_,uVar6);
          FUN_1457dbde8(lVar1,local_7c,uVar4,&local_60);
        }
        uVar5 = uVar5 + 1;
        param_5 = param_5 + 0x10;
        param_6 = param_6 + 8;
      } while (local_a0 != uVar5);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14768de02 FUN_14768de02 body=120 status=ok
// SIG undefined FUN_14768de02(void)

void FUN_14768de02(longlong param_1)

{
  int *piVar1;
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x38) + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)(param_1 + 0x40) == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)(param_1 + 0x38) + 8));
    }
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x20) + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)(param_1 + 0x28) == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)(param_1 + 0x20) + 8));
    }
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 8) + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)(param_1 + 0x10) == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014768de6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)(param_1 + 8) + 8));
      return;
    }
  }
  return;
}



// FUNCTION 14768de7a FUN_14768de7a body=138 status=ok
// SIG undefined FUN_14768de7a(void)

longlong FUN_14768de7a(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14769a078(local_40,param_3,param_4);
  FUN_1457dbd64(param_1 + 200,param_2,param_3);
  FUN_1457dbfdc(param_1,&local_44,local_40);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_2 + 8) = local_44;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14768df06 FUN_14768df06 body=752 status=ok
// SIG undefined FUN_14768df06(void)

void FUN_14768df06(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 local_100;
  char local_ed;
  int local_ec;
  int local_e8;
  int local_e4;
  longlong local_e0;
  longlong local_d8;
  undefined8 local_d0;
  longlong local_c8;
  longlong local_c0;
  int local_b8;
  undefined8 local_b0;
  undefined8 *local_a8;
  int local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  int local_88;
  undefined8 local_80;
  undefined8 *local_78;
  int local_70;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (((*(short *)(param_1 + 2) != -1) && (*(short *)(param_1 + 4) != -1)) &&
     (*(short *)(param_1 + 6) != -1)) {
    local_ed = *(char *)(param_2 + 0x270);
    FUN_14150e78a(&local_60);
    local_e8 = *(int *)(param_2 + 0x10);
    lVar3 = param_1;
    uVar4 = param_4;
    if (local_50 != local_e8) {
      do {
        local_d0 = uVar4;
        local_d8 = lVar3;
        iVar10 = local_50;
        lVar8 = local_58;
        lVar6 = local_d8;
        lVar3 = *(longlong *)(*(longlong *)(local_58 + 0x60) + (longlong)local_50 * 8);
        if (local_ed == '\0') {
          *(undefined4 *)(lVar3 + 0x14) = 0;
          local_e0 = lVar3;
        }
        else {
          local_e0 = 0;
        }
        if (*(ushort *)(lVar3 + 0xc) != 0) {
          puVar11 = *(undefined8 **)(lVar3 + 0x28);
          lVar7 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
          do {
            if (*(short *)((longlong)puVar11 + 0x1e) == *(short *)(local_d8 + 6))
            goto LAB_14768e013;
            puVar11 = puVar11 + 4;
            lVar7 = lVar7 + -0x20;
          } while (lVar7 != 0);
        }
        puVar11 = (undefined8 *)0x0;
LAB_14768e013:
        iVar1 = *(int *)(lVar3 + 0x14);
        if (iVar1 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(puVar11 + 1));
        }
        LOCK();
        *(int *)(puVar11 + 3) = *(int *)(puVar11 + 3) + 1;
        UNLOCK();
        uVar4 = *puVar11;
        local_c8 = lVar8;
        if (*(ushort *)(lVar3 + 0xc) != 0) {
          puVar9 = *(undefined8 **)(lVar3 + 0x28);
          lVar8 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
          do {
            if (*(short *)((longlong)puVar9 + 0x1e) == *(short *)(lVar6 + 4)) goto LAB_14768e04c;
            puVar9 = puVar9 + 4;
            lVar8 = lVar8 + -0x20;
          } while (lVar8 != 0);
        }
        puVar9 = (undefined8 *)0x0;
LAB_14768e04c:
        iVar2 = *(int *)(lVar3 + 0x14);
        local_e4 = iVar1;
        if (iVar2 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(puVar9 + 1));
        }
        LOCK();
        *(int *)(puVar9 + 3) = *(int *)(puVar9 + 3) + 1;
        UNLOCK();
        uVar5 = *puVar9;
        if (*(ushort *)(lVar3 + 0xc) != 0) {
          puVar12 = *(undefined8 **)(lVar3 + 0x28);
          lVar8 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
          do {
            if (*(short *)((longlong)puVar12 + 0x1e) == *(short *)(lVar6 + 2)) goto LAB_14768e07e;
            puVar12 = puVar12 + 4;
            lVar8 = lVar8 + -0x20;
          } while (lVar8 != 0);
        }
        puVar12 = (undefined8 *)0x0;
LAB_14768e07e:
        iVar1 = *(int *)(lVar3 + 0x14);
        if (iVar1 == 1) {
          local_ec = iVar10;
          AcquireSRWLockShared((PSRWLOCK)(puVar12 + 1));
          iVar10 = local_ec;
        }
        LOCK();
        *(int *)(puVar12 + 3) = *(int *)(puVar12 + 3) + 1;
        UNLOCK();
        local_98 = *puVar12;
        local_b0 = *(undefined8 *)(lVar3 + 0x18);
        local_70 = local_e4;
        local_c0 = local_c8;
        local_108 = uVar5;
        local_100 = uVar4;
        local_b8 = iVar10;
        local_a8 = puVar12;
        local_a0 = iVar1;
        local_90 = puVar9;
        local_88 = iVar2;
        local_80 = uVar5;
        local_78 = puVar11;
        local_68 = uVar4;
        FUN_14768e1f8(local_d0,&local_c0);
        FUN_14768de02(&local_b0);
        if (local_e0 != 0) {
          *(undefined4 *)(local_e0 + 0x14) = 1;
        }
        local_50 = FUN_1403b8464(&local_60,local_50 + 1);
        lVar3 = local_d8;
        uVar4 = local_d0;
      } while (local_50 != local_e8);
    }
    if (local_60 != 0) {
      if (*(char *)(local_58 + 0x270) == '\0') {
        *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      }
      else {
        LOCK();
        *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
        UNLOCK();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14768e1f8 FUN_14768e1f8 body=408 status=ok
// SIG undefined FUN_14768e1f8(void)

void FUN_14768e1f8(longlong *param_1,undefined4 *param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  undefined1 auStack_c8 [40];
  ulonglong local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_84;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  byte local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  byte local_50;
  undefined2 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar1 = *param_1;
  local_78 = *param_2;
  uStack_74 = param_2[1];
  uStack_70 = param_2[2];
  uStack_6c = param_2[3];
  local_90 = param_3;
  FUN_140cd6274(&local_68);
  if (**(int **)(lVar1 + 0xb0) != 0 || (local_64 & 1) != 0) {
    local_98 = FUN_140732858();
    local_a0 = (ulonglong)local_68;
    if (0 < (int)local_68) {
      uVar5 = 0;
      do {
        FUN_14768e392(lVar1,&local_84,param_5,param_6);
        local_54 = *(undefined4 *)(param_4 + uVar5 * 4);
        local_4a = *(undefined2 *)(local_90 + uVar5 * 2);
        local_58 = local_7c;
        local_60 = local_84;
        local_50 = local_64;
        FUN_1449da5a2(local_98,&local_4a,&local_60);
        lVar3 = FUN_1400e4054(*(undefined8 *)(lVar1 + 0xb0),&local_84);
        if (lVar3 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = (undefined4)
                  CONCAT71((int7)((ulonglong)param_4 >> 8),'\x02' - (*(short *)(lVar3 + 0xe) == 0));
        }
        cVar2 = FUN_14768e41e(lVar1,local_7c,uVar4);
        if (cVar2 == '\0') {
          FUN_14769a31c(&local_60,param_5,param_6);
          FUN_14768e4b6(lVar1,local_7c,uVar4,&local_60);
        }
        uVar5 = uVar5 + 1;
        param_5 = param_5 + 0x10;
        param_6 = param_6 + 8;
      } while (local_a0 != uVar5);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14768e392 FUN_14768e392 body=138 status=ok
// SIG undefined FUN_14768e392(void)

longlong FUN_14768e392(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14769a078(local_40,param_3,param_4);
  FUN_1457dbd64(param_1 + 200,param_2,param_3);
  FUN_14768e53e(param_1,&local_44,local_40);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_2 + 8) = local_44;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14768e41e FUN_14768e41e body=151 status=ok
// SIG undefined FUN_14768e41e(void)

ulonglong FUN_14768e41e(longlong param_1,int param_2,char param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  ulonglong uVar5;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int7 iVar6;
  
  lVar7 = (longlong)param_2 * 0x2c + *(longlong *)(param_1 + 0x68);
  iVar6 = (int7)(int3)((uint)param_2 >> 8);
  uVar5 = CONCAT71(iVar6,1);
  if (param_3 == '\x02') {
    bVar2 = *(byte *)(lVar7 + 0x28);
    if (((bVar2 & 2) == 0 & bVar2) == 0) {
      uVar3 = *(uint *)(param_1 + 0xa8);
      lVar7 = *(longlong *)(param_1 + 0xa0);
      uVar9 = 0;
      uVar8 = uVar3;
      if (0 < (int)uVar3) {
        do {
          uVar1 = (uVar8 >> 1) + uVar9;
          if (*(int *)(lVar7 + (ulonglong)uVar1 * 0x14) < param_2) {
            uVar9 = uVar1 + (uVar8 & 1);
          }
          bVar4 = 1 < uVar8;
          uVar8 = uVar8 >> 1;
        } while (bVar4);
      }
      if (((int)uVar9 < (int)uVar3) && (*(int *)(lVar7 + (ulonglong)uVar9 * 0x14) <= param_2)) {
        lVar7 = lVar7 + (ulonglong)uVar9 * 0x14;
        uVar5 = CONCAT71((int7)((ulonglong)lVar7 >> 8),lVar7 != -4);
      }
      else {
        uVar5 = 0;
      }
    }
  }
  else if (param_3 == '\x01') {
    uVar5 = CONCAT71(iVar6,*(undefined1 *)(lVar7 + 0x28));
  }
  return uVar5 & 0xffffffffffffff01;
}



// FUNCTION 14768e4b6 FUN_14768e4b6 body=134 status=ok
// SIG undefined FUN_14768e4b6(void)

void FUN_14768e4b6(longlong param_1,int param_2,char param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_38 [44];
  int local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar4 = (longlong)param_2 * 0x2c + *(longlong *)(param_1 + 0x68);
  local_c = param_2;
  if (param_3 == '\x02') {
    if ((*(byte *)(lVar4 + 0x28) & 1) == 0) {
      uVar1 = param_4[1];
      uVar2 = param_4[2];
      uVar3 = param_4[3];
      *(undefined4 *)(lVar4 + 0x18) = *param_4;
      *(undefined4 *)(lVar4 + 0x1c) = uVar1;
      *(undefined4 *)(lVar4 + 0x20) = uVar2;
      *(undefined4 *)(lVar4 + 0x24) = uVar3;
      *(byte *)(lVar4 + 0x28) = *(byte *)(lVar4 + 0x28) | 1;
    }
    else {
      FUN_14768e712(param_1 + 0xa0,&local_c,param_4);
    }
  }
  else if (param_3 == '\x01') {
    uVar1 = param_4[1];
    uVar2 = param_4[2];
    uVar3 = param_4[3];
    *(undefined4 *)(lVar4 + 0x18) = *param_4;
    *(undefined4 *)(lVar4 + 0x1c) = uVar1;
    *(undefined4 *)(lVar4 + 0x20) = uVar2;
    *(undefined4 *)(lVar4 + 0x24) = uVar3;
    *(byte *)(lVar4 + 0x28) = *(byte *)(lVar4 + 0x28) | 3;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14768e53e FUN_14768e53e body=238 status=ok
// SIG undefined FUN_14768e53e(void)

int * FUN_14768e53e(longlong param_1,int *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  int local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)(param_1 + 0x18);
  uVar2 = FUN_145bce7e6(param_3);
  iVar3 = FUN_1457dc0cc(plVar1,uVar2,param_3);
  if (((iVar3 == -1) || (lVar4 = (longlong)iVar3 * 0x24 + *plVar1, lVar4 == 0)) ||
     (iVar3 = *(int *)(lVar4 + 0x18), *param_2 = iVar3, iVar3 == -1)) {
    local_68 = *(undefined8 *)(param_3 + 4);
    local_78._0_4_ = *param_3;
    local_78._4_4_ = param_3[1];
    uStack_70._0_4_ = param_3[2];
    uStack_70._4_4_ = param_3[3];
    FUN_14768e62e(param_1 + 0x68,local_48);
    *(undefined8 *)(local_40 + 8) = local_58;
    local_40[4] = (undefined4)local_68;
    local_40[5] = local_68._4_4_;
    local_40[6] = uStack_60;
    local_40[7] = uStack_5c;
    *local_40 = (undefined4)local_78;
    local_40[1] = local_78._4_4_;
    local_40[2] = (undefined4)uStack_70;
    local_40[3] = uStack_70._4_4_;
    *(undefined1 *)(local_40 + 10) = 0;
    *param_2 = local_48[0];
    local_78 = param_3;
    uStack_70 = param_2;
    FUN_1457dc220(plVar1,local_48,&local_78);
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14768e62e FUN_14768e62e body=228 status=ok
// SIG undefined FUN_14768e62e(void)

int * FUN_14768e62e(longlong *param_1,int *param_2)

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
      FUN_1458dc740(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x2c);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x2c) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x2c + *param_1;
  return param_2;
}



// FUNCTION 14768e712 FUN_14768e712 body=208 status=ok
// SIG undefined FUN_14768e712(void)

void FUN_14768e712(longlong *param_1,int *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  int *piVar10;
  
  uVar2 = *(uint *)(param_1 + 1);
  lVar8 = *param_1;
  if ((int)uVar2 < 1) {
    uVar9 = 0;
  }
  else {
    iVar6 = *param_2;
    uVar9 = 0;
    uVar7 = uVar2;
    do {
      uVar1 = (uVar7 >> 1) + uVar9;
      if (*(int *)(lVar8 + (ulonglong)uVar1 * 0x14) < iVar6) {
        uVar9 = uVar1 + (uVar7 & 1);
      }
      bVar3 = 1 < uVar7;
      uVar7 = uVar7 >> 1;
    } while (bVar3);
    if (((int)uVar9 < (int)uVar2) && (*(int *)(lVar8 + (ulonglong)uVar9 * 0x14) <= iVar6)) {
      piVar10 = (int *)(lVar8 + (ulonglong)uVar9 * 0x14);
      goto LAB_14768e7b7;
    }
  }
  *(uint *)(param_1 + 1) = uVar2 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar2) {
    FUN_14768e7e2(param_1,uVar2);
    lVar8 = *param_1;
  }
  lVar4 = (ulonglong)uVar9 * 0x14;
  memmove((void *)(lVar8 + lVar4 + 0x14),(void *)(lVar8 + lVar4),(ulonglong)(uVar2 - uVar9) * 0x14);
  piVar10 = (int *)(lVar4 + *param_1);
  iVar6 = *param_2;
LAB_14768e7b7:
  *piVar10 = iVar6;
  uVar5 = param_3[1];
  *(undefined8 *)(piVar10 + 1) = *param_3;
  *(undefined8 *)(piVar10 + 3) = uVar5;
  return;
}



// FUNCTION 14768e7e2 FUN_14768e7e2 body=147 status=ok
// SIG undefined FUN_14768e7e2(void)

void FUN_14768e7e2(longlong param_1,int param_2)

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



// FUNCTION 14768e886 FUN_14768e886 body=93 status=ok
// SIG undefined FUN_14768e886(void)

void FUN_14768e886(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a4d7700;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a4d84b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14768e8e4 FUN_14768e8e4 body=93 status=ok
// SIG undefined FUN_14768e8e4(void)

void FUN_14768e8e4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a4d7700;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a4d84b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14768e942 FUN_14768e942 body=126 status=ok
// SIG undefined FUN_14768e942(void)

void FUN_14768e942(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a4d7700;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a4d84b0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014768e9b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14768e9de FUN_14768e9de body=93 status=ok
// SIG undefined FUN_14768e9de(void)

void FUN_14768e9de(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a481140;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a4d8520;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14768ea3c FUN_14768ea3c body=93 status=ok
// SIG undefined FUN_14768ea3c(void)

void FUN_14768ea3c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a481140;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a4d8520;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14768ea9a FUN_14768ea9a body=126 status=ok
// SIG undefined FUN_14768ea9a(void)

void FUN_14768ea9a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a481140;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a4d8520;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014768eb09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14768eb26 FUN_14768eb26 body=451 status=ok
// SIG undefined FUN_14768eb26(void)

void FUN_14768eb26(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  ushort uVar1;
  longlong lVar2;
  ushort uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 unaff_RBP;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = *(ushort *)(param_2 + 0xe);
  lVar2 = *(longlong *)(param_2 + 0x18);
  lVar4 = FUN_14009d2a0();
  if (*(ushort *)(param_2 + 0xc) == 0) {
    uVar7 = 0;
  }
  else {
    lVar5 = *(longlong *)(param_2 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)(lVar5 + 0x1e) == *(short *)(lVar4 + 0x11a)) goto LAB_14768eb8d;
      lVar5 = lVar5 + 0x20;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
    lVar5 = 0;
LAB_14768eb8d:
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),lVar5 != 0);
  }
  lVar4 = FUN_14009d2a0();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    lVar5 = *(longlong *)(param_2 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)(lVar5 + 0x1e) == *(short *)(lVar4 + 0x10a)) {
        if (lVar5 != 0) {
          if (uVar1 != 0) {
            uVar8 = 0;
            do {
              local_68 = *(longlong *)(param_3 + uVar8 * 8);
              if ((DAT_14c950c29 == '\x01') && (local_68 != 0)) {
                FUN_1456cec3c();
              }
              local_60 = *(undefined8 *)(param_3 + 8 + uVar8 * 8);
              local_58 = *(undefined8 *)(param_4 + uVar8 * 4);
              local_50 = 2;
              local_4c = 0xffffffff;
              uVar3 = FUN_140fc47ee(param_1,*(undefined2 *)(lVar2 + uVar8),&local_68,
                                    uVar7 & 0xffffffff);
              *(undefined1 *)(*(longlong *)(param_1 + 0xf0) + 0x3c + (ulonglong)uVar3 * 0x40) = 1;
              uVar8 = uVar8 + 2;
            } while ((uint)uVar1 * 2 != uVar8);
          }
          goto LAB_14768ecc2;
        }
        break;
      }
      lVar5 = lVar5 + 0x20;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  if (uVar1 != 0) {
    uVar8 = 0;
    do {
      local_68 = *(longlong *)(param_3 + uVar8 * 8);
      if ((DAT_14c950c29 == '\x01') && (local_68 != 0)) {
        FUN_1456cec3c();
      }
      local_60 = *(undefined8 *)(param_3 + 8 + uVar8 * 8);
      local_58 = *(undefined8 *)(param_4 + uVar8 * 4);
      local_50 = 2;
      local_4c = 0xffffffff;
      FUN_140fc47ee(param_1,*(undefined2 *)(lVar2 + uVar8),&local_68,uVar7 & 0xffffffff);
      uVar8 = uVar8 + 2;
    } while ((uint)uVar1 * 2 != uVar8);
  }
LAB_14768ecc2:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14768ecea FUN_14768ecea body=1577 status=ok
// SIG undefined FUN_14768ecea(void)

void FUN_14768ecea(longlong param_1,longlong *param_2,undefined8 *param_3,undefined2 param_4,
                  longlong *param_5,longlong param_6)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  double *pdVar4;
  char cVar5;
  longlong lVar6;
  double *pdVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined2 uVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_228 [32];
  uint local_208;
  undefined2 local_1f8;
  undefined2 local_1f6;
  undefined4 local_1f4;
  undefined8 *local_1f0;
  longlong *local_1e8;
  longlong local_1e0;
  undefined8 local_1d8;
  longlong local_1d0;
  undefined2 local_1c6;
  float local_1c4 [9];
  undefined8 local_1a0;
  undefined **local_198;
  undefined2 local_190;
  longlong local_188;
  longlong local_180;
  undefined1 local_178;
  undefined2 local_170;
  undefined4 local_16e;
  undefined1 local_16a;
  undefined2 local_168;
  undefined8 local_160;
  undefined1 local_158;
  undefined1 local_150;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined1 local_138;
  undefined7 uStack_137;
  undefined8 local_130;
  char local_128;
  undefined2 local_120;
  undefined4 local_11e;
  char local_11a;
  undefined2 local_118;
  undefined8 local_110;
  char local_108;
  undefined4 local_100;
  undefined8 local_f8;
  char local_f0;
  undefined **local_e0;
  int local_d8;
  double *local_d0;
  undefined8 local_c8;
  char local_c0;
  undefined2 local_b8;
  undefined2 uStack_b6;
  undefined1 local_b4;
  undefined1 uStack_b3;
  char local_b2;
  undefined2 local_b0;
  undefined8 local_a8;
  char local_a0;
  undefined4 local_98;
  undefined8 local_90;
  char local_88;
  undefined2 local_80;
  undefined2 local_7e;
  undefined2 local_7c;
  undefined1 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_228;
  local_1f6 = param_4;
  lVar6 = FUN_14009d2a0();
  pdVar7 = (double *)FUN_14038fb82();
  local_1c4[0] = 0.0;
  lVar11 = param_5[1];
  local_1e0 = lVar6;
  local_1d0 = param_1;
  if ((longlong)(int)lVar11 == 0) {
    cVar5 = false;
  }
  else {
    lVar6 = *param_5;
    cVar5 = false;
    lVar9 = 0;
    local_1f0 = param_3;
    local_1e8 = param_2;
    do {
      FUN_1475db864(param_1 + 0x28,&local_e0,*(undefined2 *)(lVar6 + lVar9),
                    *(undefined2 *)((longlong)pdVar7 + 0xb6));
      pdVar4 = local_d0;
      if (local_d0 != (double *)0x0) {
        local_1c4[0] = (float)*local_d0;
        cVar5 = true;
      }
      if (local_e0 != (undefined **)0x0) {
        LOCK();
        *(int *)(local_e0 + 3) = *(int *)(local_e0 + 3) + -1;
        UNLOCK();
        if (local_d8 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(local_e0 + 1));
        }
      }
    } while ((pdVar4 == (double *)0x0) &&
            (bVar12 = (longlong)(int)lVar11 * 2 + -2 != lVar9, lVar9 = lVar9 + 2, bVar12));
    param_2 = local_1e8;
    lVar11 = local_1e0;
    param_3 = local_1f0;
    if ((bool)cVar5) goto LAB_14768ef22;
  }
  lVar11 = local_1e0;
  plVar8 = (longlong *)FUN_1406f4b62(param_2);
  if (plVar8 != (longlong *)0x0) {
    lVar6 = FUN_144a772c4();
    if ((*(int *)(lVar6 + 0x38) <= *(int *)(plVar8[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar8[2] + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
        lVar6 + 0x30)) {
      local_148 = (undefined4)*param_3;
      local_144 = 0;
      local_140 = (undefined4)((ulonglong)*param_3 >> 0x20);
      local_13c = *(undefined4 *)((longlong)param_3 + 0xc);
      local_138 = *(undefined1 *)(param_3 + 1);
      local_c0 = 0xff;
      local_b8 = 0xffff;
      uStack_b6 = 0xffff;
      local_b4 = 0;
      local_208 = 3;
      cVar5 = (**(code **)(*plVar8 + 0x3c0))(plVar8,0);
      if (cVar5 != '\0') {
        local_1c4[0] = local_e0._0_4_;
      }
      goto LAB_14768ef22;
    }
  }
  lVar6 = FUN_1406f4b62(param_2);
  if (lVar6 != 0) {
    lVar9 = FUN_140a2e7a0();
    if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
        == lVar9 + 0x30)) {
      cVar5 = FUN_1409b8518(lVar6,*param_3,local_1c4);
    }
  }
LAB_14768ef22:
  uVar1 = *(undefined2 *)((longlong)pdVar7 + 0xfa);
  lVar6 = *param_2;
  if ((lVar6 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar6);
  }
  lVar9 = param_2[1];
  if ((lVar6 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar6);
  }
  uVar10 = *(undefined2 *)(lVar11 + 0x5c);
  uVar3 = *(undefined4 *)(param_6 + 0x16);
  if ((lVar6 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar6);
  }
  uVar2 = *(undefined2 *)(lVar11 + 0xbc);
  local_178 = 1;
  local_190 = uVar1;
  local_188 = lVar6;
  if ((lVar6 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar6);
  }
  local_16a = 1;
  local_158 = 1;
  local_160 = 0;
  local_150 = 0;
  local_198 = &PTR_FUN_14a4d8590;
  local_208 = CONCAT31(local_208._1_3_,cVar5) & 0xffffff01;
  local_180 = lVar9;
  local_170 = uVar10;
  local_16e = uVar3;
  local_168 = uVar2;
  FUN_14768f314(&local_198,&local_148,*(undefined2 *)((longlong)pdVar7 + 0xb6),local_1c4);
  lVar11 = local_1e0;
  local_80 = *(undefined2 *)((longlong)pdVar7 + 0xb4);
  uVar1 = (undefined2)local_140;
  if (local_128 == '\x01') {
    pdVar7 = (double *)CONCAT71(uStack_137,local_138);
    if ((pdVar7 != (double *)0x0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(pdVar7);
    }
    local_1d8 = local_130;
  }
  if (local_128 == '\0') {
    uVar10 = *(undefined2 *)(lVar11 + 0x11a);
    local_d8 = CONCAT22(local_d8._2_2_,uVar1);
    local_c0 = local_128;
    local_98 = local_100;
  }
  else {
    local_1f0 = (undefined8 *)CONCAT44(local_1f0._4_4_,local_100);
    local_1e8 = (longlong *)CONCAT62(local_1e8._2_6_,local_80);
    local_1f4 = local_11e;
    local_1f8 = local_118;
    if ((pdVar7 != (double *)0x0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(pdVar7);
    }
    uVar10 = *(undefined2 *)(lVar11 + 0x11a);
    if ((pdVar7 != (double *)0x0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(pdVar7);
    }
    uVar3 = local_1f4;
    uVar2 = local_1f8;
    local_e0 = &PTR_FUN_14a4d8630;
    local_d8 = CONCAT22(local_d8._2_2_,uVar1);
    local_c0 = local_128;
    local_d0 = pdVar7;
    if ((pdVar7 != (double *)0x0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(pdVar7);
    }
    local_c8 = local_1d8;
    local_80 = local_1e8._0_2_;
    local_11e = uVar3;
    local_118 = uVar2;
    local_98 = local_1f0._0_4_;
  }
  lVar11 = local_1d0;
  local_b8 = local_120;
  local_b2 = local_11a;
  if (local_11a != '\0') {
    uStack_b6 = (undefined2)local_11e;
    local_b4 = (undefined1)((uint)local_11e >> 0x10);
    uStack_b3 = (undefined1)((uint)local_11e >> 0x18);
  }
  local_a0 = local_108;
  if (local_108 != '\0') {
    local_a8 = local_110;
  }
  local_88 = local_f0;
  if (local_f0 != '\0') {
    local_90 = local_f8;
  }
  local_7e = local_1f6;
  local_78 = 1;
  local_e0 = &PTR_FUN_14a4d8610;
  local_1a0 = 0x10000000000;
  lVar6 = local_1d0 + 0x28;
  local_b0 = local_118;
  local_7c = uVar10;
  FUN_14768f39c(&local_e0,&local_1c6,lVar6);
  *(undefined2 *)(param_6 + 0x14) = local_1c6;
  if (local_c0 == '\x01') {
    local_c0 = '\0';
  }
  FUN_140dbd3cc(lVar6,*(undefined2 *)*param_5,local_1c6,*(longlong *)(lVar11 + 600) + 0x200);
  if ((local_70 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14768f314 FUN_14768f314 body=134 status=ok
// SIG undefined FUN_14768f314(void)

undefined8 *
FUN_14768f314(longlong param_1,undefined8 *param_2,undefined2 param_3,float *param_4,
             undefined1 param_5)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  undefined2 local_30;
  undefined1 local_2e;
  double local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = &local_30;
  local_2e = param_5;
  local_28 = (double)*param_4;
  local_20 = 1;
  uVar1 = *(undefined1 *)(param_1 + 0x48);
  local_30 = param_3;
  FUN_14768f8f4(param_2 + 1,param_1 + 8,param_1 + 0x28,param_1 + 0x30);
  *(undefined1 *)(param_2 + 0xc) = uVar1;
  *param_2 = &PTR_FUN_14a4d85d0;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14768f39c FUN_14768f39c body=308 status=ok
// SIG undefined FUN_14768f39c(void)

undefined2 * FUN_14768f39c(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_58 [2];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58[0] = param_4;
  FUN_14768fd16(local_58,param_1 + 8);
  local_48 = 0;
  local_40 = 0x200000000;
  local_80 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x68) * '\x02' + '\x01',param_4
                ,local_58);
  FUN_140560464(param_3,&local_98,param_4);
  if (CONCAT44(uStack_94,local_98) == 0) {
    local_78 = 0;
  }
  else {
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    FUN_14768fd82(&local_78,param_1 + 8);
    local_78 = CONCAT44(uStack_94,local_98);
  }
  uStack_70 = uStack_90;
  uStack_6c = 1;
  FUN_14163869e(local_58,&local_78,&local_80);
  *param_2 = local_88;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14768f4d2 FUN_14768f4d2 body=69 status=ok
// SIG undefined FUN_14768f4d2(void)

undefined8 * FUN_14768f4d2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4d85b0;
  if (*(char *)(param_1 + 8) == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x2e) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x2e) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14768f518 FUN_14768f518 body=78 status=ok
// SIG undefined FUN_14768f518(void)

undefined8 FUN_14768f518(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_14768f64a();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14768f568 FUN_14768f568 body=69 status=ok
// SIG undefined FUN_14768f568(void)

void FUN_14768f568(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  FUN_140dba9e6(param_3,*(undefined2 *)(param_1 + 8));
  FUN_140dba9e6(param_3,*(undefined2 *)(param_1 + 0x28));
  FUN_140dba9e6(param_3,*(undefined2 *)(param_1 + 0x30));
  if (*(char *)(param_1 + 0x48) == '\x01') {
    *param_4 = 1;
  }
  return;
}



// FUNCTION 14768f5ae FUN_14768f5ae body=85 status=ok
// SIG undefined FUN_14768f5ae(void)

void FUN_14768f5ae(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = *param_3;
  if (lVar2 == 0) {
    return;
  }
  uVar1 = (undefined4)param_3[1];
  FUN_140e90c06(param_1 + 8,lVar2,uVar1);
  FUN_140dbd8a8(param_1 + 0x28,lVar2,uVar1);
  FUN_147563f92(param_1 + 0x30,lVar2,uVar1);
  return;
}



// FUNCTION 14768f604 FUN_14768f604 body=69 status=ok
// SIG undefined FUN_14768f604(void)

undefined8 * FUN_14768f604(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4d85b0;
  if (*(char *)(param_1 + 8) == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x2e) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x2e) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14768f64a FUN_14768f64a body=268 status=ok
// SIG undefined FUN_14768f64a(void)

undefined2 *
FUN_14768f64a(undefined8 param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined2 local_78;
  undefined8 local_70;
  char local_61;
  undefined1 local_60 [16];
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_61 = '\0';
  FUN_14768f568(param_1,param_2,param_4,&local_61);
  local_50 = 0;
  local_48 = 0x200000000;
  local_70 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),local_61 * '\x02' + '\x01',param_4,local_60);
  FUN_140560464(param_3,&local_88,param_4);
  FUN_14768f5ae(param_1);
  local_98 = local_88;
  local_90 = local_80;
  local_8c = 1;
  FUN_14163869e(local_60,&local_98,&local_70);
  *param_2 = local_78;
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14768f758 FUN_14768f758 body=79 status=ok
// SIG undefined FUN_14768f758(void)

undefined8 * FUN_14768f758(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4d85f0;
  if (*(char *)(param_1 + 0xb) == '\x01') {
    *(undefined1 *)(param_1 + 0xb) = 0;
  }
  if (*(char *)(param_1 + 8) == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x2e) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x2e) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14768f7a8 FUN_14768f7a8 body=78 status=ok
// SIG undefined FUN_14768f7a8(void)

undefined8 FUN_14768f7a8(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_14768f9a0();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14768f7f8 FUN_14768f7f8 body=82 status=ok
// SIG undefined FUN_14768f7f8(void)

void FUN_14768f7f8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_14768fad6(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x60) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14768f84c FUN_14768f84c body=86 status=ok
// SIG undefined FUN_14768f84c(void)

void FUN_14768f84c(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_3 != 0) {
    local_18 = param_3[2];
    local_28 = (undefined4)*param_3;
    uStack_24 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_20 = (undefined4)param_3[1];
    uStack_1c = *(undefined4 *)((longlong)param_3 + 0xc);
    FUN_14768fb26(&local_28,param_1 + 8);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14768f8a4 FUN_14768f8a4 body=79 status=ok
// SIG undefined FUN_14768f8a4(void)

undefined8 * FUN_14768f8a4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4d85f0;
  if (*(char *)(param_1 + 0xb) == '\x01') {
    *(undefined1 *)(param_1 + 0xb) = 0;
  }
  if (*(char *)(param_1 + 8) == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x2e) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x2e) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14768f8f4 FUN_14768f8f4 body=171 status=ok
// SIG undefined FUN_14768f8f4(void)

undefined2 *
FUN_14768f8f4(undefined2 *param_1,undefined2 *param_2,undefined2 *param_3,undefined2 *param_4,
             undefined4 *param_5)

{
  char cVar1;
  longlong lVar2;
  
  *param_1 = *param_2;
  cVar1 = *(char *)(param_2 + 0xc);
  *(char *)(param_1 + 0xc) = cVar1;
  if (cVar1 == '\x01') {
    lVar2 = *(longlong *)(param_2 + 4);
    *(longlong *)(param_1 + 4) = lVar2;
    if ((lVar2 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  }
  param_1[0x10] = *param_3;
  cVar1 = *(char *)(param_3 + 3);
  *(char *)(param_1 + 0x13) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_3 + 1);
  }
  param_1[0x14] = *param_4;
  cVar1 = *(char *)(param_4 + 8);
  *(char *)(param_1 + 0x1c) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_4 + 4);
  }
  *(undefined4 *)(param_1 + 0x20) = *param_5;
  cVar1 = *(char *)(param_5 + 4);
  *(char *)(param_1 + 0x28) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_5 + 2);
  }
  return param_1;
}



// FUNCTION 14768f9a0 FUN_14768f9a0 body=308 status=ok
// SIG undefined FUN_14768f9a0(void)

undefined2 * FUN_14768f9a0(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_58 [2];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58[0] = param_4;
  FUN_14768fad6(local_58,param_1 + 8);
  local_48 = 0;
  local_40 = 0x200000000;
  local_80 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x60) * '\x02' + '\x01',param_4
                ,local_58);
  FUN_140560464(param_3,&local_98,param_4);
  if (CONCAT44(uStack_94,local_98) == 0) {
    local_78 = 0;
  }
  else {
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    FUN_14768fb26(&local_78,param_1 + 8);
    local_78 = CONCAT44(uStack_94,local_98);
  }
  uStack_70 = uStack_90;
  uStack_6c = 1;
  FUN_14163869e(local_58,&local_78,&local_80);
  *param_2 = local_88;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14768fad6 FUN_14768fad6 body=79 status=ok
// SIG undefined FUN_14768fad6(void)

void FUN_14768fad6(undefined8 *param_1,undefined2 *param_2)

{
  FUN_140dba9e6(*param_1,*param_2);
  FUN_140dba9e6(*param_1,param_2[0x10]);
  FUN_140dba9e6(*param_1,param_2[0x14]);
  if (*(char *)(param_2 + 0x21) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x20]);
    return;
  }
  return;
}



// FUNCTION 14768fb26 FUN_14768fb26 body=84 status=ok
// SIG undefined FUN_14768fb26(void)

void FUN_14768fb26(undefined8 *param_1,longlong param_2)

{
  FUN_140e90c06(param_2,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140dbd8a8(param_2 + 0x20,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_147563f92(param_2 + 0x28,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_1476866a0(param_2 + 0x40,*param_1,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 14768fb7a FUN_14768fb7a body=79 status=ok
// SIG undefined FUN_14768fb7a(void)

undefined8 * FUN_14768fb7a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4d8630;
  if (*(char *)(param_1 + 0xb) == '\x01') {
    *(undefined1 *)(param_1 + 0xb) = 0;
  }
  if (*(char *)(param_1 + 8) == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x2e) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x2e) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14768fbca FUN_14768fbca body=78 status=ok
// SIG undefined FUN_14768fbca(void)

undefined8 FUN_14768fbca(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_14768f39c();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14768fc1a FUN_14768fc1a body=82 status=ok
// SIG undefined FUN_14768fc1a(void)

void FUN_14768fc1a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_14768fd16(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x68) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14768fc6e FUN_14768fc6e body=86 status=ok
// SIG undefined FUN_14768fc6e(void)

void FUN_14768fc6e(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_3 != 0) {
    local_18 = param_3[2];
    local_28 = (undefined4)*param_3;
    uStack_24 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_20 = (undefined4)param_3[1];
    uStack_1c = *(undefined4 *)((longlong)param_3 + 0xc);
    FUN_14768fd82(&local_28,param_1 + 8);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14768fcc6 FUN_14768fcc6 body=79 status=ok
// SIG undefined FUN_14768fcc6(void)

undefined8 * FUN_14768fcc6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4d8630;
  if (*(char *)(param_1 + 0xb) == '\x01') {
    *(undefined1 *)(param_1 + 0xb) = 0;
  }
  if (*(char *)(param_1 + 8) == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x2e) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x2e) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14768fd16 FUN_14768fd16 body=107 status=ok
// SIG undefined FUN_14768fd16(void)

void FUN_14768fd16(undefined8 *param_1,undefined2 *param_2)

{
  FUN_140dba9e6(*param_1,*param_2);
  FUN_140dba9e6(*param_1,param_2[0x10]);
  FUN_140dba9e6(*param_1,param_2[0x14]);
  if (*(char *)(param_2 + 0x21) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x20]);
  }
  FUN_140dba9e6(*param_1,param_2[0x2c]);
  FUN_140dba9e6(*param_1,param_2[0x2d]);
  FUN_140dba9e6(*param_1,param_2[0x2e]);
  return;
}



// FUNCTION 14768fd82 FUN_14768fd82 body=84 status=ok
// SIG undefined FUN_14768fd82(void)

void FUN_14768fd82(undefined8 *param_1,longlong param_2)

{
  FUN_140e90c06(param_2,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140dbd8a8(param_2 + 0x20,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_147563f92(param_2 + 0x28,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_1476866a0(param_2 + 0x40,*param_1,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 14768fdd6 FUN_14768fdd6 body=2240 status=ok
// SIG undefined FUN_14768fdd6(void)

void FUN_14768fdd6(longlong param_1,longlong *param_2,ulonglong *param_3,undefined2 param_4,
                  longlong *param_5,longlong param_6)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  double *pdVar5;
  byte bVar6;
  double *pdVar7;
  longlong lVar8;
  longlong lVar9;
  undefined2 uVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_478 [32];
  byte local_458;
  undefined2 local_448;
  undefined2 local_446;
  undefined2 local_444;
  undefined2 local_442;
  undefined4 local_440;
  undefined2 local_43c;
  undefined2 local_43a;
  ulonglong *local_438;
  longlong *local_430;
  longlong local_428;
  undefined4 local_41c;
  undefined8 local_418;
  longlong local_410;
  undefined8 local_408;
  undefined2 local_3fa;
  double local_3f8;
  double dStack_3f0;
  double local_3e8;
  double dStack_3e0;
  undefined8 local_3b8;
  undefined **local_3b0;
  undefined2 local_3a8;
  longlong local_3a0;
  longlong local_398;
  undefined1 local_390;
  undefined2 local_388;
  undefined4 local_386;
  undefined1 local_382;
  undefined2 local_380;
  undefined8 local_378;
  undefined1 local_370;
  undefined2 local_368;
  undefined8 local_360;
  undefined1 local_358;
  undefined2 local_350;
  undefined8 local_348;
  undefined1 local_340;
  undefined1 local_338;
  undefined1 local_330 [152];
  float local_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  double *local_288;
  undefined8 local_280;
  char local_278;
  undefined2 local_270;
  undefined4 local_26e;
  char local_26a;
  undefined2 local_268;
  undefined8 local_260;
  char local_258;
  undefined2 local_250;
  undefined8 local_248;
  char local_240;
  undefined2 local_238;
  undefined8 local_230;
  char local_228;
  undefined2 local_220;
  undefined8 local_218;
  char local_210;
  undefined4 local_208;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  char local_1e0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined4 local_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined8 local_194;
  undefined8 uStack_18c;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined **local_160;
  int local_158;
  undefined4 local_154;
  double *local_150;
  undefined8 local_148;
  char local_140;
  undefined2 local_138;
  undefined4 local_136;
  char local_132;
  undefined2 local_130;
  undefined8 local_128;
  char local_120;
  undefined2 local_118;
  undefined8 local_110;
  char local_108;
  undefined2 local_100;
  undefined8 local_f8;
  char local_f0;
  undefined2 local_e8;
  undefined8 local_e0;
  char local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  char local_a8;
  undefined2 local_a0;
  undefined2 local_9e;
  undefined2 local_9c;
  undefined1 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_478;
  local_43a = param_4;
  local_428 = FUN_14009d2a0();
  pdVar7 = (double *)FUN_14038fb82();
  local_3e8 = 0.0;
  dStack_3e0 = 0.0;
  local_3f8 = 0.0;
  dStack_3f0 = 0.0;
  lVar8 = param_5[1];
  local_410 = param_1;
  if ((longlong)(int)lVar8 != 0) {
    lVar9 = *param_5;
    bVar6 = 0;
    lVar11 = 0;
    local_438 = param_3;
    local_430 = param_2;
    do {
      FUN_1475e1ab0(param_1 + 0x28,&local_160,*(undefined2 *)(lVar9 + lVar11),
                    *(undefined2 *)((longlong)pdVar7 + 0xc2));
      pdVar5 = local_150;
      if (local_150 != (double *)0x0) {
        local_3f8 = *local_150;
        dStack_3f0 = local_150[1];
        local_3e8 = local_150[2];
        dStack_3e0 = local_150[3];
        bVar6 = 1;
      }
      if (local_160 != (undefined **)0x0) {
        LOCK();
        *(int *)(local_160 + 3) = *(int *)(local_160 + 3) + -1;
        UNLOCK();
        if (local_158 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(local_160 + 1));
        }
      }
    } while ((pdVar5 == (double *)0x0) &&
            (bVar12 = (longlong)(int)lVar8 * 2 + -2 != lVar11, lVar11 = lVar11 + 2, bVar12));
    param_2 = local_430;
    param_3 = local_438;
    if (bVar6 != 0) goto LAB_14768ff85;
  }
  bVar6 = 0;
  local_298 = 0.0;
  fStack_294 = 0.0;
  fStack_290 = 0.0;
  fStack_28c = 1.0;
  lVar8 = FUN_1406f4b62(param_2);
  if (lVar8 == 0) {
LAB_14768feec:
    lVar8 = FUN_1406f4b62(param_2);
    if (lVar8 != 0) {
      lVar9 = FUN_140a2e7a0();
      if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8
           ) == lVar9 + 0x30)) {
        bVar6 = FUN_147bc80bc(lVar8,*param_3,&local_298);
      }
    }
  }
  else {
    lVar9 = FUN_144a772c4();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(lVar9 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
        != lVar9 + 0x30)) goto LAB_14768feec;
    local_160 = (undefined **)(*param_3 & 0xffffffff);
    local_158 = (int)(*param_3 >> 0x20);
    local_154 = *(undefined4 *)((longlong)param_3 + 0xc);
    local_150 = (double *)CONCAT71(local_150._1_7_,(char)param_3[1]);
    bVar6 = FUN_140fc5922(lVar8,&local_160,&local_298,0);
  }
  if ((bVar6 & 1) != 0) {
    dStack_3e0 = (double)fStack_28c;
    local_3e8 = (double)fStack_290;
    dStack_3f0 = (double)fStack_294;
    local_3f8 = (double)local_298;
  }
LAB_14768ff85:
  lVar9 = local_428;
  local_430 = (longlong *)CONCAT62(local_430._2_6_,*(undefined2 *)((longlong)pdVar7 + 0xfa));
  lVar8 = *param_2;
  if ((lVar8 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar8);
  }
  local_438 = (ulonglong *)param_2[1];
  if ((lVar8 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar8);
  }
  uVar10 = *(undefined2 *)(lVar9 + 0x5c);
  uVar4 = *(undefined4 *)(param_6 + 0x16);
  if ((lVar8 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar8);
  }
  uVar1 = *(undefined2 *)(lVar9 + 0xbc);
  if ((lVar8 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar8);
  }
  uVar2 = *(undefined2 *)(lVar9 + 0xbe);
  if ((lVar8 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar8);
  }
  uVar3 = *(undefined2 *)(lVar9 + 0xc0);
  local_3a8 = local_430._0_2_;
  local_390 = 1;
  local_3a0 = lVar8;
  if ((lVar8 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar8);
  }
  local_398 = (longlong)local_438;
  local_382 = 1;
  local_370 = 1;
  local_378 = 0;
  local_358 = 1;
  local_360 = 0;
  local_340 = 1;
  local_348 = 0;
  local_338 = 0;
  local_3b0 = &PTR_FUN_14a4d8650;
  local_408 = 0;
  local_388 = uVar10;
  local_386 = uVar4;
  local_380 = uVar1;
  local_368 = uVar2;
  local_350 = uVar3;
  FUN_147690698(&local_3b0,local_330,*(undefined2 *)(local_428 + 0xc2));
  local_458 = bVar6 & 1;
  FUN_147690728(local_330,&local_298,*(undefined2 *)((longlong)pdVar7 + 0xc2),&local_3f8);
  local_a0 = *(undefined2 *)(pdVar7 + 0x18);
  uVar10 = fStack_290._0_2_;
  if (local_278 == '\x01') {
    if ((local_288 != (double *)0x0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(local_288);
    }
    local_418 = local_280;
    pdVar7 = local_288;
  }
  if (local_1e0 == '\x01') {
    local_1b8 = local_1f0;
    uStack_1b0 = uStack_1e8;
    local_1c8 = local_200;
    uStack_1c4 = uStack_1fc;
    uStack_1c0 = uStack_1f8;
    uStack_1bc = uStack_1f4;
  }
  local_43c = local_270;
  local_41c = local_26e;
  local_438 = (ulonglong *)CONCAT62(local_438._2_6_,local_268);
  local_430 = (longlong *)CONCAT62(local_430._2_6_,local_250);
  if ((local_278 != '\0') && ((pdVar7 != (double *)0x0 & DAT_14c950c29) == 1)) {
    local_440 = local_208;
    local_446 = local_220;
    local_442 = uVar10;
    local_448 = local_238;
    local_444 = local_a0;
    FUN_1456cec3c(pdVar7);
    local_a0 = local_444;
    local_238 = local_448;
    uVar10 = local_442;
    local_220 = local_446;
    local_208 = local_440;
  }
  if (local_1e0 != '\0') {
    local_194 = local_1b8;
    uStack_18c = uStack_1b0;
    local_1a4 = local_1c8;
    uStack_1a0 = uStack_1c4;
    uStack_19c = uStack_1c0;
    uStack_198 = uStack_1bc;
  }
  local_9c = *(undefined2 *)(local_428 + 0x11a);
  if ((local_278 != '\0') && ((pdVar7 != (double *)0x0 & DAT_14c950c29) == 1)) {
    local_428 = CONCAT62(local_428._2_6_,local_9c);
    local_448 = local_238;
    local_446 = local_220;
    local_444 = local_a0;
    local_442 = uVar10;
    local_440 = local_208;
    FUN_1456cec3c(pdVar7);
    local_a0 = local_444;
    local_238 = local_448;
    local_9c = (undefined2)local_428;
    uVar10 = local_442;
    local_220 = local_446;
    local_208 = local_440;
  }
  if (local_1e0 != '\0') {
    local_170 = local_194;
    uStack_168 = uStack_18c;
    local_180 = local_1a4;
    uStack_17c = uStack_1a0;
    uStack_178 = uStack_19c;
    uStack_174 = uStack_198;
  }
  local_160 = &PTR_FUN_14a4d8730;
  local_158 = CONCAT22(local_158._2_2_,uVar10);
  local_140 = local_278;
  local_e8 = local_220;
  if (local_278 != '\0') {
    local_150 = pdVar7;
    if ((pdVar7 != (double *)0x0 & DAT_14c950c29) == 1) {
      local_448 = local_238;
      local_446 = local_220;
      local_444 = local_a0;
      FUN_1456cec3c(pdVar7);
      local_a0 = local_444;
      local_238 = local_448;
      local_e8 = local_446;
    }
    local_148 = local_418;
  }
  lVar8 = local_410;
  local_138 = local_43c;
  local_132 = local_26a;
  if (local_26a != '\0') {
    local_136 = local_41c;
  }
  local_130 = local_438._0_2_;
  local_120 = local_258;
  if (local_258 != '\0') {
    local_128 = local_260;
  }
  local_118 = local_430._0_2_;
  local_108 = local_240;
  if (local_240 != '\0') {
    local_110 = local_248;
  }
  local_f0 = local_228;
  if (local_228 != '\0') {
    local_f8 = local_230;
  }
  local_d8 = local_210;
  if (local_210 != '\0') {
    local_e0 = local_218;
  }
  local_a8 = local_1e0;
  if (local_1e0 != '\0') {
    local_b8 = local_170;
    uStack_b0 = uStack_168;
    local_c8 = local_180;
    uStack_c4 = uStack_17c;
    uStack_c0 = uStack_178;
    uStack_bc = uStack_174;
  }
  local_9e = local_43a;
  local_98 = 1;
  local_160 = &PTR_FUN_14a4d8710;
  local_3b8 = 0x10000000000;
  lVar9 = local_410 + 0x28;
  local_100 = local_238;
  local_d0 = local_208;
  FUN_1476907e0(&local_160,&local_3fa,lVar9);
  *(undefined2 *)(param_6 + 0x14) = local_3fa;
  local_160 = &PTR_FUN_14a4d8730;
  if (local_a8 == '\x01') {
    local_a8 = '\0';
  }
  if (local_d8 == '\x01') {
    local_d8 = '\0';
  }
  if (local_f0 == '\x01') {
    local_f0 = '\0';
  }
  FUN_140dbd3cc(lVar9,*(undefined2 *)*param_5,local_3fa,*(longlong *)(lVar8 + 600) + 0x200);
  if ((local_90 ^ (ulonglong)auStack_478) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147690698 FUN_147690698 body=142 status=ok
// SIG undefined FUN_147690698(void)

undefined8 *
FUN_147690698(longlong param_1,undefined8 *param_2,undefined2 param_3,undefined8 *param_4)

{
  undefined1 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  undefined2 *local_38;
  undefined2 local_30 [4];
  undefined8 local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = local_30;
  local_28 = *param_4;
  local_20 = 1;
  local_40 = param_1 + 0x60;
  local_48 = param_1 + 0x48;
  uVar1 = *(undefined1 *)(param_1 + 0x78);
  local_30[0] = param_3;
  FUN_147690f3e(param_2 + 1,param_1 + 8,param_1 + 0x28,param_1 + 0x30);
  *(undefined1 *)(param_2 + 0x12) = uVar1;
  *param_2 = &PTR_FUN_14a4d8690;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147690728 FUN_147690728 body=183 status=ok
// SIG undefined FUN_147690728(void)

undefined8 *
FUN_147690728(longlong param_1,undefined8 *param_2,undefined2 param_3,undefined4 *param_4,
             undefined1 param_5)

{
  undefined1 uVar1;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  longlong local_68;
  undefined2 *local_60;
  undefined2 local_50;
  undefined1 local_4e;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_60 = &local_50;
  local_4e = param_5;
  local_48 = *param_4;
  uStack_44 = param_4[1];
  uStack_40 = param_4[2];
  uStack_3c = param_4[3];
  local_38 = param_4[4];
  uStack_34 = param_4[5];
  uStack_30 = param_4[6];
  uStack_2c = param_4[7];
  local_28 = 1;
  local_68 = param_1 + 0x78;
  local_70 = param_1 + 0x60;
  local_78 = param_1 + 0x48;
  uVar1 = *(undefined1 *)(param_1 + 0x90);
  local_50 = param_3;
  FUN_14769138a(param_2 + 1,param_1 + 8,param_1 + 0x28,param_1 + 0x30);
  *(undefined1 *)(param_2 + 0x18) = uVar1;
  *param_2 = &PTR_FUN_14a4d86d0;
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476907e0 FUN_1476907e0 body=311 status=ok
// SIG undefined FUN_1476907e0(void)

undefined2 * FUN_1476907e0(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_58 [2];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58[0] = param_4;
  FUN_1476918e8(local_58,param_1 + 8);
  local_48 = 0;
  local_40 = 0x200000000;
  local_80 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 200) * '\x02' + '\x01',param_4,
                local_58);
  FUN_140560464(param_3,&local_98,param_4);
  if (CONCAT44(uStack_94,local_98) == 0) {
    local_78 = 0;
  }
  else {
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    FUN_147691986(&local_78,param_1 + 8);
    local_78 = CONCAT44(uStack_94,local_98);
  }
  uStack_70 = uStack_90;
  uStack_6c = 1;
  FUN_14163869e(local_58,&local_78,&local_80);
  *param_2 = local_88;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147690918 FUN_147690918 body=93 status=ok
// SIG undefined FUN_147690918(void)

void FUN_147690918(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a4d8730;
  if (*(char *)(param_1 + 0x17) == '\x01') {
    *(undefined1 *)(param_1 + 0x17) = 0;
  }
  if (*(char *)(param_1 + 0x11) == '\x01') {
    *(undefined1 *)(param_1 + 0x11) = 0;
  }
  if (*(char *)(param_1 + 0xe) == '\x01') {
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  if (*(char *)(param_1 + 0xb) == '\x01') {
    *(undefined1 *)(param_1 + 0xb) = 0;
  }
  if (*(char *)(param_1 + 8) == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x2e) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x2e) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}



// FUNCTION 147690976 FUN_147690976 body=93 status=ok
// SIG undefined FUN_147690976(void)

void FUN_147690976(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a4d86f0;
  if (*(char *)(param_1 + 0x17) == '\x01') {
    *(undefined1 *)(param_1 + 0x17) = 0;
  }
  if (*(char *)(param_1 + 0x11) == '\x01') {
    *(undefined1 *)(param_1 + 0x11) = 0;
  }
  if (*(char *)(param_1 + 0xe) == '\x01') {
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  if (*(char *)(param_1 + 0xb) == '\x01') {
    *(undefined1 *)(param_1 + 0xb) = 0;
  }
  if (*(char *)(param_1 + 8) == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x2e) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x2e) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}



// FUNCTION 1476909d4 FUN_1476909d4 body=89 status=ok
// SIG undefined FUN_1476909d4(void)

undefined8 * FUN_1476909d4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4d8670;
  if (*(char *)(param_1 + 0xe) == '\x01') {
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  if (*(char *)(param_1 + 0xb) == '\x01') {
    *(undefined1 *)(param_1 + 0xb) = 0;
  }
  if (*(char *)(param_1 + 8) == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x2e) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x2e) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147690a2e FUN_147690a2e body=78 status=ok
// SIG undefined FUN_147690a2e(void)

undefined8 FUN_147690a2e(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_147690b84();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147690a7e FUN_147690a7e body=82 status=ok
// SIG undefined FUN_147690a7e(void)

void FUN_147690a7e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_147690cba(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x78) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147690ad2 FUN_147690ad2 body=86 status=ok
// SIG undefined FUN_147690ad2(void)

void FUN_147690ad2(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_3 != 0) {
    local_18 = param_3[2];
    local_28 = (undefined4)*param_3;
    uStack_24 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_20 = (undefined4)param_3[1];
    uStack_1c = *(undefined4 *)((longlong)param_3 + 0xc);
    FUN_147690d08(&local_28,param_1 + 8);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147690b2a FUN_147690b2a body=89 status=ok
// SIG undefined FUN_147690b2a(void)

undefined8 * FUN_147690b2a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4d8670;
  if (*(char *)(param_1 + 0xe) == '\x01') {
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  if (*(char *)(param_1 + 0xb) == '\x01') {
    *(undefined1 *)(param_1 + 0xb) = 0;
  }
  if (*(char *)(param_1 + 8) == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x2e) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x2e) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147690b84 FUN_147690b84 body=308 status=ok
// SIG undefined FUN_147690b84(void)

undefined2 * FUN_147690b84(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_58 [2];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58[0] = param_4;
  FUN_147690cba(local_58,param_1 + 8);
  local_48 = 0;
  local_40 = 0x200000000;
  local_80 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x78) * '\x02' + '\x01',param_4
                ,local_58);
  FUN_140560464(param_3,&local_98,param_4);
  if (CONCAT44(uStack_94,local_98) == 0) {
    local_78 = 0;
  }
  else {
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    FUN_147690d08(&local_78,param_1 + 8);
    local_78 = CONCAT44(uStack_94,local_98);
  }
  uStack_70 = uStack_90;
  uStack_6c = 1;
  FUN_14163869e(local_58,&local_78,&local_80);
  *param_2 = local_88;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147690cba FUN_147690cba body=77 status=ok
// SIG undefined FUN_147690cba(void)

void FUN_147690cba(undefined8 *param_1,undefined2 *param_2)

{
  FUN_140dba9e6(*param_1,*param_2);
  FUN_140dba9e6(*param_1,param_2[0x10]);
  FUN_140dba9e6(*param_1,param_2[0x14]);
  FUN_140dba9e6(*param_1,param_2[0x20]);
  FUN_140dba9e6(*param_1,param_2[0x2c]);
  return;
}



// FUNCTION 147690d08 FUN_147690d08 body=100 status=ok
// SIG undefined FUN_147690d08(void)

void FUN_147690d08(undefined8 *param_1,longlong param_2)

{
  FUN_140e90c06(param_2,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140dbd8a8(param_2 + 0x20,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_147563f92(param_2 + 0x28,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_147563f92(param_2 + 0x40,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_147563f92(param_2 + 0x58,*param_1,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 147690d6c FUN_147690d6c body=105 status=ok
// SIG undefined FUN_147690d6c(void)

undefined8 * FUN_147690d6c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4d86b0;
  if (*(char *)(param_1 + 0x11) == '\x01') {
    *(undefined1 *)(param_1 + 0x11) = 0;
  }
  if (*(char *)(param_1 + 0xe) == '\x01') {
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  if (*(char *)(param_1 + 0xb) == '\x01') {
    *(undefined1 *)(param_1 + 0xb) = 0;
  }
  if (*(char *)(param_1 + 8) == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x2e) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x2e) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147690dd6 FUN_147690dd6 body=78 status=ok
// SIG undefined FUN_147690dd6(void)

undefined8 FUN_147690dd6(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_14769103a();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147690e26 FUN_147690e26 body=85 status=ok
// SIG undefined FUN_147690e26(void)

void FUN_147690e26(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_147691172(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x90) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147690e7c FUN_147690e7c body=86 status=ok
// SIG undefined FUN_147690e7c(void)

void FUN_147690e7c(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_3 != 0) {
    local_18 = param_3[2];
    local_28 = (undefined4)*param_3;
    uStack_24 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_20 = (undefined4)param_3[1];
    uStack_1c = *(undefined4 *)((longlong)param_3 + 0xc);
    FUN_1476911cc(&local_28,param_1 + 8);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147690ed4 FUN_147690ed4 body=105 status=ok
// SIG undefined FUN_147690ed4(void)

undefined8 * FUN_147690ed4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4d86b0;
  if (*(char *)(param_1 + 0x11) == '\x01') {
    *(undefined1 *)(param_1 + 0x11) = 0;
  }
  if (*(char *)(param_1 + 0xe) == '\x01') {
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  if (*(char *)(param_1 + 0xb) == '\x01') {
    *(undefined1 *)(param_1 + 0xb) = 0;
  }
  if (*(char *)(param_1 + 8) == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x2e) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x2e) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147690f3e FUN_147690f3e body=252 status=ok
// SIG undefined FUN_147690f3e(void)

undefined2 *
FUN_147690f3e(undefined2 *param_1,undefined2 *param_2,undefined2 *param_3,undefined2 *param_4,
             undefined2 *param_5,undefined2 *param_6,undefined2 *param_7)

{
  char cVar1;
  longlong lVar2;
  
  *param_1 = *param_2;
  cVar1 = *(char *)(param_2 + 0xc);
  *(char *)(param_1 + 0xc) = cVar1;
  if (cVar1 == '\x01') {
    lVar2 = *(longlong *)(param_2 + 4);
    *(longlong *)(param_1 + 4) = lVar2;
    if ((lVar2 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  }
  param_1[0x10] = *param_3;
  cVar1 = *(char *)(param_3 + 3);
  *(char *)(param_1 + 0x13) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_3 + 1);
  }
  param_1[0x14] = *param_4;
  cVar1 = *(char *)(param_4 + 8);
  *(char *)(param_1 + 0x1c) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_4 + 4);
  }
  param_1[0x20] = *param_5;
  cVar1 = *(char *)(param_5 + 8);
  *(char *)(param_1 + 0x28) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_5 + 4);
  }
  param_1[0x2c] = *param_6;
  cVar1 = *(char *)(param_6 + 8);
  *(char *)(param_1 + 0x34) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_6 + 4);
  }
  param_1[0x38] = *param_7;
  cVar1 = *(char *)(param_7 + 8);
  *(char *)(param_1 + 0x40) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_7 + 4);
  }
  return param_1;
}



// FUNCTION 14769103a FUN_14769103a body=311 status=ok
// SIG undefined FUN_14769103a(void)

undefined2 * FUN_14769103a(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_58 [2];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58[0] = param_4;
  FUN_147691172(local_58,param_1 + 8);
  local_48 = 0;
  local_40 = 0x200000000;
  local_80 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x90) * '\x02' + '\x01',param_4
                ,local_58);
  FUN_140560464(param_3,&local_98,param_4);
  if (CONCAT44(uStack_94,local_98) == 0) {
    local_78 = 0;
  }
  else {
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    FUN_1476911cc(&local_78,param_1 + 8);
    local_78 = CONCAT44(uStack_94,local_98);
  }
  uStack_70 = uStack_90;
  uStack_6c = 1;
  FUN_14163869e(local_58,&local_78,&local_80);
  *param_2 = local_88;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147691172 FUN_147691172 body=89 status=ok
// SIG undefined FUN_147691172(void)

void FUN_147691172(undefined8 *param_1,undefined2 *param_2)

{
  FUN_140dba9e6(*param_1,*param_2);
  FUN_140dba9e6(*param_1,param_2[0x10]);
  FUN_140dba9e6(*param_1,param_2[0x14]);
  FUN_140dba9e6(*param_1,param_2[0x20]);
  FUN_140dba9e6(*param_1,param_2[0x2c]);
  FUN_140dba9e6(*param_1,param_2[0x38]);
  return;
}



// FUNCTION 1476911cc FUN_1476911cc body=116 status=ok
// SIG undefined FUN_1476911cc(void)

void FUN_1476911cc(undefined8 *param_1,longlong param_2)

{
  FUN_140e90c06(param_2,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140dbd8a8(param_2 + 0x20,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_147563f92(param_2 + 0x28,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_147563f92(param_2 + 0x40,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_147563f92(param_2 + 0x58,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_147563f92(param_2 + 0x70,*param_1,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 147691240 FUN_147691240 body=38 status=ok
// SIG undefined FUN_147691240(void)

undefined8 FUN_147691240(undefined8 param_1,int param_2)

{
  FUN_147690976();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147691266 FUN_147691266 body=78 status=ok
// SIG undefined FUN_147691266(void)

undefined8 FUN_147691266(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_1476914ba();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476912b6 FUN_1476912b6 body=85 status=ok
// SIG undefined FUN_1476912b6(void)

void FUN_1476912b6(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_1476915f2(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0xc0) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14769130c FUN_14769130c body=86 status=ok
// SIG undefined FUN_14769130c(void)

void FUN_14769130c(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_3 != 0) {
    local_18 = param_3[2];
    local_28 = (undefined4)*param_3;
    uStack_24 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_20 = (undefined4)param_3[1];
    uStack_1c = *(undefined4 *)((longlong)param_3 + 0xc);
    FUN_14769166c(&local_28,param_1 + 8);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147691364 FUN_147691364 body=38 status=ok
// SIG undefined FUN_147691364(void)

undefined8 FUN_147691364(undefined8 param_1,int param_2)

{
  FUN_147690976();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14769138a FUN_14769138a body=303 status=ok
// SIG undefined FUN_14769138a(void)

undefined2 *
FUN_14769138a(undefined2 *param_1,undefined2 *param_2,undefined2 *param_3,undefined2 *param_4,
             undefined2 *param_5,undefined2 *param_6,undefined2 *param_7,undefined4 *param_8)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_1 = *param_2;
  cVar1 = *(char *)(param_2 + 0xc);
  *(char *)(param_1 + 0xc) = cVar1;
  if (cVar1 == '\x01') {
    lVar2 = *(longlong *)(param_2 + 4);
    *(longlong *)(param_1 + 4) = lVar2;
    if ((lVar2 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  }
  param_1[0x10] = *param_3;
  cVar1 = *(char *)(param_3 + 3);
  *(char *)(param_1 + 0x13) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_3 + 1);
  }
  param_1[0x14] = *param_4;
  cVar1 = *(char *)(param_4 + 8);
  *(char *)(param_1 + 0x1c) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_4 + 4);
  }
  param_1[0x20] = *param_5;
  cVar1 = *(char *)(param_5 + 8);
  *(char *)(param_1 + 0x28) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_5 + 4);
  }
  param_1[0x2c] = *param_6;
  cVar1 = *(char *)(param_6 + 8);
  *(char *)(param_1 + 0x34) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_6 + 4);
  }
  param_1[0x38] = *param_7;
  cVar1 = *(char *)(param_7 + 8);
  *(char *)(param_1 + 0x40) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_7 + 4);
  }
  *(undefined4 *)(param_1 + 0x44) = *param_8;
  cVar1 = *(char *)(param_8 + 10);
  *(char *)(param_1 + 0x58) = cVar1;
  if (cVar1 == '\x01') {
    uVar3 = *(undefined8 *)(param_8 + 2);
    uVar4 = *(undefined8 *)(param_8 + 4);
    uVar5 = *(undefined8 *)(param_8 + 8);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_8 + 6);
    *(undefined8 *)(param_1 + 0x54) = uVar5;
    *(undefined8 *)(param_1 + 0x48) = uVar3;
    *(undefined8 *)(param_1 + 0x4c) = uVar4;
  }
  return param_1;
}



// FUNCTION 1476914ba FUN_1476914ba body=311 status=ok
// SIG undefined FUN_1476914ba(void)

undefined2 * FUN_1476914ba(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_58 [2];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58[0] = param_4;
  FUN_1476915f2(local_58,param_1 + 8);
  local_48 = 0;
  local_40 = 0x200000000;
  local_80 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0xc0) * '\x02' + '\x01',param_4
                ,local_58);
  FUN_140560464(param_3,&local_98,param_4);
  if (CONCAT44(uStack_94,local_98) == 0) {
    local_78 = 0;
  }
  else {
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    FUN_14769166c(&local_78,param_1 + 8);
    local_78 = CONCAT44(uStack_94,local_98);
  }
  uStack_70 = uStack_90;
  uStack_6c = 1;
  FUN_14163869e(local_58,&local_78,&local_80);
  *param_2 = local_88;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476915f2 FUN_1476915f2 body=121 status=ok
// SIG undefined FUN_1476915f2(void)

void FUN_1476915f2(undefined8 *param_1,undefined2 *param_2)

{
  FUN_140dba9e6(*param_1,*param_2);
  FUN_140dba9e6(*param_1,param_2[0x10]);
  FUN_140dba9e6(*param_1,param_2[0x14]);
  FUN_140dba9e6(*param_1,param_2[0x20]);
  FUN_140dba9e6(*param_1,param_2[0x2c]);
  FUN_140dba9e6(*param_1,param_2[0x38]);
  if (*(char *)(param_2 + 0x45) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x44]);
    return;
  }
  return;
}



// FUNCTION 14769166c FUN_14769166c body=135 status=ok
// SIG undefined FUN_14769166c(void)

void FUN_14769166c(undefined8 *param_1,longlong param_2)

{
  FUN_140e90c06(param_2,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140dbd8a8(param_2 + 0x20,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_147563f92(param_2 + 0x28,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_147563f92(param_2 + 0x40,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_147563f92(param_2 + 0x58,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_147563f92(param_2 + 0x70,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_1476916f4(param_2 + 0x88,*param_1,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 1476916f4 FUN_1476916f4 body=170 status=ok
// SIG undefined FUN_1476916f4(void)

void FUN_1476916f4(short *param_1,longlong param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  
  if ((char)param_1[1] == '\x01') {
    if (*(ushort *)(param_2 + 0xc) != 0) {
      plVar12 = *(longlong **)(param_2 + 0x28);
      lVar10 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
      do {
        if (*(short *)((longlong)plVar12 + 0x1e) == *param_1) goto LAB_147691731;
        plVar12 = plVar12 + 4;
        lVar10 = lVar10 + -0x20;
      } while (lVar10 != 0);
    }
    plVar12 = (longlong *)0x0;
LAB_147691731:
    iVar2 = *(int *)(param_2 + 0x14);
    if (iVar2 == 1) {
      AcquireSRWLockExclusive((PSRWLOCK)(plVar12 + 1));
    }
    LOCK();
    *(int *)(plVar12 + 3) = (int)plVar12[3] + 1;
    UNLOCK();
    lVar10 = *plVar12;
    lVar11 = (longlong)param_3 * (ulonglong)*(byte *)((longlong)plVar12 + 0x1c);
    uVar3 = *(undefined4 *)(param_1 + 4);
    uVar4 = *(undefined4 *)(param_1 + 6);
    uVar5 = *(undefined4 *)(param_1 + 8);
    uVar6 = *(undefined4 *)(param_1 + 10);
    uVar7 = *(undefined4 *)(param_1 + 0xe);
    uVar8 = *(undefined4 *)(param_1 + 0x10);
    uVar9 = *(undefined4 *)(param_1 + 0x12);
    puVar1 = (undefined4 *)(lVar10 + 0x10 + lVar11);
    *puVar1 = *(undefined4 *)(param_1 + 0xc);
    puVar1[1] = uVar7;
    puVar1[2] = uVar8;
    puVar1[3] = uVar9;
    puVar1 = (undefined4 *)(lVar10 + lVar11);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    if ((char)param_1[0x14] == '\x01') {
      *(undefined1 *)(param_1 + 0x14) = 0;
    }
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 3) = (int)plVar12[3] + -1;
      UNLOCK();
      if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014769178d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ReleaseSRWLockExclusive((PSRWLOCK)(plVar12 + 1));
        return;
      }
    }
  }
  return;
}



// FUNCTION 14769179e FUN_14769179e body=38 status=ok
// SIG undefined FUN_14769179e(void)

undefined8 FUN_14769179e(undefined8 param_1,int param_2)

{
  FUN_147690918();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476917c4 FUN_1476917c4 body=78 status=ok
// SIG undefined FUN_1476917c4(void)

undefined8 FUN_1476917c4(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_1476907e0();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147691814 FUN_147691814 body=85 status=ok
// SIG undefined FUN_147691814(void)

void FUN_147691814(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_1476918e8(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 200) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14769186a FUN_14769186a body=86 status=ok
// SIG undefined FUN_14769186a(void)

void FUN_14769186a(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_3 != 0) {
    local_18 = param_3[2];
    local_28 = (undefined4)*param_3;
    uStack_24 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_20 = (undefined4)param_3[1];
    uStack_1c = *(undefined4 *)((longlong)param_3 + 0xc);
    FUN_147691986(&local_28,param_1 + 8);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476918c2 FUN_1476918c2 body=38 status=ok
// SIG undefined FUN_1476918c2(void)

undefined8 FUN_1476918c2(undefined8 param_1,int param_2)

{
  FUN_147690918();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476918e8 FUN_1476918e8 body=158 status=ok
// SIG undefined FUN_1476918e8(void)

void FUN_1476918e8(undefined8 *param_1,undefined2 *param_2)

{
  FUN_140dba9e6(*param_1,*param_2);
  FUN_140dba9e6(*param_1,param_2[0x10]);
  FUN_140dba9e6(*param_1,param_2[0x14]);
  FUN_140dba9e6(*param_1,param_2[0x20]);
  FUN_140dba9e6(*param_1,param_2[0x2c]);
  FUN_140dba9e6(*param_1,param_2[0x38]);
  if (*(char *)(param_2 + 0x45) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x44]);
  }
  FUN_140dba9e6(*param_1,param_2[0x5c]);
  FUN_140dba9e6(*param_1,param_2[0x5d]);
  FUN_140dba9e6(*param_1,param_2[0x5e]);
  return;
}



// FUNCTION 147691986 FUN_147691986 body=135 status=ok
// SIG undefined FUN_147691986(void)

void FUN_147691986(undefined8 *param_1,longlong param_2)

{
  FUN_140e90c06(param_2,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140dbd8a8(param_2 + 0x20,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_147563f92(param_2 + 0x28,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_147563f92(param_2 + 0x40,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_147563f92(param_2 + 0x58,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_147563f92(param_2 + 0x70,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_1476916f4(param_2 + 0x88,*param_1,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 147691a0e FUN_147691a0e body=408 status=ok
// SIG undefined FUN_147691a0e(void)

void FUN_147691a0e(longlong *param_1,undefined4 *param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined1 auStack_c8 [40];
  ulonglong local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_84;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  byte local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  byte local_50;
  undefined2 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar1 = *param_1;
  local_78 = *param_2;
  uStack_74 = param_2[1];
  uStack_70 = param_2[2];
  uStack_6c = param_2[3];
  local_90 = param_3;
  FUN_140cd6274(&local_68);
  if (**(int **)(lVar1 + 0xb0) != 0 || (local_64 & 1) != 0) {
    local_98 = FUN_140732858();
    local_a0 = (ulonglong)local_68;
    if (0 < (int)local_68) {
      uVar5 = 0;
      do {
        FUN_14768de7a(lVar1,&local_84,param_5,param_6);
        local_54 = *(undefined4 *)(param_4 + uVar5 * 4);
        local_4a = *(undefined2 *)(local_90 + uVar5 * 2);
        local_58 = local_7c;
        local_60 = local_84;
        local_50 = local_64;
        FUN_1449da5a2(local_98,&local_4a,&local_60);
        lVar3 = FUN_1400e4054(*(undefined8 *)(lVar1 + 0xb0),&local_84);
        if (lVar3 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = (undefined4)
                  CONCAT71((int7)((ulonglong)param_4 >> 8),'\x02' - (*(short *)(lVar3 + 0xe) == 0));
        }
        cVar2 = FUN_1457dbe74(lVar1,local_7c,uVar4);
        if (cVar2 == '\0') {
          uVar6 = FUN_14769a16e(param_5,param_6);
          local_60 = CONCAT44(local_60._4_4_,uVar6);
          FUN_1457dbde8(lVar1,local_7c,uVar4,&local_60);
        }
        uVar5 = uVar5 + 1;
        param_5 = param_5 + 0x10;
        param_6 = param_6 + 8;
      } while (local_a0 != uVar5);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147691ba8 FUN_147691ba8 body=138 status=ok
// SIG undefined FUN_147691ba8(void)

longlong FUN_147691ba8(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1457dbcea(local_40,param_3,param_4);
  FUN_1457dbd64(param_1 + 200,param_2,param_3);
  FUN_14768e53e(param_1,&local_44,local_40);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_2 + 8) = local_44;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147691c34 FUN_147691c34 body=408 status=ok
// SIG undefined FUN_147691c34(void)

void FUN_147691c34(longlong *param_1,undefined4 *param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  undefined1 auStack_c8 [40];
  ulonglong local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_84;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  byte local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  byte local_50;
  undefined2 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar1 = *param_1;
  local_78 = *param_2;
  uStack_74 = param_2[1];
  uStack_70 = param_2[2];
  uStack_6c = param_2[3];
  local_90 = param_3;
  FUN_140cd6274(&local_68);
  if (**(int **)(lVar1 + 0xb0) != 0 || (local_64 & 1) != 0) {
    local_98 = FUN_140732858();
    local_a0 = (ulonglong)local_68;
    if (0 < (int)local_68) {
      uVar5 = 0;
      do {
        FUN_14768e392(lVar1,&local_84,param_5,param_6);
        local_54 = *(undefined4 *)(param_4 + uVar5 * 4);
        local_4a = *(undefined2 *)(local_90 + uVar5 * 2);
        local_58 = local_7c;
        local_60 = local_84;
        local_50 = local_64;
        FUN_1449da5a2(local_98,&local_4a,&local_60);
        lVar3 = FUN_1400e4054(*(undefined8 *)(lVar1 + 0xb0),&local_84);
        if (lVar3 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = (undefined4)
                  CONCAT71((int7)((ulonglong)param_4 >> 8),'\x02' - (*(short *)(lVar3 + 0xe) == 0));
        }
        cVar2 = FUN_14768e41e(lVar1,local_7c,uVar4);
        if (cVar2 == '\0') {
          FUN_14769a31c(&local_60,param_5,param_6);
          FUN_14768e4b6(lVar1,local_7c,uVar4,&local_60);
        }
        uVar5 = uVar5 + 1;
        param_5 = param_5 + 0x10;
        param_6 = param_6 + 8;
      } while (local_a0 != uVar5);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147691dce FUN_147691dce body=29 status=ok
// SIG undefined FUN_147691dce(void)

undefined8 FUN_147691dce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147691dec FUN_147691dec body=29 status=ok
// SIG undefined FUN_147691dec(void)

undefined8 FUN_147691dec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147691e0a FUN_147691e0a body=126 status=ok
// SIG undefined FUN_147691e0a(void)

undefined4 * FUN_147691e0a(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_1[4] = param_3[4];
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_1403b8af8(param_1 + 6,param_3 + 6);
  *(undefined8 *)(param_1 + 0x26) = 0;
  FUN_1400abb7c(param_1 + 0x1e,param_3 + 0x1e);
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_1400abb7c(param_1 + 0x28,param_3 + 0x28);
  *(longlong *)(param_1 + 0x32) = param_2;
  *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x248);
  return param_1;
}



// FUNCTION 147691e88 FUN_147691e88 body=246 status=ok
// SIG undefined FUN_147691e88(void)

void FUN_147691e88(short *param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 auStack_78 [32];
  short *local_58;
  ulonglong *local_50;
  short local_42;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_42 = -1;
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  local_42 = *param_1;
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  lVar2 = 0;
  bVar1 = true;
  do {
    bVar3 = bVar1;
    local_42 = param_1[lVar2 + 1];
    if (local_42 != -1) {
      local_58 = &local_42;
      local_50 = &local_40;
      FUN_147552f5e(param_2,param_3,&local_58);
    }
    lVar2 = 1;
    bVar1 = false;
  } while (bVar3);
  local_42 = param_1[3];
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147691f80 FUN_147691f80 body=512 status=ok
// SIG undefined FUN_147691f80(void)

void FUN_147691f80(longlong *param_1,short *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong local_e8;
  longlong lStack_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  longlong local_b0;
  undefined8 *local_a8;
  int local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  longlong local_68;
  undefined8 *local_60;
  int local_58;
  undefined8 local_50;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar3 = *(longlong *)(*(longlong *)(*param_1 + 0x60) + (longlong)(int)param_1[1] * 8);
  if (*(ushort *)(lVar3 + 0xc) != 0) {
    puVar7 = *(undefined8 **)(lVar3 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar7 + 0x1e) == param_2[3]) goto LAB_147691fc8;
      puVar7 = puVar7 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  puVar7 = (undefined8 *)0x0;
LAB_147691fc8:
  iVar1 = *(int *)(lVar3 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar7 + 1));
  }
  LOCK();
  *(int *)(puVar7 + 3) = *(int *)(puVar7 + 3) + 1;
  UNLOCK();
  uVar4 = *puVar7;
  local_44 = *(undefined4 *)(param_2 + 1);
  FUN_147692236(&local_d8,
                *(undefined8 *)(*(longlong *)(*param_1 + 0x60) + (longlong)(int)param_1[1] * 8));
  lVar3 = *(longlong *)(*(longlong *)(*param_1 + 0x60) + (longlong)(int)param_1[1] * 8);
  if (*(ushort *)(lVar3 + 0xc) != 0) {
    puVar8 = *(undefined8 **)(lVar3 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar8 + 0x1e) == *param_2) goto LAB_147692028;
      puVar8 = puVar8 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  puVar8 = (undefined8 *)0x0;
LAB_147692028:
  iVar2 = *(int *)(lVar3 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar8 + 1));
  }
  lVar6 = local_b0;
  lVar3 = local_c8;
  LOCK();
  *(int *)(puVar8 + 3) = *(int *)(puVar8 + 3) + 1;
  UNLOCK();
  uVar5 = *puVar8;
  local_90 = local_d8;
  local_88 = local_d0;
  local_d8 = 0;
  local_80 = local_c8;
  local_c8 = 0;
  local_78 = local_c0;
  local_70 = local_b8;
  local_c0 = 0;
  local_68 = local_b0;
  local_b0 = 0;
  local_a8 = puVar8;
  local_a0 = iVar2;
  local_98 = uVar5;
  local_60 = puVar7;
  local_58 = iVar1;
  local_50 = uVar4;
  FUN_147692182();
  local_e8 = 0;
  lStack_e0 = 0;
  if (lVar3 != 0) {
    local_e8 = lVar3;
  }
  if (lVar6 != 0) {
    lStack_e0 = lVar6;
  }
  local_f8 = (undefined4)*param_1;
  uStack_f4 = *(undefined4 *)((longlong)param_1 + 4);
  uStack_f0 = (undefined4)param_1[1];
  uStack_ec = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_1406f48f0(&local_f8,uVar5,&local_e8,uVar4);
  FUN_1476921d8(&local_a8);
  if ((local_40 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147692182 FUN_147692182 body=85 status=ok
// SIG undefined FUN_147692182(void)

void FUN_147692182(longlong *param_1)

{
  int *piVar1;
  
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[4] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[3] + 8));
    }
  }
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001476921c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 1476921d8 FUN_1476921d8 body=94 status=ok
// SIG undefined FUN_1476921d8(void)

void FUN_1476921d8(longlong *param_1)

{
  int *piVar1;
  
  if (param_1[9] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[9] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[10] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[9] + 8));
    }
  }
  FUN_147692182(param_1 + 3);
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x000147692228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 147692236 FUN_147692236 body=151 status=ok
// SIG undefined FUN_147692236(void)

undefined8 * FUN_147692236(undefined8 *param_1,undefined8 param_2,undefined2 *param_3)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140fc2f5e(param_2,&local_40,param_3[1]);
  FUN_140fc2f08(param_2,&local_58,*param_3);
  *param_1 = local_58;
  *(undefined4 *)(param_1 + 1) = local_50;
  param_1[2] = local_48;
  param_1[3] = local_40;
  *(undefined4 *)(param_1 + 4) = local_38;
  param_1[5] = local_30;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476922ce FUN_1476922ce body=135 status=ok
// SIG undefined FUN_1476922ce(void)

undefined4 * FUN_1476922ce(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  uVar5 = param_3[5];
  uVar6 = param_3[6];
  uVar7 = param_3[7];
  param_1[4] = param_3[4];
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  param_1[7] = uVar7;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  FUN_1403b8af8(param_1 + 8,param_3 + 8);
  *(undefined8 *)(param_1 + 0x28) = 0;
  FUN_1400abb7c(param_1 + 0x20,param_3 + 0x20);
  *(undefined8 *)(param_1 + 0x32) = 0;
  FUN_1400abb7c(param_1 + 0x2a,param_3 + 0x2a);
  *(longlong *)(param_1 + 0x34) = param_2;
  *(undefined8 *)(param_1 + 0x36) = *(undefined8 *)(param_2 + 0x248);
  return param_1;
}



// FUNCTION 147692356 FUN_147692356 body=270 status=ok
// SIG undefined FUN_147692356(void)

void FUN_147692356(short *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  short *local_58;
  ulonglong *local_50;
  short local_42;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_42 = -1;
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  local_42 = *param_1;
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  lVar1 = 0;
  do {
    if (param_1[lVar1 + 1] != -1) {
      local_58 = &local_42;
      local_50 = &local_40;
      local_42 = param_1[lVar1 + 1];
      FUN_147552f5e(param_2,param_3,&local_58);
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 4);
  lVar1 = 0;
  do {
    if (param_1[lVar1 + 5] != -1) {
      local_58 = &local_42;
      local_50 = &local_40;
      local_42 = param_1[lVar1 + 5];
      FUN_147552f5e(param_2,param_3,&local_58);
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 4);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147692466 FUN_147692466 body=819 status=ok
// SIG undefined FUN_147692466(void)

void FUN_147692466(longlong *param_1,short *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 auStack_278 [32];
  longlong local_258;
  longlong local_250;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  longlong local_238;
  longlong lStack_230;
  longlong local_228;
  longlong lStack_220;
  longlong local_218;
  longlong lStack_210;
  longlong local_208;
  longlong lStack_200;
  undefined8 local_1f0;
  undefined4 local_1e8;
  longlong local_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  longlong local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  longlong local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  longlong local_198;
  undefined8 local_190;
  undefined4 local_188;
  longlong local_180;
  undefined8 local_178;
  undefined4 local_170;
  longlong local_168;
  undefined8 local_160;
  undefined4 local_158;
  longlong local_150;
  undefined8 local_148;
  undefined4 local_140;
  longlong local_138;
  undefined8 *local_130;
  int local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined4 local_110;
  longlong local_108;
  undefined8 local_100;
  undefined4 local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  longlong local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_278;
  local_50 = *(undefined8 *)(param_2 + 5);
  FUN_147692910(&local_190,
                *(undefined8 *)(*(longlong *)(*param_1 + 0x60) + (longlong)(int)param_1[1] * 8));
  local_58 = *(undefined8 *)(param_2 + 1);
  FUN_147692a14(&local_1f0,
                *(undefined8 *)(*(longlong *)(*param_1 + 0x60) + (longlong)(int)param_1[1] * 8));
  lVar2 = *(longlong *)(*(longlong *)(*param_1 + 0x60) + (longlong)(int)param_1[1] * 8);
  if (*(ushort *)(lVar2 + 0xc) != 0) {
    puVar8 = *(undefined8 **)(lVar2 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(lVar2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar8 + 0x1e) == *param_2) goto LAB_147692505;
      puVar8 = puVar8 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  puVar8 = (undefined8 *)0x0;
LAB_147692505:
  iVar1 = *(int *)(lVar2 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar8 + 1));
  }
  lVar6 = local_138;
  lVar5 = local_150;
  lVar4 = local_168;
  lVar3 = local_180;
  lVar7 = local_198;
  lVar2 = local_1b0;
  LOCK();
  *(int *)(puVar8 + 3) = *(int *)(puVar8 + 3) + 1;
  UNLOCK();
  local_120 = *puVar8;
  local_118 = local_1f0;
  local_110 = local_1e8;
  local_1f0 = 0;
  local_250 = local_1e0;
  local_108 = local_1e0;
  local_1e0 = 0;
  local_100 = local_1d8;
  local_f8 = local_1d0;
  local_1d8 = 0;
  local_258 = local_1c8;
  local_f0 = local_1c8;
  local_1c8 = 0;
  local_e8 = local_1c0;
  local_e0 = local_1b8;
  local_1c0 = 0;
  local_d8 = local_1b0;
  local_1b0 = 0;
  local_d0 = local_1a8;
  local_c8 = local_1a0;
  local_1a8 = 0;
  local_c0 = local_198;
  local_198 = 0;
  local_b8 = local_190;
  local_b0 = local_188;
  local_190 = 0;
  local_a8 = local_180;
  local_180 = 0;
  local_a0 = local_178;
  local_98 = local_170;
  local_178 = 0;
  local_90 = local_168;
  local_168 = 0;
  local_88 = local_160;
  local_80 = local_158;
  local_160 = 0;
  local_78 = local_150;
  local_150 = 0;
  local_70 = local_148;
  local_68 = local_140;
  local_148 = 0;
  local_60 = local_138;
  local_138 = 0;
  local_130 = puVar8;
  local_128 = iVar1;
  FUN_14769279a();
  FUN_147692832(&local_190);
  local_218 = 0;
  lStack_210 = 0;
  local_208 = 0;
  lStack_200 = 0;
  if (lVar3 != 0) {
    local_218 = lVar3;
  }
  if (lVar4 != 0) {
    lStack_210 = lVar4;
  }
  if (lVar5 != 0) {
    local_208 = lVar5;
  }
  if (lVar6 != 0) {
    lStack_200 = lVar6;
  }
  local_228 = 0;
  lStack_220 = 0;
  local_238 = 0;
  lStack_230 = 0;
  if (local_250 != 0) {
    local_238 = local_250;
  }
  if (local_258 != 0) {
    lStack_230 = local_258;
  }
  if (lVar2 != 0) {
    local_228 = lVar2;
  }
  if (lVar7 != 0) {
    lStack_220 = lVar7;
  }
  local_248 = (undefined4)*param_1;
  uStack_244 = *(undefined4 *)((longlong)param_1 + 4);
  uStack_240 = (undefined4)param_1[1];
  uStack_23c = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_140db3756(&local_248,local_120,&local_238,&local_218);
  FUN_1476928ca(&local_130);
  if ((local_48 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14769279a FUN_14769279a body=151 status=ok
// SIG undefined FUN_14769279a(void)

void FUN_14769279a(longlong *param_1)

{
  int *piVar1;
  
  if (param_1[9] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[9] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[10] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[9] + 8));
    }
  }
  if (param_1[6] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[6] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[7] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[6] + 8));
    }
  }
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[4] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[3] + 8));
    }
  }
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x000147692823. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 147692832 FUN_147692832 body=151 status=ok
// SIG undefined FUN_147692832(void)

void FUN_147692832(longlong *param_1)

{
  int *piVar1;
  
  if (param_1[9] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[9] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[10] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[9] + 8));
    }
  }
  if (param_1[6] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[6] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[7] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[6] + 8));
    }
  }
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[4] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[3] + 8));
    }
  }
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001476928bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 1476928ca FUN_1476928ca body=70 status=ok
// SIG undefined FUN_1476928ca(void)

void FUN_1476928ca(longlong *param_1)

{
  int *piVar1;
  
  FUN_147692832(param_1 + 0xf);
  FUN_14769279a(param_1 + 3);
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x000147692902. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 147692910 FUN_147692910 body=259 status=ok
// SIG undefined FUN_147692910(void)

undefined8 * FUN_147692910(undefined8 *param_1,undefined8 param_2,undefined2 *param_3)

{
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1475b4978(param_2,&local_50,param_3[3]);
  FUN_1475b4978(param_2,&local_68,param_3[2]);
  FUN_1475b4978(param_2,&local_80,param_3[1]);
  FUN_1475b4978(param_2,&local_98,*param_3);
  *param_1 = local_98;
  *(undefined4 *)(param_1 + 1) = local_90;
  param_1[2] = local_88;
  param_1[3] = local_80;
  *(undefined4 *)(param_1 + 4) = local_78;
  param_1[5] = local_70;
  param_1[6] = local_68;
  *(undefined4 *)(param_1 + 7) = local_60;
  param_1[8] = local_58;
  param_1[9] = local_50;
  *(undefined4 *)(param_1 + 10) = local_48;
  param_1[0xb] = local_40;
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147692a14 FUN_147692a14 body=259 status=ok
// SIG undefined FUN_147692a14(void)

undefined8 * FUN_147692a14(undefined8 *param_1,undefined8 param_2,undefined2 *param_3)

{
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_140fc2f5e(param_2,&local_50,param_3[3]);
  FUN_140fc2f5e(param_2,&local_68,param_3[2]);
  FUN_140fc2f08(param_2,&local_80,param_3[1]);
  FUN_140fc2f08(param_2,&local_98,*param_3);
  *param_1 = local_98;
  *(undefined4 *)(param_1 + 1) = local_90;
  param_1[2] = local_88;
  param_1[3] = local_80;
  *(undefined4 *)(param_1 + 4) = local_78;
  param_1[5] = local_70;
  param_1[6] = local_68;
  *(undefined4 *)(param_1 + 7) = local_60;
  param_1[8] = local_58;
  param_1[9] = local_50;
  *(undefined4 *)(param_1 + 10) = local_48;
  param_1[0xb] = local_40;
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147692b18 FUN_147692b18 body=388 status=ok
// SIG undefined FUN_147692b18(void)

void FUN_147692b18(longlong *param_1)

{
  int *piVar1;
  
  if (param_1[0x1b] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x1b] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x1c] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0x1b] + 8));
    }
  }
  if (param_1[0x18] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x18] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x19] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0x18] + 8));
    }
  }
  if (param_1[0x15] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x15] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x16] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0x15] + 8));
    }
  }
  if (param_1[0x12] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x12] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x13] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0x12] + 8));
    }
  }
  if (param_1[0xf] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xf] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x10] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0xf] + 8));
    }
  }
  if (param_1[0xc] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xc] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0xd] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0xc] + 8));
    }
  }
  if (param_1[9] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[9] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[10] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[9] + 8));
    }
  }
  if (param_1[6] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[6] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[7] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[6] + 8));
    }
  }
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[4] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[3] + 8));
    }
  }
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x000147692c8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 147692c9c FUN_147692c9c body=289 status=ok
// SIG undefined FUN_147692c9c(void)

undefined4 * FUN_147692c9c(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  int iVar7;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147692dbe(param_1,local_48);
  puVar5 = (ulonglong *)param_3[1];
  uVar3 = *(ulonglong *)*param_3;
  *local_40 = uVar3;
  puVar6 = local_40 + 2;
  for (lVar2 = 0xe; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined4 *)(local_40 + 0x10) = 0xffffffff;
  uVar1 = FUN_144a78877(uVar3 & 0xffffffff,uVar3 >> 0x20);
  uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  iVar7 = 1;
  if (3 < uVar4) {
    uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
    lVar2 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    iVar7 = 1 << ((byte)lVar2 & 0x1f);
  }
  if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
    uVar1 = *(int *)(param_1 + 0x48) - 1U & uVar1;
    *(uint *)((longlong)local_40 + 0x84) = uVar1;
    lVar2 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar2 = param_1 + 0x38;
    }
    *(undefined4 *)(local_40 + 0x10) =
         *(undefined4 *)
          (lVar2 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar1) * 4);
    lVar2 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar2 = param_1 + 0x38;
    }
    *(undefined4 *)(lVar2 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar1) * 4) =
         local_48[0];
  }
  else {
    *(int *)(param_1 + 0x48) = iVar7;
    FUN_147692ef2(param_1);
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147692dbe FUN_147692dbe body=240 status=ok
// SIG undefined FUN_147692dbe(void)

int * FUN_147692dbe(longlong *param_1,int *param_2)

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
      FUN_146ceb2ee(param_1,iVar6);
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



// FUNCTION 147692eae FUN_147692eae body=68 status=ok
// SIG undefined FUN_147692eae(void)

void FUN_147692eae(longlong param_1,uint param_2)

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
  FUN_147692ef2(param_1);
  return;
}



// FUNCTION 147692ef2 FUN_147692ef2 body=456 status=ok
// SIG undefined FUN_147692ef2(void)

void FUN_147692ef2(longlong *param_1)

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
        iVar6 = FUN_144a78877(*(undefined4 *)(lVar3 + lVar10),*(undefined4 *)(lVar3 + 4 + lVar10));
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x84 + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x80 + lVar10) =
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



// FUNCTION 1476930bc FUN_1476930bc body=52 status=ok
// SIG undefined FUN_1476930bc(void)

void FUN_1476930bc(longlong *param_1)

{
  FUN_1476930f0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1476930f0 FUN_1476930f0 body=89 status=ok
// SIG undefined FUN_1476930f0(void)

void FUN_1476930f0(longlong param_1)

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



// FUNCTION 14769314a FUN_14769314a body=312 status=ok
// SIG undefined FUN_14769314a(void)

undefined4 * FUN_14769314a(longlong param_1,undefined4 *param_2,ulonglong *param_3)

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
  FUN_147693284(param_1,local_48);
  uVar5 = *param_3;
  *local_40 = uVar5;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_14769336a(param_1,uVar3,local_40,&local_4c);
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
      FUN_147693458(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147693284 FUN_147693284 body=229 status=ok
// SIG undefined FUN_147693284(void)

int * FUN_147693284(longlong *param_1,int *param_2)

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



// FUNCTION 14769336a FUN_14769336a body=124 status=ok
// SIG undefined FUN_14769336a(void)

undefined8 FUN_14769336a(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_1476933e6(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = (int)plVar1[1];
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 1476933e6 FUN_1476933e6 body=114 status=ok
// SIG undefined FUN_1476933e6(void)

void FUN_1476933e6(longlong *param_1,int param_2)

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



// FUNCTION 147693458 FUN_147693458 body=477 status=ok
// SIG undefined FUN_147693458(void)

void FUN_147693458(longlong *param_1)

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



// FUNCTION 147693636 FUN_147693636 body=68 status=ok
// SIG undefined FUN_147693636(void)

void FUN_147693636(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_14769367a();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_14074f60a(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 14769367a FUN_14769367a body=329 status=ok
// SIG undefined FUN_14769367a(void)

void FUN_14769367a(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x84 + (longlong)iVar4 * 0x90) * 4) =
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



// FUNCTION 1476937c4 FUN_1476937c4 body=71 status=ok
// SIG undefined FUN_1476937c4(void)

void FUN_1476937c4(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_147693964();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (param_2 < iVar1) {
      *(int *)(param_1 + 8) = param_2;
      FUN_1476939ea();
      return;
    }
  }
  return;
}



// FUNCTION 14769380c FUN_14769380c body=272 status=ok
// SIG undefined FUN_14769380c(void)

undefined8 FUN_14769380c(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  undefined1 **local_58;
  longlong *local_50;
  longlong *local_48;
  undefined1 *local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  local_40 = &LAB_147693a86;
  plVar3 = (longlong *)FUN_14001cc68(0x28,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14a4d8820;
  local_50 = plVar3 + 2;
  plVar3[2] = (longlong)&PTR_FUN_14a4d8838;
  plVar3[3] = param_4;
  plVar3[4] = (longlong)&LAB_14769391e;
  local_48 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    local_58 = &local_40;
    FUN_1406abf4a(param_1,param_2,param_3,&local_50);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    local_58 = &local_40;
    FUN_1406abf4a(param_1,param_2,param_3,&local_50);
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
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147693934 FUN_147693934 body=48 status=ok
// SIG undefined FUN_147693934(void)

void FUN_147693934(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,4);
  }
  return;
}



// FUNCTION 147693964 FUN_147693964 body=132 status=ok
// SIG undefined FUN_147693964(void)

void FUN_147693964(longlong param_1,int param_2)

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



// FUNCTION 1476939ea FUN_1476939ea body=62 status=ok
// SIG undefined FUN_1476939ea(void)

void FUN_1476939ea(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147693a28(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 147693a28 FUN_147693a28 body=93 status=ok
// SIG undefined FUN_147693a28(void)

ulonglong FUN_147693a28(uint param_1,uint param_2)

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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,4);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 147693a92 FUN_147693a92 body=1 status=ok
// SIG undefined FUN_147693a92(void)

void FUN_147693a92(void)

{
  return;
}



// FUNCTION 147693a94 FUN_147693a94 body=29 status=ok
// SIG undefined FUN_147693a94(void)

undefined8 FUN_147693a94(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147693ab2 FUN_147693ab2 body=29 status=ok
// SIG undefined FUN_147693ab2(void)

undefined8 FUN_147693ab2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147693ad0 FUN_147693ad0 body=184 status=ok
// SIG undefined FUN_147693ad0(void)

undefined8 * FUN_147693ad0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[6] = 0x10000000000;
  param_1[0xb] = 0x10000000000;
  param_1[0x12] = 0x10000000000;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x17] = 0x10000000000;
  local_32 = *(undefined2 *)param_1;
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_1 + 2,&local_48);
  local_32 = *(undefined2 *)((longlong)param_1 + 2);
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_1 + 2,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147693b8a FUN_147693b8a body=604 status=ok
// SIG undefined FUN_147693b8a(void)

int * FUN_147693b8a(short *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5,longlong param_6,undefined1 *param_7,longlong param_8)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  longlong *plVar8;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined1 **local_100;
  short *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  int local_d4;
  longlong *local_d0;
  longlong *local_c8;
  undefined1 *local_c0;
  short **local_b8;
  short *local_b0;
  undefined1 local_a8 [8];
  byte local_a0;
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined1 local_70 [32];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (((*param_1 == -1) || (param_1[1] == -1)) ||
     (cVar7 = FUN_147693e5c(param_1,param_3), cVar7 == '\0')) {
    *param_2 = -1;
    goto LAB_147693bc8;
  }
  plVar8 = (longlong *)FUN_14001cc68(0x38,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14a4d8840;
  plVar8[2] = (longlong)&PTR_FUN_14a4d8858;
  *(undefined1 *)(plVar8 + 3) = *param_7;
  plVar8[4] = param_8;
  uVar4 = *(undefined4 *)(param_1 + 2);
  uVar5 = *(undefined4 *)(param_1 + 4);
  uVar6 = *(undefined4 *)(param_1 + 6);
  *(undefined4 *)(plVar8 + 5) = *(undefined4 *)param_1;
  *(undefined4 *)((longlong)plVar8 + 0x2c) = uVar4;
  *(undefined4 *)(plVar8 + 6) = uVar5;
  *(undefined4 *)((longlong)plVar8 + 0x34) = uVar6;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  local_50 = 0;
  FUN_1400abb7c(local_70,param_1 + 0x38);
  local_78 = 0;
  FUN_1400abb7c(local_98,param_1 + 0x4c);
  FUN_140dba9e6(local_70,*param_1);
  FUN_140dba9e6(local_70,param_1[1]);
  local_b8 = &local_b0;
  local_c0 = &LAB_147693f0a;
  local_a0 = *(byte *)(param_6 + 8);
  local_b0 = param_1;
  (*(code *)(&PTR_LAB_14a475bc0)[local_a0])(local_a8);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  local_100 = &local_c0;
  local_108 = local_a8;
  local_f8 = param_1 + 8;
  local_f0 = local_70;
  local_e8 = local_98;
  local_d0 = plVar8 + 2;
  local_c8 = plVar8;
  FUN_1406ac01c(param_4,param_2,param_5,&local_d0);
  iVar3 = *param_2;
  if (*param_2 == -1) {
    if ((*(byte *)(param_5 + 1) & 4) != 0) {
      FUN_145c71394(param_4,&local_d4);
      *param_2 = local_d4;
      iVar3 = local_d4;
      if (local_d4 != -1) goto LAB_147693d73;
    }
  }
  else {
LAB_147693d73:
    FUN_1407ce0e2(param_4,iVar3,0xffffffff);
    FUN_1407cdf34(param_4,*param_2,0xffffffff);
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
LAB_147693bc8:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147693de8 FUN_147693de8 body=115 status=ok
// SIG undefined FUN_147693de8(void)

void FUN_147693de8(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  byte *pbVar1;
  int *piVar2;
  ushort uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  lVar4 = *(longlong *)(*(longlong *)(*param_1 + 0x60) + (longlong)(int)param_1[1] * 8);
  lVar5 = *(longlong *)(lVar4 + 0x20);
  uVar8 = (ulonglong)*(uint *)*param_2;
  uVar7 = (ulonglong)((uint *)*param_2)[1];
  lVar6 = lVar5 + uVar7;
  if (uVar7 == 0xffffffff) {
    lVar6 = 0;
  }
  lVar5 = lVar5 + uVar8;
  if (uVar8 == 0xffffffff) {
    lVar5 = 0;
  }
  uVar7 = (ulonglong)*(ushort *)(lVar4 + 0xe);
  if (uVar7 != 0) {
    uVar8 = 0;
    do {
      uVar3 = *(ushort *)(lVar5 + 2 + uVar8 * 4);
      if ((int)(uint)uVar3 < (int)(*(longlong **)(param_3 + 0x10))[1]) {
        lVar4 = **(longlong **)(param_3 + 0x10);
        pbVar1 = (byte *)(lVar4 + (ulonglong)uVar3 * 8);
        *pbVar1 = *pbVar1 | *(byte *)(lVar6 + uVar8);
        piVar2 = (int *)(lVar4 + 4 + (ulonglong)uVar3 * 8);
        *piVar2 = *piVar2 + 1;
      }
      uVar8 = uVar8 + 1;
    } while (uVar7 != uVar8);
  }
  return;
}



// FUNCTION 147693e5c FUN_147693e5c body=112 status=ok
// SIG undefined FUN_147693e5c(void)

undefined8 FUN_147693e5c(ushort *param_1,undefined8 param_2)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  
  uVar1 = *param_1;
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    uVar3 = 0;
  }
  else {
    uVar3 = (ulonglong)
            CONCAT11((char)(uVar1 >> 8),
                     (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0);
  }
  uVar1 = param_1[1];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar4 = false;
  }
  else {
    bVar4 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  return CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 & bVar4);
}



// FUNCTION 147693ecc FUN_147693ecc body=1 status=ok
// SIG undefined FUN_147693ecc(void)

void FUN_147693ecc(void)

{
  return;
}



// FUNCTION 147693ece FUN_147693ece body=29 status=ok
// SIG undefined FUN_147693ece(void)

undefined8 FUN_147693ece(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147693eec FUN_147693eec body=29 status=ok
// SIG undefined FUN_147693eec(void)

undefined8 FUN_147693eec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147693f22 FUN_147693f22 body=186 status=ok
// SIG undefined FUN_147693f22(void)

void FUN_147693f22(short *param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ushort uVar4;
  ulonglong *puVar5;
  longlong lVar6;
  
  lVar1 = param_3[1];
  FUN_1403f967c(param_3,2);
  uVar4 = *(ushort *)(param_2 + 0xc);
  puVar2 = *(ulonglong **)(param_2 + 0x28);
  if (uVar4 != 0) {
    lVar6 = (ulonglong)uVar4 << 5;
    puVar5 = puVar2;
    do {
      if (*(short *)((longlong)puVar5 + 0x1e) == *param_1) goto LAB_147693f73;
      puVar5 = puVar5 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  puVar5 = (ulonglong *)0x0;
LAB_147693f73:
  lVar6 = *param_3;
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar5) {
    *(int *)(lVar6 + (longlong)(int)lVar1 * 4) = (int)*puVar5 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar6 = *param_3;
    uVar4 = *(ushort *)(param_2 + 0xc);
    puVar2 = *(ulonglong **)(param_2 + 0x28);
  }
  if (uVar4 != 0) {
    lVar3 = (ulonglong)uVar4 << 5;
    do {
      if (*(short *)((longlong)puVar2 + 0x1e) == param_1[1]) goto LAB_147693fbf;
      puVar2 = puVar2 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  puVar2 = (ulonglong *)0x0;
LAB_147693fbf:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar2) {
    *(int *)(lVar6 + 4 + (longlong)(int)lVar1 * 4) =
         (int)*puVar2 - (int)*(ulonglong *)(param_2 + 0x20);
  }
  return;
}



// FUNCTION 147693fdc FUN_147693fdc body=184 status=ok
// SIG undefined FUN_147693fdc(void)

undefined8 * FUN_147693fdc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[6] = 0x10000000000;
  param_1[0xb] = 0x10000000000;
  param_1[0x12] = 0x10000000000;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x17] = 0x10000000000;
  local_32 = *(undefined2 *)param_1;
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_1 + 2,&local_48);
  local_32 = *(undefined2 *)((longlong)param_1 + 2);
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_1 + 2,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147694096 FUN_147694096 body=617 status=ok
// SIG undefined FUN_147694096(void)

int * FUN_147694096(short *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5,longlong param_6,undefined1 *param_7,longlong param_8)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  longlong *plVar8;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined1 **local_100;
  short *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  int local_d4;
  longlong *local_d0;
  longlong *local_c8;
  undefined1 *local_c0;
  short **local_b8;
  short *local_b0;
  undefined1 local_a8 [8];
  byte local_a0;
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined1 local_70 [32];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (((*param_1 == -1) || (param_1[1] == -1)) ||
     (cVar7 = FUN_14769436c(param_1,param_3), cVar7 == '\0')) {
    *param_2 = -1;
    goto LAB_1476940d4;
  }
  plVar8 = (longlong *)FUN_14001cc68(0x38,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14a4d8860;
  plVar8[2] = (longlong)&PTR_FUN_14a4d8878;
  *(undefined1 *)(plVar8 + 3) = *param_7;
  plVar8[4] = param_8;
  uVar4 = *(undefined4 *)(param_1 + 2);
  uVar5 = *(undefined4 *)(param_1 + 4);
  uVar6 = *(undefined4 *)(param_1 + 6);
  *(undefined4 *)(plVar8 + 5) = *(undefined4 *)param_1;
  *(undefined4 *)((longlong)plVar8 + 0x2c) = uVar4;
  *(undefined4 *)(plVar8 + 6) = uVar5;
  *(undefined4 *)((longlong)plVar8 + 0x34) = uVar6;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  local_50 = 0;
  FUN_1400abb7c(local_70,param_1 + 0x38);
  local_78 = 0;
  FUN_1400abb7c(local_98,param_1 + 0x4c);
  FUN_140dba9e6(local_70,*param_1);
  FUN_140dba9e6(local_70,param_1[1]);
  FUN_140dba9e6(local_98,param_1[1]);
  local_b8 = &local_b0;
  local_c0 = &LAB_14769441a;
  local_a0 = *(byte *)(param_6 + 8);
  local_b0 = param_1;
  (*(code *)(&PTR_LAB_14a475bc0)[local_a0])(local_a8);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  local_100 = &local_c0;
  local_108 = local_a8;
  local_f8 = param_1 + 8;
  local_f0 = local_70;
  local_e8 = local_98;
  local_d0 = plVar8 + 2;
  local_c8 = plVar8;
  FUN_1406ac01c(param_4,param_2,param_5,&local_d0);
  iVar3 = *param_2;
  if (*param_2 == -1) {
    if ((*(byte *)(param_5 + 1) & 4) != 0) {
      FUN_145c71394(param_4,&local_d4);
      *param_2 = local_d4;
      iVar3 = local_d4;
      if (local_d4 != -1) goto LAB_14769428c;
    }
  }
  else {
LAB_14769428c:
    FUN_1407ce0e2(param_4,iVar3,0xffffffff);
    FUN_1407cdf34(param_4,*param_2,0xffffffff);
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
LAB_1476940d4:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147694300 FUN_147694300 body=108 status=ok
// SIG undefined FUN_147694300(void)

void FUN_147694300(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  lVar2 = *(longlong *)(*(longlong *)(*param_1 + 0x60) + (longlong)(int)param_1[1] * 8);
  lVar3 = *(longlong *)(lVar2 + 0x20);
  uVar6 = (ulonglong)*(uint *)*param_2;
  uVar5 = (ulonglong)((uint *)*param_2)[1];
  lVar4 = lVar3 + uVar5;
  if (uVar5 == 0xffffffff) {
    lVar4 = 0;
  }
  lVar3 = lVar3 + uVar6;
  if (uVar6 == 0xffffffff) {
    lVar3 = 0;
  }
  uVar5 = (ulonglong)*(ushort *)(lVar2 + 0xe);
  if (uVar5 != 0) {
    uVar6 = 0;
    do {
      uVar1 = *(ushort *)(lVar3 + 2 + uVar6 * 4);
      if ((int)(uint)uVar1 < (int)(*(longlong **)(param_3 + 0x10))[1]) {
        *(undefined1 *)(lVar4 + uVar6) =
             *(undefined1 *)(**(longlong **)(param_3 + 0x10) + (ulonglong)uVar1 * 8);
      }
      uVar6 = uVar6 + 1;
    } while (uVar5 != uVar6);
  }
  return;
}



// FUNCTION 14769436c FUN_14769436c body=112 status=ok
// SIG undefined FUN_14769436c(void)

undefined8 FUN_14769436c(ushort *param_1,undefined8 param_2)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  
  uVar1 = *param_1;
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    uVar3 = 0;
  }
  else {
    uVar3 = (ulonglong)
            CONCAT11((char)(uVar1 >> 8),
                     (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0);
  }
  uVar1 = param_1[1];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar4 = false;
  }
  else {
    bVar4 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  return CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 & bVar4);
}



// FUNCTION 1476943dc FUN_1476943dc body=1 status=ok
// SIG undefined FUN_1476943dc(void)

void FUN_1476943dc(void)

{
  return;
}



// FUNCTION 1476943de FUN_1476943de body=29 status=ok
// SIG undefined FUN_1476943de(void)

undefined8 FUN_1476943de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476943fc FUN_1476943fc body=29 status=ok
// SIG undefined FUN_1476943fc(void)

undefined8 FUN_1476943fc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147694432 FUN_147694432 body=186 status=ok
// SIG undefined FUN_147694432(void)

void FUN_147694432(short *param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ushort uVar4;
  ulonglong *puVar5;
  longlong lVar6;
  
  lVar1 = param_3[1];
  FUN_1403f967c(param_3,2);
  uVar4 = *(ushort *)(param_2 + 0xc);
  puVar2 = *(ulonglong **)(param_2 + 0x28);
  if (uVar4 != 0) {
    lVar6 = (ulonglong)uVar4 << 5;
    puVar5 = puVar2;
    do {
      if (*(short *)((longlong)puVar5 + 0x1e) == *param_1) goto LAB_147694483;
      puVar5 = puVar5 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  puVar5 = (ulonglong *)0x0;
LAB_147694483:
  lVar6 = *param_3;
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar5) {
    *(int *)(lVar6 + (longlong)(int)lVar1 * 4) = (int)*puVar5 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar6 = *param_3;
    uVar4 = *(ushort *)(param_2 + 0xc);
    puVar2 = *(ulonglong **)(param_2 + 0x28);
  }
  if (uVar4 != 0) {
    lVar3 = (ulonglong)uVar4 << 5;
    do {
      if (*(short *)((longlong)puVar2 + 0x1e) == param_1[1]) goto LAB_1476944cf;
      puVar2 = puVar2 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  puVar2 = (ulonglong *)0x0;
LAB_1476944cf:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar2) {
    *(int *)(lVar6 + 4 + (longlong)(int)lVar1 * 4) =
         (int)*puVar2 - (int)*(ulonglong *)(param_2 + 0x20);
  }
  return;
}



// FUNCTION 1476944ec FUN_1476944ec body=119 status=ok
// SIG undefined FUN_1476944ec(void)

undefined4 * FUN_1476944ec(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_1403b8af8(param_1 + 4,param_3 + 4);
  *(undefined8 *)(param_1 + 0x24) = 0;
  FUN_1400abb7c(param_1 + 0x1c,param_3 + 0x1c);
  *(undefined8 *)(param_1 + 0x2e) = 0;
  FUN_1400abb7c(param_1 + 0x26,param_3 + 0x26);
  *(longlong *)(param_1 + 0x30) = param_2;
  *(undefined8 *)(param_1 + 0x32) = *(undefined8 *)(param_2 + 0x248);
  return param_1;
}



// FUNCTION 147694564 FUN_147694564 body=183 status=ok
// SIG undefined FUN_147694564(void)

void FUN_147694564(undefined2 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  ulonglong *local_48;
  undefined2 local_3a;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_3a = 0xffff;
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = *param_1;
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = param_1[1];
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14769461c FUN_14769461c body=324 status=ok
// SIG undefined FUN_14769461c(void)

void FUN_14769461c(longlong param_1,longlong param_2,short *param_3)

{
  byte *pbVar1;
  int *piVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 auStack_98 [40];
  longlong *local_70;
  int local_68;
  longlong local_60;
  longlong *local_58;
  int local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar10 = *(longlong **)(param_2 + 0x28);
    lVar8 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar10 + 0x1e) == param_3[1]) goto LAB_147694652;
      plVar10 = plVar10 + 4;
      lVar8 = lVar8 + -0x20;
    } while (lVar8 != 0);
  }
  plVar10 = (longlong *)0x0;
LAB_147694652:
  iVar5 = *(int *)(param_2 + 0x14);
  if (iVar5 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar10 + 1));
  }
  LOCK();
  *(int *)(plVar10 + 3) = (int)plVar10[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar11 = *(longlong **)(param_2 + 0x28);
    lVar8 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar11 + 0x1e) == *param_3) goto LAB_147694679;
      plVar11 = plVar11 + 4;
      lVar8 = lVar8 + -0x20;
    } while (lVar8 != 0);
  }
  plVar11 = (longlong *)0x0;
LAB_147694679:
  lVar8 = *plVar10;
  iVar6 = *(int *)(param_2 + 0x14);
  if (iVar6 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar11 + 1));
  }
  LOCK();
  *(int *)(plVar11 + 3) = (int)plVar11[3] + 1;
  UNLOCK();
  local_60 = *plVar11;
  uVar3 = *(ushort *)(param_2 + 0xe);
  if ((ulonglong)uVar3 != 0) {
    uVar9 = 0;
    do {
      uVar4 = *(ushort *)(local_60 + 2 + uVar9 * 4);
      if ((int)(uint)uVar4 < (int)(*(longlong **)(param_1 + 8))[1]) {
        lVar7 = **(longlong **)(param_1 + 8);
        pbVar1 = (byte *)(lVar7 + (ulonglong)uVar4 * 8);
        *pbVar1 = *pbVar1 | *(byte *)(lVar8 + uVar9);
        piVar2 = (int *)(lVar7 + 4 + (ulonglong)uVar4 * 8);
        *piVar2 = *piVar2 + 1;
      }
      uVar9 = uVar9 + 1;
    } while (uVar3 != uVar9);
  }
  local_70 = plVar11;
  local_68 = iVar6;
  local_58 = plVar10;
  local_50 = iVar5;
  local_48 = lVar8;
  FUN_147694762(&local_70);
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147694762 FUN_147694762 body=85 status=ok
// SIG undefined FUN_147694762(void)

void FUN_147694762(longlong *param_1)

{
  int *piVar1;
  
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[4] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[3] + 8));
    }
  }
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001476947a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 1476947b8 FUN_1476947b8 body=119 status=ok
// SIG undefined FUN_1476947b8(void)

undefined4 * FUN_1476947b8(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_1403b8af8(param_1 + 4,param_3 + 4);
  *(undefined8 *)(param_1 + 0x24) = 0;
  FUN_1400abb7c(param_1 + 0x1c,param_3 + 0x1c);
  *(undefined8 *)(param_1 + 0x2e) = 0;
  FUN_1400abb7c(param_1 + 0x26,param_3 + 0x26);
  *(longlong *)(param_1 + 0x30) = param_2;
  *(undefined8 *)(param_1 + 0x32) = *(undefined8 *)(param_2 + 0x248);
  return param_1;
}



// FUNCTION 147694830 FUN_147694830 body=183 status=ok
// SIG undefined FUN_147694830(void)

void FUN_147694830(undefined2 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  ulonglong *local_48;
  undefined2 local_3a;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_3a = 0xffff;
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = *param_1;
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = param_1[1];
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476948e8 FUN_1476948e8 body=125 status=ok
// SIG undefined FUN_1476948e8(void)

void FUN_1476948e8(longlong param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_2;
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  FUN_1432da764(param_3,&local_30);
  local_28 = *param_2;
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  FUN_1432da954(param_3,*(undefined2 *)(param_1 + 2),&local_28);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147694966 FUN_147694966 body=337 status=ok
// SIG undefined FUN_147694966(void)

void FUN_147694966(longlong param_1,longlong param_2,undefined8 param_3,short *param_4)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  int local_78;
  longlong local_70;
  longlong *local_68;
  undefined8 local_60;
  int local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar8 = *(longlong **)(param_2 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == param_4[1]) goto LAB_1476949a1;
      plVar8 = plVar8 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_1476949a1:
  iVar3 = *(int *)(param_2 + 0x14);
  if (iVar3 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar7 = *(longlong **)(param_2 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == *param_4) goto LAB_1476949c8;
      plVar7 = plVar7 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_1476949c8:
  lVar5 = *plVar8;
  iVar4 = *(int *)(param_2 + 0x14);
  if (iVar4 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar7 + 1));
  }
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  UNLOCK();
  local_70 = *plVar7;
  uVar1 = *(ushort *)(param_2 + 0xe);
  if ((ulonglong)uVar1 != 0) {
    uVar6 = 0;
    do {
      uVar2 = *(ushort *)(local_70 + 2 + uVar6 * 4);
      if ((int)(uint)uVar2 < (int)(*(longlong **)(param_1 + 8))[1]) {
        *(undefined1 *)(lVar5 + uVar6) =
             *(undefined1 *)(**(longlong **)(param_1 + 8) + (ulonglong)uVar2 * 8);
      }
      uVar6 = uVar6 + 1;
    } while (uVar1 != uVar6);
  }
  local_80 = plVar7;
  local_78 = iVar4;
  local_68 = plVar8;
  local_60 = param_3;
  local_58 = iVar3;
  local_50 = lVar5;
  FUN_147694ab8(&local_80);
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147694ab8 FUN_147694ab8 body=108 status=ok
// SIG undefined FUN_147694ab8(void)

void FUN_147694ab8(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = param_1[3];
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)(lVar2 + 0x10);
    if (*(ulonglong *)(lVar2 + 0x10) < (ulonglong)param_1[4]) {
      uVar3 = param_1[4];
    }
    *(ulonglong *)(lVar2 + 0x10) = uVar3;
    LOCK();
    *(int *)(param_1[3] + 0x18) = *(int *)(param_1[3] + 0x18) + -1;
    UNLOCK();
    if ((int)param_1[5] == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(param_1[3] + 8));
    }
  }
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x000147694b16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 147694b24 FUN_147694b24 body=116 status=ok
// SIG undefined FUN_147694b24(void)

void FUN_147694b24(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_147694bfa(param_1,iVar1);
    }
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 8) = param_2, param_3 == '\x01')) {
      FUN_147694c80(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147694b98 FUN_147694b98 body=96 status=ok
// SIG undefined FUN_147694b98(void)

void FUN_147694b98(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,4);
  }
  return;
}



// FUNCTION 147694bfa FUN_147694bfa body=132 status=ok
// SIG undefined FUN_147694bfa(void)

void FUN_147694bfa(longlong param_1,int param_2)

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



// FUNCTION 147694c80 FUN_147694c80 body=63 status=ok
// SIG undefined FUN_147694c80(void)

void FUN_147694c80(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147694cc0(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 147694cc0 FUN_147694cc0 body=97 status=ok
// SIG undefined FUN_147694cc0(void)

ulonglong FUN_147694cc0(undefined8 param_1,uint param_2,uint param_3)

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
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,4);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 147694d22 FUN_147694d22 body=184 status=ok
// SIG undefined FUN_147694d22(void)

undefined8 * FUN_147694d22(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[6] = 0x10000000000;
  param_1[0xb] = 0x10000000000;
  param_1[0x12] = 0x10000000000;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x17] = 0x10000000000;
  local_32 = *(undefined2 *)param_1;
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_1 + 2,&local_48);
  local_32 = *(undefined2 *)((longlong)param_1 + 2);
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_1 + 2,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147694ddc FUN_147694ddc body=112 status=ok
// SIG undefined FUN_147694ddc(void)

undefined8 FUN_147694ddc(ushort *param_1,undefined8 param_2)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  
  uVar1 = *param_1;
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    uVar3 = 0;
  }
  else {
    uVar3 = (ulonglong)
            CONCAT11((char)(uVar1 >> 8),
                     (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0);
  }
  uVar1 = param_1[1];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar4 = false;
  }
  else {
    bVar4 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  return CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 & bVar4);
}



// FUNCTION 147694e4c FUN_147694e4c body=119 status=ok
// SIG undefined FUN_147694e4c(void)

undefined4 * FUN_147694e4c(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_1403b8af8(param_1 + 4,param_3 + 4);
  *(undefined8 *)(param_1 + 0x24) = 0;
  FUN_1400abb7c(param_1 + 0x1c,param_3 + 0x1c);
  *(undefined8 *)(param_1 + 0x2e) = 0;
  FUN_1400abb7c(param_1 + 0x26,param_3 + 0x26);
  *(longlong *)(param_1 + 0x30) = param_2;
  *(undefined8 *)(param_1 + 0x32) = *(undefined8 *)(param_2 + 0x248);
  return param_1;
}



// FUNCTION 147694ec4 FUN_147694ec4 body=183 status=ok
// SIG undefined FUN_147694ec4(void)

void FUN_147694ec4(undefined2 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  ulonglong *local_48;
  undefined2 local_3a;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_3a = 0xffff;
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = *param_1;
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = param_1[1];
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147694f7c FUN_147694f7c body=324 status=ok
// SIG undefined FUN_147694f7c(void)

void FUN_147694f7c(longlong param_1,longlong param_2,undefined8 param_3,short *param_4)

{
  char *pcVar1;
  int *piVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 auStack_98 [40];
  longlong *local_70;
  int local_68;
  longlong local_60;
  longlong *local_58;
  int local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar10 = *(longlong **)(param_2 + 0x28);
    lVar8 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar10 + 0x1e) == param_4[1]) goto LAB_147694fb2;
      plVar10 = plVar10 + 4;
      lVar8 = lVar8 + -0x20;
    } while (lVar8 != 0);
  }
  plVar10 = (longlong *)0x0;
LAB_147694fb2:
  iVar5 = *(int *)(param_2 + 0x14);
  if (iVar5 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar10 + 1));
  }
  LOCK();
  *(int *)(plVar10 + 3) = (int)plVar10[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar11 = *(longlong **)(param_2 + 0x28);
    lVar8 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar11 + 0x1e) == *param_4) goto LAB_147694fd9;
      plVar11 = plVar11 + 4;
      lVar8 = lVar8 + -0x20;
    } while (lVar8 != 0);
  }
  plVar11 = (longlong *)0x0;
LAB_147694fd9:
  lVar8 = *plVar10;
  iVar6 = *(int *)(param_2 + 0x14);
  if (iVar6 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar11 + 1));
  }
  LOCK();
  *(int *)(plVar11 + 3) = (int)plVar11[3] + 1;
  UNLOCK();
  local_60 = *plVar11;
  uVar3 = *(ushort *)(param_2 + 0xe);
  if ((ulonglong)uVar3 != 0) {
    uVar9 = 0;
    do {
      uVar4 = *(ushort *)(local_60 + 2 + uVar9 * 4);
      if ((int)(uint)uVar4 < (int)(*(longlong **)(param_1 + 8))[1]) {
        lVar7 = **(longlong **)(param_1 + 8);
        pcVar1 = (char *)(lVar7 + (ulonglong)uVar4 * 8);
        *pcVar1 = *pcVar1 + *(char *)(lVar8 + uVar9);
        piVar2 = (int *)(lVar7 + 4 + (ulonglong)uVar4 * 8);
        *piVar2 = *piVar2 + 1;
      }
      uVar9 = uVar9 + 1;
    } while (uVar3 != uVar9);
  }
  local_70 = plVar11;
  local_68 = iVar6;
  local_58 = plVar10;
  local_50 = iVar5;
  local_48 = lVar8;
  FUN_1476950c2(&local_70);
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476950c2 FUN_1476950c2 body=85 status=ok
// SIG undefined FUN_1476950c2(void)

void FUN_1476950c2(longlong *param_1)

{
  int *piVar1;
  
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[4] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[3] + 8));
    }
  }
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x000147695109. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}


