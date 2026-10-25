// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14971bdc2 FUN_14971bdc2 body=448 status=ok
// SIG undefined FUN_14971bdc2(void)

undefined8 * FUN_14971bdc2(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 *local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = (undefined8 *)*param_3;
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  FUN_146fb38ca(*(undefined4 *)param_3,param_2,&local_68);
  *param_1 = &PTR_FUN_14be1fbe0;
  puVar1 = param_1 + 0x33;
  FUN_1414db454(puVar1);
  puVar2 = param_1 + 0x49;
  puVar3 = param_1 + 0x4b;
  puVar4 = param_1 + 0x4d;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  local_70 = 0;
  uStack_60 = 0xffffffff;
  local_58 = 0;
  local_68 = puVar1;
  FUN_146fb824a(param_1,&local_68,&local_70);
  local_68 = (undefined8 *)0x0;
  FUN_1496f7d4c(param_1,puVar1,puVar1,&local_68);
  local_70 = 0;
  uStack_60 = 0xffffffff;
  local_58 = 0;
  local_68 = puVar2;
  FUN_146fb824a(param_1,&local_68,&local_70);
  local_70 = 0;
  uStack_60 = 0xffffffff;
  local_58 = 0;
  local_68 = puVar3;
  FUN_146fb824a(param_1,&local_68,&local_70);
  local_68 = (undefined8 *)0x0;
  FUN_14971bf84(param_1,puVar2,puVar2,&local_68);
  local_68 = (undefined8 *)0x0;
  FUN_14971c006(param_1,puVar3,puVar3,&local_68);
  local_70 = 0;
  uStack_60 = 0xffffffff;
  local_58 = 0;
  local_68 = puVar4;
  FUN_146fb824a(param_1,&local_68,&local_70);
  local_68 = (undefined8 *)0x0;
  FUN_14971c080(param_1,puVar4,puVar4,&local_68);
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14971bf84 FUN_14971bf84 body=128 status=ok
// SIG undefined FUN_14971bf84(void)

undefined8 FUN_14971bf84(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  longlong local_30;
  undefined4 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0xffffffff;
  local_20 = 0;
  local_40 = 0xffffffff;
  local_38 = 0;
  local_48 = param_2;
  local_30 = param_3;
  uVar1 = FUN_146fb8a66(param_1,&local_48,param_4);
  if (param_3 != 0) {
    FUN_146fb39ca(uVar1,&local_30);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14971c006 FUN_14971c006 body=120 status=ok
// SIG undefined FUN_14971c006(void)

void FUN_14971c006(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0xffffffff;
  local_18 = 0;
  local_38 = 0xffffffff;
  local_30 = 0;
  local_40 = param_2;
  local_28 = param_3;
  uVar1 = FUN_146fb8a66(param_1,&local_40,param_4);
  if (param_3 != 0) {
    FUN_146fb39ca(uVar1,&local_28);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14971c080 FUN_14971c080 body=120 status=ok
// SIG undefined FUN_14971c080(void)

void FUN_14971c080(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0xffffffff;
  local_18 = 0;
  local_38 = 0xffffffff;
  local_30 = 0;
  local_40 = param_2;
  local_28 = param_3;
  uVar1 = FUN_146fb8a66(param_1,&local_40,param_4);
  if (param_3 != 0) {
    FUN_146fb39ca(uVar1,&local_28);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14971c0fa FUN_14971c0fa body=489 status=ok
// SIG undefined FUN_14971c0fa(void)

void FUN_14971c0fa(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = *param_2;
  if (lVar3 != 0) {
    lVar5 = FUN_1411a1912();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        == lVar5 + 0x30)) {
      lVar5 = *(longlong *)(lVar3 + 0x218);
      plVar4 = *(longlong **)(lVar3 + 0x220);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      if (lVar5 != 0) {
        local_60 = param_1 + 0x198;
        local_58 = 0xffffffff;
        local_50 = 0;
        uVar6 = FUN_146fb4872(param_1,&local_60);
        local_70 = FUN_1496fcf74(uVar6,param_3,local_60);
        local_60 = param_1 + 0x248;
        local_58 = 0xffffffff;
        local_50 = 0;
        uVar6 = FUN_146fb4872(param_1,&local_60);
        local_68 = FUN_14972bbd2(uVar6,param_3,local_60);
        local_60 = param_1 + 600;
        local_58 = 0xffffffff;
        local_50 = 0;
        uVar6 = FUN_146fb4872(param_1,&local_60);
        lVar5 = FUN_14972bfc2(uVar6,param_3,local_60);
        local_60 = param_1 + 0x268;
        local_58 = 0xffffffff;
        local_50 = 0;
        uVar6 = FUN_146fb4872(param_1,&local_60);
        uVar6 = FUN_14972c3b2(uVar6,param_3,local_60);
        if (*(int *)(lVar5 + 8) < 1) {
          FUN_1474b41e2(lVar3,local_70,local_68,0);
        }
        else {
          FUN_1474b4aac(lVar3,local_70,lVar5,0);
        }
        FUN_1474b4fda(lVar3,uVar6);
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
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14971c2e4 FUN_14971c2e4 body=207 status=ok
// SIG undefined FUN_14971c2e4(void)

void FUN_14971c2e4(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = param_1 + 0x198;
  local_40 = 0xffffffff;
  local_38 = 0;
  FUN_14971c3b4(param_1,param_2,&local_48);
  local_48 = param_1 + 0x248;
  local_40 = 0xffffffff;
  local_38 = 0;
  FUN_14971c466(param_1,param_2,&local_48);
  local_48 = param_1 + 600;
  local_40 = 0xffffffff;
  local_38 = 0;
  FUN_14971c518(param_1,param_2,&local_48);
  local_48 = param_1 + 0x268;
  local_40 = 0xffffffff;
  local_38 = 0;
  FUN_14971c5ca(param_1,param_2,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14971c3b4 FUN_14971c3b4 body=176 status=ok
// SIG undefined FUN_14971c3b4(void)

void FUN_14971c3b4(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = FUN_146fb4872(param_1,param_3);
  local_40 = param_4;
  if (*(longlong *)(lVar2 + 0x48) == 0) {
    uVar1 = *param_3;
    local_38 = 0xffffffff;
    local_30 = 0;
    lVar2 = FUN_146fb78aa(param_1);
    if (lVar2 != 0) {
      FUN_14972d97e(lVar2,uVar1,param_2);
    }
  }
  else {
    local_38 = 0xffffffff;
    local_30 = 0;
    FUN_146fb3a70(param_1,param_2,param_3);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14971c466 FUN_14971c466 body=176 status=ok
// SIG undefined FUN_14971c466(void)

void FUN_14971c466(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = FUN_146fb4872(param_1,param_3);
  local_40 = param_4;
  if (*(longlong *)(lVar2 + 0x48) == 0) {
    uVar1 = *param_3;
    local_38 = 0xffffffff;
    local_30 = 0;
    lVar2 = FUN_146fb78aa(param_1);
    if (lVar2 != 0) {
      FUN_14972c7ae(lVar2,uVar1,param_2);
    }
  }
  else {
    local_38 = 0xffffffff;
    local_30 = 0;
    FUN_146fb3a70(param_1,param_2,param_3);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14971c518 FUN_14971c518 body=176 status=ok
// SIG undefined FUN_14971c518(void)

void FUN_14971c518(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = FUN_146fb4872(param_1,param_3);
  local_40 = param_4;
  if (*(longlong *)(lVar2 + 0x48) == 0) {
    uVar1 = *param_3;
    local_38 = 0xffffffff;
    local_30 = 0;
    lVar2 = FUN_146fb78aa(param_1);
    if (lVar2 != 0) {
      FUN_14972c860(lVar2,uVar1,param_2);
    }
  }
  else {
    local_38 = 0xffffffff;
    local_30 = 0;
    FUN_146fb3a70(param_1,param_2,param_3);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14971c5ca FUN_14971c5ca body=176 status=ok
// SIG undefined FUN_14971c5ca(void)

void FUN_14971c5ca(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = FUN_146fb4872(param_1,param_3);
  local_40 = param_4;
  if (*(longlong *)(lVar2 + 0x48) == 0) {
    uVar1 = *param_3;
    local_38 = 0xffffffff;
    local_30 = 0;
    lVar2 = FUN_146fb78aa(param_1);
    if (lVar2 != 0) {
      FUN_14972c912(lVar2,uVar1,param_2);
    }
  }
  else {
    local_38 = 0xffffffff;
    local_30 = 0;
    FUN_146fb3a70(param_1,param_2,param_3);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14971c67c FUN_14971c67c body=279 status=ok
// SIG undefined FUN_14971c67c(void)

void FUN_14971c67c(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_3 + 0x20))(param_3);
  local_48 = 0;
  FUN_1446ddc76(&local_40,"TEngineContext",1);
  cVar3 = (**(code **)(*param_2 + 8))(param_2,local_40);
  lVar5 = local_48;
  if ((param_2 == (longlong *)0x0) || (cVar3 == '\0')) goto LAB_14971c733;
  if (param_2[0xb] != 0) {
    lVar4 = FUN_1411a1912();
    lVar1 = param_2[0xb];
    if (lVar1 != 0) {
      lVar5 = 0;
      if ((lVar4 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_14971c733;
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        lVar5 = lVar1;
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar1);
        }
        goto LAB_14971c733;
      }
    }
  }
  lVar5 = 0;
LAB_14971c733:
  local_48 = lVar5;
  local_38 = 0xffffffff;
  local_30 = 0;
  local_40 = param_1 + 0x198;
  lVar5 = FUN_146fb78aa(param_1);
  if (lVar5 != 0) {
    FUN_14972c9c4(lVar5,&local_48,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14971c794 FUN_14971c794 body=203 status=ok
// SIG undefined FUN_14971c794(void)

undefined8 * FUN_14971c794(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 *local_50;
  undefined4 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = *param_3;
  uStack_64 = param_3[1];
  uStack_60 = param_3[2];
  uStack_5c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be20170;
  local_50 = param_1 + 0x33;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  local_70 = 0;
  local_48 = 0xffffffff;
  local_40 = 0;
  FUN_146fb824a(param_1,&local_50,&local_70);
  local_70 = 0;
  local_48 = 0xffffffff;
  local_40 = 0;
  local_50 = param_1 + 0x34;
  FUN_146fb8a66(param_1,&local_50,&local_70);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14971c860 FUN_14971c860 body=241 status=ok
// SIG undefined FUN_14971c860(void)

void FUN_14971c860(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  longlong local_58 [3];
  longlong local_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_3 + 0x20))(param_3);
  local_40 = param_1 + 0x198;
  local_58[0] = 0;
  local_58[1] = 0;
  local_38 = 0xffffffff;
  local_30 = 0;
  uVar1 = FUN_146fb4872(param_1,&local_40);
  plVar2 = (longlong *)FUN_14972cda4(uVar1,param_2,local_40);
  if ((*plVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_38 = 0xffffffff;
  local_30 = 0;
  local_40 = param_1 + 0x1a0;
  lVar3 = FUN_146fb78aa(param_1);
  if (lVar3 != 0) {
    FUN_14972d20c(lVar3,local_58,param_2);
  }
  FUN_145c7a166(0,0);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14971c952 FUN_14971c952 body=387 status=ok
// SIG undefined FUN_14971c952(void)

undefined8 * FUN_14971c952(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 *local_78;
  undefined4 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_88 = *param_3;
  uStack_84 = param_3[1];
  uStack_80 = param_3[2];
  uStack_7c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be20430;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  FUN_1414db454(param_1 + 0x35);
  local_98 = param_1 + 0x4f;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  local_90 = 0;
  local_70 = 0xffffffff;
  local_68 = 0;
  local_78 = param_1 + 0x33;
  FUN_146fb824a(param_1,&local_78,&local_90);
  local_90 = 0;
  local_70 = 0xffffffff;
  local_68 = 0;
  local_78 = param_1 + 0x35;
  FUN_146fb8a66(param_1,&local_78,&local_90);
  local_90 = 0;
  local_70 = 0xffffffff;
  local_68 = 0;
  local_78 = param_1 + 0x4b;
  FUN_146fb8a66(param_1,&local_78,&local_90);
  local_90 = 0;
  local_70 = 0xffffffff;
  local_68 = 0;
  local_78 = param_1 + 0x4d;
  FUN_146fb8a66(param_1,&local_78,&local_90);
  local_90 = 0;
  local_78 = local_98;
  local_70 = 0xffffffff;
  local_68 = 0;
  FUN_146fb8a66(param_1,&local_78,&local_90);
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14971cad6 FUN_14971cad6 body=1518 status=ok
// SIG undefined FUN_14971cad6(void)

void FUN_14971cad6(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_6a8 [40];
  longlong local_680;
  longlong local_678;
  undefined8 local_670;
  longlong *local_668;
  longlong local_660;
  longlong local_658 [3];
  undefined4 uStack_640;
  undefined4 uStack_63c;
  undefined4 uStack_638;
  ulonglong uStack_634;
  longlong local_628;
  ulonglong uStack_620;
  undefined1 local_5a0 [56];
  longlong local_568;
  undefined8 uStack_560;
  longlong local_558;
  undefined8 uStack_550;
  undefined4 local_548;
  undefined4 uStack_544;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  longlong local_538;
  undefined4 local_530;
  undefined8 local_528;
  undefined8 *local_520;
  undefined4 local_518;
  undefined8 local_510;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_6a8;
  lVar7 = param_1 + 0x1a8;
  lVar6 = (**(code **)(*param_3 + 0x20))(param_3);
  local_680 = lVar7;
  if ((lVar6 != lVar7) && (lVar7 = (**(code **)(*param_3 + 0x20))(param_3), lVar7 != param_1 + 600))
  {
    (**(code **)(*param_3 + 0x20))(param_3);
  }
  local_520 = (undefined8 *)(param_1 + 0x198);
  local_518 = 0xffffffff;
  local_510 = 0;
  local_678 = param_1;
  uVar8 = FUN_146fb4872(param_1,&local_520);
  local_670 = param_2;
  plVar9 = (longlong *)FUN_14972d582(uVar8,param_2,local_520);
  local_548 = 0x3f800000;
  uStack_544 = 0x3f800000;
  uStack_540 = 0x3f800000;
  uStack_53c = 0x3f800000;
  FUN_140b1d240(&local_520);
  local_558 = 0;
  uStack_550 = 0;
  local_568 = 0;
  uStack_560 = 0;
  FUN_140dff9a0(local_5a0,&local_520);
  FUN_146e9af8e();
  if (0 < (int)plVar9[1]) {
    lVar7 = 0;
    local_668 = plVar9;
    do {
      lVar6 = lVar7 * 0xb0 + *plVar9;
      local_660 = lVar7;
      iVar3 = FUN_1401f66f6(&local_520,DAT_14c9974a8);
      FUN_1474af1fe(lVar6,&local_520,&local_558,0);
      lVar7 = local_558;
      if ((DAT_14c950c29 == '\x01') && (0 < (int)uStack_550)) {
        lVar12 = 0;
        iVar5 = (int)uStack_550;
        do {
          if (*(longlong *)(lVar7 + lVar12 * 8) != 0) {
            FUN_1456cec3c();
            iVar5 = (int)uStack_550;
          }
          lVar12 = lVar12 + 1;
        } while (lVar12 < iVar5);
      }
      uStack_638 = 0;
      uStack_634 = 0;
      local_658[2] = 0;
      uStack_640 = 0;
      uStack_63c = 0;
      local_628 = 0;
      uStack_620 = 0;
      lVar12 = FUN_140081d40(lVar6,0);
      lVar7 = 0;
      if (lVar12 != 0) {
        lVar7 = FUN_1406d0862();
        if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar7 + 0x38) * 8) != lVar7 + 0x30)) {
          lVar7 = 0;
        }
        else {
          lVar7 = lVar12;
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(lVar12);
          }
        }
      }
      local_658[2] = lVar7;
      FUN_140c99494(&uStack_640,lVar6 + 0x80);
      uStack_634 = uStack_634 & 0xffffffff;
      bVar13 = (longlong)uStack_620 < 0;
      uStack_620 = uStack_620 & 0xffffffff00000000;
      if (bVar13) {
        FUN_14482f6fa(&local_628,0);
      }
      lVar7 = local_568;
      lVar12 = (longlong)(int)uStack_560;
      if (lVar12 != 0) {
        lVar10 = 0;
        do {
          cVar2 = FUN_1474b4f82(lVar7 + lVar10,local_658 + 2);
          if (cVar2 != '\0') {
            uVar11 = (lVar10 >> 4) * -0x5555555555555555;
            if ((int)uVar11 != -1) {
              lVar7 = (longlong)(int)uVar11;
              goto LAB_14971cda7;
            }
            break;
          }
          lVar10 = lVar10 + 0x30;
        } while (lVar12 * 0x30 != lVar10);
      }
      iVar5 = (int)uStack_560;
      uVar11 = uStack_560 & 0xffffffff;
      uVar4 = (int)uStack_560 + 1;
      uStack_560 = CONCAT44(uStack_560._4_4_,uVar4);
      if (uStack_560._4_4_ < uVar4) {
        FUN_1474be2e4(&local_568,uVar11);
      }
      lVar7 = (longlong)iVar5;
      FUN_1474b544a(lVar7 * 0x30 + local_568,local_658 + 2);
LAB_14971cda7:
      piVar1 = (int *)(local_568 + 0x18 + lVar7 * 0x30);
      *piVar1 = *piVar1 + 1;
      uVar4 = *(uint *)(lVar6 + 0x98);
      if ((longlong)(int)uVar4 != 0) {
        lVar7 = local_568 + lVar7 * 0x30;
        iVar5 = *(int *)(lVar7 + 0x28);
        *(uint *)(lVar7 + 0x28) = iVar5 + uVar4;
        if ((uint)(*(int *)(lVar7 + 0x2c) - iVar5) < uVar4) {
          FUN_14475e4ac((longlong *)(lVar7 + 0x20),iVar5);
        }
        memcpy((void *)((longlong)iVar5 * 4 + *(longlong *)(lVar7 + 0x20)),*(void **)(lVar6 + 0x90),
               (longlong)(int)uVar4 << 2);
        plVar9 = local_668;
      }
      iVar5 = FUN_1401f66f6(&local_520,DAT_14c9974a8);
      if (iVar3 < iVar5) {
        do {
          FUN_146e9b04a(local_5a0,iVar3,uVar11 & 0xffffffff);
          iVar3 = iVar3 + 1;
        } while (iVar5 != iVar3);
      }
      if (local_628 != 0) {
        FUN_1400020a8();
      }
      if (CONCAT44(uStack_63c,uStack_640) != 0) {
        FUN_1400020a8();
      }
      lVar7 = local_660 + 1;
    } while (lVar7 < (int)plVar9[1]);
  }
  thunk_FUN_146eaf28c(&local_520);
  FUN_146e9b036(local_5a0);
  cVar2 = FUN_146ebcd12(&local_520);
  if (cVar2 != '\0') {
    FUN_146ebba8c(&local_520,0,1);
  }
  FUN_14075a44e(local_658 + 2,&local_520);
  FUN_141051328(local_658 + 2);
  local_658[0] = 0;
  local_658[1] = 0;
  FUN_1474af234(&local_558);
  lVar7 = local_678;
  local_538 = local_680;
  local_530 = 0xffffffff;
  local_528 = 0;
  lVar6 = FUN_146fb78aa(local_678);
  uVar8 = local_670;
  if (lVar6 != 0) {
    FUN_14972d97e(lVar6,&local_520,local_670);
  }
  local_538 = lVar7 + 600;
  local_530 = 0xffffffff;
  local_528 = 0;
  lVar6 = FUN_146fb78aa(lVar7);
  if (lVar6 != 0) {
    FUN_14972da30(lVar6,local_658,uVar8);
  }
  local_538 = lVar7 + 0x268;
  local_530 = 0xffffffff;
  local_528 = 0;
  lVar6 = FUN_146fb78aa(lVar7);
  if (lVar6 != 0) {
    FUN_14972dcee(lVar6,&local_558,uVar8);
  }
  local_538 = lVar7 + 0x278;
  local_530 = 0xffffffff;
  local_528 = 0;
  lVar7 = FUN_146fb78aa(lVar7);
  if (lVar7 != 0) {
    FUN_14972dfac(lVar7,&local_568,uVar8);
  }
  if (local_658[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140e285a6(local_568,uStack_560 & 0xffffffff);
  if (local_568 != 0) {
    FUN_1400020a8();
  }
  if (local_558 != 0) {
    FUN_1400020a8();
  }
  FUN_140f35722(&local_520);
  if ((local_60 ^ (ulonglong)auStack_6a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14971d0c6 FUN_14971d0c6 body=333 status=ok
// SIG undefined FUN_14971d0c6(void)

undefined8 * FUN_14971d0c6(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be20700;
  param_1[0x33] = 0;
  FUN_1414db454(param_1 + 0x34);
  local_88 = param_1 + 0x4e;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x34;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x4a;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x4c;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_88;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14971d214 FUN_14971d214 body=588 status=ok
// SIG undefined FUN_14971d214(void)

void FUN_14971d214(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 auStack_168 [32];
  longlong local_148 [3];
  longlong local_130;
  longlong local_128;
  ulonglong uStack_120;
  longlong local_118 [3];
  undefined4 local_100;
  undefined8 local_f8;
  undefined1 local_f0 [176];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 != param_1 + 0x1a0) {
    lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
    if (lVar1 != param_1 + 0x250) {
      (**(code **)(*param_3 + 0x20))(param_3);
    }
  }
  FUN_1414db454(local_f0);
  local_118[0] = 0;
  local_118[1] = 0;
  local_128 = 0;
  uStack_120 = 0;
  lVar1 = *(longlong *)(param_1 + 0x198);
  if (lVar1 != 0) {
    local_130 = lVar1;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c();
    }
    FUN_1474af354(&local_130,local_f0,local_118,&local_128);
  }
  local_148[0] = 0;
  local_148[1] = 0;
  FUN_1474af234(local_118);
  local_100 = 0xffffffff;
  local_f8 = 0;
  local_118[2] = param_1 + 0x1a0;
  lVar1 = FUN_146fb78aa(param_1);
  if (lVar1 != 0) {
    FUN_1496fd2a8(lVar1,local_f0,param_2);
  }
  local_118[2] = param_1 + 0x250;
  local_100 = 0xffffffff;
  local_f8 = 0;
  lVar1 = FUN_146fb78aa(param_1);
  if (lVar1 != 0) {
    FUN_14972da30(lVar1,local_148,param_2);
  }
  local_118[2] = param_1 + 0x260;
  local_100 = 0xffffffff;
  local_f8 = 0;
  lVar1 = FUN_146fb78aa(param_1);
  if (lVar1 != 0) {
    FUN_14972dcee(lVar1,local_118,param_2);
  }
  local_118[2] = param_1 + 0x270;
  local_100 = 0xffffffff;
  local_f8 = 0;
  lVar1 = FUN_146fb78aa(param_1);
  if (lVar1 != 0) {
    FUN_14972dfac(lVar1,&local_128,param_2);
  }
  if (local_148[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140e285a6(local_128,uStack_120 & 0xffffffff);
  if (local_128 != 0) {
    FUN_1400020a8();
  }
  if (local_118[0] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b30a(local_f0);
  if ((local_40 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14971d462 FUN_14971d462 body=340 status=ok
// SIG undefined FUN_14971d462(void)

undefined8 * FUN_14971d462(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be209c0;
  param_1[0x33] = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  FUN_1414db454(param_1 + 0x35);
  local_88 = param_1 + 0x4f;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x35;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x4b;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x4d;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_88;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14971d5b8 FUN_14971d5b8 body=881 status=ok
// SIG undefined FUN_14971d5b8(void)

void FUN_14971d5b8(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_1e8 [32];
  longlong *local_1c8;
  undefined1 local_1c0;
  longlong local_1b8 [7];
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined2 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  longlong local_148;
  longlong *local_138;
  longlong local_128 [5];
  undefined1 local_100 [176];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  lVar4 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar4 != param_1 + 0x1a8) {
    lVar4 = (**(code **)(*param_3 + 0x20))(param_3);
    if (lVar4 != param_1 + 600) {
      (**(code **)(*param_3 + 0x20))(param_3);
    }
  }
  FUN_1414db454(local_100);
  local_1b8[4] = 0;
  local_1b8[5] = 0;
  local_1b8[2] = 0;
  local_1b8[3] = 0;
  if (*(longlong *)(param_1 + 0x198) == 0) goto LAB_14971d786;
  puVar5 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  local_1b8[6] = 0xc044000000000000;
  local_180 = 0xc050e00000000000;
  local_178 = 0;
  local_170 = 0x40490fdb3f800000;
  local_168 = 0x6d;
  local_160 = 0;
  uStack_158 = 0;
  FUN_14572a658(puVar5);
  if (puVar5 == (undefined8 *)0x0) goto LAB_14971d786;
  lVar4 = puVar5[6];
  if (lVar4 != 0) {
    FUN_1411371f6(local_1b8 + 6);
    uVar7 = uStack_158;
    uStack_158 = CONCAT71(uStack_158._1_7_,1);
    uVar3 = uStack_158;
    uStack_158._2_1_ = SUB81(uVar7,2);
    uStack_158._3_5_ = SUB85(uVar7,3);
    uStack_158._0_2_ = (undefined2)uVar3;
    uVar7 = CONCAT53(uStack_158._3_5_,CONCAT12(uStack_158._2_1_,(undefined2)uStack_158));
    uStack_158 = CONCAT44(0x40,(uint)uVar7 | 0x20000);
    lVar1 = *(longlong *)(param_1 + 0x198);
    lVar2 = *(longlong *)(lVar1 + 0x30);
    if (lVar2 == 0) {
LAB_14971d70d:
      uVar7 = 0;
    }
    else {
      lVar6 = FUN_1446f8646();
      if (((lVar6 == 0) || (*(int *)(lVar2 + 0x38) < *(int *)(lVar6 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
          lVar6 + 0x30)) goto LAB_14971d70d;
      uVar7 = *(undefined8 *)(lVar1 + 0x30);
    }
    lVar4 = FUN_141037e38(lVar4,uVar7,0,local_1b8 + 6);
    if (lVar4 != 0) {
      local_1c8 = local_1b8;
      local_1b8[0] = CONCAT71(local_1b8[0]._1_7_,1);
      local_1c0 = *(undefined1 *)(param_1 + 0x1a0);
      FUN_1474af4a2(lVar4,local_100,local_1b8 + 4,local_1b8 + 2);
    }
    if (local_148 != 0) {
      if (local_138 == (longlong *)0x0) {
        local_138 = local_128;
      }
      (**(code **)(*local_138 + 0x10))();
    }
  }
  (**(code **)*puVar5)(puVar5,1);
LAB_14971d786:
  local_1b8[0] = 0;
  local_1b8[1] = 0;
  FUN_1474af234(local_1b8 + 4);
  local_180 = CONCAT44(local_180._4_4_,0xffffffff);
  local_178 = 0;
  local_1b8[6] = param_1 + 0x1a8;
  lVar4 = FUN_146fb78aa(param_1);
  if (lVar4 != 0) {
    FUN_1496fd2a8(lVar4,local_100,param_2);
  }
  local_1b8[6] = param_1 + 600;
  local_180 = CONCAT44(local_180._4_4_,0xffffffff);
  local_178 = 0;
  lVar4 = FUN_146fb78aa(param_1);
  if (lVar4 != 0) {
    FUN_14972da30(lVar4,local_1b8,param_2);
  }
  local_1b8[6] = param_1 + 0x268;
  local_180 = CONCAT44(local_180._4_4_,0xffffffff);
  local_178 = 0;
  lVar4 = FUN_146fb78aa(param_1);
  if (lVar4 != 0) {
    FUN_14972dcee(lVar4,local_1b8 + 4,param_2);
  }
  local_1b8[6] = param_1 + 0x278;
  local_180 = CONCAT44(local_180._4_4_,0xffffffff);
  local_178 = 0;
  lVar4 = FUN_146fb78aa(param_1);
  if (lVar4 != 0) {
    FUN_14972dfac(lVar4,local_1b8 + 2,param_2);
  }
  if (local_1b8[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140e285a6(local_1b8[2],local_1b8[3] & 0xffffffff);
  if (local_1b8[2] != 0) {
    FUN_1400020a8();
  }
  if (local_1b8[4] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b30a(local_100);
  if ((local_50 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14971d92a FUN_14971d92a body=98 status=ok
// SIG undefined FUN_14971d92a(void)

void FUN_14971d92a(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be289f0;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x4b] = 0;
  param_2[0x4c] = 0x8000000000;
  param_2[0x4d] = 0;
  param_2[0x4e] = 0;
  param_2[0x4f] = 0;
  param_2[0x50] = 0;
  *(undefined2 *)(param_2 + 0x51) = 1;
  return;
}



// FUNCTION 14971d98c FUN_14971d98c body=98 status=ok
// SIG undefined FUN_14971d98c(void)

void FUN_14971d98c(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be289f0;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x4b] = 0;
  param_2[0x4c] = 0x8000000000;
  param_2[0x4d] = 0;
  param_2[0x4e] = 0;
  param_2[0x4f] = 0;
  param_2[0x50] = 0;
  *(undefined2 *)(param_2 + 0x51) = 1;
  return;
}



// FUNCTION 14971da12 FUN_14971da12 body=63 status=ok
// SIG undefined FUN_14971da12(void)

undefined1 FUN_14971da12(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14971de44(param_2,param_3);
    param_3 = param_3 + 0x290;
    param_2 = param_2 + 0x290;
  }
  return 1;
}



// FUNCTION 14971da7a FUN_14971da7a body=59 status=ok
// SIG undefined FUN_14971da7a(void)

undefined8 FUN_14971da7a(longlong *param_1)

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



// FUNCTION 14971dac6 FUN_14971dac6 body=40 status=ok
// SIG undefined FUN_14971dac6(void)

void FUN_14971dac6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x290) == '\x01') {
    FUN_14971ddf6(param_2);
    *(undefined1 *)(param_2 + 0x290) = 0;
  }
  return;
}



// FUNCTION 14971db3c FUN_14971db3c body=43 status=ok
// SIG undefined FUN_14971db3c(void)

undefined8 FUN_14971db3c(undefined8 param_1,int param_2)

{
  FUN_14971ddf6();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x290);
  }
  return param_1;
}



// FUNCTION 14971db68 FUN_14971db68 body=38 status=ok
// SIG undefined FUN_14971db68(void)

undefined8 FUN_14971db68(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FAddMaterialToCollectionDataflowNode",1);
  return param_2;
}



// FUNCTION 14971db8e FUN_14971db8e body=38 status=ok
// SIG undefined FUN_14971db8e(void)

undefined8 FUN_14971db8e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"AddMaterialToCollection",1);
  return param_2;
}



// FUNCTION 14971dbb4 FUN_14971dbb4 body=38 status=ok
// SIG undefined FUN_14971dbb4(void)

undefined8 FUN_14971dbb4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Materials",1);
  return param_2;
}



// FUNCTION 14971dbda FUN_14971dbda body=32 status=ok
// SIG undefined FUN_14971dbda(void)

undefined8 FUN_14971dbda(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14971dbfa FUN_14971dbfa body=123 status=ok
// SIG undefined FUN_14971dbfa(void)

void FUN_14971dbfa(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc248d8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc248d8 = FUN_140002ddd(FUN_146751418,uVar1,L"AddMaterialToCollectionDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc248d8,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014971dc72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14971dc76 FUN_14971dc76 body=93 status=ok
// SIG undefined FUN_14971dc76(void)

void FUN_14971dc76(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc248d8 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc248d8 = FUN_140002ddd(FUN_146751418,uVar2,L"AddMaterialToCollectionDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc248d8,param_1);
  return;
}



// FUNCTION 14971dcd4 FUN_14971dcd4 body=55 status=ok
// SIG undefined FUN_14971dcd4(void)

void FUN_14971dcd4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc248d8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc248d8 = FUN_140002ddd(FUN_146751418,uVar1,L"AddMaterialToCollectionDataflowNode");
  }
  return;
}



// FUNCTION 14971dd0c FUN_14971dd0c body=233 status=ok
// SIG undefined FUN_14971dd0c(void)

ulonglong FUN_14971dd0c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FAddMaterialToCollectionDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14971dda6;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14971dda6;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14971dda6;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14971dda6:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 14971ddf6 FUN_14971ddf6 body=77 status=ok
// SIG undefined FUN_14971ddf6(void)

void FUN_14971ddf6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be289f0;
  if (param_1[0x4d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4b] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b30a(param_1 + 0x33);
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 14971de44 FUN_14971de44 body=187 status=ok
// SIG undefined FUN_14971de44(void)

longlong FUN_14971de44(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  
  FUN_146fc06e2();
  FUN_146ecd102(param_1 + 0x198,param_2 + 0x198);
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 0x248,param_2 + 0x248);
  }
  FUN_1497129cc(param_1 + 0x268,param_2 + 0x268);
  lVar2 = *(longlong *)(param_2 + 0x278);
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *(longlong *)(param_2 + 0x278);
    }
  }
  bVar1 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x278) = lVar2;
  lVar2 = *(longlong *)(param_2 + 0x280);
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *(longlong *)(param_2 + 0x280);
    }
  }
  *(longlong *)(param_1 + 0x280) = lVar2;
  *(undefined2 *)(param_1 + 0x288) = *(undefined2 *)(param_2 + 0x288);
  return param_1;
}



// FUNCTION 14971df00 FUN_14971df00 body=102 status=ok
// SIG undefined FUN_14971df00(void)

void FUN_14971df00(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be28cc0;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x4b] = 0;
  param_2[0x4c] = 0x8000000000;
  param_2[0x4d] = 0;
  param_2[0x4e] = 0;
  param_2[0x4f] = 0xffffffffffffffff;
  *(undefined2 *)(param_2 + 0x50) = 0;
  return;
}



// FUNCTION 14971df66 FUN_14971df66 body=102 status=ok
// SIG undefined FUN_14971df66(void)

void FUN_14971df66(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be28cc0;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x4b] = 0;
  param_2[0x4c] = 0x8000000000;
  param_2[0x4d] = 0;
  param_2[0x4e] = 0;
  param_2[0x4f] = 0xffffffffffffffff;
  *(undefined2 *)(param_2 + 0x50) = 0;
  return;
}



// FUNCTION 14971dff0 FUN_14971dff0 body=63 status=ok
// SIG undefined FUN_14971dff0(void)

undefined1 FUN_14971dff0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14971e422(param_2,param_3);
    param_3 = param_3 + 0x288;
    param_2 = param_2 + 0x288;
  }
  return 1;
}



// FUNCTION 14971e058 FUN_14971e058 body=59 status=ok
// SIG undefined FUN_14971e058(void)

undefined8 FUN_14971e058(longlong *param_1)

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



// FUNCTION 14971e0a4 FUN_14971e0a4 body=40 status=ok
// SIG undefined FUN_14971e0a4(void)

void FUN_14971e0a4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x288) == '\x01') {
    FUN_14971e3d4(param_2);
    *(undefined1 *)(param_2 + 0x288) = 0;
  }
  return;
}



// FUNCTION 14971e11a FUN_14971e11a body=43 status=ok
// SIG undefined FUN_14971e11a(void)

undefined8 FUN_14971e11a(undefined8 param_1,int param_2)

{
  FUN_14971e3d4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x288);
  }
  return param_1;
}



// FUNCTION 14971e146 FUN_14971e146 body=38 status=ok
// SIG undefined FUN_14971e146(void)

undefined8 FUN_14971e146(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FReAssignMaterialInCollectionDataflowNode",1);
  return param_2;
}



// FUNCTION 14971e16c FUN_14971e16c body=38 status=ok
// SIG undefined FUN_14971e16c(void)

undefined8 FUN_14971e16c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"ReAssignMaterialInCollection",1);
  return param_2;
}



// FUNCTION 14971e192 FUN_14971e192 body=38 status=ok
// SIG undefined FUN_14971e192(void)

undefined8 FUN_14971e192(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Materials",1);
  return param_2;
}



// FUNCTION 14971e1b8 FUN_14971e1b8 body=32 status=ok
// SIG undefined FUN_14971e1b8(void)

undefined8 FUN_14971e1b8(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14971e1d8 FUN_14971e1d8 body=123 status=ok
// SIG undefined FUN_14971e1d8(void)

void FUN_14971e1d8(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc248f0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc248f0 = FUN_140002ddd(FUN_146751478,uVar1,L"ReAssignMaterialInCollectionDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc248f0,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014971e250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14971e254 FUN_14971e254 body=93 status=ok
// SIG undefined FUN_14971e254(void)

void FUN_14971e254(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc248f0 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc248f0 = FUN_140002ddd(FUN_146751478,uVar2,L"ReAssignMaterialInCollectionDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc248f0,param_1);
  return;
}



// FUNCTION 14971e2b2 FUN_14971e2b2 body=55 status=ok
// SIG undefined FUN_14971e2b2(void)

void FUN_14971e2b2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc248f0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc248f0 = FUN_140002ddd(FUN_146751478,uVar1,L"ReAssignMaterialInCollectionDataflowNode");
  }
  return;
}



// FUNCTION 14971e2ea FUN_14971e2ea body=233 status=ok
// SIG undefined FUN_14971e2ea(void)

ulonglong FUN_14971e2ea(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FReAssignMaterialInCollectionDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14971e384;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14971e384;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14971e384;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14971e384:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 14971e3d4 FUN_14971e3d4 body=77 status=ok
// SIG undefined FUN_14971e3d4(void)

void FUN_14971e3d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be28cc0;
  if (param_1[0x4d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4b] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b30a(param_1 + 0x33);
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 14971e422 FUN_14971e422 body=111 status=ok
// SIG undefined FUN_14971e422(void)

longlong FUN_14971e422(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  FUN_146ecd102(param_1 + 0x198,param_2 + 0x198);
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 0x248,param_2 + 0x248);
  }
  FUN_1497129cc(param_1 + 0x268,param_2 + 0x268);
  *(undefined8 *)(param_1 + 0x278) = *(undefined8 *)(param_2 + 0x278);
  *(undefined2 *)(param_1 + 0x280) = *(undefined2 *)(param_2 + 0x280);
  return param_1;
}



// FUNCTION 14971e492 FUN_14971e492 body=49 status=ok
// SIG undefined FUN_14971e492(void)

void FUN_14971e492(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be28f80;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  return;
}



// FUNCTION 14971e4c4 FUN_14971e4c4 body=49 status=ok
// SIG undefined FUN_14971e4c4(void)

void FUN_14971e4c4(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be28f80;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  return;
}



// FUNCTION 14971e51a FUN_14971e51a body=108 status=ok
// SIG undefined FUN_14971e51a(void)

undefined1 FUN_14971e51a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    FUN_1497129cc(param_2 + 0x198,param_3 + 0x198);
    FUN_144a787a6(param_2 + 0x1a8,param_3 + 0x1a8);
    param_2 = param_2 + 0x1b8;
    param_3 = param_3 + 0x1b8;
  }
  return 1;
}



// FUNCTION 14971e5ae FUN_14971e5ae body=59 status=ok
// SIG undefined FUN_14971e5ae(void)

undefined8 FUN_14971e5ae(longlong *param_1)

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



// FUNCTION 14971e5fa FUN_14971e5fa body=40 status=ok
// SIG undefined FUN_14971e5fa(void)

void FUN_14971e5fa(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1b8) == '\x01') {
    FUN_14971e92a(param_2);
    *(undefined1 *)(param_2 + 0x1b8) = 0;
  }
  return;
}



// FUNCTION 14971e670 FUN_14971e670 body=43 status=ok
// SIG undefined FUN_14971e670(void)

undefined8 FUN_14971e670(undefined8 param_1,int param_2)

{
  FUN_14971e92a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x1b8);
  }
  return param_1;
}



// FUNCTION 14971e69c FUN_14971e69c body=38 status=ok
// SIG undefined FUN_14971e69c(void)

undefined8 FUN_14971e69c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FMaterialsInfoDataflowNode",1);
  return param_2;
}



// FUNCTION 14971e6c2 FUN_14971e6c2 body=38 status=ok
// SIG undefined FUN_14971e6c2(void)

undefined8 FUN_14971e6c2(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"MaterialsInfo",1);
  return param_2;
}



// FUNCTION 14971e6e8 FUN_14971e6e8 body=38 status=ok
// SIG undefined FUN_14971e6e8(void)

undefined8 FUN_14971e6e8(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Materials",1);
  return param_2;
}



// FUNCTION 14971e70e FUN_14971e70e body=32 status=ok
// SIG undefined FUN_14971e70e(void)

undefined8 FUN_14971e70e(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14971e72e FUN_14971e72e body=123 status=ok
// SIG undefined FUN_14971e72e(void)

void FUN_14971e72e(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24908 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24908 = FUN_140002ddd(FUN_1467514d8,uVar1,L"MaterialsInfoDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24908,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014971e7a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14971e7aa FUN_14971e7aa body=93 status=ok
// SIG undefined FUN_14971e7aa(void)

void FUN_14971e7aa(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24908 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24908 = FUN_140002ddd(FUN_1467514d8,uVar2,L"MaterialsInfoDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24908,param_1);
  return;
}



// FUNCTION 14971e808 FUN_14971e808 body=55 status=ok
// SIG undefined FUN_14971e808(void)

void FUN_14971e808(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24908 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24908 = FUN_140002ddd(FUN_1467514d8,uVar1,L"MaterialsInfoDataflowNode");
  }
  return;
}



// FUNCTION 14971e840 FUN_14971e840 body=233 status=ok
// SIG undefined FUN_14971e840(void)

ulonglong FUN_14971e840(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FMaterialsInfoDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14971e8da;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14971e8da;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14971e8da;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14971e8da:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 14971e92a FUN_14971e92a body=65 status=ok
// SIG undefined FUN_14971e92a(void)

void FUN_14971e92a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be28f80;
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 14971e96c FUN_14971e96c body=49 status=ok
// SIG undefined FUN_14971e96c(void)

void FUN_14971e96c(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be29220;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *(undefined8 *)((longlong)param_2 + 0x1a4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1ac) = 0;
  return;
}



// FUNCTION 14971e99e FUN_14971e99e body=49 status=ok
// SIG undefined FUN_14971e99e(void)

void FUN_14971e99e(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be29220;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *(undefined8 *)((longlong)param_2 + 0x1a4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1ac) = 0;
  return;
}



// FUNCTION 14971e9f4 FUN_14971e9f4 body=63 status=ok
// SIG undefined FUN_14971e9f4(void)

undefined1 FUN_14971e9f4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14971ee12(param_2,param_3);
    param_3 = param_3 + 0x1b8;
    param_2 = param_2 + 0x1b8;
  }
  return 1;
}



// FUNCTION 14971ea5c FUN_14971ea5c body=59 status=ok
// SIG undefined FUN_14971ea5c(void)

undefined8 FUN_14971ea5c(longlong *param_1)

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



// FUNCTION 14971eaa8 FUN_14971eaa8 body=67 status=ok
// SIG undefined FUN_14971eaa8(void)

void FUN_14971eaa8(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x37) == '\x01') {
    *param_2 = &PTR_FUN_14be29220;
    if (param_2[0x33] != 0) {
      FUN_1400020a8();
    }
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x37) = 0;
  }
  return;
}



// FUNCTION 14971eb3a FUN_14971eb3a body=73 status=ok
// SIG undefined FUN_14971eb3a(void)

undefined8 * FUN_14971eb3a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be29220;
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x1b8);
  }
  return param_1;
}



