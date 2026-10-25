// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145be5727 FUN_145be5727 body=35 status=ok
// SIG undefined FUN_145be5727(void)

void FUN_145be5727(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145be574a(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a60bb10;
  return;
}



// FUNCTION 145be574a FUN_145be574a body=47 status=ok
// SIG undefined FUN_145be574a(void)

undefined8 * FUN_145be574a(undefined8 *param_1)

{
  FUN_144a0768c();
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *param_1 = &PTR_FUN_14ab10b70;
  return param_1;
}



// FUNCTION 145be5784 FUN_145be5784 body=153 status=ok
// SIG undefined FUN_145be5784(void)

undefined8 * FUN_145be5784(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_144a0768c();
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xf0 | 3;
  *param_1 = &PTR_FUN_14a6d0ea0;
  param_1[10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x45) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0xb] = DAT_14c8464e0;
  param_1[0xc] = uVar1;
  param_1[0xd] = DAT_14c8464f0;
  param_1[0x10] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0xe] = DAT_14c8464e0;
  param_1[0xf] = uVar1;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa5) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 4 | 0x91;
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 1;
  return param_1;
}



// FUNCTION 145be5822 FUN_145be5822 body=77 status=ok
// SIG undefined FUN_145be5822(void)

void FUN_145be5822(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1410ea038(puVar1,param_1);
  *puVar1 = &PTR_FUN_14aaa28e0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  FUN_14109baa4(puVar1 + 0xe);
  FUN_14109baa4(puVar1 + 0x1f);
  puVar1[0x30] = &DAT_3f8000003f800000;
  puVar1[0x31] = &DAT_3f8000003f800000;
  return;
}



// FUNCTION 145be586f FUN_145be586f body=42 status=ok
// SIG undefined FUN_145be586f(void)

void FUN_145be586f(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145be589a(puVar1,param_1);
  *puVar1 = &PTR_FUN_14abc02b0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  return;
}



// FUNCTION 145be589a FUN_145be589a body=40 status=ok
// SIG undefined FUN_145be589a(void)

undefined8 * FUN_145be589a(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a790b00;
  param_1[5] = 0;
  return param_1;
}



// FUNCTION 145be58c8 FUN_145be58c8 body=77 status=ok
// SIG undefined FUN_145be58c8(void)

void FUN_145be58c8(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x4d) = 0;
  *(byte *)((longlong)puVar1 + 0x55) = *(byte *)((longlong)puVar1 + 0x55) & 0xf8;
  *puVar1 = &PTR_FUN_14abe5c30;
  puVar1[5] = &PTR_LAB_14abe5f40;
  *(byte *)(puVar1 + 0xb) = *(byte *)(puVar1 + 0xb) & 0xf0;
  *(undefined1 *)((longlong)puVar1 + 0x59) = 0xff;
  return;
}



// FUNCTION 145be5915 FUN_145be5915 body=121 status=ok
// SIG undefined FUN_145be5915(void)

void FUN_145be5915(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145be598e(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ad07560;
  puVar1[5] = &PTR_FUN_14ad07820;
  *(undefined2 *)(puVar1 + 7) = 0x101;
  puVar1[0xe] = 0;
  *(undefined1 *)(puVar1 + 0xf) = 0;
  puVar1[0x10] = 0;
  *(undefined1 *)(puVar1 + 0x11) = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined2 *)(puVar1 + 10) = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  *(undefined2 *)(puVar1 + 0xd) = 0;
  *(undefined4 *)(puVar1 + 0x12) = 1;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0xffffffffffffffff;
  return;
}



// FUNCTION 145be598e FUN_145be598e body=43 status=ok
// SIG undefined FUN_145be598e(void)

undefined8 * FUN_145be598e(undefined8 *param_1)

{
  FUN_14108ad62();
  *param_1 = &PTR_FUN_14ad33780;
  param_1[5] = &PTR_FUN_14ad33a40;
  return param_1;
}



// FUNCTION 145be59b9 FUN_145be59b9 body=68 status=ok
// SIG undefined FUN_145be59b9(void)

