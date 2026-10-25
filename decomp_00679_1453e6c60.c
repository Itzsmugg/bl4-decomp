// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1453e6c60 FUN_1453e6c60 body=11 status=ok
// SIG undefined FUN_1453e6c60(void)

void FUN_1453e6c60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149d4c728;
  return;
}



// FUNCTION 1453e6c70 FUN_1453e6c70 body=43 status=ok
// SIG undefined FUN_1453e6c70(void)

undefined8 * FUN_1453e6c70(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149d4c728;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1453e6ca0 FUN_1453e6ca0 body=217 status=ok
// SIG undefined FUN_1453e6ca0(void)

void FUN_1453e6ca0(longlong param_1,longlong param_2,undefined8 *param_3,undefined4 param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
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
    puVar2 = (undefined8 *)FUN_1453e6860(local_50,param_1);
    plVar1 = (longlong *)*puVar2;
    uVar3 = FUN_144d7a4e0(local_58,param_2);
    (**(code **)(*plVar1 + 8))(plVar1,uVar3,&local_40,param_4);
    if (local_50[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_50[0] + 8 + (longlong)*(int *)(*(longlong *)(local_50[0] + 8) + 4)) + 8))
                ();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_78);
}



// FUNCTION 1453e6d90 FUN_1453e6d90 body=183 status=ok
// SIG undefined FUN_1453e6d90(void)

void FUN_1453e6d90(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4,
                  undefined8 param_5)

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
    puVar2 = (undefined8 *)FUN_1453e6860(local_18,param_1);
    plVar1 = (longlong *)*puVar2;
    uVar3 = FUN_144d7a4e0(local_res8,param_2);
    (**(code **)(*plVar1 + 0x10))(plVar1,uVar3,param_3,param_4,param_5);
    if (local_18[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_18[0] + 8 + (longlong)*(int *)(*(longlong *)(local_18[0] + 8) + 4)) + 8))
                ();
    }
  }
  return;
}



// FUNCTION 1453e6e50 FUN_1453e6e50 body=136 status=ok
// SIG undefined FUN_1453e6e50(void)

void FUN_1453e6e50(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 local_res8 [2];
  longlong local_res18 [2];
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if ((param_1 != 0) && (param_2 != 0)) {
    puVar3 = (undefined8 *)FUN_1453e6860(local_res18,param_1);
    plVar1 = (longlong *)*puVar3;
    uVar4 = FUN_144d7a4e0(local_res8,param_2);
    lVar2 = *plVar1;
    (**(code **)(lVar2 + 0x18))(plVar1,uVar4,lVar2,param_4,uVar5);
    if (local_res18[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_res18[0] + 8 + (longlong)*(int *)(*(longlong *)(local_res18[0] + 8) + 4))
                  + 8))();
    }
  }
  return;
}



// FUNCTION 1453e6ee0 FUN_1453e6ee0 body=243 status=ok
// SIG undefined FUN_1453e6ee0(void)

void FUN_1453e6ee0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 local_res8 [2];
  longlong local_res20;
  undefined8 uVar5;
  undefined **local_30;
  longlong local_28;
  char local_20;
  
  uVar5 = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    puVar3 = (undefined8 *)FUN_1453e6860(&local_res20,param_1);
    plVar1 = (longlong *)*puVar3;
    local_30 = &PTR_FUN_14ba6d600;
    local_20 = '\0';
    local_28 = param_3;
    uVar4 = FUN_144d7a4e0(local_res8,param_2);
    lVar2 = *plVar1;
    (**(code **)(lVar2 + 0x20))(plVar1,uVar4,&local_30,lVar2,uVar5);
    local_30 = &PTR_FUN_14ba6d600;
    if (local_28 != 0) {
      if (local_20 != '\0') {
        cef_string_utf16_clear();
        thunk_FUN_1400020a8(local_28,0x18);
      }
      local_28 = 0;
      local_20 = '\0';
    }
    if (local_res20 != 0) {
      (**(code **)(*(longlong *)
                    (local_res20 + 8 + (longlong)*(int *)(*(longlong *)(local_res20 + 8) + 4)) + 8))
                ();
    }
  }
  return;
}



// FUNCTION 1453e6fe0 FUN_1453e6fe0 body=48 status=ok
// SIG undefined FUN_1453e6fe0(void)

void FUN_1453e6fe0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 1453e7010 FUN_1453e7010 body=48 status=ok
// SIG undefined FUN_1453e7010(void)

void FUN_1453e7010(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 1453e7040 FUN_1453e7040 body=48 status=ok
// SIG undefined FUN_1453e7040(void)

void FUN_1453e7040(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 1453e7070 FUN_1453e7070 body=58 status=ok
// SIG undefined FUN_1453e7070(void)

longlong * FUN_1453e7070(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + -0x10);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)))();
  }
  return param_1;
}



// FUNCTION 1453e70b0 FUN_1453e70b0 body=49 status=ok
// SIG undefined FUN_1453e70b0(void)

int FUN_1453e70b0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  (*(code *)**(undefined8 **)
              (*(longlong *)(param_1 + 0x10) + 8 +
              (longlong)*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 4)))();
  LOCK();
  piVar1 = (int *)(param_1 + 0x68);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 1453e70f0 FUN_1453e70f0 body=77 status=ok
// SIG undefined FUN_1453e70f0(void)

undefined8 FUN_1453e70f0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  (**(code **)(*(longlong *)(param_1[2] + 8 + (longlong)*(int *)(*(longlong *)(param_1[2] + 8) + 4))
              + 8))();
  LOCK();
  plVar1 = param_1 + 0xd;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar2 == 1) {
    (**(code **)(*param_1 + 0x20))(param_1,1);
    return 1;
  }
  return 0;
}



// FUNCTION 1453e71a0 FUN_1453e71a0 body=42 status=ok
// SIG undefined FUN_1453e71a0(void)

undefined1 FUN_1453e71a0(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 8))();
  return uVar1;
}



// FUNCTION 1453e71d0 FUN_1453e71d0 body=42 status=ok
// SIG undefined FUN_1453e71d0(void)

undefined1 FUN_1453e71d0(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x10))();
  return uVar1;
}



// FUNCTION 1453e7200 FUN_1453e7200 body=42 status=ok
// SIG undefined FUN_1453e7200(void)

undefined1 FUN_1453e7200(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x18))();
  return uVar1;
}



// FUNCTION 1453e7230 FUN_1453e7230 body=43 status=ok
// SIG undefined FUN_1453e7230(void)

undefined8 * FUN_1453e7230(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 1453e7260 FUN_1453e7260 body=140 status=ok
// SIG undefined FUN_1453e7260(void)

undefined8 * FUN_1453e7260(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149d4c820;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)(param_1 + 1) = DAT_14c744190;
  param_1[3] = param_1;
  param_1[5] = &LAB_1453e7180;
  param_1[6] = FUN_1453e71a0;
  param_1[7] = FUN_1453e71d0;
  param_1[8] = FUN_1453e7200;
  param_1[4] = 0x48;
  *param_1 = &PTR_FUN_149d4c848;
  param_1[9] = FUN_1453e7620;
  param_1[10] = FUN_1453e7760;
  param_1[0xb] = FUN_1453e78d0;
  param_1[0xc] = FUN_1453e79e0;
  return param_1;
}



// FUNCTION 1453e72f0 FUN_1453e72f0 body=84 status=ok
// SIG undefined FUN_1453e72f0(void)

undefined8 *
FUN_1453e72f0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &PTR_FUN_149d4c848;
  FUN_14516fec0();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x70,param_3,param_4,uVar1);
  }
  return param_1;
}



// FUNCTION 1453e7350 FUN_1453e7350 body=230 status=ok
// SIG undefined FUN_1453e7350(void)

longlong * FUN_1453e7350(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

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
      FUN_14557ee00(puVar2 + 4,1,param_3,param_4,uVar3,uVar4);
    }
    *puVar2 = DAT_14c7467e0;
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



// FUNCTION 1453e7440 FUN_1453e7440 body=230 status=ok
// SIG undefined FUN_1453e7440(void)

longlong * FUN_1453e7440(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

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
      FUN_14557fc90(puVar2 + 4,1,param_3,param_4,uVar3,uVar4);
    }
    *puVar2 = DAT_14c7467e4;
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



// FUNCTION 1453e7530 FUN_1453e7530 body=230 status=ok
// SIG undefined FUN_1453e7530(void)

longlong * FUN_1453e7530(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

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
      FUN_145581840(puVar2 + 4,1,param_3,param_4,uVar3,uVar4);
    }
    *puVar2 = DAT_14c7467e8;
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



// FUNCTION 1453e7620 FUN_1453e7620 body=305 status=ok
// SIG undefined FUN_1453e7620(void)

void FUN_1453e7620(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_res8 [2];
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  longlong local_40 [2];
  undefined4 *local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  
  local_40[1] = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) && ((param_4 != 0 && (param_5 != 0))))
  {
    local_30 = local_res8;
    local_28 = local_58;
    local_20 = local_50;
    puVar1 = (undefined8 *)FUN_1453e7070(local_40,param_1);
    puVar1 = (undefined8 *)*puVar1;
    uVar2 = FUN_1453e7440(local_res8,param_5);
    uVar3 = FUN_1453e7350(local_58,param_4);
    uVar4 = FUN_14516a830(local_50,param_3);
    uVar5 = FUN_144d7a4e0(local_48,param_2);
    (**(code **)*puVar1)(puVar1,uVar5,uVar4,uVar3,uVar2);
    if (local_40[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_40[0] + 8 + (longlong)*(int *)(*(longlong *)(local_40[0] + 8) + 4)) + 8))
                ();
    }
  }
  return;
}



// FUNCTION 1453e7760 FUN_1453e7760 body=356 status=ok
// SIG undefined FUN_1453e7760(void)

undefined1
FUN_1453e7760(longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5,
             longlong param_6)

{
  longlong *plVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
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
  FUN_14516fec0();
  if ((((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) ||
     (((param_4 == 0 || (param_5 == 0)) || (param_6 == 0)))) {
    uVar2 = 0;
  }
  else {
    local_48 = local_res8;
    local_40 = local_78;
    local_38 = local_70;
    local_30 = local_68;
    puVar3 = (undefined8 *)FUN_1453e7070(local_58,param_1);
    plVar1 = (longlong *)*puVar3;
    uVar4 = FUN_1453e7530(local_res8,param_6);
    uVar5 = FUN_1453e7440(local_78,param_5);
    uVar6 = FUN_1453e7350(local_70,param_4);
    uVar7 = FUN_14516a830(local_68,param_3);
    uVar8 = FUN_144d7a4e0(local_60,param_2);
    uVar2 = (**(code **)(*plVar1 + 8))(plVar1,uVar8,uVar7,uVar6,uVar5,uVar4);
    if (local_58[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_58[0] + 8 + (longlong)*(int *)(*(longlong *)(local_58[0] + 8) + 4)) + 8))
                ();
    }
  }
  return uVar2;
}



// FUNCTION 1453e78d0 FUN_1453e78d0 body=266 status=ok
// SIG undefined FUN_1453e78d0(void)

undefined1
FUN_1453e78d0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,undefined4 param_5
             ,undefined4 param_6)

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
  FUN_14516fec0();
  if ((((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) || (param_4 == 0)) {
    uVar2 = 0;
  }
  else {
    local_28 = local_res8;
    local_20 = local_48;
    puVar3 = (undefined8 *)FUN_1453e7070(local_38,param_1);
    plVar1 = (longlong *)*puVar3;
    uVar4 = FUN_1453e7350(local_res8,param_4);
    uVar5 = FUN_14516a830(local_48,param_3);
    uVar6 = FUN_144d7a4e0(local_40,param_2);
    uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,uVar6,uVar5,uVar4,param_5,param_6);
    if (local_38[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_38[0] + 8 + (longlong)*(int *)(*(longlong *)(local_38[0] + 8) + 4)) + 8))
                ();
    }
  }
  return uVar2;
}



// FUNCTION 1453e79e0 FUN_1453e79e0 body=183 status=ok
// SIG undefined FUN_1453e79e0(void)

void FUN_1453e79e0(longlong param_1,longlong param_2,longlong param_3)

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
  FUN_14516fec0();
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    local_18 = local_res8;
    puVar2 = (undefined8 *)FUN_1453e7070(local_28,param_1);
    plVar1 = (longlong *)*puVar2;
    uVar3 = FUN_14516a830(local_res8,param_3);
    uVar4 = FUN_144d7a4e0(local_res20,param_2);
    (**(code **)(*plVar1 + 0x18))(plVar1,uVar4,uVar3);
    if (local_28[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_28[0] + 8 + (longlong)*(int *)(*(longlong *)(local_28[0] + 8) + 4)) + 8))
                ();
    }
  }
  return;
}



// FUNCTION 1453e7aa0 FUN_1453e7aa0 body=48 status=ok
// SIG undefined FUN_1453e7aa0(void)

void FUN_1453e7aa0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 1453e7ad0 FUN_1453e7ad0 body=58 status=ok
// SIG undefined FUN_1453e7ad0(void)

longlong * FUN_1453e7ad0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + -0x10);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)))();
  }
  return param_1;
}



// FUNCTION 1453e7b10 FUN_1453e7b10 body=49 status=ok
// SIG undefined FUN_1453e7b10(void)

int FUN_1453e7b10(longlong param_1)

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



// FUNCTION 1453e7b50 FUN_1453e7b50 body=77 status=ok
// SIG undefined FUN_1453e7b50(void)

undefined8 FUN_1453e7b50(longlong *param_1)

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



// FUNCTION 1453e7c00 FUN_1453e7c00 body=42 status=ok
// SIG undefined FUN_1453e7c00(void)

undefined1 FUN_1453e7c00(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 8))();
  return uVar1;
}



// FUNCTION 1453e7c30 FUN_1453e7c30 body=42 status=ok
// SIG undefined FUN_1453e7c30(void)

undefined1 FUN_1453e7c30(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x10))();
  return uVar1;
}



// FUNCTION 1453e7c60 FUN_1453e7c60 body=42 status=ok
// SIG undefined FUN_1453e7c60(void)

undefined1 FUN_1453e7c60(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x18))();
  return uVar1;
}



// FUNCTION 1453e7c90 FUN_1453e7c90 body=43 status=ok
// SIG undefined FUN_1453e7c90(void)

undefined8 * FUN_1453e7c90(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 1453e7cc0 FUN_1453e7cc0 body=107 status=ok
// SIG undefined FUN_1453e7cc0(void)

undefined8 * FUN_1453e7cc0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149d4ca28;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 1) = DAT_14c744194;
  param_1[3] = param_1;
  param_1[5] = &LAB_1453e7be0;
  param_1[6] = FUN_1453e7c00;
  param_1[7] = FUN_1453e7c30;
  param_1[8] = FUN_1453e7c60;
  param_1[4] = 0x30;
  *param_1 = &PTR_FUN_149d4ca50;
  param_1[9] = FUN_1453e7e80;
  return param_1;
}



// FUNCTION 1453e7d30 FUN_1453e7d30 body=84 status=ok
// SIG undefined FUN_1453e7d30(void)

undefined8 *
FUN_1453e7d30(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &PTR_FUN_149d4ca50;
  FUN_14516fec0();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x58,param_3,param_4,uVar1);
  }
  return param_1;
}



// FUNCTION 1453e7d90 FUN_1453e7d90 body=230 status=ok
// SIG undefined FUN_1453e7d90(void)

longlong * FUN_1453e7d90(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

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
      FUN_145581c10(puVar2 + 4,1,param_3,param_4,uVar3,uVar4);
    }
    *puVar2 = DAT_14c7467ec;
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



// FUNCTION 1453e7e80 FUN_1453e7e80 body=541 status=ok
// SIG undefined FUN_1453e7e80(void)

undefined1
FUN_1453e7e80(longlong param_1,longlong param_2,undefined4 param_3,longlong param_4,longlong param_5
             ,undefined8 param_6,int param_7,longlong param_8)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_res8 [2];
  undefined **local_98;
  longlong local_90;
  char local_88;
  undefined **local_80;
  longlong local_78;
  char local_70;
  undefined8 *local_68;
  undefined8 *puStack_60;
  longlong local_58;
  undefined1 local_50 [8];
  longlong local_48;
  undefined8 local_40;
  undefined4 *local_38;
  
  local_40 = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if ((((param_1 == 0) || (param_2 == 0)) || (param_7 < 0)) || (param_8 == 0)) {
    uVar2 = 0;
  }
  else {
    local_68 = (undefined8 *)0x0;
    puStack_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_14516e770(param_6,&local_68);
    local_38 = local_res8;
    puVar3 = (undefined8 *)FUN_1453e7ad0(&local_48,param_1);
    puVar3 = (undefined8 *)*puVar3;
    uVar4 = FUN_1453e7d90(local_res8,param_8);
    local_80 = &PTR_FUN_14ba6d600;
    local_78 = 0;
    if (param_5 != 0) {
      local_78 = param_5;
    }
    local_70 = '\0';
    local_98 = &PTR_FUN_14ba6d600;
    local_90 = 0;
    if (param_4 != 0) {
      local_90 = param_4;
    }
    local_88 = '\0';
    uVar5 = FUN_144d7a4e0(local_50,param_2);
    uVar2 = (**(code **)*puVar3)(puVar3,uVar5,param_3,&local_98,&local_80,&local_68,param_7,uVar4);
    local_98 = &PTR_FUN_14ba6d600;
    if (local_90 != 0) {
      if (local_88 != '\0') {
        cef_string_utf16_clear();
        thunk_FUN_1400020a8(local_90,0x18);
      }
      local_90 = 0;
      local_88 = '\0';
    }
    local_80 = &PTR_FUN_14ba6d600;
    if (local_78 != 0) {
      if (local_70 != '\0') {
        cef_string_utf16_clear();
        thunk_FUN_1400020a8(local_78,0x18);
      }
      local_78 = 0;
      local_70 = '\0';
    }
    if (local_48 != 0) {
      (**(code **)(*(longlong *)(local_48 + 8 + (longlong)*(int *)(*(longlong *)(local_48 + 8) + 4))
                  + 8))();
    }
    puVar1 = puStack_60;
    puVar3 = local_68;
    if (local_68 != (undefined8 *)0x0) {
      for (; puVar3 != puVar1; puVar3 = puVar3 + 3) {
        (**(code **)*puVar3)(puVar3,0);
      }
      FUN_14516eec0(&local_68,local_68,(local_58 - (longlong)local_68) / 0x18);
    }
  }
  return uVar2;
}



// FUNCTION 1453e80a0 FUN_1453e80a0 body=43 status=ok
// SIG undefined FUN_1453e80a0(void)

undefined8 * FUN_1453e80a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149d4cb18;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1453e80d0 FUN_1453e80d0 body=11 status=ok
// SIG undefined FUN_1453e80d0(void)

void FUN_1453e80d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149d4cb18;
  return;
}



// FUNCTION 1453e80e0 FUN_1453e80e0 body=43 status=ok
// SIG undefined FUN_1453e80e0(void)

undefined8 * FUN_1453e80e0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149d4cb18;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1453e8110 FUN_1453e8110 body=58 status=ok
// SIG undefined FUN_1453e8110(void)

longlong * FUN_1453e8110(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + -0x10);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)))();
  }
  return param_1;
}



// FUNCTION 1453e8150 FUN_1453e8150 body=52 status=ok
// SIG undefined FUN_1453e8150(void)

int FUN_1453e8150(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  (*(code *)**(undefined8 **)
              (*(longlong *)(param_1 + 0x10) + 8 +
              (longlong)*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 4)))();
  LOCK();
  piVar1 = (int *)(param_1 + 0x98);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 1453e8190 FUN_1453e8190 body=80 status=ok
// SIG undefined FUN_1453e8190(void)

undefined8 FUN_1453e8190(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  (**(code **)(*(longlong *)(param_1[2] + 8 + (longlong)*(int *)(*(longlong *)(param_1[2] + 8) + 4))
              + 8))();
  LOCK();
  plVar1 = param_1 + 0x13;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar2 == 1) {
    (**(code **)(*param_1 + 0x20))(param_1,1);
    return 1;
  }
  return 0;
}



// FUNCTION 1453e8240 FUN_1453e8240 body=42 status=ok
// SIG undefined FUN_1453e8240(void)

