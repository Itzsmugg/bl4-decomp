// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148b80e66 FUN_148b80e66 body=76 status=ok
// SIG undefined FUN_148b80e66(void)

void FUN_148b80e66(undefined8 param_1,undefined8 *param_2)

{
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14b5c6bd0;
  param_2[2] = 0;
  param_2[3] = 0;
  FUN_141028572(param_2 + 4);
  *(undefined2 *)((longlong)param_2 + 0x2c) = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  return;
}



// FUNCTION 148b80eb2 FUN_148b80eb2 body=68 status=ok
// SIG undefined FUN_148b80eb2(void)

void FUN_148b80eb2(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14b5c6bd0;
  param_2[2] = 0;
  param_2[3] = 0;
  FUN_141028572(param_2 + 4);
  *(undefined2 *)((longlong)param_2 + 0x2c) = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  return;
}



// FUNCTION 148b80f1a FUN_148b80f1a body=54 status=ok
// SIG undefined FUN_148b80f1a(void)

undefined1 FUN_148b80f1a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b81104(param_2,param_3);
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return 1;
}



// FUNCTION 148b80f78 FUN_148b80f78 body=59 status=ok
// SIG undefined FUN_148b80f78(void)

undefined8 FUN_148b80f78(longlong *param_1)

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



// FUNCTION 148b80fbe FUN_148b80fbe body=34 status=ok
// SIG undefined FUN_148b80fbe(void)