void FUN_145be59b9(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14108ad62(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ad30ba0;
  puVar1[5] = &PTR_FUN_14ad30e60;
  FUN_145948448(puVar1 + 7);
  FUN_145be59fe(puVar1 + 0xb);
  *(undefined1 *)(puVar1 + 0xf) = 0;
  return;
}



// FUNCTION 145be59fe FUN_145be59fe body=14 status=ok
// SIG undefined FUN_145be59fe(void)

undefined8 * FUN_145be59fe(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 145be5a14 FUN_145be5a14 body=74 status=ok
// SIG undefined FUN_145be5a14(void)

undefined8 * FUN_145be5a14(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_144a0768c(param_1,uVar1);
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 2;
  *param_1 = &PTR_FUN_14aede270;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  return param_1;
}



// FUNCTION 145be5a88 FUN_145be5a88 body=172 status=ok
// SIG undefined FUN_145be5a88(void)

void FUN_145be5a88(longlong *param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  local_30 = 0x7012;
  local_28 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0xf48))(param_1,&local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145be5b36 FUN_145be5b36 body=69 status=ok
// SIG undefined FUN_145be5b36(void)

void FUN_145be5b36(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_1447210f0();
  lVar2 = FUN_140d5bae2(uVar1);
  if (lVar2 != 0) {
    FUN_1414dac76(lVar2 + 8,param_2,param_1 + 0x960);
    return;
  }
  return;
}



// FUNCTION 145be5b7c FUN_145be5b7c body=40 status=ok
// SIG undefined FUN_145be5b7c(void)

undefined8 FUN_145be5b7c(undefined8 param_1,int param_2)

{
  FUN_145be5ba4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145be5ba4 FUN_145be5ba4 body=124 status=ok
// SIG undefined FUN_145be5ba4(void)

void FUN_145be5ba4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b334f40;
  param_1[0x72] = &PTR_FUN_14b335580;
  if (param_1[0x77] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x75] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x74];
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
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 145be5c20 FUN_145be5c20 body=40 status=ok
// SIG undefined FUN_145be5c20(void)

undefined8 FUN_145be5c20(undefined8 param_1,int param_2)

{
  FUN_145be5c48();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145be5c48 FUN_145be5c48 body=63 status=ok
// SIG undefined FUN_145be5c48(void)

void FUN_145be5c48(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b43cd40;
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_145be5c88(param_1 + 5);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145be5c88 FUN_145be5c88 body=53 status=ok
// SIG undefined FUN_145be5c88(void)

void FUN_145be5c88(longlong *param_1)

{
  FUN_145be5cbe();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145be5cbe FUN_145be5cbe body=90 status=ok
// SIG undefined FUN_145be5cbe(void)

void FUN_145be5cbe(longlong param_1)

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



// FUNCTION 145be5d20 FUN_145be5d20 body=74 status=ok
// SIG undefined FUN_145be5d20(void)

undefined8 * FUN_145be5d20(undefined8 *param_1)

{
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_140e48d86();
  *param_1 = &PTR_FUN_14b9730e0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined1 *)((longlong)param_1 + 0x7b) = 0;
  return param_1;
}



// FUNCTION 145be5d72 FUN_145be5d72 body=156 status=ok
// SIG undefined FUN_145be5d72(void)

undefined8 * FUN_145be5d72(undefined8 *param_1)

{
  FUN_1409e6ae2();
  *param_1 = &PTR_FUN_14b6fa120;
  FUN_1446ddc76(param_1 + 0x8b,"Radius",1);
  *(undefined1 *)(param_1 + 0x8c) = 1;
  *(undefined4 *)((longlong)param_1 + 0x464) = 0x3d4ccccd;
  FUN_140691b02(param_1 + 0x8d);
  *(undefined1 *)(param_1 + 0x9a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4d4) = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  return param_1;
}



// FUNCTION 145be5e0e FUN_145be5e0e body=35 status=ok
// SIG undefined FUN_145be5e0e(void)

void FUN_145be5e0e(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145be5e32(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b75ac00;
  return;
}



// FUNCTION 145be5e32 FUN_145be5e32 body=47 status=ok
// SIG undefined FUN_145be5e32(void)

undefined8 * FUN_145be5e32(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14b4fb160;
  param_1[5] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2f) = 0;
  return param_1;
}



// FUNCTION 145be5e61 FUN_145be5e61 body=35 status=ok
// SIG undefined FUN_145be5e61(void)

void FUN_145be5e61(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145be5e84(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b7f2cd0;
  return;
}



// FUNCTION 145be5e84 FUN_145be5e84 body=211 status=ok
// SIG undefined FUN_145be5e84(void)

undefined8 * FUN_145be5e84(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14b4fc6d0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0x47efffffe0000000;
  param_1[10] = 0xc7efffffe0000000;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined2 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 2;
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined2 *)(param_1 + 0x25) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined1 **)((longlong)param_1 + 300) = &DAT_200000002;
  *(undefined1 *)((longlong)param_1 + 0x134) = 1;
  param_1[0x27] = 0;
  return param_1;
}



// FUNCTION 145be5f58 FUN_145be5f58 body=107 status=ok
// SIG undefined FUN_145be5f58(void)

ulonglong FUN_145be5f58(longlong param_1,undefined8 param_2,undefined8 param_3)

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
LAB_145be5fa6:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_145be5fa6;
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
      (**(code **)(param_1 + 0x28))
                (lVar4 + *(int *)(param_1 + 0x30),param_2,param_3,*(undefined8 *)(param_1 + 8));
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



// FUNCTION 145be5fc4 FUN_145be5fc4 body=97 status=ok
// SIG undefined FUN_145be5fc4(void)

void FUN_145be5fc4(void)

{
  undefined8 in_R9;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined1 *local_48;
  undefined8 local_38;
  undefined **local_28;
  undefined8 *local_20;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = &local_50;
  local_38 = 0;
  local_28 = &PTR_LAB_14b99c970;
  local_48 = &LAB_145abca3e;
  local_50 = in_R9;
  FUN_140f73374();
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145be6026 FUN_145be6026 body=158 status=ok
// SIG undefined FUN_145be6026(void)

bool FUN_145be6026(longlong param_1,undefined8 param_2)

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



// FUNCTION 145be60cc FUN_145be60cc body=43 status=ok
// SIG undefined FUN_145be60cc(void)

void FUN_145be60cc(longlong param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  uVar1 = FUN_1414dad70();
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 0x90) + 0x58);
                    /* WARNING: Could not recover jumptable at 0x000145be60f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,param_2,UNRECOVERED_JUMPTABLE);
  return;
}



// FUNCTION 145be60f8 FUN_145be60f8 body=40 status=ok
// SIG undefined FUN_145be60f8(void)

undefined8 FUN_145be60f8(undefined8 param_1,int param_2)

{
  FUN_145be6120();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145be6120 FUN_145be6120 body=63 status=ok
// SIG undefined FUN_145be6120(void)

void FUN_145be6120(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc1d1f0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_145be6160(param_1 + 5);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145be6160 FUN_145be6160 body=53 status=ok
// SIG undefined FUN_145be6160(void)

void FUN_145be6160(longlong *param_1)

{
  FUN_145be6196();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145be6196 FUN_145be6196 body=90 status=ok
// SIG undefined FUN_145be6196(void)

void FUN_145be6196(longlong param_1)

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



// FUNCTION 145be61f0 FUN_145be61f0 body=50 status=ok
// SIG undefined FUN_145be61f0(void)

void FUN_145be61f0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145be6222(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bd127a0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  return;
}



// FUNCTION 145be6222 FUN_145be6222 body=32 status=ok
// SIG undefined FUN_145be6222(void)

undefined8 * FUN_145be6222(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a6b35a0;
  return param_1;
}



// FUNCTION 145be6242 FUN_145be6242 body=63 status=ok
// SIG undefined FUN_145be6242(void)

void FUN_145be6242(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_145be6282(param_1);
    FUN_1414dad98(param_1);
    return;
  }
  FUN_1414dad98(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_14573fa76(param_1);
  return;
}



// FUNCTION 145be6282 FUN_145be6282 body=333 status=ok
// SIG undefined FUN_145be6282(void)

void FUN_145be6282(longlong *param_1)

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
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0xac + (longlong)iVar4 * 0xb0) * 4) =
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



// FUNCTION 145be63dc FUN_145be63dc body=468 status=ok
// SIG undefined FUN_145be63dc(void)

undefined8 * FUN_145be63dc(undefined8 *param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_d8 [40];
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined3 uStack_90;
  undefined4 uStack_8d;
  undefined4 uStack_89;
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14480568a();
  *param_1 = &PTR_FUN_14abb86f0;
  param_1[5] = &PTR_FUN_14abb90f0;
  param_1[6] = &PTR_LAB_14abb9130;
  param_1[0x55] = &PTR_FUN_14abb9180;
  param_1[0x56] = &PTR_FUN_14abb9200;
  param_1[0x57] = &PTR_FUN_14abb9210;
  param_1[0xc4] = &PTR_FUN_14abb9240;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  *(undefined1 *)((longlong)param_1 + 0x1fb) = 1;
  FUN_140078ec2(param_1 + 0x82,DAT_14cad0f30);
  FUN_14127091c(param_1,0);
  *(undefined1 *)((longlong)param_1 + 0x2e9) = 2;
  *(byte *)((longlong)param_1 + 0x9e) = *(byte *)((longlong)param_1 + 0x9e) | 0xc0;
  FUN_145be65b2(&local_b0);
  local_70 = 0;
  uStack_68 = 0xc049000000000000;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0x4049000000000000;
  uStack_48 = 0;
  uVar5 = FUN_14142c306();
  FUN_145be65ee(&local_b0,uVar5);
  iVar3 = *(int *)(param_1 + 0xc6);
  *(uint *)(param_1 + 0xc6) = iVar3 + 1U;
  if (*(uint *)((longlong)param_1 + 0x634) < iVar3 + 1U) {
    FUN_145be6626(param_1 + 0xc5,iVar3);
  }
  lVar4 = param_1[0xc5];
  lVar6 = (longlong)iVar3 * 0x70;
  lVar1 = lVar4 + lVar6;
  puVar2 = (undefined4 *)(lVar4 + 0x1b + lVar6);
  *puVar2 = CONCAT31((undefined3)uStack_94,uStack_98._3_1_);
  puVar2[1] = CONCAT31(uStack_90,uStack_94._3_1_);
  puVar2[2] = uStack_8d;
  puVar2[3] = uStack_89;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar6);
  *puVar2 = local_a0;
  puVar2[1] = uStack_9c;
  puVar2[2] = uStack_98;
  puVar2[3] = uStack_94;
  puVar2 = (undefined4 *)(lVar4 + lVar6);
  *puVar2 = local_b0;
  puVar2[1] = uStack_ac;
  puVar2[2] = uStack_a8;
  puVar2[3] = uStack_a4;
  *(longlong *)(lVar4 + 0x30 + lVar6) = local_80;
  if ((local_80 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(undefined8 *)(lVar1 + 0x38) = local_78;
  *(undefined4 *)(lVar1 + 0x40) = (undefined4)local_70;
  *(undefined4 *)(lVar1 + 0x44) = local_70._4_4_;
  *(undefined4 *)(lVar1 + 0x48) = (undefined4)uStack_68;
  *(undefined4 *)(lVar1 + 0x4c) = uStack_68._4_4_;
  *(undefined4 *)(lVar1 + 0x50) = (undefined4)local_60;
  *(undefined4 *)(lVar1 + 0x54) = local_60._4_4_;
  *(undefined4 *)(lVar1 + 0x58) = (undefined4)uStack_58;
  *(undefined4 *)(lVar1 + 0x5c) = uStack_58._4_4_;
  *(undefined4 *)(lVar1 + 0x60) = (undefined4)local_50;
  *(undefined4 *)(lVar1 + 100) = local_50._4_4_;
  *(undefined4 *)(lVar1 + 0x68) = (undefined4)uStack_48;
  *(undefined4 *)(lVar1 + 0x6c) = uStack_48._4_4_;
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145be65b2 FUN_145be65b2 body=60 status=ok
// SIG undefined FUN_145be65b2(void)

void FUN_145be65b2(undefined8 *param_1)

{
  *param_1 = 0x447a000000000000;
  param_1[2] = 0;
  param_1[3] = 0x4248000041f00000;
  param_1[4] = 0xffffffff7fffffff;
  *(undefined2 *)(param_1 + 5) = 0x200;
  *(byte *)((longlong)param_1 + 0x2a) = *(byte *)((longlong)param_1 + 0x2a) & 0xf8;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}



// FUNCTION 145be65ee FUN_145be65ee body=56 status=ok
// SIG undefined FUN_145be65ee(void)

void FUN_145be65ee(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
    FUN_14485c47a(param_1 + 0x38);
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    *(longlong *)(param_1 + 0x30) = param_2;
  }
  return;
}



// FUNCTION 145be6626 FUN_145be6626 body=143 status=ok
// SIG undefined FUN_145be6626(void)

void FUN_145be6626(longlong param_1,int param_2)

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
    uVar5 = FUN_144a3809e(lVar4 * 0x70,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 4;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x70,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145be66b6 FUN_145be66b6 body=40 status=ok
// SIG undefined FUN_145be66b6(void)

undefined8 FUN_145be66b6(undefined8 param_1,int param_2)

{
  FUN_145be66de();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145be66de FUN_145be66de body=293 status=ok
// SIG undefined FUN_145be66de(void)

void FUN_145be66de(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bec17d0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  FUN_145be6804(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x35) = 0;
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  FUN_145be6804(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x2b) = 0;
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  FUN_145be6804(param_1 + 0x22);
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_145be683c(param_1 + 0x17);
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145be6804 FUN_145be6804 body=55 status=ok
// SIG undefined FUN_145be6804(void)

void FUN_145be6804(longlong *param_1)

{
  FUN_145be6872(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145be683c FUN_145be683c body=53 status=ok
// SIG undefined FUN_145be683c(void)

void FUN_145be683c(longlong *param_1)

{
  FUN_145be6ab2();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145be6872 FUN_145be6872 body=394 status=ok
// SIG undefined FUN_145be6872(void)

void FUN_145be6872(longlong *param_1,int param_2)

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
      lVar5 = (longlong)iStack_64 * 0x80;
      *(undefined4 *)(lVar2 + 0x68 + lVar5) = 0;
      if (*(longlong *)(lVar2 + 0x60 + lVar5) != 0) {
        FUN_1400020a8();
      }
      FUN_145be69fe(lVar2 + lVar5 + 0x20);
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_14095c99c(param_1,param_2);
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
    if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 145be69fe FUN_145be69fe body=55 status=ok
// SIG undefined FUN_145be69fe(void)

void FUN_145be69fe(longlong *param_1)

{
  FUN_145be6a36(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145be6a36 FUN_145be6a36 body=123 status=ok
// SIG undefined FUN_145be6a36(void)

void FUN_145be6a36(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_146fb2f02(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145be6ab2 FUN_145be6ab2 body=381 status=ok
// SIG undefined FUN_145be6ab2(void)

void FUN_145be6ab2(longlong *param_1)

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
      lVar3 = (longlong)iStack_5c * 0x118;
      *(undefined4 *)(lVar2 + 0x70 + lVar3) = 0;
      if (*(longlong *)(lVar2 + 0x68 + lVar3) != 0) {
        FUN_1400020a8();
      }
      FUN_14988a0a6(lVar2 + lVar3 + 0x28);
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14736f258(param_1,0);
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



// FUNCTION 145be6c4a FUN_145be6c4a body=77 status=ok
// SIG undefined FUN_145be6c4a(void)

void FUN_145be6c4a(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x2a8))();
  FUN_1414daf92(param_1,param_2,param_3,uVar1,param_4,param_5);
  return;
}



// FUNCTION 145be6c98 FUN_145be6c98 body=39 status=ok
// SIG undefined FUN_145be6c98(void)

void FUN_145be6c98(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000145be6cbb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 145be6cc0 FUN_145be6cc0 body=453 status=ok
// SIG undefined FUN_145be6cc0(void)

void FUN_145be6cc0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined1 auStack_d8 [32];
  undefined2 *local_b8;
  undefined8 *local_b0;
  undefined4 local_a8;
  undefined2 local_a0 [2];
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  byte local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((*(char *)(param_1 + 0x178) == '\x03') && (*(char *)(param_1 + 0x1842) == '\0')) {
    uVar3 = FUN_1401b4c98(param_1);
    puVar1 = (undefined8 *)(param_1 + 0x1830);
    lVar4 = FUN_144a61814(uVar3,puVar1);
    if (lVar4 != 0) {
      FUN_1405a424c(uVar3,*puVar1);
    }
    *(undefined8 *)(param_1 + 0x1830) = 0;
    *(byte *)(param_1 + 0x1840) = *(byte *)(param_1 + 0x1840) ^ 1;
    uVar3 = FUN_1401b4c98(param_1);
    uVar6 = FUN_14085b07e(param_1 + 0x170c);
    local_b0 = (undefined8 *)0x0;
    local_a8 = 0;
    FUN_1446efa72(&local_b0,0,3,0x10);
    puVar2 = local_b0;
    local_a8 = 3;
    *local_b0 = &PTR_LAB_14a1c8830;
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
    local_b0[2] = lVar5;
    *local_b0 = &PTR_FUN_14b3e8f80;
    local_b0[3] = 0;
    FUN_14485c47a(local_b0 + 3,param_1);
    *(undefined4 *)(puVar2 + 5) = 0;
    puVar2[4] = FUN_145be6cc0;
    local_98 = 0;
    local_90 = 0;
    FUN_14487d8d8(&local_98,&local_b0);
    local_58 = 1;
    local_b8 = local_a0;
    local_a0[0] = 0;
    local_9c = 0xbf800000;
    FUN_1406f4044(uVar3,puVar1,&local_98,uVar6);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
    FUN_1449db362(&local_b0);
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145be6e86 FUN_145be6e86 body=3736 status=ok
// SIG undefined FUN_145be6e86(void)

void FUN_145be6e86(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 *puVar4;
  byte bVar5;
  int iVar6;
  undefined4 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  undefined2 *puVar16;
  ulonglong uVar17;
  undefined1 auStack_e28 [32];
  ulonglong local_e08;
  short local_e00;
  ulonglong local_df8;
  longlong local_df0;
  longlong local_de8;
  undefined1 local_ddc [12];
  undefined8 local_dd0;
  undefined4 local_dc8;
  undefined4 local_dc0;
  undefined4 uStack_dbc;
  int local_db8;
  undefined4 uStack_db4;
  undefined8 local_db0;
  undefined4 local_da8;
  undefined8 local_da0;
  undefined8 local_d98;
  longlong *local_d90;
  char local_d88;
  undefined1 local_d80 [8];
  longlong lStack_d78;
  longlong local_b80 [64];
  longlong local_980;
  undefined4 local_978;
  longlong local_958;
  undefined1 local_948 [40];
  longlong local_920;
  undefined1 *local_910;
  undefined1 *local_908;
  undefined1 *local_900;
  char local_8f8;
  undefined1 local_8f0;
  undefined1 local_8ef [7];
  longlong local_8e8;
  undefined1 local_4f0 [40];
  longlong local_4c8;
  undefined1 local_4b8 [40];
  longlong local_490;
  undefined2 *local_480;
  undefined2 *local_478;
  ulonglong *local_470;
  char local_468;
  undefined2 local_460 [512];
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_e28;
  iVar6 = *(int *)(param_1 + 0x90);
  if (1 < iVar6) {
    local_480 = local_460;
    local_468 = '\0';
    local_470 = local_60;
    iVar15 = 0;
    local_478 = local_480;
    do {
      if ((int)local_478 != (int)local_480) {
        if (local_470 <= (ulonglong *)((longlong)local_478 + 3U)) {
          FUN_145753a78(&local_480,3);
        }
        *(undefined1 *)(local_478 + 1) = 0x20;
        *local_478 = 0x2b20;
        local_478 = (undefined2 *)((longlong)local_478 + 3);
      }
      FUN_1414db118(param_1,&local_910,iVar15,param_2);
      FUN_14014e8d0(&local_910,&local_480);
      if (local_8e8 != 0) {
        FUN_1400020a8();
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 < *(int *)(param_1 + 0x90));
    local_e08._0_1_ = 2;
    FUN_1408234aa();
    local_e08 = CONCAT71(local_e08._1_7_,1);
    FUN_1408234aa();
    local_910 = &local_8f0;
    local_8f8 = '\0';
    local_900 = local_4f0;
    local_8f0 = 0x28;
    local_908 = local_8ef;
    FUN_1414db1c4(&local_910,local_480,(int)local_478 - (int)local_480);
    FUN_14089c9ba(&local_910,") >= %d",iVar6);
    if (local_900 <= local_908 + 1) {
      FUN_145753a78(&local_910,1);
    }
    *local_908 = 0;
    local_e08 = CONCAT71(local_e08._1_7_,1);
    local_908 = local_908 + 1;
    FUN_1408234aa(param_1,local_948,param_2,&DAT_14cbcdb30);
    if (*(char *)(param_1 + 0x79) == '\x01') {
      FUN_140785382(&local_980,2);
      FUN_1414db220(&local_da0,0x3f800000,(float)iVar6,1);
      FUN_145be7f06(&local_980,&local_da0);
      lVar8 = FUN_1406b2efc(param_2 + 0x2c0);
      local_e08 = local_e08 & 0xffffffffffffff00;
      uVar9 = FUN_145be7e06(lVar8 + 0xb0,local_948,&local_980,0);
      local_da0 = (undefined4 *)local_d80;
      local_d88 = '\0';
      local_d90 = local_b80;
      local_d98 = (undefined8 *)local_da0;
      FUN_14014e8d0(local_948,&local_da0);
      if (local_d90 <= (longlong *)((longlong)local_d98 + 5)) {
        FUN_145753a78(&local_da0,5);
      }
      *(undefined1 *)((longlong)local_d98 + 4) = 0x30;
      *(undefined4 *)local_d98 = 0x203d3d20;
      puVar1 = (undefined1 *)((longlong)local_d98 + 5);
      plVar10 = (longlong *)((longlong)local_d98 + 6);
      local_d98 = (undefined8 *)puVar1;
      if (local_d90 <= plVar10) {
        FUN_145753a78(&local_da0,1);
      }
      *(undefined1 *)local_d98 = 0;
      local_d98 = (undefined8 *)((longlong)local_d98 + 1);
      FUN_140822110(&local_dc0,&local_da0,0);
      FUN_145be7d20(uVar9,&local_dc0);
      FUN_1447cd778(CONCAT44(uStack_dbc,local_dc0),local_db8);
      if (CONCAT44(uStack_dbc,local_dc0) != 0) {
        FUN_1400020a8();
      }
      if (local_d88 == '\x01') {
        FUN_1400020a8(local_da0);
      }
      FUN_144a2da94(&local_980);
    }
    if (0 < *(int *)(param_1 + 0x90)) {
      local_df0 = param_2 + 0x2c0;
      local_df8 = param_1 + 0x10;
      lVar8 = 0;
      uVar13 = 0;
      local_de8 = param_2;
      do {
        local_dc8 = *(undefined4 *)(*(longlong *)(param_1 + 0x88) + 8 + lVar8);
        local_dd0 = *(undefined8 *)(*(longlong *)(param_1 + 0x88) + lVar8);
        FUN_1414db118(param_1,&local_980,uVar13 & 0xffffffff,param_2);
        lVar11 = FUN_140823ef2(param_1,param_2,&local_dd0);
        plVar10 = (longlong *)(lVar11 + 0x58);
        iVar6 = *(int *)(lVar11 + 0x60);
        *(uint *)(lVar11 + 0x60) = iVar6 + 1U;
        if (*(uint *)(lVar11 + 100) < iVar6 + 1U) {
          FUN_140823334(plVar10,iVar6);
        }
        puVar4 = (undefined8 *)(*plVar10 + (longlong)iVar6 * 0x28);
        *puVar4 = DAT_14cbcdd30;
        puVar4[1] = 0;
        puVar4[2] = 0;
        puVar4[3] = 0;
        puVar4[4] = 0;
        local_da0._0_4_ = CONCAT31(local_da0._1_3_,1);
        local_d98._4_4_ = 1;
        local_da0._4_4_ = (undefined4)DAT_14cb7c588;
        local_d98._0_4_ = (undefined4)((ulonglong)DAT_14cb7c588 >> 0x20);
        FUN_140821fec(puVar4,&local_980,&local_da0,0);
        puVar7 = (undefined4 *)CONCAT44(local_da0._4_4_,(undefined4)local_da0);
        iVar6 = (int)uVar13;
        if (*(char *)(param_1 + 0x78) == '\0') {
          puVar7 = (undefined4 *)CONCAT44(local_da0._4_4_,(undefined4)local_da0);
          local_d98 = (undefined8 *)CONCAT44(local_d98._4_4_,(undefined4)local_d98);
          if (*(char *)(param_1 + 0x79) == '\x01') {
            local_da0._0_4_ = CONCAT31(local_da0._1_3_,1);
            local_d98._4_4_ = 1;
            local_da0._4_4_ = (undefined4)DAT_14cb7c588;
            local_d98._0_4_ = (undefined4)((ulonglong)DAT_14cb7c588 >> 0x20);
            uVar9 = FUN_140821fec(puVar4,local_4f0,&local_da0,0);
            local_d88 = '\0';
            local_da0 = (undefined4 *)local_d80;
            local_d90 = local_b80;
            local_d98 = (undefined8 *)local_da0;
            FUN_14014e8d0(local_948,&local_da0);
            if (local_d90 <= (longlong *)((longlong)local_d98 + 4)) {
              FUN_145753a78(&local_da0,4);
            }
            *(undefined4 *)local_d98 = 0x203d3d20;
            local_d98 = (undefined8 *)((longlong)local_d98 + 4);
            FUN_14089c9ba(&local_da0,&DAT_149dfc0ac,iVar6 + 1);
            if (local_d90 <= (longlong *)((longlong)local_d98 + 1)) {
              FUN_145753a78(&local_da0,1);
            }
            *(undefined1 *)local_d98 = 0;
            local_d98 = (undefined8 *)((longlong)local_d98 + 1);
            FUN_140822110(&local_dc0,&local_da0,0);
            FUN_145be7d20(uVar9,&local_dc0);
            FUN_1447cd778(CONCAT44(uStack_dbc,local_dc0),local_db8);
            if (CONCAT44(uStack_dbc,local_dc0) != 0) {
              FUN_1400020a8();
            }
            if (local_d88 == '\x01') {
LAB_145be7446:
              FUN_1400020a8(local_da0);
            }
LAB_145be744b:
            puVar7 = local_da0;
            if (*(char *)(param_1 + 0x78) == '\x01') goto LAB_145be7455;
          }
        }
        else if (*(char *)(param_1 + 0x78) == '\x01') {
          if (*(char *)(param_1 + 0x79) == '\0') {
            local_d98._4_4_ = iVar6 + 1;
            local_da0._0_4_ = CONCAT31(local_da0._1_3_,2);
            local_da0._4_4_ = 0;
            local_d98._0_4_ = 0;
            uVar9 = FUN_140821fec(puVar4,local_948,&local_da0,0);
            FUN_140822110(&local_da0,&local_910,0);
            FUN_145be7d20(uVar9,&local_da0);
            FUN_1447cd778(CONCAT44(local_da0._4_4_,(undefined4)local_da0),(undefined4)local_d98);
            if (local_da0 != (undefined4 *)0x0) goto LAB_145be7446;
            goto LAB_145be744b;
          }
LAB_145be7455:
          local_da0._0_4_ = SUB84(puVar7,0);
          iVar15 = *(int *)(lVar11 + 0x60);
          *(uint *)(lVar11 + 0x60) = iVar15 + 1U;
          if (*(uint *)(lVar11 + 100) < iVar15 + 1U) {
            local_da0 = puVar7;
            FUN_140823334(plVar10,iVar15);
          }
          puVar4 = (undefined8 *)(*plVar10 + (longlong)iVar15 * 0x28);
          *puVar4 = DAT_14cbcdd20;
          puVar4[1] = 0;
          puVar4[2] = 0;
          puVar4[3] = 0;
          puVar4[4] = 0;
          local_da0._0_4_ = CONCAT31(local_da0._1_3_,1);
          local_d98._4_4_ = 1;
          local_da0._4_4_ = (undefined4)DAT_14cb7c588;
          local_d98._0_4_ = (undefined4)((ulonglong)DAT_14cb7c588 >> 0x20);
          FUN_140821fec(puVar4,local_4b8,&local_da0,0);
          plVar10 = (longlong *)FUN_14001cc68(0x48,0x10);
          plVar10[1] = (longlong)&DAT_100000001;
          *plVar10 = (longlong)&PTR_FUN_14b97df40;
          plVar10[3] = 0;
          plVar10[4] = 0;
          plVar10[2] = (longlong)&PTR_FUN_14b6a0fc0;
          plVar10[5] = 0;
          plVar10[6] = 0;
          plVar10[7] = 0;
          plVar10[8] = 0;
          FUN_140b126e4(local_948,&local_dc0);
          puVar16 = &DAT_149dfb77a;
          if (local_db8 != 0) {
            puVar16 = (undefined2 *)CONCAT44(uStack_dbc,local_dc0);
          }
          FUN_140002266(&local_da0,L"%s != %d",puVar16,iVar6 + 1);
          FUN_140bf89dc(plVar10 + 5,&local_da0,0);
          if (CONCAT44(local_da0._4_4_,(undefined4)local_da0) != 0) {
            FUN_1400020a8();
          }
          if (CONCAT44(uStack_dbc,local_dc0) != 0) {
            FUN_1400020a8();
          }
          FUN_140b126e4(local_948,&local_dc0);
          puVar16 = &DAT_149dfb77a;
          if (local_db8 != 0) {
            puVar16 = (undefined2 *)CONCAT44(uStack_dbc,local_dc0);
          }
          FUN_140002266(&local_da0,L"%s == %d",puVar16,iVar6 + 1);
          FUN_140bf89dc(plVar10 + 7,&local_da0,0);
          if (CONCAT44(local_da0._4_4_,(undefined4)local_da0) != 0) {
            FUN_1400020a8();
          }
          if (CONCAT44(uStack_dbc,local_dc0) != 0) {
            FUN_1400020a8();
          }
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
            UNLOCK();
          }
          iVar6 = *(int *)(lVar11 + 0x50);
          *(uint *)(lVar11 + 0x50) = iVar6 + 1U;
          if (*(uint *)(lVar11 + 0x54) < iVar6 + 1U) {
            FUN_140822376((longlong *)(lVar11 + 0x48),iVar6);
          }
          puVar7 = (undefined4 *)CONCAT44(local_da0._4_4_,(undefined4)local_da0);
          lVar11 = *(longlong *)(lVar11 + 0x48);
          *(longlong **)(lVar11 + (longlong)iVar6 * 0x10) = plVar10 + 2;
          *(longlong **)(lVar11 + 8 + (longlong)iVar6 * 0x10) = plVar10;
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
            UNLOCK();
            LOCK();
            plVar2 = plVar10 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*plVar10)(plVar10);
              LOCK();
              piVar3 = (int *)((longlong)plVar10 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                (**(code **)(*plVar10 + 0x10))(plVar10);
              }
            }
            puVar7 = (undefined4 *)CONCAT44(local_da0._4_4_,(undefined4)local_da0);
            LOCK();
            plVar2 = plVar10 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*plVar10)(plVar10);
              puVar7 = (undefined4 *)CONCAT44(local_da0._4_4_,(undefined4)local_da0);
              LOCK();
              piVar3 = (int *)((longlong)plVar10 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                (**(code **)(*plVar10 + 0x10))(plVar10);
                puVar7 = (undefined4 *)CONCAT44(local_da0._4_4_,(undefined4)local_da0);
              }
            }
          }
        }
        local_da0 = puVar7;
        lVar11 = FUN_1406b2efc(local_df0);
        local_dc0 = CONCAT31(local_dc0._1_3_,1);
        uStack_db4 = 1;
        uStack_dbc = (undefined4)DAT_14cb7c588;
        local_db8 = (int)((ulonglong)DAT_14cb7c588 >> 0x20);
        local_da0._0_4_ = (undefined4)DAT_14cbcd1e0;
        local_da0._4_4_ = (undefined4)((ulonglong)DAT_14cbcd1e0 >> 0x20);
        FUN_1401533ba(&local_db0,&local_da0,1);
        FUN_140fe4afa(param_1,&local_da0,&local_dd0,&local_db0);
        local_e08 = local_e08 & 0xffffffffffffff00;
        uVar9 = FUN_140641812(lVar11 + 0xb0,&local_da0,&local_dc0,0);
        if (lStack_d78 != 0) {
          FUN_1400020a8();
        }
        FUN_14082207e(&local_da0,&local_980,0);
        FUN_145be7d20(uVar9,&local_da0);
        FUN_1447cd778(CONCAT44(local_da0._4_4_,(undefined4)local_da0),(undefined4)local_d98);
        param_2 = local_de8;
        if (CONCAT44(local_da0._4_4_,(undefined4)local_da0) != 0) {
          FUN_1400020a8();
        }
        local_d88 = '\0';
        local_da0 = (undefined4 *)local_d80;
        local_d90 = local_b80;
        local_d80[0] = 0x28;
        local_d98 = (undefined8 *)(local_d80 + 1);
        FUN_14014e8d0(&local_980,&local_da0);
        if (local_d90 <= (longlong *)((longlong)local_d98 + 0xf)) {
          FUN_145753a78(&local_da0,0xf);
        }
        uVar17 = uVar13 + 1;
        *(undefined8 *)((longlong)local_d98 + 7) = 0x28207c7c20296573;
        *local_d98 = 0x736c6166203d3d20;
        local_d98 = (undefined8 *)((longlong)local_d98 + 0xf);
        FUN_14014e8d0(local_948,&local_da0);
        FUN_14089c9ba(&local_da0," == %d)",uVar17 & 0xffffffff);
        if (local_d90 <= (longlong *)((longlong)local_d98 + 1)) {
          FUN_145753a78(&local_da0,1);
        }
        *(undefined1 *)local_d98 = 0;
        local_d98 = (undefined8 *)((longlong)local_d98 + 1);
        FUN_140822110(&local_dc0,&local_da0,0);
        bVar5 = *(byte *)(param_1 + 8);
        local_da8 = 0;
        local_db0 = 0;
        FUN_14089cb6a(param_1,local_ddc,uVar13 & 0xffffffff,param_2);
        local_e08 = local_df8;
        local_e00 = (ushort)bVar5 * 2;
        lVar11 = FUN_1408236ae(param_1,param_2,local_ddc,&local_db0);
        iVar6 = *(int *)(lVar11 + 0x38);
        uVar12 = iVar6 + 1;
        *(uint *)(lVar11 + 0x38) = uVar12;
        if (*(uint *)(lVar11 + 0x3c) < uVar12) {
          FUN_1410f5714((longlong *)(lVar11 + 0x30));
        }
        lVar11 = *(longlong *)(lVar11 + 0x30);
        lVar14 = (longlong)iVar6 * 0x10;
        *(undefined8 *)(lVar11 + lVar14) = 0;
        *(ulonglong *)(lVar11 + lVar14) = CONCAT44(uStack_dbc,local_dc0);
        local_dc0 = 0;
        uStack_dbc = 0;
        *(int *)(lVar11 + 8 + lVar14) = local_db8;
        *(undefined4 *)(lVar11 + 0xc + lVar14) = uStack_db4;
        local_db8 = 0;
        uStack_db4 = 0;
        FUN_1447cd778(0,0);
        if (CONCAT44(uStack_dbc,local_dc0) != 0) {
          FUN_1400020a8();
        }
        if (local_d88 == '\x01') {
          FUN_1400020a8(local_da0);
        }
        if (local_958 != 0) {
          FUN_1400020a8();
        }
        lVar8 = lVar8 + 0xc;
        uVar13 = uVar17;
      } while ((longlong)uVar17 < (longlong)*(int *)(param_1 + 0x90));
    }
    local_d90 = &local_980;
    local_d88 = '\0';
    local_da0 = (undefined4 *)local_d80;
    local_d98 = (undefined8 *)local_da0;
    if (*(char *)(param_1 + 0x78) == '\0') {
      if (*(char *)(param_1 + 0x79) == '\x01') {
        local_d98 = (undefined8 *)(local_d80 + 1);
        local_d80[0] = 0x28;
        FUN_1414db1c4(&local_da0,local_910,(int)local_908 - (int)local_910);
        FUN_14089c9ba(&local_da0,") || (");
        FUN_14014e8d0(local_4f0,&local_da0);
        if (local_d90 <= (longlong *)((longlong)local_d98 + 1)) {
          FUN_145753a78(&local_da0,1);
        }
        *(undefined1 *)local_d98 = 0x29;
        puVar1 = (undefined1 *)((longlong)local_d98 + 1);
        plVar10 = (longlong *)((longlong)local_d98 + 2);
        local_d98 = (undefined8 *)puVar1;
        if (local_d90 <= plVar10) {
          FUN_145753a78(&local_da0,1);
        }
        *(undefined1 *)local_d98 = 0;
        local_d98 = (undefined8 *)((longlong)local_d98 + 1);
      }
      else if (*(char *)(param_1 + 0x79) == '\0') {
        FUN_1414db1c4(&local_da0,local_910,(int)local_908 - (int)local_910);
        local_d98 = (undefined8 *)(undefined1 *)local_d98;
      }
    }
    else if (*(char *)(param_1 + 0x78) == '\x01') {
      FUN_14014e8d0(local_4b8,&local_da0);
    }
    FUN_140822110(&local_980,&local_da0,0);
    FUN_140822770(param_2 + 0x2c0,&local_980,1);
    FUN_1447cd778(local_980,local_978);
    if (local_980 != 0) {
      FUN_1400020a8();
    }
    if (local_d88 == '\x01') {
      FUN_1400020a8(local_da0);
    }
    if (local_920 != 0) {
      FUN_1400020a8();
    }
    if (local_8f8 == '\x01') {
      FUN_1400020a8(local_910);
    }
    if (local_4c8 != 0) {
      FUN_1400020a8();
    }
    if (local_490 != 0) {
      FUN_1400020a8();
    }
    if (local_468 == '\x01') {
      FUN_1400020a8(local_480);
    }
  }
  if ((local_60[0] ^ (ulonglong)auStack_e28) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145be7d20 FUN_145be7d20 body=39 status=ok
// SIG undefined FUN_145be7d20(void)

longlong FUN_145be7d20(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_145be7d48();
  FUN_1400fce78(lVar1 + 0x10,param_2);
  return lVar1;
}



// FUNCTION 145be7d48 FUN_145be7d48 body=188 status=ok
// SIG undefined FUN_145be7d48(void)

undefined8 FUN_145be7d48(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar4 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar4 + 1U) {
    FUN_140c80c84((longlong *)(param_1 + 8),iVar4);
  }
  puVar3 = (undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)iVar4 * 0x18);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  uVar5 = FUN_141091024();
  FUN_140005f6c(puVar3,uVar5,0,0);
  FUN_141090fd0(puVar3,&local_28);
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145be7e06 FUN_145be7e06 body=164 status=ok
// SIG undefined FUN_145be7e06(void)

longlong FUN_145be7e06(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4,
                      undefined1 param_5)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar2 + 1U) {
    FUN_1406419cc((longlong *)(param_1 + 8),iVar2);
  }
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)iVar2 * 0x18);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  lVar3 = FUN_1406418b4();
  *(undefined8 *)(lVar3 + 0x20) = *param_2;
  *(undefined4 *)(lVar3 + 0x28) = *(undefined4 *)(param_2 + 1);
  FUN_1447715ec(lVar3 + 0x30,param_2 + 2);
  FUN_145be7eaa(lVar3 + 0x60,param_3);
  *(undefined1 *)(lVar3 + 0x58) = param_5;
  *(undefined1 *)(lVar3 + 0x90) = param_4;
  return lVar3;
}



// FUNCTION 145be7eaa FUN_145be7eaa body=91 status=ok
// SIG undefined FUN_145be7eaa(void)

void FUN_145be7eaa(undefined1 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *param_1 = 2;
  uVar2 = FUN_14001cc68(0x38,0x10);
  FUN_14034cca6(uVar2,param_2);
  lVar1 = *(longlong *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  if (lVar1 != 0) {
    FUN_144a2da94(lVar1);
    FUN_1400020a8(lVar1);
  }
  FUN_140641d04(param_1);
  return;
}



// FUNCTION 145be7f06 FUN_145be7f06 body=281 status=ok
// SIG undefined FUN_145be7f06(void)

void FUN_145be7f06(longlong param_1,longlong *param_2)

{
  undefined8 *_Dst;
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 ****ppppuVar3;
  undefined1 auStack_68 [40];
  undefined8 ***local_40 [3];
  ushort local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40[0] = (undefined8 ***)*param_2;
  local_28 = 8;
  local_20 = 0xb;
  _Dst = (undefined8 *)(param_1 + 8);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x28) * 0x120));
  if (pcVar1 != (code *)0x0) {
    puVar2 = _Dst;
    if (0x18 < *(ushort *)(param_1 + 0x20)) {
      puVar2 = (undefined8 *)*_Dst;
    }
    (*pcVar1)(puVar2);
  }
  if (0x18 < *(ushort *)(param_1 + 0x20)) {
    FUN_1400020a8(*_Dst);
  }
  *(undefined2 *)(param_1 + 0x20) = 8;
  pcVar1 = DAT_14c9a9218;
  if ((DAT_14c9a9218 == (code *)0x0) && (pcVar1 = DAT_14c9a9210, DAT_14c9a9210 == (code *)0x0)) {
    memcpy(_Dst,local_40,(longlong)DAT_14c9a9170);
  }
  else {
    (*pcVar1)(_Dst,local_40);
  }
  *(undefined1 *)(param_1 + 0x28) = local_20;
  local_20 = 0;
  if (DAT_14c9a85d0 != (code *)0x0) {
    ppppuVar3 = (undefined8 ****)local_40[0];
    if (local_28 < 0x19) {
      ppppuVar3 = local_40;
    }
    (*DAT_14c9a85d0)(ppppuVar3);
  }
  if (0x18 < local_28) {
    FUN_1400020a8(local_40[0]);
  }
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145be8020 FUN_145be8020 body=270 status=ok
// SIG undefined FUN_145be8020(void)

void FUN_145be8020(void)

{
  int *piVar1;
  longlong *plVar2;
  size_t sVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  longlong local_68;
  int local_60;
  undefined2 *local_58;
  int local_50;
  longlong *local_48;
  longlong *local_40;
  longlong local_38;
  int local_30;
  undefined *local_28;
  undefined4 local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar2 = (longlong *)FUN_144a8054c();
  (**(code **)(*plVar2 + 0x68))(plVar2,&local_48,&DAT_14afcb7b6);
  (**(code **)(*local_48 + 0x20))(local_48,&local_68);
  local_38 = local_68;
  local_20 = 0;
  local_30 = local_60 + -1;
  if (local_60 == 0) {
    local_30 = 0;
  }
  local_28 = PTR_u__Binaries_ThirdParty_Win64_14c7632e8;
  if (PTR_u__Binaries_ThirdParty_Win64_14c7632e8 != (undefined *)0x0) {
    sVar3 = wcslen((wchar_t *)PTR_u__Binaries_ThirdParty_Win64_14c7632e8);
    local_20 = (int)sVar3;
  }
  FUN_140bee87a(&local_58,&local_38,2);
  puVar4 = local_58;
  if (local_50 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  FUN_145be8130(puVar4);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_40 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145be8130 FUN_145be8130 body=140 status=ok
// SIG undefined FUN_145be8130(void)

void FUN_145be8130(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  LPCWSTR lpPathName;
  
  lVar2 = *(longlong *)(DAT_14c8c2b70 + -0x10 + (longlong)DAT_14c8c2b78 * 0x10);
  puVar1 = (undefined8 *)(DAT_14c8c2b70 + -0x10 + (longlong)DAT_14c8c2b78 * 0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  FUN_14101da94(&DAT_14c8c2b70,DAT_14c8c2b78 + -1);
  FUN_140b12644(&DAT_14c8c2b70);
  if (lVar2 != 0) {
    FUN_1400020a8(lVar2);
  }
  if (0 < (longlong)DAT_14c8c2b78) {
    lVar2 = (longlong)DAT_14c8c2b78 * 0x10;
    if (*(int *)(DAT_14c8c2b70 + -8 + lVar2) != 0) {
      lpPathName = *(LPCWSTR *)(DAT_14c8c2b70 + lVar2 + -0x10);
      goto LAB_145be8194;
    }
  }
  lpPathName = L"";
LAB_145be8194:
                    /* WARNING: Could not recover jumptable at 0x000145be819a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetDllDirectoryW(lpPathName);
  return;
}



// FUNCTION 145be81bc FUN_145be81bc body=555 status=ok
// SIG undefined FUN_145be81bc(void)

void FUN_145be81bc(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  longlong lVar12;
  undefined2 *puVar13;
  undefined8 *puVar14;
  uint uVar15;
  longlong lVar16;
  longlong *plVar17;
  uint uVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  longlong lVar21;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined8 *local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 != 0) {
    plVar17 = (longlong *)(param_1 + 0x118);
    local_58 = (undefined8 *)0x0;
    uStack_50 = 0;
    FUN_145be879a(plVar17,&local_58);
    if ((longlong)(int)uStack_50 == 0) {
      uVar20 = 0;
    }
    else {
      puVar19 = local_58 + (longlong)(int)uStack_50 * 4;
      puVar14 = local_58;
      do {
        uVar2 = *puVar14;
        uVar3 = puVar14[1];
        uVar7 = (uint)((ulonglong)uVar3 >> 0x10);
        uVar18 = (uint)uVar3 & 0xffff;
        uVar8 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar15 = (uint)uVar2 & 0xffff;
        uVar8 = ((uint)uVar2 << 0x10 | uVar15) + (int)((ulonglong)uVar2 >> 0x20) +
                (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar15 >> 4);
        uVar9 = FUN_144a78877(0,(uVar8 >> 2) +
                                ((uint)uVar3 << 0x10 | uVar18) + (int)((ulonglong)uVar3 >> 0x20) +
                                (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar18 >> 4) + uVar8 * 0x40 +
                                0x9e3779b9 ^ uVar8);
        iVar11 = *(int *)(puVar14 + 3);
        puVar13 = &DAT_149dfb77a;
        if (iVar11 != 0) {
          puVar13 = (undefined2 *)puVar14[2];
        }
        iVar6 = iVar11 + -1;
        if (iVar11 == 0) {
          iVar6 = 0;
        }
        uVar10 = FUN_144a49b4a(iVar6,puVar13);
        uVar9 = FUN_144a78877(uVar9,uVar10);
        iVar11 = FUN_140295d2c(plVar17,uVar9,puVar14);
        if (iVar11 == -1) {
          lVar16 = 0;
        }
        else {
          lVar16 = (longlong)iVar11 * 0x38 + *plVar17;
        }
        iVar11 = *(int *)(lVar16 + 0x28);
        uVar20 = (ulonglong)iVar11;
        if (0 < (longlong)uVar20) {
          plVar1 = (longlong *)(lVar16 + 0x20);
          lVar21 = uVar20 * 0x10 + -8;
          do {
            if ((*(int *)(*plVar1 + lVar21) == 0) ||
               (plVar4 = *(longlong **)(*plVar1 + -8 + lVar21), plVar4 == (longlong *)0x0)) {
              lVar12 = 0;
            }
            else {
              (**(code **)(*plVar4 + 0x38))(plVar4,&local_60);
              lVar12 = local_60;
            }
            if (lVar12 == param_2) {
              FUN_145be8480(plVar1,(int)uVar20 + -1);
              FUN_145be83e8(plVar1);
            }
            lVar21 = lVar21 + -0x10;
            bVar5 = 1 < uVar20;
            uVar20 = uVar20 - 1;
          } while (bVar5);
          iVar11 = *(int *)(lVar16 + 0x28);
        }
        if (iVar11 == 0) {
          FUN_145be84ec(plVar17,puVar14);
        }
        puVar14 = puVar14 + 4;
      } while (puVar14 != puVar19);
      uVar20 = uStack_50 & 0xffffffff;
    }
    FUN_140861e20(local_58,uVar20);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145be83e8 FUN_145be83e8 body=62 status=ok
// SIG undefined FUN_145be83e8(void)

void FUN_145be83e8(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_145be8426(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 145be8426 FUN_145be8426 body=89 status=ok
// SIG undefined FUN_145be8426(void)

ulonglong FUN_145be8426(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if ((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) == 0) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
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



// FUNCTION 145be8480 FUN_145be8480 body=108 status=ok
// SIG undefined FUN_145be8480(void)

void FUN_145be8480(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)((longlong)(int)param_2 * 0x10 + lVar1);
  FUN_1449db362(_Dst);
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x10),(longlong)iVar3 << 4);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 145be84ec FUN_145be84ec body=352 status=ok
// SIG undefined FUN_145be84ec(void)

void FUN_145be84ec(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined2 *puVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  longlong *plVar14;
  undefined4 *puVar15;
  ulonglong uVar16;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
    uVar13 = (uint)uVar2 & 0xffff;
    uVar5 = (uint)((ulonglong)uVar1 >> 0x10);
    uVar12 = (uint)uVar1 & 0xffff;
    uVar5 = ((uint)uVar1 << 0x10 | uVar12) + (int)((ulonglong)uVar1 >> 0x20) +
            (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar12 >> 4);
    iVar11 = 0;
    uVar6 = FUN_144a78877(0,(uVar5 >> 2) +
                            ((uint)uVar2 << 0x10 | uVar13) + (int)((ulonglong)uVar2 >> 0x20) +
                            (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar13 >> 4) + uVar5 * 0x40 +
                            0x9e3779b9 ^ uVar5);
    if (*(int *)(param_2 + 3) == 0) {
      puVar9 = &DAT_149dfb77a;
    }
    else {
      puVar9 = (undefined2 *)param_2[2];
      iVar11 = *(int *)(param_2 + 3) + -1;
    }
    uVar7 = FUN_144a49b4a(iVar11,puVar9);
    iVar11 = FUN_144a78877(uVar6,uVar7);
    plVar14 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar14 = (longlong *)param_1[8];
    }
    uVar16 = (longlong)iVar11 & (longlong)(int)param_1[9] - 1U;
    lVar8 = (longlong)*(int *)((longlong)plVar14 + uVar16 * 4);
    if (lVar8 != -1) {
      lVar8 = lVar8 * 0x38 + *param_1;
      cVar4 = FUN_144a7afa6(lVar8,param_2);
      if (cVar4 == '\0') {
        do {
          lVar10 = lVar8;
          lVar8 = (longlong)*(int *)(lVar10 + 0x30);
          if (lVar8 == -1) {
            return;
          }
          lVar8 = lVar8 * 0x38 + *param_1;
          cVar4 = FUN_144a7afa6(lVar8,param_2);
        } while (cVar4 == '\0');
        puVar15 = (undefined4 *)(lVar10 + 0x30);
      }
      else {
        puVar15 = (undefined4 *)((longlong)plVar14 + uVar16 * 4);
      }
      FUN_145be864c(param_1,*puVar15);
      return;
    }
  }
  return;
}



// FUNCTION 145be864c FUN_145be864c body=113 status=ok
// SIG undefined FUN_145be864c(void)

void FUN_145be864c(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  int *piVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x38;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x34 + lVar2);
  iVar3 = *(int *)((longlong)plVar4 + lVar6 * 4);
  if (iVar3 == param_2) {
    piVar5 = (int *)((longlong)plVar4 + lVar6 * 4);
  }
  else {
    do {
      piVar5 = (int *)(lVar1 + (longlong)iVar3 * 0x38 + 0x30);
      iVar3 = *piVar5;
    } while (iVar3 != param_2);
  }
  *piVar5 = *(int *)(lVar1 + lVar2 + 0x30);
  FUN_145be86be(lVar2 + *param_1);
  FUN_145be8724(param_1,param_2);
  return;
}



// FUNCTION 145be86be FUN_145be86be body=61 status=ok
// SIG undefined FUN_145be86be(void)

void FUN_145be86be(longlong param_1)

{
  FUN_145be86fb(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145be86fb FUN_145be86fb body=40 status=ok
// SIG undefined FUN_145be86fb(void)

void FUN_145be86fb(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1449db362(param_1);
    param_1 = param_1 + 0x10;
  }
  return;
}



// FUNCTION 145be8724 FUN_145be8724 body=118 status=ok
// SIG undefined FUN_145be8724(void)

void FUN_145be8724(longlong *param_1,int param_2)

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
  uVar5 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 145be879a FUN_145be879a body=961 status=ok
// SIG undefined FUN_145be879a(void)

void FUN_145be879a(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *_Src;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined2 *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  undefined4 *puVar16;
  undefined8 *puVar17;
  undefined1 auStack_108 [40];
  longlong *local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  uint local_c8;
  int iStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  longlong *local_b0;
  uint local_a8;
  int iStack_a4;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  iVar10 = *(int *)((longlong)param_2 + 0xc);
  FUN_140861e20(*param_2,(int)param_2[1]);
  *(undefined4 *)(param_2 + 1) = 0;
  if ((iVar10 < 0) && (*(int *)((longlong)param_2 + 0xc) != 0)) {
    FUN_1403539de(param_2,0);
  }
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar12 != 0) {
    if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar12);
    }
    FUN_1414db28a(&local_98,uVar12);
    iVar10 = 1;
    if (3 < uVar12) {
      uVar12 = (uVar12 | 1) + 0xe;
      iVar10 = 0x1f;
      if (uVar12 != 0) {
        for (; uVar12 >> iVar10 == 0; iVar10 = iVar10 + -1) {
        }
      }
      iVar10 = 1 << ((byte)iVar10 & 0x1f);
    }
    if ((local_50 == 0) || (local_50 < iVar10)) {
      local_50 = iVar10;
      FUN_1403afb7e();
    }
  }
  iVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (-1 < iVar10) {
    if (*(int *)((longlong)param_2 + 0xc) < iVar10) {
      FUN_1403539de(param_2);
    }
    local_b0 = param_1 + 2;
    local_b8 = 0x100000000;
    local_a8 = 0xffffffff;
    iStack_a4 = 0;
    local_a0 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_b8);
    }
    local_c8 = local_a8;
    iStack_c4 = iStack_a4;
    local_c0 = local_a0;
    local_bc = local_9c;
    local_d8 = local_b8;
    local_d0 = local_b0;
    local_e0 = param_1;
    if (iStack_a4 < (int)local_b0[3]) {
      do {
        lVar2 = *local_e0;
        lVar15 = (longlong)iStack_c4 * 0x38;
        uVar3 = *(undefined8 *)(lVar2 + lVar15);
        uVar4 = *(undefined8 *)(lVar2 + 8 + lVar15);
        uVar12 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar14 = (uint)uVar4 & 0xffff;
        uVar7 = (uint)((ulonglong)uVar3 >> 0x10);
        uVar13 = (uint)uVar3 & 0xffff;
        uVar7 = ((uint)uVar3 << 0x10 | uVar13) + (int)((ulonglong)uVar3 >> 0x20) +
                (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar13 >> 4);
        uVar8 = FUN_144a78877(0,(uVar7 >> 2) +
                                ((uint)uVar4 << 0x10 | uVar14) + (int)((ulonglong)uVar4 >> 0x20) +
                                (uVar12 << 0x13 | uVar12 & 0xffff) + (uVar14 >> 4) + uVar7 * 0x40 +
                                0x9e3779b9 ^ uVar7);
        iVar10 = *(int *)(lVar2 + 0x18 + lVar15);
        puVar11 = &DAT_149dfb77a;
        if (iVar10 != 0) {
          puVar11 = *(undefined2 **)(lVar2 + 0x10 + lVar15);
        }
        iVar5 = iVar10 + -1;
        if (iVar10 == 0) {
          iVar5 = 0;
        }
        uVar9 = FUN_144a49b4a(iVar5,puVar11);
        uVar8 = FUN_144a78877(uVar8,uVar9);
        iVar10 = FUN_1403af82c(&local_98,uVar8,lVar2 + lVar15);
        if (iVar10 == -1) {
          puVar16 = (undefined4 *)((longlong)iStack_c4 * 0x38 + *local_e0);
          iVar10 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar10 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar10 + 1U) {
            FUN_1406f071e(param_2,iVar10);
          }
          lVar2 = *param_2;
          lVar15 = (longlong)iVar10 * 0x20;
          uVar8 = puVar16[1];
          uVar9 = puVar16[2];
          uVar6 = puVar16[3];
          puVar1 = (undefined4 *)(lVar2 + lVar15);
          *puVar1 = *puVar16;
          puVar1[1] = uVar8;
          puVar1[2] = uVar9;
          puVar1[3] = uVar6;
          *(undefined8 *)(lVar2 + 0x10 + lVar15) = 0;
          iVar10 = puVar16[6];
          _Src = *(void **)(puVar16 + 4);
          *(int *)(lVar2 + 0x18 + lVar15) = iVar10;
          if ((longlong)iVar10 == 0) {
            *(undefined4 *)(lVar2 + lVar15 + 0x1c) = 0;
          }
          else {
            puVar17 = (undefined8 *)(lVar15 + lVar2 + 0x10);
            FUN_1446dd670(puVar17,iVar10,0);
            memcpy((void *)*puVar17,_Src,(longlong)iVar10 * 2);
          }
          FUN_1449774fc(&local_98,&local_b8,(longlong)iStack_c4 * 0x38 + *local_e0,0);
        }
        local_c8 = local_c8 & ~local_d8._4_4_;
        FUN_1449c0562(&local_d8);
      } while (iStack_c4 < (int)local_d0[3]);
    }
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_144a1c8ac(&local_98);
    if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar10);
}



// FUNCTION 145be8b5c FUN_145be8b5c body=207 status=ok
// SIG undefined FUN_145be8b5c(void)

undefined8 FUN_145be8b5c(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca1cd90) {
    FUN_144b3d300(&DAT_14ca1cd90);
    if (DAT_14ca1cd90 == -1) {
      FUN_1409992c6(local_28,L"FLocalVertexFactory");
      DAT_14ca1cd88 = FUN_140187afe(local_28);
      _Init_thread_footer(&DAT_14ca1cd90);
    }
  }
  cVar1 = FUN_145be8c2c(param_1,param_2);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    lVar2 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x30))();
    uVar3 = CONCAT71((int7)((ulonglong)*(longlong *)(lVar2 + 0x20) >> 8),
                     *(longlong *)(lVar2 + 0x20) == *(longlong *)(DAT_14ca1cd88 + 0x20));
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145be8c2c FUN_145be8c2c body=39 status=ok
// SIG undefined FUN_145be8c2c(void)

bool FUN_145be8c2c(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_14485b2b4(*(undefined8 *)(param_1 + 0xc0));
  uVar1 = (**(code **)(*plVar2 + 0x270))(plVar2);
  return 1 < uVar1;
}



// FUNCTION 145be8c54 FUN_145be8c54 body=40 status=ok
// SIG undefined FUN_145be8c54(void)

undefined8 FUN_145be8c54(undefined8 param_1,int param_2)

{
  FUN_145be8c7c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145be8c7c FUN_145be8c7c body=66 status=ok
// SIG undefined FUN_145be8c7c(void)

void FUN_145be8c7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a5b63f0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_145be8cbe(param_1 + 7);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145be8cbe FUN_145be8cbe body=53 status=ok
// SIG undefined FUN_145be8cbe(void)

void FUN_145be8cbe(longlong *param_1)

{
  FUN_145be8cf4();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145be8cf4 FUN_145be8cf4 body=88 status=ok
// SIG undefined FUN_145be8cf4(void)

void FUN_145be8cf4(longlong param_1)

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



// FUNCTION 145be8d4c FUN_145be8d4c body=51 status=ok
// SIG undefined FUN_145be8d4c(void)

void FUN_145be8d4c(longlong param_1,undefined1 param_2,char param_3)

{
  *(undefined1 *)(param_1 + 0x710) = param_2;
  if ((param_3 != '\0') && (*(char *)(param_1 + 0x178) != '\x03')) {
    FUN_148c3d75a(param_1);
  }
  FUN_145be8d80(param_1);
  return;
}



// FUNCTION 145be8d80 FUN_145be8d80 body=70 status=ok
// SIG undefined FUN_145be8d80(void)

void FUN_145be8d80(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_145be8dc6(param_1,*(undefined1 *)(param_1 + 0x710));
  if ((char)uVar1 == *(char *)(param_1 + 0x711)) {
    return;
  }
  *(char *)(param_1 + 0x711) = (char)uVar1;
  FUN_145be8df6(&DAT_14cbd0b00,param_1,uVar1);
  FUN_1412d33aa(param_1);
  return;
}



// FUNCTION 145be8dc6 FUN_145be8dc6 body=48 status=ok
// SIG undefined FUN_145be8dc6(void)

ulonglong FUN_145be8dc6(undefined8 param_1,ulonglong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  plVar1 = (longlong *)FUN_1405c6693();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145be8deb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x7a8))(plVar1,param_2 & 0xffffffff,*(code **)(*plVar1 + 0x7a8));
    return uVar2;
  }
  return param_2 & 0xffffffff;
}



// FUNCTION 145be8df6 FUN_145be8df6 body=181 status=ok
// SIG undefined FUN_145be8df6(void)

void FUN_145be8df6(longlong *param_1,undefined8 param_2,undefined4 param_3)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_145be8e90;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_145be8e90:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 145be8eac FUN_145be8eac body=77 status=ok
// SIG undefined FUN_145be8eac(void)

void FUN_145be8eac(void)

{
  IAkFileLocationResolver *pIVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cb259d0);
  FUN_145be8efa();
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cb259d0);
  pIVar1 = AK::StreamMgr::GetFileLocationResolver();
  if (pIVar1 == (IAkFileLocationResolver *)&DAT_14cb25958) {
    AK::StreamMgr::SetFileLocationResolver((IAkFileLocationResolver *)0x0);
  }
  AK::StreamMgr::DestroyDevice(DAT_14cb2597c);
  return;
}



// FUNCTION 145be8efa FUN_145be8efa body=74 status=ok
// SIG undefined FUN_145be8efa(void)

void FUN_145be8efa(void)

{
  if (1 < DAT_14cb259c8) {
    FUN_145dc9550(&DAT_14cb25980);
    DAT_14cb259c8 = 1;
    FUN_14054d236(&DAT_14cb25980);
    return;
  }
  FUN_147f807f2();
  FUN_145dc9550(&DAT_14cb25980);
  return;
}



// FUNCTION 145be8f44 FUN_145be8f44 body=40 status=ok
// SIG undefined FUN_145be8f44(void)

undefined8 FUN_145be8f44(undefined8 param_1,int param_2)

{
  FUN_145be8f6c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145be8f6c FUN_145be8f6c body=114 status=ok
// SIG undefined FUN_145be8f6c(void)

void FUN_145be8f6c(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14b4cf350;
  param_1[5] = &PTR_FUN_14b4cf970;
  param_1[6] = &PTR_LAB_14b4cf9b0;
  FUN_145be8fde();
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x126));
  lVar1 = param_1[0x125];
  if (lVar1 != 0) {
    FUN_148a5733a(lVar1);
    FUN_1400020a8(lVar1);
  }
  FUN_145be9032(param_1 + 0x122);
  FUN_145821784(param_1);
  return;
}



// FUNCTION 145be8fde FUN_145be8fde body=84 status=ok
// SIG undefined FUN_145be8fde(void)

void FUN_145be8fde(longlong param_1)

{
  longlong lVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x930));
  lVar1 = *(longlong *)(param_1 + 0x928);
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 0x928) = 0;
    FUN_148a5733a(lVar1);
    FUN_1400020a8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x000145be900e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x930));
  return;
}



// FUNCTION 145be9032 FUN_145be9032 body=92 status=ok
// SIG undefined FUN_145be9032(void)

void FUN_145be9032(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*param_1 != 0) {
    LOCK();
    piVar2 = (int *)(*param_1 + 0x44);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((*piVar2 == 0) && (*(longlong **)(*param_1 + 0x48) != (longlong *)0x0)) {
      (**(code **)(**(longlong **)(*param_1 + 0x48) + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[1];
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
                    /* WARNING: Could not recover jumptable at 0x000145be908a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145be909a FUN_145be909a body=215 status=ok
// SIG undefined FUN_145be909a(void)

undefined8 * FUN_145be909a(undefined8 *param_1)

{
  FUN_14480568a();
  *param_1 = &PTR_FUN_14be10e60;
  param_1[5] = &PTR_FUN_14be11860;
  param_1[6] = &PTR_LAB_14be118a0;
  param_1[0x55] = &PTR_FUN_14be118f0;
  param_1[0x56] = &PTR_FUN_14be11970;
  param_1[0x57] = &PTR_FUN_14be11980;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  param_1[200] = 0;
  FUN_1414db454(param_1 + 0xc9);
  *(undefined2 *)(param_1 + 0xdf) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x6fa) = 1;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x72c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x734) = 0;
  param_1[0xe8] = 0;
  param_1[0xe9] = 0;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) | 2;
  *(byte *)((longlong)param_1 + 0x9d) = *(byte *)((longlong)param_1 + 0x9d) | 0x80;
  return param_1;
}



// FUNCTION 145be9172 FUN_145be9172 body=144 status=ok
// SIG undefined FUN_145be9172(void)

code * FUN_145be9172(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_144a8a5d4();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"Atmosphere";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FAtmosphereUniformShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x170000004a4;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145cd6572;
}



// FUNCTION 145be9206 FUN_145be9206 body=138 status=ok
// SIG undefined FUN_145be9206(void)

code * FUN_145be9206(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TopRadiusKm";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000029;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145be9290;
}



// FUNCTION 145be9290 FUN_145be9290 body=138 status=ok
// SIG undefined FUN_145be9290(void)

code * FUN_145be9290(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"BottomRadiusKm";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000028;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1473194c4;
}



// FUNCTION 145be931a FUN_145be931a body=205 status=ok
// SIG undefined FUN_145be931a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145be931a(void)

{
  if ((DAT_14cb2c567 & 2) == 0) {
    DAT_14cb2c567 = DAT_14cb2c567 | 2;
    _DAT_14cb2c508 = L"FNiagaraMeshVertexFactoryShaderParametersVS";
    _DAT_14cb2c520 = FUN_146826540;
    _DAT_14cb2c528 = FUN_146825d77;
    _DAT_14cb2c530 = FUN_146825fd6;
    _DAT_14cb2c538 = FUN_1407e02ea;
    _DAT_14cb2c540 = FUN_146826273;
    _DAT_14cb2c518 = &LAB_148042e1e;
    _DAT_14cb2c558 = 0xffffffff00000004;
    _DAT_14cb2c560 = 4;
    DAT_14cb2c564 = 0;
    _DAT_14cb2c548 = &LAB_148042e26;
    FUN_145be93e8();
    FUN_1407e00cc(&DAT_14cb2c500);
    return;
  }
  return;
}



// FUNCTION 145be93e8 FUN_145be93e8 body=133 status=ok
// SIG undefined FUN_145be93e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145be93e8(void)

{
  _DAT_14cb2d320 = L"BASE";
  DAT_14cb2d34a = 4;
  FUN_145be946e();
  _DAT_14cb2d330 = DAT_14cb2c510;
  _DAT_14cb2d328 = &DAT_14cb2cce8;
  _DAT_14cb2d338 = &LAB_14682652b;
  DAT_14cb2c510 = &DAT_14cb2d320;
  DAT_14cb2c565 = DAT_14cb2c565 + '\x01';
  _DAT_14cb2d340 = 0x100000000;
  if (DAT_14cb2cd4c != '\0') {
    DAT_14cb2c566 = DAT_14cb2c566 + '\x01';
  }
  return;
}



// FUNCTION 145be946e FUN_145be946e body=200 status=ok
// SIG undefined FUN_145be946e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145be946e(void)

{
  if ((DAT_14cb2cd4f & 2) != 0) {
    return;
  }
  DAT_14cb2cd4f = DAT_14cb2cd4f | 2;
  _DAT_14cb2ccf0 = L"FNiagaraVertexFactoryShaderParametersBase";
  _DAT_14cb2cd08 = FUN_146826540;
  _DAT_14cb2cd10 = FUN_146825d77;
  _DAT_14cb2cd18 = FUN_146825fd6;
  _DAT_14cb2cd20 = FUN_1407e02ea;
  _DAT_14cb2cd28 = FUN_146826273;
  _DAT_14cb2cd00 = &LAB_148043656;
  _DAT_14cb2cd40 = 0xffffffff00000004;
  _DAT_14cb2cd48 = 4;
  DAT_14cb2cd4c = 0;
  _DAT_14cb2cd30 = &LAB_14804365e;
  FUN_145be9536();
  FUN_1407e00cc(&DAT_14cb2cce8);
  return;
}



// FUNCTION 145be9536 FUN_145be9536 body=123 status=ok
// SIG undefined FUN_145be9536(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145be9536(void)

{
  _DAT_14cb2d470 = L"BASE";
  DAT_14cb2d49a = 4;
  _DAT_14cb2d478 = FUN_1412f7d22();
  _DAT_14cb2d480 = DAT_14cb2ccf8;
  _DAT_14cb2d488 = &LAB_14682652b;
  DAT_14cb2ccf8 = &DAT_14cb2d470;
  DAT_14cb2cd4d = DAT_14cb2cd4d + '\x01';
  _DAT_14cb2d490 = 0x100000000;
  if (*(char *)(_DAT_14cb2d478 + 100) != '\0') {
    DAT_14cb2cd4e = DAT_14cb2cd4e + '\x01';
  }
  return;
}



// FUNCTION 145be95b2 FUN_145be95b2 body=40 status=ok
// SIG undefined FUN_145be95b2(void)

undefined8 FUN_145be95b2(undefined8 param_1,int param_2)

{
  FUN_145be95da();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145be95da FUN_145be95da body=1035 status=ok
// SIG undefined FUN_145be95da(void)

void FUN_145be95da(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b4d4fd0;
  FUN_145be9a8c(param_1[0x6e],*(undefined4 *)(param_1 + 0x6f));
  if (param_1[0x6e] != 0) {
    FUN_1400020a8();
  }
  FUN_141323308(param_1[0x6b],*(undefined4 *)(param_1 + 0x6c));
  if (param_1[0x6b] != 0) {
    FUN_1400020a8();
  }
  FUN_14581c24f(param_1[0x69],*(undefined4 *)(param_1 + 0x6a));
  if (param_1[0x69] != 0) {
    FUN_1400020a8();
  }
  FUN_14581c229(param_1[0x67],*(undefined4 *)(param_1 + 0x68));
  if (param_1[0x67] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x66) = 0;
  if (param_1[0x65] != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(param_1 + 0x5d);
  FUN_145be99e5(param_1[0x5b],*(undefined4 *)(param_1 + 0x5c));
  if (param_1[0x5b] != 0) {
    FUN_1400020a8();
  }
  FUN_145be9a0d(param_1[0x59],*(undefined4 *)(param_1 + 0x5a));
  if (param_1[0x59] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x56];
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
  plVar3 = (longlong *)param_1[0x53];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (param_1[0x4e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x47] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x45] != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_1 + 0x42);
  FUN_144760e21(param_1[0x3f],*(undefined4 *)(param_1 + 0x40));
  if (param_1[0x3f] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x3c],*(undefined4 *)(param_1 + 0x3d));
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x39],*(undefined4 *)(param_1 + 0x3a));
  if (param_1[0x39] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x36],*(undefined4 *)(param_1 + 0x37));
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_1 + 0x34);
  FUN_144760e21(param_1[0x31],*(undefined4 *)(param_1 + 0x32));
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x2e],*(undefined4 *)(param_1 + 0x2f));
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x2b],*(undefined4 *)(param_1 + 0x2c));
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x28],*(undefined4 *)(param_1 + 0x29));
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x25],*(undefined4 *)(param_1 + 0x26));
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_1 + 0x23);
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_145be9ab4(param_1 + 8);
  plVar3 = (longlong *)param_1[6];
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
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145be99e5 FUN_145be99e5 body=40 status=ok
// SIG undefined FUN_145be99e5(void)

void FUN_145be99e5(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_148a58a68(param_1);
    param_1 = param_1 + 0x48;
  }
  return;
}



// FUNCTION 145be9a0d FUN_145be9a0d body=38 status=ok
// SIG undefined FUN_145be9a0d(void)

void FUN_145be9a0d(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_145be9a34(param_1);
    param_1 = param_1 + 0x48;
  }
  return;
}



// FUNCTION 145be9a34 FUN_145be9a34 body=88 status=ok
// SIG undefined FUN_145be9a34(void)

void FUN_145be9a34(longlong param_1)

{
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145be9a8c FUN_145be9a8c body=40 status=ok
// SIG undefined FUN_145be9a8c(void)

void FUN_145be9a8c(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_148a5c554(param_1);
    param_1 = param_1 + 0x58;
  }
  return;
}



// FUNCTION 145be9ab4 FUN_145be9ab4 body=103 status=ok
// SIG undefined FUN_145be9ab4(void)

void FUN_145be9ab4(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  plVar2 = *(longlong **)(param_1 + 0x28);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  plVar2 = *(longlong **)(param_1 + 0x18);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145be9b17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145be9b1c FUN_145be9b1c body=144 status=ok
// SIG undefined FUN_145be9b1c(void)

code * FUN_145be9b1c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145be9bac();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SSAOParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FSSAOShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000020b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9b8470;
  return FUN_145f3d422;
}



// FUNCTION 145be9bac FUN_145be9bac body=258 status=ok
// SIG undefined FUN_145be9bac(void)

void FUN_145be9bac(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b84f0) {
    FUN_144b3d300(&DAT_14c9b84f0);
    if (DAT_14c9b84f0 == -1) {
      FUN_145be9cb0(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FSSAOShaderParameters";
      local_38 = 0;
      local_50 = 0x130;
      local_58 = 0x14f;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9b8470,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142b908d1);
      _Init_thread_footer(&DAT_14c9b84f0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145be9cb0 FUN_145be9cb0 body=226 status=ok
// SIG undefined FUN_145be9cb0(void)

longlong * FUN_145be9cb0(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462b8a68;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145be9d98 FUN_145be9d98 body=132 status=ok
// SIG undefined FUN_145be9d98(void)

undefined1 * FUN_145be9d98(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ScreenSpaceAOParams";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x150;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 5;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145be9d94;
}



// FUNCTION 145be9e1c FUN_145be9e1c body=144 status=ok
// SIG undefined FUN_145be9e1c(void)

code * FUN_145be9e1c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14123be74();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"AOViewport";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FScreenPassTextureViewportParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x5000000152;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145be9d98;
}



// FUNCTION 145be9eac FUN_145be9eac body=146 status=ok
// SIG undefined FUN_145be9eac(void)

code * FUN_145be9eac(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145be9f3e();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ReSTIRParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FReSTIRParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1f000000136;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9f7360;
  return FUN_1462e042e;
}



// FUNCTION 145be9f3e FUN_145be9f3e body=258 status=ok
// SIG undefined FUN_145be9f3e(void)

void FUN_145be9f3e(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f73e0) {
    FUN_144b3d300(&DAT_14c9f73e0);
    if (DAT_14c9f73e0 == -1) {
      FUN_145bea042(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FReSTIRParameters";
      local_38 = 0;
      local_50 = 0xb0;
      local_58 = 0x1a;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f7360,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d59669);
      _Init_thread_footer(&DAT_14c9f73e0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bea042 FUN_145bea042 body=226 status=ok
// SIG undefined FUN_145bea042(void)

longlong * FUN_145bea042(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462e04b8;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bea12a FUN_145bea12a body=136 status=ok
// SIG undefined FUN_145bea12a(void)

code * FUN_145bea12a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ResamplingNormalDotThreshold";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2c00000021;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145bea1b2;
}



// FUNCTION 145bea1b2 FUN_145bea1b2 body=138 status=ok
// SIG undefined FUN_145bea1b2(void)

code * FUN_145bea1b2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"FixedJitterIndex";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000020;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471fa65e;
}



// FUNCTION 145bea23c FUN_145bea23c body=144 status=ok
// SIG undefined FUN_145bea23c(void)

code * FUN_145bea23c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145bea2cc();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VirtualShadowMap";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FVirtualTargetParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x120000002c7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca17798;
  return FUN_147256748;
}



// FUNCTION 145bea2cc FUN_145bea2cc body=258 status=ok
// SIG undefined FUN_145bea2cc(void)

void FUN_145bea2cc(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca17818) {
    FUN_144b3d300(&DAT_14ca17818);
    if (DAT_14ca17818 == -1) {
      FUN_145bea3d0(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FVirtualTargetParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x24d;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca17798,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e275f7);
      _Init_thread_footer(&DAT_14ca17818);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bea3d0 FUN_145bea3d0 body=226 status=ok
// SIG undefined FUN_145bea3d0(void)

longlong * FUN_145bea3d0(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462f0636;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bea4b8 FUN_145bea4b8 body=138 status=ok
// SIG undefined FUN_145bea4b8(void)

code * FUN_145bea4b8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HZBPageFlags";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer< uint >";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000251;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472567d2;
}



// FUNCTION 145bea542 FUN_145bea542 body=138 status=ok
// SIG undefined FUN_145bea542(void)

code * FUN_145bea542(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HZBPageTable";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer< uint >";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000024f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462f06be;
}



// FUNCTION 145bea5cc FUN_145bea5cc body=40 status=ok
// SIG undefined FUN_145bea5cc(void)

undefined8 FUN_145bea5cc(undefined8 param_1,int param_2)

{
  FUN_145bea5f4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145bea5f4 FUN_145bea5f4 body=96 status=ok
// SIG undefined FUN_145bea5f4(void)

void FUN_145bea5f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a8af8f0;
  FUN_145bea685(param_1[0x10],*(undefined4 *)(param_1 + 0x11));
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_145bea654(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145bea654 FUN_145bea654 body=49 status=ok
// SIG undefined FUN_145bea654(void)

void FUN_145bea654(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145bea685 FUN_145bea685 body=63 status=ok
// SIG undefined FUN_145bea685(void)

void FUN_145bea685(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x40);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-8] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145bea6c4 FUN_145bea6c4 body=42 status=ok
// SIG undefined FUN_145bea6c4(void)

void FUN_145bea6c4(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_1414db5a0();
  if (cVar1 != '\0') {
    *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_1 + 0x40);
    *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_1 + 0x38);
  }
  return;
}



// FUNCTION 145bea704 FUN_145bea704 body=102 status=ok
// SIG undefined FUN_145bea704(void)

void FUN_145bea704(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x178) == '\x03') {
    local_c = 0;
    local_20 = DAT_14cbc5600;
    local_18 = 0xffffffff;
    FUN_141094e00(param_1 + 0x4d8,&local_20,0);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bea76c FUN_145bea76c body=162 status=ok
// SIG undefined FUN_145bea76c(void)

ulonglong FUN_145bea76c(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = *(undefined8 *)(param_1 + 0x70);
  local_10 = *(undefined4 *)(param_1 + 0x88);
  local_20 = *(undefined4 *)(param_1 + 0x78);
  uStack_1c = *(undefined4 *)(param_1 + 0x7c);
  uStack_18 = *(undefined4 *)(param_1 + 0x80);
  uStack_14 = *(undefined4 *)(param_1 + 0x84);
  iVar1 = *(int *)(param_2 + 8);
  local_28 = param_2;
  if (param_3 == 0) {
    uVar2 = (ulonglong)CONCAT31((int3)((uint)iVar1 >> 8),iVar1 == *(int *)(param_2 + 0x34));
  }
  else {
    local_38 = *(undefined4 *)(param_1 + 0x88);
    local_48 = *(undefined4 *)(param_1 + 0x78);
    uStack_44 = *(undefined4 *)(param_1 + 0x7c);
    uStack_40 = *(undefined4 *)(param_1 + 0x80);
    uStack_3c = *(undefined4 *)(param_1 + 0x84);
    local_58 = local_30;
    local_50 = param_3;
    if (iVar1 - *(int *)(param_2 + 0x34) == *(int *)(param_3 + 8) - *(int *)(param_3 + 0x34)) {
      uVar2 = FUN_145bea80f(&local_30,&local_58,param_4);
    }
    else {
      uVar2 = 0;
    }
  }
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bea80f FUN_145bea80f body=416 status=ok
// SIG undefined FUN_145bea80f(void)

undefined4 FUN_145bea80f(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_a8 [32];
  int local_88;
  longlong local_80;
  int local_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar1 = *(int *)(param_1[1] + 8);
  iVar2 = *(int *)(param_1[1] + 0x34);
  if (iVar1 - iVar2 ==
      *(int *)(*(longlong *)(param_2 + 8) + 8) - *(int *)(*(longlong *)(param_2 + 8) + 0x34)) {
    plVar3 = (longlong *)*param_1;
    local_50 = 0xffffffffffffffff;
    local_58 = param_1;
    FUN_14000a0a0();
    local_60 = 0xffffffffffffffff;
    local_68 = param_2;
    FUN_14000a0a0();
    uVar5 = 0xffffff01;
    if (iVar1 != iVar2) {
      uVar7 = iVar2 - iVar1;
      do {
        cVar4 = (**(code **)(*plVar3 + 200))
                          (plVar3,(longlong)*(int *)(param_1 + 4) * (longlong)(int)local_50 +
                                  *(longlong *)param_1[1],
                           (longlong)*(int *)(param_2 + 0x20) * (longlong)(int)local_60 +
                           **(longlong **)(param_2 + 8),param_3);
        if (cVar4 == '\0') {
          local_70 = local_50._4_4_;
          local_6c = local_60._4_4_;
          uVar8 = 0;
          goto LAB_145bea93d;
        }
        FUN_14000a0a0(&local_58);
        FUN_14000a0a0(&local_68);
        uVar7 = uVar7 + 1;
      } while (uVar7 != 0);
    }
  }
  else {
LAB_145bea9a9:
    uVar5 = 0;
  }
LAB_145bea890:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
LAB_145bea93d:
  lVar6 = (longlong)*(int *)(param_1 + 4) * (longlong)(int)local_50 + *(longlong *)param_1[1];
  local_88 = param_3;
  cVar4 = FUN_1468e4aa3(param_1,local_70,uVar8,lVar6);
  if ((cVar4 == '\0') &&
     (local_88 = -uVar7, local_80 = lVar6, local_78 = param_3,
     cVar4 = FUN_1468e4bd6(param_1,local_70,param_2,local_6c), cVar4 == '\0')) goto LAB_145bea9a9;
  if (~uVar7 == uVar8) goto LAB_145bea890;
  FUN_14000a0a0(&local_58);
  uVar8 = uVar8 + 1;
  goto LAB_145bea93d;
}



// FUNCTION 145bea9bc FUN_145bea9bc body=72 status=ok
// SIG undefined FUN_145bea9bc(void)

void FUN_145bea9bc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  *puVar1 = &PTR_FUN_14a5aaae0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined1 *)(puVar1 + 0xb) = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x34) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x3c) = 0;
  return;
}



// FUNCTION 145beaa04 FUN_145beaa04 body=40 status=ok
// SIG undefined FUN_145beaa04(void)

undefined8 FUN_145beaa04(undefined8 param_1,int param_2)

{
  FUN_145beaa2c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145beaa2c FUN_145beaa2c body=43 status=ok
// SIG undefined FUN_145beaa2c(void)

void FUN_145beaa2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a6a7590;
  FUN_14583ec6c(param_1 + 0x1e);
  thunk_FUN_140bc97f4(param_1);
  return;
}



// FUNCTION 145beaa58 FUN_145beaa58 body=38 status=ok
// SIG undefined FUN_145beaa58(void)

undefined8 FUN_145beaa58(undefined8 param_1,int param_2)

{
  FUN_145beaa7e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145beaa7e FUN_145beaa7e body=68 status=ok
// SIG undefined FUN_145beaa7e(void)

void FUN_145beaa7e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a796ba0;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc));
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_145beaac2(param_1 + 2);
  return;
}



// FUNCTION 145beaac2 FUN_145beaac2 body=53 status=ok
// SIG undefined FUN_145beaac2(void)

void FUN_145beaac2(longlong *param_1)

{
  FUN_145beaaf8();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145beaaf8 FUN_145beaaf8 body=90 status=ok
// SIG undefined FUN_145beaaf8(void)

void FUN_145beaaf8(longlong param_1)

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



// FUNCTION 145beab52 FUN_145beab52 body=71 status=ok
// SIG undefined FUN_145beab52(void)

void FUN_145beab52(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145adb976(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a7e6a20;
  puVar1[5] = &PTR_FUN_14a7e7000;
  puVar1[6] = &PTR_LAB_14a7e7040;
  *(undefined1 *)(puVar1 + 0x74) = 1;
  FUN_145beab9a(puVar1);
  return;
}



// FUNCTION 145beab9a FUN_145beab9a body=94 status=ok
// SIG undefined FUN_145beab9a(void)

void FUN_145beab9a(longlong param_1)

{
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined1 *)(param_1 + 0x2a8) = 1;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0xc0f86a0000000000;
  local_38 = 0;
  FUN_140d93b16(0,&local_28,0,0);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145beabfa FUN_145beabfa body=40 status=ok
// SIG undefined FUN_145beabfa(void)

undefined8 FUN_145beabfa(undefined8 param_1,int param_2)

{
  FUN_145beac22();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145beac22 FUN_145beac22 body=66 status=ok
// SIG undefined FUN_145beac22(void)

void FUN_145beac22(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a8d8b90;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_145beac64(param_1 + 7);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145beac64 FUN_145beac64 body=53 status=ok
// SIG undefined FUN_145beac64(void)

void FUN_145beac64(longlong *param_1)

{
  FUN_145beac9a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145beac9a FUN_145beac9a body=90 status=ok
// SIG undefined FUN_145beac9a(void)

void FUN_145beac9a(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1405357e8(param_1,0);
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



// FUNCTION 145beacf4 FUN_145beacf4 body=40 status=ok
// SIG undefined FUN_145beacf4(void)

undefined8 FUN_145beacf4(undefined8 param_1,int param_2)

{
  FUN_145bead1c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145bead1c FUN_145bead1c body=66 status=ok
// SIG undefined FUN_145bead1c(void)

void FUN_145bead1c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a8daeb0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_145bead5e(param_1 + 7);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145bead5e FUN_145bead5e body=53 status=ok
// SIG undefined FUN_145bead5e(void)

void FUN_145bead5e(longlong *param_1)

{
  FUN_145bead94();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145bead94 FUN_145bead94 body=90 status=ok
// SIG undefined FUN_145bead94(void)

void FUN_145bead94(longlong param_1)

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



// FUNCTION 145beadee FUN_145beadee body=40 status=ok
// SIG undefined FUN_145beadee(void)

undefined8 FUN_145beadee(undefined8 param_1,int param_2)

{
  FUN_145beae16();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145beae16 FUN_145beae16 body=43 status=ok
// SIG undefined FUN_145beae16(void)

void FUN_145beae16(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149e5de80;
  FUN_1448eac94(param_1 + 0x1b);
  FUN_1400deb62(param_1);
  return;
}



// FUNCTION 145beae42 FUN_145beae42 body=40 status=ok
// SIG undefined FUN_145beae42(void)

undefined8 FUN_145beae42(undefined8 param_1,int param_2)

{
  FUN_145beae6a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145beae6a FUN_145beae6a body=160 status=ok
// SIG undefined FUN_145beae6a(void)

void FUN_145beae6a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14acc8290;
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_145beaf0a(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_145beaf0a(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145beaf0a FUN_145beaf0a body=49 status=ok
// SIG undefined FUN_145beaf0a(void)

void FUN_145beaf0a(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145beaf4a FUN_145beaf4a body=69 status=ok
// SIG undefined FUN_145beaf4a(void)

undefined8 * FUN_145beaf4a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14affe220;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_140f4e84a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145beaf9e FUN_145beaf9e body=69 status=ok
// SIG undefined FUN_145beaf9e(void)

undefined8 * FUN_145beaf9e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b006b80;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_140f4e84a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145beafec FUN_145beafec body=75 status=ok
// SIG undefined FUN_145beafec(void)

undefined8 * FUN_145beafec(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_144a0768c(param_1,uVar1);
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_14b2a6a00;
  param_1[5] = DAT_14cb8c6d0;
  uVar1 = FUN_14068229a();
  param_1[6] = uVar1;
  return param_1;
}



// FUNCTION 145beb040 FUN_145beb040 body=75 status=ok
// SIG undefined FUN_145beb040(void)

undefined8 * FUN_145beb040(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_144a0768c(param_1,uVar1);
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_14b2a7500;
  param_1[5] = DAT_14cb8c6c8;
  uVar1 = FUN_140682380();
  param_1[6] = uVar1;
  return param_1;
}



// FUNCTION 145beb094 FUN_145beb094 body=75 status=ok
// SIG undefined FUN_145beb094(void)

undefined8 * FUN_145beb094(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_144a0768c(param_1,uVar1);
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_14b2a77c0;
  param_1[5] = DAT_14cb8c6d8;
  uVar1 = FUN_1406821b4();
  param_1[6] = uVar1;
  return param_1;
}



// FUNCTION 145beb0e8 FUN_145beb0e8 body=75 status=ok
// SIG undefined FUN_145beb0e8(void)

undefined8 * FUN_145beb0e8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_144a0768c(param_1,uVar1);
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_14b2a7a80;
  param_1[5] = DAT_14cb8c6e0;
  uVar1 = FUN_1406820ce();
  param_1[6] = uVar1;
  return param_1;
}



// FUNCTION 145beb13c FUN_145beb13c body=75 status=ok
// SIG undefined FUN_145beb13c(void)

undefined8 * FUN_145beb13c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_144a0768c(param_1,uVar1);
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_14b2a7d40;
  param_1[5] = DAT_14cb8c6e8;
  uVar1 = FUN_1409178de();
  param_1[6] = uVar1;
  return param_1;
}



// FUNCTION 145beb190 FUN_145beb190 body=75 status=ok
// SIG undefined FUN_145beb190(void)

undefined8 * FUN_145beb190(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_144a0768c(param_1,uVar1);
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_14b2a8000;
  param_1[5] = DAT_14cb8c6f0;
  uVar1 = FUN_1409177f8();
  param_1[6] = uVar1;
  return param_1;
}



// FUNCTION 145beb1e4 FUN_145beb1e4 body=75 status=ok
// SIG undefined FUN_145beb1e4(void)

undefined8 * FUN_145beb1e4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_1412fe974(param_1,uVar1);
  *param_1 = &PTR_FUN_14b3d90d0;
  param_1[0x20] = 0;
  param_1[0x10] = DAT_14cb8d6d0;
  *(undefined1 *)((longlong)param_1 + 0xe9) = 1;
  return param_1;
}



// FUNCTION 145beb23a FUN_145beb23a body=72 status=ok
// SIG undefined FUN_145beb23a(void)

undefined8 * FUN_145beb23a(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14b43cd40;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  return param_1;
}



// FUNCTION 145beb290 FUN_145beb290 body=69 status=ok
// SIG undefined FUN_145beb290(void)

undefined8 * FUN_145beb290(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b492490;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_1458ad4f2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145beb2d6 FUN_145beb2d6 body=26 status=ok
// SIG undefined FUN_145beb2d6(void)

void FUN_145beb2d6(undefined8 param_1)

{
  FUN_144a63f30();
  FUN_145beb2f0(param_1);
  return;
}



// FUNCTION 145beb2f0 FUN_145beb2f0 body=140 status=ok
// SIG undefined FUN_145beb2f0(void)

void FUN_145beb2f0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar3;
  ulonglong uVar4;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  if (*(char *)(param_1 + 0x188) == '\x01') {
    uVar1 = FUN_14594ae94();
    uVar4 = 0;
    uVar1 = FUN_141433b6f(uVar1,0,L"/Script/OnlineSubsystemUtils.OnlineServicesEngineInterfaceImpl",
                          0,CONCAT44(uVar3,0x2000),0);
    lVar2 = FUN_1463ede30(DAT_14c951640,uVar1,0,0,0,uVar4 & 0xffffffffffffff00,0,0);
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
    *(longlong *)(param_1 + 400) = lVar2;
  }
  return;
}



// FUNCTION 145beb37c FUN_145beb37c body=40 status=ok
// SIG undefined FUN_145beb37c(void)

undefined8 FUN_145beb37c(undefined8 param_1,int param_2)

{
  FUN_145beb3a4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145beb3a4 FUN_145beb3a4 body=156 status=ok
// SIG undefined FUN_145beb3a4(void)

void FUN_145beb3a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b557210;
  FUN_145beb46a(param_1 + 0x11);
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
  FUN_145beb441(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145beb441 FUN_145beb441 body=40 status=ok
// SIG undefined FUN_145beb441(void)

void FUN_145beb441(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_148b1d9ba(param_1);
    param_1 = param_1 + 0x68;
  }
  return;
}



// FUNCTION 145beb46a FUN_145beb46a body=96 status=ok
// SIG undefined FUN_145beb46a(void)

void FUN_145beb46a(longlong *param_1)

{
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145beb4ca FUN_145beb4ca body=40 status=ok
// SIG undefined FUN_145beb4ca(void)

undefined8 FUN_145beb4ca(undefined8 param_1,int param_2)

{
  FUN_145beb4f2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145beb4f2 FUN_145beb4f2 body=126 status=ok
// SIG undefined FUN_145beb4f2(void)

void FUN_145beb4f2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b5962a0;
  param_1[5] = &PTR_FUN_14b5965f0;
  param_1[0x52] = &PTR_LAB_14b596630;
  *(undefined4 *)(param_1 + 0x179) = 0;
  if (param_1[0x178] != 0) {
    FUN_1400020a8();
  }
  FUN_1459bf192(param_1 + 0x170);
  if (param_1[0x16d] != 0) {
    FUN_1400020a8();
  }
  FUN_14584ba0c(param_1);
  return;
}



// FUNCTION 145beb572 FUN_145beb572 body=40 status=ok
// SIG undefined FUN_145beb572(void)

undefined8 FUN_145beb572(undefined8 param_1,int param_2)

{
  FUN_145beb59a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145beb59a FUN_145beb59a body=126 status=ok
// SIG undefined FUN_145beb59a(void)

void FUN_145beb59a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b596700;
  param_1[5] = &PTR_FUN_14b596a50;
  param_1[0x52] = &PTR_LAB_14b596a90;
  *(undefined4 *)(param_1 + 0x17f) = 0;
  if (param_1[0x17e] != 0) {
    FUN_1400020a8();
  }
  FUN_1459bf192(param_1 + 0x176);
  if (param_1[0x173] != 0) {
    FUN_1400020a8();
  }
  FUN_145aea8e4(param_1);
  return;
}



// FUNCTION 145beb61a FUN_145beb61a body=656 status=ok
// SIG undefined FUN_145beb61a(void)

void FUN_145beb61a(longlong param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  bool bVar7;
  
  if (*(char *)(param_1 + 0x178) != '\x03') {
    return;
  }
  bVar6 = param_2 == 0;
  if (!bVar6) {
    if (*(longlong *)(param_2 + 0x1b0) == param_1) {
      lVar1 = *(longlong *)(param_2 + 0xb18);
      if ((lVar1 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar1);
      }
      if (lVar1 == param_1) goto LAB_145beb67d;
    }
    FUN_140e81132(param_2,param_1);
  }
LAB_145beb67d:
  lVar1 = param_1 + 0x22a0;
  bVar7 = true;
  if (((int)param_3 < 0) || (*(int *)(param_1 + 0x2348) <= (int)param_3)) {
    lVar5 = 0;
LAB_145beb6e1:
    uVar3 = FUN_1414db5b4(lVar1);
    if (param_2 == 0) goto LAB_145beb705;
  }
  else {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x2340) + 0x20 + (ulonglong)param_3 * 0x170);
    if ((lVar5 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar5);
    }
    bVar7 = lVar5 == 0;
    bVar6 = lVar5 == param_2;
    if (bVar7 || !bVar6) goto LAB_145beb6e1;
    cVar2 = FUN_14166d420(lVar5);
    bVar6 = true;
    if ((((cVar2 != '\0') || ((*(byte *)(lVar5 + 0x65) & 2) != 0)) || (param_2 == 0)) ||
       ((*(uint *)(lVar5 + 8) & 0x40000000) != 0)) goto LAB_145beb6e1;
    if (*(longlong *)(param_2 + 0xd60) != DAT_14cb95120) {
      return;
    }
    uVar3 = FUN_1414db5b4(lVar1);
    bVar6 = true;
    bVar7 = false;
  }
  FUN_141145e58(param_2,param_1,param_3,0,uVar3);
LAB_145beb705:
  if (((!(bool)(bVar6 | bVar7)) && (*(longlong *)(lVar5 + 0xd60) != DAT_14cb95120)) &&
     (((*(byte *)(lVar5 + 0x65) & 2) == 0 && ((*(uint *)(lVar5 + 8) >> 0x1e & 1) == 0)))) {
    FUN_145810f82(lVar5,0);
  }
  if (!bVar7) {
    FUN_145810f44(lVar5);
  }
  if (param_2 != 0) {
    FUN_1414db5c4(param_2);
    FUN_144a7a5f4();
  }
  FUN_140e7e0ee(lVar1,param_2,param_3,uVar3);
  if (!(bool)(bVar6 | bVar7)) {
    if (((int)param_3 < 0) || (*(int *)(param_1 + 0x2348) <= (int)param_3)) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x2340) + 0x20 + (ulonglong)param_3 * 0x170);
      if ((lVar4 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar4);
      }
    }
    if ((((lVar4 != param_2) && (*(longlong *)(lVar5 + 0xd60) != DAT_14cb95120)) &&
        ((*(byte *)(lVar5 + 0x65) & 2) == 0)) && ((*(uint *)(lVar5 + 8) >> 0x1e & 1) == 0)) {
      FUN_140f07252(lVar1,lVar5,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 145beb8aa FUN_145beb8aa body=40 status=ok
// SIG undefined FUN_145beb8aa(void)

undefined8 FUN_145beb8aa(undefined8 param_1,int param_2)

{
  FUN_145beb8d2();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145beb8d2 FUN_145beb8d2 body=138 status=ok
// SIG undefined FUN_145beb8d2(void)

void FUN_145beb8d2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba96bf0;
  param_1[5] = &PTR_FUN_14ba96e90;
  FUN_145beb95c(param_1[0x14],*(undefined4 *)(param_1 + 0x15));
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_145beb9b6(param_1 + 0x12);
  FUN_145beb984(param_1[0xf],*(undefined4 *)(param_1 + 0x10));
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145beb95c FUN_145beb95c body=40 status=ok
// SIG undefined FUN_145beb95c(void)

void FUN_145beb95c(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1490787c6(param_1);
    param_1 = param_1 + 0x30;
  }
  return;
}



// FUNCTION 145beb984 FUN_145beb984 body=49 status=ok
// SIG undefined FUN_145beb984(void)

void FUN_145beb984(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145beb9b6 FUN_145beb9b6 body=65 status=ok
// SIG undefined FUN_145beb9b6(void)

void FUN_145beb9b6(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  while (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 8) = *puVar1;
    if (puVar1[3] != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(puVar1);
    puVar1 = *(undefined8 **)(param_1 + 8);
  }
  return;
}



// FUNCTION 145beba00 FUN_145beba00 body=97 status=ok
// SIG undefined FUN_145beba00(void)

undefined8 * FUN_145beba00(undefined8 *param_1)

{
  FUN_145beba62();
  *param_1 = &PTR_FUN_14bc6d330;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  FUN_14020fad6(param_1 + 0x2c,L"DiffuseTexturePath");
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  FUN_14020fad6(param_1 + 0x2e,L"NormalTexturePath");
  return param_1;
}



// FUNCTION 145beba62 FUN_145beba62 body=61 status=ok
// SIG undefined FUN_145beba62(void)

undefined8 * FUN_145beba62(undefined8 *param_1)

{
  FUN_141083082();
  *param_1 = &PTR_FUN_14bc7e840;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  FUN_14020fad6(param_1 + 0x2a,L"IsMaterialImportEnabled");
  return param_1;
}



// FUNCTION 145bebaa0 FUN_145bebaa0 body=40 status=ok
// SIG undefined FUN_145bebaa0(void)

undefined8 FUN_145bebaa0(undefined8 param_1,int param_2)

{
  FUN_145bebac8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145bebac8 FUN_145bebac8 body=126 status=ok
// SIG undefined FUN_145bebac8(void)

void FUN_145bebac8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bcc6ae0;
  if (param_1[0x45] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x42] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  FUN_1410aba6a(param_1);
  return;
}



// FUNCTION 145bebb46 FUN_145bebb46 body=40 status=ok
// SIG undefined FUN_145bebb46(void)

undefined8 FUN_145bebb46(undefined8 param_1,int param_2)

{
  FUN_145bebb6e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145bebb6e FUN_145bebb6e body=86 status=ok
// SIG undefined FUN_145bebb6e(void)

void FUN_145bebb6e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bcecf50;
  FUN_1449db362(param_1 + 0xd);
  FUN_1449db362(param_1 + 0xb);
  FUN_1449db362(param_1 + 9);
  FUN_145bebbc4(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145bebbc4 FUN_145bebbc4 body=40 status=ok
// SIG undefined FUN_145bebbc4(void)

void FUN_145bebbc4(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1494677f4(param_1);
    param_1 = param_1 + 0x68;
  }
  return;
}



// FUNCTION 145bebbec FUN_145bebbec body=2912 status=ok
// SIG undefined FUN_145bebbec(void)

void FUN_145bebbec(ulonglong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 ****ppppuVar9;
  undefined4 uVar10;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  ulonglong local_88;
  longlong *local_80;
  longlong local_70;
  undefined4 local_60;
  undefined8 ***local_58 [3];
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_145becd92();
  if (param_2 != (longlong *)0x0) {
    lVar6 = (**(code **)(*param_2 + 8))(param_2);
    lVar7 = FUN_145bec77a();
    if (((lVar7 != 0) && (*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
        lVar7 + 0x30)) {
      *(longlong **)(param_1 + 0x4210) = param_2;
    }
  }
  lVar6 = DAT_14cbc5d28;
  if ((DAT_14cbc5d28 != 0) && (*(longlong *)(param_1 + 0x4210) != 0)) {
    local_58[0] = *(undefined8 ****)(*(longlong *)(param_1 + 0x4210) + 0x520);
    FUN_1446dcdd4(&local_88);
    lVar6 = FUN_144815d88(lVar6,&local_88);
    *(longlong *)(param_1 + 0x43d8) = lVar6;
    if (local_70 != 0) {
      FUN_1400020a8();
      lVar6 = *(longlong *)(param_1 + 0x43d8);
    }
    if (lVar6 != 0) {
      uVar8 = thunk_FUN_14050fd64();
      local_98 = 0;
      FUN_14088df30(uVar8,&local_88,*(undefined8 *)(param_1 + 0x43d8),0);
      plVar2 = local_80;
      if ((ulonglong *)(param_1 + 0x43e0) != &local_88) {
        *(ulonglong *)(param_1 + 0x43e0) = local_88;
        local_88 = 0;
        plVar3 = *(longlong **)(param_1 + 0x43e8);
        if (local_80 != plVar3) {
          local_80 = (longlong *)0x0;
          *(longlong **)(param_1 + 0x43e8) = plVar2;
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
      plVar2 = local_80;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_80 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_80)(local_80);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
      lVar6 = *(longlong *)(param_1 + 0x43d8);
      local_88 = local_88 & 0xffffffffffffff00;
      local_60 = 0;
      FUN_1456bb102(&local_88,*(undefined8 *)(param_1 + 0x4208));
      FUN_1448729ea(lVar6 + 0xe8,local_58,&local_88);
      uVar10 = FUN_144a7ecd0(local_58);
      *(undefined4 *)(param_1 + 0x45ac) = uVar10;
      FUN_14020a6cc(param_1 + 0x45a4,1);
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
      if (pcVar4 != (code *)0x0) {
        ppppuVar9 = local_58;
        if (0x18 < local_40) {
          ppppuVar9 = (undefined8 ****)local_58[0];
        }
        (*pcVar4)(ppppuVar9);
      }
      if (0x18 < local_40) {
        FUN_1400020a8(local_58[0]);
      }
      FUN_144a5ac3a(&local_88);
      FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x38),0x15);
      lVar6 = *(longlong *)(param_1 + 0x43d8);
      local_88 = local_88 & 0xffffffffffffff00;
      local_60 = 0;
      FUN_1456bb102(&local_88,*(undefined8 *)(param_1 + 0x4208));
      FUN_1448729ea(lVar6 + 0x138,local_58,&local_88);
      uVar10 = FUN_144a7ecd0(local_58);
      *(undefined4 *)(param_1 + 0x45b8) = uVar10;
      FUN_14020a6cc(param_1 + 0x45b0,1);
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
      if (pcVar4 != (code *)0x0) {
        ppppuVar9 = local_58;
        if (0x18 < local_40) {
          ppppuVar9 = (undefined8 ****)local_58[0];
        }
        (*pcVar4)(ppppuVar9);
      }
      if (0x18 < local_40) {
        FUN_1400020a8(local_58[0]);
      }
      FUN_144a5ac3a(&local_88);
      FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x38),0x16);
    }
  }
  *(undefined4 *)(param_1 + 0x45a0) = 0x3f800000;
  FUN_14020a6cc(param_1 + 0x4598,1);
  FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x38),0x14);
  if (*(longlong *)(param_1 + 0x4210) != 0) {
    FUN_1414db610(param_1,0x10000,*(longlong *)(param_1 + 0x4210) + 0x6d0);
    FUN_1414db610(param_1,0x20000,*(longlong *)(param_1 + 0x4210) + 0x718);
    FUN_1414db610(param_1,0x100000,*(longlong *)(param_1 + 0x4210) + 0x760);
    FUN_1414db610(param_1,0x200000,*(longlong *)(param_1 + 0x4210) + 0x7a8);
    FUN_1414db610(param_1,0x800000,*(longlong *)(param_1 + 0x4210) + 0x7f0);
    FUN_1414db610(param_1,0x8000000,*(longlong *)(param_1 + 0x4210) + 0x880);
    lVar6 = DAT_14cbc5c18;
    if (DAT_14cbc5c18 != 0) {
      local_58[0] = *(undefined8 ****)(*(longlong *)(param_1 + 0x4210) + 0x538);
      FUN_1446dcdd4(&local_88);
      lVar6 = FUN_144815d88(lVar6,&local_88);
      *(longlong *)(param_1 + 0x4430) = lVar6;
      if (local_70 != 0) {
        FUN_1400020a8();
        lVar6 = *(longlong *)(param_1 + 0x4430);
      }
      if (lVar6 != 0) {
        uVar8 = thunk_FUN_14050fd64();
        local_98 = 0;
        FUN_14088df30(uVar8,&local_88,*(undefined8 *)(param_1 + 0x4430),0);
        plVar2 = local_80;
        if ((ulonglong *)(param_1 + 0x4438) != &local_88) {
          *(ulonglong *)(param_1 + 0x4438) = local_88;
          local_88 = 0;
          plVar3 = *(longlong **)(param_1 + 0x4440);
          if (local_80 != plVar3) {
            local_80 = (longlong *)0x0;
            *(longlong **)(param_1 + 0x4440) = plVar2;
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
        plVar2 = local_80;
        if (local_80 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_80 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_80)(local_80);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar2 + 0x10))(plVar2);
            }
          }
        }
        FUN_1414db610(param_1,0x80000,*(longlong *)(param_1 + 0x4430) + 0x1aa8);
        lVar6 = *(longlong *)(param_1 + 0x4430);
        local_88 = local_88 & 0xffffffffffffff00;
        local_60 = 0;
        FUN_1456bb102(&local_88,*(undefined8 *)(param_1 + 0x4208));
        FUN_1448729ea(lVar6 + 0x40,local_58,&local_88);
        uVar10 = FUN_144a7ecd0(local_58);
        *(undefined4 *)(param_1 + 0x45c4) = uVar10;
        FUN_14020a6cc(param_1 + 0x45bc,1);
        pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
        if (pcVar4 != (code *)0x0) {
          ppppuVar9 = local_58;
          if (0x18 < local_40) {
            ppppuVar9 = (undefined8 ****)local_58[0];
          }
          (*pcVar4)(ppppuVar9);
        }
        if (0x18 < local_40) {
          FUN_1400020a8(local_58[0]);
        }
        FUN_144a5ac3a(&local_88);
        FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x38),0x17);
      }
    }
    local_58[0] = *(undefined8 ****)(*(longlong *)(param_1 + 0x4210) + 0x550);
    FUN_1446dcdd4(&local_88);
    lVar6 = FUN_145bec764(&local_88);
    *(longlong *)(param_1 + 0x44c0) = lVar6;
    if (local_70 != 0) {
      FUN_1400020a8();
      lVar6 = *(longlong *)(param_1 + 0x44c0);
    }
    if (lVar6 != 0) {
      FUN_1414db610(param_1,0x40000,lVar6 + 0x400);
      FUN_1414db610(param_1,0x4000000,*(longlong *)(param_1 + 0x44c0) + 0x448);
      FUN_1414db610(param_1,0x400000,*(longlong *)(param_1 + 0x44c0) + 0x490);
      uVar8 = thunk_FUN_14050fd64();
      local_98 = 0;
      FUN_14088df30(uVar8,&local_88,*(undefined8 *)(param_1 + 0x44c0),0);
      plVar2 = local_80;
      if ((ulonglong *)(param_1 + 0x44c8) != &local_88) {
        *(ulonglong *)(param_1 + 0x44c8) = local_88;
        local_88 = 0;
        plVar3 = *(longlong **)(param_1 + 0x44d0);
        if (local_80 != plVar3) {
          local_80 = (longlong *)0x0;
          *(longlong **)(param_1 + 0x44d0) = plVar2;
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
      plVar2 = local_80;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_80 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_80)(local_80);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
    }
    local_58[0] = *(undefined8 ****)(*(longlong *)(param_1 + 0x4210) + 0x568);
    FUN_1446dcdd4(&local_88);
    uVar8 = FUN_145bec74e(&local_88);
    *(undefined8 *)(param_1 + 0x4588) = uVar8;
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    uVar8 = thunk_FUN_14050fd64();
    local_98 = 0;
    FUN_14088df30(uVar8,&local_88,*(undefined8 *)(param_1 + 0x4210),0);
    plVar2 = local_80;
    if ((ulonglong *)(param_1 + 0x4218) != &local_88) {
      *(ulonglong *)(param_1 + 0x4218) = local_88;
      local_88 = 0;
      plVar3 = *(longlong **)(param_1 + 0x4220);
      if (local_80 != plVar3) {
        local_80 = (longlong *)0x0;
        *(longlong **)(param_1 + 0x4220) = plVar2;
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
    plVar2 = local_80;
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_80 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
  }
  plVar2 = (longlong *)(param_1 + 0x42b8);
  FUN_145beca42(plVar2,param_1);
  if (*(int *)(param_1 + 0x42c0) != 3) {
    FUN_1446efa72(plVar2,0,3,0x10);
    *(undefined4 *)(param_1 + 0x42c0) = 3;
  }
  puVar5 = (undefined8 *)*plVar2;
  *puVar5 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  puVar5[2] = lVar7;
  *puVar5 = &PTR_FUN_14b9646e0;
  puVar5[3] = 0;
  FUN_14485c47a(puVar5 + 3,param_1);
  puVar5[4] = FUN_1458ec01c;
  *(undefined4 *)(puVar5 + 5) = 0;
  if (*(int *)(param_1 + 0x42e0) != 3) {
    FUN_1446efa72((longlong *)(param_1 + 0x42d8),0,3,0x10);
    *(undefined4 *)(param_1 + 0x42e0) = 3;
  }
  puVar5 = *(undefined8 **)(param_1 + 0x42d8);
  *puVar5 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  puVar5[2] = lVar7;
  *puVar5 = &PTR_FUN_14b9646e0;
  puVar5[3] = 0;
  FUN_14485c47a(puVar5 + 3,param_1);
  puVar5[4] = FUN_1458ec0ec;
  *(undefined4 *)(puVar5 + 5) = 0;
  lVar6 = *(longlong *)(param_1 + 0x4210);
  if (lVar6 != 0) {
    *(undefined4 *)(param_1 + 0x4480) = *(undefined4 *)(lVar6 + 0x8c8);
    *(undefined4 *)(param_1 + 0x4484) = *(undefined4 *)(lVar6 + 0x8cc);
    *(undefined4 *)(param_1 + 0x4488) = *(undefined4 *)(lVar6 + 0x8d0);
    FUN_145bec7b4(param_1,0);
    local_58[0]._0_4_ = 0x80000;
    local_88 = param_1;
    FUN_1414db8a0(&local_88,param_1 + 0x4604,local_58);
    FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x38),0x1d);
    local_58[0]._0_4_ = 0x10000;
    FUN_1414db8a0(&local_88,param_1 + 0x4610,local_58);
    FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x38),0x1e);
    local_58[0]._0_4_ = 0x20000;
    FUN_1414db8a0(&local_88,param_1 + 0x461c,local_58);
    FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x38),0x1f);
    local_58[0]._0_4_ = 0x40000;
    FUN_1414db8a0(&local_88,param_1 + 0x4628,local_58);
    FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x38),0x20);
    local_58[0] = (undefined8 ***)CONCAT44(local_58[0]._4_4_,0x200000);
    FUN_1414db8a0(&local_88,param_1 + 0x4634,local_58);
    FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x38),0x21);
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bec74e FUN_145bec74e body=22 status=ok
// SIG undefined FUN_145bec74e(void)

ulonglong FUN_145bec74e(uint *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  ulonglong *puVar7;
  uint *puVar8;
  longlong lVar9;
  uint *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  undefined1 auStack_68 [40];
  ulonglong uStack_40;
  int iStack_38;
  ulonglong uStack_30;
  
  plVar3 = DAT_14cbc5630;
  if (DAT_14cbc5630 == (longlong *)0x0) {
    return 0;
  }
  uStack_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(code **)(*DAT_14cbc5630 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cbc5630 + 0x154) & 1) != 0) &&
       (*(int *)((longlong)DAT_14cbc5630 + 0x1fc) < (int)DAT_14cbc5630[0x3a])) goto LAB_144815de0;
LAB_144815f6c:
    iVar6 = (int)plVar3[0x59];
    uVar14 = *param_1;
    if ((longlong)iVar6 == -1) {
      if (((uVar14 != 0) && (param_1[1] != 0)) && (uVar14 != DAT_14c948000)) {
        puVar7 = &DAT_14c948028;
        goto LAB_144815fa4;
      }
LAB_1448160f1:
      puVar7 = (ulonglong *)((longlong)&DAT_14c948618 + 4);
      uVar14 = (uint)DAT_14c948618;
    }
    else {
      if (((uVar14 == 0) || (uVar5 = param_1[1], uVar5 == 0)) || (uVar14 == DAT_14c948000))
      goto LAB_1448160f1;
      puVar10 = param_1 + 2;
      if (0 < (int)param_1[9]) {
        puVar10 = *(uint **)(param_1 + 6);
      }
      if (1 < (int)uVar5) {
        puVar10 = *(uint **)(param_1 + 6);
      }
      if (uVar5 == 1 && 0 < iVar6) {
        puVar8 = (uint *)&DAT_14c948618;
        if (*(int *)((longlong)plVar3 + 0x2cc) == 1) {
          puVar8 = puVar10;
        }
        uVar14 = *puVar8;
        puVar7 = (ulonglong *)(puVar8 + 1);
      }
      else {
        if ((int)uVar5 <= iVar6) goto LAB_1448160f1;
        puVar7 = (ulonglong *)(puVar10 + (longlong)iVar6 * 3 + 1);
        uVar14 = puVar10[(longlong)iVar6 * 3];
      }
    }
LAB_144815fa4:
    uVar2 = *puVar7;
    uVar15 = uVar2 >> 0x20;
    uVar5 = uVar14;
    if (uVar15 != 0) {
      uVar5 = FUN_144a78877(uVar14,uVar15);
    }
    if ((int)plVar3[0x50] != *(int *)((longlong)plVar3 + 0x2ac)) {
      plVar11 = plVar3 + 0x56;
      if ((longlong *)plVar3[0x57] != (longlong *)0x0) {
        plVar11 = (longlong *)plVar3[0x57];
      }
      iVar6 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar3[0x58] - 1U & uVar5) * 4);
      if (iVar6 != -1) {
        plVar11 = plVar3 + 0x4f;
        lVar9 = *plVar11;
        uVar15 = 0;
LAB_144815ffc:
        lVar18 = (longlong)iVar6 * 0x20;
        if ((*(uint *)(lVar9 + lVar18) != uVar14) ||
           (lVar1 = lVar9 + lVar18, *(int *)(lVar1 + 8) != (int)(uVar2 >> 0x20)))
        goto LAB_144816008;
        uVar15 = 0;
        if ((lVar1 != 0) && ((longlong *)(lVar1 + 0x10) != (longlong *)0x0)) {
          lVar9 = *(longlong *)(lVar1 + 0x10);
          if (lVar9 != 0) {
            lVar18 = *(longlong *)(lVar9 + 0x60);
            if (lVar18 != 0) {
              do {
                FUN_144a62e5c(&uStack_40,lVar18 + 0x18,(int)plVar3[0x59],
                              *(undefined4 *)((longlong)plVar3 + 0x2cc));
                if (iStack_38 != 0) {
                  FUN_144a78877(uStack_40 & 0xffffffff,iStack_38);
                }
                iVar6 = FUN_144b0847a(plVar11);
                if (iVar6 == -1) {
                  lVar9 = 0;
                }
                else {
                  lVar9 = (longlong)iVar6 * 0x20 + *plVar11;
                }
                plVar12 = (longlong *)(lVar9 + 0x10);
                if (lVar9 == 0) {
                  plVar12 = (longlong *)0x0;
                }
                lVar9 = *plVar12;
                lVar18 = *(longlong *)(lVar9 + 0x60);
              } while (lVar18 != 0);
            }
            uVar15 = *(ulonglong *)(lVar9 + 0x30);
            uStack_40 = uVar15;
            if (uVar15 != 0) goto LAB_144815ea3;
            FUN_140e43bf0(plVar3,&uStack_40,lVar9);
            uVar15 = uStack_40;
            if (uStack_40 != 0) {
              *(ulonglong *)(lVar9 + 0x30) = uStack_40;
              if (lVar9 != 0) {
                FUN_1407d81de(uStack_40 + 8,lVar9);
              }
              goto LAB_144815ea3;
            }
          }
          goto LAB_144816103;
        }
        goto LAB_144815ea3;
      }
    }
  }
  else {
    cVar4 = (**(code **)(*DAT_14cbc5630 + 0x300))(DAT_14cbc5630);
    if (cVar4 == '\0') goto LAB_144815f6c;
LAB_144815de0:
    puVar10 = (uint *)&DAT_14c948618;
    if (((*param_1 != 0) && (0 < (int)param_1[1])) && (*param_1 != DAT_14c948000)) {
      puVar10 = param_1 + 2;
      if (0 < (int)param_1[9]) {
        puVar10 = *(uint **)(param_1 + 6);
      }
      if (1 < param_1[1]) {
        puVar10 = *(uint **)(param_1 + 6);
      }
    }
    uVar14 = *puVar10;
    uVar5 = puVar10[2];
    uVar13 = uVar14;
    if (uVar5 != 0) {
      uVar13 = uVar5 >> 0xd ^ uVar14 - uVar5;
      uVar16 = uVar13 << 8 ^ (-0x61c88647 - uVar5) - uVar13;
      uVar17 = uVar16 >> 0xd ^ (uVar5 - uVar13) - uVar16;
      uVar13 = uVar17 >> 0xc ^ (uVar13 - uVar16) - uVar17;
      uVar19 = uVar13 << 0x10 ^ (uVar16 - uVar17) - uVar13;
      uVar16 = uVar19 >> 5 ^ (uVar17 - uVar13) - uVar19;
      uVar17 = uVar16 >> 3 ^ (uVar13 - uVar19) - uVar16;
      uVar13 = uVar17 << 10 ^ (uVar19 - uVar16) - uVar17;
      uVar13 = uVar13 >> 0xf ^ uVar16 - (uVar17 + uVar13);
    }
    if ((int)plVar3[0x3a] != *(int *)((longlong)plVar3 + 0x1fc)) {
      plVar11 = plVar3 + 0x40;
      if ((longlong *)plVar3[0x41] != (longlong *)0x0) {
        plVar11 = (longlong *)plVar3[0x41];
      }
      iVar6 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar3[0x42] - 1U & uVar13) * 4);
      if (iVar6 != -1) {
        lVar9 = plVar3[0x39];
        uVar15 = 0;
        do {
          lVar18 = (longlong)iVar6 * 0x20;
          if ((*(uint *)(lVar9 + lVar18) == uVar14) &&
             (lVar1 = lVar9 + lVar18, *(uint *)(lVar1 + 8) == uVar5)) {
            uVar15 = 0;
            if ((lVar1 != 0) && ((ulonglong *)(lVar1 + 0x10) != (ulonglong *)0x0)) {
              uVar15 = *(ulonglong *)(lVar1 + 0x10);
            }
            break;
          }
          iVar6 = *(int *)(lVar9 + 0x18 + lVar18);
        } while (iVar6 != -1);
        goto LAB_144815ea3;
      }
    }
  }
LAB_144816103:
  uVar15 = 0;
LAB_144815ea3:
  if ((uStack_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar15;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_144816008:
  iVar6 = *(int *)(lVar9 + 0x18 + lVar18);
  if (iVar6 == -1) goto LAB_144815ea3;
  goto LAB_144815ffc;
}



// FUNCTION 145bec764 FUN_145bec764 body=22 status=ok
// SIG undefined FUN_145bec764(void)

ulonglong FUN_145bec764(uint *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  ulonglong *puVar7;
  uint *puVar8;
  longlong lVar9;
  uint *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  undefined1 auStack_68 [40];
  ulonglong uStack_40;
  int iStack_38;
  ulonglong uStack_30;
  
  plVar3 = DAT_14cbcb2c0;
  if (DAT_14cbcb2c0 == (longlong *)0x0) {
    return 0;
  }
  uStack_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(code **)(*DAT_14cbcb2c0 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cbcb2c0 + 0x154) & 1) != 0) &&
       (*(int *)((longlong)DAT_14cbcb2c0 + 0x1fc) < (int)DAT_14cbcb2c0[0x3a])) goto LAB_144815de0;
LAB_144815f6c:
    iVar6 = (int)plVar3[0x59];
    uVar14 = *param_1;
    if ((longlong)iVar6 == -1) {
      if (((uVar14 != 0) && (param_1[1] != 0)) && (uVar14 != DAT_14c948000)) {
        puVar7 = &DAT_14c948028;
        goto LAB_144815fa4;
      }
LAB_1448160f1:
      puVar7 = (ulonglong *)((longlong)&DAT_14c948618 + 4);
      uVar14 = (uint)DAT_14c948618;
    }
    else {
      if (((uVar14 == 0) || (uVar5 = param_1[1], uVar5 == 0)) || (uVar14 == DAT_14c948000))
      goto LAB_1448160f1;
      puVar10 = param_1 + 2;
      if (0 < (int)param_1[9]) {
        puVar10 = *(uint **)(param_1 + 6);
      }
      if (1 < (int)uVar5) {
        puVar10 = *(uint **)(param_1 + 6);
      }
      if (uVar5 == 1 && 0 < iVar6) {
        puVar8 = (uint *)&DAT_14c948618;
        if (*(int *)((longlong)plVar3 + 0x2cc) == 1) {
          puVar8 = puVar10;
        }
        uVar14 = *puVar8;
        puVar7 = (ulonglong *)(puVar8 + 1);
      }
      else {
        if ((int)uVar5 <= iVar6) goto LAB_1448160f1;
        puVar7 = (ulonglong *)(puVar10 + (longlong)iVar6 * 3 + 1);
        uVar14 = puVar10[(longlong)iVar6 * 3];
      }
    }
LAB_144815fa4:
    uVar2 = *puVar7;
    uVar15 = uVar2 >> 0x20;
    uVar5 = uVar14;
    if (uVar15 != 0) {
      uVar5 = FUN_144a78877(uVar14,uVar15);
    }
    if ((int)plVar3[0x50] != *(int *)((longlong)plVar3 + 0x2ac)) {
      plVar11 = plVar3 + 0x56;
      if ((longlong *)plVar3[0x57] != (longlong *)0x0) {
        plVar11 = (longlong *)plVar3[0x57];
      }
      iVar6 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar3[0x58] - 1U & uVar5) * 4);
      if (iVar6 != -1) {
        plVar11 = plVar3 + 0x4f;
        lVar9 = *plVar11;
        uVar15 = 0;
LAB_144815ffc:
        lVar18 = (longlong)iVar6 * 0x20;
        if ((*(uint *)(lVar9 + lVar18) != uVar14) ||
           (lVar1 = lVar9 + lVar18, *(int *)(lVar1 + 8) != (int)(uVar2 >> 0x20)))
        goto LAB_144816008;
        uVar15 = 0;
        if ((lVar1 != 0) && ((longlong *)(lVar1 + 0x10) != (longlong *)0x0)) {
          lVar9 = *(longlong *)(lVar1 + 0x10);
          if (lVar9 != 0) {
            lVar18 = *(longlong *)(lVar9 + 0x60);
            if (lVar18 != 0) {
              do {
                FUN_144a62e5c(&uStack_40,lVar18 + 0x18,(int)plVar3[0x59],
                              *(undefined4 *)((longlong)plVar3 + 0x2cc));
                if (iStack_38 != 0) {
                  FUN_144a78877(uStack_40 & 0xffffffff,iStack_38);
                }
                iVar6 = FUN_144b0847a(plVar11);
                if (iVar6 == -1) {
                  lVar9 = 0;
                }
                else {
                  lVar9 = (longlong)iVar6 * 0x20 + *plVar11;
                }
                plVar12 = (longlong *)(lVar9 + 0x10);
                if (lVar9 == 0) {
                  plVar12 = (longlong *)0x0;
                }
                lVar9 = *plVar12;
                lVar18 = *(longlong *)(lVar9 + 0x60);
              } while (lVar18 != 0);
            }
            uVar15 = *(ulonglong *)(lVar9 + 0x30);
            uStack_40 = uVar15;
            if (uVar15 != 0) goto LAB_144815ea3;
            FUN_140e43bf0(plVar3,&uStack_40,lVar9);
            uVar15 = uStack_40;
            if (uStack_40 != 0) {
              *(ulonglong *)(lVar9 + 0x30) = uStack_40;
              if (lVar9 != 0) {
                FUN_1407d81de(uStack_40 + 8,lVar9);
              }
              goto LAB_144815ea3;
            }
          }
          goto LAB_144816103;
        }
        goto LAB_144815ea3;
      }
    }
  }
  else {
    cVar4 = (**(code **)(*DAT_14cbcb2c0 + 0x300))(DAT_14cbcb2c0);
    if (cVar4 == '\0') goto LAB_144815f6c;
LAB_144815de0:
    puVar10 = (uint *)&DAT_14c948618;
    if (((*param_1 != 0) && (0 < (int)param_1[1])) && (*param_1 != DAT_14c948000)) {
      puVar10 = param_1 + 2;
      if (0 < (int)param_1[9]) {
        puVar10 = *(uint **)(param_1 + 6);
      }
      if (1 < param_1[1]) {
        puVar10 = *(uint **)(param_1 + 6);
      }
    }
    uVar14 = *puVar10;
    uVar5 = puVar10[2];
    uVar13 = uVar14;
    if (uVar5 != 0) {
      uVar13 = uVar5 >> 0xd ^ uVar14 - uVar5;
      uVar16 = uVar13 << 8 ^ (-0x61c88647 - uVar5) - uVar13;
      uVar17 = uVar16 >> 0xd ^ (uVar5 - uVar13) - uVar16;
      uVar13 = uVar17 >> 0xc ^ (uVar13 - uVar16) - uVar17;
      uVar19 = uVar13 << 0x10 ^ (uVar16 - uVar17) - uVar13;
      uVar16 = uVar19 >> 5 ^ (uVar17 - uVar13) - uVar19;
      uVar17 = uVar16 >> 3 ^ (uVar13 - uVar19) - uVar16;
      uVar13 = uVar17 << 10 ^ (uVar19 - uVar16) - uVar17;
      uVar13 = uVar13 >> 0xf ^ uVar16 - (uVar17 + uVar13);
    }
    if ((int)plVar3[0x3a] != *(int *)((longlong)plVar3 + 0x1fc)) {
      plVar11 = plVar3 + 0x40;
      if ((longlong *)plVar3[0x41] != (longlong *)0x0) {
        plVar11 = (longlong *)plVar3[0x41];
      }
      iVar6 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar3[0x42] - 1U & uVar13) * 4);
      if (iVar6 != -1) {
        lVar9 = plVar3[0x39];
        uVar15 = 0;
        do {
          lVar18 = (longlong)iVar6 * 0x20;
          if ((*(uint *)(lVar9 + lVar18) == uVar14) &&
             (lVar1 = lVar9 + lVar18, *(uint *)(lVar1 + 8) == uVar5)) {
            uVar15 = 0;
            if ((lVar1 != 0) && ((ulonglong *)(lVar1 + 0x10) != (ulonglong *)0x0)) {
              uVar15 = *(ulonglong *)(lVar1 + 0x10);
            }
            break;
          }
          iVar6 = *(int *)(lVar9 + 0x18 + lVar18);
        } while (iVar6 != -1);
        goto LAB_144815ea3;
      }
    }
  }
LAB_144816103:
  uVar15 = 0;
LAB_144815ea3:
  if ((uStack_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar15;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_144816008:
  iVar6 = *(int *)(lVar9 + 0x18 + lVar18);
  if (iVar6 == -1) goto LAB_144815ea3;
  goto LAB_144815ffc;
}



// FUNCTION 145bec77a FUN_145bec77a body=57 status=ok
// SIG undefined FUN_145bec77a(void)

void FUN_145bec77a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba8ab0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba8ab0 = FUN_140002ddd(FUN_1465d1526,uVar1,L"OakCharacterMovementDef");
  }
  return;
}



// FUNCTION 145bec7b4 FUN_145bec7b4 body=380 status=ok
// SIG undefined FUN_145bec7b4(void)

void FUN_145bec7b4(longlong param_1,float param_2)

{
  longlong lVar1;
  
  *(float *)(param_1 + 0x4238) = param_2;
  lVar1 = *(longlong *)(param_1 + 0x4210);
  *(float *)(param_1 + 0x423c) =
       (*(float *)(lVar1 + 0x3d8) - *(float *)(lVar1 + 0x2a0)) * param_2 + *(float *)(lVar1 + 0x2a0)
  ;
  *(float *)(param_1 + 0x4240) =
       (*(float *)(lVar1 + 0x3dc) - *(float *)(lVar1 + 0x2a4)) * param_2 + *(float *)(lVar1 + 0x2a4)
  ;
  *(float *)(param_1 + 0x4244) =
       (*(float *)(lVar1 + 0x3e0) - *(float *)(lVar1 + 0x2a8)) * param_2 + *(float *)(lVar1 + 0x2a8)
  ;
  *(float *)(param_1 + 0x4248) =
       (*(float *)(lVar1 + 0x3e4) - *(float *)(lVar1 + 0x2ac)) * param_2 + *(float *)(lVar1 + 0x2ac)
  ;
  *(float *)(param_1 + 0x424c) =
       (*(float *)(lVar1 + 1000) - *(float *)(lVar1 + 0x2b0)) * param_2 + *(float *)(lVar1 + 0x2b0);
  *(float *)(param_1 + 0x4250) =
       (*(float *)(lVar1 + 0x3ec) - *(float *)(lVar1 + 0x2b4)) * param_2 + *(float *)(lVar1 + 0x2b4)
  ;
  *(float *)(param_1 + 0x4254) =
       (*(float *)(lVar1 + 0x3f0) - *(float *)(lVar1 + 0x2b8)) * param_2 + *(float *)(lVar1 + 0x2b8)
  ;
  *(float *)(param_1 + 0x4258) =
       (*(float *)(lVar1 + 0x3f4) - *(float *)(lVar1 + 700)) * param_2 + *(float *)(lVar1 + 700);
  *(float *)(param_1 + 0x425c) =
       (*(float *)(lVar1 + 0x3f8) - *(float *)(lVar1 + 0x2c0)) * param_2 + *(float *)(lVar1 + 0x2c0)
  ;
  *(float *)(param_1 + 0x4260) =
       (*(float *)(lVar1 + 0x3fc) - *(float *)(lVar1 + 0x2c4)) * param_2 + *(float *)(lVar1 + 0x2c4)
  ;
  FUN_145bec930();
  return;
}



// FUNCTION 145bec930 FUN_145bec930 body=274 status=ok
// SIG undefined FUN_145bec930(void)

void FUN_145bec930(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x4210) != 0) {
    *(undefined4 *)(param_1 + 0x45d0) = *(undefined4 *)(param_1 + 0x4260);
    FUN_14020a6cc(param_1 + 0x45c8,1);
    FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x38),0x18);
    *(undefined4 *)(param_1 + 0x45dc) = *(undefined4 *)(param_1 + 0x424c);
    FUN_14020a6cc(param_1 + 0x45d4,1);
    FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x38),0x19);
    *(undefined4 *)(param_1 + 0x45e8) = *(undefined4 *)(param_1 + 0x4250);
    FUN_14020a6cc(param_1 + 0x45e0,1);
    FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x38),0x1a);
    *(undefined4 *)(param_1 + 0x45f4) = *(undefined4 *)(param_1 + 0x4258);
    FUN_14020a6cc(param_1 + 0x45ec,1);
    FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x38),0x1b);
    *(undefined4 *)(param_1 + 0x4600) = *(undefined4 *)(param_1 + 0x425c);
    FUN_14020a6cc(param_1 + 0x45f8,1);
    FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x38),0x1c);
    return;
  }
  return;
}



// FUNCTION 145beca42 FUN_145beca42 body=846 status=ok
// SIG undefined FUN_145beca42(void)

void FUN_145beca42(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  longlong lStack_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar9 = param_1 + 0x40;
  FUN_14485c47a(lVar9);
  cVar2 = FUN_144729dda(lVar9);
  if (cVar2 != '\0') {
    lVar3 = FUN_14479d2ce(lVar9);
    if (*(longlong *)(lVar3 + 0x4210) != 0) {
      local_68 = *(undefined8 *)(*(longlong *)(lVar3 + 0x4210) + 0x580);
      FUN_1446dcdd4(&local_60);
      if (DAT_14cb7d760 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = FUN_144837462(DAT_14cb7d760,&local_60);
      }
      if (lStack_48 != 0) {
        FUN_1400020a8();
      }
      if (lVar3 != 0) {
        lVar4 = FUN_14479d2ce(lVar9);
        plVar6 = *(longlong **)(lVar4 + 0x1f0);
        if (plVar6 != (longlong *)0x0) {
          uVar5 = FUN_1403c7982();
          plVar6 = (longlong *)(**(code **)(*plVar6 + 0x288))(plVar6,uVar5);
          if (plVar6 != (longlong *)0x0) {
            uVar5 = FUN_1403c7982();
            plVar7 = (longlong *)FUN_144718840(plVar6,uVar5);
            if ((plVar6 != plVar7) && (plVar7 != (longlong *)0x0)) {
              cVar2 = FUN_14075fd82(param_1);
              if (cVar2 != '\0') {
                uVar5 = (**(code **)(*plVar7 + 0x10))(plVar7);
                FUN_14036c7e6(uVar5,&local_60,lVar3,1);
                *(undefined8 *)(param_1 + 0x58) = local_50;
                *(longlong *)(param_1 + 0x60) = lStack_48;
                *(undefined4 *)(param_1 + 0x48) = (undefined4)local_60;
                *(undefined4 *)(param_1 + 0x4c) = local_60._4_4_;
                *(undefined4 *)(param_1 + 0x50) = uStack_58;
                *(undefined4 *)(param_1 + 0x54) = uStack_54;
              }
              lVar3 = param_1 + 0x48;
              cVar2 = FUN_14486ea84(lVar3);
              if (cVar2 != '\0') {
                if (*(longlong *)(param_1 + 0x68) == 0) {
                  lVar8 = FUN_14008e0ae(lVar3);
                  lVar4 = FUN_14479d2ce(lVar9);
                  uVar5 = *(undefined8 *)(lVar4 + 0x1f0);
                  local_60 = (undefined8 *)0x0;
                  uStack_58 = 0;
                  FUN_1446efa72(&local_60,0,3,0x10);
                  puVar1 = local_60;
                  uStack_58 = 3;
                  *local_60 = &PTR_LAB_14b3f7890;
                  LOCK();
                  UNLOCK();
                  lVar10 = DAT_14c758608 + 1;
                  lVar4 = DAT_14c758608 + 1;
                  if (lVar10 == 0) {
                    LOCK();
                    UNLOCK();
                    lVar10 = DAT_14c758608 + 2;
                    lVar4 = DAT_14c758608 + 2;
                  }
                  DAT_14c758608 = lVar4;
                  local_60[2] = lVar10;
                  *local_60 = &PTR_FUN_14b9dc400;
                  local_60[3] = 0;
                  FUN_14485c47a(local_60 + 3,uVar5);
                  puVar1[4] = param_1;
                  FUN_14036a282(lVar8 + 0x168,&local_68,&local_60);
                  FUN_1449db362(&local_60);
                  *(undefined8 *)(param_1 + 0x68) = local_68;
                }
                if (*(longlong *)(param_1 + 0x70) == 0) {
                  lVar3 = FUN_14008e0ae(lVar3);
                  lVar9 = FUN_14479d2ce(lVar9);
                  uVar5 = *(undefined8 *)(lVar9 + 0x1f0);
                  local_60 = (undefined8 *)0x0;
                  uStack_58 = 0;
                  FUN_1446efa72(&local_60,0,3,0x10);
                  puVar1 = local_60;
                  uStack_58 = 3;
                  *local_60 = &PTR_LAB_14b3f7890;
                  LOCK();
                  UNLOCK();
                  lVar4 = DAT_14c758608 + 1;
                  lVar9 = DAT_14c758608 + 1;
                  if (lVar4 == 0) {
                    LOCK();
                    UNLOCK();
                    lVar4 = DAT_14c758608 + 2;
                    lVar9 = DAT_14c758608 + 2;
                  }
                  DAT_14c758608 = lVar9;
                  local_60[2] = lVar4;
                  *local_60 = &PTR_FUN_14b9dc470;
                  local_60[3] = 0;
                  FUN_14485c47a(local_60 + 3,uVar5);
                  puVar1[4] = param_1;
                  FUN_14036a282(lVar3 + 0x180,&local_68,&local_60);
                  FUN_1449db362(&local_60);
                  *(undefined8 *)(param_1 + 0x70) = local_68;
                }
              }
            }
          }
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145becd92 FUN_145becd92 body=2581 status=ok
// SIG undefined FUN_145becd92(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_145becd92(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  longlong *local_b0;
  longlong local_a8;
  undefined4 *local_a0;
  longlong local_98 [2];
  undefined4 local_88;
  undefined4 local_7c;
  longlong *local_78;
  longlong local_70;
  longlong local_68;
  undefined4 local_60;
  undefined4 local_5c;
  longlong *local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *(longlong *)(param_1 + 0x1cf0) = param_2;
  local_58 = (longlong *)0x0;
  local_50 = (longlong *)((ulonglong)local_50 & 0xffffffff00000000);
  FUN_1446efa72(&local_58,0,3,0x10);
  plVar7 = local_58;
  local_50 = (longlong *)CONCAT44(local_50._4_4_,3);
  *local_58 = (longlong)&PTR_LAB_14b3e6310;
  LOCK();
  UNLOCK();
  lVar8 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar8 == 0) {
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  local_58[2] = lVar8;
  *local_58 = (longlong)&PTR_FUN_14b3f4e90;
  local_58[3] = 0;
  FUN_14485c47a(local_58 + 3,param_1);
  plVar7[4] = (longlong)FUN_1414cd4ac;
  *(undefined4 *)(plVar7 + 5) = 0;
  FUN_144a450dc((longlong *)(param_1 + 0x35a8),&local_58);
  FUN_1449db362(&local_58);
  if ((*(int *)(param_1 + 0x35b0) == 0) ||
     (plVar7 = *(longlong **)(param_1 + 0x35a8), plVar7 == (longlong *)0x0)) {
    plVar7 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar7 + 0x38))(plVar7,&local_58);
    plVar7 = local_58;
  }
  *(longlong **)(param_1 + 0x35b8) = plVar7;
  local_7c = 0;
  if ((*(longlong *)(&DAT_00001ce8 + param_1) != 0) &&
     (lVar5 = *(longlong *)(*(longlong *)(&DAT_00001ce8 + param_1) + 0x13f8), lVar5 != 0)) {
    local_7c = FUN_1414dbaea(lVar5,1);
  }
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0x310) = *(undefined4 *)(param_2 + 0x20);
    FUN_1414db610(param_1,2,param_2 + 0x100);
    FUN_1414db610(param_1,4,param_2 + 0x148);
    FUN_1414db610(param_1,8,param_2 + 400);
    FUN_1414db610(param_1,0x10,param_2 + 0x1d8);
  }
  lVar5 = FUN_145bed7ba();
  if ((lVar5 != 0) && (*(longlong *)(param_1 + 0x1cf0) != 0)) {
    local_78 = *(longlong **)(*(longlong *)(param_1 + 0x1cf0) + 0x50);
    FUN_1446dcdd4(&local_58);
    lVar5 = thunk_FUN_144815d88(lVar5,&local_58);
    *(longlong *)(param_1 + 0x1f00) = lVar5;
    if (local_40 != 0) {
      FUN_1400020a8();
      lVar5 = *(longlong *)(param_1 + 0x1f00);
    }
    if (lVar5 != 0) {
      uVar6 = FUN_14050fd64();
      local_b8 = 0;
      FUN_14088df30(uVar6,&local_58,*(undefined8 *)(param_1 + 0x1f00),local_7c);
      plVar7 = local_50;
      if ((longlong **)(param_1 + 0x2ba0) != &local_58) {
        *(longlong **)(param_1 + 0x2ba0) = local_58;
        local_58 = (longlong *)0x0;
        plVar2 = *(longlong **)(param_1 + 0x2ba8);
        if (local_50 != plVar2) {
          local_50 = (longlong *)0x0;
          *(longlong **)(param_1 + 0x2ba8) = plVar7;
          if (plVar2 != (longlong *)0x0) {
            LOCK();
            plVar7 = plVar2 + 1;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)*plVar7 == 0) {
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
        }
      }
      plVar7 = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_50 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
      local_58 = (longlong *)0x0;
      local_50 = (longlong *)((ulonglong)local_50 & 0xffffffff00000000);
      FUN_1446efa72(&local_58,0,3,0x10);
      plVar7 = local_58;
      local_50 = (longlong *)CONCAT44(local_50._4_4_,3);
      *local_58 = (longlong)&PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 1;
      lVar5 = DAT_14c758608 + 1;
      if (lVar8 == 0) {
        LOCK();
        UNLOCK();
        lVar8 = DAT_14c758608 + 2;
        lVar5 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar5;
      local_58[2] = lVar8;
      *local_58 = (longlong)&PTR_FUN_14b3f4f00;
      local_58[3] = 0;
      FUN_14485c47a(local_58 + 3,param_1);
      *(undefined4 *)(plVar7 + 5) = 0;
      plVar7[4] = (longlong)&LAB_143cde6a8;
      uVar6 = *(undefined8 *)(param_1 + 0x2ba0);
      local_98[1] = 0;
      local_88 = 0;
      FUN_14009d848(local_98 + 1,&local_58);
      FUN_140844560(uVar6,&local_78,local_98 + 1);
      *(longlong **)(param_1 + 0x2b98) = local_78;
      FUN_1449db362(&local_58);
    }
  }
  lVar8 = FUN_1414dbae2();
  local_98[0] = FUN_145bed7c2();
  lVar5 = local_40;
  if (((lVar8 != 0) && (local_98[0] != 0)) && (*(longlong *)(param_1 + 0x1cf0) != 0)) {
    local_b0 = local_98;
    local_a0 = &local_7c;
    local_a8 = param_1;
    FUN_1414dbb42(&local_b0,*(longlong *)(param_1 + 0x1cf0) + 0x68,&DAT_14caa8578);
    lVar8 = *(longlong *)(param_1 + 0x1cf0);
    local_70 = lVar8 + 0x90;
    local_78 = (longlong *)&DAT_100000000;
    local_68 = 0xffffffff;
    local_60 = 0;
    if (*(int *)(lVar8 + 0xa8) != 0) {
      FUN_1449c0562(&local_78);
    }
    local_40 = local_68;
    lVar5 = local_40;
    local_38 = local_60;
    local_34 = local_5c;
    local_50 = local_78;
    local_48 = local_70;
    local_40._4_4_ = (int)((ulonglong)local_68 >> 0x20);
    local_58 = (longlong *)(lVar8 + 0x80);
    if (local_40._4_4_ < *(int *)(local_70 + 0x18)) {
      iVar4 = local_40._4_4_;
      local_40 = lVar5;
      do {
        FUN_1414dbb42(&local_b0,*local_58 + (longlong)iVar4 * 0x28 + 8,
                      *local_58 + (longlong)iVar4 * 0x28);
        local_40 = CONCAT44(local_40._4_4_,(uint)local_40 & ~local_50._4_4_);
        FUN_1449c0562(&local_50);
        iVar4 = local_40._4_4_;
        lVar5 = local_40;
      } while (local_40._4_4_ < *(int *)(local_48 + 0x18));
    }
  }
  local_40 = lVar5;
  lVar5 = FUN_144a8a77c();
  if ((lVar5 != 0) && (*(longlong *)(param_1 + 0x1cf0) != 0)) {
    local_78 = *(longlong **)(*(longlong *)(param_1 + 0x1cf0) + 0xd0);
    FUN_1446dcdd4(&local_58);
    lVar5 = thunk_FUN_144815d88(lVar5,&local_58);
    *(longlong *)(param_1 + 0x1ea0) = lVar5;
    if (local_40 != 0) {
      FUN_1400020a8();
      lVar5 = *(longlong *)(param_1 + 0x1ea0);
    }
    if (lVar5 != 0) {
      uVar6 = FUN_14050fd64();
      local_b8 = 0;
      FUN_14088df30(uVar6,&local_58,*(undefined8 *)(param_1 + 0x1ea0),local_7c);
      plVar7 = local_50;
      if ((longlong **)(param_1 + 0x1ea8) != &local_58) {
        *(longlong **)(param_1 + 0x1ea8) = local_58;
        local_58 = (longlong *)0x0;
        plVar2 = *(longlong **)(param_1 + 0x1eb0);
        if (local_50 != plVar2) {
          local_50 = (longlong *)0x0;
          *(longlong **)(param_1 + 0x1eb0) = plVar7;
          if (plVar2 != (longlong *)0x0) {
            LOCK();
            plVar7 = plVar2 + 1;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)*plVar7 == 0) {
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
        }
      }
      plVar7 = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_50 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
      FUN_1414db610(param_1,1,*(longlong *)(param_1 + 0x1ea0) + 0x48);
      FUN_1414db610(param_1,0x20,*(longlong *)(param_1 + 0x1ea0) + 0x90);
    }
  }
  if (*(longlong **)(param_1 + 0x1eb8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1eb8) + 8))();
  }
  if (*(longlong *)(param_1 + 0x1cf0) != 0) {
    *(undefined4 *)(param_1 + 0x1ddc) = *(undefined4 *)(*(longlong *)(param_1 + 0x1cf0) + 0x228);
    FUN_14020a6cc(param_1 + 0x1dd4,1);
    FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x38),6);
    *(undefined4 *)(param_1 + 0x1de8) = *(undefined4 *)(*(longlong *)(param_1 + 0x1cf0) + 0x22c);
    FUN_14020a6cc(param_1 + 0x1de0,1);
    FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x38),7);
  }
  lVar8 = FUN_145bed7ca();
  lVar5 = *(longlong *)(param_1 + 0x1cf0);
  if (lVar8 != 0) {
    if (lVar5 == 0) {
      *(undefined4 *)(param_1 + 0x3b80) = 0x3dcccccd;
      *(undefined8 *)(param_1 + 0x3b88) = 0x3ff0000000000000;
      *(undefined8 *)(param_1 + 0x3b90) = 0x3ff0000000000000;
      *(undefined8 *)(param_1 + 0x3b98) = 0;
      goto LAB_145bed5cf;
    }
    local_78 = *(longlong **)(lVar5 + 0xe8);
    FUN_1446dcdd4(&local_58);
    lVar5 = thunk_FUN_144815d88(lVar8,&local_58);
    *(longlong *)(param_1 + 0x3b58) = lVar5;
    if (local_40 != 0) {
      FUN_1400020a8();
      lVar5 = *(longlong *)(param_1 + 0x3b58);
    }
    *(longlong *)(param_1 + 0x3b60) = lVar5;
    if (lVar5 != 0) {
      uVar6 = FUN_14050fd64();
      local_b8 = 0;
      FUN_14088df30(uVar6,&local_58,*(undefined8 *)(param_1 + 0x3b58),local_7c);
      plVar7 = local_50;
      if ((longlong **)(param_1 + 0x3b70) != &local_58) {
        *(longlong **)(param_1 + 0x3b70) = local_58;
        local_58 = (longlong *)0x0;
        plVar2 = *(longlong **)(param_1 + 0x3b78);
        if (local_50 != plVar2) {
          local_50 = (longlong *)0x0;
          *(longlong **)(param_1 + 0x3b78) = plVar7;
          if (plVar2 != (longlong *)0x0) {
            LOCK();
            plVar7 = plVar2 + 1;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)*plVar7 == 0) {
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
        }
      }
      plVar7 = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_50 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
    }
    FUN_145bed826(param_1);
    lVar5 = *(longlong *)(param_1 + 0x1cf0);
  }
  *(undefined4 *)(param_1 + 0x3b80) = 0x3dcccccd;
  *(undefined8 *)(param_1 + 0x3b88) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0x3b90) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0x3b98) = 0;
  if (lVar5 == 0) goto LAB_145bed5cf;
  lVar8 = *(longlong *)(lVar5 + 0x30);
  if (lVar8 == 0) {
    uVar6 = FUN_14184ff62();
    lVar8 = FUN_14477b664(uVar6);
    *(longlong *)(lVar5 + 0x30) = lVar8;
  }
  if (*(longlong *)(lVar5 + 0x38) == 0) {
    if ((lVar8 == 0) || (*(longlong *)(lVar5 + 0x28) == 0)) goto LAB_145bed5cf;
    plVar7 = *(longlong **)(lVar8 + 0xb8);
    if (plVar7 != (longlong *)0x0) {
      cVar3 = (**(code **)(*plVar7 + 0x108))(plVar7);
      if (cVar3 != '\0') {
        uVar6 = (**(code **)(*plVar7 + 0x110))(plVar7);
        lVar8 = FUN_144aff482(uVar6,(longlong *)(lVar5 + 0x28));
        *(longlong *)(lVar5 + 0x38) = lVar8;
        if (lVar8 == 0) goto LAB_145bed5cf;
        goto LAB_145bed5b5;
      }
    }
    *(undefined8 *)(lVar5 + 0x38) = 0;
  }
  else {
LAB_145bed5b5:
    FUN_145bed7d2(param_1 + 0x2c00,*(longlong *)(param_1 + 0x1cf0) + 0x28);
  }
LAB_145bed5cf:
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bed7a8 thunk_FUN_144815d88 body=5 status=ok
// SIG undefined thunk_FUN_144815d88(void)

ulonglong thunk_FUN_144815d88(longlong *param_1,uint *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  ulonglong *puVar6;
  uint *puVar7;
  longlong lVar8;
  uint *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  undefined1 auStack_68 [40];
  ulonglong uStack_40;
  int iStack_38;
  ulonglong uStack_30;
  
  uStack_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(code **)(*param_1 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)param_1 + 0x154) & 1) != 0) &&
       (*(int *)((longlong)param_1 + 0x1fc) < (int)param_1[0x3a])) goto LAB_144815de0;
LAB_144815f6c:
    iVar5 = (int)param_1[0x59];
    uVar13 = *param_2;
    if ((longlong)iVar5 == -1) {
      if (((uVar13 != 0) && (param_2[1] != 0)) && (uVar13 != DAT_14c948000)) {
        puVar6 = &DAT_14c948028;
        goto LAB_144815fa4;
      }
LAB_1448160f1:
      puVar6 = (ulonglong *)((longlong)&DAT_14c948618 + 4);
      uVar13 = (uint)DAT_14c948618;
    }
    else {
      if (((uVar13 == 0) || (uVar4 = param_2[1], uVar4 == 0)) || (uVar13 == DAT_14c948000))
      goto LAB_1448160f1;
      puVar9 = param_2 + 2;
      if (0 < (int)param_2[9]) {
        puVar9 = *(uint **)(param_2 + 6);
      }
      if (1 < (int)uVar4) {
        puVar9 = *(uint **)(param_2 + 6);
      }
      if (uVar4 == 1 && 0 < iVar5) {
        puVar7 = (uint *)&DAT_14c948618;
        if (*(int *)((longlong)param_1 + 0x2cc) == 1) {
          puVar7 = puVar9;
        }
        uVar13 = *puVar7;
        puVar6 = (ulonglong *)(puVar7 + 1);
      }
      else {
        if ((int)uVar4 <= iVar5) goto LAB_1448160f1;
        puVar6 = (ulonglong *)(puVar9 + (longlong)iVar5 * 3 + 1);
        uVar13 = puVar9[(longlong)iVar5 * 3];
      }
    }
LAB_144815fa4:
    uVar2 = *puVar6;
    uVar14 = uVar2 >> 0x20;
    uVar4 = uVar13;
    if (uVar14 != 0) {
      uVar4 = FUN_144a78877(uVar13,uVar14);
    }
    if ((int)param_1[0x50] != *(int *)((longlong)param_1 + 0x2ac)) {
      plVar10 = param_1 + 0x56;
      if ((longlong *)param_1[0x57] != (longlong *)0x0) {
        plVar10 = (longlong *)param_1[0x57];
      }
      iVar5 = *(int *)((longlong)plVar10 + (ulonglong)((int)param_1[0x58] - 1U & uVar4) * 4);
      if (iVar5 != -1) {
        plVar10 = param_1 + 0x4f;
        lVar8 = *plVar10;
        uVar14 = 0;
LAB_144815ffc:
        lVar17 = (longlong)iVar5 * 0x20;
        if ((*(uint *)(lVar8 + lVar17) != uVar13) ||
           (lVar1 = lVar8 + lVar17, *(int *)(lVar1 + 8) != (int)(uVar2 >> 0x20)))
        goto LAB_144816008;
        uVar14 = 0;
        if ((lVar1 != 0) && ((longlong *)(lVar1 + 0x10) != (longlong *)0x0)) {
          lVar8 = *(longlong *)(lVar1 + 0x10);
          if (lVar8 != 0) {
            lVar17 = *(longlong *)(lVar8 + 0x60);
            if (lVar17 != 0) {
              do {
                FUN_144a62e5c(&uStack_40,lVar17 + 0x18,(int)param_1[0x59],
                              *(undefined4 *)((longlong)param_1 + 0x2cc));
                if (iStack_38 != 0) {
                  FUN_144a78877(uStack_40 & 0xffffffff,iStack_38);
                }
                iVar5 = FUN_144b0847a(plVar10);
                if (iVar5 == -1) {
                  lVar8 = 0;
                }
                else {
                  lVar8 = (longlong)iVar5 * 0x20 + *plVar10;
                }
                plVar11 = (longlong *)(lVar8 + 0x10);
                if (lVar8 == 0) {
                  plVar11 = (longlong *)0x0;
                }
                lVar8 = *plVar11;
                lVar17 = *(longlong *)(lVar8 + 0x60);
              } while (lVar17 != 0);
            }
            uVar14 = *(ulonglong *)(lVar8 + 0x30);
            uStack_40 = uVar14;
            if (uVar14 != 0) goto LAB_144815ea3;
            FUN_140e43bf0(param_1,&uStack_40,lVar8);
            uVar14 = uStack_40;
            if (uStack_40 != 0) {
              *(ulonglong *)(lVar8 + 0x30) = uStack_40;
              if (lVar8 != 0) {
                FUN_1407d81de(uStack_40 + 8,lVar8);
              }
              goto LAB_144815ea3;
            }
          }
          goto LAB_144816103;
        }
        goto LAB_144815ea3;
      }
    }
  }
  else {
    cVar3 = (**(code **)(*param_1 + 0x300))(param_1);
    if (cVar3 == '\0') goto LAB_144815f6c;
LAB_144815de0:
    puVar9 = (uint *)&DAT_14c948618;
    if (((*param_2 != 0) && (0 < (int)param_2[1])) && (*param_2 != DAT_14c948000)) {
      puVar9 = param_2 + 2;
      if (0 < (int)param_2[9]) {
        puVar9 = *(uint **)(param_2 + 6);
      }
      if (1 < param_2[1]) {
        puVar9 = *(uint **)(param_2 + 6);
      }
    }
    uVar13 = *puVar9;
    uVar4 = puVar9[2];
    uVar12 = uVar13;
    if (uVar4 != 0) {
      uVar12 = uVar4 >> 0xd ^ uVar13 - uVar4;
      uVar15 = uVar12 << 8 ^ (-0x61c88647 - uVar4) - uVar12;
      uVar16 = uVar15 >> 0xd ^ (uVar4 - uVar12) - uVar15;
      uVar12 = uVar16 >> 0xc ^ (uVar12 - uVar15) - uVar16;
      uVar18 = uVar12 << 0x10 ^ (uVar15 - uVar16) - uVar12;
      uVar15 = uVar18 >> 5 ^ (uVar16 - uVar12) - uVar18;
      uVar16 = uVar15 >> 3 ^ (uVar12 - uVar18) - uVar15;
      uVar12 = uVar16 << 10 ^ (uVar18 - uVar15) - uVar16;
      uVar12 = uVar12 >> 0xf ^ uVar15 - (uVar16 + uVar12);
    }
    if ((int)param_1[0x3a] != *(int *)((longlong)param_1 + 0x1fc)) {
      plVar10 = param_1 + 0x40;
      if ((longlong *)param_1[0x41] != (longlong *)0x0) {
        plVar10 = (longlong *)param_1[0x41];
      }
      iVar5 = *(int *)((longlong)plVar10 + (ulonglong)((int)param_1[0x42] - 1U & uVar12) * 4);
      if (iVar5 != -1) {
        lVar8 = param_1[0x39];
        uVar14 = 0;
        do {
          lVar17 = (longlong)iVar5 * 0x20;
          if ((*(uint *)(lVar8 + lVar17) == uVar13) &&
             (lVar1 = lVar8 + lVar17, *(uint *)(lVar1 + 8) == uVar4)) {
            uVar14 = 0;
            if ((lVar1 != 0) && ((ulonglong *)(lVar1 + 0x10) != (ulonglong *)0x0)) {
              uVar14 = *(ulonglong *)(lVar1 + 0x10);
            }
            break;
          }
          iVar5 = *(int *)(lVar8 + 0x18 + lVar17);
        } while (iVar5 != -1);
        goto LAB_144815ea3;
      }
    }
  }
LAB_144816103:
  uVar14 = 0;
LAB_144815ea3:
  if ((uStack_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar14;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_144816008:
  iVar5 = *(int *)(lVar8 + 0x18 + lVar17);
  if (iVar5 == -1) goto LAB_144815ea3;
  goto LAB_144815ffc;
}



// FUNCTION 145bed7ae thunk_FUN_144815d88 body=5 status=ok
// SIG undefined thunk_FUN_144815d88(void)

ulonglong thunk_FUN_144815d88(longlong *param_1,uint *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  ulonglong *puVar6;
  uint *puVar7;
  longlong lVar8;
  uint *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  undefined1 auStack_68 [40];
  ulonglong uStack_40;
  int iStack_38;
  ulonglong uStack_30;
  
  uStack_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(code **)(*param_1 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)param_1 + 0x154) & 1) != 0) &&
       (*(int *)((longlong)param_1 + 0x1fc) < (int)param_1[0x3a])) goto LAB_144815de0;
LAB_144815f6c:
    iVar5 = (int)param_1[0x59];
    uVar13 = *param_2;
    if ((longlong)iVar5 == -1) {
      if (((uVar13 != 0) && (param_2[1] != 0)) && (uVar13 != DAT_14c948000)) {
        puVar6 = &DAT_14c948028;
        goto LAB_144815fa4;
      }
LAB_1448160f1:
      puVar6 = (ulonglong *)((longlong)&DAT_14c948618 + 4);
      uVar13 = (uint)DAT_14c948618;
    }
    else {
      if (((uVar13 == 0) || (uVar4 = param_2[1], uVar4 == 0)) || (uVar13 == DAT_14c948000))
      goto LAB_1448160f1;
      puVar9 = param_2 + 2;
      if (0 < (int)param_2[9]) {
        puVar9 = *(uint **)(param_2 + 6);
      }
      if (1 < (int)uVar4) {
        puVar9 = *(uint **)(param_2 + 6);
      }
      if (uVar4 == 1 && 0 < iVar5) {
        puVar7 = (uint *)&DAT_14c948618;
        if (*(int *)((longlong)param_1 + 0x2cc) == 1) {
          puVar7 = puVar9;
        }
        uVar13 = *puVar7;
        puVar6 = (ulonglong *)(puVar7 + 1);
      }
      else {
        if ((int)uVar4 <= iVar5) goto LAB_1448160f1;
        puVar6 = (ulonglong *)(puVar9 + (longlong)iVar5 * 3 + 1);
        uVar13 = puVar9[(longlong)iVar5 * 3];
      }
    }
LAB_144815fa4:
    uVar2 = *puVar6;
    uVar14 = uVar2 >> 0x20;
    uVar4 = uVar13;
    if (uVar14 != 0) {
      uVar4 = FUN_144a78877(uVar13,uVar14);
    }
    if ((int)param_1[0x50] != *(int *)((longlong)param_1 + 0x2ac)) {
      plVar10 = param_1 + 0x56;
      if ((longlong *)param_1[0x57] != (longlong *)0x0) {
        plVar10 = (longlong *)param_1[0x57];
      }
      iVar5 = *(int *)((longlong)plVar10 + (ulonglong)((int)param_1[0x58] - 1U & uVar4) * 4);
      if (iVar5 != -1) {
        plVar10 = param_1 + 0x4f;
        lVar8 = *plVar10;
        uVar14 = 0;
LAB_144815ffc:
        lVar17 = (longlong)iVar5 * 0x20;
        if ((*(uint *)(lVar8 + lVar17) != uVar13) ||
           (lVar1 = lVar8 + lVar17, *(int *)(lVar1 + 8) != (int)(uVar2 >> 0x20)))
        goto LAB_144816008;
        uVar14 = 0;
        if ((lVar1 != 0) && ((longlong *)(lVar1 + 0x10) != (longlong *)0x0)) {
          lVar8 = *(longlong *)(lVar1 + 0x10);
          if (lVar8 != 0) {
            lVar17 = *(longlong *)(lVar8 + 0x60);
            if (lVar17 != 0) {
              do {
                FUN_144a62e5c(&uStack_40,lVar17 + 0x18,(int)param_1[0x59],
                              *(undefined4 *)((longlong)param_1 + 0x2cc));
                if (iStack_38 != 0) {
                  FUN_144a78877(uStack_40 & 0xffffffff,iStack_38);
                }
                iVar5 = FUN_144b0847a(plVar10);
                if (iVar5 == -1) {
                  lVar8 = 0;
                }
                else {
                  lVar8 = (longlong)iVar5 * 0x20 + *plVar10;
                }
                plVar11 = (longlong *)(lVar8 + 0x10);
                if (lVar8 == 0) {
                  plVar11 = (longlong *)0x0;
                }
                lVar8 = *plVar11;
                lVar17 = *(longlong *)(lVar8 + 0x60);
              } while (lVar17 != 0);
            }
            uVar14 = *(ulonglong *)(lVar8 + 0x30);
            uStack_40 = uVar14;
            if (uVar14 != 0) goto LAB_144815ea3;
            FUN_140e43bf0(param_1,&uStack_40,lVar8);
            uVar14 = uStack_40;
            if (uStack_40 != 0) {
              *(ulonglong *)(lVar8 + 0x30) = uStack_40;
              if (lVar8 != 0) {
                FUN_1407d81de(uStack_40 + 8,lVar8);
              }
              goto LAB_144815ea3;
            }
          }
          goto LAB_144816103;
        }
        goto LAB_144815ea3;
      }
    }
  }
  else {
    cVar3 = (**(code **)(*param_1 + 0x300))(param_1);
    if (cVar3 == '\0') goto LAB_144815f6c;
LAB_144815de0:
    puVar9 = (uint *)&DAT_14c948618;
    if (((*param_2 != 0) && (0 < (int)param_2[1])) && (*param_2 != DAT_14c948000)) {
      puVar9 = param_2 + 2;
      if (0 < (int)param_2[9]) {
        puVar9 = *(uint **)(param_2 + 6);
      }
      if (1 < param_2[1]) {
        puVar9 = *(uint **)(param_2 + 6);
      }
    }
    uVar13 = *puVar9;
    uVar4 = puVar9[2];
    uVar12 = uVar13;
    if (uVar4 != 0) {
      uVar12 = uVar4 >> 0xd ^ uVar13 - uVar4;
      uVar15 = uVar12 << 8 ^ (-0x61c88647 - uVar4) - uVar12;
      uVar16 = uVar15 >> 0xd ^ (uVar4 - uVar12) - uVar15;
      uVar12 = uVar16 >> 0xc ^ (uVar12 - uVar15) - uVar16;
      uVar18 = uVar12 << 0x10 ^ (uVar15 - uVar16) - uVar12;
      uVar15 = uVar18 >> 5 ^ (uVar16 - uVar12) - uVar18;
      uVar16 = uVar15 >> 3 ^ (uVar12 - uVar18) - uVar15;
      uVar12 = uVar16 << 10 ^ (uVar18 - uVar15) - uVar16;
      uVar12 = uVar12 >> 0xf ^ uVar15 - (uVar16 + uVar12);
    }
    if ((int)param_1[0x3a] != *(int *)((longlong)param_1 + 0x1fc)) {
      plVar10 = param_1 + 0x40;
      if ((longlong *)param_1[0x41] != (longlong *)0x0) {
        plVar10 = (longlong *)param_1[0x41];
      }
      iVar5 = *(int *)((longlong)plVar10 + (ulonglong)((int)param_1[0x42] - 1U & uVar12) * 4);
      if (iVar5 != -1) {
        lVar8 = param_1[0x39];
        uVar14 = 0;
        do {
          lVar17 = (longlong)iVar5 * 0x20;
          if ((*(uint *)(lVar8 + lVar17) == uVar13) &&
             (lVar1 = lVar8 + lVar17, *(uint *)(lVar1 + 8) == uVar4)) {
            uVar14 = 0;
            if ((lVar1 != 0) && ((ulonglong *)(lVar1 + 0x10) != (ulonglong *)0x0)) {
              uVar14 = *(ulonglong *)(lVar1 + 0x10);
            }
            break;
          }
          iVar5 = *(int *)(lVar8 + 0x18 + lVar17);
        } while (iVar5 != -1);
        goto LAB_144815ea3;
      }
    }
  }
LAB_144816103:
  uVar14 = 0;
LAB_144815ea3:
  if ((uStack_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar14;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_144816008:
  iVar5 = *(int *)(lVar8 + 0x18 + lVar17);
  if (iVar5 == -1) goto LAB_144815ea3;
  goto LAB_144815ffc;
}



// FUNCTION 145bed7b4 thunk_FUN_144815d88 body=5 status=ok
// SIG undefined thunk_FUN_144815d88(void)

ulonglong thunk_FUN_144815d88(longlong *param_1,uint *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  ulonglong *puVar6;
  uint *puVar7;
  longlong lVar8;
  uint *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  undefined1 auStack_68 [40];
  ulonglong uStack_40;
  int iStack_38;
  ulonglong uStack_30;
  
  uStack_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(code **)(*param_1 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)param_1 + 0x154) & 1) != 0) &&
       (*(int *)((longlong)param_1 + 0x1fc) < (int)param_1[0x3a])) goto LAB_144815de0;
LAB_144815f6c:
    iVar5 = (int)param_1[0x59];
    uVar13 = *param_2;
    if ((longlong)iVar5 == -1) {
      if (((uVar13 != 0) && (param_2[1] != 0)) && (uVar13 != DAT_14c948000)) {
        puVar6 = &DAT_14c948028;
        goto LAB_144815fa4;
      }
LAB_1448160f1:
      puVar6 = (ulonglong *)((longlong)&DAT_14c948618 + 4);
      uVar13 = (uint)DAT_14c948618;
    }
    else {
      if (((uVar13 == 0) || (uVar4 = param_2[1], uVar4 == 0)) || (uVar13 == DAT_14c948000))
      goto LAB_1448160f1;
      puVar9 = param_2 + 2;
      if (0 < (int)param_2[9]) {
        puVar9 = *(uint **)(param_2 + 6);
      }
      if (1 < (int)uVar4) {
        puVar9 = *(uint **)(param_2 + 6);
      }
      if (uVar4 == 1 && 0 < iVar5) {
        puVar7 = (uint *)&DAT_14c948618;
        if (*(int *)((longlong)param_1 + 0x2cc) == 1) {
          puVar7 = puVar9;
        }
        uVar13 = *puVar7;
        puVar6 = (ulonglong *)(puVar7 + 1);
      }
      else {
        if ((int)uVar4 <= iVar5) goto LAB_1448160f1;
        puVar6 = (ulonglong *)(puVar9 + (longlong)iVar5 * 3 + 1);
        uVar13 = puVar9[(longlong)iVar5 * 3];
      }
    }
LAB_144815fa4:
    uVar2 = *puVar6;
    uVar14 = uVar2 >> 0x20;
    uVar4 = uVar13;
    if (uVar14 != 0) {
      uVar4 = FUN_144a78877(uVar13,uVar14);
    }
    if ((int)param_1[0x50] != *(int *)((longlong)param_1 + 0x2ac)) {
      plVar10 = param_1 + 0x56;
      if ((longlong *)param_1[0x57] != (longlong *)0x0) {
        plVar10 = (longlong *)param_1[0x57];
      }
      iVar5 = *(int *)((longlong)plVar10 + (ulonglong)((int)param_1[0x58] - 1U & uVar4) * 4);
      if (iVar5 != -1) {
        plVar10 = param_1 + 0x4f;
        lVar8 = *plVar10;
        uVar14 = 0;
LAB_144815ffc:
        lVar17 = (longlong)iVar5 * 0x20;
        if ((*(uint *)(lVar8 + lVar17) != uVar13) ||
           (lVar1 = lVar8 + lVar17, *(int *)(lVar1 + 8) != (int)(uVar2 >> 0x20)))
        goto LAB_144816008;
        uVar14 = 0;
        if ((lVar1 != 0) && ((longlong *)(lVar1 + 0x10) != (longlong *)0x0)) {
          lVar8 = *(longlong *)(lVar1 + 0x10);
          if (lVar8 != 0) {
            lVar17 = *(longlong *)(lVar8 + 0x60);
            if (lVar17 != 0) {
              do {
                FUN_144a62e5c(&uStack_40,lVar17 + 0x18,(int)param_1[0x59],
                              *(undefined4 *)((longlong)param_1 + 0x2cc));
                if (iStack_38 != 0) {
                  FUN_144a78877(uStack_40 & 0xffffffff,iStack_38);
                }
                iVar5 = FUN_144b0847a(plVar10);
                if (iVar5 == -1) {
                  lVar8 = 0;
                }
                else {
                  lVar8 = (longlong)iVar5 * 0x20 + *plVar10;
                }
                plVar11 = (longlong *)(lVar8 + 0x10);
                if (lVar8 == 0) {
                  plVar11 = (longlong *)0x0;
                }
                lVar8 = *plVar11;
                lVar17 = *(longlong *)(lVar8 + 0x60);
              } while (lVar17 != 0);
            }
            uVar14 = *(ulonglong *)(lVar8 + 0x30);
            uStack_40 = uVar14;
            if (uVar14 != 0) goto LAB_144815ea3;
            FUN_140e43bf0(param_1,&uStack_40,lVar8);
            uVar14 = uStack_40;
            if (uStack_40 != 0) {
              *(ulonglong *)(lVar8 + 0x30) = uStack_40;
              if (lVar8 != 0) {
                FUN_1407d81de(uStack_40 + 8,lVar8);
              }
              goto LAB_144815ea3;
            }
          }
          goto LAB_144816103;
        }
        goto LAB_144815ea3;
      }
    }
  }
  else {
    cVar3 = (**(code **)(*param_1 + 0x300))(param_1);
    if (cVar3 == '\0') goto LAB_144815f6c;
LAB_144815de0:
    puVar9 = (uint *)&DAT_14c948618;
    if (((*param_2 != 0) && (0 < (int)param_2[1])) && (*param_2 != DAT_14c948000)) {
      puVar9 = param_2 + 2;
      if (0 < (int)param_2[9]) {
        puVar9 = *(uint **)(param_2 + 6);
      }
      if (1 < param_2[1]) {
        puVar9 = *(uint **)(param_2 + 6);
      }
    }
    uVar13 = *puVar9;
    uVar4 = puVar9[2];
    uVar12 = uVar13;
    if (uVar4 != 0) {
      uVar12 = uVar4 >> 0xd ^ uVar13 - uVar4;
      uVar15 = uVar12 << 8 ^ (-0x61c88647 - uVar4) - uVar12;
      uVar16 = uVar15 >> 0xd ^ (uVar4 - uVar12) - uVar15;
      uVar12 = uVar16 >> 0xc ^ (uVar12 - uVar15) - uVar16;
      uVar18 = uVar12 << 0x10 ^ (uVar15 - uVar16) - uVar12;
      uVar15 = uVar18 >> 5 ^ (uVar16 - uVar12) - uVar18;
      uVar16 = uVar15 >> 3 ^ (uVar12 - uVar18) - uVar15;
      uVar12 = uVar16 << 10 ^ (uVar18 - uVar15) - uVar16;
      uVar12 = uVar12 >> 0xf ^ uVar15 - (uVar16 + uVar12);
    }
    if ((int)param_1[0x3a] != *(int *)((longlong)param_1 + 0x1fc)) {
      plVar10 = param_1 + 0x40;
      if ((longlong *)param_1[0x41] != (longlong *)0x0) {
        plVar10 = (longlong *)param_1[0x41];
      }
      iVar5 = *(int *)((longlong)plVar10 + (ulonglong)((int)param_1[0x42] - 1U & uVar12) * 4);
      if (iVar5 != -1) {
        lVar8 = param_1[0x39];
        uVar14 = 0;
        do {
          lVar17 = (longlong)iVar5 * 0x20;
          if ((*(uint *)(lVar8 + lVar17) == uVar13) &&
             (lVar1 = lVar8 + lVar17, *(uint *)(lVar1 + 8) == uVar4)) {
            uVar14 = 0;
            if ((lVar1 != 0) && ((ulonglong *)(lVar1 + 0x10) != (ulonglong *)0x0)) {
              uVar14 = *(ulonglong *)(lVar1 + 0x10);
            }
            break;
          }
          iVar5 = *(int *)(lVar8 + 0x18 + lVar17);
        } while (iVar5 != -1);
        goto LAB_144815ea3;
      }
    }
  }
LAB_144816103:
  uVar14 = 0;
LAB_144815ea3:
  if ((uStack_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar14;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_144816008:
  iVar5 = *(int *)(lVar8 + 0x18 + lVar17);
  if (iVar5 == -1) goto LAB_144815ea3;
  goto LAB_144815ffc;
}



// FUNCTION 145bed7ba FUN_145bed7ba body=8 status=ok
// SIG undefined FUN_145bed7ba(void)

undefined8 FUN_145bed7ba(void)

{
  return DAT_14cb85660;
}



// FUNCTION 145bed7c2 FUN_145bed7c2 body=8 status=ok
// SIG undefined FUN_145bed7c2(void)

undefined8 FUN_145bed7c2(void)

{
  return DAT_14cb75da0;
}



// FUNCTION 145bed7ca FUN_145bed7ca body=8 status=ok
// SIG undefined FUN_145bed7ca(void)

undefined8 FUN_145bed7ca(void)

{
  return DAT_14cb75bb8;
}



// FUNCTION 145bed7d2 FUN_145bed7d2 body=84 status=ok
// SIG undefined FUN_145bed7d2(void)

longlong * FUN_145bed7d2(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 145bed826 FUN_145bed826 body=374 status=ok
// SIG undefined FUN_145bed826(void)

void FUN_145bed826(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar1 = *(longlong *)(param_1 + 0x3b60);
  if ((lVar1 != 0) && (*(char *)(param_1 + 0x40f9) == '\x01')) {
    local_38 = *(undefined8 *)(lVar1 + 0xa0);
    uVar2 = FUN_14477b664(*(undefined8 *)(lVar1 + 0xa8));
    local_30 = FUN_14477b664(uVar2);
    local_28 = *(undefined8 *)(lVar1 + 0xb0);
    lVar1 = *(longlong *)(param_1 + 0x3b60);
    if (lVar1 == 0) {
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
    }
    else {
      local_58 = *(undefined8 *)(lVar1 + 0x88);
      uVar2 = FUN_14477b664(*(undefined8 *)(lVar1 + 0x90));
      uStack_50 = FUN_14477b664(uVar2);
      local_48 = *(undefined8 *)(lVar1 + 0x98);
    }
    local_a8 = 0;
    local_a0 = 1;
    FUN_145bed99e(param_1 + 0x3bd0,param_1,&local_58,&local_38);
    local_68 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    local_a0 = 0;
    local_a8 = 0;
    FUN_145bed99e(param_1 + 0x3d80,param_1);
    if (*(longlong *)(param_1 + 0x3b60) != 0) {
      uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x3b60) + 0xc0);
      *(undefined8 *)(param_1 + 0x3d60) = uVar2;
      *(undefined8 *)(param_1 + 0x3f10) = uVar2;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bed99e FUN_145bed99e body=496 status=ok
// SIG undefined FUN_145bed99e(void)

void FUN_145bed99e(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4,
                  char param_5,char param_6)

{
  undefined8 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = param_4;
  if (param_3[1] == 0) {
    uVar5 = FUN_140067708();
    uVar5 = FUN_14477b664(uVar5);
    param_3[1] = uVar5;
  }
  lVar6 = *(longlong *)(param_1 + 0x48);
  if (lVar6 == 0) {
    lVar6 = FUN_140067708();
  }
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  local_60 = (undefined8 *)(param_1 + 0x40);
  uVar7 = FUN_14477b664(lVar6);
  local_50 = uVar5;
  uVar3 = FUN_144a7891a(uVar7);
  local_58 = *param_3;
  uVar5 = param_3[1];
  uVar4 = FUN_144a7891a(uVar5);
  local_78 = uVar7;
  local_70 = &local_50;
  cVar2 = FUN_144a789b8(uVar4,uVar5,&local_58,uVar3);
  puVar1 = local_68;
  if (cVar2 != '\0') {
    if (local_68[1] == 0) {
      uVar5 = FUN_140067708();
      uVar5 = FUN_14477b664(uVar5);
      puVar1[1] = uVar5;
    }
    lVar6 = *(longlong *)(param_1 + 0x60);
    if (lVar6 == 0) {
      lVar6 = FUN_140067708();
    }
    uVar5 = *(undefined8 *)(param_1 + 0x58);
    uVar7 = FUN_14477b664(lVar6);
    local_50 = uVar5;
    uVar3 = FUN_144a7891a(uVar7);
    local_58 = *puVar1;
    uVar5 = puVar1[1];
    uVar4 = FUN_144a7891a(uVar5);
    local_70 = &local_50;
    local_78 = uVar7;
    cVar2 = FUN_144a789b8(uVar4,uVar5,&local_58,uVar3);
    if ((((cVar2 != '\0') && (*(longlong *)(param_1 + 0x38) == param_2)) &&
        (*(char *)(param_1 + 0x70) == param_5)) && (*(char *)(param_1 + 0x198) == param_6))
    goto LAB_145bedb39;
  }
  FUN_14589b8ae(param_1);
  *(undefined4 *)(param_1 + 0x178) = 0xc47a0000;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x38) = param_2;
  FUN_144a7bb84(local_60,param_3);
  FUN_144a7bb84(param_1 + 0x58,puVar1);
  *(char *)(param_1 + 0x70) = param_5;
  *(char *)(param_1 + 0x198) = param_6;
LAB_145bedb39:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145bedb90 FUN_145bedb90 body=1151 status=ok
// SIG undefined FUN_145bedb90(void)

void FUN_145bedb90(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  code *pcVar9;
  undefined1 auStack_88 [40];
  code *local_60;
  int local_58;
  undefined1 local_50 [8];
  code *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = FUN_1400d7050();
  if (lVar2 == 0) goto LAB_145beded2;
  lVar3 = FUN_144a5dd5e();
  if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
      lVar3 + 0x30)) goto LAB_145beded2;
  lVar3 = param_1 + -0x30;
  local_48 = FUN_145ada16a;
  local_40 = 0;
  FUN_145bee028(lVar2 + 0x2338,&local_60,lVar3);
  FUN_1407934de(&local_48,lVar2);
  if (local_48 != (code *)0x0) {
    local_60 = FUN_140fd433a;
    local_58 = 0;
    FUN_145bee128(local_48 + 0x18,local_50,lVar3,&local_60);
    local_60 = FUN_140fb75b2;
    local_58 = 0;
    FUN_145bee30e(local_48 + 0x30,local_50,lVar3,&local_60);
    local_60 = FUN_140fd32dc;
    local_58 = 0;
    FUN_145bee128(local_48 + 0x48,local_50,lVar3,&local_60);
    FUN_1414dbe94(local_48,&local_60);
    if ((longlong)local_58 != 0) {
      lVar5 = (longlong)local_58 * 0x38;
      pcVar9 = local_60;
      do {
        uVar6 = FUN_14479d2ce(pcVar9 + 8);
        FUN_140fd433a(lVar3,pcVar9,uVar6);
        pcVar9 = pcVar9 + 0x38;
        lVar5 = lVar5 + -0x38;
      } while (lVar5 != 0);
    }
    if (local_60 != (code *)0x0) {
      FUN_1400020a8(local_60);
    }
    local_60 = FUN_148e284b8;
    uVar6 = 0;
    local_58 = 0;
    FUN_145bee60a(local_48 + 0x90,local_50,lVar3,&local_60);
    local_60 = FUN_148e286f0;
    local_58 = 0;
    FUN_145bee30e(local_48 + 0xa8,local_50,lVar3,&local_60);
    local_60 = FUN_148e28916;
    local_58 = 0;
    FUN_145bee808(local_48 + 0xc0,local_50,lVar3,&local_60);
    lVar2 = FUN_1402a1246(lVar2);
    if (lVar2 != 0) {
      local_60 = FUN_1459af256;
      local_58 = 0;
      FUN_145bee908(lVar2 + 0xdd0,local_50,lVar3);
    }
    local_60 = FUN_146207016;
    local_58 = 0;
    FUN_145bee510(local_50,lVar3,&local_60);
    local_60 = (code *)&DAT_1411bc958;
    local_58 = 0;
    FUN_145beeae2(local_48 + 0x360,local_50,lVar3,&local_60);
    if (0 < *(int *)(local_48 + 0x380)) {
      uVar6 = **(undefined8 **)(local_48 + 0x378);
    }
    *(undefined8 *)(param_1 + 0x1c8) = uVar6;
    plVar4 = (longlong *)FUN_145bee010();
    if (plVar4 == (longlong *)0x0) {
LAB_145bede13:
      plVar8 = (longlong *)0x0;
    }
    else {
      lVar2 = (**(code **)(*plVar4 + 8))();
      lVar5 = FUN_14086ad12();
      if ((lVar5 == 0) || (*(int *)(lVar2 + 0x38) < *(int *)(lVar5 + 0x38))) goto LAB_145bede13;
      plVar8 = (longlong *)0x0;
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
          lVar5 + 0x30) {
        plVar8 = plVar4;
      }
    }
    *(longlong **)(param_1 + 0x1c0) = plVar8;
    FUN_14142540c(lVar3);
    FUN_1406a3c7a(lVar3);
    (**(code **)(*(longlong *)local_48 + 0x50))(local_48,&local_60);
    if ((longlong)local_58 != 0) {
      lVar2 = (longlong)local_58 << 3;
      pcVar9 = local_60;
      do {
        lVar5 = FUN_14479d2ce(pcVar9);
        if (lVar5 != 0) {
          lVar7 = FUN_144a89a68();
          if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
            FUN_148e284b8(lVar3,lVar5 + 0x30,lVar5 + 200);
          }
        }
        pcVar9 = pcVar9 + 8;
        lVar2 = lVar2 + -8;
      } while (lVar2 != 0);
    }
    if (local_60 != (code *)0x0) {
      FUN_1400020a8(local_60);
    }
    lVar2 = FUN_140495e96(param_1);
    if (lVar2 != 0) {
      lVar5 = FUN_14030d4a0();
      if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8
           ) == lVar5 + 0x30)) {
        local_60 = FUN_145ada058;
        local_58 = 0;
        FUN_145bee028(lVar2 + 0x418,local_50,lVar3);
        FUN_145ada058(lVar3);
      }
    }
  }
  plVar4 = (longlong *)CONCAT44(uStack_3c,local_40);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar4 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
LAB_145beded2:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145bee010 FUN_145bee010 body=24 status=ok
// SIG undefined FUN_145bee010(void)

undefined8 FUN_145bee010(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x198) != '\x01') {
    return 0;
  }
  uVar1 = FUN_14027a618(param_1,param_1 + 0x180);
  return uVar1;
}



// FUNCTION 145bee028 FUN_145bee028 body=254 status=ok
// SIG undefined FUN_145bee028(void)

undefined8
FUN_145bee028(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_149e020b0;
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
  *local_48 = &PTR_FUN_14b9aa7b0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bee128 FUN_145bee128 body=254 status=ok
// SIG undefined FUN_145bee128(void)

undefined8
FUN_145bee128(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b968dc0;
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
  *local_48 = &PTR_FUN_14b9aa820;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145bee228(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bee228 FUN_145bee228 body=216 status=ok
// SIG undefined FUN_145bee228(void)

undefined8 * FUN_145bee228(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145bee30e FUN_145bee30e body=254 status=ok
// SIG undefined FUN_145bee30e(void)

undefined8
FUN_145bee30e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b968e30;
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
  *local_48 = &PTR_FUN_14b9aa890;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145bee40e(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bee40e FUN_145bee40e body=216 status=ok
// SIG undefined FUN_145bee40e(void)

undefined8 * FUN_145bee40e(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145bee510 FUN_145bee510 body=248 status=ok
// SIG undefined FUN_145bee510(void)

undefined8 FUN_145bee510(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar3 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14a1e1a40;
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
  local_40[2] = lVar5;
  *local_40 = &PTR_FUN_14b9aaac0;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_141211c46(&DAT_14c9647a0,param_1,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bee60a FUN_145bee60a body=254 status=ok
// SIG undefined FUN_145bee60a(void)

undefined8
FUN_145bee60a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b9aa970;
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
  *local_48 = &PTR_FUN_14b9aa900;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145bee70a(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bee70a FUN_145bee70a body=216 status=ok
// SIG undefined FUN_145bee70a(void)

undefined8 * FUN_145bee70a(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145bee7f0 FUN_145bee7f0 body=24 status=ok
// SIG undefined FUN_145bee7f0(void)

bool FUN_145bee7f0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 145bee808 FUN_145bee808 body=254 status=ok
// SIG undefined FUN_145bee808(void)

undefined8
FUN_145bee808(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b9abb20;
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
  *local_48 = &PTR_FUN_14b9aa9e0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145a37440(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bee908 FUN_145bee908 body=254 status=ok
// SIG undefined FUN_145bee908(void)

undefined8
FUN_145bee908(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b9a93b0;
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
  *local_48 = &PTR_FUN_14b9aaa50;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145beea08(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145beea08 FUN_145beea08 body=216 status=ok
// SIG undefined FUN_145beea08(void)

undefined8 * FUN_145beea08(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145beeae2 FUN_145beeae2 body=254 status=ok
// SIG undefined FUN_145beeae2(void)

undefined8
FUN_145beeae2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b9a91d0;
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
  *local_48 = &PTR_FUN_14b9aab30;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145beebe2(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145beebe2 FUN_145beebe2 body=216 status=ok
// SIG undefined FUN_145beebe2(void)

undefined8 * FUN_145beebe2(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145beecc6 FUN_145beecc6 body=171 status=ok
// SIG undefined FUN_145beecc6(void)

undefined8 * FUN_145beecc6(undefined8 *param_1)

{
  FUN_145a2d2c6();
  *param_1 = &PTR_FUN_14b593770;
  param_1[5] = &PTR_FUN_14b593c70;
  param_1[0x2d] = &PTR_FUN_14b593cb0;
  param_1[0x86] = &PTR_FUN_14b593ce0;
  param_1[0x8e] = &PTR_FUN_14b593d00;
  param_1[0xa7] = &PTR_FUN_14b593d60;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0xb1) = 0xffffffff;
  FUN_145beed72(param_1,0);
  FUN_1457916ec(param_1,1);
  return param_1;
}



// FUNCTION 145beed72 FUN_145beed72 body=123 status=ok
// SIG undefined FUN_145beed72(void)

void FUN_145beed72(longlong param_1,undefined4 param_2)

{
  char cVar1;
  char cVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_145beedf4();
  thunk_FUN_140e2f50a(param_1,param_2);
  cVar2 = FUN_145beedf4(param_1);
  if (cVar1 != cVar2) {
    FUN_145beeeb4(param_1 + 0x1c8,param_2);
    local_21 = (undefined1)param_2;
    FUN_1447cd2ec(param_1 + 0x1b8);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145beedee thunk_FUN_140e2f50a body=5 status=ok
// SIG undefined thunk_FUN_140e2f50a(void)

void thunk_FUN_140e2f50a(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined1 auStack_78 [32];
  undefined1 uStack_58;
  undefined1 uStack_57;
  undefined8 uStack_50;
  undefined8 uStack_48;
  longlong *plStack_40;
  longlong *plStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  ulonglong uStack_20;
  
  uStack_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 0xdc) != param_2) {
    *(char *)(param_1 + 0xdc) = param_2;
    uStack_28 = DAT_14cab8dc8;
    uStack_30 = DAT_14cab8dc0;
    FUN_140e2f5f4(param_1 + 0x28);
  }
  FUN_140760c2c(param_1,&plStack_40);
  if (plStack_40 != (longlong *)0x0) {
    if ((byte)(param_2 - 1U) < 4) {
      puVar3 = (&PTR_DAT_14a545290)[(byte)(param_2 - 1U)];
    }
    else {
      puVar3 = &DAT_14c96b238;
    }
    uStack_58 = *puVar3;
    uStack_57 = 1;
    uStack_50 = 0;
    uStack_48 = 0;
    (**(code **)(*plStack_40 + 0x1c0))();
  }
  if (plStack_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_38)(plStack_38);
      LOCK();
      piVar2 = (int *)((longlong)plStack_38 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
      }
    }
  }
  if ((uStack_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145beedf4 FUN_145beedf4 body=191 status=ok
// SIG undefined FUN_145beedf4(void)

ulonglong FUN_145beedf4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined7 uVar5;
  ulonglong uVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140760c2c(param_1,&local_28);
  uVar5 = (undefined7)((ulonglong)param_1 >> 8);
  if (local_28 == 0) {
    uVar4 = CONCAT71(uVar5,*(undefined1 *)(param_1 + 0xdc));
  }
  else {
    cVar3 = *(char *)(local_28 + 0x39);
    if (cVar3 == DAT_14c96b238) {
      uVar4 = 0;
    }
    else {
      uVar4 = CONCAT71(uVar5,1);
      if (((cVar3 != DAT_14c96b1e1) && (uVar4 = CONCAT71(uVar5,2), cVar3 != DAT_14c96b23b)) &&
         (uVar4 = CONCAT71(uVar5,3), cVar3 != DAT_14c96b23a)) {
        uVar4 = CONCAT71(uVar5,(cVar3 == DAT_14c96b23c) << 2);
      }
    }
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145beeeb4 FUN_145beeeb4 body=162 status=ok
// SIG undefined FUN_145beeeb4(void)

void FUN_145beeeb4(longlong *param_1,undefined4 param_2)

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
        goto LAB_145beef41;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_145beef41:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 145beef56 FUN_145beef56 body=381 status=ok
// SIG undefined FUN_145beef56(void)

void FUN_145beef56(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145bef0fc();
  lVar5 = FUN_14479d2ce(*(longlong *)(param_1 + 0x40) + 0x48);
  if (lVar5 != 0) {
    lVar3 = *(longlong *)(lVar5 + 0x158);
    plVar7 = *(longlong **)(lVar5 + 0x160);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    if (lVar3 != 0) {
      FUN_145bef0d4(lVar3,param_1);
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
  }
  lVar5 = *(longlong *)(param_1 + 0x48);
  if (*(int *)(lVar5 + 0x358) == 0) {
    lVar3 = *(longlong *)(lVar5 + 0x348);
  }
  else {
    lVar3 = *(longlong *)(lVar5 + 0x350);
  }
  if (lVar3 != 0) {
    local_58 = 0;
    uStack_50 = 0;
    uVar6 = FUN_14479d2ce(*(longlong *)(param_1 + 0x40) + 0x48);
    FUN_1410d0284(uVar6,&local_58);
    lVar3 = local_58;
    lVar8 = (longlong)(int)uStack_50;
    if (lVar8 != 0) {
      lVar9 = 0;
      do {
        if ((*(longlong *)(lVar3 + lVar9) != 0) &&
           (lVar4 = *(longlong *)(*(longlong *)(lVar3 + lVar9) + 0x3d0), lVar4 != 0)) {
          uVar6 = FUN_1407ca880();
          plVar7 = (longlong *)FUN_144718840(lVar4,uVar6);
          if (plVar7 != (longlong *)0x0) {
            uVar6 = FUN_140963804((longlong *)(lVar5 + 0x348),lVar4);
            (**(code **)(*plVar7 + 0x20))(plVar7,uVar6);
          }
        }
        lVar9 = lVar9 + 8;
      } while (lVar8 * 8 != lVar9);
    }
    if (local_58 != 0) {
      FUN_1400020a8(local_58);
    }
  }
  FUN_145bef4ca(param_1);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bef0d4 FUN_145bef0d4 body=39 status=ok
// SIG undefined FUN_145bef0d4(void)

void FUN_145bef0d4(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145bef0f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145bef0fc FUN_145bef0fc body=435 status=ok
// SIG undefined FUN_145bef0fc(void)

void FUN_145bef0fc(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(char *)(param_1[9] + 0x80) != '\0') goto LAB_145bef117;
  lVar2 = FUN_14479d2ce((longlong)param_1 + 0xc4);
  if (((lVar2 != 0) && ((*(uint *)(lVar2 + 8) & 0x18000) == 0)) &&
     ((*(uint *)(lVar2 + 8) >> 0x1e & 1) == 0)) {
    cVar1 = FUN_1432dd8b8(lVar2);
    if (cVar1 == '\0') {
      cVar1 = FUN_1432dd8ac(lVar2);
      if (cVar1 != '\0') goto LAB_145bef23e;
    }
    else {
LAB_145bef23e:
      FUN_146341516(lVar2);
    }
    FUN_1405691ed(lVar2,0x35);
  }
  lVar2 = FUN_14479d2ce((longlong)param_1 + 0xcc);
  if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x65) & 2) == 0)) {
    FUN_140aeefbc(lVar2,0,1);
  }
LAB_145bef117:
  lVar2 = FUN_14479d2ce((longlong)param_1 + 0xcc);
  lVar3 = FUN_14479d2ce((longlong)param_1 + 0xc4);
  if (*(char *)((longlong)param_1 + 0x72) == '\0') {
    (**(code **)(*param_1 + 0xc0))(param_1);
  }
  FUN_145bef2cc(param_1);
  if ((short)param_1[0xe] != -1) {
    lVar4 = FUN_14479d2ce(param_1 + 0x10);
    if (lVar4 != 0) {
      FUN_145bef2b0(lVar4,(short)param_1[0xe]);
    }
  }
  *(undefined4 *)(param_1 + 0x2b) = 0;
  if (*(int *)((longlong)param_1 + 0x15c) != 0) {
    FUN_1488a72f8(param_1 + 0x2a);
  }
  if (*(char *)((longlong)param_1 + 0x7c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x7c) = 0;
  }
  if ((lVar2 != 0) && (*(int *)((longlong)param_1 + 0x134) < (int)param_1[0x21])) {
    FUN_145bef474(lVar2);
  }
  if (lVar3 != 0) {
    FUN_140457ffc(lVar3 + 0x8c0,param_1);
    FUN_140457ffc(lVar3 + 0x470,param_1);
    *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  }
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined1 *)((longlong)param_1 + 0x73) = 0;
  FUN_141543068(param_1 + 0x2c);
  return;
}



// FUNCTION 145bef2b0 FUN_145bef2b0 body=27 status=ok
// SIG undefined FUN_145bef2b0(void)

void FUN_145bef2b0(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14148624c();
  FUN_145bef3cc(uVar1,param_2);
  return;
}



// FUNCTION 145bef2cc FUN_145bef2cc body=162 status=ok
// SIG undefined FUN_145bef2cc(void)

void FUN_145bef2cc(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  
  if (*(short *)(param_1 + 0x70) == -1) {
    lVar3 = FUN_14479d2ce(param_1 + 0xcc);
    lVar1 = FUN_14479d2ce(param_1 + 0xc4);
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 0x4fc) == 0) {
        if (lVar1 == 0) {
          return;
        }
      }
      else {
        if (lVar1 == 0) {
          return;
        }
        if (*(char *)(lVar3 + 0x4d0) != '\0') {
          return;
        }
      }
      cVar2 = FUN_1432dd8b8(lVar1);
      if ((cVar2 == '\0') && (cVar2 = FUN_1432dd8ac(lVar1), cVar2 == '\0')) {
        return;
      }
      FUN_146341516(lVar1);
      return;
    }
  }
  else {
    lVar3 = FUN_14479d2ce(param_1 + 0x80);
    if (lVar3 != 0) {
      FUN_145bef36e(lVar3,*(undefined2 *)(param_1 + 0x70));
      return;
    }
  }
  return;
}



// FUNCTION 145bef36e FUN_145bef36e body=94 status=ok
// SIG undefined FUN_145bef36e(void)

void FUN_145bef36e(undefined8 param_1,short param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = FUN_14148624c();
  if ((*(char *)(lVar1 + 0x178) == '\x03') && ((longlong)*(int *)(lVar1 + 0x520) != 0)) {
    lVar3 = *(longlong *)(lVar1 + 0x518);
    lVar2 = (longlong)*(int *)(lVar1 + 0x520) * 0x90;
    do {
      if (*(short *)(lVar3 + 0xc) == param_2) {
        if (lVar3 == 0) {
          return;
        }
        FUN_1414dbfe4(lVar1);
        return;
      }
      lVar3 = lVar3 + 0x90;
      lVar2 = lVar2 + -0x90;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 145bef3cc FUN_145bef3cc body=168 status=ok
// SIG undefined FUN_145bef3cc(void)

void FUN_145bef3cc(longlong param_1,short param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((*(char *)(param_1 + 0x178) == '\x03') &&
     (lVar2 = (longlong)*(int *)(param_1 + 0x520), lVar2 != 0)) {
    lVar3 = *(longlong *)(param_1 + 0x518);
    lVar1 = 0;
    do {
      if (*(short *)(lVar3 + 0xc + lVar1) == param_2) {
        if (lVar1 + lVar3 != 0) {
          FUN_1414dbfe4(param_1,lVar1 + lVar3);
          lVar2 = (longlong)*(int *)(param_1 + 0x520);
          if (lVar2 == 0) {
            return;
          }
          lVar3 = *(longlong *)(param_1 + 0x518);
        }
        break;
      }
      lVar1 = lVar1 + 0x90;
    } while (lVar2 * 0x90 != lVar1);
    lVar2 = lVar2 * 0x90 + lVar3;
    do {
      if (*(short *)(lVar3 + 0xc) == param_2) {
        if (lVar3 == 0) {
          return;
        }
        FUN_1414dc0a8(param_1);
        return;
      }
      lVar3 = lVar3 + 0x90;
    } while (lVar3 != lVar2);
  }
  return;
}



// FUNCTION 145bef474 FUN_145bef474 body=86 status=ok
// SIG undefined FUN_145bef474(void)

void FUN_145bef474(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x71c);
  FUN_140e457df(*(undefined8 *)(param_1 + 0x710),*(undefined4 *)(param_1 + 0x718));
  *(undefined4 *)(param_1 + 0x718) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x71c) != 0)) {
    FUN_146544ebe(param_1 + 0x710,0);
  }
  FUN_145dbe7b4(param_1);
  return;
}



// FUNCTION 145bef4ca FUN_145bef4ca body=499 status=ok
// SIG undefined FUN_145bef4ca(void)

void FUN_145bef4ca(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 ***pppuVar4;
  undefined4 uVar5;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  longlong local_d0;
  undefined1 local_c8;
  undefined8 local_b8;
  undefined1 local_a9;
  undefined1 local_a8 [40];
  undefined4 local_80;
  undefined8 **local_78;
  longlong *local_70;
  ushort local_60;
  byte local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(char *)(param_1 + 0x1b0) == '\0') {
    *(undefined1 *)(param_1 + 0x1b0) = 1;
    FUN_145bef2cc();
    lVar2 = *(longlong *)(param_1 + 0x48);
    FUN_145bef9e0(param_1);
    if (*(char *)(lVar2 + 0x230) == '\x01') {
      FUN_145bef6be(param_1,&DAT_14cb80ae0);
    }
    if (0.0 < *(float *)(param_1 + 0x1a8)) {
      FUN_145bef6be(param_1,&DAT_14cb80ae8);
    }
    if (*(char *)(lVar2 + 0x290) == '\x01') {
      local_a9 = 2;
      local_b8 = FUN_144a7be76(param_1);
      FUN_144a7bec8(param_1,&local_78);
      local_a8[0] = 0;
      local_80 = 0;
      FUN_144a7bf34(local_a8,&local_78,&local_b8,&local_a9);
      if (local_70 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_70 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_70 + 0x10))();
        }
      }
      FUN_1447c3578(lVar2 + 0x2d0,&local_78,local_a8);
      uVar5 = FUN_144a7ecd0(&local_78);
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
      if (pcVar3 != (code *)0x0) {
        pppuVar4 = &local_78;
        if (0x18 < local_60) {
          pppuVar4 = (undefined8 ***)local_78;
        }
        (*pcVar3)(pppuVar4);
      }
      if (0x18 < local_60) {
        FUN_1400020a8(local_78);
      }
      FUN_144a5ac3a(local_a8);
      local_d0 = lVar2 + 0x340;
      local_c8 = 0;
      local_d8 = 0x19;
      FUN_1461a06de(param_1,&DAT_14cb80ad8,0,uVar5);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bef6be FUN_145bef6be body=111 status=ok
// SIG undefined FUN_145bef6be(void)

void FUN_145bef6be(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar5 = FUN_14479d2ce(*(longlong *)(param_1 + 0x40) + 0x48);
  if (lVar5 != 0) {
    lVar3 = *(longlong *)(lVar5 + 0x158);
    plVar4 = *(longlong **)(lVar5 + 0x160);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    if (lVar3 != 0) {
      FUN_145bef72e(lVar3,param_2);
    }
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
                    /* WARNING: Could not recover jumptable at 0x000145bef729. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 0x10))(plVar4);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 145bef72e FUN_145bef72e body=263 status=ok
// SIG undefined FUN_145bef72e(void)

void FUN_145bef72e(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  longlong *local_38;
  uint local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = FUN_14479d2ce(param_1 + 0xe0);
  if (lVar3 != 0) {
    lVar4 = FUN_14098d926(lVar3);
    if (lVar4 != 0) {
      FUN_145bef896(param_1 + 0x90,*param_2);
      FUN_144a7d35a(lVar4,&local_38);
      if (-1 < (int)local_30) {
        do {
          if ((int)local_38[1] <= (int)local_30) break;
          lVar4 = FUN_14479d2ce((ulonglong)local_30 * 8 + *local_38);
          if (lVar4 != 0) {
            lVar5 = FUN_1449f3324();
            if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
              lVar5 = (**(code **)(*(longlong *)(lVar4 + 0x958) + 0x10))(lVar4 + 0x958);
              if (lVar5 == lVar3) {
                FUN_145bef836(lVar4,param_2);
              }
            }
          }
          uVar1 = local_30 + 1;
          bVar2 = -2 < (int)local_30;
          local_30 = uVar1;
        } while (bVar2);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bef836 FUN_145bef836 body=95 status=ok
// SIG undefined FUN_145bef836(void)

void FUN_145bef836(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cb61c40);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bef896 FUN_145bef896 body=132 status=ok
// SIG undefined FUN_145bef896(void)

void FUN_145bef896(longlong *param_1,longlong param_2)

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
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x24) == param_2) {
          FUN_145bef91a(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)(*param_1 + (longlong)iVar2 * 0x24 + 0x1c);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 145bef91a FUN_145bef91a body=85 status=ok
// SIG undefined FUN_145bef91a(void)

void FUN_145bef91a(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar1 = *param_1 + (longlong)param_2 * 0x24;
  lVar5 = (longlong)*(int *)(lVar1 + 0x20);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x24 + 0x1c);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0x1c);
  FUN_145bef970();
  return;
}



// FUNCTION 145bef970 FUN_145bef970 body=112 status=ok
// SIG undefined FUN_145bef970(void)

void FUN_145bef970(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x24) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x24);
  *puVar1 = 0xffffffff;
  uVar6 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 145bef9e0 FUN_145bef9e0 body=175 status=ok
// SIG undefined FUN_145bef9e0(void)

void FUN_145bef9e0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar5 = FUN_14479d2ce(*(longlong *)(param_1 + 0x40) + 0x48);
  if (lVar5 != 0) {
    lVar3 = *(longlong *)(lVar5 + 0x158);
    plVar4 = *(longlong **)(lVar5 + 0x160);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    if (lVar3 != 0) {
      FUN_14495448a(local_28,L"GbxMomentNodeState_PlayCutscene",*(undefined4 *)(param_1 + 0x1ac));
      FUN_14621c628(lVar3,local_28);
    }
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
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145befa90 FUN_145befa90 body=320 status=ok
// SIG undefined FUN_145befa90(void)

undefined4 * FUN_145befa90(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_145befc54(param_1,local_48);
  uVar1 = *(undefined8 *)*param_3;
  *local_40 = uVar1;
  local_40[1] = 0;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  uVar8 = ((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar4 >> 4);
  cVar3 = FUN_145befbd2(param_1,uVar8,local_40,&local_4c);
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
      FUN_1414dc294(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145befbd2 FUN_145befbd2 body=130 status=ok
// SIG undefined FUN_145befbd2(void)

undefined8 FUN_145befbd2(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_14590170e((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 145befc54 FUN_145befc54 body=231 status=ok
// SIG undefined FUN_145befc54(void)

int * FUN_145befc54(longlong *param_1,int *param_2)

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



// FUNCTION 145befd3c FUN_145befd3c body=324 status=ok
// SIG undefined FUN_145befd3c(void)

void FUN_145befd3c(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x18))();
  if (plVar5 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (**(code **)(*plVar5 + 0x180))(plVar5);
  }
  FUN_1409b62c8(&local_40,uVar6);
  if (local_38 != (longlong *)0x0) {
    iVar4 = (int)local_38[1];
    do {
      if (iVar4 == 0) {
        plVar5 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_38[1];
      bVar7 = iVar4 == iVar3;
      if (bVar7) {
        *(int *)(local_38 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar5 = local_38;
    } while (!bVar7);
    LOCK();
    piVar1 = (int *)((longlong)local_38 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_38 + 0x10))();
    }
    if (plVar5 != (longlong *)0x0) {
      if (local_40 != 0) {
        FUN_145befe82(local_40,&local_40,param_1);
        if (param_1 + 1 != &local_40) {
          param_1[1] = local_40;
          local_40 = 0;
          plVar2 = (longlong *)param_1[2];
          param_1[2] = (longlong)local_38;
          local_38 = (longlong *)0x0;
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
        *(undefined4 *)(param_1 + 3) = local_30;
        *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_2c;
        *(undefined4 *)(param_1 + 4) = uStack_28;
        *(undefined4 *)((longlong)param_1 + 0x24) = uStack_24;
        if (local_38 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)local_38 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_38 + 0x10))();
          }
        }
      }
      LOCK();
      plVar2 = plVar5 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145befe82 FUN_145befe82 body=328 status=ok
// SIG undefined FUN_145befe82(void)

undefined8 * FUN_145befe82(longlong param_1,undefined8 *param_2,ulonglong param_3)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = param_3;
  if (*(int *)(param_1 + 0x1b90) != *(int *)(param_1 + 0x1bb4)) {
    uVar1 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    lVar3 = param_1 + 0x1bb8;
    if (*(longlong *)(param_1 + 0x1bc0) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x1bc0);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x1bc8) - 1U & (uVar1 >> 0x10 ^ uVar1))
                             * 4);
    if (iVar4 != -1) {
      lVar3 = param_1 + 0x1b28;
      if (*(longlong *)(param_1 + 0x1b88) != 0) {
        lVar3 = *(longlong *)(param_1 + 0x1b88);
      }
      do {
        if (*(ulonglong *)(lVar3 + (longlong)iVar4 * 0x18) == param_3) goto LAB_145befecb;
        iVar4 = *(int *)(lVar3 + (longlong)iVar4 * 0x18 + 0x10);
      } while (iVar4 != -1);
    }
  }
  FUN_145beffcc(param_1 + 0x1ac8,&local_30);
LAB_145befecb:
  FUN_145bf004c(param_1 + 0x1af8,&local_30);
  param_2[2] = 0;
  param_2[3] = 0;
  uVar2 = FUN_14479d2ce(param_1 + 8);
  FUN_1409b62c8(&local_40,uVar2);
  *param_2 = local_40;
  param_2[1] = local_38;
  FUN_1401036f0(param_2 + 2,param_3);
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 145beffcc FUN_145beffcc body=128 status=ok
// SIG undefined FUN_145beffcc(void)

void FUN_145beffcc(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = param_1;
  }
  iVar1 = *(int *)(param_1 + 0x28);
  lVar5 = (longlong)iVar1;
  if (lVar5 != 0) {
    uVar4 = 0;
    do {
      if (*(longlong *)(lVar3 + uVar4) == *param_2) {
        if ((int)(~uVar4 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar4 = uVar4 + 8;
    } while (lVar5 * 8 - uVar4 != 0);
  }
  *(uint *)(param_1 + 0x28) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x2c) < iVar1 + 1U) {
    FUN_1489b2842(param_1,iVar1);
    lVar2 = *(longlong *)(param_1 + 0x20);
  }
  if (lVar2 != 0) {
    param_1 = lVar2;
  }
  *(longlong *)(param_1 + lVar5 * 8) = *param_2;
  return;
}



// FUNCTION 145bf004c FUN_145bf004c body=155 status=ok
// SIG undefined FUN_145bf004c(void)

void FUN_145bf004c(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    lVar3 = param_1;
  }
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 != 0) {
    iVar4 = 1;
    lVar6 = 0;
    lVar2 = 0;
    do {
      if (*(longlong *)(lVar3 + lVar6) == *param_2) {
        if (iVar4 == 0) {
          return;
        }
        iVar4 = iVar1 - iVar4;
        if (iVar4 != 0) {
          iVar5 = 1;
          if (iVar4 < 1) {
            iVar5 = iVar4;
          }
          memmove((void *)(lVar3 + (lVar2 >> 0x20) * 8),
                  (void *)(lVar3 + (longlong)(iVar1 - iVar5) * 8),(longlong)iVar5 << 3);
          iVar1 = *(int *)(param_1 + 0x28);
        }
        *(int *)(param_1 + 0x28) = iVar1 + -1;
        return;
      }
      lVar2 = lVar2 + 0x100000000;
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 << 3 != lVar6);
  }
  return;
}



// FUNCTION 145bf00e8 FUN_145bf00e8 body=1144 status=ok
// SIG undefined FUN_145bf00e8(void)

void FUN_145bf00e8(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_208 [32];
  undefined4 *local_1e8;
  undefined8 *local_1e0;
  undefined4 local_1d8;
  undefined4 *local_1d0;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined4 local_164;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 local_130;
  int local_124;
  undefined8 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined4 local_100 [2];
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_94;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined **local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_118 = 0;
  local_110 = 0x4000;
  local_108 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_118);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_118);
  }
  local_120 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_120);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_120);
  }
  local_124 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_124);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_124);
  }
  iVar1 = local_124;
  local_130 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_130);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_130);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_148);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_148);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_160);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_160);
  }
  local_164 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_164);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_164);
  }
  local_100[0] = 0;
  local_f8 = 0;
  local_f0 = 0x3002;
  local_e8 = 0;
  local_b0 = 0;
  local_a8 = 0x200000000;
  local_a0 = 0;
  local_98 = 0;
  local_94 = 0;
  local_88 = 0;
  local_80 = 0xf00000d0;
  local_78 = 0;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  FUN_1405c5fa2();
  local_48 = &DAT_14cb769e8;
  local_40 = 0;
  uStack_38 = 0;
  local_50 = &PTR_FUN_14b0394b0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_100);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_100);
  }
  local_1d0 = *(undefined4 **)(param_2 + 0x38);
  if (*(undefined4 **)(param_2 + 0x38) == (undefined4 *)0x0) {
    local_1d0 = local_100;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_1e0 = &local_188;
  local_188 = local_160;
  uStack_180 = uStack_158;
  local_178 = local_150;
  local_1e8 = &local_1a8;
  local_1a8 = local_148;
  uStack_1a4 = uStack_144;
  uStack_1a0 = uStack_140;
  uStack_19c = uStack_13c;
  local_198 = local_138;
  local_1c0 = local_118;
  local_1b8 = local_110;
  local_1b0 = 0;
  local_1d8 = local_164;
  FUN_145bf0562(&local_1c0,local_120,iVar1 != 0,local_130);
  FUN_1414dc478(local_100);
  if ((local_30 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bf0562 FUN_145bf0562 body=264 status=ok
// SIG undefined FUN_145bf0562(void)

void FUN_145bf0562(undefined8 *param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined4 *param_5,undefined8 *param_6,undefined4 param_7,undefined8 param_8)

{
  int *piVar1;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 *local_b0;
  undefined8 *local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined1 local_28 [8];
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_38 = param_6[2];
  local_a8 = &local_48;
  local_48 = *param_6;
  uStack_40 = param_6[1];
  local_68 = *param_5;
  uStack_64 = param_5[1];
  uStack_60 = param_5[2];
  uStack_5c = param_5[3];
  local_b0 = &local_68;
  local_58 = *(undefined8 *)(param_5 + 4);
  local_80 = *param_1;
  local_78 = *(undefined4 *)(param_1 + 1);
  local_70 = 0;
  local_98 = param_8;
  local_a0 = param_7;
  local_b8 = param_4;
  local_90 = param_3;
  FUN_14146d049(local_28,local_68,&local_80,param_2);
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
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_d8);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bf067e FUN_145bf067e body=263 status=ok
// SIG undefined FUN_145bf067e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145bf067e(longlong *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  DAT_14c866cc0 = 0;
  DAT_14c866cc8 = 0;
  DAT_14c866ca0 = 0;
  _DAT_14c866ca8 = 0;
  _DAT_14c866ccc = 0xffffffff00000080;
  DAT_14c866cd4 = 0;
  DAT_14c866ce0 = 0;
  DAT_14c866ce8 = 0;
  uVar5 = (ulonglong)(param_1[1] - *param_1) >> 4;
  uVar4 = (uint)uVar5;
  if (uVar4 != 0) {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar4);
    }
    FUN_145bf0c1c(uVar5 & 0xffffffff);
    if (uVar4 < 4) {
      iVar2 = 1;
    }
    else {
      uVar4 = (uVar4 | 1) + 0xe;
      iVar2 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar2 = 1 << ((byte)iVar2 & 0x1f);
    }
    if ((DAT_14c866ce8 == 0) || (DAT_14c866ce8 < iVar2)) {
      DAT_14c866ce8 = iVar2;
      FUN_145bf0a46();
    }
  }
  puVar3 = (undefined4 *)*param_1;
  puVar1 = (undefined4 *)param_1[1];
  if (puVar3 != puVar1) {
    do {
      local_40 = *puVar3;
      uStack_3c = puVar3[1];
      uStack_38 = puVar3[2];
      uStack_34 = puVar3[3];
      FUN_145bf0786(local_2c,&local_40);
      puVar3 = puVar3 + 4;
    } while (puVar3 != puVar1);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bf0786 FUN_145bf0786 body=289 status=ok
// SIG undefined FUN_145bf0786(void)

undefined4 * FUN_145bf0786(undefined4 *param_1,undefined8 *param_2)

{
  ushort uVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  ulonglong uVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  ushort *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145bf0938(local_40);
  puVar2 = (undefined1 *)param_2[1];
  uVar1 = *(ushort *)*param_2;
  *local_38 = uVar1;
  *(undefined1 *)(local_38 + 1) = *puVar2;
  local_38[2] = 0xffff;
  local_38[3] = 0xffff;
  local_44 = local_40[0];
  cVar5 = FUN_145bf08a8(uVar1,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar8 = DAT_14c866ca8 - DAT_14c866cd4;
    iVar9 = 1;
    if (3 < uVar8) {
      uVar6 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar9 <= DAT_14c866ce8)) {
      uVar8 = DAT_14c866ce8 - 1U & (uint)uVar1;
      *(uint *)(local_38 + 4) = uVar8;
      puVar7 = DAT_14c866ce0;
      if (DAT_14c866ce0 == (undefined *)0x0) {
        puVar7 = &DAT_14c866cd8;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + (ulonglong)(DAT_14c866ce8 - 1U & uVar8) * 4);
      puVar7 = DAT_14c866ce0;
      if (DAT_14c866ce0 == (undefined *)0x0) {
        puVar7 = &DAT_14c866cd8;
      }
      *(undefined4 *)(puVar7 + (ulonglong)(DAT_14c866ce8 - 1U & uVar8) * 4) = local_44;
    }
    else {
      DAT_14c866ce8 = iVar9;
      FUN_145bf0a46();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bf08a8 FUN_145bf08a8 body=143 status=ok
// SIG undefined FUN_145bf08a8(void)

undefined8 FUN_145bf08a8(uint param_1,short *param_2,int *param_3)

{
  short *psVar1;
  int iVar2;
  undefined *puVar3;
  
  if ((DAT_14c866ca8 - DAT_14c866cd4 != 1) && (DAT_14c866ca8 != DAT_14c866cd4)) {
    puVar3 = &DAT_14c866cd8;
    if (DAT_14c866ce0 != (undefined *)0x0) {
      puVar3 = DAT_14c866ce0;
    }
    iVar2 = *(int *)(puVar3 + (ulonglong)(DAT_14c866ce8 - 1U & param_1) * 4);
    if (iVar2 != -1) {
      do {
        psVar1 = (short *)(DAT_14c866ca0 + (longlong)iVar2 * 0xc);
        if (*psVar1 == *param_2) {
          *(undefined4 *)psVar1 = *(undefined4 *)param_2;
          FUN_14680a498(*param_3);
          *param_3 = iVar2;
          return 1;
        }
        iVar2 = *(int *)(psVar1 + 2);
      } while (iVar2 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 145bf0938 FUN_145bf0938 body=270 status=ok
// SIG undefined FUN_145bf0938(void)

int * FUN_145bf0938(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14c866cd0;
  iVar4 = DAT_14c866ca8;
  if (DAT_14c866cd4 == 0) {
    iVar2 = DAT_14c866ca8 + 1;
    bVar7 = DAT_14c866cac == DAT_14c866ca8;
    DAT_14c866ca8 = iVar2;
    if (bVar7) {
      FUN_1447cc1b4(&DAT_14c866ca0,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14c866cb0,1);
    puVar3 = DAT_14c866cc0;
    if (DAT_14c866cc0 == (undefined *)0x0) {
      puVar3 = &DAT_14c866cb0;
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
    lVar6 = (longlong)DAT_14c866cd0;
    DAT_14c866cd0 = *(int *)(DAT_14c866ca0 + 4 + lVar6 * 0xc);
    DAT_14c866cd4 = DAT_14c866cd4 + -1;
    iVar4 = iVar2;
    if (DAT_14c866cd4 != 0) {
      *(undefined4 *)(DAT_14c866ca0 + (longlong)DAT_14c866cd0 * 0xc) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14c866cb0;
  if (DAT_14c866cc0 != (undefined *)0x0) {
    puVar3 = DAT_14c866cc0;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0xc + DAT_14c866ca0;
  return param_1;
}



// FUNCTION 145bf0a46 FUN_145bf0a46 body=469 status=ok
// SIG undefined FUN_145bf0a46(void)

void FUN_145bf0a46(void)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
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
  if (DAT_14c866ce0 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14c866ce0,0,0,4);
  }
  uVar7 = DAT_14c866ce8;
  uVar2 = local_50;
  if (DAT_14c866ce8 != 0) {
    uVar6 = 0;
    FUN_144a1cbf0(&DAT_14c866cd8,0,DAT_14c866ce8,4);
    if (0 < (int)uVar7) {
      do {
        puVar5 = DAT_14c866ce0;
        if (DAT_14c866ce0 == (undefined *)0x0) {
          puVar5 = &DAT_14c866cd8;
        }
        *(undefined4 *)(puVar5 + (ulonglong)(DAT_14c866ce8 + 0x7fffffff & uVar6) * 4) = 0xffffffff;
        uVar6 = uVar6 + 1;
      } while (uVar7 != uVar6);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14c866cb0;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14c866cc8 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14c866ca0;
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
        uVar7 = DAT_14c866ce8 - 1 & (uint)*(ushort *)(lVar1 + lVar4 * 0xc);
        *(uint *)(lVar1 + 8 + lVar4 * 0xc) = uVar7;
        puVar5 = DAT_14c866ce0;
        if (DAT_14c866ce0 == (undefined *)0x0) {
          puVar5 = &DAT_14c866cd8;
        }
        *(undefined4 *)(lVar1 + 4 + lVar4 * 0xc) =
             *(undefined4 *)(puVar5 + (ulonglong)(DAT_14c866ce8 - 1 & uVar7) * 4);
        puVar5 = DAT_14c866ce0;
        if (DAT_14c866ce0 == (undefined *)0x0) {
          puVar5 = &DAT_14c866cd8;
        }
        *(int *)(puVar5 + (ulonglong)(DAT_14c866ce8 - 1 & uVar7) * 4) = iVar3;
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



// FUNCTION 145bf0c1c FUN_145bf0c1c body=479 status=ok
// SIG undefined FUN_145bf0c1c(void)

void FUN_145bf0c1c(uint param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  undefined *puVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  
  iVar3 = DAT_14c866ca8;
  uVar9 = param_1 - DAT_14c866ca8;
  if (uVar9 != 0 && DAT_14c866ca8 <= (int)param_1) {
    iVar8 = DAT_14c866ca8;
    if (DAT_14c866cac < (int)param_1) {
      FUN_1447a08a2(&DAT_14c866ca0);
      iVar8 = DAT_14c866ca8;
    }
    DAT_14c866ca8 = iVar8 + uVar9;
    if ((uint)(DAT_14c866cac - iVar8) < uVar9) {
      FUN_1447cc1b4(&DAT_14c866ca0);
    }
    lVar2 = DAT_14c866ca0;
    if (iVar8 < (int)param_1) {
      piVar7 = (int *)(DAT_14c866ca0 + (ulonglong)param_1 * 0xc + -8);
      uVar12 = (ulonglong)param_1;
      do {
        uVar1 = uVar12 - 1;
        if (DAT_14c866cd4 == 0) {
          iVar11 = (int)uVar12 + -1;
        }
        else {
          *(int *)(lVar2 + (longlong)DAT_14c866cd0 * 0xc) = (int)uVar12 + -1;
          iVar11 = (int)uVar1;
        }
        piVar7[-1] = -1;
        iVar13 = -1;
        if (0 < DAT_14c866cd4) {
          iVar13 = DAT_14c866cd0;
        }
        *piVar7 = iVar13;
        DAT_14c866cd4 = DAT_14c866cd4 + 1;
        piVar7 = piVar7 + -3;
        uVar12 = uVar1;
        DAT_14c866cd0 = iVar11;
      } while ((longlong)iVar8 < (longlong)uVar1);
    }
    if (iVar3 == 0) {
      uVar10 = uVar9 + 0x1f >> 5;
      DAT_14c866cc8 = uVar9;
      if (DAT_14c866ccc + 0x1f >> 5 < uVar10) {
        FUN_14499171c(&DAT_14c866cb0,0,uVar10,4);
        DAT_14c866ccc = uVar9 + 0x1f & 0xffffffe0;
      }
      puVar6 = DAT_14c866cc0;
      if (DAT_14c866cc0 == (undefined *)0x0) {
        puVar6 = &DAT_14c866cb0;
      }
      if (uVar9 < 0x101) {
        uVar10 = uVar10 + (uVar10 == 0);
      }
      memset(puVar6,0,(ulonglong)(uVar10 << 2));
      uVar9 = DAT_14c866cc8 + 0x1f;
      if (-1 < (int)DAT_14c866cc8) {
        uVar9 = DAT_14c866cc8;
      }
      if ((int)DAT_14c866cc8 % 0x20 != 0) {
        puVar6 = &DAT_14c866cb0;
        if (DAT_14c866cc0 != (undefined *)0x0) {
          puVar6 = DAT_14c866cc0;
        }
        bVar5 = -(char)((int)DAT_14c866cc8 % 0x20);
        *(uint *)(puVar6 + (longlong)((int)uVar9 >> 5) * 4) =
             (uint)(*(int *)(puVar6 + (longlong)((int)uVar9 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    else if (-1 < (int)uVar9) {
      uVar4 = FUN_144a54ea4(&DAT_14c866cb0,uVar9);
      FUN_1447c6044(&DAT_14c866cb0,uVar4,uVar9,0);
      return;
    }
  }
  return;
}


