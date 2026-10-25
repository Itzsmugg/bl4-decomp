// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1453df460 FUN_1453df460 body=96 status=ok
// SIG undefined FUN_1453df460(void)

void FUN_1453df460(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 local_res8;
  undefined4 uStackX_c;
  
  local_res8 = 0;
  if (param_1 != 0) {
    puVar2 = (undefined8 *)FUN_1453df0d0(&local_res8,param_1,param_3,param_4,0xfffffffffffffffe);
    (**(code **)(*(longlong *)*puVar2 + 0x10))((longlong *)*puVar2,param_2);
    lVar1 = CONCAT44(uStackX_c,local_res8);
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
  }
  return;
}



// FUNCTION 1453df4c0 FUN_1453df4c0 body=185 status=ok
// SIG undefined FUN_1453df4c0(void)

undefined8 FUN_1453df4c0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong local_res8;
  ulonglong local_res10;
  longlong local_res18 [2];
  
  local_res8 = local_res8 & 0xffffffff00000000;
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    puVar1 = (undefined8 *)FUN_1453df0d0(local_res18,param_1,param_3,param_4,0xfffffffffffffffe);
    (**(code **)(*(longlong *)*puVar1 + 0x18))((longlong *)*puVar1,&local_res10);
    if (local_res18[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_res18[0] + 8 + (longlong)*(int *)(*(longlong *)(local_res18[0] + 8) + 4))
                  + 8))();
    }
    local_res8 = local_res10;
    if (local_res10 != 0) {
      (*(code *)**(undefined8 **)
                  (local_res10 + 8 + (longlong)*(int *)(*(longlong *)(local_res10 + 8) + 4)))();
    }
    uVar2 = FUN_144d7a0c0(&local_res8);
    if (local_res10 != 0) {
      (**(code **)(*(longlong *)
                    (local_res10 + 8 + (longlong)*(int *)(*(longlong *)(local_res10 + 8) + 4)) + 8))
                ();
    }
  }
  return uVar2;
}



// FUNCTION 1453df580 FUN_1453df580 body=48 status=ok
// SIG undefined FUN_1453df580(void)

void FUN_1453df580(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 1453df5b0 FUN_1453df5b0 body=48 status=ok
// SIG undefined FUN_1453df5b0(void)

void FUN_1453df5b0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 1453df5e0 FUN_1453df5e0 body=48 status=ok
// SIG undefined FUN_1453df5e0(void)

void FUN_1453df5e0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 1453df610 FUN_1453df610 body=58 status=ok
// SIG undefined FUN_1453df610(void)

longlong * FUN_1453df610(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + -0x10);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)))();
  }
  return param_1;
}



// FUNCTION 1453df650 FUN_1453df650 body=52 status=ok
// SIG undefined FUN_1453df650(void)

int FUN_1453df650(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  (*(code *)**(undefined8 **)
              (*(longlong *)(param_1 + 0x10) + 8 +
              (longlong)*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 4)))();
  LOCK();
  piVar1 = (int *)(param_1 + 0x90);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 1453df690 FUN_1453df690 body=80 status=ok
// SIG undefined FUN_1453df690(void)

undefined8 FUN_1453df690(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  (**(code **)(*(longlong *)(param_1[2] + 8 + (longlong)*(int *)(*(longlong *)(param_1[2] + 8) + 4))
              + 8))();
  LOCK();
  plVar1 = param_1 + 0x12;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar2 == 1) {
    (**(code **)(*param_1 + 0x20))(param_1,1);
    return 1;
  }
  return 0;
}



// FUNCTION 1453df740 FUN_1453df740 body=42 status=ok
// SIG undefined FUN_1453df740(void)

undefined1 FUN_1453df740(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 8))();
  return uVar1;
}



// FUNCTION 1453df770 FUN_1453df770 body=42 status=ok
// SIG undefined FUN_1453df770(void)

undefined1 FUN_1453df770(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x10))();
  return uVar1;
}



// FUNCTION 1453df7a0 FUN_1453df7a0 body=42 status=ok
// SIG undefined FUN_1453df7a0(void)

undefined1 FUN_1453df7a0(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x18))();
  return uVar1;
}



// FUNCTION 1453df7d0 FUN_1453df7d0 body=43 status=ok
// SIG undefined FUN_1453df7d0(void)

undefined8 * FUN_1453df7d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 1453df800 FUN_1453df800 body=242 status=ok
// SIG undefined FUN_1453df800(void)

undefined8 * FUN_1453df800(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149d4acc0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 1) = DAT_14c74415c;
  param_1[3] = param_1;
  memset(param_1 + 4,0,0x70);
  param_1[5] = &LAB_1453df720;
  param_1[6] = FUN_1453df740;
  param_1[7] = FUN_1453df770;
  param_1[8] = FUN_1453df7a0;
  param_1[4] = 0x70;
  *param_1 = &PTR_FUN_149d4ace8;
  param_1[9] = FUN_1453dfc00;
  param_1[10] = FUN_1453dfc60;
  param_1[0xb] = FUN_1453dfd10;
  param_1[0xc] = FUN_1453dfd90;
  param_1[0xd] = FUN_1453dfe50;
  param_1[0xe] = FUN_1453dff40;
  param_1[0xf] = FUN_1453e0030;
  param_1[0x10] = FUN_1453e0190;
  param_1[0x11] = FUN_1453e0270;
  return param_1;
}



// FUNCTION 1453df900 FUN_1453df900 body=43 status=ok
// SIG undefined FUN_1453df900(void)

undefined8 * FUN_1453df900(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 1453df930 FUN_1453df930 body=230 status=ok
// SIG undefined FUN_1453df930(void)

longlong * FUN_1453df930(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  uVar3 = 0;
  if (param_2 == 0) {
    *param_1 = 0;
  }
  else {
    puVar2 = (undefined4 *)FUN_14494321d(0x38);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      FUN_14557a280(puVar2 + 4,1,param_3,param_4,uVar3,uVar4);
    }
    *puVar2 = (undefined4)DAT_14c7467b0;
    *(longlong *)(puVar2 + 2) = param_2;
    puVar1 = puVar2 + 4;
    if (puVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1))();
    }
    if (*(code **)(*(longlong *)(puVar2 + 2) + 0x10) != (code *)0x0) {
      (**(code **)(*(longlong *)(puVar2 + 2) + 0x10))();
    }
    *param_1 = (longlong)puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1))();
      (**(code **)(*(longlong *)
                    ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1) + 8))
                ();
    }
  }
  return param_1;
}



// FUNCTION 1453dfa20 FUN_1453dfa20 body=230 status=ok
// SIG undefined FUN_1453dfa20(void)

longlong * FUN_1453dfa20(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  uVar3 = 0;
  if (param_2 == 0) {
    *param_1 = 0;
  }
  else {
    puVar2 = (undefined4 *)FUN_14494321d(0x38);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      FUN_14557b480(puVar2 + 4,1,param_3,param_4,uVar3,uVar4);
    }
    *puVar2 = DAT_14c7467b0._4_4_;
    *(longlong *)(puVar2 + 2) = param_2;
    puVar1 = puVar2 + 4;
    if (puVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1))();
    }
    if (*(code **)(*(longlong *)(puVar2 + 2) + 0x10) != (code *)0x0) {
      (**(code **)(*(longlong *)(puVar2 + 2) + 0x10))();
    }
    *param_1 = (longlong)puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1))();
      (**(code **)(*(longlong *)
                    ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1) + 8))
                ();
    }
  }
  return param_1;
}



// FUNCTION 1453dfb10 FUN_1453dfb10 body=230 status=ok
// SIG undefined FUN_1453dfb10(void)

longlong * FUN_1453dfb10(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  uVar3 = 0;
  if (param_2 == 0) {
    *param_1 = 0;
  }
  else {
    puVar2 = (undefined4 *)FUN_14494321d(0x38);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      FUN_14557bae0(puVar2 + 4,1,param_3,param_4,uVar3,uVar4);
    }
    *puVar2 = DAT_14c7467b8;
    *(longlong *)(puVar2 + 2) = param_2;
    puVar1 = puVar2 + 4;
    if (puVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1))();
    }
    if (*(code **)(*(longlong *)(puVar2 + 2) + 0x10) != (code *)0x0) {
      (**(code **)(*(longlong *)(puVar2 + 2) + 0x10))();
    }
    *param_1 = (longlong)puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1))();
      (**(code **)(*(longlong *)
                    ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1) + 8))
                ();
    }
  }
  return param_1;
}



// FUNCTION 1453dfc00 FUN_1453dfc00 body=86 status=ok
// SIG undefined FUN_1453dfc00(void)

void FUN_1453dfc00(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 local_res8;
  undefined4 uStackX_c;
  
  local_res8 = 0;
  if (param_1 != 0) {
    puVar2 = (undefined8 *)FUN_1453df610(&local_res8,param_1,param_3,param_4,0xfffffffffffffffe);
    (*(code *)**(undefined8 **)*puVar2)();
    lVar1 = CONCAT44(uStackX_c,local_res8);
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
  }
  return;
}



// FUNCTION 1453dfc60 FUN_1453dfc60 body=175 status=ok
// SIG undefined FUN_1453dfc60(void)

void FUN_1453dfc60(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_res8 [2];
  undefined1 local_res20 [8];
  longlong local_28 [2];
  undefined4 *local_18;
  
  local_28[1] = 0xfffffffffffffffe;
  local_res8[0] = 0;
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    local_18 = local_res8;
    puVar2 = (undefined8 *)FUN_1453df610(local_28,param_1);
    plVar1 = (longlong *)*puVar2;
    uVar3 = FUN_144d73c30(local_res8,param_3);
    uVar4 = FUN_144d7a4e0(local_res20,param_2);
    (**(code **)(*plVar1 + 8))(plVar1,uVar4,uVar3);
    if (local_28[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_28[0] + 8 + (longlong)*(int *)(*(longlong *)(local_28[0] + 8) + 4)) + 8))
                ();
    }
  }
  return;
}



// FUNCTION 1453dfd10 FUN_1453dfd10 body=128 status=ok
// SIG undefined FUN_1453dfd10(void)

void FUN_1453dfd10(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 local_res8 [2];
  longlong local_res18 [2];
  
  local_res8[0] = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    puVar2 = (undefined8 *)FUN_1453df610(local_res18,param_1,param_3,param_4,0xfffffffffffffffe);
    plVar1 = (longlong *)*puVar2;
    uVar3 = FUN_144d7a4e0(local_res8,param_2);
    (**(code **)(*plVar1 + 0x10))(plVar1,uVar3);
    if (local_res18[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_res18[0] + 8 + (longlong)*(int *)(*(longlong *)(local_res18[0] + 8) + 4))
                  + 8))();
    }
  }
  return;
}



// FUNCTION 1453dfd90 FUN_1453dfd90 body=185 status=ok
// SIG undefined FUN_1453dfd90(void)

undefined8 FUN_1453dfd90(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong local_res8;
  ulonglong local_res10;
  longlong local_res18 [2];
  
  local_res8 = local_res8 & 0xffffffff00000000;
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    puVar1 = (undefined8 *)FUN_1453df610(local_res18,param_1,param_3,param_4,0xfffffffffffffffe);
    (**(code **)(*(longlong *)*puVar1 + 0x18))((longlong *)*puVar1,&local_res10);
    if (local_res18[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_res18[0] + 8 + (longlong)*(int *)(*(longlong *)(local_res18[0] + 8) + 4))
                  + 8))();
    }
    local_res8 = local_res10;
    if (local_res10 != 0) {
      (*(code *)**(undefined8 **)
                  (local_res10 + 8 + (longlong)*(int *)(*(longlong *)(local_res10 + 8) + 4)))();
    }
    uVar2 = FUN_145170b70(&local_res8);
    if (local_res10 != 0) {
      (**(code **)(*(longlong *)
                    (local_res10 + 8 + (longlong)*(int *)(*(longlong *)(local_res10 + 8) + 4)) + 8))
                ();
    }
  }
  return uVar2;
}



// FUNCTION 1453dfe50 FUN_1453dfe50 body=231 status=ok
// SIG undefined FUN_1453dfe50(void)

void FUN_1453dfe50(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_res8 [2];
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  longlong local_38 [2];
  undefined4 *local_28;
  undefined1 *local_20;
  
  local_38[1] = 0xfffffffffffffffe;
  local_res8[0] = 0;
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) && (param_4 != 0)) {
    local_28 = local_res8;
    local_20 = local_48;
    puVar2 = (undefined8 *)FUN_1453df610(local_38,param_1);
    plVar1 = (longlong *)*puVar2;
    uVar3 = FUN_14516d750(local_res8,param_4);
    uVar4 = FUN_14516a830(local_48,param_3);
    uVar5 = FUN_144d7a4e0(local_40,param_2);
    (**(code **)(*plVar1 + 0x20))(plVar1,uVar5,uVar4,uVar3);
    if (local_38[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_38[0] + 8 + (longlong)*(int *)(*(longlong *)(local_38[0] + 8) + 4)) + 8))
                ();
    }
  }
  return;
}



// FUNCTION 1453dff40 FUN_1453dff40 body=231 status=ok
// SIG undefined FUN_1453dff40(void)

void FUN_1453dff40(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_res8 [2];
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  longlong local_38 [2];
  undefined4 *local_28;
  undefined1 *local_20;
  
  local_38[1] = 0xfffffffffffffffe;
  local_res8[0] = 0;
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) && (param_4 != 0)) {
    local_28 = local_res8;
    local_20 = local_48;
    puVar2 = (undefined8 *)FUN_1453df610(local_38,param_1);
    plVar1 = (longlong *)*puVar2;
    uVar3 = FUN_14516d750(local_res8,param_4);
    uVar4 = FUN_14516a830(local_48,param_3);
    uVar5 = FUN_144d7a4e0(local_40,param_2);
    (**(code **)(*plVar1 + 0x28))(plVar1,uVar5,uVar4,uVar3);
    if (local_38[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_38[0] + 8 + (longlong)*(int *)(*(longlong *)(local_38[0] + 8) + 4)) + 8))
                ();
    }
  }
  return;
}



// FUNCTION 1453e0030 FUN_1453e0030 body=349 status=ok
// SIG undefined FUN_1453e0030(void)

void FUN_1453e0030(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 local_res8 [2];
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  longlong local_58 [2];
  undefined4 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  
  local_58[1] = 0xfffffffffffffffe;
  local_res8[0] = 0;
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) &&
     (((param_4 != 0 && (param_5 != 0)) && (param_6 != 0)))) {
    local_48 = local_res8;
    local_40 = local_78;
    local_38 = local_70;
    local_30 = local_68;
    puVar2 = (undefined8 *)FUN_1453df610(local_58,param_1);
    plVar1 = (longlong *)*puVar2;
    uVar3 = FUN_1453dfb10(local_res8,param_6);
    uVar4 = FUN_1453dfa20(local_78,param_5);
    uVar5 = FUN_14516d750(local_70,param_4);
    uVar6 = FUN_14516a830(local_68,param_3);
    uVar7 = FUN_144d7a4e0(local_60,param_2);
    (**(code **)(*plVar1 + 0x30))(plVar1,uVar7,uVar6,uVar5,uVar4,uVar3);
    if (local_58[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_58[0] + 8 + (longlong)*(int *)(*(longlong *)(local_58[0] + 8) + 4)) + 8))
                ();
    }
  }
  return;
}



// FUNCTION 1453e0190 FUN_1453e0190 body=213 status=ok
// SIG undefined FUN_1453e0190(void)

void FUN_1453e0190(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_res8 [2];
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  longlong local_38 [2];
  undefined4 *local_28;
  undefined1 *local_20;
  
  local_38[1] = 0xfffffffffffffffe;
  local_res8[0] = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    local_28 = local_res8;
    local_20 = local_48;
    puVar2 = (undefined8 *)FUN_1453df610(local_38,param_1);
    plVar1 = (longlong *)*puVar2;
    uVar3 = FUN_1453df930(local_res8,param_4);
    uVar4 = FUN_14516a830(local_48,param_3);
    uVar5 = FUN_144d7a4e0(local_40,param_2);
    (**(code **)(*plVar1 + 0x38))(plVar1,uVar5,uVar4,uVar3);
    if (local_38[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_38[0] + 8 + (longlong)*(int *)(*(longlong *)(local_38[0] + 8) + 4)) + 8))
                ();
    }
  }
  return;
}



// FUNCTION 1453e0270 FUN_1453e0270 body=259 status=ok
// SIG undefined FUN_1453e0270(void)

undefined1
FUN_1453e0270(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4,longlong param_5
             )

{
  longlong *plVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 local_res8 [2];
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  longlong local_38 [2];
  undefined4 *local_28;
  undefined1 *local_20;
  
  local_38[1] = 0xfffffffffffffffe;
  local_res8[0] = 0;
  if ((((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) || (param_5 == 0)) {
    uVar2 = 0;
  }
  else {
    local_28 = local_res8;
    local_20 = local_48;
    puVar3 = (undefined8 *)FUN_1453df610(local_38,param_1);
    plVar1 = (longlong *)*puVar3;
    uVar4 = FUN_144d77b10(local_res8,param_5);
    uVar5 = FUN_14516a830(local_48,param_3);
    uVar6 = FUN_144d7a4e0(local_40,param_2);
    uVar2 = (**(code **)(*plVar1 + 0x40))(plVar1,uVar6,uVar5,param_4,uVar4);
    if (local_38[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_38[0] + 8 + (longlong)*(int *)(*(longlong *)(local_38[0] + 8) + 4)) + 8))
                ();
    }
  }
  return uVar2;
}



// FUNCTION 1453e0380 FUN_1453e0380 body=58 status=ok
// SIG undefined FUN_1453e0380(void)

longlong * FUN_1453e0380(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + -0x10);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)))();
  }
  return param_1;
}



