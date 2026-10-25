// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14707f344 FUN_14707f344 body=67 status=ok
// SIG undefined FUN_14707f344(void)

void FUN_14707f344(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  (**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14707f388 FUN_14707f388 body=271 status=ok
// SIG undefined FUN_14707f388(void)

void FUN_14707f388(longlong param_1,undefined8 *param_2,undefined8 *param_3,byte param_4,
                  longlong param_5)

{
  char cVar1;
  undefined2 *puVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80 [3];
  byte local_68;
  longlong local_58;
  undefined8 uStack_50;
  int local_44;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_4 == 0) {
    local_58 = 0;
    uStack_50 = 0;
    FUN_142b0faf8(&local_88);
    if (*(int *)(param_2 + 1) == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    else {
      puVar2 = (undefined2 *)*param_2;
    }
    cVar1 = FUN_1401154ee(*(undefined8 *)(param_1 + 8),puVar2,0,&local_88);
    local_80[2] = 0xffffffffffffffff;
    if (cVar1 != '\0') {
      local_80[2] = local_80[local_44 != 0];
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    local_68 = local_68 & 0xf8;
  }
  else {
    local_80[2] = 0xffffffffffffffff;
    local_68 = 0;
  }
  local_88 = *(undefined8 *)(param_5 + 0x200);
  local_68 = local_68 | param_4 | 6;
  if (*(int *)(param_3 + 1) == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  else {
    puVar2 = (undefined2 *)*param_3;
  }
  local_80[0] = local_88;
  local_80[1] = local_88;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))
            (*(longlong **)(param_1 + 0x10),puVar2,&local_88);
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14707f498 FUN_14707f498 body=47 status=ok
// SIG undefined FUN_14707f498(void)

longlong FUN_14707f498(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14707f4c8 FUN_14707f4c8 body=71 status=ok
// SIG undefined FUN_14707f4c8(void)

undefined1 FUN_14707f4c8(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined2 *puVar3;
  
  cVar1 = FUN_1401158f8(param_1 + 8);
  if (cVar1 != '\0') {
    return 1;
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = *(undefined2 **)(param_1 + 0x10);
  }
  uVar2 = FUN_1467b706a(*(undefined8 *)(param_1 + 0x20),puVar3,param_3);
  return uVar2;
}



// FUNCTION 14707f510 FUN_14707f510 body=29 status=ok
// SIG undefined FUN_14707f510(void)

undefined8 FUN_14707f510(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14707f52e FUN_14707f52e body=47 status=ok
// SIG undefined FUN_14707f52e(void)

longlong FUN_14707f52e(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14707f590 FUN_14707f590 body=87 status=ok
// SIG undefined FUN_14707f590(void)

void FUN_14707f590(longlong *param_1,int param_2)

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
  FUN_14707f20e();
  return;
}



// FUNCTION 14707f5e8 FUN_14707f5e8 body=101 status=ok
// SIG undefined FUN_14707f5e8(void)

void FUN_14707f5e8(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x98 + *param_1);
  FUN_14707ee29(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x98 + (longlong)_Dst),(longlong)iVar2 * 0x98);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 14707f64e FUN_14707f64e body=62 status=ok
// SIG undefined FUN_14707f64e(void)

void FUN_14707f64e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14707f68c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x98,8);
  }
  return;
}



// FUNCTION 14707f68c FUN_14707f68c body=110 status=ok
// SIG undefined FUN_14707f68c(void)

ulonglong FUN_14707f68c(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x98) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_14707f6c5;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x98,8);
      param_2 = param_2 / 0x98;
    }
  }
LAB_14707f6c5:
  return param_2 & 0xffffffff;
}



// FUNCTION 14707f6fa FUN_14707f6fa body=70 status=ok
// SIG undefined FUN_14707f6fa(void)