undefined1 FUN_1453e8240(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 8))();
  return uVar1;
}



// FUNCTION 1453e8270 FUN_1453e8270 body=42 status=ok
// SIG undefined FUN_1453e8270(void)

undefined1 FUN_1453e8270(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x10))();
  return uVar1;
}



// FUNCTION 1453e82a0 FUN_1453e82a0 body=42 status=ok
// SIG undefined FUN_1453e82a0(void)

undefined1 FUN_1453e82a0(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x18))();
  return uVar1;
}



// FUNCTION 1453e82d0 FUN_1453e82d0 body=43 status=ok
// SIG undefined FUN_1453e82d0(void)

undefined8 * FUN_1453e82d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 1453e8300 FUN_1453e8300 body=256 status=ok
// SIG undefined FUN_1453e8300(void)

undefined8 * FUN_1453e8300(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149d4cb28;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined4 *)(param_1 + 1) = DAT_14c744198;
  param_1[3] = param_1;
  memset(param_1 + 4,0,0x78);
  param_1[5] = &LAB_1453e8220;
  param_1[6] = FUN_1453e8240;
  param_1[7] = FUN_1453e8270;
  param_1[8] = FUN_1453e82a0;
  param_1[4] = 0x78;
  *param_1 = &PTR_FUN_149d4cb50;
  param_1[9] = FUN_1453e8460;
  param_1[10] = FUN_1453e8590;
  param_1[0xb] = FUN_1453e8690;
  param_1[0xc] = FUN_1453e87b0;
  param_1[0xd] = FUN_1453e8850;
  param_1[0xe] = FUN_1453e8950;
  param_1[0xf] = FUN_1453e8a50;
  param_1[0x10] = FUN_1453e8bc0;
  param_1[0x11] = FUN_1453e8c90;
  param_1[0x12] = FUN_1453e8d30;
  return param_1;
}



// FUNCTION 1453e8400 FUN_1453e8400 body=84 status=ok
// SIG undefined FUN_1453e8400(void)

undefined8 *
FUN_1453e8400(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &PTR_FUN_149d4cb50;
  FUN_14516fec0();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0xa0,param_3,param_4,uVar1);
  }
  return param_1;
}



// FUNCTION 1453e8460 FUN_1453e8460 body=301 status=ok
// SIG undefined FUN_1453e8460(void)

void FUN_1453e8460(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 local_res8 [2];
  undefined1 local_58 [8];
  longlong local_50 [2];
  undefined4 *local_40;
  undefined **local_38;
  longlong local_30;
  char local_28;
  
  local_50[1] = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) && (param_4 != 0)) {
    local_40 = local_res8;
    puVar1 = (undefined8 *)FUN_1453e8110(local_50,param_1);
    puVar1 = (undefined8 *)*puVar1;
    local_38 = &PTR_FUN_14ba6d600;
    local_28 = '\0';
    local_30 = param_4;
    uVar2 = FUN_14516a830(local_res8,param_3);
    uVar3 = FUN_144d7a4e0(local_58,param_2);
    (**(code **)*puVar1)(puVar1,uVar3,uVar2,&local_38);
    local_38 = &PTR_FUN_14ba6d600;
    if (local_30 != 0) {
      if (local_28 != '\0') {
        cef_string_utf16_clear();
        thunk_FUN_1400020a8(local_30,0x18);
      }
      local_30 = 0;
      local_28 = '\0';
    }
    if (local_50[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_50[0] + 8 + (longlong)*(int *)(*(longlong *)(local_50[0] + 8) + 4)) + 8))
                ();
    }
  }
  return;
}



// FUNCTION 1453e8590 FUN_1453e8590 body=255 status=ok
// SIG undefined FUN_1453e8590(void)

void FUN_1453e8590(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 local_res8 [2];
  longlong local_res20;
  undefined8 uVar5;
  undefined **local_30;
  longlong local_28;
  char local_20;
  
  uVar5 = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if ((param_1 != 0) && (param_2 != 0)) {
    puVar3 = (undefined8 *)FUN_1453e8110(&local_res20,param_1);
    plVar1 = (longlong *)*puVar3;
    local_30 = &PTR_FUN_14ba6d600;
    local_28 = 0;
    if (param_3 != 0) {
      local_28 = param_3;
    }
    local_20 = '\0';
    uVar4 = FUN_144d7a4e0(local_res8,param_2);
    lVar2 = *plVar1;
    (**(code **)(lVar2 + 8))(plVar1,uVar4,&local_30,lVar2,uVar5);
    local_30 = &PTR_FUN_14ba6d600;
    if (local_28 != 0) {
      if (local_20 != '\0') {
        cef_string_utf16_clear();
        thunk_FUN_1400020a8(local_28,0x18);
      }
      local_28 = 0;
      local_20 = '\0';
    }
    if (local_res20 != 0) {
      (**(code **)(*(longlong *)
                    (local_res20 + 8 + (longlong)*(int *)(*(longlong *)(local_res20 + 8) + 4)) + 8))
                ();
    }
  }
  return;
}



// FUNCTION 1453e8690 FUN_1453e8690 body=285 status=ok
// SIG undefined FUN_1453e8690(void)

void FUN_1453e8690(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 local_res8 [2];
  longlong local_res20;
  undefined8 uVar6;
  undefined8 *local_20;
  undefined8 *puStack_18;
  longlong local_10;
  
  uVar6 = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if ((param_1 != 0) && (param_2 != 0)) {
    local_20 = (undefined8 *)0x0;
    puStack_18 = (undefined8 *)0x0;
    local_10 = 0;
    FUN_14516e770(param_3,&local_20);
    puVar4 = (undefined8 *)FUN_1453e8110(&local_res20,param_1);
    plVar1 = (longlong *)*puVar4;
    uVar5 = FUN_144d7a4e0(local_res8,param_2);
    lVar2 = *plVar1;
    (**(code **)(lVar2 + 0x10))(plVar1,uVar5,&local_20,lVar2,uVar6);
    if (local_res20 != 0) {
      (**(code **)(*(longlong *)
                    (local_res20 + 8 + (longlong)*(int *)(*(longlong *)(local_res20 + 8) + 4)) + 8))
                ();
    }
    puVar3 = puStack_18;
    puVar4 = local_20;
    if (local_20 != (undefined8 *)0x0) {
      for (; puVar4 != puVar3; puVar4 = puVar4 + 3) {
        (**(code **)*puVar4)(puVar4,0);
      }
      FUN_14516eec0(&local_20,local_20,(local_10 - (longlong)local_20) / 0x18);
    }
  }
  return;
}



// FUNCTION 1453e87b0 FUN_1453e87b0 body=155 status=ok
// SIG undefined FUN_1453e87b0(void)

void FUN_1453e87b0(longlong param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 local_res8 [2];
  longlong local_res20;
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if ((param_1 != 0) && (param_2 != 0)) {
    puVar3 = (undefined8 *)FUN_1453e8110(&local_res20,param_1);
    plVar1 = (longlong *)*puVar3;
    uVar4 = FUN_144d7a4e0(local_res8,param_2);
    lVar2 = *plVar1;
    (**(code **)(lVar2 + 0x18))(plVar1,uVar4,param_3 != 0,lVar2,uVar5);
    if (local_res20 != 0) {
      (**(code **)(*(longlong *)
                    (local_res20 + 8 + (longlong)*(int *)(*(longlong *)(local_res20 + 8) + 4)) + 8))
                ();
    }
  }
  return;
}



// FUNCTION 1453e8850 FUN_1453e8850 body=245 status=ok
// SIG undefined FUN_1453e8850(void)

undefined1 FUN_1453e8850(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 local_res8 [2];
  longlong local_res20;
  undefined8 uVar6;
  undefined **local_30;
  longlong local_28;
  char local_20;
  
  uVar6 = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if ((param_1 == 0) || (param_2 == 0)) {
    uVar3 = 0;
  }
  else {
    local_30 = &PTR_FUN_14ba6d600;
    local_28 = 0;
    if (param_3 != 0) {
      local_28 = param_3;
    }
    local_20 = '\0';
    puVar4 = (undefined8 *)FUN_1453e8110(&local_res20,param_1);
    plVar1 = (longlong *)*puVar4;
    uVar5 = FUN_144d7a4e0(local_res8,param_2);
    lVar2 = *plVar1;
    uVar3 = (**(code **)(lVar2 + 0x20))(plVar1,uVar5,&local_30,lVar2,uVar6);
    if (local_res20 != 0) {
      (**(code **)(*(longlong *)
                    (local_res20 + 8 + (longlong)*(int *)(*(longlong *)(local_res20 + 8) + 4)) + 8))
                ();
    }
    local_30 = &PTR_FUN_14ba6d600;
    if ((local_28 != 0) && (local_20 != '\0')) {
      cef_string_utf16_clear();
      thunk_FUN_1400020a8(local_28,0x18);
    }
  }
  return uVar3;
}



// FUNCTION 1453e8950 FUN_1453e8950 body=255 status=ok
// SIG undefined FUN_1453e8950(void)

void FUN_1453e8950(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 local_res8 [2];
  longlong local_res20;
  undefined8 uVar5;
  undefined **local_30;
  longlong local_28;
  char local_20;
  
  uVar5 = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if ((param_1 != 0) && (param_2 != 0)) {
    puVar3 = (undefined8 *)FUN_1453e8110(&local_res20,param_1);
    plVar1 = (longlong *)*puVar3;
    local_30 = &PTR_FUN_14ba6d600;
    local_28 = 0;
    if (param_3 != 0) {
      local_28 = param_3;
    }
    local_20 = '\0';
    uVar4 = FUN_144d7a4e0(local_res8,param_2);
    lVar2 = *plVar1;
    (**(code **)(lVar2 + 0x28))(plVar1,uVar4,&local_30,lVar2,uVar5);
    local_30 = &PTR_FUN_14ba6d600;
    if (local_28 != 0) {
      if (local_20 != '\0') {
        cef_string_utf16_clear();
        thunk_FUN_1400020a8(local_28,0x18);
      }
      local_28 = 0;
      local_20 = '\0';
    }
    if (local_res20 != 0) {
      (**(code **)(*(longlong *)
                    (local_res20 + 8 + (longlong)*(int *)(*(longlong *)(local_res20 + 8) + 4)) + 8))
                ();
    }
  }
  return;
}



// FUNCTION 1453e8a50 FUN_1453e8a50 body=354 status=ok
// SIG undefined FUN_1453e8a50(void)

undefined1
FUN_1453e8a50(longlong param_1,longlong param_2,undefined4 param_3,longlong param_4,longlong param_5
             ,undefined4 param_6)

{
  longlong *plVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 local_res8 [2];
  longlong local_68 [2];
  undefined **local_58;
  longlong local_50;
  char local_48;
  undefined **local_40;
  longlong local_38;
  char local_30;
  
  local_68[1] = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if ((param_1 == 0) || (param_2 == 0)) {
    uVar2 = 0;
  }
  else {
    puVar3 = (undefined8 *)FUN_1453e8110(local_68,param_1);
    plVar1 = (longlong *)*puVar3;
    local_40 = &PTR_FUN_14ba6d600;
    local_38 = 0;
    if (param_5 != 0) {
      local_38 = param_5;
    }
    local_30 = '\0';
    local_58 = &PTR_FUN_14ba6d600;
    local_50 = 0;
    if (param_4 != 0) {
      local_50 = param_4;
    }
    local_48 = '\0';
    uVar4 = FUN_144d7a4e0(local_res8,param_2);
    uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,uVar4,param_3,&local_58,&local_40,param_6);
    local_58 = &PTR_FUN_14ba6d600;
    if (local_50 != 0) {
      if (local_48 != '\0') {
        cef_string_utf16_clear();
        thunk_FUN_1400020a8(local_50,0x18);
      }
      local_50 = 0;
      local_48 = '\0';
    }
    local_40 = &PTR_FUN_14ba6d600;
    if (local_38 != 0) {
      if (local_30 != '\0') {
        cef_string_utf16_clear();
        thunk_FUN_1400020a8(local_38,0x18);
      }
      local_38 = 0;
      local_30 = '\0';
    }
    if (local_68[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_68[0] + 8 + (longlong)*(int *)(*(longlong *)(local_68[0] + 8) + 4)) + 8))
                ();
    }
  }
  return uVar2;
}



// FUNCTION 1453e8bc0 FUN_1453e8bc0 body=195 status=ok
// SIG undefined FUN_1453e8bc0(void)

undefined1 FUN_1453e8bc0(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 local_res8 [2];
  longlong local_res20;
  undefined8 uVar6;
  undefined **local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  uVar6 = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == (undefined8 *)0x0)) {
    uVar3 = 0;
  }
  else {
    local_18 = *param_3;
    local_10 = 0;
    local_20 = &PTR_FUN_149d4cb20;
    puVar4 = (undefined8 *)FUN_1453e8110(&local_res20,param_1);
    plVar1 = (longlong *)*puVar4;
    uVar5 = FUN_144d7a4e0(local_res8,param_2);
    lVar2 = *plVar1;
    uVar3 = (**(code **)(lVar2 + 0x38))(plVar1,uVar5,&local_20,lVar2,uVar6);
    if (local_res20 != 0) {
      (**(code **)(*(longlong *)
                    (local_res20 + 8 + (longlong)*(int *)(*(longlong *)(local_res20 + 8) + 4)) + 8))
                ();
    }
  }
  return uVar3;
}



// FUNCTION 1453e8c90 FUN_1453e8c90 body=152 status=ok
// SIG undefined FUN_1453e8c90(void)

void FUN_1453e8c90(longlong param_1,longlong param_2,undefined4 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 local_res8 [2];
  longlong local_res20;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if ((param_1 != 0) && (param_2 != 0)) {
    puVar2 = (undefined8 *)FUN_1453e8110(&local_res20,param_1);
    plVar1 = (longlong *)*puVar2;
    uVar3 = FUN_144d7a4e0(local_res8,param_2);
    (**(code **)(*plVar1 + 0x40))(plVar1,uVar3,param_3,param_4,uVar4);
    if (local_res20 != 0) {
      (**(code **)(*(longlong *)
                    (local_res20 + 8 + (longlong)*(int *)(*(longlong *)(local_res20 + 8) + 4)) + 8))
                ();
    }
  }
  return;
}



// FUNCTION 1453e8d30 FUN_1453e8d30 body=240 status=ok
// SIG undefined FUN_1453e8d30(void)

undefined1
FUN_1453e8d30(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
             undefined4 *param_5)

{
  longlong *plVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 local_res8 [2];
  longlong local_48 [2];
  undefined **local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined8 local_10;
  
  local_48[1] = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if (((param_1 == 0) || (param_2 == 0)) || (param_5 == (undefined4 *)0x0)) {
    uVar2 = 0;
  }
  else {
    local_38 = &PTR_FUN_149d4cb78;
    local_10 = 0;
    local_30 = *param_5;
    uStack_2c = param_5[1];
    uStack_28 = param_5[2];
    uStack_24 = param_5[3];
    local_20 = param_5[4];
    uStack_1c = param_5[5];
    uStack_18 = param_5[6];
    uStack_14 = param_5[7];
    puVar3 = (undefined8 *)FUN_1453e8110(local_48,param_1);
    plVar1 = (longlong *)*puVar3;
    uVar4 = FUN_144d7a4e0(local_res8,param_2);
    uVar2 = (**(code **)(*plVar1 + 0x48))(plVar1,uVar4,param_3,param_4,&local_38);
    if (local_48[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_48[0] + 8 + (longlong)*(int *)(*(longlong *)(local_48[0] + 8) + 4)) + 8))
                ();
    }
  }
  return uVar2;
}



// FUNCTION 1453e8e20 FUN_1453e8e20 body=11 status=ok
// SIG undefined FUN_1453e8e20(void)

void FUN_1453e8e20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149d4cb78;
  return;
}



// FUNCTION 1453e8e30 FUN_1453e8e30 body=43 status=ok
// SIG undefined FUN_1453e8e30(void)

undefined8 * FUN_1453e8e30(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149d4cb78;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1453e8e60 FUN_1453e8e60 body=48 status=ok
// SIG undefined FUN_1453e8e60(void)

void FUN_1453e8e60(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 1453e8e90 FUN_1453e8e90 body=48 status=ok
// SIG undefined FUN_1453e8e90(void)

void FUN_1453e8e90(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 1453e8ec0 FUN_1453e8ec0 body=58 status=ok
// SIG undefined FUN_1453e8ec0(void)

longlong * FUN_1453e8ec0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + -0x10);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)))();
  }
  return param_1;
}



// FUNCTION 1453e8f00 FUN_1453e8f00 body=49 status=ok
// SIG undefined FUN_1453e8f00(void)

int FUN_1453e8f00(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  (*(code *)**(undefined8 **)
              (*(longlong *)(param_1 + 0x10) + 8 +
              (longlong)*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 4)))();
  LOCK();
  piVar1 = (int *)(param_1 + 0x58);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 1453e8f40 FUN_1453e8f40 body=77 status=ok
// SIG undefined FUN_1453e8f40(void)

undefined8 FUN_1453e8f40(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  (**(code **)(*(longlong *)(param_1[2] + 8 + (longlong)*(int *)(*(longlong *)(param_1[2] + 8) + 4))
              + 8))();
  LOCK();
  plVar1 = param_1 + 0xb;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar2 == 1) {
    (**(code **)(*param_1 + 0x20))(param_1,1);
    return 1;
  }
  return 0;
}



// FUNCTION 1453e8ff0 FUN_1453e8ff0 body=42 status=ok
// SIG undefined FUN_1453e8ff0(void)

undefined1 FUN_1453e8ff0(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 8))();
  return uVar1;
}



// FUNCTION 1453e9020 FUN_1453e9020 body=42 status=ok
// SIG undefined FUN_1453e9020(void)

undefined1 FUN_1453e9020(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x10))();
  return uVar1;
}



// FUNCTION 1453e9050 FUN_1453e9050 body=42 status=ok
// SIG undefined FUN_1453e9050(void)

undefined1 FUN_1453e9050(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x18))();
  return uVar1;
}



// FUNCTION 1453e9080 FUN_1453e9080 body=43 status=ok
// SIG undefined FUN_1453e9080(void)

undefined8 * FUN_1453e9080(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1453e90b0 FUN_1453e90b0 body=118 status=ok
// SIG undefined FUN_1453e90b0(void)

undefined8 * FUN_1453e90b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149d4cd38;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)(param_1 + 1) = DAT_14c74419c;
  param_1[3] = param_1;
  param_1[5] = &LAB_1453e8fd0;
  param_1[6] = FUN_1453e8ff0;
  param_1[7] = FUN_1453e9020;
  param_1[8] = FUN_1453e9050;
  param_1[4] = 0x38;
  *param_1 = &PTR_FUN_149d4cd60;
  param_1[9] = FUN_1453e9460;
  param_1[10] = FUN_1453e9600;
  return param_1;
}



// FUNCTION 1453e9130 FUN_1453e9130 body=84 status=ok
// SIG undefined FUN_1453e9130(void)

undefined8 *
FUN_1453e9130(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &PTR_FUN_149d4cd60;
  FUN_14516fec0();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x60,param_3,param_4,uVar1);
  }
  return param_1;
}



// FUNCTION 1453e9190 FUN_1453e9190 body=230 status=ok
// SIG undefined FUN_1453e9190(void)

longlong * FUN_1453e9190(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

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
      FUN_145582020(puVar2 + 4,1,param_3,param_4,uVar3,uVar4);
    }
    *puVar2 = DAT_14c7467f0;
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



// FUNCTION 1453e9280 FUN_1453e9280 body=230 status=ok
// SIG undefined FUN_1453e9280(void)

longlong * FUN_1453e9280(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

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
      FUN_1455823c0(puVar2 + 4,1,param_3,param_4,uVar3,uVar4);
    }
    *puVar2 = DAT_14c7467f4;
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



// FUNCTION 1453e9370 FUN_1453e9370 body=230 status=ok
// SIG undefined FUN_1453e9370(void)

longlong * FUN_1453e9370(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

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
      FUN_1455827a0(puVar2 + 4,1,param_3,param_4,uVar3,uVar4);
    }
    *puVar2 = DAT_14c7467f8;
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



// FUNCTION 1453e9460 FUN_1453e9460 body=363 status=ok
// SIG undefined FUN_1453e9460(void)