// FUNCTION 14971eb84 FUN_14971eb84 body=38 status=ok
// SIG undefined FUN_14971eb84(void)

undefined8 FUN_14971eb84(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FGetMaterialFromMaterialsArrayDataflowNode",1);
  return param_2;
}



// FUNCTION 14971ebaa FUN_14971ebaa body=38 status=ok
// SIG undefined FUN_14971ebaa(void)

undefined8 FUN_14971ebaa(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GetMaterialFromMaterialsArray",1);
  return param_2;
}



// FUNCTION 14971ebd0 FUN_14971ebd0 body=38 status=ok
// SIG undefined FUN_14971ebd0(void)

undefined8 FUN_14971ebd0(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Utilities|Materials",1);
  return param_2;
}



// FUNCTION 14971ebf6 FUN_14971ebf6 body=32 status=ok
// SIG undefined FUN_14971ebf6(void)

undefined8 FUN_14971ebf6(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14971ec16 FUN_14971ec16 body=123 status=ok
// SIG undefined FUN_14971ec16(void)

void FUN_14971ec16(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24920 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24920 = FUN_140002ddd(FUN_146751538,uVar1,L"GetMaterialFromMaterialsArrayDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24920,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014971ec8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14971ec92 FUN_14971ec92 body=93 status=ok
// SIG undefined FUN_14971ec92(void)

void FUN_14971ec92(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24920 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24920 = FUN_140002ddd(FUN_146751538,uVar2,L"GetMaterialFromMaterialsArrayDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24920,param_1);
  return;
}



// FUNCTION 14971ecf0 FUN_14971ecf0 body=55 status=ok
// SIG undefined FUN_14971ecf0(void)

void FUN_14971ecf0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24920 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24920 = FUN_140002ddd(FUN_146751538,uVar1,L"GetMaterialFromMaterialsArrayDataflowNode");
  }
  return;
}



// FUNCTION 14971ed28 FUN_14971ed28 body=233 status=ok
// SIG undefined FUN_14971ed28(void)

ulonglong FUN_14971ed28(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FGetMaterialFromMaterialsArrayDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14971edc2;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14971edc2;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14971edc2;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14971edc2:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 14971ee12 FUN_14971ee12 body=100 status=ok
// SIG undefined FUN_14971ee12(void)

longlong FUN_14971ee12(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_146fc06e2();
  FUN_1497129cc(param_1 + 0x198,param_2 + 0x198);
  lVar1 = *(longlong *)(param_2 + 0x1a8);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 0x1a8);
    }
  }
  *(longlong *)(param_1 + 0x1a8) = lVar1;
  *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(param_2 + 0x1b0);
  return param_1;
}