// FUNCTION 1453e03c0 FUN_1453e03c0 body=49 status=ok
// SIG undefined FUN_1453e03c0(void)

int FUN_1453e03c0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  (*(code *)**(undefined8 **)
              (*(longlong *)(param_1 + 0x10) + 8 +
              (longlong)*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 4)))();
  LOCK();
  piVar1 = (int *)(param_1 + 0x60);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 1453e0400 FUN_1453e0400 body=77 status=ok
// SIG undefined FUN_1453e0400(void)

undefined8 FUN_1453e0400(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  (**(code **)(*(longlong *)(param_1[2] + 8 + (longlong)*(int *)(*(longlong *)(param_1[2] + 8) + 4))
              + 8))();
  LOCK();
  plVar1 = param_1 + 0xc;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar2 == 1) {
    (**(code **)(*param_1 + 0x20))(param_1,1);
    return 1;
  }
  return 0;
}



// FUNCTION 1453e04b0 FUN_1453e04b0 body=42 status=ok
// SIG undefined FUN_1453e04b0(void)

undefined1 FUN_1453e04b0(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 8))();
  return uVar1;
}



// FUNCTION 1453e04e0 FUN_1453e04e0 body=42 status=ok
// SIG undefined FUN_1453e04e0(void)

undefined1 FUN_1453e04e0(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x10))();
  return uVar1;
}



// FUNCTION 1453e0510 FUN_1453e0510 body=42 status=ok
// SIG undefined FUN_1453e0510(void)

undefined1 FUN_1453e0510(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x18))();
  return uVar1;
}



// FUNCTION 1453e0540 FUN_1453e0540 body=43 status=ok
// SIG undefined FUN_1453e0540(void)

undefined8 * FUN_1453e0540(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 1453e0570 FUN_1453e0570 body=129 status=ok
// SIG undefined FUN_1453e0570(void)

undefined8 * FUN_1453e0570(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149d4af68;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 1) = DAT_14c744160;
  param_1[3] = param_1;
  param_1[5] = &LAB_1453e0490;
  param_1[6] = FUN_1453e04b0;
  param_1[7] = FUN_1453e04e0;
  param_1[8] = FUN_1453e0510;
  param_1[4] = 0x40;
  *param_1 = &PTR_FUN_149d4af90;
  param_1[9] = FUN_1453e0660;
  param_1[10] = FUN_1453e0740;
  param_1[0xb] = FUN_1453e0810;
  return param_1;
}



// FUNCTION 1453e0600 FUN_1453e0600 body=84 status=ok
// SIG undefined FUN_1453e0600(void)

undefined8 *
FUN_1453e0600(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &PTR_FUN_149d4af90;
  FUN_14516fec0();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x68,param_3,param_4,uVar1);
  }
  return param_1;
}



// FUNCTION 1453e0660 FUN_1453e0660 body=222 status=ok
// SIG undefined FUN_1453e0660(void)

undefined1 FUN_1453e0660(longlong param_1,undefined4 param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined4 local_res8;
  undefined4 uStackX_c;
  undefined8 uVar4;
  undefined **local_20;
  longlong local_18;
  char local_10;
  
  uVar4 = 0xfffffffffffffffe;
  local_res8 = 0;
  FUN_14516fec0();
  if ((param_1 == 0) || (param_3 == 0)) {
    uVar2 = 0;
  }
  else {
    local_20 = &PTR_FUN_14ba6d600;
    local_10 = '\0';
    local_18 = param_3;
    puVar3 = (undefined8 *)FUN_1453e0380(&local_res8,param_1);
    uVar2 = (*(code *)**(undefined8 **)*puVar3)
                      ((undefined8 *)*puVar3,param_2,&local_20,param_4,uVar4);
    lVar1 = CONCAT44(uStackX_c,local_res8);
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
    local_20 = &PTR_FUN_14ba6d600;
    if ((local_18 != 0) && (local_10 != '\0')) {
      cef_string_utf16_clear();
      thunk_FUN_1400020a8(local_18,0x18);
    }
  }
  return uVar2;
}



// FUNCTION 1453e0740 FUN_1453e0740 body=200 status=ok
// SIG undefined FUN_1453e0740(void)

undefined1 FUN_1453e0740(longlong param_1,undefined4 param_2,ulonglong *param_3,undefined8 *param_4)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  ulonglong local_res8;
  undefined8 local_28;
  longlong local_20 [3];
  
  local_20[1] = 0xfffffffffffffffe;
  local_res8 = local_res8 & 0xffffffff00000000;
  FUN_14516fec0();
  if (((param_1 == 0) || (param_3 == (ulonglong *)0x0)) || (param_4 == (undefined8 *)0x0)) {
    uVar1 = 0;
  }
  else {
    local_res8 = *param_3;
    local_28 = *param_4;
    puVar2 = (undefined8 *)FUN_1453e0380(local_20,param_1);
    uVar1 = (**(code **)(*(longlong *)*puVar2 + 8))
                      ((longlong *)*puVar2,param_2,&local_res8,&local_28);
    if (local_20[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_20[0] + 8 + (longlong)*(int *)(*(longlong *)(local_20[0] + 8) + 4)) + 8))
                ();
    }
    *param_3 = local_res8;
    *param_4 = local_28;
  }
  return uVar1;
}



// FUNCTION 1453e0810 FUN_1453e0810 body=218 status=ok
// SIG undefined FUN_1453e0810(void)

undefined1
FUN_1453e0810(longlong param_1,undefined4 param_2,undefined4 param_3,ulonglong *param_4,
             undefined8 *param_5)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  ulonglong local_res8;
  undefined8 local_38;
  longlong local_30 [3];
  
  local_30[1] = 0xfffffffffffffffe;
  local_res8 = local_res8 & 0xffffffff00000000;
  FUN_14516fec0();
  if (((param_1 == 0) || (param_4 == (ulonglong *)0x0)) || (param_5 == (undefined8 *)0x0)) {
    uVar1 = 0;
  }
  else {
    local_res8 = *param_4;
    local_38 = *param_5;
    puVar2 = (undefined8 *)FUN_1453e0380(local_30,param_1);
    uVar1 = (**(code **)(*(longlong *)*puVar2 + 0x10))
                      ((longlong *)*puVar2,param_2,param_3,&local_res8,&local_38);
    if (local_30[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_30[0] + 8 + (longlong)*(int *)(*(longlong *)(local_30[0] + 8) + 4)) + 8))
                ();
    }
    *param_4 = local_res8;
    *param_5 = local_38;
  }
  return uVar1;
}



// FUNCTION 1453e08f0 FUN_1453e08f0 body=43 status=ok
// SIG undefined FUN_1453e08f0(void)

undefined8 * FUN_1453e08f0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149d4b058;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 1453e0920 FUN_1453e0920 body=14 status=ok
// SIG undefined FUN_1453e0920(void)

undefined8 * FUN_1453e0920(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149d4b060;
  return param_1;
}



// FUNCTION 1453e0930 FUN_1453e0930 body=66 status=ok
// SIG undefined FUN_1453e0930(void)

bool FUN_1453e0930(longlong param_1,longlong param_2)

{
  code *pcVar1;
  int iVar2;
  
  if ((((0x17 < **(ulonglong **)(param_1 + -8)) &&
       (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[2], pcVar1 != (code *)0x0)) &&
      (*(longlong *)(param_2 + 8) != 0)) && (*(longlong *)(*(longlong *)(param_2 + 8) + 8) != 0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 1453e0980 FUN_1453e0980 body=101 status=ok
// SIG undefined FUN_1453e0980(void)

undefined8 *
FUN_1453e0980(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  
  *param_1 = &PTR_FUN_149d4b058;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if ((param_1[-1] != 0) && (pcVar1 = *(code **)(param_1[-1] + 8), pcVar1 != (code *)0x0)) {
        (*pcVar1)();
      }
      thunk_FUN_1400020a8(param_1 + -2);
    }
    else {
      FUN_144bda120(param_1,8,param_3,param_4,0xfffffffffffffffe);
    }
  }
  return param_1;
}



// FUNCTION 1453e09f0 FUN_1453e09f0 body=48 status=ok
// SIG undefined FUN_1453e09f0(void)

void FUN_1453e09f0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 1453e0a20 FUN_1453e0a20 body=48 status=ok
// SIG undefined FUN_1453e0a20(void)

void FUN_1453e0a20(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 1453e0a50 FUN_1453e0a50 body=48 status=ok
// SIG undefined FUN_1453e0a50(void)

void FUN_1453e0a50(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 1453e0a80 FUN_1453e0a80 body=58 status=ok
// SIG undefined FUN_1453e0a80(void)

longlong * FUN_1453e0a80(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + -0x10);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)))();
  }
  return param_1;
}



// FUNCTION 1453e0ac0 FUN_1453e0ac0 body=52 status=ok
// SIG undefined FUN_1453e0ac0(void)

int FUN_1453e0ac0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  (*(code *)**(undefined8 **)
              (*(longlong *)(param_1 + 0x10) + 8 +
              (longlong)*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 4)))();
  LOCK();
  piVar1 = (int *)(param_1 + 0x80);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 1453e0b00 FUN_1453e0b00 body=80 status=ok
// SIG undefined FUN_1453e0b00(void)

undefined8 FUN_1453e0b00(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  (**(code **)(*(longlong *)(param_1[2] + 8 + (longlong)*(int *)(*(longlong *)(param_1[2] + 8) + 4))
              + 8))();
  LOCK();
  plVar1 = param_1 + 0x10;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar2 == 1) {
    (**(code **)(*param_1 + 0x20))(param_1,1);
    return 1;
  }
  return 0;
}



// FUNCTION 1453e0bb0 FUN_1453e0bb0 body=42 status=ok
// SIG undefined FUN_1453e0bb0(void)

undefined1 FUN_1453e0bb0(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 8))();
  return uVar1;
}



// FUNCTION 1453e0be0 FUN_1453e0be0 body=42 status=ok
// SIG undefined FUN_1453e0be0(void)

undefined1 FUN_1453e0be0(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x10))();
  return uVar1;
}



// FUNCTION 1453e0c10 FUN_1453e0c10 body=42 status=ok
// SIG undefined FUN_1453e0c10(void)

undefined1 FUN_1453e0c10(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x18))();
  return uVar1;
}



// FUNCTION 1453e0c40 FUN_1453e0c40 body=43 status=ok
// SIG undefined FUN_1453e0c40(void)

undefined8 * FUN_1453e0c40(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 1453e0c70 FUN_1453e0c70 body=214 status=ok
// SIG undefined FUN_1453e0c70(void)

undefined8 * FUN_1453e0c70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149d4b098;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 1) = DAT_14c744168;
  param_1[3] = param_1;
  memset(param_1 + 4,0,0x60);
  param_1[5] = &LAB_1453e0b90;
  param_1[6] = FUN_1453e0bb0;
  param_1[7] = FUN_1453e0be0;
  param_1[8] = FUN_1453e0c10;
  param_1[4] = 0x60;
  *param_1 = &PTR_FUN_149d4b0c0;
  param_1[9] = FUN_1453e1170;
  param_1[10] = FUN_1453e1260;
  param_1[0xb] = FUN_1453e1320;
  param_1[0xc] = FUN_1453e1470;
  param_1[0xd] = FUN_1453e1540;
  param_1[0xe] = FUN_1453e1620;
  param_1[0xf] = FUN_1453e1700;
  return param_1;
}



// FUNCTION 1453e0d50 FUN_1453e0d50 body=84 status=ok
// SIG undefined FUN_1453e0d50(void)

undefined8 *
FUN_1453e0d50(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &PTR_FUN_149d4b0c0;
  FUN_14516fec0();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x88,param_3,param_4,uVar1);
  }
  return param_1;
}



// FUNCTION 1453e0db0 FUN_1453e0db0 body=230 status=ok
// SIG undefined FUN_1453e0db0(void)

longlong * FUN_1453e0db0(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  uVar3 = 0;
  if (param_2 == 0) {
    *param_1 = 0;
  }
  else {
    puVar2 = (undefined4 *)FUN_14494321d(0x38);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      FUN_14557c050(puVar2 + 4,1,param_3,param_4,uVar3,uVar4);
    }
    *puVar2 = DAT_14c7467bc;
    *(longlong *)(puVar2 + 2) = param_2;
    puVar1 = puVar2 + 4;
    if (puVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1))();
    }
    if (*(code **)(*(longlong *)(puVar2 + 2) + 0x10) != (code *)0x0) {
      (**(code **)(*(longlong *)(puVar2 + 2) + 0x10))();
    }
    *param_1 = (longlong)puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1))();
      (**(code **)(*(longlong *)
                    ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1) + 8))
                ();
    }
  }
  return param_1;
}



// FUNCTION 1453e0ea0 FUN_1453e0ea0 body=230 status=ok
// SIG undefined FUN_1453e0ea0(void)

longlong * FUN_1453e0ea0(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  uVar3 = 0;
  if (param_2 == 0) {
    *param_1 = 0;
  }
  else {
    puVar2 = (undefined4 *)FUN_14494321d(0x38);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      FUN_14557c400(puVar2 + 4,1,param_3,param_4,uVar3,uVar4);
    }
    *puVar2 = DAT_14c7467c0;
    *(longlong *)(puVar2 + 2) = param_2;
    puVar1 = puVar2 + 4;
    if (puVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1))();
    }
    if (*(code **)(*(longlong *)(puVar2 + 2) + 0x10) != (code *)0x0) {
      (**(code **)(*(longlong *)(puVar2 + 2) + 0x10))();
    }
    *param_1 = (longlong)puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1))();
      (**(code **)(*(longlong *)
                    ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1) + 8))
                ();
    }
  }
  return param_1;
}



// FUNCTION 1453e0f90 FUN_1453e0f90 body=230 status=ok
// SIG undefined FUN_1453e0f90(void)

longlong * FUN_1453e0f90(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  uVar3 = 0;
  if (param_2 == 0) {
    *param_1 = 0;
  }
  else {
    puVar2 = (undefined4 *)FUN_14494321d(0x38);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      FUN_14557c790(puVar2 + 4,1,param_3,param_4,uVar3,uVar4);
    }
    *puVar2 = DAT_14c7467c4;
    *(longlong *)(puVar2 + 2) = param_2;
    puVar1 = puVar2 + 4;
    if (puVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1))();
    }
    if (*(code **)(*(longlong *)(puVar2 + 2) + 0x10) != (code *)0x0) {
      (**(code **)(*(longlong *)(puVar2 + 2) + 0x10))();
    }
    *param_1 = (longlong)puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1))();
      (**(code **)(*(longlong *)
                    ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1) + 8))
                ();
    }
  }
  return param_1;
}



// FUNCTION 1453e1080 FUN_1453e1080 body=230 status=ok
// SIG undefined FUN_1453e1080(void)

longlong * FUN_1453e1080(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  uVar3 = 0;
  if (param_2 == 0) {
    *param_1 = 0;
  }
  else {
    puVar2 = (undefined4 *)FUN_14494321d(0x38);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      FUN_14557cb70(puVar2 + 4,1,param_3,param_4,uVar3,uVar4);
    }
    *puVar2 = DAT_14c7467c8;
    *(longlong *)(puVar2 + 2) = param_2;
    puVar1 = puVar2 + 4;
    if (puVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1))();
    }
    if (*(code **)(*(longlong *)(puVar2 + 2) + 0x10) != (code *)0x0) {
      (**(code **)(*(longlong *)(puVar2 + 2) + 0x10))();
    }
    *param_1 = (longlong)puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1))();
      (**(code **)(*(longlong *)
                    ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1) + 8))
                ();
    }
  }
  return param_1;
}



// FUNCTION 1453e1170 FUN_1453e1170 body=233 status=ok
// SIG undefined FUN_1453e1170(void)

undefined1 FUN_1453e1170(longlong param_1,longlong param_2,uint *param_3,longlong param_4)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_res8 [2];
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  longlong local_38 [2];
  undefined1 *local_28;
  
  local_38[1] = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if ((((param_1 == 0) || (param_2 == 0)) || (param_3 == (uint *)0x0)) || (param_4 == 0)) {
    uVar1 = 0;
  }
  else {
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,*param_3 != 0);
    local_28 = local_48;
    puVar2 = (undefined8 *)FUN_1453e0a80(local_38,param_1);
    puVar2 = (undefined8 *)*puVar2;
    uVar3 = FUN_1453e0db0(local_48,param_4);
    uVar4 = FUN_14516a920(local_40,param_2);
    uVar1 = (**(code **)*puVar2)(puVar2,uVar4,local_res8,uVar3);
    if (local_38[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_38[0] + 8 + (longlong)*(int *)(*(longlong *)(local_38[0] + 8) + 4)) + 8))
                ();
    }
    *param_3 = (uint)((char)local_res8[0] != '\0');
  }
  return uVar1;
}



// FUNCTION 1453e1260 FUN_1453e1260 body=192 status=ok
// SIG undefined FUN_1453e1260(void)

undefined1 FUN_1453e1260(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_res8 [2];
  undefined1 local_res20 [8];
  longlong local_28 [2];
  undefined4 *local_18;
  
  local_28[1] = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
    uVar2 = 0;
  }
  else {
    local_18 = local_res8;
    puVar3 = (undefined8 *)FUN_1453e0a80(local_28,param_1);
    plVar1 = (longlong *)*puVar3;
    uVar4 = FUN_1453e0db0(local_res8,param_3);
    uVar5 = FUN_14516a920(local_res20,param_2);
    uVar2 = (**(code **)(*plVar1 + 8))(plVar1,uVar5,uVar4);
    if (local_28[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_28[0] + 8 + (longlong)*(int *)(*(longlong *)(local_28[0] + 8) + 4)) + 8))
                ();
    }
  }
  return uVar2;
}



// FUNCTION 1453e1320 FUN_1453e1320 body=275 status=ok
// SIG undefined FUN_1453e1320(void)