void FUN_14707f6fa(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_141119746(param_1 + 2);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14707f740 FUN_14707f740 body=414 status=ok
// SIG undefined FUN_14707f740(void)

longlong * FUN_14707f740(longlong *param_1,longlong *param_2)

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
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
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
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_1407faa40(param_2,0);
    }
  }
  else if ((((int)local_3c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x100000 < local_3c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_3c;
    lVar5 = 8;
    lVar6 = 0;
    do {
      lVar3 = *param_2;
      FUN_1408383eb(param_1,lVar3 + lVar5 + -8);
      FUN_1408383eb(param_1,lVar3 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x10;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_3c) ||
       (FUN_1407faa40(param_2), 0 < (int)local_3c)) {
      iVar4 = 0;
      do {
        lVar5 = FUN_14707f8e0(param_2);
        FUN_1408383eb(param_1,lVar5);
        FUN_1408383eb(param_1,lVar5 + 8);
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



// FUNCTION 14707f8e0 FUN_14707f8e0 body=53 status=ok
// SIG undefined FUN_14707f8e0(void)

longlong FUN_14707f8e0(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14707f916(param_1,iVar1);
  }
  return (longlong)iVar1 * 0x10 + *param_1;
}



// FUNCTION 14707f916 FUN_14707f916 body=132 status=ok
// SIG undefined FUN_14707f916(void)

void FUN_14707f916(longlong param_1,int param_2)

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



// FUNCTION 14707f99c FUN_14707f99c body=1258 status=ok
// SIG undefined FUN_14707f99c(void)

longlong * FUN_14707f99c(longlong *param_1,longlong param_2,undefined1 param_3,char param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined2 *puVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_108 [38];
  undefined1 local_e2;
  char local_e1;
  longlong local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  longlong lStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *param_1 = param_2;
  local_98 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  lStack_b0 = 0;
  uStack_90 = 0x8000000000;
  local_88 = 0xffffffff;
  param_1[1] = (longlong)&local_b8;
  param_1[2] = 0x100000000;
  param_1[3] = (longlong)&local_a8;
  param_1[4] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  local_e2 = param_3;
  local_e1 = param_4;
  local_e0 = param_2;
  FUN_14111935c(&local_b8);
  local_98 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  lStack_b0 = 0;
  uStack_90 = 0x8000000000;
  local_88 = 0xffffffff;
  param_1[6] = (longlong)&local_b8;
  param_1[7] = 0x100000000;
  param_1[8] = (longlong)&local_a8;
  param_1[9] = 0xffffffff;
  *(undefined4 *)(param_1 + 10) = 0;
  FUN_141119746(&local_b8);
  lVar9 = *param_1;
  lStack_b0 = lVar9 + 0x1a0;
  local_b8 = 0x100000000;
  local_a8 = 0xffffffff;
  uStack_a0 = uStack_a0 & 0xffffffff00000000;
  if (*(int *)(lVar9 + 0x1b8) != 0) {
    FUN_1449c0562(&local_b8);
  }
  plVar1 = param_1 + 7;
  local_c8 = local_a8;
  lVar6 = local_c8;
  uStack_c0 = uStack_a0;
  uVar7 = uStack_c0;
  local_d8 = local_b8;
  lVar11 = local_d8;
  uStack_d0 = lStack_b0;
  lVar5 = uStack_d0;
  param_1[0xb] = lVar9 + 400;
  local_d8._0_4_ = (undefined4)local_b8;
  local_d8._4_4_ = (undefined4)((ulonglong)local_b8 >> 0x20);
  uStack_d0._0_4_ = (undefined4)lStack_b0;
  uStack_d0._4_4_ = (undefined4)((ulonglong)lStack_b0 >> 0x20);
  local_c8._0_4_ = (undefined4)local_a8;
  local_c8._4_4_ = (undefined4)((ulonglong)local_a8 >> 0x20);
  uStack_c0._0_4_ = (undefined4)uStack_a0;
  uStack_c0._4_4_ = (undefined4)(uStack_a0 >> 0x20);
  *(undefined4 *)(param_1 + 0xc) = (undefined4)local_d8;
  *(undefined4 *)((longlong)param_1 + 100) = local_d8._4_4_;
  *(undefined4 *)(param_1 + 0xd) = (undefined4)uStack_d0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = uStack_d0._4_4_;
  *(undefined4 *)(param_1 + 0xe) = (undefined4)local_c8;
  *(undefined4 *)((longlong)param_1 + 0x74) = local_c8._4_4_;
  *(undefined4 *)(param_1 + 0xf) = (undefined4)uStack_c0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uStack_c0._4_4_;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  local_d8 = lVar11;
  uStack_d0 = lVar5;
  local_c8 = lVar6;
  uStack_c0 = uVar7;
  FUN_142b0faf8(param_1 + 0x12);
  *(char *)(param_1 + 0x1c) = local_e1;
  *(undefined1 *)((longlong)param_1 + 0xe1) = local_e2;
  *(undefined1 *)((longlong)param_1 + 0xe2) = 0;
  if (local_e1 == '\0') {
    cVar3 = *(char *)(*param_1 + 0x214);
    *(char *)((longlong)param_1 + 0xe2) = cVar3;
    if (cVar3 == '\x01') {
      AcquireSRWLockShared((PSRWLOCK)(*param_1 + 0x188));
    }
    plVar2 = (longlong *)(local_e0 + 0xe8);
    lStack_b0 = local_e0 + 0xf8;
    local_b8 = 0x100000000;
    local_a8 = 0xffffffff;
    uStack_a0 = uStack_a0 & 0xffffffff00000000;
    if (*(int *)(local_e0 + 0x110) != 0) {
      FUN_1449c0562(&local_b8);
    }
    local_d8 = local_b8;
    uStack_d0 = lStack_b0;
    local_c8 = local_a8;
    uStack_c0 = uStack_a0;
    param_1[1] = (longlong)plVar2;
    param_1[4] = local_a8;
    *(int *)(param_1 + 5) = (int)uStack_a0;
    *(uint *)((longlong)param_1 + 0x2c) = uStack_a0._4_4_;
    param_1[2] = local_b8;
    param_1[3] = lStack_b0;
    if (*(int *)((longlong)param_1 + 0x24) < *(int *)(param_1[3] + 0x18)) {
      lVar9 = *plVar2;
      lVar11 = (longlong)*(int *)((longlong)param_1 + 0x24) * 0x68;
      lStack_b0 = lVar9 + 0x20 + lVar11;
      local_b8 = 0x100000000;
      local_a8 = 0xffffffff;
      uStack_a0 = (ulonglong)uStack_a0._4_4_ << 0x20;
      if (*(int *)(lStack_b0 + 0x18) != 0) {
        FUN_1449c0562(&local_b8);
      }
      local_c8 = local_a8;
      uStack_c0 = uStack_a0;
      local_d8 = local_b8;
      uStack_d0 = lStack_b0;
      param_1[6] = lVar9 + lVar11 + 0x10;
      param_1[9] = local_a8;
      *(int *)(param_1 + 10) = (int)uStack_a0;
      *(uint *)((longlong)param_1 + 0x54) = uStack_a0._4_4_;
      *plVar1 = local_b8;
      param_1[8] = lStack_b0;
    }
  }
  if ((char)param_1[0x1c] == '\0') {
    if (*(int *)((longlong)param_1 + 0x24) < *(int *)(param_1[3] + 0x18)) {
      do {
        iVar8 = *(int *)((longlong)param_1 + 0x4c);
        iVar10 = *(int *)(param_1[8] + 0x18);
        if (iVar8 < iVar10) {
          if ((*(char *)((longlong)param_1 + 0xe1) != '\0') ||
             (lVar9 = FUN_14707d644(param_1), (*(byte *)(lVar9 + 0x48) & 2) == 0)) break;
          iVar8 = *(int *)((longlong)param_1 + 0x4c);
          iVar10 = *(int *)(param_1[8] + 0x18);
        }
        if (iVar8 < iVar10) {
          *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) & ~*(uint *)((longlong)param_1 + 0x3c);
          FUN_1449c0562(plVar1);
        }
        else {
          *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & ~*(uint *)((longlong)param_1 + 0x14);
          FUN_1449c0562(param_1 + 2);
          if (*(int *)((longlong)param_1 + 0x24) < *(int *)(param_1[3] + 0x18)) {
            lVar9 = *(longlong *)param_1[1];
            lVar11 = (longlong)*(int *)((longlong)param_1 + 0x24) * 0x68;
            lStack_b0 = lVar11 + 0x20 + lVar9;
            local_b8 = 0x100000000;
            local_a8 = 0xffffffff;
            uStack_a0 = uStack_a0 & 0xffffffff00000000;
            if (*(int *)(lStack_b0 + 0x18) != 0) {
              FUN_1449c0562(&local_b8);
            }
            local_d8 = local_b8;
            uStack_d0 = lStack_b0;
            local_c8 = local_a8;
            uStack_c0 = uStack_a0;
            param_1[6] = lVar11 + 0x10 + lVar9;
            param_1[9] = local_a8;
            *(int *)(param_1 + 10) = (int)uStack_a0;
            *(uint *)((longlong)param_1 + 0x54) = uStack_a0._4_4_;
            *plVar1 = local_b8;
            param_1[8] = lStack_b0;
          }
        }
      } while (*(int *)((longlong)param_1 + 0x24) < *(int *)(param_1[3] + 0x18));
    }
    *(undefined4 *)(param_1 + 0x11) = 0;
    if (*(int *)((longlong)param_1 + 0x8c) < 0) {
      FUN_1446f8c06(param_1 + 0x10,0);
    }
    puVar4 = (undefined2 *)param_1[0x10];
    if (puVar4 != (undefined2 *)0x0) {
      *puVar4 = 0;
    }
  }
  else if (*(int *)((longlong)param_1 + 0x74) < *(int *)(param_1[0xd] + 0x18)) {
    do {
      if ((*(char *)((longlong)param_1 + 0xe1) != '\0') ||
         (lVar9 = FUN_14707d644(param_1), (*(byte *)(lVar9 + 0x48) & 2) == 0)) break;
      *(uint *)(param_1 + 0xe) = *(uint *)(param_1 + 0xe) & ~*(uint *)((longlong)param_1 + 100);
      FUN_1449c0562(param_1 + 0xc);
    } while (*(int *)((longlong)param_1 + 0x74) < *(int *)(param_1[0xd] + 0x18));
  }
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14707fe87 FUN_14707fe87 body=46 status=ok
// SIG undefined FUN_14707fe87(void)

undefined8 FUN_14707fe87(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      if ((*(longlong *)(param_1 + lVar1) != *(longlong *)(param_2 + lVar1)) ||
         (*(longlong *)(param_1 + 8 + lVar1) != *(longlong *)(param_2 + 8 + lVar1))) {
        return 0;
      }
      lVar1 = lVar1 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return 1;
}



// FUNCTION 14707feb6 FUN_14707feb6 body=62 status=ok
// SIG undefined FUN_14707feb6(void)

void FUN_14707feb6(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14707fef4(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 14707fef4 FUN_14707fef4 body=93 status=ok
// SIG undefined FUN_14707fef4(void)

ulonglong FUN_14707fef4(uint param_1,uint param_2)

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



// FUNCTION 14707ff52 FUN_14707ff52 body=62 status=ok
// SIG undefined FUN_14707ff52(void)

void FUN_14707ff52(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14707ff90(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x20,8);
  }
  return;
}



// FUNCTION 14707ff90 FUN_14707ff90 body=93 status=ok
// SIG undefined FUN_14707ff90(void)

ulonglong FUN_14707ff90(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x7fffffffffffe00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 5,8);
      uVar1 = uVar1 >> 5;
    }
  }
  return uVar1;
}



// FUNCTION 14707ffee FUN_14707ffee body=413 status=ok
// SIG undefined FUN_14707ffee(void)

void FUN_14707ffee(longlong *param_1,uint param_2)

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
      FUN_14472eb64(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_144869a3c(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar9 * 0x10 + lVar2 + -0xc);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = iVar8 + -1;
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
        puVar5 = puVar5 + -4;
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



// FUNCTION 14708018c FUN_14708018c body=422 status=ok
// SIG undefined FUN_14708018c(void)

void FUN_14708018c(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
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



// FUNCTION 147080334 FUN_147080334 body=422 status=ok
// SIG undefined FUN_147080334(void)

void FUN_147080334(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
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



// FUNCTION 1470804dc FUN_1470804dc body=68 status=ok
// SIG undefined FUN_1470804dc(void)

void FUN_1470804dc(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_147080520();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_14472eb64(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 147080520 FUN_147080520 body=322 status=ok
// SIG undefined FUN_147080520(void)

void FUN_147080520(longlong *param_1)

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



// FUNCTION 147080664 FUN_147080664 body=188 status=ok
// SIG undefined FUN_147080664(void)

longlong FUN_147080664(longlong *param_1,uint param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  int *local_30;
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
        lVar3 = *param_1 + (longlong)iVar1 * 0x10;
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x10) == *param_3) {
          if (lVar3 != 0) goto LAB_147080703;
          break;
        }
        iVar1 = *(int *)(lVar3 + 8);
      } while (iVar1 != -1);
    }
  }
  local_30 = param_3;
  local_28 = param_4;
  FUN_147080722(param_1,&local_1c,param_2,&local_30);
  lVar3 = (longlong)local_1c * 0x10 + *param_1;
LAB_147080703:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 4;
}



// FUNCTION 147080722 FUN_147080722 body=271 status=ok
// SIG undefined FUN_147080722(void)

undefined4 * FUN_147080722(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147080832(param_1,local_48);
  puVar1 = (undefined4 *)param_4[1];
  *local_40 = *(undefined4 *)*param_4;
  local_40[1] = *puVar1;
  local_40[2] = 0xffffffff;
  cVar2 = FUN_147080918(param_1,param_3,local_40,local_48);
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      local_40[3] = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      local_40[2] = *(undefined4 *)
                     (lVar5 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_14708018c(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147080832 FUN_147080832 body=229 status=ok
// SIG undefined FUN_147080832(void)

int * FUN_147080832(longlong *param_1,int *param_2)

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



// FUNCTION 147080918 FUN_147080918 body=127 status=ok
// SIG undefined FUN_147080918(void)

undefined8 FUN_147080918(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  undefined8 *puVar1;
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
        puVar1 = (undefined8 *)(*param_1 + (longlong)iVar3 * 0x10);
        if (*(int *)(*param_1 + (longlong)iVar3 * 0x10) == *param_3) {
          *puVar1 = *(undefined8 *)param_3;
          FUN_147080998(param_1,*param_4);
          *param_4 = iVar3;
          return 1;
        }
        iVar3 = *(int *)(puVar1 + 1);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 147080998 FUN_147080998 body=114 status=ok
// SIG undefined FUN_147080998(void)

void FUN_147080998(longlong *param_1,int param_2)

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



// FUNCTION 147080a0a FUN_147080a0a body=114 status=ok
// SIG undefined FUN_147080a0a(void)

void FUN_147080a0a(longlong *param_1,int param_2)

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



// FUNCTION 147080a7c FUN_147080a7c body=114 status=ok
// SIG undefined FUN_147080a7c(void)

void FUN_147080a7c(longlong *param_1,int param_2)

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



// FUNCTION 147080aee FUN_147080aee body=181 status=ok
// SIG undefined FUN_147080aee(void)

longlong FUN_147080aee(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
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
        lVar3 = *param_1 + (longlong)iVar1 * 0x20;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x20) == *param_3) {
          if (lVar3 != 0) goto LAB_147080b86;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_147080ba4(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_147080b86:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 147080ba4 FUN_147080ba4 body=277 status=ok
// SIG undefined FUN_147080ba4(void)

undefined4 * FUN_147080ba4(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

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
  FUN_147080cba(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  local_40[2] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  cVar1 = FUN_147080da0(param_1,param_3,local_40,local_48);
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
      *(uint *)((longlong)local_40 + 0x1c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
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
      FUN_147080334(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147080cba FUN_147080cba body=229 status=ok
// SIG undefined FUN_147080cba(void)

int * FUN_147080cba(longlong *param_1,int *param_2)

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



// FUNCTION 147080da0 FUN_147080da0 body=134 status=ok
// SIG undefined FUN_147080da0(void)

undefined8 FUN_147080da0(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
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
          FUN_147080e26((int)lVar4,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 147080e26 FUN_147080e26 body=114 status=ok
// SIG undefined FUN_147080e26(void)

void FUN_147080e26(longlong *param_1,int param_2)

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



// FUNCTION 147080e98 FUN_147080e98 body=102 status=ok
// SIG undefined FUN_147080e98(void)

void FUN_147080e98(longlong *param_1,longlong param_2)

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
          FUN_147080efe(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 147080efe FUN_147080efe body=87 status=ok
// SIG undefined FUN_147080efe(void)

void FUN_147080efe(longlong *param_1,int param_2)

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
  FUN_147080f56();
  return;
}



// FUNCTION 147080f56 FUN_147080f56 body=114 status=ok
// SIG undefined FUN_147080f56(void)

void FUN_147080f56(longlong *param_1,int param_2)

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



// FUNCTION 147080fc8 FUN_147080fc8 body=306 status=ok
// SIG undefined FUN_147080fc8(void)

undefined4 * FUN_147080fc8(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_1470810fc(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (int)((ulonglong)uVar2 >> 0x20) * 0x17 + (int)uVar2;
  cVar4 = FUN_1470811e2(param_1,uVar9,local_40,&local_4c);
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
      FUN_147081262(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470810fc FUN_1470810fc body=230 status=ok
// SIG undefined FUN_1470810fc(void)

int * FUN_1470810fc(longlong *param_1,int *param_2)

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



// FUNCTION 1470811e2 FUN_1470811e2 body=128 status=ok
// SIG undefined FUN_1470811e2(void)

undefined8 FUN_1470811e2(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_147080f56((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 147081262 FUN_147081262 body=447 status=ok
// SIG undefined FUN_147081262(void)

void FUN_147081262(longlong *param_1)

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



// FUNCTION 147081452 FUN_147081452 body=48 status=ok
// SIG undefined FUN_147081452(void)

void FUN_147081452(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x28,8);
  }
  return;
}



// FUNCTION 147081482 FUN_147081482 body=89 status=ok
// SIG undefined FUN_147081482(void)

void FUN_147081482(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x38 + *param_1);
  FUN_1412499d1(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x38 + (longlong)_Dst),(longlong)iVar2 * 0x38);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1470814dc FUN_1470814dc body=62 status=ok
// SIG undefined FUN_1470814dc(void)

void FUN_1470814dc(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14708151a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x38,8);
  }
  return;
}



// FUNCTION 14708151a FUN_14708151a body=104 status=ok
// SIG undefined FUN_14708151a(void)

ulonglong FUN_14708151a(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x38) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147081550;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x38,8);
      param_2 = param_2 / 0x38;
    }
  }
LAB_147081550:
  return param_2 & 0xffffffff;
}



// FUNCTION 147081582 FUN_147081582 body=114 status=ok
// SIG undefined FUN_147081582(void)

void FUN_147081582(longlong *param_1,int param_2)

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



// FUNCTION 1470815f4 FUN_1470815f4 body=114 status=ok
// SIG undefined FUN_1470815f4(void)

void FUN_1470815f4(longlong *param_1,int param_2)

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



// FUNCTION 147081666 FUN_147081666 body=114 status=ok
// SIG undefined FUN_147081666(void)

void FUN_147081666(longlong *param_1,int param_2)

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



// FUNCTION 1470816d8 FUN_1470816d8 body=62 status=ok
// SIG undefined FUN_1470816d8(void)

void FUN_1470816d8(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147081716(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 147081716 FUN_147081716 body=93 status=ok
// SIG undefined FUN_147081716(void)

ulonglong FUN_147081716(uint param_1,uint param_2)

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



// FUNCTION 147081774 FUN_147081774 body=96 status=ok
// SIG undefined FUN_147081774(void)

void FUN_147081774(longlong *param_1,uint param_2)

{
  void *_Dst;
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  lVar1 = *param_1;
  lVar2 = *(longlong *)(lVar1 + (longlong)(int)param_2 * 8);
  if (lVar2 != 0) {
    FUN_141249530(lVar2);
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



// FUNCTION 1470817d4 FUN_1470817d4 body=62 status=ok
// SIG undefined FUN_1470817d4(void)

void FUN_1470817d4(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147081812(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 147081812 FUN_147081812 body=93 status=ok
// SIG undefined FUN_147081812(void)

ulonglong FUN_147081812(uint param_1,uint param_2)

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



// FUNCTION 147081870 FUN_147081870 body=164 status=ok
// SIG undefined FUN_147081870(void)

void FUN_147081870(longlong *param_1,undefined8 param_2)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1470818f0;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1470818f0:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 147081914 FUN_147081914 body=124 status=ok
// SIG undefined FUN_147081914(void)

void FUN_147081914(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (param_2 <= (int)uVar1) {
    iVar6 = 2;
    if (2 < uVar1) {
      if (*(uint *)(param_1 + 0x1c) < 3) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar5 = (longlong)(int)uVar2;
      }
      else {
        lVar5 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar5 << 3,0);
      iVar3 = (int)(uVar4 >> 3);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar6 = iVar3;
      }
    }
    *(int *)(param_1 + 0x1c) = iVar6;
    FUN_147081992(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147081992 FUN_147081992 body=132 status=ok
// SIG undefined FUN_147081992(void)

void FUN_147081992(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x10);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x10,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x10),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x10,param_2,param_3,8);
  return;
}



// FUNCTION 147081a16 FUN_147081a16 body=124 status=ok
// SIG undefined FUN_147081a16(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147081a16(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_142b08da6(DAT_14c9a0260,DAT_000000a8,_DAT_000000b0,_DAT_000000b8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_142b08da6(DAT_14c9a0260,*(undefined1 *)(param_1 + 0x15),param_1[0x16],
                *(undefined4 *)(param_1 + 0x17));
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147081a60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 147081a92 FUN_147081a92 body=63 status=ok
// SIG undefined FUN_147081a92(void)

void FUN_147081a92(longlong param_1,int param_2)

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
      plVar1 = plVar1 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 147081ad2 FUN_147081ad2 body=31 status=ok
// SIG undefined FUN_147081ad2(void)

undefined8 FUN_147081ad2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147081b0e FUN_147081b0e body=93 status=ok
// SIG undefined FUN_147081b0e(void)

void FUN_147081b0e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e312b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a161b90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147081b6c FUN_147081b6c body=93 status=ok
// SIG undefined FUN_147081b6c(void)

void FUN_147081b6c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e312b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a161b90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147081bca FUN_147081bca body=126 status=ok
// SIG undefined FUN_147081bca(void)

void FUN_147081bca(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e312b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a161b90;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147081c39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147081c56 FUN_147081c56 body=21 status=ok
// SIG undefined FUN_147081c56(void)

undefined8 FUN_147081c56(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147081c6c FUN_147081c6c body=9 status=ok
// SIG undefined FUN_147081c6c(void)

void FUN_147081c6c(longlong param_1)

{
  FUN_147081c94(param_1 + 0x10);
  return;
}



// FUNCTION 147081c76 FUN_147081c76 body=29 status=ok
// SIG undefined FUN_147081c76(void)

undefined8 FUN_147081c76(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147081c94 FUN_147081c94 body=62 status=ok
// SIG undefined FUN_147081c94(void)

void FUN_147081c94(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147081cd2 FUN_147081cd2 body=358 status=ok
// SIG undefined FUN_147081cd2(void)

undefined4 * FUN_147081cd2(undefined4 *param_1,undefined8 *param_2)

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
  FUN_147081e3a(local_40);
  puVar1 = (undefined8 *)param_2[1];
  *local_38 = *(undefined8 *)*param_2;
  local_38[1] = *puVar1;
  local_38[2] = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)(local_38 + 3) = 0xffffffff;
  local_44 = local_40[0];
  uVar2 = *local_38;
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_147081f48(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14c99ff80 - DAT_14c99ffac;
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
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14c99ffc0)) {
      uVar10 = DAT_14c99ffc0 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x1c) = uVar10;
      puVar7 = DAT_14c99ffb8;
      if (DAT_14c99ffb8 == (undefined *)0x0) {
        puVar7 = &DAT_14c99ffb0;
      }
      *(undefined4 *)(local_38 + 3) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14c99ffc0 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14c99ffb8;
      if (DAT_14c99ffb8 == (undefined *)0x0) {
        puVar7 = &DAT_14c99ffb0;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14c99ffc0 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14c99ffc0 = iVar9;
      FUN_14708208e();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147081e3a FUN_147081e3a body=269 status=ok
// SIG undefined FUN_147081e3a(void)

int * FUN_147081e3a(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14c99ffa8;
  iVar4 = DAT_14c99ff80;
  if (DAT_14c99ffac == 0) {
    iVar2 = DAT_14c99ff80 + 1;
    bVar7 = DAT_14c99ff84 == DAT_14c99ff80;
    DAT_14c99ff80 = iVar2;
    if (bVar7) {
      FUN_1447711aa(&DAT_14c99ff78,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14c99ff88,1);
    puVar3 = DAT_14c99ff98;
    if (DAT_14c99ff98 == (undefined *)0x0) {
      puVar3 = &DAT_14c99ff88;
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
    lVar6 = (longlong)DAT_14c99ffa8;
    DAT_14c99ffa8 = *(int *)(DAT_14c99ff78 + 4 + lVar6 * 0x20);
    DAT_14c99ffac = DAT_14c99ffac + -1;
    iVar4 = iVar2;
    if (DAT_14c99ffac != 0) {
      *(undefined4 *)(DAT_14c99ff78 + (longlong)DAT_14c99ffa8 * 0x20) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14c99ff88;
  if (DAT_14c99ff98 != (undefined *)0x0) {
    puVar3 = DAT_14c99ff98;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0x20 + DAT_14c99ff78;
  return param_1;
}



// FUNCTION 147081f48 FUN_147081f48 body=198 status=ok
// SIG undefined FUN_147081f48(void)

undefined8 FUN_147081f48(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined *puVar9;
  int iVar10;
  
  if ((DAT_14c99ff80 - DAT_14c99ffac != 1) && (DAT_14c99ff80 != DAT_14c99ffac)) {
    puVar9 = &DAT_14c99ffb0;
    if (DAT_14c99ffb8 != (undefined *)0x0) {
      puVar9 = DAT_14c99ffb8;
    }
    iVar10 = *(int *)(puVar9 + (ulonglong)(DAT_14c99ffc0 - 1U & param_1) * 4);
    if (iVar10 != -1) {
      do {
        puVar3 = (undefined4 *)(DAT_14c99ff78 + (longlong)iVar10 * 0x20);
        if (*(longlong *)(DAT_14c99ff78 + (longlong)iVar10 * 0x20) == *param_2) {
          plVar4 = *(longlong **)(puVar3 + 4);
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
          lVar7 = *param_2;
          uVar5 = *(undefined4 *)((longlong)param_2 + 4);
          lVar8 = param_2[1];
          uVar6 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(longlong *)(puVar3 + 4) = param_2[2];
          *puVar3 = (int)lVar7;
          puVar3[1] = uVar5;
          puVar3[2] = (int)lVar8;
          puVar3[3] = uVar6;
          FUN_14708200e(*param_3);
          *param_3 = iVar10;
          return 1;
        }
        iVar10 = puVar3[6];
      } while (iVar10 != -1);
    }
  }
  return 0;
}



// FUNCTION 14708200e FUN_14708200e body=128 status=ok
// SIG undefined FUN_14708200e(void)

void FUN_14708200e(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14c99ff78;
  if (DAT_14c99ffac != 0) {
    *(int *)(DAT_14c99ff78 + (longlong)DAT_14c99ffa8 * 0x20) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x20) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14c99ffac) {
    iVar4 = DAT_14c99ffa8;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x20) = iVar4;
  DAT_14c99ffac = DAT_14c99ffac + 1;
  puVar3 = &DAT_14c99ff88;
  if (DAT_14c99ff98 != (undefined *)0x0) {
    puVar3 = DAT_14c99ff98;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14c99ffa8 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 14708208e FUN_14708208e body=517 status=ok
// SIG undefined FUN_14708208e(void)

void FUN_14708208e(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  longlong lVar6;
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
  if (DAT_14c99ffb8 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14c99ffb8,0,0,4);
  }
  uVar3 = DAT_14c99ffc0;
  uVar2 = local_50;
  if (DAT_14c99ffc0 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14c99ffb0,0,DAT_14c99ffc0,4);
    if (0 < (int)uVar3) {
      do {
        puVar5 = DAT_14c99ffb8;
        if (DAT_14c99ffb8 == (undefined *)0x0) {
          puVar5 = &DAT_14c99ffb0;
        }
        *(undefined4 *)(puVar5 + (ulonglong)(DAT_14c99ffc0 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14c99ff88;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14c99ffa0 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14c99ff78;
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
        lVar6 = (longlong)iVar4 * 0x20;
        uVar2 = *(undefined8 *)(lVar1 + lVar6);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14c99ffc0 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x1c + lVar6) = iVar8;
        puVar5 = DAT_14c99ffb8;
        if (DAT_14c99ffb8 == (undefined *)0x0) {
          puVar5 = &DAT_14c99ffb0;
        }
        *(undefined4 *)(lVar1 + 0x18 + lVar6) =
             *(undefined4 *)(puVar5 + ((longlong)(int)DAT_14c99ffc0 - 1U & uVar9) * 4);
        puVar5 = DAT_14c99ffb8;
        if (DAT_14c99ffb8 == (undefined *)0x0) {
          puVar5 = &DAT_14c99ffb0;
        }
        *(int *)(puVar5 + ((longlong)iVar8 & (longlong)(int)DAT_14c99ffc0 - 1U) * 4) = iVar4;
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



// FUNCTION 147082294 FUN_147082294 body=242 status=ok
// SIG undefined FUN_147082294(void)

void FUN_147082294(longlong param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  longlong lVar7;
  
  if (DAT_14c99ff80 != DAT_14c99ffac) {
    uVar2 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14c99ffb0;
    if (DAT_14c99ffb8 != (undefined *)0x0) {
      puVar6 = DAT_14c99ffb8;
    }
    for (iVar1 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14c99ffc0 - 1U) * 4); iVar1 != -1;
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + DAT_14c99ff78 + 0x18)) {
      if (*(longlong *)(DAT_14c99ff78 + (longlong)iVar1 * 0x20) == param_1) {
        puVar6 = &DAT_14c99ffb0;
        if (DAT_14c99ffb8 != (undefined *)0x0) {
          puVar6 = DAT_14c99ffb8;
        }
        lVar7 = (longlong)*(int *)(DAT_14c99ff78 + 0x1c + (longlong)iVar1 * 0x20);
        iVar5 = *(int *)(puVar6 + lVar7 * 4);
        if (iVar5 == iVar1) {
          puVar3 = (undefined4 *)(puVar6 + lVar7 * 4);
        }
        else {
          do {
            lVar7 = (longlong)iVar5;
            iVar5 = *(int *)(DAT_14c99ff78 + 0x18 + lVar7 * 0x20);
          } while (iVar5 != iVar1);
          puVar3 = (undefined4 *)(DAT_14c99ff78 + lVar7 * 0x20 + 0x18);
        }
        *puVar3 = *(undefined4 *)(DAT_14c99ff78 + (longlong)iVar1 * 0x20 + 0x18);
        FUN_147082386();
        return;
      }
    }
  }
  return;
}



// FUNCTION 147082386 FUN_147082386 body=74 status=ok
// SIG undefined FUN_147082386(void)

void FUN_147082386(int param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(DAT_14c99ff78 + 0x10 + (longlong)param_1 * 0x20);
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
  FUN_14708200e(param_1);
  return;
}



// FUNCTION 1470823d0 FUN_1470823d0 body=164 status=ok
// SIG undefined FUN_1470823d0(void)

void FUN_1470823d0(longlong *param_1,undefined8 param_2)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_147082450;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_147082450:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 147082474 FUN_147082474 body=124 status=ok
// SIG undefined FUN_147082474(void)

void FUN_147082474(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (param_2 <= (int)uVar1) {
    iVar6 = 1;
    if (1 < uVar1) {
      if (*(uint *)(param_1 + 0x14) < 2) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar5 = (longlong)(int)uVar2;
      }
      else {
        lVar5 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar5 << 3,0);
      iVar3 = (int)(uVar4 >> 3);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar6 = iVar3;
      }
    }
    *(int *)(param_1 + 0x14) = iVar6;
    FUN_1470824f2(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1470824f2 FUN_1470824f2 body=132 status=ok
// SIG undefined FUN_1470824f2(void)

void FUN_1470824f2(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 8);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 8,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 8),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 8,param_2,param_3,8);
  return;
}



// FUNCTION 147082576 FUN_147082576 body=199 status=ok
// SIG undefined FUN_147082576(void)

undefined8 * FUN_147082576(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a161c60;
  InitializeSRWLock((PSRWLOCK)(param_1 + 1));
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 2),4000);
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  return param_1;
}



// FUNCTION 14708263e FUN_14708263e body=38 status=ok
// SIG undefined FUN_14708263e(void)

undefined8 FUN_14708263e(undefined8 param_1,int param_2)

{
  FUN_145c40c5c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147082664 FUN_147082664 body=55 status=ok
// SIG undefined FUN_147082664(void)

void FUN_147082664(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000147082697. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14708269e FUN_14708269e body=31 status=ok
// SIG undefined FUN_14708269e(void)

undefined8 FUN_14708269e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470826e6 FUN_1470826e6 body=93 status=ok
// SIG undefined FUN_1470826e6(void)

void FUN_1470826e6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a161de0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a161d70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147082744 FUN_147082744 body=93 status=ok
// SIG undefined FUN_147082744(void)

void FUN_147082744(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a161de0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a161d70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1470827a2 FUN_1470827a2 body=126 status=ok
// SIG undefined FUN_1470827a2(void)

void FUN_1470827a2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a161de0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a161d70;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147082811. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147082820 FUN_147082820 body=21 status=ok
// SIG undefined FUN_147082820(void)

undefined8 FUN_147082820(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147082838 FUN_147082838 body=31 status=ok
// SIG undefined FUN_147082838(void)

undefined8 FUN_147082838(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147082880 FUN_147082880 body=93 status=ok
// SIG undefined FUN_147082880(void)

void FUN_147082880(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a161ec0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a161e50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1470828de FUN_1470828de body=93 status=ok
// SIG undefined FUN_1470828de(void)

void FUN_1470828de(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a161ec0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a161e50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14708293c FUN_14708293c body=126 status=ok
// SIG undefined FUN_14708293c(void)

void FUN_14708293c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a161ec0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a161e50;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001470829ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1470829ba FUN_1470829ba body=21 status=ok
// SIG undefined FUN_1470829ba(void)

undefined8 FUN_1470829ba(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1470829d2 FUN_1470829d2 body=31 status=ok
// SIG undefined FUN_1470829d2(void)

undefined8 FUN_1470829d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147082a1a FUN_147082a1a body=93 status=ok
// SIG undefined FUN_147082a1a(void)

void FUN_147082a1a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a161fa0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a161f30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147082a78 FUN_147082a78 body=93 status=ok
// SIG undefined FUN_147082a78(void)

void FUN_147082a78(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a161fa0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a161f30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147082ad6 FUN_147082ad6 body=126 status=ok
// SIG undefined FUN_147082ad6(void)

void FUN_147082ad6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a161fa0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a161f30;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147082b45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147082b62 FUN_147082b62 body=21 status=ok
// SIG undefined FUN_147082b62(void)

undefined8 FUN_147082b62(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147082b7a FUN_147082b7a body=31 status=ok
// SIG undefined FUN_147082b7a(void)

undefined8 FUN_147082b7a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147082bb6 FUN_147082bb6 body=93 status=ok
// SIG undefined FUN_147082bb6(void)

void FUN_147082bb6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a162010;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147082c14 FUN_147082c14 body=93 status=ok
// SIG undefined FUN_147082c14(void)

void FUN_147082c14(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a162010;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147082c72 FUN_147082c72 body=126 status=ok
// SIG undefined FUN_147082c72(void)

void FUN_147082c72(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a162010;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147082ce1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147082d0a FUN_147082d0a body=132 status=ok
// SIG undefined FUN_147082d0a(void)

void FUN_147082d0a(longlong param_1,int param_2)

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



// FUNCTION 147082d9e FUN_147082d9e body=67 status=ok
// SIG undefined FUN_147082d9e(void)

void FUN_147082d9e(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_141119514(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_1402126de(param_1);
    return;
  }
  FUN_147082de2(param_1);
  FUN_141119514(param_1,0);
  return;
}



// FUNCTION 147082de2 FUN_147082de2 body=322 status=ok
// SIG undefined FUN_147082de2(void)

void FUN_147082de2(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 100 + (longlong)iVar4 * 0x68) * 4) =
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



// FUNCTION 147082f26 FUN_147082f26 body=143 status=ok
// SIG undefined FUN_147082f26(void)

void FUN_147082f26(longlong param_1,int param_2)

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



// FUNCTION 147082fb6 FUN_147082fb6 body=202 status=ok
// SIG undefined FUN_147082fb6(void)

void FUN_147082fb6(LPCRITICAL_SECTION param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  ulonglong uVar6;
  bool bVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  EnterCriticalSection(param_1);
  iVar2 = *(int *)((longlong)&param_1[1].OwningThread + 4);
  *(int *)((longlong)&param_1[1].OwningThread + 4) = iVar2 + 1;
  uVar6 = (ulonglong)param_1[1].LockCount;
  if ((longlong)uVar6 < 1) {
    *(int *)((longlong)&param_1[1].OwningThread + 4) = iVar2;
  }
  else {
    bVar7 = false;
    do {
      lVar8 = uVar6 * 0x10 + -8;
      uVar9 = uVar6;
      while ((*(int *)((longlong)&(param_1[1].DebugInfo)->Type + lVar8) != 0 &&
             (plVar3 = *(longlong **)((longlong)param_1[1].DebugInfo + lVar8 + -8),
             plVar3 != (longlong *)0x0))) {
        cVar5 = (**(code **)(*plVar3 + 0x60))(plVar3,0,param_2,param_3);
        if (cVar5 == '\0') break;
        lVar8 = lVar8 + -0x10;
        bVar4 = uVar9 < 2;
        uVar9 = uVar9 - 1;
        if (bVar4) {
          piVar1 = (int *)((longlong)&param_1[1].OwningThread + 4);
          *piVar1 = *piVar1 + -1;
          if (bVar7) goto LAB_147083048;
          goto LAB_147083057;
        }
      }
      uVar6 = uVar9 - 1;
      bVar7 = true;
    } while (1 < uVar9);
    piVar1 = (int *)((longlong)&param_1[1].OwningThread + 4);
    *piVar1 = *piVar1 + -1;
LAB_147083048:
    FUN_14109be94(param_1,0);
  }
LAB_147083057:
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014708306b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_1);
    return;
  }
  return;
}



// FUNCTION 147083080 FUN_147083080 body=182 status=ok
// SIG undefined FUN_147083080(void)

void FUN_147083080(undefined8 param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  bool bVar6;
  ulonglong uVar7;
  
  uVar4 = (ulonglong)DAT_14c872cb8;
  if ((longlong)uVar4 < 1) {
    return;
  }
  bVar6 = false;
  DAT_14c872cc4 = DAT_14c872cc4 + 1;
  do {
    lVar5 = uVar4 * 0x10 + -8;
    uVar7 = uVar4;
    while (((*(int *)(DAT_14c872cb0 + lVar5) != 0 &&
            (plVar1 = *(longlong **)(DAT_14c872cb0 + -8 + lVar5), plVar1 != (longlong *)0x0)) &&
           (cVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,param_1), cVar3 != '\0'))) {
      lVar5 = lVar5 + -0x10;
      bVar2 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar2) {
        DAT_14c872cc4 = DAT_14c872cc4 + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_14708310f;
      }
    }
    uVar4 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  DAT_14c872cc4 = DAT_14c872cc4 + -1;
LAB_14708310f:
  FUN_14474d06a(&DAT_14c872cb0,0);
  return;
}



// FUNCTION 147083136 FUN_147083136 body=99 status=ok
// SIG undefined FUN_147083136(void)

void FUN_147083136(longlong *param_1,uint param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  void *_Dst;
  
  lVar2 = *param_1;
  puVar3 = *(undefined8 **)(lVar2 + 8 + (longlong)(int)param_2 * 0x10);
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
    _Dst = (void *)(lVar2 + (longlong)(int)param_2 * 0x10);
    memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(int)(~param_2 + iVar4) << 4);
    iVar4 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar4 + -1;
  return;
}



// FUNCTION 14708319a FUN_14708319a body=62 status=ok
// SIG undefined FUN_14708319a(void)

void FUN_14708319a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1470831d8(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 1470831d8 FUN_1470831d8 body=93 status=ok
// SIG undefined FUN_1470831d8(void)

ulonglong FUN_1470831d8(uint param_1,uint param_2)

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



// FUNCTION 147083236 FUN_147083236 body=48 status=ok
// SIG undefined FUN_147083236(void)

void FUN_147083236(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 147083266 FUN_147083266 body=202 status=ok
// SIG undefined FUN_147083266(void)

undefined8 *
FUN_147083266(undefined8 *param_1,undefined8 param_2,undefined4 *param_3,longlong *param_4)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
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
  longlong *plVar14;
  
  *param_1 = param_2;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  uVar6 = param_3[4];
  uVar7 = param_3[5];
  uVar8 = param_3[6];
  uVar9 = param_3[7];
  uVar10 = param_3[7];
  uVar11 = param_3[8];
  uVar12 = param_3[9];
  uVar13 = param_3[10];
  *(undefined4 *)(param_1 + 1) = *param_3;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
  *(undefined4 *)(param_1 + 2) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar5;
  *(undefined4 *)(param_1 + 3) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar7;
  *(undefined4 *)(param_1 + 4) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar9;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar10;
  *(undefined4 *)(param_1 + 5) = uVar11;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar12;
  *(undefined4 *)(param_1 + 6) = uVar13;
  param_1[7] = 0;
  iVar1 = param_3[0xe];
  _Src = *(void **)(param_3 + 0xc);
  *(int *)(param_1 + 8) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_1417367c6(param_1 + 7,iVar1,0);
    memcpy((void *)param_1[7],_Src,(longlong)iVar1 << 4);
  }
  *(undefined2 *)(param_1 + 10) = *(undefined2 *)(param_3 + 0x12);
  param_1[9] = *(undefined8 *)(param_3 + 0x10);
  lVar2 = *param_4;
  param_1[0xc] = lVar2;
  param_1[0xe] = 0;
  if (lVar2 != 0) {
    plVar14 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar14 = (longlong *)param_4[2];
    }
    (**(code **)*plVar14)(plVar14,param_1 + 0xe);
  }
  return param_1;
}



// FUNCTION 147083330 FUN_147083330 body=38 status=ok
// SIG undefined FUN_147083330(void)

undefined8 FUN_147083330(undefined8 param_1,int param_2)

{
  FUN_142b116bc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14708338a FUN_14708338a body=36 status=ok
// SIG undefined FUN_14708338a(void)

void FUN_14708338a(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  
  cVar1 = FUN_142b11726();
  if (cVar1 != '\0') {
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + param_3;
  }
  return;
}



// FUNCTION 1470833dc FUN_1470833dc body=38 status=ok
// SIG undefined FUN_1470833dc(void)

undefined8 FUN_1470833dc(undefined8 param_1,int param_2)

{
  FUN_140187f4a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147083402 FUN_147083402 body=9 status=ok
// SIG undefined FUN_147083402(void)

void FUN_147083402(longlong param_1)

{
  FUN_142b12022(param_1 + 0x48);
  return;
}



// FUNCTION 147083410 FUN_147083410 body=74 status=ok
// SIG undefined FUN_147083410(void)

undefined8 * FUN_147083410(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14a1623a8;
  puVar1 = TlsGetValue(DAT_14c75f614);
  if (puVar1 == param_1) {
    TlsSetValue(DAT_14c75f614,(LPVOID)0x0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14708349a FUN_14708349a body=38 status=ok
// SIG undefined FUN_14708349a(void)

undefined8 FUN_14708349a(undefined8 param_1,int param_2)

{
  FUN_140187f4a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470834c4 FUN_1470834c4 body=275 status=ok
// SIG undefined FUN_1470834c4(void)

longlong * FUN_1470834c4(longlong *param_1,longlong param_2,undefined4 *param_3,longlong *param_4)

{
  int iVar1;
  void *_Src;
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
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  
  *param_1 = param_2;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  uVar5 = param_3[4];
  uVar6 = param_3[5];
  uVar7 = param_3[6];
  uVar8 = param_3[7];
  uVar9 = param_3[7];
  uVar10 = param_3[8];
  uVar11 = param_3[9];
  uVar12 = param_3[10];
  *(undefined4 *)(param_1 + 1) = *param_3;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 2) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar4;
  *(undefined4 *)(param_1 + 3) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar6;
  *(undefined4 *)(param_1 + 4) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar9;
  *(undefined4 *)(param_1 + 5) = uVar10;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar11;
  *(undefined4 *)(param_1 + 6) = uVar12;
  param_1[7] = 0;
  iVar1 = param_3[0xe];
  _Src = *(void **)(param_3 + 0xc);
  *(int *)(param_1 + 8) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_1417367c6(param_1 + 7,iVar1,0);
    memcpy((void *)param_1[7],_Src,(longlong)iVar1 << 4);
  }
  *(undefined2 *)(param_1 + 10) = *(undefined2 *)(param_3 + 0x12);
  param_1[9] = *(longlong *)(param_3 + 0x10);
  lVar13 = *param_4;
  param_1[0xc] = lVar13;
  param_1[0xe] = 0;
  if (lVar13 != 0) {
    plVar14 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar14 = (longlong *)param_4[2];
    }
    (**(code **)*plVar14)(plVar14,param_1 + 0xe);
  }
  lVar13 = 0x30;
  if (2 < *(int *)(*param_1 + 0x7c)) {
    if (*(int *)((longlong)param_1 + 0x4c) == 0) {
      lVar13 = 0x35;
    }
    else {
      lVar13 = (longlong)(int)param_1[8] * 0x10 + 0x39;
    }
  }
  lVar15 = lVar13 + 8;
  if (1 < *(int *)(*param_1 + 0x7c)) {
    lVar15 = lVar13;
  }
  param_1[0x14] = lVar15 + param_1[1];
  return param_1;
}



// FUNCTION 1470835d8 FUN_1470835d8 body=38 status=ok
// SIG undefined FUN_1470835d8(void)

undefined8 FUN_1470835d8(undefined8 param_1,int param_2)

{
  FUN_142b12130();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147083632 FUN_147083632 body=36 status=ok
// SIG undefined FUN_147083632(void)

void FUN_147083632(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  
  cVar1 = FUN_142b1219a();
  if (cVar1 != '\0') {
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + param_3;
  }
  return;
}



// FUNCTION 1470836c1 FUN_1470836c1 body=872 status=ok
// SIG undefined FUN_1470836c1(void)

void FUN_1470836c1(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined2 *puVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined8 *puVar19;
  longlong lVar20;
  bool bVar21;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != 0) {
    iVar13 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    do {
      iVar18 = iVar13 * 2 + 1;
      iVar15 = iVar13;
      if (iVar18 < (int)param_2) {
LAB_14708371d:
        iVar17 = iVar15 * 2 + 2;
        iVar16 = iVar18;
        if (iVar17 < (int)param_2) {
          puVar12 = &DAT_149dfb77a;
          if (*(int *)(param_1 + (longlong)iVar17 * 2 + 1) != 0) {
            puVar12 = (undefined2 *)param_1[(longlong)iVar17 * 2];
          }
          puVar7 = &DAT_149dfb77a;
          if (*(int *)(param_1 + (longlong)iVar18 * 2 + 1) != 0) {
            puVar7 = (undefined2 *)param_1[(longlong)iVar18 * 2];
          }
          lVar20 = 0;
          while( true ) {
            uVar2 = *(ushort *)((longlong)puVar7 + lVar20);
            uVar9 = (uint)uVar2;
            uVar3 = *(ushort *)((longlong)puVar12 + lVar20);
            uVar8 = (uint)uVar3;
            iVar16 = iVar17;
            if (uVar2 != uVar3) break;
            if (uVar2 == 0) goto LAB_14708379c;
LAB_14708376c:
            lVar20 = lVar20 + 2;
          }
          if ((uVar3 | uVar2) < 0x80) {
            uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar3];
            if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_14708376c;
          }
          if ((int)(uVar9 - uVar8) < 0) {
            iVar16 = iVar18;
          }
        }
LAB_14708379c:
        lVar20 = (longlong)iVar15;
        puVar12 = &DAT_149dfb77a;
        if (*(int *)(param_1 + lVar20 * 2 + 1) != 0) {
          puVar12 = (undefined2 *)param_1[lVar20 * 2];
        }
        lVar10 = (longlong)iVar16;
        puVar7 = &DAT_149dfb77a;
        if (*(int *)(param_1 + lVar10 * 2 + 1) != 0) {
          puVar7 = (undefined2 *)param_1[lVar10 * 2];
        }
        puVar19 = param_1 + lVar20 * 2;
        puVar11 = param_1 + lVar10 * 2;
        lVar20 = 0;
        do {
          uVar2 = *(ushort *)((longlong)puVar7 + lVar20);
          uVar9 = (uint)uVar2;
          uVar3 = *(ushort *)((longlong)puVar12 + lVar20);
          uVar8 = (uint)uVar3;
          if (uVar2 == uVar3) {
            if (uVar2 == 0) break;
          }
          else {
            if (0x7f < (uVar3 | uVar2)) goto LAB_147083809;
            uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar3];
            if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[uVar3]) goto LAB_147083809;
          }
          lVar20 = lVar20 + 2;
        } while( true );
      }
LAB_147083841:
      bVar21 = iVar13 != 0;
      iVar13 = iVar13 + -1;
    } while (bVar21);
    if (1 < (int)param_2) {
      uVar14 = (ulonglong)param_2 - 1;
      uVar4 = *param_1;
      uVar5 = param_1[1];
      uVar6 = (param_1 + uVar14 * 2)[1];
      *param_1 = param_1[uVar14 * 2];
      param_1[1] = uVar6;
      local_58._0_4_ = (undefined4)uVar4;
      local_58._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_50._0_4_ = (undefined4)uVar5;
      uStack_50._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      puVar11 = param_1 + uVar14 * 2;
      *(undefined4 *)puVar11 = (undefined4)local_58;
      *(undefined4 *)((longlong)puVar11 + 4) = local_58._4_4_;
      *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_50;
      *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_50._4_4_;
      local_58 = uVar4;
      uStack_50 = uVar5;
      if (param_2 != 2) {
LAB_1470838ba:
        iVar13 = 1;
        iVar15 = 0;
        iVar18 = 0;
LAB_1470838c5:
        iVar15 = iVar15 + 2;
        lVar20 = (longlong)iVar15;
        iVar16 = iVar13;
        if (lVar20 < (longlong)uVar14) {
          puVar12 = &DAT_149dfb77a;
          if (*(int *)(param_1 + lVar20 * 2 + 1) != 0) {
            puVar12 = (undefined2 *)param_1[lVar20 * 2];
          }
          puVar7 = &DAT_149dfb77a;
          if (*(int *)(param_1 + (longlong)iVar13 * 2 + 1) != 0) {
            puVar7 = (undefined2 *)param_1[(longlong)iVar13 * 2];
          }
          lVar20 = 0;
          while( true ) {
            uVar2 = *(ushort *)((longlong)puVar7 + lVar20);
            uVar8 = (uint)uVar2;
            uVar3 = *(ushort *)((longlong)puVar12 + lVar20);
            uVar9 = (uint)uVar3;
            iVar16 = iVar15;
            if (uVar2 != uVar3) break;
            if (uVar2 == 0) goto LAB_147083940;
LAB_147083911:
            lVar20 = lVar20 + 2;
          }
          if ((uVar3 | uVar2) < 0x80) {
            uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar3];
            if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_147083911;
          }
          if ((int)(uVar8 - uVar9) < 0) {
            iVar16 = iVar13;
          }
        }
LAB_147083940:
        lVar20 = (longlong)iVar18;
        puVar12 = &DAT_149dfb77a;
        if (*(int *)(param_1 + lVar20 * 2 + 1) != 0) {
          puVar12 = (undefined2 *)param_1[lVar20 * 2];
        }
        lVar10 = (longlong)iVar16;
        puVar7 = &DAT_149dfb77a;
        if (*(int *)(param_1 + lVar10 * 2 + 1) != 0) {
          puVar7 = (undefined2 *)param_1[lVar10 * 2];
        }
        puVar11 = param_1 + lVar20 * 2;
        puVar19 = param_1 + lVar10 * 2;
        lVar20 = 0;
        do {
          uVar2 = *(ushort *)((longlong)puVar7 + lVar20);
          uVar8 = (uint)uVar2;
          uVar3 = *(ushort *)((longlong)puVar12 + lVar20);
          uVar9 = (uint)uVar3;
          if (uVar2 == uVar3) {
            if (uVar2 == 0) goto LAB_1470839e6;
          }
          else {
            if (0x7f < (uVar3 | uVar2)) goto LAB_1470839ab;
            uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar3];
            if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[uVar3]) goto LAB_1470839ab;
          }
          lVar20 = lVar20 + 2;
        } while( true );
      }
    }
  }
LAB_14708388d:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_147083809:
  if (-1 < (int)(uVar9 - uVar8)) goto LAB_147083841;
  uVar4 = *puVar19;
  uVar5 = puVar19[1];
  uVar6 = puVar11[1];
  *puVar19 = *puVar11;
  puVar19[1] = uVar6;
  local_58._0_4_ = (undefined4)uVar4;
  local_58._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
  uStack_50._0_4_ = (undefined4)uVar5;
  uStack_50._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
  *(undefined4 *)puVar11 = (undefined4)local_58;
  *(undefined4 *)((longlong)puVar11 + 4) = local_58._4_4_;
  *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_50._4_4_;
  iVar18 = iVar16 * 2 + 1;
  local_58 = uVar4;
  uStack_50 = uVar5;
  iVar15 = iVar16;
  if ((int)param_2 <= iVar18) goto LAB_147083841;
  goto LAB_14708371d;
LAB_1470839ab:
  if (-1 < (int)(uVar8 - uVar9)) goto LAB_1470839e6;
  uVar4 = *puVar11;
  uVar5 = puVar11[1];
  uVar6 = puVar19[1];
  *puVar11 = *puVar19;
  puVar11[1] = uVar6;
  *puVar19 = uVar4;
  puVar19[1] = uVar5;
  iVar15 = iVar16 * 2;
  iVar13 = iVar16 * 2 + 1;
  iVar18 = iVar16;
  if ((longlong)uVar14 <= (longlong)iVar13) goto LAB_1470839e6;
  goto LAB_1470838c5;
LAB_1470839e6:
  uVar1 = uVar14 - 1;
  uVar4 = *param_1;
  uVar5 = param_1[1];
  uVar6 = (param_1 + uVar1 * 2)[1];
  *param_1 = param_1[uVar1 * 2];
  param_1[1] = uVar6;
  local_58._0_4_ = (undefined4)uVar4;
  local_58._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
  uStack_50._0_4_ = (undefined4)uVar5;
  uStack_50._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
  puVar11 = param_1 + uVar1 * 2;
  *(undefined4 *)puVar11 = (undefined4)local_58;
  *(undefined4 *)((longlong)puVar11 + 4) = local_58._4_4_;
  *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_50._4_4_;
  bVar21 = uVar14 < 3;
  uVar14 = uVar1;
  local_58 = uVar4;
  uStack_50 = uVar5;
  if (bVar21) goto LAB_14708388d;
  goto LAB_1470838ba;
}



// FUNCTION 147083a2a FUN_147083a2a body=174 status=ok
// SIG undefined FUN_147083a2a(void)

void FUN_147083a2a(longlong *param_1,char param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)((longlong)param_1 + 0x14) < 1) {
    if (param_2 == '\0') {
      iVar4 = (int)param_1[1];
    }
    else {
      iVar4 = (int)param_1[1];
      iVar3 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar3;
      if (iVar4 < iVar3) {
        return;
      }
    }
    iVar3 = iVar4;
    if (0 < iVar4) {
      iVar5 = 0;
      do {
        if (((*(int *)(*param_1 + 8 + (longlong)iVar5 * 0x10) == 0) ||
            (plVar1 = *(longlong **)(*param_1 + (longlong)iVar5 * 0x10), plVar1 == (longlong *)0x0))
           || (cVar2 = (**(code **)(*plVar1 + 0x28))(), cVar2 != '\0')) {
          FUN_14005b288(param_1,iVar5);
          FUN_14005b248(param_1);
        }
        else {
          iVar5 = iVar5 + 1;
        }
        iVar3 = (int)param_1[1];
      } while (iVar5 < iVar3);
    }
    iVar5 = 2;
    if (2 < iVar3 * 2) {
      iVar5 = iVar3 * 2;
    }
    *(int *)(param_1 + 2) = iVar5;
    if ((iVar5 < iVar4) && (*(int *)((longlong)param_1 + 0xc) != iVar3)) {
      FUN_14045812c(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 147083ad8 FUN_147083ad8 body=55 status=ok
// SIG undefined FUN_147083ad8(void)

void FUN_147083ad8(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    FUN_142b0faf8(param_1);
    param_1 = param_1 + 0x50;
  }
  return;
}



// FUNCTION 147083b10 FUN_147083b10 body=147 status=ok
// SIG undefined FUN_147083b10(void)

void FUN_147083b10(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x50,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147083ba4 FUN_147083ba4 body=101 status=ok
// SIG undefined FUN_147083ba4(void)

void FUN_147083ba4(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x50 + *param_1);
  FUN_1411193c3(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x50 + (longlong)_Dst),(longlong)iVar2 * 0x50);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 147083c0a FUN_147083c0a body=62 status=ok
// SIG undefined FUN_147083c0a(void)

void FUN_147083c0a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147083c48(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x50,8);
  }
  return;
}



// FUNCTION 147083c48 FUN_147083c48 body=112 status=ok
// SIG undefined FUN_147083c48(void)

ulonglong FUN_147083c48(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x50) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147083c82;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x50,8);
      param_2 = param_2 / 0x50;
    }
  }
LAB_147083c82:
  return param_2 & 0xffffffff;
}



// FUNCTION 147083cb8 FUN_147083cb8 body=131 status=ok
// SIG undefined FUN_147083cb8(void)

longlong FUN_147083cb8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_147083d3b();
  if (((*(byte *)(param_1 + 0x28) & 1) != 0) ||
     (((*(byte *)(param_1 + 0x28) & 4) == 0 && ((*(byte *)(param_1 + 0x2b) & 4) != 0)))) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1446efa72(param_2 + 0x40,0,0,4);
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar1 & 0x1f);
    }
    if ((0 < (int)uVar2) && (0 < iVar4)) {
      *(int *)(param_2 + 0x48) = iVar4;
      FUN_147084184(param_2);
    }
  }
  return param_1;
}



// FUNCTION 147083d3b FUN_147083d3b body=773 status=ok
// SIG undefined FUN_147083d3b(void)

longlong * FUN_147083d3b(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  ulonglong *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  int local_54;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x18,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x18);
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  uVar5 = local_50._4_4_;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_54 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    puVar3 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar3 + 1;
    if ((int *)puVar3[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_54,4);
      }
      else {
        FUN_14572512c(param_1,&local_54);
      }
    }
    else {
      local_54 = *(int *)*puVar3;
      *puVar3 = (ulonglong)piVar1;
    }
    local_48 = param_2 + 2;
    local_50 = (undefined8 *)&DAT_100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_50);
    }
    local_78 = local_50;
    local_70 = local_48;
    local_68 = local_40;
    uVar6 = local_68;
    local_60 = local_38;
    local_5c = local_34;
    local_68._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    local_80 = param_2;
    if (local_68._4_4_ < (int)local_48[3]) {
      iVar8 = local_68._4_4_;
      local_68 = uVar6;
      do {
        puVar7 = (undefined8 *)((longlong)iVar8 * 0x18 + *local_80);
        puVar4 = *(undefined8 **)param_1[1];
        if ((undefined8 *)((longlong *)param_1[1])[1] < puVar4 + 1) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,puVar7,8);
          }
          else {
            FUN_146821949(param_1,puVar7);
          }
        }
        else {
          *puVar7 = *puVar4;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
        }
        FUN_147084128(puVar7 + 1,param_1);
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar8 = local_68._4_4_;
        uVar6 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  else {
    local_50 = (undefined8 *)((ulonglong)local_50._4_4_ << 0x20);
    puVar3 = (ulonglong *)param_1[1];
    puVar2 = (undefined4 *)*puVar3 + 1;
    if ((undefined4 *)puVar3[1] < puVar2) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_50,4);
      }
      else {
        FUN_14572512c(param_1,&local_50);
      }
    }
    else {
      local_50 = (undefined8 *)CONCAT44(uVar5,*(undefined4 *)*puVar3);
      *puVar3 = (ulonglong)puVar2;
    }
    FUN_1411193f4(param_2,(ulonglong)local_50 & 0xffffffff);
    uVar6 = local_68;
    if (0 < (int)local_50) {
      iVar8 = 0;
      do {
        FUN_147084042(param_2,&local_80);
        puVar7 = local_78;
        *local_78 = 0;
        *(undefined4 *)(local_78 + 1) = 0x80000000;
        *(undefined4 *)(local_78 + 2) = 0xffffffff;
        puVar4 = *(undefined8 **)param_1[1];
        if ((undefined8 *)((longlong *)param_1[1])[1] < puVar4 + 1) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,local_78,8);
          }
          else {
            FUN_146821949(param_1,local_78);
          }
        }
        else {
          *local_78 = *puVar4;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
        }
        FUN_147084128(puVar7 + 1,param_1);
        iVar8 = iVar8 + 1;
        uVar6 = local_68;
      } while (iVar8 < (int)local_50);
    }
  }
  local_68 = uVar6;
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147084042 FUN_147084042 body=230 status=ok
// SIG undefined FUN_147084042(void)

int * FUN_147084042(longlong *param_1,int *param_2)

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



// FUNCTION 147084128 FUN_147084128 body=92 status=ok
// SIG undefined FUN_147084128(void)

void FUN_147084128(undefined4 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_2[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_2[1])[1]) {
    *param_1 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    return;
  }
  if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
    if (*(code **)(*param_2 + 0x170) == FUN_14004e24c) {
      FUN_14004e24c(param_2);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x000147084181. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x170))(param_2,param_1,4);
    return;
  }
  FUN_14572512c(param_2);
  return;
}