void FUN_148b80fbe(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_148b8108c(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 148b8102e FUN_148b8102e body=38 status=ok
// SIG undefined FUN_148b8102e(void)

undefined8 FUN_148b8102e(undefined8 param_1,int param_2)

{
  FUN_148b8108c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b81054 FUN_148b81054 body=55 status=ok
// SIG undefined FUN_148b81054(void)

void FUN_148b81054(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9f510 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9f510 = FUN_140002ddd(FUN_1465a3e81,uVar1,L"BorgWeaponAugment_ElementalLeech");
  }
  return;
}



// FUNCTION 148b8108c FUN_148b8108c body=119 status=ok
// SIG undefined FUN_148b8108c(void)

void FUN_148b8108c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b5c6bd0;
  plVar3 = (longlong *)param_1[7];
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
  FUN_1449e6b18(param_1 + 4);
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
                    /* WARNING: Could not recover jumptable at 0x000148b810f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148b81104 FUN_148b81104 body=179 status=ok
// SIG undefined FUN_148b81104(void)

longlong FUN_148b81104(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  lVar4 = *(longlong *)(param_2 + 0x18);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  *(longlong *)(param_1 + 0x18) = lVar4;
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
  FUN_14117bcd8(param_1 + 0x20,param_2 + 0x20);
  *(undefined2 *)(param_1 + 0x2c) = *(undefined2 *)(param_2 + 0x2c);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  lVar4 = *(longlong *)(param_2 + 0x38);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  *(longlong *)(param_1 + 0x38) = lVar4;
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



// FUNCTION 148b81214 FUN_148b81214 body=70 status=ok
// SIG undefined FUN_148b81214(void)

undefined8 FUN_148b81214(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_1401f3db8(param_2,param_3);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148b81282 FUN_148b81282 body=59 status=ok
// SIG undefined FUN_148b81282(void)

undefined8 FUN_148b81282(longlong *param_1)

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



// FUNCTION 148b812c8 FUN_148b812c8 body=34 status=ok
// SIG undefined FUN_148b812c8(void)

void FUN_148b812c8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_148b81396(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 148b81338 FUN_148b81338 body=38 status=ok
// SIG undefined FUN_148b81338(void)

undefined8 FUN_148b81338(undefined8 param_1,int param_2)

{
  FUN_148b81396();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b8135e FUN_148b8135e body=55 status=ok
// SIG undefined FUN_148b8135e(void)

void FUN_148b8135e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9f528 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9f528 = FUN_140002ddd(FUN_1465a3f17,uVar1,L"BorgWeaponAugmentDef_InventoryAugment");
  }
  return;
}



// FUNCTION 148b81396 FUN_148b81396 body=66 status=ok
// SIG undefined FUN_148b81396(void)

void FUN_148b81396(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b5c6d70;
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
                    /* WARNING: Could not recover jumptable at 0x000148b813cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148b81462 FUN_148b81462 body=59 status=ok
// SIG undefined FUN_148b81462(void)

undefined8 FUN_148b81462(longlong *param_1)

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



// FUNCTION 148b814a8 FUN_148b814a8 body=34 status=ok
// SIG undefined FUN_148b814a8(void)

void FUN_148b814a8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_148b81576(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 148b81518 FUN_148b81518 body=38 status=ok
// SIG undefined FUN_148b81518(void)

undefined8 FUN_148b81518(undefined8 param_1,int param_2)

{
  FUN_148b81576();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b8153e FUN_148b8153e body=55 status=ok
// SIG undefined FUN_148b8153e(void)

void FUN_148b8153e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9f540 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9f540 = FUN_140002ddd(FUN_1465a3fad,uVar1,L"BorgWeaponAugment_InventoryAugment");
  }
  return;
}



// FUNCTION 148b81576 FUN_148b81576 body=88 status=ok
// SIG undefined FUN_148b81576(void)

void FUN_148b81576(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14b5c6f00;
  puVar3 = (undefined8 *)param_1[4];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  plVar4 = (longlong *)param_1[3];
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
                    /* WARNING: Could not recover jumptable at 0x000148b815c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148b815d0 FUN_148b815d0 body=113 status=ok
// SIG undefined FUN_148b815d0(void)

void FUN_148b815d0(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0xb0);
  *param_2 = &PTR_FUN_14b5c70a0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *(undefined4 *)(param_2 + 7) = 0xf00000d0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 0x13) = 0xf00000d0;
  *(undefined4 *)(param_2 + 0x15) = 0x3f800000;
  *(undefined4 *)(param_2 + 0x16) = 0x3f800000;
  return;
}



// FUNCTION 148b816ca FUN_148b816ca body=146 status=ok
// SIG undefined FUN_148b816ca(void)

undefined8 FUN_148b816ca(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_2 + lVar1 + 8) = *(undefined8 *)(param_3 + lVar1 + 8);
      FUN_14117b026();
      FUN_1401f3db8(param_2 + lVar1 + 0x48,param_3 + lVar1 + 0x48);
      FUN_140d02432(param_2 + lVar1 + 0x60,param_3 + lVar1 + 0x60);
      *(undefined4 *)(param_2 + lVar1 + 0xb0) = *(undefined4 *)(param_3 + lVar1 + 0xb0);
      lVar1 = lVar1 + 0xb8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148b81784 FUN_148b81784 body=59 status=ok
// SIG undefined FUN_148b81784(void)

undefined8 FUN_148b81784(longlong *param_1)

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



// FUNCTION 148b817d0 FUN_148b817d0 body=40 status=ok
// SIG undefined FUN_148b817d0(void)

void FUN_148b817d0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb8) == '\x01') {
    FUN_148b818a4(param_2);
    *(undefined1 *)(param_2 + 0xb8) = 0;
  }
  return;
}



// FUNCTION 148b81846 FUN_148b81846 body=38 status=ok
// SIG undefined FUN_148b81846(void)

undefined8 FUN_148b81846(undefined8 param_1,int param_2)

{
  FUN_148b818a4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b8186c FUN_148b8186c body=55 status=ok
// SIG undefined FUN_148b8186c(void)

void FUN_148b8186c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9f558 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9f558 = FUN_140002ddd(FUN_1465a4043,uVar1,L"BorgWeaponAugmentDef_KillTracker");
  }
  return;
}



// FUNCTION 148b818a4 FUN_148b818a4 body=110 status=ok
// SIG undefined FUN_148b818a4(void)

void FUN_148b818a4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b5c70a0;
  plVar3 = (longlong *)param_1[10];
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
  plVar3 = (longlong *)param_1[4];
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
                    /* WARNING: Could not recover jumptable at 0x000148b81906. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148b8197e FUN_148b8197e body=54 status=ok
// SIG undefined FUN_148b8197e(void)

undefined1 FUN_148b8197e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b81b5e(param_2,param_3);
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return 1;
}



// FUNCTION 148b819dc FUN_148b819dc body=59 status=ok
// SIG undefined FUN_148b819dc(void)

undefined8 FUN_148b819dc(longlong *param_1)

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



// FUNCTION 148b81a22 FUN_148b81a22 body=34 status=ok
// SIG undefined FUN_148b81a22(void)

void FUN_148b81a22(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_148b81af0(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 148b81a92 FUN_148b81a92 body=38 status=ok
// SIG undefined FUN_148b81a92(void)

undefined8 FUN_148b81a92(undefined8 param_1,int param_2)

{
  FUN_148b81af0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b81ab8 FUN_148b81ab8 body=55 status=ok
// SIG undefined FUN_148b81ab8(void)

void FUN_148b81ab8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9f570 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9f570 = FUN_140002ddd(FUN_1465a40d9,uVar1,L"BorgWeaponAugment_KillTracker");
  }
  return;
}



// FUNCTION 148b81af0 FUN_148b81af0 body=110 status=ok
// SIG undefined FUN_148b81af0(void)

void FUN_148b81af0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b5c7230;
  plVar3 = (longlong *)param_1[7];
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
                    /* WARNING: Could not recover jumptable at 0x000148b81b52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148b81b5e FUN_148b81b5e body=172 status=ok
// SIG undefined FUN_148b81b5e(void)

longlong FUN_148b81b5e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  lVar4 = *(longlong *)(param_2 + 0x18);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  *(longlong *)(param_1 + 0x18) = lVar4;
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
  *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  lVar4 = *(longlong *)(param_2 + 0x38);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  *(longlong *)(param_1 + 0x38) = lVar4;
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



// FUNCTION 148b81c3e FUN_148b81c3e body=92 status=ok
// SIG undefined FUN_148b81c3e(void)

void FUN_148b81c3e(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cb9f820);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b81c9c FUN_148b81c9c body=744 status=ok
// SIG undefined FUN_148b81c9c(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_148b81c9c(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5,undefined8 param_6,undefined8 param_7,undefined4 *param_8,
                  undefined8 param_9,undefined4 param_10)

{
  undefined8 uVar1;
  undefined1 auStack_29f8 [32];
  undefined4 local_29d8 [2];
  undefined8 local_29d0;
  undefined1 local_29c8 [2264];
  longlong local_20f0;
  longlong lStack_2068;
  char local_1fd8;
  undefined4 local_1f98;
  undefined4 uStack_1f94;
  undefined4 uStack_1f90;
  undefined4 uStack_1f8c;
  undefined4 local_1f88;
  undefined4 uStack_1f84;
  undefined4 uStack_1f80;
  undefined4 uStack_1f7c;
  undefined4 local_1f78;
  undefined4 uStack_1f74;
  undefined4 uStack_1f70;
  undefined4 uStack_1f6c;
  undefined8 local_1f68;
  undefined1 local_1f58 [156];
  char cStack_1ebc;
  longlong local_1680;
  longlong local_15f8;
  char local_1568;
  undefined1 local_1528 [156];
  char local_148c;
  longlong local_c50;
  longlong local_bc8;
  char local_b38;
  undefined4 local_af8;
  undefined4 uStack_af4;
  undefined4 uStack_af0;
  undefined4 uStack_aec;
  undefined4 local_ae8;
  undefined4 uStack_ae4;
  undefined4 uStack_ae0;
  undefined4 uStack_adc;
  undefined4 local_ad8;
  undefined4 uStack_ad4;
  undefined4 uStack_ad0;
  undefined4 uStack_acc;
  undefined8 local_ac8;
  undefined1 local_ab8 [156];
  char local_a1c;
  longlong local_1e0;
  longlong local_158;
  char local_c8;
  undefined4 local_88;
  ulonglong local_70;
  undefined8 uStack_48;
  
  uStack_48 = 0x148b81cb2;
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_29f8;
  FUN_148b81f86(local_29d8);
  local_29d8[0] = param_2;
  local_29d0 = param_3;
  FUN_1447ff17a(local_29c8,param_4);
  local_1f98 = *param_5;
  uStack_1f94 = param_5[1];
  uStack_1f90 = param_5[2];
  uStack_1f8c = param_5[3];
  local_1f88 = param_5[4];
  uStack_1f84 = param_5[5];
  uStack_1f80 = param_5[6];
  uStack_1f7c = param_5[7];
  local_1f78 = param_5[8];
  uStack_1f74 = param_5[9];
  uStack_1f70 = param_5[10];
  uStack_1f6c = param_5[0xb];
  local_1f68 = *(undefined8 *)(param_5 + 0xc);
  FUN_1447ff17a(local_1f58,param_6);
  FUN_1447ff17a(local_1528,param_7);
  local_af8 = *param_8;
  uStack_af4 = param_8[1];
  uStack_af0 = param_8[2];
  uStack_aec = param_8[3];
  local_ae8 = param_8[4];
  uStack_ae4 = param_8[5];
  uStack_ae0 = param_8[6];
  uStack_adc = param_8[7];
  local_ad8 = param_8[8];
  uStack_ad4 = param_8[9];
  uStack_ad0 = param_8[10];
  uStack_acc = param_8[0xb];
  local_ac8 = *(undefined8 *)(param_8 + 0xc);
  FUN_1447ff17a(local_ab8,param_9);
  local_88 = param_10;
  uVar1 = FUN_14477b072(param_1,DAT_14cb9f830);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,local_29d8);
  FUN_1447ff17a(param_7,local_1528);
  *param_8 = local_af8;
  param_8[1] = uStack_af4;
  param_8[2] = uStack_af0;
  param_8[3] = uStack_aec;
  param_8[4] = local_ae8;
  param_8[5] = uStack_ae4;
  param_8[6] = uStack_ae0;
  param_8[7] = uStack_adc;
  param_8[8] = local_ad8;
  param_8[9] = uStack_ad4;
  param_8[10] = uStack_ad0;
  param_8[0xb] = uStack_acc;
  *(undefined8 *)(param_8 + 0xc) = local_ac8;
  FUN_1447ff17a(param_9,local_ab8);
  if (local_c8 == '\x01') {
    local_c8 = '\0';
  }
  if (local_158 != 0) {
    FUN_1400020a8();
  }
  if (local_1e0 != 0) {
    FUN_1400020a8();
  }
  if (local_a1c == '\x01') {
    local_a1c = '\0';
  }
  if (local_b38 == '\x01') {
    local_b38 = '\0';
  }
  if (local_bc8 != 0) {
    FUN_1400020a8();
  }
  if (local_c50 != 0) {
    FUN_1400020a8();
  }
  if (local_148c == '\x01') {
    local_148c = '\0';
  }
  if (local_1568 == '\x01') {
    local_1568 = '\0';
  }
  if (local_15f8 != 0) {
    FUN_1400020a8();
  }
  if (local_1680 != 0) {
    FUN_1400020a8();
  }
  if (cStack_1ebc == '\x01') {
    cStack_1ebc = '\0';
  }
  if (local_1fd8 == '\x01') {
    local_1fd8 = '\0';
  }
  if (lStack_2068 != 0) {
    FUN_1400020a8();
  }
  if (local_20f0 != 0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_29f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b81f86 FUN_148b81f86 body=136 status=ok
// SIG undefined FUN_148b81f86(void)

longlong FUN_148b81f86(longlong param_1)

{
  FUN_1400e6e60(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0xa40) = 0;
  *(undefined8 *)(param_1 + 0xa48) = 0;
  *(undefined8 *)(param_1 + 0xa50) = 0;
  *(undefined8 *)(param_1 + 0xa58) = 0;
  *(undefined8 *)(param_1 + 0xa60) = 0;
  *(undefined8 *)(param_1 + 0xa68) = 0;
  *(undefined4 *)(param_1 + 0xa70) = 0x42b40000;
  FUN_1400e6e60(param_1 + 0xa80);
  FUN_1400e6e60(param_1 + 0x14b0);
  *(undefined8 *)(param_1 + 0x1ee0) = 0;
  *(undefined8 *)(param_1 + 0x1ee8) = 0;
  *(undefined8 *)(param_1 + 0x1ef0) = 0;
  *(undefined8 *)(param_1 + 0x1ef8) = 0;
  *(undefined8 *)(param_1 + 0x1f00) = 0;
  *(undefined8 *)(param_1 + 0x1f08) = 0;
  *(undefined4 *)(param_1 + 0x1f10) = 0x42b40000;
  FUN_1400e6e60(param_1 + 0x1f20);
  return param_1;
}



// FUNCTION 148b8200e FUN_148b8200e body=824 status=ok
// SIG undefined FUN_148b8200e(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_148b8200e(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5,undefined8 param_6,undefined8 param_7,undefined4 *param_8,
                  undefined8 param_9,undefined4 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_2a08 [40];
  undefined8 local_29e0;
  undefined4 local_29d8 [2];
  undefined8 local_29d0;
  undefined1 local_29c8 [2264];
  longlong local_20f0;
  longlong local_2068;
  char local_1fd8;
  undefined4 local_1f98;
  undefined4 uStack_1f94;
  undefined4 uStack_1f90;
  undefined4 uStack_1f8c;
  undefined4 local_1f88;
  undefined4 uStack_1f84;
  undefined4 uStack_1f80;
  undefined4 uStack_1f7c;
  undefined4 local_1f78;
  undefined4 uStack_1f74;
  undefined4 uStack_1f70;
  undefined4 uStack_1f6c;
  undefined8 local_1f68;
  undefined1 local_1f58 [156];
  char local_1ebc;
  longlong local_1680;
  longlong local_15f8;
  char local_1568;
  undefined1 local_1528 [156];
  char local_148c;
  longlong local_c50;
  longlong local_bc8;
  char local_b38;
  undefined4 local_af8;
  undefined4 uStack_af4;
  undefined4 uStack_af0;
  undefined4 uStack_aec;
  undefined4 local_ae8;
  undefined4 uStack_ae4;
  undefined4 uStack_ae0;
  undefined4 uStack_adc;
  undefined4 local_ad8;
  undefined4 uStack_ad4;
  undefined4 uStack_ad0;
  undefined4 uStack_acc;
  undefined8 local_ac8;
  undefined1 local_ab8 [156];
  char local_a1c;
  longlong local_1e0;
  longlong local_158;
  char local_c8;
  undefined4 local_88;
  ulonglong local_70;
  undefined8 uStack_48;
  
  uStack_48 = 0x148b82024;
  local_29e0 = param_9;
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_2a08;
  uVar2 = FUN_14477b072(param_1,DAT_14cb9f840);
  lVar3 = FUN_14570ab3e(uVar2);
  if ((*(byte *)(lVar3 + 0xd4) & 0x80) == 0) {
    FUN_148b8236e(local_29d8);
    local_29d8[0] = param_2;
    local_29d0 = param_3;
    FUN_1447ff17a(local_29c8,param_4);
    local_1f98 = *param_5;
    uStack_1f94 = param_5[1];
    uStack_1f90 = param_5[2];
    uStack_1f8c = param_5[3];
    local_1f88 = param_5[4];
    uStack_1f84 = param_5[5];
    uStack_1f80 = param_5[6];
    uStack_1f7c = param_5[7];
    local_1f78 = param_5[8];
    uStack_1f74 = param_5[9];
    uStack_1f70 = param_5[10];
    uStack_1f6c = param_5[0xb];
    local_1f68 = *(undefined8 *)(param_5 + 0xc);
    FUN_1447ff17a(local_1f58,param_6);
    FUN_1447ff17a(local_1528,param_7);
    uVar1 = local_29e0;
    local_af8 = *param_8;
    uStack_af4 = param_8[1];
    uStack_af0 = param_8[2];
    uStack_aec = param_8[3];
    local_ae8 = param_8[4];
    uStack_ae4 = param_8[5];
    uStack_ae0 = param_8[6];
    uStack_adc = param_8[7];
    local_ad8 = param_8[8];
    uStack_ad4 = param_8[9];
    uStack_ad0 = param_8[10];
    uStack_acc = param_8[0xb];
    local_ac8 = *(undefined8 *)(param_8 + 0xc);
    FUN_1447ff17a(local_ab8,local_29e0);
    local_88 = param_10;
    (**(code **)(*param_1 + 0x248))(param_1,uVar2,local_29d8);
    FUN_1447ff17a(param_7,local_1528);
    *param_8 = local_af8;
    param_8[1] = uStack_af4;
    param_8[2] = uStack_af0;
    param_8[3] = uStack_aec;
    param_8[4] = local_ae8;
    param_8[5] = uStack_ae4;
    param_8[6] = uStack_ae0;
    param_8[7] = uStack_adc;
    param_8[8] = local_ad8;
    param_8[9] = uStack_ad4;
    param_8[10] = uStack_ad0;
    param_8[0xb] = uStack_acc;
    *(undefined8 *)(param_8 + 0xc) = local_ac8;
    FUN_1447ff17a(uVar1,local_ab8);
    if (local_c8 == '\x01') {
      local_c8 = '\0';
    }
    if (local_158 != 0) {
      FUN_1400020a8();
    }
    if (local_1e0 != 0) {
      FUN_1400020a8();
    }
    if (local_a1c == '\x01') {
      local_a1c = '\0';
    }
    if (local_b38 == '\x01') {
      local_b38 = '\0';
    }
    if (local_bc8 != 0) {
      FUN_1400020a8();
    }
    if (local_c50 != 0) {
      FUN_1400020a8();
    }
    if (local_148c == '\x01') {
      local_148c = '\0';
    }
    if (local_1568 == '\x01') {
      local_1568 = '\0';
    }
    if (local_15f8 != 0) {
      FUN_1400020a8();
    }
    if (local_1680 != 0) {
      FUN_1400020a8();
    }
    if (local_1ebc == '\x01') {
      local_1ebc = '\0';
    }
    if (local_1fd8 == '\x01') {
      local_1fd8 = '\0';
    }
    if (local_2068 != 0) {
      FUN_1400020a8();
    }
    if (local_20f0 != 0) {
      FUN_1400020a8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_2a08);
  }
  if ((local_70 ^ (ulonglong)auStack_2a08) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000148b820f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x2a0))(param_1,param_2,param_3,param_4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b8236e FUN_148b8236e body=143 status=ok
// SIG undefined FUN_148b8236e(void)

longlong FUN_148b8236e(longlong param_1)

{
  FUN_1400e6e60(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0xa40) = 0;
  *(undefined8 *)(param_1 + 0xa48) = 0;
  *(undefined8 *)(param_1 + 0xa50) = 0;
  *(undefined8 *)(param_1 + 0xa58) = 0;
  *(undefined8 *)(param_1 + 0xa60) = 0;
  *(undefined8 *)(param_1 + 0xa68) = 0;
  *(undefined4 *)(param_1 + 0xa70) = 0x42b40000;
  FUN_1400e6e60(param_1 + 0xa80);
  FUN_1400e6e60(param_1 + 0x14b0);
  *(undefined8 *)(param_1 + 0x1ee0) = 0;
  *(undefined8 *)(param_1 + 0x1ee8) = 0;
  *(undefined8 *)(param_1 + 0x1ef0) = 0;
  *(undefined8 *)(param_1 + 0x1ef8) = 0;
  *(undefined8 *)(param_1 + 0x1f00) = 0;
  *(undefined8 *)(param_1 + 0x1f08) = 0;
  *(undefined4 *)(param_1 + 0x1f10) = 0x42b40000;
  FUN_1400e6e60(param_1 + 0x1f20);
  *(undefined1 *)(param_1 + 0x2954) = 0;
  return param_1;
}



// FUNCTION 148b82406 FUN_148b82406 body=1326 status=ok
// SIG undefined FUN_148b82406(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_148b82406(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 auStack_2a08 [32];
  undefined8 *local_29e8;
  undefined1 *local_29e0;
  undefined1 *local_29d8;
  undefined8 *local_29d0;
  undefined1 *local_29c8;
  undefined4 local_29c0;
  longlong *local_29b0;
  undefined1 *local_29a8;
  undefined4 local_299c;
  undefined8 local_2998;
  undefined8 uStack_2990;
  undefined8 local_2988;
  undefined8 uStack_2980;
  undefined8 local_2978;
  undefined8 uStack_2970;
  undefined4 local_2968;
  undefined8 local_2958;
  undefined8 uStack_2950;
  undefined8 local_2948;
  undefined8 uStack_2940;
  undefined8 local_2938;
  undefined8 uStack_2930;
  undefined4 local_2928;
  undefined8 local_2918;
  undefined4 local_290c;
  undefined1 local_2908 [2264];
  longlong local_2030;
  longlong local_1fa8;
  char local_1f18;
  undefined1 local_1ed8 [2264];
  longlong local_1600;
  longlong local_1578;
  char local_14e8;
  undefined1 local_14a8 [2264];
  longlong local_bd0;
  longlong local_b48;
  char local_ab8;
  undefined1 local_a78 [2264];
  longlong local_1a0;
  longlong local_118;
  char local_88;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2a08;
  local_290c = 0;
  local_29b0 = param_1;
  local_29a8 = param_3;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_290c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_290c);
  }
  local_2918 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2918);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2918);
  }
  FUN_1400e6e60(local_a78);
  puVar1 = (undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_a78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_a78);
  }
  puVar7 = local_a78;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar7 = *(undefined1 **)(param_2 + 0x38);
  }
  local_2938 = 0;
  uStack_2930 = 0;
  local_2948 = 0;
  uStack_2940 = 0;
  local_2958 = 0;
  uStack_2950 = 0;
  local_2928 = 0x42b40000;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2958);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2958);
  }
  puVar3 = &local_2958;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  FUN_1400e6e60(local_14a8);
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_14a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_14a8);
  }
  puVar8 = local_14a8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar8 = *(undefined1 **)(param_2 + 0x38);
  }
  FUN_1400e6e60(local_1ed8);
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_1ed8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_1ed8);
  }
  puVar5 = local_1ed8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  local_2978 = 0;
  uStack_2970 = 0;
  local_2988 = 0;
  uStack_2980 = 0;
  local_2998 = 0;
  uStack_2990 = 0;
  local_2968 = 0x42b40000;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2998);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2998);
  }
  puVar4 = &local_2998;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  FUN_1400e6e60(local_2908);
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_2908);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_2908);
  }
  puVar6 = local_2908;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  local_299c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_299c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_299c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_29c0 = local_299c;
  local_29e8 = puVar3;
  local_29e0 = puVar8;
  local_29d8 = puVar5;
  local_29d0 = puVar4;
  local_29c8 = puVar6;
  uVar2 = (**(code **)(*local_29b0 + 0x2a0))(local_29b0,local_290c,local_2918,puVar7);
  *local_29a8 = uVar2;
  if (local_1f18 == '\x01') {
    local_1f18 = '\0';
  }
  if (local_1fa8 != 0) {
    FUN_1400020a8();
  }
  if (local_2030 != 0) {
    FUN_1400020a8();
  }
  if (local_14e8 == '\x01') {
    local_14e8 = '\0';
  }
  if (local_1578 != 0) {
    FUN_1400020a8();
  }
  if (local_1600 != 0) {
    FUN_1400020a8();
  }
  if (local_ab8 == '\x01') {
    local_ab8 = '\0';
  }
  if (local_b48 != 0) {
    FUN_1400020a8();
  }
  if (local_bd0 != 0) {
    FUN_1400020a8();
  }
  if (local_88 == '\x01') {
    local_88 = '\0';
  }
  if (local_118 != 0) {
    FUN_1400020a8();
  }
  if (local_1a0 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_2a08) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b82936 FUN_148b82936 body=395 status=ok
// SIG undefined FUN_148b82936(void)

void FUN_148b82936(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined1 param_6,undefined4 *param_7,undefined4 *param_8)

{
  undefined8 uVar1;
  undefined1 auStack_af8 [32];
  undefined8 local_ad8;
  undefined8 local_ad0;
  undefined1 local_ac8 [2264];
  longlong local_1f0;
  longlong local_168;
  char local_d8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_af8;
  local_ad0 = 0;
  FUN_1400e6e60(local_ac8);
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = CONCAT44(local_68._4_4_,0x42b40000);
  local_ad8 = param_2;
  local_ad0 = param_3;
  FUN_1447ff17a(local_ac8,param_4);
  local_98 = *param_5;
  uStack_90 = param_5[1];
  local_88 = param_5[2];
  uStack_80 = param_5[3];
  local_78 = param_5[4];
  uStack_70 = param_5[5];
  local_68 = param_5[6];
  local_60 = param_6;
  local_5c = *param_7;
  local_58 = *param_8;
  uVar1 = FUN_14477b072(param_1,DAT_14cb9f850);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_ad8);
  *param_8 = local_58;
  if (local_d8 == '\x01') {
    local_d8 = '\0';
  }
  if (local_168 != 0) {
    FUN_1400020a8();
  }
  if (local_1f0 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_af8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b82b32 FUN_148b82b32 body=66 status=ok
// SIG undefined FUN_148b82b32(void)

void FUN_148b82b32(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



// FUNCTION 148b82b9a FUN_148b82b9a body=48 status=ok
// SIG undefined FUN_148b82b9a(void)

longlong FUN_148b82b9a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_140db00bc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b82bd2 FUN_148b82bd2 body=48 status=ok
// SIG undefined FUN_148b82bd2(void)

longlong FUN_148b82bd2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_140db00bc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b82c0a FUN_148b82c0a body=48 status=ok
// SIG undefined FUN_148b82c0a(void)

longlong FUN_148b82c0a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_140db00bc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b82c42 FUN_148b82c42 body=48 status=ok
// SIG undefined FUN_148b82c42(void)

longlong FUN_148b82c42(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b8;
  FUN_140db00bc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b82c72 FUN_148b82c72 body=48 status=ok
// SIG undefined FUN_148b82c72(void)

longlong FUN_148b82c72(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c0;
  FUN_140db00bc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b82caa FUN_148b82caa body=48 status=ok
// SIG undefined FUN_148b82caa(void)

longlong FUN_148b82caa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x408;
  FUN_140db00bc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b82cda FUN_148b82cda body=48 status=ok
// SIG undefined FUN_148b82cda(void)

longlong FUN_148b82cda(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x410;
  FUN_140db00bc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b82d12 FUN_148b82d12 body=48 status=ok
// SIG undefined FUN_148b82d12(void)

longlong FUN_148b82d12(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x418;
  FUN_140db00bc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b82d42 FUN_148b82d42 body=48 status=ok
// SIG undefined FUN_148b82d42(void)

longlong FUN_148b82d42(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x420;
  FUN_140db00bc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b82d7a FUN_148b82d7a body=48 status=ok
// SIG undefined FUN_148b82d7a(void)

longlong FUN_148b82d7a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x428;
  FUN_140db00bc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b82dbe FUN_148b82dbe body=48 status=ok
// SIG undefined FUN_148b82dbe(void)

longlong FUN_148b82dbe(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x458;
  FUN_140db00bc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b82dee FUN_148b82dee body=48 status=ok
// SIG undefined FUN_148b82dee(void)

longlong FUN_148b82dee(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x460;
  FUN_140db00bc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b82e1e FUN_148b82e1e body=48 status=ok
// SIG undefined FUN_148b82e1e(void)

longlong FUN_148b82e1e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x468;
  FUN_140db00bc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b82e4e FUN_148b82e4e body=48 status=ok
// SIG undefined FUN_148b82e4e(void)

longlong FUN_148b82e4e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x470;
  FUN_140db00bc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b82e86 FUN_148b82e86 body=48 status=ok
// SIG undefined FUN_148b82e86(void)

longlong FUN_148b82e86(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x478;
  FUN_140db00bc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b82ebe FUN_148b82ebe body=48 status=ok
// SIG undefined FUN_148b82ebe(void)

longlong FUN_148b82ebe(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x480;
  FUN_140db00bc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b82ef6 FUN_148b82ef6 body=48 status=ok
// SIG undefined FUN_148b82ef6(void)

longlong FUN_148b82ef6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x488;
  FUN_140db00bc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b82f2e FUN_148b82f2e body=48 status=ok
// SIG undefined FUN_148b82f2e(void)

longlong FUN_148b82f2e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x490;
  FUN_140db00bc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b82f66 FUN_148b82f66 body=48 status=ok
// SIG undefined FUN_148b82f66(void)

longlong FUN_148b82f66(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x498;
  FUN_140db00bc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b82f9e FUN_148b82f9e body=48 status=ok
// SIG undefined FUN_148b82f9e(void)

longlong FUN_148b82f9e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a0;
  FUN_140db00bc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b82fd6 FUN_148b82fd6 body=48 status=ok
// SIG undefined FUN_148b82fd6(void)

longlong FUN_148b82fd6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a8;
  FUN_140db00bc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b8300e FUN_148b8300e body=48 status=ok
// SIG undefined FUN_148b8300e(void)

longlong FUN_148b8300e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4b0;
  FUN_140db00bc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b83056 FUN_148b83056 body=48 status=ok
// SIG undefined FUN_148b83056(void)

longlong FUN_148b83056(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a98;
  FUN_140db00bc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b8308e FUN_148b8308e body=48 status=ok
// SIG undefined FUN_148b8308e(void)

longlong FUN_148b8308e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1aa0;
  FUN_140db00bc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b830be FUN_148b830be body=48 status=ok
// SIG undefined FUN_148b830be(void)

longlong FUN_148b830be(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1aa8;
  FUN_140db00bc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b830f8 FUN_148b830f8 body=48 status=ok
// SIG undefined FUN_148b830f8(void)

longlong FUN_148b830f8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ab0;
  FUN_140db00bc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b83138 FUN_148b83138 body=48 status=ok
// SIG undefined FUN_148b83138(void)

longlong FUN_148b83138(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ad0;
  FUN_140db00bc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b83178 FUN_148b83178 body=48 status=ok
// SIG undefined FUN_148b83178(void)

longlong FUN_148b83178(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ad8;
  FUN_140db00bc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b831b6 FUN_148b831b6 body=48 status=ok
// SIG undefined FUN_148b831b6(void)

longlong FUN_148b831b6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ae0;
  FUN_140db00bc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b831e6 FUN_148b831e6 body=48 status=ok
// SIG undefined FUN_148b831e6(void)

longlong FUN_148b831e6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x25f8;
  FUN_140db00bc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b8321e FUN_148b8321e body=48 status=ok
// SIG undefined FUN_148b8321e(void)

longlong FUN_148b8321e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2600;
  FUN_140db00bc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b83256 FUN_148b83256 body=48 status=ok
// SIG undefined FUN_148b83256(void)

longlong FUN_148b83256(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2608;
  FUN_140db00bc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b83286 FUN_148b83286 body=45 status=ok
// SIG undefined FUN_148b83286(void)

longlong FUN_148b83286(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_14071fe68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b832b4 FUN_148b832b4 body=45 status=ok
// SIG undefined FUN_148b832b4(void)

longlong FUN_148b832b4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x50;
  thunk_FUN_14071fe68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b832e2 FUN_148b832e2 body=45 status=ok
// SIG undefined FUN_148b832e2(void)

longlong FUN_148b832e2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x58;
  thunk_FUN_14071fe68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b8337e FUN_148b8337e body=59 status=ok
// SIG undefined FUN_148b8337e(void)

undefined8 FUN_148b8337e(longlong *param_1)

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



// FUNCTION 148b834a0 FUN_148b834a0 body=59 status=ok
// SIG undefined FUN_148b834a0(void)

undefined8 FUN_148b834a0(longlong *param_1)

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



// FUNCTION 148b83542 FUN_148b83542 body=68 status=ok
// SIG undefined FUN_148b83542(void)

void FUN_148b83542(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x168);
  *(undefined4 *)((longlong)param_2 + 0x104) = 2;
  *(undefined8 *)((longlong)param_2 + 0x168) = 0;
  *(undefined8 *)((longlong)param_2 + 0x170) = 0x300000000;
  return;
}



// FUNCTION 148b835bc FUN_148b835bc body=54 status=ok
// SIG undefined FUN_148b835bc(void)

void FUN_148b835bc(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x168) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0xf8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148b83608 FUN_148b83608 body=109 status=ok
// SIG undefined FUN_148b83608(void)

undefined8 FUN_148b83608(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x108;
    param_2 = param_2 + 0x108;
    do {
      *(undefined1 *)(param_2 + -0x108) = *(undefined1 *)(param_3 + -0x108);
      FUN_148b83740(param_2 + -0x100,param_3 + -0x100);
      FUN_148b837b8(param_2,param_3);
      param_3 = param_3 + 0x178;
      param_2 = param_2 + 0x178;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148b8369e FUN_148b8369e body=59 status=ok
// SIG undefined FUN_148b8369e(void)

undefined8 FUN_148b8369e(longlong *param_1)

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



// FUNCTION 148b83740 FUN_148b83740 body=119 status=ok
// SIG undefined FUN_148b83740(void)

void * FUN_148b83740(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = *(void **)((longlong)param_2 + 0xf0);
    if (*(void **)((longlong)param_2 + 0xf0) == (void *)0x0) {
      _Src = param_2;
    }
    iVar1 = *(int *)((longlong)param_2 + 0xf8);
    *(int *)((longlong)param_1 + 0xf8) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xfc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xfc) = 2;
    }
    else {
      FUN_148b83820(param_1,iVar1);
      if (iVar1 != 0) {
        _Dst = *(void **)((longlong)param_1 + 0xf0);
        if (*(void **)((longlong)param_1 + 0xf0) == (void *)0x0) {
          _Dst = param_1;
        }
        memcpy(_Dst,_Src,(longlong)iVar1 * 0x78);
      }
    }
  }
  return param_1;
}



// FUNCTION 148b837b8 FUN_148b837b8 body=104 status=ok
// SIG undefined FUN_148b837b8(void)

void * FUN_148b837b8(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = *(void **)((longlong)param_2 + 0x60);
    if (*(void **)((longlong)param_2 + 0x60) == (void *)0x0) {
      _Src = param_2;
    }
    iVar1 = *(int *)((longlong)param_2 + 0x68);
    *(int *)((longlong)param_1 + 0x68) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x6c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x6c) = 3;
    }
    else {
      FUN_148b83928(param_1,iVar1);
      if (iVar1 != 0) {
        _Dst = *(void **)((longlong)param_1 + 0x60);
        if (*(void **)((longlong)param_1 + 0x60) == (void *)0x0) {
          _Dst = param_1;
        }
        memcpy(_Dst,_Src,(longlong)iVar1 << 5);
      }
    }
  }
  return param_1;
}



// FUNCTION 148b83820 FUN_148b83820 body=117 status=ok
// SIG undefined FUN_148b83820(void)

void FUN_148b83820(longlong param_1,uint param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 2;
    if (2 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 * 0x78,0);
      iVar2 = (int)(uVar1 / 0x78);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar2) {
        iVar3 = iVar2;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_148b83896(param_1,0,iVar3,0x78);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xfc) = param_3;
  return;
}



// FUNCTION 148b83896 FUN_148b83896 body=146 status=ok
// SIG undefined FUN_148b83896(void)

void FUN_148b83896(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xf0);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x78);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xf0,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0xf0),param_1,(longlong)param_2 * 0x78);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xf0,param_2,param_3,param_4);
  return;
}



// FUNCTION 148b83928 FUN_148b83928 body=101 status=ok
// SIG undefined FUN_148b83928(void)

void FUN_148b83928(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 3;
    if (3 < param_2) {
      uVar2 = FUN_144a3809e((longlong)(int)param_2 << 5,0);
      iVar1 = (int)(uVar2 >> 5);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_148b8398e(param_1,0,iVar3,0x20);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x6c) = param_3;
  return;
}



// FUNCTION 148b8398e FUN_148b8398e body=133 status=ok
// SIG undefined FUN_148b8398e(void)

void FUN_148b8398e(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x60);
  if ((uint)param_3 < 4) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 5);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x60,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x60),param_1,(longlong)param_2 << 5);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x60,param_2,param_3,param_4);
  return;
}



// FUNCTION 148b83a14 FUN_148b83a14 body=64 status=ok
// SIG undefined FUN_148b83a14(void)

void FUN_148b83a14(longlong param_1)

{
  if (*(char *)(param_1 + 0x178) == '\x01') {
    if (*(longlong *)(param_1 + 0x168) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0xf8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x178) = 0;
  }
  return;
}



// FUNCTION 148b83ae6 FUN_148b83ae6 body=59 status=ok
// SIG undefined FUN_148b83ae6(void)

undefined8 FUN_148b83ae6(longlong *param_1)

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



// FUNCTION 148b83b8e FUN_148b83b8e body=57 status=ok
// SIG undefined FUN_148b83b8e(void)

void FUN_148b83b8e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9f5e8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9f5e8 = FUN_140002ddd(FUN_1465a48c1,uVar1,L"CameraModeBehavior_AnchorToVehicleCOM");
  }
  return;
}



// FUNCTION 148b83bd2 FUN_148b83bd2 body=98 status=ok
// SIG undefined FUN_148b83bd2(void)

void FUN_148b83bd2(undefined8 param_1,undefined8 *param_2)

{
  *(undefined4 *)((longlong)param_2 + 0xf) = 0;
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14b5d0f40;
  FUN_144894d4c(param_2 + 4);
  param_2[0x11c] = 0;
  param_2[0x11d] = 0;
  param_2[0x11e] = 0;
  param_2[0x11f] = 0;
  param_2[0x120] = 0;
  param_2[0x121] = 0;
  param_2[0x122] = 0;
  param_2[0x123] = 0;
  param_2[0x124] = 0;
  param_2[0x125] = 0;
  *(undefined4 *)((longlong)param_2 + 0x92f) = 0;
  *(undefined2 *)(param_2 + 2) = 0x101;
  return;
}



// FUNCTION 148b83c4a FUN_148b83c4a body=63 status=ok
// SIG undefined FUN_148b83c4a(void)

undefined1 FUN_148b83c4a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b83d76(param_2,param_3);
    param_3 = param_3 + 0x940;
    param_2 = param_2 + 0x940;
  }
  return 1;
}



// FUNCTION 148b83cb2 FUN_148b83cb2 body=59 status=ok
// SIG undefined FUN_148b83cb2(void)

undefined8 FUN_148b83cb2(longlong *param_1)

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



// FUNCTION 148b83cfe FUN_148b83cfe body=38 status=ok
// SIG undefined FUN_148b83cfe(void)

void FUN_148b83cfe(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x940) == '\x01') {
    FUN_148b83e26(param_2);
    *(undefined1 *)(param_2 + 0x940) = 0;
  }
  return;
}



// FUNCTION 148b83d76 FUN_148b83d76 body=165 status=ok
// SIG undefined FUN_148b83d76(void)

longlong FUN_148b83d76(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  FUN_14477b16e(param_1 + 0x20,param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x8e0) = *(undefined8 *)(param_2 + 0x8e0);
  uVar1 = *(undefined4 *)(param_2 + 0x8ec);
  uVar2 = *(undefined4 *)(param_2 + 0x8f0);
  uVar3 = *(undefined4 *)(param_2 + 0x8f4);
  *(undefined4 *)(param_1 + 0x8e8) = *(undefined4 *)(param_2 + 0x8e8);
  *(undefined4 *)(param_1 + 0x8ec) = uVar1;
  *(undefined4 *)(param_1 + 0x8f0) = uVar2;
  *(undefined4 *)(param_1 + 0x8f4) = uVar3;
  FUN_144a787a6(param_1 + 0x8f8,param_2 + 0x8f8);
  *(undefined8 *)(param_1 + 0x908) = *(undefined8 *)(param_2 + 0x908);
  uVar1 = *(undefined4 *)(param_2 + 0x914);
  uVar2 = *(undefined4 *)(param_2 + 0x918);
  uVar3 = *(undefined4 *)(param_2 + 0x91c);
  *(undefined4 *)(param_1 + 0x910) = *(undefined4 *)(param_2 + 0x910);
  *(undefined4 *)(param_1 + 0x914) = uVar1;
  *(undefined4 *)(param_1 + 0x918) = uVar2;
  *(undefined4 *)(param_1 + 0x91c) = uVar3;
  FUN_144a787a6(param_1 + 0x920,param_2 + 0x920);
  *(undefined2 *)(param_1 + 0x930) = *(undefined2 *)(param_2 + 0x930);
  *(undefined1 *)(param_1 + 0x932) = *(undefined1 *)(param_2 + 0x932);
  return param_1;
}



// FUNCTION 148b83e26 FUN_148b83e26 body=103 status=ok
// SIG undefined FUN_148b83e26(void)

void FUN_148b83e26(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b5d0f40;
  if (param_1[0x124] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x109] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148b83eac FUN_148b83eac body=63 status=ok
// SIG undefined FUN_148b83eac(void)

undefined1 FUN_148b83eac(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b83fdc(param_2,param_3);
    param_3 = param_3 + 0x758;
    param_2 = param_2 + 0x758;
  }
  return 1;
}



// FUNCTION 148b83f14 FUN_148b83f14 body=59 status=ok
// SIG undefined FUN_148b83f14(void)

undefined8 FUN_148b83f14(longlong *param_1)

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



// FUNCTION 148b83f60 FUN_148b83f60 body=38 status=ok
// SIG undefined FUN_148b83f60(void)

void FUN_148b83f60(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x758) == '\x01') {
    FUN_148b84050(param_2);
    *(undefined1 *)(param_2 + 0x758) = 0;
  }
  return;
}



// FUNCTION 148b83fdc FUN_148b83fdc body=106 status=ok
// SIG undefined FUN_148b83fdc(void)

longlong FUN_148b83fdc(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_14862acc6();
  FUN_14118f596(param_1 + 0x1e8,param_2 + 0x1e8);
  FUN_14118f596(param_1 + 0x3b0,param_2 + 0x3b0);
  FUN_14118f596(param_1 + 0x578,param_2 + 0x578);
  uVar1 = *(undefined8 *)(param_2 + 0x748);
  *(undefined8 *)(param_1 + 0x740) = *(undefined8 *)(param_2 + 0x740);
  *(undefined8 *)(param_1 + 0x748) = uVar1;
  *(undefined8 *)(param_1 + 0x750) = *(undefined8 *)(param_2 + 0x750);
  return param_1;
}



// FUNCTION 148b84050 FUN_148b84050 body=129 status=ok
// SIG undefined FUN_148b84050(void)

void FUN_148b84050(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b5d0fc0;
  FUN_14051f4c4(param_1 + 0xcf);
  FUN_14051f4c4(param_1 + 0xb3);
  FUN_14051f4c4(param_1 + 0x96);
  FUN_14051f4c4(param_1 + 0x7a);
  FUN_14051f4c4(param_1 + 0x5d);
  FUN_14051f4c4(param_1 + 0x41);
  *param_1 = &PTR_FUN_14b0159c0;
  FUN_14051f4c4(param_1 + 0x23);
  FUN_14051f4c4(param_1 + 7);
  return;
}



// FUNCTION 148b840f0 FUN_148b840f0 body=174 status=ok
// SIG undefined FUN_148b840f0(void)

undefined8 FUN_148b840f0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0xa0;
    param_2 = param_2 + 0xa0;
    do {
      *(undefined4 *)(param_2 + -0x91) = *(undefined4 *)(param_3 + -0x91);
      *(undefined8 *)(param_2 + -0x98) = *(undefined8 *)(param_3 + -0x98);
      *(undefined8 *)(param_2 + -0x88) = *(undefined8 *)(param_3 + -0x88);
      *(undefined4 *)(param_2 + -0x80) = *(undefined4 *)(param_3 + -0x80);
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      *(undefined2 *)(param_2 + -4) = *(undefined2 *)(param_3 + -4);
      FUN_14093c00e(param_2,param_3);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      uVar1 = *(undefined4 *)(param_3 + 0x1c);
      uVar2 = *(undefined4 *)(param_3 + 0x20);
      uVar3 = *(undefined4 *)(param_3 + 0x24);
      *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_3 + 0x18);
      *(undefined4 *)(param_2 + 0x1c) = uVar1;
      *(undefined4 *)(param_2 + 0x20) = uVar2;
      *(undefined4 *)(param_2 + 0x24) = uVar3;
      FUN_144a787a6(param_2 + 0x28,param_3 + 0x28);
      uVar1 = *(undefined4 *)(param_3 + 0x3c);
      uVar2 = *(undefined4 *)(param_3 + 0x40);
      uVar3 = *(undefined4 *)(param_3 + 0x44);
      *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(param_3 + 0x38);
      *(undefined4 *)(param_2 + 0x3c) = uVar1;
      *(undefined4 *)(param_2 + 0x40) = uVar2;
      *(undefined4 *)(param_2 + 0x44) = uVar3;
      param_3 = param_3 + 0xe8;
      param_2 = param_2 + 0xe8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148b841c6 FUN_148b841c6 body=59 status=ok
// SIG undefined FUN_148b841c6(void)

undefined8 FUN_148b841c6(longlong *param_1)

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



// FUNCTION 148b84212 FUN_148b84212 body=49 status=ok
// SIG undefined FUN_148b84212(void)

void FUN_148b84212(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x1d) == '\x01') {
    *param_2 = &PTR_FUN_14b5d1040;
    FUN_14051f4c4(param_2 + 5);
    *(undefined1 *)(param_2 + 0x1d) = 0;
  }
  return;
}



// FUNCTION 148b842a4 FUN_148b842a4 body=57 status=ok
// SIG undefined FUN_148b842a4(void)

void FUN_148b842a4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9f640 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9f640 = FUN_140002ddd(FUN_1465a4aa9,uVar1,L"CameraModeBehavior_FFYLPitch");
  }
  return;
}



// FUNCTION 148b842fc FUN_148b842fc body=63 status=ok
// SIG undefined FUN_148b842fc(void)

undefined1 FUN_148b842fc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b8442e(param_2,param_3);
    param_3 = param_3 + 0x1300;
    param_2 = param_2 + 0x1300;
  }
  return 1;
}



// FUNCTION 148b84364 FUN_148b84364 body=59 status=ok
// SIG undefined FUN_148b84364(void)

undefined8 FUN_148b84364(longlong *param_1)

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



// FUNCTION 148b843b0 FUN_148b843b0 body=40 status=ok
// SIG undefined FUN_148b843b0(void)

void FUN_148b843b0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1300) == '\x01') {
    FUN_14585eaa8(param_2);
    *(undefined1 *)(param_2 + 0x1300) = 0;
  }
  return;
}



// FUNCTION 148b8442e FUN_148b8442e body=245 status=ok
// SIG undefined FUN_148b8442e(void)

longlong FUN_148b8442e(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  FUN_14477b16e(param_1 + 0x20,param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x950) = *(undefined4 *)(param_2 + 0x950);
  *(undefined2 *)(param_1 + 0x954) = *(undefined2 *)(param_2 + 0x954);
  FUN_14093c00e(param_1 + 0x958,param_2 + 0x958);
  *(undefined8 *)(param_1 + 0x968) = *(undefined8 *)(param_2 + 0x968);
  uVar1 = *(undefined4 *)(param_2 + 0x974);
  uVar2 = *(undefined4 *)(param_2 + 0x978);
  uVar3 = *(undefined4 *)(param_2 + 0x97c);
  *(undefined4 *)(param_1 + 0x970) = *(undefined4 *)(param_2 + 0x970);
  *(undefined4 *)(param_1 + 0x974) = uVar1;
  *(undefined4 *)(param_1 + 0x978) = uVar2;
  *(undefined4 *)(param_1 + 0x97c) = uVar3;
  FUN_144a787a6(param_1 + 0x980,param_2 + 0x980);
  FUN_14477b16e(param_1 + 0x990,param_2 + 0x990);
  *(undefined4 *)(param_1 + 0x12c0) = *(undefined4 *)(param_2 + 0x12c0);
  *(undefined2 *)(param_1 + 0x12c4) = *(undefined2 *)(param_2 + 0x12c4);
  FUN_14093c00e(param_1 + 0x12c8,param_2 + 0x12c8);
  *(undefined8 *)(param_1 + 0x12d8) = *(undefined8 *)(param_2 + 0x12d8);
  uVar1 = *(undefined4 *)(param_2 + 0x12e4);
  uVar2 = *(undefined4 *)(param_2 + 0x12e8);
  uVar3 = *(undefined4 *)(param_2 + 0x12ec);
  *(undefined4 *)(param_1 + 0x12e0) = *(undefined4 *)(param_2 + 0x12e0);
  *(undefined4 *)(param_1 + 0x12e4) = uVar1;
  *(undefined4 *)(param_1 + 0x12e8) = uVar2;
  *(undefined4 *)(param_1 + 0x12ec) = uVar3;
  FUN_144a787a6(param_1 + 0x12f0,param_2 + 0x12f0);
  return param_1;
}



// FUNCTION 148b8452e FUN_148b8452e body=57 status=ok
// SIG undefined FUN_148b8452e(void)

void FUN_148b8452e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9f658 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9f658 = FUN_140002ddd(FUN_1465a4b3b,uVar1,L"CameraModeBehavior_FFYLPostProcess");
  }
  return;
}



// FUNCTION 148b845d4 FUN_148b845d4 body=59 status=ok
// SIG undefined FUN_148b845d4(void)

undefined8 FUN_148b845d4(longlong *param_1)

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



// FUNCTION 148b846c6 FUN_148b846c6 body=59 status=ok
// SIG undefined FUN_148b846c6(void)

undefined8 FUN_148b846c6(longlong *param_1)

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



// FUNCTION 148b84786 FUN_148b84786 body=61 status=ok
// SIG undefined FUN_148b84786(void)

undefined8 FUN_148b84786(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0x18;
    do {
      *(undefined4 *)(param_2 + -9 + lVar1) = *(undefined4 *)(param_3 + -9 + lVar1);
      *(undefined8 *)(param_2 + -0x10 + lVar1) = *(undefined8 *)(param_3 + -0x10 + lVar1);
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x60;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148b847ec FUN_148b847ec body=59 status=ok
// SIG undefined FUN_148b847ec(void)

undefined8 FUN_148b847ec(longlong *param_1)

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



// FUNCTION 148b848e4 FUN_148b848e4 body=59 status=ok
// SIG undefined FUN_148b848e4(void)

undefined8 FUN_148b848e4(longlong *param_1)

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



// FUNCTION 148b84930 FUN_148b84930 body=51 status=ok
// SIG undefined FUN_148b84930(void)

void FUN_148b84930(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1c8) == '\x01') {
    FUN_14051f4c4(param_2 + 0x100);
    FUN_14051f4c4(param_2 + 0x20);
    *(undefined1 *)(param_2 + 0x1c8) = 0;
  }
  return;
}



// FUNCTION 148b849d2 FUN_148b849d2 body=63 status=ok
// SIG undefined FUN_148b849d2(void)

undefined1 FUN_148b849d2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b84b04(param_2,param_3);
    param_3 = param_3 + 0x748;
    param_2 = param_2 + 0x748;
  }
  return 1;
}



// FUNCTION 148b84a3a FUN_148b84a3a body=59 status=ok
// SIG undefined FUN_148b84a3a(void)

undefined8 FUN_148b84a3a(longlong *param_1)

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



// FUNCTION 148b84a86 FUN_148b84a86 body=40 status=ok
// SIG undefined FUN_148b84a86(void)

void FUN_148b84a86(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x748) == '\x01') {
    FUN_145abee08(param_2);
    *(undefined1 *)(param_2 + 0x748) = 0;
  }
  return;
}



// FUNCTION 148b84b04 FUN_148b84b04 body=90 status=ok
// SIG undefined FUN_148b84b04(void)

longlong FUN_148b84b04(longlong param_1,longlong param_2)

{
  FUN_14862acc6();
  FUN_14118f596(param_1 + 0x1e8,param_2 + 0x1e8);
  FUN_14118f596(param_1 + 0x3b0,param_2 + 0x3b0);
  FUN_14118f596(param_1 + 0x578,param_2 + 0x578);
  *(undefined1 *)(param_1 + 0x740) = *(undefined1 *)(param_2 + 0x740);
  return param_1;
}



// FUNCTION 148b84b68 FUN_148b84b68 body=55 status=ok
// SIG undefined FUN_148b84b68(void)

void FUN_148b84b68(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9f6e8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9f6e8 = FUN_140002ddd(FUN_1465a4de1,uVar1,L"CameraModeBehavior_Ladder");
  }
  return;
}



// FUNCTION 148b84bbe FUN_148b84bbe body=63 status=ok
// SIG undefined FUN_148b84bbe(void)

undefined1 FUN_148b84bbe(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b84d2a(param_2,param_3);
    param_3 = param_3 + 0x360;
    param_2 = param_2 + 0x360;
  }
  return 1;
}



// FUNCTION 148b84c26 FUN_148b84c26 body=59 status=ok
// SIG undefined FUN_148b84c26(void)

undefined8 FUN_148b84c26(longlong *param_1)

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



// FUNCTION 148b84c72 FUN_148b84c72 body=40 status=ok
// SIG undefined FUN_148b84c72(void)

void FUN_148b84c72(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x360) == '\x01') {
    FUN_1458c0cd8(param_2);
    *(undefined1 *)(param_2 + 0x360) = 0;
  }
  return;
}



// FUNCTION 148b84cf0 FUN_148b84cf0 body=57 status=ok
// SIG undefined FUN_148b84cf0(void)

void FUN_148b84cf0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9f700 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9f700 = FUN_140002ddd(FUN_1465a4e73,uVar1,L"CameraModeBehavior_LimitPitchBySlope");
  }
  return;
}



// FUNCTION 148b84d2a FUN_148b84d2a body=231 status=ok
// SIG undefined FUN_148b84d2a(void)

longlong FUN_148b84d2a(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  FUN_14862acc6();
  *(undefined4 *)(param_1 + 600) = *(undefined4 *)(param_2 + 600);
  *(undefined2 *)(param_1 + 0x25c) = *(undefined2 *)(param_2 + 0x25c);
  FUN_14093c00e(param_1 + 0x260,param_2 + 0x260);
  *(undefined8 *)(param_1 + 0x270) = *(undefined8 *)(param_2 + 0x270);
  uVar1 = *(undefined4 *)(param_2 + 0x27c);
  uVar2 = *(undefined4 *)(param_2 + 0x280);
  uVar3 = *(undefined4 *)(param_2 + 0x284);
  *(undefined4 *)(param_1 + 0x278) = *(undefined4 *)(param_2 + 0x278);
  *(undefined4 *)(param_1 + 0x27c) = uVar1;
  *(undefined4 *)(param_1 + 0x280) = uVar2;
  *(undefined4 *)(param_1 + 0x284) = uVar3;
  FUN_144a787a6(param_1 + 0x288,param_2 + 0x288);
  *(undefined4 *)(param_1 + 0x308) = *(undefined4 *)(param_2 + 0x308);
  *(undefined2 *)(param_1 + 0x30c) = *(undefined2 *)(param_2 + 0x30c);
  FUN_14093c00e(param_1 + 0x310,param_2 + 0x310);
  *(undefined8 *)(param_1 + 800) = *(undefined8 *)(param_2 + 800);
  uVar1 = *(undefined4 *)(param_2 + 0x32c);
  uVar2 = *(undefined4 *)(param_2 + 0x330);
  uVar3 = *(undefined4 *)(param_2 + 0x334);
  *(undefined4 *)(param_1 + 0x328) = *(undefined4 *)(param_2 + 0x328);
  *(undefined4 *)(param_1 + 0x32c) = uVar1;
  *(undefined4 *)(param_1 + 0x330) = uVar2;
  *(undefined4 *)(param_1 + 0x334) = uVar3;
  FUN_144a787a6(param_1 + 0x338,param_2 + 0x338);
  uVar4 = *(undefined8 *)(param_2 + 0x350);
  *(undefined8 *)(param_1 + 0x348) = *(undefined8 *)(param_2 + 0x348);
  *(undefined8 *)(param_1 + 0x350) = uVar4;
  *(undefined8 *)(param_1 + 0x358) = *(undefined8 *)(param_2 + 0x358);
  return param_1;
}



// FUNCTION 148b84e3a FUN_148b84e3a body=63 status=ok
// SIG undefined FUN_148b84e3a(void)

undefined1 FUN_148b84e3a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b84f76(param_2,param_3);
    param_3 = param_3 + 0xe8;
    param_2 = param_2 + 0xe8;
  }
  return 1;
}



// FUNCTION 148b84ea2 FUN_148b84ea2 body=59 status=ok
// SIG undefined FUN_148b84ea2(void)

undefined8 FUN_148b84ea2(longlong *param_1)

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



// FUNCTION 148b84eee FUN_148b84eee body=49 status=ok
// SIG undefined FUN_148b84eee(void)

void FUN_148b84eee(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x1d) == '\x01') {
    *param_2 = &PTR_FUN_14b5d11c0;
    FUN_14051f4c4(param_2 + 6);
    *(undefined1 *)(param_2 + 0x1d) = 0;
  }
  return;
}



// FUNCTION 148b84f76 FUN_148b84f76 body=153 status=ok
// SIG undefined FUN_148b84f76(void)

longlong FUN_148b84f76(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  FUN_14150acc4(param_1 + 0x18,param_2 + 0x18);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined2 *)(param_1 + 0xa4) = *(undefined2 *)(param_2 + 0xa4);
  FUN_14093c00e(param_1 + 0xa8,param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  uVar1 = *(undefined4 *)(param_2 + 0xc4);
  uVar2 = *(undefined4 *)(param_2 + 200);
  uVar3 = *(undefined4 *)(param_2 + 0xcc);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
  *(undefined4 *)(param_1 + 0xc4) = uVar1;
  *(undefined4 *)(param_1 + 200) = uVar2;
  *(undefined4 *)(param_1 + 0xcc) = uVar3;
  FUN_144a787a6(param_1 + 0xd0,param_2 + 0xd0);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
  return param_1;
}



// FUNCTION 148b8501a FUN_148b8501a body=55 status=ok
// SIG undefined FUN_148b8501a(void)

void FUN_148b8501a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9f718 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9f718 = FUN_140002ddd(FUN_1465a4f05,uVar1,L"CameraModeBehavior_LockOn");
  }
  return;
}



// FUNCTION 148b85144 FUN_148b85144 body=61 status=ok
// SIG undefined FUN_148b85144(void)

undefined8 FUN_148b85144(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0x18;
    do {
      *(undefined4 *)(param_2 + -9 + lVar1) = *(undefined4 *)(param_3 + -9 + lVar1);
      *(undefined8 *)(param_2 + -0x10 + lVar1) = *(undefined8 *)(param_3 + -0x10 + lVar1);
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 10; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x68;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148b851aa FUN_148b851aa body=59 status=ok
// SIG undefined FUN_148b851aa(void)

undefined8 FUN_148b851aa(longlong *param_1)

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



// FUNCTION 148b85274 FUN_148b85274 body=34 status=ok
// SIG undefined FUN_148b85274(void)

undefined8 FUN_148b85274(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 148b85296 FUN_148b85296 body=55 status=ok
// SIG undefined FUN_148b85296(void)

void FUN_148b85296(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9f738 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9f738 = FUN_140002ddd(FUN_1465a4f97,uVar1,L"CameraModeBehavior_PuppetOffset");
  }
  return;
}



// FUNCTION 148b8536a FUN_148b8536a body=59 status=ok
// SIG undefined FUN_148b8536a(void)

undefined8 FUN_148b8536a(longlong *param_1)

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



// FUNCTION 148b85436 FUN_148b85436 body=54 status=ok
// SIG undefined FUN_148b85436(void)

undefined1 FUN_148b85436(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b85552(param_2,param_3);
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return 1;
}



// FUNCTION 148b85494 FUN_148b85494 body=59 status=ok
// SIG undefined FUN_148b85494(void)

undefined8 FUN_148b85494(longlong *param_1)

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



// FUNCTION 148b854da FUN_148b854da body=34 status=ok
// SIG undefined FUN_148b854da(void)

void FUN_148b854da(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_145a21e3a(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 148b85552 FUN_148b85552 body=173 status=ok
// SIG undefined FUN_148b85552(void)

longlong FUN_148b85552(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  byte bVar5;
  longlong lVar6;
  
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  lVar6 = *(longlong *)(param_2 + 0x30);
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  *(longlong *)(param_1 + 0x30) = lVar6;
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
  lVar6 = *(longlong *)(param_2 + 0x38);
  if (DAT_14c950c29 == 1) {
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar6 = *(longlong *)(param_2 + 0x38);
    }
  }
  bVar5 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x38) = lVar6;
  lVar6 = *(longlong *)(param_2 + 0x40);
  if ((bVar5 & 1) != 0) {
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar6 = *(longlong *)(param_2 + 0x40);
    }
  }
  *(longlong *)(param_1 + 0x40) = lVar6;
  return param_1;
}



// FUNCTION 148b8560a FUN_148b8560a body=55 status=ok
// SIG undefined FUN_148b8560a(void)

void FUN_148b8560a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9f768 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9f768 = FUN_140002ddd(FUN_1465a5083,uVar1,L"CameraModeBehavior_StructuredInteraction");
  }
  return;
}



// FUNCTION 148b85642 FUN_148b85642 body=50 status=ok
// SIG undefined FUN_148b85642(void)

longlong FUN_148b85642(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x18;
  FUN_145a21e3a(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 148b85674 FUN_148b85674 body=171 status=ok
// SIG undefined FUN_148b85674(void)

void FUN_148b85674(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0xe0);
  *param_2 = &PTR_FUN_14b5d2600;
  param_2[3] = 0x3e8000003f8ccccd;
  param_2[4] = 0x3ee6666640100000;
  param_2[5] = &PTR_FUN_14b00bdf8;
  *(undefined4 *)(param_2 + 0xc) = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  *(undefined8 *)((longlong)param_2 + 100) = 0xffffffff00000080;
  param_2[0xf] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  *(undefined4 *)(param_2 + 0x13) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_2 + 0x9c) = 0x404;
  param_2[6] = &DAT_14a176f00;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  *(undefined1 *)(param_2 + 0x1c) = 0;
  return;
}



// FUNCTION 148b857e0 FUN_148b857e0 body=174 status=ok
// SIG undefined FUN_148b857e0(void)

undefined8 FUN_148b857e0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0xa0;
    param_2 = param_2 + 0xa0;
    do {
      *(undefined4 *)(param_2 + -0x91) = *(undefined4 *)(param_3 + -0x91);
      *(undefined8 *)(param_2 + -0x98) = *(undefined8 *)(param_3 + -0x98);
      uVar1 = *(undefined4 *)(param_3 + -0x84);
      uVar2 = *(undefined4 *)(param_3 + -0x80);
      uVar3 = *(undefined4 *)(param_3 + -0x7c);
      *(undefined4 *)(param_2 + -0x88) = *(undefined4 *)(param_3 + -0x88);
      *(undefined4 *)(param_2 + -0x84) = uVar1;
      *(undefined4 *)(param_2 + -0x80) = uVar2;
      *(undefined4 *)(param_2 + -0x7c) = uVar3;
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      *(undefined2 *)(param_2 + -4) = *(undefined2 *)(param_3 + -4);
      FUN_14093c00e(param_2,param_3);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      uVar1 = *(undefined4 *)(param_3 + 0x1c);
      uVar2 = *(undefined4 *)(param_3 + 0x20);
      uVar3 = *(undefined4 *)(param_3 + 0x24);
      *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_3 + 0x18);
      *(undefined4 *)(param_2 + 0x1c) = uVar1;
      *(undefined4 *)(param_2 + 0x20) = uVar2;
      *(undefined4 *)(param_2 + 0x24) = uVar3;
      FUN_144a787a6(param_2 + 0x28,param_3 + 0x28);
      *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_3 + 0x38);
      *(undefined1 *)(param_2 + 0x40) = *(undefined1 *)(param_3 + 0x40);
      param_3 = param_3 + 0xe8;
      param_2 = param_2 + 0xe8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148b858b6 FUN_148b858b6 body=59 status=ok
// SIG undefined FUN_148b858b6(void)

undefined8 FUN_148b858b6(longlong *param_1)

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



// FUNCTION 148b85902 FUN_148b85902 body=49 status=ok
// SIG undefined FUN_148b85902(void)

void FUN_148b85902(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x1d) == '\x01') {
    *param_2 = &PTR_FUN_14b5d2600;
    FUN_14051f4c4(param_2 + 5);
    *(undefined1 *)(param_2 + 0x1d) = 0;
  }
  return;
}



// FUNCTION 148b859ac FUN_148b859ac body=57 status=ok
// SIG undefined FUN_148b859ac(void)

undefined8 * FUN_148b859ac(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b5d2600;
  FUN_14051f4c4(param_1 + 5);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xe8);
  }
  return param_1;
}



// FUNCTION 148b859e6 FUN_148b859e6 body=55 status=ok
// SIG undefined FUN_148b859e6(void)

void FUN_148b859e6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9f780 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9f780 = FUN_140002ddd(FUN_1465a5115,uVar1,L"CameraModeBehavior_VehicleFOV");
  }
  return;
}



// FUNCTION 148b85ac8 FUN_148b85ac8 body=59 status=ok
// SIG undefined FUN_148b85ac8(void)

undefined8 FUN_148b85ac8(longlong *param_1)

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



// FUNCTION 148b85b92 FUN_148b85b92 body=34 status=ok
// SIG undefined FUN_148b85b92(void)

undefined8 FUN_148b85b92(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 148b85bb4 FUN_148b85bb4 body=55 status=ok
// SIG undefined FUN_148b85bb4(void)

void FUN_148b85bb4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9f798 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9f798 = FUN_140002ddd(FUN_1465a51a7,uVar1,L"CameraModeBehavior_VehicleImpacts");
  }
  return;
}



// FUNCTION 148b85bf6 FUN_148b85bf6 body=75 status=ok
// SIG undefined FUN_148b85bf6(void)

void FUN_148b85bf6(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xa0);
  FUN_140e6d4da(param_2);
  *param_2 = &PTR_FUN_14b5d2700;
  param_2[0x12] = 0x3f80000041200000;
  *(undefined4 *)(param_2 + 0x13) = 0;
  return;
}



// FUNCTION 148b85c42 FUN_148b85c42 body=59 status=ok
// SIG undefined FUN_148b85c42(void)

void FUN_148b85c42(undefined8 param_1,undefined8 *param_2)

{
  FUN_140e6d4da(param_2);
  *param_2 = &PTR_FUN_14b5d2700;
  param_2[0x12] = 0x3f80000041200000;
  *(undefined4 *)(param_2 + 0x13) = 0;
  return;
}



// FUNCTION 148b85ca2 FUN_148b85ca2 body=100 status=ok
// SIG undefined FUN_148b85ca2(void)

undefined8 FUN_148b85ca2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 8;
    do {
      puVar1 = (undefined8 *)(param_3 + lVar6);
      puVar2 = (undefined8 *)(param_2 + 0x10 + lVar6);
      *(undefined4 *)((longlong)puVar2 + -9) = *(undefined4 *)((longlong)puVar1 + 7);
      puVar2[-2] = *puVar1;
      puVar4 = puVar1 + 2;
      puVar5 = puVar2;
      for (lVar3 = 0xe; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      *(undefined1 *)(puVar2 + 0xe) = *(undefined1 *)(puVar1 + 0x10);
      *(undefined4 *)(puVar2 + 0x10) = *(undefined4 *)(puVar1 + 0x12);
      puVar2[0xf] = puVar1[0x11];
      lVar6 = lVar6 + 0xa0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148b85d2e FUN_148b85d2e body=59 status=ok
// SIG undefined FUN_148b85d2e(void)

undefined8 FUN_148b85d2e(longlong *param_1)

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



// FUNCTION 148b85e04 FUN_148b85e04 body=34 status=ok
// SIG undefined FUN_148b85e04(void)

undefined8 FUN_148b85e04(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 148b85e26 FUN_148b85e26 body=55 status=ok
// SIG undefined FUN_148b85e26(void)

void FUN_148b85e26(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9f7b0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9f7b0 = FUN_140002ddd(FUN_1465a5239,uVar1,L"CameraModeBehavior_VehicleLook");
  }
  return;
}



// FUNCTION 148b85ed4 FUN_148b85ed4 body=59 status=ok
// SIG undefined FUN_148b85ed4(void)

undefined8 FUN_148b85ed4(longlong *param_1)

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



// FUNCTION 148b8601a FUN_148b8601a body=59 status=ok
// SIG undefined FUN_148b8601a(void)

undefined8 FUN_148b8601a(longlong *param_1)

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



// FUNCTION 148b860da FUN_148b860da body=91 status=ok
// SIG undefined FUN_148b860da(void)

undefined8 FUN_148b860da(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0x18;
    do {
      *(undefined4 *)(param_2 + -9 + lVar1) = *(undefined4 *)(param_3 + -9 + lVar1);
      *(undefined8 *)(param_2 + -0x10 + lVar1) = *(undefined8 *)(param_3 + -0x10 + lVar1);
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0xf0);
      lVar1 = lVar1 + 0x108;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148b8615e FUN_148b8615e body=59 status=ok
// SIG undefined FUN_148b8615e(void)

undefined8 FUN_148b8615e(longlong *param_1)

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



// FUNCTION 148b86212 FUN_148b86212 body=57 status=ok
// SIG undefined FUN_148b86212(void)

void FUN_148b86212(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9f7f8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9f7f8 = FUN_140002ddd(FUN_1465a53f3,uVar1,L"CameraModeBehavior_VehicleOffset");
  }
  return;
}



// FUNCTION 148b862e8 FUN_148b862e8 body=59 status=ok
// SIG undefined FUN_148b862e8(void)

undefined8 FUN_148b862e8(longlong *param_1)

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



// FUNCTION 148b86390 FUN_148b86390 body=57 status=ok
// SIG undefined FUN_148b86390(void)

void FUN_148b86390(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9f810 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9f810 = FUN_140002ddd(FUN_1465a5485,uVar1,L"CameraModeBehavior_VehicleWeaponClearance");
  }
  return;
}



// FUNCTION 148b86456 FUN_148b86456 body=54 status=ok
// SIG undefined FUN_148b86456(void)

undefined1 FUN_148b86456(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b865ee(param_2,param_3);
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return 1;
}



// FUNCTION 148b864b4 FUN_148b864b4 body=59 status=ok
// SIG undefined FUN_148b864b4(void)

undefined8 FUN_148b864b4(longlong *param_1)

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



// FUNCTION 148b864fa FUN_148b864fa body=48 status=ok
// SIG undefined FUN_148b864fa(void)

void FUN_148b864fa(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 8) == '\x01') {
    *param_2 = &PTR_FUN_14b5d2880;
    if (param_2[5] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 8) = 0;
  }
  return;
}



// FUNCTION 148b86578 FUN_148b86578 body=62 status=ok
// SIG undefined FUN_148b86578(void)

undefined8 * FUN_148b86578(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b5d2880;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 148b865b6 FUN_148b865b6 body=55 status=ok
// SIG undefined FUN_148b865b6(void)

void FUN_148b865b6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9f880 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9f880 = FUN_140002ddd(FUN_1465a564b,uVar1,L"CameraModeTransition_Blueprint");
  }
  return;
}



// FUNCTION 148b865ee FUN_148b865ee body=92 status=ok
// SIG undefined FUN_148b865ee(void)

longlong FUN_148b865ee(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  FUN_144a787a6(param_1 + 0x28,param_2 + 0x28);
  lVar4 = *(longlong *)(param_2 + 0x38);
  if (DAT_14c950c29 == '\x01') {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = *(longlong *)(param_2 + 0x38);
    }
  }
  *(longlong *)(param_1 + 0x38) = lVar4;
  return param_1;
}



// FUNCTION 148b86722 FUN_148b86722 body=59 status=ok
// SIG undefined FUN_148b86722(void)

undefined8 FUN_148b86722(longlong *param_1)

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



// FUNCTION 148b867c2 FUN_148b867c2 body=34 status=ok
// SIG undefined FUN_148b867c2(void)

undefined8 FUN_148b867c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 148b867e4 FUN_148b867e4 body=55 status=ok
// SIG undefined FUN_148b867e4(void)

void FUN_148b867e4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9f898 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9f898 = FUN_140002ddd(FUN_1465a56dd,uVar1,L"CameraModeTransition_CollisionOffsetTrace");
  }
  return;
}



// FUNCTION 148b868c2 FUN_148b868c2 body=59 status=ok
// SIG undefined FUN_148b868c2(void)

undefined8 FUN_148b868c2(longlong *param_1)

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



// FUNCTION 148b86962 FUN_148b86962 body=57 status=ok
// SIG undefined FUN_148b86962(void)

void FUN_148b86962(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9f8b0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9f8b0 = FUN_140002ddd(FUN_1465a5771,uVar1,L"CameraModeTransition_FOVOnly");
  }
  return;
}



// FUNCTION 148b86aa4 FUN_148b86aa4 body=59 status=ok
// SIG undefined FUN_148b86aa4(void)

undefined8 FUN_148b86aa4(longlong *param_1)

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



// FUNCTION 148b86b44 FUN_148b86b44 body=57 status=ok
// SIG undefined FUN_148b86b44(void)

void FUN_148b86b44(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9f8c8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9f8c8 = FUN_140002ddd(FUN_1465a5803,uVar1,L"CameraModeTransition_Puppet");
  }
  return;
}



// FUNCTION 148b86c92 FUN_148b86c92 body=59 status=ok
// SIG undefined FUN_148b86c92(void)

undefined8 FUN_148b86c92(longlong *param_1)

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



// FUNCTION 148b86d32 FUN_148b86d32 body=57 status=ok
// SIG undefined FUN_148b86d32(void)

void FUN_148b86d32(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9f8e0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9f8e0 = FUN_140002ddd(FUN_1465a5895,uVar1,L"CameraModeTransition_Vehicle_Enter");
  }
  return;
}



// FUNCTION 148b86e50 FUN_148b86e50 body=59 status=ok
// SIG undefined FUN_148b86e50(void)

undefined8 FUN_148b86e50(longlong *param_1)

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



// FUNCTION 148b86ef0 FUN_148b86ef0 body=57 status=ok
// SIG undefined FUN_148b86ef0(void)

void FUN_148b86ef0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9f8f8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9f8f8 = FUN_140002ddd(FUN_1465a5927,uVar1,L"CameraModeTransition_Vehicle_Exit");
  }
  return;
}



// FUNCTION 148b86fa6 FUN_148b86fa6 body=59 status=ok
// SIG undefined FUN_148b86fa6(void)

undefined8 FUN_148b86fa6(longlong *param_1)

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



// FUNCTION 148b87074 FUN_148b87074 body=91 status=ok
// SIG undefined FUN_148b87074(void)

undefined8 FUN_148b87074(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      FUN_141289ada(param_2 + -0x20,param_3 + -0x20);
      uVar1 = *(undefined8 *)(param_3 + -0xb);
      *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10);
      *(undefined8 *)(param_2 + -0xb) = uVar1;
      FUN_14185cc4c(param_2,param_3);
      param_3 = param_3 + 0x40;
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148b870f8 FUN_148b870f8 body=59 status=ok
// SIG undefined FUN_148b870f8(void)

undefined8 FUN_148b870f8(longlong *param_1)

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



// FUNCTION 148b8713e FUN_148b8713e body=43 status=ok
// SIG undefined FUN_148b8713e(void)

void FUN_148b8713e(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 8) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 8) = 0;
  }
  return;
}



// FUNCTION 148b87204 FUN_148b87204 body=59 status=ok
// SIG undefined FUN_148b87204(void)

undefined8 FUN_148b87204(longlong *param_1)

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



// FUNCTION 148b872f4 FUN_148b872f4 body=63 status=ok
// SIG undefined FUN_148b872f4(void)

undefined1 FUN_148b872f4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14862f10e(param_2,param_3);
    param_3 = param_3 + 0x228;
    param_2 = param_2 + 0x228;
  }
  return 1;
}



// FUNCTION 148b8735c FUN_148b8735c body=59 status=ok
// SIG undefined FUN_148b8735c(void)

undefined8 FUN_148b8735c(longlong *param_1)

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



// FUNCTION 148b873a8 FUN_148b873a8 body=38 status=ok
// SIG undefined FUN_148b873a8(void)

void FUN_148b873a8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x228) == '\x01') {
    FUN_140d2194c(param_2);
    *(undefined1 *)(param_2 + 0x228) = 0;
  }
  return;
}



// FUNCTION 148b87426 FUN_148b87426 body=48 status=ok
// SIG undefined FUN_148b87426(void)

void FUN_148b87426(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x220);
  FUN_1411c3dfa(param_2);
  *param_2 = &PTR_FUN_14b5d0dc0;
  return;
}



// FUNCTION 148b87456 FUN_148b87456 body=32 status=ok
// SIG undefined FUN_148b87456(void)

void FUN_148b87456(undefined8 param_1,undefined8 *param_2)

{
  FUN_1411c3dfa(param_2);
  *param_2 = &PTR_FUN_14b5d0dc0;
  return;
}



// FUNCTION 148b874d0 FUN_148b874d0 body=59 status=ok
// SIG undefined FUN_148b874d0(void)

undefined8 FUN_148b874d0(longlong *param_1)

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



// FUNCTION 148b8751c FUN_148b8751c body=63 status=ok
// SIG undefined FUN_148b8751c(void)

void FUN_148b8751c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x44) == '\x01') {
    *param_2 = &PTR_FUN_14b5d0dc0;
    if (param_2[8] != 0) {
      FUN_140872868(param_2);
    }
    FUN_140639928(param_2);
    *(undefined1 *)(param_2 + 0x44) = 0;
  }
  return;
}



// FUNCTION 148b875aa FUN_148b875aa body=71 status=ok
// SIG undefined FUN_148b875aa(void)

undefined8 * FUN_148b875aa(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b5d0dc0;
  if (param_1[8] != 0) {
    FUN_140872868(param_1);
  }
  FUN_140639928(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x220);
  }
  return param_1;
}



// FUNCTION 148b875f2 FUN_148b875f2 body=55 status=ok
// SIG undefined FUN_148b875f2(void)

void FUN_148b875f2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9fa10 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9fa10 = FUN_140002ddd(FUN_1465a5ecf,uVar1,L"CarryableObjectBodyState");
  }
  return;
}



// FUNCTION 148b8762a FUN_148b8762a body=55 status=ok
// SIG undefined FUN_148b8762a(void)

void FUN_148b8762a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9f9e0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9f9e0 = FUN_140002ddd(FUN_1465a5dca,uVar1,L"CarryableObjectBodySettings");
  }
  return;
}



// FUNCTION 148b87662 FUN_148b87662 body=43 status=ok
// SIG undefined FUN_148b87662(void)

undefined8 FUN_148b87662(undefined8 param_1,int param_2)

{
  FUN_140639928();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x220);
  }
  return param_1;
}



// FUNCTION 148b876d0 FUN_148b876d0 body=158 status=ok
// SIG undefined FUN_148b876d0(void)

void FUN_148b876d0(undefined8 param_1,longlong param_2)

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
  FUN_148cf6cf8(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b877ec FUN_148b877ec body=37 status=ok
// SIG undefined FUN_148b877ec(void)

void FUN_148b877ec(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14582c99a();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148b8784e FUN_148b8784e body=239 status=ok
// SIG undefined FUN_148b8784e(void)

void FUN_148b8784e(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_19 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  puVar1 = &local_19;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148cf7d6c(local_18,puVar1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b8793e FUN_148b8793e body=230 status=ok
// SIG undefined FUN_148b8793e(void)

void FUN_148b8793e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
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
  FUN_148cf7ef2(local_18,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b87a2c FUN_148b87a2c body=156 status=ok
// SIG undefined FUN_148b87a2c(void)

void FUN_148b87a2c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  uVar1 = FUN_148cf7dfe(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b87ad6 FUN_148b87ad6 body=326 status=ok
// SIG undefined FUN_148b87ad6(void)

void FUN_148b87ad6(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
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
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  iVar1 = local_24;
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148cf7e7c(local_20,iVar1 != 0,local_30);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b87c28 FUN_148b87c28 body=55 status=ok
// SIG undefined FUN_148b87c28(void)

void FUN_148b87c28(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9fd18 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9fd18 = FUN_14171c317(FUN_1465a72c0,uVar1,L"ECarryNotify");
  }
  return;
}



// FUNCTION 148b87c84 FUN_148b87c84 body=48 status=ok
// SIG undefined FUN_148b87c84(void)

longlong FUN_148b87c84(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_1412443dc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b87cbc FUN_148b87cbc body=48 status=ok
// SIG undefined FUN_148b87cbc(void)

longlong FUN_148b87cbc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_1412443dc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b87cec FUN_148b87cec body=48 status=ok
// SIG undefined FUN_148b87cec(void)

longlong FUN_148b87cec(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_1412443dc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b87d24 FUN_148b87d24 body=48 status=ok
// SIG undefined FUN_148b87d24(void)

longlong FUN_148b87d24(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b8;
  FUN_1412443dc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b87d54 FUN_148b87d54 body=48 status=ok
// SIG undefined FUN_148b87d54(void)

longlong FUN_148b87d54(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c0;
  FUN_1412443dc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b87d88 FUN_148b87d88 body=48 status=ok
// SIG undefined FUN_148b87d88(void)

longlong FUN_148b87d88(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x408;
  FUN_1412443dc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b87db8 FUN_148b87db8 body=48 status=ok
// SIG undefined FUN_148b87db8(void)

longlong FUN_148b87db8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x410;
  FUN_1412443dc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b87de8 FUN_148b87de8 body=48 status=ok
// SIG undefined FUN_148b87de8(void)

longlong FUN_148b87de8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x418;
  FUN_1412443dc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b87e18 FUN_148b87e18 body=48 status=ok
// SIG undefined FUN_148b87e18(void)

longlong FUN_148b87e18(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x420;
  FUN_1412443dc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b87e50 FUN_148b87e50 body=48 status=ok
// SIG undefined FUN_148b87e50(void)

longlong FUN_148b87e50(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x428;
  FUN_1412443dc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b87e80 FUN_148b87e80 body=48 status=ok
// SIG undefined FUN_148b87e80(void)

longlong FUN_148b87e80(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x458;
  FUN_1412443dc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b87eb0 FUN_148b87eb0 body=48 status=ok
// SIG undefined FUN_148b87eb0(void)

longlong FUN_148b87eb0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x460;
  FUN_1412443dc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b87ee0 FUN_148b87ee0 body=48 status=ok
// SIG undefined FUN_148b87ee0(void)

longlong FUN_148b87ee0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x468;
  FUN_1412443dc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b87f10 FUN_148b87f10 body=48 status=ok
// SIG undefined FUN_148b87f10(void)

longlong FUN_148b87f10(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x470;
  FUN_1412443dc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b87f48 FUN_148b87f48 body=48 status=ok
// SIG undefined FUN_148b87f48(void)

longlong FUN_148b87f48(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x478;
  FUN_1412443dc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b87f80 FUN_148b87f80 body=48 status=ok
// SIG undefined FUN_148b87f80(void)

longlong FUN_148b87f80(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x480;
  FUN_1412443dc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b87fb8 FUN_148b87fb8 body=48 status=ok
// SIG undefined FUN_148b87fb8(void)

longlong FUN_148b87fb8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x488;
  FUN_1412443dc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b87ff0 FUN_148b87ff0 body=48 status=ok
// SIG undefined FUN_148b87ff0(void)

longlong FUN_148b87ff0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x490;
  FUN_1412443dc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b88028 FUN_148b88028 body=48 status=ok
// SIG undefined FUN_148b88028(void)

longlong FUN_148b88028(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x498;
  FUN_1412443dc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b88060 FUN_148b88060 body=48 status=ok
// SIG undefined FUN_148b88060(void)

longlong FUN_148b88060(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a0;
  FUN_1412443dc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b88098 FUN_148b88098 body=48 status=ok
// SIG undefined FUN_148b88098(void)

longlong FUN_148b88098(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a8;
  FUN_1412443dc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b880d0 FUN_148b880d0 body=48 status=ok
// SIG undefined FUN_148b880d0(void)

longlong FUN_148b880d0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4b0;
  FUN_1412443dc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b88118 FUN_148b88118 body=48 status=ok
// SIG undefined FUN_148b88118(void)

longlong FUN_148b88118(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a98;
  FUN_1412443dc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b88148 FUN_148b88148 body=48 status=ok
// SIG undefined FUN_148b88148(void)

longlong FUN_148b88148(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1aa0;
  FUN_1412443dc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b88178 FUN_148b88178 body=48 status=ok
// SIG undefined FUN_148b88178(void)

longlong FUN_148b88178(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1aa8;
  FUN_1412443dc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b881b0 FUN_148b881b0 body=48 status=ok
// SIG undefined FUN_148b881b0(void)

longlong FUN_148b881b0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ab0;
  FUN_1412443dc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b881e8 FUN_148b881e8 body=48 status=ok
// SIG undefined FUN_148b881e8(void)

longlong FUN_148b881e8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ad0;
  FUN_1412443dc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b88220 FUN_148b88220 body=48 status=ok
// SIG undefined FUN_148b88220(void)

longlong FUN_148b88220(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ad8;
  FUN_1412443dc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b8825c FUN_148b8825c body=48 status=ok
// SIG undefined FUN_148b8825c(void)

longlong FUN_148b8825c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ae0;
  FUN_1412443dc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b8828c FUN_148b8828c body=45 status=ok
// SIG undefined FUN_148b8828c(void)

longlong FUN_148b8828c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14585ef5e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b882ba FUN_148b882ba body=48 status=ok
// SIG undefined FUN_148b882ba(void)

longlong FUN_148b882ba(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_14585ef5e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b882ea FUN_148b882ea body=48 status=ok
// SIG undefined FUN_148b882ea(void)

longlong FUN_148b882ea(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_14585ef5e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b8831a FUN_148b8831a body=48 status=ok
// SIG undefined FUN_148b8831a(void)

longlong FUN_148b8831a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_14585ef5e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b8834a FUN_148b8834a body=45 status=ok
// SIG undefined FUN_148b8834a(void)

longlong FUN_148b8834a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_14071fe68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b88378 FUN_148b88378 body=45 status=ok
// SIG undefined FUN_148b88378(void)

longlong FUN_148b88378(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x50;
  thunk_FUN_14071fe68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b883a6 FUN_148b883a6 body=45 status=ok
// SIG undefined FUN_148b883a6(void)

longlong FUN_148b883a6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x58;
  thunk_FUN_14071fe68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b883d4 FUN_148b883d4 body=48 status=ok
// SIG undefined FUN_148b883d4(void)

longlong FUN_148b883d4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_14597f466(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b88404 FUN_148b88404 body=48 status=ok
// SIG undefined FUN_148b88404(void)

longlong FUN_148b88404(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_14597f466(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b88434 FUN_148b88434 body=48 status=ok
// SIG undefined FUN_148b88434(void)

longlong FUN_148b88434(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_14597f466(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b88464 FUN_148b88464 body=48 status=ok
// SIG undefined FUN_148b88464(void)

longlong FUN_148b88464(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b8;
  FUN_14597f466(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b88494 FUN_148b88494 body=48 status=ok
// SIG undefined FUN_148b88494(void)

longlong FUN_148b88494(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c0;
  FUN_14597f466(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b884c4 FUN_148b884c4 body=48 status=ok
// SIG undefined FUN_148b884c4(void)

longlong FUN_148b884c4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x408;
  FUN_14597f466(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b884f4 FUN_148b884f4 body=48 status=ok
// SIG undefined FUN_148b884f4(void)

longlong FUN_148b884f4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x410;
  FUN_14597f466(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b88524 FUN_148b88524 body=48 status=ok
// SIG undefined FUN_148b88524(void)

longlong FUN_148b88524(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x418;
  FUN_14597f466(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