// FUNCTION 14971ee78 FUN_14971ee78 body=59 status=ok
// SIG undefined FUN_14971ee78(void)

void FUN_14971ee78(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be295f0;
  *(undefined4 *)((longlong)param_2 + 0x1b4) = 0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *(undefined8 *)((longlong)param_2 + 0x1a1) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1a9) = 0;
  return;
}



// FUNCTION 14971eeb4 FUN_14971eeb4 body=59 status=ok
// SIG undefined FUN_14971eeb4(void)

void FUN_14971eeb4(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be295f0;
  *(undefined4 *)((longlong)param_2 + 0x1b4) = 0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *(undefined8 *)((longlong)param_2 + 0x1a1) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1a9) = 0;
  return;
}



// FUNCTION 14971ef14 FUN_14971ef14 body=63 status=ok
// SIG undefined FUN_14971ef14(void)

undefined1 FUN_14971ef14(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14971f332(param_2,param_3);
    param_3 = param_3 + 0x1b8;
    param_2 = param_2 + 0x1b8;
  }
  return 1;
}



// FUNCTION 14971ef7c FUN_14971ef7c body=59 status=ok
// SIG undefined FUN_14971ef7c(void)

undefined8 FUN_14971ef7c(longlong *param_1)

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



// FUNCTION 14971efc8 FUN_14971efc8 body=67 status=ok
// SIG undefined FUN_14971efc8(void)