// FUNCTION 147084184 FUN_147084184 body=447 status=ok
// SIG undefined FUN_147084184(void)

void FUN_147084184(longlong *param_1)

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



// FUNCTION 147084344 FUN_147084344 body=69 status=ok
// SIG undefined FUN_147084344(void)

void FUN_147084344(longlong param_1,uint param_2)

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
    *(int *)(param_1 + 0x48) = iVar3;
    FUN_1402126de(param_1);
    return;
  }
  return;
}



// FUNCTION 14708438a FUN_14708438a body=69 status=ok
// SIG undefined FUN_14708438a(void)

void FUN_14708438a(longlong param_1,uint param_2)

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
    *(int *)(param_1 + 0x48) = iVar3;
    FUN_1448fb102(param_1);
    return;
  }
  return;
}



// FUNCTION 1470843d0 FUN_1470843d0 body=485 status=ok
// SIG undefined FUN_1470843d0(void)

int * FUN_1470843d0(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar11) {
      FUN_1447711aa(param_1,iVar11);
    }
    iVar6 = (int)param_1[5];
    if (iVar6 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar2 = iVar6 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar8 = iVar6 + 1;
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar12 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar2 = iVar6;
        }
        else {
          uVar13 = iVar6 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar13) {
              uVar7 = uVar13;
            }
          }
          else {
            uVar7 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar4 = FUN_144a3809e(uVar7 << 2,0);
          iVar2 = (int)(uVar4 >> 2);
          iVar8 = -0x20;
          if ((int)uVar13 <= iVar2) {
            iVar8 = iVar2 << 5;
          }
          iVar2 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar9,iVar2);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar2 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar2 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar5 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    lVar3 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar5 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar3 = (longlong)iVar11;
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x20);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x20) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar6 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar6 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar3 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 1470845b6 FUN_1470845b6 body=113 status=ok
// SIG undefined FUN_1470845b6(void)