void FUN_1453e9460(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_res8 [2];
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  longlong local_68 [2];
  undefined4 *local_58;
  undefined1 *local_50;
  undefined **local_48;
  longlong local_40;
  char local_38;
  
  local_68[1] = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) && ((param_4 != 0 && (param_5 != 0))))
  {
    local_58 = local_res8;
    local_50 = local_78;
    puVar1 = (undefined8 *)FUN_1453e8ec0(local_68,param_1);
    puVar1 = (undefined8 *)*puVar1;
    uVar2 = FUN_1453e9190(local_res8,param_5);
    local_48 = &PTR_FUN_14ba6d600;
    local_38 = '\0';
    local_40 = param_4;
    uVar3 = FUN_1453e9370(local_78,param_3);
    uVar4 = FUN_144d7a4e0(local_70,param_2);
    (**(code **)*puVar1)(puVar1,uVar4,uVar3,&local_48,uVar2);
    local_48 = &PTR_FUN_14ba6d600;
    if (local_40 != 0) {
      if (local_38 != '\0') {
        cef_string_utf16_clear();
        thunk_FUN_1400020a8(local_40,0x18);
      }
      local_40 = 0;
      local_38 = '\0';
    }
    if (local_68[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_68[0] + 8 + (longlong)*(int *)(*(longlong *)(local_68[0] + 8) + 4)) + 8))
                ();
    }
  }
  return;
}



// FUNCTION 1453e95d0 FUN_1453e95d0 body=48 status=ok
// SIG undefined FUN_1453e95d0(void)

void FUN_1453e95d0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 1453e9600 FUN_1453e9600 body=243 status=ok
// SIG undefined FUN_1453e9600(void)

void FUN_1453e9600(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

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
  FUN_14516fec0();
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) && (param_4 != 0)) {
    local_28 = local_res8;
    local_20 = local_48;
    puVar2 = (undefined8 *)FUN_1453e8ec0(local_38,param_1);
    plVar1 = (longlong *)*puVar2;
    uVar3 = FUN_1453e9280(local_res8,param_4);
    uVar4 = FUN_1453e9370(local_48,param_3);
    uVar5 = FUN_144d7a4e0(local_40,param_2);
    (**(code **)(*plVar1 + 8))(plVar1,uVar5,uVar4,uVar3);
    if (local_38[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_38[0] + 8 + (longlong)*(int *)(*(longlong *)(local_38[0] + 8) + 4)) + 8))
                ();
    }
  }
  return;
}



// FUNCTION 1453e9700 FUN_1453e9700 body=43 status=ok
// SIG undefined FUN_1453e9700(void)

undefined8 * FUN_1453e9700(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149d4cef0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1453e9730 FUN_1453e9730 body=11 status=ok
// SIG undefined FUN_1453e9730(void)

void FUN_1453e9730(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149d4cef0;
  return;
}



// FUNCTION 1453e9740 FUN_1453e9740 body=43 status=ok
// SIG undefined FUN_1453e9740(void)

undefined8 * FUN_1453e9740(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149d4cef0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1453e9770 FUN_1453e9770 body=58 status=ok
// SIG undefined FUN_1453e9770(void)

longlong * FUN_1453e9770(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + -0x10);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)))();
  }
  return param_1;
}



// FUNCTION 1453e97b0 FUN_1453e97b0 body=49 status=ok
// SIG undefined FUN_1453e97b0(void)

int FUN_1453e97b0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  (*(code *)**(undefined8 **)
              (*(longlong *)(param_1 + 0x10) + 8 +
              (longlong)*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 4)))();
  LOCK();
  piVar1 = (int *)(param_1 + 0x58);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 1453e97f0 FUN_1453e97f0 body=77 status=ok
// SIG undefined FUN_1453e97f0(void)

undefined8 FUN_1453e97f0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  (**(code **)(*(longlong *)(param_1[2] + 8 + (longlong)*(int *)(*(longlong *)(param_1[2] + 8) + 4))
              + 8))();
  LOCK();
  plVar1 = param_1 + 0xb;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar2 == 1) {
    (**(code **)(*param_1 + 0x20))(param_1,1);
    return 1;
  }
  return 0;
}



// FUNCTION 1453e98a0 FUN_1453e98a0 body=42 status=ok
// SIG undefined FUN_1453e98a0(void)

undefined1 FUN_1453e98a0(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 8))();
  return uVar1;
}



// FUNCTION 1453e98d0 FUN_1453e98d0 body=42 status=ok
// SIG undefined FUN_1453e98d0(void)

undefined1 FUN_1453e98d0(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x10))();
  return uVar1;
}



// FUNCTION 1453e9900 FUN_1453e9900 body=42 status=ok
// SIG undefined FUN_1453e9900(void)

undefined1 FUN_1453e9900(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x18))();
  return uVar1;
}



// FUNCTION 1453e9930 FUN_1453e9930 body=43 status=ok
// SIG undefined FUN_1453e9930(void)

undefined8 * FUN_1453e9930(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1453e9960 FUN_1453e9960 body=118 status=ok
// SIG undefined FUN_1453e9960(void)

undefined8 * FUN_1453e9960(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149d4cf00;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)(param_1 + 1) = DAT_14c7441a0;
  param_1[3] = param_1;
  param_1[5] = &LAB_1453e9880;
  param_1[6] = FUN_1453e98a0;
  param_1[7] = FUN_1453e98d0;
  param_1[8] = FUN_1453e9900;
  param_1[4] = 0x38;
  *param_1 = &PTR_FUN_149d4cf28;
  param_1[9] = FUN_1453e9a40;
  param_1[10] = FUN_1453e9b10;
  return param_1;
}



// FUNCTION 1453e99e0 FUN_1453e99e0 body=84 status=ok
// SIG undefined FUN_1453e99e0(void)

undefined8 *
FUN_1453e99e0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &PTR_FUN_149d4cf28;
  FUN_14516fec0();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x60,param_3,param_4,uVar1);
  }
  return param_1;
}



// FUNCTION 1453e9a40 FUN_1453e9a40 body=207 status=ok
// SIG undefined FUN_1453e9a40(void)

undefined1 FUN_1453e9a40(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_res8 [2];
  undefined1 local_28 [8];
  longlong local_20 [2];
  undefined4 *local_10;
  
  local_20[1] = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
    uVar1 = 0;
  }
  else {
    local_10 = local_res8;
    puVar2 = (undefined8 *)FUN_1453e9770(local_20,param_1);
    puVar2 = (undefined8 *)*puVar2;
    uVar3 = FUN_145174020(local_res8,param_3);
    uVar4 = FUN_144d7a4e0(local_28,param_2);
    uVar1 = (**(code **)*puVar2)(puVar2,uVar4,uVar3,param_4);
    if (local_20[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_20[0] + 8 + (longlong)*(int *)(*(longlong *)(local_20[0] + 8) + 4)) + 8))
                ();
    }
  }
  return uVar1;
}



// FUNCTION 1453e9b10 FUN_1453e9b10 body=407 status=ok
// SIG undefined FUN_1453e9b10(void)

void FUN_1453e9b10(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined4 *param_5)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_c8 [32];
  undefined4 local_a8 [2];
  longlong local_a0;
  undefined8 *local_98;
  undefined8 *puStack_90;
  longlong local_88;
  undefined1 local_80 [8];
  undefined8 local_78;
  undefined4 *local_70;
  undefined **local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_78 = 0xfffffffffffffffe;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8[0] = 0;
  FUN_14516fec0();
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) &&
     ((param_4 == 0 || (param_5 != (undefined4 *)0x0)))) {
    local_98 = (undefined8 *)0x0;
    puStack_90 = (undefined8 *)0x0;
    local_88 = 0;
    for (; param_4 != 0; param_4 = param_4 + -1) {
      local_48 = 0;
      local_60 = *param_5;
      uStack_5c = param_5[1];
      uStack_58 = param_5[2];
      uStack_54 = param_5[3];
      local_50 = param_5[4];
      local_68 = &PTR_FUN_149d4cef8;
      FUN_1453e9de0(&local_98,&local_68);
      param_5 = param_5 + 5;
    }
    local_70 = local_a8;
    puVar3 = (undefined8 *)FUN_1453e9770(&local_a0,param_1);
    plVar1 = (longlong *)*puVar3;
    uVar4 = FUN_14516a830(local_a8,param_3);
    uVar5 = FUN_144d7a4e0(local_80,param_2);
    (**(code **)(*plVar1 + 8))(plVar1,uVar5,uVar4,&local_98);
    if (local_a0 != 0) {
      (**(code **)(*(longlong *)(local_a0 + 8 + (longlong)*(int *)(*(longlong *)(local_a0 + 8) + 4))
                  + 8))();
    }
    puVar2 = puStack_90;
    puVar3 = local_98;
    if (local_98 != (undefined8 *)0x0) {
      for (; puVar3 != puVar2; puVar3 = puVar3 + 5) {
        (**(code **)*puVar3)(puVar3,0);
      }
      FUN_1453e9cd0(&local_98,local_98,(local_88 - (longlong)local_98) / 0x28);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_c8);
}



// FUNCTION 1453e9cd0 FUN_1453e9cd0 body=109 status=ok
// SIG undefined FUN_1453e9cd0(void)

void FUN_1453e9cd0(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  
  if (0x666666666666666 < param_3) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  uVar1 = param_2;
  if (0xfff < param_3 * 0x28) {
    if ((param_2 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    uVar1 = *(ulonglong *)(param_2 - 8);
    if (param_2 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    if (param_2 - uVar1 < 8) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    if (0x27 < param_2 - uVar1) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1400020a8(uVar1);
  return;
}



// FUNCTION 1453e9d50 FUN_1453e9d50 body=124 status=ok
// SIG undefined FUN_1453e9d50(void)

ulonglong FUN_1453e9d50(undefined8 param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    if (0x666666666666666 < param_2) {
                    /* WARNING: Subroutine does not return */
      std::_Xbad_alloc();
    }
    param_2 = param_2 * 0x28;
    if (0xfff < param_2) {
      if (param_2 + 0x27 <= param_2) {
                    /* WARNING: Subroutine does not return */
        std::_Xbad_alloc();
      }
      lVar1 = FUN_14494321d(param_2 + 0x27);
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar2 = lVar1 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar2 - 8) = lVar1;
      return uVar2;
    }
    uVar2 = FUN_14494321d();
    if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  return uVar2;
}



// FUNCTION 1453e9dd0 thunk_FUN_1453ea0b0 body=5 status=ok
// SIG undefined thunk_FUN_1453ea0b0(void)

void thunk_FUN_1453ea0b0(void)

{
  FUN_1453ea0b0();
  return;
}



// FUNCTION 1453e9de0 FUN_1453e9de0 body=246 status=ok
// SIG undefined FUN_1453e9de0(void)

void FUN_1453e9de0(ulonglong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  uVar1 = param_1[1];
  if ((param_2 < uVar1) && (uVar2 = *param_1, uVar2 <= param_2)) {
    if (uVar1 == param_1[2]) {
      FUN_1453e9fe0(param_1);
    }
    param_2 = *param_1 + ((longlong)(param_2 - uVar2) / 0x28) * 0x28;
    puVar5 = (undefined8 *)param_1[1];
    if (puVar5 == (undefined8 *)0x0) goto LAB_1453e9ec6;
    *puVar5 = &PTR_FUN_149d4cef0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    *(undefined4 *)(puVar5 + 3) = 0;
  }
  else {
    if (uVar1 == param_1[2]) {
      FUN_1453e9fe0(param_1);
    }
    puVar5 = (undefined8 *)param_1[1];
    if (puVar5 == (undefined8 *)0x0) goto LAB_1453e9ec6;
    *puVar5 = &PTR_FUN_149d4cef0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    *(undefined4 *)(puVar5 + 3) = 0;
  }
  puVar5[4] = 0;
  puVar4 = (undefined8 *)(param_2 + 8);
  if (param_2 == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  uVar3 = puVar4[1];
  puVar5[1] = *puVar4;
  puVar5[2] = uVar3;
  *(undefined4 *)(puVar5 + 3) = *(undefined4 *)(puVar4 + 2);
  *puVar5 = &PTR_FUN_149d4cef8;
LAB_1453e9ec6:
  param_1[1] = param_1[1] + 0x28;
  return;
}



// FUNCTION 1453e9ee0 FUN_1453e9ee0 body=244 status=ok
// SIG undefined FUN_1453e9ee0(void)

void FUN_1453e9ee0(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  lVar2 = FUN_1453e9d50();
  FUN_1453ea130(*param_1,param_1[1],lVar2,param_1);
  puVar4 = (undefined8 *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  lVar3 = (longlong)puVar1 - (longlong)puVar4;
  if (puVar4 != (undefined8 *)0x0) {
    for (; puVar4 != puVar1; puVar4 = puVar4 + 5) {
      (**(code **)*puVar4)(puVar4,0);
    }
    FUN_1453e9cd0(param_1,*param_1,(param_1[2] - *param_1) / 0x28);
  }
  param_1[2] = lVar2 + param_2 * 0x28;
  param_1[1] = lVar2 + (lVar3 / 0x28) * 0x28;
  *param_1 = lVar2;
  return;
}



// FUNCTION 1453e9fe0 FUN_1453e9fe0 body=199 status=ok
// SIG undefined FUN_1453e9fe0(void)

void FUN_1453e9fe0(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (param_2 <= (ulonglong)((param_1[2] - param_1[1]) / 0x28)) {
    return;
  }
  lVar1 = (param_1[1] - *param_1) / 0x28;
  if (0x666666666666666U - lVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  param_2 = lVar1 + param_2;
  uVar2 = (param_1[2] - *param_1) / 0x28;
  uVar3 = 0;
  if (uVar2 <= 0x666666666666666 - (uVar2 >> 1)) {
    uVar3 = (uVar2 >> 1) + uVar2;
  }
  if (param_2 <= uVar3) {
    param_2 = uVar3;
  }
  FUN_1453e9ee0(param_1,param_2);
  return;
}



// FUNCTION 1453ea0b0 FUN_1453ea0b0 body=128 status=ok
// SIG undefined FUN_1453ea0b0(void)

void FUN_1453ea0b0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)param_1[1];
    for (; puVar2 != puVar1; puVar2 = puVar2 + 5) {
      (**(code **)*puVar2)(puVar2,0);
    }
    FUN_1453e9cd0(param_1,*param_1,(param_1[2] - *param_1) / 0x28);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 1453ea130 FUN_1453ea130 body=142 status=ok
// SIG undefined FUN_1453ea130(void)

undefined8 * FUN_1453ea130(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_1 != param_2) {
    puVar3 = param_3 + 1;
    param_1 = param_1 - (longlong)param_3;
    do {
      if (param_3 != (undefined8 *)0x0) {
        *param_3 = &PTR_FUN_149d4cef0;
        *puVar3 = 0;
        puVar3[1] = 0;
        *(undefined4 *)(puVar3 + 2) = 0;
        puVar3[3] = 0;
        puVar2 = (undefined8 *)((longlong)puVar3 + param_1);
        if (param_1 + -8 + (longlong)puVar3 == 0) {
          puVar2 = (undefined8 *)0x0;
        }
        uVar1 = puVar2[1];
        *puVar3 = *puVar2;
        puVar3[1] = uVar1;
        *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(puVar2 + 2);
        *param_3 = &PTR_FUN_149d4cef8;
      }
      puVar3 = puVar3 + 5;
      param_3 = param_3 + 5;
    } while (param_1 + -8 + (longlong)puVar3 != param_2);
  }
  return param_3;
}



// FUNCTION 1453ea1c0 FUN_1453ea1c0 body=11 status=ok
// SIG undefined FUN_1453ea1c0(void)

void FUN_1453ea1c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba6c6f0;
  return;
}



// FUNCTION 1453ea1d0 FUN_1453ea1d0 body=58 status=ok
// SIG undefined FUN_1453ea1d0(void)

longlong * FUN_1453ea1d0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + -0x10);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)))();
  }
  return param_1;
}



// FUNCTION 1453ea210 FUN_1453ea210 body=49 status=ok
// SIG undefined FUN_1453ea210(void)

int FUN_1453ea210(longlong param_1)

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



// FUNCTION 1453ea250 FUN_1453ea250 body=77 status=ok
// SIG undefined FUN_1453ea250(void)

undefined8 FUN_1453ea250(longlong *param_1)

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



// FUNCTION 1453ea300 FUN_1453ea300 body=42 status=ok
// SIG undefined FUN_1453ea300(void)

undefined1 FUN_1453ea300(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 8))();
  return uVar1;
}



// FUNCTION 1453ea330 FUN_1453ea330 body=42 status=ok
// SIG undefined FUN_1453ea330(void)

undefined1 FUN_1453ea330(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x10))();
  return uVar1;
}



// FUNCTION 1453ea360 FUN_1453ea360 body=42 status=ok
// SIG undefined FUN_1453ea360(void)

undefined1 FUN_1453ea360(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x18))();
  return uVar1;
}



// FUNCTION 1453ea390 FUN_1453ea390 body=43 status=ok
// SIG undefined FUN_1453ea390(void)

undefined8 * FUN_1453ea390(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 1453ea3c0 FUN_1453ea3c0 body=107 status=ok
// SIG undefined FUN_1453ea3c0(void)

undefined8 * FUN_1453ea3c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149d4cfc8;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 1) = DAT_14c7441a4;
  param_1[3] = param_1;
  param_1[5] = &LAB_1453ea2e0;
  param_1[6] = FUN_1453ea300;
  param_1[7] = FUN_1453ea330;
  param_1[8] = FUN_1453ea360;
  param_1[4] = 0x30;
  *param_1 = &PTR_FUN_149d4cff0;
  param_1[9] = FUN_1453ea490;
  return param_1;
}



// FUNCTION 1453ea430 FUN_1453ea430 body=84 status=ok
// SIG undefined FUN_1453ea430(void)

undefined8 *
FUN_1453ea430(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &PTR_FUN_149d4cff0;
  FUN_14516fec0();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x58,param_3,param_4,uVar1);
  }
  return param_1;
}



// FUNCTION 1453ea490 FUN_1453ea490 body=253 status=ok
// SIG undefined FUN_1453ea490(void)

void FUN_1453ea490(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 *param_5,undefined4 param_6,int param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_a8 [32];
  undefined ***local_88;
  undefined4 local_80;
  undefined1 local_78;
  undefined4 local_68 [2];
  longlong local_60 [2];
  undefined **local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_60[1] = 0xfffffffffffffffe;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68[0] = 0;
  FUN_14516fec0();
  if (((param_1 != 0) && (param_2 != 0)) && (param_5 != (undefined4 *)0x0)) {
    local_38 = 0;
    local_48 = *param_5;
    uStack_44 = param_5[1];
    uStack_40 = param_5[2];
    uStack_3c = param_5[3];
    local_50 = &PTR_FUN_14ba6c6e8;
    puVar1 = (undefined8 *)FUN_1453ea1d0(local_60,param_1);
    puVar1 = (undefined8 *)*puVar1;
    uVar2 = FUN_144d7a4e0(local_68,param_2);
    local_78 = param_7 != 0;
    local_80 = param_6;
    local_88 = &local_50;
    (**(code **)*puVar1)(puVar1,uVar2,param_3,param_4);
    if (local_60[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_60[0] + 8 + (longlong)*(int *)(*(longlong *)(local_60[0] + 8) + 4)) + 8))
                ();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
}



// FUNCTION 1453ea5a0 FUN_1453ea5a0 body=58 status=ok
// SIG undefined FUN_1453ea5a0(void)

longlong * FUN_1453ea5a0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + -0x10);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)))();
  }
  return param_1;
}



// FUNCTION 1453ea5e0 FUN_1453ea5e0 body=49 status=ok
// SIG undefined FUN_1453ea5e0(void)

int FUN_1453ea5e0(longlong param_1)

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



// FUNCTION 1453ea620 FUN_1453ea620 body=77 status=ok
// SIG undefined FUN_1453ea620(void)

undefined8 FUN_1453ea620(longlong *param_1)

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



// FUNCTION 1453ea6d0 FUN_1453ea6d0 body=42 status=ok
// SIG undefined FUN_1453ea6d0(void)

undefined1 FUN_1453ea6d0(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 8))();
  return uVar1;
}