void FUN_1453e1320(longlong param_1,longlong param_2,ulonglong *param_3,longlong param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulonglong local_res8;
  undefined1 local_48 [8];
  longlong local_40 [2];
  undefined **local_30;
  longlong local_28;
  char local_20;
  
  local_40[1] = 0xfffffffffffffffe;
  local_res8 = local_res8 & 0xffffffff00000000;
  FUN_14516fec0();
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != (ulonglong *)0x0)) && (param_4 != 0)) {
    local_res8 = *param_3;
    local_30 = &PTR_FUN_14ba6d600;
    local_20 = '\0';
    local_28 = param_4;
    puVar2 = (undefined8 *)FUN_1453e0a80(local_40,param_1);
    plVar1 = (longlong *)*puVar2;
    uVar3 = FUN_1453e1080(local_48,param_2);
    (**(code **)(*plVar1 + 0x10))(plVar1,uVar3,&local_res8,&local_30);
    if (local_40[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_40[0] + 8 + (longlong)*(int *)(*(longlong *)(local_40[0] + 8) + 4)) + 8))
                ();
    }
    *param_3 = local_res8;
    local_30 = &PTR_FUN_14ba6d600;
    if ((local_28 != 0) && (local_20 != '\0')) {
      cef_string_utf16_clear();
      thunk_FUN_1400020a8(local_28,0x18);
    }
  }
  return;
}



// FUNCTION 1453e1440 FUN_1453e1440 body=48 status=ok
// SIG undefined FUN_1453e1440(void)

void FUN_1453e1440(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 1453e1470 FUN_1453e1470 body=200 status=ok
// SIG undefined FUN_1453e1470(void)

undefined1 FUN_1453e1470(longlong param_1,undefined8 param_2,ulonglong *param_3,longlong param_4)

{
  longlong *plVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulonglong local_res8;
  undefined1 local_28 [8];
  longlong local_20 [3];
  
  local_20[1] = 0xfffffffffffffffe;
  local_res8 = local_res8 & 0xffffffff00000000;
  FUN_14516fec0();
  if (((param_1 == 0) || (param_3 == (ulonglong *)0x0)) || (param_4 == 0)) {
    uVar2 = 0;
  }
  else {
    local_res8 = *param_3;
    puVar3 = (undefined8 *)FUN_1453e0a80(local_20,param_1);
    plVar1 = (longlong *)*puVar3;
    uVar4 = FUN_1453e0f90(local_28,param_4);
    uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,param_2,&local_res8,uVar4);
    if (local_20[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_20[0] + 8 + (longlong)*(int *)(*(longlong *)(local_20[0] + 8) + 4)) + 8))
                ();
    }
    *param_3 = local_res8;
  }
  return uVar2;
}



// FUNCTION 1453e1540 FUN_1453e1540 body=221 status=ok
// SIG undefined FUN_1453e1540(void)

undefined1
FUN_1453e1540(longlong param_1,longlong param_2,undefined4 param_3,undefined4 *param_4,
             longlong param_5)

{
  longlong *plVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 local_res8 [2];
  undefined1 local_28 [8];
  longlong local_20 [3];
  
  local_20[1] = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if ((((param_1 == 0) || (param_2 == 0)) || (param_4 == (undefined4 *)0x0)) || (param_5 == 0)) {
    uVar2 = 0;
  }
  else {
    local_res8[0] = *param_4;
    puVar3 = (undefined8 *)FUN_1453e0a80(local_20,param_1);
    plVar1 = (longlong *)*puVar3;
    uVar4 = FUN_1453e0ea0(local_28,param_5);
    uVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,param_2,param_3,local_res8,uVar4);
    if (local_20[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_20[0] + 8 + (longlong)*(int *)(*(longlong *)(local_20[0] + 8) + 4)) + 8))
                ();
    }
    *param_4 = local_res8[0];
  }
  return uVar2;
}



// FUNCTION 1453e1620 FUN_1453e1620 body=221 status=ok
// SIG undefined FUN_1453e1620(void)

undefined1
FUN_1453e1620(longlong param_1,longlong param_2,undefined4 param_3,undefined4 *param_4,
             longlong param_5)

{
  longlong *plVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 local_res8 [2];
  undefined1 local_28 [8];
  longlong local_20 [3];
  
  local_20[1] = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if ((((param_1 == 0) || (param_2 == 0)) || (param_4 == (undefined4 *)0x0)) || (param_5 == 0)) {
    uVar2 = 0;
  }
  else {
    local_res8[0] = *param_4;
    puVar3 = (undefined8 *)FUN_1453e0a80(local_20,param_1);
    plVar1 = (longlong *)*puVar3;
    uVar4 = FUN_1453e0db0(local_28,param_5);
    uVar2 = (**(code **)(*plVar1 + 0x28))(plVar1,param_2,param_3,local_res8,uVar4);
    if (local_20[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_20[0] + 8 + (longlong)*(int *)(*(longlong *)(local_20[0] + 8) + 4)) + 8))
                ();
    }
    *param_4 = local_res8[0];
  }
  return uVar2;
}



// FUNCTION 1453e1700 FUN_1453e1700 body=98 status=ok
// SIG undefined FUN_1453e1700(void)

void FUN_1453e1700(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 local_res8;
  undefined4 uStackX_c;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  local_res8 = 0;
  FUN_14516fec0();
  if (param_1 != 0) {
    puVar2 = (undefined8 *)FUN_1453e0a80(&local_res8,param_1,param_3,param_4,uVar3);
    (**(code **)(*(longlong *)*puVar2 + 0x30))();
    lVar1 = CONCAT44(uStackX_c,local_res8);
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
  }
  return;
}



// FUNCTION 1453e1770 FUN_1453e1770 body=48 status=ok
// SIG undefined FUN_1453e1770(void)

longlong FUN_1453e1770(longlong param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x10,0x18);
    return param_1 + -0x10;
  }
  return param_1 + -0x10;
}



// FUNCTION 1453e17a0 FUN_1453e17a0 body=40 status=ok
// SIG undefined FUN_1453e17a0(void)

int FUN_1453e17a0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  
  pcVar3 = *(code **)(*(longlong *)(param_1 + -0x28) + 8);
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)();
  }
  LOCK();
  piVar1 = (int *)(param_1 + -0x10);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 1453e17d0 FUN_1453e17d0 body=181 status=ok
// SIG undefined FUN_1453e17d0(void)

undefined8 FUN_1453e17d0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if (*(code **)(param_1[-5] + 0x10) != (code *)0x0) {
    (**(code **)(param_1[-5] + 0x10))();
  }
  LOCK();
  piVar1 = (int *)(param_1 + -2);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    puVar3 = param_1 + -6;
    if (puVar3 != (undefined8 *)0x0) {
      param_1[-4] = &PTR_FUN_149d4b518;
      *(undefined ***)((longlong)*(int *)(param_1[-3] + 4) + 0x18 + (longlong)puVar3) =
           &PTR_LAB_149d4b5c8;
      *(int *)((longlong)*(int *)(param_1[-3] + 4) + 0x14 + (longlong)puVar3) =
           *(int *)(param_1[-3] + 4) + -0x18;
      param_1[-4] = &PTR__purecall_149d4b440;
      *(undefined ***)((longlong)*(int *)(param_1[-3] + 4) + 0x18 + (longlong)puVar3) =
           &PTR_LAB_149d4b4f0;
      *(int *)((longlong)*(int *)(param_1[-3] + 4) + 0x14 + (longlong)puVar3) =
           *(int *)(param_1[-3] + 4) + -0x18;
      *param_1 = &PTR__purecall_14ba6c6b0;
      thunk_FUN_1400020a8(puVar3,0x38);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 1453e1890 FUN_1453e1890 body=34 status=ok
// SIG undefined FUN_1453e1890(void)

bool FUN_1453e1890(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*(longlong *)(param_1 + -0x28) + 0x18);
  if (pcVar1 == (code *)0x0) {
    return false;
  }
  iVar2 = (*pcVar1)();
  return iVar2 != 0;
}



// FUNCTION 1453e18c0 FUN_1453e18c0 body=38 status=ok
// SIG undefined FUN_1453e18c0(void)

bool FUN_1453e18c0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + -0x28);
  if (*(longlong *)(lVar1 + 0x18) == 0) {
    return false;
  }
  iVar2 = (**(code **)(lVar1 + 0x20))(lVar1);
  return iVar2 != 0;
}



// FUNCTION 1453e18f0 FUN_1453e18f0 body=11 status=ok
// SIG undefined FUN_1453e18f0(void)

undefined8 FUN_1453e18f0(void)

{
  return 0;
}



// FUNCTION 1453e1900 FUN_1453e1900 body=85 status=ok
// SIG undefined FUN_1453e1900(void)

longlong FUN_1453e1900(longlong param_1,ulonglong param_2)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149d4b440;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149d4b4f0;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x20,0x28);
  }
  return param_1 + -0x20;
}



// FUNCTION 1453e1960 FUN_1453e1960 body=167 status=ok
// SIG undefined FUN_1453e1960(void)

undefined8 * FUN_1453e1960(undefined8 *param_1,int param_2)

{
  if (param_2 != 0) {
    param_1[1] = &DAT_149d4b5f0;
    param_1[4] = &PTR__purecall_14ba6c6b0;
  }
  *param_1 = &PTR__purecall_149d4b368;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) =
       &PTR__purecall_149d4b418;
  *param_1 = &PTR__purecall_149d4b440;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149d4b4f0;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_149d4b518;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149d4b5c8;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  return param_1;
}



// FUNCTION 1453e1a10 FUN_1453e1a10 body=42 status=ok
// SIG undefined FUN_1453e1a10(void)

bool FUN_1453e1a10(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  if ((0x2f < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[5], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 1453e1a40 FUN_1453e1a40 body=214 status=ok
// SIG undefined FUN_1453e1a40(void)

undefined8 * FUN_1453e1a40(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined **local_28;
  undefined8 *local_20;
  char local_18;
  
  uVar6 = 0xfffffffffffffffe;
  uVar4 = 0;
  uVar5 = 0;
  if ((**(ulonglong **)(param_1 + -8) < 0x38) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[6], pcVar1 == (code *)0x0)) {
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    uVar3 = (*pcVar1)();
    local_28 = &PTR_FUN_14ba6d600;
    local_20 = (undefined8 *)0x0;
    local_18 = '\0';
    FUN_144d73b20(&local_28,uVar3);
    puVar2 = local_20;
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    uVar3 = uVar4;
    if (local_20 != (undefined8 *)0x0) {
      uVar4 = *local_20;
      uVar3 = local_20[1];
    }
    FUN_149048250(param_2,uVar4,uVar3,1,uVar5,uVar6);
    if ((puVar2 != (undefined8 *)0x0) && (local_18 != '\0')) {
      cef_string_utf16_clear(puVar2);
      thunk_FUN_1400020a8(puVar2,0x18);
    }
  }
  return param_2;
}



// FUNCTION 1453e1b50 FUN_1453e1b50 body=214 status=ok
// SIG undefined FUN_1453e1b50(void)

undefined8 * FUN_1453e1b50(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined **local_28;
  undefined8 *local_20;
  char local_18;
  
  uVar6 = 0xfffffffffffffffe;
  uVar4 = 0;
  uVar5 = 0;
  if ((**(ulonglong **)(param_1 + -8) < 0x48) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[8], pcVar1 == (code *)0x0)) {
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    uVar3 = (*pcVar1)();
    local_28 = &PTR_FUN_14ba6d600;
    local_20 = (undefined8 *)0x0;
    local_18 = '\0';
    FUN_144d73b20(&local_28,uVar3);
    puVar2 = local_20;
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    uVar3 = uVar4;
    if (local_20 != (undefined8 *)0x0) {
      uVar4 = *local_20;
      uVar3 = local_20[1];
    }
    FUN_149048250(param_2,uVar4,uVar3,1,uVar5,uVar6);
    if ((puVar2 != (undefined8 *)0x0) && (local_18 != '\0')) {
      cef_string_utf16_clear(puVar2);
      thunk_FUN_1400020a8(puVar2,0x18);
    }
  }
  return param_2;
}



// FUNCTION 1453e1c80 FUN_1453e1c80 body=214 status=ok
// SIG undefined FUN_1453e1c80(void)

undefined8 * FUN_1453e1c80(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined **local_28;
  undefined8 *local_20;
  char local_18;
  
  uVar6 = 0xfffffffffffffffe;
  uVar4 = 0;
  uVar5 = 0;
  if ((**(ulonglong **)(param_1 + -8) < 0x60) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0xb], pcVar1 == (code *)0x0)) {
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    uVar3 = (*pcVar1)();
    local_28 = &PTR_FUN_14ba6d600;
    local_20 = (undefined8 *)0x0;
    local_18 = '\0';
    FUN_144d73b20(&local_28,uVar3);
    puVar2 = local_20;
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    uVar3 = uVar4;
    if (local_20 != (undefined8 *)0x0) {
      uVar4 = *local_20;
      uVar3 = local_20[1];
    }
    FUN_149048250(param_2,uVar4,uVar3,1,uVar5,uVar6);
    if ((puVar2 != (undefined8 *)0x0) && (local_18 != '\0')) {
      cef_string_utf16_clear(puVar2);
      thunk_FUN_1400020a8(puVar2,0x18);
    }
  }
  return param_2;
}



// FUNCTION 1453e1d80 FUN_1453e1d80 body=68 status=ok
// SIG undefined FUN_1453e1d80(void)

undefined8 *
FUN_1453e1d80(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if ((0x6f < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0xd], pcVar1 != (code *)0x0)) {
    uVar2 = (*pcVar1)();
    FUN_144d76690(param_2,uVar2,param_3,param_4,uVar3);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1453e1dd0 FUN_1453e1dd0 body=185 status=ok
// SIG undefined FUN_1453e1dd0(void)

void FUN_1453e1dd0(longlong param_1,ulonglong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong local_res8;
  ulonglong *local_res10;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  local_res8 = local_res8 & 0xffffffff00000000;
  puVar1 = *(ulonglong **)(param_1 + -8);
  local_res10 = param_2;
  if ((*puVar1 < 0x78) || (puVar1[0xe] == 0)) {
    uVar2 = *param_2;
    if (uVar2 != 0) {
      (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(uVar2 + 8) + 4) + uVar2 + 8) + 8))
                ();
    }
  }
  else {
    local_res8 = *param_2;
    if (local_res8 != 0) {
      if (local_res8 != 0) {
        (*(code *)**(undefined8 **)
                    (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
      }
      uVar3 = FUN_1453e24a0(&local_res8);
      (*(code *)puVar1[0xe])(puVar1,uVar3,param_3,param_4,uVar4);
      uVar2 = *param_2;
      if (uVar2 != 0) {
        (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(uVar2 + 8) + 4) + uVar2 + 8) + 8
                    ))();
      }
    }
  }
  return;
}



// FUNCTION 1453e1e90 FUN_1453e1e90 body=162 status=ok
// SIG undefined FUN_1453e1e90(void)

void FUN_1453e1e90(longlong param_1,longlong *param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x7f < *puVar1) && (puVar1[0xf] != 0)) {
    lVar2 = cef_string_multimap_alloc();
    if (lVar2 != 0) {
      FUN_14516edb0(param_2,lVar2);
    }
    (*(code *)puVar1[0xf])(puVar1,lVar2);
    if (lVar2 != 0) {
      FUN_1453e2580(param_2,*(undefined8 *)(*param_2 + 8));
      *(longlong *)(*param_2 + 8) = *param_2;
      *(longlong *)*param_2 = *param_2;
      *(longlong *)(*param_2 + 0x10) = *param_2;
      param_2[1] = 0;
      FUN_14516ebd0(lVar2,param_2);
      cef_string_multimap_free(lVar2);
    }
  }
  return;
}



// FUNCTION 1453e1f40 FUN_1453e1f40 body=114 status=ok
// SIG undefined FUN_1453e1f40(void)

void FUN_1453e1f40(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x87 < *puVar1) && (puVar1[0x10] != 0)) {
    lVar2 = cef_string_multimap_alloc();
    if (lVar2 != 0) {
      FUN_14516edb0(param_2,lVar2);
    }
    (*(code *)puVar1[0x10])(puVar1,lVar2);
    if (lVar2 != 0) {
      cef_string_multimap_free(lVar2);
    }
  }
  return;
}



// FUNCTION 1453e1fc0 FUN_1453e1fc0 body=259 status=ok
// SIG undefined FUN_1453e1fc0(void)

undefined8 * FUN_1453e1fc0(longlong param_1,undefined8 *param_2,longlong param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined **local_28;
  undefined8 *local_20;
  char local_18;
  
  uVar6 = 0xfffffffffffffffe;
  uVar4 = 0;
  uVar5 = 0;
  if ((**(ulonglong **)(param_1 + -8) < 0x90) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x11], pcVar1 == (code *)0x0)) {
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else if ((*(longlong *)(param_3 + 8) == 0) || (*(longlong *)(*(longlong *)(param_3 + 8) + 8) == 0)
          ) {
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    uVar3 = (*pcVar1)();
    local_28 = &PTR_FUN_14ba6d600;
    local_20 = (undefined8 *)0x0;
    local_18 = '\0';
    FUN_144d73b20(&local_28,uVar3);
    puVar2 = local_20;
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    uVar3 = uVar4;
    if (local_20 != (undefined8 *)0x0) {
      uVar4 = *local_20;
      uVar3 = local_20[1];
    }
    FUN_149048250(param_2,uVar4,uVar3,1,uVar5,uVar6);
    if ((puVar2 != (undefined8 *)0x0) && (local_18 != '\0')) {
      cef_string_utf16_clear(puVar2);
      thunk_FUN_1400020a8(puVar2,0x18);
    }
  }
  return param_2;
}



// FUNCTION 1453e2110 FUN_1453e2110 body=303 status=ok
// SIG undefined FUN_1453e2110(void)