void FUN_1470845b6(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x50,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x50)) {
      uVar2 = uVar1 / 0x50 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x50,8);
  }
  return;
}



// FUNCTION 147084628 FUN_147084628 body=308 status=ok
// SIG undefined FUN_147084628(void)

undefined4 * FUN_147084628(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140211fbc(param_1,local_48);
  FUN_1470847c8(param_3,local_40);
  *(undefined4 *)(local_40 + 0xc) = 0xffffffff;
  local_4c = local_48[0];
  iVar7 = *(int *)(local_40 + 1);
  if (iVar7 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*local_40;
  }
  iVar1 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar1 = 0;
  }
  uVar4 = FUN_144a49b4a(iVar1,puVar8);
  cVar3 = FUN_14708475e(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 100) = uVar4;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0xc) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1402126de(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14708475e FUN_14708475e body=105 status=ok
// SIG undefined FUN_14708475e(void)

undefined8 FUN_14708475e(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  int iVar1;
  void *_Dst;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar1 = FUN_1447413de(), iVar1 != -1)) {
    _Dst = (void *)((longlong)iVar1 * 0x68 + *param_1);
    FUN_14707f6fa(_Dst);
    memmove(_Dst,param_3,0x60);
    FUN_147084ac0(param_1,*param_4);
    *param_4 = iVar1;
    return 1;
  }
  return 0;
}