// FUNCTION 1453ea700 FUN_1453ea700 body=42 status=ok
// SIG undefined FUN_1453ea700(void)

undefined1 FUN_1453ea700(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x10))();
  return uVar1;
}



// FUNCTION 1453ea730 FUN_1453ea730 body=42 status=ok
// SIG undefined FUN_1453ea730(void)

undefined1 FUN_1453ea730(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x18))();
  return uVar1;
}



// FUNCTION 1453ea760 FUN_1453ea760 body=43 status=ok
// SIG undefined FUN_1453ea760(void)

undefined8 * FUN_1453ea760(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 1453ea790 FUN_1453ea790 body=129 status=ok
// SIG undefined FUN_1453ea790(void)

undefined8 * FUN_1453ea790(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149d4d068;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 1) = DAT_14c7441a8;
  param_1[3] = param_1;
  param_1[5] = &LAB_1453ea6b0;
  param_1[6] = FUN_1453ea6d0;
  param_1[7] = FUN_1453ea700;
  param_1[8] = FUN_1453ea730;
  param_1[4] = 0x40;
  *param_1 = &PTR_FUN_149d4d090;
  param_1[9] = FUN_1453ea880;
  param_1[10] = FUN_1453ea920;
  param_1[0xb] = FUN_1453ea9d0;
  return param_1;
}



// FUNCTION 1453ea820 FUN_1453ea820 body=84 status=ok
// SIG undefined FUN_1453ea820(void)

undefined8 *
FUN_1453ea820(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &PTR_FUN_149d4d090;
  FUN_14516fec0();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x68,param_3,param_4,uVar1);
  }
  return param_1;
}



// FUNCTION 1453ea880 FUN_1453ea880 body=154 status=ok
// SIG undefined FUN_1453ea880(void)

void FUN_1453ea880(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 local_res8 [2];
  longlong local_res20;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if ((param_1 != 0) && (param_2 != 0)) {
    puVar2 = (undefined8 *)FUN_1453ea5a0(&local_res20,param_1);
    puVar2 = (undefined8 *)*puVar2;
    uVar3 = FUN_144d7a4e0(local_res8,param_2);
    puVar1 = (undefined8 *)*puVar2;
    (*(code *)*puVar1)(puVar2,uVar3,param_3 != 0,puVar1,uVar4);
    if (local_res20 != 0) {
      (**(code **)(*(longlong *)
                    (local_res20 + 8 + (longlong)*(int *)(*(longlong *)(local_res20 + 8) + 4)) + 8))
                ();
    }
  }
  return;
}



// FUNCTION 1453ea920 FUN_1453ea920 body=161 status=ok
// SIG undefined FUN_1453ea920(void)

undefined1 FUN_1453ea920(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 local_res8 [2];
  longlong local_res20;
  undefined8 uVar6;
  
  uVar6 = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if ((param_1 == 0) || (param_2 == 0)) {
    uVar3 = 0;
  }
  else {
    puVar4 = (undefined8 *)FUN_1453ea5a0(&local_res20,param_1);
    plVar1 = (longlong *)*puVar4;
    uVar5 = FUN_144d7a4e0(local_res8,param_2);
    lVar2 = *plVar1;
    uVar3 = (**(code **)(lVar2 + 8))(plVar1,uVar5,param_3,lVar2,uVar6);
    if (local_res20 != 0) {
      (**(code **)(*(longlong *)
                    (local_res20 + 8 + (longlong)*(int *)(*(longlong *)(local_res20 + 8) + 4)) + 8))
                ();
    }
  }
  return uVar3;
}



// FUNCTION 1453ea9d0 FUN_1453ea9d0 body=136 status=ok
// SIG undefined FUN_1453ea9d0(void)

void FUN_1453ea9d0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 local_res8 [2];
  longlong local_res18 [2];
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if ((param_1 != 0) && (param_2 != 0)) {
    puVar3 = (undefined8 *)FUN_1453ea5a0(local_res18,param_1);
    plVar1 = (longlong *)*puVar3;
    uVar4 = FUN_144d7a4e0(local_res8,param_2);
    lVar2 = *plVar1;
    (**(code **)(lVar2 + 0x10))(plVar1,uVar4,lVar2,param_4,uVar5);
    if (local_res18[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_res18[0] + 8 + (longlong)*(int *)(*(longlong *)(local_res18[0] + 8) + 4))
                  + 8))();
    }
  }
  return;
}



// FUNCTION 1453eaa60 FUN_1453eaa60 body=48 status=ok
// SIG undefined FUN_1453eaa60(void)

void FUN_1453eaa60(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 1453eaa90 FUN_1453eaa90 body=58 status=ok
// SIG undefined FUN_1453eaa90(void)

longlong * FUN_1453eaa90(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + -0x10);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)))();
  }
  return param_1;
}



// FUNCTION 1453eaad0 FUN_1453eaad0 body=49 status=ok
// SIG undefined FUN_1453eaad0(void)

int FUN_1453eaad0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  (*(code *)**(undefined8 **)
              (*(longlong *)(param_1 + 0x10) + 8 +
              (longlong)*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 4)))();
  LOCK();
  piVar1 = (int *)(param_1 + 0x68);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 1453eab10 FUN_1453eab10 body=77 status=ok
// SIG undefined FUN_1453eab10(void)

undefined8 FUN_1453eab10(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  (**(code **)(*(longlong *)(param_1[2] + 8 + (longlong)*(int *)(*(longlong *)(param_1[2] + 8) + 4))
              + 8))();
  LOCK();
  plVar1 = param_1 + 0xd;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar2 == 1) {
    (**(code **)(*param_1 + 0x20))(param_1,1);
    return 1;
  }
  return 0;
}



// FUNCTION 1453eabc0 FUN_1453eabc0 body=42 status=ok
// SIG undefined FUN_1453eabc0(void)

undefined1 FUN_1453eabc0(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 8))();
  return uVar1;
}



// FUNCTION 1453eabf0 FUN_1453eabf0 body=42 status=ok
// SIG undefined FUN_1453eabf0(void)

undefined1 FUN_1453eabf0(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x10))();
  return uVar1;
}



// FUNCTION 1453eac20 FUN_1453eac20 body=42 status=ok
// SIG undefined FUN_1453eac20(void)

undefined1 FUN_1453eac20(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x18))();
  return uVar1;
}



// FUNCTION 1453eac50 FUN_1453eac50 body=43 status=ok
// SIG undefined FUN_1453eac50(void)

undefined8 * FUN_1453eac50(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 1453eac80 FUN_1453eac80 body=140 status=ok
// SIG undefined FUN_1453eac80(void)

undefined8 * FUN_1453eac80(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149d4d158;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)(param_1 + 1) = DAT_14c7441ac;
  param_1[3] = param_1;
  param_1[5] = &LAB_1453eaba0;
  param_1[6] = FUN_1453eabc0;
  param_1[7] = FUN_1453eabf0;
  param_1[8] = FUN_1453eac20;
  param_1[4] = 0x48;
  *param_1 = &PTR_FUN_149d4d180;
  param_1[9] = FUN_1453eae60;
  param_1[10] = FUN_1453eb070;
  param_1[0xb] = FUN_1453eb1d0;
  param_1[0xc] = FUN_1453eb260;
  return param_1;
}



// FUNCTION 1453ead10 FUN_1453ead10 body=84 status=ok
// SIG undefined FUN_1453ead10(void)

undefined8 *
FUN_1453ead10(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &PTR_FUN_149d4d180;
  FUN_14516fec0();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x70,param_3,param_4,uVar1);
  }
  return param_1;
}



// FUNCTION 1453ead70 FUN_1453ead70 body=230 status=ok
// SIG undefined FUN_1453ead70(void)

longlong * FUN_1453ead70(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

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
      FUN_145583410(puVar2 + 4,1,param_3,param_4,uVar3,uVar4);
    }
    *puVar2 = DAT_14c7467fc;
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



// FUNCTION 1453eae60 FUN_1453eae60 body=524 status=ok
// SIG undefined FUN_1453eae60(void)

undefined1
FUN_1453eae60(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4,longlong param_5
             ,longlong param_6,longlong param_7,uint *param_8)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_res8 [2];
  undefined **local_98;
  longlong local_90;
  char local_88;
  undefined **local_80;
  longlong local_78;
  char local_70;
  undefined **local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined1 *local_30;
  
  local_38 = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if ((((param_1 == 0) || (param_2 == 0)) || (param_7 == 0)) || (param_8 == (uint *)0x0)) {
    uVar1 = 0;
  }
  else {
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,*param_8 != 0);
    local_30 = local_48;
    puVar2 = (undefined8 *)FUN_1453eaa90(&local_50,param_1);
    puVar2 = (undefined8 *)*puVar2;
    uVar3 = FUN_1453ead70(local_48,param_7);
    local_68 = &PTR_FUN_14ba6d600;
    local_60 = 0;
    if (param_6 != 0) {
      local_60 = param_6;
    }
    local_58 = '\0';
    local_80 = &PTR_FUN_14ba6d600;
    local_78 = 0;
    if (param_5 != 0) {
      local_78 = param_5;
    }
    local_70 = '\0';
    local_98 = &PTR_FUN_14ba6d600;
    local_90 = 0;
    if (param_3 != 0) {
      local_90 = param_3;
    }
    local_88 = '\0';
    uVar4 = FUN_144d7a4e0(local_40,param_2);
    uVar1 = (**(code **)*puVar2)
                      (puVar2,uVar4,&local_98,param_4,&local_80,&local_68,uVar3,local_res8);
    local_98 = &PTR_FUN_14ba6d600;
    if (local_90 != 0) {
      if (local_88 != '\0') {
        cef_string_utf16_clear();
        thunk_FUN_1400020a8(local_90,0x18);
      }
      local_90 = 0;
      local_88 = '\0';
    }
    local_80 = &PTR_FUN_14ba6d600;
    if (local_78 != 0) {
      if (local_70 != '\0') {
        cef_string_utf16_clear();
        thunk_FUN_1400020a8(local_78,0x18);
      }
      local_78 = 0;
      local_70 = '\0';
    }
    local_68 = &PTR_FUN_14ba6d600;
    if (local_60 != 0) {
      if (local_58 != '\0') {
        cef_string_utf16_clear();
        thunk_FUN_1400020a8(local_60,0x18);
      }
      local_60 = 0;
      local_58 = '\0';
    }
    if (local_50 != 0) {
      (**(code **)(*(longlong *)(local_50 + 8 + (longlong)*(int *)(*(longlong *)(local_50 + 8) + 4))
                  + 8))();
    }
    *param_8 = (uint)((char)local_res8[0] != '\0');
  }
  return uVar1;
}



// FUNCTION 1453eb070 FUN_1453eb070 body=339 status=ok
// SIG undefined FUN_1453eb070(void)

undefined1
FUN_1453eb070(longlong param_1,longlong param_2,longlong param_3,int param_4,longlong param_5)

{
  longlong *plVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_res8 [2];
  undefined1 local_58 [8];
  longlong local_50 [2];
  undefined4 *local_40;
  undefined **local_38;
  longlong local_30;
  char local_28;
  
  local_50[1] = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if (((param_1 == 0) || (param_2 == 0)) || (param_5 == 0)) {
    uVar2 = 0;
  }
  else {
    local_40 = local_res8;
    puVar3 = (undefined8 *)FUN_1453eaa90(local_50,param_1);
    plVar1 = (longlong *)*puVar3;
    uVar4 = FUN_1453ead70(local_res8,param_5);
    local_38 = &PTR_FUN_14ba6d600;
    local_30 = 0;
    if (param_3 != 0) {
      local_30 = param_3;
    }
    local_28 = '\0';
    uVar5 = FUN_144d7a4e0(local_58,param_2);
    uVar2 = (**(code **)(*plVar1 + 8))(plVar1,uVar5,&local_38,param_4 != 0,uVar4);
    local_38 = &PTR_FUN_14ba6d600;
    if (local_30 != 0) {
      if (local_28 != '\0') {
        cef_string_utf16_clear();
        thunk_FUN_1400020a8(local_30,0x18);
      }
      local_30 = 0;
      local_28 = '\0';
    }
    if (local_50[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_50[0] + 8 + (longlong)*(int *)(*(longlong *)(local_50[0] + 8) + 4)) + 8))
                ();
    }
  }
  return uVar2;
}



// FUNCTION 1453eb1d0 FUN_1453eb1d0 body=136 status=ok
// SIG undefined FUN_1453eb1d0(void)

void FUN_1453eb1d0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 local_res8 [2];
  longlong local_res18 [2];
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if ((param_1 != 0) && (param_2 != 0)) {
    puVar3 = (undefined8 *)FUN_1453eaa90(local_res18,param_1);
    plVar1 = (longlong *)*puVar3;
    uVar4 = FUN_144d7a4e0(local_res8,param_2);
    lVar2 = *plVar1;
    (**(code **)(lVar2 + 0x10))(plVar1,uVar4,lVar2,param_4,uVar5);
    if (local_res18[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_res18[0] + 8 + (longlong)*(int *)(*(longlong *)(local_res18[0] + 8) + 4))
                  + 8))();
    }
  }
  return;
}



// FUNCTION 1453eb260 FUN_1453eb260 body=136 status=ok
// SIG undefined FUN_1453eb260(void)

void FUN_1453eb260(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 local_res8 [2];
  longlong local_res18 [2];
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if ((param_1 != 0) && (param_2 != 0)) {
    puVar3 = (undefined8 *)FUN_1453eaa90(local_res18,param_1);
    plVar1 = (longlong *)*puVar3;
    uVar4 = FUN_144d7a4e0(local_res8,param_2);
    lVar2 = *plVar1;
    (**(code **)(lVar2 + 0x18))(plVar1,uVar4,lVar2,param_4,uVar5);
    if (local_res18[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_res18[0] + 8 + (longlong)*(int *)(*(longlong *)(local_res18[0] + 8) + 4))
                  + 8))();
    }
  }
  return;
}



// FUNCTION 1453eb2f0 FUN_1453eb2f0 body=58 status=ok
// SIG undefined FUN_1453eb2f0(void)

longlong * FUN_1453eb2f0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + -0x10);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)))();
  }
  return param_1;
}



// FUNCTION 1453eb330 FUN_1453eb330 body=49 status=ok
// SIG undefined FUN_1453eb330(void)

int FUN_1453eb330(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  (*(code *)**(undefined8 **)
              (*(longlong *)(param_1 + 0x10) + 8 +
              (longlong)*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 4)))();
  LOCK();
  piVar1 = (int *)(param_1 + 0x58);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 1453eb370 FUN_1453eb370 body=77 status=ok
// SIG undefined FUN_1453eb370(void)

undefined8 FUN_1453eb370(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  (**(code **)(*(longlong *)(param_1[2] + 8 + (longlong)*(int *)(*(longlong *)(param_1[2] + 8) + 4))
              + 8))();
  LOCK();
  plVar1 = param_1 + 0xb;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar2 == 1) {
    (**(code **)(*param_1 + 0x20))(param_1,1);
    return 1;
  }
  return 0;
}



// FUNCTION 1453eb420 FUN_1453eb420 body=42 status=ok
// SIG undefined FUN_1453eb420(void)

undefined1 FUN_1453eb420(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 8))();
  return uVar1;
}



// FUNCTION 1453eb450 FUN_1453eb450 body=42 status=ok
// SIG undefined FUN_1453eb450(void)

undefined1 FUN_1453eb450(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x10))();
  return uVar1;
}



// FUNCTION 1453eb480 FUN_1453eb480 body=42 status=ok
// SIG undefined FUN_1453eb480(void)

undefined1 FUN_1453eb480(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x18))();
  return uVar1;
}



// FUNCTION 1453eb4b0 FUN_1453eb4b0 body=43 status=ok
// SIG undefined FUN_1453eb4b0(void)

undefined8 * FUN_1453eb4b0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1453eb4e0 FUN_1453eb4e0 body=118 status=ok
// SIG undefined FUN_1453eb4e0(void)

undefined8 * FUN_1453eb4e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149d4d2c0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)(param_1 + 1) = DAT_14c7441b0;
  param_1[3] = param_1;
  param_1[5] = &LAB_1453eb400;
  param_1[6] = FUN_1453eb420;
  param_1[7] = FUN_1453eb450;
  param_1[8] = FUN_1453eb480;
  param_1[4] = 0x38;
  *param_1 = &PTR_FUN_149d4d2e8;
  param_1[9] = FUN_1453eb5c0;
  param_1[10] = FUN_1453eb710;
  return param_1;
}



// FUNCTION 1453eb560 FUN_1453eb560 body=84 status=ok
// SIG undefined FUN_1453eb560(void)

undefined8 *
FUN_1453eb560(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &PTR_FUN_149d4d2e8;
  FUN_14516fec0();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x60,param_3,param_4,uVar1);
  }
  return param_1;
}



// FUNCTION 1453eb5c0 FUN_1453eb5c0 body=300 status=ok
// SIG undefined FUN_1453eb5c0(void)

void FUN_1453eb5c0(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 param_4,
                  uint *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_c8 [32];
  char *local_a8;
  char local_98 [8];
  undefined4 local_90 [2];
  longlong local_88 [2];
  undefined **local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_88[1] = 0xfffffffffffffffe;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_90[0] = 0;
  FUN_14516fec0();
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != (undefined8 *)0x0)) &&
     (param_5 != (uint *)0x0)) {
    local_78 = &PTR_FUN_14ba6d888;
    local_50 = 0;
    local_70 = *param_3;
    local_68 = param_3[1];
    local_60 = param_3[2];
    local_58 = *(undefined4 *)(param_3 + 3);
    local_98[0] = *param_5 != 0;
    puVar1 = (undefined8 *)FUN_1453eb2f0(local_88,param_1);
    puVar1 = (undefined8 *)*puVar1;
    uVar2 = FUN_144d7a4e0(local_90,param_2);
    local_a8 = local_98;
    (**(code **)*puVar1)(puVar1,uVar2,&local_78,param_4);
    if (local_88[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_88[0] + 8 + (longlong)*(int *)(*(longlong *)(local_88[0] + 8) + 4)) + 8))
                ();
    }
    *param_5 = (uint)(local_98[0] != '\0');
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_c8);
}



// FUNCTION 1453eb700 FUN_1453eb700 body=11 status=ok
// SIG undefined FUN_1453eb700(void)

void FUN_1453eb700(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba6d888;
  return;
}



// FUNCTION 1453eb710 FUN_1453eb710 body=282 status=ok
// SIG undefined FUN_1453eb710(void)

void FUN_1453eb710(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [32];
  undefined4 local_68 [2];
  longlong local_60 [2];
  undefined **local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_60[1] = 0xfffffffffffffffe;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68[0] = 0;
  FUN_14516fec0();
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != (undefined8 *)0x0)) {
    local_50 = &PTR_FUN_14ba6d888;
    local_28 = 0;
    local_48 = *param_3;
    local_40 = param_3[1];
    local_38 = param_3[2];
    local_30 = *(undefined4 *)(param_3 + 3);
    puVar2 = (undefined8 *)FUN_1453eb2f0(local_60,param_1);
    plVar1 = (longlong *)*puVar2;
    uVar3 = FUN_144d7a4e0(local_68,param_2);
    (**(code **)(*plVar1 + 8))(plVar1,uVar3,&local_50,param_4);
    if (local_60[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_60[0] + 8 + (longlong)*(int *)(*(longlong *)(local_60[0] + 8) + 4)) + 8))
                ();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_88);
}



// FUNCTION 1453eb840 FUN_1453eb840 body=58 status=ok
// SIG undefined FUN_1453eb840(void)

longlong * FUN_1453eb840(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + -0x10);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)))();
  }
  return param_1;
}



// FUNCTION 1453eb880 FUN_1453eb880 body=49 status=ok
// SIG undefined FUN_1453eb880(void)

int FUN_1453eb880(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  (*(code *)**(undefined8 **)
              (*(longlong *)(param_1 + 0x10) + 8 +
              (longlong)*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 4)))();
  LOCK();
  piVar1 = (int *)(param_1 + 0x68);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 1453eb8c0 FUN_1453eb8c0 body=77 status=ok
// SIG undefined FUN_1453eb8c0(void)