void FUN_14971efc8(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x37) == '\x01') {
    *param_2 = &PTR_FUN_14be295f0;
    if (param_2[0x33] != 0) {
      FUN_1400020a8();
    }
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x37) = 0;
  }
  return;
}



// FUNCTION 14971f05a FUN_14971f05a body=73 status=ok
// SIG undefined FUN_14971f05a(void)

undefined8 * FUN_14971f05a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be295f0;
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x1b8);
  }
  return param_1;
}



// FUNCTION 14971f0a4 FUN_14971f0a4 body=38 status=ok
// SIG undefined FUN_14971f0a4(void)

undefined8 FUN_14971f0a4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FSetMaterialInMaterialsArrayDataflowNode",1);
  return param_2;
}



// FUNCTION 14971f0ca FUN_14971f0ca body=38 status=ok
// SIG undefined FUN_14971f0ca(void)

undefined8 FUN_14971f0ca(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"SetMaterialInMaterialsArray",1);
  return param_2;
}



// FUNCTION 14971f0f0 FUN_14971f0f0 body=38 status=ok
// SIG undefined FUN_14971f0f0(void)

undefined8 FUN_14971f0f0(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Utilities|Materials",1);
  return param_2;
}



// FUNCTION 14971f116 FUN_14971f116 body=32 status=ok
// SIG undefined FUN_14971f116(void)

