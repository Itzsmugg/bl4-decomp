// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147ff5afe FUN_147ff5afe body=102 status=ok
// SIG undefined FUN_147ff5afe(void)

void FUN_147ff5afe(longlong *param_1,longlong param_2)

{
  wchar_t *pwVar1;
  
  if (*param_1 == 0) {
    pwVar1 = L"No camera variable table has been set";
  }
  else {
    if (param_2 != 0) {
      FUN_147ff68c4(*param_1,param_2);
      if ((*(char *)(param_2 + 0x28) == '\x01') && (param_1[1] != 0)) {
        FUN_14802292c(param_1[1],param_2);
        return;
      }
      return;
    }
    pwVar1 = L"No camera variable asset was given";
  }
  FUN_1415b7ec4(pwVar1,2,0);
  return;
}



// FUNCTION 147ff5b64 FUN_147ff5b64 body=468 status=ok
// SIG undefined FUN_147ff5b64(void)

void FUN_147ff5b64(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = (longlong *)0x0;
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
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = 0x3ff00000;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_64 = 0x3ff00000;
  uStack_60 = 0;
  uStack_5c = 0x3ff00000;
  local_58 = 0x3ff0000000000000;
  uStack_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  puVar5 = &local_a8;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147ff5d3a(puVar4,local_40,puVar5);
  plVar3 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff5d3a FUN_147ff5d3a body=102 status=ok
// SIG undefined FUN_147ff5d3a(void)

void FUN_147ff5d3a(longlong *param_1,longlong param_2)

{
  wchar_t *pwVar1;
  
  if (*param_1 == 0) {
    pwVar1 = L"No camera variable table has been set";
  }
  else {
    if (param_2 != 0) {
      FUN_147ff6996(*param_1,param_2);
      if ((*(char *)(param_2 + 0x28) == '\x01') && (param_1[1] != 0)) {
        FUN_14802292c(param_1[1],param_2);
        return;
      }
      return;
    }
    pwVar1 = L"No camera variable asset was given";
  }
  FUN_1415b7ec4(pwVar1,2,0);
  return;
}



// FUNCTION 147ff5da0 FUN_147ff5da0 body=371 status=ok
// SIG undefined FUN_147ff5da0(void)

void FUN_147ff5da0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_78 [40];
  undefined1 local_50 [16];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = (longlong *)0x0;
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
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_50);
  }
  puVar5 = local_50;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147ff5f14(puVar4,local_40,puVar5);
  plVar3 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
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



// FUNCTION 147ff5f14 FUN_147ff5f14 body=102 status=ok
// SIG undefined FUN_147ff5f14(void)

void FUN_147ff5f14(longlong *param_1,longlong param_2)

{
  wchar_t *pwVar1;
  
  if (*param_1 == 0) {
    pwVar1 = L"No camera variable table has been set";
  }
  else {
    if (param_2 != 0) {
      FUN_147ff6658(*param_1,param_2);
      if ((*(char *)(param_2 + 0x28) == '\x01') && (param_1[1] != 0)) {
        FUN_14802292c(param_1[1],param_2);
        return;
      }
      return;
    }
    pwVar1 = L"No camera variable asset was given";
  }
  FUN_1415b7ec4(pwVar1,2,0);
  return;
}



// FUNCTION 147ff5f7a FUN_147ff5f7a body=371 status=ok
// SIG undefined FUN_147ff5f7a(void)

void FUN_147ff5f7a(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58 [24];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = (longlong *)0x0;
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
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  puVar5 = local_58;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147ff60ee(puVar4,local_40,puVar5);
  plVar3 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
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



// FUNCTION 147ff60ee FUN_147ff60ee body=102 status=ok
// SIG undefined FUN_147ff60ee(void)

void FUN_147ff60ee(longlong *param_1,longlong param_2)

{
  wchar_t *pwVar1;
  
  if (*param_1 == 0) {
    pwVar1 = L"No camera variable table has been set";
  }
  else {
    if (param_2 != 0) {
      FUN_147ff6720(*param_1,param_2);
      if ((*(char *)(param_2 + 0x28) == '\x01') && (param_1[1] != 0)) {
        FUN_14802292c(param_1[1],param_2);
        return;
      }
      return;
    }
    pwVar1 = L"No camera variable asset was given";
  }
  FUN_1415b7ec4(pwVar1,2,0);
  return;
}



// FUNCTION 147ff6154 FUN_147ff6154 body=400 status=ok
// SIG undefined FUN_147ff6154(void)

void FUN_147ff6154(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = (longlong *)0x0;
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
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 0x3ff0000000000000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  puVar5 = &local_68;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147ff62e6(puVar4,local_40,puVar5);
  plVar3 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff62e6 FUN_147ff62e6 body=102 status=ok
// SIG undefined FUN_147ff62e6(void)

void FUN_147ff62e6(longlong *param_1,longlong param_2)

{
  wchar_t *pwVar1;
  
  if (*param_1 == 0) {
    pwVar1 = L"No camera variable table has been set";
  }
  else {
    if (param_2 != 0) {
      FUN_147ff67f2(*param_1,param_2);
      if ((*(char *)(param_2 + 0x28) == '\x01') && (param_1[1] != 0)) {
        FUN_14802292c(param_1[1],param_2);
        return;
      }
      return;
    }
    pwVar1 = L"No camera variable asset was given";
  }
  FUN_1415b7ec4(pwVar1,2,0);
  return;
}



// FUNCTION 147ff6350 FUN_147ff6350 body=191 status=ok
// SIG undefined FUN_147ff6350(void)

void FUN_147ff6350(longlong param_1,longlong *param_2,undefined1 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_1447addd0((longlong)param_2 + 0x2c,0x10);
  lVar2 = FUN_147fe7bd6(param_1,uVar1);
  if (lVar2 == 0) {
    local_34 = FUN_1447addd0((longlong)param_2 + 0x2c,0x10);
    local_30 = (**(code **)(*param_2 + 0x2a0))(param_2);
    local_2c = *(undefined1 *)((longlong)param_2 + 0x29);
    local_2b = *(undefined1 *)((longlong)param_2 + 0x2a);
    FUN_147fe7a26(param_1,&local_34);
    lVar2 = FUN_147fe7bd6(param_1,local_34);
    if (lVar2 == 0) goto LAB_147ff639f;
  }
  *(undefined1 *)(*(longlong *)(param_1 + 0x60) + (ulonglong)*(uint *)(lVar2 + 8)) = param_3;
  *(byte *)(lVar2 + 0xc) = *(byte *)(lVar2 + 0xc) | 0xc;
LAB_147ff639f:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ff6410 FUN_147ff6410 body=191 status=ok
// SIG undefined FUN_147ff6410(void)

void FUN_147ff6410(longlong param_1,longlong *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_1447addd0((longlong)param_2 + 0x2c,0x10);
  lVar2 = FUN_147fe7bd6(param_1,uVar1);
  if (lVar2 == 0) {
    local_34 = FUN_1447addd0((longlong)param_2 + 0x2c,0x10);
    local_30 = (**(code **)(*param_2 + 0x2a0))(param_2);
    local_2c = *(undefined1 *)((longlong)param_2 + 0x29);
    local_2b = *(undefined1 *)((longlong)param_2 + 0x2a);
    FUN_147fe7a26(param_1,&local_34);
    lVar2 = FUN_147fe7bd6(param_1,local_34);
    if (lVar2 == 0) goto LAB_147ff645f;
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x60) + (ulonglong)*(uint *)(lVar2 + 8)) = param_3;
  *(byte *)(lVar2 + 0xc) = *(byte *)(lVar2 + 0xc) | 0xc;
LAB_147ff645f:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ff64d0 FUN_147ff64d0 body=194 status=ok
// SIG undefined FUN_147ff64d0(void)

void FUN_147ff64d0(longlong param_1,longlong *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined1 local_33;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_1447addd0((longlong)param_2 + 0x2c,0x10);
  lVar2 = FUN_147fe7bd6(param_1,uVar1);
  if (lVar2 == 0) {
    local_3c = FUN_1447addd0((longlong)param_2 + 0x2c,0x10);
    local_38 = (**(code **)(*param_2 + 0x2a0))(param_2);
    local_34 = *(undefined1 *)((longlong)param_2 + 0x29);
    local_33 = *(undefined1 *)((longlong)param_2 + 0x2a);
    FUN_147fe7a26(param_1,&local_3c);
    lVar2 = FUN_147fe7bd6(param_1,local_3c);
    if (lVar2 == 0) goto LAB_147ff6524;
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x60) + (ulonglong)*(uint *)(lVar2 + 8)) = param_3;
  *(byte *)(lVar2 + 0xc) = *(byte *)(lVar2 + 0xc) | 0xc;
LAB_147ff6524:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ff6594 FUN_147ff6594 body=194 status=ok
// SIG undefined FUN_147ff6594(void)

void FUN_147ff6594(longlong param_1,longlong *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined1 local_33;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_1447addd0((longlong)param_2 + 0x2c,0x10);
  lVar2 = FUN_147fe7bd6(param_1,uVar1);
  if (lVar2 == 0) {
    local_3c = FUN_1447addd0((longlong)param_2 + 0x2c,0x10);
    local_38 = (**(code **)(*param_2 + 0x2a0))(param_2);
    local_34 = *(undefined1 *)((longlong)param_2 + 0x29);
    local_33 = *(undefined1 *)((longlong)param_2 + 0x2a);
    FUN_147fe7a26(param_1,&local_3c);
    lVar2 = FUN_147fe7bd6(param_1,local_3c);
    if (lVar2 == 0) goto LAB_147ff65e8;
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x60) + (ulonglong)*(uint *)(lVar2 + 8)) = param_3;
  *(byte *)(lVar2 + 0xc) = *(byte *)(lVar2 + 0xc) | 0xc;
LAB_147ff65e8:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ff6658 FUN_147ff6658 body=199 status=ok
// SIG undefined FUN_147ff6658(void)

void FUN_147ff6658(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar4 = FUN_1447addd0((longlong)param_2 + 0x2c,0x10);
  lVar5 = FUN_147fe7bd6(param_1,uVar4);
  if (lVar5 == 0) {
    local_34 = FUN_1447addd0((longlong)param_2 + 0x2c,0x10);
    local_30 = (**(code **)(*param_2 + 0x2a0))(param_2);
    local_2c = *(undefined1 *)((longlong)param_2 + 0x29);
    local_2b = *(undefined1 *)((longlong)param_2 + 0x2a);
    FUN_147fe7a26(param_1,&local_34);
    lVar5 = FUN_147fe7bd6(param_1,local_34);
    if (lVar5 == 0) goto LAB_147ff66ab;
  }
  uVar4 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x60) + (ulonglong)*(uint *)(lVar5 + 8));
  *puVar1 = *param_3;
  puVar1[1] = uVar4;
  puVar1[2] = uVar2;
  puVar1[3] = uVar3;
  *(byte *)(lVar5 + 0xc) = *(byte *)(lVar5 + 0xc) | 0xc;
LAB_147ff66ab:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ff6720 FUN_147ff6720 body=208 status=ok
// SIG undefined FUN_147ff6720(void)

void FUN_147ff6720(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar6 = FUN_1447addd0((longlong)param_2 + 0x2c,0x10);
  lVar7 = FUN_147fe7bd6(param_1,uVar6);
  if (lVar7 == 0) {
    local_34 = FUN_1447addd0((longlong)param_2 + 0x2c,0x10);
    local_30 = (**(code **)(*param_2 + 0x2a0))(param_2);
    local_2c = *(undefined1 *)((longlong)param_2 + 0x29);
    local_2b = *(undefined1 *)((longlong)param_2 + 0x2a);
    FUN_147fe7a26(param_1,&local_34);
    lVar7 = FUN_147fe7bd6(param_1,local_34);
    if (lVar7 == 0) goto LAB_147ff677c;
  }
  lVar3 = *(longlong *)(param_1 + 0x60);
  uVar2 = *(uint *)(lVar7 + 8);
  *(undefined8 *)(lVar3 + 0x10 + (ulonglong)uVar2) = *(undefined8 *)(param_3 + 4);
  uVar6 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  puVar1 = (undefined4 *)(lVar3 + (ulonglong)uVar2);
  *puVar1 = *param_3;
  puVar1[1] = uVar6;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  *(byte *)(lVar7 + 0xc) = *(byte *)(lVar7 + 0xc) | 0xc;
LAB_147ff677c:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ff67f2 FUN_147ff67f2 body=208 status=ok
// SIG undefined FUN_147ff67f2(void)

void FUN_147ff67f2(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar9 = FUN_1447addd0((longlong)param_2 + 0x2c,0x10);
  lVar10 = FUN_147fe7bd6(param_1,uVar9);
  if (lVar10 == 0) {
    local_34 = FUN_1447addd0((longlong)param_2 + 0x2c,0x10);
    local_30 = (**(code **)(*param_2 + 0x2a0))(param_2);
    local_2c = *(undefined1 *)((longlong)param_2 + 0x29);
    local_2b = *(undefined1 *)((longlong)param_2 + 0x2a);
    FUN_147fe7a26(param_1,&local_34);
    lVar10 = FUN_147fe7bd6(param_1,local_34);
    if (lVar10 == 0) goto LAB_147ff684e;
  }
  lVar4 = *(longlong *)(param_1 + 0x60);
  uVar3 = *(uint *)(lVar10 + 8);
  uVar9 = *param_3;
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  uVar8 = *(undefined8 *)(param_3 + 6);
  puVar2 = (undefined8 *)(lVar4 + 0x10 + (ulonglong)uVar3);
  *puVar2 = *(undefined8 *)(param_3 + 4);
  puVar2[1] = uVar8;
  puVar1 = (undefined4 *)(lVar4 + (ulonglong)uVar3);
  *puVar1 = uVar9;
  puVar1[1] = uVar5;
  puVar1[2] = uVar6;
  puVar1[3] = uVar7;
  *(byte *)(lVar10 + 0xc) = *(byte *)(lVar10 + 0xc) | 0xc;
LAB_147ff684e:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ff68c4 FUN_147ff68c4 body=208 status=ok
// SIG undefined FUN_147ff68c4(void)

void FUN_147ff68c4(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar6 = FUN_1447addd0((longlong)param_2 + 0x2c,0x10);
  lVar7 = FUN_147fe7bd6(param_1,uVar6);
  if (lVar7 == 0) {
    local_34 = FUN_1447addd0((longlong)param_2 + 0x2c,0x10);
    local_30 = (**(code **)(*param_2 + 0x2a0))(param_2);
    local_2c = *(undefined1 *)((longlong)param_2 + 0x29);
    local_2b = *(undefined1 *)((longlong)param_2 + 0x2a);
    FUN_147fe7a26(param_1,&local_34);
    lVar7 = FUN_147fe7bd6(param_1,local_34);
    if (lVar7 == 0) goto LAB_147ff6920;
  }
  lVar3 = *(longlong *)(param_1 + 0x60);
  uVar2 = *(uint *)(lVar7 + 8);
  *(undefined8 *)(lVar3 + 0x10 + (ulonglong)uVar2) = *(undefined8 *)(param_3 + 4);
  uVar6 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  puVar1 = (undefined4 *)(lVar3 + (ulonglong)uVar2);
  *puVar1 = *param_3;
  puVar1[1] = uVar6;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  *(byte *)(lVar7 + 0xc) = *(byte *)(lVar7 + 0xc) | 0xc;
LAB_147ff6920:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ff6996 FUN_147ff6996 body=195 status=ok
// SIG undefined FUN_147ff6996(void)

void FUN_147ff6996(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined1 local_33;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_1447addd0((longlong)param_2 + 0x2c,0x10);
  lVar2 = FUN_147fe7bd6(param_1,uVar1);
  if (lVar2 == 0) {
    local_3c = FUN_1447addd0((longlong)param_2 + 0x2c,0x10);
    local_38 = (**(code **)(*param_2 + 0x2a0))(param_2);
    local_34 = *(undefined1 *)((longlong)param_2 + 0x29);
    local_33 = *(undefined1 *)((longlong)param_2 + 0x2a);
    FUN_147fe7a26(param_1,&local_3c);
    lVar2 = FUN_147fe7bd6(param_1,local_3c);
    if (lVar2 == 0) goto LAB_147ff69ec;
  }
  puVar4 = (undefined8 *)((ulonglong)*(uint *)(lVar2 + 8) + *(longlong *)(param_1 + 0x60));
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = *param_3;
    param_3 = param_3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(byte *)(lVar2 + 0xc) = *(byte *)(lVar2 + 0xc) | 0xc;
LAB_147ff69ec:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ff6a60 FUN_147ff6a60 body=456 status=ok
// SIG undefined FUN_147ff6a60(void)

void FUN_147ff6a60(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_88 [44];
  int local_5c;
  longlong local_58 [3];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = (longlong *)0x0;
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
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  local_5c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147ff6c2a(puVar4,local_40,local_58,local_5c != 0);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  plVar3 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff6c2a FUN_147ff6c2a body=87 status=ok
// SIG undefined FUN_147ff6c2a(void)

void FUN_147ff6c2a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_147ff7fe4(param_2,param_3);
  if (lVar1 != 0) {
    lVar2 = FUN_1458bc354();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) goto LAB_147ff6c6c;
  }
  lVar1 = 0;
LAB_147ff6c6c:
  FUN_147ff7fb9(param_1,lVar1,param_4);
  return;
}



// FUNCTION 147ff6c82 FUN_147ff6c82 body=454 status=ok
// SIG undefined FUN_147ff6c82(void)

void FUN_147ff6c82(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong local_58 [3];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = (longlong *)0x0;
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
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  local_60 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147ff6e4a(puVar4,local_40,local_58,local_60);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  plVar3 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff6e4a FUN_147ff6e4a body=95 status=ok
// SIG undefined FUN_147ff6e4a(void)

void FUN_147ff6e4a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_147ff7fe4(param_2,param_3);
  if (lVar1 != 0) {
    lVar2 = FUN_1458bc612();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) goto LAB_147ff6e90;
  }
  lVar1 = 0;
LAB_147ff6e90:
  FUN_147ff84da(param_1,lVar1,param_4);
  return;
}



// FUNCTION 147ff6eaa FUN_147ff6eaa body=454 status=ok
// SIG undefined FUN_147ff6eaa(void)

void FUN_147ff6eaa(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong local_58 [3];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = (longlong *)0x0;
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
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  local_60 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147ff7072(puVar4,local_40,local_58,local_60);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  plVar3 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff7072 FUN_147ff7072 body=96 status=ok
// SIG undefined FUN_147ff7072(void)

void FUN_147ff7072(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_147ff7fe4(param_2,param_3);
  if (lVar1 != 0) {
    lVar2 = FUN_1458bc528();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) goto LAB_147ff70b8;
  }
  lVar1 = 0;
LAB_147ff70b8:
  FUN_147ff84af(param_1,lVar1,(float)param_4);
  return;
}



// FUNCTION 147ff70d2 FUN_147ff70d2 body=452 status=ok
// SIG undefined FUN_147ff70d2(void)

void FUN_147ff70d2(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_88 [44];
  undefined4 local_5c;
  longlong local_58 [3];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = (longlong *)0x0;
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
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  local_5c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147ff7298(puVar4,local_40,local_58,local_5c);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  plVar3 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff7298 FUN_147ff7298 body=87 status=ok
// SIG undefined FUN_147ff7298(void)

void FUN_147ff7298(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_147ff7fe4(param_2,param_3);
  if (lVar1 != 0) {
    lVar2 = FUN_1458bc43e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) goto LAB_147ff72da;
  }
  lVar1 = 0;
LAB_147ff72da:
  FUN_147ff8484(param_1,lVar1,param_4);
  return;
}



// FUNCTION 147ff72f0 FUN_147ff72f0 body=480 status=ok
// SIG undefined FUN_147ff72f0(void)

void FUN_147ff72f0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  longlong local_58 [3];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = (longlong *)0x0;
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
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = local_60;
  local_88 = local_70;
  uStack_84 = uStack_6c;
  uStack_80 = uStack_68;
  uStack_7c = uStack_64;
  FUN_147ff74d2(puVar4,local_40,local_58);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  plVar3 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff74d2 FUN_147ff74d2 body=140 status=ok
// SIG undefined FUN_147ff74d2(void)

void FUN_147ff74d2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_4;
  uStack_34 = param_4[1];
  uStack_30 = param_4[2];
  uStack_2c = param_4[3];
  local_28 = *(undefined8 *)(param_4 + 4);
  lVar1 = FUN_147ff7fe4(param_2,param_3);
  if (lVar1 != 0) {
    lVar2 = FUN_1458bc9ba();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) goto LAB_147ff7531;
  }
  lVar1 = 0;
LAB_147ff7531:
  FUN_147ff8586(param_1,lVar1,&local_38);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff7560 FUN_147ff7560 body=601 status=ok
// SIG undefined FUN_147ff7560(void)

void FUN_147ff7560(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_138 [32];
  undefined8 local_118 [12];
  undefined8 local_b8 [2];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58 [3];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = (longlong *)0x0;
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
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  local_b8[0] = 0;
  local_b8[1] = 0;
  local_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0x3ff00000;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_74 = 0x3ff00000;
  uStack_70 = 0;
  uStack_6c = 0x3ff00000;
  local_68 = 0x3ff0000000000000;
  uStack_60 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_b8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar6 = local_b8;
  puVar7 = local_118;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  FUN_147ff77ba(puVar5,local_40,local_58);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  plVar3 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff77ba FUN_147ff77ba body=152 status=ok
// SIG undefined FUN_147ff77ba(void)

void FUN_147ff77ba(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88 [13];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar3 = local_88;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_4;
    param_4 = param_4 + 1;
    puVar3 = puVar3 + 1;
  }
  lVar2 = FUN_147ff7fe4(param_2,param_3);
  if (lVar2 != 0) {
    lVar1 = FUN_1458bcaa4();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) goto LAB_147ff781e;
  }
  lVar2 = 0;
LAB_147ff781e:
  FUN_147ff85b1(param_1,lVar2,local_88);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff7854 FUN_147ff7854 body=465 status=ok
// SIG undefined FUN_147ff7854(void)

void FUN_147ff7854(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58 [3];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = (longlong *)0x0;
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
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = local_68;
  uStack_74 = uStack_64;
  uStack_70 = uStack_60;
  uStack_6c = uStack_5c;
  FUN_147ff7a26(puVar4,local_40,local_58);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  plVar3 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff7a26 FUN_147ff7a26 body=131 status=ok
// SIG undefined FUN_147ff7a26(void)

void FUN_147ff7a26(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_4;
  uStack_24 = param_4[1];
  uStack_20 = param_4[2];
  uStack_1c = param_4[3];
  lVar1 = FUN_147ff7fe4(param_2,param_3);
  if (lVar1 != 0) {
    lVar2 = FUN_1458bc6fc();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) goto LAB_147ff7a7c;
  }
  lVar1 = 0;
LAB_147ff7a7c:
  FUN_147ff8505(param_1,lVar1,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff7aaa FUN_147ff7aaa body=480 status=ok
// SIG undefined FUN_147ff7aaa(void)

void FUN_147ff7aaa(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  longlong local_58 [3];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = (longlong *)0x0;
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
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = local_60;
  local_88 = local_70;
  uStack_84 = uStack_6c;
  uStack_80 = uStack_68;
  uStack_7c = uStack_64;
  FUN_147ff7c8c(puVar4,local_40,local_58);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  plVar3 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff7c8c FUN_147ff7c8c body=140 status=ok
// SIG undefined FUN_147ff7c8c(void)

void FUN_147ff7c8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_4;
  uStack_34 = param_4[1];
  uStack_30 = param_4[2];
  uStack_2c = param_4[3];
  local_28 = *(undefined8 *)(param_4 + 4);
  lVar1 = FUN_147ff7fe4(param_2,param_3);
  if (lVar1 != 0) {
    lVar2 = FUN_1458bc7e6();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) goto LAB_147ff7ceb;
  }
  lVar1 = 0;
LAB_147ff7ceb:
  FUN_147ff8530(param_1,lVar1,&local_38);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff7d1a FUN_147ff7d1a body=525 status=ok
// SIG undefined FUN_147ff7d1a(void)

void FUN_147ff7d1a(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58 [3];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = (longlong *)0x0;
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
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0x3ff0000000000000;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_98 = (undefined4)local_78;
  uStack_94 = local_78._4_4_;
  uStack_90 = (undefined4)uStack_70;
  uStack_8c = uStack_70._4_4_;
  FUN_147ff7f28(puVar4,local_40,local_58);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  plVar3 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff7f28 FUN_147ff7f28 body=141 status=ok
// SIG undefined FUN_147ff7f28(void)

void FUN_147ff7f28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_4;
  uStack_34 = param_4[1];
  uStack_30 = param_4[2];
  uStack_2c = param_4[3];
  local_28 = param_4[4];
  uStack_24 = param_4[5];
  uStack_20 = param_4[6];
  uStack_1c = param_4[7];
  lVar1 = FUN_147ff7fe4(param_2,param_3);
  if (lVar1 != 0) {
    lVar2 = FUN_1458bc8d0();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) goto LAB_147ff7f88;
  }
  lVar1 = 0;
LAB_147ff7f88:
  FUN_147ff855b(param_1,lVar1,&local_38);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff7fb9 FUN_147ff7fb9 body=43 status=ok
// SIG undefined FUN_147ff7fb9(void)

void FUN_147ff7fb9(longlong *param_1,longlong *param_2,undefined1 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  undefined1 auStack_58 [36];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 uStack_2c;
  undefined1 uStack_2b;
  ulonglong uStack_28;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    pwVar4 = L"Invalid camera variable table was passed.";
LAB_147ff7fd1:
    FUN_1415b7ec4(pwVar4,2,0);
    return;
  }
  if (param_2 == (longlong *)0x0) {
    pwVar4 = L"No camera rig was passed.";
    goto LAB_147ff7fd1;
  }
  uStack_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = FUN_1447addd0((longlong)param_2 + 0x2c,0x10);
  lVar3 = FUN_147fe7bd6(lVar1,uVar2);
  if (lVar3 == 0) {
    uStack_34 = FUN_1447addd0((longlong)param_2 + 0x2c,0x10);
    uStack_30 = (**(code **)(*param_2 + 0x2a0))(param_2);
    uStack_2c = *(undefined1 *)((longlong)param_2 + 0x29);
    uStack_2b = *(undefined1 *)((longlong)param_2 + 0x2a);
    FUN_147fe7a26(lVar1,&uStack_34);
    lVar3 = FUN_147fe7bd6(lVar1,uStack_34);
    if (lVar3 == 0) goto LAB_147ff639f;
  }
  *(undefined1 *)(*(longlong *)(lVar1 + 0x60) + (ulonglong)*(uint *)(lVar3 + 8)) = param_3;
  *(byte *)(lVar3 + 0xc) = *(byte *)(lVar3 + 0xc) | 0xc;
LAB_147ff639f:
  if ((uStack_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ff7fe4 FUN_147ff7fe4 body=1183 status=ok
// SIG undefined FUN_147ff7fe4(void)

longlong FUN_147ff7fe4(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  undefined1 auStack_168 [40];
  undefined8 local_140;
  longlong *local_138;
  longlong *local_130 [2];
  longlong *local_120 [2];
  undefined8 local_110;
  longlong *local_108;
  longlong *local_100 [2];
  longlong local_f0 [2];
  longlong *local_e0 [2];
  longlong *local_d0 [2];
  longlong *local_c0 [2];
  undefined8 local_b0;
  longlong *local_a8;
  wchar_t **local_a0;
  ulonglong *local_98;
  longlong local_90;
  undefined4 local_88;
  wchar_t *local_80;
  undefined4 local_78 [2];
  undefined1 local_70 [16];
  undefined4 local_60;
  undefined1 local_50 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar3 = FUN_147fdd864(param_1 + 0x70);
  if (lVar3 == 0) {
    local_80 = L"NoSuchParameter";
    local_78[0] = 0xf;
    FUN_1446e940c(&local_90,&local_80);
    local_80 = L"CameraRigParameterInterop";
    local_78[0] = 0x19;
    FUN_1446e940c(&local_a0,&local_80);
    FUN_140208bae(local_c0,&local_a0,&local_90,
                  L"No parameter \'{0}\' found on camera rig \'{1}\'. Setting this camera variable table value will most probably accomplish nothing."
                 );
    FUN_14010318a(param_1,local_f0,0);
    FUN_140233b1a(local_e0,local_f0);
    FUN_140009b9a(local_100,param_2);
    FUN_14023409e(&local_110,local_c0,1);
    local_80 = (wchar_t *)CONCAT44(local_80._4_4_,4);
    FUN_14023423e(local_70,local_100);
    local_60 = 4;
    FUN_14023423e(local_50,local_e0);
    local_98 = &local_40;
    local_a0 = &local_80;
    FUN_14010d304(&local_90,&local_a0);
    local_b0 = local_110;
    local_a8 = local_108;
    if (local_108 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_108 + 1) = (int)local_108[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_d0,&local_b0,&local_90);
    FUN_14007f2db(local_90,local_88);
    if (local_90 != 0) {
      FUN_1400020a8();
    }
    lVar3 = 0x30;
    do {
      plVar2 = *(longlong **)((longlong)local_78 + lVar3 + -8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))();
        *(undefined8 *)((longlong)local_78 + lVar3 + -8) = 0;
        *(undefined4 *)((longlong)local_78 + lVar3) = 0;
      }
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != -0x10);
    if (local_108 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_108 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_108)(local_108);
        LOCK();
        piVar1 = (int *)((longlong)local_108 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_108 + 0x10))(local_108);
        }
      }
    }
    if (local_100[0] != (longlong *)0x0) {
      (**(code **)(*local_100[0] + 0x10))();
    }
  }
  else {
    lVar3 = *(longlong *)(lVar3 + 0x60);
    if (lVar3 != 0) goto LAB_147ff8458;
    local_80 = L"CameraRigNeedsBuilding";
    local_78[0] = 0x16;
    FUN_1446e940c(&local_90,&local_80);
    local_80 = L"CameraRigParameterInterop";
    local_78[0] = 0x19;
    FUN_1446e940c(&local_a0,&local_80);
    FUN_140208bae(local_c0,&local_a0,&local_90,
                  L"Parameter \'{0}\' isn\'t built. Please build camera rig \'{1}\'.");
    FUN_14010318a(param_1,local_f0,0);
    FUN_140233b1a(local_120,local_f0);
    FUN_140009b9a(local_130,param_2);
    FUN_14023409e(&local_140,local_c0,1);
    local_80 = (wchar_t *)CONCAT44(local_80._4_4_,4);
    FUN_14023423e(local_70,local_130);
    local_60 = 4;
    FUN_14023423e(local_50,local_120);
    local_98 = &local_40;
    local_a0 = &local_80;
    FUN_14010d304(&local_90,&local_a0);
    local_b0 = local_140;
    local_a8 = local_138;
    if (local_138 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_138 + 1) = (int)local_138[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_d0,&local_b0,&local_90);
    FUN_14007f2db(local_90,local_88);
    if (local_90 != 0) {
      FUN_1400020a8();
    }
    lVar3 = 0x30;
    do {
      plVar2 = *(longlong **)((longlong)local_78 + lVar3 + -8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))();
        *(undefined8 *)((longlong)local_78 + lVar3 + -8) = 0;
        *(undefined4 *)((longlong)local_78 + lVar3) = 0;
      }
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != -0x10);
    if (local_138 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_138 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_138)(local_138);
        LOCK();
        piVar1 = (int *)((longlong)local_138 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_138 + 0x10))(local_138);
        }
      }
    }
    local_e0[0] = local_120[0];
    if (local_130[0] != (longlong *)0x0) {
      (**(code **)(*local_130[0] + 0x10))();
      local_e0[0] = local_120[0];
    }
  }
  if (local_e0[0] != (longlong *)0x0) {
    (**(code **)(*local_e0[0] + 0x10))();
  }
  puVar4 = (undefined8 *)FUN_1447a1f4a(local_d0);
  if (*(int *)(puVar4 + 1) == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*puVar4;
  }
  FUN_1415b7ec4(puVar5,3,0);
  if (local_d0[0] != (longlong *)0x0) {
    (**(code **)(*local_d0[0] + 0x10))();
  }
  if (local_f0[0] != 0) {
    FUN_1400020a8();
  }
  if (local_c0[0] != (longlong *)0x0) {
    (**(code **)(*local_c0[0] + 0x10))();
  }
  lVar3 = 0;