undefined8 FUN_1453eb8c0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  (**(code **)(*(longlong *)(param_1[2] + 8 + (longlong)*(int *)(*(longlong *)(param_1[2] + 8) + 4))
              + 8))();
  LOCK();
  plVar1 = param_1 + 0xd;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar2 == 1) {
    (**(code **)(*param_1 + 0x20))(param_1,1);
    return 1;
  }
  return 0;
}



// FUNCTION 1453eb970 FUN_1453eb970 body=42 status=ok
// SIG undefined FUN_1453eb970(void)

undefined1 FUN_1453eb970(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 8))();
  return uVar1;
}



// FUNCTION 1453eb9a0 FUN_1453eb9a0 body=42 status=ok
// SIG undefined FUN_1453eb9a0(void)

undefined1 FUN_1453eb9a0(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x10))();
  return uVar1;
}



// FUNCTION 1453eb9d0 FUN_1453eb9d0 body=42 status=ok
// SIG undefined FUN_1453eb9d0(void)

undefined1 FUN_1453eb9d0(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x18))();
  return uVar1;
}



// FUNCTION 1453eba00 FUN_1453eba00 body=43 status=ok
// SIG undefined FUN_1453eba00(void)

undefined8 * FUN_1453eba00(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 1453eba30 FUN_1453eba30 body=140 status=ok
// SIG undefined FUN_1453eba30(void)

undefined8 * FUN_1453eba30(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149d4d388;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)(param_1 + 1) = DAT_14c7441b4;
  param_1[3] = param_1;
  param_1[5] = &LAB_1453eb950;
  param_1[6] = FUN_1453eb970;
  param_1[7] = FUN_1453eb9a0;
  param_1[8] = FUN_1453eb9d0;
  param_1[4] = 0x48;
  *param_1 = &PTR_FUN_149d4d3b0;
  param_1[9] = FUN_1453ebb20;
  param_1[10] = FUN_1453ec110;
  param_1[0xb] = FUN_1453ec1a0;
  param_1[0xc] = FUN_1453ec240;
  return param_1;
}



// FUNCTION 1453ebac0 FUN_1453ebac0 body=84 status=ok
// SIG undefined FUN_1453ebac0(void)

undefined8 *
FUN_1453ebac0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &PTR_FUN_149d4d3b0;
  FUN_14516fec0();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x70,param_3,param_4,uVar1);
  }
  return param_1;
}



// FUNCTION 1453ebb20 FUN_1453ebb20 body=1472 status=ok
// SIG undefined FUN_1453ebb20(void)

void FUN_1453ebb20(undefined8 *param_1,ulonglong param_2,longlong param_3,longlong param_4,
                  longlong param_5,undefined4 param_6,int param_7,undefined8 *param_8,
                  undefined8 *param_9,longlong *param_10,longlong param_11,longlong *param_12,
                  uint *param_13)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_358 [32];
  undefined ***local_338;
  undefined4 local_330;
  undefined1 local_328;
  undefined ***local_320;
  undefined ***local_318;
  ulonglong *local_310;
  undefined ***local_308;
  ulonglong *local_300;
  char *local_2f8;
  char local_2e8 [8];
  ulonglong local_2e0;
  ulonglong local_2d8;
  ulonglong local_2d0;
  longlong local_2c8;
  undefined8 *local_2c0;
  undefined **local_2b8;
  longlong local_2b0;
  char local_2a8;
  undefined **local_2a0;
  longlong local_298;
  char local_290;
  longlong local_288;
  longlong local_280;
  longlong *local_278;
  longlong local_270;
  undefined1 local_268 [8];
  ulonglong local_260;
  ulonglong local_258;
  undefined **local_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined8 *local_1e0;
  undefined8 local_1d8;
  undefined **local_1c8;
  undefined8 local_1c0 [37];
  longlong local_98;
  undefined **local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_1d8 = 0xfffffffffffffffe;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_358;
  local_2d8 = local_2d8 & 0xffffffff00000000;
  local_2e0 = param_2;
  local_2c0 = param_1;
  local_288 = param_3;
  local_270 = param_4;
  FUN_14516fec0();
  if ((((((param_1 != (undefined8 *)0x0) && (local_2e0 != 0)) && (local_288 != 0)) &&
       ((param_8 != (undefined8 *)0x0 && (param_9 != (undefined8 *)0x0)))) &&
      ((param_10 != (longlong *)0x0 && ((param_11 != 0 && (param_12 != (longlong *)0x0)))))) &&
     (param_13 != (uint *)0x0)) {
    local_88 = &PTR_FUN_14ba6d6f0;
    local_50 = 0;
    local_80 = *param_8;
    local_78 = param_8[1];
    local_70 = param_8[2];
    local_68 = param_8[3];
    local_60 = param_8[4];
    local_58 = param_8[5];
    memset(&local_240,0,0x60);
    local_1e0 = (undefined8 *)0x0;
    local_248 = &PTR_FUN_14ba6c748;
    cef_string_utf16_clear(&uStack_238);
    local_1e0 = param_9;
    local_240 = *param_9;
    uStack_238 = param_9[1];
    local_230 = param_9[2];
    uStack_228 = param_9[3];
    local_220 = param_9[4];
    uStack_218 = param_9[5];
    local_210 = param_9[6];
    uStack_208 = param_9[7];
    local_200 = *(undefined4 *)(param_9 + 8);
    uStack_1fc = *(undefined4 *)((longlong)param_9 + 0x44);
    uStack_1f8 = *(undefined4 *)(param_9 + 9);
    uStack_1f4 = *(undefined4 *)((longlong)param_9 + 0x4c);
    local_1f0 = *(undefined4 *)(param_9 + 10);
    uStack_1ec = *(undefined4 *)((longlong)param_9 + 0x54);
    uStack_1e8 = *(undefined4 *)(param_9 + 0xb);
    uStack_1e4 = *(undefined4 *)((longlong)param_9 + 0x5c);
    local_2d0 = 0;
    if (*param_10 != 0) {
      puVar3 = (ulonglong *)FUN_144d7a150(&local_2c8);
      uVar2 = *puVar3;
      if (uVar2 != 0) {
        (*(code *)**(undefined8 **)((longlong)*(int *)(*(longlong *)(uVar2 + 8) + 4) + 8 + uVar2))()
        ;
      }
      if (local_2d0 != 0) {
        plVar1 = (longlong *)(local_2d0 + 8);
        lVar6 = local_2d0 + 8;
        local_2d0 = uVar2;
        (**(code **)(*(longlong *)(*(int *)(*plVar1 + 4) + lVar6) + 8))();
        uVar2 = local_2d0;
      }
      local_2d0 = uVar2;
      if (local_2c8 != 0) {
        (**(code **)(*(longlong *)
                      (local_2c8 + 8 + (longlong)*(int *)(*(longlong *)(local_2c8 + 8) + 4)) + 8))()
        ;
      }
    }
    local_260 = local_2d0;
    local_1c8 = &PTR_FUN_14ba6d6f8;
    memset(local_1c0,0,0x128);
    local_98 = 0;
    local_1c0[0] = 0x128;
    FUN_145176ee0(&local_1c8,param_11);
    local_2d8 = 0;
    if (*param_12 != 0) {
      puVar3 = (ulonglong *)FUN_144d73c30(&local_2c8);
      uVar2 = *puVar3;
      if (uVar2 != 0) {
        (*(code *)**(undefined8 **)((longlong)*(int *)(*(longlong *)(uVar2 + 8) + 4) + 8 + uVar2))()
        ;
      }
      if (local_2d8 != 0) {
        plVar1 = (longlong *)(local_2d8 + 8);
        lVar6 = local_2d8 + 8;
        local_2d8 = uVar2;
        (**(code **)(*(longlong *)(*(int *)(*plVar1 + 4) + lVar6) + 8))();
        uVar2 = local_2d8;
      }
      local_2d8 = uVar2;
      if (local_2c8 != 0) {
        (**(code **)(*(longlong *)
                      (local_2c8 + 8 + (longlong)*(int *)(*(longlong *)(local_2c8 + 8) + 4)) + 8))()
        ;
      }
    }
    local_258 = local_2d8;
    local_2e8[0] = *param_13 != 0;
    local_278 = &local_2c8;
    local_2c0 = (undefined8 *)FUN_1453eb840(&local_280,local_2c0);
    local_2c0 = (undefined8 *)*local_2c0;
    local_2a0 = &PTR_FUN_14ba6d600;
    local_298 = 0;
    if (param_5 != 0) {
      local_298 = param_5;
    }
    local_290 = '\0';
    local_2b8 = &PTR_FUN_14ba6d600;
    local_2b0 = 0;
    if (local_270 != 0) {
      local_2b0 = local_270;
    }
    local_2a8 = '\0';
    uVar4 = FUN_14516a830(&local_2c8,local_288);
    uVar5 = FUN_144d7a4e0(local_268,local_2e0);
    local_328 = param_7 != 0;
    local_2f8 = local_2e8;
    local_300 = &local_2d8;
    local_308 = &local_1c8;
    local_310 = &local_2d0;
    local_318 = &local_248;
    local_320 = &local_88;
    local_330 = param_6;
    local_338 = &local_2a0;
    (**(code **)*local_2c0)(local_2c0,uVar5,uVar4,&local_2b8);
    local_2b8 = &PTR_FUN_14ba6d600;
    if (local_2b0 != 0) {
      if (local_2a8 != '\0') {
        cef_string_utf16_clear();
        thunk_FUN_1400020a8(local_2b0,0x18);
      }
      local_2b0 = 0;
      local_2a8 = '\0';
    }
    local_2a0 = &PTR_FUN_14ba6d600;
    if (local_298 != 0) {
      if (local_290 != '\0') {
        cef_string_utf16_clear();
        thunk_FUN_1400020a8(local_298,0x18);
      }
      local_298 = 0;
      local_290 = '\0';
    }
    if (local_280 != 0) {
      (**(code **)(*(longlong *)
                    (local_280 + 8 + (longlong)*(int *)(*(longlong *)(local_280 + 8) + 4)) + 8))();
    }
    FUN_1451765b0(&local_248,param_9);
    if (local_2d0 == 0) {
      *param_10 = 0;
    }
    else if (local_2d0 != local_260) {
      local_2e0 = local_2d0;
      (*(code *)**(undefined8 **)
                  (local_2d0 + 8 + (longlong)*(int *)(*(longlong *)(local_2d0 + 8) + 4)))();
      lVar6 = FUN_144d7a0c0(&local_2e0);
      *param_10 = lVar6;
    }
    FUN_145176f90(&local_1c8,param_11);
    if (local_2d8 == 0) {
      *param_12 = 0;
    }
    else if (local_2d8 != local_258) {
      local_2e0 = local_2d8;
      (*(code *)**(undefined8 **)
                  (local_2d8 + 8 + (longlong)*(int *)(*(longlong *)(local_2d8 + 8) + 4)))();
      lVar6 = FUN_144d73d20(&local_2e0);
      *param_12 = lVar6;
    }
    *param_13 = (uint)(local_2e8[0] != '\0');
    if (local_2d8 != 0) {
      (**(code **)(*(longlong *)
                    (local_2d8 + 8 + (longlong)*(int *)(*(longlong *)(local_2d8 + 8) + 4)) + 8))();
    }
    local_1c8 = &PTR_FUN_14ba6d6f8;
    if (local_98 == 0) {
      FUN_145177060(local_1c0);
    }
    if (local_2d0 != 0) {
      (**(code **)(*(longlong *)
                    (local_2d0 + 8 + (longlong)*(int *)(*(longlong *)(local_2d0 + 8) + 4)) + 8))();
    }
    local_248 = &PTR_FUN_14ba6c750;
    if (local_1e0 == (undefined8 *)0x0) {
      cef_string_utf16_clear(&uStack_238);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_358);
}



// FUNCTION 1453ec100 FUN_1453ec100 body=11 status=ok
// SIG undefined FUN_1453ec100(void)

void FUN_1453ec100(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba6d6f0;
  return;
}



// FUNCTION 1453ec110 FUN_1453ec110 body=136 status=ok
// SIG undefined FUN_1453ec110(void)

void FUN_1453ec110(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 local_res8 [2];
  longlong local_res18 [2];
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if ((param_1 != 0) && (param_2 != 0)) {
    puVar3 = (undefined8 *)FUN_1453eb840(local_res18,param_1);
    plVar1 = (longlong *)*puVar3;
    uVar4 = FUN_144d7a4e0(local_res8,param_2);
    lVar2 = *plVar1;
    (**(code **)(lVar2 + 8))(plVar1,uVar4,lVar2,param_4,uVar5);
    if (local_res18[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_res18[0] + 8 + (longlong)*(int *)(*(longlong *)(local_res18[0] + 8) + 4))
                  + 8))();
    }
  }
  return;
}



// FUNCTION 1453ec1a0 FUN_1453ec1a0 body=145 status=ok
// SIG undefined FUN_1453ec1a0(void)

undefined1 FUN_1453ec1a0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 local_res8 [2];
  longlong local_res18 [2];
  undefined8 uVar6;
  
  uVar6 = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if ((param_1 == 0) || (param_2 == 0)) {
    uVar3 = 0;
  }
  else {
    puVar4 = (undefined8 *)FUN_1453eb840(local_res18,param_1);
    plVar1 = (longlong *)*puVar4;
    uVar5 = FUN_144d7a4e0(local_res8,param_2);
    lVar2 = *plVar1;
    uVar3 = (**(code **)(lVar2 + 0x10))(plVar1,uVar5,lVar2,param_4,uVar6);
    if (local_res18[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_res18[0] + 8 + (longlong)*(int *)(*(longlong *)(local_res18[0] + 8) + 4))
                  + 8))();
    }
  }
  return uVar3;
}



// FUNCTION 1453ec240 FUN_1453ec240 body=136 status=ok
// SIG undefined FUN_1453ec240(void)

void FUN_1453ec240(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 local_res8 [2];
  longlong local_res18 [2];
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if ((param_1 != 0) && (param_2 != 0)) {
    puVar3 = (undefined8 *)FUN_1453eb840(local_res18,param_1);
    plVar1 = (longlong *)*puVar3;
    uVar4 = FUN_144d7a4e0(local_res8,param_2);
    lVar2 = *plVar1;
    (**(code **)(lVar2 + 0x18))(plVar1,uVar4,lVar2,param_4,uVar5);
    if (local_res18[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_res18[0] + 8 + (longlong)*(int *)(*(longlong *)(local_res18[0] + 8) + 4))
                  + 8))();
    }
  }
  return;
}



// FUNCTION 1453ec2d0 FUN_1453ec2d0 body=58 status=ok
// SIG undefined FUN_1453ec2d0(void)

longlong * FUN_1453ec2d0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + -0x10);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)))();
  }
  return param_1;
}



// FUNCTION 1453ec310 FUN_1453ec310 body=49 status=ok
// SIG undefined FUN_1453ec310(void)

int FUN_1453ec310(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  (*(code *)**(undefined8 **)
              (*(longlong *)(param_1 + 0x10) + 8 +
              (longlong)*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 4)))();
  LOCK();
  piVar1 = (int *)(param_1 + 0x68);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 1453ec350 FUN_1453ec350 body=77 status=ok
// SIG undefined FUN_1453ec350(void)

undefined8 FUN_1453ec350(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  (**(code **)(*(longlong *)(param_1[2] + 8 + (longlong)*(int *)(*(longlong *)(param_1[2] + 8) + 4))
              + 8))();
  LOCK();
  plVar1 = param_1 + 0xd;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar2 == 1) {
    (**(code **)(*param_1 + 0x20))(param_1,1);
    return 1;
  }
  return 0;
}



// FUNCTION 1453ec400 FUN_1453ec400 body=42 status=ok
// SIG undefined FUN_1453ec400(void)

undefined1 FUN_1453ec400(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 8))();
  return uVar1;
}



// FUNCTION 1453ec430 FUN_1453ec430 body=42 status=ok
// SIG undefined FUN_1453ec430(void)

undefined1 FUN_1453ec430(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x10))();
  return uVar1;
}



// FUNCTION 1453ec460 FUN_1453ec460 body=42 status=ok
// SIG undefined FUN_1453ec460(void)

undefined1 FUN_1453ec460(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x18))();
  return uVar1;
}



// FUNCTION 1453ec490 FUN_1453ec490 body=43 status=ok
// SIG undefined FUN_1453ec490(void)

undefined8 * FUN_1453ec490(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 1453ec4c0 FUN_1453ec4c0 body=140 status=ok
// SIG undefined FUN_1453ec4c0(void)

undefined8 * FUN_1453ec4c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149d4d4a0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)(param_1 + 1) = DAT_14c7441b8;
  param_1[3] = param_1;
  param_1[5] = &LAB_1453ec3e0;
  param_1[6] = FUN_1453ec400;
  param_1[7] = FUN_1453ec430;
  param_1[8] = FUN_1453ec460;
  param_1[4] = 0x48;
  *param_1 = &PTR_FUN_149d4d4c8;
  param_1[9] = FUN_1453ec5b0;
  param_1[10] = FUN_1453ec670;
  param_1[0xb] = FUN_1453ec740;
  param_1[0xc] = FUN_1453ec810;
  return param_1;
}



// FUNCTION 1453ec550 FUN_1453ec550 body=84 status=ok
// SIG undefined FUN_1453ec550(void)

undefined8 *
FUN_1453ec550(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &PTR_FUN_149d4d4c8;
  FUN_14516fec0();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x70,param_3,param_4,uVar1);
  }
  return param_1;
}



// FUNCTION 1453ec5b0 FUN_1453ec5b0 body=185 status=ok
// SIG undefined FUN_1453ec5b0(void)

void FUN_1453ec5b0(longlong param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 local_res8 [2];
  longlong local_18 [2];
  
  local_18[1] = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if ((param_1 != 0) && (param_2 != 0)) {
    puVar1 = (undefined8 *)FUN_1453ec2d0(local_18,param_1);
    puVar1 = (undefined8 *)*puVar1;
    uVar2 = FUN_144d7a4e0(local_res8,param_2);
    (**(code **)*puVar1)(puVar1,uVar2,param_3 != 0,param_4 != 0,param_5 != 0);
    if (local_18[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_18[0] + 8 + (longlong)*(int *)(*(longlong *)(local_18[0] + 8) + 4)) + 8))
                ();
    }
  }
  return;
}



// FUNCTION 1453ec670 FUN_1453ec670 body=199 status=ok
// SIG undefined FUN_1453ec670(void)

void FUN_1453ec670(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_res8 [2];
  undefined1 local_28 [8];
  longlong local_20 [2];
  undefined4 *local_10;
  
  local_20[1] = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    local_10 = local_res8;
    puVar2 = (undefined8 *)FUN_1453ec2d0(local_20,param_1);
    plVar1 = (longlong *)*puVar2;
    uVar3 = FUN_14516a830(local_res8,param_3);
    uVar4 = FUN_144d7a4e0(local_28,param_2);
    (**(code **)(*plVar1 + 8))(plVar1,uVar4,uVar3,param_4);
    if (local_20[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_20[0] + 8 + (longlong)*(int *)(*(longlong *)(local_20[0] + 8) + 4)) + 8))
                ();
    }
  }
  return;
}



// FUNCTION 1453ec740 FUN_1453ec740 body=199 status=ok
// SIG undefined FUN_1453ec740(void)

void FUN_1453ec740(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_res8 [2];
  undefined1 local_28 [8];
  longlong local_20 [2];
  undefined4 *local_10;
  
  local_20[1] = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    local_10 = local_res8;
    puVar2 = (undefined8 *)FUN_1453ec2d0(local_20,param_1);
    plVar1 = (longlong *)*puVar2;
    uVar3 = FUN_14516a830(local_res8,param_3);
    uVar4 = FUN_144d7a4e0(local_28,param_2);
    (**(code **)(*plVar1 + 0x10))(plVar1,uVar4,uVar3,param_4);
    if (local_20[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_20[0] + 8 + (longlong)*(int *)(*(longlong *)(local_20[0] + 8) + 4)) + 8))
                ();
    }
  }
  return;
}



// FUNCTION 1453ec810 FUN_1453ec810 body=399 status=ok
// SIG undefined FUN_1453ec810(void)

