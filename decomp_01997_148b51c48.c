// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148b51c48 FUN_148b51c48 body=47 status=ok
// SIG undefined FUN_148b51c48(void)

longlong * FUN_148b51c48(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_145b88848();
  *param_2 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar1);
  }
  return param_2;
}



// FUNCTION 148b51c7e FUN_148b51c7e body=45 status=ok
// SIG undefined FUN_148b51c7e(void)

longlong FUN_148b51c7e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145b21608(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b51cac FUN_148b51cac body=45 status=ok
// SIG undefined FUN_148b51cac(void)

longlong FUN_148b51cac(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145bf1364(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b51cda FUN_148b51cda body=45 status=ok
// SIG undefined FUN_148b51cda(void)

longlong FUN_148b51cda(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145bf140c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b51d08 FUN_148b51d08 body=45 status=ok
// SIG undefined FUN_148b51d08(void)

longlong FUN_148b51d08(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1458e4ec6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b51d36 FUN_148b51d36 body=45 status=ok
// SIG undefined FUN_148b51d36(void)

longlong FUN_148b51d36(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145e2fefa(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b51d64 FUN_148b51d64 body=45 status=ok
// SIG undefined FUN_148b51d64(void)

longlong FUN_148b51d64(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145851c42(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b51d92 FUN_148b51d92 body=45 status=ok
// SIG undefined FUN_148b51d92(void)

longlong FUN_148b51d92(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140f3c930(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b51dc0 FUN_148b51dc0 body=45 status=ok
// SIG undefined FUN_148b51dc0(void)

longlong FUN_148b51dc0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_141147776(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b51df6 FUN_148b51df6 body=99 status=ok
// SIG undefined FUN_148b51df6(void)

undefined8 * FUN_148b51df6(undefined8 *param_1)

{
  FUN_140bf9282();
  *param_1 = &PTR_FUN_14b58adc0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  FUN_141067f4a(param_1 + 0xd);
  param_1[0xd] = &PTR_FUN_14b595c70;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  return param_1;
}



// FUNCTION 148b51e5a FUN_148b51e5a body=247 status=ok
// SIG undefined FUN_148b51e5a(void)

void FUN_148b51e5a(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_138 [32];
  undefined8 local_118 [4];
  undefined1 local_f8 [176];
  undefined1 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_118[0] = 0;
  FUN_144a5dc74();
  FUN_140ca8f8e(local_f8);
  local_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_118);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_118);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar1 = local_118;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (*(code *)**(undefined8 **)(param_1 + 0x13c8))(param_1 + 0x13c8,puVar1);
  FUN_148b51f52(local_118);
  if ((local_28 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b51f52 FUN_148b51f52 body=91 status=ok
// SIG undefined FUN_148b51f52(void)

void FUN_148b51f52(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined ***)(param_1 + 0x20) = &PTR_FUN_149ed05f0;
  plVar3 = *(longlong **)(param_1 + 0xc0);
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
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148b51fa1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    return;
  }
  return;
}



// FUNCTION 148b51fb8 FUN_148b51fb8 body=237 status=ok
// SIG undefined FUN_148b51fb8(void)

void FUN_148b51fb8(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_138 [32];
  undefined8 local_118 [4];
  undefined1 local_f8 [176];
  undefined1 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_118[0] = 0;
  FUN_144a5dc74();
  FUN_140ca8f8e(local_f8);
  local_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  lVar1 = FUN_1400796d0(param_1[2],DAT_14cb9cfd8,1);
  if (lVar1 == 0) {
    uVar2 = FUN_1459f26ec();
    puVar3 = (undefined8 *)FUN_1468ff240(param_1,uVar2);
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,param_2);
    }
  }
  else {
    FUN_148b520a6(local_118,param_2);
    (**(code **)(*param_1 + 0x248))(param_1,lVar1,local_118);
  }
  FUN_148b51f52(local_118);
  if ((local_28 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b520a6 FUN_148b520a6 body=238 status=ok
// SIG undefined FUN_148b520a6(void)

undefined8 * FUN_148b520a6(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  byte bVar3;
  longlong lVar4;
  
  *param_1 = *param_2;
  plVar1 = (longlong *)param_2[1];
  plVar2 = (longlong *)param_1[1];
  if (plVar2 != plVar1) {
    param_1[1] = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  FUN_140f13d9e(param_1 + 4,param_2 + 4);
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(param_2 + 0x1a);
  lVar4 = param_2[0x1b];
  if (DAT_14c950c29 == 1) {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = param_2[0x1b];
    }
  }
  bVar3 = DAT_14c950c29;
  param_1[0x1b] = lVar4;
  lVar4 = param_2[0x1c];
  if ((bVar3 & 1) != 0) {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = param_2[0x1c];
      bVar3 = DAT_14c950c29;
    }
  }
  param_1[0x1c] = lVar4;
  lVar4 = param_2[0x1d];
  if ((bVar3 & 1) != 0) {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = param_2[0x1d];
    }
  }
  param_1[0x1d] = lVar4;
  return param_1;
}



// FUNCTION 148b52194 FUN_148b52194 body=236 status=ok
// SIG undefined FUN_148b52194(void)

void FUN_148b52194(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_138 [32];
  undefined8 local_118 [4];
  undefined1 local_f8 [176];
  undefined1 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_118[0] = 0;
  FUN_144a5dc74();
  FUN_140ca8f8e(local_f8);
  local_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_118);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_118);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar1 = local_118;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)*param_1)(param_1,puVar1);
  FUN_148b51f52(local_118);
  if ((local_28 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b52284 FUN_148b52284 body=66 status=ok
// SIG undefined FUN_148b52284(void)

void FUN_148b52284(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_10 = param_3;
  FUN_1447cd2ec(param_1,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b522d0 FUN_148b522d0 body=323 status=ok
// SIG undefined FUN_148b522d0(void)

void FUN_148b522d0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_158 [40];
  undefined8 local_130;
  undefined8 local_128 [4];
  undefined1 local_108 [176];
  undefined1 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_130 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_130);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_130);
  }
  local_128[0] = 0;
  FUN_144a5dc74();
  FUN_140ca8f8e(local_108);
  local_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_128);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_128);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar2 = local_128;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148b56aec(param_1,local_130,puVar2);
  *param_3 = uVar1;
  FUN_148b51f52(local_128);
  if ((local_30 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b52414 FUN_148b52414 body=37 status=ok
// SIG undefined FUN_148b52414(void)

void FUN_148b52414(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148b56fd6();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148b5243e FUN_148b5243e body=37 status=ok
// SIG undefined FUN_148b5243e(void)

void FUN_148b5243e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148b56f4c();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148b52468 FUN_148b52468 body=37 status=ok
// SIG undefined FUN_148b52468(void)

void FUN_148b52468(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148b56f6e();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148b52494 FUN_148b52494 body=163 status=ok
// SIG undefined FUN_148b52494(void)

void FUN_148b52494(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148b56f9e(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b52540 FUN_148b52540 body=247 status=ok
// SIG undefined FUN_148b52540(void)

void FUN_148b52540(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_148 [32];
  undefined8 local_128 [4];
  undefined1 local_108 [176];
  undefined1 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_128[0] = 0;
  FUN_144a5dc74();
  FUN_140ca8f8e(local_108);
  local_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_128);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_128);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar2 = local_128;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148b56b74(param_1,puVar2);
  *param_3 = uVar1;
  FUN_148b51f52(local_128);
  if ((local_30 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b5263e FUN_148b5263e body=241 status=ok
// SIG undefined FUN_148b5263e(void)

void FUN_148b5263e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  int local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a63fc8();
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
  FUN_148b56b3c(param_1,local_20,local_24 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b5274a FUN_148b5274a body=117 status=ok
// SIG undefined FUN_148b5274a(void)

void FUN_148b5274a(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_1400796d0(param_1[2],DAT_14cb9d0f0,1);
  if (lVar1 != 0) {
    local_24 = param_2;
    (**(code **)(*param_1 + 0x248))(param_1,lVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b527e0 FUN_148b527e0 body=327 status=ok
// SIG undefined FUN_148b527e0(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_148b527e0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [4];
  
  local_38[3] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[2] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
  }
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 1);
  }
  plVar1 = local_38 + 1;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38[0] = local_38[2];
  if ((local_38[2] != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  (**(code **)(*param_1 + 0x20))(param_1,local_38,plVar1);
  if ((DAT_14c950c29 == '\x01') && (*plVar1 != 0)) {
    FUN_1456cec3c();
  }
  if ((local_38[3] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b52940 FUN_148b52940 body=157 status=ok
// SIG undefined FUN_148b52940(void)

void FUN_148b52940(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x10))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b529fa FUN_148b529fa body=199 status=ok
// SIG undefined FUN_148b529fa(void)

longlong * FUN_148b529fa(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_14477b072(param_1,DAT_14cb9d288);
  lVar2 = FUN_14570ab3e(uVar1);
  if ((*(byte *)(lVar2 + 0xd4) & 0x80) == 0) {
    local_38 = 0;
    local_40 = param_3;
    (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_40);
    *param_2 = local_38;
    if ((local_38 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
  }
  (**(code **)(*param_1 + 0x2a8))(param_1,param_2,param_3);
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148b52ac2 FUN_148b52ac2 body=207 status=ok
// SIG undefined FUN_148b52ac2(void)

void FUN_148b52ac2(longlong *param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  (**(code **)(*param_1 + 0x2a8))(param_1,&local_30,local_28);
  if (DAT_14c950c29 == '\x01') {
    if (local_30 == 0) {
      local_30 = 0;
    }
    else {
      FUN_1456cec3c();
    }
  }
  *param_3 = local_30;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b52bba FUN_148b52bba body=7 status=ok
// SIG undefined FUN_148b52bba(void)

void FUN_148b52bba(undefined8 param_1)

{
  FUN_1447cd2ec(param_1,0);
  return;
}



// FUNCTION 148b52be0 FUN_148b52be0 body=37 status=ok
// SIG undefined FUN_148b52be0(void)

void FUN_148b52be0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148b68822();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148b52c26 FUN_148b52c26 body=263 status=ok
// SIG undefined FUN_148b52c26(void)

void FUN_148b52c26(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_58 [47];
  undefined1 local_29;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_29 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
  puVar2 = &local_29;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148b68a00(param_1,local_28,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b52d4c FUN_148b52d4c body=156 status=ok
// SIG undefined FUN_148b52d4c(void)

void FUN_148b52d4c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148b688b6(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b52dea FUN_148b52dea body=180 status=ok
// SIG undefined FUN_148b52dea(void)

void FUN_148b52dea(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  FUN_148b68932(param_1,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b52ea0 FUN_148b52ea0 body=134 status=ok
// SIG undefined FUN_148b52ea0(void)

void FUN_148b52ea0(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_14477b072(param_1,DAT_14cb9d370);
  lVar2 = FUN_14570ab3e(uVar1);
  if ((*(byte *)(lVar2 + 0xd4) & 0x80) == 0) {
    local_21 = (undefined1)param_2;
    (**(code **)(*param_1 + 0x248))(param_1,uVar1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_143fdbea2(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b52f34 FUN_148b52f34 body=158 status=ok
// SIG undefined FUN_148b52f34(void)

void FUN_148b52f34(undefined8 param_1,longlong param_2)

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
  FUN_143fdbea2(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b52fde FUN_148b52fde body=45 status=ok
// SIG undefined FUN_148b52fde(void)

longlong FUN_148b52fde(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145c8fba0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b53012 FUN_148b53012 body=45 status=ok
// SIG undefined FUN_148b53012(void)

longlong FUN_148b53012(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145dc5680(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b53040 FUN_148b53040 body=45 status=ok
// SIG undefined FUN_148b53040(void)

longlong FUN_148b53040(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145c199cc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b5306e FUN_148b5306e body=45 status=ok
// SIG undefined FUN_148b5306e(void)

longlong FUN_148b5306e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145beb4f2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b5309c FUN_148b5309c body=45 status=ok
// SIG undefined FUN_148b5309c(void)

longlong FUN_148b5309c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145beb59a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b530ca FUN_148b530ca body=45 status=ok
// SIG undefined FUN_148b530ca(void)

longlong FUN_148b530ca(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145bf14b4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b530fe FUN_148b530fe body=45 status=ok
// SIG undefined FUN_148b530fe(void)

longlong FUN_148b530fe(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_141119892(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b5312c FUN_148b5312c body=45 status=ok
// SIG undefined FUN_148b5312c(void)

longlong FUN_148b5312c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145d71676(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b53174 FUN_148b53174 body=45 status=ok
// SIG undefined FUN_148b53174(void)

longlong FUN_148b53174(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145948cb6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b531a2 FUN_148b531a2 body=45 status=ok
// SIG undefined FUN_148b531a2(void)

longlong FUN_148b531a2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145aa0a8a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b531d0 FUN_148b531d0 body=45 status=ok
// SIG undefined FUN_148b531d0(void)

longlong FUN_148b531d0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145ac6f9a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b531fe FUN_148b531fe body=45 status=ok
// SIG undefined FUN_148b531fe(void)

longlong FUN_148b531fe(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145c5da40(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b5322c FUN_148b5322c body=45 status=ok
// SIG undefined FUN_148b5322c(void)

longlong FUN_148b5322c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145aff2f8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b5325e FUN_148b5325e body=45 status=ok
// SIG undefined FUN_148b5325e(void)

longlong FUN_148b5325e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145807312(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b5328c FUN_148b5328c body=45 status=ok
// SIG undefined FUN_148b5328c(void)

longlong FUN_148b5328c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_141471a12(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b532c0 FUN_148b532c0 body=45 status=ok
// SIG undefined FUN_148b532c0(void)

longlong FUN_148b532c0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_141551dec(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b532ee FUN_148b532ee body=45 status=ok
// SIG undefined FUN_148b532ee(void)

longlong FUN_148b532ee(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145ac6e1a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b5331c FUN_148b5331c body=45 status=ok
// SIG undefined FUN_148b5331c(void)

longlong FUN_148b5331c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145ac6e9a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b5334a FUN_148b5334a body=54 status=ok
// SIG undefined FUN_148b5334a(void)

void FUN_148b5334a(undefined8 param_1,undefined8 *param_2)

{
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_141067f4a(param_2);
  *param_2 = &PTR_FUN_14b595c70;
  param_2[5] = 0;
  return;
}



// FUNCTION 148b53380 FUN_148b53380 body=40 status=ok
// SIG undefined FUN_148b53380(void)

void FUN_148b53380(undefined8 param_1,undefined8 *param_2)

{
  FUN_141067f4a(param_2);
  *param_2 = &PTR_FUN_14b595c70;
  param_2[5] = 0;
  return;
}



// FUNCTION 148b533f8 FUN_148b533f8 body=59 status=ok
// SIG undefined FUN_148b533f8(void)

undefined8 FUN_148b533f8(longlong *param_1)

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



// FUNCTION 148b5343e FUN_148b5343e body=32 status=ok
// SIG undefined FUN_148b5343e(void)

void FUN_148b5343e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_144760f98(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 148b534ae FUN_148b534ae body=38 status=ok
// SIG undefined FUN_148b534ae(void)

undefined8 FUN_148b534ae(undefined8 param_1,int param_2)

{
  FUN_144760f98();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b534d4 FUN_148b534d4 body=63 status=ok
// SIG undefined FUN_148b534d4(void)

void FUN_148b534d4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_144a5dc74(param_2 + 1);
  FUN_140ca8f8e(param_2 + 4);
  *(undefined1 *)(param_2 + 0x1a) = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  return;
}



// FUNCTION 148b53514 FUN_148b53514 body=63 status=ok
// SIG undefined FUN_148b53514(void)

void FUN_148b53514(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_144a5dc74(param_2 + 1);
  FUN_140ca8f8e(param_2 + 4);
  *(undefined1 *)(param_2 + 0x1a) = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  return;
}



// FUNCTION 148b53572 FUN_148b53572 body=63 status=ok
// SIG undefined FUN_148b53572(void)

undefined1 FUN_148b53572(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b520a6(param_2,param_3);
    param_3 = param_3 + 0xf0;
    param_2 = param_2 + 0xf0;
  }
  return 1;
}



// FUNCTION 148b535da FUN_148b535da body=59 status=ok
// SIG undefined FUN_148b535da(void)

undefined8 FUN_148b535da(longlong *param_1)

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



// FUNCTION 148b53626 FUN_148b53626 body=40 status=ok
// SIG undefined FUN_148b53626(void)

void FUN_148b53626(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf0) == '\x01') {
    FUN_148b51f52(param_2);
    *(undefined1 *)(param_2 + 0xf0) = 0;
  }
  return;
}



// FUNCTION 148b5369e FUN_148b5369e body=46 status=ok
// SIG undefined FUN_148b5369e(void)

void FUN_148b5369e(undefined8 param_1,undefined8 *param_2)

{
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_141067f4a(param_2);
  *param_2 = &PTR_FUN_14b56e140;
  return;
}



// FUNCTION 148b536cc FUN_148b536cc body=32 status=ok
// SIG undefined FUN_148b536cc(void)

void FUN_148b536cc(undefined8 param_1,undefined8 *param_2)

{
  FUN_141067f4a(param_2);
  *param_2 = &PTR_FUN_14b56e140;
  return;
}



// FUNCTION 148b5373c FUN_148b5373c body=59 status=ok
// SIG undefined FUN_148b5373c(void)

undefined8 FUN_148b5373c(longlong *param_1)

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



// FUNCTION 148b53782 FUN_148b53782 body=32 status=ok
// SIG undefined FUN_148b53782(void)

void FUN_148b53782(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_144760f98(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 148b5386c FUN_148b5386c body=59 status=ok
// SIG undefined FUN_148b5386c(void)

undefined8 FUN_148b5386c(longlong *param_1)

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



// FUNCTION 148b53958 FUN_148b53958 body=115 status=ok
// SIG undefined FUN_148b53958(void)

undefined1 FUN_148b53958(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined1 *)(param_2 + lVar1) = *(undefined1 *)(param_3 + lVar1);
      FUN_144a787a6();
      FUN_140c19cf6(param_2 + lVar1 + 0x18,param_3 + lVar1 + 0x18);
      FUN_140c19cf6(param_2 + lVar1 + 0x28,param_3 + lVar1 + 0x28);
      lVar1 = lVar1 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148b539f4 FUN_148b539f4 body=59 status=ok
// SIG undefined FUN_148b539f4(void)

undefined8 FUN_148b539f4(longlong *param_1)

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



// FUNCTION 148b53a3a FUN_148b53a3a body=34 status=ok
// SIG undefined FUN_148b53a3a(void)

void FUN_148b53a3a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_148b4f014(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 148b53aab FUN_148b53aab body=57 status=ok
// SIG undefined FUN_148b53aab(void)

void FUN_148b53aab(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = 0;
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_140113f3a();
        *(undefined8 *)(param_1 + lVar1 * 8) = 0;
      }
      lVar1 = lVar1 + 1;
    } while (param_2 != (int)lVar1);
  }
  return;
}



// FUNCTION 148b53ae4 FUN_148b53ae4 body=238 status=ok
// SIG undefined FUN_148b53ae4(void)

void FUN_148b53ae4(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446dcc8c();
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
  FUN_148b6793e(param_1,local_20,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b53bd6 FUN_148b53bd6 body=372 status=ok
// SIG undefined FUN_148b53bd6(void)

void FUN_148b53bd6(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined1 local_50 [16];
  longlong *local_40;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  FUN_1446dcc8c();
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
  local_34 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_34;
  FUN_148b66ba6(param_1,local_50,local_28,local_30);
  FUN_148b53d4c(param_3,local_50);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b53d4c FUN_148b53d4c body=105 status=ok
// SIG undefined FUN_148b53d4c(void)

undefined8 * FUN_148b53d4c(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = *param_2;
  if (param_1 != param_2) {
    param_1[1] = param_2[1];
    param_2[1] = 0;
    plVar2 = (longlong *)param_2[2];
    plVar3 = (longlong *)param_1[2];
    if (plVar2 != plVar3) {
      param_2[2] = 0;
      param_1[2] = plVar2;
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
  return param_1;
}



// FUNCTION 148b53db6 FUN_148b53db6 body=453 status=ok
// SIG undefined FUN_148b53db6(void)

void FUN_148b53db6(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_58 [16];
  longlong *local_48;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = 0;
  FUN_1446dcc8c();
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
  local_60 = local_3c;
  local_68 = local_38;
  FUN_148b66c12(param_1,local_58,local_28,local_30);
  FUN_148b53d4c(param_3,local_58);
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
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b53f7c FUN_148b53f7c body=401 status=ok
// SIG undefined FUN_148b53f7c(void)

void FUN_148b53f7c(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  longlong local_58;
  undefined1 local_50 [16];
  longlong *local_40;
  undefined4 local_34;
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = 0;
  FUN_1446dcc8c();
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
  local_34 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  uVar3 = local_34;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_30;
  if ((local_30 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  local_68 = uVar3;
  FUN_148b66a4e(param_1,local_50,local_28,&local_58);
  FUN_148b53d4c(param_3,local_50);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b5410e FUN_148b5410e body=486 status=ok
// SIG undefined FUN_148b5410e(void)

void FUN_148b5410e(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  longlong local_68;
  undefined1 local_60 [16];
  longlong *local_50;
  undefined4 local_44;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_30 = 0;
  FUN_1446dcc8c();
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
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_44 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  uVar4 = local_40;
  uVar3 = local_44;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_38;
  if ((local_38 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  local_70 = uVar3;
  local_78 = uVar4;
  FUN_148b66ace(param_1,local_60,local_30,&local_68);
  FUN_148b53d4c(param_3,local_60);
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)local_50 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_50 + 0x10))(local_50);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b542f6 FUN_148b542f6 body=523 status=ok
// SIG undefined FUN_148b542f6(void)

void FUN_148b542f6(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  undefined4 *local_90;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 local_70 [16];
  longlong *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48 [2];
  undefined1 local_31;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_30 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_31 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_31);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_31);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar2 = local_48;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_58 = 0;
  uStack_50 = 0;
  FUN_140e6158c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_90 = &local_80;
  local_80 = (undefined4)local_58;
  uStack_7c = local_58._4_4_;
  uStack_78 = (undefined4)uStack_50;
  uStack_74 = uStack_50._4_4_;
  local_98 = plVar2;
  FUN_148b668f2(param_1,local_70,local_30,local_31);
  FUN_148b54502(param_3,local_70);
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_60 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)local_60 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_60 + 0x10))(local_60);
      }
    }
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b54502 FUN_148b54502 body=105 status=ok
// SIG undefined FUN_148b54502(void)

undefined8 * FUN_148b54502(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = *param_2;
  if (param_1 != param_2) {
    param_1[1] = param_2[1];
    param_2[1] = 0;
    plVar2 = (longlong *)param_2[2];
    plVar3 = (longlong *)param_1[2];
    if (plVar2 != plVar3) {
      param_2[2] = 0;
      param_1[2] = plVar2;
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
  return param_1;
}



// FUNCTION 148b5456c FUN_148b5456c body=217 status=ok
// SIG undefined FUN_148b5456c(void)

void FUN_148b5456c(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  puVar4 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar4 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143fd6a00(param_1,puVar4);
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b54646 FUN_148b54646 body=217 status=ok
// SIG undefined FUN_148b54646(void)

void FUN_148b54646(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  puVar4 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar4 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143fd68c6(param_1,puVar4);
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b5472a FUN_148b5472a body=216 status=ok
// SIG undefined FUN_148b5472a(void)

void FUN_148b5472a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  puVar5 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar5 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_148b66cde(puVar5);
  plVar3 = local_28;
  *param_3 = uVar4;
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b54804 FUN_148b54804 body=209 status=ok
// SIG undefined FUN_148b54804(void)

void FUN_148b54804(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  puVar4 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar4 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148b66cb4(puVar4);
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b548e0 FUN_148b548e0 body=216 status=ok
// SIG undefined FUN_148b548e0(void)

void FUN_148b548e0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  puVar5 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar5 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_148b66d12(puVar5);
  plVar3 = local_28;
  *param_3 = uVar4;
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b549ba FUN_148b549ba body=209 status=ok
// SIG undefined FUN_148b549ba(void)

void FUN_148b549ba(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  puVar4 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar4 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148b66ce8(puVar4);
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b54a90 FUN_148b54a90 body=218 status=ok
// SIG undefined FUN_148b54a90(void)

longlong * FUN_148b54a90(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined1 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  if (param_2[1] == 0) {
    plVar6 = (longlong *)0x0;
    FUN_1415b7ec4(L"CreateWidgetAsync was passed a null UserWidgetSoftClass",2,0);
  }
  else {
    lVar4 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
    uVar5 = FUN_1409ffe1d();
    plVar6 = (longlong *)FUN_148b54b6a(uVar5);
    plVar6[0xd] = *param_2;
    uVar1 = *(undefined4 *)((longlong)param_2 + 0xc);
    lVar3 = param_2[2];
    uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
    *(int *)(plVar6 + 0xe) = (int)param_2[1];
    *(undefined4 *)((longlong)plVar6 + 0x74) = uVar1;
    *(int *)(plVar6 + 0xf) = (int)lVar3;
    *(undefined4 *)((longlong)plVar6 + 0x7c) = uVar2;
    FUN_144a787a6(plVar6 + 0x10,param_2 + 3);
    FUN_14485c47a(plVar6 + 9,param_3);
    FUN_14485c47a(plVar6 + 10,lVar4);
    FUN_14485c47a(plVar6 + 0xb,*(undefined8 *)(lVar4 + 0x1f0));
    *(undefined1 *)(plVar6 + 0xc) = param_4;
    (**(code **)(*plVar6 + 0x2b0))(plVar6,lVar4);
  }
  if (param_2[3] != 0) {
    FUN_1400020a8();
  }
  return plVar6;
}



// FUNCTION 148b54b6a FUN_148b54b6a body=148 status=ok
// SIG undefined FUN_148b54b6a(void)

undefined8 FUN_148b54b6a(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145998c32();
  FUN_144a5c54a(local_a8,uVar1);
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



// FUNCTION 148b54c00 FUN_148b54c00 body=701 status=ok
// SIG undefined FUN_148b54c00(void)

void FUN_148b54c00(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined1 local_90;
  undefined1 local_88;
  undefined1 *local_80;
  undefined8 *local_70;
  undefined4 local_68;
  undefined8 *local_60;
  undefined4 local_58;
  undefined1 local_49;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  uVar5 = DAT_14cb9d6e8;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x60) == '\x01') {
    lVar7 = FUN_14479d2ce(param_1 + 0x48);
    if (lVar7 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = FUN_144a7ba4c(lVar7);
    }
    FUN_148b55e12(&local_48,uVar8,uVar5);
    uVar5 = local_48;
  }
  else {
    uVar5 = 0;
  }
  *(undefined8 *)(param_1 + 0x40) = uVar5;
  local_38 = 0;
  FUN_14485c47a(&local_38,param_1);
  FUN_14050fd64();
  lVar6 = FUN_14050fd64();
  local_60 = (undefined8 *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,3,0x10);
  puVar4 = local_60;
  local_58 = 3;
  *local_60 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar9 = DAT_14c758608 + 1;
  lVar7 = DAT_14c758608 + 1;
  if (lVar9 == 0) {
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 2;
    lVar7 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar7;
  local_60[2] = lVar9;
  *local_60 = &PTR_FUN_14b59ca40;
  local_60[3] = 0;
  FUN_14485c47a(local_60 + 3,param_1);
  puVar4[4] = FUN_148b54ef4;
  local_80 = &local_49;
  local_88 = 0;
  local_90 = 0;
  local_98 = 100;
  FUN_140a1e0be(lVar6 + 0x1e8,&local_48,param_1 + 0x70,&local_60);
  plVar1 = local_40;
  if ((undefined8 *)(param_1 + 0x90) != &local_48) {
    *(undefined8 *)(param_1 + 0x90) = local_48;
    local_48 = 0;
    plVar3 = *(longlong **)(param_1 + 0x98);
    if (local_40 != plVar3) {
      local_40 = (longlong *)0x0;
      *(longlong **)(param_1 + 0x98) = plVar1;
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
  plVar1 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_40 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  FUN_1449db362(&local_60);
  uVar5 = *(undefined8 *)(param_1 + 0x90);
  local_70 = (undefined8 *)0x0;
  local_68 = 0;
  FUN_1446efa72(&local_70,0,3,0x10);
  puVar4 = local_70;
  local_68 = 3;
  *local_70 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar7 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar7 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar7;
  local_70[2] = lVar6;
  *local_70 = &PTR_FUN_14b59cab0;
  local_70[3] = 0;
  FUN_14485c47a(local_70 + 3,param_1);
  puVar4[4] = param_1;
  FUN_147d5d8a0(uVar5,&local_70);
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b54ebe FUN_148b54ebe body=53 status=ok
// SIG undefined FUN_148b54ebe(void)

undefined8 FUN_148b54ebe(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144a7ba4c(param_2);
  }
  FUN_148b55e12(param_1,uVar1,param_3);
  return param_1;
}



// FUNCTION 148b54ef4 FUN_148b54ef4 body=610 status=ok
// SIG undefined FUN_148b54ef4(void)

void FUN_148b54ef4(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((char)param_1[0xc] == '\x01') {
    lVar6 = param_1[8];
    lVar7 = FUN_14479d2ce(param_1 + 9);
    if (lVar7 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = FUN_144a7ba4c(lVar7);
    }
    FUN_148b55e90(uVar8,lVar6);
  }
  plVar4 = param_1 + 0xd;
  lVar6 = FUN_14479d2ce(plVar4);
  if (lVar6 == 0) {
    if (param_1[0xe] == 0) goto LAB_148b550b9;
    lVar6 = FUN_140007850();
    cVar5 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar6 == 0) || (cVar5 == '\0')) {
      FUN_14485c47a(plVar4,lVar6);
      if (lVar6 == 0) goto LAB_148b550b9;
    }
    else {
      uVar3 = *(uint *)(lVar6 + 0xc);
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      if ((*(uint *)(lVar7 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(plVar4,lVar6);
      }
    }
    if ((*(uint *)(lVar6 + 8) >> 0x1e & 1) != 0) goto LAB_148b550b9;
  }
  lVar7 = FUN_144a797b2();
  if ((((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
        == lVar7 + 0x30)) && (lVar7 = FUN_1405e2bf2(), lVar7 != 0)) &&
     (*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38))) {
    lVar10 = 0;
    if (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
        lVar7 + 0x30) {
      lVar10 = lVar6;
    }
    if ((lVar10 == 0) || (DAT_14c950c29 == '\0')) {
      if (lVar10 == 0) goto LAB_148b550b9;
    }
    else {
      FUN_1456cec3c(lVar10);
    }
    lVar7 = FUN_1405e2bf2();
    if (((lVar7 != 0) && (*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
        lVar7 + 0x30)) {
      uVar8 = FUN_14479d2ce(param_1 + 9);
      local_30 = lVar6;
      if ((lVar10 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar6);
      }
      uVar9 = FUN_14479d2ce(param_1 + 10);
      uVar8 = FUN_1477a047e(uVar9,&local_30,uVar8);
      FUN_148b4d6db(param_1 + 6,uVar8);
    }
  }
LAB_148b550b9:
  param_1[0x12] = 0;
  plVar4 = (longlong *)param_1[0x13];
  if (plVar4 != (longlong *)0x0) {
    param_1[0x13] = 0;
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
  (**(code **)(*param_1 + 0x2b8))(param_1);
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148b55158 FUN_148b55158 body=38 status=ok
// SIG undefined FUN_148b55158(void)

void FUN_148b55158(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144a7ba4c();
  }
  FUN_148b55e90(uVar1,param_2);
  return;
}



// FUNCTION 148b5517e FUN_148b5517e body=210 status=ok
// SIG undefined FUN_148b5517e(void)

longlong * FUN_148b5517e(undefined8 param_1,longlong *param_2,longlong param_3,undefined1 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  if (param_2[1] == 0) {
    plVar6 = (longlong *)0x0;
    FUN_1415b7ec4(L"PushContentToLayerForPlayer was passed a null WidgetClass",2,0);
  }
  else {
    lVar4 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
    if (lVar4 == 0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      uVar5 = FUN_1409ffe1d();
      plVar6 = (longlong *)FUN_148b55250(uVar5);
      plVar6[0xd] = *param_2;
      uVar1 = *(undefined4 *)((longlong)param_2 + 0xc);
      lVar3 = param_2[2];
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
      *(int *)(plVar6 + 0xe) = (int)param_2[1];
      *(undefined4 *)((longlong)plVar6 + 0x74) = uVar1;
      *(int *)(plVar6 + 0xf) = (int)lVar3;
      *(undefined4 *)((longlong)plVar6 + 0x7c) = uVar2;
      FUN_144a787a6(plVar6 + 0x10,param_2 + 3);
      FUN_14485c47a((longlong)plVar6 + 0x5c,param_1);
      plVar6[10] = param_3;
      *(undefined1 *)(plVar6 + 0xb) = param_4;
      (**(code **)(*plVar6 + 0x2b0))(plVar6,lVar4);
    }
  }
  if (param_2[3] != 0) {
    FUN_1400020a8();
  }
  return plVar6;
}



// FUNCTION 148b55250 FUN_148b55250 body=148 status=ok
// SIG undefined FUN_148b55250(void)

undefined8 FUN_148b55250(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145998d1e();
  FUN_144a5c54a(local_a8,uVar1);
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



// FUNCTION 148b552e6 FUN_148b552e6 body=478 status=ok
// SIG undefined FUN_148b552e6(void)

void FUN_148b552e6(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  void *_Src;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  code **local_c0;
  longlong local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  void *local_a0;
  int local_98;
  undefined4 local_94;
  longlong local_90;
  longlong *local_88;
  undefined8 local_80;
  code *local_78 [2];
  undefined8 local_68;
  undefined **local_58;
  longlong *local_50;
  undefined8 local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar4 = FUN_14479d2ce((longlong)param_1 + 0x5c);
  lVar5 = FUN_145a0ffb0(uVar4);
  if (lVar5 != 0) {
    local_80 = 0;
    FUN_14485c47a(&local_80,param_1);
    local_68 = 0;
    local_58 = &PTR_LAB_14b59cb20;
    local_48 = local_80;
    local_78[0] = FUN_143fc630a;
    local_b8 = param_1[0xd];
    local_b0 = (undefined4)param_1[0xe];
    uStack_ac = *(undefined4 *)((longlong)param_1 + 0x74);
    uStack_a8 = (undefined4)param_1[0xf];
    uStack_a4 = *(undefined4 *)((longlong)param_1 + 0x7c);
    local_a0 = (void *)0x0;
    local_98 = (int)param_1[0x11];
    lVar6 = (longlong)local_98;
    _Src = (void *)param_1[0x10];
    local_50 = param_1;
    if (lVar6 == 0) {
      local_94 = 0;
    }
    else {
      FUN_1446dd670(&local_a0,local_98,0);
      memcpy(local_a0,_Src,lVar6 * 2);
    }
    local_c0 = local_78;
    local_c8 = &local_b8;
    FUN_148b554d6(lVar5,&local_90,param_1[10],(char)param_1[0xb]);
    plVar1 = local_88;
    if (param_1 + 0x12 != &local_90) {
      param_1[0x12] = local_90;
      local_90 = 0;
      plVar3 = (longlong *)param_1[0x13];
      if (local_88 != plVar3) {
        local_88 = (longlong *)0x0;
        param_1[0x13] = (longlong)plVar1;
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
    plVar1 = local_88;
    if (local_88 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_88 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_88)(local_88);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_e8);
  }
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000148b55347. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x2b8))(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b554d6 FUN_148b554d6 body=879 status=ok
// SIG undefined FUN_148b554d6(void)

undefined8 *
FUN_148b554d6(longlong *param_1,undefined8 *param_2,undefined8 param_3,char param_4,
             undefined8 *param_5,longlong *param_6)

{
  void *_Src;
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined1 local_130;
  undefined1 local_128;
  undefined1 *local_120;
  undefined8 *local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined1 local_f8 [23];
  undefined1 local_e1;
  longlong *local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  longlong *plStack_b8;
  void *local_b0;
  int local_a8 [4];
  longlong local_98;
  longlong *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_110 = param_2;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb9d954) {
    FUN_144b3d300(&DAT_14cb9d954);
    if (DAT_14cb9d954 == -1) {
      FUN_1446ddc76(&DAT_14cb9d94c,"PushingWidgetToLayer",1);
      _Init_thread_footer(&DAT_14cb9d954);
    }
  }
  uVar1 = DAT_14cb9d94c;
  if (param_4 == '\0') {
    local_e0 = (longlong *)0x0;
  }
  else {
    lVar2 = (**(code **)(*param_1 + 0x2c8))(param_1);
    if (lVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_144a7ba4c(lVar2);
    }
    FUN_148b55e12(&local_e0,uVar3,uVar1);
  }
  FUN_14050fd64();
  lVar2 = FUN_14050fd64();
  local_c8 = *param_5;
  local_c0 = *(undefined4 *)(param_5 + 1);
  uStack_bc = *(undefined4 *)((longlong)param_5 + 0xc);
  plStack_b8 = (longlong *)param_5[2];
  local_b0 = (void *)0x0;
  local_a8[0] = *(int *)(param_5 + 4);
  lVar6 = (longlong)local_a8[0];
  _Src = (void *)param_5[3];
  local_d8 = param_1;
  local_d0 = param_3;
  if (lVar6 == 0) {
    local_a8[1] = 0;
  }
  else {
    FUN_1446dd670(&local_b0,local_a8[0],0);
    memcpy(local_b0,_Src,lVar6 * 2);
  }
  local_98 = *param_6;
  local_88[0] = (longlong *)0x0;
  if (local_98 != 0) {
    plVar5 = param_6 + 4;
    if ((longlong *)param_6[2] != (longlong *)0x0) {
      plVar5 = (longlong *)param_6[2];
    }
    (**(code **)*plVar5)(plVar5,local_88);
  }
  plVar5 = local_e0;
  local_58 = local_e0;
  FUN_148b5d0ac(local_f8,param_1,&local_d8);
  local_120 = &local_e1;
  local_128 = 0;
  local_130 = 0;
  local_138 = 10000;
  FUN_140a1e0be(lVar2 + 0x1e8,local_110,param_5 + 1,local_f8);
  FUN_1449db362(local_f8);
  if (local_98 != 0) {
    plVar4 = local_88[0];
    if (local_88[0] == (longlong *)0x0) {
      plVar4 = local_78;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (local_b0 != (void *)0x0) {
    FUN_1400020a8();
  }
  uVar1 = *local_110;
  local_c8 = *param_6;
  plStack_b8 = (longlong *)0x0;
  local_d8 = param_1;
  if (local_c8 != 0) {
    plVar4 = param_6 + 4;
    if ((longlong *)param_6[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_6[2];
    }
    (**(code **)*plVar4)(plVar4,&plStack_b8);
  }
  local_88[0] = plVar5;
  local_108 = 0;
  local_100 = 0;
  FUN_1446efa72(&local_108,0,8,0x10);
  local_100 = 8;
  FUN_148b5d962(local_108,param_1,&local_d8);
  FUN_147d5d8a0(uVar1,&local_108);
  if (local_c8 != 0) {
    plVar5 = plStack_b8;
    if (plStack_b8 == (longlong *)0x0) {
      plVar5 = (longlong *)local_a8;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (param_5[3] != 0) {
    FUN_1400020a8();
  }
  if (*param_6 != 0) {
    plVar5 = param_6 + 4;
    if ((longlong *)param_6[2] != (longlong *)0x0) {
      plVar5 = (longlong *)param_6[2];
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return local_110;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b55846 FUN_148b55846 body=289 status=ok
// SIG undefined FUN_148b55846(void)

undefined8 FUN_148b55846(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_1 != (longlong *)0x0) &&
     (plVar1 = (longlong *)(**(code **)(*param_1 + 8))(param_1), plVar1 != (longlong *)0x0)) {
    lVar2 = FUN_1449db7f2();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      uVar3 = (**(code **)(*plVar1 + 0x180))(plVar1);
      lVar2 = FUN_140334a94(plVar1,uVar3);
      if (lVar2 != 0) {
        lVar2 = *(longlong *)(lVar2 + 0x398);
        if ((DAT_14c950c29 == '\x01') && (lVar2 != 0)) {
          FUN_1456cec3c();
        }
        else if (lVar2 == 0) goto LAB_148b558bb;
        if (*(int *)(param_3 + 1) == 0) {
          plVar4 = (longlong *)0x0;
        }
        else {
          plVar4 = (longlong *)*param_3;
        }
        (**(code **)(*plVar4 + 0x58))(plVar4,plVar1,lVar2);
      }
    }
  }
LAB_148b558bb:
  local_40 = 0;
  local_38 = 0;
  FUN_148b5df18(&local_40,param_3);
  FUN_148b5de30(param_1 + 4,param_2,&local_40);
  FUN_1449db362(&local_40);
  FUN_1449db362(param_3);
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148b55968 FUN_148b55968 body=89 status=ok
// SIG undefined FUN_148b55968(void)

longlong FUN_148b55968(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x38);
    lVar2 = (longlong)*(int *)(param_1 + 0x40) * 0x18;
    do {
      if (*plVar1 == param_2) {
        if (plVar1 == (longlong *)0x0) {
          return 0;
        }
        lVar2 = plVar1[1];
        if (DAT_14c950c29 == '\x01') {
          if (lVar2 == 0) {
            return 0;
          }
          FUN_1456cec3c(lVar2);
          return lVar2;
        }
        return lVar2;
      }
      plVar1 = plVar1 + 3;
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != 0);
  }
  return 0;
}



// FUNCTION 148b559c2 FUN_148b559c2 body=55 status=ok
// SIG undefined FUN_148b559c2(void)

undefined8 FUN_148b559c2(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_1 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_1 + 0x2d0))();
    if (lVar1 != 0) {
      lVar1 = FUN_140e94dc2(lVar1);
      if (lVar1 != 0) {
        uVar2 = FUN_143ae4f7c(lVar1);
        return uVar2;
      }
    }
  }
  return 3;
}



// FUNCTION 148b559fa FUN_148b559fa body=58 status=ok
// SIG undefined FUN_148b559fa(void)

bool FUN_148b559fa(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  if (((param_1 != (longlong *)0x0) && (lVar2 = (**(code **)(*param_1 + 0x2d0))(), lVar2 != 0)) &&
     (lVar2 = FUN_140e94dc2(lVar2), lVar2 != 0)) {
    cVar1 = FUN_143ae4f7c(lVar2);
    return cVar1 == '\x02';
  }
  return false;
}



// FUNCTION 148b55a34 FUN_148b55a34 body=58 status=ok
// SIG undefined FUN_148b55a34(void)

bool FUN_148b55a34(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  if (((param_1 != (longlong *)0x0) && (lVar2 = (**(code **)(*param_1 + 0x2d0))(), lVar2 != 0)) &&
     (lVar2 = FUN_140e94dc2(lVar2), lVar2 != 0)) {
    cVar1 = FUN_143ae4f7c(lVar2);
    return cVar1 == '\x01';
  }
  return false;
}



// FUNCTION 148b55a6e FUN_148b55a6e body=380 status=ok
// SIG undefined FUN_148b55a6e(void)

void FUN_148b55a6e(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  void *_Src;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  undefined1 local_48 [8];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x78) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x80);
  }
  lVar2 = FUN_145a1006a(uVar4);
  if (((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0xa0), lVar2 != 0)) &&
     ((longlong)*(int *)(lVar2 + 0x40) != 0)) {
    plVar3 = *(longlong **)(lVar2 + 0x38);
    lVar2 = (longlong)*(int *)(lVar2 + 0x40) * 0x18;
    do {
      if (*plVar3 == param_1) {
        if (plVar3 == (longlong *)0x0) break;
        lVar2 = plVar3[1];
        if ((DAT_14c950c29 == '\x01') && (lVar2 != 0)) {
          FUN_1456cec3c(lVar2);
        }
        else if (lVar2 == 0) break;
        local_70 = *param_3;
        local_68 = *(undefined4 *)(param_3 + 1);
        uStack_64 = *(undefined4 *)((longlong)param_3 + 0xc);
        uStack_60 = *(undefined4 *)(param_3 + 2);
        uStack_5c = *(undefined4 *)((longlong)param_3 + 0x14);
        local_58 = (void *)0x0;
        local_50 = *(int *)(param_3 + 4);
        lVar5 = (longlong)local_50;
        _Src = (void *)param_3[3];
        if (lVar5 == 0) {
          local_4c = 0;
        }
        else {
          FUN_1446dd670(&local_58,local_50,0);
          memcpy(local_58,_Src,lVar5 * 2);
        }
        FUN_148b55bec(lVar2,local_48,param_2,&local_70);
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_40 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
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
        break;
      }
      plVar3 = plVar3 + 3;
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != 0);
  }
  if (param_3[3] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148b55bec FUN_148b55bec body=283 status=ok
// SIG undefined FUN_148b55bec(void)

undefined8
FUN_148b55bec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined1 **local_c0;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  void *local_98;
  int local_90;
  undefined4 local_8c;
  undefined1 *local_88 [2];
  undefined8 local_78;
  undefined **local_68;
  undefined *local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_78 = 0;
  local_68 = &PTR_LAB_14b59cb40;
  local_60 = &DAT_148b5df9e;
  local_88[0] = &LAB_148b5dfa0;
  local_b0 = *param_4;
  local_a8 = *(undefined4 *)(param_4 + 1);
  uStack_a4 = *(undefined4 *)((longlong)param_4 + 0xc);
  uStack_a0 = *(undefined4 *)(param_4 + 2);
  uStack_9c = *(undefined4 *)((longlong)param_4 + 0x14);
  local_98 = (void *)0x0;
  local_90 = *(int *)(param_4 + 4);
  lVar1 = (longlong)local_90;
  _Src = (void *)param_4[3];
  if (lVar1 == 0) {
    local_8c = 0;
  }
  else {
    FUN_1446dd670(&local_98,local_90,0);
    memcpy(local_98,_Src,lVar1 * 2);
  }
  local_c0 = local_88;
  local_c8 = &local_b0;
  FUN_148b554d6(param_1,param_2,param_3,1);
  if (param_4[3] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b55d08 FUN_148b55d08 body=168 status=ok
// SIG undefined FUN_148b55d08(void)

void FUN_148b55d08(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  lVar1 = (**(code **)(*param_1 + 0x2d0))();
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 0x78) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(*(longlong *)(lVar1 + 0x78) + 0x80);
    }
    lVar2 = FUN_145a1006a(uVar4);
    if (((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0xa0), lVar2 != 0)) &&
       ((longlong)*(int *)(lVar2 + 0x40) != 0)) {
      plVar3 = *(longlong **)(lVar2 + 0x38);
      lVar2 = (longlong)*(int *)(lVar2 + 0x40) * 0x18;
      do {
        if (*plVar3 == lVar1) {
          if (plVar3 == (longlong *)0x0) {
            return;
          }
          lVar1 = plVar3[1];
          if ((DAT_14c950c29 == '\x01') && (lVar1 != 0)) {
            FUN_1456cec3c(lVar1);
          }
          else if (lVar1 == 0) {
            return;
          }
          FUN_148b66510(lVar1,param_1);
          return;
        }
        plVar3 = plVar3 + 3;
        lVar2 = lVar2 + -0x18;
      } while (lVar2 != 0);
    }
  }
  return;
}



// FUNCTION 148b55db0 FUN_148b55db0 body=97 status=ok
// SIG undefined FUN_148b55db0(void)

longlong FUN_148b55db0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x430) != 0)) {
    lVar3 = FUN_1449db7f2();
    lVar1 = *(longlong *)(param_1 + 0x430);
    if (lVar1 != 0) {
      if (lVar3 == 0) {
        return 0;
      }
      lVar2 = *(longlong *)(lVar1 + 0x10);
      if (lVar2 == 0) {
        return 0;
      }
      if (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38)) {
        if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
            lVar3 + 0x30) {
          return 0;
        }
        return lVar1;
      }
    }
  }
  return 0;
}



// FUNCTION 148b55e12 FUN_148b55e12 body=125 status=ok
// SIG undefined FUN_148b55e12(void)

undefined8 * FUN_148b55e12(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  
  if ((param_2 != 0) && (lVar3 = FUN_140e94dc2(param_2), lVar3 != 0)) {
    iVar2 = DAT_14cb9d6f0 + 1;
    DAT_14cb9d6f0 = iVar2;
    *param_1 = param_3;
    *(int *)((longlong)param_1 + 4) = iVar2;
    uVar1 = *param_1;
    FUN_148217bbe(lVar3,0,uVar1,1);
    FUN_148217bbe(lVar3,1,uVar1,1);
    FUN_148217bbe(lVar3,2,uVar1,1);
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 148b55e90 FUN_148b55e90 body=99 status=ok
// SIG undefined FUN_148b55e90(void)

void FUN_148b55e90(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_1 != 0 && param_2 != 0) {
    lVar1 = FUN_140e94dc2();
    if (lVar1 != 0) {
      FUN_148217bbe(lVar1,0,param_2,0);
      FUN_148217bbe(lVar1,1,param_2,0);
      FUN_148217bbe(lVar1,2,param_2,0);
      return;
    }
  }
  return;
}



// FUNCTION 148b55ef4 FUN_148b55ef4 body=255 status=ok
// SIG undefined FUN_148b55ef4(void)

void FUN_148b55ef4(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14823f0b6();
  local_20 = FUN_1458995bc();
  if ((local_20 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(local_20);
  }
  lVar1 = FUN_148236b02(param_1,&local_20);
  if (lVar1 != 0) {
    lVar2 = FUN_1458995bc();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      if (param_1 != 0 && DAT_14c950c29 == 1) {
        FUN_1456cec3c(param_1);
      }
      if ((param_1 != 0) && ((DAT_14c950c29 & 1) != 0)) {
        FUN_1456cec3c(param_1);
      }
      *(longlong *)(lVar1 + 0x530) = param_1;
    }
  }
  if (*(char *)(param_1 + 0x289) == '\0') {
    uVar3 = 0;
  }
  else {
    uVar3 = 0x43340000;
  }
  *(undefined4 *)(param_1 + 0xc0) = uVar3;
  FUN_141272672(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b55ff4 FUN_148b55ff4 body=229 status=ok
// SIG undefined FUN_148b55ff4(void)

void FUN_148b55ff4(longlong param_1,undefined4 param_2,int *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  int *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)FUN_14772cc32();
  lVar2 = plVar3[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *plVar3;
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(lVar1 + lVar5);
      if (plVar3 != (longlong *)0x0) {
        lVar4 = FUN_145a7ac38();
        if (((*(int *)(lVar4 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
            (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
             == lVar4 + 0x30)) && ((int)plVar3[0x278] == *param_3)) {
          (**(code **)(*plVar3 + 0x2a8))(plVar3,param_2);
        }
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)(int)lVar2 * 8 != lVar5);
  }
  if ((char)param_2 != '\0') {
    local_48 = param_3;
    FUN_1482543b2(param_1 + 0x278);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_68);
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_143af2fd8(param_1 + 0x278,param_3);
  return;
}



// FUNCTION 148b560ec FUN_148b560ec body=147 status=ok
// SIG undefined FUN_148b560ec(void)

void FUN_148b560ec(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 uVar5;
  
  *(char *)(param_1 + 0x289) = param_2;
  if (param_2 == '\0') {
    uVar5 = 0;
  }
  else {
    uVar5 = 0x43340000;
  }
  *(undefined4 *)(param_1 + 0xc0) = uVar5;
  FUN_141272672(param_1);
  plVar3 = (longlong *)FUN_14772cc32(param_1);
  lVar2 = plVar3[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *plVar3;
    lVar4 = 0;
    do {
      uVar5 = 0x43340000;
      if (*(char *)(param_1 + 0x289) == '\0') {
        uVar5 = 0;
      }
      *(undefined4 *)(*(longlong *)(lVar1 + lVar4) + 0xc0) = uVar5;
      FUN_141272672();
      lVar4 = lVar4 + 8;
    } while ((longlong)(int)lVar2 * 8 != lVar4);
  }
  return;
}



// FUNCTION 148b56180 FUN_148b56180 body=34 status=ok
// SIG undefined FUN_148b56180(void)

void FUN_148b56180(undefined8 param_1)

{
  FUN_140ec5a00();
  FUN_148b4e58c(param_1);
  FUN_148b561a2(param_1);
  return;
}



// FUNCTION 148b561a2 FUN_148b561a2 body=167 status=ok
// SIG undefined FUN_148b561a2(void)

void FUN_148b561a2(longlong param_1)

{
  char cVar1;
  undefined1 auStack_58 [40];
  longlong *local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1 + 0x13b0) & 1) == 0) {
    cVar1 = FUN_144a7c5f6(param_1 + 0x13b8);
    if (cVar1 != '\0') goto LAB_148b561d4;
  }
  else {
LAB_148b561d4:
    if (*(longlong *)(param_1 + 0x13a8) != 0) {
      FUN_143ae583c(*(longlong *)(param_1 + 0x13a8),local_30);
      cVar1 = FUN_144a7c5f6(local_30);
      if (cVar1 == '\0') {
        FUN_148b4e5bc(param_1,local_30);
      }
      if (local_30[0] != (longlong *)0x0) {
        (**(code **)(*local_30[0] + 0x10))();
      }
      if (cVar1 == '\0') goto LAB_148b5622b;
    }
  }
  FUN_148b4e5bc(param_1,param_1 + 0x13b8);
LAB_148b5622b:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b5624a FUN_148b5624a body=34 status=ok
// SIG undefined FUN_148b5624a(void)

void FUN_148b5624a(undefined8 param_1)

{
  FUN_14822712e();
  FUN_148b4e58c(param_1);
  FUN_148b561a2(param_1);
  return;
}



// FUNCTION 148b5626c FUN_148b5626c body=111 status=ok
// SIG undefined FUN_148b5626c(void)

void FUN_148b5626c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  byte bVar3;
  
  bVar3 = FUN_144a7c5f6(param_2);
  *(byte *)(param_1 + 0x13b0) = *(byte *)(param_1 + 0x13b0) & 0xfe | bVar3;
  plVar1 = (longlong *)*param_2;
  plVar2 = *(longlong **)(param_1 + 0x13b8);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x13b8) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 0x13c0) = (int)param_2[1];
  FUN_148b561a2(param_1);
  return;
}



// FUNCTION 148b562dc FUN_148b562dc body=26 status=ok
// SIG undefined FUN_148b562dc(void)

void FUN_148b562dc(undefined8 param_1)

{
  FUN_148226792();
  FUN_148b4e58c(param_1);
  return;
}



// FUNCTION 148b562f6 FUN_148b562f6 body=42 status=ok
// SIG undefined FUN_148b562f6(void)

void FUN_148b562f6(undefined8 param_1)

{
  FUN_14822712e();
  FUN_148b4e58c(param_1);
  FUN_148b561a2(param_1);
  FUN_148b56320(param_1);
  return;
}



// FUNCTION 148b56320 FUN_148b56320 body=539 status=ok
// SIG undefined FUN_148b56320(void)

void FUN_148b56320(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  undefined8 local_f0;
  undefined **local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  longlong local_b0;
  undefined8 local_a8 [10];
  undefined4 local_58;
  undefined1 local_54;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_138;
  cVar4 = FUN_1403e7f2a(param_1 + 0x279);
  if (cVar4 != '\0') {
    lVar6 = (**(code **)(*param_1 + 0x2d0))(param_1);
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = FUN_140e94dc2(lVar6);
    }
    lVar7 = FUN_141319416();
    local_e8 = &PTR_FUN_149ed05f0;
    local_e0 = *(undefined4 *)(lVar7 + 8);
    uStack_dc = *(undefined4 *)(lVar7 + 0xc);
    uStack_d8 = *(undefined4 *)(lVar7 + 0x10);
    uStack_d4 = *(undefined4 *)(lVar7 + 0x14);
    local_d0 = *(undefined4 *)(lVar7 + 0x18);
    uStack_cc = *(undefined4 *)(lVar7 + 0x1c);
    uStack_c8 = *(undefined4 *)(lVar7 + 0x20);
    uStack_c4 = *(undefined4 *)(lVar7 + 0x24);
    local_c0 = *(undefined4 *)(lVar7 + 0x28);
    uStack_bc = *(undefined4 *)(lVar7 + 0x2c);
    uStack_b8 = *(undefined4 *)(lVar7 + 0x30);
    uStack_b4 = *(undefined4 *)(lVar7 + 0x34);
    local_b0 = *(longlong *)(lVar7 + 0x38);
    if ((local_b0 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    puVar10 = (undefined8 *)(lVar7 + 0x40);
    puVar11 = local_a8;
    for (lVar9 = 10; lVar9 != 0; lVar9 = lVar9 + -1) {
      *puVar11 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar11 = puVar11 + 1;
    }
    local_54 = *(undefined1 *)(lVar7 + 0x94);
    local_58 = *(undefined4 *)(lVar7 + 0x90);
    local_50 = *(undefined8 *)(lVar7 + 0x98);
    local_48 = *(longlong **)(lVar7 + 0xa0);
    if (local_48 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_48 + 1) = (int)local_48[1] + 1;
      UNLOCK();
    }
    local_40 = *(undefined8 *)(lVar7 + 0xa8);
    if (lVar6 == 0) {
      uVar5 = 1;
    }
    else {
      uVar8 = FUN_140902dbe();
      FUN_148217484(lVar6,&local_f0);
      lVar6 = param_1[0x27c];
      local_108 = param_1[0x279];
      local_100 = param_1[0x27a];
      local_f8 = param_1[0x27b];
      if (local_f8 != 0) {
        LOCK();
        *(int *)(local_f8 + 8) = *(int *)(local_f8 + 8) + 1;
        UNLOCK();
      }
      local_118 = local_f0;
      uVar5 = FUN_148217086(uVar8,&local_e8,&local_108,(char)lVar6);
      uVar5 = uVar5 ^ 1;
    }
    FUN_148b4e752(param_1,&local_e8,uVar5);
    plVar3 = local_48;
    local_e8 = &PTR_FUN_149ed05f0;
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_48 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_138);
  }
  uVar8 = FUN_141319416();
  if ((local_38 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    FUN_148b4e752(param_1,uVar8,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b5654e FUN_148b5654e body=33 status=ok
// SIG undefined FUN_148b5654e(void)

void FUN_148b5654e(longlong param_1)

{
  FUN_1413a517a(param_1 + 0x13c8);
  FUN_148b56320(param_1);
  return;
}



// FUNCTION 148b56570 FUN_148b56570 body=328 status=ok
// SIG undefined FUN_148b56570(void)

void FUN_148b56570(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar5 = *param_3;
  if ((lVar5 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar5);
  }
  iVar1 = *(int *)(param_1 + 0x8b8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x8b0);
    lVar6 = 0;
    local_60 = param_4;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar6);
      if ((((lVar3 != 0) &&
           (FUN_148b529fa(lVar3,&local_50,param_2), lVar3 = local_50, local_50 != 0)) &&
          (lVar4 = FUN_1405e2bf2(), lVar4 != 0)) &&
         ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38) &&
          (local_50 != 0 &&
           *(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
           lVar4 + 0x30)))) {
        lVar5 = local_50;
        param_4 = local_60;
        if (DAT_14c950c29 == 1) {
          FUN_1456cec3c();
          lVar5 = local_50;
          param_4 = local_60;
        }
        break;
      }
      lVar6 = lVar6 + 8;
      param_4 = local_60;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  local_58 = lVar5;
  if ((lVar5 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar5);
  }
  FUN_14773c8d2(param_1 + -0x290,&local_58,param_4);
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148b566ba FUN_148b566ba body=67 status=ok
// SIG undefined FUN_148b566ba(void)

ulonglong FUN_148b566ba(undefined8 param_1,longlong param_2)

{
  byte in_AL;
  undefined8 uVar1;
  longlong *plVar2;
  byte bVar3;
  undefined8 unaff_RSI;
  undefined7 uVar4;
  
  uVar4 = (undefined7)((ulonglong)unaff_RSI >> 8);
  bVar3 = 1;
  if (param_2 != 0) {
    uVar1 = FUN_145b8742c();
    plVar2 = (longlong *)FUN_144718840(param_2,uVar1);
    in_AL = 0;
    if (plVar2 != (longlong *)0x0) {
      in_AL = (**(code **)(*plVar2 + 0x20))(plVar2);
      bVar3 = 0;
      uVar4 = 0;
    }
  }
  return CONCAT71(uVar4,bVar3 | in_AL) & 0xffffff01;
}



// FUNCTION 148b566fe FUN_148b566fe body=135 status=ok
// SIG undefined FUN_148b566fe(void)

void FUN_148b566fe(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  FUN_1476ce95a();
  if (param_1 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_1 + 8))(param_1);
    if (lVar1 != 0) {
      uVar2 = FUN_14595da76();
      plVar3 = (longlong *)FUN_144718840(lVar1,uVar2);
      if (plVar3 != (longlong *)0x0) {
        lVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
        if (lVar1 != 0) {
          uVar2 = FUN_145b8742c();
          plVar4 = (longlong *)FUN_144718840(lVar1,uVar2);
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x18))(plVar4);
          }
        }
                    /* WARNING: Could not recover jumptable at 0x000148b56782. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148b56786 FUN_148b56786 body=71 status=ok
// SIG undefined FUN_148b56786(void)

void FUN_148b56786(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  
  FUN_148b5626c(param_1 + -0x13c8,param_2 + 8);
  plVar1 = *(longlong **)(param_1 + 8);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148b567c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x300))(plVar1,param_2 + 0x20);
    return;
  }
  return;
}



// FUNCTION 148b567d4 FUN_148b567d4 body=26 status=ok
// SIG undefined FUN_148b567d4(void)

void FUN_148b567d4(undefined8 param_1)

{
  FUN_148234d36();
  FUN_148b567ee(param_1);
  return;
}



// FUNCTION 148b567ee FUN_148b567ee body=660 status=ok
// SIG undefined FUN_148b567ee(void)

void FUN_148b567ee(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = param_1[0x95];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = param_1[0x94];
    lVar9 = 0;
    do {
      if (*(char *)(lVar1 + 0xd0 + lVar9) == '\0') {
        if (((((*(longlong *)(lVar1 + 0xe8 + lVar9) == 0) &&
              (lVar5 = *(longlong *)(lVar1 + 0xe0 + lVar9), lVar5 != 0)) &&
             (lVar6 = FUN_14587df4c(), lVar6 != 0)) &&
            ((*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38) &&
             (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
              lVar6 + 0x30)))) && (lVar5 = *(longlong *)(lVar1 + 0xe0 + lVar9), lVar5 != 0)) {
          local_40 = lVar5;
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c();
          }
          uVar7 = (**(code **)(*param_1 + 0x2c8))(param_1);
          lVar5 = FUN_143fb8d6b(uVar7,&local_40);
          if ((lVar5 == 0) || (DAT_14c950c29 == '\0')) {
            *(longlong *)(lVar1 + 0xe8 + lVar9) = lVar5;
            if (lVar5 != 0) goto LAB_148b5698c;
LAB_148b56a39:
            lVar8 = 0;
          }
          else {
            FUN_1456cec3c(lVar5);
            *(longlong *)(lVar1 + 0xe8 + lVar9) = lVar5;
LAB_148b5698c:
            lVar6 = FUN_14587df4c();
            lVar5 = *(longlong *)(lVar1 + 0xe8 + lVar9);
            if (lVar5 == 0) goto LAB_148b56a39;
            lVar8 = 0;
            if ((lVar6 != 0) && (lVar2 = *(longlong *)(lVar5 + 0x10), lVar2 != 0)) {
              if (*(int *)(lVar2 + 0x38) < *(int *)(lVar6 + 0x38)) goto LAB_148b56a39;
              lVar8 = lVar5;
              if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
                  != lVar6 + 0x30) {
                lVar8 = 0;
              }
            }
          }
          FUN_148b5e74c(param_1 + 0x91,*(undefined8 *)(lVar1 + lVar9),lVar8);
          if (*(longlong *)(lVar1 + 0xe8 + lVar9) != 0) {
            FUN_14587df4c();
          }
          FUN_148b52284(param_1 + 0x8f,*(undefined8 *)(lVar1 + lVar9));
        }
        lVar5 = FUN_148231e28(param_1);
        if ((lVar5 != 0) &&
           (cVar4 = FUN_14774374c(lVar5,*(undefined8 *)(lVar1 + 0xe8 + lVar9)), cVar4 == '\0')) {
          FUN_14772c428(lVar5,*(undefined8 *)(lVar1 + 0xe8 + lVar9));
        }
        lVar5 = FUN_14823206c(param_1,*(undefined8 *)(lVar1 + lVar9));
        if (lVar5 == 0) {
          local_48 = *(longlong *)(lVar1 + 0xd8 + lVar9);
          uVar7 = *(undefined8 *)(lVar1 + 0xe8 + lVar9);
          if ((DAT_14c950c29 == '\x01') && (local_48 != 0)) {
            FUN_1456cec3c();
          }
          local_58 = 0xffffffff;
          FUN_148232bfc(param_1,*(undefined8 *)(lVar1 + lVar9),&local_48,uVar7);
        }
      }
      lVar9 = lVar9 + 0xf0;
    } while ((longlong)(int)lVar3 * 0xf0 - lVar9 != 0);
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148b56a84 FUN_148b56a84 body=104 status=ok
// SIG undefined FUN_148b56a84(void)

void FUN_148b56a84(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x4a8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x4a0);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + 0xe8 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x2c0))();
        *(undefined8 *)(lVar2 + 0xe8 + lVar4) = 0;
      }
      lVar4 = lVar4 + 0xf0;
    } while ((longlong)iVar1 * 0xf0 - lVar4 != 0);
  }
  FUN_148234d6a(param_1);
  return;
}



// FUNCTION 148b56aec FUN_148b56aec body=80 status=ok
// SIG undefined FUN_148b56aec(void)

undefined8 FUN_148b56aec(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  if ((longlong)*(int *)(param_1 + 0x4a8) != 0) {
    plVar2 = *(longlong **)(param_1 + 0x4a0);
    lVar1 = (longlong)*(int *)(param_1 + 0x4a8) * 0xf0;
    do {
      if (*plVar2 == param_2) {
        if (plVar2 == (longlong *)0x0) {
          return 0;
        }
        FUN_148b520a6(param_3);
        return 1;
      }
      plVar2 = plVar2 + 0x1e;
      lVar1 = lVar1 + -0xf0;
    } while (lVar1 != 0);
  }
  return 0;
}



// FUNCTION 148b56b3c FUN_148b56b3c body=56 status=ok
// SIG undefined FUN_148b56b3c(void)

void FUN_148b56b3c(longlong param_1,longlong param_2,undefined1 param_3)

{
  longlong lVar1;
  
  if ((longlong)*(int *)(param_1 + 0x4a8) != 0) {
    lVar1 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x4a0) + lVar1) == param_2) {
        *(undefined1 *)(*(longlong *)(param_1 + 0x4a0) + 0xd0 + lVar1) = param_3;
        return;
      }
      lVar1 = lVar1 + 0xf0;
    } while ((longlong)*(int *)(param_1 + 0x4a8) * 0xf0 - lVar1 != 0);
  }
  return;
}



// FUNCTION 148b56b74 FUN_148b56b74 body=172 status=ok
// SIG undefined FUN_148b56b74(void)

undefined8 FUN_148b56b74(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  longlong local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = CONCAT71((int7)(local_20 >> 8),1);
  if (*(char *)(param_2 + 0x1a) == '\0') {
    local_38 = param_2;
    local_30 = param_2;
    FUN_148b5e026(param_1 + 0x4b0,local_24);
    local_40 = param_2[0x1b];
    uVar1 = param_2[0x1d];
    if ((local_40 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    local_48 = 0xffffffff;
    uVar1 = FUN_148232bfc(param_1,*param_2,&local_40,uVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b56c22 FUN_148b56c22 body=92 status=ok
// SIG undefined FUN_148b56c22(void)

void FUN_148b56c22(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x4a8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x4a0);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + 0xe8 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x2c0))();
      }
      lVar4 = lVar4 + 0xf0;
    } while ((longlong)iVar1 * 0xf0 - lVar4 != 0);
  }
  FUN_148234dba(param_1);
  return;
}



// FUNCTION 148b56c7e FUN_148b56c7e body=131 status=ok
// SIG undefined FUN_148b56c7e(void)

void FUN_148b56c7e(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140760c2c(param_1,&local_30);
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  if (local_30 != 0) {
    FUN_148b567ee(param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_148234dea(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b56d02 FUN_148b56d02 body=584 status=ok
// SIG undefined FUN_148b56d02(void)

void FUN_148b56d02(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined1 local_120 [24];
  undefined **local_108;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined1 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined8 uStack_9f;
  undefined4 local_94;
  undefined2 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78;
  byte local_74;
  undefined8 local_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_128 = 0;
  FUN_144a5dc74(local_120);
  local_108 = &PTR_FUN_149ed05f0;
  local_100 = &DAT_3f8000003f800000;
  puStack_f8 = &DAT_3f8000003f800000;
  local_f0 = 0;
  local_ec = 3;
  local_e8 = 0x4200000042000000;
  local_94 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  uStack_a7 = 0;
  uStack_a0 = 0;
  uStack_9f = 0;
  local_90 = 1;
  local_80 = DAT_14c84635c;
  local_88 = DAT_14c84635c;
  local_78 = 0;
  local_74 = local_74 & 0xf8 | 4;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  local_70 = 0;
  uStack_68 = 0;
  uStack_67 = 0;
  uStack_60 = 0;
  uStack_5f = 0;
  if ((longlong)*(int *)(param_1 + 0x4a8) != 0) {
    plVar8 = *(longlong **)(param_1 + 0x4a0);
    lVar6 = (longlong)*(int *)(param_1 + 0x4a8) * 0xf0;
    do {
      if (*plVar8 == param_2) {
        if (plVar8 != (longlong *)0x0) {
          puVar9 = &local_128;
          FUN_148b520a6(puVar9);
          goto LAB_148b56e6e;
        }
        break;
      }
      plVar8 = plVar8 + 0x1e;
      lVar6 = lVar6 + -0xf0;
    } while (lVar6 != 0);
  }
  if (*(int *)(param_1 + 0x4b8) != *(int *)(param_1 + 0x4e4)) {
    uVar2 = (uint)((ulonglong)param_2 >> 0x10);
    uVar7 = (uint)param_2 & 0xffff;
    lVar6 = param_1 + 0x4e8;
    if (*(longlong *)(param_1 + 0x4f0) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x4f0);
    }
    iVar4 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x4f8) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar7) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        lVar6 = *(longlong *)(param_1 + 0x4b0) + (longlong)iVar4 * 0x110;
        if (*(longlong *)(*(longlong *)(param_1 + 0x4b0) + (longlong)iVar4 * 0x110) == param_2)
        goto LAB_148b56e63;
        iVar4 = *(int *)(lVar6 + 0x100);
      } while (iVar4 != -1);
    }
  }
  lVar6 = 0;
LAB_148b56e63:
  puVar9 = (undefined8 *)(lVar6 + 0x10);
  if (lVar6 == 0) {
    puVar9 = (undefined8 *)0x0;
  }
LAB_148b56e6e:
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  uVar5 = FUN_1459f26ec();
  cVar3 = FUN_144a7ff9e(uVar1,uVar5);
  if ((puVar9 != (undefined8 *)0x0) && (cVar3 != '\0')) {
    FUN_148b51fb8(param_3,puVar9);
  }
  FUN_148b5e638(param_1 + 0x4b0,param_2);
  FUN_148b51f52(&local_128);
  if ((local_30 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148b56f4c FUN_148b56f4c body=33 status=ok
// SIG undefined FUN_148b56f4c(void)

undefined8 FUN_148b56f4c(longlong param_1)

{
  if (0 < *(int *)(param_1 + 0x4a8)) {
    return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x460) >> 8),
                    *(longlong *)(param_1 + 0x460) == **(longlong **)(param_1 + 0x4a0));
  }
  return 0;
}



// FUNCTION 148b56f6e FUN_148b56f6e body=48 status=ok
// SIG undefined FUN_148b56f6e(void)

undefined8 FUN_148b56f6e(longlong param_1)

{
  longlong lVar1;
  
  if (0 < (longlong)*(int *)(param_1 + 0x4a8)) {
    lVar1 = (longlong)*(int *)(param_1 + 0x4a8) * 0xf0;
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),
                    *(longlong *)(param_1 + 0x460) ==
                    *(longlong *)(*(longlong *)(param_1 + 0x4a0) + -0xf0 + lVar1));
  }
  return 0;
}



// FUNCTION 148b56f9e FUN_148b56f9e body=56 status=ok
// SIG undefined FUN_148b56f9e(void)

byte FUN_148b56f9e(undefined8 param_1,byte param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = FUN_14823206c();
  if (lVar2 != 0) {
    bVar1 = FUN_145beedf4(lVar2);
    if (bVar1 < 5) {
      param_2 = 0x19 >> (bVar1 & 0x1f);
    }
    else {
      param_2 = 0;
    }
  }
  return lVar2 != 0 & param_2;
}



// FUNCTION 148b56fd6 FUN_148b56fd6 body=167 status=ok
// SIG undefined FUN_148b56fd6(void)

int FUN_148b56fd6(undefined8 param_1)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar2 = FUN_148232132();
  if (iVar2 < 1) {
    iVar6 = 0;
  }
  else {
    iVar5 = 0;
    iVar6 = 0;
    do {
      FUN_1482321f0(param_1,&local_40,iVar5);
      uVar4 = local_40;
      lVar3 = FUN_14823206c(param_1,local_40);
      bVar1 = (byte)uVar4;
      if (lVar3 != 0) {
        bVar1 = FUN_145beedf4(lVar3);
        if (bVar1 < 5) {
          bVar1 = 0x19 >> (bVar1 & 0x1f);
        }
        else {
          bVar1 = 0;
        }
      }
      iVar6 = iVar6 + (uint)(lVar3 != 0 & bVar1);
      iVar5 = iVar5 + 1;
    } while (iVar2 != iVar5);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b5707e FUN_148b5707e body=328 status=ok
// SIG undefined FUN_148b5707e(void)

void FUN_148b5707e(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar5 = *param_3;
  if ((lVar5 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar5);
  }
  iVar1 = *(int *)(param_1 + 0x8e0);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x8d8);
    lVar6 = 0;
    local_60 = param_4;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar6);
      if ((((lVar3 != 0) &&
           (FUN_148b529fa(lVar3,&local_50,param_2), lVar3 = local_50, local_50 != 0)) &&
          (lVar4 = FUN_1405e2bf2(), lVar4 != 0)) &&
         ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38) &&
          (local_50 != 0 &&
           *(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
           lVar4 + 0x30)))) {
        lVar5 = local_50;
        param_4 = local_60;
        if (DAT_14c950c29 == 1) {
          FUN_1456cec3c();
          lVar5 = local_50;
          param_4 = local_60;
        }
        break;
      }
      lVar6 = lVar6 + 8;
      param_4 = local_60;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  local_58 = lVar5;
  if ((lVar5 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar5);
  }
  FUN_14773c8d2(param_1 + -0x290,&local_58,param_4);
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148b571c8 FUN_148b571c8 body=67 status=ok
// SIG undefined FUN_148b571c8(void)

ulonglong FUN_148b571c8(undefined8 param_1,longlong param_2)

{
  byte in_AL;
  undefined8 uVar1;
  longlong *plVar2;
  byte bVar3;
  undefined8 unaff_RSI;
  undefined7 uVar4;
  
  uVar4 = (undefined7)((ulonglong)unaff_RSI >> 8);
  bVar3 = 1;
  if (param_2 != 0) {
    uVar1 = FUN_145b8742c();
    plVar2 = (longlong *)FUN_144718840(param_2,uVar1);
    in_AL = 0;
    if (plVar2 != (longlong *)0x0) {
      in_AL = (**(code **)(*plVar2 + 0x20))(plVar2);
      bVar3 = 0;
      uVar4 = 0;
    }
  }
  return CONCAT71(uVar4,bVar3 | in_AL) & 0xffffff01;
}



// FUNCTION 148b5720c FUN_148b5720c body=328 status=ok
// SIG undefined FUN_148b5720c(void)

void FUN_148b5720c(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar5 = *param_3;
  if ((lVar5 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar5);
  }
  iVar1 = *(int *)(param_1 + 0x910);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x908);
    lVar6 = 0;
    local_60 = param_4;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar6);
      if ((((lVar3 != 0) &&
           (FUN_148b529fa(lVar3,&local_50,param_2), lVar3 = local_50, local_50 != 0)) &&
          (lVar4 = FUN_1405e2bf2(), lVar4 != 0)) &&
         ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38) &&
          (local_50 != 0 &&
           *(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
           lVar4 + 0x30)))) {
        lVar5 = local_50;
        param_4 = local_60;
        if (DAT_14c950c29 == 1) {
          FUN_1456cec3c();
          lVar5 = local_50;
          param_4 = local_60;
        }
        break;
      }
      lVar6 = lVar6 + 8;
      param_4 = local_60;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  local_58 = lVar5;
  if ((lVar5 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar5);
  }
  FUN_14773c8d2(param_1 + -0x290,&local_58,param_4);
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148b57356 FUN_148b57356 body=67 status=ok
// SIG undefined FUN_148b57356(void)

ulonglong FUN_148b57356(undefined8 param_1,longlong param_2)

{
  byte in_AL;
  undefined8 uVar1;
  longlong *plVar2;
  byte bVar3;
  undefined8 unaff_RSI;
  undefined7 uVar4;
  
  uVar4 = (undefined7)((ulonglong)unaff_RSI >> 8);
  bVar3 = 1;
  if (param_2 != 0) {
    uVar1 = FUN_145b8742c();
    plVar2 = (longlong *)FUN_144718840(param_2,uVar1);
    in_AL = 0;
    if (plVar2 != (longlong *)0x0) {
      in_AL = (**(code **)(*plVar2 + 0x20))(plVar2);
      bVar3 = 0;
      uVar4 = 0;
    }
  }
  return CONCAT71(uVar4,bVar3 | in_AL) & 0xffffff01;
}



// FUNCTION 148b573a6 FUN_148b573a6 body=2509 status=ok
// SIG undefined FUN_148b573a6(void)

undefined8 * FUN_148b573a6(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_bb8 [32];
  undefined1 *local_b98;
  undefined8 *local_b88;
  undefined1 local_b79;
  undefined1 local_b78 [8];
  longlong *local_b70;
  undefined1 local_b59;
  undefined8 local_b58;
  longlong *local_b50;
  longlong local_b40;
  undefined1 local_b38;
  undefined8 local_b30;
  undefined8 uStack_b28;
  undefined8 local_b20;
  longlong *local_b18;
  undefined8 local_b10;
  longlong *local_b08;
  undefined1 local_af9;
  undefined8 local_af8;
  longlong *local_af0;
  longlong local_ae0;
  undefined1 local_ad8;
  undefined8 local_ad0;
  undefined8 uStack_ac8;
  undefined8 local_ac0;
  longlong *local_ab8;
  undefined8 local_ab0;
  longlong *local_aa8;
  undefined1 local_a99;
  undefined8 local_a98;
  longlong *local_a90;
  longlong local_a80;
  undefined1 local_a78;
  undefined8 local_a70;
  undefined8 uStack_a68;
  undefined8 local_a60;
  longlong *local_a58;
  undefined8 local_a50;
  longlong *local_a48;
  undefined8 local_a40;
  longlong *local_a38;
  undefined8 local_a30;
  longlong *local_a28;
  undefined1 local_a20 [64];
  undefined4 local_9e0;
  undefined1 local_9dc;
  undefined4 local_9d8;
  undefined1 local_9d4;
  undefined1 local_9c8 [64];
  undefined4 local_988;
  undefined1 local_984;
  undefined4 local_980;
  undefined1 local_97c;
  undefined1 local_970 [64];
  undefined4 local_930;
  undefined1 local_92c;
  undefined4 local_928;
  undefined1 local_924;
  undefined8 local_918;
  longlong *local_910;
  longlong local_770;
  undefined1 local_768;
  undefined1 local_760 [128];
  undefined1 local_6e0 [8];
  longlong *local_6d8;
  longlong local_538;
  undefined1 local_530;
  undefined1 local_528 [128];
  undefined1 local_4a8 [440];
  undefined1 local_2f0 [424];
  undefined1 *local_148;
  undefined1 local_140;
  undefined1 local_138 [240];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_bb8;
  if (*(longlong *)(param_1 + 0x238) == 0) {
    lVar8 = *(longlong *)(param_1 + 0x1b8);
    if (lVar8 != 0) {
      lVar5 = FUN_144a772c4();
      lVar8 = *(longlong *)(lVar8 + 0x10);
      if ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar8 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
          lVar5 + 0x30)) goto LAB_148b573df;
      lVar8 = *(longlong *)(param_1 + 0x1b8);
      if (lVar8 != 0) {
        lVar5 = FUN_1402d2740();
        if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
          lVar8 = FUN_14090ceee(lVar8,0,0);
          if ((lVar8 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(lVar8);
          }
          *(longlong *)(param_1 + 0x238) = lVar8;
          FUN_140648376(param_1 + 0x180,lVar8);
          goto LAB_148b573df;
        }
      }
    }
    *(undefined8 *)(param_1 + 0x238) = 0;
  }
LAB_148b573df:
  FUN_140a53a96(local_2f0);
  local_148 = &DAT_200000002;
  local_b98 = local_4a8;
  FUN_140a53d66(local_6e0,&DAT_149efe19f,
                ".\\../Plugins/Gearbox/GbxUIUMG/Source/GbxUIUMG/Private/Components/GbxUIUMGEnhancedInput_ActionWidget.cpp"
                ,0x39);
  FUN_140a50bf4(local_6e0,&local_918,local_2f0);
  plVar4 = local_910;
  if (local_910 == (longlong *)0x0) {
    local_b88 = (undefined8 *)(param_1 + 0x240);
    *(undefined8 *)(param_1 + 0x240) = local_918;
    plVar9 = *(longlong **)(param_1 + 0x248);
    if (plVar9 == (longlong *)0x0) goto LAB_148b5756e;
    *(undefined8 *)(param_1 + 0x248) = 0;
LAB_148b57536:
    local_b88 = (undefined8 *)(param_1 + 0x240);
    LOCK();
    plVar4 = plVar9 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_148b5756e;
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar4 = plVar9;
  }
  else {
    LOCK();
    *(int *)(local_910 + 1) = (int)local_910[1] + 1;
    UNLOCK();
    local_b88 = (undefined8 *)(param_1 + 0x240);
    *(undefined8 *)(param_1 + 0x240) = local_918;
    plVar9 = *(longlong **)(param_1 + 0x248);
    if (local_910 != plVar9) {
      *(longlong **)(param_1 + 0x248) = local_910;
      if (plVar9 == (longlong *)0x0) goto LAB_148b5756e;
      goto LAB_148b57536;
    }
    LOCK();
    plVar9 = local_910 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 != 0) goto LAB_148b5756e;
    (**(code **)*local_910)(local_910);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
LAB_148b5756e:
  if (local_910 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_910 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_910)(local_910);
      LOCK();
      piVar1 = (int *)((longlong)local_910 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_910 + 0x10))(local_910);
      }
    }
  }
  if (local_6d8 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_6d8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_6d8)(local_6d8);
      LOCK();
      piVar1 = (int *)((longlong)local_6d8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_6d8 + 0x10))(local_6d8);
      }
    }
  }
  FUN_140a5660c(local_2f0);
  uVar3 = *(undefined8 *)(param_1 + 0x240);
  FUN_140a504fe(local_4a8);
  FUN_140a4fdf2(local_970,0);
  local_930 = 2;
  local_92c = 1;
  local_928 = 2;
  local_924 = 1;
  FUN_140a53334(local_2f0);
  local_a80 = param_1 + 0x350;
  local_a78 = 1;
  local_a70 = 0;
  uStack_a68 = 0;
  local_140 = 1;
  local_148 = (undefined1 *)local_a80;
  FUN_144a450dc(local_138,&local_a70);
  FUN_1449db362(&local_a70);
  local_b98 = &local_a99;
  FUN_140a554b8(&local_a98,"SImage",
                ".\\../Plugins/Gearbox/GbxUIUMG/Source/GbxUIUMG/Private/Components/GbxUIUMGEnhancedInput_ActionWidget.cpp"
                ,0x43);
  if (local_a90 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_a90 + 1) = (int)local_a90[1] + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x278);
  *(undefined8 *)(param_1 + 0x270) = local_a98;
  *(longlong **)(param_1 + 0x278) = local_a90;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar4 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  FUN_140a52c70(&local_a98,&local_a60,local_2f0);
  local_a50 = local_a60;
  local_a48 = local_a58;
  if (local_a58 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_a58 + 1) = (int)local_a58[1] + 1;
    UNLOCK();
  }
  uVar6 = FUN_140a4fd40(local_970,&local_a50);
  uVar6 = FUN_140a5058c(local_4a8,uVar6);
  FUN_140a4fdf2(local_9c8,0);
  local_988 = 2;
  local_984 = 1;
  local_980 = 2;
  local_97c = 1;
  FUN_140a53334(local_6e0);
  local_ae0 = param_1 + 0x180;
  local_ad8 = 1;
  local_ad0 = 0;
  uStack_ac8 = 0;
  local_530 = 1;
  local_538 = local_ae0;
  FUN_144a450dc(local_528,&local_ad0);
  FUN_1449db362(&local_ad0);
  local_b98 = &local_af9;
  FUN_140a554b8(&local_af8,"SImage",
                ".\\../Plugins/Gearbox/GbxUIUMG/Source/GbxUIUMG/Private/Components/GbxUIUMGEnhancedInput_ActionWidget.cpp"
                ,0x4a);
  if (local_af0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_af0 + 1) = (int)local_af0[1] + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x268);
  *(undefined8 *)(param_1 + 0x260) = local_af8;
  *(longlong **)(param_1 + 0x268) = local_af0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar4 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  FUN_140a52c70(&local_af8,&local_ac0,local_6e0);
  local_ab0 = local_ac0;
  local_aa8 = local_ab8;
  if (local_ab8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_ab8 + 1) = (int)local_ab8[1] + 1;
    UNLOCK();
  }
  uVar7 = FUN_140a4fd40(local_9c8,&local_ab0);
  uVar6 = FUN_140a5058c(uVar6,uVar7);
  FUN_140a4fdf2(local_a20,0);
  local_9e0 = 2;
  local_9dc = 1;
  local_9d8 = 2;
  local_9d4 = 1;
  FUN_140a53334(&local_918);
  local_b40 = param_1 + 0x280;
  local_b38 = 1;
  local_b30 = 0;
  uStack_b28 = 0;
  local_768 = 1;
  local_770 = local_b40;
  FUN_144a450dc(local_760,&local_b30);
  FUN_1449db362(&local_b30);
  local_b98 = &local_b59;
  FUN_140a554b8(&local_b58,"SImage",
                ".\\../Plugins/Gearbox/GbxUIUMG/Source/GbxUIUMG/Private/Components/GbxUIUMGEnhancedInput_ActionWidget.cpp"
                ,0x51);
  if (local_b50 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_b50 + 1) = (int)local_b50[1] + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 600);
  *(undefined8 *)(param_1 + 0x250) = local_b58;
  *(longlong **)(param_1 + 600) = local_b50;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar4 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  FUN_140a52c70(&local_b58,&local_b20,&local_918);
  local_b10 = local_b20;
  local_b08 = local_b18;
  if (local_b18 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_b18 + 1) = (int)local_b18[1] + 1;
    UNLOCK();
  }
  uVar7 = FUN_140a4fd40(local_a20,&local_b10);
  uVar6 = FUN_140a5058c(uVar6,uVar7);
  local_b98 = &local_b79;
  FUN_140a536a8(local_b78,"SOverlay",
                ".\\../Plugins/Gearbox/GbxUIUMG/Source/GbxUIUMG/Private/Components/GbxUIUMGEnhancedInput_ActionWidget.cpp"
                ,0x3e);
  FUN_140a4ff16(local_b78,&local_a40,uVar6);
  local_a30 = local_a40;
  local_a28 = local_a38;
  if (local_a38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_a38 + 1) = (int)local_a38[1] + 1;
    UNLOCK();
  }
  FUN_145cfad50(uVar3,&local_a30);
  plVar4 = local_a28;
  if (local_a28 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_a28 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_a28)(local_a28);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (local_a38 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_a38 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_a38)(local_a38);
      LOCK();
      piVar1 = (int *)((longlong)local_a38 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_a38 + 0x10))(local_a38);
      }
    }
  }
  if (local_b70 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_b70 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_b70)(local_b70);
      LOCK();
      piVar1 = (int *)((longlong)local_b70 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_b70 + 0x10))(local_b70);
      }
    }
  }
  plVar4 = local_b08;
  if (local_b08 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_b08 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_b08)(local_b08);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (local_b18 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_b18 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_b18)(local_b18);
      LOCK();
      piVar1 = (int *)((longlong)local_b18 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_b18 + 0x10))(local_b18);
      }
    }
  }
  if (local_b50 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_b50 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_b50)(local_b50);
      LOCK();
      piVar1 = (int *)((longlong)local_b50 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_b50 + 0x10))(local_b50);
      }
    }
  }
  FUN_140a55a86(&local_918);
  FUN_1415b5e50(local_a20);
  plVar4 = local_aa8;
  if (local_aa8 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_aa8 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_aa8)(local_aa8);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (local_ab8 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_ab8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_ab8)(local_ab8);
      LOCK();
      piVar1 = (int *)((longlong)local_ab8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_ab8 + 0x10))(local_ab8);
      }
    }
  }
  if (local_af0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_af0 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_af0)(local_af0);
      LOCK();
      piVar1 = (int *)((longlong)local_af0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_af0 + 0x10))(local_af0);
      }
    }
  }
  FUN_140a55a86(local_6e0);
  FUN_1415b5e50(local_9c8);
  plVar4 = local_a48;
  if (local_a48 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_a48 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_a48)(local_a48);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (local_a58 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_a58 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_a58)(local_a58);
      LOCK();
      piVar1 = (int *)((longlong)local_a58 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_a58 + 0x10))(local_a58);
      }
    }
  }
  if (local_a90 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_a90 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_a90)(local_a90);
      LOCK();
      piVar1 = (int *)((longlong)local_a90 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_a90 + 0x10))(local_a90);
      }
    }
  }
  FUN_140a55a86(local_2f0);
  FUN_1415b5e50(local_970);
  FUN_1415b5e16(local_4a8);
  uVar3 = *local_b88;
  plVar4 = *(longlong **)(param_1 + 0x248);
  if (plVar4 == (longlong *)0x0) {
    *param_2 = uVar3;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *param_2 = uVar3;
    param_2[1] = plVar4;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    plVar9 = plVar4 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_bb8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b57d7a FUN_148b57d7a body=573 status=ok
// SIG undefined FUN_148b57d7a(void)

void FUN_148b57d7a(longlong *param_1)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  undefined1 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 *puVar9;
  undefined8 unaff_RBX;
  ulonglong uVar10;
  undefined1 auStack_148 [32];
  undefined1 local_128 [48];
  longlong *local_f8;
  undefined1 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined **local_d8 [20];
  longlong *local_38;
  ulonglong local_28;
  undefined7 uVar11;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar6 = (**(code **)(*param_1 + 0x180))();
  if (lVar6 == 0) goto LAB_148b57e10;
  lVar6 = (**(code **)(*param_1 + 0x2d0))(param_1);
  if (lVar6 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = FUN_140e94dc2(lVar6);
  }
  lVar7 = FUN_145921192(param_1);
  uVar11 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar10 = CONCAT71(uVar11,1);
  if ((lVar6 != 0) && (lVar7 != 0)) {
    cVar4 = FUN_148217ba2(lVar6);
    if (cVar4 != '\0') {
      if ((char)param_1[0x66] != '\x01') {
        FUN_143fbb82c(param_1,local_d8);
        FUN_140f13d9e(param_1 + 0x50,local_d8);
        local_d8[0] = &PTR_FUN_149ed05f0;
        if (local_38 != (longlong *)0x0) {
          LOCK();
          plVar8 = local_38 + 1;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)*plVar8 == 0) {
            (**(code **)*local_38)(local_38);
            LOCK();
            piVar1 = (int *)((longlong)local_38 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_38 + 0x10))(local_38);
            }
          }
        }
        dVar2 = (double)param_1[0x81];
        dVar3 = (double)param_1[0x82];
        if ((((dVar2 != 0.0) || (NAN(dVar2))) || (dVar3 != 0.0)) || (NAN(dVar3))) {
          *(float *)(param_1 + 0x54) = (float)dVar2;
          *(float *)((longlong)param_1 + 0x2a4) = (float)dVar3;
        }
        if (*(char *)((longlong)param_1 + 0x29c) != '\0') {
          lVar6 = param_1[0x4a];
          if (lVar6 == 0) goto LAB_148b57e02;
          local_f0 = 1;
          local_e8 = 0;
          uStack_e0 = 0;
          local_f8 = param_1 + 0x50;
          FUN_140a5cfd6(lVar6 + 0x1e0,lVar6,&local_f8);
          FUN_1449db362(&local_e8);
          cVar4 = FUN_145beedf4(param_1);
          if (cVar4 != '\x01') {
            FUN_140163244(param_1[0x4a],1);
          }
          if (*(char *)((longlong)param_1 + 0x401) == '\0') {
            cVar4 = FUN_148b58736(param_1);
            if (cVar4 != '\0') goto LAB_148b57f36;
LAB_148b57f7b:
            plVar8 = (longlong *)param_1[0x4c];
            puVar9 = local_128;
            uVar5 = DAT_14c96b1e1;
          }
          else {
LAB_148b57f36:
            if (((param_1[0x47] == 0) || ((*(uint *)(param_1[0x47] + 8) >> 0x1e & 1) != 0)) ||
               ((char)param_1[0x80] != '\x01')) goto LAB_148b57f7b;
            plVar8 = (longlong *)param_1[0x4c];
            puVar9 = local_128 + 0x18;
            uVar5 = DAT_14c96b23c;
          }
          *puVar9 = uVar5;
          puVar9[1] = 1;
          *(undefined8 *)(puVar9 + 8) = 0;
          *(undefined8 *)(puVar9 + 0x10) = 0;
          (**(code **)(*plVar8 + 0x1c0))();
          FUN_140163244(param_1[0x48],5);
          uVar10 = CONCAT71((int7)((ulonglong)&local_e8 >> 8),4);
          goto LAB_148b57e02;
        }
      }
      uVar10 = CONCAT71(uVar11,1);
      (**(code **)(*param_1 + 0x2b0))(param_1,1);
    }
  }
LAB_148b57e02:
  (**(code **)(*param_1 + 0x2b0))(param_1,uVar10 & 0xffffffff);
LAB_148b57e10:
  if ((local_28 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b57fb8 FUN_148b57fb8 body=1276 status=ok
// SIG undefined FUN_148b57fb8(void)

undefined8 *
FUN_148b57fb8(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined1 auStack_168 [32];
  longlong local_148;
  undefined1 local_131;
  undefined8 *local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined **local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  uint local_100;
  undefined4 uStack_fc;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  longlong local_e0;
  undefined8 auStack_d8 [4];
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined8 uStack_af;
  undefined4 local_a4;
  undefined2 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  uint local_88;
  byte local_84;
  undefined8 local_80;
  longlong *plStack_78;
  undefined8 local_70;
  undefined1 local_60 [8];
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar5 = FUN_1400b6e86(param_3);
  if (lVar5 == 0) {
    uVar7 = FUN_141319416();
    FUN_140e361c2(param_2,uVar7);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_168);
  }
  local_128 = param_4;
  local_131 = FUN_143ae4f7c(param_4);
  local_58 = 0;
  uStack_50 = 0;
  if ((longlong)*(int *)(param_1 + 0x50) != 0) {
    lVar10 = *(longlong *)(param_1 + 0x48);
    lVar13 = (longlong)*(int *)(param_1 + 0x50) << 3;
    do {
      local_148 = lVar5;
      FUN_148b58e5c(param_1,&local_118,lVar10,local_131);
      if (local_118 != DAT_14c966e80) {
        FUN_14011b67e(&local_58,&local_118);
      }
      plVar3 = uStack_108;
      if (uStack_108 != (longlong *)0x0) {
        LOCK();
        plVar1 = uStack_108 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*uStack_108)(uStack_108);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      lVar10 = lVar10 + 8;
      lVar13 = lVar13 + -8;
    } while (lVar13 != 0);
  }
  local_130 = param_2;
  lVar10 = FUN_1409f0d56(param_1 + 0x10);
  if (lVar10 == 0) {
    if ((longlong)*(int *)(param_1 + 0x40) != 0) {
      lVar10 = *(longlong *)(param_1 + 0x38);
      lVar13 = (longlong)*(int *)(param_1 + 0x40) * 0x28;
      do {
        lVar11 = FUN_148b588f4(lVar10);
        if (lVar11 != 0) {
          lVar11 = FUN_148b588f4(lVar10);
          plVar3 = *(longlong **)(lVar11 + 0x70);
          if ((DAT_14c950c29 == 1) && (plVar3 != (longlong *)0x0)) {
            FUN_1456cec3c(plVar3);
          }
          else if (plVar3 == (longlong *)0x0) goto LAB_148b581f8;
          (**(code **)(*plVar3 + 0x2a8))(plVar3,local_60);
          local_148 = lVar5;
          FUN_148b58e5c(param_1,&local_118,local_60,local_131);
          if (local_118 != DAT_14c966e80) {
            FUN_14011b67e(&local_58,&local_118);
          }
          plVar3 = uStack_108;
          if (uStack_108 != (longlong *)0x0) {
            LOCK();
            plVar1 = uStack_108 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*uStack_108)(uStack_108);
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
LAB_148b581f8:
        lVar10 = lVar10 + 0x28;
        lVar13 = lVar13 + -0x28;
      } while (lVar13 != 0);
    }
  }
  else {
    lVar10 = FUN_1409f0d56(param_1 + 0x10);
    if ((longlong)*(int *)(lVar10 + 0x38) != 0) {
      lVar13 = *(longlong *)(lVar10 + 0x30);
      lVar10 = (longlong)*(int *)(lVar10 + 0x38) * 0x50 + lVar13;
      do {
        FUN_14022188c(lVar13,local_60);
        if ((longlong)*(int *)(param_1 + 0x40) != 0) {
          lVar11 = *(longlong *)(param_1 + 0x38);
          lVar8 = (longlong)*(int *)(param_1 + 0x40) * 0x28;
          do {
            lVar6 = FUN_148b588f4(lVar11);
            if (*(longlong *)(lVar13 + 0x20) == lVar6) {
              local_148 = lVar5;
              FUN_148b58e5c(param_1,&local_118,local_60,local_131);
              if (local_118 != DAT_14c966e80) {
                FUN_14011b67e(&local_58,&local_118);
              }
              plVar3 = uStack_108;
              if (uStack_108 != (longlong *)0x0) {
                LOCK();
                plVar1 = uStack_108 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*uStack_108)(uStack_108);
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
            lVar11 = lVar11 + 0x28;
            lVar8 = lVar8 + -0x28;
          } while (lVar8 != 0);
        }
        lVar13 = lVar13 + 0x50;
      } while (lVar13 != lVar10);
    }
  }
  local_118 = &PTR_FUN_149ed05f0;
  local_110 = &DAT_3f8000003f800000;
  uStack_108 = (longlong *)&DAT_3f8000003f800000;
  local_100 = local_100 & 0xffffff00;
  uStack_fc = 3;
  uStack_f8 = 0x4200000042000000;
  local_a4 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  auStack_d8[0] = 0;
  auStack_d8[1] = 0;
  auStack_d8[2] = 0;
  auStack_d8[3] = 0;
  uStack_b8 = 0;
  uStack_b7 = 0;
  uStack_b0 = 0;
  uStack_af = 0;
  local_a0 = 1;
  local_90 = DAT_14c84635c;
  local_98 = DAT_14c84635c;
  local_88 = local_88 & 0xffffff00;
  local_84 = local_84 & 0xf8 | 4;
  local_80 = 0;
  plStack_78 = (longlong *)0x0;
  local_70 = 0;
  uVar7 = FUN_140902dbe();
  FUN_148217484(local_128,&local_120);
  local_148 = local_120;
  cVar4 = FUN_148217158(uVar7,&local_118,&local_58,local_131);
  puVar9 = local_130;
  if (cVar4 == '\0') {
    uVar7 = FUN_141319416();
    puVar9 = local_130;
    FUN_140e361c2(local_130,uVar7);
  }
  else {
    *local_130 = &PTR_FUN_149ed05f0;
    *(undefined4 *)(local_130 + 1) = (undefined4)local_110;
    *(undefined4 *)((longlong)local_130 + 0xc) = local_110._4_4_;
    *(undefined4 *)(local_130 + 2) = (undefined4)uStack_108;
    *(undefined4 *)((longlong)local_130 + 0x14) = uStack_108._4_4_;
    *(uint *)(local_130 + 3) = local_100;
    *(undefined4 *)((longlong)local_130 + 0x1c) = uStack_fc;
    *(undefined4 *)(local_130 + 4) = (undefined4)uStack_f8;
    *(undefined4 *)((longlong)local_130 + 0x24) = uStack_f8._4_4_;
    *(undefined4 *)(local_130 + 5) = (undefined4)local_f0;
    *(undefined4 *)((longlong)local_130 + 0x2c) = local_f0._4_4_;
    *(undefined4 *)(local_130 + 6) = (undefined4)uStack_e8;
    *(undefined4 *)((longlong)local_130 + 0x34) = uStack_e8._4_4_;
    local_130[7] = local_e0;
    if ((local_e0 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    puVar12 = auStack_d8;
    puVar14 = puVar9 + 8;
    for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar14 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar14 = puVar14 + 1;
    }
    *(byte *)((longlong)puVar9 + 0x94) = local_84;
    *(uint *)(puVar9 + 0x12) = local_88;
    puVar9[0x13] = local_80;
    puVar9[0x14] = plStack_78;
    if (plStack_78 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_78 + 1) = (int)plStack_78[1] + 1;
      UNLOCK();
    }
    puVar9[0x15] = local_70;
  }
  plVar3 = plStack_78;
  local_118 = &PTR_FUN_149ed05f0;
  if (plStack_78 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_78 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_78)(plStack_78);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_144a65a1e(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return puVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b584b6 FUN_148b584b6 body=345 status=ok
// SIG undefined FUN_148b584b6(void)

longlong FUN_148b584b6(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = (**(code **)(*param_1 + 0x2d0))();
  if (lVar4 != 0) {
    lVar4 = FUN_1400b6e86(lVar4);
    if (lVar4 != 0) {
      lVar5 = (**(code **)(*param_1 + 0x2d0))(param_1);
      if (lVar5 != 0) {
        lVar5 = FUN_140e94dc2(lVar5);
        if (lVar5 != 0) {
          lVar6 = FUN_143fbb9e4(param_1);
          cVar2 = FUN_143ae4f7c(lVar5);
          (**(code **)(*(longlong *)(lVar4 + 0x30) + 0xd8))(lVar4 + 0x30,&local_48);
          bVar1 = true;
          if ((longlong)local_40 != 0) {
            lVar5 = local_48 + 0x28;
            lVar4 = (longlong)local_40 * 0x50;
            do {
              if (cVar2 == '\0') {
                cVar3 = FUN_140230656(lVar5);
LAB_148b58594:
                if ((cVar3 == '\0') && (*(longlong *)(lVar5 + -8) == lVar6)) {
                  lVar6 = FUN_1402218d6(lVar5 + -0x28);
                  lVar6 = lVar6 + 0x38;
                  bVar1 = false;
                  break;
                }
              }
              else if (cVar2 == '\x01') {
                cVar3 = FUN_140230656(lVar5);
                if (cVar3 != '\0') {
                  cVar3 = '\0';
                  goto LAB_148b58594;
                }
              }
              lVar5 = lVar5 + 0x50;
              lVar4 = lVar4 + -0x50;
            } while (lVar4 != 0);
          }
          FUN_140dde623(local_48,local_40);
          if (local_48 != 0) {
            FUN_1400020a8();
          }
          if (!bVar1) goto LAB_148b585d2;
        }
      }
    }
  }
  lVar6 = FUN_140e82300();
LAB_148b585d2:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b58610 FUN_148b58610 body=160 status=ok
// SIG undefined FUN_148b58610(void)

void FUN_148b58610(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  
  plVar1 = (longlong *)(param_1 + 0x338);
  uVar4 = *(uint *)(param_1 + 0x344);
  iVar5 = 0;
  if ((int)uVar4 < 0) {
    *(undefined4 *)(param_1 + 0x340) = 0;
    FUN_148249d46(plVar1,0);
    iVar5 = *(int *)(param_1 + 0x340);
    uVar4 = *(uint *)(param_1 + 0x344);
  }
  *(uint *)(param_1 + 0x340) = iVar5 + 1U;
  if (uVar4 < iVar5 + 1U) {
    FUN_148249da6(plVar1,iVar5);
  }
  lVar2 = *plVar1;
  lVar3 = *param_2;
  *(longlong *)(lVar2 + (longlong)iVar5 * 0x10) = lVar3;
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(longlong *)(lVar2 + (longlong)iVar5 * 0x10 + 8) = param_2[1];
  FUN_148b57d7a(param_1);
  return;
}



// FUNCTION 148b586b0 FUN_148b586b0 body=33 status=ok
// SIG undefined FUN_148b586b0(void)

void FUN_148b586b0(longlong param_1)

{
  FUN_14821c7d0(param_1 + 0x338);
  FUN_148b57d7a(param_1);
  return;
}



// FUNCTION 148b586d2 FUN_148b586d2 body=84 status=ok
// SIG undefined FUN_148b586d2(void)

void FUN_148b586d2(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_140f13d9e(param_1 + 0x350);
  *param_2 = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_2[0x14];
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
                    /* WARNING: Could not recover jumptable at 0x000148b5871b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148b58726 FUN_148b58726 body=15 status=ok
// SIG undefined FUN_148b58726(void)

void FUN_148b58726(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(param_1 + 0x408) = *param_2;
  *(undefined4 *)(param_1 + 0x40c) = uVar1;
  *(undefined4 *)(param_1 + 0x410) = uVar2;
  *(undefined4 *)(param_1 + 0x414) = uVar3;
  FUN_148b57d7a();
  return;
}



// FUNCTION 148b58736 FUN_148b58736 body=137 status=ok
// SIG undefined FUN_148b58736(void)

undefined8 FUN_148b58736(longlong *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined7 uVar6;
  byte bVar7;
  float extraout_XMM0_Da;
  
  lVar3 = (**(code **)(*param_1 + 0x2d0))();
  if (lVar3 != 0) {
    lVar4 = (**(code **)(*param_1 + 0x2d0))(param_1);
    if (((lVar4 == 0) || (lVar4 = FUN_140e94dc2(lVar4), lVar4 == 0)) ||
       (lVar3 = FUN_1400b6e86(lVar3), lVar3 == 0)) {
      bVar1 = false;
      uVar6 = 0;
      bVar7 = 0;
    }
    else {
      uVar2 = FUN_143ae4f7c(lVar4);
      uVar5 = FUN_143fbb9e4(param_1);
      uVar5 = FUN_148b587c0(uVar5,lVar3,uVar2);
      bVar1 = 0.0 < extraout_XMM0_Da;
      uVar6 = (undefined7)((ulonglong)uVar5 >> 8);
      bVar7 = 1;
    }
    return CONCAT71(uVar6,bVar1 & bVar7);
  }
  return 0;
}



// FUNCTION 148b587c0 FUN_148b587c0 body=307 status=ok
// SIG undefined FUN_148b587c0(void)

undefined8 FUN_148b587c0(longlong param_1,longlong param_2,char param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [40];
  longlong local_60;
  int local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 == 0) {
    uVar4 = 0xbf800000;
  }
  else {
    (**(code **)(*(longlong *)(param_2 + 0x30) + 0xd8))(param_2 + 0x30,&local_60);
    if ((longlong)local_58 == 0) {
      local_58 = 0;
      uVar4 = 0xbf800000;
    }
    else {
      lVar2 = local_60 + 0x28;
      lVar3 = (longlong)local_58 * 0x50;
      do {
        if (param_3 == '\0') {
          cVar1 = FUN_140230656(lVar2);
LAB_148b58856:
          if (((cVar1 == '\0') && (*(longlong *)(lVar2 + -8) == param_1)) &&
             ((uVar4 = FUN_148b589ba(lVar2 + -0x28), 0.0 <= (float)uVar4 ||
              (uVar4 = FUN_148b589ba(*(longlong *)(lVar2 + -8) + 0x50), 0.0 <= (float)uVar4))))
          break;
        }
        else if ((param_3 == '\x01') && (cVar1 = FUN_140230656(lVar2), cVar1 != '\0')) {
          cVar1 = '\0';
          goto LAB_148b58856;
        }
        lVar2 = lVar2 + 0x50;
        lVar3 = lVar3 + -0x50;
        uVar4 = 0xbf800000;
      } while (lVar3 != 0);
    }
    FUN_140dde623(local_60,local_58);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_50 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 148b588f4 FUN_148b588f4 body=197 status=ok
// SIG undefined FUN_148b588f4(void)

longlong FUN_148b588f4(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_14479d2ce();
  if (lVar3 == 0) {
    if (*(longlong *)(param_1 + 8) == 0) {
      return 0;
    }
    lVar3 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar3 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(param_1,lVar3);
      if (lVar3 == 0) {
        return 0;
      }
    }
    else {
      uVar1 = *(uint *)(lVar3 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar3);
      }
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar4 = FUN_140e70da6();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar3;
  }
  return 0;
}



// FUNCTION 148b589ba FUN_148b589ba body=218 status=ok
// SIG undefined FUN_148b589ba(void)

undefined4 FUN_148b589ba(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar4 = param_1[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar1 = *param_1;
    lVar7 = 0;
    do {
      if (((*(longlong **)(lVar1 + lVar7) != (longlong *)0x0) &&
          (uVar5 = (**(code **)(**(longlong **)(lVar1 + lVar7) + 0x2b0))(), (uVar5 & 4) != 0)) &&
         (*(longlong *)(lVar1 + lVar7) != 0)) {
        lVar6 = FUN_1401d6df2();
        lVar2 = *(longlong *)(lVar1 + lVar7);
        if (lVar2 != 0) {
          if (((lVar6 != 0) && (lVar3 = *(longlong *)(lVar2 + 0x10), lVar3 != 0)) &&
             ((*(int *)(lVar6 + 0x38) <= *(int *)(lVar3 + 0x38) &&
              (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
               lVar6 + 0x30)))) {
            return *(undefined4 *)(lVar2 + 0x5c);
          }
          lVar6 = FUN_145b665ac();
          lVar2 = *(longlong *)(lVar1 + lVar7);
          if (((lVar2 != 0) && (lVar6 != 0)) &&
             ((lVar3 = *(longlong *)(lVar2 + 0x10), lVar3 != 0 &&
              ((*(int *)(lVar6 + 0x38) <= *(int *)(lVar3 + 0x38) &&
               (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
                lVar6 + 0x30)))))) {
            return *(undefined4 *)(lVar2 + 0x58);
          }
        }
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)(int)lVar4 * 8 != lVar7);
  }
  return 0xbf800000;
}



// FUNCTION 148b58a94 FUN_148b58a94 body=28 status=ok
// SIG undefined FUN_148b58a94(void)

void FUN_148b58a94(undefined8 param_1)

{
  FUN_148b57d7a();
  FUN_1461ec788(param_1,1);
  return;
}



// FUNCTION 148b58ab0 FUN_148b58ab0 body=254 status=ok
// SIG undefined FUN_148b58ab0(void)

undefined8
FUN_148b58ab0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14ae6bc70;
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
  *local_48 = &PTR_FUN_14b59cc60;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1457bd49c(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b58bb0 FUN_148b58bb0 body=43 status=ok
// SIG undefined FUN_148b58bb0(void)

void FUN_148b58bb0(longlong param_1,char param_2)

{
  FUN_148b57d7a();
  FUN_148b4f072(param_1 + 0x168,param_2 == '\x01');
  return;
}



// FUNCTION 148b58bdc FUN_148b58bdc body=125 status=ok
// SIG undefined FUN_148b58bdc(void)

void FUN_148b58bdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  FUN_14485c47a(&local_48);
  uStack_40 = param_3;
  FUN_14113f0c0(&local_48);
  local_38 = (undefined4)local_48;
  uStack_34 = local_48._4_4_;
  uStack_30 = (undefined4)uStack_40;
  uStack_2c = uStack_40._4_4_;
  FUN_1403350f6(param_1);
  FUN_144a7b126(param_1,&local_21,1);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b58c5a FUN_148b58c5a body=201 status=ok
// SIG undefined FUN_148b58c5a(void)

undefined8 * FUN_148b58c5a(undefined8 *param_1)

{
  undefined1 auStack_78 [32];
  wchar_t local_58 [36];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb9d938) {
    FUN_144b3d300(&DAT_14cb9d938);
    if (DAT_14cb9d938 == -1) {
      builtin_wcsncpy(local_58 + 0x18,L"uilt",5);
      builtin_wcsncpy(local_58 + 0x10,L"pingsReb",8);
      builtin_wcsncpy(local_58 + 8,L"ntrolMap",8);
      builtin_wcsncpy(local_58,L"HandleCo",8);
      FUN_1446f470e(&DAT_14cb9d930,local_58,1);
      _Init_thread_footer(&DAT_14cb9d938);
    }
  }
  *param_1 = DAT_14cb9d930;
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b58d2a FUN_148b58d2a body=257 status=ok
// SIG undefined FUN_148b58d2a(void)

void FUN_148b58d2a(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = param_1 + 0x180;
  FUN_140f13d9e(lVar1);
  *(undefined8 *)(param_1 + 0x230) = *param_3;
  lVar3 = *(longlong *)(param_1 + 0x1b8);
  if (lVar3 != 0) {
    lVar2 = FUN_1402d2740();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      lVar3 = FUN_14090ceee(lVar3,0,0);
      if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar3);
      }
      *(longlong *)(param_1 + 0x238) = lVar3;
      FUN_140648376(lVar1,lVar3);
      goto LAB_148b58d96;
    }
  }
  *(undefined8 *)(param_1 + 0x238) = 0;
LAB_148b58d96:
  lVar3 = *(longlong *)(param_1 + 0x260);
  if (lVar3 != 0) {
    local_38 = 1;
    local_30 = 0;
    uStack_28 = 0;
    local_40 = lVar1;
    FUN_140a5cfd6(lVar3 + 0x1e0,lVar3,&local_40);
    FUN_1449db362(&local_30);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b58e2c FUN_148b58e2c body=36 status=ok
// SIG undefined FUN_148b58e2c(void)

void FUN_148b58e2c(longlong param_1,undefined4 param_2)

{
  if ((*(longlong *)(param_1 + 0x238) != 0) && (*(longlong *)(param_1 + 0x230) != 0)) {
    FUN_14472da24(*(longlong *)(param_1 + 0x238),*(longlong *)(param_1 + 0x230),param_2);
    return;
  }
  return;
}



// FUNCTION 148b58e50 FUN_148b58e50 body=11 status=ok
// SIG undefined FUN_148b58e50(void)

void FUN_148b58e50(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x401) = param_2;
  FUN_148b57d7a();
  return;
}



// FUNCTION 148b58e5c FUN_148b58e5c body=529 status=ok
// SIG undefined FUN_148b58e5c(void)

undefined8 *
FUN_148b58e5c(longlong param_1,undefined8 *param_2,undefined8 *param_3,char param_4,longlong param_5
             )

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined1 auStack_b8 [32];
  longlong local_98;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = param_1;
  plVar8 = (longlong *)(**(code **)(*(longlong *)(param_5 + 0x30) + 0x18))(param_5 + 0x30);
  uVar5 = local_78;
  if (plVar8 != (longlong *)0x0) {
    plVar9 = (longlong *)(**(code **)(*plVar8 + 0x2f8))(plVar8,*param_3);
    plVar8 = plVar9 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    uStack_60 = plVar8;
    if ((int)plVar9[5] == 0) {
      iVar11 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar11 = (int)plVar9[5];
    }
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78 = local_58;
    uVar5 = local_78;
    local_88 = (undefined4)local_68;
    uStack_84 = local_68._4_4_;
    uStack_80 = (undefined4)uStack_60;
    uStack_7c = uStack_60._4_4_;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = plVar9;
    if ((local_78._4_4_ != iVar11) || (uStack_60 != plVar8)) {
      iVar7 = local_78._4_4_;
      local_78 = uVar5;
      do {
        puVar10 = (undefined8 *)FUN_1410e88d8((longlong)iVar7 * 0x90 + *local_90);
        *param_2 = *puVar10;
        param_2[1] = puVar10[1];
        lVar3 = puVar10[2];
        param_2[2] = lVar3;
        if (lVar3 != 0) {
          LOCK();
          *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
          UNLOCK();
        }
        if (param_4 == '\0') {
          cVar6 = FUN_140230656(param_2);
          if (((cVar6 == '\0') && (cVar6 = FUN_140230860(param_2), cVar6 == '\0')) &&
             (*(char *)(local_98 + 9) != '\x01')) goto LAB_148b58f48;
        }
        else if (((param_4 == '\x01') && (cVar6 = FUN_140230656(param_2), cVar6 != '\0')) &&
                (*(char *)(local_98 + 10) == '\0')) goto LAB_148b58f48;
        plVar4 = (longlong *)param_2[2];
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar4 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
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
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
        FUN_1449c0562(&local_88);
        iVar7 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_90 != plVar9 ||
               ((longlong *)CONCAT44(uStack_7c,uStack_80) != plVar8 || local_78._4_4_ != iVar11));
    }
  }
  local_78 = uVar5;
  *param_2 = DAT_14c966e80;
  param_2[1] = DAT_14c966e88;
  lVar3 = DAT_14c966e90;
  param_2[2] = DAT_14c966e90;
  if (lVar3 != 0) {
    LOCK();
    piVar1 = (int *)(lVar3 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
LAB_148b58f48:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148b5906e FUN_148b5906e body=48 status=ok
// SIG undefined FUN_148b5906e(void)

void FUN_148b5906e(longlong *param_1)

{
  FUN_140ec5ab0();
  FUN_148b5909e(param_1,1);
  (**(code **)(*param_1 + 0x4a0))(param_1);
  FUN_148b59186(param_1);
  return;
}



// FUNCTION 148b5909e FUN_148b5909e body=231 status=ok
// SIG undefined FUN_148b5909e(void)

void FUN_148b5909e(longlong *param_1,char param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  code *local_38;
  undefined4 local_30;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = (**(code **)(*param_1 + 0x2d0))();
  if (lVar1 != 0) {
    lVar1 = FUN_140e94dc2(lVar1);
    if (lVar1 != 0) {
      FUN_140457ffc(lVar1 + 0x30,param_1);
      if (param_2 != '\0') {
        local_38 = FUN_148b59a96;
        local_30 = 0;
        FUN_148b59996(lVar1 + 0x30,local_28,param_1);
      }
    }
  }
  lVar1 = (**(code **)(*param_1 + 0x2d0))(param_1);
  if (lVar1 != 0) {
    lVar1 = FUN_1400b6e86(lVar1);
    if (lVar1 != 0) {
      FUN_1401073f6(lVar1 + 0x180,param_1);
      if (param_2 != '\0') {
        FUN_148b58c5a(&local_40);
        FUN_148b59ab4(lVar1 + 0x180,param_1,local_40);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b59186 FUN_148b59186 body=623 status=ok
// SIG undefined FUN_148b59186(void)

void FUN_148b59186(longlong *param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  undefined1 auStack_78 [32];
  code **local_58;
  code *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1[0x5a] != 0) {
    lVar3 = (**(code **)(*param_1 + 0x2d0))();
    if (lVar3 != 0) {
      lVar4 = (**(code **)(*param_1 + 0x2d0))(param_1);
      if (lVar4 != 0) {
        lVar4 = FUN_140e94dc2(lVar4);
        if (lVar4 != 0) {
          lVar5 = FUN_1400b6e86(lVar3);
          if (lVar5 != 0) {
            uVar2 = FUN_143ae4f7c(lVar4);
            uVar6 = FUN_143fbb9e4(param_1[0x5a]);
            fVar8 = (float)FUN_148b587c0(uVar6,lVar5,uVar2);
            *(float *)(param_1 + 0x61) = fVar8;
            uVar7 = (**(code **)(*param_1 + 0x180))(param_1);
            lVar3 = FUN_140334a94(lVar3,uVar7);
            if (fVar8 <= 0.0) {
              if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x188) != 0)) {
                lVar4 = FUN_14119cfbe();
                if ((*(longlong *)(lVar3 + 0x188) != 0) &&
                   ((((lVar4 != 0 &&
                      (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x188) + 0x10), lVar3 != 0)) &&
                     (*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
                    (*(longlong *)
                      (*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
                     lVar4 + 0x30)))) {
                    /* WARNING: Subroutine does not return */
                  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
                }
              }
            }
            else if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x188) != 0)) {
              lVar4 = FUN_14119cfbe();
              plVar1 = *(longlong **)(lVar3 + 0x188);
              if ((((plVar1 != (longlong *)0x0) && ((lVar4 != 0 && (lVar3 = plVar1[2], lVar3 != 0)))
                   ) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
                 (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
                  == lVar4 + 0x30)) {
                (**(code **)(*plVar1 + 0x478))(plVar1,param_1);
                local_50 = FUN_148b59860;
                local_48 = 0;
                local_58 = &local_50;
                FUN_148b5975e(plVar1,uVar6,2,param_1);
                local_50 = FUN_148b598c0;
                local_48 = 0;
                local_58 = &local_50;
                FUN_148b5975e(plVar1,uVar6,4,param_1);
                local_50 = (code *)&LAB_148b5995e;
                local_48 = 0;
                local_58 = &local_50;
                FUN_148b5975e(plVar1,uVar6,8,param_1);
                local_50 = (code *)&LAB_148b5997a;
                local_48 = 0;
                local_58 = &local_50;
                FUN_148b5975e(plVar1,uVar6,1,param_1);
              }
            }
          }
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b59412 FUN_148b59412 body=28 status=ok
// SIG undefined FUN_148b59412(void)

void FUN_148b59412(undefined8 param_1)

{
  FUN_148b5909e(param_1,0);
  FUN_140e64ae8(param_1);
  return;
}



// FUNCTION 148b5942e FUN_148b5942e body=50 status=ok
// SIG undefined FUN_148b5942e(void)

void FUN_148b5942e(longlong param_1,undefined1 param_2)

{
  if (*(longlong *)(param_1 + 0x2d0) == 0) {
    return;
  }
  *(undefined1 *)(*(longlong *)(param_1 + 0x2d0) + 0x400) = param_2;
  FUN_148b57d7a();
  FUN_148b59186(param_1);
  return;
}



// FUNCTION 148b59460 FUN_148b59460 body=176 status=ok
// SIG undefined FUN_148b59460(void)

void FUN_148b59460(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar1 = param_1 + 0x5e;
  *(undefined4 *)(param_1 + 0x5f) = 0;
  if (*(int *)((longlong)param_1 + 0x2fc) < 0) {
    FUN_148249d46(plVar1,0);
  }
  if ((*param_2 != 0) || (param_2[1] != 0)) {
    iVar2 = (int)param_1[0x5f];
    *(uint *)(param_1 + 0x5f) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0x2fc) < iVar2 + 1U) {
      FUN_148249da6(plVar1,iVar2);
    }
    lVar3 = *plVar1;
    lVar4 = *param_2;
    *(longlong *)(lVar3 + (longlong)iVar2 * 0x10) = lVar4;
    if ((lVar4 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    *(longlong *)(lVar3 + (longlong)iVar2 * 0x10 + 8) = param_2[1];
  }
  (**(code **)(*param_1 + 0x4a0))(param_1);
  FUN_148b59186(param_1);
  return;
}



// FUNCTION 148b59510 FUN_148b59510 body=45 status=ok
// SIG undefined FUN_148b59510(void)

void FUN_148b59510(longlong *param_1)

{
  FUN_14821c7d0(param_1 + 0x5e);
  (**(code **)(*param_1 + 0x4a0))(param_1);
  FUN_148b59186(param_1);
  return;
}



// FUNCTION 148b5953e FUN_148b5953e body=176 status=ok
// SIG undefined FUN_148b5953e(void)

void FUN_148b5953e(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  longlong *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x2d0);
  if (lVar1 != 0) {
    FUN_14821c7d0(lVar1 + 0x338,param_1 + 0x2f0);
    FUN_148b57d7a(lVar1);
    plVar3 = (longlong *)FUN_148b584b6(*(undefined8 *)(param_1 + 0x2d0));
    plVar2 = *(longlong **)(param_1 + 0x2d8);
    if (plVar2 != (longlong *)0x0) {
      local_30 = (longlong *)*plVar3;
      if (local_30 != (longlong *)0x0) {
        (**(code **)(*local_30 + 8))();
      }
      local_28 = (undefined4)plVar3[1];
      (**(code **)(*plVar2 + 0x348))(plVar2);
    }
    FUN_148b4f8c6(param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b595f0 FUN_148b595f0 body=136 status=ok
// SIG undefined FUN_148b595f0(void)

void FUN_148b595f0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  double dVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x2d0);
  if (((lVar1 != 0) && (*(longlong *)(lVar1 + 0x238) != 0)) && (*(longlong *)(lVar1 + 0x230) != 0))
  {
    dVar2 = (double)(float)param_2;
    if (1.0 <= dVar2) {
      dVar2 = 1.0;
    }
    if (dVar2 <= 0.0) {
      dVar2 = 0.0;
    }
    FUN_14472da24(*(longlong *)(lVar1 + 0x238),*(longlong *)(lVar1 + 0x230),
                  (float)(((double)*(float *)(param_1 + 0x2e4) - (double)*(float *)(param_1 + 0x2e8)
                          ) * dVar2 + (double)*(float *)(param_1 + 0x2e8)));
  }
  FUN_148b4f868(param_1,param_2);
  return;
}



// FUNCTION 148b59678 FUN_148b59678 body=106 status=ok
// SIG undefined FUN_148b59678(void)

void FUN_148b59678(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x2d0);
  if (lVar2 != 0) {
    lVar1 = *(longlong *)(lVar2 + 0x238);
    if (*(char *)(param_1 + 0x2ec) == '\x01') {
      if ((lVar1 == 0) || (lVar2 = *(longlong *)(lVar2 + 0x230), lVar2 == 0)) goto LAB_148b596d5;
      uVar3 = *(undefined4 *)(param_1 + 0x2e0);
    }
    else {
      if ((lVar1 == 0) || (lVar2 = *(longlong *)(lVar2 + 0x230), lVar2 == 0)) goto LAB_148b596d5;
      uVar3 = *(undefined4 *)(param_1 + 0x2e4);
    }
    FUN_14472da24(lVar1,lVar2,uVar3);
  }
LAB_148b596d5:
  FUN_148b4f838(param_1);
  return;
}



// FUNCTION 148b596e2 FUN_148b596e2 body=70 status=ok
// SIG undefined FUN_148b596e2(void)

void FUN_148b596e2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x2d0);
  if (((lVar1 != 0) && (*(longlong *)(lVar1 + 0x238) != 0)) && (*(longlong *)(lVar1 + 0x230) != 0))
  {
    FUN_14472da24(*(longlong *)(lVar1 + 0x238),*(longlong *)(lVar1 + 0x230),
                  *(undefined4 *)(param_1 + 0x2e0));
  }
  FUN_148b4f808(param_1);
  return;
}



// FUNCTION 148b5975e FUN_148b5975e body=257 status=ok
// SIG undefined FUN_148b5975e(void)

void FUN_148b5975e(longlong param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined4 *)(param_5 + 1);
  uVar3 = *param_5;
  puVar4 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  FUN_1414a725e(puVar4);
  *puVar4 = &PTR_LAB_14acd0ae0;
  puVar4[2] = 0;
  FUN_14485c47a(puVar4 + 2,param_2);
  *(undefined1 *)(puVar4 + 3) = param_3;
  *puVar4 = &PTR_FUN_14b47b0e0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  *(undefined1 *)(puVar4 + 6) = 0;
  local_50 = uVar3;
  local_48 = uVar1;
  FUN_148b5ec3c(puVar4 + 4,param_4);
  *(undefined1 *)(puVar4 + 6) = *(undefined1 *)(param_1 + 0x1c8);
  iVar2 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar2 + 1U) {
    FUN_141053524((longlong *)(param_1 + 0x198),iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar2 * 8) = puVar4;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b59860 FUN_148b59860 body=95 status=ok
// SIG undefined FUN_148b59860(void)

void FUN_148b59860(longlong param_1)

{
  undefined1 auStack_48 [40];
  LARGE_INTEGER local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  QueryPerformanceCounter(&local_20);
  *(double *)(param_1 + 0x300) = (double)local_20.QuadPart * DAT_14c83f420 + 16777216.0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b598c0 FUN_148b598c0 body=157 status=ok
// SIG undefined FUN_148b598c0(void)

void FUN_148b598c0(longlong *param_1)

{
  double dVar1;
  undefined1 auStack_48 [40];
  LARGE_INTEGER local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (0.0 < *(float *)(param_1 + 0x61)) {
    QueryPerformanceCounter(&local_20);
    dVar1 = (((double)local_20.QuadPart * DAT_14c83f420 + 16777216.0) - (double)param_1[0x60]) /
            (double)*(float *)(param_1 + 0x61);
    if (1.0 <= dVar1) {
      dVar1 = 1.0;
    }
    if (dVar1 <= 0.0) {
      dVar1 = 0.0;
    }
    (**(code **)(*param_1 + 0x4a8))(param_1,(float)dVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b59996 FUN_148b59996 body=254 status=ok
// SIG undefined FUN_148b59996(void)

undefined8
FUN_148b59996(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14ae6bc70;
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
  *local_48 = &PTR_FUN_14b59cd80;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1457bd49c(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b59a96 FUN_148b59a96 body=30 status=ok
// SIG undefined FUN_148b59a96(void)

void FUN_148b59a96(longlong *param_1)

{
  (**(code **)(*param_1 + 0x4a0))();
  FUN_148b59186(param_1);
  return;
}



// FUNCTION 148b59ab4 FUN_148b59ab4 body=125 status=ok
// SIG undefined FUN_148b59ab4(void)

void FUN_148b59ab4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  FUN_14485c47a(&local_48);
  uStack_40 = param_3;
  FUN_14113f0c0(&local_48);
  local_38 = (undefined4)local_48;
  uStack_34 = local_48._4_4_;
  uStack_30 = (undefined4)uStack_40;
  uStack_2c = uStack_40._4_4_;
  FUN_1403350f6(param_1);
  FUN_144a7b126(param_1,&local_21,1);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b59b32 FUN_148b59b32 body=30 status=ok
// SIG undefined FUN_148b59b32(void)

void FUN_148b59b32(longlong *param_1)

{
  (**(code **)(*param_1 + 0x4a0))();
  FUN_148b59186(param_1);
  return;
}



// FUNCTION 148b59b50 FUN_148b59b50 body=492 status=ok
// SIG undefined FUN_148b59b50(void)

undefined8 * FUN_148b59b50(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_248 [32];
  undefined1 *local_228;
  undefined8 local_220;
  undefined4 local_218;
  undefined1 local_209;
  undefined1 local_208 [8];
  longlong *local_200;
  undefined8 local_1f0;
  longlong *local_1e8;
  undefined1 local_1e0 [432];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_248;
  FUN_147744522(local_1e0);
  local_228 = &local_209;
  FUN_14777227c(local_208,"SPostBufferUpdate",
                ".\\../Plugins/Gearbox/GbxUIUMG/Source/GbxUIUMG/Private/Components/GbxUIUMGPostBufferUpdate.cpp"
                ,0x19);
  FUN_147744540(local_208,&local_1f0,local_1e0);
  plVar4 = local_1e8;
  if (local_1e8 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x178) = local_1f0;
    plVar5 = *(longlong **)(param_1 + 0x180);
    if (plVar5 == (longlong *)0x0) goto LAB_148b59c49;
    *(undefined8 *)(param_1 + 0x180) = 0;
LAB_148b59c11:
    LOCK();
    plVar4 = plVar5 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_148b59c49;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar4 = plVar5;
  }
  else {
    LOCK();
    *(int *)(local_1e8 + 1) = (int)local_1e8[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x178) = local_1f0;
    plVar5 = *(longlong **)(param_1 + 0x180);
    if (local_1e8 != plVar5) {
      *(longlong **)(param_1 + 0x180) = local_1e8;
      if (plVar5 == (longlong *)0x0) goto LAB_148b59c49;
      goto LAB_148b59c11;
    }
    LOCK();
    plVar5 = local_1e8 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_148b59c49;
    (**(code **)*local_1e8)(local_1e8);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
LAB_148b59c49:
  if (local_1e8 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_1e8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_1e8)(local_1e8);
      LOCK();
      piVar1 = (int *)((longlong)local_1e8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1e8 + 0x10))(local_1e8);
      }
    }
  }
  if (local_200 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_200 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_200)(local_200);
      LOCK();
      piVar1 = (int *)((longlong)local_200 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_200 + 0x10))(local_200);
      }
    }
  }
  FUN_140a4ff8c(local_1e0);
  local_220 = *(undefined8 *)(param_1 + 0x168);
  local_218 = *(undefined4 *)(param_1 + 0x170);
  FUN_147790072(*(undefined8 *)(param_1 + 0x178));
  uVar3 = *(undefined8 *)(param_1 + 0x178);
  plVar4 = *(longlong **)(param_1 + 0x180);
  if (plVar4 == (longlong *)0x0) {
    *param_2 = uVar3;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *param_2 = uVar3;
    param_2[1] = plVar4;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
  if ((local_30 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b59d3e FUN_148b59d3e body=97 status=ok
// SIG undefined FUN_148b59d3e(void)

void FUN_148b59d3e(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1412719b8();
  if (*(longlong *)(param_1 + 0x178) != 0) {
    local_20 = *(undefined8 *)(param_1 + 0x168);
    local_18 = *(undefined4 *)(param_1 + 0x170);
    FUN_147790072();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b59da0 FUN_148b59da0 body=1345 status=ok
// SIG undefined FUN_148b59da0(void)

undefined8 * FUN_148b59da0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_4f8 [40];
  undefined8 *local_4d0;
  undefined8 local_4c8;
  longlong local_4c0;
  undefined1 *local_4b8;
  undefined1 local_4b0 [8];
  longlong *local_4a8;
  undefined8 local_498;
  int local_490;
  undefined4 local_48c;
  undefined8 local_488;
  int local_480;
  undefined4 local_47c;
  undefined8 local_478;
  int local_470;
  undefined4 local_46c;
  undefined8 local_468;
  longlong *local_460;
  undefined8 *local_458;
  undefined4 local_450;
  undefined1 local_280 [440];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_a8;
  undefined1 local_85;
  undefined4 local_80;
  undefined1 local_7b;
  undefined4 local_78;
  undefined1 local_74;
  undefined1 local_70 [32];
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_4f8;
  local_4d0 = param_2;
  FUN_146a095be(local_280);
  local_c8 = FUN_14774c2da(param_1);
  local_c0 = FUN_14774c37e(param_1);
  local_a8 = FUN_14774c3c2(param_1);
  local_50 = FUN_14774c400(param_1);
  local_7b = FUN_14774c55e(param_1);
  local_78 = FUN_14774c58e(param_1);
  local_74 = FUN_14774c5a2(param_1);
  local_85 = FUN_14774c532(param_1);
  local_80 = FUN_14774c5f6(param_1);
  local_458 = (undefined8 *)0x0;
  local_450 = 0;
  FUN_1446efa72(&local_458,0,3,0x10);
  puVar7 = local_458;
  local_450 = 3;
  *local_458 = &PTR_LAB_149e01f80;
  LOCK();
  UNLOCK();
  lVar9 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar9 == 0) {
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  local_458[2] = lVar9;
  *local_458 = &PTR_FUN_14b59cdf0;
  local_458[3] = 0;
  FUN_14485c47a(local_458 + 3,param_1);
  puVar7[4] = FUN_14774cf2e;
  *(undefined4 *)(puVar7 + 5) = 0;
  FUN_144a450dc(local_70,&local_458);
  FUN_1449db362(&local_458);
  FUN_148b5a2e2(&local_458);
  local_478 = 0;
  iVar2 = *(int *)(param_1 + 0xb50);
  uVar3 = *(undefined8 *)(param_1 + 0xb48);
  local_470 = iVar2;
  if (iVar2 == 0) {
    local_46c = 0;
  }
  else {
    FUN_145732088(&local_478,iVar2,0);
    FUN_14573204f(local_478,uVar3,iVar2);
  }
  FUN_148b5a310(&local_458,&local_478);
  local_488 = 0;
  iVar2 = *(int *)(param_1 + 0xb60);
  uVar3 = *(undefined8 *)(param_1 + 0xb58);
  local_480 = iVar2;
  if (iVar2 == 0) {
    local_47c = 0;
  }
  else {
    FUN_145732088(&local_488,iVar2,0);
    FUN_14573204f(local_488,uVar3,iVar2);
  }
  FUN_148b5a34a(&local_458,&local_488);
  local_498 = 0;
  iVar2 = *(int *)(param_1 + 0xb70);
  uVar3 = *(undefined8 *)(param_1 + 0xb68);
  local_490 = iVar2;
  if (iVar2 == 0) {
    local_48c = 0;
  }
  else {
    FUN_145732088(&local_498,iVar2,0);
    FUN_14573204f(local_498,uVar3,iVar2);
  }
  FUN_148b5a384(&local_458,&local_498);
  local_4b8 = local_280;
  FUN_148b5f600(local_4b0);
  FUN_148b5a3be(local_4b0,&local_468,&local_458);
  plVar4 = local_460;
  if (local_460 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xb38) = local_468;
    plVar10 = *(longlong **)(param_1 + 0xb40);
    if (plVar10 == (longlong *)0x0) goto LAB_148b5a09b;
    *(undefined8 *)(param_1 + 0xb40) = 0;
LAB_148b5a295:
    LOCK();
    plVar4 = plVar10 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_148b5a09b;
    (**(code **)*plVar10)(plVar10);
    LOCK();
    piVar1 = (int *)((longlong)plVar10 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(local_460 + 1) = (int)local_460[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0xb38) = local_468;
    plVar10 = *(longlong **)(param_1 + 0xb40);
    if (local_460 != plVar10) {
      *(longlong **)(param_1 + 0xb40) = local_460;
      if (plVar10 == (longlong *)0x0) goto LAB_148b5a09b;
      goto LAB_148b5a295;
    }
    LOCK();
    plVar10 = local_460 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 != 0) goto LAB_148b5a09b;
    (**(code **)*local_460)(local_460);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar10 = plVar4;
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
  }
LAB_148b5a09b:
  if (local_460 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_460 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_460)(local_460);
      LOCK();
      piVar1 = (int *)((longlong)local_460 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_460 + 0x10))(local_460);
      }
    }
  }
  if (local_4a8 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_4a8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_4a8)(local_4a8);
      LOCK();
      piVar1 = (int *)((longlong)local_4a8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_4a8 + 0x10))(local_4a8);
      }
    }
  }
  FUN_148b5a438(&local_458);
  iVar2 = *(int *)(param_1 + 0x170);
  if ((longlong)iVar2 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x168);
    lVar9 = 0;
    do {
      lVar6 = *(longlong *)(lVar5 + lVar9);
      if (lVar6 != 0) {
        lVar8 = FUN_145991122();
        if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) {
          if ((param_1 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(param_1);
          }
          *(longlong *)(lVar6 + 0x28) = param_1;
          local_4c8 = *(undefined8 *)(param_1 + 0xb38);
          local_4c0 = *(longlong *)(param_1 + 0xb40);
          if (local_4c0 != 0) {
            LOCK();
            *(int *)(local_4c0 + 8) = *(int *)(local_4c0 + 8) + 1;
            UNLOCK();
          }
          FUN_14774c76a(lVar6,&local_4c8);
        }
      }
      lVar9 = lVar9 + 8;
    } while ((longlong)iVar2 * 8 != lVar9);
  }
  puVar7 = local_4d0;
  uVar3 = *(undefined8 *)(param_1 + 0xb38);
  plVar4 = *(longlong **)(param_1 + 0xb40);
  if (plVar4 == (longlong *)0x0) {
    *local_4d0 = uVar3;
    local_4d0[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *local_4d0 = uVar3;
    local_4d0[1] = plVar4;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    plVar10 = plVar4 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
  FUN_146a09906(local_280);
  if ((local_48 ^ (ulonglong)auStack_4f8) == DAT_14c707940) {
    return puVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b5a2e2 FUN_148b5a2e2 body=46 status=ok
// SIG undefined FUN_148b5a2e2(void)

longlong FUN_148b5a2e2(longlong param_1)

{
  FUN_140a5071c();
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  return param_1;
}



// FUNCTION 148b5a310 FUN_148b5a310 body=58 status=ok
// SIG undefined FUN_148b5a310(void)

longlong FUN_148b5a310(longlong param_1,longlong *param_2)

{
  FUN_146a6959c(param_1 + 0x1a8);
  FUN_144a65a1e(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 148b5a34a FUN_148b5a34a body=58 status=ok
// SIG undefined FUN_148b5a34a(void)

longlong FUN_148b5a34a(longlong param_1,longlong *param_2)

{
  FUN_146a6959c(param_1 + 0x1b8);
  FUN_144a65a1e(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 148b5a384 FUN_148b5a384 body=58 status=ok
// SIG undefined FUN_148b5a384(void)

longlong FUN_148b5a384(longlong param_1,longlong *param_2)

{
  FUN_146a6959c(param_1 + 0x1c8);
  FUN_144a65a1e(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 148b5a3be FUN_148b5a3be body=122 status=ok
// SIG undefined FUN_148b5a3be(void)

longlong * FUN_148b5a3be(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_148b5b1f2(*param_1,param_3,*(undefined8 *)param_1[2]);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 148b5a438 FUN_148b5a438 body=126 status=ok
// SIG undefined FUN_148b5a438(void)

void FUN_148b5a438(longlong param_1)

{
  FUN_144a65a1e(*(undefined8 *)(param_1 + 0x1c8),*(undefined4 *)(param_1 + 0x1d0));
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    FUN_1400020a8();
  }
  FUN_144a65a1e(*(undefined8 *)(param_1 + 0x1b8),*(undefined4 *)(param_1 + 0x1c0));
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    FUN_1400020a8();
  }
  FUN_144a65a1e(*(undefined8 *)(param_1 + 0x1a8),*(undefined4 *)(param_1 + 0x1b0));
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FUN_1400020a8();
  }
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 148b5a4bc FUN_148b5a4bc body=287 status=ok
// SIG undefined FUN_148b5a4bc(void)

undefined8 * FUN_148b5a4bc(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  void *_Src;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  
  if (*(int *)(param_1 + 0x48) != *(int *)(param_1 + 0x74)) {
    lVar1 = *param_3;
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar7 = (uint)lVar1 & 0xffff;
    lVar6 = param_1 + 0x78;
    if (*(longlong *)(param_1 + 0x80) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x80);
    }
    iVar8 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x88) - 1U &
                             (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar7) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar8 != -1) {
      do {
        lVar6 = *(longlong *)(param_1 + 0x40) + (longlong)iVar8 * 0x38;
        if (*(longlong *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar8 * 0x38) == lVar1) {
          if ((lVar6 + 8U & 0xfffffffffffffff7) != 0) {
            *param_2 = *(undefined8 *)(lVar6 + 8);
            uVar3 = *(undefined4 *)(lVar6 + 0x14);
            uVar4 = *(undefined4 *)(lVar6 + 0x18);
            uVar5 = *(undefined4 *)(lVar6 + 0x1c);
            *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar6 + 0x10);
            *(undefined4 *)((longlong)param_2 + 0xc) = uVar3;
            *(undefined4 *)(param_2 + 2) = uVar4;
            *(undefined4 *)((longlong)param_2 + 0x14) = uVar5;
            param_2[3] = 0;
            iVar8 = *(int *)(lVar6 + 0x28);
            _Src = *(void **)(lVar6 + 0x20);
            *(int *)(param_2 + 4) = iVar8;
            if ((longlong)iVar8 != 0) {
              FUN_1446dd670(param_2 + 3,iVar8,0);
              memcpy((void *)param_2[3],_Src,(longlong)iVar8 * 2);
              return param_2;
            }
            *(undefined4 *)((longlong)param_2 + 0x24) = 0;
            return param_2;
          }
          break;
        }
        iVar8 = *(int *)(lVar6 + 0x30);
      } while (iVar8 != -1);
    }
  }
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[4] = 0;
  return param_2;
}



// FUNCTION 148b5a5dc FUN_148b5a5dc body=1766 status=ok
// SIG undefined FUN_148b5a5dc(void)

undefined8 * FUN_148b5a5dc(longlong *param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  float *pfVar11;
  longlong lVar12;
  undefined2 *puVar13;
  undefined1 auStack_118 [48];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_a8;
  undefined4 local_a4;
  longlong local_a0;
  undefined1 local_98 [8];
  longlong local_90 [2];
  longlong local_80;
  undefined1 local_70 [8];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (((param_1[1] != 0) && ((*(uint *)(param_1[1] + 8) >> 0x1e & 1) == 0)) &&
     (lVar7 = FUN_145905bd0(), lVar7 != 0)) {
    plVar1 = (longlong *)(param_3 + 0x10);
    puVar13 = DAT_14cb9d7d8;
    if (DAT_14cb9d7e0 == 0) {
      puVar13 = &DAT_149dfb77a;
    }
    iVar6 = DAT_14cb9d7e0 + -1;
    if (DAT_14cb9d7e0 == 0) {
      iVar6 = 0;
    }
    uVar5 = FUN_144a49b4a(iVar6,puVar13);
    iVar6 = FUN_1457511aa(plVar1,uVar5,&DAT_14cb9d7d8);
    lVar8 = (longlong)iVar6 * 0x28 + *(longlong *)(param_3 + 0x10);
    if (lVar8 != 0 && iVar6 != -1) {
      iVar6 = *(int *)(lVar8 + 0x18) + -1;
      if (*(int *)(lVar8 + 0x18) == 0) {
        iVar6 = 0;
      }
      FUN_1446f82e2(local_70,iVar6,*(undefined8 *)(lVar8 + 0x10),1);
      FUN_148b5a4bc(lVar7,local_98,local_70);
      if (local_90[0] != 0) {
        lVar8 = FUN_14479d2ce(local_98);
        if ((lVar8 == 0) && (local_90[0] != 0)) {
          lVar8 = FUN_140007850();
          cVar4 = (*(code *)PTR_FUN_14c758760)();
          if ((lVar8 == 0) || (cVar4 == '\0')) {
            FUN_14485c47a(local_98,lVar8);
            if (lVar8 == 0) goto LAB_148b5a7d3;
          }
          else {
            uVar3 = *(uint *)(lVar8 + 0xc);
            if ((int)uVar3 < DAT_14c9647dc) {
              lVar12 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
            }
            else {
              lVar12 = 0;
            }
            if ((*(uint *)(lVar12 + 8) & 0x8400000) == 0) {
              FUN_14485c47a(local_98,lVar8);
            }
          }
          if ((*(uint *)(lVar8 + 8) >> 0x1e & 1) != 0) goto LAB_148b5a7d3;
LAB_148b5a7af:
          lVar12 = FUN_144a797b2();
          if ((((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(lVar12 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar12 + 0x38) * 8) != lVar12 + 0x30)) ||
              (lVar12 = FUN_1459990cc(), lVar12 == 0)) ||
             ((*(int *)(lVar8 + 0x38) < *(int *)(lVar12 + 0x38) ||
              (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8) !=
               lVar12 + 0x30)))) goto LAB_148b5a7d3;
        }
        else {
          if (lVar8 != 0) goto LAB_148b5a7af;
LAB_148b5a7d3:
          FUN_14050fd64();
          lVar8 = FUN_14050fd64();
          FUN_141498c8a(lVar8 + 0x1e8,local_90,0,0);
        }
        lVar8 = FUN_14479d2ce(local_98);
        if ((lVar8 == 0) && (local_90[0] != 0)) {
          lVar8 = FUN_140007850();
          cVar4 = (*(code *)PTR_FUN_14c758760)();
          if ((lVar8 == 0) || (cVar4 == '\0')) {
            FUN_14485c47a(local_98,lVar8);
            if (lVar8 == 0) goto LAB_148b5a8b8;
          }
          else {
            uVar3 = *(uint *)(lVar8 + 0xc);
            if ((int)uVar3 < DAT_14c9647dc) {
              lVar12 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
            }
            else {
              lVar12 = 0;
            }
            if ((*(uint *)(lVar12 + 8) & 0x8400000) == 0) {
              FUN_14485c47a(local_98,lVar8);
            }
          }
          if ((*(uint *)(lVar8 + 8) >> 0x1e & 1) != 0) goto LAB_148b5a8b8;
LAB_148b5a894:
          lVar12 = FUN_144a797b2();
          if ((((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(lVar12 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar12 + 0x38) * 8) != lVar12 + 0x30)) ||
              (lVar12 = FUN_1459990cc(), lVar12 == 0)) ||
             (*(int *)(lVar8 + 0x38) < *(int *)(lVar12 + 0x38))) goto LAB_148b5a8b8;
          local_a0 = 0;
          if (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8) ==
              lVar12 + 0x30) {
            local_a0 = lVar8;
          }
          if ((local_a0 != 0) && (DAT_14c950c29 != 0)) {
            FUN_1456cec3c();
          }
        }
        else {
          if (lVar8 != 0) goto LAB_148b5a894;
LAB_148b5a8b8:
          local_a0 = 0;
        }
        uVar9 = (**(code **)(*(longlong *)param_1[1] + 0x2c8))();
        plVar10 = (longlong *)FUN_143fbcbca(uVar9,&local_a0);
        if (plVar10 != (longlong *)0x0) {
          puVar13 = DAT_14cb9d7e8;
          if (DAT_14cb9d7f0 == 0) {
            puVar13 = &DAT_149dfb77a;
          }
          iVar6 = DAT_14cb9d7f0 + -1;
          if (DAT_14cb9d7f0 == 0) {
            iVar6 = 0;
          }
          uVar5 = FUN_144a49b4a(iVar6,puVar13);
          iVar6 = FUN_1457511aa(plVar1,uVar5,&DAT_14cb9d7e8);
          lVar8 = (longlong)iVar6 * 0x28 + *plVar1;
          if (lVar8 != 0 && iVar6 != -1) {
            iVar6 = *(int *)(lVar8 + 0x18) + -1;
            if (*(int *)(lVar8 + 0x18) == 0) {
              iVar6 = 0;
            }
            FUN_1446f82e2(&local_68,iVar6,*(undefined8 *)(lVar8 + 0x10),1);
            local_d8 = 0;
            uStack_d0 = 0;
            cVar4 = FUN_144729dda(param_1 + 2);
            if (cVar4 != '\0') {
              uVar9 = FUN_14479d2ce(param_1 + 2);
              cVar4 = FUN_148b5acc4(uVar9,&local_68,&local_d8);
              if (cVar4 != '\0') {
                (**(code **)(*plVar10 + 0x4a0))(plVar10,&local_d8);
              }
            }
          }
          local_a4 = 0;
          local_a8 = 0;
          (**(code **)(*param_1 + 0x28))(param_1,param_3,&DAT_14cb9d7f8);
          (**(code **)(*param_1 + 0x28))(param_1,param_3,&DAT_14cb9d808,&local_a8);
          lVar8 = *(longlong *)(param_4 + 8);
          if ((lVar8 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c(lVar8);
LAB_148b5aa2c:
            local_b8 = 0;
            uStack_c0 = 0;
            local_c8 = 0;
            uStack_d0 = 0;
            local_d8 = 0;
            FUN_1400bbfc4(&local_68,lVar8);
            uStack_d0 = CONCAT44(uStack_64,local_68);
            local_c8 = CONCAT44(uStack_5c,uStack_60);
            if (uStack_c0 != 0) {
              FUN_1400020a8();
            }
            uStack_c0 = CONCAT44(uStack_54,local_58);
            local_b8 = CONCAT44(uStack_4c,uStack_50);
            cVar4 = (*(code *)PTR_FUN_14c758760)();
            if (cVar4 != '\0') {
              uVar3 = *(uint *)(lVar8 + 0xc);
              if ((int)uVar3 < DAT_14c9647dc) {
                lVar12 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
              }
              else {
                lVar12 = 0;
              }
              if ((*(uint *)(lVar12 + 8) & 0x8400000) != 0) {
                local_d8 = 0;
                goto LAB_148b5ab73;
              }
            }
            FUN_14485c47a(&local_d8,lVar8);
          }
          else {
            uStack_c0 = 0;
            local_b8 = 0;
            if (lVar8 != 0) goto LAB_148b5aa2c;
            local_d8 = 0;
            uStack_d0 = 0;
            local_c8 = 0;
          }
LAB_148b5ab73:
          pfVar11 = (float *)FUN_148b5ad4c(lVar7,&local_d8);
          if (uStack_c0 != 0) {
            FUN_1400020a8();
          }
          (**(code **)(*plVar10 + 0x4a8))
                    (plVar10,*(float *)(param_4 + 0x50) * *pfVar11,local_a4,local_a8);
          local_d8 = 0;
          uStack_d0 = 0;
          (**(code **)(*param_1 + 0x28))(param_1,param_3,&DAT_14cb9d828);
          (**(code **)(*param_1 + 0x28))(param_1,param_3,&DAT_14cb9d818,(longlong)&local_d8 + 4);
          (**(code **)(*param_1 + 0x28))(param_1,param_3,&DAT_14cb9d838,&local_d8);
          (**(code **)(*param_1 + 0x28))(param_1,param_3,&DAT_14cb9d848,&uStack_d0);
          local_e8 = (undefined4)local_d8;
          uStack_e4 = local_d8._4_4_;
          uStack_e0 = (undefined4)uStack_d0;
          uStack_dc = uStack_d0._4_4_;
          FUN_14779ab1e(plVar10);
          FUN_148b517ae(plVar10);
          FUN_143333872(plVar10,&local_68);
          *param_2 = CONCAT44(uStack_64,local_68);
          lVar7 = CONCAT44(uStack_5c,uStack_60);
          param_2[1] = lVar7;
          if (lVar7 != 0) {
            LOCK();
            *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
            UNLOCK();
            plVar1 = (longlong *)CONCAT44(uStack_5c,uStack_60);
            if (plVar1 != (longlong *)0x0) {
              LOCK();
              plVar10 = plVar1 + 1;
              *(int *)plVar10 = (int)*plVar10 + -1;
              UNLOCK();
              if ((int)*plVar10 == 0) {
                (**(code **)*plVar1)(plVar1);
                LOCK();
                piVar2 = (int *)((longlong)plVar1 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar1 + 0x10))(plVar1);
                }
              }
            }
          }
          if (local_80 != 0) {
            FUN_1400020a8();
          }
          goto LAB_148b5a61c;
        }
      }
      if (local_80 != 0) {
        FUN_1400020a8();
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_148b5a61c:
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148b5acc4 FUN_148b5acc4 body=135 status=ok
// SIG undefined FUN_148b5acc4(void)

undefined8 FUN_148b5acc4(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x2b0))();
  if ((((lVar1 != 0) && ((*(uint *)(lVar1 + 8) >> 0x1e & 1) == 0)) &&
      (lVar1 = (**(code **)(*param_1 + 0x2b0))(param_1), lVar1 != 0)) &&
     (lVar1 = FUN_143fbcc72(lVar1,*param_2), lVar1 != 0)) {
    lVar1 = (**(code **)(*param_1 + 0x2b0))(param_1);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *param_3 = lVar1;
    lVar1 = *param_2;
    param_3[1] = lVar1;
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return 0;
}



// FUNCTION 148b5ad4c FUN_148b5ad4c body=920 status=ok
// SIG undefined FUN_148b5ad4c(void)

undefined * FUN_148b5ad4c(longlong param_1,undefined8 *param_2)

{
  void *pvVar1;
  uint uVar2;
  undefined2 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined *puVar8;
  undefined *puVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  void *local_c0;
  int local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  void *local_98;
  int local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  void *local_70;
  int local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined2 *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_d8 = *param_2;
  local_d0 = *(undefined4 *)(param_2 + 1);
  uStack_cc = *(undefined4 *)((longlong)param_2 + 0xc);
  uStack_c8 = *(undefined4 *)(param_2 + 2);
  uStack_c4 = *(undefined4 *)((longlong)param_2 + 0x14);
  local_c0 = (void *)0x0;
  local_b8 = *(int *)(param_2 + 4);
  lVar10 = (longlong)local_b8;
  pvVar1 = (void *)param_2[3];
  if (lVar10 == 0) {
    local_b4 = 0;
    local_a8 = param_2[1];
    uStack_a0 = param_2[2];
    local_90 = 0;
    local_b0 = local_d8;
LAB_148b5adc6:
    local_98 = (void *)0x0;
    local_8c = 0;
    local_68 = 0;
    local_d8 = local_b0;
    local_88 = local_b0;
LAB_148b5aded:
    local_70 = (void *)0x0;
    local_64 = 0;
    local_40 = 0;
    local_b0 = local_88;
    local_80 = local_a8;
    uStack_78 = uStack_a0;
    local_60 = local_88;
  }
  else {
    FUN_1446dd670(&local_c0,local_b8,0);
    memcpy(local_c0,pvVar1,lVar10 * 2);
    pvVar1 = local_c0;
    local_90 = local_b8;
    lVar10 = (longlong)local_b8;
    local_b0 = local_d8;
    local_a8 = CONCAT44(uStack_cc,local_d0);
    uStack_a0 = CONCAT44(uStack_c4,uStack_c8);
    local_98 = (void *)0x0;
    if (lVar10 == 0) goto LAB_148b5adc6;
    FUN_1446dd670(&local_98,local_b8,0);
    memcpy(local_98,pvVar1,lVar10 * 2);
    pvVar1 = local_98;
    local_68 = local_90;
    lVar10 = (longlong)local_90;
    local_88 = local_b0;
    local_80 = local_a8;
    uStack_78 = uStack_a0;
    local_70 = (void *)0x0;
    if (lVar10 == 0) goto LAB_148b5aded;
    FUN_1446dd670(&local_70,local_90,0);
    memcpy(local_70,pvVar1,lVar10 * 2);
    pvVar1 = local_70;
    local_40 = local_68;
    lVar10 = (longlong)local_68;
    local_60 = local_88;
    local_58 = local_80;
    uStack_50 = uStack_78;
    local_48 = (undefined2 *)0x0;
    if (lVar10 != 0) {
      FUN_1446dd670(&local_48,local_68,0);
      memcpy(local_48,pvVar1,lVar10 * 2);
      goto LAB_148b5ae29;
    }
  }
  local_48 = (undefined2 *)0x0;
  local_3c = 0;
  local_88 = local_60;
  local_58 = local_80;
  uStack_50 = uStack_78;
LAB_148b5ae29:
  uVar2 = (uint)((ulonglong)uStack_50 >> 0x10);
  uVar12 = (uint)uStack_50 & 0xffff;
  uVar4 = (uint)((ulonglong)local_58 >> 0x10);
  uVar11 = (uint)local_58 & 0xffff;
  uVar4 = ((uint)local_58 << 0x10 | uVar11) + (int)((ulonglong)local_58 >> 0x20) +
          (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar11 >> 4);
  uVar5 = FUN_144a78877(0,(uVar4 >> 2) +
                          ((uint)uStack_50 << 0x10 | uVar12) + (int)((ulonglong)uStack_50 >> 0x20) +
                          (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar12 >> 4) + uVar4 * 0x40 +
                          0x9e3779b9 ^ uVar4);
  iVar7 = local_40 + -1;
  puVar3 = local_48;
  if (local_40 == 0) {
    iVar7 = 0;
    puVar3 = &DAT_149dfb77a;
  }
  uVar6 = FUN_144a49b4a(iVar7,puVar3);
  uVar5 = FUN_144a78877(uVar5,uVar6);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  iVar7 = FUN_148b5fa7a((longlong *)(param_1 + 0x90),uVar5,&local_88);
  if (iVar7 == -1) {
    lVar10 = 0;
  }
  else {
    lVar10 = (longlong)iVar7 * 0x38 + *(longlong *)(param_1 + 0x90);
  }
  if (local_70 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_98 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_c0 != (void *)0x0) {
    FUN_1400020a8();
  }
  puVar9 = (undefined *)(lVar10 + 0x28);
  if (lVar10 == 0) {
    puVar9 = (undefined *)0x0;
  }
  puVar8 = &DAT_14b59b3b4;
  if (puVar9 != (undefined *)0x0) {
    puVar8 = puVar9;
  }
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return puVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b5b0e6 FUN_148b5b0e6 body=134 status=ok
// SIG undefined FUN_148b5b0e6(void)

ulonglong FUN_148b5b0e6(undefined8 param_1,longlong param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  ulonglong uVar6;
  
  iVar2 = *(int *)(param_3 + 1);
  if (iVar2 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_3;
  }
  uVar4 = (ulonglong)(iVar2 - 1);
  if (iVar2 == 0) {
    uVar4 = 0;
  }
  uVar1 = FUN_144a49b4a(uVar4,puVar5);
  iVar2 = FUN_1457511aa(param_2 + 0x10,uVar1,param_3);
  lVar3 = (longlong)iVar2;
  uVar4 = lVar3 * 0x28 + *(longlong *)(param_2 + 0x10);
  uVar6 = 0;
  if (iVar2 != -1) {
    uVar6 = uVar4;
  }
  if (uVar6 != 0) {
    uVar4 = uVar6 + 0x10;
    lVar3 = FUN_14680fbec(uVar4,param_4);
  }
  return CONCAT71((int7)(uVar4 >> 8),uVar6 != 0 & (byte)lVar3) & 0xffffffff;
}



// FUNCTION 148b5b16c FUN_148b5b16c body=133 status=ok
// SIG undefined FUN_148b5b16c(void)

undefined8 * FUN_148b5b16c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar1[1] = param_3;
  *puVar1 = &PTR_FUN_14b59b0f0;
  puVar1[2] = 0;
  FUN_14485c47a(puVar1 + 2,param_1);
  *param_2 = puVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_14b59d0c0;
  puVar2[2] = puVar1;
  param_2[1] = puVar2;
  return param_2;
}



// FUNCTION 148b5b1f2 FUN_148b5b1f2 body=89 status=ok
// SIG undefined FUN_148b5b1f2(void)

void FUN_148b5b1f2(longlong param_1,longlong param_2,undefined8 param_3)

{
  FUN_146a9642e(param_1,param_3);
  FUN_146a6959c(param_1 + 0x3d8,param_2 + 0x1a8);
  FUN_146a6959c(param_1 + 1000,param_2 + 0x1b8);
  FUN_146a6959c(param_1 + 0x3f8,param_2 + 0x1c8);
  return;
}



// FUNCTION 148b5b24c FUN_148b5b24c body=964 status=ok
// SIG undefined FUN_148b5b24c(void)

undefined1 *
FUN_148b5b24c(longlong *param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_128 [40];
  undefined **local_100;
  undefined2 local_f8;
  undefined1 local_f6;
  undefined8 local_f4;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined2 local_9c;
  undefined8 local_98;
  undefined2 local_90;
  undefined1 local_8e;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar3 = *(longlong *)(param_4 + 0x20);
  plVar8 = *(longlong **)(param_4 + 0x30);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  if ((longlong)(int)param_1[0x7c] == 0) {
    bVar4 = true;
  }
  else {
    lVar7 = 0;
    do {
      bVar9 = *(longlong *)(param_1[0x7b] + lVar7) == lVar3;
      bVar4 = !bVar9;
      if (bVar9) break;
      bVar9 = (longlong)(int)param_1[0x7c] * 0x18 + -0x18 != lVar7;
      lVar7 = lVar7 + 0x18;
    } while (bVar9);
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
  plVar8 = DAT_14c964d38;
  uVar6 = DAT_14c964d30;
  uVar5 = DAT_14c964d28;
  if (bVar4) {
    lVar3 = *(longlong *)(param_4 + 0x20);
    plVar8 = *(longlong **)(param_4 + 0x30);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    if ((longlong)(int)param_1[0x7e] == 0) {
      bVar4 = true;
    }
    else {
      lVar7 = 0;
      do {
        bVar9 = *(longlong *)(param_1[0x7d] + lVar7) == lVar3;
        bVar4 = !bVar9;
        if (bVar9) break;
        bVar9 = (longlong)(int)param_1[0x7e] * 0x18 + -0x18 != lVar7;
        lVar7 = lVar7 + 0x18;
      } while (bVar9);
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
    plVar8 = DAT_14c964d38;
    if (bVar4) {
      *param_2 = 0;
      param_2[0x20] = 0;
      *(undefined8 *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
      memset(param_2 + 0x28,0,0x88);
      *(undefined4 *)(param_2 + 0xb0) = 0x20702;
      param_2[0xb4] = 0;
      goto LAB_148b5b518;
    }
    local_c0 = DAT_14c964d28;
    local_b8 = DAT_14c964d30;
    if (DAT_14c964d38 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c964d38 + 1) = (int)DAT_14c964d38[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    local_98 = 0xbf80000000000000;
  }
  else {
    if (DAT_14c964d38 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c964d38 + 1) = (int)DAT_14c964d38[1] + 1;
      UNLOCK();
    }
    local_c0 = uVar5;
    local_b8 = uVar6;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    local_98 = 0x3f80000000000000;
  }
  local_c8 = &local_88;
  local_40 = 0;
  local_48 = 0;
  local_54 = 0;
  local_5c = 0xffffffff00000080;
  local_60 = 0;
  local_68 = 0;
  uStack_80 = 0;
  local_88 = 0;
  local_9c = 0;
  local_a0 = 0x3f800000;
  local_a8 = 10;
  local_d0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_f4 = 0;
  local_f6 = 0;
  local_f8 = 0;
  local_100 = &PTR_FUN_149eda650;
  local_90 = 0;
  local_8e = 0;
  local_b0 = plVar8;
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
  local_40 = 0;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  FUN_1405535a6(&local_88);
  (**(code **)(*param_1 + 0x88))(param_1,param_2,param_3,&local_100);
  plVar8 = local_b0;
  local_100 = &PTR_FUN_149eda650;
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_b0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
LAB_148b5b518:
  if ((local_38 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b5b612 FUN_148b5b612 body=755 status=ok
// SIG undefined FUN_148b5b612(void)

undefined1 *
FUN_148b5b612(longlong *param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_138 [40];
  undefined **local_110;
  undefined2 local_108;
  undefined1 local_106;
  undefined8 local_104;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined2 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined2 local_a0;
  undefined1 local_9e;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar4 = *(longlong *)(param_4 + 0x20);
  plVar5 = *(longlong **)(param_4 + 0x30);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  if ((longlong)(int)param_1[0x80] != 0) {
    lVar6 = 0;
    do {
      if (*(longlong *)(param_1[0x7f] + lVar6) == lVar4) {
        fVar3 = *(float *)(param_4 + 0x40);
        if (fVar3 <= 0.01) {
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
          if (-0.01 <= fVar3) goto LAB_148b5b6ad;
        }
        else if (plVar5 != (longlong *)0x0) {
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
        plVar5 = DAT_14c964d38;
        local_c8 = DAT_14c964d30;
        local_d0 = DAT_14c964d28;
        local_a4 = *(undefined4 *)(param_4 + 0x40);
        if (DAT_14c964d38 != (longlong *)0x0) {
          LOCK();
          *(int *)(DAT_14c964d38 + 1) = (int)DAT_14c964d38[1] + 1;
          UNLOCK();
        }
        local_d8 = &local_98;
        local_78 = 0;
        local_70 = 0;
        local_98 = 0;
        uStack_90 = 0;
        local_6c = 0xffffffff00000080;
        local_64 = 0;
        local_58 = 0;
        local_50 = 0;
        local_108 = 0;
        local_106 = 0;
        local_104 = 0;
        local_f8 = 0;
        local_110 = &PTR_FUN_149eda650;
        local_f0 = 0;
        uStack_e8 = 0;
        local_e0 = 0;
        local_c0 = plVar5;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        local_b8 = 10;
        local_b0 = 0x3f800000;
        local_ac = 0;
        local_a8 = 0;
        local_a0 = 0;
        local_9e = 0;
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
        local_50 = 0;
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        FUN_1405535a6(&local_98);
        (**(code **)(*param_1 + 0x88))(param_1,param_2,param_3,&local_110);
        plVar5 = local_c0;
        local_110 = &PTR_FUN_149eda650;
        if (local_c0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_c0 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_c0)(local_c0);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
        goto LAB_148b5b6df;
      }
      lVar6 = lVar6 + 0x18;
    } while ((longlong)(int)param_1[0x80] * 0x18 != lVar6);
  }
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
LAB_148b5b6ad:
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
LAB_148b5b6df:
  if ((local_40 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b5b906 FUN_148b5b906 body=65 status=ok
// SIG undefined FUN_148b5b906(void)

void FUN_148b5b906(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_145a0ffb0(param_2);
  if (plVar3 != (longlong *)0x0) {
    uVar2 = FUN_140760b04(plVar3);
    iVar1 = (uVar2 ^ 1) * 2;
                    /* WARNING: Could not recover jumptable at 0x000148b5b93d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x2b0))(plVar3,CONCAT31((int3)((uint)iVar1 >> 8),(char)iVar1 + '\x02'));
    return;
  }
  return;
}



// FUNCTION 148b5b94c FUN_148b5b94c body=998 status=ok
// SIG undefined FUN_148b5b94c(void)

void FUN_148b5b94c(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  void *_Src;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined1 local_110;
  undefined1 local_108;
  undefined1 *local_100;
  longlong local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  void *local_d0;
  undefined8 local_c8;
  undefined8 *local_c0;
  undefined4 local_b8;
  undefined1 local_a9;
  undefined1 local_a8 [8];
  longlong *local_a0;
  longlong local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  void *local_80;
  int local_78;
  longlong *local_70;
  undefined4 local_68;
  uint uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  uVar8 = local_58;
  if (*(char *)(param_1 + 0x88) == '\0') {
    *(undefined1 *)(param_1 + 0x88) = 1;
    FUN_145cc463f(*(undefined8 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x80));
    *(undefined4 *)(param_1 + 0x80) = 0;
    if (*(int *)(param_1 + 0x84) != 0) {
      FUN_148b5fc1a(param_1 + 0x78);
    }
    lVar7 = FUN_145905bd0();
    uVar8 = local_58;
    if (lVar7 != 0) {
      plVar1 = (longlong *)(param_1 + 0x28);
      FUN_148b5cbf6(plVar1,lVar7 + 0xe0);
      lVar7 = param_1 + 0x38;
      local_f0 = 0x100000000;
      local_e0 = 0xffffffff;
      uStack_d8 = 0;
      uStack_e8 = lVar7;
      if (*(int *)(param_1 + 0x50) == 0) {
        iVar11 = 0;
      }
      else {
        FUN_1449c0562(&local_f0);
        iVar11 = *(int *)(param_1 + 0x50);
      }
      local_68 = (undefined4)local_f0;
      uStack_64 = local_f0._4_4_;
      uStack_60 = (undefined4)uStack_e8;
      uStack_5c = uStack_e8._4_4_;
      uStack_50 = CONCAT44(uStack_d4,uStack_d8);
      local_58 = local_e0;
      uVar8 = local_58;
      local_58._4_4_ = (int)((ulonglong)local_e0 >> 0x20);
      local_70 = plVar1;
      if ((local_58._4_4_ != iVar11) || (uStack_e8 != lVar7)) {
        iVar6 = local_58._4_4_;
        local_58 = uVar8;
        do {
          lVar10 = *local_70;
          if (*(char *)(lVar10 + 8 + (longlong)iVar6 * 0x50) == '\x01') {
            uVar8 = FUN_148b5be38();
            FUN_148b5bd34(lVar10 + (longlong)iVar6 * 0x50 + 8,&local_98,uVar8);
            if (CONCAT44(uStack_8c,local_90) != 0) {
              local_f8 = FUN_14050fd64();
              _Src = local_80;
              uStack_e8 = local_98;
              local_e0 = CONCAT44(uStack_8c,local_90);
              uStack_d8 = uStack_88;
              uStack_d4 = uStack_84;
              local_d0 = (void *)0x0;
              lVar10 = (longlong)local_78;
              local_c8._0_4_ = local_78;
              local_f0 = param_1;
              if (lVar10 == 0) {
                local_c8._4_4_ = 0;
              }
              else {
                FUN_1446dd670(&local_d0,local_78,0);
                memcpy(local_d0,_Src,lVar10 * 2);
              }
              local_c0 = (undefined8 *)0x0;
              local_b8 = 0;
              FUN_1446efa72(&local_c0,0,5,0x10);
              puVar4 = local_c0;
              local_b8 = 5;
              *local_c0 = &PTR_LAB_149e020b0;
              LOCK();
              UNLOCK();
              lVar9 = DAT_14c758608 + 1;
              lVar10 = DAT_14c758608 + 1;
              if (lVar9 == 0) {
                LOCK();
                UNLOCK();
                lVar9 = DAT_14c758608 + 2;
                lVar10 = DAT_14c758608 + 2;
              }
              DAT_14c758608 = lVar10;
              lVar10 = local_f8 + 0x1e8;
              local_c0[2] = lVar9;
              *local_c0 = &PTR_FUN_14b59d760;
              local_c0[3] = 0;
              FUN_14485c47a(local_c0 + 3,param_1);
              puVar4[4] = local_f0;
              puVar4[5] = uStack_e8;
              *(undefined4 *)(puVar4 + 6) = (undefined4)local_e0;
              *(undefined4 *)((longlong)puVar4 + 0x34) = local_e0._4_4_;
              *(undefined4 *)(puVar4 + 7) = uStack_d8;
              *(undefined4 *)((longlong)puVar4 + 0x3c) = uStack_d4;
              puVar4[8] = local_d0;
              local_d0 = (void *)0x0;
              *(int *)(puVar4 + 9) = (int)local_c8;
              *(undefined4 *)((longlong)puVar4 + 0x4c) = local_c8._4_4_;
              local_c8 = 0;
              local_100 = &local_a9;
              local_108 = 0;
              local_110 = 0;
              local_118 = 0;
              FUN_140a1e0be(lVar10,local_a8,&local_90,&local_c0);
              plVar5 = local_a0;
              if (local_a0 != (longlong *)0x0) {
                LOCK();
                plVar2 = local_a0 + 1;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)*plVar2 == 0) {
                  (**(code **)*local_a0)(local_a0);
                  LOCK();
                  piVar3 = (int *)((longlong)plVar5 + 0xc);
                  *piVar3 = *piVar3 + -1;
                  UNLOCK();
                  if (*piVar3 == 0) {
                    (**(code **)(*plVar5 + 0x10))(plVar5);
                  }
                }
              }
              FUN_1449db362(&local_c0);
              if (local_d0 != (void *)0x0) {
                FUN_1400020a8();
              }
            }
            if (local_80 != (void *)0x0) {
              FUN_1400020a8();
            }
          }
          local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~uStack_64);
          FUN_1449c0562(&local_68);
          iVar6 = local_58._4_4_;
          uVar8 = local_58;
        } while (local_70 != plVar1 ||
                 (CONCAT44(uStack_5c,uStack_60) != lVar7 || local_58._4_4_ != iVar11));
      }
    }
  }
  local_58 = uVar8;
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148b5bd34 FUN_148b5bd34 body=259 status=ok
// SIG undefined FUN_148b5bd34(void)

undefined8 * FUN_148b5bd34(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  longlong lVar6;
  void *_Dst;
  void *_Src;
  longlong lVar7;
  longlong lVar8;
  
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar6 = FUN_148b65b76(param_3);
    if ((lVar6 != 0) && ((longlong)*(int *)(param_1 + 0x38) != 0)) {
      lVar7 = *(longlong *)(param_1 + 0x30);
      lVar8 = (longlong)*(int *)(param_1 + 0x38) * 0x70;
      do {
        cVar5 = FUN_144ade028(lVar7,lVar6 + 0x48);
        if (cVar5 != '\0') {
          *param_2 = *(undefined8 *)(lVar7 + 0x48);
          uVar2 = *(undefined4 *)(lVar7 + 0x54);
          uVar3 = *(undefined4 *)(lVar7 + 0x58);
          uVar4 = *(undefined4 *)(lVar7 + 0x5c);
          *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar7 + 0x50);
          *(undefined4 *)((longlong)param_2 + 0xc) = uVar2;
          *(undefined4 *)(param_2 + 2) = uVar3;
          *(undefined4 *)((longlong)param_2 + 0x14) = uVar4;
          param_2[3] = 0;
          iVar1 = *(int *)(lVar7 + 0x68);
          lVar6 = (longlong)iVar1;
          _Src = *(void **)(lVar7 + 0x60);
          *(int *)(param_2 + 4) = iVar1;
          if (lVar6 == 0) goto LAB_148b5be2e;
          FUN_1446dd670(param_2 + 3,iVar1,0);
          _Dst = (void *)param_2[3];
          goto LAB_148b5bdd0;
        }
        lVar7 = lVar7 + 0x70;
        lVar8 = lVar8 + -0x70;
      } while (lVar8 != 0);
    }
  }
  *param_2 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  uVar4 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar2;
  *(undefined4 *)(param_2 + 2) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar4;
  param_2[3] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  lVar6 = (longlong)iVar1;
  _Src = *(void **)(param_1 + 0x20);
  *(int *)(param_2 + 4) = iVar1;
  if (lVar6 == 0) {
LAB_148b5be2e:
    *(undefined4 *)((longlong)param_2 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_2 + 3,iVar1,0);
    _Dst = (void *)param_2[3];
LAB_148b5bdd0:
    memcpy(_Dst,_Src,lVar6 * 2);
  }
  return param_2;
}



// FUNCTION 148b5be38 FUN_148b5be38 body=71 status=ok
// SIG undefined FUN_148b5be38(void)

undefined8 FUN_148b5be38(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_14479d2ce(&DAT_14cb9d928);
  if (lVar1 != 0) {
    lVar1 = FUN_1400b465c(lVar1);
    if (((lVar1 != 0) && (*(longlong *)(lVar1 + 0x30) != 0)) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + 0x360) != 0)) {
      uVar2 = FUN_145866520();
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 148b5be80 FUN_148b5be80 body=38 status=ok
// SIG undefined FUN_148b5be80(void)

undefined8 FUN_148b5be80(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1400b465c(*(undefined8 *)(param_1 + 0x20));
  if (*(longlong *)(lVar1 + 0x30) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 0x30) + 0x360);
  }
  return uVar2;
}



// FUNCTION 148b5bea6 FUN_148b5bea6 body=39 status=ok
// SIG undefined FUN_148b5bea6(void)

void FUN_148b5bea6(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_148b5bece(param_2);
    if (lVar1 != 0) {
      FUN_148b65168(lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 148b5bece FUN_148b5bece body=103 status=ok
// SIG undefined FUN_148b5bece(void)

void FUN_148b5bece(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_145a88242();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_148b5fd96(param_1 + 0x138,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b5bf36 FUN_148b5bf36 body=39 status=ok
// SIG undefined FUN_148b5bf36(void)

void FUN_148b5bf36(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_148b5bece(param_2);
    if (lVar1 != 0) {
      FUN_143fd26aa(lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 148b5bf60 FUN_148b5bf60 body=320 status=ok
// SIG undefined FUN_148b5bf60(void)

void FUN_148b5bf60(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = (**(code **)(*param_1 + 0x180))();
  lVar3 = FUN_140334a94(param_2,uVar2);
  if ((lVar3 != 0) && (lVar5 = param_1[6], lVar5 != 0)) {
    lVar4 = FUN_14595db62();
    if ((lVar4 != 0) &&
       (((*(int *)(lVar4 + 0x38) <= *(int *)(lVar5 + 0x38) &&
         (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) && (lVar5 = param_1[6], lVar5 != 0)))) {
      lVar4 = FUN_14595db62();
      if (((lVar4 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar4 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
          lVar4 + 0x30)) {
        lVar5 = 0;
      }
      else {
        lVar5 = param_1[6];
      }
      if ((*(byte *)(lVar5 + 0xd4) & 1) == 0) {
        local_30 = param_1[6];
        if ((local_30 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        uVar2 = FUN_143fc2af1(lVar3,&local_30);
        iVar1 = (int)param_1[8];
        *(uint *)(param_1 + 8) = iVar1 + 1U;
        if (*(uint *)((longlong)param_1 + 0x44) < iVar1 + 1U) {
          FUN_148b5fe3e(param_1 + 7,iVar1);
        }
        FUN_148b5fde2((longlong)iVar1 * 0x18 + param_1[7],param_2,uVar2);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b5c0ba FUN_148b5c0ba body=352 status=ok
// SIG undefined FUN_148b5c0ba(void)

void FUN_148b5c0ba(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    uVar3 = FUN_145b85602();
    lVar4 = FUN_144718840(param_2,uVar3);
    if (lVar4 != 0) {
      local_38 = (undefined8 *)0x0;
      local_30 = 0;
      FUN_1446efa72(&local_38,0,3,0x10);
      puVar1 = local_38;
      local_30 = 3;
      *local_38 = &PTR_LAB_14b59d840;
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 1;
      lVar2 = DAT_14c758608 + 1;
      if (lVar5 == 0) {
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 2;
        lVar2 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar2;
      local_38[2] = lVar5;
      *local_38 = &PTR_FUN_14b59d7d0;
      local_38[3] = 0;
      FUN_14485c47a(local_38 + 3,param_1);
      puVar1[4] = param_1;
      FUN_148b5dd48(lVar4 + 8,local_40,&local_38);
      FUN_1449db362(&local_38);
    }
  }
  if ((longlong)(int)param_1[8] != 0) {
    plVar6 = (longlong *)param_1[7];
    lVar4 = (longlong)(int)param_1[8] * 0x18;
    do {
      if (*plVar6 == param_2) {
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*param_1 + 0x2a0))(param_1,param_2,plVar6[1]);
          *(undefined1 *)(plVar6 + 2) = 1;
          goto LAB_148b5c125;
        }
        break;
      }
      plVar6 = plVar6 + 3;
      lVar4 = lVar4 + -0x18;
    } while (lVar4 != 0);
  }
  (**(code **)(*param_1 + 0x2c0))(param_1,param_2);
LAB_148b5c125:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b5c21c FUN_148b5c21c body=191 status=ok
// SIG undefined FUN_148b5c21c(void)

void FUN_148b5c21c(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    plVar5 = *(longlong **)(param_1 + 0x38);
    lVar4 = (longlong)*(int *)(param_1 + 0x40) * 0x18;
    do {
      if (*plVar5 == param_2) {
        if (plVar5 == (longlong *)0x0) {
          return;
        }
        FUN_143fc29e2(param_1,param_2,plVar5[1]);
        *(undefined1 *)(plVar5 + 2) = 0;
        if (*(char *)(param_1 + 0x28) != '\x01') {
          return;
        }
        cVar3 = FUN_1406f1f80(param_2);
        if (cVar3 != '\0') {
          return;
        }
        lVar4 = plVar5[1];
        if (lVar4 == 0) {
          return;
        }
        if (*(char *)(lVar4 + 0x2f8) != '\0') {
          return;
        }
        FUN_143fdaf52(lVar4,1);
        iVar1 = *(int *)(param_1 + 0x40);
        if ((longlong)iVar1 == 0) {
          return;
        }
        lVar4 = *(longlong *)(param_1 + 0x38);
        lVar6 = 0;
        do {
          cVar3 = FUN_1406f1f80(*(undefined8 *)(lVar4 + lVar6));
          if ((cVar3 != '\0') && (lVar2 = *(longlong *)(lVar4 + 8 + lVar6), lVar2 != 0)) {
            FUN_143fdaf52(lVar2,0);
          }
          lVar6 = lVar6 + 0x18;
        } while ((longlong)iVar1 * 0x18 != lVar6);
        return;
      }
      plVar5 = plVar5 + 3;
      lVar4 = lVar4 + -0x18;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 148b5c2dc FUN_148b5c2dc body=247 status=ok
// SIG undefined FUN_148b5c2dc(void)

void FUN_148b5c2dc(longlong *param_1,longlong param_2)

{
  void *_Dst;
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  
  FUN_148b5c21c();
  if (param_2 != 0) {
    uVar2 = FUN_145b85602();
    lVar3 = FUN_144718840(param_2,uVar2);
    if (lVar3 != 0) {
      FUN_140457ffc(lVar3 + 8,param_1);
    }
  }
  iVar1 = (int)param_1[8];
  if ((longlong)iVar1 != 0) {
    lVar3 = param_1[7];
    lVar4 = 0;
    do {
      if (*(longlong *)(lVar3 + lVar4) == param_2) {
        uVar5 = (int)(lVar4 >> 3) * -0x55555555;
        if (uVar5 == 0xffffffff) {
          return;
        }
        uVar2 = *(undefined8 *)(lVar3 + 8 + (longlong)(int)uVar5 * 0x18);
        if (~uVar5 + iVar1 != 0) {
          _Dst = (void *)(lVar3 + (longlong)(int)uVar5 * 0x18);
          memmove(_Dst,(void *)((longlong)_Dst + 0x18),(longlong)(int)(~uVar5 + iVar1) * 0x18);
          iVar1 = (int)param_1[8];
        }
        *(int *)(param_1 + 8) = iVar1 + -1;
        FUN_148b5fee0(param_1 + 7);
        FUN_143fc29e2(param_1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x000148b5c3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x2b8))(param_1,param_2,uVar2);
        return;
      }
      lVar4 = lVar4 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar4);
  }
  return;
}



// FUNCTION 148b5c3d4 FUN_148b5c3d4 body=45 status=ok
// SIG undefined FUN_148b5c3d4(void)

longlong FUN_148b5c3d4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145c4d5ee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b5c402 FUN_148b5c402 body=29 status=ok
// SIG undefined FUN_148b5c402(void)

undefined8 FUN_148b5c402(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b5c488 FUN_148b5c488 body=59 status=ok
// SIG undefined FUN_148b5c488(void)

undefined8 FUN_148b5c488(longlong *param_1)

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



// FUNCTION 148b5c528 FUN_148b5c528 body=29 status=ok
// SIG undefined FUN_148b5c528(void)

undefined8 FUN_148b5c528(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b5c546 FUN_148b5c546 body=55 status=ok
// SIG undefined FUN_148b5c546(void)

void FUN_148b5c546(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9d538 == 0) {
    uVar1 = FUN_140f9f06f();
    DAT_14cb9d538 = FUN_140002ddd(FUN_14659e013,uVar1,L"GbxUIUMGWidgetType");
  }
  return;
}



// FUNCTION 148b5c59e FUN_148b5c59e body=56 status=ok
// SIG undefined FUN_148b5c59e(void)

void FUN_148b5c59e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x000148b5c5cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148b5c5ec FUN_148b5c5ec body=54 status=ok
// SIG undefined FUN_148b5c5ec(void)

undefined1 FUN_148b5c5ec(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b5c752(param_2,param_3);
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return 1;
}



// FUNCTION 148b5c652 FUN_148b5c652 body=103 status=ok
// SIG undefined FUN_148b5c652(void)

uint FUN_148b5c652(longlong *param_1,longlong param_2)

{
  uint uVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  uVar1 = ((uint)(*(ulonglong *)(param_2 + 8) >> 0x14) & 0xffff ^
          (uint)(*(ulonglong *)(param_2 + 8) >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1 >> 0x10 ^ uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b5c6c4 FUN_148b5c6c4 body=64 status=ok
// SIG undefined FUN_148b5c6c4(void)

void FUN_148b5c6c4(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0x18) == '\x01') {
    plVar3 = *(longlong **)(param_2 + 0x10);
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
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 148b5c752 FUN_148b5c752 body=88 status=ok
// SIG undefined FUN_148b5c752(void)

undefined8 * FUN_148b5c752(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *param_1 = *param_2;
  uVar3 = param_2[1];
  lVar4 = param_2[2];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_1[2];
  param_1[1] = uVar3;
  param_1[2] = lVar4;
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



// FUNCTION 148b5c7cc FUN_148b5c7cc body=56 status=ok
// SIG undefined FUN_148b5c7cc(void)

void FUN_148b5c7cc(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x000148b5c7f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148b5c81a FUN_148b5c81a body=54 status=ok
// SIG undefined FUN_148b5c81a(void)

undefined1 FUN_148b5c81a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b5c9ac(param_2,param_3);
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return 1;
}



// FUNCTION 148b5c880 FUN_148b5c880 body=147 status=ok
// SIG undefined FUN_148b5c880(void)

uint FUN_148b5c880(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  longlong *plVar4;
  uint uVar5;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_28);
  uVar3 = *(ulonglong *)(param_2 + 8);
  plVar4 = *(longlong **)(param_2 + 0x10);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
  uVar5 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar5 >> 0x10 ^ uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b5c91e FUN_148b5c91e body=64 status=ok
// SIG undefined FUN_148b5c91e(void)

void FUN_148b5c91e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0x18) == '\x01') {
    plVar3 = *(longlong **)(param_2 + 0x10);
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
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 148b5c9ac FUN_148b5c9ac body=88 status=ok
// SIG undefined FUN_148b5c9ac(void)

undefined8 * FUN_148b5c9ac(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *param_1 = *param_2;
  uVar3 = param_2[1];
  lVar4 = param_2[2];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_1[2];
  param_1[1] = uVar3;
  param_1[2] = lVar4;
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



// FUNCTION 148b5ca70 FUN_148b5ca70 body=54 status=ok
// SIG undefined FUN_148b5ca70(void)

undefined1 FUN_148b5ca70(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_143fb7a3c(param_2,param_3);
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return 1;
}



// FUNCTION 148b5cace FUN_148b5cace body=59 status=ok
// SIG undefined FUN_148b5cace(void)

undefined8 FUN_148b5cace(longlong *param_1)

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



// FUNCTION 148b5cb63 FUN_148b5cb63 body=73 status=ok
// SIG undefined FUN_148b5cb63(void)

void FUN_148b5cb63(longlong param_1,int param_2)

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



// FUNCTION 148b5cbac FUN_148b5cbac body=73 status=ok
// SIG undefined FUN_148b5cbac(void)

void FUN_148b5cbac(longlong param_1,int param_2)

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



// FUNCTION 148b5cbf6 FUN_148b5cbf6 body=122 status=ok
// SIG undefined FUN_148b5cbf6(void)

longlong FUN_148b5cbf6(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_148b5cc70(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148b5cc70 FUN_148b5cc70 body=201 status=ok
// SIG undefined FUN_148b5cc70(void)

undefined8 * FUN_148b5cc70(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145cc4678(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1406fba42(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      puVar6 = (undefined4 *)*param_1;
      puVar4 = (undefined4 *)*param_2;
      uVar5 = 0;
      do {
        puVar3 = (undefined8 *)param_2[4];
        if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
          puVar3 = param_2 + 2;
        }
        if ((*(uint *)((longlong)puVar3 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *puVar6 = *puVar4;
          puVar6[1] = puVar4[1];
        }
        else {
          FUN_148b5cd3a(puVar6,puVar4);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 0x14;
        puVar6 = puVar6 + 0x14;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 148b5cd3a FUN_148b5cd3a body=70 status=ok
// SIG undefined FUN_148b5cd3a(void)

longlong * FUN_148b5cd3a(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_148b5cd80(param_1 + 1,param_2 + 1);
  param_1[9] = param_2[9];
  return param_1;
}



// FUNCTION 148b5cd80 FUN_148b5cd80 body=181 status=ok
// SIG undefined FUN_148b5cd80(void)

undefined1 * FUN_148b5cd80(undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  uVar4 = *(undefined4 *)(param_2 + 0x18);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 0x18) = uVar4;
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined8 *)(param_1 + 0x20) = 0;
  iVar1 = *(int *)(param_2 + 0x28);
  _Src = *(void **)(param_2 + 0x20);
  *(int *)(param_1 + 0x28) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x20,iVar1,0);
    memcpy(*(void **)(param_1 + 0x20),_Src,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  iVar1 = *(int *)(param_2 + 0x38);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  *(int *)(param_1 + 0x38) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  else {
    FUN_148b506e6(param_1 + 0x30,iVar1,0);
    FUN_148b50755(*(undefined8 *)(param_1 + 0x30),uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 148b5ce36 FUN_148b5ce36 body=29 status=ok
// SIG undefined FUN_148b5ce36(void)

undefined8 FUN_148b5ce36(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b5ce6e FUN_148b5ce6e body=29 status=ok
// SIG undefined FUN_148b5ce6e(void)

bool FUN_148b5ce6e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148b5ce8c FUN_148b5ce8c body=26 status=ok
// SIG undefined FUN_148b5ce8c(void)

bool FUN_148b5ce8c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148b5cea6 FUN_148b5cea6 body=24 status=ok
// SIG undefined FUN_148b5cea6(void)

bool FUN_148b5cea6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148b5cebe FUN_148b5cebe body=93 status=ok
// SIG undefined FUN_148b5cebe(void)

void FUN_148b5cebe(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b59ca40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148b5cf1c FUN_148b5cf1c body=93 status=ok
// SIG undefined FUN_148b5cf1c(void)

void FUN_148b5cf1c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b59ca40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148b5cf7a FUN_148b5cf7a body=126 status=ok
// SIG undefined FUN_148b5cf7a(void)

void FUN_148b5cf7a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b59ca40;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148b5cfe9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b5cff8 FUN_148b5cff8 body=35 status=ok
// SIG undefined FUN_148b5cff8(void)

void FUN_148b5cff8(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148b5d017. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 148b5d01c FUN_148b5d01c body=142 status=ok
// SIG undefined FUN_148b5d01c(void)

bool FUN_148b5d01c(longlong param_1)

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
    (**(code **)(param_1 + 0x20))(lVar2);
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



// FUNCTION 148b5d0ac FUN_148b5d0ac body=174 status=ok
// SIG undefined FUN_148b5d0ac(void)

longlong * FUN_148b5d0ac(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,0xb,0x10);
  *(undefined4 *)(param_1 + 1) = 0xb;
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_LAB_149e020b0;
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
  puVar1[2] = lVar3;
  *puVar1 = &PTR_FUN_14b59f790;
  puVar1[3] = 0;
  FUN_14485c47a(puVar1 + 3,param_2);
  FUN_148b5d15a(puVar1 + 4,param_3);
  return param_1;
}



// FUNCTION 148b5d15a FUN_148b5d15a body=128 status=ok
// SIG undefined FUN_148b5d15a(void)

void FUN_148b5d15a(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  uVar1 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  param_1[5] = 0;
  param_1[5] = param_2[5];
  param_2[5] = 0;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  param_2[6] = 0;
  param_1[8] = param_2[8];
  param_1[10] = param_2[10];
  param_2[10] = 0;
  uVar1 = param_2[0xc];
  uVar2 = param_2[0xd];
  uVar3 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar3;
  param_1[0xc] = uVar1;
  param_1[0xd] = uVar2;
  if (param_1[8] != 0) {
    param_2[8] = 0;
  }
  param_1[0x10] = param_2[0x10];
  return;
}



// FUNCTION 148b5d1da FUN_148b5d1da body=88 status=ok
// SIG undefined FUN_148b5d1da(void)

undefined8 * FUN_148b5d1da(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b59f790;
  if (param_1[0xc] != 0) {
    plVar1 = param_1 + 0x10;
    if ((longlong *)param_1[0xe] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xe];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b5d24a FUN_148b5d24a body=29 status=ok
// SIG undefined FUN_148b5d24a(void)

bool FUN_148b5d24a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148b5d268 FUN_148b5d268 body=26 status=ok
// SIG undefined FUN_148b5d268(void)

bool FUN_148b5d268(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148b5d28c FUN_148b5d28c body=108 status=ok
// SIG undefined FUN_148b5d28c(void)

void FUN_148b5d28c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 0xb) {
    FUN_1446efa72(param_2,0,0xb,0x10);
    *(undefined4 *)(param_2 + 1) = 0xb;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b59f790;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  FUN_148b5d48e(puVar1 + 4,param_1 + 0x20);
  return;
}



// FUNCTION 148b5d2f8 FUN_148b5d2f8 body=108 status=ok
// SIG undefined FUN_148b5d2f8(void)

void FUN_148b5d2f8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 0xb) {
    FUN_1446efa72(param_2,0,0xb,0x10);
    *(undefined4 *)(param_2 + 1) = 0xb;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b59f790;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  FUN_148b5d48e(puVar1 + 4,param_1 + 0x20);
  return;
}



// FUNCTION 148b5d364 FUN_148b5d364 body=142 status=ok
// SIG undefined FUN_148b5d364(void)

void FUN_148b5d364(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 0xb) {
    FUN_1446efa72(param_2 + 1,0,0xb,0x10);
    param_2[1].LockCount = 0xb;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b59f790;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  FUN_148b5d48e(&p_Var1->EntryCount,param_1 + 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148b5d3e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b5d3fc FUN_148b5d3fc body=144 status=ok
// SIG undefined FUN_148b5d3fc(void)

undefined4 FUN_148b5d3fc(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
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
  uVar2 = FUN_144729dda(param_1 + 0x18);
  if ((char)uVar2 != '\0') {
    FUN_148b5d542(param_1 + 0x20);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b5d48e FUN_148b5d48e body=180 status=ok
// SIG undefined FUN_148b5d48e(void)

undefined8 * FUN_148b5d48e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  uVar6 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar6;
  param_1[2] = param_2[2];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
  uVar4 = *(undefined4 *)(param_2 + 4);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x24);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
  *(undefined4 *)(param_1 + 4) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar5;
  param_1[5] = 0;
  iVar1 = *(int *)(param_2 + 6);
  _Src = (void *)param_2[5];
  *(int *)(param_1 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 5,iVar1,0);
    memcpy((void *)param_1[5],_Src,(longlong)iVar1 * 2);
  }
  lVar2 = param_2[8];
  param_1[8] = lVar2;
  param_1[10] = 0;
  if (lVar2 != 0) {
    puVar7 = param_2 + 0xc;
    if ((undefined8 *)param_2[10] != (undefined8 *)0x0) {
      puVar7 = (undefined8 *)param_2[10];
    }
    (**(code **)*puVar7)(puVar7,param_1 + 10);
  }
  param_1[0x10] = param_2[0x10];
  return param_1;
}