undefined8 FUN_14971f116(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14971f136 FUN_14971f136 body=123 status=ok
// SIG undefined FUN_14971f136(void)

void FUN_14971f136(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24950 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24950 = FUN_140002ddd(FUN_1467515c7,uVar1,L"SetMaterialInMaterialsArrayDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24950,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014971f1ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14971f1b2 FUN_14971f1b2 body=93 status=ok
// SIG undefined FUN_14971f1b2(void)

void FUN_14971f1b2(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24950 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24950 = FUN_140002ddd(FUN_1467515c7,uVar2,L"SetMaterialInMaterialsArrayDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24950,param_1);
  return;
}



// FUNCTION 14971f210 FUN_14971f210 body=55 status=ok
// SIG undefined FUN_14971f210(void)

void FUN_14971f210(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24950 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24950 = FUN_140002ddd(FUN_1467515c7,uVar1,L"SetMaterialInMaterialsArrayDataflowNode");
  }
  return;
}



// FUNCTION 14971f248 FUN_14971f248 body=233 status=ok
// SIG undefined FUN_14971f248(void)

ulonglong FUN_14971f248(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FSetMaterialInMaterialsArrayDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14971f2e2;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14971f2e2;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14971f2e2;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14971f2e2:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 14971f332 FUN_14971f332 body=102 status=ok
// SIG undefined FUN_14971f332(void)

longlong FUN_14971f332(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_146fc06e2();
  FUN_1497129cc(param_1 + 0x198,param_2 + 0x198);
  lVar1 = *(longlong *)(param_2 + 0x1a8);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 0x1a8);
    }
  }
  *(longlong *)(param_1 + 0x1a8) = lVar1;
  *(undefined8 *)(param_1 + 0x1b0) = *(undefined8 *)(param_2 + 0x1b0);
  return param_1;
}



// FUNCTION 14971f39a FUN_14971f39a body=42 status=ok
// SIG undefined FUN_14971f39a(void)

void FUN_14971f39a(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be298b0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  return;
}



// FUNCTION 14971f3c4 FUN_14971f3c4 body=42 status=ok
// SIG undefined FUN_14971f3c4(void)

void FUN_14971f3c4(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be298b0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  return;
}



// FUNCTION 14971f412 FUN_14971f412 body=63 status=ok
// SIG undefined FUN_14971f412(void)

undefined1 FUN_14971f412(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14971f7f6(param_2,param_3);
    param_3 = param_3 + 0x1a8;
    param_2 = param_2 + 0x1a8;
  }
  return 1;
}



// FUNCTION 14971f47a FUN_14971f47a body=59 status=ok
// SIG undefined FUN_14971f47a(void)

undefined8 FUN_14971f47a(longlong *param_1)

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



// FUNCTION 14971f4c6 FUN_14971f4c6 body=40 status=ok
// SIG undefined FUN_14971f4c6(void)

void FUN_14971f4c6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a8) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a8) = 0;
  }
  return;
}



// FUNCTION 14971f53c FUN_14971f53c body=43 status=ok
// SIG undefined FUN_14971f53c(void)

undefined8 FUN_14971f53c(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x1a8);
  }
  return param_1;
}



// FUNCTION 14971f568 FUN_14971f568 body=38 status=ok
// SIG undefined FUN_14971f568(void)

undefined8 FUN_14971f568(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FMakeMaterialDataflowNode",1);
  return param_2;
}



// FUNCTION 14971f58e FUN_14971f58e body=38 status=ok
// SIG undefined FUN_14971f58e(void)

undefined8 FUN_14971f58e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"MakeMaterial",1);
  return param_2;
}



// FUNCTION 14971f5b4 FUN_14971f5b4 body=38 status=ok
// SIG undefined FUN_14971f5b4(void)

undefined8 FUN_14971f5b4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Generators|Material",1);
  return param_2;
}



// FUNCTION 14971f5da FUN_14971f5da body=32 status=ok
// SIG undefined FUN_14971f5da(void)

undefined8 FUN_14971f5da(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14971f5fa FUN_14971f5fa body=123 status=ok
// SIG undefined FUN_14971f5fa(void)

void FUN_14971f5fa(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24968 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24968 = FUN_140002ddd(FUN_146751626,uVar1,L"MakeMaterialDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24968,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014971f672. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14971f676 FUN_14971f676 body=93 status=ok
// SIG undefined FUN_14971f676(void)

void FUN_14971f676(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24968 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24968 = FUN_140002ddd(FUN_146751626,uVar2,L"MakeMaterialDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24968,param_1);
  return;
}



// FUNCTION 14971f6d4 FUN_14971f6d4 body=55 status=ok
// SIG undefined FUN_14971f6d4(void)

void FUN_14971f6d4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24968 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24968 = FUN_140002ddd(FUN_146751626,uVar1,L"MakeMaterialDataflowNode");
  }
  return;
}



// FUNCTION 14971f70c FUN_14971f70c body=233 status=ok
// SIG undefined FUN_14971f70c(void)

ulonglong FUN_14971f70c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FMakeMaterialDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14971f7a6;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14971f7a6;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14971f7a6;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14971f7a6:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 14971f7f6 FUN_14971f7f6 body=117 status=ok
// SIG undefined FUN_14971f7f6(void)

longlong FUN_14971f7f6(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  
  FUN_146fc06e2();
  lVar2 = *(longlong *)(param_2 + 0x198);
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *(longlong *)(param_2 + 0x198);
    }
  }
  bVar1 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x198) = lVar2;
  lVar2 = *(longlong *)(param_2 + 0x1a0);
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *(longlong *)(param_2 + 0x1a0);
    }
  }
  *(longlong *)(param_1 + 0x1a0) = lVar2;
  return param_1;
}



// FUNCTION 14971f86c FUN_14971f86c body=42 status=ok
// SIG undefined FUN_14971f86c(void)

void FUN_14971f86c(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be29b60;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  return;
}



// FUNCTION 14971f896 FUN_14971f896 body=42 status=ok
// SIG undefined FUN_14971f896(void)

void FUN_14971f896(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be29b60;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  return;
}



// FUNCTION 14971f8e4 FUN_14971f8e4 body=85 status=ok
// SIG undefined FUN_14971f8e4(void)

undefined1 FUN_14971f8e4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    FUN_1497129cc(param_2 + 0x198,param_3 + 0x198);
    param_2 = param_2 + 0x1a8;
    param_3 = param_3 + 0x1a8;
  }
  return 1;
}



// FUNCTION 14971f962 FUN_14971f962 body=59 status=ok
// SIG undefined FUN_14971f962(void)

undefined8 FUN_14971f962(longlong *param_1)

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



// FUNCTION 14971f9ae FUN_14971f9ae body=67 status=ok
// SIG undefined FUN_14971f9ae(void)

void FUN_14971f9ae(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x35) == '\x01') {
    *param_2 = &PTR_FUN_14be29b60;
    if (param_2[0x33] != 0) {
      FUN_1400020a8();
    }
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x35) = 0;
  }
  return;
}



// FUNCTION 14971fa40 FUN_14971fa40 body=73 status=ok
// SIG undefined FUN_14971fa40(void)

undefined8 * FUN_14971fa40(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be29b60;
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x1a8);
  }
  return param_1;
}



// FUNCTION 14971fa8a FUN_14971fa8a body=38 status=ok
// SIG undefined FUN_14971fa8a(void)

undefined8 FUN_14971fa8a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FMakeMaterialsArrayDataflowNode",1);
  return param_2;
}



// FUNCTION 14971fab0 FUN_14971fab0 body=38 status=ok
// SIG undefined FUN_14971fab0(void)

undefined8 FUN_14971fab0(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"MakeMaterialsArray",1);
  return param_2;
}



// FUNCTION 14971fad6 FUN_14971fad6 body=38 status=ok
// SIG undefined FUN_14971fad6(void)

undefined8 FUN_14971fad6(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Generators|Material",1);
  return param_2;
}



// FUNCTION 14971fafc FUN_14971fafc body=32 status=ok
// SIG undefined FUN_14971fafc(void)

undefined8 FUN_14971fafc(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14971fb1c FUN_14971fb1c body=123 status=ok
// SIG undefined FUN_14971fb1c(void)

void FUN_14971fb1c(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24980 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24980 = FUN_140002ddd(FUN_146751686,uVar1,L"MakeMaterialsArrayDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24980,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014971fb94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14971fb98 FUN_14971fb98 body=93 status=ok
// SIG undefined FUN_14971fb98(void)

void FUN_14971fb98(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24980 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24980 = FUN_140002ddd(FUN_146751686,uVar2,L"MakeMaterialsArrayDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24980,param_1);
  return;
}



// FUNCTION 14971fbf6 FUN_14971fbf6 body=55 status=ok
// SIG undefined FUN_14971fbf6(void)

void FUN_14971fbf6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24980 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24980 = FUN_140002ddd(FUN_146751686,uVar1,L"MakeMaterialsArrayDataflowNode");
  }
  return;
}



// FUNCTION 14971fc2e FUN_14971fc2e body=233 status=ok
// SIG undefined FUN_14971fc2e(void)

ulonglong FUN_14971fc2e(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FMakeMaterialsArrayDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14971fcc8;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14971fcc8;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14971fcc8;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14971fcc8:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 14971fd1a FUN_14971fd1a body=46 status=ok
// SIG undefined FUN_14971fd1a(void)

void FUN_14971fd1a(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be29e10;
  FUN_1414db454(param_2 + 0x33);
  return;
}



// FUNCTION 14971fd48 FUN_14971fd48 body=46 status=ok
// SIG undefined FUN_14971fd48(void)

void FUN_14971fd48(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be29e10;
  FUN_1414db454(param_2 + 0x33);
  return;
}



// FUNCTION 14971fd9a FUN_14971fd9a body=85 status=ok
// SIG undefined FUN_14971fd9a(void)

undefined1 FUN_14971fd9a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    FUN_146ecd102(param_2 + 0x198,param_3 + 0x198);
    param_2 = param_2 + 0x248;
    param_3 = param_3 + 0x248;
  }
  return 1;
}



// FUNCTION 14971fe18 FUN_14971fe18 body=59 status=ok
// SIG undefined FUN_14971fe18(void)

undefined8 FUN_14971fe18(longlong *param_1)

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



// FUNCTION 14971fe64 FUN_14971fe64 body=62 status=ok
// SIG undefined FUN_14971fe64(void)

void FUN_14971fe64(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x49) == '\x01') {
    *param_2 = &PTR_FUN_14be29e10;
    FUN_14054b30a(param_2 + 0x33);
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x49) = 0;
  }
  return;
}



// FUNCTION 14971fef0 FUN_14971fef0 body=68 status=ok
// SIG undefined FUN_14971fef0(void)

undefined8 * FUN_14971fef0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be29e10;
  FUN_14054b30a(param_1 + 0x33);
  FUN_146fc8eba(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x248);
  }
  return param_1;
}



// FUNCTION 14971ff34 FUN_14971ff34 body=38 status=ok
// SIG undefined FUN_14971ff34(void)

undefined8 FUN_14971ff34(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FCloseGeometryOnCollectionDataflowNode",1);
  return param_2;
}



// FUNCTION 14971ff5a FUN_14971ff5a body=38 status=ok
// SIG undefined FUN_14971ff5a(void)

undefined8 FUN_14971ff5a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"CloseGeometryOnCollection",1);
  return param_2;
}



// FUNCTION 14971ff80 FUN_14971ff80 body=38 status=ok
// SIG undefined FUN_14971ff80(void)

undefined8 FUN_14971ff80(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection",1);
  return param_2;
}



// FUNCTION 14971ffa6 FUN_14971ffa6 body=32 status=ok
// SIG undefined FUN_14971ffa6(void)