void FUN_1453ec810(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4,
                  longlong param_5,longlong param_6)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_res8 [2];
  undefined1 local_78 [8];
  longlong local_70 [2];
  undefined4 *local_60;
  undefined **local_58;
  longlong local_50;
  char local_48;
  undefined **local_40;
  longlong local_38;
  char local_30;
  
  local_70[1] = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) && (param_6 != 0)) {
    local_60 = local_res8;
    puVar2 = (undefined8 *)FUN_1453ec2d0(local_70,param_1);
    plVar1 = (longlong *)*puVar2;
    local_40 = &PTR_FUN_14ba6d600;
    local_38 = param_6;
    local_30 = '\0';
    local_58 = &PTR_FUN_14ba6d600;
    local_50 = 0;
    if (param_5 != 0) {
      local_50 = param_5;
    }
    local_48 = '\0';
    uVar3 = FUN_14516a830(local_res8,param_3);
    uVar4 = FUN_144d7a4e0(local_78,param_2);
    (**(code **)(*plVar1 + 0x18))(plVar1,uVar4,uVar3,param_4,&local_58,&local_40);
    local_58 = &PTR_FUN_14ba6d600;
    if (local_50 != 0) {
      if (local_48 != '\0') {
        cef_string_utf16_clear();
        thunk_FUN_1400020a8(local_50,0x18);
      }
      local_50 = 0;
      local_48 = '\0';
    }
    local_40 = &PTR_FUN_14ba6d600;
    if (local_38 != 0) {
      if (local_30 != '\0') {
        cef_string_utf16_clear();
        thunk_FUN_1400020a8(local_38,0x18);
      }
      local_38 = 0;
      local_30 = '\0';
    }
    if (local_70[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_70[0] + 8 + (longlong)*(int *)(*(longlong *)(local_70[0] + 8) + 4)) + 8))
                ();
    }
  }
  return;
}



// FUNCTION 1453ec9a0 FUN_1453ec9a0 body=58 status=ok
// SIG undefined FUN_1453ec9a0(void)

longlong * FUN_1453ec9a0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + -0x10);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)))();
  }
  return param_1;
}



// FUNCTION 1453ec9e0 FUN_1453ec9e0 body=49 status=ok
// SIG undefined FUN_1453ec9e0(void)

int FUN_1453ec9e0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  (*(code *)**(undefined8 **)
              (*(longlong *)(param_1 + 0x10) + 8 +
              (longlong)*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 4)))();
  LOCK();
  piVar1 = (int *)(param_1 + 0x78);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 1453eca20 FUN_1453eca20 body=77 status=ok
// SIG undefined FUN_1453eca20(void)

undefined8 FUN_1453eca20(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  (**(code **)(*(longlong *)(param_1[2] + 8 + (longlong)*(int *)(*(longlong *)(param_1[2] + 8) + 4))
              + 8))();
  LOCK();
  plVar1 = param_1 + 0xf;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar2 == 1) {
    (**(code **)(*param_1 + 0x20))(param_1,1);
    return 1;
  }
  return 0;
}



// FUNCTION 1453ecad0 FUN_1453ecad0 body=42 status=ok
// SIG undefined FUN_1453ecad0(void)

undefined1 FUN_1453ecad0(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 8))();
  return uVar1;
}



// FUNCTION 1453ecb00 FUN_1453ecb00 body=42 status=ok
// SIG undefined FUN_1453ecb00(void)

undefined1 FUN_1453ecb00(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x10))();
  return uVar1;
}



// FUNCTION 1453ecb30 FUN_1453ecb30 body=42 status=ok
// SIG undefined FUN_1453ecb30(void)

undefined1 FUN_1453ecb30(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x18))();
  return uVar1;
}



// FUNCTION 1453ecb60 FUN_1453ecb60 body=43 status=ok
// SIG undefined FUN_1453ecb60(void)

undefined8 * FUN_1453ecb60(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 1453ecb90 FUN_1453ecb90 body=200 status=ok
// SIG undefined FUN_1453ecb90(void)

undefined8 * FUN_1453ecb90(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149d4d5b8;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)(param_1 + 1) = DAT_14c7441bc;
  param_1[3] = param_1;
  memset(param_1 + 4,0,0x58);
  param_1[5] = &LAB_1453ecab0;
  param_1[6] = FUN_1453ecad0;
  param_1[7] = FUN_1453ecb00;
  param_1[8] = FUN_1453ecb30;
  param_1[4] = 0x58;
  *param_1 = &PTR_FUN_149d4d5e0;
  param_1[9] = FUN_1453ecf90;
  param_1[10] = FUN_1453ed020;
  param_1[0xb] = FUN_1453ed120;
  param_1[0xc] = FUN_1453ed230;
  param_1[0xd] = FUN_1453ed3e0;
  param_1[0xe] = FUN_1453ed470;
  return param_1;
}



// FUNCTION 1453ecc60 FUN_1453ecc60 body=84 status=ok
// SIG undefined FUN_1453ecc60(void)

undefined8 *
FUN_1453ecc60(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &PTR_FUN_149d4d5e0;
  FUN_14516fec0();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x80,param_3,param_4,uVar1);
  }
  return param_1;
}



// FUNCTION 1453eccc0 FUN_1453eccc0 body=230 status=ok
// SIG undefined FUN_1453eccc0(void)

longlong * FUN_1453eccc0(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

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
      FUN_1455837b0(puVar2 + 4,1,param_3,param_4,uVar3,uVar4);
    }
    *puVar2 = DAT_14c746800;
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



// FUNCTION 1453ecdb0 FUN_1453ecdb0 body=230 status=ok
// SIG undefined FUN_1453ecdb0(void)

longlong * FUN_1453ecdb0(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

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
      FUN_145583ca0(puVar2 + 4,1,param_3,param_4,uVar3,uVar4);
    }
    *puVar2 = DAT_14c746804;
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



// FUNCTION 1453ecea0 FUN_1453ecea0 body=230 status=ok
// SIG undefined FUN_1453ecea0(void)

longlong * FUN_1453ecea0(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

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
      FUN_145584030(puVar2 + 4,1,param_3,param_4,uVar3,uVar4);
    }
    *puVar2 = DAT_14c746808;
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



// FUNCTION 1453ecf90 FUN_1453ecf90 body=135 status=ok
// SIG undefined FUN_1453ecf90(void)

void FUN_1453ecf90(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

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
    puVar2 = (undefined8 *)FUN_1453ec9a0(local_res18,param_1);
    puVar2 = (undefined8 *)*puVar2;
    uVar3 = FUN_144d7a4e0(local_res8,param_2);
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



// FUNCTION 1453ed020 FUN_1453ed020 body=202 status=ok
// SIG undefined FUN_1453ed020(void)

void FUN_1453ed020(longlong param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_res8 [2];
  undefined1 local_28 [8];
  longlong local_20 [2];
  undefined4 *local_10;
  
  local_20[1] = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    local_10 = local_res8;
    puVar2 = (undefined8 *)FUN_1453ec9a0(local_20,param_1);
    plVar1 = (longlong *)*puVar2;
    uVar3 = FUN_1453ecea0(local_res8,param_3);
    uVar4 = FUN_144d7a4e0(local_28,param_2);
    (**(code **)(*plVar1 + 8))(plVar1,uVar4,uVar3,param_4 != 0);
    if (local_20[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_20[0] + 8 + (longlong)*(int *)(*(longlong *)(local_20[0] + 8) + 4)) + 8))
                ();
    }
  }
  return;
}



// FUNCTION 1453ed0f0 FUN_1453ed0f0 body=48 status=ok
// SIG undefined FUN_1453ed0f0(void)

void FUN_1453ed0f0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 1453ed120 FUN_1453ed120 body=211 status=ok
// SIG undefined FUN_1453ed120(void)

undefined1 FUN_1453ed120(longlong param_1,longlong param_2,int param_3,longlong param_4)

{
  longlong *plVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_res8 [2];
  undefined1 local_28 [8];
  longlong local_20 [2];
  undefined4 *local_10;
  
  local_20[1] = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if (((param_1 == 0) || (param_2 == 0)) || (param_4 == 0)) {
    uVar2 = 0;
  }
  else {
    local_10 = local_res8;
    puVar3 = (undefined8 *)FUN_1453ec9a0(local_20,param_1);
    plVar1 = (longlong *)*puVar3;
    uVar4 = FUN_1453eccc0(local_res8,param_4);
    uVar5 = FUN_144d7a4e0(local_28,param_2);
    uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,uVar5,param_3 != 0,uVar4);
    if (local_20[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_20[0] + 8 + (longlong)*(int *)(*(longlong *)(local_20[0] + 8) + 4)) + 8))
                ();
    }
  }
  return uVar2;
}



// FUNCTION 1453ed200 FUN_1453ed200 body=48 status=ok
// SIG undefined FUN_1453ed200(void)

void FUN_1453ed200(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 1453ed230 FUN_1453ed230 body=370 status=ok
// SIG undefined FUN_1453ed230(void)

undefined1
FUN_1453ed230(longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5)

{
  longlong *plVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_res8 [2];
  undefined1 local_78 [8];
  longlong local_70 [2];
  undefined4 *local_60;
  undefined **local_58;
  longlong local_50;
  char local_48;
  undefined **local_40;
  longlong local_38;
  char local_30;
  
  local_70[1] = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if ((((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) || ((param_4 == 0 || (param_5 == 0))))
  {
    uVar2 = 0;
  }
  else {
    local_60 = local_res8;
    puVar3 = (undefined8 *)FUN_1453ec9a0(local_70,param_1);
    plVar1 = (longlong *)*puVar3;
    uVar4 = FUN_1453ecdb0(local_res8,param_5);
    local_40 = &PTR_FUN_14ba6d600;
    local_30 = '\0';
    local_58 = &PTR_FUN_14ba6d600;
    local_48 = '\0';
    local_50 = param_3;
    local_38 = param_4;
    uVar5 = FUN_144d7a4e0(local_78,param_2);
    uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,uVar5,&local_58,&local_40,uVar4);
    local_58 = &PTR_FUN_14ba6d600;
    if (local_50 != 0) {
      if (local_48 != '\0') {
        cef_string_utf16_clear();
        thunk_FUN_1400020a8(local_50,0x18);
      }
      local_50 = 0;
      local_48 = '\0';
    }
    local_40 = &PTR_FUN_14ba6d600;
    if (local_38 != 0) {
      if (local_30 != '\0') {
        cef_string_utf16_clear();
        thunk_FUN_1400020a8(local_38,0x18);
      }
      local_38 = 0;
      local_30 = '\0';
    }
    if (local_70[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_70[0] + 8 + (longlong)*(int *)(*(longlong *)(local_70[0] + 8) + 4)) + 8))
                ();
    }
  }
  return uVar2;
}



// FUNCTION 1453ed3b0 FUN_1453ed3b0 body=48 status=ok
// SIG undefined FUN_1453ed3b0(void)

void FUN_1453ed3b0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 1453ed3e0 FUN_1453ed3e0 body=136 status=ok
// SIG undefined FUN_1453ed3e0(void)

void FUN_1453ed3e0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 local_res8 [2];
  longlong local_res18 [2];
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if ((param_1 != 0) && (param_2 != 0)) {
    puVar3 = (undefined8 *)FUN_1453ec9a0(local_res18,param_1);
    plVar1 = (longlong *)*puVar3;
    uVar4 = FUN_144d7a4e0(local_res8,param_2);
    lVar2 = *plVar1;
    (**(code **)(lVar2 + 0x20))(plVar1,uVar4,lVar2,param_4,uVar5);
    if (local_res18[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_res18[0] + 8 + (longlong)*(int *)(*(longlong *)(local_res18[0] + 8) + 4))
                  + 8))();
    }
  }
  return;
}



// FUNCTION 1453ed470 FUN_1453ed470 body=179 status=ok
// SIG undefined FUN_1453ed470(void)

undefined8 FUN_1453ed470(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 local_res8 [2];
  longlong local_res20;
  undefined8 uVar6;
  undefined **local_30 [3];
  
  uVar6 = 0xfffffffffffffffe;
  puVar5 = (undefined8 *)0x0;
  local_res8[0] = 0;
  FUN_14516fec0();
  if ((param_1 == 0) || (param_2 == 0)) {
    uVar6 = 0;
  }
  else {
    puVar2 = (undefined8 *)FUN_1453ec9a0(&local_res20,param_1);
    plVar1 = (longlong *)*puVar2;
    uVar3 = FUN_144d7a4e0(local_res8,param_2);
    lVar4 = (**(code **)(*plVar1 + 0x28))(plVar1,local_30,uVar3,param_3,uVar6);
    if (lVar4 != 0) {
      puVar5 = (undefined8 *)(lVar4 + 8);
    }
    uVar6 = *puVar5;
    local_30[0] = &PTR_FUN_149d4cb18;
    if (local_res20 != 0) {
      (**(code **)(*(longlong *)
                    (local_res20 + 8 + (longlong)*(int *)(*(longlong *)(local_res20 + 8) + 4)) + 8))
                ();
    }
  }
  return uVar6;
}



// FUNCTION 1453ed530 FUN_1453ed530 body=11 status=ok
// SIG undefined FUN_1453ed530(void)

void FUN_1453ed530(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba6caf0;
  return;
}



// FUNCTION 1453ed540 FUN_1453ed540 body=43 status=ok
// SIG undefined FUN_1453ed540(void)

undefined8 * FUN_1453ed540(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149d4d810;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1453ed570 FUN_1453ed570 body=11 status=ok
// SIG undefined FUN_1453ed570(void)

void FUN_1453ed570(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149d4d810;
  return;
}



// FUNCTION 1453ed580 FUN_1453ed580 body=43 status=ok
// SIG undefined FUN_1453ed580(void)

undefined8 * FUN_1453ed580(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149d4d810;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1453ed5b0 FUN_1453ed5b0 body=48 status=ok
// SIG undefined FUN_1453ed5b0(void)

void FUN_1453ed5b0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 1453ed5e0 FUN_1453ed5e0 body=58 status=ok
// SIG undefined FUN_1453ed5e0(void)

longlong * FUN_1453ed5e0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + -0x10);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)))();
  }
  return param_1;
}



// FUNCTION 1453ed620 FUN_1453ed620 body=52 status=ok
// SIG undefined FUN_1453ed620(void)

int FUN_1453ed620(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  (*(code *)**(undefined8 **)
              (*(longlong *)(param_1 + 0x10) + 8 +
              (longlong)*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 4)))();
  LOCK();
  piVar1 = (int *)(param_1 + 0xc0);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 1453ed660 FUN_1453ed660 body=80 status=ok
// SIG undefined FUN_1453ed660(void)

undefined8 FUN_1453ed660(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  (**(code **)(*(longlong *)(param_1[2] + 8 + (longlong)*(int *)(*(longlong *)(param_1[2] + 8) + 4))
              + 8))();
  LOCK();
  plVar1 = param_1 + 0x18;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar2 == 1) {
    (**(code **)(*param_1 + 0x20))(param_1,1);
    return 1;
  }
  return 0;
}



// FUNCTION 1453ed710 FUN_1453ed710 body=42 status=ok
// SIG undefined FUN_1453ed710(void)

undefined1 FUN_1453ed710(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 8))();
  return uVar1;
}



// FUNCTION 1453ed740 FUN_1453ed740 body=42 status=ok
// SIG undefined FUN_1453ed740(void)

undefined1 FUN_1453ed740(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x10))();
  return uVar1;
}



// FUNCTION 1453ed770 FUN_1453ed770 body=42 status=ok
// SIG undefined FUN_1453ed770(void)

undefined1 FUN_1453ed770(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x18))();
  return uVar1;
}



// FUNCTION 1453ed7a0 FUN_1453ed7a0 body=43 status=ok
// SIG undefined FUN_1453ed7a0(void)

undefined8 * FUN_1453ed7a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,200);
  }
  return param_1;
}



// FUNCTION 1453ed7d0 FUN_1453ed7d0 body=328 status=ok
// SIG undefined FUN_1453ed7d0(void)

undefined8 * FUN_1453ed7d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149d4d820;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 1) = DAT_14c7441c0;
  param_1[3] = param_1;
  memset(param_1 + 4,0,0xa0);
  param_1[5] = &LAB_1453ed6f0;
  param_1[6] = FUN_1453ed710;
  param_1[7] = FUN_1453ed740;
  param_1[8] = FUN_1453ed770;
  param_1[4] = 0xa0;
  *param_1 = &PTR_FUN_149d4d848;
  param_1[9] = FUN_1453eda10;
  param_1[10] = FUN_1453edad0;
  param_1[0xb] = FUN_1453edbb0;
  param_1[0xc] = FUN_1453edc80;
  param_1[0xd] = FUN_1453edd80;
  param_1[0xe] = FUN_1453ede90;
  param_1[0xf] = FUN_1453edf30;
  param_1[0x10] = FUN_1453ee010;
  param_1[0x11] = FUN_1453ee520;
  param_1[0x12] = FUN_1453ee880;
  param_1[0x13] = FUN_1453ee970;
  param_1[0x14] = FUN_1453eea10;
  param_1[0x15] = FUN_1453eeac0;
  param_1[0x16] = FUN_1453eee20;
  param_1[0x17] = FUN_1453eefa0;
  return param_1;
}



// FUNCTION 1453ed920 FUN_1453ed920 body=84 status=ok
// SIG undefined FUN_1453ed920(void)

undefined8 *
FUN_1453ed920(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &PTR_FUN_149d4d848;
  FUN_14516fec0();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,200,param_3,param_4,uVar1);
  }
  return param_1;
}



// FUNCTION 1453ed980 FUN_1453ed980 body=135 status=ok
// SIG undefined FUN_1453ed980(void)

undefined8 * FUN_1453ed980(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (*param_1 == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    lVar1 = FUN_14494321d(0x60);
    if (lVar1 == 0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      puVar2 = (undefined8 *)FUN_1455851b0(lVar1);
    }
    puVar2[2] = *param_1;
    (**(code **)*puVar2)(puVar2);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
    puVar2 = puVar2 + 4;
  }
  return puVar2;
}



// FUNCTION 1453eda10 FUN_1453eda10 body=192 status=ok
// SIG undefined FUN_1453eda10(void)

undefined8 FUN_1453eda10(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong local_res8;
  ulonglong local_res10;
  longlong local_res18 [2];
  
  local_res8 = local_res8 & 0xffffffff00000000;
  FUN_14516fec0();
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    puVar1 = (undefined8 *)FUN_1453ed5e0(local_res18,param_1);
    (*(code *)**(undefined8 **)*puVar1)((undefined8 *)*puVar1,&local_res10);
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
    uVar2 = FUN_1453ed980(&local_res8);
    if (local_res10 != 0) {
      (**(code **)(*(longlong *)
                    (local_res10 + 8 + (longlong)*(int *)(*(longlong *)(local_res10 + 8) + 4)) + 8))
                ();
    }
  }
  return uVar2;
}



// FUNCTION 1453edad0 FUN_1453edad0 body=210 status=ok
// SIG undefined FUN_1453edad0(void)

void FUN_1453edad0(longlong param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined4 local_58 [2];
  longlong local_50 [2];
  undefined **local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_50[1] = 0xfffffffffffffffe;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[0] = 0;
  FUN_14516fec0();
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != (undefined4 *)0x0)) {
    local_28 = 0;
    local_38 = *param_3;
    uStack_34 = param_3[1];
    uStack_30 = param_3[2];
    uStack_2c = param_3[3];
    local_40 = &PTR_FUN_14ba6c6e8;
    puVar2 = (undefined8 *)FUN_1453ed5e0(local_50,param_1);
    plVar1 = (longlong *)*puVar2;
    uVar3 = FUN_144d7a4e0(local_58,param_2);
    (**(code **)(*plVar1 + 8))(plVar1,uVar3,&local_40);
    if (local_50[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_50[0] + 8 + (longlong)*(int *)(*(longlong *)(local_50[0] + 8) + 4)) + 8))
                ();
    }
    *param_3 = local_38;
    param_3[1] = uStack_34;
    param_3[2] = uStack_30;
    param_3[3] = uStack_2c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_78);
}



// FUNCTION 1453edbb0 FUN_1453edbb0 body=198 status=ok
// SIG undefined FUN_1453edbb0(void)

