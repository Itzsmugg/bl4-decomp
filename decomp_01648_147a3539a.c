// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147a3539a FUN_147a3539a body=210 status=ok
// SIG undefined FUN_147a3539a(void)

void FUN_147a3539a(undefined8 param_1,undefined8 *param_2,float param_3,undefined1 param_4,
                  undefined4 param_5)

{
  undefined8 *puVar1;
  float fVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  float fVar7;
  
  fVar2 = *DAT_14cb0b0d8;
  fVar7 = *DAT_14cb0b0f0;
  if (DAT_14cad39a8 == '\x01') {
    DAT_14cad39a8 = '\0';
    FUN_1404df9f2(param_1,0);
  }
  iVar5 = DAT_14cad39a0;
  lVar6 = (longlong)(int)DAT_14cad39a0;
  DAT_14cad39a0 = DAT_14cad39a0 + 1;
  if (DAT_14cad39a4 < DAT_14cad39a0) {
    FUN_147a3bf6e(iVar5);
  }
  lVar4 = DAT_14cad3998;
  if (fVar7 <= fVar2) {
    fVar7 = fVar2;
  }
  *(undefined8 *)(DAT_14cad3998 + 0x10 + lVar6 * 0x28) = param_2[2];
  uVar3 = param_2[1];
  puVar1 = (undefined8 *)(lVar4 + lVar6 * 0x28);
  *puVar1 = *param_2;
  puVar1[1] = uVar3;
  *(float *)(lVar4 + 0x18 + lVar6 * 0x28) = fVar7 * param_3;
  *(undefined4 *)(lVar4 + 0x1c + lVar6 * 0x28) = param_5;
  *(undefined1 *)(lVar4 + 0x20 + lVar6 * 0x28) = param_4;
  return;
}



// FUNCTION 147a35470 FUN_147a35470 body=126 status=ok
// SIG undefined FUN_147a35470(void)

void FUN_147a35470(longlong *param_1,float param_2)

{
  undefined4 uVar1;
  
  uVar1 = DAT_14c760e58;
  DAT_14c760e58 = 0xbf800000;
  FUN_14080c2b4();
  if (ABS(param_2) <= 1e-08) {
    param_2 = *(float *)(param_1 + 5);
  }
  (**(code **)(*param_1 + 0x10))(param_1,0,1);
  (**(code **)(*param_1 + 0x20))(param_1,param_2,1);
  DAT_14c760e58 = uVar1;
  return;
}



// FUNCTION 147a354ee FUN_147a354ee body=65 status=ok
// SIG undefined FUN_147a354ee(void)

int FUN_147a354ee(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x18) < 1) {
    iVar3 = 0;
  }
  else {
    lVar2 = 0;
    iVar3 = 0;
    do {
      iVar1 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x10) + lVar2 * 8) + 0x80))();
      iVar3 = iVar3 + iVar1;
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 0x18));
  }
  return iVar3;
}



// FUNCTION 147a35530 FUN_147a35530 body=74 status=ok
// SIG undefined FUN_147a35530(void)

int FUN_147a35530(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x18) < 1) {
    iVar2 = 0x7fffffff;
  }
  else {
    iVar2 = 0x7fffffff;
    lVar3 = 0;
    do {
      iVar1 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x10) + lVar3 * 8) + 0x88))();
      if (iVar2 < iVar1) {
        iVar1 = iVar2;
      }
      iVar2 = iVar1;
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_1 + 0x18));
  }
  return iVar2;
}



// FUNCTION 147a3557a FUN_147a3557a body=50 status=ok
// SIG undefined FUN_147a3557a(void)

void FUN_147a3557a(longlong param_1)

{
  longlong lVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    lVar1 = 0;
    do {
      (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x10) + lVar1 * 8) + 0x28))();
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(param_1 + 0x18));
  }
  return;
}



// FUNCTION 147a355ac FUN_147a355ac body=50 status=ok
// SIG undefined FUN_147a355ac(void)

void FUN_147a355ac(longlong param_1)

{
  longlong lVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    lVar1 = 0;
    do {
      (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x10) + lVar1 * 8) + 0x30))();
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(param_1 + 0x18));
  }
  return;
}



// FUNCTION 147a355de FUN_147a355de body=8 status=ok
// SIG undefined FUN_147a355de(void)

bool FUN_147a355de(longlong param_1)

{
  return *(int *)(param_1 + 0x24) == 0;
}



// FUNCTION 147a355e6 FUN_147a355e6 body=5 status=ok
// SIG undefined FUN_147a355e6(void)

undefined8 FUN_147a355e6(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



// FUNCTION 147a355ec FUN_147a355ec body=56 status=ok
// SIG undefined FUN_147a355ec(void)

void FUN_147a355ec(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    lVar2 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + lVar2 * 8);
      (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 0x18));
  }
  return;
}



// FUNCTION 147a35624 FUN_147a35624 body=69 status=ok
// SIG undefined FUN_147a35624(void)

void FUN_147a35624(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    lVar2 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + lVar2 * 8);
      (**(code **)(*plVar1 + 0x58))(plVar1,param_2,param_3);
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 0x18));
  }
  return;
}



// FUNCTION 147a3566a FUN_147a3566a body=53 status=ok
// SIG undefined FUN_147a3566a(void)

void FUN_147a3566a(longlong param_1)

{
  longlong lVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    lVar1 = 0;
    do {
      (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x10) + lVar1 * 8) + 0x90))();
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(param_1 + 0x18));
  }
  return;
}



// FUNCTION 147a3569f FUN_147a3569f body=402 status=ok
// SIG undefined FUN_147a3569f(void)

longlong * FUN_147a3569f(longlong *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[8] < 0x1f6) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_1468d6249(param_1,&local_40);
      *param_2 = local_40;
      param_2[1] = uStack_38;
      param_2[2] = local_30;
      param_2[3] = local_28;
      param_2[4] = local_28;
      param_2[5] = local_28;
      param_2[6] = local_28;
    }
  }
  else {
    FUN_14010dffd(param_1,param_2);
  }
  if ((int)param_1[8] < 0x1f2) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      param_2[7] = 0x7f7fffff00000000;
    }
  }
  else {
    puVar1 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,param_2 + 7,4);
      }
      else {
        thunk_FUN_14572512c(param_1);
      }
    }
    else {
      *(undefined4 *)(param_2 + 7) = *puVar1;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
    puVar1 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)((longlong)param_2 + 0x3c),4);
      }
      else {
        thunk_FUN_14572512c(param_1);
      }
    }
    else {
      *(undefined4 *)((longlong)param_2 + 0x3c) = *puVar1;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
  }
  param_2 = param_2 + 8;
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      thunk_FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *(undefined4 *)param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a35832 FUN_147a35832 body=257 status=ok
// SIG undefined FUN_147a35832(void)

longlong * FUN_147a35832(longlong *param_1,longlong param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_147a3569f();
  (**(code **)(*param_1 + 0x138))(param_1,param_2 + 0x48);
  piVar1 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar1 + 1) {
    local_24 = (uint)*(byte *)(param_2 + 0x50);
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
    *(bool *)(param_2 + 0x50) = local_24 != 0;
  }
  else {
    *(bool *)(param_2 + 0x50) = *piVar1 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar3 = (undefined4 *)(param_2 + 0x54);
  puVar2 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,puVar3,4);
    }
    else {
      thunk_FUN_14572512c(param_1,puVar3);
    }
  }
  else {
    *puVar3 = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a35934 FUN_147a35934 body=171 status=ok
// SIG undefined FUN_147a35934(void)

undefined8 *
FUN_147a35934(undefined8 *param_1,undefined8 param_2,undefined4 param_3,longlong *param_4,
             undefined8 *param_5,undefined4 param_6)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = param_3;
  *(undefined8 *)((longlong)param_1 + 0xc) = *param_5;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = param_6;
  if (*param_4 != 0) {
    FUN_147d41828(*param_4,&local_28);
    if (local_28 != 0) {
      uVar3 = *(undefined4 *)(local_28 + 200);
      uVar4 = *(undefined4 *)(local_28 + 0xcc);
      uVar5 = *(undefined4 *)(local_28 + 0xd0);
      *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)(local_28 + 0xc4);
      *(undefined4 *)(param_1 + 3) = uVar3;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
      *(undefined4 *)(param_1 + 4) = uVar5;
    }
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
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a359e0 FUN_147a359e0 body=8 status=ok
// SIG undefined FUN_147a359e0(void)

bool FUN_147a359e0(longlong *param_1)

{
  return *param_1 != 0;
}



// FUNCTION 147a359e8 FUN_147a359e8 body=4 status=ok
// SIG undefined FUN_147a359e8(void)

undefined8 FUN_147a359e8(undefined8 *param_1)

{
  return *param_1;
}



// FUNCTION 147a359ec FUN_147a359ec body=4 status=ok
// SIG undefined FUN_147a359ec(void)

undefined4 FUN_147a359ec(longlong param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



// FUNCTION 147a359f0 FUN_147a359f0 body=393 status=ok
// SIG undefined FUN_147a359f0(void)

void FUN_147a359f0(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_38;
  local_68 = local_48;
  uStack_60 = uStack_40;
  local_88 = local_30;
  uStack_84 = uStack_2c;
  uStack_80 = uStack_28;
  uStack_7c = uStack_24;
  local_78 = local_20;
  cVar1 = (**(code **)(*param_1 + 0x648))(param_1);
  if (cVar1 == '\0') {
    FUN_1468998ea(L"ClientSetLocation_Validate");
  }
  else {
    local_98 = local_38;
    local_a8 = local_48;
    uStack_a0 = uStack_40;
    local_c8 = local_30;
    uStack_c4 = uStack_2c;
    uStack_c0 = uStack_28;
    uStack_bc = uStack_24;
    local_b8 = local_20;
    (**(code **)(*param_1 + 0x650))(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a35b80 FUN_147a35b80 body=100 status=ok
// SIG undefined FUN_147a35b80(void)

void FUN_147a35b80(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x680))(param_1,&local_30);
  *(undefined8 *)(param_3 + 4) = local_20;
  *param_3 = local_30;
  param_3[1] = uStack_2c;
  param_3[2] = uStack_28;
  param_3[3] = uStack_24;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a35be6 FUN_147a35be6 body=100 status=ok
// SIG undefined FUN_147a35be6(void)

void FUN_147a35be6(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x6c0))(param_1,&local_30);
  *(undefined8 *)(param_3 + 4) = local_20;
  *param_3 = local_30;
  param_3[1] = uStack_2c;
  param_3[2] = uStack_28;
  param_3[3] = uStack_24;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a35c4c FUN_147a35c4c body=268 status=ok
// SIG undefined FUN_147a35c4c(void)

void FUN_147a35c4c(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [24];
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  puVar1 = local_40;
  if (puVar2 != (undefined1 *)0x0) {
    puVar1 = puVar2;
  }
  puVar2 = local_58;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x718))(param_1,puVar1,puVar2);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a35d5a FUN_147a35d5a body=42 status=ok
// SIG undefined FUN_147a35d5a(void)

void FUN_147a35d5a(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x6b8))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147a35d88 FUN_147a35d88 body=41 status=ok
// SIG undefined FUN_147a35d88(void)

void FUN_147a35d88(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x6c8))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147a35dba FUN_147a35dba body=41 status=ok
// SIG undefined FUN_147a35dba(void)

void FUN_147a35dba(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x758))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147a35de8 FUN_147a35de8 body=41 status=ok
// SIG undefined FUN_147a35de8(void)

void FUN_147a35de8(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x740))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147a35e5c FUN_147a35e5c body=352 status=ok
// SIG undefined FUN_147a35e5c(void)