undefined8 FUN_14971ffa6(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14971ffc6 FUN_14971ffc6 body=123 status=ok
// SIG undefined FUN_14971ffc6(void)

void FUN_14971ffc6(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc249b0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc249b0 = FUN_140002ddd(FUN_1467516e6,uVar1,L"CloseGeometryOnCollectionDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc249b0,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014972003e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149720042 FUN_149720042 body=93 status=ok
// SIG undefined FUN_149720042(void)

void FUN_149720042(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc249b0 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc249b0 = FUN_140002ddd(FUN_1467516e6,uVar2,L"CloseGeometryOnCollectionDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc249b0,param_1);
  return;
}



// FUNCTION 1497200a0 FUN_1497200a0 body=55 status=ok
// SIG undefined FUN_1497200a0(void)

void FUN_1497200a0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc249b0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc249b0 = FUN_140002ddd(FUN_1467516e6,uVar1,L"CloseGeometryOnCollectionDataflowNode");
  }
  return;
}



// FUNCTION 1497200d8 FUN_1497200d8 body=233 status=ok
// SIG undefined FUN_1497200d8(void)

ulonglong FUN_1497200d8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FCloseGeometryOnCollectionDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149720172;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149720172;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149720172;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149720172:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 1497201c4 FUN_1497201c4 body=62 status=ok
// SIG undefined FUN_1497201c4(void)

void FUN_1497201c4(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be2a0d0;
  param_2[0x33] = 0;
  FUN_1414db454(param_2 + 0x34);
  *(undefined1 *)(param_2 + 0x4a) = 0;
  return;
}



// FUNCTION 149720202 FUN_149720202 body=62 status=ok
// SIG undefined FUN_149720202(void)

void FUN_149720202(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be2a0d0;
  param_2[0x33] = 0;
  FUN_1414db454(param_2 + 0x34);
  *(undefined1 *)(param_2 + 0x4a) = 0;
  return;
}



// FUNCTION 149720264 FUN_149720264 body=63 status=ok
// SIG undefined FUN_149720264(void)

undefined1 FUN_149720264(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1497207ba(param_2,param_3);
    param_3 = param_3 + 600;
    param_2 = param_2 + 600;
  }
  return 1;
}



// FUNCTION 1497202cc FUN_1497202cc body=59 status=ok
// SIG undefined FUN_1497202cc(void)

undefined8 FUN_1497202cc(longlong *param_1)

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



// FUNCTION 149720318 FUN_149720318 body=62 status=ok
// SIG undefined FUN_149720318(void)

void FUN_149720318(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x4b) == '\x01') {
    *param_2 = &PTR_FUN_14be2a0d0;
    FUN_14054b30a(param_2 + 0x34);
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x4b) = 0;
  }
  return;
}



// FUNCTION 1497203a4 FUN_1497203a4 body=68 status=ok
// SIG undefined FUN_1497203a4(void)

undefined8 * FUN_1497203a4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be2a0d0;
  FUN_14054b30a(param_1 + 0x34);
  FUN_146fc8eba(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,600);
  }
  return param_1;
}



// FUNCTION 1497203e8 FUN_1497203e8 body=38 status=ok
// SIG undefined FUN_1497203e8(void)

undefined8 FUN_1497203e8(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FSkeletalMeshToCollectionDataflowNode",1);
  return param_2;
}



// FUNCTION 14972040e FUN_14972040e body=38 status=ok
// SIG undefined FUN_14972040e(void)

undefined8 FUN_14972040e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"SkeletalMeshToCollection",1);
  return param_2;
}



// FUNCTION 149720434 FUN_149720434 body=38 status=ok
// SIG undefined FUN_149720434(void)

undefined8 FUN_149720434(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection",1);
  return param_2;
}



// FUNCTION 14972045a FUN_14972045a body=32 status=ok
// SIG undefined FUN_14972045a(void)

undefined8 FUN_14972045a(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14972047a FUN_14972047a body=123 status=ok
// SIG undefined FUN_14972047a(void)

void FUN_14972047a(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc249c8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc249c8 = FUN_140002ddd(FUN_146751746,uVar1,L"SkeletalMeshToCollectionDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc249c8,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001497204f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 1497204f6 FUN_1497204f6 body=93 status=ok
// SIG undefined FUN_1497204f6(void)

void FUN_1497204f6(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc249c8 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc249c8 = FUN_140002ddd(FUN_146751746,uVar2,L"SkeletalMeshToCollectionDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc249c8,param_1);
  return;
}



// FUNCTION 149720554 FUN_149720554 body=55 status=ok
// SIG undefined FUN_149720554(void)

void FUN_149720554(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc249c8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc249c8 = FUN_140002ddd(FUN_146751746,uVar1,L"SkeletalMeshToCollectionDataflowNode");
  }
  return;
}



// FUNCTION 14972058c FUN_14972058c body=233 status=ok
// SIG undefined FUN_14972058c(void)

ulonglong FUN_14972058c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FSkeletalMeshToCollectionDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149720626;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149720626;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149720626;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149720626:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 149720676 FUN_149720676 body=323 status=ok
// SIG undefined FUN_149720676(void)

undefined8 * FUN_149720676(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1400b22c2(local_80,"SurfaceRender");
  FUN_1446ddc76(&local_88,"FGeometryCollection",1);
  FUN_1446ddc76(&local_48,"Collection",1);
  local_98 = (undefined8 *)0x0;
  local_90 = 1;
  FUN_1401b309e(&local_98,1,0);
  *local_98 = local_48;
  FUN_1496fe870(&local_70,local_80,local_88,&local_98);
  *(undefined4 *)(param_2 + 1) = 1;
  FUN_1496fcee0(param_2,0);
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = 0;
  *puVar1 = local_70;
  local_70 = 0;
  *(undefined4 *)(puVar1 + 1) = (undefined4)local_68;
  *(undefined4 *)((longlong)puVar1 + 0xc) = local_68._4_4_;
  local_68 = 0;
  puVar1[2] = local_60;
  puVar1[3] = 0;
  puVar1[3] = local_58;
  local_58 = 0;
  *(undefined4 *)(puVar1 + 4) = (undefined4)local_50;
  *(undefined4 *)((longlong)puVar1 + 0x24) = local_50._4_4_;
  local_50 = 0;
  if (local_98 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497207ba FUN_1497207ba body=100 status=ok
// SIG undefined FUN_1497207ba(void)

longlong FUN_1497207ba(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_146fc06e2();
  lVar1 = *(longlong *)(param_2 + 0x198);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 0x198);
    }
  }
  *(longlong *)(param_1 + 0x198) = lVar1;
  FUN_146ecd102(param_1 + 0x1a0,param_2 + 0x1a0);
  *(undefined1 *)(param_1 + 0x250) = *(undefined1 *)(param_2 + 0x250);
  return param_1;
}



// FUNCTION 149720820 FUN_149720820 body=57 status=ok
// SIG undefined FUN_149720820(void)

void FUN_149720820(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be2a380;
  param_2[0x33] = 0;
  FUN_1414db454(param_2 + 0x34);
  return;
}



// FUNCTION 14972085a FUN_14972085a body=57 status=ok
// SIG undefined FUN_14972085a(void)

void FUN_14972085a(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be2a380;
  param_2[0x33] = 0;
  FUN_1414db454(param_2 + 0x34);
  return;
}



// FUNCTION 1497208b8 FUN_1497208b8 body=63 status=ok
// SIG undefined FUN_1497208b8(void)

undefined1 FUN_1497208b8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149720cca(param_2,param_3);
    param_3 = param_3 + 0x250;
    param_2 = param_2 + 0x250;
  }
  return 1;
}



// FUNCTION 149720920 FUN_149720920 body=59 status=ok
// SIG undefined FUN_149720920(void)

undefined8 FUN_149720920(longlong *param_1)

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



// FUNCTION 14972096c FUN_14972096c body=62 status=ok
// SIG undefined FUN_14972096c(void)

void FUN_14972096c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x4a) == '\x01') {
    *param_2 = &PTR_FUN_14be2a380;
    FUN_14054b30a(param_2 + 0x34);
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x4a) = 0;
  }
  return;
}



// FUNCTION 1497209f8 FUN_1497209f8 body=68 status=ok
// SIG undefined FUN_1497209f8(void)

undefined8 * FUN_1497209f8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be2a380;
  FUN_14054b30a(param_1 + 0x34);
  FUN_146fc8eba(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x250);
  }
  return param_1;
}



// FUNCTION 149720a3c FUN_149720a3c body=38 status=ok
// SIG undefined FUN_149720a3c(void)

undefined8 FUN_149720a3c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FSkeletonToCollectionDataflowNode",1);
  return param_2;
}



// FUNCTION 149720a62 FUN_149720a62 body=38 status=ok
// SIG undefined FUN_149720a62(void)

undefined8 FUN_149720a62(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"SkeletonToCollection",1);
  return param_2;
}



// FUNCTION 149720a88 FUN_149720a88 body=38 status=ok
// SIG undefined FUN_149720a88(void)

undefined8 FUN_149720a88(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection",1);
  return param_2;
}



// FUNCTION 149720aae FUN_149720aae body=32 status=ok
// SIG undefined FUN_149720aae(void)

undefined8 FUN_149720aae(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149720ace FUN_149720ace body=123 status=ok
// SIG undefined FUN_149720ace(void)

void FUN_149720ace(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc249e0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc249e0 = FUN_140002ddd(FUN_1467517a6,uVar1,L"SkeletonToCollectionDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc249e0,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149720b46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149720b4a FUN_149720b4a body=93 status=ok
// SIG undefined FUN_149720b4a(void)

void FUN_149720b4a(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc249e0 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc249e0 = FUN_140002ddd(FUN_1467517a6,uVar2,L"SkeletonToCollectionDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc249e0,param_1);
  return;
}



// FUNCTION 149720ba8 FUN_149720ba8 body=55 status=ok
// SIG undefined FUN_149720ba8(void)

void FUN_149720ba8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc249e0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc249e0 = FUN_140002ddd(FUN_1467517a6,uVar1,L"SkeletonToCollectionDataflowNode");
  }
  return;
}



// FUNCTION 149720be0 FUN_149720be0 body=233 status=ok
// SIG undefined FUN_149720be0(void)

ulonglong FUN_149720be0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FSkeletonToCollectionDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149720c7a;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149720c7a;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149720c7a;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149720c7a:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 149720cca FUN_149720cca body=91 status=ok
// SIG undefined FUN_149720cca(void)

longlong FUN_149720cca(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_146fc06e2();
  lVar1 = *(longlong *)(param_2 + 0x198);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 0x198);
    }
  }
  *(longlong *)(param_1 + 0x198) = lVar1;
  FUN_146ecd102(param_1 + 0x1a0,param_2 + 0x1a0);
  return param_1;
}



// FUNCTION 149720d26 FUN_149720d26 body=114 status=ok
// SIG undefined FUN_149720d26(void)

void FUN_149720d26(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be2a630;
  param_2[0x33] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x34;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)(param_2 + 0x40) = 1;
  FUN_1414db454(param_2 + 0x41);
  param_2[0x57] = 0;
  param_2[0x58] = 0;
  param_2[0x59] = 0;
  param_2[0x5a] = 0;
  param_2[0x5b] = 0;
  param_2[0x5c] = 0;
  return;
}



// FUNCTION 149720d98 FUN_149720d98 body=114 status=ok
// SIG undefined FUN_149720d98(void)

void FUN_149720d98(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be2a630;
  param_2[0x33] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x34;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)(param_2 + 0x40) = 1;
  FUN_1414db454(param_2 + 0x41);
  param_2[0x57] = 0;
  param_2[0x58] = 0;
  param_2[0x59] = 0;
  param_2[0x5a] = 0;
  param_2[0x5b] = 0;
  param_2[0x5c] = 0;
  return;
}



// FUNCTION 149720e2e FUN_149720e2e body=63 status=ok
// SIG undefined FUN_149720e2e(void)

undefined1 FUN_149720e2e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1497213c6(param_2,param_3);
    param_3 = param_3 + 0x2f0;
    param_2 = param_2 + 0x2f0;
  }
  return 1;
}



// FUNCTION 149720e96 FUN_149720e96 body=59 status=ok
// SIG undefined FUN_149720e96(void)

undefined8 FUN_149720e96(longlong *param_1)

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



// FUNCTION 149720ee2 FUN_149720ee2 body=40 status=ok
// SIG undefined FUN_149720ee2(void)

void FUN_149720ee2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2f0) == '\x01') {
    FUN_149721356(param_2);
    *(undefined1 *)(param_2 + 0x2f0) = 0;
  }
  return;
}



// FUNCTION 149720f58 FUN_149720f58 body=43 status=ok
// SIG undefined FUN_149720f58(void)

undefined8 FUN_149720f58(undefined8 param_1,int param_2)

{
  FUN_149721356();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x2f0);
  }
  return param_1;
}



// FUNCTION 149720f84 FUN_149720f84 body=38 status=ok
// SIG undefined FUN_149720f84(void)

undefined8 FUN_149720f84(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FStaticMeshToCollectionDataflowNode",1);
  return param_2;
}



// FUNCTION 149720faa FUN_149720faa body=38 status=ok
// SIG undefined FUN_149720faa(void)

undefined8 FUN_149720faa(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"StaticMeshToCollection",1);
  return param_2;
}



// FUNCTION 149720fd0 FUN_149720fd0 body=38 status=ok
// SIG undefined FUN_149720fd0(void)

undefined8 FUN_149720fd0(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Asset",1);
  return param_2;
}