void FUN_1453edbb0(longlong param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined4 local_58 [2];
  longlong local_50 [2];
  undefined **local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_50[1] = 0xfffffffffffffffe;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[0] = 0;
  FUN_14516fec0();
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != (undefined4 *)0x0)) {
    local_28 = 0;
    local_38 = *param_3;
    uStack_34 = param_3[1];
    uStack_30 = param_3[2];
    uStack_2c = param_3[3];
    local_40 = &PTR_FUN_14ba6c6e8;
    puVar2 = (undefined8 *)FUN_1453ed5e0(local_50,param_1);
    plVar1 = (longlong *)*puVar2;
    uVar3 = FUN_144d7a4e0(local_58,param_2);
    (**(code **)(*plVar1 + 0x10))(plVar1,uVar3,&local_40);
    if (local_50[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_50[0] + 8 + (longlong)*(int *)(*(longlong *)(local_50[0] + 8) + 4)) + 8))
                ();
    }
    *param_3 = local_38;
    param_3[1] = uStack_34;
    param_3[2] = uStack_30;
    param_3[3] = uStack_2c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_78);
}



// FUNCTION 1453edc80 FUN_1453edc80 body=256 status=ok
// SIG undefined FUN_1453edc80(void)

undefined1
FUN_1453edc80(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
             undefined4 *param_5,undefined4 *param_6)

{
  longlong *plVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 local_res8 [2];
  undefined4 local_38 [2];
  undefined1 local_30 [8];
  longlong local_28 [2];
  
  local_28[1] = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if ((((param_1 == 0) || (param_2 == 0)) || (param_5 == (undefined4 *)0x0)) ||
     (param_6 == (undefined4 *)0x0)) {
    uVar2 = 0;
  }
  else {
    local_res8[0] = *param_5;
    local_38[0] = *param_6;
    puVar3 = (undefined8 *)FUN_1453ed5e0(local_28,param_1);
    plVar1 = (longlong *)*puVar3;
    uVar4 = FUN_144d7a4e0(local_30,param_2);
    uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,uVar4,param_3,param_4,local_res8,local_38);
    if (local_28[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_28[0] + 8 + (longlong)*(int *)(*(longlong *)(local_28[0] + 8) + 4)) + 8))
                ();
    }
    *param_5 = local_res8[0];
    *param_6 = local_38[0];
  }
  return uVar2;
}



// FUNCTION 1453edd80 FUN_1453edd80 body=253 status=ok
// SIG undefined FUN_1453edd80(void)

void FUN_1453edd80(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [32];
  undefined4 local_88 [2];
  longlong local_80 [3];
  undefined **local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_80[1] = 0xfffffffffffffffe;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88[0] = 0;
  FUN_14516fec0();
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != (undefined8 *)0x0)) {
    local_68 = &PTR_FUN_149d4d818;
    local_60 = *param_3;
    uStack_58 = param_3[1];
    local_50 = *(undefined4 *)(param_3 + 2);
    uStack_4c = *(undefined4 *)((longlong)param_3 + 0x14);
    uStack_48 = *(undefined4 *)(param_3 + 3);
    uStack_44 = *(undefined4 *)((longlong)param_3 + 0x1c);
    local_40 = *(undefined4 *)(param_3 + 4);
    uStack_3c = *(undefined4 *)((longlong)param_3 + 0x24);
    uStack_38 = *(undefined4 *)(param_3 + 5);
    uStack_34 = *(undefined4 *)((longlong)param_3 + 0x2c);
    local_30 = param_3;
    puVar2 = (undefined8 *)FUN_1453ed5e0(local_80,param_1);
    plVar1 = (longlong *)*puVar2;
    uVar3 = FUN_144d7a4e0(local_88,param_2);
    (**(code **)(*plVar1 + 0x20))(plVar1,uVar3,&local_68);
    if (local_80[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_80[0] + 8 + (longlong)*(int *)(*(longlong *)(local_80[0] + 8) + 4)) + 8))
                ();
    }
    *param_3 = local_60;
    param_3[1] = uStack_58;
    param_3[2] = CONCAT44(uStack_4c,local_50);
    param_3[3] = CONCAT44(uStack_44,uStack_48);
    *(undefined4 *)(param_3 + 4) = local_40;
    *(undefined4 *)((longlong)param_3 + 0x24) = uStack_3c;
    *(undefined4 *)(param_3 + 5) = uStack_38;
    *(undefined4 *)((longlong)param_3 + 0x2c) = uStack_34;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
}



// FUNCTION 1453ede90 FUN_1453ede90 body=155 status=ok
// SIG undefined FUN_1453ede90(void)

void FUN_1453ede90(longlong param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 local_res8 [2];
  longlong local_res20;
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if ((param_1 != 0) && (param_2 != 0)) {
    puVar3 = (undefined8 *)FUN_1453ed5e0(&local_res20,param_1);
    plVar1 = (longlong *)*puVar3;
    uVar4 = FUN_144d7a4e0(local_res8,param_2);
    lVar2 = *plVar1;
    (**(code **)(lVar2 + 0x28))(plVar1,uVar4,param_3 != 0,lVar2,uVar5);
    if (local_res20 != 0) {
      (**(code **)(*(longlong *)
                    (local_res20 + 8 + (longlong)*(int *)(*(longlong *)(local_res20 + 8) + 4)) + 8))
                ();
    }
  }
  return;
}



// FUNCTION 1453edf30 FUN_1453edf30 body=197 status=ok
// SIG undefined FUN_1453edf30(void)

void FUN_1453edf30(longlong param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40 [2];
  undefined **local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_40[1] = 0xfffffffffffffffe;
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[0] = 0;
  FUN_14516fec0();
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != (undefined4 *)0x0)) {
    local_18 = 0;
    local_28 = *param_3;
    uStack_24 = param_3[1];
    uStack_20 = param_3[2];
    uStack_1c = param_3[3];
    local_30 = &PTR_FUN_14ba6c6e8;
    puVar2 = (undefined8 *)FUN_1453ed5e0(local_40,param_1);
    plVar1 = (longlong *)*puVar2;
    uVar3 = FUN_144d7a4e0(local_48,param_2);
    (**(code **)(*plVar1 + 0x30))(plVar1,uVar3,&local_30);
    if (local_40[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_40[0] + 8 + (longlong)*(int *)(*(longlong *)(local_40[0] + 8) + 4)) + 8))
                ();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_68);
}



// FUNCTION 1453ee010 FUN_1453ee010 body=840 status=ok
// SIG undefined FUN_1453ee010(void)

void FUN_1453ee010(longlong param_1,longlong param_2,undefined4 param_3,undefined ***param_4,
                  undefined8 *param_5,longlong param_6,undefined4 param_7,undefined4 param_8)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  undefined ***pppuVar12;
  undefined ***pppuVar13;
  undefined ***pppuVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined ***pppuVar17;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined ***local_a8;
  undefined ***pppuStack_a0;
  undefined ***local_98;
  undefined4 local_90;
  undefined4 local_88 [2];
  longlong local_80;
  undefined8 local_78;
  undefined **local_70;
  undefined **local_68;
  undefined **ppuStack_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_78 = 0xfffffffffffffffe;
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_88[0] = 0;
  local_90 = param_3;
  FUN_14516fec0();
  if ((((param_1 != 0) && (param_2 != 0)) &&
      ((param_4 == (undefined ***)0x0 || (param_5 != (undefined8 *)0x0)))) && (param_6 != 0)) {
    local_a8 = (undefined ***)0x0;
    pppuStack_a0 = (undefined ***)0x0;
    pppuVar14 = (undefined ***)0x0;
    local_98 = (undefined ***)0x0;
    if (param_4 != (undefined ***)0x0) {
      pppuVar13 = (undefined ***)0x0;
      pppuVar17 = pppuVar14;
      do {
        local_58 = 0;
        ppuVar5 = (undefined **)*param_5;
        ppuVar6 = (undefined **)param_5[1];
        local_70 = &PTR_FUN_14ba6c6e8;
        local_68 = ppuVar5;
        ppuStack_60 = ppuVar6;
        if ((&local_70 < pppuStack_a0) && (pppuVar13 <= &local_70)) {
          pppuVar12 = pppuVar13;
          if ((pppuStack_a0 == pppuVar17) &&
             ((longlong)pppuVar17 - (longlong)pppuStack_a0 >> 5 == 0)) {
            lVar7 = (longlong)pppuStack_a0 - (longlong)pppuVar13 >> 5;
            if (lVar7 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
              std::_Xlength_error("vector<T> too long");
            }
            uVar15 = lVar7 + 1;
            uVar16 = (longlong)pppuVar17 - (longlong)pppuVar13 >> 5;
            uVar11 = 0;
            if (uVar16 <= 0x7ffffffffffffff - (uVar16 >> 1)) {
              uVar11 = (uVar16 >> 1) + uVar16;
            }
            if (uVar15 <= uVar11) {
              uVar15 = uVar11;
            }
            FUN_1453ee400(&local_a8,uVar15);
            pppuVar12 = local_a8;
            pppuVar17 = local_98;
          }
          lVar7 = ((longlong)&local_70 - (longlong)pppuVar13 & 0xffffffffffffffe0U) +
                  (longlong)pppuVar12;
          pppuVar13 = pppuVar12;
          if (pppuStack_a0 != (undefined ***)0x0) {
            *pppuStack_a0 = &PTR_FUN_14ba6c6f0;
            pppuStack_a0[1] = (undefined **)0x0;
            pppuStack_a0[2] = (undefined **)0x0;
            pppuStack_a0[3] = (undefined **)0x0;
            puVar10 = (undefined4 *)(lVar7 + 8);
            if (lVar7 == 0) {
              puVar10 = (undefined4 *)0x0;
            }
            uVar2 = puVar10[1];
            uVar3 = puVar10[2];
            uVar4 = puVar10[3];
            *(undefined4 *)(pppuStack_a0 + 1) = *puVar10;
            *(undefined4 *)((longlong)pppuStack_a0 + 0xc) = uVar2;
            *(undefined4 *)(pppuStack_a0 + 2) = uVar3;
            *(undefined4 *)((longlong)pppuStack_a0 + 0x14) = uVar4;
            *pppuStack_a0 = &PTR_FUN_14ba6c6e8;
            pppuVar13 = local_a8;
            pppuVar17 = local_98;
          }
        }
        else {
          if ((pppuStack_a0 == pppuVar17) &&
             ((longlong)pppuVar17 - (longlong)pppuStack_a0 >> 5 == 0)) {
            lVar7 = (longlong)pppuStack_a0 - (longlong)pppuVar13 >> 5;
            if (lVar7 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
              std::_Xlength_error("vector<T> too long");
            }
            uVar15 = lVar7 + 1;
            uVar16 = (longlong)pppuVar17 - (longlong)pppuVar13 >> 5;
            uVar11 = 0;
            if (uVar16 <= 0x7ffffffffffffff - (uVar16 >> 1)) {
              uVar11 = (uVar16 >> 1) + uVar16;
            }
            if (uVar15 <= uVar11) {
              uVar15 = uVar11;
            }
            FUN_1453ee400(&local_a8,uVar15);
            pppuVar13 = local_a8;
            pppuVar17 = local_98;
          }
          if (pppuStack_a0 != (undefined ***)0x0) {
            pppuStack_a0[3] = (undefined **)0x0;
            pppuStack_a0[1] = ppuVar5;
            pppuStack_a0[2] = ppuVar6;
            *pppuStack_a0 = &PTR_FUN_14ba6c6e8;
            pppuVar13 = local_a8;
            pppuVar17 = local_98;
          }
        }
        pppuStack_a0 = pppuStack_a0 + 4;
        pppuVar14 = (undefined ***)((longlong)pppuVar14 + 1);
        param_5 = param_5 + 2;
      } while (pppuVar14 < param_4);
    }
    puVar8 = (undefined8 *)FUN_1453ed5e0(&local_80,param_1);
    plVar1 = (longlong *)*puVar8;
    uVar9 = FUN_144d7a4e0(local_88,param_2);
    local_b8 = param_8;
    local_c0 = param_7;
    local_c8 = param_6;
    (**(code **)(*plVar1 + 0x38))(plVar1,uVar9,local_90,&local_a8);
    if (local_80 != 0) {
      (**(code **)(*(longlong *)(local_80 + 8 + (longlong)*(int *)(*(longlong *)(local_80 + 8) + 4))
                  + 8))();
    }
    pppuVar13 = pppuStack_a0;
    pppuVar14 = local_a8;
    if (local_a8 != (undefined ***)0x0) {
      for (; pppuVar14 != pppuVar13; pppuVar14 = pppuVar14 + 4) {
        (*(code *)**pppuVar14)(pppuVar14,0);
      }
      FUN_1453ee380(&local_a8,local_a8,(longlong)local_98 - (longlong)local_a8 >> 5);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_e8);
}



// FUNCTION 1453ee380 FUN_1453ee380 body=106 status=ok
// SIG undefined FUN_1453ee380(void)

void FUN_1453ee380(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  
  if (0x7ffffffffffffff < param_3) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  uVar1 = param_2;
  if (0xfff < param_3 << 5) {
    if ((param_2 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    uVar1 = *(ulonglong *)(param_2 - 8);
    if (param_2 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    if (param_2 - uVar1 < 8) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    if (0x27 < param_2 - uVar1) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1400020a8(uVar1);
  return;
}



// FUNCTION 1453ee3f0 thunk_FUN_1453ee4b0 body=5 status=ok
// SIG undefined thunk_FUN_1453ee4b0(void)

void thunk_FUN_1453ee4b0(void)

{
  FUN_1453ee4b0();
  return;
}



// FUNCTION 1453ee400 FUN_1453ee400 body=171 status=ok
// SIG undefined FUN_1453ee400(void)

void FUN_1453ee400(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  
  lVar2 = FUN_149044b6c();
  FUN_1453ef040(*param_1,param_1[1],lVar2,param_1);
  puVar3 = (undefined8 *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  uVar4 = (longlong)puVar1 - (longlong)puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    for (; puVar3 != puVar1; puVar3 = puVar3 + 4) {
      (**(code **)*puVar3)(puVar3,0);
    }
    FUN_1453ee380(param_1,*param_1,param_1[2] - *param_1 >> 5);
  }
  *param_1 = lVar2;
  param_1[2] = param_2 * 0x20 + lVar2;
  param_1[1] = (uVar4 & 0xffffffffffffffe0) + lVar2;
  return;
}



// FUNCTION 1453ee4b0 FUN_1453ee4b0 body=105 status=ok
// SIG undefined FUN_1453ee4b0(void)

void FUN_1453ee4b0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)param_1[1];
    for (; puVar2 != puVar1; puVar2 = puVar2 + 4) {
      (**(code **)*puVar2)(puVar2,0);
    }
    FUN_1453ee380(param_1,*param_1,param_1[2] - *param_1 >> 5);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 1453ee520 FUN_1453ee520 body=824 status=ok
// SIG undefined FUN_1453ee520(void)

void FUN_1453ee520(longlong param_1,longlong param_2,undefined4 param_3,undefined ***param_4,
                  undefined8 *param_5,longlong param_6)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  undefined ***pppuVar12;
  undefined ***pppuVar13;
  undefined ***pppuVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined ***pppuVar17;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined ***local_a8;
  undefined ***pppuStack_a0;
  undefined ***local_98;
  undefined4 local_90;
  undefined4 local_88 [2];
  longlong local_80;
  undefined8 local_78;
  undefined **local_70;
  undefined **local_68;
  undefined **ppuStack_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_78 = 0xfffffffffffffffe;
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_88[0] = 0;
  local_90 = param_3;
  FUN_14516fec0();
  if ((((param_1 != 0) && (param_2 != 0)) &&
      ((param_4 == (undefined ***)0x0 || (param_5 != (undefined8 *)0x0)))) && (param_6 != 0)) {
    local_a8 = (undefined ***)0x0;
    pppuStack_a0 = (undefined ***)0x0;
    pppuVar14 = (undefined ***)0x0;
    local_98 = (undefined ***)0x0;
    if (param_4 != (undefined ***)0x0) {
      pppuVar13 = (undefined ***)0x0;
      pppuVar17 = pppuVar14;
      do {
        local_58 = 0;
        ppuVar5 = (undefined **)*param_5;
        ppuVar6 = (undefined **)param_5[1];
        local_70 = &PTR_FUN_14ba6c6e8;
        local_68 = ppuVar5;
        ppuStack_60 = ppuVar6;
        if ((&local_70 < pppuStack_a0) && (pppuVar13 <= &local_70)) {
          pppuVar12 = pppuVar13;
          if ((pppuStack_a0 == pppuVar17) &&
             ((longlong)pppuVar17 - (longlong)pppuStack_a0 >> 5 == 0)) {
            lVar7 = (longlong)pppuStack_a0 - (longlong)pppuVar13 >> 5;
            if (lVar7 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
              std::_Xlength_error("vector<T> too long");
            }
            uVar15 = lVar7 + 1;
            uVar16 = (longlong)pppuVar17 - (longlong)pppuVar13 >> 5;
            uVar11 = 0;
            if (uVar16 <= 0x7ffffffffffffff - (uVar16 >> 1)) {
              uVar11 = (uVar16 >> 1) + uVar16;
            }
            if (uVar15 <= uVar11) {
              uVar15 = uVar11;
            }
            FUN_1453ee400(&local_a8,uVar15);
            pppuVar12 = local_a8;
            pppuVar17 = local_98;
          }
          lVar7 = ((longlong)&local_70 - (longlong)pppuVar13 & 0xffffffffffffffe0U) +
                  (longlong)pppuVar12;
          pppuVar13 = pppuVar12;
          if (pppuStack_a0 != (undefined ***)0x0) {
            *pppuStack_a0 = &PTR_FUN_14ba6c6f0;
            pppuStack_a0[1] = (undefined **)0x0;
            pppuStack_a0[2] = (undefined **)0x0;
            pppuStack_a0[3] = (undefined **)0x0;
            puVar10 = (undefined4 *)(lVar7 + 8);
            if (lVar7 == 0) {
              puVar10 = (undefined4 *)0x0;
            }
            uVar2 = puVar10[1];
            uVar3 = puVar10[2];
            uVar4 = puVar10[3];
            *(undefined4 *)(pppuStack_a0 + 1) = *puVar10;
            *(undefined4 *)((longlong)pppuStack_a0 + 0xc) = uVar2;
            *(undefined4 *)(pppuStack_a0 + 2) = uVar3;
            *(undefined4 *)((longlong)pppuStack_a0 + 0x14) = uVar4;
            *pppuStack_a0 = &PTR_FUN_14ba6c6e8;
            pppuVar13 = local_a8;
            pppuVar17 = local_98;
          }
        }
        else {
          if ((pppuStack_a0 == pppuVar17) &&
             ((longlong)pppuVar17 - (longlong)pppuStack_a0 >> 5 == 0)) {
            lVar7 = (longlong)pppuStack_a0 - (longlong)pppuVar13 >> 5;
            if (lVar7 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
              std::_Xlength_error("vector<T> too long");
            }
            uVar15 = lVar7 + 1;
            uVar16 = (longlong)pppuVar17 - (longlong)pppuVar13 >> 5;
            uVar11 = 0;
            if (uVar16 <= 0x7ffffffffffffff - (uVar16 >> 1)) {
              uVar11 = (uVar16 >> 1) + uVar16;
            }
            if (uVar15 <= uVar11) {
              uVar15 = uVar11;
            }
            FUN_1453ee400(&local_a8,uVar15);
            pppuVar13 = local_a8;
            pppuVar17 = local_98;
          }
          if (pppuStack_a0 != (undefined ***)0x0) {
            pppuStack_a0[3] = (undefined **)0x0;
            pppuStack_a0[1] = ppuVar5;
            pppuStack_a0[2] = ppuVar6;
            *pppuStack_a0 = &PTR_FUN_14ba6c6e8;
            pppuVar13 = local_a8;
            pppuVar17 = local_98;
          }
        }
        pppuStack_a0 = pppuStack_a0 + 4;
        pppuVar14 = (undefined ***)((longlong)pppuVar14 + 1);
        param_5 = param_5 + 2;
      } while (pppuVar14 < param_4);
    }
    puVar8 = (undefined8 *)FUN_1453ed5e0(&local_80,param_1);
    plVar1 = (longlong *)*puVar8;
    uVar9 = FUN_144d7a4e0(local_88,param_2);
    local_b8 = param_6;
    (**(code **)(*plVar1 + 0x40))(plVar1,uVar9,local_90,&local_a8);
    if (local_80 != 0) {
      (**(code **)(*(longlong *)(local_80 + 8 + (longlong)*(int *)(*(longlong *)(local_80 + 8) + 4))
                  + 8))();
    }
    pppuVar13 = pppuStack_a0;
    pppuVar14 = local_a8;
    if (local_a8 != (undefined ***)0x0) {
      for (; pppuVar14 != pppuVar13; pppuVar14 = pppuVar14 + 4) {
        (*(code *)**pppuVar14)(pppuVar14,0);
      }
      FUN_1453ee380(&local_a8,local_a8,(longlong)local_98 - (longlong)local_a8 >> 5);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_d8);
}



// FUNCTION 1453ee880 FUN_1453ee880 body=233 status=ok
// SIG undefined FUN_1453ee880(void)

undefined1
FUN_1453ee880(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6)

{
  longlong *plVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_res8 [2];
  undefined1 local_28 [8];
  longlong local_20 [2];
  undefined4 *local_10;
  
  local_20[1] = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
    uVar2 = 0;
  }
  else {
    local_10 = local_res8;
    puVar3 = (undefined8 *)FUN_1453ed5e0(local_20,param_1);
    plVar1 = (longlong *)*puVar3;
    uVar4 = FUN_145174020(local_res8,param_3);
    uVar5 = FUN_144d7a4e0(local_28,param_2);
    uVar2 = (**(code **)(*plVar1 + 0x48))(plVar1,uVar5,uVar4,param_4,param_5,param_6);
    if (local_20[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_20[0] + 8 + (longlong)*(int *)(*(longlong *)(local_20[0] + 8) + 4)) + 8))
                ();
    }
  }
  return uVar2;
}