// FUNCTION 1470847c8 FUN_1470847c8 body=142 status=ok
// SIG undefined FUN_1470847c8(void)

undefined8 FUN_1470847c8(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_40 = 0x8000000000;
  local_38 = 0xffffffff;
  FUN_147084858(param_2,*param_1,&local_68);
  uStack_20 = uStack_20 & 0xffffffff00000000;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_141119746(&local_68);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147084858 FUN_147084858 body=101 status=ok
// SIG undefined FUN_147084858(void)

undefined8 * FUN_147084858(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  FUN_1470848be(param_1 + 2,param_3);
  return param_1;
}



// FUNCTION 1470848be FUN_1470848be body=123 status=ok
// SIG undefined FUN_1470848be(void)

undefined8 * FUN_1470848be(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_14708493a();
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



// FUNCTION 14708493a FUN_14708493a body=388 status=ok
// SIG undefined FUN_14708493a(void)

longlong * FUN_14708493a(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
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
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar7 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar7 = (int)param_1[5];
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar5 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar6 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar7) || (local_60 = uVar5, uStack_48 != plVar1)) {
      do {
        local_60 = uVar5;
        if (*(longlong *)(*local_78 + (longlong)iVar6 * 0x20) != 0) {
          FUN_1400020a8();
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar6 = local_60._4_4_;
        uVar5 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar7));
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar4 = param_2[3];
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
      *(int *)(param_1 + 3) = (int)lVar4;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
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
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147084ac0 FUN_147084ac0 body=116 status=ok
// SIG undefined FUN_147084ac0(void)

void FUN_147084ac0(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x68) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x68) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x68 + 4) = uVar5;
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



// FUNCTION 147084b34 FUN_147084b34 body=308 status=ok
// SIG undefined FUN_147084b34(void)

undefined4 * FUN_147084b34(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1470843d0(param_1,local_48);
  FUN_147084cdc(param_3,local_40);
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  iVar7 = *(int *)(local_40 + 1);
  if (iVar7 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*local_40;
  }
  iVar1 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar1 = 0;
  }
  uVar4 = FUN_144a49b4a(iVar1,puVar8);
  cVar3 = FUN_147084c6a(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x1c) = uVar4;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1448fb102(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147084c6a FUN_147084c6a body=114 status=ok
// SIG undefined FUN_147084c6a(void)

undefined8 FUN_147084c6a(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar6 = FUN_1447414a6(), iVar6 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar6 * 0x20);
    if (*(longlong *)(*param_1 + (longlong)iVar6 * 0x20) != 0) {
      FUN_1400020a8();
    }
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_3 + 4);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_147084d40(param_1,*param_4);
    *param_4 = iVar6;
    return 1;
  }
  return 0;
}



// FUNCTION 147084cdc FUN_147084cdc body=99 status=ok
// SIG undefined FUN_147084cdc(void)

undefined8 * FUN_147084cdc(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  void *_Src;
  
  puVar2 = (undefined8 *)*param_1;
  puVar3 = (undefined4 *)param_1[1];
  *param_2 = 0;
  iVar1 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(param_2 + 2) = *puVar3;
  return param_2;
}



// FUNCTION 147084d40 FUN_147084d40 body=114 status=ok
// SIG undefined FUN_147084d40(void)

void FUN_147084d40(longlong *param_1,int param_2)

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



// FUNCTION 147084db2 FUN_147084db2 body=253 status=ok
// SIG undefined FUN_147084db2(void)

void FUN_147084db2(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  longlong lVar5;
  ushort uVar6;
  ushort uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = (int)param_2[1];
    if (iVar2 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)*param_2;
    }
    iVar1 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    iVar2 = FUN_144a49b4a(iVar1,puVar4);
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      iVar1 = (int)param_2[1];
LAB_147084e28:
      plVar3 = (longlong *)(*param_1 + (longlong)iVar2 * 0x20);
      iVar2 = *(int *)(*param_1 + 8 + (longlong)iVar2 * 0x20);
      if (iVar2 == iVar1) {
        if (1 < iVar1) {
          lVar5 = 0;
          do {
            uVar7 = *(ushort *)(*plVar3 + lVar5);
            uVar8 = (ulonglong)uVar7;
            uVar6 = *(ushort *)(*param_2 + lVar5);
            if (uVar7 == uVar6) {
              if (uVar7 == 0) break;
            }
            else {
              if (0x7f < (uVar6 | uVar7)) goto LAB_147084e97;
              uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
              uVar9 = (ulonglong)uVar6;
              uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
              if ((&DAT_149e05da0)[uVar8] != (&DAT_149e05da0)[uVar9]) goto LAB_147084e97;
            }
            lVar5 = lVar5 + 2;
          } while( true );
        }
        goto LAB_147084e9d;
      }
      if (iVar2 + iVar1 == 1) goto LAB_147084e9d;
      goto LAB_147084e89;
    }
  }
  return;
LAB_147084e97:
  if (uVar7 == uVar6) {
LAB_147084e9d:
    FUN_147084eb0(param_1);
    return;
  }
LAB_147084e89:
  iVar2 = (int)plVar3[3];
  if (iVar2 == -1) {
    return;
  }
  goto LAB_147084e28;
}



// FUNCTION 147084eb0 FUN_147084eb0 body=90 status=ok
// SIG undefined FUN_147084eb0(void)

void FUN_147084eb0(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_147084f0a();
  return;
}



// FUNCTION 147084f0a FUN_147084f0a body=51 status=ok
// SIG undefined FUN_147084f0a(void)

void FUN_147084f0a(longlong *param_1,int param_2)