void FUN_147a35e5c(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  int local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_44 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_30;
  local_68 = local_40;
  uStack_64 = uStack_3c;
  uStack_60 = uStack_38;
  uStack_5c = uStack_34;
  uVar1 = (**(code **)(*param_1 + 0x698))(param_1,local_28,&local_68,local_44 != 0);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a35ff2 FUN_147a35ff2 body=156 status=ok
// SIG undefined FUN_147a35ff2(void)

void FUN_147a35ff2(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1414b167c(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a360e4 FUN_147a360e4 body=259 status=ok
// SIG undefined FUN_147a360e4(void)

void FUN_147a360e4(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_68 [44];
  int local_3c;
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  puVar2 = local_38;
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x688))(param_1,puVar2,local_3c != 0);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a361ec FUN_147a361ec body=162 status=ok
// SIG undefined FUN_147a361ec(void)

void FUN_147a361ec(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x748))(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a36294 FUN_147a36294 body=162 status=ok
// SIG undefined FUN_147a36294(void)

void FUN_147a36294(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x730))(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a36338 FUN_147a36338 body=268 status=ok
// SIG undefined FUN_147a36338(void)

void FUN_147a36338(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [24];
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  puVar1 = local_40;
  if (puVar2 != (undefined1 *)0x0) {
    puVar1 = puVar2;
  }
  puVar2 = local_58;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x690))(param_1,puVar1,puVar2);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a36482 FUN_147a36482 body=58 status=ok
// SIG undefined FUN_147a36482(void)

undefined8 FUN_147a36482(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_14487fd02();
  uVar2 = 1;
  if (((iVar1 != 0) && ((iVar1 != 3 || (*(char *)(param_1 + 0x178) != '\x02')))) &&
     ((*(char *)(param_1 + 0x68) == '\x02' || (*(char *)(param_1 + 0x178) != '\x03')))) {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 147a364bc FUN_147a364bc body=63 status=ok
// SIG undefined FUN_147a364bc(void)

void FUN_147a364bc(longlong *param_1)

{
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
                    /* WARNING: Could not recover jumptable at 0x000147a364f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x678))(param_1,DAT_14c893054);
  return;
}



// FUNCTION 147a3654c FUN_147a3654c body=35 status=ok
// SIG undefined FUN_147a3654c(void)

void FUN_147a3654c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x738))();
                    /* WARNING: Could not recover jumptable at 0x000147a36568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x750))(param_1);
  return;
}



// FUNCTION 147a36570 FUN_147a36570 body=125 status=ok
// SIG undefined FUN_147a36570(void)

void FUN_147a36570(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((((*(byte *)(param_1 + 0x420) & 1) != 0) && (*(longlong *)(param_1 + 0x1c8) != 0)) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x1c8) + 0x120) != 0)) {
    lVar1 = FUN_14348b10e();
    if (lVar1 != 0) {
      lVar2 = FUN_144a7cbb2();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
                    /* WARNING: Could not recover jumptable at 0x000147a365ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(longlong **)(param_1 + 0x1c8) + 0x4a0))
                  (*(longlong **)(param_1 + 0x1c8),&DAT_14cadad9c);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147a365fe FUN_147a365fe body=13 status=ok
// SIG undefined FUN_147a365fe(void)

void FUN_147a365fe(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000147a36608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x588))();
  return;
}



// FUNCTION 147a3660c FUN_147a3660c body=59 status=ok
// SIG undefined FUN_147a3660c(void)

void FUN_147a3660c(longlong *param_1)

{
  if ((longlong *)param_1[0x7a] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x7a] + 0x6d8))();
                    /* WARNING: Could not recover jumptable at 0x000147a3663d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x6b0))(param_1,0);
    return;
  }
  return;
}



// FUNCTION 147a36648 FUN_147a36648 body=30 status=ok
// SIG undefined FUN_147a36648(void)

void FUN_147a36648(longlong param_1)

{
  FUN_1478b8668();
  *(undefined8 *)(param_1 + 0x3a0) = 0;
  return;
}



// FUNCTION 147a3666a FUN_147a3666a body=449 status=ok
// SIG undefined FUN_147a3666a(void)

void FUN_147a3666a(longlong *param_1,undefined8 param_2,double *param_3)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  undefined8 uVar9;
  double dVar10;
  double *pdVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  double local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  longlong *plVar14;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_68 = param_3[2];
  local_78 = *param_3;
  uStack_70 = param_3[1];
  uStack_60 = (double)((ulonglong)uStack_60 & 0xffffffffffffff00);
  uVar9 = FUN_14477b072(*(undefined4 *)param_3,DAT_14cad39e8);
  plVar14 = param_1;
  dVar10 = (double)(**(code **)(*param_1 + 0x248))(param_1,uVar9,&local_78);
  uVar12 = SUB84(plVar14,0);
  plVar14 = (longlong *)param_1[0x7a];
  if (plVar14 != (longlong *)0x0) {
    lVar1 = plVar14[0x39];
    if (lVar1 == 0) {
      local_88 = DAT_14c846508;
      local_98 = (undefined4)DAT_14c8464f8;
      uStack_94 = DAT_14c8464f8._4_4_;
      uStack_90 = (undefined4)DAT_14c846500;
      uStack_8c = DAT_14c846500._4_4_;
    }
    else {
      dVar4 = *(double *)(lVar1 + 0x240);
      dVar5 = *(double *)(lVar1 + 0x248);
      dVar6 = *(double *)(lVar1 + 0x250);
      dVar7 = *(double *)(lVar1 + 600);
      pdVar11 = *(double **)(lVar1 + 0x228);
      local_78 = dVar4;
      uStack_70 = dVar5;
      local_68 = dVar6;
      uStack_60 = dVar7;
      if (pdVar11 == (double *)0x0) {
        uVar12 = 0x40;
        pdVar11 = (double *)FUN_14001cc68(0x40,0x10);
        dVar10 = DAT_14c8463d8;
        *pdVar11 = DAT_14c8463d0;
        pdVar11[1] = dVar10;
        dVar10 = DAT_14c8463e8;
        pdVar11[2] = DAT_14c8463e0;
        pdVar11[3] = dVar10;
        dVar10 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
        pdVar11[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
        pdVar11[5] = dVar10;
        dVar10 = DAT_14c846508;
        pdVar11[6] = DAT_14c846508;
        *(double **)(lVar1 + 0x228) = pdVar11;
      }
      auVar2._8_4_ = (int)-(ulonglong)(dVar5 != pdVar11[1]);
      auVar2._0_8_ = -(ulonglong)(dVar4 != *pdVar11);
      auVar2._12_4_ = (int)(-(ulonglong)(dVar5 != pdVar11[1]) >> 0x20);
      iVar8 = movmskpd(SUB84(dVar10,0),auVar2);
      auVar3._8_4_ = (int)-(ulonglong)(dVar7 != pdVar11[3]);
      auVar3._0_8_ = -(ulonglong)(dVar6 != pdVar11[2]);
      auVar3._12_4_ = (int)(-(ulonglong)(dVar7 != pdVar11[3]) >> 0x20);
      uVar13 = movmskpd(uVar12,auVar3);
      if ((uVar13 & 0x3fffffff) != 0 || iVar8 != 0) {
        *(undefined4 *)(pdVar11 + 2) = (undefined4)local_68;
        *(undefined4 *)((longlong)pdVar11 + 0x14) = local_68._4_4_;
        *(undefined4 *)(pdVar11 + 3) = (undefined4)uStack_60;
        *(undefined4 *)((longlong)pdVar11 + 0x1c) = uStack_60._4_4_;
        *(undefined4 *)pdVar11 = (undefined4)local_78;
        *(undefined4 *)((longlong)pdVar11 + 4) = local_78._4_4_;
        *(undefined4 *)(pdVar11 + 1) = (undefined4)uStack_70;
        *(undefined4 *)((longlong)pdVar11 + 0xc) = uStack_70._4_4_;
        FUN_1448052ee(&local_78,&local_98);
        pdVar11[6] = local_88;
        pdVar11[4] = (double)CONCAT44(uStack_94,local_98);
        pdVar11[5] = (double)CONCAT44(uStack_8c,uStack_90);
      }
      local_88 = pdVar11[6];
      local_98 = *(undefined4 *)(pdVar11 + 4);
      uStack_94 = *(undefined4 *)((longlong)pdVar11 + 0x24);
      uStack_90 = *(undefined4 *)(pdVar11 + 5);
      uStack_8c = *(undefined4 *)((longlong)pdVar11 + 0x2c);
    }
    local_a8 = 0;
    (**(code **)(*plVar14 + 0x4d0))(plVar14,param_2,&local_98,0);
  }
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a3682c FUN_147a3682c body=95 status=ok
// SIG undefined FUN_147a3682c(void)

void FUN_147a3682c(longlong param_1)

{
  FUN_140aeefbc(*(undefined8 *)(param_1 + 0x398),0,1);
  if (DAT_14cad3b30 == '\x01') {
    if (*(longlong *)(param_1 + 0x398) != 0) {
      *(undefined8 *)(param_1 + 0x398) = 0;
      FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x28),0xb);
      return;
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x398) = 0;
  }
  return;
}



// FUNCTION 147a3688c FUN_147a3688c body=180 status=ok
// SIG undefined FUN_147a3688c(void)

void FUN_147a3688c(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_88 [40];
  undefined4 local_60 [2];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = param_5;
  local_60[0] = param_2;
  local_58 = param_3;
  local_50 = param_4;
  uVar1 = FUN_14477b072(param_1,DAT_14cad3a68);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,local_60);
  local_48 = param_5;
  local_60[0] = param_2;
  local_58 = param_3;
  local_50 = param_4;
  FUN_1447cd2ec(param_1 + 0x75,local_60);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a36944 FUN_147a36944 body=26 status=ok
// SIG undefined FUN_147a36944(void)

undefined8 FUN_147a36944(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x680))();
  return param_2;
}



// FUNCTION 147a36978 FUN_147a36978 body=430 status=ok
// SIG undefined FUN_147a36978(void)

void FUN_147a36978(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined2 *local_80;
  int local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  int local_68;
  undefined4 local_5c;
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong *)(param_1 + 0x3d0) == 0) {
    plVar1 = *(longlong **)(param_1 + 0x398);
    if (plVar1 == (longlong *)0x0) {
      local_70 = 0;
      FUN_140056680(local_58,L"NO PlayerState");
      FUN_147d8f316(param_2 + 0xa8,local_58,&local_70);
      if (local_58[0] != 0) {
        FUN_1400020a8();
      }
    }
    else {
      local_88 = param_5;
      (**(code **)(*plVar1 + 0x5a0))(plVar1,param_2,param_3,param_4);
    }
    local_88 = param_5;
    FUN_1478b9376(param_1,param_2,param_3,param_4);
  }
  else {
    *(undefined4 *)(param_2 + 0xd8) = 0x3f800000;
    *(undefined4 *)(param_2 + 0xdc) = 0;
    *(undefined4 *)(param_2 + 0xe0) = 0;
    *(undefined4 *)(param_2 + 0xe4) = 0x3f800000;
    local_5c = 0;
    local_58[0] = *(longlong *)(*(longlong *)(param_1 + 0x3d0) + 0x18);
    FUN_1400021e4(local_58,&local_70);
    puVar2 = &DAT_149dfb77a;
    if (local_68 != 0) {
      puVar2 = (undefined2 *)CONCAT44(uStack_6c,local_70);
    }
    local_58[0] = *(longlong *)(param_1 + 0x18);
    FUN_1400021e4(local_58,&local_80);
    puVar3 = &DAT_149dfb77a;
    if (local_78 != 0) {
      puVar3 = local_80;
    }
    FUN_140002266(local_58,L"CONTROLLER %s Pawn %s",puVar3,puVar2);
    FUN_147d8f316(param_2 + 0xa8,local_58,&local_5c);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    if (local_80 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (CONCAT44(uStack_6c,local_70) != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a36b28 FUN_147a36b28 body=160 status=ok
// SIG undefined FUN_147a36b28(void)

undefined8 FUN_147a36b28(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x398) != 0) {
    FUN_141220240(*(longlong *)(param_1 + 0x398),param_2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
  }
  local_20 = *(undefined8 *)(param_1 + 0x18);
  FUN_1400021e4(&local_20,&local_30);
  puVar1 = local_30;
  if (local_28 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140056680(param_2,puVar1);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a36bcc FUN_147a36bcc body=14 status=ok
// SIG undefined FUN_147a36bcc(void)

undefined8 * FUN_147a36bcc(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x3c8);
  return param_2;
}



// FUNCTION 147a36c02 FUN_147a36c02 body=69 status=ok
// SIG undefined FUN_147a36c02(void)

undefined8 * FUN_147a36c02(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  if (lVar1 == 0) {
    param_2[2] = DAT_14c8464f0;
    uVar2 = DAT_14c8464e8;
    *param_2 = DAT_14c8464e0;
    param_2[1] = uVar2;
  }
  else {
    (**(code **)(*(longlong *)(lVar1 + 0x390) + 0x18))(lVar1 + 0x390,param_2);
  }
  return param_2;
}



// FUNCTION 147a36cb0 FUN_147a36cb0 body=59 status=ok
// SIG undefined FUN_147a36cb0(void)

undefined8 FUN_147a36cb0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)param_1[0x7a];
  if (plVar1 == (longlong *)0x0) {
    (**(code **)(*param_1 + 0x680))(param_1,param_2);
  }
  else {
    (**(code **)(*plVar1 + 0x720))(plVar1,param_2);
  }
  return param_2;
}



// FUNCTION 147a36cec FUN_147a36cec body=157 status=ok
// SIG undefined FUN_147a36cec(void)

void FUN_147a36cec(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1478c1b52();
  if (param_2 != (longlong *)0x0) {
    lVar1 = FUN_14490fee6();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      (**(code **)(*param_2 + 0x680))(param_2,local_38);
      (**(code **)(*param_1 + 0x688))(param_1,local_38,1);
      (**(code **)(*param_1 + 0x678))(param_1,param_2[0x79]);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a36d8a FUN_147a36d8a body=303 status=ok
// SIG undefined FUN_147a36d8a(void)

bool FUN_147a36d8a(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_1 + 0xd0) < 1) {
    bVar1 = true;
  }
  else {
    lVar5 = 0;
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + 0xc0);
      if (*(longlong *)(param_1 + 0xc0) == 0) {
        lVar3 = param_1;
      }
      local_5c = (float)*(double *)(lVar3 + 0x18 + lVar5);
      local_54 = (float)*(double *)(lVar3 + 0x10 + lVar5) * local_5c;
      local_58 = (float)*(double *)(lVar3 + 8 + lVar5) * local_5c;
      local_5c = (float)*(double *)(lVar3 + lVar5) * local_5c;
      local_60 = -(float)*(double *)(lVar3 + 0x10 + lVar5);
      local_64 = -(float)*(double *)(lVar3 + 8 + lVar5);
      local_68 = -(float)*(double *)(lVar3 + lVar5);
      iVar2 = FUN_147caac26(param_2,&local_68,&local_5c);
      bVar1 = iVar2 != 0;
      if (iVar2 == 0) break;
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + 0x20;
    } while (lVar4 < *(int *)(param_1 + 0xd0));
  }
  if ((local_50 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar1;
}



// FUNCTION 147a36eba FUN_147a36eba body=1838 status=ok
// SIG undefined FUN_147a36eba(void)

void FUN_147a36eba(longlong *param_1,double *param_2,uint param_3,undefined1 param_4)

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
  double dVar12;
  bool bVar13;
  bool bVar14;
  undefined1 uVar15;
  bool bVar16;
  longlong lVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  bool bVar22;
  ulonglong uVar23;
  float fVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  undefined1 auStack_238 [32];
  undefined1 local_218;
  undefined4 local_210;
  undefined4 local_208;
  undefined1 local_200;
  undefined1 local_1f8;
  undefined7 uStack_1f7;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  float local_1bc;
  double local_1b8 [3];
  undefined1 local_1a0 [24];
  undefined1 local_188 [24];
  undefined1 local_170 [24];
  undefined1 local_158 [24];
  undefined1 local_140 [24];
  undefined1 local_128 [24];
  undefined1 local_110 [32];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_238;
  dVar2 = *param_2;
  dVar3 = param_2[1];
  dVar4 = param_2[2];
  dVar5 = param_2[3];
  dVar6 = param_2[4];
  dVar7 = param_2[5];
  local_1d8 = param_2[6];
  dStack_1d0 = param_2[7];
  local_1e8 = param_2[8];
  dStack_1e0 = param_2[9];
  dVar12 = param_2[10];
  dStack_1f0 = param_2[0xb];
  dVar8 = param_2[0xc];
  dVar9 = param_2[0xd];
  dVar10 = param_2[0xe];
  dVar11 = param_2[0xf];
  lVar17 = 0;
  uVar18 = 0x3ff00000;
  bVar16 = true;
  do {
    bVar14 = bVar16;
    uVar25 = uVar18;
    if (!bVar14) {
      uVar25 = 0;
    }
    lVar20 = 0;
    bVar16 = true;
    do {
      bVar13 = bVar16;
      uVar26 = uVar18;
      if (!bVar13) {
        uVar26 = 0xbff00000;
      }
      lVar21 = 0;
      bVar16 = true;
      do {
        bVar22 = bVar16;
        uVar27 = uVar18;
        if (!bVar22) {
          uVar27 = 0xbff00000;
        }
        dVar1 = 1.0 / ((double)((ulonglong)uVar27 << 0x20) * dVar5 +
                       (double)((ulonglong)uVar26 << 0x20) * dStack_1d0 +
                       (double)((ulonglong)uVar25 << 0x20) * dStack_1f0 + dVar11);
        local_1b8[lVar21 * 0xc + lVar20 * 6 + lVar17 * 3] =
             dVar1 * (dVar2 * (double)((ulonglong)uVar27 << 0x20) +
                      dVar6 * (double)((ulonglong)uVar26 << 0x20) +
                      local_1e8 * (double)((ulonglong)uVar25 << 0x20) + dVar8);
        local_1b8[lVar21 * 0xc + lVar20 * 6 + lVar17 * 3 + 1] =
             (dVar3 * (double)((ulonglong)uVar27 << 0x20) +
              dVar7 * (double)((ulonglong)uVar26 << 0x20) +
              dStack_1e0 * (double)((ulonglong)uVar25 << 0x20) + dVar9) * dVar1;
        *(double *)(local_1a0 + lVar17 * 0x18 + lVar20 * 0x30 + lVar21 * 0x60 + -8) =
             ((double)((ulonglong)uVar27 << 0x20) * dVar4 +
              (double)((ulonglong)uVar26 << 0x20) * local_1d8 +
              (double)((ulonglong)uVar25 << 0x20) * dVar12 + dVar10) * dVar1;
        lVar21 = 1;
        bVar16 = false;
      } while (bVar22);
      lVar20 = lVar21;
      bVar16 = false;
    } while (bVar13);
    lVar17 = 1;
    bVar16 = false;
  } while (bVar14);
  uVar23 = (ulonglong)(param_3 >> 0xe & 0x3fc);
  local_1c8 = *(undefined4 *)((longlong)&DAT_14c758c60 + uVar23);
  uVar18 = param_3 >> 8 & 0xff;
  local_1c4 = (&DAT_14c758c60)[uVar18];
  uVar19 = (ulonglong)(param_3 & 0xff);
  local_1c0 = (&DAT_14c758c60)[uVar19];
  fVar24 = (float)(param_3 >> 0x18) * 0.003921569;
  local_200 = 0;
  local_208 = 0;
  local_210 = 0;
  _local_1f8 = CONCAT71((int7)((ulonglong)dVar12 >> 8),param_4);
  local_218 = param_4;
  local_1bc = fVar24;
  (**(code **)(*param_1 + 0x30))(local_1c0,local_1b8,local_1a0,&local_1c8);
  local_1c8 = *(undefined4 *)((longlong)&DAT_14c758c60 + uVar23);
  local_1c4 = (&DAT_14c758c60)[uVar18];
  local_1c0 = (&DAT_14c758c60)[uVar19];
  local_200 = 0;
  local_208 = 0;
  local_210 = 0;
  uVar15 = local_1f8;
  local_218 = local_1f8;
  local_1e8 = (double)uVar23;
  local_1bc = fVar24;
  (**(code **)(*param_1 + 0x30))(param_1,local_158,local_140,&local_1c8);
  local_1c8 = *(undefined4 *)((longlong)&DAT_14c758c60 + uVar23);
  local_1c4 = (&DAT_14c758c60)[uVar18];
  local_1c0 = (&DAT_14c758c60)[uVar19];
  local_200 = 0;
  local_208 = 0;
  local_210 = 0;
  local_218 = uVar15;
  local_1d8 = (double)uVar19;
  local_1bc = fVar24;
  (**(code **)(*param_1 + 0x30))(param_1,local_188,local_170,&local_1c8);
  dVar2 = local_1e8;
  local_1c8 = *(undefined4 *)((longlong)&DAT_14c758c60 + (longlong)local_1e8);
  local_1c4 = (&DAT_14c758c60)[uVar18];
  local_1c0 = (&DAT_14c758c60)[uVar19];
  local_200 = 0;
  local_208 = 0;
  local_210 = 0;
  local_218 = uVar15;
  local_1bc = fVar24;
  (**(code **)(*param_1 + 0x30))(param_1,local_128,local_110,&local_1c8);
  dVar3 = local_1d8;
  local_1c8 = *(undefined4 *)((longlong)&DAT_14c758c60 + (longlong)dVar2);
  local_1c4 = (&DAT_14c758c60)[uVar18];
  local_1c0 = (&DAT_14c758c60)[(longlong)local_1d8];
  local_200 = 0;
  local_208 = 0;
  local_210 = 0;
  local_218 = uVar15;
  local_1bc = fVar24;
  (**(code **)(*param_1 + 0x30))(param_1,local_1b8,local_188,&local_1c8);
  local_1c8 = *(undefined4 *)((longlong)&DAT_14c758c60 + (longlong)dVar2);
  local_1c4 = (&DAT_14c758c60)[uVar18];
  local_1c0 = (&DAT_14c758c60)[(longlong)dVar3];
  local_200 = 0;
  local_208 = 0;
  local_210 = 0;
  local_218 = uVar15;
  local_1bc = fVar24;
  (**(code **)(*param_1 + 0x30))(param_1,local_158,local_128,&local_1c8);
  local_1c8 = *(undefined4 *)((longlong)&DAT_14c758c60 + (longlong)dVar2);
  local_1c4 = (&DAT_14c758c60)[uVar18];
  local_1c0 = (&DAT_14c758c60)[(longlong)dVar3];
  local_200 = 0;
  local_208 = 0;
  local_210 = 0;
  local_218 = uVar15;
  local_1bc = fVar24;
  (**(code **)(*param_1 + 0x30))(param_1,local_1a0,local_170,&local_1c8);
  local_1c8 = *(undefined4 *)((longlong)&DAT_14c758c60 + (longlong)dVar2);
  local_1c4 = (&DAT_14c758c60)[uVar18];
  local_1c0 = (&DAT_14c758c60)[(longlong)dVar3];
  local_200 = 0;
  local_208 = 0;
  local_210 = 0;
  local_218 = uVar15;
  local_1bc = fVar24;
  (**(code **)(*param_1 + 0x30))(param_1,local_140,local_110,&local_1c8);
  local_1c8 = *(undefined4 *)((longlong)&DAT_14c758c60 + (longlong)dVar2);
  local_1c4 = (&DAT_14c758c60)[uVar18];
  local_1c0 = (&DAT_14c758c60)[(longlong)dVar3];
  local_200 = 0;
  local_208 = 0;
  local_210 = 0;
  local_218 = uVar15;
  local_1bc = fVar24;
  (**(code **)(*param_1 + 0x30))(param_1,local_1b8,local_158,&local_1c8);
  local_1c8 = *(undefined4 *)((longlong)&DAT_14c758c60 + (longlong)dVar2);
  local_1c4 = (&DAT_14c758c60)[uVar18];
  local_1c0 = (&DAT_14c758c60)[(longlong)dVar3];
  local_200 = 0;
  local_208 = 0;
  local_210 = 0;
  local_218 = uVar15;
  local_1bc = fVar24;
  (**(code **)(*param_1 + 0x30))(param_1,local_188,local_128,&local_1c8);
  local_1c8 = *(undefined4 *)((longlong)&DAT_14c758c60 + (longlong)dVar2);
  local_1c4 = (&DAT_14c758c60)[uVar18];
  local_1c0 = (&DAT_14c758c60)[(longlong)dVar3];
  local_200 = 0;
  local_208 = 0;
  local_210 = 0;
  local_218 = uVar15;
  local_1bc = fVar24;
  (**(code **)(*param_1 + 0x30))(param_1,local_1a0,local_140,&local_1c8);
  local_1c8 = *(undefined4 *)((longlong)&DAT_14c758c60 + (longlong)dVar2);
  local_1c4 = (&DAT_14c758c60)[uVar18];
  local_1c0 = (&DAT_14c758c60)[(longlong)dVar3];
  local_200 = 0;
  local_208 = 0;
  local_210 = 0;
  local_218 = uVar15;
  local_1bc = fVar24;
  (**(code **)(*param_1 + 0x30))(param_1,local_170,local_110,&local_1c8);
  if ((local_f0 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a375ea FUN_147a375ea body=45 status=ok
// SIG undefined FUN_147a375ea(void)

longlong FUN_147a375ea(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e79a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a37618 FUN_147a37618 body=45 status=ok
// SIG undefined FUN_147a37618(void)

longlong FUN_147a37618(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a37646 FUN_147a37646 body=48 status=ok
// SIG undefined FUN_147a37646(void)

longlong FUN_147a37646(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a37676 FUN_147a37676 body=48 status=ok
// SIG undefined FUN_147a37676(void)

longlong FUN_147a37676(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a376a6 FUN_147a376a6 body=48 status=ok
// SIG undefined FUN_147a376a6(void)

longlong FUN_147a376a6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a376d6 FUN_147a376d6 body=41 status=ok
// SIG undefined FUN_147a376d6(void)

void FUN_147a376d6(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Components/SplineComponent.h",0x2f,
                L"Pure virtual not implemented (%s)",L"USplineMetadata::InsertPoint");
  return;
}



// FUNCTION 147a37700 FUN_147a37700 body=41 status=ok
// SIG undefined FUN_147a37700(void)

void FUN_147a37700(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Components/SplineComponent.h",0x31,
                L"Pure virtual not implemented (%s)",L"USplineMetadata::UpdatePoint");
  return;
}



// FUNCTION 147a3772a FUN_147a3772a body=41 status=ok
// SIG undefined FUN_147a3772a(void)

void FUN_147a3772a(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Components/SplineComponent.h",0x32,
                L"Pure virtual not implemented (%s)",L"USplineMetadata::AddPoint");
  return;
}



// FUNCTION 147a37754 FUN_147a37754 body=41 status=ok
// SIG undefined FUN_147a37754(void)

void FUN_147a37754(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Components/SplineComponent.h",0x33,
                L"Pure virtual not implemented (%s)",L"USplineMetadata::RemovePoint");
  return;
}



// FUNCTION 147a3777e FUN_147a3777e body=41 status=ok
// SIG undefined FUN_147a3777e(void)

void FUN_147a3777e(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Components/SplineComponent.h",0x34,
                L"Pure virtual not implemented (%s)",L"USplineMetadata::DuplicatePoint");
  return;
}



// FUNCTION 147a377a8 FUN_147a377a8 body=41 status=ok
// SIG undefined FUN_147a377a8(void)

void FUN_147a377a8(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Components/SplineComponent.h",0x35,
                L"Pure virtual not implemented (%s)",L"USplineMetadata::CopyPoint");
  return;
}



// FUNCTION 147a377d2 FUN_147a377d2 body=41 status=ok
// SIG undefined FUN_147a377d2(void)

void FUN_147a377d2(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Components/SplineComponent.h",0x36,
                L"Pure virtual not implemented (%s)",L"USplineMetadata::Reset");
  return;
}



// FUNCTION 147a377fc FUN_147a377fc body=41 status=ok
// SIG undefined FUN_147a377fc(void)

void FUN_147a377fc(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Components/SplineComponent.h",0x37,
                L"Pure virtual not implemented (%s)",L"USplineMetadata::Fixup");
  return;
}



// FUNCTION 147a37870 FUN_147a37870 body=38 status=ok
// SIG undefined FUN_147a37870(void)

undefined8 FUN_147a37870(undefined8 param_1,int param_2)

{
  FUN_140797dc6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a3789a FUN_147a3789a body=55 status=ok
// SIG undefined FUN_147a3789a(void)

void FUN_147a3789a(undefined8 param_1,undefined8 param_2,int param_3)

{
  FUN_14072b1fe();
  if (param_3 == 1) {
    FUN_140d616f2(param_2,param_1);
  }
  FUN_147a2ce6a(param_2,param_1);
  return;
}



// FUNCTION 147a378d2 FUN_147a378d2 body=45 status=ok
// SIG undefined FUN_147a378d2(void)

longlong FUN_147a378d2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e248(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a37906 FUN_147a37906 body=48 status=ok
// SIG undefined FUN_147a37906(void)

longlong FUN_147a37906(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_14006e248(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a3793e FUN_147a3793e body=48 status=ok
// SIG undefined FUN_147a3793e(void)

longlong FUN_147a3793e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_14006e248(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a37976 FUN_147a37976 body=48 status=ok
// SIG undefined FUN_147a37976(void)

longlong FUN_147a37976(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_14006e248(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a379b2 FUN_147a379b2 body=45 status=ok
// SIG undefined FUN_147a379b2(void)

longlong FUN_147a379b2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14083f1da(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a379e0 FUN_147a379e0 body=45 status=ok
// SIG undefined FUN_147a379e0(void)

longlong FUN_147a379e0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e248(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a37a0e FUN_147a37a0e body=48 status=ok
// SIG undefined FUN_147a37a0e(void)

longlong FUN_147a37a0e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_14006e248(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a37a3e FUN_147a37a3e body=48 status=ok
// SIG undefined FUN_147a37a3e(void)

longlong FUN_147a37a3e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_14006e248(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a37a6e FUN_147a37a6e body=48 status=ok
// SIG undefined FUN_147a37a6e(void)

longlong FUN_147a37a6e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_14006e248(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a37a9e FUN_147a37a9e body=45 status=ok
// SIG undefined FUN_147a37a9e(void)

longlong FUN_147a37a9e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e79a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a37acc FUN_147a37acc body=45 status=ok
// SIG undefined FUN_147a37acc(void)

longlong FUN_147a37acc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145da1d76(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a37b02 FUN_147a37b02 body=45 status=ok
// SIG undefined FUN_147a37b02(void)

longlong FUN_147a37b02(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1459da0f0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a37b64 FUN_147a37b64 body=100 status=ok
// SIG undefined FUN_147a37b64(void)

void FUN_147a37b64(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_147a3c0f8(param_2,param_1 + -0x28,&local_20);
  lVar1 = local_20;
  if (local_20 != 0) {
    lVar1 = local_20 + 0x28;
  }
  *param_3 = lVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a37c6a FUN_147a37c6a body=59 status=ok
// SIG undefined FUN_147a37c6a(void)

undefined8 FUN_147a37c6a(longlong *param_1)

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



// FUNCTION 147a37d0c FUN_147a37d0c body=38 status=ok
// SIG undefined FUN_147a37d0c(void)

undefined8 FUN_147a37d0c(undefined8 param_1,int param_2)

{
  FUN_147a37da8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a37d32 FUN_147a37d32 body=63 status=ok
// SIG undefined FUN_147a37d32(void)

void FUN_147a37d32(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x60);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x60) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_14047a8f2(param_1);
  return;
}



// FUNCTION 147a37d7a FUN_147a37d7a body=45 status=ok
// SIG undefined FUN_147a37d7a(void)

longlong FUN_147a37d7a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x48;
  FUN_147a37da8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a37da8 FUN_147a37da8 body=76 status=ok
// SIG undefined FUN_147a37da8(void)

void FUN_147a37da8(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a897f90;
  param_1[9] = &PTR_FUN_14a897fd8;
  if (param_1[0xc] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0xc] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_1401c051c(param_1);
  return;
}



// FUNCTION 147a37e98 FUN_147a37e98 body=59 status=ok
// SIG undefined FUN_147a37e98(void)

undefined8 FUN_147a37e98(longlong *param_1)

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



// FUNCTION 147a37ede FUN_147a37ede body=32 status=ok
// SIG undefined FUN_147a37ede(void)

void FUN_147a37ede(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_14179b8cc(param_2);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 147a37fe6 FUN_147a37fe6 body=68 status=ok
// SIG undefined FUN_147a37fe6(void)

undefined8 FUN_147a37fe6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0x88);
      lVar1 = lVar1 + 0x88;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147a38052 FUN_147a38052 body=59 status=ok
// SIG undefined FUN_147a38052(void)

undefined8 FUN_147a38052(longlong *param_1)

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



// FUNCTION 147a3814a FUN_147a3814a body=63 status=ok
// SIG undefined FUN_147a3814a(void)

undefined1 FUN_147a3814a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147a38448(param_2,param_3);
    param_3 = param_3 + 0x240;
    param_2 = param_2 + 0x240;
  }
  return 1;
}



// FUNCTION 147a381b2 FUN_147a381b2 body=59 status=ok
// SIG undefined FUN_147a381b2(void)

undefined8 FUN_147a381b2(longlong *param_1)

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



// FUNCTION 147a383ac FUN_147a383ac body=75 status=ok
// SIG undefined FUN_147a383ac(void)

undefined8 * FUN_147a383ac(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a898760;
  FUN_14179b8cc(param_1 + 0x3b);
  FUN_14179b8cc(param_1 + 0x2d);
  FUN_140595c52(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a383f8 FUN_147a383f8 body=33 status=ok
// SIG undefined FUN_147a383f8(void)

undefined1 FUN_147a383f8(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = FUN_147a04652();
  uVar2 = 1;
  if (cVar1 == '\0') {
    uVar2 = *(undefined1 *)(param_1 + 0x160);
  }
  return uVar2;
}



// FUNCTION 147a3841a FUN_147a3841a body=46 status=ok
// SIG undefined FUN_147a3841a(void)

void FUN_147a3841a(undefined8 param_1,undefined8 param_2,int param_3)

{
  FUN_14072b458();
  FUN_147a27aac(param_2,param_1,param_3 == 1);
  return;
}



// FUNCTION 147a38448 FUN_147a38448 body=105 status=ok
// SIG undefined FUN_147a38448(void)

longlong FUN_147a38448(longlong param_1,longlong param_2)

{
  FUN_147764d36();
  FUN_147765084(param_1 + 0x110,param_2 + 0x110);
  *(undefined1 *)(param_1 + 0x160) = *(undefined1 *)(param_2 + 0x160);
  FUN_1408d5a44(param_1 + 0x168,param_2 + 0x168);
  *(undefined1 *)(param_1 + 0x1d0) = *(undefined1 *)(param_2 + 0x1d0);
  FUN_1408d5a44(param_1 + 0x1d8,param_2 + 0x1d8);
  return param_1;
}



// FUNCTION 147a384b2 FUN_147a384b2 body=72 status=ok
// SIG undefined FUN_147a384b2(void)

void FUN_147a384b2(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x48) == '\x01') {
    *param_1 = &PTR_FUN_14a898760;
    FUN_14179b8cc(param_1 + 0x3b);
    FUN_14179b8cc(param_1 + 0x2d);
    FUN_140595c52(param_1);
    *(undefined1 *)(param_1 + 0x48) = 0;
  }
  return;
}



// FUNCTION 147a384fa FUN_147a384fa body=72 status=ok
// SIG undefined FUN_147a384fa(void)

undefined8 FUN_147a384fa(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_147a38542();
  if (cVar1 != '\0') {
    cVar1 = FUN_147a38592(param_1 + 0x18,param_2 + 0x18);
    if (cVar1 != '\0') {
      uVar2 = FUN_147a38542(param_1 + 0x30,param_2 + 0x30);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 147a38542 FUN_147a38542 body=80 status=ok
// SIG undefined FUN_147a38542(void)

byte FUN_147a38542(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  
  if (((*(int *)(param_1 + 1) == *(int *)(param_2 + 1)) &&
      (cVar1 = FUN_147a385e2(*param_1,*param_2), cVar1 != '\0')) &&
     (*(char *)(param_1 + 2) == *(char *)(param_2 + 2))) {
    if (*(char *)(param_1 + 2) == '\0') {
      return 1;
    }
    return -(*(float *)((longlong)param_2 + 0x14) == *(float *)((longlong)param_1 + 0x14)) & 1;
  }
  return 0;
}



// FUNCTION 147a38592 FUN_147a38592 body=80 status=ok
// SIG undefined FUN_147a38592(void)

byte FUN_147a38592(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  
  if (((*(int *)(param_1 + 1) == *(int *)(param_2 + 1)) &&
      (cVar1 = FUN_147a386c5(*param_1,*param_2), cVar1 != '\0')) &&
     (*(char *)(param_1 + 2) == *(char *)(param_2 + 2))) {
    if (*(char *)(param_1 + 2) == '\0') {
      return 1;
    }
    return -(*(float *)((longlong)param_2 + 0x14) == *(float *)((longlong)param_1 + 0x14)) & 1;
  }
  return 0;
}



// FUNCTION 147a385e2 FUN_147a385e2 body=68 status=ok
// SIG undefined FUN_147a385e2(void)

char FUN_147a385e2(longlong param_1,longlong param_2,int param_3)

{
  char cVar1;
  
  if (param_3 == 0) {
    cVar1 = '\x01';
  }
  else {
    do {
      param_3 = param_3 + -1;
      cVar1 = FUN_147a38626(param_1,param_2);
      if (cVar1 == '\0') {
        return '\0';
      }
      param_1 = param_1 + 0x58;
      param_2 = param_2 + 0x58;
    } while (param_3 != 0);
  }
  return cVar1;
}



// FUNCTION 147a38626 FUN_147a38626 body=159 status=ok
// SIG undefined FUN_147a38626(void)

bool FUN_147a38626(float *param_1,float *param_2)

{
  bool bVar1;
  
  if (((((((*param_1 != *param_2) || (NAN(*param_1) || NAN(*param_2))) ||
         (*(double *)(param_1 + 2) != *(double *)(param_2 + 2))) ||
        ((NAN(*(double *)(param_1 + 2)) || NAN(*(double *)(param_2 + 2)) ||
         (*(double *)(param_1 + 4) != *(double *)(param_2 + 4))))) ||
       (((NAN(*(double *)(param_1 + 4)) || NAN(*(double *)(param_2 + 4)) ||
         ((*(double *)(param_1 + 6) != *(double *)(param_2 + 6) ||
          (NAN(*(double *)(param_1 + 6)) || NAN(*(double *)(param_2 + 6)))))) ||
        (*(double *)(param_1 + 8) != *(double *)(param_2 + 8))))) ||
      ((((NAN(*(double *)(param_1 + 8)) || NAN(*(double *)(param_2 + 8)) ||
         (*(double *)(param_1 + 10) != *(double *)(param_2 + 10))) ||
        (NAN(*(double *)(param_1 + 10)) || NAN(*(double *)(param_2 + 10)))) ||
       (((*(double *)(param_1 + 0xc) != *(double *)(param_2 + 0xc) ||
         (NAN(*(double *)(param_1 + 0xc)) || NAN(*(double *)(param_2 + 0xc)))) ||
        ((*(double *)(param_1 + 0xe) != *(double *)(param_2 + 0xe) ||
         ((NAN(*(double *)(param_1 + 0xe)) || NAN(*(double *)(param_2 + 0xe)) ||
          (*(double *)(param_1 + 0x10) != *(double *)(param_2 + 0x10))))))))))) ||
     ((NAN(*(double *)(param_1 + 0x10)) || NAN(*(double *)(param_2 + 0x10)) ||
      ((*(double *)(param_1 + 0x12) != *(double *)(param_2 + 0x12) ||
       (NAN(*(double *)(param_1 + 0x12)) || NAN(*(double *)(param_2 + 0x12)))))))) {
    bVar1 = false;
  }
  else {
    bVar1 = *(char *)(param_1 + 0x14) == *(char *)(param_2 + 0x14);
  }
  return bVar1;
}



// FUNCTION 147a386c5 FUN_147a386c5 body=76 status=ok
// SIG undefined FUN_147a386c5(void)

char FUN_147a386c5(longlong param_1,longlong param_2,int param_3)

{
  char cVar1;
  
  if (param_3 == 0) {
    cVar1 = '\x01';
  }
  else {
    do {
      param_3 = param_3 + -1;
      cVar1 = FUN_147a38711(param_1,param_2);
      if (cVar1 == '\0') {
        return '\0';
      }
      param_1 = param_1 + 0x80;
      param_2 = param_2 + 0x80;
    } while (param_3 != 0);
  }
  return cVar1;
}



// FUNCTION 147a38711 FUN_147a38711 body=153 status=ok
// SIG undefined FUN_147a38711(void)

bool FUN_147a38711(float *param_1,float *param_2,undefined4 param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined4 in_EAX;
  int iVar7;
  int iVar8;
  
  if ((*param_1 == *param_2) && (!NAN(*param_1) && !NAN(*param_2))) {
    auVar1._8_4_ = (int)-(ulonglong)(*(double *)(param_2 + 6) == *(double *)(param_1 + 6));
    auVar1._0_8_ = -(ulonglong)(*(double *)(param_2 + 4) == *(double *)(param_1 + 4));
    auVar1._12_4_ =
         (int)(-(ulonglong)(*(double *)(param_2 + 6) == *(double *)(param_1 + 6)) >> 0x20);
    iVar7 = movmskpd(in_EAX,auVar1);
    auVar4._8_8_ = -(ulonglong)(*(double *)(param_2 + 10) == *(double *)(param_1 + 10));
    auVar4._0_8_ = -(ulonglong)(*(double *)(param_2 + 8) == *(double *)(param_1 + 8));
    iVar8 = movmskpd(param_3,auVar4);
    if (iVar7 + iVar8 * 4 == 0xf) {
      auVar2._8_4_ = (int)-(ulonglong)(*(double *)(param_2 + 0xe) == *(double *)(param_1 + 0xe));
      auVar2._0_8_ = -(ulonglong)(*(double *)(param_2 + 0xc) == *(double *)(param_1 + 0xc));
      auVar2._12_4_ =
           (int)(-(ulonglong)(*(double *)(param_2 + 0xe) == *(double *)(param_1 + 0xe)) >> 0x20);
      iVar7 = movmskpd(0xf,auVar2);
      auVar5._8_8_ = -(ulonglong)(*(double *)(param_2 + 0x12) == *(double *)(param_1 + 0x12));
      auVar5._0_8_ = -(ulonglong)(*(double *)(param_2 + 0x10) == *(double *)(param_1 + 0x10));
      iVar8 = movmskpd(iVar8,auVar5);
      if (iVar7 + iVar8 * 4 == 0xf) {
        auVar3._8_4_ = (int)-(ulonglong)(*(double *)(param_2 + 0x16) == *(double *)(param_1 + 0x16))
        ;
        auVar3._0_8_ = -(ulonglong)(*(double *)(param_2 + 0x14) == *(double *)(param_1 + 0x14));
        auVar3._12_4_ =
             (int)(-(ulonglong)(*(double *)(param_2 + 0x16) == *(double *)(param_1 + 0x16)) >> 0x20)
        ;
        iVar7 = movmskpd(0xf,auVar3);
        auVar6._8_8_ = -(ulonglong)(*(double *)(param_2 + 0x1a) == *(double *)(param_1 + 0x1a));
        auVar6._0_8_ = -(ulonglong)(*(double *)(param_2 + 0x18) == *(double *)(param_1 + 0x18));
        iVar8 = movmskpd(iVar8,auVar6);
        if (iVar7 + iVar8 * 4 == 0xf) {
          return *(char *)(param_1 + 0x1c) == *(char *)(param_2 + 0x1c);
        }
      }
    }
  }
  return false;
}



// FUNCTION 147a387aa FUN_147a387aa body=96 status=ok
// SIG undefined FUN_147a387aa(void)

void FUN_147a387aa(longlong param_1,int param_2)

{
  int extraout_var;
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = 0;
  }
  else {
    FUN_144a3809e((longlong)param_2 << 8,0x10);
    iVar1 = 0x7fffffff;
    if (param_2 <= extraout_var) {
      iVar1 = extraout_var;
    }
  }
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x100,0x10);
  }
  return;
}



// FUNCTION 147a3880a FUN_147a3880a body=109 status=ok
// SIG undefined FUN_147a3880a(void)

void FUN_147a3880a(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x68,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x68)) {
      uVar2 = uVar1 / 0x68 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x68,8);
  }
  return;
}



// FUNCTION 147a38878 FUN_147a38878 body=113 status=ok
// SIG undefined FUN_147a38878(void)

void FUN_147a38878(longlong param_1,int param_2)

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



// FUNCTION 147a388ea FUN_147a388ea body=109 status=ok
// SIG undefined FUN_147a388ea(void)

void FUN_147a388ea(longlong param_1,int param_2)

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



// FUNCTION 147a38958 FUN_147a38958 body=113 status=ok
// SIG undefined FUN_147a38958(void)

void FUN_147a38958(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xa0,0x10);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0xa0)) {
      uVar2 = uVar1 / 0xa0 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xa0,0x10);
  }
  return;
}



// FUNCTION 147a389ca FUN_147a389ca body=109 status=ok
// SIG undefined FUN_147a389ca(void)

void FUN_147a389ca(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x38,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar4,0x38,8);
  }
  return;
}



// FUNCTION 147a38a38 FUN_147a38a38 body=40 status=ok
// SIG undefined FUN_147a38a38(void)

void FUN_147a38a38(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xa8);
  *(undefined4 *)((longlong)param_2 + 0xa8) = 0x3f800000;
  return;
}



// FUNCTION 147a38a60 FUN_147a38a60 body=40 status=ok
// SIG undefined FUN_147a38a60(void)

void FUN_147a38a60(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xa8);
  *(undefined4 *)((longlong)param_2 + 0xa8) = 0x3f800000;
  return;
}



// FUNCTION 147a38aa0 FUN_147a38aa0 body=68 status=ok
// SIG undefined FUN_147a38aa0(void)

undefined8 FUN_147a38aa0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0xb0);
      lVar1 = lVar1 + 0xb0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147a38b0c FUN_147a38b0c body=59 status=ok
// SIG undefined FUN_147a38b0c(void)

undefined8 FUN_147a38b0c(longlong *param_1)

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



// FUNCTION 147a38bba FUN_147a38bba body=160 status=ok
// SIG undefined FUN_147a38bba(void)

void FUN_147a38bba(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  memset(param_2,0,0x270);
  FUN_140af333a(param_2);
  *param_2 = &PTR_FUN_14a8894b0;
  param_2[0x43] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_2[0x41] = DAT_14c8464e0;
  param_2[0x42] = uVar1;
  param_2[0x46] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_2[0x44] = DAT_14c8464e0;
  param_2[0x45] = uVar1;
  uVar1 = DAT_14c8464e8;
  param_2[0x47] = DAT_14c8464e0;
  param_2[0x48] = uVar1;
  param_2[0x49] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_2[0x4a] = DAT_14c8464e0;
  param_2[0x4b] = uVar1;
  param_2[0x4c] = DAT_14c8464f0;
  return;
}



// FUNCTION 147a38c5a FUN_147a38c5a body=144 status=ok
// SIG undefined FUN_147a38c5a(void)

void FUN_147a38c5a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_140af333a(param_2);
  *param_2 = &PTR_FUN_14a8894b0;
  param_2[0x43] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_2[0x41] = DAT_14c8464e0;
  param_2[0x42] = uVar1;
  param_2[0x46] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_2[0x44] = DAT_14c8464e0;
  param_2[0x45] = uVar1;
  uVar1 = DAT_14c8464e8;
  param_2[0x47] = DAT_14c8464e0;
  param_2[0x48] = uVar1;
  param_2[0x49] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_2[0x4a] = DAT_14c8464e0;
  param_2[0x4b] = uVar1;
  param_2[0x4c] = DAT_14c8464f0;
  return;
}



// FUNCTION 147a38d24 FUN_147a38d24 body=102 status=ok
// SIG undefined FUN_147a38d24(void)

undefined1 FUN_147a38d24(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147a38e72(param_2,param_3);
    puVar2 = (undefined8 *)(param_3 + 0x208);
    puVar3 = (undefined8 *)(param_2 + 0x208);
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    param_3 = param_3 + 0x270;
    param_2 = param_2 + 0x270;
  }
  return 1;
}



// FUNCTION 147a38db2 FUN_147a38db2 body=59 status=ok
// SIG undefined FUN_147a38db2(void)

undefined8 FUN_147a38db2(longlong *param_1)

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



// FUNCTION 147a38dfe FUN_147a38dfe body=38 status=ok
// SIG undefined FUN_147a38dfe(void)

void FUN_147a38dfe(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x270) == '\x01') {
    FUN_140797dc6(param_2);
    *(undefined1 *)(param_2 + 0x270) = 0;
  }
  return;
}



// FUNCTION 147a38e72 FUN_147a38e72 body=125 status=ok
// SIG undefined FUN_147a38e72(void)

longlong FUN_147a38e72(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_1478990ac();
  lVar1 = *(longlong *)(param_2 + 0x1d0);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 0x1d0);
    }
  }
  *(longlong *)(param_1 + 0x1d0) = lVar1;
  FUN_147a38ef0(param_1 + 0x1d8,param_2 + 0x1d8);
  FUN_1403fbf4e(param_1 + 0x1e8,param_2 + 0x1e8);
  FUN_14349ead6(param_1 + 0x1f8,param_2 + 0x1f8);
  return param_1;
}



// FUNCTION 147a38ef0 FUN_147a38ef0 body=93 status=ok
// SIG undefined FUN_147a38ef0(void)

undefined8 * FUN_147a38ef0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140797e30(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147a38f4e(param_1,iVar1);
      FUN_147a38fc1(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147a38f4e FUN_147a38f4e body=115 status=ok
// SIG undefined FUN_147a38f4e(void)

void FUN_147a38f4e(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x28,8);
    iVar2 = (int)(uVar1 / 0x28);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x28,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147a38fc1 FUN_147a38fc1 body=52 status=ok
// SIG undefined FUN_147a38fc1(void)

void FUN_147a38fc1(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_147a38ff6(param_1,param_2);
    param_1 = param_1 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return;
}



// FUNCTION 147a38ff6 FUN_147a38ff6 body=168 status=ok
// SIG undefined FUN_147a38ff6(void)

undefined8 * FUN_147a38ff6(undefined8 *param_1,undefined8 *param_2)

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
    FUN_147a3909e(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 << 6);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_147888b08(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 << 2);
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  return param_1;
}



// FUNCTION 147a3909e FUN_147a3909e body=98 status=ok
// SIG undefined FUN_147a3909e(void)

void FUN_147a3909e(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 6,0x10);
    iVar1 = (int)(uVar2 >> 6);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x40,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147a39122 FUN_147a39122 body=48 status=ok
// SIG undefined FUN_147a39122(void)

longlong FUN_147a39122(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x240;
  FUN_147a39152(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a39152 FUN_147a39152 body=92 status=ok
// SIG undefined FUN_147a39152(void)

void FUN_147a39152(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a89a650;
  *(undefined ***)((longlong)param_1 + (longlong)*(int *)(param_1[1] + 4) + 8) = &PTR_FUN_14a89a6b0;
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  FUN_147a391ae(param_1 + 0x1e);
  param_1[0x48] = &PTR_FUN_149e38530;
  return;
}



// FUNCTION 147a391ae FUN_147a391ae body=137 status=ok
// SIG undefined FUN_147a391ae(void)

void FUN_147a391ae(longlong param_1)

{
  *(undefined ***)(param_1 + -0xf0) = &PTR_FUN_14a89a7a0;
  *(undefined ***)(param_1 + -0xe8 + (longlong)*(int *)(*(longlong *)(param_1 + -0xe8) + 4)) =
       &PTR_LAB_14a89a800;
  FUN_147a3927e(*(undefined8 *)(param_1 + -0x20),*(undefined4 *)(param_1 + -0x18));
  if (*(longlong *)(param_1 + -0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + -0xa0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + -0xb0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + -200) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147a39238 FUN_147a39238 body=48 status=ok
// SIG undefined FUN_147a39238(void)

longlong FUN_147a39238(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x238;
  FUN_147a392d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a3927e FUN_147a3927e body=82 status=ok
// SIG undefined FUN_147a3927e(void)

void FUN_147a3927e(longlong param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_2 != 0) {
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + lVar5 * 8);
      if (lVar2 != 0) {
        lVar4 = (longlong)*(int *)(*(longlong *)(lVar2 + 8) + 4);
        piVar1 = (int *)(lVar2 + 0x10 + lVar4);
        *piVar1 = *piVar1 + -1;
        puVar3 = (undefined8 *)(lVar2 + lVar4 + 8);
        if (puVar3 != (undefined8 *)0x0 && *piVar1 == 0) {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
      lVar5 = lVar5 + 1;
    } while (param_2 != (int)lVar5);
  }
  return;
}



// FUNCTION 147a392d0 FUN_147a392d0 body=92 status=ok
// SIG undefined FUN_147a392d0(void)

void FUN_147a392d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a89a650;
  *(undefined ***)((longlong)param_1 + (longlong)*(int *)(param_1[1] + 4) + 8) = &PTR_FUN_14a89a6b0;
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  FUN_147a391ae(param_1 + 0x1e);
  param_1[0x47] = &PTR_FUN_149e38530;
  return;
}



// FUNCTION 147a3932c FUN_147a3932c body=293 status=ok
// SIG undefined FUN_147a3932c(void)

float FUN_147a3932c(longlong *param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  double dVar10;
  
  dVar1 = (double)param_1[0x28];
  dVar2 = (double)param_1[0x27];
  dVar3 = (double)param_1[0x26];
  dVar4 = (double)param_1[0x12];
  dVar5 = (double)param_1[0xe];
  dVar6 = (double)param_1[10];
  fVar7 = (float)(**(code **)(*param_1 + 0x18))();
  dVar8 = (double)fVar7;
  dVar10 = (double)*(float *)(param_1 + 0x5a);
  fVar7 = (float)(**(code **)(*param_1 + 0x18))(param_1);
  dVar1 = (dVar4 * dVar8 * dVar10 + dVar1) - *(double *)(param_2 + 0xb58);
  dVar4 = (dVar5 * dVar8 * dVar10 + dVar2) - *(double *)(param_2 + 0xb50);
  dVar2 = (dVar6 * dVar8 * dVar10 + dVar3) - *(double *)(param_2 + 0xb48);
  fVar9 = (float)SQRT(dVar1 * dVar1 + dVar2 * dVar2 + dVar4 * dVar4);
  if (fVar9 <= 1.0) {
    fVar9 = 1.0;
  }
  return (fVar7 * *(float *)(param_1 + 0x5b) * *(float *)(param_2 + 0xb98)) / fVar9;
}



// FUNCTION 147a3951c FUN_147a3951c body=59 status=ok
// SIG undefined FUN_147a3951c(void)

undefined8 FUN_147a3951c(longlong *param_1)

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



// FUNCTION 147a39606 FUN_147a39606 body=59 status=ok
// SIG undefined FUN_147a39606(void)

undefined8 FUN_147a39606(longlong *param_1)

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



// FUNCTION 147a396ce FUN_147a396ce body=47 status=ok
// SIG undefined FUN_147a396ce(void)

void FUN_147a396ce(undefined8 param_1,longlong *param_2)

{
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147a39714 FUN_147a39714 body=81 status=ok
// SIG undefined FUN_147a39714(void)

undefined8 FUN_147a39714(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      FUN_147a2f6e4(param_2 + -0x10,param_3 + -0x10);
      FUN_147888ab0(param_2,param_3);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147a3978e FUN_147a3978e body=59 status=ok
// SIG undefined FUN_147a3978e(void)

undefined8 FUN_147a3978e(longlong *param_1)

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



// FUNCTION 147a3982c FUN_147a3982c body=51 status=ok
// SIG undefined FUN_147a3982c(void)

void FUN_147a3982c(longlong *param_1)

{
  if ((char)param_1[5] == '\x01') {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 5) = 0;
  }
  return;
}



// FUNCTION 147a39878 FUN_147a39878 body=63 status=ok
// SIG undefined FUN_147a39878(void)

undefined1 FUN_147a39878(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147a38e72(param_2,param_3);
    param_3 = param_3 + 0x210;
    param_2 = param_2 + 0x210;
  }
  return 1;
}



// FUNCTION 147a398e0 FUN_147a398e0 body=59 status=ok
// SIG undefined FUN_147a398e0(void)

undefined8 FUN_147a398e0(longlong *param_1)

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



// FUNCTION 147a3992c FUN_147a3992c body=38 status=ok
// SIG undefined FUN_147a3992c(void)

void FUN_147a3992c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x210) == '\x01') {
    FUN_140797dc6(param_2);
    *(undefined1 *)(param_2 + 0x210) = 0;
  }
  return;
}



// FUNCTION 147a399b0 FUN_147a399b0 body=34 status=ok
// SIG undefined FUN_147a399b0(void)

void FUN_147a399b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_LAB_14a899320;
  return;
}



// FUNCTION 147a399d2 FUN_147a399d2 body=29 status=ok
// SIG undefined FUN_147a399d2(void)

undefined8 FUN_147a399d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a399f0 FUN_147a399f0 body=73 status=ok
// SIG undefined FUN_147a399f0(void)

undefined8 * FUN_147a399f0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149e668b0;
  if ((DAT_14c948580 != 0) && (*(char *)((longlong)param_1 + 9) == '\x01')) {
    FUN_14019e20a(DAT_14c948580,param_1);
    *(undefined1 *)((longlong)param_1 + 9) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a39a3a FUN_147a39a3a body=32 status=ok
// SIG undefined FUN_147a39a3a(void)

undefined8 FUN_147a39a3a(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FObjectFinderOptional");
  return param_2;
}



// FUNCTION 147a39a5a FUN_147a39a5a body=73 status=ok
// SIG undefined FUN_147a39a5a(void)

undefined8 * FUN_147a39a5a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149e668b0;
  if ((DAT_14c948580 != 0) && (*(char *)((longlong)param_1 + 9) == '\x01')) {
    FUN_14019e20a(DAT_14c948580,param_1);
    *(undefined1 *)((longlong)param_1 + 9) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a39aa4 FUN_147a39aa4 body=32 status=ok
// SIG undefined FUN_147a39aa4(void)

undefined8 FUN_147a39aa4(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FObjectFinderOptional");
  return param_2;
}



// FUNCTION 147a39ac4 FUN_147a39ac4 body=68 status=ok
// SIG undefined FUN_147a39ac4(void)

undefined8 * FUN_147a39ac4(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a899480;
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



// FUNCTION 147a39b0c FUN_147a39b0c body=81 status=ok
// SIG undefined FUN_147a39b0c(void)

undefined8 FUN_147a39b0c(longlong param_1)

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



// FUNCTION 147a39b64 FUN_147a39b64 body=89 status=ok
// SIG undefined FUN_147a39b64(void)

bool FUN_147a39b64(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_147a39baf;
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
LAB_147a39baf:
  return lVar6 == param_2;
}



// FUNCTION 147a39bda FUN_147a39bda body=118 status=ok
// SIG undefined FUN_147a39bda(void)

void FUN_147a39bda(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a899480;
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



// FUNCTION 147a39c50 FUN_147a39c50 body=118 status=ok
// SIG undefined FUN_147a39c50(void)

void FUN_147a39c50(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a899480;
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



// FUNCTION 147a39cc6 FUN_147a39cc6 body=156 status=ok
// SIG undefined FUN_147a39cc6(void)

void FUN_147a39cc6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a899480;
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
                    /* WARNING: Could not recover jumptable at 0x000147a39d52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147a39d62 FUN_147a39d62 body=94 status=ok
// SIG undefined FUN_147a39d62(void)

void FUN_147a39d62(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000147a39daa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000147a39db5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 147a39dc0 FUN_147a39dc0 body=32 status=ok
// SIG undefined FUN_147a39dc0(void)

undefined8 FUN_147a39dc0(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,"FTextRenderComponentMIDCache");
  return param_2;
}



// FUNCTION 147a39de0 FUN_147a39de0 body=31 status=ok
// SIG undefined FUN_147a39de0(void)

undefined8 FUN_147a39de0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a39e18 FUN_147a39e18 body=93 status=ok
// SIG undefined FUN_147a39e18(void)

void FUN_147a39e18(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a899590;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147a39e76 FUN_147a39e76 body=126 status=ok
// SIG undefined FUN_147a39e76(void)

void FUN_147a39e76(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a899590;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147a39ee5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147a39ef4 FUN_147a39ef4 body=21 status=ok
// SIG undefined FUN_147a39ef4(void)

undefined8 FUN_147a39ef4(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147a39f0a FUN_147a39f0a body=114 status=ok
// SIG undefined FUN_147a39f0a(void)

void FUN_147a39f0a(longlong *param_1,int param_2)

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



// FUNCTION 147a39f7c FUN_147a39f7c body=76 status=ok
// SIG undefined FUN_147a39f7c(void)

undefined8 * FUN_147a39f7c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a89a2c0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a39fd0 FUN_147a39fd0 body=39 status=ok
// SIG undefined FUN_147a39fd0(void)

void FUN_147a39fd0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x88,0x10);
  FUN_147a3a00a(uVar1,param_1);
  return;
}



// FUNCTION 147a3a00a FUN_147a3a00a body=182 status=ok
// SIG undefined FUN_147a3a00a(void)

undefined8 * FUN_147a3a00a(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *param_1 = &PTR_FUN_14a176fc0;
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0x68);
  *(undefined2 *)((longlong)param_1 + 0x6c) = *(undefined2 *)(param_2 + 0x6c);
  *param_1 = &PTR_FUN_14a89a2c0;
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0x70);
  param_1[0xf] = 0;
  iVar1 = *(int *)(param_2 + 0x80);
  _Src = *(void **)(param_2 + 0x78);
  *(int *)(param_1 + 0x10) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  }
  else {
    FUN_147a3a0c0(param_1 + 0xf,iVar1,0);
    memcpy((void *)param_1[0xf],_Src,(longlong)iVar1 << 3);
  }
  return param_1;
}



// FUNCTION 147a3a0c0 FUN_147a3a0c0 body=98 status=ok
// SIG undefined FUN_147a3a0c0(void)

void FUN_147a3a0c0(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147a3a122 FUN_147a3a122 body=355 status=ok
// SIG undefined FUN_147a3a122(void)

undefined4 *
FUN_147a3a122(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

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
  FUN_147a3a286(param_1,local_48);
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
  cVar3 = FUN_147a3a36c(param_1,uVar8,local_40);
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
      FUN_147a3a48a(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a3a286 FUN_147a3a286 body=230 status=ok
// SIG undefined FUN_147a3a286(void)

int * FUN_147a3a286(longlong *param_1,int *param_2)

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



// FUNCTION 147a3a36c FUN_147a3a36c body=148 status=ok
// SIG undefined FUN_147a3a36c(void)

void FUN_147a3a36c(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
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
          FUN_147a3a400((int)lVar3,*param_4,1);
          *param_4 = iVar7;
          uVar5 = 1;
          goto LAB_147a3a3d6;
        }
        iVar7 = (int)plVar6[2];
      } while (iVar7 != -1);
    }
  }
  uVar5 = 0;
LAB_147a3a3d6:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar5;
  }
  return;
}



// FUNCTION 147a3a400 FUN_147a3a400 body=138 status=ok
// SIG undefined FUN_147a3a400(void)

void FUN_147a3a400(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 147a3a48a FUN_147a3a48a body=473 status=ok
// SIG undefined FUN_147a3a48a(void)

void FUN_147a3a48a(longlong *param_1)

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



// FUNCTION 147a3a664 FUN_147a3a664 body=29 status=ok
// SIG undefined FUN_147a3a664(void)

undefined8 FUN_147a3a664(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a3a698 FUN_147a3a698 body=41 status=ok
// SIG undefined FUN_147a3a698(void)

undefined8 FUN_147a3a698(void)

{
  longlong *in_R9;
  longlong *plVar1;
  
  if (*in_R9 != 0) {
    plVar1 = in_R9 + 4;
    if ((longlong *)in_R9[2] != (longlong *)0x0) {
      plVar1 = (longlong *)in_R9[2];
    }
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return 0;
}



// FUNCTION 147a3a6e6 FUN_147a3a6e6 body=32 status=ok
// SIG undefined FUN_147a3a6e6(void)

undefined8 FUN_147a3a6e6(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,&DAT_149dfb77a);
  return param_2;
}



// FUNCTION 147a3a710 FUN_147a3a710 body=163 status=ok
// SIG undefined FUN_147a3a710(void)

void FUN_147a3a710(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  FUN_144aa17a4();
  lVar1 = FUN_14639592e();
  if (lVar1 != 0) {
    FUN_14485c47a(param_1 + 8,lVar1);
    uVar3 = -*(int *)(lVar1 + 0x5c) & (*(int *)(lVar1 + 0x58) + *(int *)(lVar1 + 0x5c)) - 1U;
    puVar2 = (undefined8 *)FUN_14001cc68((longlong)(int)(uVar3 + (uVar3 == 0)),0);
    *(undefined8 **)(param_1 + 0x10) = puVar2;
    FUN_147a04442(puVar2);
    *puVar2 = &PTR_FUN_14a74c030;
    puVar2[0x2c] = 0;
    puVar2[0x2d] = 0;
    puVar2[0x2e] = 0;
    puVar2[0x2f] = 0;
    *(undefined4 *)(puVar2 + 0x30) = 0x3f800000;
    memset(puVar2 + 0x31,0,0x98);
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  return;
}



// FUNCTION 147a3a7b3 FUN_147a3a7b3 body=107 status=ok
// SIG undefined FUN_147a3a7b3(void)

longlong * FUN_147a3a7b3(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    puVar1 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + lVar2),4);
      }
      else {
        thunk_FUN_14572512c(param_1);
      }
    }
    else {
      *(undefined4 *)(param_2 + lVar2) = *puVar1;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0x24);
  return param_1;
}



// FUNCTION 147a3a81e FUN_147a3a81e body=109 status=ok
// SIG undefined FUN_147a3a81e(void)

void FUN_147a3a81e(longlong param_1,int param_2)

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



// FUNCTION 147a3a88c FUN_147a3a88c body=147 status=ok
// SIG undefined FUN_147a3a88c(void)

void FUN_147a3a88c(longlong param_1,int param_2)

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



// FUNCTION 147a3a920 FUN_147a3a920 body=143 status=ok
// SIG undefined FUN_147a3a920(void)

void FUN_147a3a920(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  
  FUN_144aa17a4();
  if (DAT_14cad3288 == 0) {
    uVar3 = FUN_140002dac();
    DAT_14cad3288 = FUN_140002ddd(FUN_1463bf053,uVar3,L"SplineInstanceData");
    if (DAT_14cad3288 == 0) {
      return;
    }
  }
  lVar2 = DAT_14cad3288;
  FUN_14485c47a(param_1 + 8,DAT_14cad3288);
  iVar1 = *(int *)(lVar2 + 0x5c);
  uVar4 = -iVar1 & (*(int *)(lVar2 + 0x58) + iVar1) - 1U;
  uVar3 = FUN_14001cc68((longlong)(int)(uVar4 + (uVar4 == 0)),0);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  FUN_147a3a9b0(uVar3,*param_2);
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



// FUNCTION 147a3a9b0 FUN_147a3a9b0 body=196 status=ok
// SIG undefined FUN_147a3a9b0(void)

undefined8 * FUN_147a3a9b0(undefined8 *param_1)

{
  FUN_147a04442();
  *param_1 = &PTR_FUN_14a898760;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c4) = 0xffffffff00000000;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x184) = 0;
  *(undefined8 *)((longlong)param_1 + 0x189) = 0;
  *(undefined8 *)((longlong)param_1 + 0x194) = 0;
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b9) = 0;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x234) = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ec) = 0;
  *(undefined8 *)((longlong)param_1 + 500) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1f9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x211) = 0;
  *(undefined8 *)((longlong)param_1 + 0x204) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x229) = 0;
  *(undefined8 *)((longlong)param_1 + 0x21c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x224) = 0;
  *(undefined4 *)(param_1 + 0x47) = 0xffffffff;
  return param_1;
}



// FUNCTION 147a3aa74 FUN_147a3aa74 body=98 status=ok
// SIG undefined FUN_147a3aa74(void)

void FUN_147a3aa74(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 2,4);
    iVar1 = (int)(uVar2 >> 2);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,4,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147a3aad6 FUN_147a3aad6 body=48 status=ok
// SIG undefined FUN_147a3aad6(void)

void FUN_147a3aad6(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x20,8);
  }
  return;
}



// FUNCTION 147a3ab06 FUN_147a3ab06 body=132 status=ok
// SIG undefined FUN_147a3ab06(void)

void FUN_147a3ab06(longlong param_1,int param_2)

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



// FUNCTION 147a3ab8c FUN_147a3ab8c body=386 status=ok
// SIG undefined FUN_147a3ab8c(void)

void FUN_147a3ab8c(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  
  FUN_144aa17a4();
  if (DAT_14cad35a8 == 0) {
    uVar3 = FUN_140002dac();
    DAT_14cad35a8 = FUN_140002ddd(FUN_1463bf7b9,uVar3,L"SplineMeshInstanceData");
    if (DAT_14cad35a8 == 0) {
      return;
    }
  }
  lVar2 = DAT_14cad35a8;
  FUN_14485c47a(param_1 + 8,DAT_14cad35a8);
  iVar1 = *(int *)(lVar2 + 0x5c);
  uVar5 = -iVar1 & (*(int *)(lVar2 + 0x58) + iVar1) - 1U;
  puVar4 = (undefined8 *)FUN_14001cc68((longlong)(int)(uVar5 + (uVar5 == 0)),0);
  *(undefined8 **)(param_1 + 0x10) = puVar4;
  lVar2 = *param_2;
  FUN_147a27db0(puVar4,lVar2);
  *puVar4 = &PTR_FUN_14a8894b0;
  puVar4[0x43] = DAT_14c8464f0;
  uVar3 = DAT_14c8464e8;
  puVar4[0x41] = DAT_14c8464e0;
  puVar4[0x42] = uVar3;
  puVar4[0x46] = DAT_14c8464f0;
  uVar3 = DAT_14c8464e8;
  puVar4[0x44] = DAT_14c8464e0;
  puVar4[0x45] = uVar3;
  puVar4[0x49] = DAT_14c8464f0;
  uVar3 = DAT_14c8464e8;
  puVar4[0x47] = DAT_14c8464e0;
  puVar4[0x48] = uVar3;
  uVar3 = DAT_14c8464e8;
  puVar4[0x4a] = DAT_14c8464e0;
  puVar4[0x4b] = uVar3;
  puVar4[0x4c] = DAT_14c8464f0;
  puVar4[0x43] = *(undefined8 *)(lVar2 + 0x730);
  uVar3 = *(undefined8 *)(lVar2 + 0x728);
  puVar4[0x41] = *(undefined8 *)(lVar2 + 0x720);
  puVar4[0x42] = uVar3;
  uVar3 = *(undefined8 *)(lVar2 + 0x780);
  puVar4[0x44] = *(undefined8 *)(lVar2 + 0x778);
  puVar4[0x45] = uVar3;
  puVar4[0x46] = *(undefined8 *)(lVar2 + 0x788);
  uVar3 = *(undefined8 *)(lVar2 + 0x740);
  puVar4[0x47] = *(undefined8 *)(lVar2 + 0x738);
  puVar4[0x48] = uVar3;
  puVar4[0x49] = *(undefined8 *)(lVar2 + 0x748);
  uVar3 = *(undefined8 *)(lVar2 + 0x7a8);
  puVar4[0x4a] = *(undefined8 *)(lVar2 + 0x7a0);
  puVar4[0x4b] = uVar3;
  puVar4[0x4c] = *(undefined8 *)(lVar2 + 0x7b0);
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



// FUNCTION 147a3ad0e FUN_147a3ad0e body=115 status=ok
// SIG undefined FUN_147a3ad0e(void)

void FUN_147a3ad0e(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc,4);
    iVar2 = (int)(uVar1 / 0xc);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xc,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147a3ad81 FUN_147a3ad81 body=30 status=ok
// SIG undefined FUN_147a3ad81(void)

void FUN_147a3ad81(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    param_1 = param_1 + 5;
  }
  return;
}



// FUNCTION 147a3ada0 FUN_147a3ada0 body=147 status=ok
// SIG undefined FUN_147a3ada0(void)

void FUN_147a3ada0(longlong param_1,int param_2)

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



// FUNCTION 147a3ae34 FUN_147a3ae34 body=98 status=ok
// SIG undefined FUN_147a3ae34(void)

void FUN_147a3ae34(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x28 + *param_1);
  FUN_140797e30(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 0x28),(longlong)iVar2 * 0x28);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 147a3ae96 FUN_147a3ae96 body=62 status=ok
// SIG undefined FUN_147a3ae96(void)

void FUN_147a3ae96(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147a3aed4(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x28,8);
  }
  return;
}



// FUNCTION 147a3aed4 FUN_147a3aed4 body=112 status=ok
// SIG undefined FUN_147a3aed4(void)

ulonglong FUN_147a3aed4(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x28) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147a3af0e;
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
LAB_147a3af0e:
  return param_2 & 0xffffffff;
}



// FUNCTION 147a3af44 FUN_147a3af44 body=147 status=ok
// SIG undefined FUN_147a3af44(void)

void FUN_147a3af44(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xa0,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xa0)) {
      uVar5 = uVar4 / 0xa0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xa0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147a3afd8 FUN_147a3afd8 body=95 status=ok
// SIG undefined FUN_147a3afd8(void)

void FUN_147a3afd8(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 6,0x10);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 6)) {
      uVar2 = uVar1 >> 6 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x40,0x10);
  }
  return;
}



// FUNCTION 147a3b038 FUN_147a3b038 body=143 status=ok
// SIG undefined FUN_147a3b038(void)

void FUN_147a3b038(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  
  FUN_144aa17a4();
  if (DAT_14cad36d0 == 0) {
    uVar3 = FUN_140002dac();
    DAT_14cad36d0 = FUN_140002ddd(FUN_1463bf7e8,uVar3,L"StaticMeshComponentInstanceData");
    if (DAT_14cad36d0 == 0) {
      return;
    }
  }
  lVar2 = DAT_14cad36d0;
  FUN_14485c47a(param_1 + 8,DAT_14cad36d0);
  iVar1 = *(int *)(lVar2 + 0x5c);
  uVar4 = -iVar1 & (*(int *)(lVar2 + 0x58) + iVar1) - 1U;
  uVar3 = FUN_14001cc68((longlong)(int)(uVar4 + (uVar4 == 0)),0);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  FUN_147a27db0(uVar3,*param_2);
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



// FUNCTION 147a3b0c8 FUN_147a3b0c8 body=132 status=ok
// SIG undefined FUN_147a3b0c8(void)

void FUN_147a3b0c8(longlong param_1,int param_2)

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



// FUNCTION 147a3b14e FUN_147a3b14e body=761 status=ok
// SIG undefined FUN_147a3b14e(void)

longlong * FUN_147a3b14e(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auStack_98 [32];
  uint local_78;
  undefined4 local_74;
  ulonglong local_70;
  undefined8 extraout_XMM0_Qb;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_98;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 6,(longlong)*(int *)((longlong)param_2 + 0xc) << 6
            );
  local_78 = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_78 = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_78,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_78);
    }
  }
  else {
    local_78 = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_78 == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_147a3afd8(param_2,0);
    }
  }
  else if ((((int)local_78 < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x40000 < local_78 && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_78;
    lVar7 = 0x20;
    lVar6 = 0;
    do {
      lVar3 = *param_2;
      FUN_14480c34d(param_1,lVar7 + lVar3 + -0x20);
      iVar4 = FUN_1448332aa(param_1,&DAT_149e3cb60);
      if (iVar4 < 0x1a) {
        auVar8._0_8_ = FUN_1474302aa(param_1,&local_74);
        auVar8._8_8_ = extraout_XMM0_Qb;
        auVar9 = pmovzxbd(auVar8,local_74);
        *(double *)(lVar3 + lVar7) = (double)((float)auVar9._0_4_ * 0.007843138 + -1.0);
        *(double *)(lVar3 + 8 + lVar7) = (double)((float)auVar9._4_4_ * 0.007843138 + -1.0);
        *(double *)(lVar3 + 0x10 + lVar7) = (double)((float)auVar9._8_4_ * 0.007843138 + -1.0);
        *(double *)(lVar3 + 0x18 + lVar7) = (double)((float)auVar9._12_4_ * 0.007843138 + -1.0);
      }
      else {
        FUN_140c5e5ec(param_1,lVar7 + lVar3);
      }
      FUN_1400751dc(param_1,lVar7 + lVar3 + -8);
      lVar6 = lVar6 + 1;
      lVar7 = lVar7 + 0x40;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_78) ||
       (FUN_147a3afd8(param_2), 0 < (int)local_78)) {
      iVar4 = 0;
      do {
        lVar6 = FUN_147a3b448(param_2);
        FUN_14480c34d(param_1,lVar6);
        iVar5 = FUN_1448332aa(param_1,&DAT_149e3cb60);
        if (iVar5 < 0x1a) {
          auVar9._0_8_ = FUN_1474302aa(param_1,&local_74);
          auVar9._8_8_ = extraout_XMM0_Qb_00;
          auVar9 = pmovzxbd(auVar9,local_74);
          *(double *)(lVar6 + 0x20) = (double)((float)auVar9._0_4_ * 0.007843138 + -1.0);
          *(double *)(lVar6 + 0x28) = (double)((float)auVar9._4_4_ * 0.007843138 + -1.0);
          *(double *)(lVar6 + 0x30) = (double)((float)auVar9._8_4_ * 0.007843138 + -1.0);
          *(double *)(lVar6 + 0x38) = (double)((float)auVar9._12_4_ * 0.007843138 + -1.0);
        }
        else {
          FUN_140c5e5ec(param_1,lVar6 + 0x20);
        }
        FUN_1400751dc(param_1,lVar6 + 0x18);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_78);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147a3b448 FUN_147a3b448 body=59 status=ok
// SIG undefined FUN_147a3b448(void)

longlong FUN_147a3b448(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147a3b0c8(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x40 + *param_1;
  FUN_147a3b483(lVar2);
  return lVar2;
}



// FUNCTION 147a3b483 FUN_147a3b483 body=37 status=ok
// SIG undefined FUN_147a3b483(void)

void FUN_147a3b483(undefined8 *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0x3ff0000000000000;
  return;
}



// FUNCTION 147a3b4b6 FUN_147a3b4b6 body=53 status=ok
// SIG undefined FUN_147a3b4b6(void)

void FUN_147a3b4b6(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar1 = &PTR_LAB_14a899e90;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
  return;
}



// FUNCTION 147a3b4ec FUN_147a3b4ec body=29 status=ok
// SIG undefined FUN_147a3b4ec(void)

undefined8 FUN_147a3b4ec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a3b518 FUN_147a3b518 body=34 status=ok
// SIG undefined FUN_147a3b518(void)

void FUN_147a3b518(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_LAB_14a899eb0;
  return;
}



// FUNCTION 147a3b53a FUN_147a3b53a body=29 status=ok
// SIG undefined FUN_147a3b53a(void)

undefined8 FUN_147a3b53a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a3b566 FUN_147a3b566 body=69 status=ok
// SIG undefined FUN_147a3b566(void)

undefined8 * FUN_147a3b566(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xa0,0x10);
  *puVar1 = &PTR_LAB_14a899ed0;
  memcpy(puVar1 + 1,(void *)(param_1 + 8),0x94);
  return puVar1;
}



// FUNCTION 147a3b5ac FUN_147a3b5ac body=29 status=ok
// SIG undefined FUN_147a3b5ac(void)

undefined8 FUN_147a3b5ac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a3b5ca FUN_147a3b5ca body=112 status=ok
// SIG undefined FUN_147a3b5ca(void)

void FUN_147a3b5ca(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xf0,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0xf0)) {
      uVar2 = uVar1 / 0xf0 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xf0,8);
  }
  return;
}



// FUNCTION 147a3b63a FUN_147a3b63a body=48 status=ok
// SIG undefined FUN_147a3b63a(void)

void FUN_147a3b63a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 147a3b66a FUN_147a3b66a body=29 status=ok
// SIG undefined FUN_147a3b66a(void)

undefined8 FUN_147a3b66a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a3b6a2 FUN_147a3b6a2 body=29 status=ok
// SIG undefined FUN_147a3b6a2(void)

bool FUN_147a3b6a2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147a3b6c0 FUN_147a3b6c0 body=26 status=ok
// SIG undefined FUN_147a3b6c0(void)

bool FUN_147a3b6c0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147a3b6da FUN_147a3b6da body=24 status=ok
// SIG undefined FUN_147a3b6da(void)

bool FUN_147a3b6da(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147a3b6fe FUN_147a3b6fe body=101 status=ok
// SIG undefined FUN_147a3b6fe(void)

void FUN_147a3b6fe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a899ff0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14a899f80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147a3b764 FUN_147a3b764 body=101 status=ok
// SIG undefined FUN_147a3b764(void)

void FUN_147a3b764(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a899ff0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14a899f80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147a3b7ca FUN_147a3b7ca body=134 status=ok
// SIG undefined FUN_147a3b7ca(void)

void FUN_147a3b7ca(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  _LIST_ENTRY *p_Var6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a899ff0;
  p_Var6 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var6;
  *(undefined ***)p_Var1 = &PTR_FUN_14a899f80;
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
                    /* WARNING: Could not recover jumptable at 0x000147a3b841. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147a3b850 FUN_147a3b850 body=39 status=ok
// SIG undefined FUN_147a3b850(void)

void FUN_147a3b850(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147a3b874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,*(undefined4 *)(param_1 + 8),
             *(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 147a3b878 FUN_147a3b878 body=137 status=ok
// SIG undefined FUN_147a3b878(void)

bool FUN_147a3b878(longlong param_1)

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
    FUN_1400841de(param_1 + 0x18,&local_28);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,*(undefined4 *)(param_1 + 8));
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a3b904 FUN_147a3b904 body=98 status=ok
// SIG undefined FUN_147a3b904(void)

void FUN_147a3b904(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147a3b966 FUN_147a3b966 body=82 status=ok
// SIG undefined FUN_147a3b966(void)

void FUN_147a3b966(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3 * 8);
      *(longlong *)(param_1 + lVar3 * 8) = lVar1;
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 147a3b9b8 FUN_147a3b9b8 body=48 status=ok
// SIG undefined FUN_147a3b9b8(void)

void FUN_147a3b9b8(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 147a3b9e8 FUN_147a3b9e8 body=132 status=ok
// SIG undefined FUN_147a3b9e8(void)

void FUN_147a3b9e8(longlong param_1,int param_2)

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



// FUNCTION 147a3ba6e FUN_147a3ba6e body=89 status=ok
// SIG undefined FUN_147a3ba6e(void)

void FUN_147a3ba6e(longlong param_1,int param_2)

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



// FUNCTION 147a3bac8 FUN_147a3bac8 body=132 status=ok
// SIG undefined FUN_147a3bac8(void)

void FUN_147a3bac8(longlong param_1,int param_2)

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



// FUNCTION 147a3bb4e FUN_147a3bb4e body=89 status=ok
// SIG undefined FUN_147a3bb4e(void)

void FUN_147a3bb4e(longlong param_1,int param_2)

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



// FUNCTION 147a3bba8 FUN_147a3bba8 body=29 status=ok
// SIG undefined FUN_147a3bba8(void)

undefined8 FUN_147a3bba8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a3bbe0 FUN_147a3bbe0 body=29 status=ok
// SIG undefined FUN_147a3bbe0(void)

bool FUN_147a3bbe0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147a3bbfe FUN_147a3bbfe body=26 status=ok
// SIG undefined FUN_147a3bbfe(void)

bool FUN_147a3bbfe(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147a3bc18 FUN_147a3bc18 body=24 status=ok
// SIG undefined FUN_147a3bc18(void)

bool FUN_147a3bc18(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147a3bc30 FUN_147a3bc30 body=93 status=ok
// SIG undefined FUN_147a3bc30(void)

void FUN_147a3bc30(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a899ff0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14a89a060;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147a3bc8e FUN_147a3bc8e body=93 status=ok
// SIG undefined FUN_147a3bc8e(void)

void FUN_147a3bc8e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a899ff0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14a89a060;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147a3bcec FUN_147a3bcec body=126 status=ok
// SIG undefined FUN_147a3bcec(void)

void FUN_147a3bcec(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  _LIST_ENTRY *p_Var5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a899ff0;
  p_Var5 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var5;
  *(undefined ***)p_Var1 = &PTR_FUN_14a89a060;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147a3bd5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147a3bd6a FUN_147a3bd6a body=35 status=ok
// SIG undefined FUN_147a3bd6a(void)

void FUN_147a3bd6a(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147a3bd8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,*(undefined4 *)(param_1 + 8),*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 147a3bd8e FUN_147a3bd8e body=133 status=ok
// SIG undefined FUN_147a3bd8e(void)

bool FUN_147a3bd8e(longlong param_1)

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
    FUN_1400841de(param_1 + 0x18,&local_28);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,*(undefined4 *)(param_1 + 8));
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a3be14 FUN_147a3be14 body=98 status=ok
// SIG undefined FUN_147a3be14(void)

void FUN_147a3be14(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147a3be76 FUN_147a3be76 body=82 status=ok
// SIG undefined FUN_147a3be76(void)

void FUN_147a3be76(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3 * 8);
      *(longlong *)(param_1 + lVar3 * 8) = lVar1;
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 147a3bec8 FUN_147a3bec8 body=62 status=ok
// SIG undefined FUN_147a3bec8(void)

void FUN_147a3bec8(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147a3bf06(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x38,8);
  }
  return;
}



// FUNCTION 147a3bf06 FUN_147a3bf06 body=104 status=ok
// SIG undefined FUN_147a3bf06(void)

ulonglong FUN_147a3bf06(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x38) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147a3bf3c;
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
LAB_147a3bf3c:
  return param_2 & 0xffffffff;
}



// FUNCTION 147a3bf6e FUN_147a3bf6e body=159 status=ok
// SIG undefined FUN_147a3bf6e(void)

void FUN_147a3bf6e(int param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = DAT_14cad39a0;
  if (param_1 <= (int)DAT_14cad39a0) {
    if (DAT_14cad39a4 == 0) {
      uVar2 = 4;
      if (4 < DAT_14cad39a0) {
        uVar2 = DAT_14cad39a0;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)DAT_14cad39a0 * 3) >> 3) + (longlong)(int)DAT_14cad39a0 +
              0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x28,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    DAT_14cad39a4 = (int)uVar5;
    FUN_1446f8d3c(&DAT_14cad3998,param_1,uVar5,0x28,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147a3c00e FUN_147a3c00e body=113 status=ok
// SIG undefined FUN_147a3c00e(void)

void FUN_147a3c00e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x28,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x28)) {
      uVar2 = uVar1 / 0x28 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x28,8);
  }
  return;
}



// FUNCTION 147a3c080 FUN_147a3c080 body=119 status=ok
// SIG undefined FUN_147a3c080(void)

void FUN_147a3c080(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x110);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x114)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 5,0);
      iVar2 = (int)(uVar3 >> 5);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x114) = iVar5;
    FUN_144ae21a8(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147a3c0f8 FUN_147a3c0f8 body=343 status=ok
// SIG undefined FUN_147a3c0f8(void)

undefined8 FUN_147a3c0f8(longlong param_1,ulonglong param_2,undefined8 *param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(param_2);
    }
    local_30 = param_2;
    if ((DAT_14c950c29 & 1) != 0) {
      FUN_1456cec3c(param_2);
    }
    plVar5 = (longlong *)(param_1 + 0x10);
    if ((DAT_14c950c29 & 1) != 0) {
      FUN_1456cec3c(param_2);
    }
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    uVar1 = uVar1 >> 0x10 ^ uVar1;
    iVar2 = FUN_147a3c250(plVar5,uVar1,&local_30);
    if (iVar2 != -1) {
      if (DAT_14c950c29 == 1) {
        FUN_1456cec3c(param_2);
      }
      if ((DAT_14c950c29 & 1) != 0) {
        FUN_1456cec3c(param_2);
      }
      if ((DAT_14c950c29 & 1) != 0) {
        FUN_1456cec3c(param_2);
      }
      local_30 = param_2;
      if ((DAT_14c950c29 & 1) != 0) {
        FUN_1456cec3c(param_2);
      }
      if ((DAT_14c950c29 & 1) != 0) {
        FUN_1456cec3c(param_2);
      }
      iVar2 = FUN_147a3c250(plVar5,uVar1,&local_30);
      if (iVar2 == -1) {
        lVar3 = 0;
      }
      else {
        lVar3 = (longlong)iVar2 * 0x18 + *plVar5;
      }
      uVar4 = *(undefined8 *)(lVar3 + 8);
      *param_3 = uVar4;
      uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
      goto LAB_147a3c116;
    }
  }
  uVar4 = 0;
LAB_147a3c116:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a3c250 FUN_147a3c250 body=207 status=ok
// SIG undefined FUN_147a3c250(void)

int FUN_147a3c250(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    bVar4 = DAT_14c950c29;
    for (iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
        iVar1 != -1; iVar1 = *(int *)(*param_1 + 0x10 + (longlong)iVar1 * 0x18)) {
      lVar2 = *param_3;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      lVar3 = *(longlong *)(*param_1 + (longlong)iVar1 * 0x18);
      if (((bVar4 & 1) != 0) && (lVar3 != 0)) {
        FUN_1456cec3c(lVar3);
        bVar4 = DAT_14c950c29;
      }
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      if (lVar3 == lVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}



// FUNCTION 147a3c382 FUN_147a3c382 body=42 status=ok
// SIG undefined FUN_147a3c382(void)

void FUN_147a3c382(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe8);
  return;
}



// FUNCTION 147a3c3cc FUN_147a3c3cc body=96 status=ok
// SIG undefined FUN_147a3c3cc(void)

longlong FUN_147a3c3cc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0xe8,0x10);
  thunk_FUN_147432e9e(lVar1,param_1);
  *(undefined4 *)(lVar1 + 0xe0) = 0;
  *(undefined2 *)(lVar1 + 0xe4) = 0;
  FUN_1474409b8(lVar1 + 0xe0,*(undefined8 *)(param_1 + 0x28),L"Transform",1);
  return lVar1;
}



// FUNCTION 147a3c42c FUN_147a3c42c body=59 status=ok
// SIG undefined FUN_147a3c42c(void)

longlong FUN_147a3c42c(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0xe8,0x10);
  FUN_147432e26(lVar1);
  *(undefined4 *)(lVar1 + 0xe0) = 0;
  *(undefined2 *)(lVar1 + 0xe4) = 0;
  return lVar1;
}



// FUNCTION 147a3c468 FUN_147a3c468 body=42 status=ok
// SIG undefined FUN_147a3c468(void)

void FUN_147a3c468(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 147a3c4da FUN_147a3c4da body=39 status=ok
// SIG undefined FUN_147a3c4da(void)

void FUN_147a3c4da(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x110,0x10);
  FUN_147a3c5f6(uVar1,param_1);
  return;
}



// FUNCTION 147a3c502 FUN_147a3c502 body=64 status=ok
// SIG undefined FUN_147a3c502(void)

longlong FUN_147a3c502(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x110,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined8 *)(lVar1 + 0xfc) = 0;
  *(undefined8 *)(lVar1 + 0x104) = 0;
  return lVar1;
}



// FUNCTION 147a3c542 FUN_147a3c542 body=42 status=ok
// SIG undefined FUN_147a3c542(void)

void FUN_147a3c542(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xf0);
  return;
}



// FUNCTION 147a3c596 FUN_147a3c596 body=39 status=ok
// SIG undefined FUN_147a3c596(void)

void FUN_147a3c596(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xf0,0x10);
  FUN_147a3c72a(uVar1,param_1);
  return;
}



// FUNCTION 147a3c5be FUN_147a3c5be body=56 status=ok
// SIG undefined FUN_147a3c5be(void)

longlong FUN_147a3c5be(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0xf0,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe6) = 0;
  return lVar1;
}



// FUNCTION 147a3c5f6 FUN_147a3c5f6 body=307 status=ok
// SIG undefined FUN_147a3c5f6(void)

longlong FUN_147a3c5f6(longlong param_1,longlong param_2)

{
  thunk_FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xfc) = 0;
  *(undefined8 *)(param_1 + 0x104) = 0;
  FUN_147440a6c(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28),L"CubeTexture",0);
  FUN_147440a6c(param_1 + 0xe4,*(undefined8 *)(param_2 + 0x28),L"CubeTextureSampler",0);
  FUN_1474409b8(param_1 + 0xee,*(undefined8 *)(param_2 + 0x28),L"ColorWeights",0);
  FUN_1474409b8(param_1 + 0xe8,*(undefined8 *)(param_2 + 0x28),L"PackedProperties0",0);
  FUN_1474409b8(param_1 + 0xf4,*(undefined8 *)(param_2 + 0x28),L"Gamma",0);
  FUN_1474409b8(param_1 + 0xfa,*(undefined8 *)(param_2 + 0x28),L"NumSlices",0);
  FUN_1474409b8(param_1 + 0x100,*(undefined8 *)(param_2 + 0x28),L"SliceIndex",0);
  FUN_1474409b8(param_1 + 0x106,*(undefined8 *)(param_2 + 0x28),L"ViewMatrix",0);
  return param_1;
}



// FUNCTION 147a3c72a FUN_147a3c72a body=133 status=ok
// SIG undefined FUN_147a3c72a(void)

longlong FUN_147a3c72a(longlong param_1,longlong param_2)

{
  thunk_FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe6) = 0;
  FUN_147440a6c(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28),L"IESTexture",0);
  FUN_147440a6c(param_1 + 0xe4,*(undefined8 *)(param_2 + 0x28),L"IESTextureSampler",0);
  FUN_1474409b8(param_1 + 0xe8,*(undefined8 *)(param_2 + 0x28),L"BrightnessInLumens",0);
  return param_1;
}



// FUNCTION 147a3c7c8 FUN_147a3c7c8 body=48 status=ok
// SIG undefined FUN_147a3c7c8(void)

void FUN_147a3c7c8(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*param_2 + 8);
  FUN_1402d084a(param_1,plVar1);
                    /* WARNING: Could not recover jumptable at 0x000147a3c7f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_14a89e6b0);
  return;
}



// FUNCTION 147a3c7f8 FUN_147a3c7f8 body=41 status=ok
// SIG undefined FUN_147a3c7f8(void)

void FUN_147a3c7f8(undefined8 param_1,longlong *param_2)

{
  FUN_1402d084a();
                    /* WARNING: Could not recover jumptable at 0x000147a3c81e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14a89e6b0);
  return;
}



// FUNCTION 147a3c821 FUN_147a3c821 body=161 status=ok
// SIG undefined FUN_147a3c821(void)

void FUN_147a3c821(longlong *param_1,longlong *param_2,byte param_3)

{
  double dVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if ((*(char *)(*param_1 + 0x1fb) != '\0' & (param_3 ^ 1)) == 0) {
    if ((longlong)(int)param_2[1] == 0) {
      fVar3 = 0.0;
    }
    else {
      dVar1 = *(double *)(*param_1 + 400);
      fVar3 = 0.0;
      fVar4 = 3.4028235e+38;
      lVar2 = 0;
      do {
        fVar5 = ABS((float)(dVar1 + dVar1) - *(float *)(*param_2 + lVar2));
        if (fVar5 < fVar4) {
          fVar3 = *(float *)(*param_2 + 4 + lVar2);
          fVar4 = fVar5;
        }
        lVar2 = lVar2 + 8;
      } while ((longlong)(int)param_2[1] * 8 != lVar2);
    }
    fVar4 = *(float *)(param_1 + 1);
    if (fVar4 <= 0.0 || fVar3 <= fVar4) {
      fVar4 = fVar3;
    }
    *(float *)(param_1 + 1) = fVar4;
  }
  return;
}



// FUNCTION 147a3c8c2 FUN_147a3c8c2 body=394 status=ok
// SIG undefined FUN_147a3c8c2(void)

void FUN_147a3c8c2(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong *local_90;
  undefined4 local_88;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (((*(longlong *)(param_1 + 0x3a8) != 0) && (0 < *(int *)(param_1 + 0x3d0))) &&
     ((*(byte *)(param_1 + 0x3d8) & 1) != 0)) {
    plVar1 = param_2 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    uStack_60 = plVar1;
    if ((int)param_2[5] == 0) {
      iVar7 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar7 = (int)param_2[5];
    }
    local_88 = (undefined4)local_68;
    uStack_84 = local_68._4_4_;
    uStack_80 = (undefined4)uStack_60;
    uStack_7c = uStack_60._4_4_;
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78 = local_58;
    uVar4 = local_78;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    iVar6 = local_78._4_4_;
    local_90 = param_2;
    if ((local_78._4_4_ != iVar7) || (local_78 = local_58, uStack_60 != plVar1)) {
      do {
        local_78 = uVar4;
        lVar2 = *local_90;
        lVar3 = *(longlong *)(lVar2 + (longlong)iVar6 * 0x18);
        local_a8 = *(undefined8 *)(lVar3 + 0x260);
        uStack_a0 = *(undefined8 *)(lVar3 + 0x268);
        local_98 = *(undefined8 *)(lVar3 + 0x270);
        cVar5 = FUN_140056702(param_1,&local_a8,0,0);
        if (cVar5 != '\0') {
          FUN_147a3c821(lVar2 + (longlong)iVar6 * 0x18,param_1 + 0x3c8,
                        (*(uint *)(param_1 + 0x3d8) & 2) >> 1);
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
        FUN_1449c0562(&local_88);
        iVar6 = local_78._4_4_;
        uVar4 = local_78;
      } while (local_90 != param_2 ||
               ((longlong *)CONCAT44(uStack_7c,uStack_80) != plVar1 || local_78._4_4_ != iVar7));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147a3ca4e FUN_147a3ca4e body=68 status=ok
// SIG undefined FUN_147a3ca4e(void)

void FUN_147a3ca4e(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *param_2;
  *(int *)(local_10 + 0x94) = *(int *)(local_10 + 0x94) + 1;
  FUN_1478b6d68();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