// FUNCTION 149720ff6 FUN_149720ff6 body=32 status=ok
// SIG undefined FUN_149720ff6(void)

undefined8 FUN_149720ff6(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149721016 FUN_149721016 body=123 status=ok
// SIG undefined FUN_149721016(void)

void FUN_149721016(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc249f8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc249f8 = FUN_140002ddd(FUN_146751806,uVar1,L"StaticMeshToCollectionDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc249f8,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014972108e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149721092 FUN_149721092 body=93 status=ok
// SIG undefined FUN_149721092(void)

void FUN_149721092(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc249f8 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc249f8 = FUN_140002ddd(FUN_146751806,uVar2,L"StaticMeshToCollectionDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc249f8,param_1);
  return;
}



// FUNCTION 1497210f0 FUN_1497210f0 body=55 status=ok
// SIG undefined FUN_1497210f0(void)

void FUN_1497210f0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc249f8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc249f8 = FUN_140002ddd(FUN_146751806,uVar1,L"StaticMeshToCollectionDataflowNode");
  }
  return;
}



// FUNCTION 149721128 FUN_149721128 body=233 status=ok
// SIG undefined FUN_149721128(void)

ulonglong FUN_149721128(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FStaticMeshToCollectionDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_1497211c2;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_1497211c2;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_1497211c2;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_1497211c2:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 149721212 FUN_149721212 body=323 status=ok
// SIG undefined FUN_149721212(void)

undefined8 * FUN_149721212(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1400b22c2(local_80,"SurfaceRender");
  FUN_1446ddc76(&local_88,"FGeometryCollection",1);
  FUN_1446ddc76(&local_48,"Collection",1);
  local_98 = (undefined8 *)0x0;
  local_90 = 1;
  FUN_1401b309e(&local_98,1,0);
  *local_98 = local_48;
  FUN_1496fe870(&local_70,local_80,local_88,&local_98);
  *(undefined4 *)(param_2 + 1) = 1;
  FUN_1496fcee0(param_2,0);
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = 0;
  *puVar1 = local_70;
  local_70 = 0;
  *(undefined4 *)(puVar1 + 1) = (undefined4)local_68;
  *(undefined4 *)((longlong)puVar1 + 0xc) = local_68._4_4_;
  local_68 = 0;
  puVar1[2] = local_60;
  puVar1[3] = 0;
  puVar1[3] = local_58;
  local_58 = 0;
  *(undefined4 *)(puVar1 + 4) = (undefined4)local_50;
  *(undefined4 *)((longlong)puVar1 + 0x24) = local_50._4_4_;
  local_50 = 0;
  if (local_98 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149721356 FUN_149721356 body=112 status=ok
// SIG undefined FUN_149721356(void)

void FUN_149721356(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be2a630;
  FUN_140e285a6(param_1[0x5b],*(undefined4 *)(param_1 + 0x5c));
  if (param_1[0x5b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x59] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x57] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b30a(param_1 + 0x41);
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 1497213c6 FUN_1497213c6 body=183 status=ok
// SIG undefined FUN_1497213c6(void)

longlong FUN_1497213c6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  FUN_146fc06e2();
  lVar1 = *(longlong *)(param_2 + 0x198);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 0x198);
    }
  }
  *(longlong *)(param_1 + 0x198) = lVar1;
  puVar2 = (undefined8 *)(param_2 + 0x1a0);
  puVar3 = (undefined8 *)(param_1 + 0x1a0);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)(param_1 + 0x200) = *(undefined2 *)(param_2 + 0x200);
  FUN_146ecd102(param_1 + 0x208,param_2 + 0x208);
  FUN_1497129cc(param_1 + 0x2b8,param_2 + 0x2b8);
  FUN_140c99494(param_1 + 0x2c8,param_2 + 0x2c8);
  FUN_1474af444(param_1 + 0x2d8,param_2 + 0x2d8);
  return param_1;
}



// FUNCTION 149721518 FUN_149721518 body=59 status=ok
// SIG undefined FUN_149721518(void)

undefined8 FUN_149721518(longlong *param_1)

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



// FUNCTION 1497215ba FUN_1497215ba body=74 status=ok
// SIG undefined FUN_1497215ba(void)

void FUN_1497215ba(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be2ac00;
  param_2[0x33] = 0x3f80000000000000;
  param_2[0x34] = 0xffffffff00000000;
  param_2[0x35] = 0x400000000;
  param_2[0x36] = 0x3f80000000000000;
  param_2[0x37] = 0xffffffff00000000;
  param_2[0x38] = 0x400000000;
  return;
}



// FUNCTION 149721604 FUN_149721604 body=74 status=ok
// SIG undefined FUN_149721604(void)

void FUN_149721604(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be2ac00;
  param_2[0x33] = 0x3f80000000000000;
  param_2[0x34] = 0xffffffff00000000;
  param_2[0x35] = 0x400000000;
  param_2[0x36] = 0x3f80000000000000;
  param_2[0x37] = 0xffffffff00000000;
  param_2[0x38] = 0x400000000;
  return;
}



// FUNCTION 149721672 FUN_149721672 body=104 status=ok
// SIG undefined FUN_149721672(void)

undefined1 FUN_149721672(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x19c);
    uVar2 = *(undefined4 *)(param_3 + 0x1a0);
    uVar3 = *(undefined4 *)(param_3 + 0x1a4);
    uVar4 = *(undefined4 *)(param_3 + 0x1a8);
    uVar5 = *(undefined4 *)(param_3 + 0x1ac);
    uVar6 = *(undefined4 *)(param_3 + 0x1b0);
    uVar7 = *(undefined4 *)(param_3 + 0x1b4);
    uVar8 = *(undefined4 *)(param_3 + 0x1b8);
    uVar9 = *(undefined4 *)(param_3 + 0x1bc);
    uVar10 = *(undefined4 *)(param_3 + 0x1c0);
    uVar11 = *(undefined4 *)(param_3 + 0x1c4);
    *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(param_3 + 0x198);
    *(undefined4 *)(param_2 + 0x19c) = uVar1;
    *(undefined4 *)(param_2 + 0x1a0) = uVar2;
    *(undefined4 *)(param_2 + 0x1a4) = uVar3;
    *(undefined4 *)(param_2 + 0x1a8) = uVar4;
    *(undefined4 *)(param_2 + 0x1ac) = uVar5;
    *(undefined4 *)(param_2 + 0x1b0) = uVar6;
    *(undefined4 *)(param_2 + 0x1b4) = uVar7;
    *(undefined4 *)(param_2 + 0x1b8) = uVar8;
    *(undefined4 *)(param_2 + 0x1bc) = uVar9;
    *(undefined4 *)(param_2 + 0x1c0) = uVar10;
    *(undefined4 *)(param_2 + 0x1c4) = uVar11;
    param_2 = param_2 + 0x1c8;
    param_3 = param_3 + 0x1c8;
  }
  return 1;
}



// FUNCTION 149721702 FUN_149721702 body=59 status=ok
// SIG undefined FUN_149721702(void)

undefined8 FUN_149721702(longlong *param_1)

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



// FUNCTION 14972174e FUN_14972174e body=40 status=ok
// SIG undefined FUN_14972174e(void)

void FUN_14972174e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1c8) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1c8) = 0;
  }
  return;
}



// FUNCTION 1497217c4 FUN_1497217c4 body=43 status=ok
// SIG undefined FUN_1497217c4(void)

undefined8 FUN_1497217c4(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x1c8);
  }
  return param_1;
}



// FUNCTION 1497217f0 FUN_1497217f0 body=38 status=ok
// SIG undefined FUN_1497217f0(void)

undefined8 FUN_1497217f0(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FMakeDataflowConvexDecompositionSettingsNode",1);
  return param_2;
}



// FUNCTION 149721816 FUN_149721816 body=38 status=ok
// SIG undefined FUN_149721816(void)

undefined8 FUN_149721816(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"MakeConvexDecompositionSettings",1);
  return param_2;
}



// FUNCTION 14972183c FUN_14972183c body=38 status=ok
// SIG undefined FUN_14972183c(void)

undefined8 FUN_14972183c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Utilities",1);
  return param_2;
}



// FUNCTION 149721862 FUN_149721862 body=32 status=ok
// SIG undefined FUN_149721862(void)

undefined8 FUN_149721862(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149721882 FUN_149721882 body=123 status=ok
// SIG undefined FUN_149721882(void)

void FUN_149721882(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24a40 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24a40 =
         FUN_140002ddd(FUN_14675192e,uVar1,L"MakeDataflowConvexDecompositionSettingsNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24a40,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001497218fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 1497218fe FUN_1497218fe body=93 status=ok
// SIG undefined FUN_1497218fe(void)

void FUN_1497218fe(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24a40 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24a40 =
         FUN_140002ddd(FUN_14675192e,uVar2,L"MakeDataflowConvexDecompositionSettingsNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24a40,param_1);
  return;
}



// FUNCTION 14972195c FUN_14972195c body=55 status=ok
// SIG undefined FUN_14972195c(void)

void FUN_14972195c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24a40 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24a40 =
         FUN_140002ddd(FUN_14675192e,uVar1,L"MakeDataflowConvexDecompositionSettingsNode");
  }
  return;
}



// FUNCTION 149721994 FUN_149721994 body=233 status=ok
// SIG undefined FUN_149721994(void)

ulonglong FUN_149721994(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FMakeDataflowConvexDecompositionSettingsNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149721a2e;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149721a2e;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149721a2e;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149721a2e:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 149721a80 FUN_149721a80 body=133 status=ok
// SIG undefined FUN_149721a80(void)

void FUN_149721a80(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be2aee0;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x4b] = 0;
  param_2[0x4c] = 0x8000000000;
  *(undefined1 *)(param_2 + 0x4d) = 0;
  *(undefined8 *)((longlong)param_2 + 0x26c) = 0x3f800000;
  *(undefined1 *)((longlong)param_2 + 0x274) = 1;
  param_2[0x4f] = &DAT_41200000;
  param_2[0x50] = 0x3f800000;
  param_2[0x51] = 0xffffffff;
  *(undefined4 *)(param_2 + 0x52) = 4;
  return;
}



// FUNCTION 149721b06 FUN_149721b06 body=133 status=ok
// SIG undefined FUN_149721b06(void)

void FUN_149721b06(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be2aee0;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x4b] = 0;
  param_2[0x4c] = 0x8000000000;
  *(undefined1 *)(param_2 + 0x4d) = 0;
  *(undefined8 *)((longlong)param_2 + 0x26c) = 0x3f800000;
  *(undefined1 *)((longlong)param_2 + 0x274) = 1;
  param_2[0x4f] = &DAT_41200000;
  param_2[0x50] = 0x3f800000;
  param_2[0x51] = 0xffffffff;
  *(undefined4 *)(param_2 + 0x52) = 4;
  return;
}



// FUNCTION 149721bb0 FUN_149721bb0 body=63 status=ok
// SIG undefined FUN_149721bb0(void)

undefined1 FUN_149721bb0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149721fd0(param_2,param_3);
    param_3 = param_3 + 0x298;
    param_2 = param_2 + 0x298;
  }
  return 1;
}



// FUNCTION 149721c18 FUN_149721c18 body=59 status=ok
// SIG undefined FUN_149721c18(void)

undefined8 FUN_149721c18(longlong *param_1)

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



// FUNCTION 149721c64 FUN_149721c64 body=40 status=ok
// SIG undefined FUN_149721c64(void)

void FUN_149721c64(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x298) == '\x01') {
    FUN_149721f94(param_2);
    *(undefined1 *)(param_2 + 0x298) = 0;
  }
  return;
}



// FUNCTION 149721cda FUN_149721cda body=43 status=ok
// SIG undefined FUN_149721cda(void)

undefined8 FUN_149721cda(undefined8 param_1,int param_2)

{
  FUN_149721f94();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x298);
  }
  return param_1;
}



// FUNCTION 149721d06 FUN_149721d06 body=38 status=ok
// SIG undefined FUN_149721d06(void)

undefined8 FUN_149721d06(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FCreateLeafConvexHullsDataflowNode",1);
  return param_2;
}



// FUNCTION 149721d2c FUN_149721d2c body=38 status=ok
// SIG undefined FUN_149721d2c(void)

undefined8 FUN_149721d2c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"CreateLeafConvexHulls",1);
  return param_2;
}



// FUNCTION 149721d52 FUN_149721d52 body=38 status=ok
// SIG undefined FUN_149721d52(void)