void FUN_1453e2110(longlong param_1,longlong param_2,longlong param_3,longlong *param_4,
                  undefined8 param_5)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 0xa0) || (puVar1[0x13] == 0)) {
    lVar4 = *param_4;
    if (lVar4 != 0) {
      (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar4 + 8) + 4) + lVar4 + 8) + 8))
                ();
    }
  }
  else if ((*(longlong *)(param_2 + 8) == 0) || (*(longlong *)(*(longlong *)(param_2 + 8) + 8) == 0)
          ) {
    lVar4 = *param_4;
    if (lVar4 != 0) {
      (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar4 + 8) + 4) + lVar4 + 8) + 8))
                ();
    }
  }
  else {
    if ((*(longlong *)(param_3 + 8) != 0) && (*(longlong *)(*(longlong *)(param_3 + 8) + 8) != 0)) {
      lVar4 = cef_string_multimap_alloc();
      if (lVar4 != 0) {
        FUN_14516edb0(param_5,lVar4);
      }
      uVar5 = FUN_1453e2540(local_res8,param_4);
      uVar2 = *(undefined8 *)(param_3 + 8);
      uVar3 = *(undefined8 *)(param_2 + 8);
      uVar5 = FUN_1453e24a0(uVar5);
      (*(code *)puVar1[0x13])(puVar1,uVar3,uVar2,uVar5,lVar4);
      if (lVar4 != 0) {
        cef_string_multimap_free(lVar4);
      }
    }
    FUN_144d76fe0(param_4);
  }
  return;
}



// FUNCTION 1453e2280 FUN_1453e2280 body=220 status=ok
// SIG undefined FUN_1453e2280(void)

undefined8 * FUN_1453e2280(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined **local_28;
  undefined8 *local_20;
  char local_18;
  
  uVar6 = 0xfffffffffffffffe;
  uVar4 = 0;
  uVar5 = 0;
  if ((**(ulonglong **)(param_1 + -8) < 0xb8) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x16], pcVar1 == (code *)0x0)) {
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    uVar3 = (*pcVar1)();
    local_28 = &PTR_FUN_14ba6d600;
    local_20 = (undefined8 *)0x0;
    local_18 = '\0';
    FUN_144d73b20(&local_28,uVar3);
    puVar2 = local_20;
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    uVar3 = uVar4;
    if (local_20 != (undefined8 *)0x0) {
      uVar4 = *local_20;
      uVar3 = local_20[1];
    }
    FUN_149048250(param_2,uVar4,uVar3,1,uVar5,uVar6);
    if ((puVar2 != (undefined8 *)0x0) && (local_18 != '\0')) {
      cef_string_utf16_clear(puVar2);
      thunk_FUN_1400020a8(puVar2,0x18);
    }
  }
  return param_2;
}



// FUNCTION 1453e2410 FUN_1453e2410 body=143 status=ok
// SIG undefined FUN_1453e2410(void)

undefined8 * FUN_1453e2410(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -4;
  *puVar1 = &PTR_FUN_149d4b518;
  *(undefined ***)((longlong)*(int *)(param_1[-3] + 4) + -0x18 + (longlong)param_1) =
       &PTR_LAB_149d4b5c8;
  *(int *)((longlong)*(int *)(param_1[-3] + 4) + -0x1c + (longlong)param_1) =
       *(int *)(param_1[-3] + 4) + -0x18;
  *puVar1 = &PTR__purecall_149d4b440;
  *(undefined ***)((longlong)*(int *)(param_1[-3] + 4) + -0x18 + (longlong)param_1) =
       &PTR_LAB_149d4b4f0;
  *(int *)((longlong)*(int *)(param_1[-3] + 4) + -0x1c + (longlong)param_1) =
       *(int *)(param_1[-3] + 4) + -0x18;
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(puVar1,0x28);
  }
  return puVar1;
}



// FUNCTION 1453e24a0 FUN_1453e24a0 body=156 status=ok
// SIG undefined FUN_1453e24a0(void)

undefined8 FUN_1453e24a0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else if (*(int *)(lVar1 + -0x10) == DAT_14c7078d8) {
    pcVar2 = *(code **)(*(longlong *)(lVar1 + -8) + 8);
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)();
    }
    uVar3 = *(undefined8 *)(lVar1 + -8);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
  }
  else {
    uVar3 = FUN_144d768d0(*(int *)(lVar1 + -0x10),lVar1,param_3,param_4,0xfffffffffffffffe);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
  }
  return uVar3;
}



// FUNCTION 1453e2540 FUN_1453e2540 body=49 status=ok
// SIG undefined FUN_1453e2540(void)

longlong * FUN_1453e2540(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)))();
  }
  return param_1;
}



// FUNCTION 1453e2580 FUN_1453e2580 body=211 status=ok
// SIG undefined FUN_1453e2580(void)

void FUN_1453e2580(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x19);
  while (cVar1 == '\0') {
    FUN_1453e2580(param_1,param_2[2]);
    plVar2 = (longlong *)*param_2;
    param_2[7] = (longlong)&PTR_FUN_14ba6d600;
    if (param_2[8] != 0) {
      if ((char)param_2[9] != '\0') {
        cef_string_utf16_clear();
        thunk_FUN_1400020a8(param_2[8],0x18);
      }
      param_2[8] = 0;
      *(undefined1 *)(param_2 + 9) = 0;
    }
    param_2[4] = (longlong)&PTR_FUN_14ba6d600;
    if (param_2[5] != 0) {
      if ((char)param_2[6] != '\0') {
        cef_string_utf16_clear();
        thunk_FUN_1400020a8(param_2[5],0x18);
      }
      param_2[5] = 0;
      *(undefined1 *)(param_2 + 6) = 0;
    }
    thunk_FUN_1400020a8(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}



// FUNCTION 1453e26a0 FUN_1453e26a0 body=48 status=ok
// SIG undefined FUN_1453e26a0(void)

longlong FUN_1453e26a0(longlong param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x10,0x18);
    return param_1 + -0x10;
  }
  return param_1 + -0x10;
}



// FUNCTION 1453e26d0 FUN_1453e26d0 body=40 status=ok
// SIG undefined FUN_1453e26d0(void)

int FUN_1453e26d0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  
  pcVar3 = *(code **)(*(longlong *)(param_1 + -0x28) + 8);
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)();
  }
  LOCK();
  piVar1 = (int *)(param_1 + -0x10);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 1453e2700 FUN_1453e2700 body=181 status=ok
// SIG undefined FUN_1453e2700(void)

undefined8 FUN_1453e2700(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if (*(code **)(param_1[-5] + 0x10) != (code *)0x0) {
    (**(code **)(param_1[-5] + 0x10))();
  }
  LOCK();
  piVar1 = (int *)(param_1 + -2);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    puVar3 = param_1 + -6;
    if (puVar3 != (undefined8 *)0x0) {
      param_1[-4] = &PTR_FUN_149d4ba78;
      *(undefined ***)((longlong)*(int *)(param_1[-3] + 4) + 0x18 + (longlong)puVar3) =
           &PTR_LAB_149d4bbf0;
      *(int *)((longlong)*(int *)(param_1[-3] + 4) + 0x14 + (longlong)puVar3) =
           *(int *)(param_1[-3] + 4) + -0x18;
      param_1[-4] = &PTR__purecall_149d4b8d8;
      *(undefined ***)((longlong)*(int *)(param_1[-3] + 4) + 0x18 + (longlong)puVar3) =
           &PTR_LAB_149d4ba50;
      *(int *)((longlong)*(int *)(param_1[-3] + 4) + 0x14 + (longlong)puVar3) =
           *(int *)(param_1[-3] + 4) + -0x18;
      *param_1 = &PTR__purecall_14ba6c6b0;
      thunk_FUN_1400020a8(puVar3,0x38);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 1453e27c0 FUN_1453e27c0 body=34 status=ok
// SIG undefined FUN_1453e27c0(void)

bool FUN_1453e27c0(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*(longlong *)(param_1 + -0x28) + 0x18);
  if (pcVar1 == (code *)0x0) {
    return false;
  }
  iVar2 = (*pcVar1)();
  return iVar2 != 0;
}



// FUNCTION 1453e27f0 FUN_1453e27f0 body=38 status=ok
// SIG undefined FUN_1453e27f0(void)

bool FUN_1453e27f0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + -0x28);
  if (*(longlong *)(lVar1 + 0x18) == 0) {
    return false;
  }
  iVar2 = (**(code **)(lVar1 + 0x20))(lVar1);
  return iVar2 != 0;
}



// FUNCTION 1453e2820 FUN_1453e2820 body=11 status=ok
// SIG undefined FUN_1453e2820(void)

undefined8 FUN_1453e2820(void)

{
  return 0;
}



// FUNCTION 1453e2830 FUN_1453e2830 body=85 status=ok
// SIG undefined FUN_1453e2830(void)

longlong FUN_1453e2830(longlong param_1,ulonglong param_2)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149d4b8d8;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149d4ba50;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x20,0x28);
  }
  return param_1 + -0x20;
}



// FUNCTION 1453e2890 FUN_1453e2890 body=167 status=ok
// SIG undefined FUN_1453e2890(void)

undefined8 * FUN_1453e2890(undefined8 *param_1,int param_2)

{
  if (param_2 != 0) {
    param_1[1] = &DAT_149d4bc18;
    param_1[4] = &PTR__purecall_14ba6c6b0;
  }
  *param_1 = &PTR__purecall_149d4b738;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) =
       &PTR__purecall_149d4b8b0;
  *param_1 = &PTR__purecall_149d4b8d8;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149d4ba50;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_149d4ba78;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149d4bbf0;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  return param_1;
}



// FUNCTION 1453e2940 FUN_1453e2940 body=42 status=ok
// SIG undefined FUN_1453e2940(void)