{
  if (*(longlong *)(*param_1 + (longlong)param_2 * 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_147084d40(param_1,param_2);
  return;
}



// FUNCTION 147084f3e FUN_147084f3e body=133 status=ok
// SIG undefined FUN_147084f3e(void)

longlong FUN_147084f3e(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_146855b16();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x20;
    if (lVar3 + lVar2 != 0) goto LAB_147084f77;
  }
  local_30 = param_3;
  FUN_147084fc4(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 << 5;
LAB_147084f77:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 + lVar3 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147084fc4 FUN_147084fc4 body=342 status=ok
// SIG undefined FUN_147084fc4(void)

undefined4 * FUN_147084fc4(longlong param_1,undefined4 *param_2,uint param_3,longlong *param_4)

{
  undefined8 *puVar1;
  void *_Src;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146855940(param_1,local_48);
  puVar1 = (undefined8 *)*param_4;
  *local_40 = 0;
  iVar5 = *(int *)(puVar1 + 1);
  _Src = (void *)*puVar1;
  *(int *)(local_40 + 1) = iVar5;
  if ((longlong)iVar5 == 0) {
    *(undefined4 *)((longlong)local_40 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(local_40,iVar5,0);
    memcpy((void *)*local_40,_Src,(longlong)iVar5 * 2);
  }
  *(undefined1 *)(local_40 + 2) = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_58 = 0;
  cVar2 = FUN_146855a26(param_1,param_3,local_40);
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
      *(uint *)((longlong)local_40 + 0x1c) = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
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
      FUN_146855c6c(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14708511c FUN_14708511c body=107 status=ok
// SIG undefined FUN_14708511c(void)

void FUN_14708511c(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_1447413de();
  if ((iVar1 == -1) || ((longlong)iVar1 * 0x68 + *param_1 == 0)) {
    local_30 = param_3;
    FUN_147085188(param_1,local_24,param_2);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147085188 FUN_147085188 body=265 status=ok
// SIG undefined FUN_147085188(void)

undefined4 * FUN_147085188(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

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
  FUN_140211fbc(param_1,local_48);
  FUN_1470847c8(param_4,local_40);
  *(undefined4 *)(local_40 + 0x60) = 0xffffffff;
  cVar1 = FUN_14708475e(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 100) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x60) =
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
      FUN_1402126de(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147085292 FUN_147085292 body=253 status=ok
// SIG undefined FUN_147085292(void)

void FUN_147085292(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  longlong lVar5;
  ushort uVar6;
  ushort uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = (int)param_2[1];
    if (iVar2 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)*param_2;
    }
    iVar1 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    iVar2 = FUN_144a49b4a(iVar1,puVar4);
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      iVar1 = (int)param_2[1];
LAB_147085308:
      plVar3 = (longlong *)(*param_1 + (longlong)iVar2 * 0x68);
      iVar2 = *(int *)(*param_1 + 8 + (longlong)iVar2 * 0x68);
      if (iVar2 == iVar1) {
        if (1 < iVar1) {
          lVar5 = 0;
          do {
            uVar7 = *(ushort *)(*plVar3 + lVar5);
            uVar8 = (ulonglong)uVar7;
            uVar6 = *(ushort *)(*param_2 + lVar5);
            if (uVar7 == uVar6) {
              if (uVar7 == 0) break;
            }
            else {
              if (0x7f < (uVar6 | uVar7)) goto LAB_147085377;
              uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
              uVar9 = (ulonglong)uVar6;
              uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
              if ((&DAT_149e05da0)[uVar8] != (&DAT_149e05da0)[uVar9]) goto LAB_147085377;
            }
            lVar5 = lVar5 + 2;
          } while( true );
        }
        goto LAB_14708537d;
      }
      if (iVar2 + iVar1 == 1) goto LAB_14708537d;
      goto LAB_147085369;
    }
  }
  return;
LAB_147085377:
  if (uVar7 == uVar6) {
LAB_14708537d:
    FUN_147085390(param_1);
    return;
  }
LAB_147085369:
  iVar2 = (int)plVar3[0xc];
  if (iVar2 == -1) {
    return;
  }
  goto LAB_147085308;
}



// FUNCTION 147085390 FUN_147085390 body=113 status=ok
// SIG undefined FUN_147085390(void)

void FUN_147085390(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar3 = (longlong)param_2 * 0x68;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 100 + lVar3);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar1 + 0x60 + lVar6 * 0x68);
    } while (iVar4 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar6 * 0x68 + 0x60);
  }
  *puVar2 = *(undefined4 *)(lVar1 + lVar3 + 0x60);
  FUN_14707f6fa(lVar3 + *param_1);
  FUN_147084ac0(param_1,param_2);
  return;
}



// FUNCTION 147085402 FUN_147085402 body=315 status=ok
// SIG undefined FUN_147085402(void)

undefined4 * FUN_147085402(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1468f0c3e(param_1,local_48);
  FUN_14708553e(param_3,local_40);
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = (int)((ulonglong)*local_40 >> 0x20) * 0x17 + (int)*local_40;
  local_58 = 0;
  cVar1 = FUN_1468f0d24(param_1,uVar4,local_40);
  if (cVar1 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar2 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x1c) = uVar4;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
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
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1468f0e6a(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14708553e FUN_14708553e body=107 status=ok
// SIG undefined FUN_14708553e(void)

undefined8 * FUN_14708553e(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 1470855aa FUN_1470855aa body=304 status=ok
// SIG undefined FUN_1470855aa(void)

undefined4 * FUN_1470855aa(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
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
  FUN_147084042(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (int)((ulonglong)uVar2 >> 0x20) * 0x17 + (int)uVar2;
  cVar4 = FUN_1470856dc(param_1,uVar9,local_40,&local_4c);
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
      FUN_147084184(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470856dc FUN_1470856dc body=128 status=ok
// SIG undefined FUN_1470856dc(void)

undefined8 FUN_1470856dc(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_14708575c((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 14708575c FUN_14708575c body=114 status=ok
// SIG undefined FUN_14708575c(void)

void FUN_14708575c(longlong *param_1,int param_2)

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



// FUNCTION 1470857ce FUN_1470857ce body=62 status=ok
// SIG undefined FUN_1470857ce(void)

void FUN_1470857ce(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14708580c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 14708580c FUN_14708580c body=93 status=ok
// SIG undefined FUN_14708580c(void)

ulonglong FUN_14708580c(uint param_1,uint param_2)

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



// FUNCTION 14708586a FUN_14708586a body=243 status=ok
// SIG undefined FUN_14708586a(void)

undefined8 * FUN_14708586a(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  undefined7 uVar5;
  longlong lVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  uVar5 = (undefined7)((ulonglong)param_2 >> 8);
  if ((longlong *)*param_2 != (longlong *)0x0 && (int)param_2[1] != 0) {
    cVar4 = (**(code **)(*(longlong *)*param_2 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(&DAT_14c9a01a0,CONCAT71(uVar5,1));
      plVar1 = (longlong *)*param_2;
      if (plVar1 == (longlong *)0x0 || (int)param_2[1] == 0) {
        local_28 = 0;
      }
      else {
        (**(code **)(*plVar1 + 0x38))(plVar1,&local_28);
      }
      *param_1 = local_28;
      uVar3 = DAT_14c9a01a8;
      lVar6 = (longlong)(int)DAT_14c9a01a8;
      DAT_14c9a01a8 = DAT_14c9a01a8 + 1;
      if (DAT_14c9a01ac < DAT_14c9a01a8) {
        FUN_1447a71f6(&DAT_14c9a01a0,uVar3);
      }
      lVar2 = DAT_14c9a01a0;
      lVar6 = lVar6 * 0x10;
      *(undefined8 *)(DAT_14c9a01a0 + lVar6) = 0;
      *(undefined4 *)(lVar2 + 8 + lVar6) = 0;
      *(longlong *)(lVar2 + lVar6) = *param_2;
      *param_2 = 0;
      *(int *)(lVar2 + 8 + lVar6) = (int)param_2[1];
      *(undefined4 *)(param_2 + 1) = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14708596c FUN_14708596c body=110 status=ok
// SIG undefined FUN_14708596c(void)

undefined8 FUN_14708596c(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  cVar1 = FUN_1401ae586();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1401af9f2(param_1,local_28);
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470859dc FUN_1470859dc body=161 status=ok
// SIG undefined FUN_1470859dc(void)

undefined8 FUN_1470859dc(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined2 *puVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140056680();
  uVar2 = *(int *)(param_3 + 0xd0) - 1;
  if (*(int *)(param_3 + 0xd0) == 0) {
    uVar2 = 0;
  }
  uVar4 = local_28 - 1;
  puVar1 = local_30;
  if (local_28 == 0) {
    uVar4 = 0;
    puVar1 = &DAT_149dfb77a;
  }
  if ((int)uVar4 <= (int)uVar2) {
    uVar2 = uVar4;
  }
  uVar3 = (ulonglong)uVar2;
  if ((int)uVar2 < 1) {
    uVar3 = 0;
  }
  FUN_14006620a(param_1,puVar1 + uVar3,uVar4 - (int)uVar3);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147085a7e FUN_147085a7e body=504 status=ok
// SIG undefined FUN_147085a7e(void)

undefined8 * FUN_147085a7e(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined1 local_70;
  longlong local_60;
  longlong *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = &PTR_LAB_14a162620;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = *param_2;
  *param_2 = 0;
  lVar7 = 0x40;
  do {
    *(undefined8 *)((longlong)param_1 + lVar7 + -0x10) = 0;
    *(undefined8 *)((longlong)param_1 + lVar7 + -8) = 0xffffffff00000000;
    *(undefined8 *)((longlong)param_1 + lVar7) = 0;
    uVar6 = FUN_14001cc68(0x10000,0);
    *(undefined8 *)((longlong)param_1 + lVar7 + -0x10) = uVar6;
    lVar7 = lVar7 + 0x18;
  } while (lVar7 != 0x100);
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x20),4000);
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x28] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x30] = 0;
  param_1[0x38] = 0;
  FUN_142b0a02c(&local_60,param_3);
  plVar1 = local_58;
  if (param_1 + 1 != &local_60) {
    param_1[1] = local_60;
    local_60 = 0;
    plVar3 = (longlong *)param_1[2];
    if (local_58 != plVar3) {
      local_58 = (longlong *)0x0;
      param_1[2] = plVar1;
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
    }
  }
  plVar1 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_58 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if (param_1[1] != 0) {
    cVar5 = FUN_144a53f06();
    if (cVar5 != '\0') {
      uVar6 = FUN_1405d8a54(0);
      param_1[0x26] = uVar6;
      local_70 = 0;
      local_78 = 0xffffffffffffffff;
      uVar6 = FUN_1411b1052(param_1,L"FChunkCacheWorker",0,2);
      param_1[4] = uVar6;
    }
  }
  puVar4 = (undefined8 *)*param_2;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147085c78 FUN_147085c78 body=249 status=ok
// SIG undefined FUN_147085c78(void)

void FUN_147085c78(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  *param_1 = &PTR_LAB_14a162620;
  plVar3 = (longlong *)param_1[4];
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x30))(plVar3,1);
  }
  param_1[4] = 0;
  if (param_1[0x26] != 0) {
    FUN_14018802a();
    param_1[0x26] = 0;
  }
  FUN_146269864(param_1 + 0x38);
  FUN_147085d72(param_1 + 0x30);
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  lVar5 = 0xd8;
  do {
    FUN_1400020a8(*(undefined8 *)((longlong)param_1 + lVar5));
    *(undefined8 *)((longlong)param_1 + lVar5) = 0;
    lVar5 = lVar5 + -0x18;
  } while (lVar5 != 0x18);
  puVar4 = (undefined8 *)param_1[5];
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
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
                    /* WARNING: Could not recover jumptable at 0x000147085d65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147085d72 FUN_147085d72 body=76 status=ok
// SIG undefined FUN_147085d72(void)

void FUN_147085d72(undefined8 param_1)

{
  longlong lVar1;
  uint uVar2;
  
  do {
    uVar2 = FUN_14470efbc(param_1);
    if (uVar2 == 0) {
      return;
    }
    lVar1 = *(longlong *)
             (*(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar2 >> 0xe) * 8) + 8 +
             (ulonglong)(uVar2 & 0x3fff) * 0x18);
    FUN_1447d080c(uVar2);
  } while (lVar1 != 0);
  return;
}



// FUNCTION 147085dc2 FUN_147085dc2 body=71 status=ok
// SIG undefined FUN_147085dc2(void)

undefined8 FUN_147085dc2(longlong param_1)

{
  int iVar1;
  char cVar2;
  
  iVar1 = *(int *)(param_1 + 0x148);
  while (iVar1 == 0) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x130) + 0x20))
                      (*(longlong **)(param_1 + 0x130),0xffffffff,0);
    if (cVar2 != '\0') {
      FUN_142b133f0(param_1);
    }
    iVar1 = *(int *)(param_1 + 0x148);
  }
  return 0;
}



// FUNCTION 147085e26 FUN_147085e26 body=126 status=ok
// SIG undefined FUN_147085e26(void)

longlong FUN_147085e26(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  LARGE_INTEGER local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_1 = param_1 + 0x30;
  lVar1 = 8;
  do {
    if (*(int *)(param_1 + 0xc) == param_2) {
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      QueryPerformanceCounter(&local_20);
      *(double *)(param_1 + 0x10) = (double)local_20.QuadPart * DAT_14c83f420 + 16777216.0;
      goto LAB_147085e84;
    }
    param_1 = param_1 + 0x18;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  param_1 = 0;
LAB_147085e84:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147085ea6 FUN_147085ea6 body=113 status=ok
// SIG undefined FUN_147085ea6(void)

void FUN_147085ea6(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = FUN_14493c560();
  if (uVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = (ulonglong)((uVar1 & 0x3fff) * 0x18) +
            *(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar1 >> 0xe) * 8);
  }
  *(undefined8 *)(lVar2 + 8) = param_2;
  FUN_144a8fde6(param_1 + 0x1c0,uVar1);
  if (*(longlong **)(param_1 + 0x130) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147085f07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x130) + 0x10))();
    return;
  }
  return;
}



// FUNCTION 147085f18 FUN_147085f18 body=302 status=ok
// SIG undefined FUN_147085f18(void)

undefined4 *
FUN_147085f18(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  uVar2 = FUN_14470efbc(param_1 + 0x180);
  if (uVar2 != 0) {
    puVar3 = *(undefined4 **)
              (*(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar2 >> 0xe) * 8) + 8 +
              (ulonglong)(uVar2 & 0x3fff) * 0x18);
    FUN_1447d080c(uVar2);
    if (puVar3 != (undefined4 *)0x0) goto LAB_147085fac;
  }
  puVar3 = (undefined4 *)FUN_14001cc68(0x30,0x10);
  *puVar3 = 0xffffffff;
  *(undefined8 *)(puVar3 + 2) = 0;
  *(undefined8 *)(puVar3 + 4) = 0;
  *(undefined8 *)(puVar3 + 6) = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  *(undefined8 *)(puVar3 + 10) = 0;
LAB_147085fac:
  *puVar3 = param_2;
  *(undefined8 *)(puVar3 + 2) = param_3;
  *(undefined8 *)(puVar3 + 4) = param_4;
  *(undefined8 *)(puVar3 + 6) = 0;
  LOCK();
  puVar3[8] = 0;
  UNLOCK();
  LOCK();
  puVar3[9] = 2;
  UNLOCK();
  *(undefined8 *)(puVar3 + 10) = param_5;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x100));
  iVar1 = *(int *)(param_1 + 0xf8);
  *(uint *)(param_1 + 0xf8) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0xfc) < iVar1 + 1U) {
    FUN_147086316(param_1 + 0xf0,iVar1);
  }
  *(undefined4 **)(*(longlong *)(param_1 + 0xf0) + (longlong)iVar1 * 8) = puVar3;
  LOCK();
  *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + 1;
  UNLOCK();
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x100));
  if (*(longlong **)(param_1 + 0x130) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x130) + 0x10))();
  }
  return puVar3;
}



// FUNCTION 147086046 FUN_147086046 body=206 status=ok
// SIG undefined FUN_147086046(void)

longlong * FUN_147086046(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_144869430();
  *param_1 = (longlong)&PTR_FUN_14a162680;
  param_1[0x12] = 0;
  param_1[0x13] = param_2;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = param_3;
  param_1[0x18] = 0;
  param_1[0x19] = -0x100000000;
  param_1[0x1a] = 0;
  lVar1 = FUN_14001cc68(0x10000,0);
  param_1[0x18] = lVar1;
  (**(code **)(*param_1 + 0xb0))(param_1,1);
  lVar2 = (**(code **)(*(longlong *)param_1[0x13] + 0x30))();
  lVar1 = lVar2 + 0xffff;
  if (-1 < lVar2) {
    lVar1 = lVar2;
  }
  param_1[0x14] = lVar2;
  param_1[0x12] = ((lVar1 >> 0x10) + 1) - (ulonglong)((short)lVar2 == 0);
  param_1[0x15] = lVar2;
  return param_1;
}



// FUNCTION 147086114 FUN_147086114 body=83 status=ok
// SIG undefined FUN_147086114(void)

void FUN_147086114(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14a162680;
  puVar1 = (undefined8 *)param_1[0x13];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[0x13] = 0;
  FUN_1400020a8(param_1[0x18]);
  param_1[0x18] = 0;
  FUN_144a7fc42(param_1);
  return;
}



// FUNCTION 147086168 FUN_147086168 body=49 status=ok
// SIG undefined FUN_147086168(void)

undefined8 FUN_147086168(undefined8 param_1,int param_2)

{
  FUN_147085c78();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x200,0x40);
  }
  return param_1;
}



// FUNCTION 14708619a FUN_14708619a body=43 status=ok
// SIG undefined FUN_14708619a(void)

undefined8 FUN_14708619a(undefined8 param_1,int param_2)

{
  FUN_147086114();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 1470861de FUN_1470861de body=36 status=ok
// SIG undefined FUN_1470861de(void)

undefined8 FUN_1470861de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14708621e FUN_14708621e body=93 status=ok
// SIG undefined FUN_14708621e(void)

void FUN_14708621e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a1628e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14708627c FUN_14708627c body=126 status=ok
// SIG undefined FUN_14708627c(void)

void FUN_14708627c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a1628e0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001470862eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1470862fa FUN_1470862fa body=21 status=ok
// SIG undefined FUN_1470862fa(void)

undefined8 FUN_1470862fa(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147086316 FUN_147086316 body=132 status=ok
// SIG undefined FUN_147086316(void)

void FUN_147086316(longlong param_1,int param_2)

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



// FUNCTION 14708639c FUN_14708639c body=48 status=ok
// SIG undefined FUN_14708639c(void)

void FUN_14708639c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1470863cc FUN_1470863cc body=62 status=ok
// SIG undefined FUN_1470863cc(void)

void FUN_1470863cc(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14708640a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 14708640a FUN_14708640a body=93 status=ok
// SIG undefined FUN_14708640a(void)

ulonglong FUN_14708640a(uint param_1,uint param_2)

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



// FUNCTION 147086468 FUN_147086468 body=112 status=ok
// SIG undefined FUN_147086468(void)

void FUN_147086468(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x28,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x28)) {
      uVar2 = uVar1 / 0x28 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x28,8);
  }
  return;
}



// FUNCTION 1470864d8 FUN_1470864d8 body=147 status=ok
// SIG undefined FUN_1470864d8(void)

void FUN_1470864d8(longlong param_1,int param_2)

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



// FUNCTION 14708656c FUN_14708656c body=859 status=ok
// SIG undefined FUN_14708656c(void)

undefined8 FUN_14708656c(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  char cVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined8 local_88;
  undefined1 local_7c [4];
  undefined1 local_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined2 *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9a02c8) && (FUN_144b3d300(&DAT_14c9a02c8), DAT_14c9a02c8 == -1)) {
    FUN_140056680(&DAT_14c9a02b8,L"LocalFileNetworkReplayStreaming");
    atexit((_func_5014 *)&LAB_142b13fa5);
    _Init_thread_footer(&DAT_14c9a02c8);
  }
  _Src = DAT_14c9a02b8;
  local_40 = (undefined2 *)0x0;
  lVar5 = (longlong)DAT_14c9a02c0;
  local_38 = DAT_14c9a02c0;
  if (lVar5 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,DAT_14c9a02c0,0);
    memcpy(local_40,_Src,lVar5 * 2);
  }
  if (param_2 == 0) {
    local_98 = &DAT_14c872ce8;
    FUN_1449da20c(DAT_14c872ce0,L"NetworkReplayStreaming",L"DefaultFactoryName",&local_40);
  }
  else {
    FUN_14020fad6(&local_40,param_2);
  }
  local_58 = 0;
  uStack_50 = 0;
  uVar3 = FUN_14118da1c();
  local_98 = (undefined8 *)0x0;
  cVar2 = FUN_14063337c(uVar3,L"-REPLAYSTREAMER=",&local_58,1);
  if (cVar2 == '\0') {
    uVar3 = FUN_14118da1c();
    local_98 = (undefined8 *)0x0;
    cVar2 = FUN_14063337c(uVar3,L"-REPLAYSTREAMEROVERRIDE=",&local_58,1);
    if (cVar2 == '\0') goto LAB_147086690;
  }
  iVar1 = (int)uStack_50 + -1;
  if ((int)uStack_50 == 0) {
    iVar1 = 0;
  }
  FUN_1402980a2(&local_40,local_58,iVar1);
LAB_147086690:
  uVar3 = FUN_144a52528();
  puVar4 = local_40;
  if (local_38 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_60,puVar4,1);
  cVar2 = FUN_14011feae(uVar3,local_60);
  if (cVar2 == '\0') {
    uVar3 = FUN_144a52528();
    puVar4 = &DAT_149dfb77a;
    if (local_38 != 0) {
      puVar4 = local_40;
    }
    FUN_1446f470e(&local_68,puVar4,1);
    FUN_1405f3750(uVar3,local_68,0);
    uVar3 = FUN_144a52528();
    puVar4 = &DAT_149dfb77a;
    if (local_38 != 0) {
      puVar4 = local_40;
    }
    FUN_1446f470e(&local_70,puVar4,1);
    cVar2 = FUN_14011feae(uVar3,local_70);
    if (cVar2 == '\0') {
      FUN_144a787a6(&local_40,&DAT_14c9a02b8);
    }
  }
  puVar4 = &DAT_149dfb77a;
  if (local_38 != 0) {
    puVar4 = local_40;
  }
  FUN_1446f470e(local_78,puVar4,1);
  FUN_144869592(param_1 + 0x10,local_7c,local_78,0);
  FUN_144a52528();
  puVar4 = &DAT_149dfb77a;
  if (local_38 != 0) {
    puVar4 = local_40;
  }
  FUN_1446f470e(&local_88,puVar4,1);
  uVar3 = FUN_144a52528();
  uVar3 = FUN_14493e38c(uVar3,local_88);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1470868c8 FUN_1470868c8 body=112 status=ok
// SIG undefined FUN_1470868c8(void)

int FUN_1470868c8(void)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 10;
  local_28 = &DAT_14c872ce8;
  FUN_1414d73b6(DAT_14c872ce0,L"NetworkReplayStreaming",L"MaxNumberAutomaticReplays",&local_1c);
  iVar1 = 10;
  if (-1 < local_1c) {
    iVar1 = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14708693a FUN_14708693a body=32 status=ok
// SIG undefined FUN_14708693a(void)

undefined8 FUN_14708693a(undefined8 param_1,undefined8 param_2)

{
  FUN_14099d55c(DAT_14c9a02e0,param_2,0);
  return param_2;
}



// FUNCTION 14708695a FUN_14708695a body=112 status=ok
// SIG undefined FUN_14708695a(void)

int FUN_14708695a(void)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 10;
  local_28 = &DAT_14c872ce8;
  FUN_1414d73b6(DAT_14c872ce0,L"NetworkReplayStreaming",L"MaxNumberAutomaticReplays",&local_1c);
  iVar1 = 10;
  if (-1 < local_1c) {
    iVar1 = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470869cc FUN_1470869cc body=306 status=ok
// SIG undefined FUN_1470869cc(void)

void FUN_1470869cc(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
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
  plVar1 = (longlong *)(param_1 + 0x10);
  lVar2 = param_1 + 0x20;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = lVar2;
  if (*(int *)(param_1 + 0x38) == 0) {
    iVar8 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar8 = *(int *)(param_1 + 0x38);
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_80 = plVar1;
  if ((iStack_44 != iVar8) || (uStack_50 != lVar2)) {
    do {
      lVar3 = *local_80;
      lVar9 = (longlong)iStack_64;
      uVar5 = FUN_144a52528();
      cVar4 = FUN_14011feae(uVar5,*(undefined8 *)(lVar3 + lVar9 * 0x10));
      if (cVar4 != '\0') {
        FUN_144a52528();
        uVar5 = *(undefined8 *)(lVar3 + lVar9 * 0x10);
        uVar6 = FUN_144a52528();
        plVar7 = (longlong *)FUN_14493e38c(uVar6,uVar5);
        (**(code **)(*plVar7 + 0x48))(plVar7);
      }
      local_68 = local_68 & ~uStack_74;
      FUN_1449c0562(&local_78);
    } while (local_80 != plVar1 || (CONCAT44(uStack_6c,uStack_70) != lVar2 || iStack_64 != iVar8));
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147086b00 FUN_147086b00 body=1147 status=ok
// SIG undefined FUN_147086b00(void)

longlong * FUN_147086b00(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  void *pvVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 uStack_80;
  longlong local_70;
  undefined8 local_68;
  undefined4 local_5c;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a0310) {
    FUN_144b3d300(&DAT_14c9a0310);
    if (DAT_14c9a0310 == -1) {
      FUN_140056680(&DAT_14c9a0300,L"StreamerState");
      atexit((_func_5014 *)&LAB_142b14040);
      _Init_thread_footer(&DAT_14c9a0310);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a0328) {
    FUN_144b3d300(&DAT_14c9a0328);
    if (DAT_14c9a0328 == -1) {
      FUN_140056680(&DAT_14c9a0318,L"ReplayName");
      atexit((_func_5014 *)&LAB_142b14051);
      _Init_thread_footer(&DAT_14c9a0328);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a0340) {
    FUN_144b3d300(&DAT_14c9a0340);
    if (DAT_14c9a0340 == -1) {
      FUN_140056680(&DAT_14c9a0330,L"LengthInMS");
      atexit((_func_5014 *)&LAB_142b14062);
      _Init_thread_footer(&DAT_14c9a0340);
    }
  }
  *param_2 = *param_3;
  *param_3 = 0;
  iVar9 = (int)param_3[1];
  *(int *)(param_2 + 1) = iVar9;
  uVar8 = *(uint *)((longlong)param_3 + 0xc);
  *(uint *)((longlong)param_2 + 0xc) = uVar8;
  param_3[1] = 0;
  local_5c = (**(code **)(*param_1 + 0x60))(param_1);
  (**(code **)(*param_1 + 0x130))(param_1,&local_70);
  bVar3 = (**(code **)(*param_1 + 0x138))(param_1);
  local_88 = 0;
  uStack_80 = 0;
  if (bVar3 < 3) {
    pwVar6 = (wchar_t *)(&PTR_u_Idle_14a162fd8)[bVar3];
  }
  else {
    pwVar6 = L"Unknown";
  }
  FUN_14020fad6(&local_88,pwVar6);
  iVar5 = iVar9 + 3;
  if (-1 < iVar5) {
    if ((int)uVar8 < iVar5) {
      FUN_147087202();
      iVar9 = (int)param_2[1];
      uVar8 = *(uint *)((longlong)param_2 + 0xc);
    }
    *(uint *)(param_2 + 1) = iVar9 + 1U;
    if (uVar8 < iVar9 + 1U) {
      FUN_146b17dba();
    }
    pvVar2 = DAT_14c9a0300;
    lVar1 = *param_2;
    local_58 = (void *)0x0;
    lVar7 = (longlong)DAT_14c9a0308;
    local_50 = DAT_14c9a0308;
    if (lVar7 == 0) {
      uVar4 = 0;
      iVar5 = 0;
    }
    else {
      FUN_1446dd670(&local_58,DAT_14c9a0308,0);
      memcpy(local_58,pvVar2,lVar7 * 2);
      uVar4 = local_4c;
      iVar5 = local_50;
    }
    lVar7 = (longlong)iVar9 * 0x30;
    *(void **)(lVar1 + lVar7) = local_58;
    *(int *)(lVar1 + 8 + lVar7) = iVar5;
    *(undefined4 *)(lVar1 + 0xc + lVar7) = uVar4;
    *(longlong *)(lVar1 + 0x10 + lVar7) = local_88;
    local_88 = 0;
    *(undefined4 *)(lVar1 + 0x18 + lVar7) = (undefined4)uStack_80;
    *(undefined4 *)(lVar1 + 0x1c + lVar7) = uStack_80._4_4_;
    uStack_80 = 0;
    *(undefined8 *)(lVar1 + 0x20 + lVar7) = 0;
    *(undefined1 *)(lVar1 + 0x28 + lVar7) = 0;
    *(undefined4 *)(lVar1 + 0x2c + lVar7) = 0;
    iVar9 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar9 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar9 + 1U) {
      FUN_146b17dba(param_2,iVar9);
    }
    pvVar2 = DAT_14c9a0318;
    lVar1 = *param_2;
    local_58 = (void *)0x0;
    lVar7 = (longlong)DAT_14c9a0320;
    local_50 = DAT_14c9a0320;
    if (lVar7 == 0) {
      iVar5 = 0;
      uVar4 = 0;
    }
    else {
      FUN_1446dd670(&local_58,DAT_14c9a0320,0);
      memcpy(local_58,pvVar2,lVar7 * 2);
      iVar5 = local_50;
      uVar4 = local_4c;
    }
    lVar7 = (longlong)iVar9 * 0x30;
    *(void **)(lVar1 + lVar7) = local_58;
    *(int *)(lVar1 + 8 + lVar7) = iVar5;
    *(undefined4 *)(lVar1 + 0xc + lVar7) = uVar4;
    *(longlong *)(lVar1 + 0x10 + lVar7) = local_70;
    local_70 = 0;
    *(undefined4 *)(lVar1 + 0x18 + lVar7) = (undefined4)local_68;
    *(undefined4 *)(lVar1 + 0x1c + lVar7) = local_68._4_4_;
    local_68 = 0;
    *(undefined8 *)(lVar1 + 0x20 + lVar7) = 0;
    *(undefined1 *)(lVar1 + 0x28 + lVar7) = 0;
    *(undefined4 *)(lVar1 + 0x2c + lVar7) = 0;
    iVar9 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar9 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar9 + 1U) {
      FUN_146b17dba(param_2,iVar9);
    }
    pvVar2 = DAT_14c9a0330;
    lVar1 = *param_2;
    local_58 = (void *)0x0;
    lVar7 = (longlong)DAT_14c9a0338;
    local_50 = DAT_14c9a0338;
    if (lVar7 == 0) {
      local_4c = 0;
    }
    else {
      FUN_1446dd670(&local_58,DAT_14c9a0338,0);
      memcpy(local_58,pvVar2,lVar7 * 2);
    }
    FUN_147087274(lVar1 + (longlong)iVar9 * 0x30,&local_58,&local_5c);
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    FUN_1470872da(param_1,param_2);
    if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
      return param_2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar5);
}



// FUNCTION 147086f7c FUN_147086f7c body=21 status=ok
// SIG undefined FUN_147086f7c(void)

undefined1 FUN_147086f7c(longlong *param_1)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x168))();
  return uVar1;
}



// FUNCTION 147086f92 FUN_147086f92 body=22 status=ok
// SIG undefined FUN_147086f92(void)

void FUN_147086f92(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14a162d20;
  param_1[1] = 0;
  return;
}



// FUNCTION 147086fa8 FUN_147086fa8 body=28 status=ok
// SIG undefined FUN_147086fa8(void)

void FUN_147086fa8(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_LAB_14a162d20;
  lVar1 = param_1[1];
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000147086fbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + -0x10))(lVar1 + -0x10);
    return;
  }
  return;
}



// FUNCTION 147086fce FUN_147086fce body=175 status=ok
// SIG undefined FUN_147086fce(void)

void FUN_147086fce(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_146efe122(*(longlong *)(param_1 + 8),param_2);
    return;
  }
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  *puVar5 = FUN_146efe1bf;
  puVar5[1] = FUN_142b14073;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *(undefined4 *)(puVar5 + 2) = *param_2;
  *(undefined4 *)((longlong)puVar5 + 0x14) = uVar2;
  *(undefined4 *)(puVar5 + 3) = uVar3;
  *(undefined4 *)((longlong)puVar5 + 0x1c) = uVar4;
  puVar5[4] = *(undefined8 *)(param_2 + 4);
  puVar5[5] = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined4 *)(puVar5 + 6) = param_2[8];
  *(undefined4 *)((longlong)puVar5 + 0x34) = param_2[9];
  *(undefined8 *)(param_2 + 8) = 0;
  puVar5[7] = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_2 + 10) = 0;
  lVar1 = *(longlong *)(param_1 + 8);
  *(undefined8 **)(param_1 + 8) = puVar5 + 2;
  if (lVar1 != 0) {
                    /* WARNING: Jumptable with 0 entries at 0x000147087063 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + -0x10))(lVar1 + -0x10);
    return;
  }
  return;
}



// FUNCTION 1470870a0 FUN_1470870a0 body=36 status=ok
// SIG undefined FUN_1470870a0(void)

undefined8 FUN_1470870a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1470870e0 FUN_1470870e0 body=93 status=ok
// SIG undefined FUN_1470870e0(void)

void FUN_1470870e0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a162ee0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14708713e FUN_14708713e body=123 status=ok
// SIG undefined FUN_14708713e(void)

void FUN_14708713e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
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
  *(undefined ***)p_Var1 = &PTR_FUN_14a162ee0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1470871ba FUN_1470871ba body=21 status=ok
// SIG undefined FUN_1470871ba(void)

undefined8 FUN_1470871ba(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1470871d0 FUN_1470871d0 body=50 status=ok
// SIG undefined FUN_1470871d0(void)

longlong FUN_1470871d0(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_145cc2e7e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 147087202 FUN_147087202 body=113 status=ok
// SIG undefined FUN_147087202(void)

void FUN_147087202(longlong param_1,int param_2)

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



// FUNCTION 147087274 FUN_147087274 body=101 status=ok
// SIG undefined FUN_147087274(void)

longlong * FUN_147087274(longlong *param_1,longlong *param_2,undefined4 *param_3)

{
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  FUN_140002266(param_1 + 2,&DAT_149e061aa,*param_3);
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 4;
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 1470872da FUN_1470872da body=197 status=ok
// SIG undefined FUN_1470872da(void)

void FUN_1470872da(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  bool bVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  uVar4 = (ulonglong)DAT_14c9a02a8;
  if ((longlong)uVar4 < 1) {
    return;
  }
  bVar5 = false;
  DAT_14c9a02b4 = DAT_14c9a02b4 + 1;
  do {
    lVar6 = uVar4 * 0x10 + -8;
    uVar7 = uVar4;
    while (((*(int *)(DAT_14c9a02a0 + lVar6) != 0 &&
            (plVar1 = *(longlong **)(DAT_14c9a02a0 + -8 + lVar6), plVar1 != (longlong *)0x0)) &&
           (cVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,param_1,param_2), cVar3 != '\0'))) {
      lVar6 = lVar6 + -0x10;
      bVar2 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar2) {
        DAT_14c9a02b4 = DAT_14c9a02b4 + -1;
        if (!bVar5) {
          return;
        }
        goto LAB_147087374;
      }
    }
    uVar4 = uVar7 - 1;
    bVar5 = true;
  } while (1 < uVar7);
  DAT_14c9a02b4 = DAT_14c9a02b4 + -1;
LAB_147087374:
  FUN_14474d06a(&DAT_14c9a02a0,0);
  return;
}



// FUNCTION 1470873a0 FUN_1470873a0 body=387 status=ok
// SIG undefined FUN_1470873a0(void)

void FUN_1470873a0(longlong param_1,undefined8 *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  iVar1 = *(int *)(param_1 + 0x40);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  if (iVar1 == 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x58);
    EnterCriticalSection(lpCriticalSection);
    iVar1 = *(int *)(param_1 + 0x88);
    if (iVar1 < *(int *)(param_1 + 0x90)) {
      *(uint *)(param_1 + 0x88) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x8c) < iVar1 + 1U) {
        FUN_147087ac0(param_1 + 0x80,iVar1);
      }
      lVar2 = *(longlong *)(param_1 + 0x80);
      lVar3 = (longlong)iVar1 * 0x30;
      *(undefined8 *)(lVar2 + lVar3) = *param_2;
      *(undefined8 *)(lVar2 + 8 + lVar3) = param_2[1];
      *(undefined4 *)(lVar2 + 0x10 + lVar3) = *(undefined4 *)(param_2 + 2);
      *(undefined8 *)(lVar2 + 0x18 + lVar3) = 0;
      *(undefined8 *)(lVar2 + 0x18 + lVar3) = param_2[3];
      param_2[3] = 0;
      *(undefined4 *)(lVar2 + 0x20 + lVar3) = *(undefined4 *)(param_2 + 4);
      *(undefined4 *)(lVar2 + 0x24 + lVar3) = *(undefined4 *)((longlong)param_2 + 0x24);
      param_2[4] = 0;
      *(undefined8 *)(lVar2 + 0x28 + lVar3) = param_2[5];
      LeaveCriticalSection(lpCriticalSection);
      (**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))();
      goto LAB_147087487;
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  local_60 = *param_2;
  local_58 = param_2[1];
  local_50 = *(undefined4 *)(param_2 + 2);
  local_48 = param_2[3];
  param_2[3] = 0;
  local_40 = *(undefined4 *)(param_2 + 4);
  local_3c = *(undefined4 *)((longlong)param_2 + 0x24);
  param_2[4] = 0;
  local_38 = param_2[5];
  FUN_147087524(param_1);
LAB_147087487:
  if (param_2[3] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147087524 FUN_147087524 body=461 status=ok
// SIG undefined FUN_147087524(void)

void FUN_147087524(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  int local_78;
  longlong local_68;
  int local_60;
  undefined2 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = FUN_1400dbadc();
  plVar3 = (longlong *)FUN_1415bdc84(uVar2);
  if (*(int *)(param_1 + 1) == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*param_1;
  }
  cVar1 = (**(code **)(*plVar3 + 0x108))(plVar3,puVar4);
  if (cVar1 == '\0') {
    if (*(int *)(param_1 + 1) == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)*param_1;
    }
    (**(code **)(*plVar3 + 0x110))(plVar3,puVar4);
  }
  iVar5 = *(int *)(param_1 + 9) + 1;
  *(int *)(param_1 + 9) = iVar5;
  FUN_140002266(&local_68,L"%d.frame",iVar5);
  iVar6 = local_60 + -1;
  if (local_60 == 0) {
    iVar6 = 0;
  }
  local_78 = iVar6 + 1 + (uint)(*(int *)(param_1 + 1) == 0);
  local_58 = (undefined2 *)0x0;
  FUN_14125bce8(&local_58,*param_1,*(int *)(param_1 + 1),0);
  FUN_1401aebe8(&local_58,local_68,iVar6);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)FUN_14054d1d4();
  puVar4 = local_58;
  if (local_50 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3,puVar4,0);
  if (plVar3 != (longlong *)0x0) {
    FUN_1470876f2(plVar3,param_2);
    (**(code **)(*plVar3 + 0x1f8))(plVar3);
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
    iVar6 = *(int *)(param_1 + 8);
    *(uint *)(param_1 + 8) = iVar6 + 1U;
    if (*(uint *)((longlong)param_1 + 0x44) < iVar6 + 1U) {
      FUN_1447808da(param_1 + 7,iVar6);
    }
    *(int *)(param_1[7] + (longlong)iVar6 * 4) = iVar5;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
    (**(code **)*plVar3)(plVar3,1);
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1470876f2 FUN_1470876f2 body=261 status=ok
// SIG undefined FUN_1470876f2(void)

longlong * FUN_1470876f2(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined8 **)param_1[1];
  if ((undefined8 *)((longlong *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,8);
    }
    else {
      thunk_FUN_146821949(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
  }
  puVar1 = *(undefined8 **)param_1[1];
  if ((undefined8 *)((longlong *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 1,8);
    }
    else {
      thunk_FUN_146821949(param_1);
    }
  }
  else {
    param_2[1] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
  }
  puVar2 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 2,4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 2) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_141733a16(param_1,param_2 + 3);
  return param_1;
}



// FUNCTION 1470877f8 FUN_1470877f8 body=294 status=ok
// SIG undefined FUN_1470877f8(void)

void FUN_1470877f8(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [40];
  double local_90;
  double local_88;
  undefined4 local_80;
  longlong local_78;
  int local_70;
  undefined4 local_6c;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(int *)(param_1 + 8) != 0) && (lVar6 = param_3[1], (int)lVar6 != 0)) {
    dVar4 = (double)*(int *)(param_1 + 0x2c) / (double)*(int *)(param_1 + 0x28);
    dVar5 = (double)*(int *)(param_1 + 0xc) * dVar4;
    lVar3 = *param_3;
    *param_3 = 0;
    uVar1 = *(undefined4 *)((longlong)param_3 + 0xc);
    plVar7 = (longlong *)0x0;
    *(undefined4 *)(param_3 + 1) = 0;
    *(undefined4 *)((longlong)param_3 + 0xc) = 0;
    uVar2 = *(undefined4 *)(param_1 + 0xc);
    if (*(char *)(param_1 + 0x48) == '\x01') {
      plVar7 = (longlong *)FUN_1405d8a54(0);
    }
    local_90 = dVar5;
    local_88 = dVar4 + dVar5;
    local_80 = uVar2;
    local_78 = lVar3;
    local_70 = (int)lVar6;
    local_6c = uVar1;
    local_68 = plVar7;
    FUN_1470873a0(*(undefined8 *)(param_1 + 0x10));
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x20))(plVar7,0xffffffff,0);
      FUN_14018802a(plVar7);
    }
  }
  if (*param_3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_b8);
  }
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147087942 FUN_147087942 body=3 status=ok
// SIG undefined FUN_147087942(void)

undefined8 FUN_147087942(void)

{
  return 0;
}



// FUNCTION 147087946 FUN_147087946 body=34 status=ok
// SIG undefined FUN_147087946(void)

void FUN_147087946(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14a163090;
  return;
}



// FUNCTION 147087968 FUN_147087968 body=31 status=ok
// SIG undefined FUN_147087968(void)

undefined8 FUN_147087968(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470879a4 FUN_1470879a4 body=93 status=ok
// SIG undefined FUN_1470879a4(void)

void FUN_1470879a4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a163020;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147087a02 FUN_147087a02 body=126 status=ok
// SIG undefined FUN_147087a02(void)

void FUN_147087a02(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a163020;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147087a71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147087a8c FUN_147087a8c body=21 status=ok
// SIG undefined FUN_147087a8c(void)

undefined8 FUN_147087a8c(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147087aa2 FUN_147087aa2 body=29 status=ok
// SIG undefined FUN_147087aa2(void)

undefined8 FUN_147087aa2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147087ac0 FUN_147087ac0 body=147 status=ok
// SIG undefined FUN_147087ac0(void)

void FUN_147087ac0(longlong param_1,int param_2)

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



// FUNCTION 147087b58 FUN_147087b58 body=34 status=ok
// SIG undefined FUN_147087b58(void)

undefined8 FUN_147087b58(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 147087b7a FUN_147087b7a body=78 status=ok
// SIG undefined FUN_147087b7a(void)

void FUN_147087b7a(longlong *param_1)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_147087d24(local_20);
  (**(code **)(*param_1 + 0x40))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147087bca FUN_147087bca body=29 status=ok
// SIG undefined FUN_147087bca(void)

void FUN_147087bca(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(8);
  *puVar1 = &PTR_FUN_14a1630f0;
  return;
}



// FUNCTION 147087be8 FUN_147087be8 body=36 status=ok
// SIG undefined FUN_147087be8(void)

undefined8 FUN_147087be8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 147087c28 FUN_147087c28 body=93 status=ok
// SIG undefined FUN_147087c28(void)

void FUN_147087c28(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a163140;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147087c86 FUN_147087c86 body=123 status=ok
// SIG undefined FUN_147087c86(void)

void FUN_147087c86(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
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
  *(undefined ***)p_Var1 = &PTR_FUN_14a163140;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147087d0e FUN_147087d0e body=21 status=ok
// SIG undefined FUN_147087d0e(void)

undefined8 FUN_147087d0e(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147087d24 FUN_147087d24 body=157 status=ok
// SIG undefined FUN_147087d24(void)

undefined8 FUN_147087d24(undefined8 param_1)

{
  undefined2 *puVar1;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined2 *local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = (undefined2 *)0x0;
  uStack_20 = 0;
  local_38 = &DAT_14c872ce8;
  FUN_1449da20c(DAT_14c872ce0,L"Advertising",L"DefaultProviderName",&local_28);
  puVar1 = local_28;
  if ((int)uStack_20 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_1446f470e(param_1,puVar1,1);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147087dcc FUN_147087dcc body=443 status=ok
// SIG undefined FUN_147087dcc(void)

void FUN_147087dcc(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  ulonglong uVar1;
  undefined1 uVar2;
  undefined2 **ppuVar3;
  undefined2 **ppuVar4;
  undefined1 auStack_98 [40];
  undefined2 *local_70;
  undefined8 local_68;
  longlong lStack_60;
  ulonglong local_58;
  undefined2 *local_50;
  undefined8 local_48;
  longlong lStack_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_50 = &DAT_14a171d50;
  local_48 = 0;
  lStack_40 = 0;
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  ppuVar4 = &local_50;
  if (*(undefined2 ***)(param_2 + 0x38) != (undefined2 **)0x0) {
    ppuVar4 = *(undefined2 ***)(param_2 + 0x38);
  }
  local_70 = &DAT_14a171d50;
  local_68 = 0;
  lStack_60 = 0;
  local_58 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  ppuVar3 = *(undefined2 ***)(param_2 + 0x38);
  if (*(undefined2 ***)(param_2 + 0x38) == (undefined2 **)0x0) {
    ppuVar3 = &local_70;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = thunk_FUN_144a8028a(ppuVar4,ppuVar3);
  *param_3 = uVar2;
  local_70 = &DAT_14a171d50;
  uVar1 = local_58 >> 0x20;
  local_58 = local_58 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    FUN_140115c12(&lStack_60,0);
  }
  local_68 = 0;
  if (lStack_60 != 0) {
    FUN_1400020a8();
  }
  local_50 = &DAT_14a171d50;
  uVar1 = local_38 >> 0x20;
  local_38 = local_38 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    FUN_140115c12(&lStack_40,0);
  }
  local_48 = 0;
  if (lStack_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147087f8e FUN_147087f8e body=443 status=ok
// SIG undefined FUN_147087f8e(void)

void FUN_147087f8e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  ulonglong uVar1;
  undefined1 uVar2;
  undefined2 **ppuVar3;
  undefined2 **ppuVar4;
  undefined1 auStack_98 [40];
  undefined2 *local_70;
  undefined8 local_68;
  longlong lStack_60;
  ulonglong local_58;
  undefined2 *local_50;
  undefined8 local_48;
  longlong lStack_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_50 = &DAT_14a171d50;
  local_48 = 0;
  lStack_40 = 0;
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  ppuVar4 = &local_50;
  if (*(undefined2 ***)(param_2 + 0x38) != (undefined2 **)0x0) {
    ppuVar4 = *(undefined2 ***)(param_2 + 0x38);
  }
  local_70 = &DAT_14a171d50;
  local_68 = 0;
  lStack_60 = 0;
  local_58 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  ppuVar3 = *(undefined2 ***)(param_2 + 0x38);
  if (*(undefined2 ***)(param_2 + 0x38) == (undefined2 **)0x0) {
    ppuVar3 = &local_70;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_147092044(ppuVar4,ppuVar3);
  *param_3 = uVar2;
  local_70 = &DAT_14a171d50;
  uVar1 = local_58 >> 0x20;
  local_58 = local_58 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    FUN_140115c12(&lStack_60,0);
  }
  local_68 = 0;
  if (lStack_60 != 0) {
    FUN_1400020a8();
  }
  local_50 = &DAT_14a171d50;
  uVar1 = local_38 >> 0x20;
  local_38 = local_38 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    FUN_140115c12(&lStack_40,0);
  }
  local_48 = 0;
  if (lStack_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147088150 FUN_147088150 body=349 status=ok
// SIG undefined FUN_147088150(void)

void FUN_147088150(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  ulonglong uVar1;
  undefined1 uVar2;
  undefined2 **ppuVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined2 *local_48;
  undefined8 local_40;
  longlong lStack_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = &DAT_14a171d50;
  local_40 = 0;
  lStack_38 = 0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  ppuVar3 = &local_48;
  if (*(undefined2 ***)(param_2 + 0x38) != (undefined2 **)0x0) {
    ppuVar3 = *(undefined2 ***)(param_2 + 0x38);
  }
  local_50 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_147092004(ppuVar3,local_50);
  *param_3 = uVar2;
  local_48 = &DAT_14a171d50;
  uVar1 = local_30 >> 0x20;
  local_30 = local_30 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    FUN_140115c12(&lStack_38,0);
  }
  local_40 = 0;
  if (lStack_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470882b2 FUN_1470882b2 body=231 status=ok
// SIG undefined FUN_1470882b2(void)

void FUN_1470882b2(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  longlong *local_30;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14709499e(local_38,local_28);
  FUN_1446dcc2e(param_3,local_38);
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
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14708839a FUN_14708839a body=352 status=ok
// SIG undefined FUN_14708839a(void)

void FUN_14708839a(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  longlong *local_48;
  undefined4 local_3c;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar4 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  local_3c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147094d4e(local_50,puVar4,local_3c);
  FUN_1446dcc2e(param_3,local_50);
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
  plVar1 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470884fc FUN_1470884fc body=367 status=ok
// SIG undefined FUN_1470884fc(void)

void FUN_1470884fc(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  longlong *local_50;
  longlong local_48 [3];
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48[2] = 0;
  plStack_30 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 2);
  }
  plVar3 = local_48 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147094c1a(local_58,plVar3,local_48);
  FUN_1446dcc2e(param_3,local_58);
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_50 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)local_50 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_50 + 0x10))(local_50);
      }
    }
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  plVar3 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_30 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14708866c FUN_14708866c body=300 status=ok
// SIG undefined FUN_14708866c(void)

void FUN_14708866c(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar4 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  local_3c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar5 = FUN_147094eb0(puVar4,local_3c);
  plVar3 = plStack_30;
  *param_3 = uVar5;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14708879a FUN_14708879a body=296 status=ok
// SIG undefined FUN_14708879a(void)

void FUN_14708879a(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar5 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(param_2 + 0x38);
  }
  local_3c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_147094e86(puVar5,local_3c);
  plVar3 = plStack_30;
  *param_3 = uVar4;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470888c4 FUN_1470888c4 body=395 status=ok
// SIG undefined FUN_1470888c4(void)

void FUN_1470888c4(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  longlong local_48 [3];
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48[2] = 0;
  plStack_30 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 2);
  }
  plVar3 = local_48 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147094d8a(&local_58,plVar3,local_48);
  if (&local_58 == param_3) {
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_58;
    local_58 = 0;
    *(undefined4 *)(param_3 + 1) = local_50;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_4c;
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  plVar3 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147088a56 FUN_147088a56 body=207 status=ok
// SIG undefined FUN_147088a56(void)

void FUN_147088a56(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar5 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar5 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_147094bd8(puVar5);
  plVar3 = plStack_30;
  *param_3 = uVar4;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147088b2c FUN_147088b2c body=207 status=ok
// SIG undefined FUN_147088b2c(void)

void FUN_147088b2c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar5 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar5 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_147094c04(puVar5);
  plVar3 = plStack_30;
  *param_3 = uVar4;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147088c02 FUN_147088c02 body=207 status=ok
// SIG undefined FUN_147088c02(void)

void FUN_147088c02(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar5 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar5 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_147094bee(puVar5);
  plVar3 = plStack_30;
  *param_3 = uVar4;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147088cd8 FUN_147088cd8 body=207 status=ok
// SIG undefined FUN_147088cd8(void)

void FUN_147088cd8(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar5 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar5 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_147094bbe(puVar5);
  plVar3 = plStack_30;
  *param_3 = uVar4;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147088da8 FUN_147088da8 body=286 status=ok
// SIG undefined FUN_147088da8(void)

void FUN_147088da8(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar4 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147094b48(&local_38,puVar4);
  if (&local_38 == param_3) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_38;
    local_38 = 0;
    *(undefined4 *)(param_3 + 1) = local_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
  }
  plVar3 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147088eee FUN_147088eee body=262 status=ok
// SIG undefined FUN_147088eee(void)

void FUN_147088eee(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
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
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14709104e(local_20,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14708904e FUN_14708904e body=172 status=ok
// SIG undefined FUN_14708904e(void)

void FUN_14708904e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_28;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1470a2500(plVar1);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147089154 FUN_147089154 body=32 status=ok
// SIG undefined FUN_147089154(void)

undefined8 FUN_147089154(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,&DAT_149dfb77a);
  return param_2;
}



// FUNCTION 147089174 FUN_147089174 body=36 status=ok
// SIG undefined FUN_147089174(void)

undefined8 FUN_147089174(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) != 0) {
    FUN_1457d0886(param_2,0);
  }
  return 0;
}



// FUNCTION 1470891fc FUN_1470891fc body=42 status=ok
// SIG undefined FUN_1470891fc(void)

undefined8 FUN_1470891fc(void)

{
  FUN_140033559(".\\Runtime/Gearbox/GbxNexus/Public/NexusConfigStoreGeneric.h",0x11,
                L"Pure virtual not implemented (%s)",L"CreateNewUStructureInstance");
  return 0;
}



// FUNCTION 147089226 FUN_147089226 body=42 status=ok
// SIG undefined FUN_147089226(void)

undefined8 FUN_147089226(void)

{
  FUN_140033559(".\\Runtime/Gearbox/GbxNexus/Public/NexusConfigStoreGeneric.h",0x12,
                L"Pure virtual not implemented (%s)",L"ReturnUStruct");
  return 0;
}



// FUNCTION 14708926a FUN_14708926a body=45 status=ok
// SIG undefined FUN_14708926a(void)

longlong FUN_14708926a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14708929e FUN_14708929e body=45 status=ok
// SIG undefined FUN_14708929e(void)

longlong FUN_14708929e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145aba340(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470892cc FUN_1470892cc body=55 status=ok
// SIG undefined FUN_1470892cc(void)

undefined8 * FUN_1470892cc(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559(".\\Runtime/Gearbox/GbxNexus/Public/NexusEditorObject.h",0x96,
                L"Pure virtual not implemented (%s)",L"UNexusEditorObject::SetEditableDataType");
  *param_2 = 0;
  return param_2;
}



// FUNCTION 147089304 FUN_147089304 body=45 status=ok
// SIG undefined FUN_147089304(void)

longlong FUN_147089304(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}


