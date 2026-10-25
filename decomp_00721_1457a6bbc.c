// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1457a6bbc FUN_1457a6bbc body=71 status=ok
// SIG undefined FUN_1457a6bbc(void)

undefined8 * FUN_1457a6bbc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  uVar1 = FUN_14477b664(uVar1);
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 1457a6c04 FUN_1457a6c04 body=98 status=ok
// SIG undefined FUN_1457a6c04(void)

void FUN_1457a6c04(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1457a6c66 FUN_1457a6c66 body=115 status=ok
// SIG undefined FUN_1457a6c66(void)

void FUN_1457a6c66(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,8);
    iVar2 = (int)(uVar1 / 0x30);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x30,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1457a6cda FUN_1457a6cda body=98 status=ok
// SIG undefined FUN_1457a6cda(void)

void FUN_1457a6cda(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1457a6d3c FUN_1457a6d3c body=82 status=ok
// SIG undefined FUN_1457a6d3c(void)

void FUN_1457a6d3c(longlong param_1,char param_2)

{
  byte bVar1;
  byte bVar2;
  
  *(byte *)(param_1 + 0x66c) = *(byte *)(param_1 + 0x66c) & 0xfb | param_2 << 2;
  if (*(longlong *)(param_1 + 0x5a8) != 0) {
    bVar1 = *(byte *)(*(longlong *)(param_1 + 0x5a8) + 0x74);
    bVar2 = FUN_1447e525e(param_1,0);
    if (bVar2 != (bVar1 & 8) >> 3) {
      FUN_1448215fa(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1457a6d8e FUN_1457a6d8e body=302 status=ok
// SIG undefined FUN_1457a6d8e(void)

void FUN_1457a6d8e(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(param_1 + 0x10);
  if ((lVar1 != 0) && (*(longlong *)(param_1 + 0x50) == 0)) {
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar1);
    }
    local_48 = 0;
    FUN_14485c47a(&local_48,lVar1);
    uVar2 = local_48;
    lVar1 = *(longlong *)(param_1 + 0x10);
    local_40 = (undefined8 *)0x0;
    local_38 = 0;
    FUN_1446efa72(&local_40,0,2,0x10);
    local_38 = 2;
    *local_40 = &PTR_LAB_14b427060;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar3 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar3 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar3;
    local_40[2] = lVar4;
    *local_40 = &PTR_FUN_14b9a2770;
    local_40[3] = uVar2;
    FUN_1457a6ebe(lVar1 + 0x11b8,&local_50,&local_40);
    FUN_1449db362(&local_40);
    *(undefined8 *)(param_1 + 0x50) = local_50;
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457a6ebe FUN_1457a6ebe body=216 status=ok
// SIG undefined FUN_1457a6ebe(void)

undefined8 * FUN_1457a6ebe(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
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



// FUNCTION 1457a6fa4 FUN_1457a6fa4 body=453 status=ok
// SIG undefined FUN_1457a6fa4(void)

void FUN_1457a6fa4(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  if (param_2 == param_1) {
    return;
  }
  if (*(char *)(param_2 + 1) == '\x01') {
    *param_1 = *param_2;
    uVar1 = 1;
LAB_1457a7095:
    *(undefined1 *)(param_1 + 1) = uVar1;
  }
  else if (*(char *)(param_1 + 1) == '\x01') {
    uVar1 = 0;
    goto LAB_1457a7095;
  }
  if (*(char *)(param_2 + 3) == '\x01') {
    param_1[2] = param_2[2];
    *(undefined1 *)(param_1 + 3) = 1;
  }
  else if (*(char *)(param_1 + 3) == '\x01') {
    *(undefined1 *)(param_1 + 3) = 0;
  }
  if (*(char *)((longlong)param_2 + 0x11) == '\x01') {
    *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
    *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  }
  else if (*(char *)((longlong)param_1 + 0x11) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x11) = 0;
  }
  if (*(char *)((longlong)param_2 + 0x13) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x12) = *(undefined1 *)((longlong)param_2 + 0x12);
    *(undefined1 *)((longlong)param_1 + 0x13) = 1;
  }
  else if (*(char *)((longlong)param_1 + 0x13) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x13) = 0;
  }
  if (*(char *)((longlong)param_2 + 0x15) == '\x01') {
    *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
    *(undefined1 *)((longlong)param_1 + 0x15) = 1;
  }
  else if (*(char *)((longlong)param_1 + 0x15) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x15) = 0;
  }
  if (*(char *)((longlong)param_2 + 0x17) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x16) = *(undefined1 *)((longlong)param_2 + 0x16);
    *(undefined1 *)((longlong)param_1 + 0x17) = 1;
  }
  else if (*(char *)((longlong)param_1 + 0x17) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x17) = 0;
  }
  if (*(char *)((longlong)param_2 + 0x19) == '\x01') {
    *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
    *(undefined1 *)((longlong)param_1 + 0x19) = 1;
  }
  else if (*(char *)((longlong)param_1 + 0x19) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x19) = 0;
  }
  if (param_2[7] == -1) {
    if (param_1[7] != -1) {
      uVar2 = 0xffffffff;
      goto LAB_1457a704a;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 7);
LAB_1457a704a:
    *(undefined8 *)(param_1 + 7) = uVar2;
  }
  if (param_2[9] == -1) {
    if (param_1[9] == -1) goto LAB_1457a7062;
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 9);
  }
  *(undefined8 *)(param_1 + 9) = uVar2;
LAB_1457a7062:
  if (*(char *)((longlong)param_2 + 0x2d) == '\x01') {
    *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
    *(undefined1 *)((longlong)param_1 + 0x2d) = 1;
  }
  else if (*(char *)((longlong)param_1 + 0x2d) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x2d) = 0;
  }
  if (*(char *)((longlong)param_2 + 0x2f) != '\x01') {
    if (*(char *)((longlong)param_1 + 0x2f) == '\x01') {
      *(undefined1 *)((longlong)param_1 + 0x2f) = 0;
    }
    return;
  }
  *(undefined1 *)((longlong)param_1 + 0x2e) = *(undefined1 *)((longlong)param_2 + 0x2e);
  *(undefined1 *)((longlong)param_1 + 0x2f) = 1;
  return;
}



// FUNCTION 1457a716a FUN_1457a716a body=432 status=ok
// SIG undefined FUN_1457a716a(void)