bool FUN_1453e2940(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  if ((0x2f < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[5], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 1453e2970 FUN_1453e2970 body=42 status=ok
// SIG undefined FUN_1453e2970(void)

bool FUN_1453e2970(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  if ((0x37 < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[6], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 1453e29a0 FUN_1453e29a0 body=42 status=ok
// SIG undefined FUN_1453e29a0(void)

bool FUN_1453e29a0(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  if ((0x3f < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[7], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 1453e29d0 FUN_1453e29d0 body=42 status=ok
// SIG undefined FUN_1453e29d0(void)

bool FUN_1453e29d0(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  if ((0x47 < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[8], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 1453e2a00 FUN_1453e2a00 body=42 status=ok
// SIG undefined FUN_1453e2a00(void)

bool FUN_1453e2a00(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  if ((0x4f < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[9], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 1453e2a30 FUN_1453e2a30 body=42 status=ok
// SIG undefined FUN_1453e2a30(void)

bool FUN_1453e2a30(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  if ((0x57 < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[10], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 1453e2a60 FUN_1453e2a60 body=42 status=ok
// SIG undefined FUN_1453e2a60(void)

bool FUN_1453e2a60(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  if ((0x5f < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0xb], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 1453e2a90 FUN_1453e2a90 body=42 status=ok
// SIG undefined FUN_1453e2a90(void)

bool FUN_1453e2a90(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  if ((0x67 < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0xc], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 1453e2ac0 FUN_1453e2ac0 body=42 status=ok
// SIG undefined FUN_1453e2ac0(void)

bool FUN_1453e2ac0(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  if ((0x6f < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0xd], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 1453e2af0 FUN_1453e2af0 body=42 status=ok
// SIG undefined FUN_1453e2af0(void)

bool FUN_1453e2af0(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  if ((0x77 < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0xe], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 1453e2b20 FUN_1453e2b20 body=45 status=ok
// SIG undefined FUN_1453e2b20(void)

bool FUN_1453e2b20(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  if ((0x7f < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0xf], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 1453e2b50 FUN_1453e2b50 body=48 status=ok
// SIG undefined FUN_1453e2b50(void)

bool FUN_1453e2b50(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  if ((0x87 < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x10], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 1453e2b80 FUN_1453e2b80 body=48 status=ok
// SIG undefined FUN_1453e2b80(void)

bool FUN_1453e2b80(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  if ((0x8f < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x11], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 1453e2bb0 FUN_1453e2bb0 body=205 status=ok
// SIG undefined FUN_1453e2bb0(void)

ulonglong FUN_1453e2bb0(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong in_RAX;
  undefined8 uVar4;
  ulonglong local_res8;
  ulonglong *local_res10;
  
  local_res8 = local_res8 & 0xffffffff00000000;
  puVar1 = *(ulonglong **)(param_1 + -8);
  local_res10 = param_2;
  if ((*puVar1 < 0x98) || (puVar1[0x12] == 0)) {
    uVar2 = *param_2;
    if (uVar2 != 0) {
      in_RAX = (**(code **)(*(longlong *)
                             ((longlong)*(int *)(*(longlong *)(uVar2 + 8) + 4) + uVar2 + 8) + 8))();
    }
  }
  else {
    local_res8 = *param_2;
    if (local_res8 != 0) {
      if (local_res8 != 0) {
        (*(code *)**(undefined8 **)
                    (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
      }
      uVar4 = FUN_14516afb0(&local_res8);
      iVar3 = (*(code *)puVar1[0x12])(puVar1,uVar4);
      uVar2 = *param_2;
      if (uVar2 != 0) {
        (**(code **)(*(longlong *)(uVar2 + 8 + (longlong)*(int *)(*(longlong *)(uVar2 + 8) + 4)) + 8
                    ))();
      }
      return (ulonglong)(iVar3 != 0);
    }
    in_RAX = 0;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1453e2c80 FUN_1453e2c80 body=48 status=ok
// SIG undefined FUN_1453e2c80(void)

bool FUN_1453e2c80(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  if ((0x9f < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x13], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 1453e2d10 FUN_1453e2d10 body=146 status=ok
// SIG undefined FUN_1453e2d10(void)

undefined8 *
FUN_1453e2d10(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 local_30 [40];
  
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 0xc0) || ((code *)puVar1[0x17] == (code *)0x0)) {
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
  }
  else {
    puVar6 = (undefined8 *)(*(code *)puVar1[0x17])(local_30,puVar1,param_3,param_4,0);
    uVar2 = *puVar6;
    uVar3 = puVar6[1];
    uVar4 = puVar6[2];
    uVar5 = puVar6[3];
    puVar6 = param_2 + 1;
    if (param_2 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)0x0;
    }
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    param_2[5] = 0;
    param_2[1] = uVar2;
    param_2[2] = uVar3;
    param_2[3] = uVar4;
    param_2[4] = uVar5;
  }
  *param_2 = &PTR_FUN_149c39750;
  return param_2;
}



// FUNCTION 1453e2db0 FUN_1453e2db0 body=220 status=ok
// SIG undefined FUN_1453e2db0(void)

undefined8 * FUN_1453e2db0(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined **local_28;
  undefined8 *local_20;
  char local_18;
  
  uVar6 = 0xfffffffffffffffe;
  uVar4 = 0;
  uVar5 = 0;
  if ((**(ulonglong **)(param_1 + -8) < 200) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x18], pcVar1 == (code *)0x0)) {
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    uVar3 = (*pcVar1)();
    local_28 = &PTR_FUN_14ba6d600;
    local_20 = (undefined8 *)0x0;
    local_18 = '\0';
    FUN_144d73b20(&local_28,uVar3);
    puVar2 = local_20;
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    uVar3 = uVar4;
    if (local_20 != (undefined8 *)0x0) {
      uVar4 = *local_20;
      uVar3 = local_20[1];
    }
    FUN_149048250(param_2,uVar4,uVar3,1,uVar5,uVar6);
    if ((puVar2 != (undefined8 *)0x0) && (local_18 != '\0')) {
      cef_string_utf16_clear(puVar2);
      thunk_FUN_1400020a8(puVar2,0x18);
    }
  }
  return param_2;
}



// FUNCTION 1453e2e90 FUN_1453e2e90 body=48 status=ok
// SIG undefined FUN_1453e2e90(void)

bool FUN_1453e2e90(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  if ((0xcf < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x19], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 1453e2ec0 FUN_1453e2ec0 body=48 status=ok
// SIG undefined FUN_1453e2ec0(void)

bool FUN_1453e2ec0(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  if ((0xd7 < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x1a], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 1453e2ef0 FUN_1453e2ef0 body=74 status=ok
// SIG undefined FUN_1453e2ef0(void)

undefined8 *
FUN_1453e2ef0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if ((0xdf < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x1b], pcVar1 != (code *)0x0)) {
    uVar2 = (*pcVar1)();
    FUN_1453dfa20(param_2,uVar2,param_3,param_4,uVar3);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1453e2f40 FUN_1453e2f40 body=48 status=ok
// SIG undefined FUN_1453e2f40(void)

bool FUN_1453e2f40(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  if ((0xe7 < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x1c], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 1453e2f70 FUN_1453e2f70 body=48 status=ok
// SIG undefined FUN_1453e2f70(void)

bool FUN_1453e2f70(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  if ((0xef < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x1d], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 1453e2fa0 FUN_1453e2fa0 body=51 status=ok
// SIG undefined FUN_1453e2fa0(void)

bool FUN_1453e2fa0(longlong param_1,undefined1 param_2)

{
  ulonglong *puVar1;
  int iVar2;
  
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0xf7 < *puVar1) && ((code *)puVar1[0x1e] != (code *)0x0)) {
    iVar2 = (*(code *)puVar1[0x1e])(puVar1,param_2);
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 1453e2fe0 FUN_1453e2fe0 body=52 status=ok
// SIG undefined FUN_1453e2fe0(void)

bool FUN_1453e2fe0(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  int iVar2;
  
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0xff < *puVar1) && ((code *)puVar1[0x1f] != (code *)0x0)) {
    iVar2 = (*(code *)puVar1[0x1f])(puVar1,*(undefined8 *)(param_2 + 8));
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 1453e3020 FUN_1453e3020 body=52 status=ok
// SIG undefined FUN_1453e3020(void)

bool FUN_1453e3020(longlong param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  
  if (((0x107 < **(ulonglong **)(param_1 + -8)) &&
      (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x20], pcVar1 != (code *)0x0)) &&
     (-1 < param_2)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 1453e3060 FUN_1453e3060 body=52 status=ok
// SIG undefined FUN_1453e3060(void)

bool FUN_1453e3060(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  int iVar2;
  
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x10f < *puVar1) && ((code *)puVar1[0x21] != (code *)0x0)) {
    iVar2 = (*(code *)puVar1[0x21])(puVar1,*(undefined8 *)(param_2 + 8));
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 1453e30a0 FUN_1453e30a0 body=52 status=ok
// SIG undefined FUN_1453e30a0(void)

bool FUN_1453e30a0(longlong param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  
  if (((0x117 < **(ulonglong **)(param_1 + -8)) &&
      (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x22], pcVar1 != (code *)0x0)) &&
     (-1 < param_2)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 1453e30e0 FUN_1453e30e0 body=78 status=ok
// SIG undefined FUN_1453e30e0(void)

undefined8 * FUN_1453e30e0(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x11f < *puVar1) && ((code *)puVar1[0x23] != (code *)0x0)) {
    uVar2 = (*(code *)puVar1[0x23])(puVar1,*(undefined8 *)(param_3 + 8),param_3,param_4,0);
    FUN_14516aec0(param_2,uVar2);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1453e3130 FUN_1453e3130 body=82 status=ok
// SIG undefined FUN_1453e3130(void)

undefined8 * FUN_1453e3130(longlong param_1,undefined8 *param_2,int param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(ulonglong **)(param_1 + -8);
  if (((0x127 < *puVar1) && ((code *)puVar1[0x24] != (code *)0x0)) && (-1 < param_3)) {
    uVar2 = (*(code *)puVar1[0x24])(puVar1,param_3,param_3,param_4,0);
    FUN_14516aec0(param_2,uVar2);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1453e3190 FUN_1453e3190 body=226 status=ok
// SIG undefined FUN_1453e3190(void)

ulonglong FUN_1453e3190(longlong param_1,longlong param_2,ulonglong *param_3,undefined4 param_4)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong in_RAX;
  undefined8 uVar5;
  ulonglong local_res8;
  undefined8 uVar6;
  
  uVar6 = 0xfffffffffffffffe;
  local_res8 = local_res8 & 0xffffffff00000000;
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 0x130) || (puVar1[0x25] == 0)) {
    uVar3 = *param_3;
    if (uVar3 != 0) {
      in_RAX = (**(code **)(*(longlong *)
                             ((longlong)*(int *)(*(longlong *)(uVar3 + 8) + 4) + uVar3 + 8) + 8))();
    }
  }
  else {
    local_res8 = *param_3;
    if (local_res8 != 0) {
      if (local_res8 != 0) {
        (*(code *)**(undefined8 **)
                    (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
      }
      uVar2 = *(undefined8 *)(param_2 + 8);
      uVar5 = FUN_14516afb0(&local_res8);
      iVar4 = (*(code *)puVar1[0x25])(puVar1,uVar2,uVar5,param_4,uVar6);
      uVar3 = *param_3;
      if (uVar3 != 0) {
        (**(code **)(*(longlong *)(uVar3 + 8 + (longlong)*(int *)(*(longlong *)(uVar3 + 8) + 4)) + 8
                    ))();
      }
      return (ulonglong)(iVar4 != 0);
    }
    in_RAX = 0;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1453e3280 FUN_1453e3280 body=218 status=ok
// SIG undefined FUN_1453e3280(void)

ulonglong FUN_1453e3280(longlong param_1,int param_2,longlong *param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  longlong lVar2;
  int iVar3;
  ulonglong in_RAX;
  undefined8 uVar4;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 0x138) || (puVar1[0x26] == 0)) {
    lVar2 = *param_3;
    if (lVar2 != 0) {
      in_RAX = (**(code **)(*(longlong *)
                             ((longlong)*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))();
    }
  }
  else if (param_2 < 0) {
    lVar2 = *param_3;
    if (lVar2 != 0) {
      in_RAX = (**(code **)(*(longlong *)
                             ((longlong)*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))();
    }
  }
  else {
    if (*param_3 != 0) {
      uVar4 = FUN_1453e3f00(local_res8,param_3,param_3,param_4,0xfffffffffffffffe);
      uVar4 = FUN_14516afb0(uVar4);
      iVar3 = (*(code *)puVar1[0x26])(puVar1,param_2,uVar4);
      FUN_14516b050(param_3);
      return (ulonglong)(iVar3 != 0);
    }
    in_RAX = FUN_14516b050(param_3);
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1453e3360 FUN_1453e3360 body=52 status=ok
// SIG undefined FUN_1453e3360(void)

bool FUN_1453e3360(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  int iVar2;
  
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x13f < *puVar1) && ((code *)puVar1[0x27] != (code *)0x0)) {
    iVar2 = (*(code *)puVar1[0x27])(puVar1,*(undefined8 *)(param_2 + 8));
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 1453e33a0 FUN_1453e33a0 body=153 status=ok
// SIG undefined FUN_1453e33a0(void)

bool FUN_1453e33a0(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  int iVar2;
  longlong lVar3;
  
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x147 < *puVar1) && (puVar1[0x28] != 0)) {
    lVar3 = cef_string_list_alloc();
    if (lVar3 != 0) {
      FUN_14516e860(param_2,lVar3);
    }
    iVar2 = (*(code *)puVar1[0x28])(puVar1,lVar3);
    if (lVar3 != 0) {
      FUN_144d739a0(param_2);
      FUN_14516e770(lVar3,param_2);
      cef_string_list_free(lVar3);
    }
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 1453e3440 FUN_1453e3440 body=145 status=ok
// SIG undefined FUN_1453e3440(void)

ulonglong FUN_1453e3440(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  int iVar2;
  ulonglong in_RAX;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 *local_res8;
  longlong *local_res10;
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  puVar1 = *(ulonglong **)(param_1 + -8);
  local_res10 = param_2;
  if ((*puVar1 < 0x150) || (puVar1[0x29] == 0)) {
    if ((longlong *)*param_2 != (longlong *)0x0) {
      in_RAX = (**(code **)(*(longlong *)*param_2 + 8))();
    }
    uVar4 = in_RAX & 0xffffffffffffff00;
  }
  else {
    local_res8 = (undefined8 *)*param_2;
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)();
    }
    uVar3 = FUN_1453e3bc0(&local_res8);
    iVar2 = (*(code *)puVar1[0x29])(puVar1,uVar3,param_3,param_4,uVar5);
    if ((longlong *)*param_2 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_2 + 8))();
    }
    uVar4 = (ulonglong)(iVar2 != 0);
  }
  return uVar4;
}



// FUNCTION 1453e34e0 FUN_1453e34e0 body=74 status=ok
// SIG undefined FUN_1453e34e0(void)

undefined8 *
FUN_1453e34e0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if ((0x157 < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x2a], pcVar1 != (code *)0x0)) {
    uVar2 = (*pcVar1)();
    FUN_1453e3c40(param_2,uVar2,param_3,param_4,uVar3);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1453e3590 FUN_1453e3590 body=74 status=ok
// SIG undefined FUN_1453e3590(void)

undefined8 *
FUN_1453e3590(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if ((0x177 < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x2e], pcVar1 != (code *)0x0)) {
    uVar2 = (*pcVar1)();
    FUN_1453e3ce0(param_2,uVar2,param_3,param_4,uVar3);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1453e35e0 FUN_1453e35e0 body=48 status=ok
// SIG undefined FUN_1453e35e0(void)

bool FUN_1453e35e0(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  if ((0x17f < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x2f], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 1453e3610 FUN_1453e3610 body=220 status=ok
// SIG undefined FUN_1453e3610(void)

undefined8 * FUN_1453e3610(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined **local_28;
  undefined8 *local_20;
  char local_18;
  
  uVar6 = 0xfffffffffffffffe;
  uVar4 = 0;
  uVar5 = 0;
  if ((**(ulonglong **)(param_1 + -8) < 0x188) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x30], pcVar1 == (code *)0x0)) {
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    uVar3 = (*pcVar1)();
    local_28 = &PTR_FUN_14ba6d600;
    local_20 = (undefined8 *)0x0;
    local_18 = '\0';
    FUN_144d73b20(&local_28,uVar3);
    puVar2 = local_20;
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    uVar3 = uVar4;
    if (local_20 != (undefined8 *)0x0) {
      uVar4 = *local_20;
      uVar3 = local_20[1];
    }
    FUN_149048250(param_2,uVar4,uVar3,1,uVar5,uVar6);
    if ((puVar2 != (undefined8 *)0x0) && (local_18 != '\0')) {
      cef_string_utf16_clear(puVar2);
      thunk_FUN_1400020a8(puVar2,0x18);
    }
  }
  return param_2;
}



// FUNCTION 1453e36f0 FUN_1453e36f0 body=74 status=ok
// SIG undefined FUN_1453e36f0(void)

undefined8 *
FUN_1453e36f0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if ((399 < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x31], pcVar1 != (code *)0x0)) {
    uVar2 = (*pcVar1)();
    FUN_1453e3da0(param_2,uVar2,param_3,param_4,uVar3);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1453e3740 FUN_1453e3740 body=390 status=ok
// SIG undefined FUN_1453e3740(void)

undefined8 * FUN_1453e3740(longlong param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  ulonglong *puVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong local_res8;
  undefined4 uVar8;
  undefined8 uVar9;
  
  uVar9 = 0xfffffffffffffffe;
  uVar6 = 0;
  uVar8 = 0;
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 0x198) || (puVar1[0x32] == 0)) {
    *param_2 = 0;
    lVar2 = *param_3;
    if (lVar2 != 0) {
      (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))
                ();
    }
  }
  else {
    uVar7 = param_4[1] - *param_4 >> 3;
    uVar5 = uVar6;
    if (uVar7 != 0) {
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar7;
      uVar4 = SUB168(ZEXT816(8) * auVar3,0);
      if (SUB168(ZEXT816(8) * auVar3,8) != 0) {
        uVar4 = 0xffffffffffffffff;
      }
      uVar5 = FUN_144a7d36f(uVar4);
      if ((uVar5 != 0) && (uVar7 != 0)) {
        do {
          local_res8 = *(longlong *)(*param_4 + uVar6 * 8);
          if (local_res8 != 0) {
            (*(code *)**(undefined8 **)
                        (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
          }
          uVar4 = FUN_14516afb0(&local_res8);
          *(undefined8 *)(uVar5 + uVar6 * 8) = uVar4;
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar7);
      }
    }
    local_res8 = *param_3;
    if (local_res8 != 0) {
      (*(code *)**(undefined8 **)
                  (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
    }
    uVar4 = FUN_14516afb0(&local_res8);
    uVar9 = (*(code *)puVar1[0x32])(puVar1,uVar4,uVar7,uVar5,uVar8,uVar9);
    if (uVar5 != 0) {
      thunk_FUN_1400020a8(uVar5);
    }
    FUN_14516aec0(param_2,uVar9);
    lVar2 = *param_3;
    if (lVar2 != 0) {
      (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))
                ();
    }
  }
  return param_2;
}



// FUNCTION 1453e38d0 FUN_1453e38d0 body=608 status=ok
// SIG undefined FUN_1453e38d0(void)

undefined8 *
FUN_1453e38d0(longlong param_1,undefined8 *param_2,longlong *param_3,longlong *param_4,
             longlong *param_5)

{
  ulonglong *puVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong local_res8;
  longlong local_50 [3];
  
  local_50[1] = 0xfffffffffffffffe;
  uVar7 = 0;
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 0x1a0) || (puVar1[0x33] == 0)) {
    *param_2 = 0;
    lVar2 = *param_3;
    if (lVar2 != 0) {
      (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))
                ();
    }
    lVar2 = *param_4;
    if (lVar2 != 0) {
      (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))
                ();
    }
  }
  else if (*param_3 == 0) {
    *param_2 = 0;
    lVar2 = *param_3;
    if (lVar2 != 0) {
      (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))
                ();
    }
    lVar2 = *param_4;
    if (lVar2 != 0) {
      (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))
                ();
    }
  }
  else {
    uVar8 = param_5[1] - *param_5 >> 3;
    uVar5 = uVar7;
    if (uVar8 != 0) {
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar8;
      uVar4 = SUB168(ZEXT816(8) * auVar3,0);
      if (SUB168(ZEXT816(8) * auVar3,8) != 0) {
        uVar4 = 0xffffffffffffffff;
      }
      uVar5 = FUN_144a7d36f(uVar4);
      if ((uVar5 != 0) && (uVar8 != 0)) {
        do {
          local_res8 = *(longlong *)(*param_5 + uVar7 * 8);
          if (local_res8 != 0) {
            (*(code *)**(undefined8 **)
                        (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
          }
          uVar4 = FUN_14516afb0(&local_res8);
          *(undefined8 *)(uVar5 + uVar7 * 8) = uVar4;
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar8);
      }
    }
    local_res8 = *param_4;
    if (local_res8 != 0) {
      (*(code *)**(undefined8 **)
                  (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
    }
    uVar4 = FUN_14516afb0(&local_res8);
    local_50[0] = *param_3;
    if (local_50[0] != 0) {
      (*(code *)**(undefined8 **)
                  (local_50[0] + 8 + (longlong)*(int *)(*(longlong *)(local_50[0] + 8) + 4)))();
    }
    uVar6 = FUN_1453e3e60(local_50);
    uVar4 = (*(code *)puVar1[0x33])(puVar1,uVar6,uVar4,uVar8,uVar5);
    if (uVar5 != 0) {
      thunk_FUN_1400020a8(uVar5);
    }
    FUN_14516aec0(param_2,uVar4);
    lVar2 = *param_3;
    if (lVar2 != 0) {
      (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))
                ();
    }
    lVar2 = *param_4;
    if (lVar2 != 0) {
      (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))
                ();
    }
  }
  return param_2;
}



// FUNCTION 1453e3b30 FUN_1453e3b30 body=143 status=ok
// SIG undefined FUN_1453e3b30(void)

undefined8 * FUN_1453e3b30(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -4;
  *puVar1 = &PTR_FUN_149d4ba78;
  *(undefined ***)((longlong)*(int *)(param_1[-3] + 4) + -0x18 + (longlong)param_1) =
       &PTR_LAB_149d4bbf0;
  *(int *)((longlong)*(int *)(param_1[-3] + 4) + -0x1c + (longlong)param_1) =
       *(int *)(param_1[-3] + 4) + -0x18;
  *puVar1 = &PTR__purecall_149d4b8d8;
  *(undefined ***)((longlong)*(int *)(param_1[-3] + 4) + -0x18 + (longlong)param_1) =
       &PTR_LAB_149d4ba50;
  *(int *)((longlong)*(int *)(param_1[-3] + 4) + -0x1c + (longlong)param_1) =
       *(int *)(param_1[-3] + 4) + -0x18;
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(puVar1,0x28);
  }
  return puVar1;
}



// FUNCTION 1453e3bc0 FUN_1453e3bc0 body=120 status=ok
// SIG undefined FUN_1453e3bc0(void)

undefined8 * FUN_1453e3bc0(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (*param_1 == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    lVar1 = FUN_14494321d(0x50);
    if (lVar1 == 0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      puVar2 = (undefined8 *)FUN_14557d5d0(lVar1);
    }
    puVar2[2] = *param_1;
    (**(code **)*puVar2)(puVar2);
    if ((longlong *)*param_1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_1 + 8))();
    }
    puVar2 = puVar2 + 4;
  }
  return puVar2;
}



// FUNCTION 1453e3c40 FUN_1453e3c40 body=152 status=ok
// SIG undefined FUN_1453e3c40(void)

longlong * FUN_1453e3c40(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  if (param_2 == 0) {
    *param_1 = 0;
  }
  else if (*(int *)(param_2 + -0x18) == DAT_14c7467cc) {
    plVar1 = *(longlong **)(param_2 + -0x10);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)*plVar1)(plVar1);
    }
    (**(code **)(**(longlong **)(param_2 + -8) + 8))();
    *param_1 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)*plVar1)(plVar1);
      (**(code **)(*plVar1 + 8))(plVar1);
    }
  }
  else {
    FUN_14557d4d0(param_1,*(int *)(param_2 + -0x18),param_2,param_4,0,0xfffffffffffffffe);
  }
  return param_1;
}



// FUNCTION 1453e3ce0 FUN_1453e3ce0 body=188 status=ok
// SIG undefined FUN_1453e3ce0(void)

longlong * FUN_1453e3ce0(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  if (param_2 == 0) {
    *param_1 = 0;
  }
  else if (*(int *)(param_2 + -0x18) == DAT_14c7467d0) {
    lVar1 = *(longlong *)(param_2 + -0x10);
    if (lVar1 != 0) {
      (*(code *)**(undefined8 **)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + 8 + lVar1))();
    }
    (**(code **)(**(longlong **)(param_2 + -8) + 8))();
    *param_1 = lVar1;
    if (lVar1 != 0) {
      (*(code *)**(undefined8 **)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + 8 + lVar1))();
      (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + 8 + lVar1) + 8))
                ();
    }
  }
  else {
    FUN_14557d660(param_1,*(int *)(param_2 + -0x18),param_2,param_4,0,0xfffffffffffffffe);
  }
  return param_1;
}



// FUNCTION 1453e3da0 FUN_1453e3da0 body=188 status=ok
// SIG undefined FUN_1453e3da0(void)

longlong * FUN_1453e3da0(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  if (param_2 == 0) {
    *param_1 = 0;
  }
  else if (*(int *)(param_2 + -0x18) == DAT_14c7301e8) {
    lVar1 = *(longlong *)(param_2 + -0x10);
    if (lVar1 != 0) {
      (*(code *)**(undefined8 **)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + 8 + lVar1))();
    }
    (**(code **)(**(longlong **)(param_2 + -8) + 8))();
    *param_1 = lVar1;
    if (lVar1 != 0) {
      (*(code *)**(undefined8 **)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + 8 + lVar1))();
      (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + 8 + lVar1) + 8))
                ();
    }
  }
  else {
    FUN_14516aea0(param_1,*(int *)(param_2 + -0x18),param_2,param_4,0,0xfffffffffffffffe);
  }
  return param_1;
}



// FUNCTION 1453e3e60 FUN_1453e3e60 body=156 status=ok
// SIG undefined FUN_1453e3e60(void)

undefined8 FUN_1453e3e60(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else if (*(int *)(lVar1 + -0x10) == DAT_14c744188) {
    pcVar2 = *(code **)(*(longlong *)(lVar1 + -8) + 8);
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)();
    }
    uVar3 = *(undefined8 *)(lVar1 + -8);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
  }
  else {
    uVar3 = FUN_1453e5f10(*(int *)(lVar1 + -0x10),lVar1,param_3,param_4,0xfffffffffffffffe);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
  }
  return uVar3;
}



// FUNCTION 1453e3f00 FUN_1453e3f00 body=49 status=ok
// SIG undefined FUN_1453e3f00(void)

longlong * FUN_1453e3f00(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)))();
  }
  return param_1;
}



// FUNCTION 1453e3f40 FUN_1453e3f40 body=48 status=ok
// SIG undefined FUN_1453e3f40(void)

void FUN_1453e3f40(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 1453e3f70 FUN_1453e3f70 body=33 status=ok
// SIG undefined FUN_1453e3f70(void)

void FUN_1453e3f70(longlong *param_1)

{
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 8))();
  }
  return;
}



// FUNCTION 1453e3fe0 FUN_1453e3fe0 body=48 status=ok
// SIG undefined FUN_1453e3fe0(void)

longlong FUN_1453e3fe0(longlong param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x10,0x18);
    return param_1 + -0x10;
  }
  return param_1 + -0x10;
}



// FUNCTION 1453e4010 FUN_1453e4010 body=40 status=ok
// SIG undefined FUN_1453e4010(void)

int FUN_1453e4010(longlong param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  
  pcVar3 = *(code **)(*(longlong *)(param_1 + -0x28) + 8);
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)();
  }
  LOCK();
  piVar1 = (int *)(param_1 + -0x10);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 1453e4040 FUN_1453e4040 body=105 status=ok
// SIG undefined FUN_1453e4040(void)

undefined8 FUN_1453e4040(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(code **)(param_1[-5] + 0x10) != (code *)0x0) {
    (**(code **)(param_1[-5] + 0x10))();
  }
  LOCK();
  piVar1 = (int *)(param_1 + -2);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    if (param_1 + -6 != (undefined8 *)0x0) {
      FUN_1453e4220(param_1);
      *param_1 = &PTR__purecall_14ba6c6b0;
      thunk_FUN_1400020a8(param_1 + -6,0x38);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 1453e40b0 FUN_1453e40b0 body=34 status=ok
// SIG undefined FUN_1453e40b0(void)

bool FUN_1453e40b0(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*(longlong *)(param_1 + -0x28) + 0x18);
  if (pcVar1 == (code *)0x0) {
    return false;
  }
  iVar2 = (*pcVar1)();
  return iVar2 != 0;
}



// FUNCTION 1453e40e0 FUN_1453e40e0 body=38 status=ok
// SIG undefined FUN_1453e40e0(void)

bool FUN_1453e40e0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + -0x28);
  if (*(longlong *)(lVar1 + 0x18) == 0) {
    return false;
  }
  iVar2 = (**(code **)(lVar1 + 0x20))(lVar1);
  return iVar2 != 0;
}



// FUNCTION 1453e4110 FUN_1453e4110 body=85 status=ok
// SIG undefined FUN_1453e4110(void)

longlong FUN_1453e4110(longlong param_1,ulonglong param_2)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149d4bec0;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149d4bee0;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x20,0x28);
  }
  return param_1 + -0x20;
}



// FUNCTION 1453e4170 FUN_1453e4170 body=167 status=ok
// SIG undefined FUN_1453e4170(void)

undefined8 * FUN_1453e4170(undefined8 *param_1,int param_2)

{
  if (param_2 != 0) {
    param_1[1] = &DAT_149d4bf50;
    param_1[4] = &PTR__purecall_14ba6c6b0;
  }
  *param_1 = &PTR__purecall_149d4be78;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) =
       &PTR__purecall_149d4be98;
  *param_1 = &PTR__purecall_149d4bec0;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149d4bee0;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_149d4bf08;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149d4bf28;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  return param_1;
}



// FUNCTION 1453e4220 FUN_1453e4220 body=124 status=ok
// SIG undefined FUN_1453e4220(void)

void FUN_1453e4220(longlong param_1)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR_FUN_149d4bf08;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149d4bf28;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  FUN_14516fec0();
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149d4bec0;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149d4bee0;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  return;
}



// FUNCTION 1453e42a0 FUN_1453e42a0 body=222 status=ok
// SIG undefined FUN_1453e42a0(void)

undefined8 * FUN_1453e42a0(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined **local_28;
  undefined8 *local_20;
  char local_18;
  
  uVar6 = 0xfffffffffffffffe;
  uVar4 = 0;
  uVar5 = 0;
  FUN_14516fec0();
  if ((**(ulonglong **)(param_1 + -8) < 0x30) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[5], pcVar1 == (code *)0x0)) {
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    uVar3 = (*pcVar1)();
    local_28 = &PTR_FUN_14ba6d600;
    local_20 = (undefined8 *)0x0;
    local_18 = '\0';
    FUN_144d73b20(&local_28,uVar3);
    puVar2 = local_20;
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    uVar3 = uVar4;
    if (local_20 != (undefined8 *)0x0) {
      uVar4 = *local_20;
      uVar3 = local_20[1];
    }
    FUN_149048250(param_2,uVar4,uVar3,1,uVar5,uVar6);
    if ((puVar2 != (undefined8 *)0x0) && (local_18 != '\0')) {
      cef_string_utf16_clear(puVar2);
      thunk_FUN_1400020a8(puVar2,0x18);
    }
  }
  return param_2;
}



// FUNCTION 1453e4380 FUN_1453e4380 body=222 status=ok
// SIG undefined FUN_1453e4380(void)

undefined8 * FUN_1453e4380(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined **local_28;
  undefined8 *local_20;
  char local_18;
  
  uVar6 = 0xfffffffffffffffe;
  uVar4 = 0;
  uVar5 = 0;
  FUN_14516fec0();
  if ((**(ulonglong **)(param_1 + -8) < 0x38) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[6], pcVar1 == (code *)0x0)) {
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    uVar3 = (*pcVar1)();
    local_28 = &PTR_FUN_14ba6d600;
    local_20 = (undefined8 *)0x0;
    local_18 = '\0';
    FUN_144d73b20(&local_28,uVar3);
    puVar2 = local_20;
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    uVar3 = uVar4;
    if (local_20 != (undefined8 *)0x0) {
      uVar4 = *local_20;
      uVar3 = local_20[1];
    }
    FUN_149048250(param_2,uVar4,uVar3,1,uVar5,uVar6);
    if ((puVar2 != (undefined8 *)0x0) && (local_18 != '\0')) {
      cef_string_utf16_clear(puVar2);
      thunk_FUN_1400020a8(puVar2,0x18);
    }
  }
  return param_2;
}



// FUNCTION 1453e4460 FUN_1453e4460 body=222 status=ok
// SIG undefined FUN_1453e4460(void)

undefined8 * FUN_1453e4460(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined **local_28;
  undefined8 *local_20;
  char local_18;
  
  uVar6 = 0xfffffffffffffffe;
  uVar4 = 0;
  uVar5 = 0;
  FUN_14516fec0();
  if ((**(ulonglong **)(param_1 + -8) < 0x40) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[7], pcVar1 == (code *)0x0)) {
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    uVar3 = (*pcVar1)();
    local_28 = &PTR_FUN_14ba6d600;
    local_20 = (undefined8 *)0x0;
    local_18 = '\0';
    FUN_144d73b20(&local_28,uVar3);
    puVar2 = local_20;
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    uVar3 = uVar4;
    if (local_20 != (undefined8 *)0x0) {
      uVar4 = *local_20;
      uVar3 = local_20[1];
    }
    FUN_149048250(param_2,uVar4,uVar3,1,uVar5,uVar6);
    if ((puVar2 != (undefined8 *)0x0) && (local_18 != '\0')) {
      cef_string_utf16_clear(puVar2);
      thunk_FUN_1400020a8(puVar2,0x18);
    }
  }
  return param_2;
}



// FUNCTION 1453e4540 FUN_1453e4540 body=222 status=ok
// SIG undefined FUN_1453e4540(void)

undefined8 * FUN_1453e4540(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined **local_28;
  undefined8 *local_20;
  char local_18;
  
  uVar6 = 0xfffffffffffffffe;
  uVar4 = 0;
  uVar5 = 0;
  FUN_14516fec0();
  if ((**(ulonglong **)(param_1 + -8) < 0x48) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[8], pcVar1 == (code *)0x0)) {
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    uVar3 = (*pcVar1)();
    local_28 = &PTR_FUN_14ba6d600;
    local_20 = (undefined8 *)0x0;
    local_18 = '\0';
    FUN_144d73b20(&local_28,uVar3);
    puVar2 = local_20;
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    uVar3 = uVar4;
    if (local_20 != (undefined8 *)0x0) {
      uVar4 = *local_20;
      uVar3 = local_20[1];
    }
    FUN_149048250(param_2,uVar4,uVar3,1,uVar5,uVar6);
    if ((puVar2 != (undefined8 *)0x0) && (local_18 != '\0')) {
      cef_string_utf16_clear(puVar2);
      thunk_FUN_1400020a8(puVar2,0x18);
    }
  }
  return param_2;
}



// FUNCTION 1453e4620 FUN_1453e4620 body=64 status=ok
// SIG undefined FUN_1453e4620(void)

undefined8 * FUN_1453e4620(undefined8 *param_1,ulonglong param_2)

{
  FUN_1453e4220();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -4,0x28);
  }
  return param_1 + -4;
}