LAB_147ff8458:
  if ((local_40 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 147ff8484 FUN_147ff8484 body=43 status=ok
// SIG undefined FUN_147ff8484(void)

void FUN_147ff8484(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  undefined1 auStack_58 [36];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 uStack_2c;
  undefined1 uStack_2b;
  ulonglong uStack_28;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    pwVar4 = L"Invalid camera variable table was passed.";
LAB_147ff849c:
    FUN_1415b7ec4(pwVar4,2,0);
    return;
  }
  if (param_2 == (longlong *)0x0) {
    pwVar4 = L"No camera rig was passed.";
    goto LAB_147ff849c;
  }
  uStack_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = FUN_1447addd0((longlong)param_2 + 0x2c,0x10);
  lVar3 = FUN_147fe7bd6(lVar1,uVar2);
  if (lVar3 == 0) {
    uStack_34 = FUN_1447addd0((longlong)param_2 + 0x2c,0x10);
    uStack_30 = (**(code **)(*param_2 + 0x2a0))(param_2);
    uStack_2c = *(undefined1 *)((longlong)param_2 + 0x29);
    uStack_2b = *(undefined1 *)((longlong)param_2 + 0x2a);
    FUN_147fe7a26(lVar1,&uStack_34);
    lVar3 = FUN_147fe7bd6(lVar1,uStack_34);
    if (lVar3 == 0) goto LAB_147ff645f;
  }
  *(undefined4 *)(*(longlong *)(lVar1 + 0x60) + (ulonglong)*(uint *)(lVar3 + 8)) = param_3;
  *(byte *)(lVar3 + 0xc) = *(byte *)(lVar3 + 0xc) | 0xc;
LAB_147ff645f:
  if ((uStack_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ff84af FUN_147ff84af body=43 status=ok
// SIG undefined FUN_147ff84af(void)

void FUN_147ff84af(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  undefined1 auStack_68 [44];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 uStack_34;
  undefined1 uStack_33;
  ulonglong uStack_30;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    pwVar4 = L"Invalid camera variable table was passed.";
LAB_147ff84c7:
    FUN_1415b7ec4(pwVar4,2,0);
    return;
  }
  if (param_2 == (longlong *)0x0) {
    pwVar4 = L"No camera rig was passed.";
    goto LAB_147ff84c7;
  }
  uStack_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = FUN_1447addd0((longlong)param_2 + 0x2c,0x10);
  lVar3 = FUN_147fe7bd6(lVar1,uVar2);
  if (lVar3 == 0) {
    uStack_3c = FUN_1447addd0((longlong)param_2 + 0x2c,0x10);
    uStack_38 = (**(code **)(*param_2 + 0x2a0))(param_2);
    uStack_34 = *(undefined1 *)((longlong)param_2 + 0x29);
    uStack_33 = *(undefined1 *)((longlong)param_2 + 0x2a);
    FUN_147fe7a26(lVar1,&uStack_3c);
    lVar3 = FUN_147fe7bd6(lVar1,uStack_3c);
    if (lVar3 == 0) goto LAB_147ff6524;
  }
  *(undefined4 *)(*(longlong *)(lVar1 + 0x60) + (ulonglong)*(uint *)(lVar3 + 8)) = param_3;
  *(byte *)(lVar3 + 0xc) = *(byte *)(lVar3 + 0xc) | 0xc;
LAB_147ff6524:
  if ((uStack_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ff84da FUN_147ff84da body=43 status=ok
// SIG undefined FUN_147ff84da(void)

void FUN_147ff84da(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  undefined1 auStack_68 [44];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 uStack_34;
  undefined1 uStack_33;
  ulonglong uStack_30;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    pwVar4 = L"Invalid camera variable table was passed.";
LAB_147ff84f2:
    FUN_1415b7ec4(pwVar4,2,0);
    return;
  }
  if (param_2 == (longlong *)0x0) {
    pwVar4 = L"No camera rig was passed.";
    goto LAB_147ff84f2;
  }
  uStack_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = FUN_1447addd0((longlong)param_2 + 0x2c,0x10);
  lVar3 = FUN_147fe7bd6(lVar1,uVar2);
  if (lVar3 == 0) {
    uStack_3c = FUN_1447addd0((longlong)param_2 + 0x2c,0x10);
    uStack_38 = (**(code **)(*param_2 + 0x2a0))(param_2);
    uStack_34 = *(undefined1 *)((longlong)param_2 + 0x29);
    uStack_33 = *(undefined1 *)((longlong)param_2 + 0x2a);
    FUN_147fe7a26(lVar1,&uStack_3c);
    lVar3 = FUN_147fe7bd6(lVar1,uStack_3c);
    if (lVar3 == 0) goto LAB_147ff65e8;
  }
  *(undefined8 *)(*(longlong *)(lVar1 + 0x60) + (ulonglong)*(uint *)(lVar3 + 8)) = param_3;
  *(byte *)(lVar3 + 0xc) = *(byte *)(lVar3 + 0xc) | 0xc;
LAB_147ff65e8:
  if ((uStack_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ff8505 FUN_147ff8505 body=43 status=ok
// SIG undefined FUN_147ff8505(void)

void FUN_147ff8505(longlong *param_1,longlong *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  undefined1 auStack_58 [36];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 uStack_2c;
  undefined1 uStack_2b;
  ulonglong uStack_28;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    pwVar7 = L"Invalid camera variable table was passed.";
LAB_147ff851d:
    FUN_1415b7ec4(pwVar7,2,0);
    return;
  }
  if (param_2 == (longlong *)0x0) {
    pwVar7 = L"No camera rig was passed.";
    goto LAB_147ff851d;
  }
  uStack_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar5 = FUN_1447addd0((longlong)param_2 + 0x2c,0x10);
  lVar6 = FUN_147fe7bd6(lVar2,uVar5);
  if (lVar6 == 0) {
    uStack_34 = FUN_1447addd0((longlong)param_2 + 0x2c,0x10);
    uStack_30 = (**(code **)(*param_2 + 0x2a0))(param_2);
    uStack_2c = *(undefined1 *)((longlong)param_2 + 0x29);
    uStack_2b = *(undefined1 *)((longlong)param_2 + 0x2a);
    FUN_147fe7a26(lVar2,&uStack_34);
    lVar6 = FUN_147fe7bd6(lVar2,uStack_34);
    if (lVar6 == 0) goto LAB_147ff66ab;
  }
  uVar5 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  puVar1 = (undefined4 *)(*(longlong *)(lVar2 + 0x60) + (ulonglong)*(uint *)(lVar6 + 8));
  *puVar1 = *param_3;
  puVar1[1] = uVar5;
  puVar1[2] = uVar3;
  puVar1[3] = uVar4;
  *(byte *)(lVar6 + 0xc) = *(byte *)(lVar6 + 0xc) | 0xc;
LAB_147ff66ab:
  if ((uStack_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ff8530 FUN_147ff8530 body=43 status=ok
// SIG undefined FUN_147ff8530(void)

void FUN_147ff8530(longlong *param_1,longlong *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  undefined1 auStack_58 [36];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 uStack_2c;
  undefined1 uStack_2b;
  ulonglong uStack_28;
  
  lVar3 = *param_1;
  if (lVar3 == 0) {
    pwVar8 = L"Invalid camera variable table was passed.";
LAB_147ff8548:
    FUN_1415b7ec4(pwVar8,2,0);
    return;
  }
  if (param_2 == (longlong *)0x0) {
    pwVar8 = L"No camera rig was passed.";
    goto LAB_147ff8548;
  }
  uStack_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar6 = FUN_1447addd0((longlong)param_2 + 0x2c,0x10);
  lVar7 = FUN_147fe7bd6(lVar3,uVar6);
  if (lVar7 == 0) {
    uStack_34 = FUN_1447addd0((longlong)param_2 + 0x2c,0x10);
    uStack_30 = (**(code **)(*param_2 + 0x2a0))(param_2);
    uStack_2c = *(undefined1 *)((longlong)param_2 + 0x29);
    uStack_2b = *(undefined1 *)((longlong)param_2 + 0x2a);
    FUN_147fe7a26(lVar3,&uStack_34);
    lVar7 = FUN_147fe7bd6(lVar3,uStack_34);
    if (lVar7 == 0) goto LAB_147ff677c;
  }
  lVar3 = *(longlong *)(lVar3 + 0x60);
  uVar2 = *(uint *)(lVar7 + 8);
  *(undefined8 *)(lVar3 + 0x10 + (ulonglong)uVar2) = *(undefined8 *)(param_3 + 4);
  uVar6 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  puVar1 = (undefined4 *)(lVar3 + (ulonglong)uVar2);
  *puVar1 = *param_3;
  puVar1[1] = uVar6;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  *(byte *)(lVar7 + 0xc) = *(byte *)(lVar7 + 0xc) | 0xc;
LAB_147ff677c:
  if ((uStack_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ff855b FUN_147ff855b body=43 status=ok
// SIG undefined FUN_147ff855b(void)

void FUN_147ff855b(longlong *param_1,longlong *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  undefined1 auStack_58 [36];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 uStack_2c;
  undefined1 uStack_2b;
  ulonglong uStack_28;
  
  lVar4 = *param_1;
  if (lVar4 == 0) {
    pwVar11 = L"Invalid camera variable table was passed.";
LAB_147ff8573:
    FUN_1415b7ec4(pwVar11,2,0);
    return;
  }
  if (param_2 == (longlong *)0x0) {
    pwVar11 = L"No camera rig was passed.";
    goto LAB_147ff8573;
  }
  uStack_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar9 = FUN_1447addd0((longlong)param_2 + 0x2c,0x10);
  lVar10 = FUN_147fe7bd6(lVar4,uVar9);
  if (lVar10 == 0) {
    uStack_34 = FUN_1447addd0((longlong)param_2 + 0x2c,0x10);
    uStack_30 = (**(code **)(*param_2 + 0x2a0))(param_2);
    uStack_2c = *(undefined1 *)((longlong)param_2 + 0x29);
    uStack_2b = *(undefined1 *)((longlong)param_2 + 0x2a);
    FUN_147fe7a26(lVar4,&uStack_34);
    lVar10 = FUN_147fe7bd6(lVar4,uStack_34);
    if (lVar10 == 0) goto LAB_147ff684e;
  }
  lVar4 = *(longlong *)(lVar4 + 0x60);
  uVar3 = *(uint *)(lVar10 + 8);
  uVar9 = *param_3;
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  uVar8 = *(undefined8 *)(param_3 + 6);
  puVar2 = (undefined8 *)(lVar4 + 0x10 + (ulonglong)uVar3);
  *puVar2 = *(undefined8 *)(param_3 + 4);
  puVar2[1] = uVar8;
  puVar1 = (undefined4 *)(lVar4 + (ulonglong)uVar3);
  *puVar1 = uVar9;
  puVar1[1] = uVar5;
  puVar1[2] = uVar6;
  puVar1[3] = uVar7;
  *(byte *)(lVar10 + 0xc) = *(byte *)(lVar10 + 0xc) | 0xc;
LAB_147ff684e:
  if ((uStack_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ff8586 FUN_147ff8586 body=43 status=ok
// SIG undefined FUN_147ff8586(void)

void FUN_147ff8586(longlong *param_1,longlong *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  undefined1 auStack_58 [36];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 uStack_2c;
  undefined1 uStack_2b;
  ulonglong uStack_28;
  
  lVar3 = *param_1;
  if (lVar3 == 0) {
    pwVar8 = L"Invalid camera variable table was passed.";
LAB_147ff859e:
    FUN_1415b7ec4(pwVar8,2,0);
    return;
  }
  if (param_2 == (longlong *)0x0) {
    pwVar8 = L"No camera rig was passed.";
    goto LAB_147ff859e;
  }
  uStack_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar6 = FUN_1447addd0((longlong)param_2 + 0x2c,0x10);
  lVar7 = FUN_147fe7bd6(lVar3,uVar6);
  if (lVar7 == 0) {
    uStack_34 = FUN_1447addd0((longlong)param_2 + 0x2c,0x10);
    uStack_30 = (**(code **)(*param_2 + 0x2a0))(param_2);
    uStack_2c = *(undefined1 *)((longlong)param_2 + 0x29);
    uStack_2b = *(undefined1 *)((longlong)param_2 + 0x2a);
    FUN_147fe7a26(lVar3,&uStack_34);
    lVar7 = FUN_147fe7bd6(lVar3,uStack_34);
    if (lVar7 == 0) goto LAB_147ff6920;
  }
  lVar3 = *(longlong *)(lVar3 + 0x60);
  uVar2 = *(uint *)(lVar7 + 8);
  *(undefined8 *)(lVar3 + 0x10 + (ulonglong)uVar2) = *(undefined8 *)(param_3 + 4);
  uVar6 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  puVar1 = (undefined4 *)(lVar3 + (ulonglong)uVar2);
  *puVar1 = *param_3;
  puVar1[1] = uVar6;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  *(byte *)(lVar7 + 0xc) = *(byte *)(lVar7 + 0xc) | 0xc;
LAB_147ff6920:
  if ((uStack_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ff85b1 FUN_147ff85b1 body=43 status=ok
// SIG undefined FUN_147ff85b1(void)

void FUN_147ff85b1(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  undefined8 *puVar6;
  undefined1 auStack_68 [44];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 uStack_34;
  undefined1 uStack_33;
  ulonglong uStack_30;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    pwVar5 = L"Invalid camera variable table was passed.";
LAB_147ff85c9:
    FUN_1415b7ec4(pwVar5,2,0);
    return;
  }
  if (param_2 == (longlong *)0x0) {
    pwVar5 = L"No camera rig was passed.";
    goto LAB_147ff85c9;
  }
  uStack_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = FUN_1447addd0((longlong)param_2 + 0x2c,0x10);
  lVar3 = FUN_147fe7bd6(lVar1,uVar2);
  if (lVar3 == 0) {
    uStack_3c = FUN_1447addd0((longlong)param_2 + 0x2c,0x10);
    uStack_38 = (**(code **)(*param_2 + 0x2a0))(param_2);
    uStack_34 = *(undefined1 *)((longlong)param_2 + 0x29);
    uStack_33 = *(undefined1 *)((longlong)param_2 + 0x2a);
    FUN_147fe7a26(lVar1,&uStack_3c);
    lVar3 = FUN_147fe7bd6(lVar1,uStack_3c);
    if (lVar3 == 0) goto LAB_147ff69ec;
  }
  puVar6 = (undefined8 *)((ulonglong)*(uint *)(lVar3 + 8) + *(longlong *)(lVar1 + 0x60));
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *param_3;
    param_3 = param_3 + 1;
    puVar6 = puVar6 + 1;
  }
  *(byte *)(lVar3 + 0xc) = *(byte *)(lVar3 + 0xc) | 0xc;
LAB_147ff69ec:
  if ((uStack_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ff85e0 FUN_147ff85e0 body=550 status=ok
// SIG undefined FUN_147ff85e0(void)

void FUN_147ff85e0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *plStack_80;
  longlong local_78;
  undefined1 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_147ff88aa();
  if ((*(longlong *)(param_1 + 0x130) != 0) &&
     (FUN_147ff891e(param_1), *(longlong *)(param_1 + 0x120) != 0)) {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x130) + 0x28);
    local_90 = *(longlong **)(*(longlong *)(param_1 + 0x130) + 0x30);
    if (local_90 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_90 + 1) = (int)local_90[1] + 1;
      UNLOCK();
    }
    iVar4 = *(int *)(param_1 + 0x118);
    if ((longlong)iVar4 != 0) {
      plVar6 = *(longlong **)(lVar5 + 0x88);
      lVar5 = *(longlong *)(param_1 + 0x110);
      lVar9 = 0;
      do {
        if (*(char *)(lVar5 + 9 + lVar9) == '\0') {
          local_88 = 0;
          plStack_80 = (longlong *)0x0;
          local_78 = 0;
          local_70 = 1;
          lVar8 = *(longlong *)(lVar5 + lVar9);
          if (DAT_14c950c29 == '\x01') {
            if (lVar8 == 0) {
              lVar8 = 0;
            }
            else {
              FUN_1456cec3c();
              lVar8 = *(longlong *)(lVar5 + lVar9);
            }
          }
          plVar2 = plStack_80;
          local_88 = *(undefined8 *)(param_1 + 0x120);
          plVar7 = *(longlong **)(param_1 + 0x128);
          local_78 = lVar8;
          if (plVar7 == (longlong *)0x0) {
            if (plStack_80 != (longlong *)0x0) {
              plStack_80 = (longlong *)0x0;
LAB_147ff8730:
              LOCK();
              plVar7 = plVar2 + 1;
              *(int *)plVar7 = (int)*plVar7 + -1;
              UNLOCK();
              if ((int)*plVar7 == 0) {
                (**(code **)*plVar2)(plVar2);
                LOCK();
                piVar1 = (int *)((longlong)plVar2 + 0xc);
                *piVar1 = *piVar1 + -1;
                iVar3 = *piVar1;
                UNLOCK();
joined_r0x000147ff8762:
                if (iVar3 == 0) {
                  (**(code **)(*plVar2 + 0x10))(plVar2);
                }
              }
            }
          }
          else {
            LOCK();
            *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
            UNLOCK();
            if (plVar7 == plStack_80) {
              LOCK();
              plVar2 = plVar7 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
                (**(code **)*plVar7)(plVar7);
                LOCK();
                piVar1 = (int *)((longlong)plVar7 + 0xc);
                *piVar1 = *piVar1 + -1;
                iVar3 = *piVar1;
                UNLOCK();
                plVar2 = plVar7;
                goto joined_r0x000147ff8762;
              }
            }
            else {
              bVar10 = plStack_80 != (longlong *)0x0;
              plStack_80 = plVar7;
              if (bVar10) goto LAB_147ff8730;
            }
          }
          local_70 = *(undefined1 *)(lVar5 + 8 + lVar9);
          (**(code **)(*plVar6 + 0x58))(plVar6,&local_88);
          plVar7 = plStack_80;
          *(undefined1 *)(lVar5 + 9 + lVar9) = 1;
          if (plStack_80 != (longlong *)0x0) {
            LOCK();
            plVar2 = plStack_80 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*plStack_80)(plStack_80);
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
        lVar9 = lVar9 + 0x10;
      } while ((longlong)iVar4 * 0x10 != lVar9);
    }
    plVar6 = local_90;
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_90 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff8808 FUN_147ff8808 body=26 status=ok
// SIG undefined FUN_147ff8808(void)

void FUN_147ff8808(undefined8 param_1)

{
  FUN_1401c3ca6();
  FUN_147ff85e0(param_1);
  return;
}



// FUNCTION 147ff8822 FUN_147ff8822 body=135 status=ok
// SIG undefined FUN_147ff8822(void)

void FUN_147ff8822(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(int *)(param_1 + 0x11c) < 0) {
    *(undefined4 *)(param_1 + 0x118) = 0;
    FUN_148011b96(param_1 + 0x110);
  }
  else {
    *(undefined4 *)(param_1 + 0x118) = 0;
  }
  *(undefined8 *)(param_1 + 0x120) = 0;
  plVar3 = *(longlong **)(param_1 + 0x128);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x128) = 0;
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
  FUN_1401c3216(param_1,param_2);
  return;
}



// FUNCTION 147ff88aa FUN_147ff88aa body=116 status=ok
// SIG undefined FUN_147ff88aa(void)

void FUN_147ff88aa(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x130) != 0) {
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0xa8);
  if (lVar2 != 0) {
    lVar1 = FUN_144a75eb4();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) goto LAB_147ff88f2;
  }
  lVar2 = 0;
LAB_147ff88f2:
  lVar2 = FUN_147ff8ae2(lVar2);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  *(longlong *)(param_1 + 0x130) = lVar2;
  return;
}



// FUNCTION 147ff891e FUN_147ff891e body=451 status=ok
// SIG undefined FUN_147ff891e(void)

void FUN_147ff891e(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong *local_48;
  longlong local_40;
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x120) != 0) goto LAB_147ff8940;
  lVar6 = *(longlong *)(param_1 + 0xa8);
  if (lVar6 == 0) {
LAB_147ff8990:
    lVar6 = 0;
  }
  else {
    lVar3 = FUN_144a75eb4();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        != lVar3 + 0x30)) goto LAB_147ff8990;
  }
  local_38 = 0;
  if (param_1 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_1);
  }
  local_40 = param_1;
  if ((lVar6 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(lVar6);
  }
  local_30 = lVar6;
  plVar4 = (longlong *)FUN_14001cc68(0xb80,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14ad2a240;
  plVar5 = plVar4 + 2;
  FUN_147fd8454(plVar5,&local_40);
  local_50 = plVar5;
  local_48 = plVar4;
  FUN_148011bee(&local_50,plVar5);
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x120) = 0x10;
    plVar5 = *(longlong **)(param_1 + 0x128);
    if (plVar5 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x128) = 0;
LAB_147ff8a72:
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
joined_r0x000147ff8a9d:
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
    *(longlong **)(param_1 + 0x120) = plVar5;
    plVar5 = *(longlong **)(param_1 + 0x128);
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
        goto joined_r0x000147ff8a9d;
      }
    }
    else {
      *(longlong **)(param_1 + 0x128) = plVar4;
      if (plVar5 != (longlong *)0x0) goto LAB_147ff8a72;
    }
  }
  plVar5 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  *(undefined1 *)(*(longlong *)(param_1 + 0x120) + 0xb11) = 1;
LAB_147ff8940:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff8ae2 FUN_147ff8ae2 body=153 status=ok
// SIG undefined FUN_147ff8ae2(void)

longlong FUN_147ff8ae2(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != 0) {
    uVar1 = FUN_1458b5980();
    lVar2 = FUN_140277b32(uVar1,param_1,L"GameplayCameraSystemHost",0);
    if (lVar2 != 0) goto LAB_147ff8afe;
    if (DAT_14cb2b108 == '\0') {
      DAT_14cb2b108 = 1;
      FUN_1446f470e(&local_20,L"GameplayCameraSystemHost",1);
      lVar2 = FUN_147ffa4f7(param_1,local_20);
      DAT_14cb2b108 = '\0';
      goto LAB_147ff8afe;
    }
  }
  lVar2 = 0;
LAB_147ff8afe:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff8b7c FUN_147ff8b7c body=102 status=ok
// SIG undefined FUN_147ff8b7c(void)

void FUN_147ff8b7c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_145b67d70();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  (**(code **)(*param_1 + 0x598))(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff8be3 FUN_147ff8be3 body=183 status=ok
// SIG undefined FUN_147ff8be3(void)

undefined8 FUN_147ff8be3(undefined8 param_1,longlong param_2)

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
  uVar1 = FUN_145b67d70();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 0x40;
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



// FUNCTION 147ff8cc2 FUN_147ff8cc2 body=156 status=ok
// SIG undefined FUN_147ff8cc2(void)

void FUN_147ff8cc2(undefined8 param_1,longlong param_2)

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
  FUN_147ff9514(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff8d60 FUN_147ff8d60 body=154 status=ok
// SIG undefined FUN_147ff8d60(void)

void FUN_147ff8d60(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147ff94cc(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff8e12 FUN_147ff8e12 body=102 status=ok
// SIG undefined FUN_147ff8e12(void)

void FUN_147ff8e12(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88 [14];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147ff8e7a(param_1,local_88);
  puVar2 = local_88;
  for (lVar1 = 0xe; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_3 = *puVar2;
    puVar2 = puVar2 + 1;
    param_3 = param_3 + 1;
  }
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff8e7a FUN_147ff8e7a body=447 status=ok
// SIG undefined FUN_147ff8e7a(void)

undefined8 * FUN_147ff8e7a(longlong param_1,undefined8 *param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_a8 [32];
  undefined2 *local_88;
  int local_80;
  undefined8 *local_78;
  ulonglong *local_70;
  longlong local_68;
  undefined4 local_60;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48 [2];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong *)(param_1 + 0x2b8) != 0) {
    FUN_147ff0ee8(param_2,*(longlong *)(param_1 + 0x2b8) + 0x40);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  }
  if (param_1 == 0) {
    FUN_140056680(&local_88,&DAT_149e01fe8);
  }
  else {
    local_48[0] = *(undefined8 *)(param_1 + 0x18);
    FUN_1400021e4(local_48,&local_88);
  }
  puVar1 = &DAT_149dfb77a;
  if (local_80 != 0) {
    puVar1 = local_88;
  }
  FUN_140230a18(local_48,puVar1);
  local_70 = &local_28;
  local_78 = local_48;
  FUN_1407adb6e(&local_68);
  FUN_140230a2e(&local_58,
                L"Can\'t get initial camera pose on Gameplay Camera component \'{0}\': it isn\'t active."
                ,&local_68);
  puVar1 = &DAT_149dfb77a;
  if (local_50 != 0) {
    puVar1 = local_58;
  }
  FUN_1415b7ec4(puVar1,2,0);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1407adb3e(local_68,local_60);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (local_88 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[6] = 0x408f400000000000;
  param_2[7] = 0x420c0000bf800000;
  param_2[8] = 0x4270000040333333;
  *(undefined4 *)(param_2 + 9) = 0xbf800000;
  *(undefined4 *)((longlong)param_2 + 0x4c) = 0x41c71eb8;
  *(undefined4 *)(param_2 + 10) = 0x41955c29;
  *(undefined4 *)((longlong)param_2 + 0x54) = 0x42c80000;
  param_2[0xb] = 0x83f800000;
  param_2[0xc] = 0xbf80000041200000;
  param_2[0xd] = 0;
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff903c FUN_147ff903c body=131 status=ok
// SIG undefined FUN_147ff903c(void)

void FUN_147ff903c(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [40];
  undefined1 local_30 [16];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147ff90c0(param_1,local_30);
  FUN_147ff02b6(param_3,local_30);
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff90c0 FUN_147ff90c0 body=476 status=ok
// SIG undefined FUN_147ff90c0(void)

longlong * FUN_147ff90c0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [16];
  longlong *local_70;
  ulonglong *local_68;
  longlong local_60;
  undefined4 local_58;
  undefined2 *local_50;
  int local_48;
  longlong local_40;
  longlong *local_38;
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = *(longlong *)(param_1 + 0x2b8);
  if (lVar4 == 0) {
    if (param_1 == 0) {
      FUN_140056680(local_80,&DAT_149e01fe8);
    }
    else {
      local_40 = *(longlong *)(param_1 + 0x18);
      FUN_1400021e4(&local_40,local_80);
    }
    FUN_14146ec20(&local_40,local_80);
    local_68 = &local_20;
    local_70 = &local_40;
    FUN_1407adb6e(&local_60);
    FUN_140230a2e(&local_50,
                  L"Can\'t get initial camera variable table on Gameplay Camera component \'{0}\': it isn\'t active."
                  ,&local_60);
    puVar5 = local_50;
    if (local_48 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    FUN_1415b7ec4(puVar5,2,0);
    if (local_50 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    FUN_1407adb3e(local_60,local_58);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  else {
    FUN_147ff120a(*(undefined8 *)(lVar4 + 0xb38),&local_40);
    plVar3 = local_38;
    if (local_38 == (longlong *)0x0) {
      *param_2 = lVar4 + 200;
      param_2[1] = local_40;
      param_2[2] = 0;
    }
    else {
      LOCK();
      *(int *)(local_38 + 1) = (int)local_38[1] + 1;
      UNLOCK();
      *param_2 = lVar4 + 200;
      param_2[1] = local_40;
      param_2[2] = (longlong)local_38;
      LOCK();
      *(int *)(local_38 + 1) = (int)local_38[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = local_38 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_38 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  }
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147ff929e FUN_147ff929e body=255 status=ok
// SIG undefined FUN_147ff929e(void)

void FUN_147ff929e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_58 = 0x408f400000000000;
  local_50 = 0x420c0000bf800000;
  uStack_48 = 0x4270000040333333;
  local_40 = 0xbf800000;
  uStack_3c = 0x41c71eb8;
  uStack_38 = 0x41955c29;
  uStack_34 = 0x42c80000;
  local_30 = 0x83f800000;
  local_28 = 0xbf80000041200000;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147ff939e(param_1);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff939e FUN_147ff939e body=297 status=ok
// SIG undefined FUN_147ff939e(void)

void FUN_147ff939e(longlong param_1)

{
  undefined2 *puVar1;
  undefined1 auStack_98 [32];
  undefined1 local_78 [16];
  undefined8 *local_68;
  ulonglong *local_60;
  longlong local_58;
  undefined4 local_50;
  undefined2 *local_48;
  int local_40;
  undefined8 local_38 [2];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x2b8) == 0) {
    if (param_1 == 0) {
      FUN_140056680(local_78,&DAT_149e01fe8);
    }
    else {
      local_38[0] = *(undefined8 *)(param_1 + 0x18);
      FUN_1400021e4(local_38,local_78);
    }
    FUN_14146ec20(local_38,local_78);
    local_60 = &local_18;
    local_68 = local_38;
    FUN_1407adb6e(&local_58);
    FUN_140230a2e(&local_48,
                  L"Can\'t set initial camera pose on Gameplay Camera component \'{0}\': it isn\'t active."
                  ,&local_58);
    puVar1 = local_48;
    if (local_40 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    FUN_1415b7ec4(puVar1,2,0);
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    FUN_1407adb3e(local_58,local_50);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ff94cc FUN_147ff94cc body=71 status=ok
// SIG undefined FUN_147ff94cc(void)

void FUN_147ff94cc(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  
  FUN_147ff98d2();
  lVar1 = FUN_1414fb874(param_1,param_2);
  if (lVar1 == 0) {
    FUN_1415b7ec4(L"Can\'t activate gameplay camera: no player controller found!",2,0);
    return;
  }
  FUN_147ff9514(param_1,lVar1);
  return;
}



// FUNCTION 147ff9514 FUN_147ff9514 body=906 status=ok
// SIG undefined FUN_147ff9514(void)

void FUN_147ff9514(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((param_2 == 0) || (param_1[0x55] == 0)) {
LAB_147ff954a:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_88);
  }
  lVar5 = FUN_147ff8ae2(param_2);
  if ((lVar5 == 0) || (DAT_14c950c29 == 0)) {
    param_1[0x5a] = lVar5;
    if (lVar5 == 0) goto LAB_147ff954a;
  }
  else {
    FUN_1456cec3c(lVar5);
    param_1[0x5a] = lVar5;
  }
  lVar5 = FUN_147ff9cb4(param_2,1);
  if (lVar5 != 0) {
    FUN_147ff9f6a(*(undefined8 *)(lVar5 + 0x390),param_2);
  }
  if (param_1[0x57] != 0) goto LAB_147ff97c1;
  plVar6 = (longlong *)FUN_14001cc68(0xb80);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14ad2a260;
  plVar7 = plVar6 + 2;
  memset(plVar7,0,0xb70);
  plVar6[2] = (longlong)&PTR_LAB_14ad0ffe0;
  plVar6[6] = 0;
  plVar6[7] = 0;
  plVar6[8] = 0;
  FUN_147fd8372(plVar6 + 10);
  plVar6[0x166] = 0;
  plVar6[0x167] = 0;
  plVar6[0x168] = 0;
  plVar6[0x169] = 0;
  plVar6[0x16a] = 0;
  plVar6[0x16b] = 0;
  plVar6[0x16c] = 0;
  plVar6[0x16d] = 0;
  *(undefined2 *)(plVar6 + 0x16e) = 0;
  plVar6[2] = (longlong)&PTR_LAB_14ad2a280;
  local_58 = plVar7;
  local_50 = plVar6;
  FUN_148011da8(&local_58,plVar7);
  if (plVar6 == (longlong *)0x0) {
    param_1[0x57] = 0x10;
    plVar7 = (longlong *)param_1[0x58];
    if (plVar7 != (longlong *)0x0) {
      param_1[0x58] = 0;
LAB_147ff975d:
      LOCK();
      plVar6 = plVar7 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x000147ff974a:
        if (iVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    param_1[0x57] = (longlong)plVar7;
    plVar7 = (longlong *)param_1[0x58];
    if (plVar6 == plVar7) {
      LOCK();
      plVar7 = plVar6 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar7 = plVar6;
        goto joined_r0x000147ff974a;
      }
    }
    else {
      param_1[0x58] = (longlong)plVar6;
      if (plVar7 != (longlong *)0x0) goto LAB_147ff975d;
    }
  }
  plVar7 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_50 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  if (param_1 != (longlong *)0x0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_1);
  }
  lVar5 = param_1[0x55];
  local_58 = param_1;
  if ((DAT_14c950c29 & 1) != 0) {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar5 = param_1[0x55];
    }
  }
  local_50 = (longlong *)lVar5;
  if ((DAT_14c950c29 & 1) != 0) {
    FUN_1456cec3c(param_2);
  }
  local_48 = param_2;
  FUN_147fd84ca(param_1[0x57]);
LAB_147ff97c1:
  uVar3 = *(undefined8 *)(param_1[0x5a] + 0x28);
  puVar4 = *(undefined8 **)(param_1[0x5a] + 0x30);
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
    UNLOCK();
  }
  local_68 = param_1[0x57];
  plVar7 = (longlong *)param_1[0x58];
  if (plVar7 == (longlong *)0x0) {
    local_60 = (longlong *)0x0;
    FUN_147fe710e(uVar3);
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    local_60 = plVar7;
    FUN_147fe710e(uVar3);
    LOCK();
    plVar6 = plVar7 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  (**(code **)(*param_1 + 0x2a8))(param_1,0);
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar4)(puVar4);
      LOCK();
      piVar1 = (int *)((longlong)puVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_88);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff98d2 FUN_147ff98d2 body=231 status=ok
// SIG undefined FUN_147ff98d2(void)

void FUN_147ff98d2(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar3 = *(longlong *)(param_1 + 0x2d0);
  if ((lVar3 != 0) && (lVar7 = *(longlong *)(param_1 + 0x2b8), lVar7 != 0)) {
    uVar4 = *(undefined8 *)(lVar3 + 0x28);
    puVar5 = *(undefined8 **)(lVar3 + 0x30);
    if (puVar5 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
      UNLOCK();
      lVar7 = *(longlong *)(param_1 + 0x2b8);
    }
    plVar6 = *(longlong **)(param_1 + 0x2c0);
    local_28 = lVar7;
    if (plVar6 == (longlong *)0x0) {
      local_20 = (longlong *)0x0;
      FUN_147fe71aa(uVar4);
    }
    else {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      local_20 = plVar6;
      FUN_147fe71aa(uVar4);
      LOCK();
      plVar2 = plVar6 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    if (puVar5 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar5 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar5)(puVar5);
        LOCK();
        piVar1 = (int *)((longlong)puVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff99d0 FUN_147ff99d0 body=72 status=ok
// SIG undefined FUN_147ff99d0(void)

void FUN_147ff99d0(longlong param_1)

{
  int iVar1;
  
  FUN_1401c3ca6();
  if (((*(byte *)(param_1 + 0x9e) & 0x10) != 0) && (*(char *)(param_1 + 0x2b0) != '\0')) {
    iVar1 = FUN_1417bb91c(param_1);
    if (iVar1 != 1) {
      FUN_147ff94cc(param_1,*(byte *)(param_1 + 0x2b0) - 1);
      return;
    }
  }
  return;
}



// FUNCTION 147ff9a18 FUN_147ff9a18 body=32 status=ok
// SIG undefined FUN_147ff9a18(void)

void FUN_147ff9a18(undefined8 param_1,undefined4 param_2)

{
  FUN_147ff98d2();
  FUN_1448c4a0e(param_1,param_2);
  return;
}



// FUNCTION 147ff9a38 FUN_147ff9a38 body=165 status=ok
// SIG undefined FUN_147ff9a38(void)

void FUN_147ff9a38(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88 [12];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_144a7e84a();
  lVar1 = *(longlong *)(param_1 + 0x2b8);
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x240);
    puVar4 = local_88;
    for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    FUN_147fdbbf0(lVar1 + 0x40);
    *(undefined2 *)(lVar1 + 0xb10) = 0x100;
    if (*(char *)(param_1 + 0x2c8) == '\x01') {
      *(undefined1 *)(*(longlong *)(param_1 + 0x2b8) + 0xb10) = 1;
      *(undefined1 *)(param_1 + 0x2c8) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff9ae4 FUN_147ff9ae4 body=45 status=ok
// SIG undefined FUN_147ff9ae4(void)

void FUN_147ff9ae4(longlong param_1,undefined8 param_2,char param_3)

{
  FUN_144a8c35e();
  if ((param_3 != '\0') && (*(longlong *)(param_1 + 0x2b8) != 0)) {
    *(undefined1 *)(param_1 + 0x2c8) = 1;
  }
  return;
}



// FUNCTION 147ff9b12 FUN_147ff9b12 body=175 status=ok
// SIG undefined FUN_147ff9b12(void)

void FUN_147ff9b12(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  uVar1 = local_18;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar2 = FUN_147ff9cb4(local_18,1);
  if (lVar2 != 0) {
    FUN_147ff9f6a(*(undefined8 *)(lVar2 + 0x390),uVar1);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff9bc8 FUN_147ff9bc8 body=234 status=ok
// SIG undefined FUN_147ff9bc8(void)

void FUN_147ff9bc8(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [36];
  int local_24;
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
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147ff9cb4(local_20,local_24 != 0);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff9cb4 FUN_147ff9cb4 body=403 status=ok
// SIG undefined FUN_147ff9cb4(void)

longlong * FUN_147ff9cb4(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined8 local_a8 [8];
  longlong local_68;
  longlong *local_58;
  longlong local_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar1 = FUN_145b67620();
  lVar5 = *(longlong *)(lVar1 + 0x110);
  if (lVar5 == 0) {
    FUN_140aa6c08(lVar1);
    lVar5 = *(longlong *)(lVar1 + 0x110);
  }
  if (*(char *)(lVar5 + 0x38) != '\x01') {
    plVar3 = (longlong *)0x0;
    goto LAB_147ff9d21;
  }
  if (param_1 == 0) {
LAB_147ff9d06:
    if (param_2 == '\0') {
      plVar3 = (longlong *)0x0;
      FUN_1415b7ec4(L"Can\'t auto-manage active view target: no camera system host found!",2,0);
      goto LAB_147ff9d21;
    }
    FUN_147ff8ae2(param_1);
  }
  else {
    uVar2 = FUN_1458b5980();
    lVar1 = FUN_140277b32(uVar2,param_1,L"GameplayCameraSystemHost",0);
    if (lVar1 == 0) goto LAB_147ff9d06;
  }
  uVar2 = FUN_1459945b2();
  plVar3 = (longlong *)FUN_140277b32(uVar2,param_1,L"AutoSpawnedGameplayCameraSystemActor",0);
  if (param_2 == '\x01' && plVar3 == (longlong *)0x0) {
    FUN_1411371f6(local_a8);
    FUN_1446f470e(&local_b0,L"AutoSpawnedGameplayCameraSystemActor",1);
    local_a8[0] = local_b0;
    uVar2 = FUN_1447210f0(param_1);
    uVar4 = FUN_1459945b2();
    local_b8 = local_a8;
    plVar3 = (longlong *)FUN_141137228(uVar2,uVar4,0,0);
    (**(code **)(*plVar3 + 0x170))(plVar3,0,param_1,0);
    if (plVar3[0x72] != 0) {
      *(undefined1 *)(plVar3[0x72] + 0x2a9) = *(undefined1 *)(lVar5 + 0x39);
    }
    if (local_68 != 0) {
      if (local_58 == (longlong *)0x0) {
        local_58 = local_48;
      }
      (**(code **)(*local_58 + 0x10))();
    }
  }
LAB_147ff9d21:
  if ((local_28 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar3;
}



// FUNCTION 147ff9e78 FUN_147ff9e78 body=234 status=ok
// SIG undefined FUN_147ff9e78(void)

void FUN_147ff9e78(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *(longlong *)(param_1 + 0x2b0);
  if (lVar2 != 0) {
    lVar3 = *(longlong *)(lVar2 + 0x28);
    plVar4 = *(longlong **)(lVar2 + 0x30);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    if (lVar3 != 0) {
      local_2c = param_2;
      FUN_1438db7c4(lVar3);
      FUN_147fe7596(lVar3,param_3);
      if (*(char *)(param_1 + 0x2a9) == '\x01') {
        plVar5 = (longlong *)FUN_14479d2ce(param_1 + 0x2b8);
        if (plVar5 != (longlong *)0x0) {
          local_38 = *(undefined8 *)(lVar3 + 0xb98);
          local_48 = *(undefined4 *)(lVar3 + 0xb88);
          uStack_44 = *(undefined4 *)(lVar3 + 0xb8c);
          uStack_40 = *(undefined4 *)(lVar3 + 0xb90);
          uStack_3c = *(undefined4 *)(lVar3 + 0xb94);
          (**(code **)(*plVar5 + 0x688))(plVar5,&local_48,1);
        }
      }
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff9f6a FUN_147ff9f6a body=319 status=ok
// SIG undefined FUN_147ff9f6a(void)

void FUN_147ff9f6a(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined1 local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != (longlong *)0x0) {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0x57);
    if (plVar2 != param_2 && plVar2 != (longlong *)0x0) {
      FUN_147ffa2d2(param_1,0);
    }
    lVar1 = param_1[0x15];
    if (lVar1 != 0) {
      if (param_1[0x56] == 0) {
        lVar3 = FUN_147ff8ae2(param_2);
        if ((lVar3 == 0) || (DAT_14c950c29 == '\0')) {
          param_1[0x56] = lVar3;
          if (lVar3 == 0) goto LAB_147ffa039;
        }
        else {
          FUN_1456cec3c(lVar3);
          param_1[0x56] = lVar3;
        }
      }
      local_40 = 0;
      local_3c = 1;
      local_38 = 0x40000000;
      (**(code **)(*param_2 + 0xe38))(param_2,lVar1);
      FUN_14485c47a(param_1 + 0x57,param_2);
      (**(code **)(*param_1 + 0x2a8))(param_1,0);
      if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  }
LAB_147ffa039:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
}



// FUNCTION 147ffa0c2 FUN_147ffa0c2 body=156 status=ok
// SIG undefined FUN_147ffa0c2(void)

void FUN_147ffa0c2(undefined8 param_1,longlong param_2)

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
  FUN_147ff9f6a(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ffa160 FUN_147ffa160 body=154 status=ok
// SIG undefined FUN_147ffa160(void)

void FUN_147ffa160(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147ffa1fc(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ffa1fc FUN_147ffa1fc body=56 status=ok
// SIG undefined FUN_147ffa1fc(void)

void FUN_147ffa1fc(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1414fb874();
  if (lVar1 == 0) {
    FUN_1415b7ec4(L"Can\'t activate gameplay camera system: no player controller found!",2,0);
    return;
  }
  FUN_147ff9f6a(param_1,lVar1);
  return;
}



// FUNCTION 147ffa234 FUN_147ffa234 body=156 status=ok
// SIG undefined FUN_147ffa234(void)

void FUN_147ffa234(undefined8 param_1,longlong param_2)

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
  FUN_147ffa2d2(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ffa2d2 FUN_147ffa2d2 body=125 status=ok
// SIG undefined FUN_147ffa2d2(void)

void FUN_147ffa2d2(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)FUN_14479d2ce(param_1 + 0x2b8);
  if (plVar1 != (longlong *)0x0) {
    local_28 = 0;
    local_24 = 1;
    local_20 = 0x40000000;
    (**(code **)(*plVar1 + 0xe38))(plVar1,param_2);
    *(undefined8 *)(param_1 + 0x2b8) = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ffa356 FUN_147ffa356 body=163 status=ok
// SIG undefined FUN_147ffa356(void)

void FUN_147ffa356(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  uVar1 = FUN_147ffa3fa(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ffa3fa FUN_147ffa3fa body=96 status=ok
// SIG undefined FUN_147ffa3fa(void)

bool FUN_147ffa3fa(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  lVar2 = FUN_14479d2ce(param_1 + 0x2b8);
  if ((((lVar2 == param_2 && lVar2 != 0) && (lVar1 = *(longlong *)(param_1 + 0xa8), lVar1 != 0)) &&
      (*(longlong *)(param_1 + 0x2b0) != 0)) && (*(longlong *)(lVar2 + 0x448) != 0)) {
    lVar2 = FUN_1447e6586();
    bVar3 = lVar2 == lVar1;
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}



// FUNCTION 147ffa466 FUN_147ffa466 body=34 status=ok
// SIG undefined FUN_147ffa466(void)

undefined4 FUN_147ffa466(longlong param_1)

{
  undefined4 uVar1;
  
  FUN_1401a0912();
  uVar1 = 0;
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 8);
  }
  return uVar1;
}



// FUNCTION 147ffa488 FUN_147ffa488 body=72 status=ok
// SIG undefined FUN_147ffa488(void)

void FUN_147ffa488(longlong param_1)

{
  int iVar1;
  
  FUN_1401c3ca6();
  if (((*(byte *)(param_1 + 0x9e) & 0x10) != 0) && (*(char *)(param_1 + 0x2a8) != '\0')) {
    iVar1 = FUN_1417bb91c(param_1);
    if (iVar1 != 1) {
      FUN_147ffa1fc(param_1,*(byte *)(param_1 + 0x2a8) - 1);
      return;
    }
  }
  return;
}



// FUNCTION 147ffa4d0 FUN_147ffa4d0 body=34 status=ok
// SIG undefined FUN_147ffa4d0(void)

void FUN_147ffa4d0(undefined8 param_1,undefined4 param_2)

{
  FUN_147ffa2d2(param_1,0);
  FUN_1448c4a0e(param_1,param_2);
  return;
}



// FUNCTION 147ffa4f7 FUN_147ffa4f7 body=183 status=ok
// SIG undefined FUN_147ffa4f7(void)

undefined8 FUN_147ffa4f7(undefined8 param_1,longlong param_2)

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
  uVar1 = FUN_1458b5980();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 0;
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



// FUNCTION 147ffa5b0 FUN_147ffa5b0 body=156 status=ok
// SIG undefined FUN_147ffa5b0(void)

void FUN_147ffa5b0(undefined8 param_1,longlong param_2)

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
  FUN_1438de276(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ffa64e FUN_147ffa64e body=165 status=ok
// SIG undefined FUN_147ffa64e(void)

void FUN_147ffa64e(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1414fb874(param_1,local_1c);
  FUN_1438de276(param_1,uVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ffa70c FUN_147ffa70c body=83 status=ok
// SIG undefined FUN_147ffa70c(void)

void FUN_147ffa70c(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  FUN_1401c3ca6();
  if (((*(byte *)(param_1 + 0x9e) & 0x10) != 0) && (*(char *)(param_1 + 0x128) != '\0')) {
    iVar2 = FUN_1417bb91c(param_1);
    if (iVar2 != 1) {
      uVar1 = FUN_1414fb874(param_1,*(byte *)(param_1 + 0x128) - 1);
      FUN_1438de276(param_1,uVar1);
      return;
    }
  }
  return;
}



// FUNCTION 147ffa760 FUN_147ffa760 body=32 status=ok
// SIG undefined FUN_147ffa760(void)

void FUN_147ffa760(undefined8 param_1,undefined4 param_2)

{
  FUN_1438de126();
  FUN_1401c3216(param_1,param_2);
  return;
}



// FUNCTION 147ffa780 FUN_147ffa780 body=72 status=ok
// SIG undefined FUN_147ffa780(void)

void FUN_147ffa780(longlong param_1)

{
  longlong *plVar1;
  
  FUN_144a7e84a();
  plVar1 = *(longlong **)(param_1 + 0x130);
  if ((plVar1 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x140) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000147ffa7be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x688))(plVar1,*(longlong *)(param_1 + 0x140) + 0xa0,1);
    return;
  }
  return;
}



// FUNCTION 147ffa7c8 FUN_147ffa7c8 body=79 status=ok
// SIG undefined FUN_147ffa7c8(void)

undefined8 * FUN_147ffa7c8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148011f9e(param_1,iVar1);
      FUN_148012000(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147ffa828 FUN_147ffa828 body=38 status=ok
// SIG undefined FUN_147ffa828(void)

undefined8 FUN_147ffa828(undefined8 param_1,undefined8 param_2)

{
  FUN_1446f470e(param_2,L"Plugins",1);
  return param_2;
}



// FUNCTION 147ffa84e FUN_147ffa84e body=342 status=ok
// SIG undefined FUN_147ffa84e(void)

double * FUN_147ffa84e(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  float fVar5;
  
  dVar1 = tan(*param_3 * 0.5 * 0.017453292519943295);
  dVar2 = tan(param_3[1] * 0.5 * 0.017453292519943295);
  dVar3 = param_2[1];
  fVar5 = (float)(*param_2 + -0.5 + *param_2 + -0.5);
  dVar1 = atan((double)ABS(fVar5) * (double)(float)dVar1);
  uVar4 = (uint)((ulonglong)dVar1 >> 0x20);
  if (fVar5 <= 0.0) {
    uVar4 = uVar4 ^ 0x80000000;
  }
  fVar5 = (float)(dVar3 + -0.5 + dVar3 + -0.5);
  dVar3 = atan((double)ABS(fVar5) * (double)(float)dVar2);
  if (fVar5 <= 0.0) {
    dVar3 = -dVar3;
  }
  *param_1 = (double)CONCAT44(uVar4,SUB84(dVar1,0)) * 57.29577951308232;
  param_1[1] = dVar3 * 57.29577951308232;
  return param_1;
}



// FUNCTION 147ffa9a4 FUN_147ffa9a4 body=28 status=ok
// SIG undefined FUN_147ffa9a4(void)

void FUN_147ffa9a4(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0x3ff0000000000000;
  param_1[3] = 0x3ff0000000000000;
  return;
}



// FUNCTION 147ffa9c0 FUN_147ffa9c0 body=82 status=ok
// SIG undefined FUN_147ffa9c0(void)

undefined8 * FUN_147ffa9c0(undefined8 *param_1,undefined8 *param_2)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = 1.0 - (double)param_2[2];
  param_1[3] = 1.0 - (double)param_2[3];
  FUN_147ffaa12();
  return param_1;
}



// FUNCTION 147ffaa12 FUN_147ffaa12 body=91 status=ok
// SIG undefined FUN_147ffaa12(void)

void FUN_147ffaa12(double *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = *param_1;
  dVar2 = param_1[1];
  if (1.0 <= dVar1) {
    dVar1 = 1.0;
  }
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  *param_1 = dVar1;
  if (1.0 <= dVar2) {
    dVar2 = 1.0;
  }
  if (dVar2 <= 0.0) {
    dVar2 = 0.0;
  }
  param_1[1] = dVar2;
  dVar3 = param_1[2];
  if (1.0 <= dVar3) {
    dVar3 = 1.0;
  }
  if (dVar3 <= 0.0) {
    dVar3 = 0.0;
  }
  dVar4 = param_1[3];
  if (1.0 <= dVar4) {
    dVar4 = 1.0;
  }
  if (dVar4 <= 0.0) {
    dVar4 = 0.0;
  }
  if (dVar1 <= dVar3) {
    dVar1 = dVar3;
  }
  param_1[2] = dVar1;
  if (dVar2 <= dVar4) {
    dVar2 = dVar4;
  }
  param_1[3] = dVar2;
  return;
}



// FUNCTION 147ffaa6e FUN_147ffaa6e body=85 status=ok
// SIG undefined FUN_147ffaa6e(void)

void FUN_147ffaa6e(double *param_1,double *param_2)

{
  double dVar1;
  
  dVar1 = *param_1;
  if (*param_2 <= *param_1) {
    dVar1 = *param_2;
  }
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  *param_1 = dVar1;
  dVar1 = param_1[1];
  if (param_2[1] <= param_1[1]) {
    dVar1 = param_2[1];
  }
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  param_1[1] = dVar1;
  dVar1 = param_1[2];
  if (1.0 <= dVar1) {
    dVar1 = 1.0;
  }
  if (dVar1 <= *param_2) {
    dVar1 = *param_2;
  }
  param_1[2] = dVar1;
  dVar1 = param_1[3];
  if (1.0 <= dVar1) {
    dVar1 = 1.0;
  }
  if (dVar1 <= param_2[1]) {
    dVar1 = param_2[1];
  }
  param_1[3] = dVar1;
  return;
}



// FUNCTION 147ffaac4 FUN_147ffaac4 body=86 status=ok
// SIG undefined FUN_147ffaac4(void)

void FUN_147ffaac4(double *param_1,double *param_2)

{
  double dVar1;
  
  dVar1 = *param_1;
  if (*param_2 <= *param_1) {
    dVar1 = *param_2;
  }
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  *param_1 = dVar1;
  dVar1 = param_1[1];
  if (param_2[1] <= param_1[1]) {
    dVar1 = param_2[1];
  }
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  param_1[1] = dVar1;
  dVar1 = param_1[2];
  if (1.0 <= dVar1) {
    dVar1 = 1.0;
  }
  if (dVar1 <= param_2[2]) {
    dVar1 = param_2[2];
  }
  param_1[2] = dVar1;
  dVar1 = param_1[3];
  if (1.0 <= dVar1) {
    dVar1 = 1.0;
  }
  if (dVar1 <= param_2[3]) {
    dVar1 = param_2[3];
  }
  param_1[3] = dVar1;
  return;
}



// FUNCTION 147ffab1a FUN_147ffab1a body=50 status=ok
// SIG undefined FUN_147ffab1a(void)

bool FUN_147ffab1a(double *param_1,double *param_2)

{
  bool bVar1;
  
  if (((*param_2 < *param_1) || (param_1[2] < *param_2)) || (param_2[1] < param_1[1])) {
    bVar1 = false;
  }
  else {
    bVar1 = param_2[1] <= param_1[3];
  }
  return bVar1;
}



// FUNCTION 147ffab4c FUN_147ffab4c body=2313 status=ok
// SIG undefined FUN_147ffab4c(void)

undefined4 *
FUN_147ffab4c(double *param_1,undefined4 *param_2,double *param_3,double *param_4,char param_5)

{
  ulonglong uVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double *pdVar6;
  uint uVar7;
  double *pdVar8;
  double *pdVar9;
  double **ppdVar10;
  double *pdVar11;
  longlong lVar12;
  double *pdVar13;
  double *pdVar14;
  ulonglong uVar15;
  double *pdVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  uint uVar21;
  int iVar22;
  double *pdVar23;
  double *pdVar24;
  double *pdVar25;
  bool bVar26;
  undefined4 uVar27;
  float fVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 auStack_3e8 [32];
  double local_3c8 [4];
  double *local_3a8;
  uint local_3a0;
  uint uStack_39c;
  double *local_398;
  double *local_390;
  undefined4 local_388 [188];
  double local_98;
  double dStack_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_3e8;
  local_3a8 = (double *)0x0;
  local_3a0 = 0;
  uStack_39c = 2;
  dVar2 = *param_4;
  dVar3 = param_4[1];
  if (param_5 == '\0') {
    dVar34 = dVar2 * dVar2 + dVar3 * dVar3;
    if (dVar34 <= 9.99999993922529e-09) goto LAB_147ffadb7;
    dVar34 = 1.0 / SQRT(dVar34);
    dVar3 = dVar3 * dVar34;
    dVar2 = dVar2 * dVar34;
  }
  if ((dVar3 != 0.0) || (NAN(dVar3))) {
    dVar34 = (param_1[1] - param_3[1]) * (dVar2 / dVar3) + *param_3;
    uVar21 = 0;
    if ((*param_1 <= dVar34) && (uVar21 = 0, dVar34 <= param_1[2])) {
      local_3a0 = 1;
      uStack_39c = 2;
      local_3c8[0] = dVar34;
      local_3c8[1] = param_1[1];
      uVar21 = 1;
    }
    dVar34 = param_1[3];
    dVar35 = (dVar34 - param_3[1]) * (dVar2 / dVar3) + *param_3;
    uVar7 = uVar21;
    if ((*param_1 <= dVar35) && (dVar35 <= param_1[2])) {
      uVar7 = uVar21 + 1;
      local_3a0 = uVar7;
      uStack_39c = 2;
      *(double *)((longlong)local_3c8 + (ulonglong)(uVar21 << 4)) = dVar35;
      *(double *)((longlong)local_3c8 + (ulonglong)(uVar21 << 4) + 8) = dVar34;
    }
  }
  else {
    uVar7 = 0;
  }
  uStack_39c = 2;
  if ((dVar2 != 0.0) || (NAN(dVar2))) {
    dVar34 = *param_1;
    dVar35 = param_1[1];
    uVar27 = SUB84(dVar35,0);
    uVar29 = (undefined4)((ulonglong)dVar35 >> 0x20);
    dVar33 = *param_3;
    dVar32 = param_3[1];
    dVar5 = (dVar34 - dVar33) * (dVar3 / dVar2) + dVar32;
    if ((dVar35 <= dVar5) && (dVar5 <= param_1[3])) {
      local_3a0 = uVar7 + 1;
      uStack_39c = 2;
      if (uVar7 < 2) {
        pdVar8 = (double *)0x0;
      }
      else {
        FUN_1480122ea(local_3c8);
        pdVar8 = local_3a8;
      }
      pdVar9 = local_3c8;
      if (pdVar8 != (double *)0x0) {
        pdVar9 = pdVar8;
      }
      *(double *)((longlong)pdVar9 + (ulonglong)(uVar7 << 4)) = dVar34;
      *(double *)((longlong)pdVar9 + (ulonglong)(uVar7 << 4) + 8) = dVar5;
      dVar33 = *param_3;
      dVar32 = param_3[1];
      uVar27 = SUB84(param_1[1],0);
      uVar29 = (undefined4)((ulonglong)param_1[1] >> 0x20);
    }
    dVar34 = param_1[2];
    dVar32 = (dVar34 - dVar33) * (dVar3 / dVar2) + dVar32;
    if (((double)CONCAT44(uVar29,uVar27) <= dVar32) && (dVar32 <= param_1[3])) {
      lVar12 = (longlong)(int)local_3a0;
      local_3a0 = local_3a0 + 1;
      if (uStack_39c < local_3a0) {
        FUN_1480122ea(local_3c8);
      }
      pdVar8 = local_3a8;
      if (local_3a8 == (double *)0x0) {
        pdVar8 = local_3c8;
      }
      pdVar8[lVar12 * 2] = dVar34;
      pdVar8[lVar12 * 2 + 1] = dVar32;
    }
  }
LAB_147ffadb7:
  uVar21 = local_3a0;
  uVar30 = DAT_14c8463f8._4_4_;
  uVar29 = (undefined4)DAT_14c8463f8;
  uVar27 = DAT_14c8463f0._4_4_;
  lVar12 = (longlong)(int)local_3a0;
  if (lVar12 < 1) {
    *param_2 = (undefined4)DAT_14c8463f0;
    param_2[1] = uVar27;
    param_2[2] = uVar29;
    param_2[3] = uVar30;
  }
  else {
    if (local_3a0 != 1) {
      dVar2 = *param_3;
      dVar3 = param_3[1];
      pdVar8 = local_3c8;
      if (local_3a8 != (double *)0x0) {
        pdVar8 = local_3a8;
      }
      memset(local_388,0,0x2f0);
      local_390 = pdVar8 + lVar12 * 2 + -2;
      local_398 = pdVar8;
      fVar28 = logf((float)(int)uVar21);
      local_388[0] = (int)(longlong)(fVar28 + fVar28);
      ppdVar10 = &local_398;
      do {
        pdVar9 = *ppdVar10;
        pdVar14 = ppdVar10[1];
        iVar17 = *(int *)(ppdVar10 + 2);
        iVar22 = (int)((ulonglong)((longlong)pdVar14 - (longlong)pdVar9) >> 4);
        uVar21 = iVar22 + 1;
        pdVar13 = pdVar9;
        pdVar8 = pdVar14;
        if (iVar17 != 0) {
LAB_147ffae5c:
          if (8 < (int)uVar21) {
            dVar34 = pdVar9[(ulonglong)(uVar21 >> 1) * 2];
            dVar35 = (pdVar9 + (ulonglong)(uVar21 >> 1) * 2)[1];
            dVar33 = pdVar9[1];
            pdVar9[(ulonglong)(uVar21 >> 1) * 2] = *pdVar9;
            (pdVar9 + (ulonglong)(uVar21 >> 1) * 2)[1] = dVar33;
            *pdVar9 = dVar34;
            pdVar9[1] = dVar35;
            pdVar23 = pdVar8 + 2;
            pdVar11 = pdVar9;
            do {
              pdVar6 = pdVar11 + 2;
              pdVar16 = pdVar11 + 2;
              do {
                pdVar25 = pdVar16;
                pdVar11 = pdVar6;
                if (pdVar8 < pdVar11) break;
                pdVar6 = pdVar11 + 2;
                pdVar16 = pdVar25 + 2;
              } while ((pdVar11[1] - dVar3) * (pdVar11[1] - dVar3) +
                       (*pdVar11 - dVar2) * (*pdVar11 - dVar2) <=
                       (pdVar9[1] - dVar3) * (pdVar9[1] - dVar3) +
                       (*pdVar9 - dVar2) * (*pdVar9 - dVar2));
              pdVar6 = pdVar23 + -4;
              do {
                pdVar16 = pdVar23;
                pdVar24 = pdVar6;
                pdVar23 = pdVar16 + -2;
                if (pdVar23 <= pdVar9) break;
                pdVar6 = pdVar24 + -2;
              } while ((pdVar9[1] - dVar3) * (pdVar9[1] - dVar3) +
                       (*pdVar9 - dVar2) * (*pdVar9 - dVar2) <=
                       (pdVar16[-1] - dVar3) * (pdVar16[-1] - dVar3) +
                       (*pdVar23 - dVar2) * (*pdVar23 - dVar2));
              if (pdVar23 < pdVar11) goto LAB_147ffaf81;
              dVar34 = *pdVar11;
              dVar35 = pdVar11[1];
              dVar33 = pdVar16[-1];
              *pdVar11 = *pdVar23;
              pdVar11[1] = dVar33;
              *pdVar23 = dVar34;
              pdVar16[-1] = dVar35;
            } while( true );
          }
          if (pdVar9 < pdVar8) {
            do {
              pdVar14 = pdVar9;
              if (pdVar9 + 2 <= pdVar8) {
                uVar27 = SUB84(*pdVar9,0);
                uVar29 = (undefined4)((ulonglong)*pdVar9 >> 0x20);
                uVar30 = 0;
                uVar31 = 0;
                pdVar13 = pdVar9 + 2;
                do {
                  dVar34 = *pdVar13 - dVar2;
                  dVar34 = (pdVar13[1] - dVar3) * (pdVar13[1] - dVar3) + dVar34 * dVar34;
                  dVar35 = (double)CONCAT44(uVar29,uVar27) - dVar2;
                  dVar35 = (pdVar14[1] - dVar3) * (pdVar14[1] - dVar3) + dVar35 * dVar35;
                  uVar15 = -(ulonglong)(dVar35 < dVar34);
                  auVar36._0_8_ = ~uVar15 & CONCAT44(uVar29,uVar27);
                  auVar36._12_4_ = uVar31;
                  auVar36._8_4_ = uVar30;
                  if (dVar35 < dVar34) {
                    pdVar14 = pdVar13;
                  }
                  auVar4._8_8_ = 0;
                  auVar4._0_8_ = (ulonglong)*pdVar13 & uVar15;
                  auVar36 = auVar36 | auVar4;
                  pdVar13 = pdVar13 + 2;
                  uVar27 = auVar36._0_4_;
                  uVar29 = auVar36._4_4_;
                  uVar30 = auVar36._8_4_;
                  uVar31 = auVar36._12_4_;
                } while (pdVar13 <= pdVar8);
              }
              local_98 = *pdVar14;
              dStack_90 = pdVar14[1];
              dVar34 = pdVar8[1];
              *pdVar14 = *pdVar8;
              pdVar14[1] = dVar34;
              *pdVar8 = local_98;
              pdVar8[1] = dStack_90;
              pdVar8 = pdVar8 + -2;
            } while (pdVar9 < pdVar8);
          }
          goto LAB_147ffb39b;
        }
LAB_147ffb02c:
        if (uVar21 != 0) {
          iVar17 = (iVar22 - (iVar22 + -1 >> 0x1f)) + -1 >> 1;
          iVar22 = iVar17;
joined_r0x000147ffb053:
          do {
            iVar19 = iVar17 * 2 + 1;
            if (iVar19 < (int)uVar21) {
              iVar18 = iVar17 * 2 + 2;
              if ((iVar18 < (int)uVar21) &&
                 ((pdVar9[(longlong)iVar19 * 2 + 1] - dVar3) *
                  (pdVar9[(longlong)iVar19 * 2 + 1] - dVar3) +
                  (pdVar9[(longlong)iVar19 * 2] - dVar2) * (pdVar9[(longlong)iVar19 * 2] - dVar2) <=
                  (pdVar9[(longlong)iVar18 * 2 + 1] - dVar3) *
                  (pdVar9[(longlong)iVar18 * 2 + 1] - dVar3) +
                  (pdVar9[(longlong)iVar18 * 2] - dVar2) * (pdVar9[(longlong)iVar18 * 2] - dVar2)))
              {
                iVar19 = iVar18;
              }
              lVar12 = (longlong)iVar17;
              lVar20 = (longlong)iVar19;
              if ((pdVar9[lVar12 * 2 + 1] - dVar3) * (pdVar9[lVar12 * 2 + 1] - dVar3) +
                  (pdVar9[lVar12 * 2] - dVar2) * (pdVar9[lVar12 * 2] - dVar2) <
                  (pdVar9[lVar20 * 2 + 1] - dVar3) * (pdVar9[lVar20 * 2 + 1] - dVar3) +
                  (pdVar9[lVar20 * 2] - dVar2) * (pdVar9[lVar20 * 2] - dVar2)) {
                pdVar8 = pdVar9 + lVar12 * 2;
                pdVar14 = pdVar9 + lVar20 * 2;
                local_98 = *pdVar8;
                dStack_90 = pdVar8[1];
                dVar34 = pdVar14[1];
                *pdVar8 = *pdVar14;
                pdVar8[1] = dVar34;
                *pdVar14 = local_98;
                pdVar14[1] = dStack_90;
                iVar17 = iVar19;
                goto joined_r0x000147ffb053;
              }
            }
            bVar26 = iVar22 != 0;
            iVar17 = iVar22 + -1;
            iVar22 = iVar17;
          } while (bVar26);
          if (1 < (int)uVar21) {
            uVar15 = (ulonglong)uVar21 - 1;
            local_98 = *pdVar9;
            dStack_90 = pdVar9[1];
            dVar34 = (pdVar9 + uVar15 * 2)[1];
            *pdVar9 = pdVar9[uVar15 * 2];
            pdVar9[1] = dVar34;
            pdVar9[uVar15 * 2] = local_98;
            (pdVar9 + uVar15 * 2)[1] = dStack_90;
            if (uVar21 != 2) {
              do {
                iVar17 = 0;
                iVar19 = 1;
                iVar22 = 0;
                do {
                  lVar12 = (longlong)(iVar17 + 2);
                  iVar18 = iVar19;
                  if ((lVar12 < (longlong)uVar15) &&
                     ((pdVar9[(longlong)iVar19 * 2 + 1] - dVar3) *
                      (pdVar9[(longlong)iVar19 * 2 + 1] - dVar3) +
                      (pdVar9[(longlong)iVar19 * 2] - dVar2) *
                      (pdVar9[(longlong)iVar19 * 2] - dVar2) <=
                      (pdVar9[lVar12 * 2 + 1] - dVar3) * (pdVar9[lVar12 * 2 + 1] - dVar3) +
                      (pdVar9[lVar12 * 2] - dVar2) * (pdVar9[lVar12 * 2] - dVar2))) {
                    iVar18 = iVar17 + 2;
                  }
                  lVar12 = (longlong)iVar22;
                  lVar20 = (longlong)iVar18;
                  if ((pdVar9[lVar20 * 2 + 1] - dVar3) * (pdVar9[lVar20 * 2 + 1] - dVar3) +
                      (pdVar9[lVar20 * 2] - dVar2) * (pdVar9[lVar20 * 2] - dVar2) <=
                      (pdVar9[lVar12 * 2 + 1] - dVar3) * (pdVar9[lVar12 * 2 + 1] - dVar3) +
                      (pdVar9[lVar12 * 2] - dVar2) * (pdVar9[lVar12 * 2] - dVar2)) break;
                  pdVar8 = pdVar9 + lVar12 * 2;
                  pdVar14 = pdVar9 + lVar20 * 2;
                  dVar34 = *pdVar8;
                  dVar35 = pdVar8[1];
                  dVar33 = pdVar14[1];
                  *pdVar8 = *pdVar14;
                  pdVar8[1] = dVar33;
                  *pdVar14 = dVar34;
                  pdVar14[1] = dVar35;
                  iVar17 = iVar18 * 2;
                  iVar19 = iVar18 * 2 + 1;
                  iVar22 = iVar18;
                } while ((longlong)iVar19 < (longlong)uVar15);
                uVar1 = uVar15 - 1;
                local_98 = *pdVar9;
                dStack_90 = pdVar9[1];
                dVar34 = (pdVar9 + uVar1 * 2)[1];
                *pdVar9 = pdVar9[uVar1 * 2];
                pdVar9[1] = dVar34;
                pdVar9[uVar1 * 2] = local_98;
                (pdVar9 + uVar1 * 2)[1] = dStack_90;
                bVar26 = 2 < uVar15;
                uVar15 = uVar1;
              } while (bVar26);
            }
          }
        }
LAB_147ffb39b:
        ppdVar10 = ppdVar10 + -3;
      } while (&local_398 <= ppdVar10);
    }
    pdVar8 = local_3c8;
    if (local_3a8 != (double *)0x0) {
      pdVar8 = local_3a8;
    }
    uVar27 = *(undefined4 *)((longlong)pdVar8 + 4);
    uVar29 = *(undefined4 *)(pdVar8 + 1);
    uVar30 = *(undefined4 *)((longlong)pdVar8 + 0xc);
    *param_2 = *(undefined4 *)pdVar8;
    param_2[1] = uVar27;
    param_2[2] = uVar29;
    param_2[3] = uVar30;
  }
  if (local_3a8 != (double *)0x0) {
    FUN_1400020a8();
  }
  if ((local_80 ^ (ulonglong)auStack_3e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
LAB_147ffaf81:
  local_98 = *pdVar9;
  dStack_90 = pdVar9[1];
  dVar34 = pdVar16[-1];
  *pdVar9 = *pdVar23;
  pdVar9[1] = dVar34;
  *pdVar23 = local_98;
  pdVar16[-1] = dStack_90;
  iVar17 = iVar17 + -1;
  pdVar16 = pdVar16 + -4;
  if ((longlong)pdVar24 - (longlong)pdVar13 < (longlong)pdVar14 - (longlong)pdVar25) {
    if (pdVar11 < pdVar8) {
      *ppdVar10 = pdVar11;
      ppdVar10[1] = pdVar8;
      *(int *)(ppdVar10 + 2) = iVar17;
      ppdVar10 = ppdVar10 + 3;
    }
    pdVar25 = pdVar9;
    pdVar14 = pdVar24;
    if (pdVar23 <= pdVar9 + 2) goto LAB_147ffb39b;
  }
  else {
    if (pdVar9 + 2 < pdVar23) {
      *ppdVar10 = pdVar9;
      ppdVar10[1] = pdVar16;
      *(int *)(ppdVar10 + 2) = iVar17;
      ppdVar10 = ppdVar10 + 3;
    }
    pdVar9 = pdVar11;
    pdVar16 = pdVar8;
    pdVar14 = pdVar8;
    if (pdVar8 <= pdVar11) goto LAB_147ffb39b;
  }
  iVar22 = (int)((ulonglong)((longlong)pdVar14 - (longlong)pdVar25) >> 4);
  uVar21 = iVar22 + 1;
  pdVar13 = pdVar25;
  pdVar8 = pdVar16;
  if (iVar17 == 0) goto LAB_147ffb02c;
  goto LAB_147ffae5c;
}



// FUNCTION 147ffb46a FUN_147ffb46a body=38 status=ok
// SIG undefined FUN_147ffb46a(void)

undefined8 FUN_147ffb46a(undefined8 param_1,int param_2)

{
  FUN_148011d04();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ffb4a8 FUN_147ffb4a8 body=54 status=ok
// SIG undefined FUN_147ffb4a8(void)

longlong FUN_147ffb4a8(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
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



// FUNCTION 147ffb4ea FUN_147ffb4ea body=45 status=ok
// SIG undefined FUN_147ffb4ea(void)

longlong FUN_147ffb4ea(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ffb528 FUN_147ffb528 body=45 status=ok
// SIG undefined FUN_147ffb528(void)

longlong FUN_147ffb528(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_146019c24(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ffb55c FUN_147ffb55c body=45 status=ok
// SIG undefined FUN_147ffb55c(void)

longlong FUN_147ffb55c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_146019c24(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ffb598 FUN_147ffb598 body=45 status=ok
// SIG undefined FUN_147ffb598(void)

longlong FUN_147ffb598(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_146019c24(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ffb5cc FUN_147ffb5cc body=45 status=ok
// SIG undefined FUN_147ffb5cc(void)

longlong FUN_147ffb5cc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x40;
  FUN_146019c24(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ffb606 FUN_147ffb606 body=45 status=ok
// SIG undefined FUN_147ffb606(void)

longlong FUN_147ffb606(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ffb66e FUN_147ffb66e body=42 status=ok
// SIG undefined FUN_147ffb66e(void)

undefined8 FUN_147ffb66e(void)

{
  FUN_140033559("..\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core/CameraVariableAssets.h"
                ,0x1e,L"Pure virtual not implemented (%s)",L"UCameraVariableAsset::GetVariableType")
  ;
  return 0;
}



// FUNCTION 147ffb698 FUN_147ffb698 body=42 status=ok
// SIG undefined FUN_147ffb698(void)

undefined8 FUN_147ffb698(void)

{
  FUN_140033559("..\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core/CameraVariableAssets.h"
                ,0x1f,L"Pure virtual not implemented (%s)",
                L"UCameraVariableAsset::GetDefaultValuePtr");
  return 0;
}



// FUNCTION 147ffb768 FUN_147ffb768 body=45 status=ok
// SIG undefined FUN_147ffb768(void)

longlong FUN_147ffb768(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ffb796 FUN_147ffb796 body=45 status=ok
// SIG undefined FUN_147ffb796(void)

longlong FUN_147ffb796(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ffb7d6 FUN_147ffb7d6 body=45 status=ok
// SIG undefined FUN_147ffb7d6(void)

longlong FUN_147ffb7d6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145d5d698(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ffb804 FUN_147ffb804 body=45 status=ok
// SIG undefined FUN_147ffb804(void)

longlong FUN_147ffb804(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145ae79d6(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ffb832 FUN_147ffb832 body=45 status=ok
// SIG undefined FUN_147ffb832(void)

longlong FUN_147ffb832(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e79a(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ffb860 FUN_147ffb860 body=45 status=ok
// SIG undefined FUN_147ffb860(void)

longlong FUN_147ffb860(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145d5d736(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ffb956 FUN_147ffb956 body=68 status=ok
// SIG undefined FUN_147ffb956(void)

undefined8 FUN_147ffb956(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 147ffb9c2 FUN_147ffb9c2 body=59 status=ok
// SIG undefined FUN_147ffb9c2(void)

undefined8 FUN_147ffb9c2(longlong *param_1)

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



// FUNCTION 147ffba96 FUN_147ffba96 body=48 status=ok
// SIG undefined FUN_147ffba96(void)

void FUN_147ffba96(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147ffbadc FUN_147ffbadc body=94 status=ok
// SIG undefined FUN_147ffbadc(void)

undefined8 FUN_147ffbadc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined4 *)(param_2 + lVar1) = *(undefined4 *)(param_3 + lVar1);
      FUN_147fd6846();
      FUN_147fd68a0(param_2 + lVar1 + 0x18,param_3 + lVar1 + 0x18);
      lVar1 = lVar1 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147ffbb3a FUN_147ffbb3a body=63 status=ok
// SIG undefined FUN_147ffbb3a(void)

undefined8
FUN_147ffbb3a(undefined8 param_1,short *param_2,short *param_3,undefined8 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if ((*param_2 == *param_3) && (param_2[1] == param_3[1])) {
    uVar1 = FUN_147fdd752(param_2 + 4,param_3 + 4);
  }
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 147ffbb96 FUN_147ffbb96 body=59 status=ok
// SIG undefined FUN_147ffbb96(void)

undefined8 FUN_147ffbb96(longlong *param_1)

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



// FUNCTION 147ffbc34 FUN_147ffbc34 body=52 status=ok
// SIG undefined FUN_147ffbc34(void)

void FUN_147ffbc34(longlong param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 147ffbc80 FUN_147ffbc80 body=47 status=ok
// SIG undefined FUN_147ffbc80(void)

void FUN_147ffbc80(undefined8 param_1,longlong *param_2)

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



// FUNCTION 147ffbcc6 FUN_147ffbcc6 body=87 status=ok
// SIG undefined FUN_147ffbcc6(void)

undefined1 FUN_147ffbcc6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_147ffbde2(param_2 + 0x10,param_3 + 0x10);
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 147ffbd46 FUN_147ffbd46 body=59 status=ok
// SIG undefined FUN_147ffbd46(void)

undefined8 FUN_147ffbd46(longlong *param_1)

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



// FUNCTION 147ffbde2 FUN_147ffbde2 body=79 status=ok
// SIG undefined FUN_147ffbde2(void)

undefined8 * FUN_147ffbde2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147ffbe32(param_1,iVar1);
      FUN_147ffbe94(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147ffbe32 FUN_147ffbe32 body=98 status=ok
// SIG undefined FUN_147ffbe32(void)

void FUN_147ffbe32(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147ffbe94 FUN_147ffbe94 body=82 status=ok
// SIG undefined FUN_147ffbe94(void)

void FUN_147ffbe94(longlong param_1,longlong param_2,int param_3)

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



// FUNCTION 147ffbee8 FUN_147ffbee8 body=51 status=ok
// SIG undefined FUN_147ffbee8(void)

void FUN_147ffbee8(longlong *param_1)

{
  if ((char)param_1[4] == '\x01') {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}



// FUNCTION 147ffbf1c FUN_147ffbf1c body=205 status=ok
// SIG undefined FUN_147ffbf1c(void)

int * FUN_147ffbf1c(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  longlong lVar6;
  longlong lVar7;
  int *piVar8;
  
  piVar4 = (int *)*param_1;
  iVar1 = *(int *)(param_1 + 1);
  lVar6 = (longlong)iVar1;
  if (lVar6 != 0) {
    lVar7 = lVar6 * 0x48;
    piVar8 = piVar4;
    do {
      if ((((*piVar8 == *(int *)(param_2 + 0x50)) && (piVar8[1] == *(int *)(param_2 + 0x54))) &&
          (piVar8[2] == *(int *)(param_2 + 0x58))) && (piVar8[3] == *(int *)(param_2 + 0x5c))) {
        if (piVar8 != (int *)0x0) {
          return piVar8;
        }
        break;
      }
      piVar8 = piVar8 + 0x12;
      lVar7 = lVar7 + -0x48;
    } while (lVar7 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147ffbfea(param_1,iVar1);
    piVar4 = (int *)*param_1;
  }
  piVar8 = piVar4 + lVar6 * 0x12;
  piVar5 = piVar8 + 8;
  piVar8[0xc] = 0;
  piVar8[0xd] = 0;
  piVar8[0xe] = 0;
  piVar8[0xf] = 0;
  piVar5[0] = 0;
  piVar5[1] = 0;
  piVar8[10] = 0;
  piVar8[0xb] = 0;
  piVar8[4] = 0;
  piVar8[5] = 0;
  piVar8[6] = 0;
  piVar8[7] = 0;
  piVar8[0] = 0;
  piVar8[1] = 0;
  piVar8[2] = 0;
  piVar8[3] = 0;
  piVar8[0x10] = 0;
  piVar8[0x11] = 0;
  iVar1 = *(int *)(param_2 + 0x54);
  iVar2 = *(int *)(param_2 + 0x58);
  iVar3 = *(int *)(param_2 + 0x5c);
  *piVar8 = *(int *)(param_2 + 0x50);
  piVar8[1] = iVar1;
  piVar8[2] = iVar2;
  piVar8[3] = iVar3;
  FUN_144a787a6(piVar5,param_2 + 0x40);
  return piVar4 + lVar6 * 0x12;
}



// FUNCTION 147ffbfea FUN_147ffbfea body=147 status=ok
// SIG undefined FUN_147ffbfea(void)

void FUN_147ffbfea(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x48,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x48)) {
      uVar5 = uVar4 / 0x48 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x48,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147ffc07e FUN_147ffc07e body=205 status=ok
// SIG undefined FUN_147ffc07e(void)

int * FUN_147ffc07e(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  longlong lVar6;
  longlong lVar7;
  int *piVar8;
  
  piVar4 = (int *)*param_1;
  iVar1 = *(int *)(param_1 + 1);
  lVar6 = (longlong)iVar1;
  if (lVar6 != 0) {
    lVar7 = lVar6 * 0x48;
    piVar8 = piVar4;
    do {
      if ((((*piVar8 == *(int *)(param_2 + 0x50)) && (piVar8[1] == *(int *)(param_2 + 0x54))) &&
          (piVar8[2] == *(int *)(param_2 + 0x58))) && (piVar8[3] == *(int *)(param_2 + 0x5c))) {
        if (piVar8 != (int *)0x0) {
          return piVar8;
        }
        break;
      }
      piVar8 = piVar8 + 0x12;
      lVar7 = lVar7 + -0x48;
    } while (lVar7 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147ffc14c(param_1,iVar1);
    piVar4 = (int *)*param_1;
  }
  piVar8 = piVar4 + lVar6 * 0x12;
  piVar5 = piVar8 + 8;
  piVar8[0xc] = 0;
  piVar8[0xd] = 0;
  piVar8[0xe] = 0;
  piVar8[0xf] = 0;
  piVar5[0] = 0;
  piVar5[1] = 0;
  piVar8[10] = 0;
  piVar8[0xb] = 0;
  piVar8[4] = 0;
  piVar8[5] = 0;
  piVar8[6] = 0;
  piVar8[7] = 0;
  piVar8[0] = 0;
  piVar8[1] = 0;
  piVar8[2] = 0;
  piVar8[3] = 0;
  piVar8[0x10] = 0;
  piVar8[0x11] = 0;
  iVar1 = *(int *)(param_2 + 0x54);
  iVar2 = *(int *)(param_2 + 0x58);
  iVar3 = *(int *)(param_2 + 0x5c);
  *piVar8 = *(int *)(param_2 + 0x50);
  piVar8[1] = iVar1;
  piVar8[2] = iVar2;
  piVar8[3] = iVar3;
  FUN_144a787a6(piVar5,param_2 + 0x40);
  return piVar4 + lVar6 * 0x12;
}



// FUNCTION 147ffc14c FUN_147ffc14c body=147 status=ok
// SIG undefined FUN_147ffc14c(void)

void FUN_147ffc14c(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x48,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x48)) {
      uVar5 = uVar4 / 0x48 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x48,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147ffc1e0 FUN_147ffc1e0 body=205 status=ok
// SIG undefined FUN_147ffc1e0(void)

int * FUN_147ffc1e0(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  longlong lVar6;
  longlong lVar7;
  int *piVar8;
  
  piVar4 = (int *)*param_2;
  iVar1 = *(int *)(param_2 + 1);
  lVar6 = (longlong)iVar1;
  if (lVar6 != 0) {
    lVar7 = lVar6 * 0x48;
    piVar8 = piVar4;
    do {
      if ((((*piVar8 == *(int *)(param_3 + 0x50)) && (piVar8[1] == *(int *)(param_3 + 0x54))) &&
          (piVar8[2] == *(int *)(param_3 + 0x58))) && (piVar8[3] == *(int *)(param_3 + 0x5c))) {
        if (piVar8 != (int *)0x0) {
          return piVar8;
        }
        break;
      }
      piVar8 = piVar8 + 0x12;
      lVar7 = lVar7 + -0x48;
    } while (lVar7 != 0);
  }
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_147ffc2ae(param_2,iVar1);
    piVar4 = (int *)*param_2;
  }
  piVar8 = piVar4 + lVar6 * 0x12;
  piVar5 = piVar8 + 8;
  piVar8[0xc] = 0;
  piVar8[0xd] = 0;
  piVar8[0xe] = 0;
  piVar8[0xf] = 0;
  piVar5[0] = 0;
  piVar5[1] = 0;
  piVar8[10] = 0;
  piVar8[0xb] = 0;
  piVar8[4] = 0;
  piVar8[5] = 0;
  piVar8[6] = 0;
  piVar8[7] = 0;
  piVar8[0] = 0;
  piVar8[1] = 0;
  piVar8[2] = 0;
  piVar8[3] = 0;
  piVar8[0x10] = 0;
  piVar8[0x11] = 0;
  iVar1 = *(int *)(param_3 + 0x54);
  iVar2 = *(int *)(param_3 + 0x58);
  iVar3 = *(int *)(param_3 + 0x5c);
  *piVar8 = *(int *)(param_3 + 0x50);
  piVar8[1] = iVar1;
  piVar8[2] = iVar2;
  piVar8[3] = iVar3;
  FUN_144a787a6(piVar5,param_3 + 0x40);
  return piVar4 + lVar6 * 0x12;
}



// FUNCTION 147ffc2ae FUN_147ffc2ae body=147 status=ok
// SIG undefined FUN_147ffc2ae(void)

void FUN_147ffc2ae(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x48,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x48)) {
      uVar5 = uVar4 / 0x48 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x48,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147ffc342 FUN_147ffc342 body=205 status=ok
// SIG undefined FUN_147ffc342(void)

int * FUN_147ffc342(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  longlong lVar6;
  longlong lVar7;
  int *piVar8;
  
  piVar4 = (int *)*param_1;
  iVar1 = *(int *)(param_1 + 1);
  lVar6 = (longlong)iVar1;
  if (lVar6 != 0) {
    lVar7 = lVar6 * 0x48;
    piVar8 = piVar4;
    do {
      if ((((*piVar8 == *(int *)(param_2 + 0x50)) && (piVar8[1] == *(int *)(param_2 + 0x54))) &&
          (piVar8[2] == *(int *)(param_2 + 0x58))) && (piVar8[3] == *(int *)(param_2 + 0x5c))) {
        if (piVar8 != (int *)0x0) {
          return piVar8;
        }
        break;
      }
      piVar8 = piVar8 + 0x12;
      lVar7 = lVar7 + -0x48;
    } while (lVar7 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147ffc410(param_1,iVar1);
    piVar4 = (int *)*param_1;
  }
  piVar8 = piVar4 + lVar6 * 0x12;
  piVar5 = piVar8 + 8;
  piVar8[0xc] = 0;
  piVar8[0xd] = 0;
  piVar8[0xe] = 0;
  piVar8[0xf] = 0;
  piVar5[0] = 0;
  piVar5[1] = 0;
  piVar8[10] = 0;
  piVar8[0xb] = 0;
  piVar8[4] = 0;
  piVar8[5] = 0;
  piVar8[6] = 0;
  piVar8[7] = 0;
  piVar8[0] = 0;
  piVar8[1] = 0;
  piVar8[2] = 0;
  piVar8[3] = 0;
  piVar8[0x10] = 0;
  piVar8[0x11] = 0;
  iVar1 = *(int *)(param_2 + 0x54);
  iVar2 = *(int *)(param_2 + 0x58);
  iVar3 = *(int *)(param_2 + 0x5c);
  *piVar8 = *(int *)(param_2 + 0x50);
  piVar8[1] = iVar1;
  piVar8[2] = iVar2;
  piVar8[3] = iVar3;
  FUN_144a787a6(piVar5,param_2 + 0x40);
  return piVar4 + lVar6 * 0x12;
}



// FUNCTION 147ffc410 FUN_147ffc410 body=147 status=ok
// SIG undefined FUN_147ffc410(void)

void FUN_147ffc410(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x48,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x48)) {
      uVar5 = uVar4 / 0x48 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x48,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147ffc4a4 FUN_147ffc4a4 body=205 status=ok
// SIG undefined FUN_147ffc4a4(void)

int * FUN_147ffc4a4(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  longlong lVar6;
  longlong lVar7;
  int *piVar8;
  
  piVar4 = (int *)*param_1;
  iVar1 = *(int *)(param_1 + 1);
  lVar6 = (longlong)iVar1;
  if (lVar6 != 0) {
    lVar7 = lVar6 * 0x48;
    piVar8 = piVar4;
    do {
      if ((((*piVar8 == *(int *)(param_2 + 0x50)) && (piVar8[1] == *(int *)(param_2 + 0x54))) &&
          (piVar8[2] == *(int *)(param_2 + 0x58))) && (piVar8[3] == *(int *)(param_2 + 0x5c))) {
        if (piVar8 != (int *)0x0) {
          return piVar8;
        }
        break;
      }
      piVar8 = piVar8 + 0x12;
      lVar7 = lVar7 + -0x48;
    } while (lVar7 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147ffc572(param_1,iVar1);
    piVar4 = (int *)*param_1;
  }
  piVar8 = piVar4 + lVar6 * 0x12;
  piVar5 = piVar8 + 8;
  piVar8[0xc] = 0;
  piVar8[0xd] = 0;
  piVar8[0xe] = 0;
  piVar8[0xf] = 0;
  piVar5[0] = 0;
  piVar5[1] = 0;
  piVar8[10] = 0;
  piVar8[0xb] = 0;
  piVar8[4] = 0;
  piVar8[5] = 0;
  piVar8[6] = 0;
  piVar8[7] = 0;
  piVar8[0] = 0;
  piVar8[1] = 0;
  piVar8[2] = 0;
  piVar8[3] = 0;
  piVar8[0x10] = 0;
  piVar8[0x11] = 0;
  iVar1 = *(int *)(param_2 + 0x54);
  iVar2 = *(int *)(param_2 + 0x58);
  iVar3 = *(int *)(param_2 + 0x5c);
  *piVar8 = *(int *)(param_2 + 0x50);
  piVar8[1] = iVar1;
  piVar8[2] = iVar2;
  piVar8[3] = iVar3;
  FUN_144a787a6(piVar5,param_2 + 0x40);
  return piVar4 + lVar6 * 0x12;
}



// FUNCTION 147ffc572 FUN_147ffc572 body=147 status=ok
// SIG undefined FUN_147ffc572(void)

void FUN_147ffc572(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x48,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x48)) {
      uVar5 = uVar4 / 0x48 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x48,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147ffc606 FUN_147ffc606 body=203 status=ok
// SIG undefined FUN_147ffc606(void)

int * FUN_147ffc606(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  longlong lVar6;
  longlong lVar7;
  int *piVar8;
  
  piVar4 = (int *)*param_1;
  iVar1 = *(int *)(param_1 + 1);
  lVar6 = (longlong)iVar1;
  if (lVar6 != 0) {
    lVar7 = lVar6 * 0x50;
    piVar8 = piVar4;
    do {
      if ((((*piVar8 == *(int *)(param_2 + 0x50)) && (piVar8[1] == *(int *)(param_2 + 0x54))) &&
          (piVar8[2] == *(int *)(param_2 + 0x58))) && (piVar8[3] == *(int *)(param_2 + 0x5c))) {
        if (piVar8 != (int *)0x0) {
          return piVar8;
        }
        break;
      }
      piVar8 = piVar8 + 0x14;
      lVar7 = lVar7 + -0x50;
    } while (lVar7 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147ffc6d2(param_1,iVar1);
    piVar4 = (int *)*param_1;
  }
  piVar8 = piVar4 + lVar6 * 0x14;
  piVar5 = piVar8 + 8;
  piVar8[0x10] = 0;
  piVar8[0x11] = 0;
  piVar8[0x12] = 0;
  piVar8[0x13] = 0;
  piVar8[0xc] = 0;
  piVar8[0xd] = 0;
  piVar8[0xe] = 0;
  piVar8[0xf] = 0;
  piVar5[0] = 0;
  piVar5[1] = 0;
  piVar8[10] = 0;
  piVar8[0xb] = 0;
  piVar8[4] = 0;
  piVar8[5] = 0;
  piVar8[6] = 0;
  piVar8[7] = 0;
  piVar8[0] = 0;
  piVar8[1] = 0;
  piVar8[2] = 0;
  piVar8[3] = 0;
  iVar1 = *(int *)(param_2 + 0x54);
  iVar2 = *(int *)(param_2 + 0x58);
  iVar3 = *(int *)(param_2 + 0x5c);
  *piVar8 = *(int *)(param_2 + 0x50);
  piVar8[1] = iVar1;
  piVar8[2] = iVar2;
  piVar8[3] = iVar3;
  FUN_144a787a6(piVar5,param_2 + 0x40);
  return piVar4 + lVar6 * 0x14;
}



// FUNCTION 147ffc6d2 FUN_147ffc6d2 body=147 status=ok
// SIG undefined FUN_147ffc6d2(void)

void FUN_147ffc6d2(longlong param_1,int param_2)

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



// FUNCTION 147ffc766 FUN_147ffc766 body=203 status=ok
// SIG undefined FUN_147ffc766(void)

int * FUN_147ffc766(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  longlong lVar6;
  longlong lVar7;
  int *piVar8;
  
  piVar4 = (int *)*param_1;
  iVar1 = *(int *)(param_1 + 1);
  lVar6 = (longlong)iVar1;
  if (lVar6 != 0) {
    lVar7 = lVar6 * 0x50;
    piVar8 = piVar4;
    do {
      if ((((*piVar8 == *(int *)(param_2 + 0x50)) && (piVar8[1] == *(int *)(param_2 + 0x54))) &&
          (piVar8[2] == *(int *)(param_2 + 0x58))) && (piVar8[3] == *(int *)(param_2 + 0x5c))) {
        if (piVar8 != (int *)0x0) {
          return piVar8;
        }
        break;
      }
      piVar8 = piVar8 + 0x14;
      lVar7 = lVar7 + -0x50;
    } while (lVar7 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147ffc832(param_1,iVar1);
    piVar4 = (int *)*param_1;
  }
  piVar8 = piVar4 + lVar6 * 0x14;
  piVar5 = piVar8 + 8;
  piVar8[0x10] = 0;
  piVar8[0x11] = 0;
  piVar8[0x12] = 0;
  piVar8[0x13] = 0;
  piVar8[0xc] = 0;
  piVar8[0xd] = 0;
  piVar8[0xe] = 0;
  piVar8[0xf] = 0;
  piVar5[0] = 0;
  piVar5[1] = 0;
  piVar8[10] = 0;
  piVar8[0xb] = 0;
  piVar8[4] = 0;
  piVar8[5] = 0;
  piVar8[6] = 0;
  piVar8[7] = 0;
  piVar8[0] = 0;
  piVar8[1] = 0;
  piVar8[2] = 0;
  piVar8[3] = 0;
  iVar1 = *(int *)(param_2 + 0x54);
  iVar2 = *(int *)(param_2 + 0x58);
  iVar3 = *(int *)(param_2 + 0x5c);
  *piVar8 = *(int *)(param_2 + 0x50);
  piVar8[1] = iVar1;
  piVar8[2] = iVar2;
  piVar8[3] = iVar3;
  FUN_144a787a6(piVar5,param_2 + 0x40);
  return piVar4 + lVar6 * 0x14;
}



// FUNCTION 147ffc832 FUN_147ffc832 body=147 status=ok
// SIG undefined FUN_147ffc832(void)

void FUN_147ffc832(longlong param_1,int param_2)

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



// FUNCTION 147ffc8c6 FUN_147ffc8c6 body=200 status=ok
// SIG undefined FUN_147ffc8c6(void)

int * FUN_147ffc8c6(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  longlong lVar6;
  longlong lVar7;
  int *piVar8;
  
  piVar4 = (int *)*param_2;
  iVar1 = *(int *)(param_2 + 1);
  lVar6 = (longlong)iVar1;
  if (lVar6 != 0) {
    lVar7 = lVar6 * 0x58;
    piVar8 = piVar4;
    do {
      if ((((*piVar8 == *(int *)(param_3 + 0x50)) && (piVar8[1] == *(int *)(param_3 + 0x54))) &&
          (piVar8[2] == *(int *)(param_3 + 0x58))) && (piVar8[3] == *(int *)(param_3 + 0x5c))) {
        if (piVar8 != (int *)0x0) {
          return piVar8;
        }
        break;
      }
      piVar8 = piVar8 + 0x16;
      lVar7 = lVar7 + -0x58;
    } while (lVar7 != 0);
  }
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_147ffc98e(param_2,iVar1);
    piVar4 = (int *)*param_2;
  }
  piVar8 = piVar4 + lVar6 * 0x16;
  piVar5 = piVar8 + 8;
  piVar8[0x10] = 0;
  piVar8[0x11] = 0;
  piVar8[0x12] = 0;
  piVar8[0x13] = 0;
  piVar8[0xc] = 0;
  piVar8[0xd] = 0;
  piVar8[0xe] = 0;
  piVar8[0xf] = 0;
  piVar5[0] = 0;
  piVar5[1] = 0;
  piVar8[10] = 0;
  piVar8[0xb] = 0;
  piVar8[4] = 0;
  piVar8[5] = 0;
  piVar8[6] = 0;
  piVar8[7] = 0;
  piVar8[0] = 0;
  piVar8[1] = 0;
  piVar8[2] = 0;
  piVar8[3] = 0;
  piVar8[0x14] = 0;
  piVar8[0x15] = 0;
  iVar1 = *(int *)(param_3 + 0x54);
  iVar2 = *(int *)(param_3 + 0x58);
  iVar3 = *(int *)(param_3 + 0x5c);
  *piVar8 = *(int *)(param_3 + 0x50);
  piVar8[1] = iVar1;
  piVar8[2] = iVar2;
  piVar8[3] = iVar3;
  FUN_144a787a6(piVar5,param_3 + 0x40);
  return piVar4 + lVar6 * 0x16;
}



// FUNCTION 147ffc98e FUN_147ffc98e body=143 status=ok
// SIG undefined FUN_147ffc98e(void)

void FUN_147ffc98e(longlong param_1,int param_2)

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



// FUNCTION 147ffca1e FUN_147ffca1e body=207 status=ok
// SIG undefined FUN_147ffca1e(void)

int * FUN_147ffca1e(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  longlong lVar6;
  longlong lVar7;
  int *piVar8;
  
  piVar4 = (int *)*param_1;
  iVar1 = *(int *)(param_1 + 1);
  lVar6 = (longlong)iVar1;
  if (lVar6 != 0) {
    lVar7 = lVar6 * 0x60;
    piVar8 = piVar4;
    do {
      if ((((*piVar8 == *(int *)(param_2 + 0x50)) && (piVar8[1] == *(int *)(param_2 + 0x54))) &&
          (piVar8[2] == *(int *)(param_2 + 0x58))) && (piVar8[3] == *(int *)(param_2 + 0x5c))) {
        if (piVar8 != (int *)0x0) {
          return piVar8;
        }
        break;
      }
      piVar8 = piVar8 + 0x18;
      lVar7 = lVar7 + -0x60;
    } while (lVar7 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147ffcaee(param_1,iVar1);
    piVar4 = (int *)*param_1;
  }
  piVar8 = piVar4 + lVar6 * 0x18;
  piVar5 = piVar8 + 8;
  piVar8[0x14] = 0;
  piVar8[0x15] = 0;
  piVar8[0x16] = 0;
  piVar8[0x17] = 0;
  piVar8[0x10] = 0;
  piVar8[0x11] = 0;
  piVar8[0x12] = 0;
  piVar8[0x13] = 0;
  piVar8[0xc] = 0;
  piVar8[0xd] = 0;
  piVar8[0xe] = 0;
  piVar8[0xf] = 0;
  piVar5[0] = 0;
  piVar5[1] = 0;
  piVar8[10] = 0;
  piVar8[0xb] = 0;
  piVar8[4] = 0;
  piVar8[5] = 0;
  piVar8[6] = 0;
  piVar8[7] = 0;
  piVar8[0] = 0;
  piVar8[1] = 0;
  piVar8[2] = 0;
  piVar8[3] = 0;
  iVar1 = *(int *)(param_2 + 0x54);
  iVar2 = *(int *)(param_2 + 0x58);
  iVar3 = *(int *)(param_2 + 0x5c);
  *piVar8 = *(int *)(param_2 + 0x50);
  piVar8[1] = iVar1;
  piVar8[2] = iVar2;
  piVar8[3] = iVar3;
  FUN_144a787a6(piVar5,param_2 + 0x40);
  return piVar4 + lVar6 * 0x18;
}



// FUNCTION 147ffcaee FUN_147ffcaee body=147 status=ok
// SIG undefined FUN_147ffcaee(void)

void FUN_147ffcaee(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x60,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x60)) {
      uVar5 = uVar4 / 0x60 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x60,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147ffcb82 FUN_147ffcb82 body=200 status=ok
// SIG undefined FUN_147ffcb82(void)

int * FUN_147ffcb82(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  longlong lVar6;
  longlong lVar7;
  int *piVar8;
  
  piVar4 = (int *)*param_1;
  iVar1 = *(int *)(param_1 + 1);
  lVar6 = (longlong)iVar1;
  if (lVar6 != 0) {
    lVar7 = lVar6 * 0x70;
    piVar8 = piVar4;
    do {
      if ((((*piVar8 == *(int *)(param_2 + 0x50)) && (piVar8[1] == *(int *)(param_2 + 0x54))) &&
          (piVar8[2] == *(int *)(param_2 + 0x58))) && (piVar8[3] == *(int *)(param_2 + 0x5c))) {
        if (piVar8 != (int *)0x0) {
          return piVar8;
        }
        break;
      }
      piVar8 = piVar8 + 0x1c;
      lVar7 = lVar7 + -0x70;
    } while (lVar7 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147ffcc4a(param_1,iVar1);
    piVar4 = (int *)*param_1;
  }
  piVar8 = piVar4 + lVar6 * 0x1c;
  piVar5 = piVar8 + 8;
  piVar8[0x18] = 0;
  piVar8[0x19] = 0;
  piVar8[0x1a] = 0;
  piVar8[0x1b] = 0;
  piVar8[0x14] = 0;
  piVar8[0x15] = 0;
  piVar8[0x16] = 0;
  piVar8[0x17] = 0;
  piVar8[0x10] = 0;
  piVar8[0x11] = 0;
  piVar8[0x12] = 0;
  piVar8[0x13] = 0;
  piVar8[0xc] = 0;
  piVar8[0xd] = 0;
  piVar8[0xe] = 0;
  piVar8[0xf] = 0;
  piVar5[0] = 0;
  piVar5[1] = 0;
  piVar8[10] = 0;
  piVar8[0xb] = 0;
  piVar8[4] = 0;
  piVar8[5] = 0;
  piVar8[6] = 0;
  piVar8[7] = 0;
  piVar8[0] = 0;
  piVar8[1] = 0;
  piVar8[2] = 0;
  piVar8[3] = 0;
  iVar1 = *(int *)(param_2 + 0x54);
  iVar2 = *(int *)(param_2 + 0x58);
  iVar3 = *(int *)(param_2 + 0x5c);
  *piVar8 = *(int *)(param_2 + 0x50);
  piVar8[1] = iVar1;
  piVar8[2] = iVar2;
  piVar8[3] = iVar3;
  FUN_144a787a6(piVar5,param_2 + 0x40);
  return piVar4 + lVar6 * 0x1c;
}



// FUNCTION 147ffcc4a FUN_147ffcc4a body=143 status=ok
// SIG undefined FUN_147ffcc4a(void)

void FUN_147ffcc4a(longlong param_1,int param_2)

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
    uVar5 = FUN_144a3809e(lVar4 * 0x70,0x10);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 4;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x70,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147ffccda FUN_147ffccda body=203 status=ok
// SIG undefined FUN_147ffccda(void)

int * FUN_147ffccda(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  longlong lVar6;
  longlong lVar7;
  int *piVar8;
  
  piVar4 = (int *)*param_1;
  iVar1 = *(int *)(param_1 + 1);
  lVar6 = (longlong)iVar1;
  if (lVar6 != 0) {
    lVar7 = lVar6 * 0x50;
    piVar8 = piVar4;
    do {
      if ((((*piVar8 == *(int *)(param_2 + 0x50)) && (piVar8[1] == *(int *)(param_2 + 0x54))) &&
          (piVar8[2] == *(int *)(param_2 + 0x58))) && (piVar8[3] == *(int *)(param_2 + 0x5c))) {
        if (piVar8 != (int *)0x0) {
          return piVar8;
        }
        break;
      }
      piVar8 = piVar8 + 0x14;
      lVar7 = lVar7 + -0x50;
    } while (lVar7 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147ffcda6(param_1,iVar1);
    piVar4 = (int *)*param_1;
  }
  piVar8 = piVar4 + lVar6 * 0x14;
  piVar5 = piVar8 + 8;
  piVar8[0x10] = 0;
  piVar8[0x11] = 0;
  piVar8[0x12] = 0;
  piVar8[0x13] = 0;
  piVar8[0xc] = 0;
  piVar8[0xd] = 0;
  piVar8[0xe] = 0;
  piVar8[0xf] = 0;
  piVar5[0] = 0;
  piVar5[1] = 0;
  piVar8[10] = 0;
  piVar8[0xb] = 0;
  piVar8[4] = 0;
  piVar8[5] = 0;
  piVar8[6] = 0;
  piVar8[7] = 0;
  piVar8[0] = 0;
  piVar8[1] = 0;
  piVar8[2] = 0;
  piVar8[3] = 0;
  iVar1 = *(int *)(param_2 + 0x54);
  iVar2 = *(int *)(param_2 + 0x58);
  iVar3 = *(int *)(param_2 + 0x5c);
  *piVar8 = *(int *)(param_2 + 0x50);
  piVar8[1] = iVar1;
  piVar8[2] = iVar2;
  piVar8[3] = iVar3;
  FUN_144a787a6(piVar5,param_2 + 0x40);
  return piVar4 + lVar6 * 0x14;
}



// FUNCTION 147ffcda6 FUN_147ffcda6 body=147 status=ok
// SIG undefined FUN_147ffcda6(void)

void FUN_147ffcda6(longlong param_1,int param_2)

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



// FUNCTION 147ffce3a FUN_147ffce3a body=200 status=ok
// SIG undefined FUN_147ffce3a(void)

int * FUN_147ffce3a(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  longlong lVar6;
  longlong lVar7;
  int *piVar8;
  
  piVar4 = (int *)*param_1;
  iVar1 = *(int *)(param_1 + 1);
  lVar6 = (longlong)iVar1;
  if (lVar6 != 0) {
    lVar7 = lVar6 * 0x58;
    piVar8 = piVar4;
    do {
      if ((((*piVar8 == *(int *)(param_2 + 0x50)) && (piVar8[1] == *(int *)(param_2 + 0x54))) &&
          (piVar8[2] == *(int *)(param_2 + 0x58))) && (piVar8[3] == *(int *)(param_2 + 0x5c))) {
        if (piVar8 != (int *)0x0) {
          return piVar8;
        }
        break;
      }
      piVar8 = piVar8 + 0x16;
      lVar7 = lVar7 + -0x58;
    } while (lVar7 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147ffcf02(param_1,iVar1);
    piVar4 = (int *)*param_1;
  }
  piVar8 = piVar4 + lVar6 * 0x16;
  piVar5 = piVar8 + 8;
  piVar8[0x10] = 0;
  piVar8[0x11] = 0;
  piVar8[0x12] = 0;
  piVar8[0x13] = 0;
  piVar8[0xc] = 0;
  piVar8[0xd] = 0;
  piVar8[0xe] = 0;
  piVar8[0xf] = 0;
  piVar5[0] = 0;
  piVar5[1] = 0;
  piVar8[10] = 0;
  piVar8[0xb] = 0;
  piVar8[4] = 0;
  piVar8[5] = 0;
  piVar8[6] = 0;
  piVar8[7] = 0;
  piVar8[0] = 0;
  piVar8[1] = 0;
  piVar8[2] = 0;
  piVar8[3] = 0;
  piVar8[0x14] = 0;
  piVar8[0x15] = 0;
  iVar1 = *(int *)(param_2 + 0x54);
  iVar2 = *(int *)(param_2 + 0x58);
  iVar3 = *(int *)(param_2 + 0x5c);
  *piVar8 = *(int *)(param_2 + 0x50);
  piVar8[1] = iVar1;
  piVar8[2] = iVar2;
  piVar8[3] = iVar3;
  FUN_144a787a6(piVar5,param_2 + 0x40);
  return piVar4 + lVar6 * 0x16;
}



// FUNCTION 147ffcf02 FUN_147ffcf02 body=143 status=ok
// SIG undefined FUN_147ffcf02(void)

void FUN_147ffcf02(longlong param_1,int param_2)

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



// FUNCTION 147ffcf92 FUN_147ffcf92 body=222 status=ok
// SIG undefined FUN_147ffcf92(void)

int * FUN_147ffcf92(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  longlong lVar6;
  longlong lVar7;
  int *piVar8;
  
  piVar4 = (int *)*param_1;
  iVar1 = *(int *)(param_1 + 1);
  lVar6 = (longlong)iVar1;
  if (lVar6 != 0) {
    lVar7 = lVar6 << 7;
    piVar8 = piVar4;
    do {
      if ((((*piVar8 == *(int *)(param_2 + 0x50)) && (piVar8[1] == *(int *)(param_2 + 0x54))) &&
          (piVar8[2] == *(int *)(param_2 + 0x58))) && (piVar8[3] == *(int *)(param_2 + 0x5c))) {
        if (piVar8 != (int *)0x0) {
          return piVar8;
        }
        break;
      }
      piVar8 = piVar8 + 0x20;
      lVar7 = lVar7 + -0x80;
    } while (lVar7 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147ffd070(param_1,iVar1);
    piVar4 = (int *)*param_1;
  }
  piVar8 = piVar4 + lVar6 * 0x20;
  piVar5 = piVar8 + 8;
  piVar8[0x1c] = 0;
  piVar8[0x1d] = 0;
  piVar8[0x1e] = 0;
  piVar8[0x1f] = 0;
  piVar8[0x14] = 0;
  piVar8[0x15] = 0;
  piVar8[0x16] = 0;
  piVar8[0x17] = 0;
  piVar8[0xc] = 0;
  piVar8[0xd] = 0;
  piVar8[0xe] = 0;
  piVar8[0xf] = 0;
  piVar5[0] = 0;
  piVar5[1] = 0;
  piVar8[10] = 0;
  piVar8[0xb] = 0;
  piVar8[4] = 0;
  piVar8[5] = 0;
  piVar8[6] = 0;
  piVar8[7] = 0;
  piVar8[0] = 0;
  piVar8[1] = 0;
  piVar8[2] = 0;
  piVar8[3] = 0;
  piVar8[0x10] = 0;
  piVar8[0x11] = 0;
  piVar8[0x12] = 0;
  piVar8[0x13] = 0x3f800000;
  *(undefined1 **)(piVar8 + 0x18) = &DAT_3f8000003f800000;
  piVar8[0x1a] = 0x3f800000;
  piVar8[0x1b] = 0;
  iVar1 = *(int *)(param_2 + 0x54);
  iVar2 = *(int *)(param_2 + 0x58);
  iVar3 = *(int *)(param_2 + 0x5c);
  *piVar8 = *(int *)(param_2 + 0x50);
  piVar8[1] = iVar1;
  piVar8[2] = iVar2;
  piVar8[3] = iVar3;
  FUN_144a787a6(piVar5,param_2 + 0x40);
  return piVar4 + lVar6 * 0x20;
}



// FUNCTION 147ffd070 FUN_147ffd070 body=132 status=ok
// SIG undefined FUN_147ffd070(void)

void FUN_147ffd070(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 7,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 7)) {
      uVar5 = uVar3 >> 7 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x80,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147ffd0f6 FUN_147ffd0f6 body=264 status=ok
// SIG undefined FUN_147ffd0f6(void)

int * FUN_147ffd0f6(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  longlong lVar6;
  int *piVar7;
  longlong lVar8;
  
  piVar4 = (int *)*param_1;
  lVar6 = (longlong)*(int *)(param_1 + 1);
  if (lVar6 != 0) {
    lVar8 = lVar6 * 0xb0;
    piVar7 = piVar4;
    do {
      if ((((*piVar7 == *(int *)(param_2 + 0x50)) && (piVar7[1] == *(int *)(param_2 + 0x54))) &&
          (piVar7[2] == *(int *)(param_2 + 0x58))) && (piVar7[3] == *(int *)(param_2 + 0x5c))) {
        if (piVar7 != (int *)0x0) {
          return piVar7;
        }
        break;
      }
      piVar7 = piVar7 + 0x2c;
      lVar8 = lVar8 + -0xb0;
    } while (lVar8 != 0);
  }
  uVar5 = *(int *)(param_1 + 1) + 1;
  *(uint *)(param_1 + 1) = uVar5;
  if (*(uint *)((longlong)param_1 + 0xc) < uVar5) {
    FUN_147ffd1fe(param_1);
    piVar4 = (int *)*param_1;
  }
  piVar7 = piVar4 + lVar6 * 0x2c;
  memset(piVar4 + lVar6 * 0x2c,0,0xb0);
  piVar7[0x14] = 0;
  piVar7[0x15] = 0;
  piVar7[0x16] = 0;
  piVar7[0x17] = 0x3ff00000;
  piVar7[0x18] = 0;
  piVar7[0x19] = 0;
  piVar7[0x1a] = 0;
  piVar7[0x1b] = 0;
  piVar7[0x1c] = 0;
  piVar7[0x1d] = 0;
  piVar7[0x1e] = 0;
  piVar7[0x1f] = 0;
  piVar7[0x20] = 0;
  piVar7[0x21] = 0x3ff00000;
  piVar7[0x22] = 0;
  piVar7[0x23] = 0x3ff00000;
  piVar7[0x24] = 0;
  piVar7[0x25] = 0x3ff00000;
  piVar7[0x26] = 0;
  piVar7[0x27] = 0;
  iVar1 = *(int *)(param_2 + 0x54);
  iVar2 = *(int *)(param_2 + 0x58);
  iVar3 = *(int *)(param_2 + 0x5c);
  *piVar7 = *(int *)(param_2 + 0x50);
  piVar7[1] = iVar1;
  piVar7[2] = iVar2;
  piVar7[3] = iVar3;
  FUN_144a787a6(piVar7 + 8,param_2 + 0x40);
  return piVar4 + lVar6 * 0x2c;
}



// FUNCTION 147ffd1fe FUN_147ffd1fe body=146 status=ok
// SIG undefined FUN_147ffd1fe(void)

void FUN_147ffd1fe(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xb0,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xb0)) {
      uVar5 = uVar4 / 0xb0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xb0,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147ffd292 FUN_147ffd292 body=111 status=ok
// SIG undefined FUN_147ffd292(void)

longlong * FUN_147ffd292(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    param_1[2] = param_2[2];
    param_2[2] = 0;
    *(int *)(param_1 + 3) = (int)param_2[3];
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    param_2[3] = 0;
  }
  return param_1;
}



// FUNCTION 147ffd352 FUN_147ffd352 body=106 status=ok
// SIG undefined FUN_147ffd352(void)

undefined1 FUN_147ffd352(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  
  if (param_4 != 0) {
    lVar10 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar10);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      uVar7 = puVar1[5];
      uVar8 = puVar1[6];
      uVar9 = puVar1[7];
      lVar2 = param_2 + 0x20 + lVar10;
      *(undefined4 *)(lVar2 + -0x10) = puVar1[4];
      *(undefined4 *)(lVar2 + -0xc) = uVar7;
      *(undefined4 *)(lVar2 + -8) = uVar8;
      *(undefined4 *)(lVar2 + -4) = uVar9;
      *(undefined4 *)(lVar2 + -0x20) = uVar3;
      *(undefined4 *)(lVar2 + -0x1c) = uVar4;
      *(undefined4 *)(lVar2 + -0x18) = uVar5;
      *(undefined4 *)(lVar2 + -0x14) = uVar6;
      FUN_144a787a6(lVar2,puVar1 + 8);
      *(undefined1 *)(lVar2 + 0x10) = *(undefined1 *)(puVar1 + 0xc);
      lVar10 = lVar10 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147ffd3e4 FUN_147ffd3e4 body=59 status=ok
// SIG undefined FUN_147ffd3e4(void)

undefined8 FUN_147ffd3e4(longlong *param_1)

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



// FUNCTION 147ffd42a FUN_147ffd42a body=38 status=ok
// SIG undefined FUN_147ffd42a(void)

void FUN_147ffd42a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    if (*(longlong *)(param_2 + 0x20) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 147ffd500 FUN_147ffd500 body=54 status=ok
// SIG undefined FUN_147ffd500(void)

undefined1 FUN_147ffd500(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147ffd618(param_2,param_3);
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return 1;
}



// FUNCTION 147ffd55e FUN_147ffd55e body=59 status=ok
// SIG undefined FUN_147ffd55e(void)

undefined8 FUN_147ffd55e(longlong *param_1)

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



// FUNCTION 147ffd5a4 FUN_147ffd5a4 body=38 status=ok
// SIG undefined FUN_147ffd5a4(void)

void FUN_147ffd5a4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    if (*(longlong *)(param_2 + 0x20) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 147ffd618 FUN_147ffd618 body=96 status=ok
// SIG undefined FUN_147ffd618(void)

undefined4 * FUN_147ffd618(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  
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
  FUN_144a787a6(param_1 + 8,param_2 + 8);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  lVar8 = *(longlong *)(param_2 + 0x10);
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar8 = *(longlong *)(param_2 + 0x10);
    }
  }
  *(longlong *)(param_1 + 0x10) = lVar8;
  return param_1;
}



// FUNCTION 147ffd6dc FUN_147ffd6dc body=54 status=ok
// SIG undefined FUN_147ffd6dc(void)

undefined1 FUN_147ffd6dc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147ffd7f4(param_2,param_3);
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return 1;
}



// FUNCTION 147ffd73a FUN_147ffd73a body=59 status=ok
// SIG undefined FUN_147ffd73a(void)

undefined8 FUN_147ffd73a(longlong *param_1)

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



// FUNCTION 147ffd780 FUN_147ffd780 body=38 status=ok
// SIG undefined FUN_147ffd780(void)

void FUN_147ffd780(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    if (*(longlong *)(param_2 + 0x20) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 147ffd7f4 FUN_147ffd7f4 body=96 status=ok
// SIG undefined FUN_147ffd7f4(void)

undefined4 * FUN_147ffd7f4(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  
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
  FUN_144a787a6(param_1 + 8,param_2 + 8);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  param_1[0xe] = param_2[0xe];
  lVar8 = *(longlong *)(param_2 + 0x10);
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar8 = *(longlong *)(param_2 + 0x10);
    }
  }
  *(longlong *)(param_1 + 0x10) = lVar8;
  return param_1;
}



// FUNCTION 147ffd8b8 FUN_147ffd8b8 body=54 status=ok
// SIG undefined FUN_147ffd8b8(void)

undefined1 FUN_147ffd8b8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147ffd9d0(param_2,param_3);
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return 1;
}



// FUNCTION 147ffd916 FUN_147ffd916 body=59 status=ok
// SIG undefined FUN_147ffd916(void)

undefined8 FUN_147ffd916(longlong *param_1)

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



// FUNCTION 147ffd95c FUN_147ffd95c body=38 status=ok
// SIG undefined FUN_147ffd95c(void)

void FUN_147ffd95c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    if (*(longlong *)(param_2 + 0x20) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 147ffd9d0 FUN_147ffd9d0 body=100 status=ok
// SIG undefined FUN_147ffd9d0(void)

undefined4 * FUN_147ffd9d0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  
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
  FUN_144a787a6(param_1 + 8,param_2 + 8);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  param_1[0xe] = param_2[0xe];
  lVar8 = *(longlong *)(param_2 + 0x10);
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar8 = *(longlong *)(param_2 + 0x10);
    }
  }
  *(longlong *)(param_1 + 0x10) = lVar8;
  return param_1;
}



// FUNCTION 147ffda8e FUN_147ffda8e body=54 status=ok
// SIG undefined FUN_147ffda8e(void)

undefined1 FUN_147ffda8e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147ffdba6(param_2,param_3);
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return 1;
}



// FUNCTION 147ffdaec FUN_147ffdaec body=59 status=ok
// SIG undefined FUN_147ffdaec(void)

undefined8 FUN_147ffdaec(longlong *param_1)

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



// FUNCTION 147ffdb32 FUN_147ffdb32 body=38 status=ok
// SIG undefined FUN_147ffdb32(void)

void FUN_147ffdb32(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    if (*(longlong *)(param_2 + 0x20) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 147ffdba6 FUN_147ffdba6 body=100 status=ok
// SIG undefined FUN_147ffdba6(void)

undefined4 * FUN_147ffdba6(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  
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
  FUN_144a787a6(param_1 + 8,param_2 + 8);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  lVar8 = *(longlong *)(param_2 + 0x10);
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar8 = *(longlong *)(param_2 + 0x10);
    }
  }
  *(longlong *)(param_1 + 0x10) = lVar8;
  return param_1;
}



// FUNCTION 147ffdc64 FUN_147ffdc64 body=54 status=ok
// SIG undefined FUN_147ffdc64(void)

undefined1 FUN_147ffdc64(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147ffdd7c(param_2,param_3);
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return 1;
}



// FUNCTION 147ffdcc2 FUN_147ffdcc2 body=59 status=ok
// SIG undefined FUN_147ffdcc2(void)

undefined8 FUN_147ffdcc2(longlong *param_1)

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



// FUNCTION 147ffdd08 FUN_147ffdd08 body=38 status=ok
// SIG undefined FUN_147ffdd08(void)

void FUN_147ffdd08(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    if (*(longlong *)(param_2 + 0x20) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 147ffdd7c FUN_147ffdd7c body=98 status=ok
// SIG undefined FUN_147ffdd7c(void)

undefined4 * FUN_147ffdd7c(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  
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
  FUN_144a787a6(param_1 + 8,param_2 + 8);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  lVar8 = *(longlong *)(param_2 + 0x10);
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar8 = *(longlong *)(param_2 + 0x10);
    }
  }
  *(longlong *)(param_1 + 0x10) = lVar8;
  return param_1;
}



// FUNCTION 147ffde3c FUN_147ffde3c body=54 status=ok
// SIG undefined FUN_147ffde3c(void)

undefined1 FUN_147ffde3c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147ffdf54(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 147ffde9a FUN_147ffde9a body=59 status=ok
// SIG undefined FUN_147ffde9a(void)

undefined8 FUN_147ffde9a(longlong *param_1)

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



// FUNCTION 147ffdee0 FUN_147ffdee0 body=38 status=ok
// SIG undefined FUN_147ffdee0(void)

void FUN_147ffdee0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    if (*(longlong *)(param_2 + 0x20) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 147ffdf54 FUN_147ffdf54 body=98 status=ok
// SIG undefined FUN_147ffdf54(void)

undefined4 * FUN_147ffdf54(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  
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
  FUN_144a787a6(param_1 + 8,param_2 + 8);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  uVar1 = param_2[0xf];
  uVar2 = param_2[0x10];
  uVar3 = param_2[0x11];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar1;
  param_1[0x10] = uVar2;
  param_1[0x11] = uVar3;
  lVar8 = *(longlong *)(param_2 + 0x12);
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar8 = *(longlong *)(param_2 + 0x12);
    }
  }
  *(longlong *)(param_1 + 0x12) = lVar8;
  return param_1;
}



// FUNCTION 147ffe018 FUN_147ffe018 body=54 status=ok
// SIG undefined FUN_147ffe018(void)

undefined1 FUN_147ffe018(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147ffe130(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 147ffe076 FUN_147ffe076 body=59 status=ok
// SIG undefined FUN_147ffe076(void)

undefined8 FUN_147ffe076(longlong *param_1)

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



// FUNCTION 147ffe0bc FUN_147ffe0bc body=38 status=ok
// SIG undefined FUN_147ffe0bc(void)

void FUN_147ffe0bc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    if (*(longlong *)(param_2 + 0x20) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 147ffe130 FUN_147ffe130 body=104 status=ok
// SIG undefined FUN_147ffe130(void)

undefined4 * FUN_147ffe130(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  
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
  FUN_144a787a6(param_1 + 8,param_2 + 8);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  param_1[0x10] = param_2[0x10];
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  lVar8 = *(longlong *)(param_2 + 0x12);
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar8 = *(longlong *)(param_2 + 0x12);
    }
  }
  *(longlong *)(param_1 + 0x12) = lVar8;
  return param_1;
}



// FUNCTION 147ffe1fa FUN_147ffe1fa body=54 status=ok
// SIG undefined FUN_147ffe1fa(void)

undefined1 FUN_147ffe1fa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147ffe312(param_2,param_3);
    param_3 = param_3 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return 1;
}



// FUNCTION 147ffe258 FUN_147ffe258 body=59 status=ok
// SIG undefined FUN_147ffe258(void)

undefined8 FUN_147ffe258(longlong *param_1)

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



// FUNCTION 147ffe29e FUN_147ffe29e body=38 status=ok
// SIG undefined FUN_147ffe29e(void)

void FUN_147ffe29e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    if (*(longlong *)(param_2 + 0x20) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 147ffe312 FUN_147ffe312 body=106 status=ok
// SIG undefined FUN_147ffe312(void)

undefined4 * FUN_147ffe312(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  
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
  FUN_144a787a6(param_1 + 8,param_2 + 8);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  uVar1 = param_2[0xf];
  uVar2 = param_2[0x10];
  uVar3 = param_2[0x11];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar1;
  param_1[0x10] = uVar2;
  param_1[0x11] = uVar3;
  lVar8 = *(longlong *)(param_2 + 0x14);
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar8 = *(longlong *)(param_2 + 0x14);
    }
  }
  *(longlong *)(param_1 + 0x14) = lVar8;
  return param_1;
}



// FUNCTION 147ffe3de FUN_147ffe3de body=54 status=ok
// SIG undefined FUN_147ffe3de(void)

undefined1 FUN_147ffe3de(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147ffe4f6(param_2,param_3);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 147ffe43c FUN_147ffe43c body=59 status=ok
// SIG undefined FUN_147ffe43c(void)

undefined8 FUN_147ffe43c(longlong *param_1)

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



// FUNCTION 147ffe482 FUN_147ffe482 body=38 status=ok
// SIG undefined FUN_147ffe482(void)

void FUN_147ffe482(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    if (*(longlong *)(param_2 + 0x20) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 147ffe4f6 FUN_147ffe4f6 body=98 status=ok
// SIG undefined FUN_147ffe4f6(void)

undefined4 * FUN_147ffe4f6(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  
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
  FUN_144a787a6(param_1 + 8,param_2 + 8);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  uVar1 = param_2[0x11];
  uVar2 = param_2[0x12];
  uVar3 = param_2[0x13];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar1;
  param_1[0x12] = uVar2;
  param_1[0x13] = uVar3;
  lVar8 = *(longlong *)(param_2 + 0x14);
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar8 = *(longlong *)(param_2 + 0x14);
    }
  }
  *(longlong *)(param_1 + 0x14) = lVar8;
  return param_1;
}



// FUNCTION 147ffe5c2 FUN_147ffe5c2 body=54 status=ok
// SIG undefined FUN_147ffe5c2(void)

undefined1 FUN_147ffe5c2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147ffe6da(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 147ffe620 FUN_147ffe620 body=59 status=ok
// SIG undefined FUN_147ffe620(void)

undefined8 FUN_147ffe620(longlong *param_1)

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



// FUNCTION 147ffe666 FUN_147ffe666 body=38 status=ok
// SIG undefined FUN_147ffe666(void)

void FUN_147ffe666(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    if (*(longlong *)(param_2 + 0x20) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 147ffe6da FUN_147ffe6da body=106 status=ok
// SIG undefined FUN_147ffe6da(void)

undefined4 * FUN_147ffe6da(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  
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
  FUN_144a787a6(param_1 + 8,param_2 + 8);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  uVar1 = param_2[0x10];
  uVar2 = param_2[0x11];
  uVar3 = param_2[0x12];
  uVar4 = param_2[0x13];
  uVar5 = param_2[0x15];
  uVar6 = param_2[0x16];
  uVar7 = param_2[0x17];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = uVar5;
  param_1[0x16] = uVar6;
  param_1[0x17] = uVar7;
  param_1[0x10] = uVar1;
  param_1[0x11] = uVar2;
  param_1[0x12] = uVar3;
  param_1[0x13] = uVar4;
  lVar8 = *(longlong *)(param_2 + 0x18);
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar8 = *(longlong *)(param_2 + 0x18);
    }
  }
  *(longlong *)(param_1 + 0x18) = lVar8;
  return param_1;
}



// FUNCTION 147ffe7a6 FUN_147ffe7a6 body=54 status=ok
// SIG undefined FUN_147ffe7a6(void)

undefined1 FUN_147ffe7a6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147ffe8be(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 147ffe804 FUN_147ffe804 body=59 status=ok
// SIG undefined FUN_147ffe804(void)

undefined8 FUN_147ffe804(longlong *param_1)

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



// FUNCTION 147ffe84a FUN_147ffe84a body=38 status=ok
// SIG undefined FUN_147ffe84a(void)

void FUN_147ffe84a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    if (*(longlong *)(param_2 + 0x20) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 147ffe8be FUN_147ffe8be body=104 status=ok
// SIG undefined FUN_147ffe8be(void)

undefined4 * FUN_147ffe8be(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  
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
  FUN_144a787a6(param_1 + 8,param_2 + 8);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  param_1[0x10] = param_2[0x10];
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  lVar8 = *(longlong *)(param_2 + 0x12);
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar8 = *(longlong *)(param_2 + 0x12);
    }
  }
  *(longlong *)(param_1 + 0x12) = lVar8;
  return param_1;
}



// FUNCTION 147ffe988 FUN_147ffe988 body=54 status=ok
// SIG undefined FUN_147ffe988(void)

undefined1 FUN_147ffe988(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147ffeaa0(param_2,param_3);
    param_3 = param_3 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return 1;
}



// FUNCTION 147ffe9e6 FUN_147ffe9e6 body=59 status=ok
// SIG undefined FUN_147ffe9e6(void)

undefined8 FUN_147ffe9e6(longlong *param_1)

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



// FUNCTION 147ffea2c FUN_147ffea2c body=38 status=ok
// SIG undefined FUN_147ffea2c(void)

void FUN_147ffea2c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    if (*(longlong *)(param_2 + 0x20) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 147ffeaa0 FUN_147ffeaa0 body=106 status=ok
// SIG undefined FUN_147ffeaa0(void)

undefined4 * FUN_147ffeaa0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  
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
  FUN_144a787a6(param_1 + 8,param_2 + 8);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  uVar1 = param_2[0xf];
  uVar2 = param_2[0x10];
  uVar3 = param_2[0x11];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar1;
  param_1[0x10] = uVar2;
  param_1[0x11] = uVar3;
  lVar8 = *(longlong *)(param_2 + 0x14);
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar8 = *(longlong *)(param_2 + 0x14);
    }
  }
  *(longlong *)(param_1 + 0x14) = lVar8;
  return param_1;
}



// FUNCTION 147ffeb98 FUN_147ffeb98 body=63 status=ok
// SIG undefined FUN_147ffeb98(void)

undefined1 FUN_147ffeb98(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147ffecc6(param_2,param_3);
    param_3 = param_3 + 0x80;
    param_2 = param_2 + 0x80;
  }
  return 1;
}



// FUNCTION 147ffec00 FUN_147ffec00 body=59 status=ok
// SIG undefined FUN_147ffec00(void)

undefined8 FUN_147ffec00(longlong *param_1)

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



// FUNCTION 147ffec4c FUN_147ffec4c body=44 status=ok
// SIG undefined FUN_147ffec4c(void)

void FUN_147ffec4c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x80) == '\x01') {
    if (*(longlong *)(param_2 + 0x20) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x80) = 0;
  }
  return;
}



// FUNCTION 147ffecc6 FUN_147ffecc6 body=114 status=ok
// SIG undefined FUN_147ffecc6(void)

undefined4 * FUN_147ffecc6(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
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
  longlong lVar12;
  
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
  FUN_144a787a6(param_1 + 8,param_2 + 8);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  uVar1 = param_2[0x10];
  uVar2 = param_2[0x11];
  uVar3 = param_2[0x12];
  uVar4 = param_2[0x13];
  uVar5 = param_2[0x14];
  uVar6 = param_2[0x15];
  uVar7 = param_2[0x16];
  uVar8 = param_2[0x17];
  uVar9 = param_2[0x19];
  uVar10 = param_2[0x1a];
  uVar11 = param_2[0x1b];
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = uVar9;
  param_1[0x1a] = uVar10;
  param_1[0x1b] = uVar11;
  param_1[0x14] = uVar5;
  param_1[0x15] = uVar6;
  param_1[0x16] = uVar7;
  param_1[0x17] = uVar8;
  param_1[0x10] = uVar1;
  param_1[0x11] = uVar2;
  param_1[0x12] = uVar3;
  param_1[0x13] = uVar4;
  lVar12 = *(longlong *)(param_2 + 0x1c);
  if (DAT_14c950c29 == '\x01') {
    if (lVar12 == 0) {
      lVar12 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar12 = *(longlong *)(param_2 + 0x1c);
    }
  }
  *(longlong *)(param_1 + 0x1c) = lVar12;
  return param_1;
}



// FUNCTION 147ffed3a FUN_147ffed3a body=84 status=ok
// SIG undefined FUN_147ffed3a(void)

void FUN_147ffed3a(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xb0);
  *(undefined4 *)((longlong)param_2 + 0x50) = 0;
  *(undefined4 *)((longlong)param_2 + 0x54) = 0;
  *(undefined4 *)((longlong)param_2 + 0x58) = 0;
  *(undefined4 *)((longlong)param_2 + 0x5c) = 0x3ff00000;
  *(undefined8 *)((longlong)param_2 + 0x60) = 0;
  *(undefined8 *)((longlong)param_2 + 0x68) = 0;
  *(undefined8 *)((longlong)param_2 + 0x70) = 0;
  *(undefined8 *)((longlong)param_2 + 0x78) = 0;
  *(undefined8 *)((longlong)param_2 + 0x80) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_2 + 0x88) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_2 + 0x90) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_2 + 0x98) = 0;
  return;
}



// FUNCTION 147ffee08 FUN_147ffee08 body=63 status=ok
// SIG undefined FUN_147ffee08(void)

undefined1 FUN_147ffee08(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147ffef36(param_2,param_3);
    param_3 = param_3 + 0xb0;
    param_2 = param_2 + 0xb0;
  }
  return 1;
}



// FUNCTION 147ffee70 FUN_147ffee70 body=59 status=ok
// SIG undefined FUN_147ffee70(void)

undefined8 FUN_147ffee70(longlong *param_1)

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



// FUNCTION 147ffeebc FUN_147ffeebc body=44 status=ok
// SIG undefined FUN_147ffeebc(void)

void FUN_147ffeebc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb0) == '\x01') {
    if (*(longlong *)(param_2 + 0x20) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xb0) = 0;
  }
  return;
}



// FUNCTION 147ffef36 FUN_147ffef36 body=122 status=ok
// SIG undefined FUN_147ffef36(void)

undefined4 * FUN_147ffef36(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
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
  FUN_144a787a6(param_1 + 8,param_2 + 8);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  puVar9 = (undefined8 *)(param_2 + 0x10);
  puVar10 = (undefined8 *)(param_1 + 0x10);
  for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  lVar8 = *(longlong *)(param_2 + 0x28);
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar8 = *(longlong *)(param_2 + 0x28);
    }
  }
  *(longlong *)(param_1 + 0x28) = lVar8;
  return param_1;
}



// FUNCTION 147ffeff0 FUN_147ffeff0 body=63 status=ok
// SIG undefined FUN_147ffeff0(void)

undefined1 FUN_147ffeff0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147fff11a(param_2,param_3);
    param_3 = param_3 + 0xe0;
    param_2 = param_2 + 0xe0;
  }
  return 1;
}



// FUNCTION 147fff058 FUN_147fff058 body=59 status=ok
// SIG undefined FUN_147fff058(void)

undefined8 FUN_147fff058(longlong *param_1)

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



// FUNCTION 147fff0a4 FUN_147fff0a4 body=40 status=ok
// SIG undefined FUN_147fff0a4(void)

void FUN_147fff0a4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe0) == '\x01') {
    FUN_145acfbdc(param_2);
    *(undefined1 *)(param_2 + 0xe0) = 0;
  }
  return;
}



// FUNCTION 147fff11a FUN_147fff11a body=223 status=ok
// SIG undefined FUN_147fff11a(void)

longlong FUN_147fff11a(longlong param_1,longlong param_2)

{
  FUN_147fff1fa();
  FUN_147fff25a(param_1 + 0x10,param_2 + 0x10);
  FUN_147fff2ba(param_1 + 0x20,param_2 + 0x20);
  FUN_147fff31a(param_1 + 0x30,param_2 + 0x30);
  FUN_147fff37a(param_1 + 0x40,param_2 + 0x40);
  FUN_147fff3da(param_1 + 0x50,param_2 + 0x50);
  FUN_147fff43a(param_1 + 0x60,param_2 + 0x60);
  FUN_147fff49a(param_1 + 0x70,param_2 + 0x70);
  FUN_147fff4fa(param_1 + 0x80,param_2 + 0x80);
  FUN_147fff55a(param_1 + 0x90,param_2 + 0x90);
  FUN_147fff5ba(param_1 + 0xa0,param_2 + 0xa0);
  FUN_147fff61a(param_1 + 0xb0,param_2 + 0xb0);
  FUN_147fff67a(param_1 + 0xc0,param_2 + 0xc0);
  FUN_147fff6da(param_1 + 0xd0,param_2 + 0xd0);
  return param_1;
}



// FUNCTION 147fff1fa FUN_147fff1fa body=95 status=ok
// SIG undefined FUN_147fff1fa(void)

undefined8 * FUN_147fff1fa(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145ad0054(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147fff73a(param_1,iVar1);
      FUN_147fff7ad(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147fff25a FUN_147fff25a body=95 status=ok
// SIG undefined FUN_147fff25a(void)

undefined8 * FUN_147fff25a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145ad0023(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147fff87e(param_1,iVar1);
      FUN_147fff8f1(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147fff2ba FUN_147fff2ba body=95 status=ok
// SIG undefined FUN_147fff2ba(void)

undefined8 * FUN_147fff2ba(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145acfff2(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147fff9c2(param_1,iVar1);
      FUN_147fffa35(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147fff31a FUN_147fff31a body=95 status=ok
// SIG undefined FUN_147fff31a(void)

undefined8 * FUN_147fff31a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145acffc1(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147fffb0a(param_1,iVar1);
      FUN_147fffb7d(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147fff37a FUN_147fff37a body=95 status=ok
// SIG undefined FUN_147fff37a(void)

undefined8 * FUN_147fff37a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145acff90(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147fffc52(param_1,iVar1);
      FUN_147fffcc5(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147fff3da FUN_147fff3da body=95 status=ok
// SIG undefined FUN_147fff3da(void)

undefined8 * FUN_147fff3da(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145acff5f(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147fffd98(param_1,iVar1);
      FUN_147fffe0b(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147fff43a FUN_147fff43a body=95 status=ok
// SIG undefined FUN_147fff43a(void)

undefined8 * FUN_147fff43a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145acff2e(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147fffede(param_1,iVar1);
      FUN_147ffff51(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147fff49a FUN_147fff49a body=95 status=ok
// SIG undefined FUN_147fff49a(void)

undefined8 * FUN_147fff49a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145acfefd(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14800002a(param_1,iVar1);
      FUN_148000099(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147fff4fa FUN_147fff4fa body=95 status=ok
// SIG undefined FUN_147fff4fa(void)

undefined8 * FUN_147fff4fa(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145acfecc(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148000174(param_1,iVar1);
      FUN_1480001e7(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147fff55a FUN_147fff55a body=95 status=ok
// SIG undefined FUN_147fff55a(void)

undefined8 * FUN_147fff55a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145acfe9b(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1480002ba(param_1,iVar1);
      FUN_148000329(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147fff5ba FUN_147fff5ba body=95 status=ok
// SIG undefined FUN_147fff5ba(void)

undefined8 * FUN_147fff5ba(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145acfe6a(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148000404(param_1,iVar1);
      FUN_148000477(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147fff61a FUN_147fff61a body=95 status=ok
// SIG undefined FUN_147fff61a(void)

undefined8 * FUN_147fff61a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145acfe39(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148000550(param_1,iVar1);
      FUN_1480005bf(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147fff67a FUN_147fff67a body=95 status=ok
// SIG undefined FUN_147fff67a(void)

undefined8 * FUN_147fff67a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145acfe08(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14800069a(param_1,iVar1);
      FUN_1480006fc(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147fff6da FUN_147fff6da body=95 status=ok
// SIG undefined FUN_147fff6da(void)

undefined8 * FUN_147fff6da(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145ad0085(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1480007e6(param_1,iVar1);
      FUN_148000858(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147fff73a FUN_147fff73a body=115 status=ok
// SIG undefined FUN_147fff73a(void)

void FUN_147fff73a(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x48,8);
    iVar2 = (int)(uVar1 / 0x48);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x48,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147fff7ad FUN_147fff7ad body=52 status=ok
// SIG undefined FUN_147fff7ad(void)

void FUN_147fff7ad(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_147fff7e2(param_1,param_2);
    param_1 = param_1 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return;
}



// FUNCTION 147fff7e2 FUN_147fff7e2 body=156 status=ok
// SIG undefined FUN_147fff7e2(void)

undefined4 * FUN_147fff7e2(undefined4 *param_1,undefined4 *param_2)

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
  
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  uVar7 = param_2[5];
  uVar8 = param_2[6];
  uVar9 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar7;
  param_1[6] = uVar8;
  param_1[7] = uVar9;
  *param_1 = uVar3;
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  *(undefined8 *)(param_1 + 8) = 0;
  iVar1 = param_2[10];
  _Src = *(void **)(param_2 + 8);
  param_1[10] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0xb] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 8,iVar1,0);
    memcpy(*(void **)(param_1 + 8),_Src,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  lVar2 = *(longlong *)(param_2 + 0x10);
  *(longlong *)(param_1 + 0x10) = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 147fff87e FUN_147fff87e body=115 status=ok
// SIG undefined FUN_147fff87e(void)

void FUN_147fff87e(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x48,8);
    iVar2 = (int)(uVar1 / 0x48);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x48,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147fff8f1 FUN_147fff8f1 body=52 status=ok
// SIG undefined FUN_147fff8f1(void)

void FUN_147fff8f1(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_147fff926(param_1,param_2);
    param_1 = param_1 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return;
}



// FUNCTION 147fff926 FUN_147fff926 body=156 status=ok
// SIG undefined FUN_147fff926(void)

undefined4 * FUN_147fff926(undefined4 *param_1,undefined4 *param_2)

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
  
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  uVar7 = param_2[5];
  uVar8 = param_2[6];
  uVar9 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar7;
  param_1[6] = uVar8;
  param_1[7] = uVar9;
  *param_1 = uVar3;
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  *(undefined8 *)(param_1 + 8) = 0;
  iVar1 = param_2[10];
  _Src = *(void **)(param_2 + 8);
  param_1[10] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0xb] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 8,iVar1,0);
    memcpy(*(void **)(param_1 + 8),_Src,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  param_1[0xe] = param_2[0xe];
  lVar2 = *(longlong *)(param_2 + 0x10);
  *(longlong *)(param_1 + 0x10) = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 147fff9c2 FUN_147fff9c2 body=115 status=ok
// SIG undefined FUN_147fff9c2(void)

void FUN_147fff9c2(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x48,8);
    iVar2 = (int)(uVar1 / 0x48);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x48,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147fffa35 FUN_147fffa35 body=52 status=ok
// SIG undefined FUN_147fffa35(void)

void FUN_147fffa35(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_147fffa6a(param_1,param_2);
    param_1 = param_1 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return;
}



// FUNCTION 147fffa6a FUN_147fffa6a body=160 status=ok
// SIG undefined FUN_147fffa6a(void)

undefined4 * FUN_147fffa6a(undefined4 *param_1,undefined4 *param_2)

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
  
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  uVar7 = param_2[5];
  uVar8 = param_2[6];
  uVar9 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar7;
  param_1[6] = uVar8;
  param_1[7] = uVar9;
  *param_1 = uVar3;
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  *(undefined8 *)(param_1 + 8) = 0;
  iVar1 = param_2[10];
  _Src = *(void **)(param_2 + 8);
  param_1[10] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0xb] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 8,iVar1,0);
    memcpy(*(void **)(param_1 + 8),_Src,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  param_1[0xe] = param_2[0xe];
  lVar2 = *(longlong *)(param_2 + 0x10);
  *(longlong *)(param_1 + 0x10) = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 147fffb0a FUN_147fffb0a body=115 status=ok
// SIG undefined FUN_147fffb0a(void)

void FUN_147fffb0a(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x48,8);
    iVar2 = (int)(uVar1 / 0x48);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x48,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147fffb7d FUN_147fffb7d body=52 status=ok
// SIG undefined FUN_147fffb7d(void)

void FUN_147fffb7d(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_147fffbb2(param_1,param_2);
    param_1 = param_1 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return;
}



// FUNCTION 147fffbb2 FUN_147fffbb2 body=160 status=ok
// SIG undefined FUN_147fffbb2(void)

undefined4 * FUN_147fffbb2(undefined4 *param_1,undefined4 *param_2)

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
  
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  uVar7 = param_2[5];
  uVar8 = param_2[6];
  uVar9 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar7;
  param_1[6] = uVar8;
  param_1[7] = uVar9;
  *param_1 = uVar3;
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  *(undefined8 *)(param_1 + 8) = 0;
  iVar1 = param_2[10];
  _Src = *(void **)(param_2 + 8);
  param_1[10] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0xb] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 8,iVar1,0);
    memcpy(*(void **)(param_1 + 8),_Src,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  lVar2 = *(longlong *)(param_2 + 0x10);
  *(longlong *)(param_1 + 0x10) = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 147fffc52 FUN_147fffc52 body=115 status=ok
// SIG undefined FUN_147fffc52(void)

void FUN_147fffc52(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x48,8);
    iVar2 = (int)(uVar1 / 0x48);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x48,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}