undefined8 FUN_149721d52(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Utilities",1);
  return param_2;
}



// FUNCTION 149721d78 FUN_149721d78 body=32 status=ok
// SIG undefined FUN_149721d78(void)

undefined8 FUN_149721d78(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149721d98 FUN_149721d98 body=123 status=ok
// SIG undefined FUN_149721d98(void)

void FUN_149721d98(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24a58 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24a58 = FUN_140002ddd(FUN_14675198e,uVar1,L"CreateLeafConvexHullsDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24a58,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149721e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149721e14 FUN_149721e14 body=93 status=ok
// SIG undefined FUN_149721e14(void)

void FUN_149721e14(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24a58 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24a58 = FUN_140002ddd(FUN_14675198e,uVar2,L"CreateLeafConvexHullsDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24a58,param_1);
  return;
}



// FUNCTION 149721e72 FUN_149721e72 body=55 status=ok
// SIG undefined FUN_149721e72(void)

void FUN_149721e72(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24a58 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24a58 = FUN_140002ddd(FUN_14675198e,uVar1,L"CreateLeafConvexHullsDataflowNode");
  }
  return;
}



// FUNCTION 149721eaa FUN_149721eaa body=233 status=ok
// SIG undefined FUN_149721eaa(void)

ulonglong FUN_149721eaa(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FCreateLeafConvexHullsDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149721f44;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149721f44;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149721f44;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149721f44:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 149721f94 FUN_149721f94 body=60 status=ok
// SIG undefined FUN_149721f94(void)

void FUN_149721f94(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be2aee0;
  if (param_1[0x4b] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b30a(param_1 + 0x33);
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 149721fd0 FUN_149721fd0 body=108 status=ok
// SIG undefined FUN_149721fd0(void)

longlong FUN_149721fd0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_146fc06e2();
  FUN_146ecd102(param_1 + 0x198,param_2 + 0x198);
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 0x248,param_2 + 0x248);
  }
  uVar1 = *(undefined8 *)(param_2 + 0x268);
  uVar2 = *(undefined8 *)(param_2 + 0x270);
  uVar3 = *(undefined8 *)(param_2 + 0x278);
  uVar4 = *(undefined8 *)(param_2 + 0x280);
  uVar5 = *(undefined8 *)(param_2 + 0x28c);
  *(undefined8 *)(param_1 + 0x284) = *(undefined8 *)(param_2 + 0x284);
  *(undefined8 *)(param_1 + 0x28c) = uVar5;
  *(undefined8 *)(param_1 + 0x278) = uVar3;
  *(undefined8 *)(param_1 + 0x280) = uVar4;
  *(undefined8 *)(param_1 + 0x268) = uVar1;
  *(undefined8 *)(param_1 + 0x270) = uVar2;
  return param_1;
}



// FUNCTION 14972203e FUN_14972203e body=93 status=ok
// SIG undefined FUN_14972203e(void)

void FUN_14972203e(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be2b190;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x4b] = 0;
  param_2[0x4c] = 0x8000000000;
  param_2[0x4d] = 0x4120000000000000;
  param_2[0x4e] = 0xc41200000;
  *(undefined1 *)(param_2 + 0x4f) = 0;
  return;
}



// FUNCTION 14972209c FUN_14972209c body=93 status=ok
// SIG undefined FUN_14972209c(void)

void FUN_14972209c(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be2b190;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x4b] = 0;
  param_2[0x4c] = 0x8000000000;
  param_2[0x4d] = 0x4120000000000000;
  param_2[0x4e] = 0xc41200000;
  *(undefined1 *)(param_2 + 0x4f) = 0;
  return;
}



// FUNCTION 14972211e FUN_14972211e body=63 status=ok
// SIG undefined FUN_14972211e(void)

undefined1 FUN_14972211e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14972253e(param_2,param_3);
    param_3 = param_3 + 0x280;
    param_2 = param_2 + 0x280;
  }
  return 1;
}



// FUNCTION 149722186 FUN_149722186 body=59 status=ok
// SIG undefined FUN_149722186(void)

undefined8 FUN_149722186(longlong *param_1)

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



// FUNCTION 1497221d2 FUN_1497221d2 body=40 status=ok
// SIG undefined FUN_1497221d2(void)

void FUN_1497221d2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x280) == '\x01') {
    FUN_149722502(param_2);
    *(undefined1 *)(param_2 + 0x280) = 0;
  }
  return;
}



// FUNCTION 149722248 FUN_149722248 body=43 status=ok
// SIG undefined FUN_149722248(void)

undefined8 FUN_149722248(undefined8 param_1,int param_2)

{
  FUN_149722502();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x280);
  }
  return param_1;
}



// FUNCTION 149722274 FUN_149722274 body=38 status=ok
// SIG undefined FUN_149722274(void)

undefined8 FUN_149722274(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FSimplifyConvexHullsDataflowNode",1);
  return param_2;
}



// FUNCTION 14972229a FUN_14972229a body=38 status=ok
// SIG undefined FUN_14972229a(void)

undefined8 FUN_14972229a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"SimplifyConvexHulls",1);
  return param_2;
}



// FUNCTION 1497222c0 FUN_1497222c0 body=38 status=ok
// SIG undefined FUN_1497222c0(void)

undefined8 FUN_1497222c0(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Utilities",1);
  return param_2;
}



// FUNCTION 1497222e6 FUN_1497222e6 body=32 status=ok
// SIG undefined FUN_1497222e6(void)

undefined8 FUN_1497222e6(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149722306 FUN_149722306 body=123 status=ok
// SIG undefined FUN_149722306(void)

void FUN_149722306(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24a70 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24a70 = FUN_140002ddd(FUN_1467519ee,uVar1,L"SimplifyConvexHullsDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24a70,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014972237e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149722382 FUN_149722382 body=93 status=ok
// SIG undefined FUN_149722382(void)

void FUN_149722382(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24a70 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24a70 = FUN_140002ddd(FUN_1467519ee,uVar2,L"SimplifyConvexHullsDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24a70,param_1);
  return;
}



// FUNCTION 1497223e0 FUN_1497223e0 body=55 status=ok
// SIG undefined FUN_1497223e0(void)

void FUN_1497223e0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24a70 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24a70 = FUN_140002ddd(FUN_1467519ee,uVar1,L"SimplifyConvexHullsDataflowNode");
  }
  return;
}



// FUNCTION 149722418 FUN_149722418 body=233 status=ok
// SIG undefined FUN_149722418(void)

ulonglong FUN_149722418(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FSimplifyConvexHullsDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_1497224b2;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_1497224b2;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_1497224b2;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_1497224b2:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 149722502 FUN_149722502 body=60 status=ok
// SIG undefined FUN_149722502(void)

void FUN_149722502(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be2b190;
  if (param_1[0x4b] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b30a(param_1 + 0x33);
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 14972253e FUN_14972253e body=92 status=ok
// SIG undefined FUN_14972253e(void)

longlong FUN_14972253e(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_146fc06e2();
  FUN_146ecd102(param_1 + 0x198,param_2 + 0x198);
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 0x248,param_2 + 0x248);
  }
  *(undefined1 *)(param_1 + 0x278) = *(undefined1 *)(param_2 + 0x278);
  uVar1 = *(undefined8 *)(param_2 + 0x270);
  *(undefined8 *)(param_1 + 0x268) = *(undefined8 *)(param_2 + 0x268);
  *(undefined8 *)(param_1 + 0x270) = uVar1;
  return param_1;
}



// FUNCTION 14972259c FUN_14972259c body=85 status=ok
// SIG undefined FUN_14972259c(void)

void FUN_14972259c(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be2b430;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x49] = 0x412000003f000000;
  *(undefined1 *)(param_2 + 0x4a) = 1;
  *(undefined8 *)((longlong)param_2 + 0x254) = 0x3e99999a00000000;
  return;
}



// FUNCTION 1497225f2 FUN_1497225f2 body=85 status=ok
// SIG undefined FUN_1497225f2(void)

void FUN_1497225f2(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be2b430;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x49] = 0x412000003f000000;
  *(undefined1 *)(param_2 + 0x4a) = 1;
  *(undefined8 *)((longlong)param_2 + 0x254) = 0x3e99999a00000000;
  return;
}



// FUNCTION 14972266c FUN_14972266c body=111 status=ok
// SIG undefined FUN_14972266c(void)

undefined8 FUN_14972266c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    FUN_146ecd102(param_2 + 0x198,param_3 + 0x198);
    uVar1 = *(undefined4 *)(param_3 + 0x24c);
    uVar2 = *(undefined4 *)(param_3 + 0x250);
    uVar3 = *(undefined4 *)(param_3 + 0x254);
    *(undefined4 *)(param_2 + 0x248) = *(undefined4 *)(param_3 + 0x248);
    *(undefined4 *)(param_2 + 0x24c) = uVar1;
    *(undefined4 *)(param_2 + 0x250) = uVar2;
    *(undefined4 *)(param_2 + 0x254) = uVar3;
    *(undefined4 *)(param_2 + 600) = *(undefined4 *)(param_3 + 600);
    param_2 = param_2 + 0x260;
    param_3 = param_3 + 0x260;
  }
  return 1;
}



// FUNCTION 149722704 FUN_149722704 body=59 status=ok
// SIG undefined FUN_149722704(void)

undefined8 FUN_149722704(longlong *param_1)

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



// FUNCTION 149722750 FUN_149722750 body=62 status=ok
// SIG undefined FUN_149722750(void)

void FUN_149722750(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x4c) == '\x01') {
    *param_2 = &PTR_FUN_14be2b430;
    FUN_14054b30a(param_2 + 0x33);
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x4c) = 0;
  }
  return;
}



// FUNCTION 1497227dc FUN_1497227dc body=68 status=ok
// SIG undefined FUN_1497227dc(void)

undefined8 * FUN_1497227dc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be2b430;
  FUN_14054b30a(param_1 + 0x33);
  FUN_146fc8eba(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x260);
  }
  return param_1;
}



// FUNCTION 149722820 FUN_149722820 body=38 status=ok
// SIG undefined FUN_149722820(void)

undefined8 FUN_149722820(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FCreateNonOverlappingConvexHullsDataflowNode",1);
  return param_2;
}



// FUNCTION 149722846 FUN_149722846 body=38 status=ok
// SIG undefined FUN_149722846(void)

undefined8 FUN_149722846(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"CreateNonOverlappingConvexHulls",1);
  return param_2;
}



// FUNCTION 14972286c FUN_14972286c body=38 status=ok
// SIG undefined FUN_14972286c(void)

undefined8 FUN_14972286c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Utilities",1);
  return param_2;
}



// FUNCTION 149722892 FUN_149722892 body=32 status=ok
// SIG undefined FUN_149722892(void)

undefined8 FUN_149722892(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 1497228b2 FUN_1497228b2 body=123 status=ok
// SIG undefined FUN_1497228b2(void)

void FUN_1497228b2(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24a88 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24a88 =
         FUN_140002ddd(FUN_146751a4e,uVar1,L"CreateNonOverlappingConvexHullsDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24a88,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014972292a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14972292e FUN_14972292e body=93 status=ok
// SIG undefined FUN_14972292e(void)

void FUN_14972292e(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24a88 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24a88 =
         FUN_140002ddd(FUN_146751a4e,uVar2,L"CreateNonOverlappingConvexHullsDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24a88,param_1);
  return;
}



// FUNCTION 14972298c FUN_14972298c body=55 status=ok
// SIG undefined FUN_14972298c(void)

void FUN_14972298c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24a88 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24a88 =
         FUN_140002ddd(FUN_146751a4e,uVar1,L"CreateNonOverlappingConvexHullsDataflowNode");
  }
  return;
}



// FUNCTION 1497229c4 FUN_1497229c4 body=233 status=ok
// SIG undefined FUN_1497229c4(void)

ulonglong FUN_1497229c4(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FCreateNonOverlappingConvexHullsDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149722a5e;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149722a5e;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149722a5e;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149722a5e:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 149722ac8 FUN_149722ac8 body=47 status=ok
// SIG undefined FUN_149722ac8(void)

void FUN_149722ac8(undefined8 param_1,longlong *param_2)

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



// FUNCTION 149722b0e FUN_149722b0e body=67 status=ok
// SIG undefined FUN_149722b0e(void)

undefined1 FUN_149722b0e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1405b70a4(param_2,param_3);
    FUN_1408fdf38(param_2 + 0x10,param_3 + 0x10);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}