// FUNCTION 1453e46b0 FUN_1453e46b0 body=58 status=ok
// SIG undefined FUN_1453e46b0(void)

longlong * FUN_1453e46b0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + -0x10);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)))();
  }
  return param_1;
}



// FUNCTION 1453e46f0 FUN_1453e46f0 body=49 status=ok
// SIG undefined FUN_1453e46f0(void)

int FUN_1453e46f0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  (*(code *)**(undefined8 **)
              (*(longlong *)(param_1 + 0x10) + 8 +
              (longlong)*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 4)))();
  LOCK();
  piVar1 = (int *)(param_1 + 0x50);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 1453e4730 FUN_1453e4730 body=77 status=ok
// SIG undefined FUN_1453e4730(void)

undefined8 FUN_1453e4730(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  (**(code **)(*(longlong *)(param_1[2] + 8 + (longlong)*(int *)(*(longlong *)(param_1[2] + 8) + 4))
              + 8))();
  LOCK();
  plVar1 = param_1 + 10;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar2 == 1) {
    (**(code **)(*param_1 + 0x20))(param_1,1);
    return 1;
  }
  return 0;
}



// FUNCTION 1453e47e0 FUN_1453e47e0 body=42 status=ok
// SIG undefined FUN_1453e47e0(void)

undefined1 FUN_1453e47e0(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 8))();
  return uVar1;
}



// FUNCTION 1453e4810 FUN_1453e4810 body=42 status=ok
// SIG undefined FUN_1453e4810(void)

undefined1 FUN_1453e4810(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x10))();
  return uVar1;
}



// FUNCTION 1453e4840 FUN_1453e4840 body=42 status=ok
// SIG undefined FUN_1453e4840(void)

undefined1 FUN_1453e4840(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x18))();
  return uVar1;
}



// FUNCTION 1453e4870 FUN_1453e4870 body=43 status=ok
// SIG undefined FUN_1453e4870(void)

undefined8 * FUN_1453e4870(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 1453e48a0 FUN_1453e48a0 body=107 status=ok
// SIG undefined FUN_1453e48a0(void)

undefined8 * FUN_1453e48a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149d4c020;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 1) = DAT_14c744178;
  param_1[3] = param_1;
  param_1[5] = &LAB_1453e47c0;
  param_1[6] = FUN_1453e47e0;
  param_1[7] = FUN_1453e4810;
  param_1[8] = FUN_1453e4840;
  param_1[4] = 0x30;
  *param_1 = &PTR_FUN_149d4c048;
  param_1[9] = FUN_1453e4a60;
  return param_1;
}



// FUNCTION 1453e4910 FUN_1453e4910 body=84 status=ok
// SIG undefined FUN_1453e4910(void)

undefined8 *
FUN_1453e4910(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &PTR_FUN_149d4c048;
  FUN_14516fec0();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x58,param_3,param_4,uVar1);
  }
  return param_1;
}



// FUNCTION 1453e4970 FUN_1453e4970 body=230 status=ok
// SIG undefined FUN_1453e4970(void)

longlong * FUN_1453e4970(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  uVar3 = 0;
  if (param_2 == 0) {
    *param_1 = 0;
  }
  else {
    puVar2 = (undefined4 *)FUN_14494321d(0x38);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      FUN_14557d810(puVar2 + 4,1,param_3,param_4,uVar3,uVar4);
    }
    *puVar2 = DAT_14c7467d4;
    *(longlong *)(puVar2 + 2) = param_2;
    puVar1 = puVar2 + 4;
    if (puVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1))();
    }
    if (*(code **)(*(longlong *)(puVar2 + 2) + 0x10) != (code *)0x0) {
      (**(code **)(*(longlong *)(puVar2 + 2) + 0x10))();
    }
    *param_1 = (longlong)puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1))();
      (**(code **)(*(longlong *)
                    ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1) + 8))
                ();
    }
  }
  return param_1;
}



// FUNCTION 1453e4a60 FUN_1453e4a60 body=135 status=ok
// SIG undefined FUN_1453e4a60(void)

void FUN_1453e4a60(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 local_res8 [2];
  longlong local_res18 [2];
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if ((param_1 != 0) && (param_2 != 0)) {
    puVar2 = (undefined8 *)FUN_1453e46b0(local_res18,param_1);
    puVar2 = (undefined8 *)*puVar2;
    uVar3 = FUN_1453e4970(local_res8,param_2);
    puVar1 = (undefined8 *)*puVar2;
    (*(code *)*puVar1)(puVar2,uVar3,puVar1,param_4,uVar4);
    if (local_res18[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_res18[0] + 8 + (longlong)*(int *)(*(longlong *)(local_res18[0] + 8) + 4))
                  + 8))();
    }
  }
  return;
}



// FUNCTION 1453e4af0 FUN_1453e4af0 body=48 status=ok
// SIG undefined FUN_1453e4af0(void)

void FUN_1453e4af0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 1453e4b20 FUN_1453e4b20 body=58 status=ok
// SIG undefined FUN_1453e4b20(void)

longlong * FUN_1453e4b20(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + -0x10);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)))();
  }
  return param_1;
}



// FUNCTION 1453e4b60 FUN_1453e4b60 body=49 status=ok
// SIG undefined FUN_1453e4b60(void)

int FUN_1453e4b60(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  (*(code *)**(undefined8 **)
              (*(longlong *)(param_1 + 0x10) + 8 +
              (longlong)*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 4)))();
  LOCK();
  piVar1 = (int *)(param_1 + 0x50);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 1453e4ba0 FUN_1453e4ba0 body=77 status=ok
// SIG undefined FUN_1453e4ba0(void)

undefined8 FUN_1453e4ba0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  (**(code **)(*(longlong *)(param_1[2] + 8 + (longlong)*(int *)(*(longlong *)(param_1[2] + 8) + 4))
              + 8))();
  LOCK();
  plVar1 = param_1 + 10;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar2 == 1) {
    (**(code **)(*param_1 + 0x20))(param_1,1);
    return 1;
  }
  return 0;
}



// FUNCTION 1453e4c50 FUN_1453e4c50 body=42 status=ok
// SIG undefined FUN_1453e4c50(void)

undefined1 FUN_1453e4c50(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 8))();
  return uVar1;
}



// FUNCTION 1453e4c80 FUN_1453e4c80 body=42 status=ok
// SIG undefined FUN_1453e4c80(void)

undefined1 FUN_1453e4c80(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x10))();
  return uVar1;
}



// FUNCTION 1453e4cb0 FUN_1453e4cb0 body=42 status=ok
// SIG undefined FUN_1453e4cb0(void)

undefined1 FUN_1453e4cb0(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x18))();
  return uVar1;
}



// FUNCTION 1453e4ce0 FUN_1453e4ce0 body=43 status=ok
// SIG undefined FUN_1453e4ce0(void)

undefined8 * FUN_1453e4ce0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 1453e4d10 FUN_1453e4d10 body=107 status=ok
// SIG undefined FUN_1453e4d10(void)

undefined8 * FUN_1453e4d10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149d4c110;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 1) = DAT_14c74417c;
  param_1[3] = param_1;
  param_1[5] = &LAB_1453e4c30;
  param_1[6] = FUN_1453e4c50;
  param_1[7] = FUN_1453e4c80;
  param_1[8] = FUN_1453e4cb0;
  param_1[4] = 0x30;
  *param_1 = &PTR_FUN_149d4c138;
  param_1[9] = FUN_1453e4de0;
  return param_1;
}



// FUNCTION 1453e4d80 FUN_1453e4d80 body=84 status=ok
// SIG undefined FUN_1453e4d80(void)

undefined8 *
FUN_1453e4d80(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &PTR_FUN_149d4c138;
  FUN_14516fec0();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x58,param_3,param_4,uVar1);
  }
  return param_1;
}