// FUNCTION 1453ee970 FUN_1453ee970 body=152 status=ok
// SIG undefined FUN_1453ee970(void)

void FUN_1453ee970(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 local_res8 [2];
  longlong local_res20;
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if ((param_1 != 0) && (param_2 != 0)) {
    puVar3 = (undefined8 *)FUN_1453ed5e0(&local_res20,param_1);
    plVar1 = (longlong *)*puVar3;
    uVar4 = FUN_144d7a4e0(local_res8,param_2);
    lVar2 = *plVar1;
    (**(code **)(lVar2 + 0x50))(plVar1,uVar4,param_3,lVar2,uVar5);
    if (local_res20 != 0) {
      (**(code **)(*(longlong *)
                    (local_res20 + 8 + (longlong)*(int *)(*(longlong *)(local_res20 + 8) + 4)) + 8))
                ();
    }
  }
  return;
}



// FUNCTION 1453eea10 FUN_1453eea10 body=168 status=ok
// SIG undefined FUN_1453eea10(void)

void FUN_1453eea10(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 local_res8 [2];
  longlong local_38 [6];
  
  local_38[1] = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if ((param_1 != 0) && (param_2 != 0)) {
    puVar2 = (undefined8 *)FUN_1453ed5e0(local_38,param_1);
    plVar1 = (longlong *)*puVar2;
    uVar3 = FUN_144d7a4e0(local_res8,param_2);
    (**(code **)(*plVar1 + 0x58))(plVar1,uVar3,param_3,param_4);
    if (local_38[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_38[0] + 8 + (longlong)*(int *)(*(longlong *)(local_38[0] + 8) + 4)) + 8))
                ();
    }
  }
  return;
}



// FUNCTION 1453eeac0 FUN_1453eeac0 body=827 status=ok
// SIG undefined FUN_1453eeac0(void)

void FUN_1453eeac0(longlong param_1,longlong param_2,undefined8 *param_3,undefined ***param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined ***pppuVar10;
  undefined ***pppuVar11;
  undefined ***pppuVar12;
  undefined ***pppuVar13;
  ulonglong uVar14;
  undefined ***pppuVar15;
  undefined1 auStack_d8 [32];
  undefined ***local_b8;
  undefined ***pppuStack_b0;
  undefined ***local_a8;
  undefined4 local_a0 [2];
  longlong local_98;
  undefined **local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined **local_70;
  undefined **local_68;
  undefined **ppuStack_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_78 = 0xfffffffffffffffe;
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  pppuVar15 = (undefined ***)0x0;
  local_a0[0] = 0;
  FUN_14516fec0();
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != (undefined8 *)0x0)) &&
     ((param_4 == (undefined ***)0x0 || (param_5 != (undefined8 *)0x0)))) {
    local_88 = *param_3;
    local_80 = 0;
    local_90 = &PTR_FUN_14ba6cae8;
    local_b8 = (undefined ***)0x0;
    pppuStack_b0 = (undefined ***)0x0;
    local_a8 = (undefined ***)0x0;
    if (param_4 != (undefined ***)0x0) {
      pppuVar10 = (undefined ***)0x0;
      pppuVar13 = pppuVar15;
      pppuVar11 = pppuVar15;
      do {
        local_58 = 0;
        ppuVar5 = (undefined **)*param_5;
        ppuVar6 = (undefined **)param_5[1];
        local_70 = &PTR_FUN_14ba6c6e8;
        local_68 = ppuVar5;
        ppuStack_60 = ppuVar6;
        if ((&local_70 < pppuStack_b0) && (pppuVar10 <= &local_70)) {
          pppuVar12 = pppuVar10;
          if ((pppuStack_b0 == pppuVar11) &&
             ((longlong)pppuVar11 - (longlong)pppuStack_b0 >> 5 == 0)) {
            lVar7 = (longlong)pppuStack_b0 - (longlong)pppuVar10 >> 5;
            if (lVar7 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
              std::_Xlength_error("vector<T> too long");
            }
            pppuVar12 = (undefined ***)(lVar7 + 1);
            uVar14 = (longlong)pppuVar11 - (longlong)pppuVar10 >> 5;
            pppuVar11 = pppuVar15;
            if (uVar14 <= 0x7ffffffffffffff - (uVar14 >> 1)) {
              pppuVar11 = (undefined ***)((uVar14 >> 1) + uVar14);
            }
            if (pppuVar12 <= pppuVar11) {
              pppuVar12 = pppuVar11;
            }
            FUN_1453ee400(&local_b8,pppuVar12);
            pppuVar12 = local_b8;
            pppuVar11 = local_a8;
          }
          lVar7 = ((longlong)&local_70 - (longlong)pppuVar10 & 0xffffffffffffffe0U) +
                  (longlong)pppuVar12;
          pppuVar10 = pppuVar12;
          if (pppuStack_b0 != (undefined ***)0x0) {
            *pppuStack_b0 = &PTR_FUN_14ba6c6f0;
            pppuStack_b0[1] = (undefined **)0x0;
            pppuStack_b0[2] = (undefined **)0x0;
            pppuStack_b0[3] = (undefined **)0x0;
            pppuVar10 = (undefined ***)(lVar7 + 8);
            if (lVar7 == 0) {
              pppuVar10 = pppuVar15;
            }
            uVar2 = *(undefined4 *)((longlong)pppuVar10 + 4);
            uVar3 = *(undefined4 *)(pppuVar10 + 1);
            uVar4 = *(undefined4 *)((longlong)pppuVar10 + 0xc);
            *(undefined4 *)(pppuStack_b0 + 1) = *(undefined4 *)pppuVar10;
            *(undefined4 *)((longlong)pppuStack_b0 + 0xc) = uVar2;
            *(undefined4 *)(pppuStack_b0 + 2) = uVar3;
            *(undefined4 *)((longlong)pppuStack_b0 + 0x14) = uVar4;
LAB_1453eed1b:
            *pppuStack_b0 = &PTR_FUN_14ba6c6e8;
            pppuVar10 = local_b8;
            pppuVar11 = local_a8;
          }
        }
        else {
          if ((pppuStack_b0 == pppuVar11) &&
             ((longlong)pppuVar11 - (longlong)pppuStack_b0 >> 5 == 0)) {
            lVar7 = (longlong)pppuStack_b0 - (longlong)pppuVar10 >> 5;
            if (lVar7 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
              std::_Xlength_error("vector<T> too long");
            }
            pppuVar12 = (undefined ***)(lVar7 + 1);
            uVar14 = (longlong)pppuVar11 - (longlong)pppuVar10 >> 5;
            pppuVar10 = pppuVar15;
            if (uVar14 <= 0x7ffffffffffffff - (uVar14 >> 1)) {
              pppuVar10 = (undefined ***)((uVar14 >> 1) + uVar14);
            }
            if (pppuVar12 <= pppuVar10) {
              pppuVar12 = pppuVar10;
            }
            FUN_1453ee400(&local_b8,pppuVar12);
            pppuVar10 = local_b8;
            pppuVar11 = local_a8;
          }
          if (pppuStack_b0 != (undefined ***)0x0) {
            pppuStack_b0[3] = (undefined **)0x0;
            pppuStack_b0[1] = ppuVar5;
            pppuStack_b0[2] = ppuVar6;
            goto LAB_1453eed1b;
          }
        }
        pppuStack_b0 = pppuStack_b0 + 4;
        pppuVar13 = (undefined ***)((longlong)pppuVar13 + 1);
        param_5 = param_5 + 2;
      } while (pppuVar13 < param_4);
    }
    puVar8 = (undefined8 *)FUN_1453ed5e0(&local_98,param_1);
    plVar1 = (longlong *)*puVar8;
    uVar9 = FUN_144d7a4e0(local_a0,param_2);
    (**(code **)(*plVar1 + 0x60))(plVar1,uVar9,&local_90,&local_b8);
    if (local_98 != 0) {
      (**(code **)(*(longlong *)(local_98 + 8 + (longlong)*(int *)(*(longlong *)(local_98 + 8) + 4))
                  + 8))();
    }
    pppuVar10 = pppuStack_b0;
    pppuVar15 = local_b8;
    if (local_b8 != (undefined ***)0x0) {
      for (; pppuVar15 != pppuVar10; pppuVar15 = pppuVar15 + 4) {
        (*(code *)**pppuVar15)(pppuVar15,0);
      }
      FUN_1453ee380(&local_b8,local_b8,(longlong)local_a8 - (longlong)local_b8 >> 5);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_d8);
}



// FUNCTION 1453eee20 FUN_1453eee20 body=378 status=ok
// SIG undefined FUN_1453eee20(void)

/* WARNING: Removing unreachable block (ram,0x0001453eeec8) */

void FUN_1453eee20(longlong param_1,longlong param_2,longlong param_3,ulonglong *param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulonglong local_res8;
  undefined **local_158;
  longlong local_150;
  char local_148;
  longlong local_140;
  undefined **local_138;
  ulonglong local_130;
  undefined8 local_128;
  undefined8 local_120;
  
  local_120 = 0xfffffffffffffffe;
  local_res8 = local_res8 & 0xffffffff00000000;
  FUN_14516fec0();
  if ((param_1 != 0) && (param_2 != 0)) {
    if (param_4 == (ulonglong *)0x0) {
      local_res8 = 0;
    }
    else {
      local_res8 = *param_4;
    }
    local_128 = 0;
    local_138 = &PTR_FUN_14ba6cae8;
    local_130 = local_res8;
    puVar2 = (undefined8 *)FUN_1453ed5e0(&local_140,param_1);
    plVar1 = (longlong *)*puVar2;
    local_158 = &PTR_FUN_14ba6d600;
    local_150 = 0;
    if (param_3 != 0) {
      local_150 = param_3;
    }
    local_148 = '\0';
    uVar3 = FUN_144d7a4e0(&local_res8,param_2);
    (**(code **)(*plVar1 + 0x68))(plVar1,uVar3,&local_158,&local_138);
    local_158 = &PTR_FUN_14ba6d600;
    if (local_150 != 0) {
      if (local_148 != '\0') {
        cef_string_utf16_clear();
        thunk_FUN_1400020a8(local_150,0x18);
      }
      local_150 = 0;
      local_148 = '\0';
    }
    if (local_140 != 0) {
      (**(code **)(*(longlong *)
                    (local_140 + 8 + (longlong)*(int *)(*(longlong *)(local_140 + 8) + 4)) + 8))();
    }
  }
  return;
}



// FUNCTION 1453eefa0 FUN_1453eefa0 body=152 status=ok
// SIG undefined FUN_1453eefa0(void)

void FUN_1453eefa0(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 local_res8 [2];
  longlong local_res20;
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if ((param_1 != 0) && (param_2 != 0)) {
    puVar3 = (undefined8 *)FUN_1453ed5e0(&local_res20,param_1);
    plVar1 = (longlong *)*puVar3;
    uVar4 = FUN_144d7a4e0(local_res8,param_2);
    lVar2 = *plVar1;
    (**(code **)(lVar2 + 0x70))(plVar1,uVar4,param_3,lVar2,uVar5);
    if (local_res20 != 0) {
      (**(code **)(*(longlong *)
                    (local_res20 + 8 + (longlong)*(int *)(*(longlong *)(local_res20 + 8) + 4)) + 8))
                ();
    }
  }
  return;
}



// FUNCTION 1453ef040 FUN_1453ef040 body=131 status=ok
// SIG undefined FUN_1453ef040(void)

undefined8 * FUN_1453ef040(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_1 != param_2) {
    puVar3 = param_3 + 1;
    param_1 = param_1 - (longlong)param_3;
    do {
      if (param_3 != (undefined8 *)0x0) {
        *param_3 = &PTR_FUN_14ba6c6f0;
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar2 = (undefined8 *)((longlong)puVar3 + param_1);
        if (param_1 + -8 + (longlong)puVar3 == 0) {
          puVar2 = (undefined8 *)0x0;
        }
        uVar1 = puVar2[1];
        *puVar3 = *puVar2;
        puVar3[1] = uVar1;
        *param_3 = &PTR_FUN_14ba6c6e8;
      }
      puVar3 = puVar3 + 4;
      param_3 = param_3 + 4;
    } while (param_1 + -8 + (longlong)puVar3 != param_2);
  }
  return param_3;
}



// FUNCTION 1453ef0d0 FUN_1453ef0d0 body=48 status=ok
// SIG undefined FUN_1453ef0d0(void)

void FUN_1453ef0d0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 1453ef100 FUN_1453ef100 body=48 status=ok
// SIG undefined FUN_1453ef100(void)

void FUN_1453ef100(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 1453ef130 FUN_1453ef130 body=48 status=ok
// SIG undefined FUN_1453ef130(void)

void FUN_1453ef130(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 1453ef160 FUN_1453ef160 body=58 status=ok
// SIG undefined FUN_1453ef160(void)

longlong * FUN_1453ef160(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + -0x10);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)))();
  }
  return param_1;
}



// FUNCTION 1453ef1a0 FUN_1453ef1a0 body=52 status=ok
// SIG undefined FUN_1453ef1a0(void)

int FUN_1453ef1a0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  (*(code *)**(undefined8 **)
              (*(longlong *)(param_1 + 0x10) + 8 +
              (longlong)*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 4)))();
  LOCK();
  piVar1 = (int *)(param_1 + 0xa0);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 1453ef1e0 FUN_1453ef1e0 body=80 status=ok
// SIG undefined FUN_1453ef1e0(void)

undefined8 FUN_1453ef1e0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  (**(code **)(*(longlong *)(param_1[2] + 8 + (longlong)*(int *)(*(longlong *)(param_1[2] + 8) + 4))
              + 8))();
  LOCK();
  plVar1 = param_1 + 0x14;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar2 == 1) {
    (**(code **)(*param_1 + 0x20))(param_1,1);
    return 1;
  }
  return 0;
}



// FUNCTION 1453ef290 FUN_1453ef290 body=42 status=ok
// SIG undefined FUN_1453ef290(void)

undefined1 FUN_1453ef290(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 8))();
  return uVar1;
}



// FUNCTION 1453ef2c0 FUN_1453ef2c0 body=42 status=ok
// SIG undefined FUN_1453ef2c0(void)

undefined1 FUN_1453ef2c0(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x10))();
  return uVar1;
}



// FUNCTION 1453ef2f0 FUN_1453ef2f0 body=42 status=ok
// SIG undefined FUN_1453ef2f0(void)

undefined1 FUN_1453ef2f0(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x18))();
  return uVar1;
}



// FUNCTION 1453ef320 FUN_1453ef320 body=43 status=ok
// SIG undefined FUN_1453ef320(void)

undefined8 * FUN_1453ef320(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 1453ef350 FUN_1453ef350 body=272 status=ok
// SIG undefined FUN_1453ef350(void)

undefined8 * FUN_1453ef350(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149d4db40;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 1) = DAT_14c7441c4;
  param_1[3] = param_1;
  memset(param_1 + 4,0,0x80);
  param_1[5] = &LAB_1453ef270;
  param_1[6] = FUN_1453ef290;
  param_1[7] = FUN_1453ef2c0;
  param_1[8] = FUN_1453ef2f0;
  param_1[4] = 0x80;
  *param_1 = &PTR_FUN_149d4db68;
  param_1[9] = FUN_1453ef880;
  param_1[10] = FUN_1453ef9a0;
  param_1[0xb] = FUN_1453efaf0;
  param_1[0xc] = FUN_1453efce0;
  param_1[0xd] = FUN_1453eff20;
  param_1[0xe] = FUN_1453f0070;
  param_1[0xf] = FUN_1453f01f0;
  param_1[0x10] = FUN_1453f0820;
  param_1[0x11] = FUN_1453f0920;
  param_1[0x12] = FUN_1453f09b0;
  param_1[0x13] = FUN_1453f0a50;
  return param_1;
}



// FUNCTION 1453ef460 FUN_1453ef460 body=84 status=ok
// SIG undefined FUN_1453ef460(void)

undefined8 *
FUN_1453ef460(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &PTR_FUN_149d4db68;
  FUN_14516fec0();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0xa8,param_3,param_4,uVar1);
  }
  return param_1;
}



// FUNCTION 1453ef4c0 FUN_1453ef4c0 body=230 status=ok
// SIG undefined FUN_1453ef4c0(void)

longlong * FUN_1453ef4c0(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

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
      FUN_145585540(puVar2 + 4,1,param_3,param_4,uVar3,uVar4);
    }
    *puVar2 = DAT_14c746810;
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



// FUNCTION 1453ef5b0 FUN_1453ef5b0 body=230 status=ok
// SIG undefined FUN_1453ef5b0(void)

longlong * FUN_1453ef5b0(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

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
      FUN_145585900(puVar2 + 4,1,param_3,param_4,uVar3,uVar4);
    }
    *puVar2 = DAT_14c746814;
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



// FUNCTION 1453ef6a0 FUN_1453ef6a0 body=230 status=ok
// SIG undefined FUN_1453ef6a0(void)

longlong * FUN_1453ef6a0(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

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
      FUN_145585db0(puVar2 + 4,1,param_3,param_4,uVar3,uVar4);
    }
    *puVar2 = DAT_14c746818;
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



// FUNCTION 1453ef790 FUN_1453ef790 body=230 status=ok
// SIG undefined FUN_1453ef790(void)

longlong * FUN_1453ef790(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

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
      FUN_1455861b0(puVar2 + 4,1,param_3,param_4,uVar3,uVar4);
    }
    *puVar2 = DAT_14c74681c;
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



// FUNCTION 1453ef880 FUN_1453ef880 body=275 status=ok
// SIG undefined FUN_1453ef880(void)

undefined1
FUN_1453ef880(longlong param_1,longlong param_2,longlong param_3,longlong param_4,int param_5,
             int param_6)

{
  undefined1 uVar1;
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
  FUN_14516fec0();
  if ((((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) || (param_4 == 0)) {
    uVar1 = 0;
  }
  else {
    local_28 = local_res8;
    local_20 = local_48;
    puVar2 = (undefined8 *)FUN_1453ef160(local_38,param_1);
    puVar2 = (undefined8 *)*puVar2;
    uVar3 = FUN_14516a920(local_res8,param_4);
    uVar4 = FUN_14516a830(local_48,param_3);
    uVar5 = FUN_144d7a4e0(local_40,param_2);
    uVar1 = (**(code **)*puVar2)(puVar2,uVar5,uVar4,uVar3,param_5 != 0,param_6 != 0);
    if (local_38[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_38[0] + 8 + (longlong)*(int *)(*(longlong *)(local_38[0] + 8) + 4)) + 8))
                ();
    }
  }
  return uVar1;
}