void FUN_1457a716a(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
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



// FUNCTION 1457a731c FUN_1457a731c body=45 status=ok
// SIG undefined FUN_1457a731c(void)

undefined8 FUN_1457a731c(undefined8 param_1,int param_2)

{
  FUN_1457a734a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 1457a734a FUN_1457a734a body=62 status=ok
// SIG undefined FUN_1457a734a(void)

void FUN_1457a734a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b2360a0;
  FUN_140d9624e(param_1 + 0x13);
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_140d9629a(param_1);
  return;
}



// FUNCTION 1457a7388 FUN_1457a7388 body=63 status=ok
// SIG undefined FUN_1457a7388(void)

void FUN_1457a7388(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1457a73c8(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1457a73c8 FUN_1457a73c8 body=83 status=ok
// SIG undefined FUN_1457a73c8(void)

ulonglong FUN_1457a73c8(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if ((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) == 0) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if ((param_1 == 0) || (0x40 < (int)(param_2 - param_1))) {
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



// FUNCTION 1457a741c FUN_1457a741c body=53 status=ok
// SIG undefined FUN_1457a741c(void)

void FUN_1457a741c(longlong *param_1)

{
  FUN_1457a7452();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457a7452 FUN_1457a7452 body=89 status=ok
// SIG undefined FUN_1457a7452(void)

void FUN_1457a7452(longlong param_1)

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



// FUNCTION 1457a74ac FUN_1457a74ac body=112 status=ok
// SIG undefined FUN_1457a74ac(void)

void FUN_1457a74ac(longlong param_1,uint param_2)

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



// FUNCTION 1457a751c FUN_1457a751c body=117 status=ok
// SIG undefined FUN_1457a751c(void)

void FUN_1457a751c(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 < 4) {
    iVar3 = 1;
  }
  else {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((iVar3 <= *(int *)(param_1 + 0x48) || (int)param_2 < 1) && *(int *)(param_1 + 0x48) <= iVar3)
  {
    FUN_140d96f32(param_1);
    FUN_140d96d14(param_1,param_2);
    return;
  }
  FUN_140d96d14(param_1,param_2);
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_140d9707e(param_1);
  return;
}



// FUNCTION 1457a7592 FUN_1457a7592 body=40 status=ok
// SIG undefined FUN_1457a7592(void)

undefined8 FUN_1457a7592(undefined8 param_1,int param_2)

{
  FUN_1457a75ba();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457a75ba FUN_1457a75ba body=87 status=ok
// SIG undefined FUN_1457a75ba(void)

void FUN_1457a75ba(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14acc3810;
  *(undefined4 *)(param_1 + 0x12) = 0;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_1457a7612(param_1 + 9);
  if ((longlong *)param_1[7] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[7] + 0x10))();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1457a7612 FUN_1457a7612 body=55 status=ok
// SIG undefined FUN_1457a7612(void)

void FUN_1457a7612(longlong *param_1)

{
  FUN_140d9778c(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457a7649 FUN_1457a7649 body=58 status=ok
// SIG undefined FUN_1457a7649(void)

void FUN_1457a7649(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1447a97f4(param_1,param_2);
    *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x28);
    param_1 = param_1 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return;
}



// FUNCTION 1457a7684 FUN_1457a7684 body=115 status=ok
// SIG undefined FUN_1457a7684(void)

void FUN_1457a7684(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,8);
    iVar2 = (int)(uVar1 / 0x30);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x30,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1457a76f8 FUN_1457a76f8 body=38 status=ok
// SIG undefined FUN_1457a76f8(void)

undefined8 FUN_1457a76f8(undefined8 param_1,int param_2)

{
  FUN_1457a771e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457a771e FUN_1457a771e body=358 status=ok
// SIG undefined FUN_1457a771e(void)

void FUN_1457a771e(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_149f5cd90;
  FUN_140d9d100(param_1 + 0x20);
  FUN_1457a7c18(param_1 + 0x216);
  if (param_1[0x20a] != 0) {
    plVar1 = param_1 + 0x20e;
    if ((longlong *)param_1[0x20c] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x20c];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[0x202] != 0) {
    plVar1 = param_1 + 0x206;
    if ((longlong *)param_1[0x204] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x204];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[0x1fa] != 0) {
    plVar1 = param_1 + 0x1fe;
    if ((longlong *)param_1[0x1fc] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x1fc];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[0x1f2] != 0) {
    plVar1 = param_1 + 0x1f6;
    if ((longlong *)param_1[500] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[500];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[0x1ea] != 0) {
    plVar1 = param_1 + 0x1ee;
    if ((longlong *)param_1[0x1ec] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x1ec];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[0x1e2] != 0) {
    plVar1 = param_1 + 0x1e6;
    if ((longlong *)param_1[0x1e4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x1e4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_1457a78ba(param_1 + 0x1b2);
  FUN_1457a7884(param_1 + 0x189);
  FUN_1457a78f0(param_1 + 0x166);
  FUN_1457a7b16(param_1 + 0x14c);
  FUN_1457a79ee(param_1 + 0x11e);
  FUN_1457a7f30(param_1 + 0x89);
  FUN_140d9d984(param_1);
  return;
}



// FUNCTION 1457a7884 FUN_1457a7884 body=54 status=ok
// SIG undefined FUN_1457a7884(void)

void FUN_1457a7884(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f58080;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_1457a7980(param_1 + 5);
  return;
}



// FUNCTION 1457a78ba FUN_1457a78ba body=54 status=ok
// SIG undefined FUN_1457a78ba(void)

void FUN_1457a78ba(longlong param_1)

{
  FUN_140d9cb4e(param_1 + 0x20);
  FUN_140d9c907(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457a78f0 FUN_1457a78f0 body=57 status=ok
// SIG undefined FUN_1457a78f0(void)

void FUN_1457a78f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f496a0;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_1457a7928(param_1 + 4);
  return;
}



// FUNCTION 1457a7928 FUN_1457a7928 body=48 status=ok
// SIG undefined FUN_1457a7928(void)

void FUN_1457a7928(longlong *param_1)

{
  FUN_1457a7a7c();
  FUN_1457a7958(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457a7958 FUN_1457a7958 body=40 status=ok
// SIG undefined FUN_1457a7958(void)

void FUN_1457a7958(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1400020a8(*param_1);
    param_1 = param_1 + 4;
  }
  return;
}



// FUNCTION 1457a7980 FUN_1457a7980 body=110 status=ok
// SIG undefined FUN_1457a7980(void)

void FUN_1457a7980(longlong param_1)

{
  FUN_140d9c944();
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  FUN_14026cec3(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_140d9c9f5(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457a79ee FUN_1457a79ee body=142 status=ok
// SIG undefined FUN_1457a79ee(void)

void FUN_1457a79ee(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_149f583c0;
  if (param_1[0x26] != 0) {
    plVar1 = param_1 + 0x2a;
    if ((longlong *)param_1[0x28] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x28];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1d] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457a7a7c FUN_1457a7a7c body=154 status=ok
// SIG undefined FUN_1457a7a7c(void)

void FUN_1457a7a7c(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar3 = 0;
  if ((longlong)(int)param_1[1] != 0) {
    plVar4 = (longlong *)*param_1;
    plVar2 = plVar4 + (longlong)(int)param_1[1] * 4;
    do {
      iVar3 = (int)plVar4[3];
      if (0 < iVar3) {
        lVar6 = 0x124;
        lVar5 = 0;
        do {
          lVar1 = *plVar4;
          if ((*(byte *)(lVar1 + lVar6) & 1) != 0) {
            *(undefined ***)(lVar1 + -0x124 + lVar6) = &PTR_LAB_149f4b8e0;
            *(byte *)(lVar1 + lVar6) = *(byte *)(lVar1 + lVar6) & 0xfe;
            iVar3 = (int)plVar4[3];
          }
          lVar5 = lVar5 + 1;
          lVar6 = lVar6 + 0x128;
        } while (lVar5 < iVar3);
      }
      plVar4[1] = *plVar4;
      *(int *)((longlong)plVar4 + 0x14) = (int)plVar4[2];
      plVar4[3] = -0x100000000;
      plVar4 = plVar4 + 4;
    } while (plVar4 != plVar2);
    iVar3 = (int)param_1[1];
  }
  *(int *)(param_1 + 3) = iVar3 * (int)param_1[2];
  return;
}



// FUNCTION 1457a7b16 FUN_1457a7b16 body=203 status=ok
// SIG undefined FUN_1457a7b16(void)

void FUN_1457a7b16(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f5d570;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 1457a7be2 FUN_1457a7be2 body=53 status=ok
// SIG undefined FUN_1457a7be2(void)

void FUN_1457a7be2(longlong *param_1)

{
  FUN_1457a7de2();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457a7c18 FUN_1457a7c18 body=314 status=ok
// SIG undefined FUN_1457a7c18(void)

void FUN_1457a7c18(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  FUN_1457a7d52(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_140a86873(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457a7d52 FUN_1457a7d52 body=53 status=ok
// SIG undefined FUN_1457a7d52(void)

void FUN_1457a7d52(longlong *param_1)

{
  FUN_1457a7d88();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457a7d88 FUN_1457a7d88 body=90 status=ok
// SIG undefined FUN_1457a7d88(void)

void FUN_1457a7d88(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1457a7de2 FUN_1457a7de2 body=332 status=ok
// SIG undefined FUN_1457a7de2(void)

void FUN_1457a7de2(longlong *param_1)

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
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457a7f30 FUN_1457a7f30 body=370 status=ok
// SIG undefined FUN_1457a7f30(void)

void FUN_1457a7f30(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x480) = 0;
  if (*(longlong *)(param_1 + 0x478) != 0) {
    FUN_1400020a8();
  }
  FUN_1457a80a2(param_1 + 0x438);
  *(undefined4 *)(param_1 + 0x430) = 0;
  if (*(longlong *)(param_1 + 0x428) != 0) {
    FUN_1400020a8();
  }
  FUN_1457a80d8(param_1 + 1000);
  *(undefined4 *)(param_1 + 0x3e0) = 0;
  if (*(longlong *)(param_1 + 0x3d8) != 0) {
    FUN_1400020a8();
  }
  FUN_140d9ce6e(param_1 + 0x398);
  FUN_1400b4e95(*(undefined8 *)(param_1 + 0x388),*(undefined4 *)(param_1 + 0x390));
  if (*(longlong *)(param_1 + 0x388) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x378) != 0) {
    FUN_1400020a8();
  }
  FUN_1457a8332(param_1 + 0x118);
  *(undefined4 *)(param_1 + 0x110) = 0;
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FUN_1400020a8();
  }
  FUN_1457a8144(param_1 + 200);
  *(undefined4 *)(param_1 + 0xc0) = 0;
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_1400020a8();
  }
  FUN_1457a810e(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  FUN_140d9ce6e(param_1 + 0x28);
  return;
}



// FUNCTION 1457a80a2 FUN_1457a80a2 body=53 status=ok
// SIG undefined FUN_1457a80a2(void)

void FUN_1457a80a2(longlong *param_1)

{
  FUN_140bb70aa();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457a80d8 FUN_1457a80d8 body=53 status=ok
// SIG undefined FUN_1457a80d8(void)

void FUN_1457a80d8(longlong *param_1)

{
  FUN_1457a81d6();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457a810e FUN_1457a810e body=53 status=ok
// SIG undefined FUN_1457a810e(void)

void FUN_1457a810e(longlong *param_1)

{
  FUN_1457a817c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457a8144 FUN_1457a8144 body=55 status=ok
// SIG undefined FUN_1457a8144(void)

void FUN_1457a8144(longlong *param_1)

{
  FUN_1457a8754(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457a817c FUN_1457a817c body=90 status=ok
// SIG undefined FUN_1457a817c(void)

void FUN_1457a817c(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1457a81d6 FUN_1457a81d6 body=346 status=ok
// SIG undefined FUN_1457a81d6(void)

void FUN_1457a81d6(longlong *param_1)

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
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457a8332 FUN_1457a8332 body=368 status=ok
// SIG undefined FUN_1457a8332(void)

void FUN_1457a8332(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x250) = 0;
  if (*(longlong *)(param_1 + 0x248) != 0) {
    FUN_1400020a8();
  }
  FUN_144a6bfa8(param_1 + 0x208);
  if (*(longlong *)(param_1 + 0x1f0) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    FUN_1400020a8();
  }
  FUN_1457a84a2(param_1 + 0x1a0);
  *(undefined4 *)(param_1 + 0x198) = 0;
  if (*(longlong *)(param_1 + 400) != 0) {
    FUN_1400020a8();
  }
  FUN_1457a84d8(param_1 + 0x150);
  *(undefined4 *)(param_1 + 0x148) = 0;
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FUN_1400020a8();
  }
  FUN_140d9ce6e(param_1 + 0x100);
  *(undefined4 *)(param_1 + 0xf8) = 0;
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FUN_1400020a8();
  }
  FUN_1457a850e(param_1 + 0xb0);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  FUN_140d9cf22(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_140d9cf22(param_1 + 0x10);
  return;
}



// FUNCTION 1457a84a2 FUN_1457a84a2 body=53 status=ok
// SIG undefined FUN_1457a84a2(void)

void FUN_1457a84a2(longlong *param_1)

{
  FUN_1457a8544();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457a84d8 FUN_1457a84d8 body=53 status=ok
// SIG undefined FUN_1457a84d8(void)

void FUN_1457a84d8(longlong *param_1)

{
  FUN_1457a85f8();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457a850e FUN_1457a850e body=53 status=ok
// SIG undefined FUN_1457a850e(void)

void FUN_1457a850e(longlong *param_1)

{
  FUN_1457a859e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457a8544 FUN_1457a8544 body=90 status=ok
// SIG undefined FUN_1457a8544(void)

void FUN_1457a8544(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14472eb64(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1457a859e FUN_1457a859e body=90 status=ok
// SIG undefined FUN_1457a859e(void)

void FUN_1457a859e(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14074f60a(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1457a85f8 FUN_1457a85f8 body=346 status=ok
// SIG undefined FUN_1457a85f8(void)

void FUN_1457a85f8(longlong *param_1)

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
      FUN_146cb7dc8(*local_68 + (longlong)iStack_4c * 0x170 + 8);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_145c7d096(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457a8754 FUN_1457a8754 body=377 status=ok
// SIG undefined FUN_1457a8754(void)

void FUN_1457a8754(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
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
      if (*(longlong *)(*local_70 + 8 + (longlong)iStack_54 * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar3 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar2 = 0x80;
    if (0x80 < (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar2;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457a88d0 FUN_1457a88d0 body=29 status=ok
// SIG undefined FUN_1457a88d0(void)

undefined8 FUN_1457a88d0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457a88ee FUN_1457a88ee body=53 status=ok
// SIG undefined FUN_1457a88ee(void)

void FUN_1457a88ee(longlong *param_1)

{
  FUN_1457a8cec();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457a8924 FUN_1457a8924 body=75 status=ok
// SIG undefined FUN_1457a8924(void)

void FUN_1457a8924(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FUN_1400020a8();
  }
  FUN_1457a8970(param_1 + 0xf0);
  FUN_1457a89aa(param_1 + 0xb0);
  FUN_1457a89e4(param_1 + 0x70);
  FUN_1457a8a1e(param_1 + 0x30);
  return;
}



// FUNCTION 1457a8970 FUN_1457a8970 body=57 status=ok
// SIG undefined FUN_1457a8970(void)

void FUN_1457a8970(longlong *param_1)

{
  FUN_1457a8a58(param_1 + 4);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457a89aa FUN_1457a89aa body=57 status=ok
// SIG undefined FUN_1457a89aa(void)

void FUN_1457a89aa(longlong *param_1)

{
  FUN_1457a8ae2(param_1 + 4);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457a89e4 FUN_1457a89e4 body=57 status=ok
// SIG undefined FUN_1457a89e4(void)

void FUN_1457a89e4(longlong *param_1)

{
  FUN_1457a8b6c(param_1 + 4);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457a8a1e FUN_1457a8a1e body=57 status=ok
// SIG undefined FUN_1457a8a1e(void)

void FUN_1457a8a1e(longlong *param_1)

{
  FUN_1457a8bf6(param_1 + 4);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457a8a58 FUN_1457a8a58 body=99 status=ok
// SIG undefined FUN_1457a8a58(void)

void FUN_1457a8a58(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *param_1;
  if ((longlong)(int)param_1[1] == 0) {
    iVar1 = 0;
  }
  else {
    lVar2 = (longlong)(int)param_1[1] << 5;
    do {
      FUN_1457a8c80(lVar3);
      lVar3 = lVar3 + 0x20;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
    iVar1 = (int)param_1[1];
    lVar3 = *param_1;
  }
  *(int *)(param_1 + 3) = (int)param_1[2] * iVar1;
  FUN_1457a8abb(lVar3);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1457a8abb FUN_1457a8abb body=38 status=ok
// SIG undefined FUN_1457a8abb(void)

void FUN_1457a8abb(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1400020a8(*param_1);
    param_1 = param_1 + 4;
  }
  return;
}



// FUNCTION 1457a8ae2 FUN_1457a8ae2 body=99 status=ok
// SIG undefined FUN_1457a8ae2(void)

void FUN_1457a8ae2(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *param_1;
  if ((longlong)(int)param_1[1] == 0) {
    iVar1 = 0;
  }
  else {
    lVar2 = (longlong)(int)param_1[1] << 5;
    do {
      FUN_140d9e1c4(lVar3);
      lVar3 = lVar3 + 0x20;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
    iVar1 = (int)param_1[1];
    lVar3 = *param_1;
  }
  *(int *)(param_1 + 3) = (int)param_1[2] * iVar1;
  FUN_1457a8b45(lVar3);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1457a8b45 FUN_1457a8b45 body=38 status=ok
// SIG undefined FUN_1457a8b45(void)

void FUN_1457a8b45(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1400020a8(*param_1);
    param_1 = param_1 + 4;
  }
  return;
}



// FUNCTION 1457a8b6c FUN_1457a8b6c body=99 status=ok
// SIG undefined FUN_1457a8b6c(void)

void FUN_1457a8b6c(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *param_1;
  if ((longlong)(int)param_1[1] == 0) {
    iVar1 = 0;
  }
  else {
    lVar2 = (longlong)(int)param_1[1] << 5;
    do {
      FUN_140d9e238(lVar3);
      lVar3 = lVar3 + 0x20;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
    iVar1 = (int)param_1[1];
    lVar3 = *param_1;
  }
  *(int *)(param_1 + 3) = (int)param_1[2] * iVar1;
  FUN_1457a8bcf(lVar3);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1457a8bcf FUN_1457a8bcf body=38 status=ok
// SIG undefined FUN_1457a8bcf(void)

void FUN_1457a8bcf(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1400020a8(*param_1);
    param_1 = param_1 + 4;
  }
  return;
}



// FUNCTION 1457a8bf6 FUN_1457a8bf6 body=99 status=ok
// SIG undefined FUN_1457a8bf6(void)

void FUN_1457a8bf6(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *param_1;
  if ((longlong)(int)param_1[1] == 0) {
    iVar1 = 0;
  }
  else {
    lVar2 = (longlong)(int)param_1[1] << 5;
    do {
      FUN_140d9e15a(lVar3);
      lVar3 = lVar3 + 0x20;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
    iVar1 = (int)param_1[1];
    lVar3 = *param_1;
  }
  *(int *)(param_1 + 3) = (int)param_1[2] * iVar1;
  FUN_1457a8c59(lVar3);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1457a8c59 FUN_1457a8c59 body=38 status=ok
// SIG undefined FUN_1457a8c59(void)

void FUN_1457a8c59(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1400020a8(*param_1);
    param_1 = param_1 + 4;
  }
  return;
}



// FUNCTION 1457a8c80 FUN_1457a8c80 body=108 status=ok
// SIG undefined FUN_1457a8c80(void)

void FUN_1457a8c80(longlong *param_1)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar2 = (int)param_1[3];
  if (0 < iVar2) {
    lVar3 = 0;
    lVar5 = 0;
    do {
      if ((*(byte *)(*param_1 + 0x1c + lVar3) & 1) != 0) {
        lVar4 = *param_1 + lVar3;
        FUN_140d9d7c2(lVar4);
        pbVar1 = (byte *)(lVar4 + 0x1c);
        *pbVar1 = *pbVar1 & 0xfe;
        iVar2 = (int)param_1[3];
      }
      lVar5 = lVar5 + 1;
      lVar3 = lVar3 + 0x20;
    } while (lVar5 < iVar2);
  }
  param_1[1] = *param_1;
  *(int *)((longlong)param_1 + 0x14) = (int)param_1[2];
  param_1[3] = -0x100000000;
  return;
}



// FUNCTION 1457a8cec FUN_1457a8cec body=351 status=ok
// SIG undefined FUN_1457a8cec(void)

void FUN_1457a8cec(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
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
      puVar2 = *(undefined8 **)(*local_68 + 8 + (longlong)iStack_4c * 0x18);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
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
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457a8e4c FUN_1457a8e4c body=38 status=ok
// SIG undefined FUN_1457a8e4c(void)

undefined8 FUN_1457a8e4c(undefined8 param_1,int param_2)

{
  FUN_1457a8e72();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457a8e72 FUN_1457a8e72 body=128 status=ok
// SIG undefined FUN_1457a8e72(void)

void FUN_1457a8e72(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_149f5af60;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_149f48bf0;
  if (0 < *(int *)(param_1 + 2)) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_1[1] + lVar1 * 8) = 0;
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(param_1 + 2));
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1457a8ef2 FUN_1457a8ef2 body=146 status=ok
// SIG undefined FUN_1457a8ef2(void)

void FUN_1457a8ef2(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  longlong lVar4;
  
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



// FUNCTION 1457a8f84 FUN_1457a8f84 body=127 status=ok
// SIG undefined FUN_1457a8f84(void)

void FUN_1457a8f84(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x208);
  if (param_2 <= (int)uVar1) {
    if (uVar1 < 0x11) {
      uVar4 = 0x10;
    }
    else {
      lVar3 = (longlong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0x20c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 5,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 5)) {
        uVar4 = uVar2 >> 5 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x20c) = (int)uVar4;
    FUN_1457a9004(param_1,param_2,uVar4,0x20);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1457a9004 FUN_1457a9004 body=142 status=ok
// SIG undefined FUN_1457a9004(void)

void FUN_1457a9004(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x200);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 5);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x200,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x200),param_1,(longlong)param_2 << 5);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x200,param_2,param_3,param_4);
  return;
}



// FUNCTION 1457a9092 FUN_1457a9092 body=40 status=ok
// SIG undefined FUN_1457a9092(void)

undefined8 FUN_1457a9092(undefined8 param_1,int param_2)

{
  FUN_1457a90ba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457a90ba FUN_1457a90ba body=1198 status=ok
// SIG undefined FUN_1457a90ba(void)

void FUN_1457a90ba(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b6ab920;
  param_1[0x72] = &PTR_FUN_14b6abfa0;
  param_1[0x73] = &PTR_FUN_14b6abfc0;
  param_1[0x74] = &PTR_FUN_14b6abff0;
  param_1[0x75] = &PTR_FUN_14b6ac000;
  param_1[0x76] = &PTR_FUN_14b6ac070;
  param_1[0x77] = &PTR_FUN_14b6ac0a0;
  param_1[0x78] = &PTR_FUN_14b6ac0d0;
  param_1[0x7f] = &PTR_FUN_14b6ac180;
  param_1[0x80] = &PTR_FUN_14b6ac1f0;
  param_1[0x81] = &PTR_FUN_14b6ac260;
  param_1[0x82] = &PTR_FUN_14b6ac290;
  param_1[0x83] = &PTR_FUN_14b6ac2d0;
  param_1[0x84] = &PTR_FUN_14b6ac370;
  param_1[0x85] = &PTR_FUN_14b6ac390;
  param_1[0x89] = &PTR_FUN_14b6ac3b0;
  param_1[0x8a] = &PTR_FUN_14b6ac470;
  param_1[0x8b] = &PTR_FUN_14b6ac4f0;
  param_1[0x8c] = &PTR_FUN_14b6ac540;
  param_1[0x8d] = &PTR_FUN_14b6ac580;
  param_1[0x8e] = &PTR_FUN_14b6ac5a0;
  param_1[0x8f] = &PTR_FUN_14b6ac5c0;
  param_1[0x90] = &PTR_FUN_14b6ac5e0;
  param_1[0x91] = &PTR_FUN_14b6ac600;
  param_1[0x92] = &PTR_FUN_14b6ac620;
  param_1[0x93] = &PTR_FUN_14b6ac640;
  param_1[0x94] = &PTR_FUN_14b6ac660;
  param_1[0x95] = &PTR_FUN_14b6ac680;
  param_1[0x96] = &PTR_FUN_14b6ac6a0;
  param_1[0x34b] = &PTR_FUN_14b6ac6c0;
  param_1[0x352] = &PTR_FUN_14b6ac6d0;
  param_1[0x353] = &PTR_FUN_14b6ac710;
  param_1[0x354] = &PTR_FUN_14b6ac750;
  param_1[0x355] = &PTR_FUN_14b6ac7a0;
  param_1[0x356] = &PTR_FUN_14b6ac7d0;
  param_1[0x359] = &PTR_FUN_14b6ac810;
  param_1[0x35a] = &PTR_FUN_14b6ac820;
  param_1[0x35b] = &PTR_FUN_14b6ac850;
  param_1[0x35c] = &PTR_FUN_14b6ac8f0;
  param_1[0x4bf] = &PTR_FUN_14b6ac910;
  param_1[0x4c0] = &PTR_FUN_14b6ac940;
  param_1[0x4c1] = &PTR_FUN_14b6ac960;
  param_1[0x4c2] = &PTR_FUN_14b6ac990;
  plVar3 = (longlong *)param_1[0x586];
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
  FUN_1449db362(param_1 + 0x580);
  FUN_144a7b030(param_1 + 0x57d);
  FUN_144a7b030(param_1 + 0x57a);
  FUN_140368b56(param_1 + 0x54c);
  FUN_140da32a2(param_1 + 0x544);
  if (param_1[0x542] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x540] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x53f) = 0;
  if (param_1[0x53e] != 0) {
    FUN_1400020a8();
  }
  FUN_1457a95a0(param_1 + 0x536);
  *(undefined4 *)(param_1 + 0x535) = 0;
  if (param_1[0x534] != 0) {
    FUN_1400020a8();
  }
  FUN_1457a95a0(param_1 + 0x52c);
  *(undefined4 *)(param_1 + 0x52b) = 0;
  if (param_1[0x52a] != 0) {
    FUN_1400020a8();
  }
  FUN_1457a9568(param_1 + 0x522);
  *(undefined4 *)(param_1 + 0x521) = 0;
  if (param_1[0x520] != 0) {
    FUN_1400020a8();
  }
  FUN_1457a9568(param_1 + 0x518);
  *(undefined4 *)(param_1 + 0x517) = 0;
  if (param_1[0x516] != 0) {
    FUN_1400020a8();
  }
  FUN_1457a9568(param_1 + 0x50e);
  if (param_1[0x50c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x50a] != 0) {
    FUN_1400020a8();
  }
  FUN_140ef6a7a(param_1[0x508],*(undefined4 *)(param_1 + 0x509));
  if (param_1[0x508] != 0) {
    FUN_1400020a8();
  }
  param_1[0x4c4] = &PTR_FUN_14b6aed70;
  if (param_1[0x4cc] != 0) {
    FUN_140872868(param_1 + 0x4c4);
  }
  FUN_140639928(param_1 + 0x4c4);
  FUN_140639172(param_1);
  return;
}



// FUNCTION 1457a9568 FUN_1457a9568 body=55 status=ok
// SIG undefined FUN_1457a9568(void)

void FUN_1457a9568(longlong *param_1)

{
  FUN_1457a95d8(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457a95a0 FUN_1457a95a0 body=55 status=ok
// SIG undefined FUN_1457a95a0(void)

void FUN_1457a95a0(longlong *param_1)

{
  FUN_1457a9756(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457a95d8 FUN_1457a95d8 body=381 status=ok
// SIG undefined FUN_1457a95d8(void)

void FUN_1457a95d8(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
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
      FUN_148be5e2c(*local_70 + (longlong)iStack_54 * 0x38 + 8);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_144748838(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar3 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar2 = 0x80;
    if (0x80 < (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar2;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457a9756 FUN_1457a9756 body=408 status=ok
// SIG undefined FUN_1457a9756(void)

void FUN_1457a9756(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_1 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  local_50 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_58);
  }
  local_78 = local_58;
  local_70 = local_50;
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_80 = param_1;
  if (iStack_44 < (int)local_50[3]) {
    do {
      lVar2 = *local_80;
      lVar5 = (longlong)iStack_64 * 0x20;
      FUN_140368c45(*(undefined8 *)(lVar2 + 8 + lVar5),*(undefined4 *)(lVar2 + 0x10 + lVar5));
      if (*(longlong *)(lVar2 + 8 + lVar5) != 0) {
        FUN_1400020a8();
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar4 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar4) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar3 = 0x80;
    if (0x80 < (int)uVar4) {
      uVar3 = uVar4;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar3;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457a98f0 FUN_1457a98f0 body=267 status=ok
// SIG undefined FUN_1457a98f0(void)

void FUN_1457a98f0(longlong param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_128 [40];
  undefined1 local_100 [192];
  undefined1 *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_140da3334();
  if ((*(longlong *)(param_1 + 0x18a0) != 0) || (*(longlong *)(param_1 + 0x18a8) != 0)) {
    local_40 = (undefined1 *)0x0;
    local_38 = 0x1800000000;
    if (param_1 != 0) {
      FUN_1407fcdae(param_1,local_100,0);
      lVar3 = (longlong)(int)local_38;
      puVar2 = local_100;
      if (local_40 != (undefined1 *)0x0) {
        puVar2 = local_40;
      }
      if (lVar3 != 0) {
        lVar4 = 0;
        do {
          uVar1 = *(undefined8 *)(puVar2 + lVar4);
          if (*(longlong *)(param_1 + 0x18a0) != 0) {
            FUN_1409d8d1a(*(longlong *)(param_1 + 0x18a0),uVar1);
          }
          if (*(longlong *)(param_1 + 0x18a8) != 0) {
            FUN_1409d939c(*(longlong *)(param_1 + 0x18a8),uVar1);
          }
          lVar4 = lVar4 + 8;
        } while (lVar3 * 8 != lVar4);
      }
      if (local_40 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457a99fc FUN_1457a99fc body=146 status=ok
// SIG undefined FUN_1457a99fc(void)

void FUN_1457a99fc(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xb0,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xb0)) {
      uVar5 = uVar4 / 0xb0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xb0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1457a9a90 FUN_1457a9a90 body=146 status=ok
// SIG undefined FUN_1457a9a90(void)

void FUN_1457a9a90(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0x228,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x228)) {
      uVar5 = uVar4 / 0x228 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x228,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1457a9b24 FUN_1457a9b24 body=90 status=ok
// SIG undefined FUN_1457a9b24(void)

void FUN_1457a9b24(longlong *param_1)

{
  if (param_1[3] != 0) {
    FUN_14480f766(*param_1 + 0x88);
  }
  if (param_1[4] != 0) {
    FUN_14480f766(*param_1 + 0x10);
  }
  if (param_1[5] != 0) {
    FUN_1411dc7ca(*(longlong *)(*param_1 + 0x38) + 0x70);
    param_1[5] = 0;
  }
  return;
}



// FUNCTION 1457a9b7e FUN_1457a9b7e body=138 status=ok
// SIG undefined FUN_1457a9b7e(void)

code * FUN_1457a9b7e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LocalToWorldNoScaling";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x9000000078;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14746eaf0;
}



// FUNCTION 1457a9c08 FUN_1457a9c08 body=138 status=ok
// SIG undefined FUN_1457a9c08(void)

code * FUN_1457a9c08(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SubsectionOffsetParams";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7000000076;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14746eb7a;
}



// FUNCTION 1457a9c92 FUN_1457a9c92 body=138 status=ok
// SIG undefined FUN_1457a9c92(void)

code * FUN_1457a9c92(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"XYOffsetmapTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xf00000007d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14746e952;
}



// FUNCTION 1457a9d1c FUN_1457a9d1c body=146 status=ok
// SIG undefined FUN_1457a9d1c(void)

void FUN_1457a9d1c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0xd8,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xd8)) {
      uVar5 = uVar4 / 0xd8 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xd8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1457a9dae FUN_1457a9dae body=132 status=ok
// SIG undefined FUN_1457a9dae(void)

void FUN_1457a9dae(longlong param_1,int param_2)

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



// FUNCTION 1457a9e34 FUN_1457a9e34 body=126 status=ok
// SIG undefined FUN_1457a9e34(void)

longlong * FUN_1457a9e34(longlong *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  uVar1 = FUN_14482ca40();
  uVar2 = FUN_144a797b2();
  FUN_14123d74c(uVar2,param_1,param_3,param_2,uVar1 | param_4 | 0x90000000);
  lVar3 = (longlong)(int)param_1[2];
  do {
    lVar3 = lVar3 + 1;
    *(int *)(param_1 + 2) = (int)lVar3;
    if ((int)param_1[1] <= lVar3) {
      return param_1;
    }
  } while (*(longlong *)(*param_1 + lVar3 * 8) == 0);
  return param_1;
}



// FUNCTION 1457a9ebe FUN_1457a9ebe body=9 status=ok
// SIG undefined FUN_1457a9ebe(void)

void FUN_1457a9ebe(longlong param_1)

{
  FUN_14485c47a(param_1 + 0x20);
  return;
}



// FUNCTION 1457a9ec8 FUN_1457a9ec8 body=46 status=ok
// SIG undefined FUN_1457a9ec8(void)

void FUN_1457a9ec8(longlong *param_1,longlong param_2)

{
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *param_1 = param_2;
  return;
}



// FUNCTION 1457a9ef6 FUN_1457a9ef6 body=78 status=ok
// SIG undefined FUN_1457a9ef6(void)

undefined8 * FUN_1457a9ef6(undefined8 *param_1)

{
  FUN_1409e1656();
  *param_1 = &PTR_FUN_14b991a50;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[0x80] = 0;
  *(undefined4 *)(param_1 + 0x81) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x40c) = 8;
  *(undefined4 *)((longlong)param_1 + 0x414) = 0;
  return param_1;
}



// FUNCTION 1457a9f44 FUN_1457a9f44 body=254 status=ok
// SIG undefined FUN_1457a9f44(void)

undefined8
FUN_1457a9f44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b3ecf50;
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
  *local_48 = &PTR_FUN_14b9946e0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1412a3750(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457aa044 FUN_1457aa044 body=210 status=ok
// SIG undefined FUN_1457aa044(void)

undefined8 * FUN_1457aa044(undefined8 *param_1)

{
  FUN_1457aa6d4();
  *param_1 = &PTR_FUN_14b6d93c0;
  param_1[0x72] = &PTR_FUN_14b6da4d0;
  param_1[0x85] = &PTR_LAB_14b6da530;
  param_1[299] = &PTR_FUN_14b6da550;
  param_1[300] = &PTR_FUN_14b6da570;
  param_1[0x132] = &PTR_FUN_14b6da660;
  param_1[0x133] = &PTR_FUN_14b6da6b0;
  param_1[0x134] = &PTR_FUN_14b6da6e0;
  param_1[0x135] = &PTR_FUN_14b6da710;
  param_1[0x136] = &PTR_FUN_14b6da730;
  param_1[0x1ae] = 0;
  param_1[0x1af] = 0;
  param_1[0x1b0] = 0;
  param_1[0x1b1] = 0;
  param_1[0x1b2] = 2;
  *(undefined4 *)(param_1 + 0x1b3) = 0;
  param_1[0x1b4] = 0;
  return param_1;
}



// FUNCTION 1457aa116 FUN_1457aa116 body=162 status=ok
// SIG undefined FUN_1457aa116(void)

void FUN_1457aa116(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1457aa155;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1457aa155;
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
LAB_1457aa155:
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
                    /* WARNING: Could not recover jumptable at 0x0001457aa1b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1457aa1b8 FUN_1457aa1b8 body=287 status=ok
// SIG undefined FUN_1457aa1b8(void)

void FUN_1457aa1b8(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 4) = 2;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0x200000000;
  param_1[0x18] = 0;
  param_1[0x19] = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x77) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7f) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x1c] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x131) = 0;
  *(undefined8 *)((longlong)param_1 + 0x139) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = param_1 + 0x30;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  param_1[0x3e] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x3c] = DAT_14c8464e0;
  param_1[0x3d] = uVar1;
  uVar1 = DAT_14c8464e8;
  param_1[0x3f] = DAT_14c8464e0;
  param_1[0x40] = uVar1;
  param_1[0x41] = DAT_14c8464f0;
  param_1[0x42] = 0;
  *(undefined1 *)(param_1 + 0x43) = 0;
  return;
}



// FUNCTION 1457aa2d8 FUN_1457aa2d8 body=242 status=ok
// SIG undefined FUN_1457aa2d8(void)

undefined8 * FUN_1457aa2d8(undefined8 *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 uVar3;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14b96af90;
  puVar1 = param_1 + 3;
  param_1[3] = 0;
  FUN_14485c47a(puVar1);
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  cVar2 = FUN_144729dda(puVar1);
  if (cVar2 != '\0') {
    uVar3 = FUN_14479d2ce(puVar1);
    uVar3 = FUN_1403ca102(uVar3);
    FUN_14485c47a(param_1 + 4,uVar3);
  }
  FUN_1457aa3ca(param_1);
  FUN_1457aa5c0(param_1);
  return param_1;
}



// FUNCTION 1457aa3ca FUN_1457aa3ca body=270 status=ok
// SIG undefined FUN_1457aa3ca(void)

void FUN_1457aa3ca(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0xd8) == 0) {
    uVar3 = FUN_14479d2ce(param_1 + 0x18);
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,3,0x10);
    puVar1 = local_30;
    local_28 = 3;
    *local_30 = &PTR_LAB_14b507390;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_30[2] = lVar4;
    *local_30 = &PTR_FUN_14b96c3a0;
    local_30[3] = 0;
    FUN_14485c47a(local_30 + 3,uVar3);
    puVar1[4] = uVar3;
    FUN_1457aa4da(&DAT_14cbce5f8,&local_38,&local_30);
    FUN_1449db362(&local_30);
    *(undefined8 *)(param_1 + 0xd8) = local_38;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457aa4da FUN_1457aa4da body=216 status=ok
// SIG undefined FUN_1457aa4da(void)

undefined8 * FUN_1457aa4da(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
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



// FUNCTION 1457aa5c0 FUN_1457aa5c0 body=274 status=ok
// SIG undefined FUN_1457aa5c0(void)

void FUN_1457aa5c0(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar3 != 0) {
    uVar4 = FUN_1447210f0(lVar3);
    lVar5 = FUN_14094c996(uVar4);
    if (lVar5 != 0) {
      local_30 = (undefined8 *)0x0;
      local_28 = 0;
      FUN_1446efa72(&local_30,0,3,0x10);
      puVar1 = local_30;
      local_28 = 3;
      *local_30 = &PTR_LAB_149e35290;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar2 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar2 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar2;
      local_30[2] = lVar6;
      *local_30 = &PTR_FUN_14b96c410;
      local_30[3] = 0;
      FUN_14485c47a(local_30 + 3,lVar3);
      puVar1[4] = lVar3;
      FUN_140feff30(lVar5 + 0x10,local_38,&local_30);
      FUN_1449db362(&local_30);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457aa6d4 FUN_1457aa6d4 body=862 status=ok
// SIG undefined FUN_1457aa6d4(void)

undefined8 * FUN_1457aa6d4(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140daf984();
  *(undefined1 *)(param_1 + 0x12d) = 0;
  param_1[0x130] = 0;
  param_1[0x131] = 0x200000000;
  param_1[0x137] = 0;
  *param_1 = &PTR_FUN_14b1d9c10;
  param_1[0x72] = &PTR_FUN_14b1dacf0;
  param_1[0x85] = &PTR_LAB_14b1dad50;
  param_1[299] = &PTR_FUN_14b1dad70;
  param_1[300] = &PTR_FUN_14b1dad90;
  param_1[0x132] = &PTR_FUN_14b1dae80;
  param_1[0x133] = &PTR_FUN_14b1daed0;
  param_1[0x134] = &PTR_FUN_14b1daf00;
  param_1[0x135] = &PTR_FUN_14b1daf30;
  param_1[0x136] = &PTR_FUN_14b1daf50;
  param_1[0x138] = 0;
  param_1[0x139] = 0;
  *(undefined4 *)(param_1 + 0x13a) = 2;
  *(undefined8 *)((longlong)param_1 + 0x9d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9e4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x9ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9fc) = 0x200000000;
  param_1[0x147] = 0;
  param_1[0x148] = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0xa04) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa11) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa19) = 0;
  *(undefined1 *)(param_1 + 0x149) = 0;
  param_1[0x14c] = 0;
  param_1[0x14d] = 0x200000000;
  param_1[0x152] = 0;
  *(undefined1 *)((longlong)param_1 + 0xa99) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa79) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa81) = 0;
  param_1[0x14e] = 0;
  param_1[0x14f] = 0;
  param_1[0x154] = 0;
  param_1[0x155] = 0;
  *(undefined4 *)(param_1 + 0x156) = 2;
  *(undefined4 *)(param_1 + 0x15f) = 0;
  *(undefined4 *)((longlong)param_1 + 0xac4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xab4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xabc) = 0;
  param_1[0x171] = 0;
  param_1[0x172] = 0x400000000;
  param_1[0x160] = 0;
  param_1[0x161] = 0;
  param_1[0x162] = 0;
  param_1[0x163] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb24) = 0;
  param_1[0x168] = 0;
  param_1[0x166] = 0;
  param_1[0x167] = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc9) = 0;
  param_1[0x177] = 0;
  param_1[0x178] = 0;
  param_1[0x175] = 0;
  param_1[0x176] = 0;
  param_1[0x173] = 0;
  param_1[0x174] = 0;
  param_1[0x17d] = 0;
  param_1[0x17e] = 0;
  param_1[0x17b] = 0;
  param_1[0x17c] = 0;
  *(undefined2 *)(param_1 + 0x17f) = 0xffff;
  param_1[0x180] = 0;
  param_1[0x181] = 0;
  param_1[0x182] = 0;
  param_1[0x183] = 0;
  param_1[0x184] = 2;
  *(undefined1 *)(param_1 + 0x185) = 0;
  param_1[0x18c] = 0;
  *(undefined4 *)(param_1 + 0x18d) = 0;
  param_1[0x188] = 0;
  param_1[0x189] = 0;
  param_1[0x186] = 0;
  param_1[0x187] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xc74) = 0;
  param_1[400] = 0;
  *(undefined4 *)(param_1 + 0x191) = 0;
  param_1[0x196] = 0;
  *(undefined4 *)(param_1 + 0x197) = 0;
  param_1[0x192] = 0;
  param_1[0x193] = 0;
  *(undefined8 *)((longlong)param_1 + 0xcbc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xcc4) = 0;
  param_1[0x19a] = 0;
  *(undefined4 *)(param_1 + 0x19b) = 0;
  param_1[0x19c] = 0;
  param_1[0x19d] = 0;
  *(undefined4 *)(param_1 + 0x19e) = 2;
  *(undefined4 *)((longlong)param_1 + 0xd04) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcfc) = 0;
  *(undefined4 *)(param_1 + 0x1a1) = 2;
  *(undefined4 *)((longlong)param_1 + 0xd1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd14) = 0;
  *(undefined4 *)(param_1 + 0x1a4) = 2;
  *(undefined4 *)((longlong)param_1 + 0xd34) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd24) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd2c) = 0;
  *(undefined4 *)(param_1 + 0x1a7) = 2;
  *(undefined4 *)((longlong)param_1 + 0xd4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd44) = 0;
  param_1[0x1aa] = 2;
  *(undefined1 *)(param_1 + 0x1ab) = 0;
  param_1[0x1ac] = 0;
  *(undefined2 *)(param_1 + 0x1ad) = 1;
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    FUN_1446f470e(&local_28,L"ScreenParticleManagerComponent",1);
    uVar1 = FUN_1410d9348();
    local_30 = 1;
    local_38 = 1;
    lVar2 = FUN_14048696c(param_1,local_28,uVar1,uVar1);
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
    param_1[0x14e] = lVar2;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457aaa34 FUN_1457aaa34 body=79 status=ok
// SIG undefined FUN_1457aaa34(void)

void FUN_1457aaa34(undefined8 param_1)

{
  undefined8 *puVar1;
  
  FUN_1457aaa84();
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9cd1a0;
  puVar1[2] = &LAB_148eb0778;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"GlyphClicked",puVar1);
  return;
}



// FUNCTION 1457aaa84 FUN_1457aaa84 body=187 status=ok
// SIG undefined FUN_1457aaa84(void)

void FUN_1457aaa84(undefined8 param_1)

{
  undefined8 *puVar1;
  
  FUN_140db10ee();
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b478fe0;
  puVar1[2] = &LAB_145762d00;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"EntryClicked",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b479000;
  puVar1[2] = &LAB_145762d0e;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"InputFocusChanged",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b479000;
  puVar1[2] = &LAB_14656ed76;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"InputSelectionChanged",puVar1);
  return;
}



// FUNCTION 1457aab40 FUN_1457aab40 body=63 status=ok
// SIG undefined FUN_1457aab40(void)

undefined8 * FUN_1457aab40(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_144a6ccf8(param_1 + 4);
  FUN_144a6ccf8(param_1 + 7);
  FUN_144a6ccf8(param_1 + 10);
  FUN_144a6ccf8(param_1 + 0xd);
  return param_1;
}



// FUNCTION 1457aab88 FUN_1457aab88 body=117 status=ok
// SIG undefined FUN_1457aab88(void)

undefined8 * FUN_1457aab88(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong lVar2;
  
  *param_1 = *param_3;
  param_1[1] = *param_2;
  lVar2 = param_2[1];
  param_1[2] = lVar2;
  LOCK();
  piVar1 = (int *)(lVar2 + 8);
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  FUN_140dba91a(param_1 + 1);
  param_1[3] = param_1;
  FUN_140dba8c2(param_1 + 1);
  param_1[4] = param_2[2];
  lVar2 = param_2[3];
  param_1[5] = lVar2;
  LOCK();
  piVar1 = (int *)(lVar2 + 8);
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  FUN_140dba91a(param_1 + 4);
  param_1[6] = param_1;
  FUN_140dba8c2(param_1 + 4);
  return param_1;
}



// FUNCTION 1457aabfe FUN_1457aabfe body=87 status=ok
// SIG undefined FUN_1457aabfe(void)

void FUN_1457aabfe(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_1457aac56(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0xb8) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457aac56 FUN_1457aac56 body=165 status=ok
// SIG undefined FUN_1457aac56(void)

void FUN_1457aac56(undefined8 *param_1,undefined2 *param_2)

{
  if (*(char *)(param_2 + 1) == '\x01') {
    FUN_140dba9e6(*param_1,*param_2);
  }
  FUN_140dba9e6(*param_1,param_2[0xc]);
  if (*(char *)(param_2 + 0x19) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x18]);
  }
  if (*(char *)(param_2 + 0x25) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x24]);
  }
  if (*(char *)(param_2 + 0x31) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x30]);
  }
  if (*(char *)(param_2 + 0x3d) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x3c]);
  }
  FUN_140dba9e6(*param_1,param_2[0x48]);
  if (*(char *)(param_2 + 0x55) != '\x01') {
    return;
  }
  FUN_140dba9e6(*param_1,param_2[0x54]);
  return;
}



// FUNCTION 1457aacfc FUN_1457aacfc body=128 status=ok
// SIG undefined FUN_1457aacfc(void)

undefined8 FUN_1457aacfc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9491f8) {
    FUN_144b3d300(&DAT_14c9491f8);
    if (DAT_14c9491f8 == -1) {
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      DAT_14c9491f0 = FUN_141473ad5(DAT_14c892c18);
      _Init_thread_footer(&DAT_14c9491f8);
    }
  }
  return DAT_14c9491f0;
}



// FUNCTION 1457aad7c FUN_1457aad7c body=2672 status=ok
// SIG undefined FUN_1457aad7c(void)

void FUN_1457aad7c(longlong param_1,longlong *param_2)

{
  int *piVar1;
  uint *puVar2;
  char cVar3;
  ushort uVar4;
  byte bVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong *plVar17;
  undefined1 auStack_2b8 [36];
  uint local_294;
  longlong local_290;
  longlong local_288;
  ushort local_27a;
  longlong local_278;
  uint local_270;
  byte local_265;
  undefined4 local_264;
  longlong local_260;
  byte local_251;
  longlong local_250;
  uint local_248;
  longlong local_240;
  ushort local_238;
  longlong local_230;
  ushort local_228;
  undefined1 local_220 [32];
  undefined8 local_200;
  undefined **local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined4 local_1a8;
  longlong local_1a0;
  longlong *local_198;
  undefined1 local_188 [32];
  undefined8 local_168;
  undefined1 local_160 [32];
  undefined8 local_140;
  undefined8 local_138;
  undefined2 local_130;
  undefined4 local_12e;
  undefined1 local_12a;
  ushort local_128;
  undefined1 local_126;
  undefined4 local_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  undefined1 local_110;
  undefined2 local_108;
  undefined8 local_100;
  undefined1 local_f8;
  uint local_f0;
  ushort local_ec;
  undefined2 local_ea;
  undefined1 local_e8;
  undefined1 local_e0 [32];
  undefined8 local_c0;
  undefined **local_b8;
  undefined2 local_b0;
  uint local_ae;
  undefined1 local_aa;
  ushort local_a8;
  undefined1 local_a6;
  undefined8 local_98;
  undefined1 local_90 [32];
  undefined8 local_70;
  undefined1 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  uVar4 = *(ushort *)(param_2[1] + 0x12);
  lVar14 = (ulonglong)*(ushort *)(param_2[1] + 0x10) * 4 +
           *(longlong *)(*(longlong *)(param_1 + 0x1b8) + 0x10);
  FUN_140dbd93a(param_1,&local_240,param_2);
  lVar7 = *param_2;
  uVar9 = (uint)uVar4;
  if ((*(short *)(lVar7 + 0x48) != -1) && (local_240 == local_230)) {
    uVar8 = FUN_14479d2ce(lVar7 + 0x18);
    uStack_118 = 0x10000000000;
    local_250 = lVar14;
    local_248 = uVar9;
    FUN_14769bde6(param_2,*(longlong *)(param_1 + 0x28) + 0x28,&local_250,&local_138);
    FUN_140dbc1e0(*(longlong *)(param_1 + 0x28) + 0x28,*(undefined2 *)(*param_2 + 0x48),&local_138);
    uVar4 = *(ushort *)(*param_2 + 0x4c);
    FUN_147546104(uVar8,&local_251);
    uVar9 = *(uint *)(param_2 + 2);
    if ((*(byte *)(*param_2 + 0x5e) & 8) == 0) {
      if (*(int *)(param_1 + 0x118) != 0) {
        plVar17 = (longlong *)(param_1 + 0xd0);
        lVar7 = param_1 + 0x108;
        if (*(longlong *)(param_1 + 0x110) != 0) {
          lVar7 = *(longlong *)(param_1 + 0x110);
        }
        iVar11 = *(int *)(lVar7 + (longlong)(int)(*(int *)(param_1 + 0x118) - 1U & uVar9) * 4);
        do {
          iVar10 = iVar11;
          if (iVar10 == -1) goto LAB_1457ab7b7;
          lVar7 = *plVar17;
          iVar11 = *(int *)(lVar7 + 8 + (longlong)iVar10 * 0x10);
        } while (*(uint *)(lVar7 + (longlong)iVar10 * 0x10) != uVar9);
LAB_1457ab6ca:
        do {
          local_b0 = *(undefined2 *)(*(longlong *)(param_1 + 0x1b8) + 0x5a);
          local_aa = 1;
          local_a8 = local_238;
          local_a6 = 0;
          local_b8 = &PTR_FUN_14a4e0570;
          uStack_1d0 = 0;
          local_1b8 = 0;
          local_1c8 = 0;
          uStack_1c0 = 0;
          local_1e8 = 0;
          uStack_1e0 = 0;
          local_1f8 = (undefined **)0x0;
          uStack_1f0 = 0;
          local_1a8 = 0;
          local_1d8 = 0x10000000000;
          uStack_1b0 = 0x10000000000;
          local_ae = (uint)uVar4 << 0x10 | (uint)local_251;
          FUN_1457aba74(&local_b8,*(longlong *)(param_1 + 0x28) + 0x28,
                        *(undefined2 *)(lVar7 + 4 + (longlong)iVar10 * 0x10),&local_1f8);
          do {
            iVar10 = iVar11;
            if (iVar10 == -1) goto LAB_1457ab7b7;
            lVar7 = *plVar17;
            iVar11 = *(int *)(lVar7 + 8 + (longlong)iVar10 * 0x10);
          } while (*(uint *)(lVar7 + (longlong)iVar10 * 0x10) != uVar9);
        } while( true );
      }
    }
    else if (*(int *)(param_1 + 200) != 0) {
      plVar17 = (longlong *)(param_1 + 0x80);
      lVar7 = param_1 + 0xb8;
      if (*(longlong *)(param_1 + 0xc0) != 0) {
        lVar7 = *(longlong *)(param_1 + 0xc0);
      }
      iVar11 = *(int *)(lVar7 + (longlong)(int)(*(int *)(param_1 + 200) - 1U & uVar9) * 4);
      do {
        iVar10 = iVar11;
        if (iVar10 == -1) goto LAB_1457ab7b7;
        lVar7 = *plVar17;
        iVar11 = *(int *)(lVar7 + 8 + (longlong)iVar10 * 0x10);
      } while (*(uint *)(lVar7 + (longlong)iVar10 * 0x10) != uVar9);
      goto LAB_1457ab6ca;
    }
    goto LAB_1457ab7b7;
  }
  local_294 = uVar9;
  lVar7 = FUN_14479d2ce(lVar7 + 0x18);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  local_260 = local_240;
  if ((local_240 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_240);
  }
  uVar8 = FUN_14009ee5c(uVar8,&local_260);
  FUN_1457ab9aa(uVar8,&local_264);
  local_98 = 0x10000000000;
  local_70 = 0x10000000000;
  local_68 = 0;
  if (local_90 != (undefined1 *)(param_1 + 0x130)) {
    FUN_1400abb7c(local_90);
  }
  FUN_140dba9e6(local_90,*(undefined2 *)(param_2[1] + 0x16));
  FUN_140dba9e6(local_90,*(undefined2 *)(*(longlong *)(param_1 + 0x1b8) + 0x120));
  lVar12 = (longlong)*(int *)(param_2[1] + 0x20);
  if (lVar12 != 0) {
    local_288 = *(longlong *)(param_2[1] + 0x18);
    lVar13 = 0;
    do {
      local_290 = lVar13;
      FUN_140dba9e6(local_90,*(undefined2 *)(local_288 + lVar13));
      lVar13 = local_290 + 2;
    } while (lVar12 * 2 != lVar13);
  }
  if (lVar7 == 0) {
    FUN_14485c47a(*param_2 + 0x18,uVar8);
    *(undefined2 *)(*param_2 + 0x4c) = local_264._2_2_;
    local_c0 = 0x10000000000;
    FUN_140dba9e6(local_e0,*(undefined2 *)(param_2[1] + 0x16));
    if (0 < *(int *)(param_2[1] + 0x20)) {
      lVar7 = param_1 + 0x178;
      iVar11 = *(int *)(*param_2 + 0x50);
      iVar10 = (iVar11 - *(int *)(param_1 + 400)) + 1;
      if (0 < iVar10) {
        uVar6 = FUN_144a54ea4(lVar7,iVar10);
        FUN_1447c6044(lVar7,uVar6,iVar10,0);
        iVar11 = *(int *)(*param_2 + 0x50);
      }
      if (*(longlong *)(param_1 + 0x188) != 0) {
        lVar7 = *(longlong *)(param_1 + 0x188);
      }
      iVar10 = iVar11 + 0x1f;
      if (-1 < iVar11) {
        iVar10 = iVar11;
      }
      puVar2 = (uint *)(lVar7 + (longlong)(iVar10 >> 5) * 4);
      *puVar2 = *puVar2 | 1 << ((byte)iVar11 & 0x1f);
      lVar7 = (longlong)*(int *)(param_2[1] + 0x20);
      if (lVar7 != 0) {
        lVar12 = *(longlong *)(param_2[1] + 0x18);
        lVar13 = 0;
        do {
          FUN_140dba9e6(local_e0,*(undefined2 *)(lVar12 + lVar13));
          lVar13 = lVar13 + 2;
        } while (lVar7 * 2 != lVar13);
      }
    }
    if (local_294 != 0) {
      uVar15 = (ulonglong)local_294;
      uVar16 = 0;
      do {
        if ((*(uint *)(*param_2 + 0x3c + (uVar16 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar16 & 0x1f) & 1
            ) == 0) {
          FUN_140dba9e6(local_e0,*(undefined2 *)(lVar14 + uVar16 * 4));
        }
        uVar16 = uVar16 + 1;
      } while (uVar15 != uVar16);
    }
    FUN_140dba9e6(local_e0,*(undefined2 *)(param_2[1] + 0x14));
    lVar7 = *(longlong *)(param_1 + 0x1b8);
    local_108 = *(undefined2 *)(lVar7 + 0x4a);
    local_130 = *(undefined2 *)(lVar7 + 0x5c);
    lVar14 = *param_2;
    local_128 = *(ushort *)(lVar7 + 0x62);
    local_100 = *(undefined8 *)(lVar14 + 0x20);
    local_f0 = CONCAT12(*(byte *)(lVar14 + 0x5e),*(undefined2 *)(lVar7 + 0x10a)) & 0x1ffff;
    local_ea = *(undefined2 *)(lVar7 + 0x11a);
    local_12a = 1;
    local_12e = local_264;
    local_110 = 1;
    local_124 = *(undefined4 *)(lVar14 + 0x28);
    uStack_120 = *(undefined4 *)(lVar14 + 0x2c);
    uStack_11c = *(undefined4 *)(lVar14 + 0x30);
    uStack_118 = *(undefined8 *)(lVar14 + 0x34);
    local_f8 = 1;
    local_ec = local_238;
    local_e8 = 1;
    local_138 = &PTR_FUN_14a4e0590;
    cVar3 = *(char *)(lVar14 + 0x10);
    if (cVar3 == '\x01') {
      FUN_1457ab870(&local_138,&local_1f8,*(undefined2 *)(lVar7 + 0x104));
      local_168 = 0;
      FUN_1400abb7c(local_188,local_e0);
      FUN_1457abc42(&local_1f8,&local_27a,*(longlong *)(param_1 + 0x28) + 0x28,local_188);
LAB_1457ab073:
      uVar9 = (uint)local_27a;
    }
    else {
      if (cVar3 == '\0') {
        FUN_14769beea(&local_138,&local_1f8,*(undefined2 *)(lVar7 + 0x106));
        local_140 = 0;
        FUN_1400abb7c(local_160,local_e0);
        FUN_14769bf80(&local_1f8,&local_27a,*(longlong *)(param_1 + 0x28) + 0x28,local_160);
        goto LAB_1457ab073;
      }
      uVar9 = (uint)CONCAT62((uint6)(*(byte *)(lVar14 + 0x5e) & 1),0xffff);
      if (cVar3 == '\x02') {
        FUN_14769c0ea(&local_138,&local_1f8,*(undefined2 *)(lVar7 + 0x108));
        local_200 = 0;
        FUN_1400abb7c(local_220,local_e0);
        FUN_14769c1d2(&local_1f8,&local_27a,*(longlong *)(param_1 + 0x28) + 0x28,local_220);
        uVar9 = (uint)local_27a;
        local_1f8 = &PTR_FUN_14a4e0330;
        if ((local_1a0 != -1) && (local_198 != (longlong *)0x0)) {
          LOCK();
          plVar17 = local_198 + 1;
          *(int *)plVar17 = (int)*plVar17 + -1;
          UNLOCK();
          if ((int)*plVar17 == 0) {
            (**(code **)*local_198)(local_198);
            LOCK();
            piVar1 = (int *)((longlong)local_198 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_198 + 0x10))(local_198);
            }
          }
        }
      }
    }
    lVar7 = *param_2;
    if (*(short *)(lVar7 + 0x4a) != -1) {
      local_1d8 = 0;
      FUN_1400abb7c(&local_1f8,*(longlong *)(*(longlong *)(param_1 + 0x28) + 600) + 0x200);
      FUN_140dba9e6(&local_1f8,*(undefined2 *)(param_2[1] + 0x16));
      FUN_140dba9e6(&local_1f8,*(undefined2 *)(*(longlong *)(param_1 + 0x1b8) + 0x120));
      lVar7 = (longlong)*(int *)(param_2[1] + 0x20);
      if (lVar7 != 0) {
        lVar14 = *(longlong *)(param_2[1] + 0x18);
        lVar12 = 0;
        do {
          FUN_140dba9e6(&local_1f8,*(undefined2 *)(lVar14 + lVar12));
          lVar12 = lVar12 + 2;
        } while (lVar7 * 2 != lVar12);
      }
      FUN_140dbd3cc(*(longlong *)(param_1 + 0x28) + 0x28,*(undefined2 *)(*param_2 + 0x4a),uVar9,
                    &local_1f8);
      lVar7 = *param_2;
    }
    *(short *)(lVar7 + 0x48) = (short)uVar9;
    *(undefined2 *)(*param_2 + 0x4a) = 0xffff;
  }
  else {
    iVar11 = *(int *)(*param_2 + 0x4c);
    FUN_147546104(lVar7,&local_265);
    FUN_14754610e(lVar7,iVar11 << 0x10 | (uint)local_265);
    FUN_14485c47a(*param_2 + 0x18,uVar8);
    *(undefined2 *)(*param_2 + 0x4c) = local_264._2_2_;
    local_1d8 = 0x10000000000;
    uStack_1b0 = 0x10000000000;
    local_1a8 = CONCAT31(local_1a8._1_3_,1);
    local_270 = local_294;
    local_278 = lVar14;
    FUN_14769bde6(param_2,*(longlong *)(param_1 + 0x28) + 0x28,&local_278,&local_1f8);
    if ((int)(uint)local_228 < (int)local_1d8) {
      bVar5 = (byte)local_228 & 0x1f;
      puVar2 = (uint *)((longlong)&local_1f8 + (ulonglong)(local_228 >> 5) * 4);
      *puVar2 = *puVar2 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
    }
    local_130 = *(undefined2 *)(*(longlong *)(param_1 + 0x1b8) + 0x5c);
    local_12a = 1;
    local_12e = local_264;
    local_128 = local_238;
    local_126 = 0;
    local_138 = &PTR_FUN_14a4e0570;
    FUN_1457aba74(&local_138,*(longlong *)(param_1 + 0x28) + 0x28,*(undefined2 *)(*param_2 + 0x48),
                  &local_1f8);
    local_138 = (undefined **)CONCAT62(local_138._2_6_,local_228);
    uStack_1f0 = (longlong)&local_138 + 2;
    local_1f8 = (undefined **)&local_138;
    FUN_1447c44f6(local_90,&local_1f8);
  }
  if (*(int *)(param_1 + 200) != 0) {
    uVar9 = *(uint *)(param_2 + 2);
    lVar7 = param_1 + 0xb8;
    if (*(longlong *)(param_1 + 0xc0) != 0) {
      lVar7 = *(longlong *)(param_1 + 0xc0);
    }
    iVar11 = *(int *)(lVar7 + (longlong)(int)(*(int *)(param_1 + 200) - 1U & uVar9) * 4);
    while (iVar10 = iVar11, iVar10 != -1) {
      lVar7 = *(longlong *)(param_1 + 0x80);
      iVar11 = *(int *)(lVar7 + 8 + (longlong)iVar10 * 0x10);
      if (*(uint *)(lVar7 + (longlong)iVar10 * 0x10) == uVar9) {
        do {
          uStack_1f0 = CONCAT17(uStack_1f0._7_1_,0x1000000000000);
          uStack_1f0._0_6_ =
               CONCAT42(local_264,*(undefined2 *)(*(longlong *)(param_1 + 0x1b8) + 0x5a));
          local_1e8._0_3_ = (uint3)local_238;
          local_1f8 = &PTR_FUN_14a4e0570;
          FUN_1457aba74(&local_1f8,*(longlong *)(param_1 + 0x28) + 0x28,
                        *(undefined2 *)(lVar7 + 4 + (longlong)iVar10 * 0x10),&local_b8);
          do {
            iVar10 = iVar11;
            if (iVar10 == -1) goto LAB_1457ab7b7;
            lVar7 = *(longlong *)(param_1 + 0x80);
            iVar11 = *(int *)(lVar7 + 8 + (longlong)iVar10 * 0x10);
          } while (*(uint *)(lVar7 + (longlong)iVar10 * 0x10) != uVar9);
        } while( true );
      }
    }
  }
LAB_1457ab7b7:
  if ((local_60 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457ab7ee FUN_1457ab7ee body=130 status=ok
// SIG undefined FUN_1457ab7ee(void)

undefined8 FUN_1457ab7ee(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c949238) {
    FUN_144b3d300(&DAT_14c949238);
    if (DAT_14c949238 == -1) {
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      DAT_14c949230 = FUN_141473ad5(DAT_14c892c64);
      _Init_thread_footer(&DAT_14c949238);
    }
  }
  return DAT_14c949230;
}



// FUNCTION 1457ab870 FUN_1457ab870 body=148 status=ok
// SIG undefined FUN_1457ab870(void)

undefined8 *
FUN_1457ab870(longlong param_1,undefined8 *param_2,undefined2 param_3,undefined2 *param_4)

{
  undefined1 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  longlong local_38;
  undefined2 *local_30;
  undefined2 local_26;
  undefined2 local_24;
  undefined1 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = &local_26;
  local_24 = *param_4;
  local_22 = 1;
  local_38 = param_1 + 0x4e;
  local_40 = param_1 + 0x4c;
  local_48 = param_1 + 0x48;
  uVar1 = *(undefined1 *)(param_1 + 0x50);
  local_26 = param_3;
  FUN_1457ab906(param_2 + 1,param_1 + 8,param_1 + 0x10,param_1 + 0x30);
  *(undefined1 *)(param_2 + 0xb) = uVar1;
  *param_2 = &PTR_FUN_14a4e05d0;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457ab906 FUN_1457ab906 body=163 status=ok
// SIG undefined FUN_1457ab906(void)

void FUN_1457ab906(undefined2 *param_1,undefined2 *param_2,undefined2 *param_3,undefined2 *param_4,
                  undefined4 *param_5,undefined2 *param_6,undefined2 *param_7,undefined2 *param_8)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  cVar1 = *(char *)(param_2 + 3);
  *(char *)(param_1 + 3) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  }
  param_1[4] = *param_3;
  cVar1 = *(char *)(param_3 + 0xc);
  *(char *)(param_1 + 0x10) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_3 + 10);
    uVar2 = *(undefined8 *)(param_3 + 6);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_3 + 2);
    *(undefined8 *)(param_1 + 10) = uVar2;
  }
  param_1[0x14] = *param_4;
  cVar1 = *(char *)(param_4 + 8);
  *(char *)(param_1 + 0x1c) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_4 + 4);
  }
  *(undefined4 *)(param_1 + 0x20) = *param_5;
  param_1[0x22] = *param_6;
  param_1[0x23] = *param_7;
  param_1[0x24] = *param_8;
  cVar1 = *(char *)(param_8 + 2);
  *(char *)(param_1 + 0x26) = cVar1;
  if (cVar1 == '\x01') {
    param_1[0x25] = param_8[1];
  }
  return;
}



// FUNCTION 1457ab9aa FUN_1457ab9aa body=201 status=ok
// SIG undefined FUN_1457ab9aa(void)

undefined1 * FUN_1457ab9aa(longlong param_1,undefined1 *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  longlong lVar8;
  uint uVar9;
  
  puVar1 = (uint *)(param_1 + 0x40);
  puVar7 = *(uint **)(param_1 + 0x50);
  if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
    puVar7 = puVar1;
  }
  uVar2 = *(int *)(param_1 + 0x58) + 0x1f;
  if (uVar2 < 0x20) {
LAB_1457aba3c:
    lVar4 = FUN_144a54ea4(puVar1,1);
    puVar7 = *(uint **)(param_1 + 0x50);
    if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
      puVar7 = puVar1;
    }
    iVar3 = (int)lVar4;
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    puVar7[iVar5 >> 5] = puVar7[iVar5 >> 5] | 1 << ((byte)lVar4 & 0x1f);
LAB_1457aba17:
    *param_2 = *(undefined1 *)(param_1 + 100);
    *(short *)(param_2 + 2) = (short)lVar4;
    return param_2;
  }
  lVar8 = 0;
  puVar6 = puVar7;
LAB_1457ab9db:
  if (*puVar6 == 0xffffffff) goto LAB_1457aba2c;
  uVar9 = ~*puVar6;
  uVar2 = 0;
  if (uVar9 != 0) {
    for (; (uVar9 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
    }
  }
  lVar4 = (ulonglong)uVar2 - lVar8;
  iVar3 = (int)lVar4;
  if ((iVar3 < *(int *)(param_1 + 0x58)) && (uVar2 + 1 != (int)lVar8)) {
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    puVar7[iVar5 >> 5] = puVar7[iVar5 >> 5] | 1 << ((byte)uVar2 & 0x1f);
    goto LAB_1457aba17;
  }
  goto LAB_1457aba3c;
LAB_1457aba2c:
  lVar8 = lVar8 + -0x20;
  puVar6 = puVar6 + 1;
  if ((ulonglong)(uVar2 & 0xffffffe0) + lVar8 == 0) goto LAB_1457aba3c;
  goto LAB_1457ab9db;
}



// FUNCTION 1457aba74 FUN_1457aba74 body=460 status=ok
// SIG undefined FUN_1457aba74(void)

void FUN_1457aba74(longlong param_1,longlong param_2,ulonglong param_3,undefined8 param_4)

{
  ushort uVar1;
  char cVar2;
  ulonglong uVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_f8 [40];
  longlong local_d0;
  uint local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined1 local_b8 [16];
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined1 local_98 [40];
  undefined1 local_70 [32];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar7 = param_3 & 0xffff;
  uVar1 = *(ushort *)(*(longlong *)(param_2 + 0x98) + uVar7 * 8);
  if (uVar1 == 0xffff) {
    puVar4 = &DAT_14cab2728;
  }
  else {
    puVar4 = (undefined *)((ulonglong)((uint)uVar1 * 0x28) + *(longlong *)(param_2 + 8));
  }
  local_50 = 0;
  FUN_1400abb7c(local_70,puVar4);
  FUN_140dbcae2(param_4,local_98,local_70);
  FUN_140dba9e6(local_98,*(undefined2 *)(param_1 + 8));
  FUN_140dba9e6(local_98,*(undefined2 *)(param_1 + 0x10));
  local_a8 = (undefined1 *)0x0;
  local_a0 = 0x200000000;
  local_c0 = *(undefined8 *)(param_2 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_2 + 0x230),*(char *)(param_1 + 0x12) * '\x02' + '\x01',
                local_98,local_b8);
  cVar2 = FUN_1403b8874(local_98,local_70,0);
  if (cVar2 == '\0') {
    FUN_140dbc1e0(param_2,param_3 & 0xffffffff,local_98);
  }
  uVar3 = (ulonglong)*(ushort *)(*(longlong *)(param_2 + 0x98) + uVar7 * 8);
  if ((uVar3 != 0xffff) &&
     (lVar9 = *(longlong *)(*(longlong *)(param_2 + 0x60) + uVar3 * 8), lVar9 != 0)) {
    uVar6 = (uint)*(ushort *)(*(longlong *)(param_2 + 0x98) + 2 + uVar7 * 8);
    FUN_140dbd8a8(param_1 + 8,lVar9,uVar6);
    local_c4 = 1;
    puVar5 = local_b8;
    if (local_a8 != (undefined1 *)0x0) {
      puVar5 = local_a8;
    }
    lVar8 = (longlong)(int)local_a0;
    local_d0 = lVar9;
    local_c8 = uVar6;
    if (lVar8 != 0) {
      lVar9 = 0;
      do {
        (**(code **)(**(longlong **)(puVar5 + lVar9) + 8))
                  (*(longlong **)(puVar5 + lVar9),&local_d0,&local_c0);
        lVar9 = lVar9 + 8;
      } while (lVar8 * 8 != lVar9);
    }
  }
  if (local_a8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457abc42 FUN_1457abc42 body=363 status=ok
// SIG undefined FUN_1457abc42(void)

undefined2 * FUN_1457abc42(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
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
  undefined8 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58[0] = param_4;
  FUN_1457abe02(local_58,param_1 + 8);
  local_48 = (undefined8 *)0x0;
  local_40 = 0x200000000;
  local_80 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x58) * '\x02' + '\x01',param_4
                ,local_58);
  FUN_140560464(param_3,&local_98,param_4);
  if (CONCAT44(uStack_94,local_98) == 0) {
    local_78 = 0;
  }
  else {
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    FUN_1457abdae(&local_78,param_1 + 8);
    local_78 = CONCAT44(uStack_94,local_98);
  }
  uStack_70 = uStack_90;
  uStack_6c = 1;
  puVar1 = local_58;
  if (local_48 != (undefined8 *)0x0) {
    puVar1 = local_48;
  }
  lVar3 = (longlong)(int)local_40;
  if (lVar3 != 0) {
    lVar2 = 0;
    do {
      (**(code **)(**(longlong **)((longlong)puVar1 + lVar2) + 8))
                (*(longlong **)((longlong)puVar1 + lVar2),&local_78,&local_80);
      lVar2 = lVar2 + 8;
    } while (lVar3 * 8 != lVar2);
  }
  *param_2 = local_88;
  if (local_48 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1457abdae FUN_1457abdae body=84 status=ok
// SIG undefined FUN_1457abdae(void)

void FUN_1457abdae(undefined8 *param_1,longlong param_2)

{
  FUN_140dbd8a8(param_2,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659bfa(param_2 + 8,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_1457abe70(param_2 + 0x28,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140dbbd66(param_2 + 0x48,*param_1,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 1457abe02 FUN_1457abe02 body=109 status=ok
// SIG undefined FUN_1457abe02(void)

void FUN_1457abe02(undefined8 *param_1,undefined2 *param_2)

{
  FUN_140dba9e6(*param_1,*param_2);
  FUN_140dba9e6(*param_1,param_2[4]);
  FUN_140dba9e6(*param_1,param_2[0x14]);
  if (*(char *)(param_2 + 0x21) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x20]);
  }
  FUN_140dba9e6(*param_1,param_2[0x22]);
  FUN_140dba9e6(*param_1,param_2[0x23]);
  FUN_140dba9e6(*param_1,param_2[0x24]);
  return;
}



// FUNCTION 1457abe70 FUN_1457abe70 body=151 status=ok
// SIG undefined FUN_1457abe70(void)

void FUN_1457abe70(short *param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar3 = *(longlong **)(param_2 + 0x28);
    lVar2 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar3 + 0x1e) == *param_1) goto LAB_1457abea3;
      plVar3 = plVar3 + 4;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  plVar3 = (longlong *)0x0;
LAB_1457abea3:
  iVar1 = *(int *)(param_2 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar3 + 1));
  }
  LOCK();
  *(int *)(plVar3 + 3) = (int)plVar3[3] + 1;
  UNLOCK();
  *(undefined8 *)(*plVar3 + (longlong)param_3 * (ulonglong)*(byte *)((longlong)plVar3 + 0x1c)) =
       *(undefined8 *)(param_1 + 4);
  if ((char)param_1[8] == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 3) = (int)plVar3[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001457abef6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar3 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 1457abf08 FUN_1457abf08 body=448 status=ok
// SIG undefined FUN_1457abf08(void)

void FUN_1457abf08(longlong param_1,longlong param_2,ulonglong param_3,undefined8 param_4)

{
  ushort uVar1;
  char cVar2;
  ulonglong uVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_f8 [40];
  longlong local_d0;
  uint local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined1 local_b8 [16];
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined1 local_98 [40];
  undefined1 local_70 [32];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar7 = param_3 & 0xffff;
  uVar1 = *(ushort *)(*(longlong *)(param_2 + 0x98) + uVar7 * 8);
  if (uVar1 == 0xffff) {
    puVar4 = &DAT_14cab2728;
  }
  else {
    puVar4 = (undefined *)((ulonglong)((uint)uVar1 * 0x28) + *(longlong *)(param_2 + 8));
  }
  local_50 = 0;
  FUN_1400abb7c(local_70,puVar4);
  FUN_140dbcae2(param_4,local_98,local_70);
  FUN_140dba9e6(local_98,*(undefined2 *)(param_1 + 8));
  local_a8 = (undefined1 *)0x0;
  local_a0 = 0x200000000;
  local_c0 = *(undefined8 *)(param_2 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_2 + 0x230),*(char *)(param_1 + 0xe) * '\x02' + '\x01',local_98
                ,local_b8);
  cVar2 = FUN_1403b8874(local_98,local_70,0);
  if (cVar2 == '\0') {
    FUN_140dbc1e0(param_2,param_3 & 0xffffffff,local_98);
  }
  uVar3 = (ulonglong)*(ushort *)(*(longlong *)(param_2 + 0x98) + uVar7 * 8);
  if ((uVar3 != 0xffff) &&
     (lVar9 = *(longlong *)(*(longlong *)(param_2 + 0x60) + uVar3 * 8), lVar9 != 0)) {
    uVar6 = (uint)*(ushort *)(*(longlong *)(param_2 + 0x98) + 2 + uVar7 * 8);
    FUN_140dbdbb4(param_1 + 8,lVar9,uVar6);
    local_c4 = 1;
    puVar5 = local_b8;
    if (local_a8 != (undefined1 *)0x0) {
      puVar5 = local_a8;
    }
    lVar8 = (longlong)(int)local_a0;
    local_d0 = lVar9;
    local_c8 = uVar6;
    if (lVar8 != 0) {
      lVar9 = 0;
      do {
        (**(code **)(**(longlong **)(puVar5 + lVar9) + 8))
                  (*(longlong **)(puVar5 + lVar9),&local_d0,&local_c0);
        lVar9 = lVar9 + 8;
      } while (lVar8 * 8 != lVar9);
    }
  }
  if (local_a8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457ac0ca FUN_1457ac0ca body=48 status=ok
// SIG undefined FUN_1457ac0ca(void)

void FUN_1457ac0ca(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,4);
  }
  return;
}



// FUNCTION 1457ac0fa FUN_1457ac0fa body=118 status=ok
// SIG undefined FUN_1457ac0fa(void)

void FUN_1457ac0fa(longlong *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (-1 < param_3) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_3) {
      FUN_1405c2e9e(param_1,param_3);
    }
    for (; param_3 != 0; param_3 = param_3 + -1) {
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_141087970(param_1,iVar1);
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar2 + 8 + (longlong)iVar1 * 0xc) = *(undefined4 *)(param_2 + 1);
      *(undefined8 *)(lVar2 + (longlong)iVar1 * 0xc) = *param_2;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_3);
}



// FUNCTION 1457ac172 FUN_1457ac172 body=71 status=ok
// SIG undefined FUN_1457ac172(void)

void FUN_1457ac172(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_149800fc2();
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
      FUN_149801056();
      return;
    }
  }
  return;
}



// FUNCTION 1457ac1ba FUN_1457ac1ba body=866 status=ok
// SIG undefined FUN_1457ac1ba(void)

undefined8 * FUN_1457ac1ba(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 2;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0x200000000;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0x1a) = 2;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  param_1[0x20] = 2;
  FUN_144a81de8(param_1 + 0x21);
  param_1[0x21] = &PTR_FUN_149e29ea0;
  param_1[0x23] = 0;
  FUN_145948fee(param_1 + 0x24);
  param_1[0x24] = &PTR_FUN_149e29f00;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x49));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x49),4000);
  param_1[0x53] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2ac) = 0;
  param_1[0x57] = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  param_1[0x5d] = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2f4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2fc) = 0;
  param_1[0x61] = 0;
  *(undefined4 *)(param_1 + 0x62) = 0;
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  param_1[0x65] = puVar3;
  param_1[100] = puVar3;
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  param_1[0x67] = puVar3;
  param_1[0x66] = puVar3;
  *(undefined4 *)(param_1 + 0x68) = 0x1000000;
  param_1[0x69] = 0;
  *(undefined1 *)(param_1 + 0x6a) = 0;
  param_1[0x73] = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined2 *)(param_1 + 0x75) = 0x100;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x371) = 0;
  *(undefined8 *)((longlong)param_1 + 0x379) = 0;
  *(undefined8 *)((longlong)param_1 + 900) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38c) = 0;
  param_1[0x7a] = 0;
  *(undefined4 *)(param_1 + 0x7b) = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3dc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3e4) = 0;
  param_1[0x7e] = 0;
  *(undefined4 *)(param_1 + 0x7f) = 0;
  param_1[0x84] = 0;
  *(undefined4 *)(param_1 + 0x85) = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  *(undefined8 *)((longlong)param_1 + 0x42c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x434) = 0;
  param_1[0x88] = 0;
  *(undefined4 *)(param_1 + 0x89) = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  plVar4 = (longlong *)FUN_14001cc68(0x388,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149e2b1a0;
  FUN_1457ac51c(plVar4 + 2,0);
  if (plVar4 == (longlong *)0x0) {
    param_1[0x8a] = 0x10;
    plVar5 = (longlong *)param_1[0x8b];
    if (plVar5 == (longlong *)0x0) {
      return param_1;
    }
    param_1[0x8b] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    param_1[0x8a] = plVar4 + 2;
    plVar5 = (longlong *)param_1[0x8b];
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
      goto LAB_1457ac485;
    }
    param_1[0x8b] = plVar4;
    if (plVar5 == (longlong *)0x0) goto LAB_1457ac485;
  }
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
  if (plVar4 == (longlong *)0x0) {
    return param_1;
  }
LAB_1457ac485:
  LOCK();
  plVar5 = plVar4 + 1;
  *(int *)plVar5 = (int)*plVar5 + -1;
  UNLOCK();
  if ((int)*plVar5 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  return param_1;
}



// FUNCTION 1457ac51c FUN_1457ac51c body=172 status=ok
// SIG undefined FUN_1457ac51c(void)

longlong * FUN_1457ac51c(longlong *param_1,undefined1 param_2)

{
  *param_1 = (longlong)&PTR_FUN_149e343e0;
  *(undefined1 *)(param_1 + 1) = param_2;
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  FUN_144a5dc74(param_1 + 2);
  FUN_144a5dc74(param_1 + 4);
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  FUN_1457ac5c8(param_1 + 0x1f);
  FUN_1457ac672(param_1 + 0x47);
  (**(code **)(*param_1 + 8))(param_1);
  return param_1;
}



// FUNCTION 1457ac5c8 FUN_1457ac5c8 body=169 status=ok
// SIG undefined FUN_1457ac5c8(void)

void FUN_1457ac5c8(undefined8 *param_1)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  return;
}



// FUNCTION 1457ac672 FUN_1457ac672 body=169 status=ok
// SIG undefined FUN_1457ac672(void)

void FUN_1457ac672(undefined8 *param_1)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  return;
}



// FUNCTION 1457ac71c FUN_1457ac71c body=2389 status=ok
// SIG undefined FUN_1457ac71c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457ac71c(longlong param_1)

{
  longlong lVar1;
  undefined ***pppuVar2;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 *local_b0;
  code **local_a8;
  undefined1 local_9c [4];
  code *local_98 [2];
  undefined ***local_88;
  undefined **local_78;
  longlong local_70;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1457ad5e2();
  local_e8 = _DAT_14c75d5c8;
  uStack_e0 = _DAT_14c75d5d0;
  local_d8 = CONCAT44(DAT_14c75d55c,DAT_14c75d558);
  uStack_d0 = CONCAT44(DAT_14c75d564,DAT_14c75d560);
  local_c8 = DAT_14c75d558;
  uStack_c4 = DAT_14c75d55c;
  uStack_c0 = DAT_14c75d560;
  uStack_bc = DAT_14c75d564;
  lVar1 = param_1 + 0x2d8;
  local_88 = (undefined ***)0x0;
  local_78 = &PTR_LAB_149e34ed0;
  local_98[0] = FUN_14278985c;
  local_b0 = &local_e8;
  local_a8 = local_98;
  FUN_140dc5bee(lVar1,local_9c);
  if (local_98[0] != (code *)0x0) {
    pppuVar2 = local_88;
    if (local_88 == (undefined ***)0x0) {
      pppuVar2 = &local_78;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  local_e8 = _DAT_14c75d5b8;
  uStack_e0 = _DAT_14c75d5c0;
  local_d8 = CONCAT44(DAT_14c75d55c,DAT_14c75d558);
  uStack_d0 = CONCAT44(DAT_14c75d564,DAT_14c75d560);
  local_c8 = DAT_14c75d558;
  uStack_c4 = DAT_14c75d55c;
  uStack_c0 = DAT_14c75d560;
  uStack_bc = DAT_14c75d564;
  local_88 = (undefined ***)0x0;
  local_78 = &PTR_LAB_149e34f10;
  local_98[0] = FUN_1427899dc;
  local_b0 = &local_e8;
  local_a8 = local_98;
  FUN_140dc5bee(lVar1,local_9c);
  if (local_98[0] != (code *)0x0) {
    pppuVar2 = local_88;
    if (local_88 == (undefined ***)0x0) {
      pppuVar2 = &local_78;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  local_e8 = _DAT_14c75d5e8;
  uStack_e0 = _DAT_14c75d5f0;
  local_d8 = CONCAT44(DAT_14c75d55c,DAT_14c75d558);
  uStack_d0 = CONCAT44(DAT_14c75d564,DAT_14c75d560);
  local_c8 = DAT_14c75d558;
  uStack_c4 = DAT_14c75d55c;
  uStack_c0 = DAT_14c75d560;
  uStack_bc = DAT_14c75d564;
  local_88 = (undefined ***)0x0;
  local_78 = &PTR_LAB_149e34f30;
  local_98[0] = FUN_142789b3c;
  local_b0 = &local_e8;
  local_a8 = local_98;
  FUN_140dc5bee(lVar1,local_9c);
  if (local_98[0] != (code *)0x0) {
    pppuVar2 = local_88;
    if (local_88 == (undefined ***)0x0) {
      pppuVar2 = &local_78;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  local_e8 = _DAT_14c75d5d8;
  uStack_e0 = _DAT_14c75d5e0;
  local_d8 = CONCAT44(DAT_14c75d55c,DAT_14c75d558);
  uStack_d0 = CONCAT44(DAT_14c75d564,DAT_14c75d560);
  local_c8 = DAT_14c75d558;
  uStack_c4 = DAT_14c75d55c;
  uStack_c0 = DAT_14c75d560;
  uStack_bc = DAT_14c75d564;
  local_88 = (undefined ***)0x0;
  local_78 = &PTR_LAB_149e34f50;
  local_98[0] = FUN_142789c9c;
  local_b0 = &local_e8;
  local_a8 = local_98;
  FUN_140dc5bee(lVar1,local_9c);
  if (local_98[0] != (code *)0x0) {
    pppuVar2 = local_88;
    if (local_88 == (undefined ***)0x0) {
      pppuVar2 = &local_78;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  local_e8 = _DAT_14c75d5a8;
  uStack_e0 = _DAT_14c75d5b0;
  local_d8 = CONCAT44(DAT_14c75d55c,DAT_14c75d558);
  uStack_d0 = CONCAT44(DAT_14c75d564,DAT_14c75d560);
  local_c8 = DAT_14c75d558;
  uStack_c4 = DAT_14c75d55c;
  uStack_c0 = DAT_14c75d560;
  uStack_bc = DAT_14c75d564;
  local_88 = (undefined ***)0x0;
  local_78 = &PTR_LAB_149e34f70;
  local_98[0] = FUN_142789dfc;
  local_b0 = &local_e8;
  local_a8 = local_98;
  FUN_140dc5bee(lVar1,local_9c);
  if (local_98[0] != (code *)0x0) {
    pppuVar2 = local_88;
    if (local_88 == (undefined ***)0x0) {
      pppuVar2 = &local_78;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  local_e8 = _DAT_14c75d598;
  uStack_e0 = _DAT_14c75d5a0;
  local_d8 = CONCAT44(DAT_14c75d55c,DAT_14c75d558);
  uStack_d0 = CONCAT44(DAT_14c75d564,DAT_14c75d560);
  local_c8 = DAT_14c75d558;
  uStack_c4 = DAT_14c75d55c;
  uStack_c0 = DAT_14c75d560;
  uStack_bc = DAT_14c75d564;
  local_88 = (undefined ***)0x0;
  local_78 = &PTR_LAB_149e34f90;
  local_98[0] = FUN_142789f5c;
  local_b0 = &local_e8;
  local_a8 = local_98;
  FUN_140dc5bee(lVar1,local_9c);
  if (local_98[0] != (code *)0x0) {
    pppuVar2 = local_88;
    if (local_88 == (undefined ***)0x0) {
      pppuVar2 = &local_78;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  local_e8 = _DAT_14c75d618;
  uStack_e0 = uRam000000014c75d620;
  local_d8 = CONCAT44(DAT_14c75d55c,DAT_14c75d558);
  uStack_d0 = CONCAT44(DAT_14c75d564,DAT_14c75d560);
  local_c8 = DAT_14c75d558;
  uStack_c4 = DAT_14c75d55c;
  uStack_c0 = DAT_14c75d560;
  uStack_bc = DAT_14c75d564;
  local_88 = (undefined ***)0x0;
  local_78 = &PTR_LAB_149e34fb0;
  local_98[0] = FUN_14278a0bc;
  local_b0 = &local_e8;
  local_a8 = local_98;
  FUN_140dc5bee(lVar1,local_9c);
  if (local_98[0] != (code *)0x0) {
    pppuVar2 = local_88;
    if (local_88 == (undefined ***)0x0) {
      pppuVar2 = &local_78;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  local_e8 = _DAT_14c75d618;
  uStack_e0 = uRam000000014c75d620;
  local_d8 = CONCAT44(DAT_14c75d55c,DAT_14c75d558);
  uStack_d0 = CONCAT44(DAT_14c75d564,DAT_14c75d560);
  local_c8 = DAT_14c75d628;
  uStack_c4 = DAT_14c75d62c;
  uStack_c0 = DAT_14c75d630;
  uStack_bc = DAT_14c75d634;
  local_88 = (undefined ***)0x0;
  local_78 = &PTR_LAB_149e34fd0;
  local_98[0] = FUN_14278a1f0;
  local_b0 = &local_e8;
  local_a8 = local_98;
  FUN_140dc5bee(lVar1,local_9c);
  if (local_98[0] != (code *)0x0) {
    pppuVar2 = local_88;
    if (local_88 == (undefined ***)0x0) {
      pppuVar2 = &local_78;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  local_e8 = _DAT_14c75d618;
  uStack_e0 = uRam000000014c75d620;
  local_d8 = CONCAT44(DAT_14c75d62c,DAT_14c75d628);
  uStack_d0 = CONCAT44(DAT_14c75d634,DAT_14c75d630);
  local_c8 = DAT_14c75d558;
  uStack_c4 = DAT_14c75d55c;
  uStack_c0 = DAT_14c75d560;
  uStack_bc = DAT_14c75d564;
  local_88 = (undefined ***)0x0;
  local_78 = &PTR_LAB_149e34ff0;
  local_98[0] = FUN_14278a302;
  local_b0 = &local_e8;
  local_a8 = local_98;
  FUN_140dc5bee(lVar1,local_9c);
  if (local_98[0] != (code *)0x0) {
    pppuVar2 = local_88;
    if (local_88 == (undefined ***)0x0) {
      pppuVar2 = &local_78;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  local_e8 = _DAT_14c75d618;
  uStack_e0 = uRam000000014c75d620;
  local_d8 = CONCAT44(DAT_14c75d62c,DAT_14c75d628);
  uStack_d0 = CONCAT44(DAT_14c75d634,DAT_14c75d630);
  local_c8 = DAT_14c75d628;
  uStack_c4 = DAT_14c75d62c;
  uStack_c0 = DAT_14c75d630;
  uStack_bc = DAT_14c75d634;
  local_88 = (undefined ***)0x0;
  local_78 = &PTR_LAB_149e35010;
  local_98[0] = FUN_14278a41c;
  local_b0 = &local_e8;
  local_a8 = local_98;
  FUN_140dc5bee(lVar1,local_9c);
  if (local_98[0] != (code *)0x0) {
    pppuVar2 = local_88;
    if (local_88 == (undefined ***)0x0) {
      pppuVar2 = &local_78;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  local_e8 = _DAT_14c75d608;
  uStack_e0 = uRam000000014c75d610;
  local_d8 = CONCAT44(DAT_14c75d55c,DAT_14c75d558);
  uStack_d0 = CONCAT44(DAT_14c75d564,DAT_14c75d560);
  local_c8 = DAT_14c75d558;
  uStack_c4 = DAT_14c75d55c;
  uStack_c0 = DAT_14c75d560;
  uStack_bc = DAT_14c75d564;
  local_88 = (undefined ***)0x0;
  local_78 = &PTR_LAB_149e35030;
  local_98[0] = FUN_14278a4f0;
  local_b0 = &local_e8;
  local_a8 = local_98;
  FUN_140dc5bee(lVar1,local_9c);
  if (local_98[0] != (code *)0x0) {
    pppuVar2 = local_88;
    if (local_88 == (undefined ***)0x0) {
      pppuVar2 = &local_78;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  local_e8 = _DAT_14c75d608;
  uStack_e0 = uRam000000014c75d610;
  local_d8 = CONCAT44(DAT_14c75d55c,DAT_14c75d558);
  uStack_d0 = CONCAT44(DAT_14c75d564,DAT_14c75d560);
  local_c8 = DAT_14c75d628;
  uStack_c4 = DAT_14c75d62c;
  uStack_c0 = DAT_14c75d630;
  uStack_bc = DAT_14c75d634;
  local_88 = (undefined ***)0x0;
  local_78 = &PTR_LAB_149e35050;
  local_98[0] = FUN_14278a626;
  local_b0 = &local_e8;
  local_a8 = local_98;
  FUN_140dc5bee(lVar1,local_9c);
  if (local_98[0] != (code *)0x0) {
    pppuVar2 = local_88;
    if (local_88 == (undefined ***)0x0) {
      pppuVar2 = &local_78;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  local_e8 = _DAT_14c75d608;
  uStack_e0 = uRam000000014c75d610;
  local_d8 = CONCAT44(DAT_14c75d62c,DAT_14c75d628);
  uStack_d0 = CONCAT44(DAT_14c75d634,DAT_14c75d630);
  local_c8 = DAT_14c75d558;
  uStack_c4 = DAT_14c75d55c;
  uStack_c0 = DAT_14c75d560;
  uStack_bc = DAT_14c75d564;
  local_88 = (undefined ***)0x0;
  local_78 = &PTR_LAB_149e35070;
  local_98[0] = FUN_14278a738;
  local_b0 = &local_e8;
  local_a8 = local_98;
  FUN_140dc5bee(lVar1,local_9c);
  if (local_98[0] != (code *)0x0) {
    pppuVar2 = local_88;
    if (local_88 == (undefined ***)0x0) {
      pppuVar2 = &local_78;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  local_e8 = _DAT_14c75d608;
  uStack_e0 = uRam000000014c75d610;
  local_d8 = CONCAT44(DAT_14c75d62c,DAT_14c75d628);
  uStack_d0 = CONCAT44(DAT_14c75d634,DAT_14c75d630);
  local_c8 = DAT_14c75d628;
  uStack_c4 = DAT_14c75d62c;
  uStack_c0 = DAT_14c75d630;
  uStack_bc = DAT_14c75d634;
  local_88 = (undefined ***)0x0;
  local_78 = &PTR_LAB_149e35090;
  local_98[0] = FUN_14278a84e;
  local_b0 = &local_e8;
  local_a8 = local_98;
  FUN_140dc5bee(lVar1,local_9c);
  if (local_98[0] != (code *)0x0) {
    pppuVar2 = local_88;
    if (local_88 == (undefined ***)0x0) {
      pppuVar2 = &local_78;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  local_e8 = _DAT_14c75d5f8;
  uStack_e0 = _DAT_14c75d600;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = DAT_14c75d558;
  uStack_c4 = DAT_14c75d55c;
  uStack_c0 = DAT_14c75d560;
  uStack_bc = DAT_14c75d564;
  local_88 = (undefined ***)0x0;
  local_78 = &PTR_LAB_149e350b0;
  local_98[0] = FUN_14278a922;
  local_b0 = &local_e8;
  local_a8 = local_98;
  FUN_1457ad0e4(param_1 + 0x238,local_9c);
  if (local_98[0] != (code *)0x0) {
    pppuVar2 = local_88;
    if (local_88 == (undefined ***)0x0) {
      pppuVar2 = &local_78;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  local_e8 = _DAT_14c75d5f8;
  uStack_e0 = _DAT_14c75d600;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = DAT_14c75d628;
  uStack_c4 = DAT_14c75d62c;
  uStack_c0 = DAT_14c75d630;
  uStack_bc = DAT_14c75d634;
  local_88 = (undefined ***)0x0;
  local_78 = &PTR_LAB_149e350d0;
  local_98[0] = (code *)&LAB_14278a9f2;
  local_b0 = &local_e8;
  local_a8 = local_98;
  FUN_1457ad0e4(param_1 + 0x238,local_9c);
  if (local_98[0] != (code *)0x0) {
    pppuVar2 = local_88;
    if (local_88 == (undefined ***)0x0) {
      pppuVar2 = &local_78;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  local_e8 = _DAT_14c75d588;
  uStack_e0 = uRam000000014c75d590;
  local_d8 = CONCAT44(DAT_14c75d55c,DAT_14c75d558);
  uStack_d0 = CONCAT44(DAT_14c75d564,DAT_14c75d560);
  local_c8 = DAT_14c75d558;
  uStack_c4 = DAT_14c75d55c;
  uStack_c0 = DAT_14c75d560;
  uStack_bc = DAT_14c75d564;
  local_88 = (undefined ***)0x0;
  local_78 = &PTR_LAB_149e350f0;
  local_98[0] = FUN_14278aa98;
  local_b0 = &local_e8;
  local_a8 = local_98;
  local_70 = param_1;
  FUN_140dc5bee(lVar1,local_9c);
  if (local_98[0] != (code *)0x0) {
    pppuVar2 = &local_78;
    if (local_88 != (undefined ***)0x0) {
      pppuVar2 = local_88;
    }
    (*(code *)(*pppuVar2)[2])(pppuVar2);
  }
  if ((local_50 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457ad072 FUN_1457ad072 body=114 status=ok
// SIG undefined FUN_1457ad072(void)

void FUN_1457ad072(longlong *param_1,int param_2)

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



// FUNCTION 1457ad0e4 FUN_1457ad0e4 body=353 status=ok
// SIG undefined FUN_1457ad0e4(void)

undefined4 * FUN_1457ad0e4(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  char cVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  int iVar18;
  longlong lVar19;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1457ad336(param_1,local_40);
  puVar1 = (undefined8 *)*param_3;
  plVar2 = (longlong *)param_3[1];
  uVar7 = *puVar1;
  uVar8 = puVar1[1];
  uVar9 = puVar1[2];
  uVar10 = puVar1[3];
  uVar3 = *(undefined4 *)((longlong)puVar1 + 0x24);
  uVar4 = *(undefined4 *)(puVar1 + 5);
  uVar5 = *(undefined4 *)((longlong)puVar1 + 0x2c);
  *(undefined4 *)(local_38 + 4) = *(undefined4 *)(puVar1 + 4);
  *(undefined4 *)((longlong)local_38 + 0x24) = uVar3;
  *(undefined4 *)(local_38 + 5) = uVar4;
  *(undefined4 *)((longlong)local_38 + 0x2c) = uVar5;
  local_38[2] = uVar9;
  local_38[3] = uVar10;
  *local_38 = uVar7;
  local_38[1] = uVar8;
  lVar19 = *plVar2;
  local_38[6] = lVar19;
  local_38[8] = plVar2[2];
  plVar2[2] = 0;
  lVar11 = plVar2[4];
  uVar3 = *(undefined4 *)((longlong)plVar2 + 0x24);
  lVar12 = plVar2[5];
  uVar4 = *(undefined4 *)((longlong)plVar2 + 0x2c);
  uVar5 = *(undefined4 *)((longlong)plVar2 + 0x34);
  lVar13 = plVar2[7];
  uVar6 = *(undefined4 *)((longlong)plVar2 + 0x3c);
  *(int *)(local_38 + 0xc) = (int)plVar2[6];
  *(undefined4 *)((longlong)local_38 + 100) = uVar5;
  *(int *)(local_38 + 0xd) = (int)lVar13;
  *(undefined4 *)((longlong)local_38 + 0x6c) = uVar6;
  *(int *)(local_38 + 10) = (int)lVar11;
  *(undefined4 *)((longlong)local_38 + 0x54) = uVar3;
  *(int *)(local_38 + 0xb) = (int)lVar12;
  *(undefined4 *)((longlong)local_38 + 0x5c) = uVar4;
  if (lVar19 != 0) {
    *plVar2 = 0;
  }
  *(undefined4 *)(local_38 + 0xe) = 0xffffffff;
  local_44 = local_40[0];
  uVar15 = FUN_144a70b6e(local_38);
  cVar14 = FUN_1457ad246(param_1,uVar15,local_38,&local_44);
  uVar3 = local_44;
  if (cVar14 == '\0') {
    uVar16 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar18 = 1;
    if (3 < uVar16) {
      uVar17 = (ulonglong)(uVar16 & 0xfffffffe) + 0xf;
      lVar19 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      iVar18 = 1 << ((byte)lVar19 & 0x1f);
    }
    if (((int)uVar16 < 1) || (iVar18 <= *(int *)(param_1 + 0x48))) {
      uVar15 = *(int *)(param_1 + 0x48) - 1U & uVar15;
      *(uint *)((longlong)local_38 + 0x74) = uVar15;
      lVar19 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar19 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 0xe) =
           *(undefined4 *)
            (lVar19 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar15) * 4);
      lVar19 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar19 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar19 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar15) * 4) = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar18;
      FUN_1457ad41c(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457ad246 FUN_1457ad246 body=131 status=ok
// SIG undefined FUN_1457ad246(void)

undefined8 FUN_1457ad246(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  void *_Dst;
  int iVar1;
  longlong *plVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar1 = FUN_1457ad2ca(), iVar1 != -1)) {
    _Dst = (void *)(*param_1 + (longlong)iVar1 * 0x80);
    if (*(longlong *)(*param_1 + 0x30 + (longlong)iVar1 * 0x80) != 0) {
      plVar2 = (longlong *)((longlong)_Dst + 0x50);
      if (*(longlong **)((longlong)_Dst + 0x40) != (longlong *)0x0) {
        plVar2 = *(longlong **)((longlong)_Dst + 0x40);
      }
      (**(code **)(*plVar2 + 0x10))();
    }
    memmove(_Dst,param_3,0x70);
    FUN_14681e034(param_1,*param_4);
    *param_4 = iVar1;
    return 1;
  }
  return 0;
}



// FUNCTION 1457ad2ca FUN_1457ad2ca body=108 status=ok
// SIG undefined FUN_1457ad2ca(void)

int FUN_1457ad2ca(longlong *param_1,uint param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        cVar1 = FUN_144a70af3(lVar3 + (longlong)iVar4 * 0x80,param_3);
        if (cVar1 != '\0') {
          return iVar4;
        }
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x70 + (longlong)iVar4 * 0x80);
      } while (iVar4 != -1);
    }
  }
  return -1;
}



// FUNCTION 1457ad336 FUN_1457ad336 body=230 status=ok
// SIG undefined FUN_1457ad336(void)

int * FUN_1457ad336(longlong *param_1,int *param_2)

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
      FUN_14045f6dc(param_1,iVar6);
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



// FUNCTION 1457ad41c FUN_1457ad41c body=453 status=ok
// SIG undefined FUN_1457ad41c(void)

void FUN_1457ad41c(longlong *param_1)

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
        iVar6 = FUN_144a70b6e(lVar3 + lVar10);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x74 + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x70 + lVar10) =
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



// FUNCTION 1457ad5e2 FUN_1457ad5e2 body=1587 status=ok
// SIG undefined FUN_1457ad5e2(void)

void FUN_1457ad5e2(longlong param_1)

{
  longlong lVar1;
  undefined ***pppuVar2;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined1 local_90;
  undefined1 local_8c [4];
  code *local_88;
  undefined8 *local_80;
  undefined ***local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = param_1 + 0xe0;
  *(undefined1 *)(param_1 + 0xe0) = 1;
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_149e1d860;
  local_60 = FUN_14170b63a;
  local_88 = FUN_14276d564;
  FUN_140dc6248(lVar1,&local_88);
  if (local_88 != (code *)0x0) {
    pppuVar2 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar2 = &local_68;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_149e1d860;
  local_60 = FUN_14170b6dd;
  local_88 = FUN_14276d564;
  FUN_140dc6248(lVar1,&local_88);
  if (local_88 != (code *)0x0) {
    pppuVar2 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar2 = &local_68;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  if (*(char *)(param_1 + 8) == '\x01') {
    local_78 = (undefined ***)0x0;
    local_68 = &PTR_LAB_149e1d860;
    local_60 = FUN_14681ae13;
    local_88 = FUN_14276d564;
    FUN_140dc6248(lVar1,&local_88);
    if (local_88 != (code *)0x0) {
      pppuVar2 = local_78;
      if (local_78 == (undefined ***)0x0) {
        pppuVar2 = &local_68;
      }
      (*(code *)(*pppuVar2)[2])();
    }
    local_78 = (undefined ***)0x0;
    local_68 = &PTR_LAB_149e1d860;
    local_60 = FUN_14681aedc;
    local_88 = FUN_14276d564;
    FUN_140dc6248(lVar1,&local_88);
    if (local_88 != (code *)0x0) {
      pppuVar2 = local_78;
      if (local_78 == (undefined ***)0x0) {
        pppuVar2 = &local_68;
      }
      (*(code *)(*pppuVar2)[2])();
    }
    local_78 = (undefined ***)0x0;
    local_68 = &PTR_LAB_149e1d860;
    local_60 = FUN_14681af7d;
    local_88 = FUN_14276d564;
    FUN_140dc6248(lVar1,&local_88);
    if (local_88 != (code *)0x0) {
      pppuVar2 = local_78;
      if (local_78 == (undefined ***)0x0) {
        pppuVar2 = &local_68;
      }
      (*(code *)(*pppuVar2)[2])();
    }
    local_78 = (undefined ***)0x0;
    local_68 = &PTR_LAB_149e1d860;
    local_60 = FUN_14681b046;
    local_88 = FUN_14276d564;
    FUN_140dc6248(lVar1,&local_88);
    if (local_88 != (code *)0x0) {
      pppuVar2 = local_78;
      if (local_78 == (undefined ***)0x0) {
        pppuVar2 = &local_68;
      }
      (*(code *)(*pppuVar2)[2])();
    }
    local_78 = (undefined ***)0x0;
    local_68 = &PTR_LAB_149e1d860;
    local_60 = FUN_14681b0e7;
    local_88 = FUN_14276d564;
    FUN_140dc6248(lVar1,&local_88);
    if (local_88 != (code *)0x0) {
      pppuVar2 = local_78;
      if (local_78 == (undefined ***)0x0) {
        pppuVar2 = &local_68;
      }
      (*(code *)(*pppuVar2)[2])();
    }
    local_78 = (undefined ***)0x0;
    local_68 = &PTR_LAB_149e1d860;
    local_60 = FUN_14681b1b0;
    local_88 = FUN_14276d564;
    FUN_140dc6248(lVar1,&local_88);
    if (local_88 != (code *)0x0) {
      pppuVar2 = local_78;
      if (local_78 == (undefined ***)0x0) {
        pppuVar2 = &local_68;
      }
      (*(code *)(*pppuVar2)[2])();
    }
  }
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_149e1d860;
  local_60 = FUN_140c581d9;
  local_88 = FUN_14276d564;
  FUN_140dc6248(lVar1,&local_88);
  if (local_88 != (code *)0x0) {
    pppuVar2 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar2 = &local_68;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_149e1d860;
  local_60 = FUN_14170b780;
  local_88 = FUN_14276d564;
  FUN_140dc6248(lVar1,&local_88);
  if (local_88 != (code *)0x0) {
    pppuVar2 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar2 = &local_68;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_149e1d860;
  local_60 = FUN_14170b84c;
  local_88 = FUN_14276d564;
  FUN_140dc6248(lVar1,&local_88);
  if (local_88 != (code *)0x0) {
    pppuVar2 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar2 = &local_68;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  if (*(char *)(param_1 + 8) == '\x01') {
    local_78 = (undefined ***)0x0;
    local_68 = &PTR_LAB_149e1d860;
    local_60 = FUN_14681a8dc;
    local_88 = FUN_14276d564;
    FUN_140dc6248(lVar1,&local_88);
    if (local_88 != (code *)0x0) {
      pppuVar2 = local_78;
      if (local_78 == (undefined ***)0x0) {
        pppuVar2 = &local_68;
      }
      (*(code *)(*pppuVar2)[2])();
    }
    local_60 = FUN_14118a708;
    if (*(char *)(param_1 + 8) == '\x01') {
      local_60 = FUN_14681aa03;
    }
  }
  else {
    local_60 = FUN_14118a708;
  }
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_149e1d860;
  local_88 = FUN_14276d564;
  FUN_140dc6248(lVar1,&local_88);
  if (local_88 != (code *)0x0) {
    pppuVar2 = &local_68;
    if (local_78 != (undefined ***)0x0) {
      pppuVar2 = local_78;
    }
    (*(code *)(*pppuVar2)[2])(pppuVar2);
  }
  local_88 = (code *)&DAT_14c75d568;
  local_80 = (undefined8 *)&DAT_14c75d578;
  FUN_1457ae0f2(param_1 + 0xf8,&local_98,&local_88,0);
  lVar1 = param_1 + 0x1e8;
  local_98 = 1;
  local_90 = 0;
  local_88 = (code *)&DAT_14c75d5c8;
  local_80 = &local_98;
  FUN_140dc62b6(lVar1,local_8c,&local_88,0);
  local_98 = 1;
  local_90 = 0;
  local_88 = (code *)&DAT_14c75d5b8;
  local_80 = &local_98;
  FUN_140dc62b6(lVar1,local_8c,&local_88,0);
  local_98 = 1;
  local_90 = 0;
  local_88 = (code *)&DAT_14c75d5e8;
  local_80 = &local_98;
  FUN_140dc62b6(lVar1,local_8c,&local_88,0);
  local_98 = 1;
  local_90 = 0;
  local_88 = (code *)&DAT_14c75d5d8;
  local_80 = &local_98;
  FUN_140dc62b6(lVar1,local_8c,&local_88,0);
  local_98 = 1;
  local_90 = 0;
  local_88 = (code *)&DAT_14c75d5a8;
  local_80 = &local_98;
  FUN_140dc62b6(lVar1,local_8c,&local_88,0);
  local_98 = 1;
  local_90 = 0;
  local_88 = (code *)&DAT_14c75d598;
  local_80 = &local_98;
  FUN_140dc62b6(lVar1,local_8c,&local_88,0);
  local_98 = 2;
  local_90 = 0;
  local_88 = (code *)&DAT_14c75d618;
  local_80 = &local_98;
  FUN_140dc62b6(lVar1,local_8c,&local_88,0);
  local_98 = 2;
  local_90 = 0;
  local_88 = (code *)&DAT_14c75d608;
  local_80 = &local_98;
  FUN_140dc62b6(lVar1,local_8c,&local_88,0);
  local_98 = 1;
  local_90 = 0;
  local_88 = (code *)&DAT_14c75d588;
  local_80 = &local_98;
  FUN_140dc62b6(lVar1,local_8c,&local_88,0);
  FUN_1457adc9c(param_1 + 0x148,&local_88,&DAT_14c75d5f8,0);
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457adc16 FUN_1457adc16 body=132 status=ok
// SIG undefined FUN_1457adc16(void)

void FUN_1457adc16(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1457adc9c FUN_1457adc9c body=313 status=ok
// SIG undefined FUN_1457adc9c(void)

undefined4 *
FUN_1457adc9c(longlong param_1,undefined4 *param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1457ade44(param_1,local_48);
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *local_40 = *param_3;
  local_40[1] = uVar1;
  local_40[2] = uVar2;
  local_40[3] = uVar3;
  local_40[4] = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = FUN_1447addd0(local_40,0x10);
  local_58 = param_4;
  cVar4 = FUN_1457addd6(param_1,uVar5,local_40,&local_4c);
  if (cVar4 == '\0') {
    uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar7) {
      uVar6 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_40[5] = uVar5;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      local_40[4] = *(undefined4 *)
                     (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_1457adf2c(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457addd6 FUN_1457addd6 body=109 status=ok
// SIG undefined FUN_1457addd6(void)

void FUN_1457addd6(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4,
                  undefined1 *param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  int iVar6;
  
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar6 = FUN_140f5cb3a();
    if (iVar6 != -1) {
      uVar2 = param_3[1];
      uVar3 = param_3[2];
      uVar4 = param_3[3];
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar6 * 0x18);
      *puVar1 = *param_3;
      puVar1[1] = uVar2;
      puVar1[2] = uVar3;
      puVar1[3] = uVar4;
      FUN_1467f45e0(param_1,*param_4,1);
      *param_4 = iVar6;
      uVar5 = 1;
      goto LAB_1457addf2;
    }
  }
  uVar5 = 0;
LAB_1457addf2:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar5;
  }
  return;
}



// FUNCTION 1457ade44 FUN_1457ade44 body=231 status=ok
// SIG undefined FUN_1457ade44(void)

int * FUN_1457ade44(longlong *param_1,int *param_2)

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
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x18) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 1457adf2c FUN_1457adf2c body=452 status=ok
// SIG undefined FUN_1457adf2c(void)

void FUN_1457adf2c(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar4 = local_68;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar3 != uVar9);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_58);
    }
    local_78 = local_58;
    local_70 = local_50;
    local_68 = local_48;
    uVar4 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = param_1;
    if (local_68._4_4_ < (int)local_50[3]) {
      iVar5 = local_68._4_4_;
      local_68 = uVar4;
      do {
        lVar2 = *local_80 + (longlong)iVar5 * 0x18;
        iVar6 = FUN_1447addd0(lVar2,0x10);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar2 + 0x14) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar5 = local_68._4_4_;
        uVar4 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457ae0f2 FUN_1457ae0f2 body=326 status=ok
// SIG undefined FUN_1457ae0f2(void)

undefined4 *
FUN_1457ae0f2(longlong param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  char cVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1412eb9fa(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar5 = ((undefined8 *)*param_3)[1];
  *local_40 = *(undefined8 *)*param_3;
  local_40[1] = uVar5;
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  *(undefined4 *)(local_40 + 2) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0x14) = uVar2;
  *(undefined4 *)(local_40 + 3) = uVar3;
  *(undefined4 *)((longlong)local_40 + 0x1c) = uVar4;
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  local_4c = local_48[0];
  uVar7 = FUN_1447addd0(local_40,0x10);
  local_58 = param_4;
  cVar6 = FUN_1412eb984(param_1,uVar7,local_40,&local_4c);
  if (cVar6 == '\0') {
    uVar9 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar10 = 1;
    if (3 < uVar9) {
      uVar8 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
      lVar11 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar11 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar10 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      *(uint *)((longlong)local_40 + 0x24) = uVar7;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar10;
      FUN_1412ebbe0(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457ae23a FUN_1457ae23a body=82 status=ok
// SIG undefined FUN_1457ae23a(void)

undefined8 * FUN_1457ae23a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 1);
  if ((longlong)iVar1 != 0) {
    *(int *)(param_1 + 1) = iVar1;
    FUN_1403de658(param_1,0);
    memcpy((void *)*param_1,(void *)*param_2,(longlong)iVar1 << 3);
  }
  FUN_1401fa756(param_1);
  return param_1;
}



// FUNCTION 1457ae28c FUN_1457ae28c body=62 status=ok
// SIG undefined FUN_1457ae28c(void)

void FUN_1457ae28c(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1457ae2ca FUN_1457ae2ca body=72 status=ok
// SIG undefined FUN_1457ae2ca(void)

void FUN_1457ae2ca(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1457ae55a(param_1,iVar1);
  }
  FUN_1457ae5ec((longlong)iVar1 * 0xd8 + *param_1,param_2);
  if (iVar1 != -1) {
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  }
  return;
}



// FUNCTION 1457ae312 FUN_1457ae312 body=94 status=ok
// SIG undefined FUN_1457ae312(void)

ulonglong FUN_1457ae312(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  int *piVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  plVar1 = (longlong *)(param_1 + 0x68);
  uVar2 = *(uint *)(param_1 + 0x70);
  uVar5 = (ulonglong)(int)uVar2;
  if (0 < (longlong)uVar5) {
    piVar3 = (int *)*plVar1;
    uVar4 = 0;
    do {
      if (*piVar3 == -1) {
        uVar5 = uVar4 & 0xffffffff;
        goto LAB_1457ae35d;
      }
      uVar4 = uVar4 + 1;
      piVar3 = piVar3 + 1;
    } while (uVar2 != uVar4);
  }
  *(uint *)(param_1 + 0x70) = uVar2 + 1;
  if (*(uint *)(param_1 + 0x74) < uVar2 + 1) {
    FUN_1446f48e2(plVar1,uVar2);
  }
  piVar3 = (int *)(uVar5 * 4 + *plVar1);
LAB_1457ae35d:
  *piVar3 = 0;
  return uVar5 & 0xffffffff;
}



// FUNCTION 1457ae370 FUN_1457ae370 body=150 status=ok
// SIG undefined FUN_1457ae370(void)

void FUN_1457ae370(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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



// FUNCTION 1457ae406 FUN_1457ae406 body=339 status=ok
// SIG undefined FUN_1457ae406(void)

undefined8 * FUN_1457ae406(undefined8 *param_1)

{
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  FUN_1400b22c2(&local_50,&DAT_149e02088);
  param_1[5] = local_50;
  local_50 = 0;
  *(undefined4 *)(param_1 + 6) = local_48;
  *(undefined4 *)((longlong)param_1 + 0x34) = local_44;
  *(undefined4 *)(param_1 + 7) = 0;
  FUN_140056680(&local_50,&DAT_149dfb77a);
  param_1[8] = local_50;
  *(undefined4 *)(param_1 + 9) = local_48;
  *(undefined4 *)((longlong)param_1 + 0x4c) = local_44;
  *(undefined4 *)(param_1 + 10) = 0;
  FUN_1400b22c2(&local_50,&DAT_149e02088);
  param_1[0xb] = local_50;
  *(undefined4 *)(param_1 + 0xc) = local_48;
  *(undefined4 *)((longlong)param_1 + 100) = local_44;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined1 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa9) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb1) = 0;
  param_1[0x18] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc5) = 0;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457ae55a FUN_1457ae55a body=146 status=ok
// SIG undefined FUN_1457ae55a(void)

void FUN_1457ae55a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0xd8,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xd8)) {
      uVar5 = uVar4 / 0xd8 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xd8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1457ae5ec FUN_1457ae5ec body=594 status=ok
// SIG undefined FUN_1457ae5ec(void)

undefined8 * FUN_1457ae5ec(undefined8 *param_1,undefined4 *param_2)

{
  *param_1 = 0;
  *(undefined4 *)param_1 = *param_2;
  *(undefined4 *)((longlong)param_1 + 4) = param_2[1];
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 1) = param_2[2];
  *(undefined4 *)((longlong)param_1 + 0xc) = param_2[3];
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 4);
  *(undefined4 *)((longlong)param_1 + 0x14) = param_2[5];
  *(undefined4 *)(param_1 + 3) = param_2[6];
  *(undefined1 *)((longlong)param_1 + 0x1c) = *(undefined1 *)(param_2 + 7);
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0x24) = param_2[9];
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  FUN_144a787a6(param_1 + 5,param_2 + 10);
  *(undefined4 *)(param_1 + 7) = param_2[0xe];
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_144a787a6(param_1 + 8,param_2 + 0x10);
  *(undefined4 *)(param_1 + 10) = param_2[0x14];
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  FUN_144a787a6(param_1 + 0xb,param_2 + 0x16);
  *(undefined4 *)(param_1 + 0xd) = param_2[0x1a];
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0x1c);
  *(undefined4 *)((longlong)param_1 + 0x74) = param_2[0x1d];
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0x1e);
  *(undefined4 *)((longlong)param_1 + 0x7c) = param_2[0x1f];
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x20);
  *(undefined4 *)((longlong)param_1 + 0x84) = param_2[0x21];
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x22);
  *(undefined4 *)((longlong)param_1 + 0x8c) = param_2[0x23];
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x24);
  *(undefined4 *)((longlong)param_1 + 0x94) = param_2[0x25];
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x26);
  *(undefined4 *)((longlong)param_1 + 0x9c) = param_2[0x27];
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x14) = param_2[0x28];
  *(undefined4 *)((longlong)param_1 + 0xa4) = param_2[0x29];
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x15) = param_2[0x2a];
  *(undefined4 *)((longlong)param_1 + 0xac) = param_2[0x2b];
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x16) = param_2[0x2c];
  *(undefined4 *)((longlong)param_1 + 0xb4) = param_2[0x2d];
  *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(param_2 + 0x2e);
  *(undefined1 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0xbc) = *(undefined1 *)(param_2 + 0x2f);
  *(undefined4 *)(param_1 + 0x18) = param_2[0x30];
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = param_2[0x31];
  *(undefined4 *)(param_1 + 0x19) = param_2[0x32];
  *(undefined1 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined1 *)((longlong)param_1 + 0xcc) = *(undefined1 *)(param_2 + 0x33);
  *(undefined4 *)(param_1 + 0x1a) = param_2[0x34];
  return param_1;
}



// FUNCTION 1457ae83e FUN_1457ae83e body=1800 status=ok
// SIG undefined FUN_1457ae83e(void)

void FUN_1457ae83e(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0xc))) {
    lVar1 = param_1[0xb];
    lVar3 = FUN_14479d2ce(lVar1 + (ulonglong)param_2 * 0x88 + 8);
    if (lVar3 != 0) {
      puVar5 = (undefined8 *)(lVar1 + (ulonglong)param_2 * 0x88);
      if (puVar5[4] == 0) {
        uStack_40 = 0;
        local_48 = param_1;
        FUN_14485c47a(&uStack_40,lVar3);
        local_68 = (undefined8 *)0x0;
        uStack_60 = uStack_60 & 0xffffffff00000000;
        FUN_1446efa72(&local_68,0,3,0x10);
        puVar2 = local_68;
        uStack_60 = CONCAT44(uStack_60._4_4_,3);
        *local_68 = &PTR_LAB_14b4edb80;
        LOCK();
        UNLOCK();
        lVar4 = DAT_14c758608 + 1;
        lVar1 = DAT_14c758608 + 1;
        if (lVar4 == 0) {
          LOCK();
          UNLOCK();
          lVar4 = DAT_14c758608 + 2;
          lVar1 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar1;
        local_68[2] = lVar4;
        *local_68 = &PTR_FUN_14b9a8bb0;
        local_68[3] = 0;
        FUN_14485c47a(local_68 + 3,param_1);
        *(undefined4 *)(puVar2 + 4) = (undefined4)local_48;
        *(undefined4 *)((longlong)puVar2 + 0x24) = local_48._4_4_;
        *(undefined4 *)(puVar2 + 5) = (undefined4)uStack_40;
        *(undefined4 *)((longlong)puVar2 + 0x2c) = uStack_40._4_4_;
        FUN_140dca018(lVar3 + 0x71b8,&local_50,&local_68);
        FUN_1449db362(&local_68);
        puVar5[4] = local_50;
      }
      if (puVar5[5] == 0) {
        uStack_40 = 0;
        local_48 = param_1;
        FUN_14485c47a(&uStack_40,lVar3);
        local_68 = (undefined8 *)0x0;
        uStack_60 = uStack_60 & 0xffffffff00000000;
        FUN_1446efa72(&local_68,0,3,0x10);
        puVar2 = local_68;
        uStack_60 = CONCAT44(uStack_60._4_4_,3);
        *local_68 = &PTR_LAB_14b966850;
        LOCK();
        UNLOCK();
        lVar4 = DAT_14c758608 + 1;
        lVar1 = DAT_14c758608 + 1;
        if (lVar4 == 0) {
          LOCK();
          UNLOCK();
          lVar4 = DAT_14c758608 + 2;
          lVar1 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar1;
        local_68[2] = lVar4;
        *local_68 = &PTR_FUN_14b9a8c20;
        local_68[3] = 0;
        FUN_14485c47a(local_68 + 3,param_1);
        *(undefined4 *)(puVar2 + 4) = (undefined4)local_48;
        *(undefined4 *)((longlong)puVar2 + 0x24) = local_48._4_4_;
        *(undefined4 *)(puVar2 + 5) = (undefined4)uStack_40;
        *(undefined4 *)((longlong)puVar2 + 0x2c) = uStack_40._4_4_;
        FUN_140dca198(lVar3 + 0x71f8,&local_50,&local_68);
        FUN_1449db362(&local_68);
        puVar5[5] = local_50;
      }
      if (puVar5[9] == 0) {
        uStack_40 = 0;
        local_48 = param_1;
        FUN_14485c47a(&uStack_40,lVar3);
        local_68 = (undefined8 *)0x0;
        uStack_60 = uStack_60 & 0xffffffff00000000;
        FUN_1446efa72(&local_68,0,3,0x10);
        puVar2 = local_68;
        uStack_60 = CONCAT44(uStack_60._4_4_,3);
        *local_68 = &PTR_LAB_14b966850;
        LOCK();
        UNLOCK();
        lVar4 = DAT_14c758608 + 1;
        lVar1 = DAT_14c758608 + 1;
        if (lVar4 == 0) {
          LOCK();
          UNLOCK();
          lVar4 = DAT_14c758608 + 2;
          lVar1 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar1;
        local_68[2] = lVar4;
        *local_68 = &PTR_FUN_14b9a8c90;
        local_68[3] = 0;
        FUN_14485c47a(local_68 + 3,param_1);
        *(undefined4 *)(puVar2 + 4) = (undefined4)local_48;
        *(undefined4 *)((longlong)puVar2 + 0x24) = local_48._4_4_;
        *(undefined4 *)(puVar2 + 5) = (undefined4)uStack_40;
        *(undefined4 *)((longlong)puVar2 + 0x2c) = uStack_40._4_4_;
        FUN_140dca198(lVar3 + 0x7220,&local_50,&local_68);
        FUN_1449db362(&local_68);
        puVar5[9] = local_50;
      }
      if (puVar5[6] == 0) {
        uStack_60 = 0;
        local_68 = param_1;
        FUN_14485c47a(&uStack_60,lVar3);
        local_58 = *puVar5;
        local_48 = (undefined8 *)0x0;
        uStack_40 = uStack_40 & 0xffffffff00000000;
        FUN_1446efa72(&local_48,0,4,0x10);
        puVar2 = local_48;
        uStack_40 = CONCAT44(uStack_40._4_4_,4);
        *local_48 = &PTR_LAB_14b4edb80;
        LOCK();
        UNLOCK();
        lVar4 = DAT_14c758608 + 1;
        lVar1 = DAT_14c758608 + 1;
        if (lVar4 == 0) {
          LOCK();
          UNLOCK();
          lVar4 = DAT_14c758608 + 2;
          lVar1 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar1;
        local_48[2] = lVar4;
        *local_48 = &PTR_FUN_14b9a8d00;
        local_48[3] = 0;
        FUN_14485c47a(local_48 + 3,param_1);
        puVar2[6] = local_58;
        *(undefined4 *)(puVar2 + 4) = (undefined4)local_68;
        *(undefined4 *)((longlong)puVar2 + 0x24) = local_68._4_4_;
        *(undefined4 *)(puVar2 + 5) = (undefined4)uStack_60;
        *(undefined4 *)((longlong)puVar2 + 0x2c) = uStack_60._4_4_;
        FUN_140dca018(lVar3 + 0x7248,&local_50,&local_48);
        FUN_1449db362(&local_48);
        puVar5[6] = local_50;
      }
      if (puVar5[7] == 0) {
        uStack_60 = 0;
        local_68 = param_1;
        FUN_14485c47a(&uStack_60,lVar3);
        local_58 = *puVar5;
        local_48 = (undefined8 *)0x0;
        uStack_40 = uStack_40 & 0xffffffff00000000;
        FUN_1446efa72(&local_48,0,4,0x10);
        puVar2 = local_48;
        uStack_40 = CONCAT44(uStack_40._4_4_,4);
        *local_48 = &PTR_LAB_14b9a8de0;
        LOCK();
        UNLOCK();
        lVar4 = DAT_14c758608 + 1;
        lVar1 = DAT_14c758608 + 1;
        if (lVar4 == 0) {
          LOCK();
          UNLOCK();
          lVar4 = DAT_14c758608 + 2;
          lVar1 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar1;
        local_48[2] = lVar4;
        *local_48 = &PTR_FUN_14b9a8d70;
        local_48[3] = 0;
        FUN_14485c47a(local_48 + 3,param_1);
        puVar2[6] = local_58;
        *(undefined4 *)(puVar2 + 4) = (undefined4)local_68;
        *(undefined4 *)((longlong)puVar2 + 0x24) = local_68._4_4_;
        *(undefined4 *)(puVar2 + 5) = (undefined4)uStack_60;
        *(undefined4 *)((longlong)puVar2 + 0x2c) = uStack_60._4_4_;
        FUN_1457aef48(lVar3 + 0x7270,&local_50,&local_48);
        FUN_1449db362(&local_48);
        puVar5[7] = local_50;
      }
      if (puVar5[8] == 0) {
        uStack_40 = 0;
        local_48 = param_1;
        FUN_14485c47a(&uStack_40,lVar3);
        local_68 = (undefined8 *)0x0;
        uStack_60 = uStack_60 & 0xffffffff00000000;
        FUN_1446efa72(&local_68,0,3,0x10);
        puVar2 = local_68;
        uStack_60 = CONCAT44(uStack_60._4_4_,3);
        *local_68 = &PTR_LAB_14b4edb80;
        LOCK();
        UNLOCK();
        lVar4 = DAT_14c758608 + 1;
        lVar1 = DAT_14c758608 + 1;
        if (lVar4 == 0) {
          LOCK();
          UNLOCK();
          lVar4 = DAT_14c758608 + 2;
          lVar1 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar1;
        local_68[2] = lVar4;
        *local_68 = &PTR_FUN_14b9a8e50;
        local_68[3] = 0;
        FUN_14485c47a(local_68 + 3,param_1);
        *(undefined4 *)(puVar2 + 4) = (undefined4)local_48;
        *(undefined4 *)((longlong)puVar2 + 0x24) = local_48._4_4_;
        *(undefined4 *)(puVar2 + 5) = (undefined4)uStack_40;
        *(undefined4 *)((longlong)puVar2 + 0x2c) = uStack_40._4_4_;
        FUN_140dca018(lVar3 + 0x72c8,&local_50,&local_68);
        FUN_1449db362(&local_68);
        puVar5[8] = local_50;
      }
      if (puVar5[10] == 0) {
        uStack_40 = 0;
        local_48 = param_1;
        FUN_14485c47a(&uStack_40,lVar3);
        local_68 = (undefined8 *)0x0;
        uStack_60 = uStack_60 & 0xffffffff00000000;
        FUN_1446efa72(&local_68,0,3,0x10);
        puVar2 = local_68;
        uStack_60 = CONCAT44(uStack_60._4_4_,3);
        *local_68 = &PTR_LAB_149e020b0;
        LOCK();
        UNLOCK();
        lVar4 = DAT_14c758608 + 1;
        lVar1 = DAT_14c758608 + 1;
        if (lVar4 == 0) {
          LOCK();
          UNLOCK();
          lVar4 = DAT_14c758608 + 2;
          lVar1 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar1;
        local_68[2] = lVar4;
        *local_68 = &PTR_FUN_14b9a8ec0;
        local_68[3] = 0;
        FUN_14485c47a(local_68 + 3,param_1);
        *(undefined4 *)(puVar2 + 4) = (undefined4)local_48;
        *(undefined4 *)((longlong)puVar2 + 0x24) = local_48._4_4_;
        *(undefined4 *)(puVar2 + 5) = (undefined4)uStack_40;
        *(undefined4 *)((longlong)puVar2 + 0x2c) = uStack_40._4_4_;
        FUN_1448b6402(lVar3 + 0x3f80,&local_50,&local_68);
        FUN_1449db362(&local_68);
        puVar5[10] = local_50;
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457aef48 FUN_1457aef48 body=216 status=ok
// SIG undefined FUN_1457aef48(void)

undefined8 * FUN_1457aef48(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
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



// FUNCTION 1457af3a6 FUN_1457af3a6 body=143 status=ok
// SIG undefined FUN_1457af3a6(void)

void FUN_1457af3a6(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0x58,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x58)) {
      uVar5 = uVar4 / 0x58 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x58,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1457af436 FUN_1457af436 body=455 status=ok
// SIG undefined FUN_1457af436(void)

void FUN_1457af436(longlong param_1,char param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  int *piVar4;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  longlong local_a8;
  undefined2 local_a0 [2];
  undefined8 local_9c;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined1 local_60 [4];
  undefined8 local_5c;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar1 = *(longlong *)(param_1 + 0x40);
  if (*(char *)(lVar1 + 0x409) == '\0') {
    plVar3 = (longlong *)FUN_1401bd7a2(lVar1);
    piVar4 = (int *)&DAT_14c948618;
    if ((plVar3 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar3 + 0x50))(plVar3), cVar2 == '\0')) goto LAB_1457af489;
  }
  if (*(char *)(lVar1 + 0x40b) == '\x01') {
    piVar4 = (int *)(lVar1 + 0x410);
  }
  else {
    piVar4 = (int *)(lVar1 + 0x380);
  }
LAB_1457af489:
  if (*piVar4 != 0) {
    local_a8 = DAT_14cb88848;
    if ((param_2 != '\x03') && (local_a8 = DAT_14cb88918, param_2 == '\x02')) {
      local_a8 = DAT_14cb88840;
    }
    if (local_a8 != 0) {
      local_9c = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_80 = 0;
      local_60[0] = 0;
      local_5c = 0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 0;
      uStack_38 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      local_a0[0] = 0xb;
      FUN_140c25b54(local_a0);
      lVar1 = *(longlong *)(param_1 + 0x40);
      if ((*(char *)(lVar1 + 0x409) == '\0') &&
         ((plVar3 = (longlong *)FUN_1401bd7a2(lVar1), plVar3 == (longlong *)0x0 ||
          (cVar2 = (**(code **)(*plVar3 + 0x50))(plVar3), cVar2 == '\0')))) {
        local_b0 = DAT_14c948620;
        local_b8 = DAT_14c948618;
      }
      else if (*(char *)(lVar1 + 0x40b) == '\x01') {
        local_b0 = *(undefined4 *)(lVar1 + 0x418);
        local_b8 = *(undefined8 *)(lVar1 + 0x410);
      }
      else {
        local_b0 = *(undefined4 *)(lVar1 + 0x388);
        local_b8 = *(undefined8 *)(lVar1 + 0x380);
      }
      FUN_144928d62(&local_90,0,&local_b8);
      FUN_141881c66(local_60,&local_a8);
      FUN_140bc46c6(param_1,local_a0,0,0);
      FUN_141638c42(local_a0);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457af5fe FUN_1457af5fe body=35 status=ok
// SIG undefined FUN_1457af5fe(void)

undefined8 FUN_1457af5fe(longlong param_1,longlong param_2)

{
  FUN_1457af622(*(longlong *)(param_2 + 0x10) + 0x50,*(longlong *)(param_1 + 0x10) + 0x50);
  return 1;
}



// FUNCTION 1457af622 FUN_1457af622 body=89 status=ok
// SIG undefined FUN_1457af622(void)

undefined8 * FUN_1457af622(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14812fd0a(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  return param_1;
}



// FUNCTION 1457af67c FUN_1457af67c body=150 status=ok
// SIG undefined FUN_1457af67c(void)

void FUN_1457af67c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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



// FUNCTION 1457af714 FUN_1457af714 body=64 status=ok
// SIG undefined FUN_1457af714(void)

byte FUN_1457af714(longlong param_1)

{
  byte bVar1;
  
  if ((*(char *)(param_1 + 0x488) != '\x01') ||
     ((bVar1 = 1, (*(byte *)(param_1 + 0x238) & 1) == 0 && ((*(byte *)(param_1 + 0x468) & 1) == 0)))
     ) {
    if (*(char *)(param_1 + 0x908) == '\x01') {
      bVar1 = 1;
      if ((*(byte *)(param_1 + 0x6b8) & 1) == 0) {
        bVar1 = *(byte *)(param_1 + 0x8e8) & 1;
      }
    }
    else {
      bVar1 = 0;
    }
  }
  return bVar1;
}



// FUNCTION 1457af754 FUN_1457af754 body=974 status=ok
// SIG undefined FUN_1457af754(void)

longlong * FUN_1457af754(longlong *param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_c8 [36];
  undefined4 local_a4 [2];
  int local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_70;
  undefined4 local_68;
  uint uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  cVar2 = (**(code **)(*param_1 + 0x300))();
  if (cVar2 == '\0') {
    plVar10 = param_1 + 0x5d;
    plVar9 = param_1 + 0x5f;
    local_98 = 0x100000000;
    local_88 = (ulonglong *)&DAT_ffffffff;
    uStack_80 = 0;
    uStack_90 = plVar9;
    if ((int)param_1[0x62] == 0) {
      iVar5 = 0;
    }
    else {
      FUN_1449c0562(&local_98);
      iVar5 = (int)param_1[0x62];
    }
    local_68 = (undefined4)local_98;
    uStack_64 = local_98._4_4_;
    uStack_60 = (int)uStack_90;
    uStack_5c = uStack_90._4_4_;
    uStack_50 = CONCAT44(uStack_7c,uStack_80);
    local_58 = local_88;
    puVar1 = local_58;
    local_58._4_4_ = (int)((ulonglong)local_88 >> 0x20);
    iVar3 = local_58._4_4_;
    local_70 = plVar10;
    if ((local_58._4_4_ != iVar5) || (local_58 = local_88, uStack_90 != plVar9)) {
      do {
        local_58 = puVar1;
        lVar6 = *(longlong *)(*local_70 + 0x10 + (longlong)iVar3 * 0x20);
        if (lVar6 != 0) {
          FUN_1446dcdd4(&local_98,param_2);
          FUN_144a62e5c(local_a4,&local_98,*(undefined4 *)(lVar6 + 0xc0),
                        *(undefined4 *)(lVar6 + 0xc4));
          if (local_9c != 0) {
            FUN_144a78877(local_a4[0],local_9c);
          }
          iVar3 = FUN_144b0847a((longlong *)(lVar6 + 0x70));
          if (iVar3 == -1) {
            if (CONCAT44(uStack_7c,uStack_80) != 0) {
              FUN_1400020a8();
            }
          }
          else {
            lVar6 = (longlong)iVar3 * 0x20 + *(longlong *)(lVar6 + 0x70);
            if (CONCAT44(uStack_7c,uStack_80) != 0) {
              FUN_1400020a8();
            }
            if ((lVar6 != 0) && (lVar6 = *(longlong *)(lVar6 + 0x10), lVar6 != 0)) {
              plVar10 = *(longlong **)(lVar6 + 0x30);
              if (plVar10 != (longlong *)0x0) {
                lVar6 = (**(code **)(*plVar10 + 8))(plVar10);
                lVar7 = FUN_140902b36();
                if ((lVar7 != 0) && (*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38))) {
                  plVar9 = (longlong *)0x0;
                  if (*(longlong *)
                       (*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
                      lVar7 + 0x30) {
                    plVar9 = plVar10;
                  }
                  goto LAB_1457af7b2;
                }
              }
              break;
            }
          }
        }
        local_58 = (ulonglong *)CONCAT44(local_58._4_4_,(uint)local_58 & ~uStack_64);
        FUN_1449c0562(&local_68);
        iVar3 = local_58._4_4_;
        puVar1 = local_58;
      } while (((longlong *)CONCAT44(uStack_5c,uStack_60) != plVar9 || local_58._4_4_ != iVar5) ||
               local_70 != plVar10);
    }
  }
  else {
    FUN_1446dcdd4(&local_70,param_2);
    if (1 < local_70._4_4_) {
      if (((int)local_70 == 0) || ((int)local_70 == DAT_14c948000)) {
        local_98 = DAT_14c948618;
        iVar5 = DAT_14c948620;
      }
      else {
        local_98 = *local_58;
        iVar5 = (int)local_58[1];
      }
      uStack_90 = (longlong *)CONCAT44(uStack_90._4_4_,iVar5);
      uVar8 = local_98 & 0xffffffff;
      if (iVar5 != 0) {
        uVar4 = FUN_144a78877(uVar8,iVar5);
        uVar8 = (ulonglong)uVar4;
      }
      iVar5 = FUN_1448467de(param_1 + 0x3f,uVar8,&local_98);
      if (iVar5 != -1) {
        lVar6 = param_1[0x3f];
        if ((lVar6 + (longlong)iVar5 * 0x70 + 0x10U & 0xffffffffffffffef) != 0) {
          plVar10 = (longlong *)(lVar6 + (longlong)iVar5 * 0x70 + 0x18);
          FUN_1400f0e12(&local_70,&local_98,1);
          uVar8 = local_98 & 0xffffffff;
          if ((int)uStack_90 != 0) {
            uVar4 = FUN_144a78877(uVar8,(ulonglong)uStack_90 & 0xffffffff);
            uVar8 = (ulonglong)uVar4;
          }
          iVar5 = FUN_144a840a2(plVar10,uVar8,&local_98);
          if ((iVar5 != -1) &&
             (lVar6 = (longlong)iVar5 * 0x20 + *plVar10, plVar10 = (longlong *)(lVar6 + 0x10),
             plVar10 != (longlong *)0x0 && lVar6 != 0)) {
            plVar10 = (longlong *)*plVar10;
            if (plVar10 == (longlong *)0x0) {
LAB_1457afa85:
              plVar9 = (longlong *)0x0;
            }
            else {
              lVar6 = (**(code **)(*plVar10 + 8))(plVar10);
              lVar7 = FUN_140902b36();
              if ((lVar7 == 0) || (*(int *)(lVar6 + 0x38) < *(int *)(lVar7 + 0x38)))
              goto LAB_1457afa85;
              plVar9 = (longlong *)0x0;
              if (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
                  == lVar7 + 0x30) {
                plVar9 = plVar10;
              }
            }
            if (local_58 != (ulonglong *)0x0) {
              FUN_1400020a8();
            }
            goto LAB_1457af7b2;
          }
        }
      }
    }
    if (local_58 != (ulonglong *)0x0) {
      FUN_1400020a8();
    }
  }
  plVar9 = (longlong *)0x0;
LAB_1457af7b2:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return plVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457afb24 FUN_1457afb24 body=205 status=ok
// SIG undefined FUN_1457afb24(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457afb24(void)

{
  if ((DAT_14ca6dddf & 2) == 0) {
    DAT_14ca6dddf = DAT_14ca6dddf | 2;
    _DAT_14ca6dd80 = L"TVirtualTextureVSBaseColor";
    _DAT_14ca6dd98 = FUN_146826540;
    _DAT_14ca6dda0 = FUN_146825d77;
    _DAT_14ca6dda8 = FUN_146825fd6;
    _DAT_14ca6ddb0 = FUN_1407e02ea;
    _DAT_14ca6ddb8 = FUN_146826273;
    _DAT_14ca6dd90 = FUN_14733f660;
    _DAT_14ca6ddd0 = 0xffffffff00000108;
    _DAT_14ca6ddd8 = 8;
    DAT_14ca6dddc = 0;
    _DAT_14ca6ddc0 = &LAB_14733f696;
    FUN_1457afbf2();
    FUN_1407e00cc(&DAT_14ca6dd78);
    return;
  }
  return;
}



// FUNCTION 1457afbf2 FUN_1457afbf2 body=123 status=ok
// SIG undefined FUN_1457afbf2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457afbf2(void)

{
  _DAT_14ca718c0 = L"BASE";
  DAT_14ca718ea = 4;
  _DAT_14ca718c8 = FUN_141092e92();
  _DAT_14ca718d0 = DAT_14ca6dd88;
  _DAT_14ca718d8 = &LAB_14682652b;
  DAT_14ca6dd88 = &DAT_14ca718c0;
  DAT_14ca6dddd = DAT_14ca6dddd + '\x01';
  _DAT_14ca718e0 = 0x100000000;
  if (*(char *)(_DAT_14ca718c8 + 100) != '\0') {
    DAT_14ca6ddde = DAT_14ca6ddde + '\x01';
  }
  return;
}



// FUNCTION 1457afc6e FUN_1457afc6e body=205 status=ok
// SIG undefined FUN_1457afc6e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457afc6e(void)

{
  if ((DAT_14ca6df07 & 2) == 0) {
    DAT_14ca6df07 = DAT_14ca6df07 | 2;
    _DAT_14ca6dea8 = L"TVirtualTexturePSBaseColor";
    _DAT_14ca6dec0 = FUN_146826540;
    _DAT_14ca6dec8 = FUN_146825d77;
    _DAT_14ca6ded0 = FUN_146825fd6;
    _DAT_14ca6ded8 = FUN_1407e02ea;
    _DAT_14ca6dee0 = FUN_146826273;
    _DAT_14ca6deb8 = FUN_14733f702;
    _DAT_14ca6def8 = 0xffffffff00000108;
    _DAT_14ca6df00 = 8;
    DAT_14ca6df04 = 0;
    _DAT_14ca6dee8 = &LAB_14733f738;
    FUN_1457afd3c();
    FUN_1407e00cc(&DAT_14ca6dea0);
    return;
  }
  return;
}



// FUNCTION 1457afd3c FUN_1457afd3c body=123 status=ok
// SIG undefined FUN_1457afd3c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457afd3c(void)

{
  _DAT_14ca718f0 = L"BASE";
  DAT_14ca7191a = 4;
  _DAT_14ca718f8 = FUN_141092e92();
  _DAT_14ca71900 = DAT_14ca6deb0;
  _DAT_14ca71908 = &LAB_14682652b;
  DAT_14ca6deb0 = &DAT_14ca718f0;
  DAT_14ca6df05 = DAT_14ca6df05 + '\x01';
  _DAT_14ca71910 = 0x100000000;
  if (*(char *)(_DAT_14ca718f8 + 100) != '\0') {
    DAT_14ca6df06 = DAT_14ca6df06 + '\x01';
  }
  return;
}



// FUNCTION 1457afdb8 FUN_1457afdb8 body=205 status=ok
// SIG undefined FUN_1457afdb8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457afdb8(void)

{
  if ((DAT_14ca6e02f & 2) == 0) {
    DAT_14ca6e02f = DAT_14ca6e02f | 2;
    _DAT_14ca6dfd0 = L"TVirtualTextureVSBaseColorNormalRoughness";
    _DAT_14ca6dfe8 = FUN_146826540;
    _DAT_14ca6dff0 = FUN_146825d77;
    _DAT_14ca6dff8 = FUN_146825fd6;
    _DAT_14ca6e000 = FUN_1407e02ea;
    _DAT_14ca6e008 = FUN_146826273;
    _DAT_14ca6dfe0 = FUN_14733f7a4;
    _DAT_14ca6e020 = 0xffffffff00000108;
    _DAT_14ca6e028 = 8;
    DAT_14ca6e02c = 0;
    _DAT_14ca6e010 = &LAB_14733f7da;
    FUN_1457afe86();
    FUN_1407e00cc(&DAT_14ca6dfc8);
    return;
  }
  return;
}



// FUNCTION 1457afe86 FUN_1457afe86 body=123 status=ok
// SIG undefined FUN_1457afe86(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457afe86(void)

{
  _DAT_14ca71920 = L"BASE";
  DAT_14ca7194a = 4;
  _DAT_14ca71928 = FUN_141092e92();
  _DAT_14ca71930 = DAT_14ca6dfd8;
  _DAT_14ca71938 = &LAB_14682652b;
  DAT_14ca6dfd8 = &DAT_14ca71920;
  DAT_14ca6e02d = DAT_14ca6e02d + '\x01';
  _DAT_14ca71940 = 0x100000000;
  if (*(char *)(_DAT_14ca71928 + 100) != '\0') {
    DAT_14ca6e02e = DAT_14ca6e02e + '\x01';
  }
  return;
}



// FUNCTION 1457aff02 FUN_1457aff02 body=205 status=ok
// SIG undefined FUN_1457aff02(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457aff02(void)

{
  if ((DAT_14ca6e157 & 2) == 0) {
    DAT_14ca6e157 = DAT_14ca6e157 | 2;
    _DAT_14ca6e0f8 = L"TVirtualTexturePSBaseColorNormalRoughness";
    _DAT_14ca6e110 = FUN_146826540;
    _DAT_14ca6e118 = FUN_146825d77;
    _DAT_14ca6e120 = FUN_146825fd6;
    _DAT_14ca6e128 = FUN_1407e02ea;
    _DAT_14ca6e130 = FUN_146826273;
    _DAT_14ca6e108 = FUN_14733f846;
    _DAT_14ca6e148 = 0xffffffff00000108;
    _DAT_14ca6e150 = 8;
    DAT_14ca6e154 = 0;
    _DAT_14ca6e138 = &LAB_14733f87c;
    FUN_1457affd0();
    FUN_1407e00cc(&DAT_14ca6e0f0);
    return;
  }
  return;
}



// FUNCTION 1457affd0 FUN_1457affd0 body=123 status=ok
// SIG undefined FUN_1457affd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457affd0(void)

{
  _DAT_14ca71950 = L"BASE";
  DAT_14ca7197a = 4;
  _DAT_14ca71958 = FUN_141092e92();
  _DAT_14ca71960 = DAT_14ca6e100;
  _DAT_14ca71968 = &LAB_14682652b;
  DAT_14ca6e100 = &DAT_14ca71950;
  DAT_14ca6e155 = DAT_14ca6e155 + '\x01';
  _DAT_14ca71970 = 0x100000000;
  if (*(char *)(_DAT_14ca71958 + 100) != '\0') {
    DAT_14ca6e156 = DAT_14ca6e156 + '\x01';
  }
  return;
}



// FUNCTION 1457b004c FUN_1457b004c body=205 status=ok
// SIG undefined FUN_1457b004c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457b004c(void)

{
  if ((DAT_14ca6e4cf & 2) == 0) {
    DAT_14ca6e4cf = DAT_14ca6e4cf | 2;
    _DAT_14ca6e470 = L"TVirtualTextureVSMask4";
    _DAT_14ca6e488 = FUN_146826540;
    _DAT_14ca6e490 = FUN_146825d77;
    _DAT_14ca6e498 = FUN_146825fd6;
    _DAT_14ca6e4a0 = FUN_1407e02ea;
    _DAT_14ca6e4a8 = FUN_146826273;
    _DAT_14ca6e480 = FUN_14733fa2c;
    _DAT_14ca6e4c0 = 0xffffffff00000108;
    _DAT_14ca6e4c8 = 8;
    DAT_14ca6e4cc = 0;
    _DAT_14ca6e4b0 = &LAB_14733fa62;
    FUN_1457b011a();
    FUN_1407e00cc(&DAT_14ca6e468);
    return;
  }
  return;
}



// FUNCTION 1457b011a FUN_1457b011a body=123 status=ok
// SIG undefined FUN_1457b011a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457b011a(void)

{
  _DAT_14ca719e0 = L"BASE";
  DAT_14ca71a0a = 4;
  _DAT_14ca719e8 = FUN_141092e92();
  _DAT_14ca719f0 = DAT_14ca6e478;
  _DAT_14ca719f8 = &LAB_14682652b;
  DAT_14ca6e478 = &DAT_14ca719e0;
  DAT_14ca6e4cd = DAT_14ca6e4cd + '\x01';
  _DAT_14ca71a00 = 0x100000000;
  if (*(char *)(_DAT_14ca719e8 + 100) != '\0') {
    DAT_14ca6e4ce = DAT_14ca6e4ce + '\x01';
  }
  return;
}



// FUNCTION 1457b0196 FUN_1457b0196 body=205 status=ok
// SIG undefined FUN_1457b0196(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457b0196(void)

{
  if ((DAT_14ca6e5f7 & 2) == 0) {
    DAT_14ca6e5f7 = DAT_14ca6e5f7 | 2;
    _DAT_14ca6e598 = L"TVirtualTexturePSMask4";
    _DAT_14ca6e5b0 = FUN_146826540;
    _DAT_14ca6e5b8 = FUN_146825d77;
    _DAT_14ca6e5c0 = FUN_146825fd6;
    _DAT_14ca6e5c8 = FUN_1407e02ea;
    _DAT_14ca6e5d0 = FUN_146826273;
    _DAT_14ca6e5a8 = FUN_14733face;
    _DAT_14ca6e5e8 = 0xffffffff00000108;
    _DAT_14ca6e5f0 = 8;
    DAT_14ca6e5f4 = 0;
    _DAT_14ca6e5d8 = &LAB_14733fb04;
    FUN_1457b0264();
    FUN_1407e00cc(&DAT_14ca6e590);
    return;
  }
  return;
}



// FUNCTION 1457b0264 FUN_1457b0264 body=123 status=ok
// SIG undefined FUN_1457b0264(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457b0264(void)

{
  _DAT_14ca71a10 = L"BASE";
  DAT_14ca71a3a = 4;
  _DAT_14ca71a18 = FUN_141092e92();
  _DAT_14ca71a20 = DAT_14ca6e5a0;
  _DAT_14ca71a28 = &LAB_14682652b;
  DAT_14ca6e5a0 = &DAT_14ca71a10;
  DAT_14ca6e5f5 = DAT_14ca6e5f5 + '\x01';
  _DAT_14ca71a30 = 0x100000000;
  if (*(char *)(_DAT_14ca71a18 + 100) != '\0') {
    DAT_14ca6e5f6 = DAT_14ca6e5f6 + '\x01';
  }
  return;
}



// FUNCTION 1457b02e0 FUN_1457b02e0 body=205 status=ok
// SIG undefined FUN_1457b02e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457b02e0(void)

{
  if ((DAT_14ca6e96f & 2) == 0) {
    DAT_14ca6e96f = DAT_14ca6e96f | 2;
    _DAT_14ca6e910 = L"TVirtualTextureVSDisplacement";
    _DAT_14ca6e928 = FUN_146826540;
    _DAT_14ca6e930 = FUN_146825d77;
    _DAT_14ca6e938 = FUN_146825fd6;
    _DAT_14ca6e940 = FUN_1407e02ea;
    _DAT_14ca6e948 = FUN_146826273;
    _DAT_14ca6e920 = FUN_14733fcb4;
    _DAT_14ca6e960 = 0xffffffff00000108;
    _DAT_14ca6e968 = 8;
    DAT_14ca6e96c = 0;
    _DAT_14ca6e950 = &LAB_14733fcea;
    FUN_1457b03ae();
    FUN_1407e00cc(&DAT_14ca6e908);
    return;
  }
  return;
}



// FUNCTION 1457b03ae FUN_1457b03ae body=123 status=ok
// SIG undefined FUN_1457b03ae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457b03ae(void)

{
  _DAT_14ca71aa0 = L"BASE";
  DAT_14ca71aca = 4;
  _DAT_14ca71aa8 = FUN_141092e92();
  _DAT_14ca71ab0 = DAT_14ca6e918;
  _DAT_14ca71ab8 = &LAB_14682652b;
  DAT_14ca6e918 = &DAT_14ca71aa0;
  DAT_14ca6e96d = DAT_14ca6e96d + '\x01';
  _DAT_14ca71ac0 = 0x100000000;
  if (*(char *)(_DAT_14ca71aa8 + 100) != '\0') {
    DAT_14ca6e96e = DAT_14ca6e96e + '\x01';
  }
  return;
}



// FUNCTION 1457b042a FUN_1457b042a body=205 status=ok
// SIG undefined FUN_1457b042a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457b042a(void)

{
  if ((DAT_14ca6ea97 & 2) == 0) {
    DAT_14ca6ea97 = DAT_14ca6ea97 | 2;
    _DAT_14ca6ea38 = L"TVirtualTexturePSDisplacement";
    _DAT_14ca6ea50 = FUN_146826540;
    _DAT_14ca6ea58 = FUN_146825d77;
    _DAT_14ca6ea60 = FUN_146825fd6;
    _DAT_14ca6ea68 = FUN_1407e02ea;
    _DAT_14ca6ea70 = FUN_146826273;
    _DAT_14ca6ea48 = FUN_14733fd56;
    _DAT_14ca6ea88 = 0xffffffff00000108;
    _DAT_14ca6ea90 = 8;
    DAT_14ca6ea94 = 0;
    _DAT_14ca6ea78 = &LAB_14733fd8c;
    FUN_1457b04f8();
    FUN_1407e00cc(&DAT_14ca6ea30);
    return;
  }
  return;
}



// FUNCTION 1457b04f8 FUN_1457b04f8 body=123 status=ok
// SIG undefined FUN_1457b04f8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457b04f8(void)

{
  _DAT_14ca71ad0 = L"BASE";
  DAT_14ca71afa = 4;
  _DAT_14ca71ad8 = FUN_141092e92();
  _DAT_14ca71ae0 = DAT_14ca6ea40;
  _DAT_14ca71ae8 = &LAB_14682652b;
  DAT_14ca6ea40 = &DAT_14ca71ad0;
  DAT_14ca6ea95 = DAT_14ca6ea95 + '\x01';
  _DAT_14ca71af0 = 0x100000000;
  if (*(char *)(_DAT_14ca71ad8 + 100) != '\0') {
    DAT_14ca6ea96 = DAT_14ca6ea96 + '\x01';
  }
  return;
}



// FUNCTION 1457b0574 FUN_1457b0574 body=229 status=ok
// SIG undefined FUN_1457b0574(void)

void FUN_1457b0574(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  ushort *puVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1448d5e3c(&local_38,param_1 + 0x208);
  lVar3 = *(longlong *)(local_38 + 0x3e0);
  AcquireSRWLockShared((PSRWLOCK)(lVar3 + 0xc0));
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
  lVar4 = *(longlong *)(param_1 + 0x288);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x314) != *(int *)(lVar3 + 0x24)) {
      *(undefined1 *)(lVar4 + 0x310) = *(undefined1 *)(lVar3 + 0x20);
      *(undefined4 *)(lVar4 + 0x314) = *(undefined4 *)(lVar3 + 0x24);
    }
    puVar5 = *(ushort **)(lVar4 + 0x80);
    if (puVar5 != (ushort *)0x0) {
      *puVar5 = *puVar5 | (ushort)(1L << (*(byte *)(lVar4 + 0x78) & 0x3f));
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)(lVar3 + 0xc0));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457b065a FUN_1457b065a body=93 status=ok
// SIG undefined FUN_1457b065a(void)

undefined8 * FUN_1457b065a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140dd876d(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1457b06b8(param_1,iVar1);
      FUN_140dd87ac(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1457b06b8 FUN_1457b06b8 body=100 status=ok
// SIG undefined FUN_1457b06b8(void)

void FUN_1457b06b8(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 6,8);
    iVar1 = (int)(uVar2 >> 6);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x40,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1457b071c FUN_1457b071c body=346 status=ok
// SIG undefined FUN_1457b071c(void)

undefined8 * FUN_1457b071c(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined1 *)(param_1 + 1) = 0;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar3 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Lumen.Supported",1);
  if (plVar3 == (longlong *)0x0) {
    bVar5 = false;
  }
  else {
    iVar2 = (**(code **)(*plVar3 + 0xb0))(plVar3);
    bVar5 = iVar2 != 0;
  }
  *(bool *)(param_1 + 1) = bVar5;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar3 = (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Lumen.DiffuseIndirect.Allow",1);
  if ((plVar3 != (longlong *)0x0) && (*(char *)(param_1 + 1) != '\0')) {
    local_38 = (undefined8 *)0x0;
    local_30 = 0;
    FUN_1446efa72(&local_38,0,2,0x10);
    puVar1 = local_38;
    local_30 = 2;
    *local_38 = &PTR_LAB_149e170a0;
    uVar4 = FUN_144a3f946();
    puVar1[2] = uVar4;
    *puVar1 = &PTR_FUN_149e17030;
    puVar1[3] = FUN_14324d8f8;
    (**(code **)(*plVar3 + 200))(plVar3,&local_38);
    FUN_1449db362(&local_38);
  }
  uVar4 = (**(code **)(*plVar3 + 0x68))(plVar3);
  *param_1 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457b0878 FUN_1457b0878 body=132 status=ok
// SIG undefined FUN_1457b0878(void)

void FUN_1457b0878(longlong param_1,int param_2)

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



// FUNCTION 1457b0904 FUN_1457b0904 body=844 status=ok
// SIG undefined FUN_1457b0904(void)

void FUN_1457b0904(longlong param_1,undefined8 *param_2,char param_3)

{
  longlong lVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  char local_c9;
  longlong *local_c8;
  longlong local_c0;
  undefined1 local_b4 [12];
  byte *local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong *local_70;
  undefined4 local_68;
  uint uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar1 = param_1 + 0x38;
  local_c9 = param_3;
  FUN_1411657fa(param_1,lVar1,param_3 == '\x01');
  local_c0 = lVar1;
  FUN_140dddb46(param_1,lVar1,param_3 == '\x01');
  if (((byte *)*param_2 != (byte *)0x0) && ((*(byte *)*param_2 & 3) != 0)) {
    cVar5 = FUN_140dddae6(param_2);
    if (cVar5 != '\0') {
      uStack_90 = (longlong *)CONCAT44(uStack_90._4_4_,DAT_14cb76468);
      local_98 = DAT_14cb76460;
      FUN_1448075d0(&local_70);
      puVar8 = (undefined8 *)FUN_144a06846(param_2,&local_70);
      local_a8 = (byte *)*puVar8;
      local_a0 = (longlong *)puVar8[1];
      if (local_a0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
        UNLOCK();
      }
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      if ((local_a8 != (byte *)0x0) && ((*local_a8 & 3) != 0)) {
        cVar5 = FUN_140dddae6(&local_a8);
        if (cVar5 != '\0') {
          plVar9 = (longlong *)FUN_140dddafc(&local_a8);
          local_c8 = plVar9 + 3;
          local_98 = 0x100000000;
          local_88 = 0xffffffff;
          uStack_80 = 0;
          uStack_90 = local_c8;
          if ((int)plVar9[6] == 0) {
            iVar11 = 0;
          }
          else {
            FUN_1449c0562(&local_98);
            iVar11 = (int)plVar9[6];
          }
          uStack_50 = CONCAT44(uStack_7c,uStack_80);
          local_58 = local_88;
          lVar1 = local_58;
          local_68 = (undefined4)local_98;
          uStack_64 = local_98._4_4_;
          uStack_60 = (undefined4)uStack_90;
          uStack_5c = uStack_90._4_4_;
          local_58._4_4_ = (int)((ulonglong)local_88 >> 0x20);
          iVar6 = local_58._4_4_;
          local_70 = plVar9;
          if ((local_58._4_4_ != iVar11) || (local_58 = lVar1, uStack_90 != local_c8)) {
            do {
              local_58 = lVar1;
              lVar1 = *local_70;
              lVar12 = (longlong)iVar6 * 0x40;
              if ((*(int *)(lVar1 + lVar12) != 0) &&
                 ((lVar4 = lVar1 + lVar12, *(int *)(lVar4 + 4) != 0 &&
                  (*(int *)(lVar1 + lVar12) != DAT_14c948000)))) {
                FUN_144a7660c(lVar4,local_b4,1);
                FUN_1448075d0(&local_98,local_b4);
                if (DAT_14cb758b8 == 0) {
                  if (CONCAT44(uStack_7c,uStack_80) != 0) {
                    FUN_1400020a8();
                  }
                }
                else {
                  lVar10 = FUN_144837462(DAT_14cb758b8,&local_98);
                  if (CONCAT44(uStack_7c,uStack_80) != 0) {
                    FUN_1400020a8();
                  }
                  if (((lVar10 != 0) && (*(char *)(lVar10 + 0x48) == '\0')) &&
                     (*(char *)(lVar10 + 0x41) == local_c9)) {
                    uVar7 = FUN_140dddb1a(lVar1 + lVar12 + 0x28,0);
                    FUN_144a7660c(lVar4,&local_98,1);
                    local_d8 = 1;
                    FUN_14105a17e(param_1,&local_98,uVar7,local_c0);
                  }
                }
              }
              local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~uStack_64);
              FUN_1449c0562(&local_68);
              iVar6 = local_58._4_4_;
              lVar1 = local_58;
            } while (local_70 != plVar9 ||
                     ((longlong *)CONCAT44(uStack_5c,uStack_60) != local_c8 ||
                     local_58._4_4_ != iVar11));
          }
        }
      }
      plVar9 = local_a0;
      if (local_a0 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_a0 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_a0)(local_a0);
          LOCK();
          piVar3 = (int *)((longlong)plVar9 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457b0c52 FUN_1457b0c52 body=146 status=ok
// SIG undefined FUN_1457b0c52(void)

void FUN_1457b0c52(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  longlong local_48;
  code *local_40;
  longlong *local_38;
  code **local_30;
  code *local_28;
  undefined8 **local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) != 0) {
    FUN_14881c864(param_2,0);
  }
  local_38 = &local_48;
  local_30 = &local_40;
  local_40 = FUN_140dde05c;
  local_20 = &local_30;
  local_28 = FUN_140dde018;
  local_48 = param_2;
  FUN_140dddc5a(param_1,&local_28,1);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457b0ce6 FUN_1457b0ce6 body=132 status=ok
// SIG undefined FUN_1457b0ce6(void)

void FUN_1457b0ce6(longlong param_1,int param_2)

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



// FUNCTION 1457b0d6c FUN_1457b0d6c body=173 status=ok
// SIG undefined FUN_1457b0d6c(void)

undefined4 FUN_1457b0d6c(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 8))(param_1,&local_40);
  FUN_140ddec60(param_2,&local_40);
  lVar2 = local_40;
  if ((longlong)local_38 == 0) {
    uVar4 = 0;
  }
  else {
    lVar5 = 0;
    uVar4 = 0;
    do {
      uVar1 = *(undefined8 *)(lVar2 + lVar5);
      iVar3 = FUN_144a788f7();
      uVar4 = FUN_144a78877(uVar4,(int)((ulonglong)uVar1 >> 0x20) + iVar3);
      lVar5 = lVar5 + 8;
    } while ((longlong)local_38 * 8 != lVar5);
  }
  if (local_40 != 0) {
    FUN_1400020a8(local_40);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1457b0e1a FUN_1457b0e1a body=380 status=ok
// SIG undefined FUN_1457b0e1a(void)

void FUN_1457b0e1a(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 0xb84) == (char)param_2) goto LAB_1457b0e3a;
  *(char *)(param_1 + 0xb84) = (char)param_2;
  lVar1 = *(longlong *)(param_1 + 0x3c0);
  if ((lVar1 == 0) || (*(longlong *)(param_1 + 0xab8) == 0)) goto LAB_1457b0e3a;
  FUN_140056680(local_38,L"PostProcessing");
  FUN_140de354c(lVar1,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0xb84) == '\x01') {
    if ((*(longlong *)(param_1 + 0xab8) == 0) || (*(longlong *)(param_1 + 0xb60) == 0))
    goto LAB_1457b0e3a;
    FUN_14472da24(*(longlong *)(param_1 + 0xab8),*(longlong *)(param_1 + 0xb60),
                  *(undefined4 *)(param_1 + 0xb70));
    lVar1 = *(longlong *)(param_1 + 0x3c0);
    local_48 = *(longlong *)(param_1 + 0xab8);
    if ((local_48 == 0) || (DAT_14c950c29 == '\0')) {
      if (local_48 != 0) goto LAB_1457b0f0c;
      local_40 = 0;
    }
    else {
      FUN_1456cec3c(local_48);
LAB_1457b0f0c:
      local_40 = local_48 + 0x28;
    }
    FUN_145bd965a(lVar1 + 0x3c0,&local_48,0x3f800000);
    goto LAB_1457b0e3a;
  }
  lVar1 = *(longlong *)(param_1 + 0x3c0);
  lVar2 = *(longlong *)(param_1 + 0xab8);
  if ((lVar2 == 0) || (DAT_14c950c29 == '\0')) {
    if (lVar2 != 0) goto LAB_1457b0f5c;
    local_50 = 0;
  }
  else {
    FUN_1456cec3c(lVar2);
LAB_1457b0f5c:
    local_50 = lVar2 + 0x28;
  }
  local_58 = lVar2;
  FUN_14789f084(lVar1 + 0x3c0);
LAB_1457b0e3a:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457b0f98 FUN_1457b0f98 body=147 status=ok
// SIG undefined FUN_1457b0f98(void)

void FUN_1457b0f98(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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



// FUNCTION 1457b1034 FUN_1457b1034 body=27 status=ok
// SIG undefined FUN_1457b1034(void)

undefined8 FUN_1457b1034(longlong param_1)

{
  if (((*(uint *)(param_1 + 8) & 0x10) == 0) && (*(longlong *)(param_1 + 0x20) != 0)) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xc30);
  }
  return 0;
}



// FUNCTION 1457b1050 FUN_1457b1050 body=136 status=ok
// SIG undefined FUN_1457b1050(void)

void FUN_1457b1050(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x50);
  if (lVar4 == 0) {
    uVar3 = FUN_140dddfde();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x50) = lVar4;
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    return;
  }
  if (lVar4 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
      uVar3 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0x48));
    }
    *(undefined8 *)(param_1 + 0x58) = uVar3;
    return;
  }
  return;
}



// FUNCTION 1457b10d8 FUN_1457b10d8 body=51 status=ok
// SIG undefined FUN_1457b10d8(void)

undefined8 FUN_1457b10d8(ushort *param_1)

{
  char cVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)*param_1;
  cVar1 = FUN_140de9106(uVar3);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)(uVar3 * 0x3c >> 8),(&DAT_14ca814b8)[uVar3 * 0xf] != 1);
  }
  return uVar2;
}



// FUNCTION 1457b1116 FUN_1457b1116 body=24 status=ok
// SIG undefined FUN_1457b1116(void)

bool FUN_1457b1116(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1457b112e FUN_1457b112e body=108 status=ok
// SIG undefined FUN_1457b112e(void)

void FUN_1457b112e(longlong *param_1,uint param_2,char param_3)

{
  int iVar1;
  void *_Dst;
  
  _Dst = (void *)((longlong)(int)param_2 * 0x10 + *param_1);
  FUN_1449db362(_Dst);
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(int)(~param_2 + iVar1) << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  if (param_3 == '\x01') {
    FUN_1457b119a(param_1);
    return;
  }
  return;
}



// FUNCTION 1457b119a FUN_1457b119a body=63 status=ok
// SIG undefined FUN_1457b119a(void)

void FUN_1457b119a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1457b11da(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 1457b11da FUN_1457b11da body=93 status=ok
// SIG undefined FUN_1457b11da(void)

ulonglong FUN_1457b11da(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if ((((longlong)(int)(param_3 - param_2) & 0xffffffffffffc00U) == 0) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 1457b1238 FUN_1457b1238 body=148 status=ok
// SIG undefined FUN_1457b1238(void)

bool FUN_1457b1238(longlong param_1)

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



// FUNCTION 1457b12ce FUN_1457b12ce body=329 status=ok
// SIG undefined FUN_1457b12ce(void)

undefined4 *
FUN_1457b12ce(longlong param_1,undefined4 *param_2,ulonglong *param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1457b14ae(param_1,local_50);
  uVar3 = *param_3;
  *local_48 = uVar3;
  *(undefined4 *)(local_48 + 1) = 0xffffffff;
  local_54 = local_50[0];
  uVar2 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  local_68 = param_4;
  cVar1 = FUN_1457b1418(param_1,uVar2,local_48);
  if (cVar1 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar4) {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar2 = *(int *)(param_1 + 0x48) - 1U & uVar2;
      *(uint *)((longlong)local_48 + 0xc) = uVar2;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 1) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1457b1594(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457b1418 FUN_1457b1418 body=149 status=ok
// SIG undefined FUN_1457b1418(void)

void FUN_1457b1418(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined1 uVar1;
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
        plVar2 = (longlong *)(*param_1 + (longlong)iVar3 * 0x10);
        if (*(longlong *)(*param_1 + (longlong)iVar3 * 0x10) == *param_3) {
          *plVar2 = *param_3;
          FUN_146862794(param_1,*param_4,1);
          *param_4 = iVar3;
          uVar1 = 1;
          break;
        }
        iVar3 = (int)plVar2[1];
        uVar1 = 0;
      } while (iVar3 != -1);
      goto LAB_1457b143c;
    }
  }
  uVar1 = 0;
LAB_1457b143c:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 1457b14ae FUN_1457b14ae body=230 status=ok
// SIG undefined FUN_1457b14ae(void)

int * FUN_1457b14ae(longlong *param_1,int *param_2)

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



// FUNCTION 1457b1594 FUN_1457b1594 body=486 status=ok
// SIG undefined FUN_1457b1594(void)

void FUN_1457b1594(longlong *param_1)

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



// FUNCTION 1457b177c FUN_1457b177c body=168 status=ok
// SIG undefined FUN_1457b177c(void)

longlong * FUN_1457b177c(longlong *param_1)

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
  uVar2 = FUN_144a79692();
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



// FUNCTION 1457b1826 FUN_1457b1826 body=126 status=ok
// SIG undefined FUN_1457b1826(void)

longlong * FUN_1457b1826(longlong *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  uVar1 = FUN_14482ca40();
  uVar2 = FUN_1402d2740();
  FUN_14123d74c(uVar2,param_1,param_3,param_2,uVar1 | param_4 | 0x90000000);
  lVar3 = (longlong)(int)param_1[2];
  do {
    lVar3 = lVar3 + 1;
    *(int *)(param_1 + 2) = (int)lVar3;
    if ((int)param_1[1] <= lVar3) {
      return param_1;
    }
  } while (*(longlong *)(*param_1 + lVar3 * 8) == 0);
  return param_1;
}



// FUNCTION 1457b18a4 FUN_1457b18a4 body=188 status=ok
// SIG undefined FUN_1457b18a4(void)

void FUN_1457b18a4(undefined4 param_1,undefined4 param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  bool bVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  uVar4 = (ulonglong)DAT_14c867958;
  if ((longlong)uVar4 < 1) {
    return;
  }
  bVar5 = false;
  DAT_14c867964 = DAT_14c867964 + 1;
  do {
    lVar6 = uVar4 * 0x10 + -8;
    uVar7 = uVar4;
    while (((*(int *)(DAT_14c867950 + lVar6) != 0 &&
            (plVar1 = *(longlong **)(DAT_14c867950 + -8 + lVar6), plVar1 != (longlong *)0x0)) &&
           (cVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,param_1,param_2), cVar3 != '\0'))) {
      lVar6 = lVar6 + -0x10;
      bVar2 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar2) {
        DAT_14c867964 = DAT_14c867964 + -1;
        if (!bVar5) {
          return;
        }
        goto LAB_1457b1947;
      }
    }
    uVar4 = uVar7 - 1;
    bVar5 = true;
  } while (1 < uVar7);
  DAT_14c867964 = DAT_14c867964 + -1;
LAB_1457b1947:
  FUN_14474d06a(&DAT_14c867950,0);
  return;
}



// FUNCTION 1457b1960 FUN_1457b1960 body=138 status=ok
// SIG undefined FUN_1457b1960(void)

void FUN_1457b1960(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  
  if (((*(longlong *)(param_1 + 0x298) != 0) && (*(longlong *)(param_1 + 0x3a0) != 0)) &&
     (plVar2 = *(longlong **)(param_1 + 0x3a8), plVar2 != (longlong *)0x0)) {
    if (((((*(int *)(param_1 + 0x9e8) != 0) ||
          ((FUN_1457b1a54(param_1), *(longlong *)(param_1 + 0x3a0) != 0 &&
           (plVar2 = *(longlong **)(param_1 + 0x3a8), plVar2 != (longlong *)0x0)))) &&
         (cVar1 = (**(code **)(*plVar2 + 0x28))(), cVar1 != '\0')) &&
        (cVar1 = FUN_1457b19ea(param_1), cVar1 == '\0')) || (*(int *)(param_1 + 0x9e8) == 2)) {
      FUN_140defd10(param_1);
      return;
    }
    *(undefined1 *)(param_1 + 0xa00) = 1;
  }
  return;
}



// FUNCTION 1457b19ea FUN_1457b19ea body=106 status=ok
// SIG undefined FUN_1457b19ea(void)

undefined4 FUN_1457b19ea(undefined8 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_144a6c4d8();
  lVar4 = FUN_144a78ede(param_1,uVar3);
  if (((lVar4 == 0) || ((*(uint *)(lVar4 + 8) >> 0x1e & 1) != 0)) ||
     (*(char *)(lVar4 + 0x178) != '\x03')) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(uint *)(lVar4 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    uVar2 = CONCAT31((int3)(*(uint *)(lVar4 + 8) >> 8),(*(uint *)(lVar4 + 8) >> 0x1c & 1) == 0);
  }
  return uVar2;
}



// FUNCTION 1457b1a54 FUN_1457b1a54 body=47 status=ok
// SIG undefined FUN_1457b1a54(void)

void FUN_1457b1a54(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cb601f0);
                    /* WARNING: Could not recover jumptable at 0x0001457b1a80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 1457b1a84 FUN_1457b1a84 body=58 status=ok
// SIG undefined FUN_1457b1a84(void)

void FUN_1457b1a84(longlong *param_1)

{
  if (*(char *)((longlong)param_1 + 0x94) != '\x02') {
    return;
  }
  *(undefined1 *)((longlong)param_1 + 0x94) = 1;
  (**(code **)(*param_1 + 0x18))();
  FUN_140df5ba6(param_1 + 4);
  FUN_140df59dc(param_1);
  return;
}



// FUNCTION 1457b1aca FUN_1457b1aca body=40 status=ok
// SIG undefined FUN_1457b1aca(void)

undefined8 FUN_1457b1aca(undefined8 param_1,int param_2)

{
  FUN_1457b1af2();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457b1af2 FUN_1457b1af2 body=262 status=ok
// SIG undefined FUN_1457b1af2(void)

void FUN_1457b1af2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b36ef80;
  if (param_1[0x88] != 0) {
    FUN_1400020a8();
  }
  FUN_1457b1c4c(param_1 + 0x7e);
  FUN_1457b1bf8(param_1 + 0x78);
  FUN_140df63e1(param_1[0x76],*(undefined4 *)(param_1 + 0x77));
  if (param_1[0x76] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x74] != 0) {
    FUN_1400020a8();
  }
  FUN_140df6446(param_1[0x72],*(undefined4 *)(param_1 + 0x73));
  if (param_1[0x72] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x70] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x6e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x6c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x6a] != 0) {
    FUN_1400020a8();
  }
  FUN_140df63b0(param_1[0x68],*(undefined4 *)(param_1 + 0x69));
  if (param_1[0x68] != 0) {
    FUN_1400020a8();
  }
  FUN_1406d02ae(param_1);
  return;
}



// FUNCTION 1457b1bf8 FUN_1457b1bf8 body=84 status=ok
// SIG undefined FUN_1457b1bf8(void)

void FUN_1457b1bf8(longlong *param_1)

{
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_140df648f(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_140df64ba(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1457b1c4c FUN_1457b1c4c body=112 status=ok
// SIG undefined FUN_1457b1c4c(void)

void FUN_1457b1c4c(longlong *param_1)

{
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_1405d7ab2(param_1[6],(int)param_1[7]);
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_140595ef6(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1457b1cbc FUN_1457b1cbc body=88 status=ok
// SIG undefined FUN_1457b1cbc(void)

void FUN_1457b1cbc(longlong param_1)

{
  FUN_140df7966();
  FUN_140bd5056(*(undefined8 *)(param_1 + 0x398),*(undefined4 *)(param_1 + 0x3a0));
  *(undefined4 *)(param_1 + 0x3a0) = 0;
  if (*(int *)(param_1 + 0x3a4) != 0) {
    FUN_140395806(param_1 + 0x398,0);
  }
  FUN_140df79be(param_1 + 0x3a8,0);
  return;
}



// FUNCTION 1457b1d14 FUN_1457b1d14 body=98 status=ok
// SIG undefined FUN_1457b1d14(void)

undefined8 * FUN_1457b1d14(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN_140dfac6a(param_1);
  FUN_140dfac6a(param_1);
  *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) & 0xfe;
  return param_1;
}



// FUNCTION 1457b1d76 FUN_1457b1d76 body=406 status=ok
// SIG undefined FUN_1457b1d76(void)

undefined4 * FUN_1457b1d76(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined4 uVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1457b1f0e(param_1,local_40);
  puVar2 = (undefined8 *)*param_3;
  puVar3 = (undefined8 *)param_3[1];
  *local_38 = *puVar2;
  lVar12 = puVar2[1];
  local_38[1] = lVar12;
  if (lVar12 != 0) {
    LOCK();
    *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
    UNLOCK();
  }
  local_38[2] = *puVar3;
  lVar12 = puVar3[1];
  local_38[3] = lVar12;
  if (lVar12 != 0) {
    LOCK();
    *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(local_38 + 4) = 0xffffffff;
  local_44 = local_40[0];
  plVar4 = (longlong *)*local_38;
  plVar5 = (longlong *)local_38[1];
  if (plVar5 == (longlong *)0x0) {
    uVar8 = (**(code **)(*plVar4 + 0x40))();
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    uVar8 = (**(code **)(*plVar4 + 0x40))();
    LOCK();
    plVar4 = plVar5 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  cVar7 = FUN_1457b2002(param_1,uVar8,local_38,&local_44);
  uVar6 = local_44;
  if (cVar7 == '\0') {
    uVar9 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar9 < 4) {
      iVar11 = 1;
    }
    else {
      uVar10 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
      lVar12 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar12 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar11 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_38 + 0x24) = uVar8;
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 4) =
           *(undefined4 *)
            (lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar11;
      FUN_1457b20f6(param_1);
    }
  }
  *param_2 = uVar6;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457b1f0e FUN_1457b1f0e body=243 status=ok
// SIG undefined FUN_1457b1f0e(void)

int * FUN_1457b1f0e(longlong *param_1,int *param_2)

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
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x28) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 1457b2002 FUN_1457b2002 body=242 status=ok
// SIG undefined FUN_1457b2002(void)

undefined8 FUN_1457b2002(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined8 uVar13;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_40 = *param_3;
    plVar4 = (longlong *)param_3[1];
    local_38 = plVar4;
    if (plVar4 == (longlong *)0x0) {
      iVar12 = FUN_140e74adc(param_1,param_2,&local_40);
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      iVar12 = FUN_140e74adc(param_1);
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
    if (iVar12 != -1) {
      puVar3 = (undefined4 *)(*param_1 + (longlong)iVar12 * 0x28);
      FUN_145a6055c(puVar3);
      uVar5 = *(undefined4 *)param_3;
      uVar6 = *(undefined4 *)((longlong)param_3 + 4);
      uVar7 = *(undefined4 *)(param_3 + 1);
      uVar8 = *(undefined4 *)((longlong)param_3 + 0xc);
      uVar9 = *(undefined4 *)((longlong)param_3 + 0x14);
      uVar10 = *(undefined4 *)(param_3 + 3);
      uVar11 = *(undefined4 *)((longlong)param_3 + 0x1c);
      puVar3[4] = *(undefined4 *)(param_3 + 2);
      puVar3[5] = uVar9;
      puVar3[6] = uVar10;
      puVar3[7] = uVar11;
      *puVar3 = uVar5;
      puVar3[1] = uVar6;
      puVar3[2] = uVar7;
      puVar3[3] = uVar8;
      FUN_148fb9e50(param_1,*param_4);
      *param_4 = iVar12;
      uVar13 = 1;
      goto LAB_1457b206f;
    }
  }
  uVar13 = 0;
LAB_1457b206f:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457b20f6 FUN_1457b20f6 body=501 status=ok
// SIG undefined FUN_1457b20f6(void)

void FUN_1457b20f6(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar6 = local_68;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar11 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(undefined4 *)((longlong)plVar10 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar3 != uVar11);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_58);
    }
    local_78 = local_58;
    local_70 = local_50;
    local_68 = local_48;
    uVar6 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = param_1;
    if (local_68._4_4_ < (int)local_50[3]) {
      iVar12 = local_68._4_4_;
      local_68 = uVar6;
      do {
        lVar4 = *local_80;
        lVar9 = (longlong)iVar12;
        plVar10 = *(longlong **)(lVar4 + lVar9 * 0x28);
        plVar5 = *(longlong **)(lVar4 + 8 + lVar9 * 0x28);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        lVar4 = lVar4 + lVar9 * 0x28;
        iVar7 = (**(code **)(*plVar10 + 0x40))();
        uVar8 = (longlong)iVar7 & (longlong)(int)param_1[9] - 1U;
        iVar7 = (int)uVar8;
        *(int *)(lVar4 + 0x24) = iVar7;
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(undefined4 *)(lVar4 + 0x20) =
             *(undefined4 *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(int *)((longlong)plVar10 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) =
             iVar12;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar5 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
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
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar12 = local_68._4_4_;
        uVar6 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar6;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457b22ec FUN_1457b22ec body=168 status=ok
// SIG undefined FUN_1457b22ec(void)

longlong * FUN_1457b22ec(longlong *param_1)

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
  uVar2 = FUN_14589b59e();
  local_20 = &local_30;
  local_28 = FUN_142840874;
  local_38 = uVar1 | 0x90200000;
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



// FUNCTION 1457b2396 FUN_1457b2396 body=378 status=ok
// SIG undefined FUN_1457b2396(void)

void FUN_1457b2396(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  longlong *local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1411250a2();
  local_70 = CONCAT44(local_70._4_4_,DAT_14cb7ca00);
  local_78 = DAT_14cb7c9f8;
  FUN_1448075d0(&local_58);
  iVar4 = 0;
  uVar3 = FUN_140e01592(param_1,&local_58,0);
  *(undefined8 *)(param_1 + 0x2e8) = uVar3;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  plVar1 = (longlong *)(param_1 + 0x278);
  lVar2 = param_1 + 0x288;
  local_78 = 0x100000000;
  local_68 = 0xffffffff;
  iStack_64 = 0;
  local_60 = 0;
  local_70 = lVar2;
  if (*(int *)(param_1 + 0x2a0) != 0) {
    FUN_1449c0562(&local_78);
    iVar4 = *(int *)(param_1 + 0x2a0);
  }
  local_40._0_4_ = local_68;
  local_40._4_4_ = iStack_64;
  local_38 = local_60;
  local_34 = local_5c;
  local_50 = local_78;
  local_48 = local_70;
  local_58 = plVar1;
  if ((iStack_64 != iVar4) || (local_70 != lVar2)) {
    do {
      if (*(longlong *)(*local_58 + 0x10 + (longlong)local_40._4_4_ * 0x20) != 0) {
        FUN_14136e024(param_1);
      }
      local_40._0_4_ = (uint)local_40 & ~local_50._4_4_;
      FUN_1449c0562(&local_50);
    } while (((local_40._4_4_ != iVar4) || (local_48 != lVar2)) || (local_58 != plVar1));
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457b2512 FUN_1457b2512 body=96 status=ok
// SIG undefined FUN_1457b2512(void)

void FUN_1457b2512(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
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



// FUNCTION 1457b2572 FUN_1457b2572 body=363 status=ok
// SIG undefined FUN_1457b2572(void)

void FUN_1457b2572(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined8 unaff_RBP;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  int local_38;
  ulonglong local_30;
  undefined7 uVar8;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = param_1 + 0x10;
  cVar1 = FUN_144729dda(lVar5);
  if (cVar1 != '\0') {
    lVar2 = FUN_14479d2ce(lVar5);
    if (lVar2 != 0) {
      uVar3 = FUN_14593f4b0();
      lVar2 = FUN_144718840(lVar2,uVar3);
      if (lVar2 != 0) {
        uVar3 = FUN_14479d2ce(lVar5);
        lVar4 = FUN_1447210f0(uVar3);
        if (lVar4 != 0) {
          uVar3 = FUN_14479d2ce(lVar5);
          lVar4 = FUN_14497e828(uVar3);
          if (lVar4 != 0) {
            lVar5 = FUN_14479d2ce(lVar5);
            plVar6 = (longlong *)(**(code **)(*(longlong *)(lVar5 + 0x398) + 0x18))(lVar5 + 0x398);
            if (plVar6[3] != 0) {
              cVar1 = FUN_144729dda(plVar6 + 2);
              if (cVar1 != '\0') {
                local_40 = DAT_14cbe7058;
                local_38 = -1;
                cVar1 = FUN_144a7a548(plVar6);
                uVar8 = (undefined7)((ulonglong)unaff_RBP >> 8);
                uVar7 = (undefined4)CONCAT71(uVar8,1);
                if ((cVar1 != '\0') && (lVar5 = (longlong)local_38 * 0x88 + *plVar6, lVar5 != 0)) {
                  uVar7 = (undefined4)CONCAT71(uVar8,0 < *(int *)(lVar5 + 0x80));
                }
                lVar5 = FUN_140fb8258(lVar4);
                if (lVar5 != 0) {
                  FUN_140fb83f4(lVar5,lVar2,uVar7);
                }
                FUN_140457ffc(plVar6 + 8,param_1);
                    /* WARNING: Subroutine does not return */
                FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
              }
            }
          }
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457b26f4 FUN_1457b26f4 body=58 status=ok
// SIG undefined FUN_1457b26f4(void)

void FUN_1457b26f4(longlong param_1)

{
  FUN_144760e21(*(undefined8 *)(param_1 + 0x3b0),*(undefined4 *)(param_1 + 0x3b8));
  if (*(longlong *)(param_1 + 0x3b0) != 0) {
    FUN_1400020a8();
  }
  FUN_1457b272e(param_1);
  return;
}



// FUNCTION 1457b272e FUN_1457b272e body=568 status=ok
// SIG undefined FUN_1457b272e(void)

void FUN_1457b272e(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14bad8ad0;
  FUN_140e030b4();
  *(undefined4 *)(param_1 + 0x72) = 0;
  if (param_1[0x71] != 0) {
    FUN_1400020a8();
  }
  FUN_1457b2a34(param_1 + 0x69);
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (param_1[0x67] != 0) {
    FUN_1400020a8();
  }
  FUN_145aed496(param_1 + 0x5f);
  *(undefined4 *)(param_1 + 0x5e) = 0;
  if (param_1[0x5d] != 0) {
    FUN_1400020a8();
  }
  FUN_1457b2aa0(param_1 + 0x55);
  *(undefined4 *)(param_1 + 0x54) = 0;
  if (param_1[0x53] != 0) {
    FUN_1400020a8();
  }
  FUN_1457b2966(param_1 + 0x4b);
  *(undefined4 *)(param_1 + 0x4a) = 0;
  if (param_1[0x49] != 0) {
    FUN_1400020a8();
  }
  FUN_1457b2966(param_1 + 0x41);
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (param_1[0x3f] != 0) {
    FUN_1400020a8();
  }
  FUN_1401ad17c(param_1 + 0x37);
  *(undefined4 *)(param_1 + 0x36) = 0;
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  FUN_1401ad17c(param_1 + 0x2d);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  FUN_1457b2a6a(param_1 + 0x23);
  *(undefined4 *)(param_1 + 0x22) = 0;
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  FUN_1401ad17c(param_1 + 0x19);
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_1457b299c(param_1 + 0x14);
  FUN_1457b299c(param_1 + 0x11);
  FUN_1457b2ad6(param_1 + 0xe);
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_140e03146(param_1 + 4);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_149e668b0;
  FUN_14019e1de(param_1);
  return;
}



// FUNCTION 1457b2966 FUN_1457b2966 body=53 status=ok
// SIG undefined FUN_1457b2966(void)

void FUN_1457b2966(longlong *param_1)

{
  FUN_140e031b8();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457b299c FUN_1457b299c body=62 status=ok
// SIG undefined FUN_1457b299c(void)

void FUN_1457b299c(longlong *param_1)

{
  FUN_1457b29da();
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1447ab16c(param_1,0);
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457b29da FUN_1457b29da body=89 status=ok
// SIG undefined FUN_1457b29da(void)

void FUN_1457b29da(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = *(int *)(param_1 + 1);
  if (iVar3 != 0) {
    plVar2 = (longlong *)*param_1;
    do {
      lVar1 = *plVar2;
      if (lVar1 != 0) {
        lVar4 = 0x3f40;
        do {
          FUN_1490fab88(lVar1 + lVar4);
          lVar4 = lVar4 + -0xb8;
        } while (lVar4 != -0xb8);
        FUN_1400020a8(lVar1);
      }
      plVar2 = plVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}



// FUNCTION 1457b2a34 FUN_1457b2a34 body=53 status=ok
// SIG undefined FUN_1457b2a34(void)

void FUN_1457b2a34(longlong *param_1)

{
  FUN_1457b2b12();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457b2a6a FUN_1457b2a6a body=53 status=ok
// SIG undefined FUN_1457b2a6a(void)

void FUN_1457b2a6a(longlong *param_1)

{
  FUN_1457b2b6c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457b2aa0 FUN_1457b2aa0 body=54 status=ok
// SIG undefined FUN_1457b2aa0(void)

void FUN_1457b2aa0(longlong *param_1)

{
  FUN_1468bfef6(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1457b2ad6 FUN_1457b2ad6 body=60 status=ok
// SIG undefined FUN_1457b2ad6(void)

void FUN_1457b2ad6(longlong *param_1)

{
  FUN_140e02fb2();
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1447ab16c(param_1,0);
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457b2b12 FUN_1457b2b12 body=90 status=ok
// SIG undefined FUN_1457b2b12(void)

void FUN_1457b2b12(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14474875a(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1457b2b6c FUN_1457b2b6c body=370 status=ok
// SIG undefined FUN_1457b2b6c(void)

void FUN_1457b2b6c(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
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
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      lVar2 = *local_78;
      lVar3 = (longlong)iStack_5c * 0x20;
      FUN_149154680(*(undefined8 *)(lVar2 + 8 + lVar3),*(undefined4 *)(lVar2 + 0x10 + lVar3));
      if (*(longlong *)(lVar2 + 8 + lVar3) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
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
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457b2ce0 FUN_1457b2ce0 body=6 status=ok
// SIG undefined FUN_1457b2ce0(void)

undefined8 FUN_1457b2ce0(void)

{
  return 0x40;
}



// FUNCTION 1457b2ce6 FUN_1457b2ce6 body=121 status=ok
// SIG undefined FUN_1457b2ce6(void)

undefined8
FUN_1457b2ce6(undefined8 param_1,undefined8 param_2,longlong *param_3,longlong param_4,
             undefined8 param_5,ulonglong param_6,undefined4 *param_7)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(char *)(param_4 + 8) == '\0') {
    uVar1 = *(ulonglong *)(param_4 + 0x10);
    if (((param_6 <= uVar1) && (*(ulonglong *)(param_7 + 2) <= uVar1 - param_6)) &&
       (*(longlong *)(param_4 + 0x18) == uVar1 + 0x40)) {
      local_18 = *param_7;
      uStack_14 = param_7[1];
      uStack_10 = param_7[2];
      uStack_c = param_7[3];
      uVar2 = (**(code **)(*param_3 + 8))(param_3,param_6 + 0x40);
      goto LAB_1457b2d40;
    }
  }
  uVar2 = 0;
LAB_1457b2d40:
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457b2d60 FUN_1457b2d60 body=67 status=ok
// SIG undefined FUN_1457b2d60(void)

undefined8 FUN_1457b2d60(longlong param_1,longlong param_2,undefined8 *param_3)

{
  (**(code **)(**(longlong **)(param_1 + 8) + 0x1a0))
            (*(longlong **)(param_1 + 8),param_2 + *(longlong *)(param_1 + 0x10));
  (**(code **)(**(longlong **)(param_1 + 8) + 0x170))
            (*(longlong **)(param_1 + 8),*param_3,param_3[1]);
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 8) >> 8),
                  (*(byte *)(*(longlong *)(param_1 + 8) + 0x29) & 2) == 0);
}



// FUNCTION 1457b2da4 FUN_1457b2da4 body=184 status=ok
// SIG undefined FUN_1457b2da4(void)

void FUN_1457b2da4(longlong *param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = FUN_1447addd0(param_2,0x10);
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    uVar7 = (longlong)(int)(uVar2 ^ *(uint *)(param_2 + 0x10)) & (longlong)(int)param_1[9] - 1U;
    lVar3 = (longlong)*(int *)((longlong)plVar5 + uVar7 * 4);
    if (lVar3 != -1) {
      lVar3 = lVar3 * 0x70 + *param_1;
      cVar1 = FUN_140e069ca(lVar3,param_2);
      if (cVar1 == '\0') {
        do {
          lVar4 = lVar3;
          lVar3 = (longlong)*(int *)(lVar4 + 0x68);
          if (lVar3 == -1) {
            return;
          }
          lVar3 = lVar3 * 0x70 + *param_1;
          cVar1 = FUN_140e069ca(lVar3,param_2);
        } while (cVar1 == '\0');
        puVar6 = (undefined4 *)(lVar4 + 0x68);
      }
      else {
        puVar6 = (undefined4 *)((longlong)plVar5 + uVar7 * 4);
      }
      FUN_1457b2e5c(param_1,*puVar6);
      return;
    }
  }
  return;
}



// FUNCTION 1457b2e5c FUN_1457b2e5c body=86 status=ok
// SIG undefined FUN_1457b2e5c(void)

void FUN_1457b2e5c(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x6c + (longlong)param_2 * 0x70);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x70 + 0x68);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x70 + 0x68);
  FUN_1457b2eb2();
  return;
}



// FUNCTION 1457b2eb2 FUN_1457b2eb2 body=54 status=ok
// SIG undefined FUN_1457b2eb2(void)

void FUN_1457b2eb2(longlong *param_1,int param_2)

{
  if (*(longlong *)(*param_1 + 0x58 + (longlong)param_2 * 0x70) != 0) {
    FUN_1400020a8();
  }
  FUN_1457b2ee8(param_1,param_2);
  return;
}



// FUNCTION 1457b2ee8 FUN_1457b2ee8 body=116 status=ok
// SIG undefined FUN_1457b2ee8(void)

void FUN_1457b2ee8(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x70) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x70) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x70 + 4) = uVar5;
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



// FUNCTION 1457b2f5c FUN_1457b2f5c body=158 status=ok
// SIG undefined FUN_1457b2f5c(void)

bool FUN_1457b2f5c(longlong param_1,undefined8 param_2)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
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



// FUNCTION 1457b3008 FUN_1457b3008 body=679 status=ok
// SIG undefined FUN_1457b3008(void)

void FUN_1457b3008(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  void *pvVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined1 auStack_98 [40];
  void *local_70;
  int local_68;
  undefined4 local_64;
  void *local_60;
  int local_58;
  undefined4 uStack_54;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar5 = (**(code **)(*param_1 + 0x10))();
  if (cVar5 != '\0') {
    FUN_140170290(param_1);
    lVar6 = FUN_1400d7050(param_1);
    if (lVar6 != 0) {
      lVar7 = FUN_144a5dd5e();
      if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8
           ) == lVar7 + 0x30)) {
        lVar6 = FUN_140e06fb1(lVar6);
        if (lVar6 != 0) {
          FUN_1405f62be(lVar6,&local_50);
          if (local_50 != (longlong *)0x0) {
            param_1 = param_1 + -6;
            FUN_1449027d0(param_1,&local_60);
            lVar6 = *(longlong *)((longlong)local_60 + 0x2f0);
            AcquireSRWLockExclusive((PSRWLOCK)(lVar6 + 0xc0));
            *(int *)(lVar6 + 0xb8) = *(int *)(lVar6 + 0xb8) + 1;
            plVar4 = (longlong *)CONCAT44(uStack_54,local_58);
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
            lVar7 = FUN_1406d51c0();
            *(undefined4 *)(lVar6 + 0xa4) = *(undefined4 *)(lVar7 + 0x238);
            if (*(int *)(lVar6 + 8) != *(int *)(lVar6 + 0x34)) {
              FUN_140e06cb2(lVar6);
              FUN_140e07302(lVar6);
            }
            puVar8 = (undefined8 *)(**(code **)(*local_50 + 0xc0))(local_50);
            local_60 = (void *)0x0;
            local_58 = *(int *)(puVar8 + 1);
            lVar7 = (longlong)local_58;
            pvVar3 = (void *)*puVar8;
            if (lVar7 == 0) {
              uStack_54 = 0;
            }
            else {
              FUN_1446dd7be(&local_60,local_58,0);
              memcpy(local_60,pvVar3,lVar7 * 0xc);
            }
            FUN_140e07504(param_1,&local_60,lVar6);
            lVar7 = lVar6 + 0x50;
            if (*(int *)(lVar6 + 0x58) != *(int *)(lVar6 + 0x84)) {
              FUN_140e06cb2(lVar7);
              FUN_140e07302(lVar7);
            }
            puVar8 = (undefined8 *)(**(code **)(*local_50 + 200))(local_50);
            local_70 = (void *)0x0;
            local_68 = *(int *)(puVar8 + 1);
            lVar9 = (longlong)local_68;
            pvVar3 = (void *)*puVar8;
            if (lVar9 == 0) {
              local_64 = 0;
            }
            else {
              FUN_1446dd7be(&local_70,local_68,0);
              memcpy(local_70,pvVar3,lVar9 * 0xc);
            }
            FUN_140e07504(param_1,&local_70,lVar7);
            if (local_70 != (void *)0x0) {
              FUN_1400020a8();
            }
            if (local_60 != (void *)0x0) {
              FUN_1400020a8();
            }
            ReleaseSRWLockExclusive((PSRWLOCK)(lVar6 + 0xc0));
          }
          if (local_48 != (longlong *)0x0) {
            LOCK();
            plVar4 = local_48 + 1;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)*plVar4 == 0) {
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
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457b32b0 FUN_1457b32b0 body=811 status=ok
// SIG undefined FUN_1457b32b0(void)

void FUN_1457b32b0(longlong *param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  bool bVar14;
  undefined1 auStack_2f8 [32];
  undefined1 local_2d8;
  undefined8 local_2c8;
  longlong *local_2c0;
  longlong local_2b8;
  longlong *local_2b0;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  if (param_2 == 0) goto LAB_1457b3460;
  FUN_14097d052();
  lVar8 = FUN_1403ca227();
  lVar9 = *(longlong *)(lVar8 + 0x328);
  if (lVar9 == 0) {
    uVar10 = FUN_14034fc00();
    lVar9 = FUN_14477b664(uVar10);
    *(longlong *)(lVar8 + 0x328) = lVar9;
  }
  lVar11 = *(longlong *)(lVar8 + 0x330);
  if (lVar11 == 0) {
    if ((lVar9 == 0) || (*(longlong *)(lVar8 + 800) == 0)) goto LAB_1457b3460;
    plVar12 = *(longlong **)(lVar9 + 0xb8);
    if ((plVar12 == (longlong *)0x0) ||
       (cVar5 = (**(code **)(*plVar12 + 0x108))(plVar12), cVar5 == '\0')) {
      *(undefined8 *)(lVar8 + 0x330) = 0;
      goto LAB_1457b3460;
    }
    uVar10 = (**(code **)(*plVar12 + 0x110))(plVar12);
    lVar11 = FUN_144aff482(uVar10,(longlong *)(lVar8 + 800));
    *(longlong *)(lVar8 + 0x330) = lVar11;
    if (lVar11 == 0) goto LAB_1457b3460;
  }
  lVar9 = FUN_1407a0dc0(lVar11 + 0x210);
  if (lVar9 != 0) {
    if (0 < (int)param_1[1]) {
      lVar8 = 0;
      uVar13 = 0;
      do {
        cVar5 = FUN_14069eaf4(*param_1 + lVar8,param_2);
        if (cVar5 != '\0') goto LAB_1457b3346;
        uVar13 = uVar13 + 1;
        lVar8 = lVar8 + 0x30;
      } while ((longlong)uVar13 < (longlong)(int)param_1[1]);
    }
    uVar6 = FUN_1457b36b4(param_1,param_2,param_3);
    uVar13 = (ulonglong)uVar6;
LAB_1457b3346:
    uVar10 = FUN_1447210f0(param_2);
    FUN_1409e0c66(&local_2b8,uVar10);
    if (local_2b0 != (longlong *)0x0) {
      iVar7 = (int)local_2b0[1];
      do {
        if (iVar7 == 0) {
          plVar12 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar4 = (int)local_2b0[1];
        bVar14 = iVar7 == iVar4;
        if (bVar14) {
          *(int *)(local_2b0 + 1) = iVar7 + 1;
          iVar4 = iVar7;
        }
        iVar7 = iVar4;
        UNLOCK();
        plVar12 = local_2b0;
      } while (!bVar14);
      LOCK();
      piVar1 = (int *)((longlong)local_2b0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_2b0 + 0x10))();
      }
      if (plVar12 != (longlong *)0x0) {
        if (local_2b8 != 0) {
          FUN_140bc281a(&local_2b8,lVar9);
          local_2d8 = 0;
          FUN_140a41f04(local_2b8,&local_2c8,param_2,&local_2b8);
          plVar2 = local_2c0;
          lVar8 = (longlong)(int)uVar13 * 0x30;
          lVar9 = *param_1 + lVar8;
          if ((undefined8 *)(lVar9 + 0x18) != &local_2c8) {
            *(undefined8 *)(lVar9 + 0x18) = local_2c8;
            local_2c8 = 0;
            plVar3 = *(longlong **)(lVar9 + 0x20);
            if (local_2c0 != plVar3) {
              local_2c0 = (longlong *)0x0;
              *(longlong **)(lVar9 + 0x20) = plVar2;
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
            }
          }
          plVar2 = local_2c0;
          if (local_2c0 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_2c0 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*local_2c0)(local_2c0);
              LOCK();
              piVar1 = (int *)((longlong)plVar2 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar2 + 0x10))(plVar2);
              }
            }
          }
          FUN_14076ba26(&local_2b8);
          lVar9 = *(longlong *)(*param_1 + 0x18 + lVar8);
          if (lVar9 != 0) {
            FUN_1457b35dc(lVar9 + 0x130,&local_2b8);
          }
        }
        LOCK();
        plVar2 = plVar12 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
      }
    }
  }
LAB_1457b3460:
  if ((local_40 ^ (ulonglong)auStack_2f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457b35dc FUN_1457b35dc body=215 status=ok
// SIG undefined FUN_1457b35dc(void)

undefined8 FUN_1457b35dc(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ac8b4c0;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14b961210;
  local_30[3] = FUN_1458c03ee;
  FUN_140e0aeb0(param_1,param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457b36b4 FUN_1457b36b4 body=258 status=ok
// SIG undefined FUN_1457b36b4(void)

int FUN_1457b36b4(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uStack_38 = 0;
  uStack_37 = 0;
  uStack_30 = 0;
  local_48 = 0;
  local_40 = 0;
  uStack_3f = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14485c47a(&local_58);
  uStack_50 = 0;
  FUN_1457b37b8(&local_58,param_3);
  iVar7 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar7 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar7 + 1U) {
    FUN_1457b3870(param_1,iVar7);
  }
  lVar4 = *param_1;
  lVar8 = (longlong)iVar7 * 0x30;
  *(undefined8 *)(lVar4 + 0x10 + lVar8) = local_48;
  puVar3 = (undefined4 *)(lVar4 + lVar8);
  *puVar3 = (undefined4)local_58;
  puVar3[1] = local_58._4_4_;
  puVar3[2] = (undefined4)uStack_50;
  puVar3[3] = uStack_50._4_4_;
  *(ulonglong *)(lVar4 + 0x18 + lVar8) = CONCAT71(uStack_3f,local_40);
  lVar5 = CONCAT71(uStack_37,uStack_38);
  *(longlong *)(lVar4 + 0x20 + lVar8) = lVar5;
  if (lVar5 == 0) {
    *(undefined1 *)(lVar4 + lVar8 + 0x28) = uStack_30;
    iVar7 = (int)param_1[1];
  }
  else {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
    plVar6 = (longlong *)CONCAT71(uStack_37,uStack_38);
    *(undefined1 *)(lVar4 + lVar8 + 0x28) = uStack_30;
    iVar7 = (int)param_1[1];
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
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return iVar7 + -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457b37b8 FUN_1457b37b8 body=183 status=ok
// SIG undefined FUN_1457b37b8(void)

void FUN_1457b37b8(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  ushort local_20;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14485c47a(param_1 + 0x10);
  lVar2 = FUN_140502f56(param_2);
  if (lVar2 != 0) {
    puVar3 = &local_38;
    local_20 = 4;
    local_38 = 1;
    local_18 = 1;
    FUN_1402b90a2(lVar2,&DAT_14cbc2fa8,puVar3);
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_18 * 0x120));
    if (pcVar1 != (code *)0x0) {
      if (0x18 < local_20) {
        puVar3 = (undefined4 *)CONCAT44(uStack_34,local_38);
      }
      (*pcVar1)(puVar3);
    }
    if (0x18 < local_20) {
      FUN_1400020a8(CONCAT44(uStack_34,local_38));
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457b3870 FUN_1457b3870 body=147 status=ok
// SIG undefined FUN_1457b3870(void)

void FUN_1457b3870(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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



// FUNCTION 1457b3904 FUN_1457b3904 body=16 status=ok
// SIG undefined FUN_1457b3904(void)

byte FUN_1457b3904(void)

{
  byte bVar1;
  
  bVar1 = FUN_144729dda();
  return bVar1 ^ 1;
}



// FUNCTION 1457b3914 FUN_1457b3914 body=1110 status=ok
// SIG undefined FUN_1457b3914(void)

void FUN_1457b3914(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  bool bVar9;
  byte bVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  longlong lVar17;
  longlong *plVar18;
  int iVar19;
  float fVar20;
  undefined1 auStack_128 [32];
  longlong *local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 local_90;
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  double local_60;
  double local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_1449027d0(param_1,&local_f8);
  lVar3 = *(longlong *)(local_f8 + 0x50);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x200));
  plVar18 = uStack_f0;
  *(int *)(lVar3 + 0x1f8) = *(int *)(lVar3 + 0x1f8) + 1;
  if (uStack_f0 != (longlong *)0x0) {
    LOCK();
    plVar1 = uStack_f0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*uStack_f0)(uStack_f0);
      LOCK();
      piVar2 = (int *)((longlong)plVar18 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
    }
  }
  lVar17 = lVar3 + 0x18;
  FUN_140f9ed8d(*(undefined8 *)(lVar3 + 0x18),*(undefined4 *)(lVar3 + 0x20));
  *(undefined4 *)(lVar3 + 0x20) = 0;
  if (*(int *)(lVar3 + 0x24) != 0) {
    FUN_140f9edf6(lVar17,0);
  }
  *(int *)(lVar3 + 0x28) = *(int *)(lVar3 + 0x28) + 1;
  lVar12 = FUN_1400d7050(param_1 + 0x30);
  if (lVar12 != 0) {
    lVar13 = FUN_144a5dd5e();
    if (((*(int *)(lVar13 + 0x38) <= *(int *)(*(longlong *)(lVar12 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar13 + 0x38) * 8) == lVar13 + 0x30)) &&
       (plVar18 = *(longlong **)(lVar12 + 0x2500), plVar18 != (longlong *)0x0)) {
      (**(code **)(*plVar18 + 0x730))(plVar18,&local_60);
      plVar18 = (longlong *)(param_1 + 0x48);
      plVar1 = (longlong *)(param_1 + 0x58);
      local_f8 = 0x100000000;
      local_e8 = 0xffffffff;
      uStack_e0 = 0;
      uStack_f0 = plVar1;
      if (*(int *)(param_1 + 0x70) == 0) {
        iVar19 = 0;
      }
      else {
        FUN_1449c0562(&local_f8);
        iVar19 = *(int *)(param_1 + 0x70);
      }
      uStack_68 = CONCAT44(uStack_dc,uStack_e0);
      local_70 = local_e8;
      uVar15 = local_70;
      local_80 = (undefined4)local_f8;
      uStack_7c = local_f8._4_4_;
      uStack_78 = (undefined4)uStack_f0;
      uStack_74 = uStack_f0._4_4_;
      local_70._4_4_ = (int)((ulonglong)local_e8 >> 0x20);
      iVar11 = local_70._4_4_;
      local_88 = plVar18;
      if ((local_70._4_4_ != iVar19) || (local_70 = uVar15, uStack_f0 != plVar1)) {
        do {
          local_70 = uVar15;
          local_90 = *(undefined8 *)(*local_88 + 8 + (longlong)iVar11 * 0x18);
          cVar8 = FUN_144729dda();
          if (cVar8 != '\0') {
            plVar14 = (longlong *)FUN_14479d2ce(&local_90);
            fVar20 = (float)(**(code **)(*plVar14 + 0x2c0))(plVar14);
            if (fVar20 <= 0.0001) {
              uVar15 = FUN_14479d2ce(&local_90);
              lVar12 = FUN_140e0b56c(uVar15);
              if (lVar12 != 0) {
                *(int *)(lVar3 + 0x28) = *(int *)(lVar3 + 0x28) + 1;
                local_108 = plVar18;
                local_100 = lVar17;
                puVar16 = (undefined8 *)FUN_140e0b57a(lVar17);
                *(undefined1 *)(puVar16 + 2) = 2;
                lVar17 = FUN_14479d2ce(&local_90);
                *puVar16 = *(undefined8 *)(lVar17 + 0x30);
                plVar18 = (longlong *)FUN_14479d2ce(&local_90);
                (**(code **)(*plVar18 + 0x2b0))(plVar18,&local_f8);
                *(undefined4 *)(puVar16 + 3) = local_d8;
                *(undefined4 *)((longlong)puVar16 + 0x1c) = uStack_d4;
                *(undefined4 *)(puVar16 + 4) = uStack_d0;
                *(undefined4 *)((longlong)puVar16 + 0x24) = uStack_cc;
                puVar16[5] = local_c8;
                lVar17 = FUN_1402735c8();
                uVar5 = *(undefined4 *)(lVar17 + 0x69c);
                uVar6 = *(undefined4 *)(lVar17 + 0x6a0);
                uVar7 = *(undefined4 *)(lVar17 + 0x6a4);
                *(undefined4 *)(puVar16 + 8) = *(undefined4 *)(lVar17 + 0x698);
                *(undefined4 *)((longlong)puVar16 + 0x44) = uVar5;
                *(undefined4 *)(puVar16 + 9) = uVar6;
                *(undefined4 *)((longlong)puVar16 + 0x4c) = uVar7;
                puVar16[10] = *(undefined8 *)(lVar17 + 0x6a8);
                FUN_1400021e4(lVar12 + 0x40,&local_f8);
                if (puVar16 + 0xc == &local_f8) {
                  if (local_f8 != 0) {
                    FUN_1400020a8();
                  }
                }
                else {
                  if (puVar16[0xc] != 0) {
                    FUN_1400020a8();
                  }
                  puVar16[0xc] = local_f8;
                  local_f8 = 0;
                  *(undefined4 *)(puVar16 + 0xd) = (undefined4)uStack_f0;
                  *(undefined4 *)((longlong)puVar16 + 0x6c) = uStack_f0._4_4_;
                }
                *(undefined1 *)((longlong)puVar16 + 0x84) = *(undefined1 *)(lVar12 + 0x48);
                lVar17 = FUN_14479d2ce(&local_90);
                if (*(char *)(lVar17 + 0x60) == '\x01') {
                  bVar10 = (byte)*(undefined4 *)(lVar17 + 0x44);
                }
                else {
                  bVar10 = 0;
                }
                *(byte *)((longlong)puVar16 + 0x81) = bVar10 >> 2 & 1;
                dVar4 = SQRT(((double)puVar16[4] - local_58) * ((double)puVar16[4] - local_58) +
                             ((double)puVar16[3] - local_60) * ((double)puVar16[3] - local_60)) /
                        100.0;
                *(float *)(puVar16 + 0xb) =
                     (float)(int)((ulonglong)(longlong)ROUND(dVar4 + dVar4 + 0.5) >> 1);
                FUN_140390f7a(lVar12 + 0x18,puVar16 + 0xe);
                plVar18 = local_108;
                lVar17 = local_100;
              }
            }
          }
          local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~uStack_7c);
          FUN_1449c0562(&local_80);
          iVar11 = local_70._4_4_;
          uVar15 = local_70;
        } while (((local_70._4_4_ != iVar19) ||
                 ((longlong *)CONCAT44(uStack_74,uStack_78) != plVar1)) || (local_88 != plVar18));
      }
    }
  }
  bVar9 = true;
  if (*(int *)(lVar3 + 0x20) < 1) {
    bVar9 = 0 < *(int *)(lVar3 + 8);
  }
  *(bool *)(param_1 + 0x98) = bVar9;
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x200));
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457b3d6c FUN_1457b3d6c body=40 status=ok
// SIG undefined FUN_1457b3d6c(void)

undefined8 FUN_1457b3d6c(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457b3d94 thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457b3d99 FUN_1457b3d99 body=129 status=ok
// SIG undefined FUN_1457b3d99(void)

void FUN_1457b3d99(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
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
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  ulonglong uVar21;
  longlong lVar22;
  
  uVar3 = *(uint *)(param_1 + 1);
  uVar21 = (ulonglong)uVar3;
  FUN_1457b3e1a(param_2,uVar21,1);
  if (0 < (int)uVar3) {
    lVar22 = 0x40;
    do {
      lVar4 = *param_1;
      lVar5 = *param_2;
      puVar1 = (undefined4 *)(lVar4 + -0x40 + lVar22);
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      uVar8 = puVar1[2];
      uVar9 = puVar1[3];
      puVar1 = (undefined4 *)(lVar4 + -0x30 + lVar22);
      uVar10 = *puVar1;
      uVar11 = puVar1[1];
      uVar12 = puVar1[2];
      uVar13 = puVar1[3];
      puVar1 = (undefined4 *)(lVar4 + -0x20 + lVar22);
      uVar14 = *puVar1;
      uVar15 = puVar1[1];
      uVar16 = puVar1[2];
      uVar17 = puVar1[3];
      puVar1 = (undefined4 *)(lVar4 + -0x10 + lVar22);
      uVar18 = puVar1[1];
      uVar19 = puVar1[2];
      uVar20 = puVar1[3];
      puVar2 = (undefined4 *)(lVar5 + -0x10 + lVar22);
      *puVar2 = *puVar1;
      puVar2[1] = uVar18;
      puVar2[2] = uVar19;
      puVar2[3] = uVar20;
      puVar1 = (undefined4 *)(lVar5 + -0x20 + lVar22);
      *puVar1 = uVar14;
      puVar1[1] = uVar15;
      puVar1[2] = uVar16;
      puVar1[3] = uVar17;
      puVar1 = (undefined4 *)(lVar5 + -0x30 + lVar22);
      *puVar1 = uVar10;
      puVar1[1] = uVar11;
      puVar1[2] = uVar12;
      puVar1[3] = uVar13;
      puVar1 = (undefined4 *)(lVar5 + -0x40 + lVar22);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      puVar1[2] = uVar8;
      puVar1[3] = uVar9;
      FUN_14150acc4(lVar5 + lVar22,lVar4 + lVar22);
      lVar22 = lVar22 + 0x58;
      uVar21 = uVar21 - 1;
    } while (uVar21 != 0);
  }
  return;
}



// FUNCTION 1457b3e1a FUN_1457b3e1a body=112 status=ok
// SIG undefined FUN_1457b3e1a(void)

void FUN_1457b3e1a(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1405bc420(param_1,iVar1);
    }
    FUN_145818344((longlong)iVar1 * 0x58 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_14892fa06(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}