// FUNCTION 1453e4de0 FUN_1453e4de0 body=216 status=ok
// SIG undefined FUN_1453e4de0(void)

void FUN_1453e4de0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 local_res8;
  undefined4 uStackX_c;
  undefined8 uVar3;
  undefined **local_20;
  longlong local_18;
  char local_10;
  
  uVar3 = 0xfffffffffffffffe;
  local_res8 = 0;
  FUN_14516fec0();
  if (param_1 != 0) {
    puVar2 = (undefined8 *)FUN_1453e4b20(&local_res8,param_1,param_3,param_4,uVar3);
    local_20 = &PTR_FUN_14ba6d600;
    local_18 = 0;
    if (param_2 != 0) {
      local_18 = param_2;
    }
    local_10 = '\0';
    (*(code *)**(undefined8 **)*puVar2)((undefined8 *)*puVar2,&local_20);
    local_20 = &PTR_FUN_14ba6d600;
    if (local_18 != 0) {
      if (local_10 != '\0') {
        cef_string_utf16_clear();
        thunk_FUN_1400020a8(local_18,0x18);
      }
      local_18 = 0;
      local_10 = '\0';
    }
    lVar1 = CONCAT44(uStackX_c,local_res8);
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
  }
  return;
}



// FUNCTION 1453e4ec0 FUN_1453e4ec0 body=58 status=ok
// SIG undefined FUN_1453e4ec0(void)

longlong * FUN_1453e4ec0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + -0x10);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)))();
  }
  return param_1;
}



// FUNCTION 1453e4f00 FUN_1453e4f00 body=49 status=ok
// SIG undefined FUN_1453e4f00(void)

int FUN_1453e4f00(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  (*(code *)**(undefined8 **)
              (*(longlong *)(param_1 + 0x10) + 8 +
              (longlong)*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 4)))();
  LOCK();
  piVar1 = (int *)(param_1 + 0x70);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 1453e4f40 FUN_1453e4f40 body=77 status=ok
// SIG undefined FUN_1453e4f40(void)

undefined8 FUN_1453e4f40(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  (**(code **)(*(longlong *)(param_1[2] + 8 + (longlong)*(int *)(*(longlong *)(param_1[2] + 8) + 4))
              + 8))();
  LOCK();
  plVar1 = param_1 + 0xe;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar2 == 1) {
    (**(code **)(*param_1 + 0x20))(param_1,1);
    return 1;
  }
  return 0;
}



// FUNCTION 1453e4fd0 FUN_1453e4fd0 body=20 status=ok
// SIG undefined FUN_1453e4fd0(void)

undefined8 * FUN_1453e4fd0(undefined8 *param_1)

{
  *param_1 = 0;
  return param_1;
}



// FUNCTION 1453e5010 FUN_1453e5010 body=42 status=ok
// SIG undefined FUN_1453e5010(void)

undefined1 FUN_1453e5010(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 8))();
  return uVar1;
}



// FUNCTION 1453e5040 FUN_1453e5040 body=42 status=ok
// SIG undefined FUN_1453e5040(void)

undefined1 FUN_1453e5040(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x10))();
  return uVar1;
}



// FUNCTION 1453e5070 FUN_1453e5070 body=42 status=ok
// SIG undefined FUN_1453e5070(void)

undefined1 FUN_1453e5070(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x18))();
  return uVar1;
}



// FUNCTION 1453e50a0 FUN_1453e50a0 body=43 status=ok
// SIG undefined FUN_1453e50a0(void)

undefined8 * FUN_1453e50a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 1453e50d0 FUN_1453e50d0 body=189 status=ok
// SIG undefined FUN_1453e50d0(void)

undefined8 * FUN_1453e50d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149d4c1b0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)(param_1 + 1) = DAT_14c744180;
  param_1[3] = param_1;
  memset(param_1 + 4,0,0x50);
  param_1[5] = &LAB_1453e4ff0;
  param_1[6] = FUN_1453e5010;
  param_1[7] = FUN_1453e5040;
  param_1[8] = FUN_1453e5070;
  param_1[4] = 0x50;
  *param_1 = &PTR_FUN_149d4c1d8;
  param_1[9] = FUN_1453e52e0;
  param_1[10] = FUN_1453e5370;
  param_1[0xb] = FUN_1453e5420;
  param_1[0xc] = FUN_1453e54d0;
  param_1[0xd] = FUN_1453e5580;
  return param_1;
}



// FUNCTION 1453e5190 FUN_1453e5190 body=84 status=ok
// SIG undefined FUN_1453e5190(void)

undefined8 *
FUN_1453e5190(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &PTR_FUN_149d4c1d8;
  FUN_14516fec0();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x78,param_3,param_4,uVar1);
  }
  return param_1;
}



// FUNCTION 1453e51f0 FUN_1453e51f0 body=230 status=ok
// SIG undefined FUN_1453e51f0(void)

longlong * FUN_1453e51f0(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  uVar3 = 0;
  if (param_2 == 0) {
    *param_1 = 0;
  }
  else {
    puVar2 = (undefined4 *)FUN_14494321d(0x38);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      FUN_14557e330(puVar2 + 4,1,param_3,param_4,uVar3,uVar4);
    }
    *puVar2 = DAT_14c7467d8;
    *(longlong *)(puVar2 + 2) = param_2;
    puVar1 = puVar2 + 4;
    if (puVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1))();
    }
    if (*(code **)(*(longlong *)(puVar2 + 2) + 0x10) != (code *)0x0) {
      (**(code **)(*(longlong *)(puVar2 + 2) + 0x10))();
    }
    *param_1 = (longlong)puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1))();
      (**(code **)(*(longlong *)
                    ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1) + 8))
                ();
    }
  }
  return param_1;
}



// FUNCTION 1453e52e0 FUN_1453e52e0 body=135 status=ok
// SIG undefined FUN_1453e52e0(void)

void FUN_1453e52e0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 local_res8 [2];
  longlong local_res18 [2];
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if ((param_1 != 0) && (param_2 != 0)) {
    puVar2 = (undefined8 *)FUN_1453e4ec0(local_res18,param_1);
    puVar2 = (undefined8 *)*puVar2;
    uVar3 = FUN_14516d660(local_res8,param_2);
    puVar1 = (undefined8 *)*puVar2;
    (*(code *)*puVar1)(puVar2,uVar3,puVar1,param_4,uVar4);
    if (local_res18[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_res18[0] + 8 + (longlong)*(int *)(*(longlong *)(local_res18[0] + 8) + 4))
                  + 8))();
    }
  }
  return;
}



// FUNCTION 1453e5370 FUN_1453e5370 body=168 status=ok
// SIG undefined FUN_1453e5370(void)

void FUN_1453e5370(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 local_res8 [2];
  longlong local_18 [2];
  
  local_18[1] = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if ((param_1 != 0) && (param_2 != 0)) {
    puVar2 = (undefined8 *)FUN_1453e4ec0(local_18,param_1);
    plVar1 = (longlong *)*puVar2;
    uVar3 = FUN_14516d660(local_res8,param_2);
    (**(code **)(*plVar1 + 8))(plVar1,uVar3,param_3,param_4);
    if (local_18[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_18[0] + 8 + (longlong)*(int *)(*(longlong *)(local_18[0] + 8) + 4)) + 8))
                ();
    }
  }
  return;
}



// FUNCTION 1453e5420 FUN_1453e5420 body=168 status=ok
// SIG undefined FUN_1453e5420(void)

void FUN_1453e5420(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 local_res8 [2];
  longlong local_18 [2];
  
  local_18[1] = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if ((param_1 != 0) && (param_2 != 0)) {
    puVar2 = (undefined8 *)FUN_1453e4ec0(local_18,param_1);
    plVar1 = (longlong *)*puVar2;
    uVar3 = FUN_14516d660(local_res8,param_2);
    (**(code **)(*plVar1 + 0x10))(plVar1,uVar3,param_3,param_4);
    if (local_18[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_18[0] + 8 + (longlong)*(int *)(*(longlong *)(local_18[0] + 8) + 4)) + 8))
                ();
    }
  }
  return;
}



// FUNCTION 1453e54d0 FUN_1453e54d0 body=173 status=ok
// SIG undefined FUN_1453e54d0(void)

void FUN_1453e54d0(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 local_res8 [2];
  longlong local_18 [2];
  
  local_18[1] = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    puVar2 = (undefined8 *)FUN_1453e4ec0(local_18,param_1);
    plVar1 = (longlong *)*puVar2;
    uVar3 = FUN_14516d660(local_res8,param_2);
    (**(code **)(*plVar1 + 0x18))(plVar1,uVar3,param_3,param_4);
    if (local_18[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_18[0] + 8 + (longlong)*(int *)(*(longlong *)(local_18[0] + 8) + 4)) + 8))
                ();
    }
  }
  return;
}



// FUNCTION 1453e5580 FUN_1453e5580 body=446 status=ok
// SIG undefined FUN_1453e5580(void)

undefined1
FUN_1453e5580(longlong param_1,int param_2,longlong param_3,undefined4 param_4,longlong param_5,
             longlong param_6,longlong param_7)

{
  longlong *plVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 local_res8 [2];
  longlong local_88 [2];
  undefined **local_78;
  longlong local_70;
  char local_68;
  undefined **local_60;
  longlong local_58;
  char local_50;
  undefined **local_48;
  longlong local_40;
  char local_38;
  
  local_88[1] = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if ((((param_1 == 0) || (param_3 == 0)) || (param_6 == 0)) || (param_7 == 0)) {
    uVar2 = 0;
  }
  else {
    puVar3 = (undefined8 *)FUN_1453e4ec0(local_88,param_1);
    plVar1 = (longlong *)*puVar3;
    uVar4 = FUN_1453e51f0(local_res8,param_7);
    local_48 = &PTR_FUN_14ba6d600;
    local_40 = param_6;
    local_38 = '\0';
    local_78 = &PTR_FUN_14ba6d600;
    local_70 = 0;
    if (param_5 != 0) {
      local_70 = param_5;
    }
    local_68 = '\0';
    local_60 = &PTR_FUN_14ba6d600;
    local_50 = '\0';
    local_58 = param_3;
    uVar2 = (**(code **)(*plVar1 + 0x20))
                      (plVar1,param_2 != 0,&local_60,param_4,&local_78,&local_48,uVar4);
    local_60 = &PTR_FUN_14ba6d600;
    if (local_58 != 0) {
      if (local_50 != '\0') {
        cef_string_utf16_clear();
        thunk_FUN_1400020a8(local_58,0x18);
      }
      local_58 = 0;
      local_50 = '\0';
    }
    local_78 = &PTR_FUN_14ba6d600;
    if (local_70 != 0) {
      if (local_68 != '\0') {
        cef_string_utf16_clear();
        thunk_FUN_1400020a8(local_70,0x18);
      }
      local_70 = 0;
      local_68 = '\0';
    }
    local_48 = &PTR_FUN_14ba6d600;
    if (local_40 != 0) {
      if (local_38 != '\0') {
        cef_string_utf16_clear();
        thunk_FUN_1400020a8(local_40,0x18);
      }
      local_40 = 0;
      local_38 = '\0';
    }
    if (local_88[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_88[0] + 8 + (longlong)*(int *)(*(longlong *)(local_88[0] + 8) + 4)) + 8))
                ();
    }
  }
  return uVar2;
}



// FUNCTION 1453e5740 FUN_1453e5740 body=48 status=ok
// SIG undefined FUN_1453e5740(void)

void FUN_1453e5740(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 1453e5770 FUN_1453e5770 body=48 status=ok
// SIG undefined FUN_1453e5770(void)

longlong FUN_1453e5770(longlong param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x10,0x18);
    return param_1 + -0x10;
  }
  return param_1 + -0x10;
}



// FUNCTION 1453e57a0 FUN_1453e57a0 body=40 status=ok
// SIG undefined FUN_1453e57a0(void)

int FUN_1453e57a0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  
  pcVar3 = *(code **)(*(longlong *)(param_1 + -0x28) + 8);
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)();
  }
  LOCK();
  piVar1 = (int *)(param_1 + -0x10);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 1453e57d0 FUN_1453e57d0 body=105 status=ok
// SIG undefined FUN_1453e57d0(void)

undefined8 FUN_1453e57d0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(code **)(param_1[-5] + 0x10) != (code *)0x0) {
    (**(code **)(param_1[-5] + 0x10))();
  }
  LOCK();
  piVar1 = (int *)(param_1 + -2);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    if (param_1 + -6 != (undefined8 *)0x0) {
      FUN_1453e59b0(param_1);
      *param_1 = &PTR__purecall_14ba6c6b0;
      thunk_FUN_1400020a8(param_1 + -6,0x38);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 1453e5840 FUN_1453e5840 body=34 status=ok
// SIG undefined FUN_1453e5840(void)

bool FUN_1453e5840(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*(longlong *)(param_1 + -0x28) + 0x18);
  if (pcVar1 == (code *)0x0) {
    return false;
  }
  iVar2 = (*pcVar1)();
  return iVar2 != 0;
}



// FUNCTION 1453e5870 FUN_1453e5870 body=38 status=ok
// SIG undefined FUN_1453e5870(void)

bool FUN_1453e5870(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + -0x28);
  if (*(longlong *)(lVar1 + 0x18) == 0) {
    return false;
  }
  iVar2 = (**(code **)(lVar1 + 0x20))(lVar1);
  return iVar2 != 0;
}



// FUNCTION 1453e58a0 FUN_1453e58a0 body=85 status=ok
// SIG undefined FUN_1453e58a0(void)

longlong FUN_1453e58a0(longlong param_1,ulonglong param_2)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149d4c3a0;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149d4c3d8;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x20,0x28);
  }
  return param_1 + -0x20;
}



// FUNCTION 1453e5900 FUN_1453e5900 body=167 status=ok
// SIG undefined FUN_1453e5900(void)

undefined8 * FUN_1453e5900(undefined8 *param_1,int param_2)

{
  if (param_2 != 0) {
    param_1[1] = &DAT_149d4c460;
    param_1[4] = &PTR__purecall_14ba6c6b0;
  }
  *param_1 = &PTR__purecall_149d4c340;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) =
       &PTR__purecall_149d4c378;
  *param_1 = &PTR__purecall_149d4c3a0;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149d4c3d8;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_149d4c400;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149d4c438;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  return param_1;
}



// FUNCTION 1453e59b0 FUN_1453e59b0 body=124 status=ok
// SIG undefined FUN_1453e59b0(void)

void FUN_1453e59b0(longlong param_1)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR_FUN_149d4c400;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149d4c438;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  FUN_14516fec0();
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149d4c3a0;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149d4c3d8;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  return;
}



// FUNCTION 1453e5a30 FUN_1453e5a30 body=96 status=ok
// SIG undefined FUN_1453e5a30(void)

undefined8 *
FUN_1453e5a30(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  FUN_14516fec0();
  if ((0x2f < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[5], pcVar1 != (code *)0x0)) {
    uVar2 = (*pcVar1)();
    FUN_14516a920(param_2,uVar2,param_3,param_4,uVar3);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1453e5a90 FUN_1453e5a90 body=96 status=ok
// SIG undefined FUN_1453e5a90(void)

undefined8 *
FUN_1453e5a90(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  FUN_14516fec0();
  if ((0x37 < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[6], pcVar1 != (code *)0x0)) {
    uVar2 = (*pcVar1)();
    FUN_1453e5c80(param_2,uVar2,param_3,param_4,uVar3);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1453e5af0 FUN_1453e5af0 body=49 status=ok
// SIG undefined FUN_1453e5af0(void)

undefined8 FUN_1453e5af0(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  FUN_14516fec0();
  if ((0x3f < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[7],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001453e5b16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}



// FUNCTION 1453e5b30 FUN_1453e5b30 body=49 status=ok
// SIG undefined FUN_1453e5b30(void)

undefined8 FUN_1453e5b30(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  FUN_14516fec0();
  if ((0x47 < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[8],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001453e5b56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}



// FUNCTION 1453e5b70 FUN_1453e5b70 body=96 status=ok
// SIG undefined FUN_1453e5b70(void)

undefined8 *
FUN_1453e5b70(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  FUN_14516fec0();
  if ((0x4f < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[9], pcVar1 != (code *)0x0)) {
    uVar2 = (*pcVar1)();
    FUN_1453e1080(param_2,uVar2,param_3,param_4,uVar3);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1453e5bd0 FUN_1453e5bd0 body=54 status=ok
// SIG undefined FUN_1453e5bd0(void)

bool FUN_1453e5bd0(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_14516fec0();
  if ((0x57 < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[10], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 1453e5c10 FUN_1453e5c10 body=47 status=ok
// SIG undefined FUN_1453e5c10(void)

void FUN_1453e5c10(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_14516fec0();
  if ((0x5f < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[0xb],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001453e5c36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// FUNCTION 1453e5c40 FUN_1453e5c40 body=64 status=ok
// SIG undefined FUN_1453e5c40(void)

undefined8 * FUN_1453e5c40(undefined8 *param_1,ulonglong param_2)

{
  FUN_1453e59b0();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -4,0x28);
  }
  return param_1 + -4;
}



// FUNCTION 1453e5c80 FUN_1453e5c80 body=188 status=ok
// SIG undefined FUN_1453e5c80(void)

longlong * FUN_1453e5c80(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  if (param_2 == 0) {
    *param_1 = 0;
  }
  else if (*(int *)(param_2 + -0x18) == DAT_14c744180) {
    lVar1 = *(longlong *)(param_2 + -0x10);
    if (lVar1 != 0) {
      (*(code *)**(undefined8 **)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + 8 + lVar1))();
    }
    (**(code **)(**(longlong **)(param_2 + -8) + 8))();
    *param_1 = lVar1;
    if (lVar1 != 0) {
      (*(code *)**(undefined8 **)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + 8 + lVar1))();
      (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + 8 + lVar1) + 8))
                ();
    }
  }
  else {
    FUN_1453e4fd0(param_1,*(int *)(param_2 + -0x18),param_2,param_4,0,0xfffffffffffffffe);
  }
  return param_1;
}



// FUNCTION 1453e5d90 FUN_1453e5d90 body=48 status=ok
// SIG undefined FUN_1453e5d90(void)

longlong FUN_1453e5d90(longlong param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x10,0x18);
    return param_1 + -0x10;
  }
  return param_1 + -0x10;
}



// FUNCTION 1453e5dc0 FUN_1453e5dc0 body=40 status=ok
// SIG undefined FUN_1453e5dc0(void)

int FUN_1453e5dc0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  
  pcVar3 = *(code **)(*(longlong *)(param_1 + -0x28) + 8);
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)();
  }
  LOCK();
  piVar1 = (int *)(param_1 + -0x10);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 1453e5df0 FUN_1453e5df0 body=181 status=ok
// SIG undefined FUN_1453e5df0(void)

undefined8 FUN_1453e5df0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if (*(code **)(param_1[-5] + 0x10) != (code *)0x0) {
    (**(code **)(param_1[-5] + 0x10))();
  }
  LOCK();
  piVar1 = (int *)(param_1 + -2);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    puVar3 = param_1 + -6;
    if (puVar3 != (undefined8 *)0x0) {
      param_1[-4] = &PTR_FUN_149d4c598;
      *(undefined ***)((longlong)*(int *)(param_1[-3] + 4) + 0x18 + (longlong)puVar3) =
           &PTR_LAB_149d4c5e0;
      *(int *)((longlong)*(int *)(param_1[-3] + 4) + 0x14 + (longlong)puVar3) =
           *(int *)(param_1[-3] + 4) + -0x18;
      param_1[-4] = &PTR__purecall_149d4c528;
      *(undefined ***)((longlong)*(int *)(param_1[-3] + 4) + 0x18 + (longlong)puVar3) =
           &PTR_LAB_149d4c570;
      *(int *)((longlong)*(int *)(param_1[-3] + 4) + 0x14 + (longlong)puVar3) =
           *(int *)(param_1[-3] + 4) + -0x18;
      *param_1 = &PTR__purecall_14ba6c6b0;
      thunk_FUN_1400020a8(puVar3,0x38);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 1453e5eb0 FUN_1453e5eb0 body=34 status=ok
// SIG undefined FUN_1453e5eb0(void)

bool FUN_1453e5eb0(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*(longlong *)(param_1 + -0x28) + 0x18);
  if (pcVar1 == (code *)0x0) {
    return false;
  }
  iVar2 = (*pcVar1)();
  return iVar2 != 0;
}



// FUNCTION 1453e5ee0 FUN_1453e5ee0 body=38 status=ok
// SIG undefined FUN_1453e5ee0(void)

bool FUN_1453e5ee0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + -0x28);
  if (*(longlong *)(lVar1 + 0x18) == 0) {
    return false;
  }
  iVar2 = (**(code **)(lVar1 + 0x20))(lVar1);
  return iVar2 != 0;
}



// FUNCTION 1453e5f10 FUN_1453e5f10 body=11 status=ok
// SIG undefined FUN_1453e5f10(void)

undefined8 FUN_1453e5f10(void)

{
  return 0;
}



// FUNCTION 1453e5f20 FUN_1453e5f20 body=85 status=ok
// SIG undefined FUN_1453e5f20(void)

longlong FUN_1453e5f20(longlong param_1,ulonglong param_2)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149d4c528;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149d4c570;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x20,0x28);
  }
  return param_1 + -0x20;
}



// FUNCTION 1453e5f80 FUN_1453e5f80 body=167 status=ok
// SIG undefined FUN_1453e5f80(void)

undefined8 * FUN_1453e5f80(undefined8 *param_1,int param_2)

{
  if (param_2 != 0) {
    param_1[1] = &DAT_149d4c608;
    param_1[4] = &PTR__purecall_14ba6c6b0;
  }
  *param_1 = &PTR__purecall_149d4c4b8;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) =
       &PTR__purecall_149d4c500;
  *param_1 = &PTR__purecall_149d4c528;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149d4c570;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_149d4c598;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149d4c5e0;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  return param_1;
}



// FUNCTION 1453e6030 FUN_1453e6030 body=68 status=ok
// SIG undefined FUN_1453e6030(void)

undefined8 *
FUN_1453e6030(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if ((0x2f < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[5], pcVar1 != (code *)0x0)) {
    uVar2 = (*pcVar1)();
    FUN_1453e6560(param_2,uVar2,param_3,param_4,uVar3);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1453e6080 FUN_1453e6080 body=42 status=ok
// SIG undefined FUN_1453e6080(void)

bool FUN_1453e6080(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  if ((0x37 < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[6], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 1453e60b0 FUN_1453e60b0 body=68 status=ok
// SIG undefined FUN_1453e60b0(void)

undefined8 *
FUN_1453e60b0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if ((0x3f < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[7], pcVar1 != (code *)0x0)) {
    uVar2 = (*pcVar1)();
    FUN_144d7a4e0(param_2,uVar2,param_3,param_4,uVar3);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1453e6100 FUN_1453e6100 body=68 status=ok
// SIG undefined FUN_1453e6100(void)

undefined8 *
FUN_1453e6100(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if ((0x47 < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[8], pcVar1 != (code *)0x0)) {
    uVar2 = (*pcVar1)();
    FUN_14516a830(param_2,uVar2,param_3,param_4,uVar3);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1453e6150 FUN_1453e6150 body=68 status=ok
// SIG undefined FUN_1453e6150(void)

undefined8 *
FUN_1453e6150(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if ((0x4f < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[9], pcVar1 != (code *)0x0)) {
    uVar2 = (*pcVar1)();
    FUN_14516aec0(param_2,uVar2,param_3,param_4,uVar3);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1453e61a0 FUN_1453e61a0 body=42 status=ok
// SIG undefined FUN_1453e61a0(void)

bool FUN_1453e61a0(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  if ((0x57 < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[10], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 1453e61d0 FUN_1453e61d0 body=42 status=ok
// SIG undefined FUN_1453e61d0(void)

bool FUN_1453e61d0(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  if ((0x5f < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0xb], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 1453e6200 FUN_1453e6200 body=196 status=ok
// SIG undefined FUN_1453e6200(void)

ulonglong FUN_1453e6200(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong in_RAX;
  undefined8 uVar4;
  ulonglong local_res8;
  ulonglong *local_res10;
  
  local_res8 = local_res8 & 0xffffffff00000000;
  puVar1 = *(ulonglong **)(param_1 + -8);
  local_res10 = param_2;
  if ((*puVar1 < 0x68) || (puVar1[0xc] == 0)) {
    uVar2 = *param_2;
    if (uVar2 != 0) {
      in_RAX = (**(code **)(*(longlong *)
                             ((longlong)*(int *)(*(longlong *)(uVar2 + 8) + 4) + uVar2 + 8) + 8))();
    }
  }
  else {
    local_res8 = *param_2;
    if (local_res8 != 0) {
      if (local_res8 != 0) {
        (*(code *)**(undefined8 **)
                    (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
      }
      uVar4 = FUN_1453e3e60(&local_res8);
      iVar3 = (*(code *)puVar1[0xc])(puVar1,uVar4);
      uVar2 = *param_2;
      if (uVar2 != 0) {
        (**(code **)(*(longlong *)(uVar2 + 8 + (longlong)*(int *)(*(longlong *)(uVar2 + 8) + 4)) + 8
                    ))();
      }
      return (ulonglong)(iVar3 != 0);
    }
    in_RAX = 0;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1453e62d0 FUN_1453e62d0 body=504 status=ok
// SIG undefined FUN_1453e62d0(void)

bool FUN_1453e62d0(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4,
                  longlong *param_5,longlong *param_6)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  bool bVar6;
  longlong local_res8;
  longlong local_48;
  longlong local_40 [3];
  
  local_40[1] = 0xfffffffffffffffe;
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((((*puVar1 < 0x70) || (puVar1[0xd] == 0)) || (*(longlong *)(param_2 + 8) == 0)) ||
     (*(longlong *)(*(longlong *)(param_2 + 8) + 8) == 0)) {
    bVar6 = false;
  }
  else {
    local_res8 = 0;
    if (*param_5 != 0) {
      uVar5 = FUN_1453e3f00(local_40,param_5);
      local_res8 = FUN_14516afb0(uVar5);
    }
    lVar2 = local_res8;
    local_48 = 0;
    if (*param_6 != 0) {
      uVar5 = FUN_1453e6780(local_40,param_6);
      local_48 = FUN_1453e6650(uVar5);
    }
    lVar3 = local_48;
    iVar4 = (*(code *)puVar1[0xd])
                      (puVar1,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_3 + 8),param_4,
                       &local_res8,&local_48);
    if (local_res8 == 0) {
      lVar2 = *param_5;
      *param_5 = 0;
      if (lVar2 != 0) {
        (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8
                    ))();
      }
    }
    else if (local_res8 != lVar2) {
      uVar5 = FUN_14516aec0(local_40);
      FUN_1453e6720(param_5,uVar5);
      if (local_40[0] != 0) {
        (**(code **)(*(longlong *)
                      (local_40[0] + 8 + (longlong)*(int *)(*(longlong *)(local_40[0] + 8) + 4)) + 8
                    ))();
      }
    }
    if (local_48 == 0) {
      lVar2 = *param_6;
      *param_6 = 0;
      if (lVar2 != 0) {
        (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8
                    ))();
      }
    }
    else if (local_48 != lVar3) {
      uVar5 = FUN_1453dfa20(local_40);
      FUN_1453e67c0(param_6,uVar5);
      if (local_40[0] != 0) {
        (**(code **)(*(longlong *)
                      (local_40[0] + 8 + (longlong)*(int *)(*(longlong *)(local_40[0] + 8) + 4)) + 8
                    ))();
      }
    }
    bVar6 = iVar4 != 0;
  }
  return bVar6;
}



// FUNCTION 1453e64d0 FUN_1453e64d0 body=143 status=ok
// SIG undefined FUN_1453e64d0(void)

undefined8 * FUN_1453e64d0(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -4;
  *puVar1 = &PTR_FUN_149d4c598;
  *(undefined ***)((longlong)*(int *)(param_1[-3] + 4) + -0x18 + (longlong)param_1) =
       &PTR_LAB_149d4c5e0;
  *(int *)((longlong)*(int *)(param_1[-3] + 4) + -0x1c + (longlong)param_1) =
       *(int *)(param_1[-3] + 4) + -0x18;
  *puVar1 = &PTR__purecall_149d4c528;
  *(undefined ***)((longlong)*(int *)(param_1[-3] + 4) + -0x18 + (longlong)param_1) =
       &PTR_LAB_149d4c570;
  *(int *)((longlong)*(int *)(param_1[-3] + 4) + -0x1c + (longlong)param_1) =
       *(int *)(param_1[-3] + 4) + -0x18;
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(puVar1,0x28);
  }
  return puVar1;
}



// FUNCTION 1453e6560 FUN_1453e6560 body=230 status=ok
// SIG undefined FUN_1453e6560(void)

longlong * FUN_1453e6560(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  uVar3 = 0;
  if (param_2 == 0) {
    *param_1 = 0;
  }
  else {
    puVar2 = (undefined4 *)FUN_14494321d(0x38);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      FUN_14557e7a0(puVar2 + 4,1,param_3,param_4,uVar3,uVar4);
    }
    *puVar2 = DAT_14c7467dc;
    *(longlong *)(puVar2 + 2) = param_2;
    puVar1 = puVar2 + 4;
    if (puVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1))();
    }
    if (*(code **)(*(longlong *)(puVar2 + 2) + 0x10) != (code *)0x0) {
      (**(code **)(*(longlong *)(puVar2 + 2) + 0x10))();
    }
    *param_1 = (longlong)puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1))();
      (**(code **)(*(longlong *)
                    ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1) + 8))
                ();
    }
  }
  return param_1;
}



// FUNCTION 1453e6650 FUN_1453e6650 body=156 status=ok
// SIG undefined FUN_1453e6650(void)

undefined8 FUN_1453e6650(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else if (*(int *)(lVar1 + -0x10) == DAT_14c7467b0._4_4_) {
    pcVar2 = *(code **)(*(longlong *)(lVar1 + -8) + 8);
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)();
    }
    uVar3 = *(undefined8 *)(lVar1 + -8);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
  }
  else {
    uVar3 = FUN_14557b410(*(int *)(lVar1 + -0x10),lVar1,param_3,param_4,0xfffffffffffffffe);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
  }
  return uVar3;
}



// FUNCTION 1453e66f0 FUN_1453e66f0 body=48 status=ok
// SIG undefined FUN_1453e66f0(void)

void FUN_1453e66f0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 1453e6720 FUN_1453e6720 body=87 status=ok
// SIG undefined FUN_1453e6720(void)

longlong * FUN_1453e6720(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)))();
  }
  lVar2 = *param_1;
  *param_1 = lVar1;
  if (lVar2 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))()
    ;
  }
  return param_1;
}



// FUNCTION 1453e6780 FUN_1453e6780 body=49 status=ok
// SIG undefined FUN_1453e6780(void)

longlong * FUN_1453e6780(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)))();
  }
  return param_1;
}



// FUNCTION 1453e67c0 FUN_1453e67c0 body=87 status=ok
// SIG undefined FUN_1453e67c0(void)

longlong * FUN_1453e67c0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)))();
  }
  lVar2 = *param_1;
  *param_1 = lVar1;
  if (lVar2 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))()
    ;
  }
  return param_1;
}



// FUNCTION 1453e6860 FUN_1453e6860 body=58 status=ok
// SIG undefined FUN_1453e6860(void)

longlong * FUN_1453e6860(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + -0x10);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)))();
  }
  return param_1;
}



// FUNCTION 1453e68a0 FUN_1453e68a0 body=49 status=ok
// SIG undefined FUN_1453e68a0(void)

int FUN_1453e68a0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  (*(code *)**(undefined8 **)
              (*(longlong *)(param_1 + 0x10) + 8 +
              (longlong)*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 4)))();
  LOCK();
  piVar1 = (int *)(param_1 + 0x70);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 1453e68e0 FUN_1453e68e0 body=77 status=ok
// SIG undefined FUN_1453e68e0(void)

undefined8 FUN_1453e68e0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  (**(code **)(*(longlong *)(param_1[2] + 8 + (longlong)*(int *)(*(longlong *)(param_1[2] + 8) + 4))
              + 8))();
  LOCK();
  plVar1 = param_1 + 0xe;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar2 == 1) {
    (**(code **)(*param_1 + 0x20))(param_1,1);
    return 1;
  }
  return 0;
}



// FUNCTION 1453e6990 FUN_1453e6990 body=42 status=ok
// SIG undefined FUN_1453e6990(void)

undefined1 FUN_1453e6990(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 8))();
  return uVar1;
}



// FUNCTION 1453e69c0 FUN_1453e69c0 body=42 status=ok
// SIG undefined FUN_1453e69c0(void)

undefined1 FUN_1453e69c0(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x10))();
  return uVar1;
}



// FUNCTION 1453e69f0 FUN_1453e69f0 body=42 status=ok
// SIG undefined FUN_1453e69f0(void)

undefined1 FUN_1453e69f0(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x18))();
  return uVar1;
}



// FUNCTION 1453e6a20 FUN_1453e6a20 body=43 status=ok
// SIG undefined FUN_1453e6a20(void)

undefined8 * FUN_1453e6a20(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 1453e6a50 FUN_1453e6a50 body=189 status=ok
// SIG undefined FUN_1453e6a50(void)

undefined8 * FUN_1453e6a50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149d4c6d8;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)(param_1 + 1) = DAT_14c74418c;
  param_1[3] = param_1;
  memset(param_1 + 4,0,0x50);
  param_1[5] = &LAB_1453e6970;
  param_1[6] = FUN_1453e6990;
  param_1[7] = FUN_1453e69c0;
  param_1[8] = FUN_1453e69f0;
  param_1[4] = 0x50;
  *param_1 = &PTR_FUN_149d4c700;
  param_1[9] = FUN_1453e6b70;
  param_1[10] = FUN_1453e6ca0;
  param_1[0xb] = FUN_1453e6d90;
  param_1[0xc] = FUN_1453e6e50;
  param_1[0xd] = FUN_1453e6ee0;
  return param_1;
}



// FUNCTION 1453e6b10 FUN_1453e6b10 body=84 status=ok
// SIG undefined FUN_1453e6b10(void)

undefined8 *
FUN_1453e6b10(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &PTR_FUN_149d4c700;
  FUN_14516fec0();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x78,param_3,param_4,uVar1);
  }
  return param_1;
}



// FUNCTION 1453e6b70 FUN_1453e6b70 body=227 status=ok
// SIG undefined FUN_1453e6b70(void)

void FUN_1453e6b70(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58 [2];
  longlong local_50 [2];
  undefined **local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_50[1] = 0xfffffffffffffffe;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[0] = 0;
  FUN_14516fec0();
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != (undefined8 *)0x0)) {
    local_40 = &PTR_FUN_149d4c728;
    local_28 = 0;
    local_38 = *param_3;
    local_30 = *(undefined4 *)(param_3 + 1);
    puVar1 = (undefined8 *)FUN_1453e6860(local_50,param_1);
    puVar1 = (undefined8 *)*puVar1;
    uVar2 = FUN_144d7a4e0(local_58,param_2);
    (**(code **)*puVar1)(puVar1,uVar2,&local_40);
    if (local_50[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_50[0] + 8 + (longlong)*(int *)(*(longlong *)(local_50[0] + 8) + 4)) + 8))
                ();
    }
    *param_3 = local_38;
    *(undefined4 *)(param_3 + 1) = local_30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_78);
}


