// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14616adc0 FUN_14616adc0 body=162 status=ok
// SIG undefined FUN_14616adc0(void)

void FUN_14616adc0(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f66be(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616ae07;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616ae07:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616ae64 FUN_14616ae64 body=162 status=ok
// SIG undefined FUN_14616ae64(void)

void FUN_14616ae64(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f67c8(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616aeab;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616aeab:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616af08 FUN_14616af08 body=162 status=ok
// SIG undefined FUN_14616af08(void)

void FUN_14616af08(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f68d2(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616af4f;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616af4f:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616afac FUN_14616afac body=162 status=ok
// SIG undefined FUN_14616afac(void)

void FUN_14616afac(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f69dc(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616aff3;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616aff3:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616b050 FUN_14616b050 body=162 status=ok
// SIG undefined FUN_14616b050(void)

void FUN_14616b050(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f6ae6(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616b097;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616b097:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616b0f4 FUN_14616b0f4 body=162 status=ok
// SIG undefined FUN_14616b0f4(void)

void FUN_14616b0f4(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f6bf0(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616b13b;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616b13b:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616b198 FUN_14616b198 body=162 status=ok
// SIG undefined FUN_14616b198(void)

void FUN_14616b198(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f6cfa(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616b1df;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616b1df:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616b23c FUN_14616b23c body=162 status=ok
// SIG undefined FUN_14616b23c(void)

void FUN_14616b23c(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f6e04(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616b283;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616b283:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616b2e0 FUN_14616b2e0 body=162 status=ok
// SIG undefined FUN_14616b2e0(void)

void FUN_14616b2e0(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f6f0e(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616b327;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616b327:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616b384 FUN_14616b384 body=162 status=ok
// SIG undefined FUN_14616b384(void)

void FUN_14616b384(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f7018(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616b3cb;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616b3cb:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616b428 FUN_14616b428 body=162 status=ok
// SIG undefined FUN_14616b428(void)

void FUN_14616b428(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f7122(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616b46f;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616b46f:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616b4cc FUN_14616b4cc body=162 status=ok
// SIG undefined FUN_14616b4cc(void)

void FUN_14616b4cc(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f722c(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616b513;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616b513:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616b570 FUN_14616b570 body=162 status=ok
// SIG undefined FUN_14616b570(void)

void FUN_14616b570(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f7336(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616b5b7;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616b5b7:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616b614 FUN_14616b614 body=162 status=ok
// SIG undefined FUN_14616b614(void)

void FUN_14616b614(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f7440(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616b65b;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616b65b:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616b6b8 FUN_14616b6b8 body=162 status=ok
// SIG undefined FUN_14616b6b8(void)

void FUN_14616b6b8(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f754a(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616b6ff;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616b6ff:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616b75c FUN_14616b75c body=162 status=ok
// SIG undefined FUN_14616b75c(void)

void FUN_14616b75c(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f7654(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616b7a3;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616b7a3:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616b800 FUN_14616b800 body=162 status=ok
// SIG undefined FUN_14616b800(void)

void FUN_14616b800(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f775e(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616b847;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616b847:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616b8a4 FUN_14616b8a4 body=162 status=ok
// SIG undefined FUN_14616b8a4(void)

void FUN_14616b8a4(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f7868(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616b8eb;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616b8eb:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616b948 FUN_14616b948 body=162 status=ok
// SIG undefined FUN_14616b948(void)

void FUN_14616b948(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f7972(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616b98f;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616b98f:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616b9ec FUN_14616b9ec body=162 status=ok
// SIG undefined FUN_14616b9ec(void)

void FUN_14616b9ec(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f7a7c(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616ba33;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616ba33:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616ba90 FUN_14616ba90 body=162 status=ok
// SIG undefined FUN_14616ba90(void)

void FUN_14616ba90(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f7b86(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616bad7;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616bad7:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616bb34 FUN_14616bb34 body=162 status=ok
// SIG undefined FUN_14616bb34(void)

void FUN_14616bb34(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f7c90(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616bb7b;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616bb7b:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616bbd8 FUN_14616bbd8 body=162 status=ok
// SIG undefined FUN_14616bbd8(void)

void FUN_14616bbd8(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f7d9a(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616bc1f;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616bc1f:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616bc7c FUN_14616bc7c body=162 status=ok
// SIG undefined FUN_14616bc7c(void)

void FUN_14616bc7c(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f7ea4(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616bcc3;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616bcc3:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616bd20 FUN_14616bd20 body=162 status=ok
// SIG undefined FUN_14616bd20(void)

void FUN_14616bd20(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f7fae(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616bd67;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616bd67:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616bdc4 FUN_14616bdc4 body=162 status=ok
// SIG undefined FUN_14616bdc4(void)

void FUN_14616bdc4(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f80b8(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616be0b;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616be0b:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616be68 FUN_14616be68 body=162 status=ok
// SIG undefined FUN_14616be68(void)

void FUN_14616be68(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f81c2(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616beaf;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616beaf:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616bf0c FUN_14616bf0c body=162 status=ok
// SIG undefined FUN_14616bf0c(void)

void FUN_14616bf0c(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f82cc(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616bf53;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616bf53:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616bfb0 FUN_14616bfb0 body=162 status=ok
// SIG undefined FUN_14616bfb0(void)

void FUN_14616bfb0(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f83d6(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616bff7;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616bff7:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616c054 FUN_14616c054 body=162 status=ok
// SIG undefined FUN_14616c054(void)

void FUN_14616c054(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f84e0(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616c09b;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616c09b:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616c0f8 FUN_14616c0f8 body=162 status=ok
// SIG undefined FUN_14616c0f8(void)

void FUN_14616c0f8(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f85ea(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616c13f;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616c13f:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616c19c FUN_14616c19c body=162 status=ok
// SIG undefined FUN_14616c19c(void)

void FUN_14616c19c(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f86f4(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616c1e3;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616c1e3:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616c240 FUN_14616c240 body=162 status=ok
// SIG undefined FUN_14616c240(void)

void FUN_14616c240(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f87fe(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616c287;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616c287:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616c2e4 FUN_14616c2e4 body=162 status=ok
// SIG undefined FUN_14616c2e4(void)

void FUN_14616c2e4(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f8908(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616c32b;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616c32b:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616c388 FUN_14616c388 body=162 status=ok
// SIG undefined FUN_14616c388(void)

void FUN_14616c388(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f8a12(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616c3cf;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616c3cf:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616c42c FUN_14616c42c body=162 status=ok
// SIG undefined FUN_14616c42c(void)

void FUN_14616c42c(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f8b1c(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616c473;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616c473:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616c4d0 FUN_14616c4d0 body=162 status=ok
// SIG undefined FUN_14616c4d0(void)

void FUN_14616c4d0(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f8c26(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616c517;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616c517:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616c574 FUN_14616c574 body=162 status=ok
// SIG undefined FUN_14616c574(void)

void FUN_14616c574(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f8d30(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616c5bb;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616c5bb:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616c618 FUN_14616c618 body=162 status=ok
// SIG undefined FUN_14616c618(void)

void FUN_14616c618(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f8e3a(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616c65f;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616c65f:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616c6bc FUN_14616c6bc body=162 status=ok
// SIG undefined FUN_14616c6bc(void)

void FUN_14616c6bc(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f8f44(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616c703;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616c703:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616c760 FUN_14616c760 body=162 status=ok
// SIG undefined FUN_14616c760(void)

void FUN_14616c760(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f904e(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616c7a7;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616c7a7:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616c804 FUN_14616c804 body=162 status=ok
// SIG undefined FUN_14616c804(void)

void FUN_14616c804(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f9158(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616c84b;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616c84b:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616c8a8 FUN_14616c8a8 body=162 status=ok
// SIG undefined FUN_14616c8a8(void)

void FUN_14616c8a8(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f9262(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616c8ef;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616c8ef:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616c94c FUN_14616c94c body=162 status=ok
// SIG undefined FUN_14616c94c(void)

void FUN_14616c94c(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f936c(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616c993;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616c993:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616c9f0 FUN_14616c9f0 body=162 status=ok
// SIG undefined FUN_14616c9f0(void)

void FUN_14616c9f0(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f9476(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616ca37;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616ca37:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616ca94 FUN_14616ca94 body=162 status=ok
// SIG undefined FUN_14616ca94(void)

void FUN_14616ca94(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f9580(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616cadb;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616cadb:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616cb38 FUN_14616cb38 body=162 status=ok
// SIG undefined FUN_14616cb38(void)

void FUN_14616cb38(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f968a(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616cb7f;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616cb7f:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616cbdc FUN_14616cbdc body=162 status=ok
// SIG undefined FUN_14616cbdc(void)

void FUN_14616cbdc(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f9794(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616cc23;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616cc23:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616cc80 FUN_14616cc80 body=162 status=ok
// SIG undefined FUN_14616cc80(void)

void FUN_14616cc80(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f989e(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616ccc7;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616ccc7:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616cd24 FUN_14616cd24 body=162 status=ok
// SIG undefined FUN_14616cd24(void)

void FUN_14616cd24(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f99a8(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616cd6b;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616cd6b:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616cdc8 FUN_14616cdc8 body=162 status=ok
// SIG undefined FUN_14616cdc8(void)

void FUN_14616cdc8(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f9ab2(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616ce0f;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616ce0f:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616ce6c FUN_14616ce6c body=162 status=ok
// SIG undefined FUN_14616ce6c(void)

void FUN_14616ce6c(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f9bbc(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616ceb3;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616ceb3:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616cf10 FUN_14616cf10 body=162 status=ok
// SIG undefined FUN_14616cf10(void)

void FUN_14616cf10(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f9cc6(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616cf57;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616cf57:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616cfb4 FUN_14616cfb4 body=162 status=ok
// SIG undefined FUN_14616cfb4(void)

void FUN_14616cfb4(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f9dd0(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616cffb;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616cffb:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616d058 FUN_14616d058 body=162 status=ok
// SIG undefined FUN_14616d058(void)

void FUN_14616d058(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f9eda(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616d09f;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616d09f:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616d0fc FUN_14616d0fc body=162 status=ok
// SIG undefined FUN_14616d0fc(void)

void FUN_14616d0fc(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f9fe4(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616d143;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616d143:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616d1a0 FUN_14616d1a0 body=162 status=ok
// SIG undefined FUN_14616d1a0(void)

void FUN_14616d1a0(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415fa0ee(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616d1e7;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616d1e7:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616d244 FUN_14616d244 body=162 status=ok
// SIG undefined FUN_14616d244(void)

void FUN_14616d244(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415fa1f8(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616d28b;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616d28b:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616d2e8 FUN_14616d2e8 body=162 status=ok
// SIG undefined FUN_14616d2e8(void)

void FUN_14616d2e8(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415fa302(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616d32f;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616d32f:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616d38c FUN_14616d38c body=162 status=ok
// SIG undefined FUN_14616d38c(void)

void FUN_14616d38c(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415fa40c(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616d3d3;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616d3d3:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616d430 FUN_14616d430 body=162 status=ok
// SIG undefined FUN_14616d430(void)

void FUN_14616d430(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415fa516(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616d477;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616d477:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616d4d4 FUN_14616d4d4 body=162 status=ok
// SIG undefined FUN_14616d4d4(void)

void FUN_14616d4d4(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415fa620(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616d51b;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616d51b:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616d578 FUN_14616d578 body=162 status=ok
// SIG undefined FUN_14616d578(void)

void FUN_14616d578(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415fa72a(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616d5bf;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616d5bf:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616d61c FUN_14616d61c body=162 status=ok
// SIG undefined FUN_14616d61c(void)

void FUN_14616d61c(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415fa834(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616d663;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616d663:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616d6c0 FUN_14616d6c0 body=162 status=ok
// SIG undefined FUN_14616d6c0(void)

void FUN_14616d6c0(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415fa93e(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616d707;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616d707:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616d764 FUN_14616d764 body=162 status=ok
// SIG undefined FUN_14616d764(void)

void FUN_14616d764(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415faa48(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616d7ab;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616d7ab:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616d808 FUN_14616d808 body=162 status=ok
// SIG undefined FUN_14616d808(void)

void FUN_14616d808(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415fab52(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616d84f;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616d84f:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616d8ac FUN_14616d8ac body=162 status=ok
// SIG undefined FUN_14616d8ac(void)

void FUN_14616d8ac(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415fac5c(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616d8f3;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616d8f3:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616d950 FUN_14616d950 body=162 status=ok
// SIG undefined FUN_14616d950(void)

void FUN_14616d950(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415fad66(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616d997;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616d997:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616d9f4 FUN_14616d9f4 body=162 status=ok
// SIG undefined FUN_14616d9f4(void)

void FUN_14616d9f4(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415fae70(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616da3b;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616da3b:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616da98 FUN_14616da98 body=162 status=ok
// SIG undefined FUN_14616da98(void)

void FUN_14616da98(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415faf7a(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616dadf;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616dadf:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616db3c FUN_14616db3c body=162 status=ok
// SIG undefined FUN_14616db3c(void)

void FUN_14616db3c(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415fb084(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616db83;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616db83:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616dbe0 FUN_14616dbe0 body=162 status=ok
// SIG undefined FUN_14616dbe0(void)

void FUN_14616dbe0(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415fb18e(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616dc27;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616dc27:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616dc84 FUN_14616dc84 body=162 status=ok
// SIG undefined FUN_14616dc84(void)

void FUN_14616dc84(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415fb298(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616dccb;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616dccb:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616dd28 FUN_14616dd28 body=162 status=ok
// SIG undefined FUN_14616dd28(void)

void FUN_14616dd28(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415fb3a2(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616dd6f;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616dd6f:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616ddcc FUN_14616ddcc body=162 status=ok
// SIG undefined FUN_14616ddcc(void)

void FUN_14616ddcc(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415fb4ac(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616de13;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616de13:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616de70 FUN_14616de70 body=162 status=ok
// SIG undefined FUN_14616de70(void)

void FUN_14616de70(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415fb5b6(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616deb7;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616deb7:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616df14 FUN_14616df14 body=162 status=ok
// SIG undefined FUN_14616df14(void)

void FUN_14616df14(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415fb6c0(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616df5b;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616df5b:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616dfb8 FUN_14616dfb8 body=162 status=ok
// SIG undefined FUN_14616dfb8(void)

void FUN_14616dfb8(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415fb7ca(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616dfff;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616dfff:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616e05c FUN_14616e05c body=162 status=ok
// SIG undefined FUN_14616e05c(void)

void FUN_14616e05c(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415fb8d4(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616e0a3;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616e0a3:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616e100 FUN_14616e100 body=162 status=ok
// SIG undefined FUN_14616e100(void)

void FUN_14616e100(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415fb9de(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616e147;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616e147:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616e1a4 FUN_14616e1a4 body=162 status=ok
// SIG undefined FUN_14616e1a4(void)

void FUN_14616e1a4(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415fbae8(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616e1eb;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616e1eb:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616e248 FUN_14616e248 body=162 status=ok
// SIG undefined FUN_14616e248(void)

void FUN_14616e248(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415fbbf2(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616e28f;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616e28f:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616e2ec FUN_14616e2ec body=162 status=ok
// SIG undefined FUN_14616e2ec(void)

void FUN_14616e2ec(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415fbcfc(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616e333;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616e333:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616e390 FUN_14616e390 body=162 status=ok
// SIG undefined FUN_14616e390(void)

void FUN_14616e390(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415fbe06(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616e3d7;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616e3d7:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616e434 FUN_14616e434 body=162 status=ok
// SIG undefined FUN_14616e434(void)

void FUN_14616e434(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415fbf10(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616e47b;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616e47b:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616e4d8 FUN_14616e4d8 body=162 status=ok
// SIG undefined FUN_14616e4d8(void)

void FUN_14616e4d8(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415fc01a(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616e51f;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616e51f:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616e57c FUN_14616e57c body=162 status=ok
// SIG undefined FUN_14616e57c(void)

void FUN_14616e57c(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415fc124(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616e5c3;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616e5c3:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616e620 FUN_14616e620 body=162 status=ok
// SIG undefined FUN_14616e620(void)

void FUN_14616e620(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415fc22e(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616e667;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616e667:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616e6c4 FUN_14616e6c4 body=162 status=ok
// SIG undefined FUN_14616e6c4(void)

void FUN_14616e6c4(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415fc338(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616e70b;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616e70b:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616e768 FUN_14616e768 body=162 status=ok
// SIG undefined FUN_14616e768(void)

void FUN_14616e768(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415fc442(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616e7af;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616e7af:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616e80c FUN_14616e80c body=162 status=ok
// SIG undefined FUN_14616e80c(void)

void FUN_14616e80c(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415fc54c(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616e853;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616e853:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616e8b0 FUN_14616e8b0 body=162 status=ok
// SIG undefined FUN_14616e8b0(void)

void FUN_14616e8b0(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415fc656(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616e8f7;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616e8f7:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616e954 FUN_14616e954 body=162 status=ok
// SIG undefined FUN_14616e954(void)

void FUN_14616e954(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415fc760(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616e99b;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616e99b:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616e9f8 FUN_14616e9f8 body=162 status=ok
// SIG undefined FUN_14616e9f8(void)

void FUN_14616e9f8(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415fc86a(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616ea3f;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616ea3f:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616ea9c FUN_14616ea9c body=162 status=ok
// SIG undefined FUN_14616ea9c(void)

void FUN_14616ea9c(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415fc974(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616eae3;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616eae3:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616eb40 FUN_14616eb40 body=162 status=ok
// SIG undefined FUN_14616eb40(void)

void FUN_14616eb40(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415fca7e(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616eb87;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616eb87:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616ebe4 FUN_14616ebe4 body=162 status=ok
// SIG undefined FUN_14616ebe4(void)

void FUN_14616ebe4(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415fcb88(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616ec2b;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616ec2b:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616ec88 FUN_14616ec88 body=162 status=ok
// SIG undefined FUN_14616ec88(void)

void FUN_14616ec88(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415fcc92(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616eccf;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616eccf:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616ed2c FUN_14616ed2c body=162 status=ok
// SIG undefined FUN_14616ed2c(void)

void FUN_14616ed2c(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415fcd9c(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616ed73;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616ed73:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616edd0 FUN_14616edd0 body=162 status=ok
// SIG undefined FUN_14616edd0(void)

void FUN_14616edd0(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415fcea6(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616ee17;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616ee17:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616ee74 FUN_14616ee74 body=162 status=ok
// SIG undefined FUN_14616ee74(void)

void FUN_14616ee74(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415fcfb0(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616eebb;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616eebb:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616ef18 FUN_14616ef18 body=162 status=ok
// SIG undefined FUN_14616ef18(void)

void FUN_14616ef18(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415fd0ba(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616ef5f;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616ef5f:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616efbc FUN_14616efbc body=162 status=ok
// SIG undefined FUN_14616efbc(void)

void FUN_14616efbc(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415fd1c4(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616f003;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616f003:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616f060 FUN_14616f060 body=162 status=ok
// SIG undefined FUN_14616f060(void)

void FUN_14616f060(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415fd2ce(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616f0a7;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616f0a7:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616f104 FUN_14616f104 body=162 status=ok
// SIG undefined FUN_14616f104(void)

void FUN_14616f104(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415fd3d8(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616f14b;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616f14b:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616f1a8 FUN_14616f1a8 body=162 status=ok
// SIG undefined FUN_14616f1a8(void)

void FUN_14616f1a8(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415fd4e2(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616f1ef;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616f1ef:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616f24c FUN_14616f24c body=162 status=ok
// SIG undefined FUN_14616f24c(void)

void FUN_14616f24c(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415fd5ec(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616f293;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616f293:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616f2f0 FUN_14616f2f0 body=162 status=ok
// SIG undefined FUN_14616f2f0(void)

void FUN_14616f2f0(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415fd6f6(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616f337;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616f337:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616f394 FUN_14616f394 body=162 status=ok
// SIG undefined FUN_14616f394(void)

void FUN_14616f394(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415fd800(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616f3db;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616f3db:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616f438 FUN_14616f438 body=162 status=ok
// SIG undefined FUN_14616f438(void)

void FUN_14616f438(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415fd90a(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616f47f;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616f47f:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616f4dc FUN_14616f4dc body=162 status=ok
// SIG undefined FUN_14616f4dc(void)

void FUN_14616f4dc(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415fda14(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616f523;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616f523:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616f580 FUN_14616f580 body=162 status=ok
// SIG undefined FUN_14616f580(void)

void FUN_14616f580(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415fdb1e(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616f5c7;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616f5c7:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616f624 FUN_14616f624 body=162 status=ok
// SIG undefined FUN_14616f624(void)

void FUN_14616f624(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415fdc28(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616f66b;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616f66b:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616f6c8 FUN_14616f6c8 body=162 status=ok
// SIG undefined FUN_14616f6c8(void)

void FUN_14616f6c8(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415fdd32(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616f70f;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616f70f:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616f76c FUN_14616f76c body=162 status=ok
// SIG undefined FUN_14616f76c(void)

void FUN_14616f76c(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415fde3c(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616f7b3;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616f7b3:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616f810 FUN_14616f810 body=162 status=ok
// SIG undefined FUN_14616f810(void)

void FUN_14616f810(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415fdf46(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616f857;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616f857:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616f8b4 FUN_14616f8b4 body=162 status=ok
// SIG undefined FUN_14616f8b4(void)

void FUN_14616f8b4(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415fe050(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616f8fb;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616f8fb:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616f958 FUN_14616f958 body=162 status=ok
// SIG undefined FUN_14616f958(void)

void FUN_14616f958(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415fe15a(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616f99f;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616f99f:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616f9fc FUN_14616f9fc body=162 status=ok
// SIG undefined FUN_14616f9fc(void)

void FUN_14616f9fc(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415fe264(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616fa43;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616fa43:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616faa0 FUN_14616faa0 body=162 status=ok
// SIG undefined FUN_14616faa0(void)

void FUN_14616faa0(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415fe36e(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616fae7;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616fae7:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616fb44 FUN_14616fb44 body=162 status=ok
// SIG undefined FUN_14616fb44(void)

void FUN_14616fb44(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415fe478(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616fb8b;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616fb8b:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616fbe8 FUN_14616fbe8 body=162 status=ok
// SIG undefined FUN_14616fbe8(void)

void FUN_14616fbe8(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415fe582(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616fc2f;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616fc2f:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616fc8c FUN_14616fc8c body=162 status=ok
// SIG undefined FUN_14616fc8c(void)

void FUN_14616fc8c(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415fe68c(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616fcd3;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616fcd3:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616fd30 FUN_14616fd30 body=162 status=ok
// SIG undefined FUN_14616fd30(void)

void FUN_14616fd30(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415fe796(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616fd77;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616fd77:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616fdd4 FUN_14616fdd4 body=162 status=ok
// SIG undefined FUN_14616fdd4(void)

void FUN_14616fdd4(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415fe8a0(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616fe1b;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616fe1b:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616fe78 FUN_14616fe78 body=162 status=ok
// SIG undefined FUN_14616fe78(void)

void FUN_14616fe78(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415fe9aa(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616febf;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616febf:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616ff1c FUN_14616ff1c body=162 status=ok
// SIG undefined FUN_14616ff1c(void)

void FUN_14616ff1c(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415feab4(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616ff63;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616ff63:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616ffc0 FUN_14616ffc0 body=162 status=ok
// SIG undefined FUN_14616ffc0(void)

void FUN_14616ffc0(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415febbe(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_146170007;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_146170007:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146170064 FUN_146170064 body=162 status=ok
// SIG undefined FUN_146170064(void)

void FUN_146170064(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415fecc8(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_1461700ab;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_1461700ab:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146170108 FUN_146170108 body=162 status=ok
// SIG undefined FUN_146170108(void)

void FUN_146170108(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415fedd2(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14617014f;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14617014f:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461701ac FUN_1461701ac body=162 status=ok
// SIG undefined FUN_1461701ac(void)

void FUN_1461701ac(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415feedc(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_1461701f3;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_1461701f3:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146170250 FUN_146170250 body=162 status=ok
// SIG undefined FUN_146170250(void)

void FUN_146170250(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415fefe6(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_146170297;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_146170297:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461702f4 FUN_1461702f4 body=162 status=ok
// SIG undefined FUN_1461702f4(void)

void FUN_1461702f4(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415ff0f0(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14617033b;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14617033b:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146170398 FUN_146170398 body=162 status=ok
// SIG undefined FUN_146170398(void)

void FUN_146170398(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415ff1fa(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_1461703df;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_1461703df:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14617043c FUN_14617043c body=173 status=ok
// SIG undefined FUN_14617043c(void)

void FUN_14617043c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  code *local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_141237e80();
  lVar1 = FUN_1408bb964(param_1 + 0x14);
  if (lVar1 != 0) {
    lVar2 = FUN_1403ca142();
    if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
         == lVar2 + 0x30)) && (*(longlong *)(param_1 + 0x28) == 0)) {
      local_38 = FUN_145abec0a;
      local_30 = 0;
      FUN_1461704ea(lVar1 + 0x2a8,&local_28,param_1 + -0x30);
      *(undefined8 *)(param_1 + 0x28) = local_28;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461704ea FUN_1461704ea body=254 status=ok
// SIG undefined FUN_1461704ea(void)

undefined8
FUN_1461704ea(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b3e62a0;
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
  *local_48 = &PTR_FUN_14b9ae010;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_141285884(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461705ea FUN_1461705ea body=373 status=ok
// SIG undefined FUN_1461705ea(void)

undefined4 * FUN_1461705ea(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14617081c(param_1,local_48);
  plVar1 = (longlong *)param_3[1];
  uVar10 = *(undefined8 *)*param_3;
  *local_40 = uVar10;
  lVar8 = *plVar1;
  local_40[2] = lVar8;
  local_40[4] = 0;
  if (lVar8 != 0) {
    plVar5 = plVar1 + 4;
    if ((longlong *)plVar1[2] != (longlong *)0x0) {
      plVar5 = (longlong *)plVar1[2];
    }
    (**(code **)*plVar5)(plVar5,local_40 + 4);
    uVar10 = *local_40;
  }
  *(undefined4 *)(local_40 + 10) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (uint)((ulonglong)uVar10 >> 0x10);
  uVar4 = (uint)uVar10 & 0xffff;
  uVar9 = ((uint)uVar10 << 0x10 | uVar4) + (int)((ulonglong)uVar10 >> 0x20) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar4 >> 4);
  cVar3 = FUN_146170760(param_1,uVar9,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)((longlong)local_40 + 0x54) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 10) =
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
      FUN_14617090c(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146170760 FUN_146170760 body=188 status=ok
// SIG undefined FUN_146170760(void)

undefined8 FUN_146170760(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  void *_Dst;
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x60);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x60) == *param_3) {
          if (*(longlong *)((longlong)_Dst + 0x10) != 0) {
            plVar1 = (longlong *)((longlong)_Dst + 0x30);
            if (*(longlong **)((longlong)_Dst + 0x20) != (longlong *)0x0) {
              plVar1 = *(longlong **)((longlong)_Dst + 0x20);
            }
            (**(code **)(*plVar1 + 0x10))();
          }
          memmove(_Dst,param_3,0x50);
          FUN_146fc9d52(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x50);
      } while (iVar2 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 14617081c FUN_14617081c body=239 status=ok
// SIG undefined FUN_14617081c(void)

int * FUN_14617081c(longlong *param_1,int *param_2)

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
      FUN_1401284dc(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x60);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x60) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x60 + *param_1;
  return param_2;
}



// FUNCTION 14617090c FUN_14617090c body=486 status=ok
// SIG undefined FUN_14617090c(void)

void FUN_14617090c(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x60;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x54 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x50 + lVar7) =
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



// FUNCTION 146170af4 FUN_146170af4 body=21 status=ok
// SIG undefined FUN_146170af4(void)

undefined8 FUN_146170af4(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 146170b0a FUN_146170b0a body=162 status=ok
// SIG undefined FUN_146170b0a(void)

void FUN_146170b0a(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415ff49e(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_146170b51;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_146170b51:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146170bae FUN_146170bae body=52 status=ok
// SIG undefined FUN_146170bae(void)

void FUN_146170bae(void)

{
  if (DAT_14ca80098 < 2) {
    FUN_146170be2();
    FUN_145bcc796();
    return;
  }
  FUN_145bcc796();
  DAT_14ca80098 = 1;
  FUN_141495628();
  return;
}



// FUNCTION 146170be2 FUN_146170be2 body=377 status=ok
// SIG undefined FUN_146170be2(void)

void FUN_146170be2(void)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
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
  puVar5 = &DAT_14ca80088;
  if (DAT_14ca80090 != (undefined *)0x0) {
    puVar5 = DAT_14ca80090;
  }
  iVar4 = DAT_14ca80098 + 3;
  if (-1 < DAT_14ca80098) {
    iVar4 = DAT_14ca80098;
  }
  if (DAT_14ca80058 - DAT_14ca80084 < iVar4 >> 2) {
    local_50 = 0x100000000;
    uStack_48 = &DAT_14ca80060;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    if (DAT_14ca80078 == 0) {
      iVar4 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar4 = DAT_14ca80078;
    }
    local_78 = &DAT_14ca80050;
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar1 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    if ((local_60._4_4_ != iVar4) || (uStack_48 != &DAT_14ca80060)) {
      iVar2 = local_60._4_4_;
      local_60 = uVar1;
      do {
        *(undefined4 *)(puVar5 + (longlong)*(int *)(*local_78 + 0x10 + (longlong)iVar2 * 0x14) * 4)
             = 0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar2 = local_60._4_4_;
        uVar1 = local_60;
      } while (local_78 != &DAT_14ca80050 ||
               ((undefined *)CONCAT44(uStack_64,uStack_68) != &DAT_14ca80060 ||
               local_60._4_4_ != iVar4));
    }
  }
  else {
    uVar1 = local_60;
    if (0 < DAT_14ca80098) {
      lVar3 = 0;
      do {
        *(undefined4 *)(puVar5 + lVar3 * 4) = 0xffffffff;
        lVar3 = lVar3 + 1;
      } while (lVar3 < DAT_14ca80098);
    }
  }
  local_60 = uVar1;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146170d64 FUN_146170d64 body=421 status=ok
// SIG undefined FUN_146170d64(void)

undefined8 * FUN_146170d64(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_40;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1406ee02c();
  *param_1 = &PTR_FUN_14afd0a50;
  param_1[0x72] = &PTR_FUN_14afd1090;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0x3f80000000000000;
  FUN_1446f470e(&local_20,L"Root",1);
  uVar1 = FUN_144a799b0();
  local_40 = 0;
  local_48 = 1;
  lVar2 = FUN_14048696c(param_1,local_20,uVar1,uVar1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar2);
  }
  param_1[0x39] = lVar2;
  FUN_1446f470e(&local_28,L"VolumetricCloudComponent",1);
  uVar1 = FUN_14586b90e();
  local_40 = 0;
  local_48 = 1;
  lVar2 = FUN_14048696c(param_1,local_28,uVar1,uVar1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar2);
  }
  param_1[0x73] = lVar2;
  FUN_1446f470e(&local_30,L"NiagaraCloudscapeComponent",1);
  uVar1 = FUN_1458c3a16();
  local_40 = 0;
  local_48 = 1;
  lVar2 = FUN_14048696c(param_1,local_30,uVar1,uVar1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar2);
  }
  param_1[0x74] = lVar2;
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) & 0xb9 | 2;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146170f0a FUN_146170f0a body=54 status=ok
// SIG undefined FUN_146170f0a(void)

void FUN_146170f0a(void)

{
  FUN_146170f40();
  if (DAT_14cb98928 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb98908 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146170f40 FUN_146170f40 body=375 status=ok
// SIG undefined FUN_146170f40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146170f40(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = 0x100000000;
  local_38 = &DAT_14cb98918;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  if (DAT_14cb98930 != 0) {
    FUN_1449c0562(&local_40);
  }
  local_68 = &DAT_14cb98908;
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  if (iStack_2c < *(int *)(local_38 + 0x18)) {
    do {
      lVar1 = *local_68;
      lVar2 = (longlong)iStack_4c * 0x20;
      FUN_145da91ec(*(undefined8 *)(lVar1 + 8 + lVar2),*(undefined4 *)(lVar1 + 0x10 + lVar2));
      if (*(longlong *)(lVar1 + 8 + lVar2) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < *(int *)(local_58 + 0x18));
  }
  DAT_14cb98910 = 0;
  if (DAT_14cb98914 != 0) {
    FUN_1446f4a44(&DAT_14cb98908,0);
  }
  _DAT_14cb98938 = 0xffffffff;
  DAT_14cb98930 = 0;
  if (0x80 < DAT_14cb98934) {
    DAT_14cb98934 = 0x80;
    FUN_1446efbd8(&DAT_14cb98918,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461710b8 FUN_1461710b8 body=68 status=ok
// SIG undefined FUN_1461710b8(void)

void FUN_1461710b8(undefined8 param_1)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x1a8);
  memset(_Dst,0,0x1a8);
  FUN_1461710fc(_Dst);
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 1461710fc FUN_1461710fc body=361 status=ok
// SIG undefined FUN_1461710fc(void)

undefined8 * FUN_1461710fc(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1408f3f9e();
  *param_1 = &PTR_FUN_14b8a0b10;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined1 *)((longlong)param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined2 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf5) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfd) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  FUN_140056680(&local_38,&DAT_149dfb77a);
  param_1[0x26] = local_38;
  *(undefined4 *)(param_1 + 0x27) = local_30;
  *(undefined4 *)((longlong)param_1 + 0x13c) = local_2c;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
  FUN_140056680(&local_38,&DAT_149dfb77a);
  param_1[0x2a] = local_38;
  *(undefined4 *)(param_1 + 0x2b) = local_30;
  *(undefined4 *)((longlong)param_1 + 0x15c) = local_2c;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x2d] = 0x3f8000003eb33333;
  param_1[0x2e] = 0x3f8000003ee66666;
  param_1[0x2f] = 0x3f80000000000000;
  param_1[0x30] = 0x3dcccccd3dcccccd;
  *(undefined4 *)(param_1 + 0x31) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0;
  *(undefined4 *)(param_1 + 0x32) = 0x3f7d70a4;
  *(undefined4 *)((longlong)param_1 + 0x194) = 0x3f7d70a4;
  param_1[0x33] = 0x3f8000003f7d70a4;
  *(undefined4 *)(param_1 + 0x34) = 0;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146171266 FUN_146171266 body=280 status=ok
// SIG undefined FUN_146171266(void)

void FUN_146171266(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14617138e(&local_30);
  plVar1 = local_28;
  if (local_28 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 8) = local_30;
    plVar4 = *(longlong **)(param_1 + 0x10);
    if (plVar4 == (longlong *)0x0) goto LAB_1461712b6;
    *(undefined8 *)(param_1 + 0x10) = 0;
LAB_14617130c:
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_1461712b6;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar1 = plVar4;
  }
  else {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 8) = local_30;
    plVar4 = *(longlong **)(param_1 + 0x10);
    if (local_28 != plVar4) {
      *(longlong **)(param_1 + 0x10) = local_28;
      if (plVar4 == (longlong *)0x0) goto LAB_1461712b6;
      goto LAB_14617130c;
    }
    LOCK();
    plVar4 = local_28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_1461712b6;
    (**(code **)*local_28)(local_28);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_1461712b6:
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
  if (*(longlong *)(DAT_14cb0d2b0 + 0x950) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14617138e FUN_14617138e body=326 status=ok
// SIG undefined FUN_14617138e(void)

undefined8 * FUN_14617138e(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar3 = (undefined8 *)FUN_14494321d(0x28);
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  *puVar3 = &PTR_FUN_14be8aae0;
  *param_1 = puVar3;
  plVar4 = (longlong *)FUN_14494321d(0x18);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14be8abb0;
  plVar4[2] = (longlong)puVar3;
  param_1[1] = plVar4;
  if (puVar3 == (undefined8 *)0x0) {
    local_30 = 0;
  }
  else {
    if (plVar4 == (longlong *)0x0) {
      puVar3[1] = puVar3;
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      puVar3[1] = puVar3;
      if ((longlong *)puVar3[2] != plVar4) {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
        plVar2 = (longlong *)puVar3[2];
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))();
          }
        }
        puVar3[2] = plVar4;
      }
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
    local_30 = *param_1;
    plVar4 = (longlong *)param_1[1];
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_28 = plVar4;
  FUN_141332b2e(&local_30);
  plVar4 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_28 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461714db FUN_1461714db body=25 status=ok
// SIG undefined FUN_1461714db(void)

undefined4 FUN_1461714db(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1415ff985();
  FUN_1461714f4();
  return uVar1;
}



// FUNCTION 1461714f4 FUN_1461714f4 body=441 status=ok
// SIG undefined FUN_1461714f4(void)

void FUN_1461714f4(void)

{
  DWORD DVar1;
  undefined2 *puVar2;
  wchar_t *pwVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  wchar_t *local_30;
  int local_28;
  undefined2 *local_20;
  int local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1415ffb0a();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb12fc8) {
    FUN_144b3d300(&DAT_14cb12fc8);
    if (DAT_14cb12fc8 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14cb12fc0 =
           (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"gbx.AppRelaunchPath",1);
      _Init_thread_footer(&DAT_14cb12fc8);
    }
  }
  if (DAT_14cb12fc0 != (longlong *)0x0) {
    (**(code **)(*DAT_14cb12fc0 + 0xc0))(DAT_14cb12fc0,&local_20);
    if (local_18 - 2U < 0x7fffffff) {
      FUN_14000f986(0x3f800000);
      puVar2 = &DAT_149dfb77a;
      if (local_18 != 0) {
        puVar2 = local_20;
      }
      FUN_140002266(&local_30,L"start \"\" cmd /K \"chcp 65001 >nul & \"%s\"\"",puVar2);
      puVar2 = &DAT_149dfb77a;
      if (local_18 != 0) {
        puVar2 = local_20;
      }
      FUN_145d03cb4(L"[GBX] Relaunching app with AppRelaunchPath: %s \n\r",puVar2);
      FUN_145d03cb4(L"[GBX] StartBAT: \n\r");
      pwVar3 = L"";
      if (local_28 != 0) {
        pwVar3 = local_30;
      }
      FUN_145d03cb4(L"%s \n\r",pwVar3);
      pwVar3 = L"";
      if (local_28 != 0) {
        pwVar3 = local_30;
      }
      _wsystem(pwVar3);
      DVar1 = GetCurrentProcessId();
      FUN_1468300c0(&local_38,DVar1);
      if (local_38 != 0) {
        FUN_14683012c(&local_38,0);
      }
      if (local_30 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
    }
    if (local_20 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461716ae FUN_1461716ae body=54 status=ok
// SIG undefined FUN_1461716ae(void)

void FUN_1461716ae(void)

{
  FUN_1461716e4();
  if (DAT_14cb27068 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb27048 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1461716e4 FUN_1461716e4 body=376 status=ok
// SIG undefined FUN_1461716e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461716e4(void)

{
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  undefined *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined *local_28;
  uint local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0x100000000;
  local_28 = &DAT_14cb27058;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (DAT_14cb27070 != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = &DAT_14cb27048;
  local_50 = local_30;
  local_48 = local_28;
  local_40 = local_20;
  iStack_3c = iStack_1c;
  local_38 = local_18;
  local_34 = local_14;
  if (iStack_1c < *(int *)(local_28 + 0x18)) {
    do {
      FUN_147f96154(*local_58 + (longlong)iStack_3c * 0x18 + 8);
      local_40 = local_40 & ~local_50._4_4_;
      FUN_1449c0562(&local_50);
    } while (iStack_3c < *(int *)(local_48 + 0x18));
  }
  _DAT_14cb27050 = 0;
  if (DAT_14cb27054 != 0) {
    FUN_144727cd0(&DAT_14cb27048,0);
  }
  _DAT_14cb27078 = 0xffffffff;
  DAT_14cb27070 = 0;
  if (0x80 < DAT_14cb27074) {
    DAT_14cb27074 = 0x80;
    FUN_1446efbd8(&DAT_14cb27058,0);
  }
  if ((local_10 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14617185d FUN_14617185d body=177 status=ok
// SIG undefined FUN_14617185d(void)

ulonglong FUN_14617185d(void)

{
  undefined8 unaff_RBX;
  ulonglong uVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14617190f(&local_20);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc12214) {
    FUN_144b3d300(&DAT_14cc12214);
    if (DAT_14cc12214 == -1) {
      DAT_14cc12210 = FUN_1415ffc54(&local_20);
      _Init_thread_footer(&DAT_14cc12214);
    }
  }
  uVar1 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),DAT_14cc12210);
  FUN_1447a1747(local_20,local_18);
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14617190f FUN_14617190f body=406 status=ok
// SIG undefined FUN_14617190f(void)

longlong * FUN_14617190f(longlong *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = 0;
  param_1[1] = 0;
  local_68 = 0x100000000;
  uStack_60 = &DAT_14cc119c0;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  if (DAT_14cc119d8 == 0) {
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar7 = DAT_14cc119d8;
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = &DAT_14cc119b0;
  if ((iStack_54 != iVar7) || (uStack_60 != &DAT_14cc119c0)) {
    do {
      iVar4 = iStack_74;
      lVar5 = *local_90;
      iVar2 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
        FUN_1447a1bd6(param_1,iVar2);
      }
      lVar5 = (longlong)iVar4 * 0x40 + lVar5;
      lVar3 = *param_1;
      lVar6 = (longlong)iVar2 * 0x10;
      puVar1 = (undefined8 *)(lVar3 + lVar6);
      *(undefined8 *)(lVar3 + lVar6) = 0;
      iVar2 = *(int *)(lVar5 + 0x10);
      _Src = *(void **)(lVar5 + 8);
      *(int *)(lVar3 + 8 + lVar6) = iVar2;
      if ((longlong)iVar2 == 0) {
        *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar1,iVar2,0);
        memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != &DAT_14cc119b0 ||
             ((undefined *)CONCAT44(uStack_7c,uStack_80) != &DAT_14cc119c0 || iStack_74 != iVar7));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146171aa6 FUN_146171aa6 body=54 status=ok
// SIG undefined FUN_146171aa6(void)

void FUN_146171aa6(void)

{
  FUN_146171adc();
  if (DAT_14c868160 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c868140 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146171adc FUN_146171adc body=377 status=ok
// SIG undefined FUN_146171adc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146171adc(void)

{
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  undefined *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined *local_28;
  uint local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0x100000000;
  local_28 = &DAT_14c868150;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (DAT_14c868168 != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = &DAT_14c868140;
  local_50 = local_30;
  local_48 = local_28;
  local_40 = local_20;
  iStack_3c = iStack_1c;
  local_38 = local_18;
  local_34 = local_14;
  if (iStack_1c < *(int *)(local_28 + 0x18)) {
    do {
      if (*(longlong *)(*local_58 + (longlong)iStack_3c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_40 = local_40 & ~local_50._4_4_;
      FUN_1449c0562(&local_50);
    } while (iStack_3c < *(int *)(local_48 + 0x18));
  }
  _DAT_14c868148 = 0;
  if (DAT_14c86814c != 0) {
    FUN_1446f4a44(&DAT_14c868140,0);
  }
  _DAT_14c868170 = 0xffffffff;
  DAT_14c868168 = 0;
  if (0x80 < DAT_14c86816c) {
    DAT_14c86816c = 0x80;
    FUN_1446efbd8(&DAT_14c868150,0);
  }
  if ((local_10 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146171c56 FUN_146171c56 body=54 status=ok
// SIG undefined FUN_146171c56(void)

void FUN_146171c56(void)

{
  FUN_146171c8c();
  if (DAT_14c927a88 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c927a68 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146171c8c FUN_146171c8c body=377 status=ok
// SIG undefined FUN_146171c8c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146171c8c(void)

{
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  undefined *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined *local_28;
  uint local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0x100000000;
  local_28 = &DAT_14c927a78;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (DAT_14c927a90 != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = &DAT_14c927a68;
  local_50 = local_30;
  local_48 = local_28;
  local_40 = local_20;
  iStack_3c = iStack_1c;
  local_38 = local_18;
  local_34 = local_14;
  if (iStack_1c < *(int *)(local_28 + 0x18)) {
    do {
      if (*(longlong *)(*local_58 + (longlong)iStack_3c * 0x18) != 0) {
        FUN_1400020a8();
      }
      local_40 = local_40 & ~local_50._4_4_;
      FUN_1449c0562(&local_50);
    } while (iStack_3c < *(int *)(local_48 + 0x18));
  }
  DAT_14c927a70 = 0;
  if (DAT_14c927a74 != 0) {
    FUN_144727cd0(&DAT_14c927a68,0);
  }
  _DAT_14c927a98 = 0xffffffff;
  DAT_14c927a90 = 0;
  if (0x80 < DAT_14c927a94) {
    DAT_14c927a94 = 0x80;
    FUN_1446efbd8(&DAT_14c927a78,0);
  }
  if ((local_10 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146171e06 FUN_146171e06 body=53 status=ok
// SIG undefined FUN_146171e06(void)

void FUN_146171e06(longlong *param_1)

{
  FUN_146171e3c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146171e3c FUN_146171e3c body=378 status=ok
// SIG undefined FUN_146171e3c(void)

void FUN_146171e3c(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
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
      plVar4 = *(longlong **)(*local_70 + 8 + (longlong)iStack_54 * 0x28);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146171fb8 FUN_146171fb8 body=316 status=ok
// SIG undefined FUN_146171fb8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146171fb8(void)

{
  if ((DAT_14cb0986f & 2) == 0) {
    DAT_14cb0986f = DAT_14cb0986f | 2;
    _DAT_14cb09810 = L"FSplineMeshVertexFactoryShaderParameters";
    _DAT_14cb09828 = FUN_146826540;
    _DAT_14cb09830 = FUN_146825d77;
    _DAT_14cb09838 = FUN_146825fd6;
    _DAT_14cb09840 = FUN_1407e02ea;
    _DAT_14cb09848 = FUN_146826273;
    _DAT_14cb09820 = &LAB_147d4f962;
    _DAT_14cb09860 = 0xffffffff0000000c;
    _DAT_14cb09868 = 4;
    DAT_14cb0986c = 0;
    _DAT_14cb09850 = &LAB_147d4f978;
    _DAT_14cb09cc0 = L"SplineMeshParams";
    DAT_14cb09cea = FUN_140850cc5();
    _DAT_14cb09cc8 = FUN_140ec6960();
    _DAT_14cb09cd8 = &LAB_14682652b;
    _DAT_14cb09ce0 = &DAT_100000004;
    _DAT_14cb09ce8 = 0;
    _DAT_14cb09cd0 = DAT_14cb09818;
    DAT_14cb09818 = &DAT_14cb09cc0;
    FUN_1461720f4(&DAT_14cb09808);
    FUN_1407e00cc(&DAT_14cb09808);
  }
  return &DAT_14cb09808;
}



// FUNCTION 1461720f4 FUN_1461720f4 body=116 status=ok
// SIG undefined FUN_1461720f4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461720f4(longlong param_1)

{
  longlong lVar1;
  
  _DAT_14cb09d60 = L"BASE";
  DAT_14cb09d8a = 4;
  lVar1 = FUN_1412f7d22();
  _DAT_14cb09d78 = &LAB_14682652b;
  _DAT_14cb09d80 = 0x100000000;
  _DAT_14cb09d70 = *(undefined8 *)(param_1 + 0x10);
  _DAT_14cb09d68 = lVar1;
  *(undefined **)(param_1 + 0x10) = &DAT_14cb09d60;
  *(char *)(param_1 + 0x65) = *(char *)(param_1 + 0x65) + '\x01';
  if (*(char *)(lVar1 + 100) != '\0') {
    *(char *)(param_1 + 0x66) = *(char *)(param_1 + 0x66) + '\x01';
  }
  return;
}



// FUNCTION 146172168 FUN_146172168 body=54 status=ok
// SIG undefined FUN_146172168(void)

void FUN_146172168(void)

{
  FUN_14617219e();
  if (DAT_14cb91ab0 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb91a90 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14617219e FUN_14617219e body=377 status=ok
// SIG undefined FUN_14617219e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14617219e(void)

{
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  undefined *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined *local_28;
  uint local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0x100000000;
  local_28 = &DAT_14cb91aa0;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (DAT_14cb91ab8 != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = &DAT_14cb91a90;
  local_50 = local_30;
  local_48 = local_28;
  local_40 = local_20;
  iStack_3c = iStack_1c;
  local_38 = local_18;
  local_34 = local_14;
  if (iStack_1c < *(int *)(local_28 + 0x18)) {
    do {
      if (*(longlong *)(*local_58 + (longlong)iStack_3c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_40 = local_40 & ~local_50._4_4_;
      FUN_1449c0562(&local_50);
    } while (iStack_3c < *(int *)(local_48 + 0x18));
  }
  DAT_14cb91a98 = 0;
  if (DAT_14cb91a9c != 0) {
    FUN_1446f4a44(&DAT_14cb91a90,0);
  }
  _DAT_14cb91ac0 = 0xffffffff;
  DAT_14cb91ab8 = 0;
  if (0x80 < DAT_14cb91abc) {
    DAT_14cb91abc = 0x80;
    FUN_1446efbd8(&DAT_14cb91aa0,0);
  }
  if ((local_10 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146172318 FUN_146172318 body=61 status=ok
// SIG undefined FUN_146172318(void)

void FUN_146172318(void)

{
  FUN_146172356(&DAT_14cb96700);
  if (DAT_14cb96720 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb96700 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146172356 FUN_146172356 body=370 status=ok
// SIG undefined FUN_146172356(void)

void FUN_146172356(longlong *param_1)

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
      FUN_148a646b2(*(undefined8 *)(lVar2 + 8 + lVar3),*(undefined4 *)(lVar2 + 0x10 + lVar3));
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



// FUNCTION 1461724ca FUN_1461724ca body=54 status=ok
// SIG undefined FUN_1461724ca(void)

void FUN_1461724ca(void)

{
  FUN_146172500();
  if (DAT_14cb9b670 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb9b650 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146172500 FUN_146172500 body=377 status=ok
// SIG undefined FUN_146172500(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146172500(void)

{
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  undefined *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined *local_28;
  uint local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0x100000000;
  local_28 = &DAT_14cb9b660;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (DAT_14cb9b678 != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = &DAT_14cb9b650;
  local_50 = local_30;
  local_48 = local_28;
  local_40 = local_20;
  iStack_3c = iStack_1c;
  local_38 = local_18;
  local_34 = local_14;
  if (iStack_1c < *(int *)(local_28 + 0x18)) {
    do {
      if (*(longlong *)(*local_58 + (longlong)iStack_3c * 0x28) != 0) {
        FUN_1400020a8();
      }
      local_40 = local_40 & ~local_50._4_4_;
      FUN_1449c0562(&local_50);
    } while (iStack_3c < *(int *)(local_48 + 0x18));
  }
  DAT_14cb9b658 = 0;
  if (DAT_14cb9b65c != 0) {
    FUN_140549ad6(&DAT_14cb9b650,0);
  }
  _DAT_14cb9b680 = 0xffffffff;
  DAT_14cb9b678 = 0;
  if (0x80 < DAT_14cb9b67c) {
    DAT_14cb9b67c = 0x80;
    FUN_1446efbd8(&DAT_14cb9b660,0);
  }
  if ((local_10 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14617267a FUN_14617267a body=176 status=ok
// SIG undefined FUN_14617267a(void)

void FUN_14617267a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  code *local_30;
  undefined4 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_141237e80();
  lVar1 = FUN_1408bb964(param_1 + 0x14);
  if (lVar1 != 0) {
    lVar2 = FUN_1403ca142();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      lVar1 = FUN_140d27a2a(lVar1);
      if (*(longlong *)(param_1 + 0x48) == 0) {
        local_30 = FUN_146234afa;
        local_28 = 0;
        FUN_14617272c(lVar1 + 0x30,&local_20,param_1 + -0x30);
        *(undefined8 *)(param_1 + 0x48) = local_20;
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14617272c FUN_14617272c body=254 status=ok
// SIG undefined FUN_14617272c(void)

undefined8
FUN_14617272c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_FUN_14b9b49b0;
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



// FUNCTION 146172838 FUN_146172838 body=204 status=ok
// SIG undefined FUN_146172838(void)

void FUN_146172838(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4,param_5),
           cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1461728ea;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1461728ea:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 146172904 FUN_146172904 body=65 status=ok
// SIG undefined FUN_146172904(void)

void FUN_146172904(longlong *param_1)

{
  (**(code **)(*param_1 + 0x148))();
  (**(code **)(*param_1 + 0x128))(param_1,0);
  if (((int)param_1[4] != 0) && ((longlong *)param_1[3] != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014617293a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1[3] + 0x60))();
    return;
  }
  return;
}



// FUNCTION 146172946 FUN_146172946 body=80 status=ok
// SIG undefined FUN_146172946(void)

void FUN_146172946(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  char cVar2;
  
  cVar2 = (**(code **)(*param_1 + 0x120))();
  if (cVar2 == '\0') {
    (**(code **)(*param_1 + 0x100))(param_1,DAT_14c96b238);
    plVar1 = (longlong *)param_1[6];
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014617298b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0xa0))(plVar1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 146172998 FUN_146172998 body=145 status=ok
// SIG undefined FUN_146172998(void)

bool FUN_146172998(longlong param_1)

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



// FUNCTION 146172a2a FUN_146172a2a body=81 status=ok
// SIG undefined FUN_146172a2a(void)

void FUN_146172a2a(longlong param_1)

{
  undefined1 auStack_38 [36];
  undefined1 local_14 [4];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = DAT_14cb987a0;
  FUN_144a13f80(param_1 + 0x240,local_14,&local_10,0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146172a7c FUN_146172a7c body=116 status=ok
// SIG undefined FUN_146172a7c(void)

void FUN_146172a7c(longlong param_1)

{
  undefined1 auStack_48 [36];
  undefined1 local_24 [4];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = DAT_14cb987a0;
  FUN_144a13f80(param_1 + 0x1f0,local_24,&local_20,0);
  FUN_144a8b5fe(param_1 + 0x240,local_20);
  FUN_14571a8e6(param_1,1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146172af2 FUN_146172af2 body=64 status=ok
// SIG undefined FUN_146172af2(void)

void FUN_146172af2(longlong param_1)

{
  FUN_141600210();
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FUN_146172b40();
  }
  if (*(longlong **)(param_1 + 0x198) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146172b24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x198) + 0x90))();
    return;
  }
  return;
}



// FUNCTION 146172b40 FUN_146172b40 body=198 status=ok
// SIG undefined FUN_146172b40(void)

void FUN_146172b40(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  char *pcVar4;
  
  plVar2 = (longlong *)(**(code **)(*param_1 + 0xf8))();
  if (plVar2 != (longlong *)0x0) {
    pcVar4 = "keyboard";
    if (((int)param_1[0x15] != 0) && ((longlong *)param_1[0x14] != (longlong *)0x0)) {
      cVar1 = (**(code **)(*(longlong *)param_1[0x14] + 0x30))();
      if (cVar1 != '\0') {
        if ((int)param_1[0x15] == 0) {
          plVar3 = (longlong *)0x0;
        }
        else {
          plVar3 = (longlong *)param_1[0x14];
        }
        cVar1 = (**(code **)(*plVar3 + 0x58))();
        pcVar4 = "keyboard";
        if (cVar1 == '\x01') {
          pcVar4 = "gamepad";
        }
      }
    }
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x210))(plVar2);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x50))(plVar2,"Initial_Input_Mode",1);
      (**(code **)(*plVar2 + 0xd8))(plVar2,pcVar4);
                    /* WARNING: Could not recover jumptable at 0x000146172bf5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x58))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 146172c06 FUN_146172c06 body=24 status=ok
// SIG undefined FUN_146172c06(void)

bool FUN_146172c06(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146172c1e FUN_146172c1e body=39 status=ok
// SIG undefined FUN_146172c1e(void)

void FUN_146172c1e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000146172c41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 146172c4e FUN_146172c4e body=54 status=ok
// SIG undefined FUN_146172c4e(void)

void FUN_146172c4e(void)

{
  FUN_146172c84();
  if (DAT_14c948ee8 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c948ec8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146172c84 FUN_146172c84 body=378 status=ok
// SIG undefined FUN_146172c84(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146172c84(void)

{
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  undefined *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined *local_28;
  uint local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0x100000000;
  local_28 = &DAT_14c948ed8;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (DAT_14c948ef0 != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = &DAT_14c948ec8;
  local_50 = local_30;
  local_48 = local_28;
  local_40 = local_20;
  iStack_3c = iStack_1c;
  local_38 = local_18;
  local_34 = local_14;
  if (iStack_1c < *(int *)(local_28 + 0x18)) {
    do {
      if (*(longlong *)(*local_58 + 8 + (longlong)iStack_3c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_40 = local_40 & ~local_50._4_4_;
      FUN_1449c0562(&local_50);
    } while (iStack_3c < *(int *)(local_48 + 0x18));
  }
  _DAT_14c948ed0 = 0;
  if (DAT_14c948ed4 != 0) {
    FUN_1446f4a44(&DAT_14c948ec8,0);
  }
  _DAT_14c948ef8 = 0xffffffff;
  DAT_14c948ef0 = 0;
  if (0x80 < DAT_14c948ef4) {
    DAT_14c948ef4 = 0x80;
    FUN_1446efbd8(&DAT_14c948ed8,0);
  }
  if ((local_10 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146172e00 FUN_146172e00 body=54 status=ok
// SIG undefined FUN_146172e00(void)

void FUN_146172e00(void)

{
  FUN_146172e36();
  if (DAT_14cabb408 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cabb3e8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146172e36 FUN_146172e36 body=378 status=ok
// SIG undefined FUN_146172e36(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146172e36(void)

{
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  undefined *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined *local_28;
  uint local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0x100000000;
  local_28 = &DAT_14cabb3f8;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (DAT_14cabb410 != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = &DAT_14cabb3e8;
  local_50 = local_30;
  local_48 = local_28;
  local_40 = local_20;
  iStack_3c = iStack_1c;
  local_38 = local_18;
  local_34 = local_14;
  if (iStack_1c < *(int *)(local_28 + 0x18)) {
    do {
      if (*(longlong *)(*local_58 + 8 + (longlong)iStack_3c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_40 = local_40 & ~local_50._4_4_;
      FUN_1449c0562(&local_50);
    } while (iStack_3c < *(int *)(local_48 + 0x18));
  }
  DAT_14cabb3f0 = 0;
  if (DAT_14cabb3f4 != 0) {
    FUN_1446f4a44(&DAT_14cabb3e8,0);
  }
  _DAT_14cabb418 = 0xffffffff;
  DAT_14cabb410 = 0;
  if (0x80 < DAT_14cabb414) {
    DAT_14cabb414 = 0x80;
    FUN_1446efbd8(&DAT_14cabb3f8,0);
  }
  if ((local_10 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146172fb2 FUN_146172fb2 body=54 status=ok
// SIG undefined FUN_146172fb2(void)

void FUN_146172fb2(void)

{
  FUN_146172fe8();
  if (DAT_14caf3b08 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14caf3ae8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146172fe8 FUN_146172fe8 body=378 status=ok
// SIG undefined FUN_146172fe8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146172fe8(void)

{
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  undefined *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined *local_28;
  uint local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0x100000000;
  local_28 = &DAT_14caf3af8;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (DAT_14caf3b10 != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = &DAT_14caf3ae8;
  local_50 = local_30;
  local_48 = local_28;
  local_40 = local_20;
  iStack_3c = iStack_1c;
  local_38 = local_18;
  local_34 = local_14;
  if (iStack_1c < *(int *)(local_28 + 0x18)) {
    do {
      if (*(longlong *)(*local_58 + 8 + (longlong)iStack_3c * 0x28) != 0) {
        FUN_1400020a8();
      }
      local_40 = local_40 & ~local_50._4_4_;
      FUN_1449c0562(&local_50);
    } while (iStack_3c < *(int *)(local_48 + 0x18));
  }
  DAT_14caf3af0 = 0;
  if (DAT_14caf3af4 != 0) {
    FUN_140549ad6(&DAT_14caf3ae8,0);
  }
  _DAT_14caf3b18 = 0xffffffff;
  DAT_14caf3b10 = 0;
  if (0x80 < DAT_14caf3b14) {
    DAT_14caf3b14 = 0x80;
    FUN_1446efbd8(&DAT_14caf3af8,0);
  }
  if ((local_10 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146173164 FUN_146173164 body=54 status=ok
// SIG undefined FUN_146173164(void)

void FUN_146173164(void)

{
  FUN_14617319a();
  if (DAT_14cb25c08 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb25be8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14617319a FUN_14617319a body=378 status=ok
// SIG undefined FUN_14617319a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14617319a(void)

{
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  undefined *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined *local_28;
  uint local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0x100000000;
  local_28 = &DAT_14cb25bf8;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (DAT_14cb25c10 != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = &DAT_14cb25be8;
  local_50 = local_30;
  local_48 = local_28;
  local_40 = local_20;
  iStack_3c = iStack_1c;
  local_38 = local_18;
  local_34 = local_14;
  if (iStack_1c < *(int *)(local_28 + 0x18)) {
    do {
      if (*(longlong *)(*local_58 + 8 + (longlong)iStack_3c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_40 = local_40 & ~local_50._4_4_;
      FUN_1449c0562(&local_50);
    } while (iStack_3c < *(int *)(local_48 + 0x18));
  }
  _DAT_14cb25bf0 = 0;
  if (DAT_14cb25bf4 != 0) {
    FUN_1446f4a44(&DAT_14cb25be8,0);
  }
  _DAT_14cb25c18 = 0xffffffff;
  DAT_14cb25c10 = 0;
  if (0x80 < DAT_14cb25c14) {
    DAT_14cb25c14 = 0x80;
    FUN_1446efbd8(&DAT_14cb25bf8,0);
  }
  if ((local_10 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14617331e FUN_14617331e body=424 status=ok
// SIG undefined FUN_14617331e(void)

undefined8 * FUN_14617331e(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined8 uStack_90;
  longlong *local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_14130a082();
  *param_1 = &PTR_FUN_14aeab700;
  param_1[8] = 0;
  param_1[10] = 0;
  local_98 = param_1[8];
  local_50 = param_1[9];
  local_88 = (longlong *)param_1[10];
  local_40 = param_1[0xb];
  local_38 = param_1[0xc];
  uStack_30 = param_1[0xd];
  local_28 = param_1[0xe];
  uStack_20 = param_1[0xf];
  uVar1 = local_28;
  uVar2 = uStack_20;
  local_48 = local_88;
  local_58 = local_98;
  param_1[0xe] = CONCAT44(uStack_64,local_68);
  param_1[0xf] = CONCAT44(uStack_5c,uStack_60);
  param_1[0xc] = &PTR_LAB_14aeb56e0;
  param_1[0xd] = &LAB_143b4de1a;
  param_1[10] = 0;
  param_1[0xb] = uStack_80;
  param_1[8] = FUN_14841bf2a;
  param_1[9] = uStack_90;
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = local_38;
  uStack_70 = uStack_30;
  uStack_90 = local_50;
  uStack_80 = local_40;
  local_28 = uVar1;
  uStack_20 = uVar2;
  if (local_98 != 0) {
    plVar3 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar3 = &local_78;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  *param_1 = &PTR_FUN_14aeadc30;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461734c8 FUN_1461734c8 body=54 status=ok
// SIG undefined FUN_1461734c8(void)

void FUN_1461734c8(void)

{
  FUN_1461734fe();
  if (DAT_14cb4c2e8 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb4c2c8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1461734fe FUN_1461734fe body=378 status=ok
// SIG undefined FUN_1461734fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461734fe(void)

{
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  undefined *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined *local_28;
  uint local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0x100000000;
  local_28 = &DAT_14cb4c2d8;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (DAT_14cb4c2f0 != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = &DAT_14cb4c2c8;
  local_50 = local_30;
  local_48 = local_28;
  local_40 = local_20;
  iStack_3c = iStack_1c;
  local_38 = local_18;
  local_34 = local_14;
  if (iStack_1c < *(int *)(local_28 + 0x18)) {
    do {
      if (*(longlong *)(*local_58 + 0x20 + (longlong)iStack_3c * 0x40) != 0) {
        FUN_1400020a8();
      }
      local_40 = local_40 & ~local_50._4_4_;
      FUN_1449c0562(&local_50);
    } while (iStack_3c < *(int *)(local_48 + 0x18));
  }
  DAT_14cb4c2d0 = 0;
  if (DAT_14cb4c2d4 != 0) {
    FUN_140b7ce44(&DAT_14cb4c2c8,0);
  }
  _DAT_14cb4c2f8 = 0xffffffff;
  DAT_14cb4c2f0 = 0;
  if (0x80 < DAT_14cb4c2f4) {
    DAT_14cb4c2f4 = 0x80;
    FUN_1446efbd8(&DAT_14cb4c2d8,0);
  }
  if ((local_10 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14617367a FUN_14617367a body=54 status=ok
// SIG undefined FUN_14617367a(void)

void FUN_14617367a(void)

{
  FUN_1461736b0();
  if (DAT_14cb85a70 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb85a50 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1461736b0 FUN_1461736b0 body=378 status=ok
// SIG undefined FUN_1461736b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461736b0(void)

{
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  undefined *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined *local_28;
  uint local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0x100000000;
  local_28 = &DAT_14cb85a60;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (DAT_14cb85a78 != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = &DAT_14cb85a50;
  local_50 = local_30;
  local_48 = local_28;
  local_40 = local_20;
  iStack_3c = iStack_1c;
  local_38 = local_18;
  local_34 = local_14;
  if (iStack_1c < *(int *)(local_28 + 0x18)) {
    do {
      if (*(longlong *)(*local_58 + 8 + (longlong)iStack_3c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_40 = local_40 & ~local_50._4_4_;
      FUN_1449c0562(&local_50);
    } while (iStack_3c < *(int *)(local_48 + 0x18));
  }
  DAT_14cb85a58 = 0;
  if (DAT_14cb85a5c != 0) {
    FUN_1446f4a44(&DAT_14cb85a50,0);
  }
  _DAT_14cb85a80 = 0xffffffff;
  DAT_14cb85a78 = 0;
  if (0x80 < DAT_14cb85a7c) {
    DAT_14cb85a7c = 0x80;
    FUN_1446efbd8(&DAT_14cb85a60,0);
  }
  if ((local_10 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14617382c FUN_14617382c body=54 status=ok
// SIG undefined FUN_14617382c(void)

void FUN_14617382c(void)

{
  FUN_146173862();
  if (DAT_14cc1e738 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cc1e718 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146173862 FUN_146173862 body=378 status=ok
// SIG undefined FUN_146173862(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146173862(void)

{
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  undefined *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined *local_28;
  uint local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0x100000000;
  local_28 = &DAT_14cc1e728;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (DAT_14cc1e740 != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = &DAT_14cc1e718;
  local_50 = local_30;
  local_48 = local_28;
  local_40 = local_20;
  iStack_3c = iStack_1c;
  local_38 = local_18;
  local_34 = local_14;
  if (iStack_1c < *(int *)(local_28 + 0x18)) {
    do {
      if (*(longlong *)(*local_58 + 0x28 + (longlong)iStack_3c * 0x48) != 0) {
        FUN_1400020a8();
      }
      local_40 = local_40 & ~local_50._4_4_;
      FUN_1449c0562(&local_50);
    } while (iStack_3c < *(int *)(local_48 + 0x18));
  }
  DAT_14cc1e720 = 0;
  if (DAT_14cc1e724 != 0) {
    FUN_1403af08a(&DAT_14cc1e718,0);
  }
  _DAT_14cc1e748 = 0xffffffff;
  DAT_14cc1e740 = 0;
  if (0x80 < DAT_14cc1e744) {
    DAT_14cc1e744 = 0x80;
    FUN_1446efbd8(&DAT_14cc1e728,0);
  }
  if ((local_10 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461739de FUN_1461739de body=404 status=ok
// SIG undefined FUN_1461739de(void)

void FUN_1461739de(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
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
  FUN_1416005fa(local_18,local_20,local_28,local_30);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146173b74 FUN_146173b74 body=55 status=ok
// SIG undefined FUN_146173b74(void)

void FUN_146173b74(longlong *param_1)

{
  FUN_146173bac(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146173bac FUN_146173bac body=378 status=ok
// SIG undefined FUN_146173bac(void)

void FUN_146173bac(longlong *param_1,int param_2)

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
      FUN_146b48c26((longlong)iStack_54 * 0x28 + *local_70);
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
    FUN_140549ad6(param_1,param_2);
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



// FUNCTION 146173d3e FUN_146173d3e body=195 status=ok
// SIG undefined FUN_146173d3e(void)

void FUN_146173d3e(short *param_1,longlong param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar7 = *(longlong **)(param_2 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == *param_1) goto LAB_146173d71;
      plVar7 = plVar7 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_146173d71:
  iVar1 = *(int *)(param_2 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar7 + 1));
  }
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  UNLOCK();
  lVar5 = *(longlong *)(param_1 + 4);
  plVar6 = (longlong *)((longlong)param_3 * (ulonglong)*(byte *)((longlong)plVar7 + 0x1c) + *plVar7)
  ;
  if (DAT_14c950c29 == '\x01') {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar5 = *(longlong *)(param_1 + 4);
    }
  }
  *plVar6 = lVar5;
  plVar6[1] = *(longlong *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xe);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  uVar4 = *(undefined4 *)(param_1 + 0x12);
  *(undefined4 *)(plVar6 + 2) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)((longlong)plVar6 + 0x14) = uVar2;
  *(undefined4 *)(plVar6 + 3) = uVar3;
  *(undefined4 *)((longlong)plVar6 + 0x1c) = uVar4;
  if ((char)param_1[0x14] == '\x01') {
    *(undefined1 *)(param_1 + 0x14) = 0;
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 3) = (int)plVar7[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000146173ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar7 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 146173e0c FUN_146173e0c body=422 status=ok
// SIG undefined FUN_146173e0c(void)

undefined8 * FUN_146173e0c(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1446f470e(&local_38,L"Preview",1);
  FUN_140486538(param_2,local_38);
  FUN_14048646a(param_2 + 0x20,local_38,0,0);
  FUN_1446f470e(&local_40,L"SpawnComponent",1);
  uVar1 = FUN_145a8c524();
  FUN_140486538(param_2,local_40);
  FUN_14048646a(param_2 + 0x20,local_40,uVar1,0);
  FUN_1407fbf5e(param_1,param_2);
  *param_1 = &PTR_FUN_14b7d27c0;
  param_1[0x72] = &PTR_FUN_14b7d2e00;
  param_1[0x73] = &PTR_FUN_14b7d2e20;
  param_1[0x83] = &PTR_FUN_14b7d2e40;
  param_1[0x84] = &PTR_FUN_14b7d2e60;
  param_1[0x85] = &PTR_FUN_14b7d2e80;
  param_1[0x94] = 0;
  FUN_1446f470e(&local_48,L"Perch",1);
  uVar1 = FUN_14061d078();
  local_50 = 0;
  local_58 = 1;
  lVar2 = FUN_14048696c(param_1,local_48,uVar1,uVar1);
  if ((lVar2 == 0) || (DAT_14c950c29 == '\0')) {
    param_1[0x94] = lVar2;
    if (lVar2 == 0) goto LAB_146173f7c;
  }
  else {
    FUN_1456cec3c(lVar2);
    param_1[0x94] = lVar2;
  }
  FUN_140486fc4(lVar2,param_1[0x39],0);
LAB_146173f7c:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146173fb4 FUN_146173fb4 body=148 status=ok
// SIG undefined FUN_146173fb4(void)

undefined8 *
FUN_146173fb4(undefined8 *param_1,undefined4 *param_2,undefined8 param_3,undefined4 *param_4,
             undefined1 param_5)

{
  undefined1 auStack_58 [32];
  undefined4 local_38 [2];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = *param_4;
  local_30 = *(longlong *)(param_4 + 2);
  if ((local_30 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_14617404a(param_1,param_3,local_38);
  *param_1 = &PTR_FUN_14b9ab7c0;
  *(undefined4 *)(param_1 + 4) = *param_2;
  *(undefined1 *)((longlong)param_1 + 0x24) = param_5;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14617404a FUN_14617404a body=68 status=ok
// SIG undefined FUN_14617404a(void)

undefined8 * FUN_14617404a(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14b4741c8;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = *param_3;
  lVar1 = *(longlong *)(param_3 + 2);
  param_1[3] = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 14617408e FUN_14617408e body=54 status=ok
// SIG undefined FUN_14617408e(void)

void FUN_14617408e(void)

{
  FUN_1461740c4();
  if (DAT_14c9a16f0 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c9a16d0 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1461740c4 FUN_1461740c4 body=380 status=ok
// SIG undefined FUN_1461740c4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461740c4(void)

{
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  undefined *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined *local_28;
  uint local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0x100000000;
  local_28 = &DAT_14c9a16e0;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (DAT_14c9a16f8 != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = &DAT_14c9a16d0;
  local_50 = local_30;
  local_48 = local_28;
  local_40 = local_20;
  iStack_3c = iStack_1c;
  local_38 = local_18;
  local_34 = local_14;
  if (iStack_1c < *(int *)(local_28 + 0x18)) {
    do {
      if (*(longlong *)(*local_58 + 0x20 + (longlong)iStack_3c * 0x40) != 0) {
        FUN_1400020a8();
      }
      local_40 = local_40 & ~local_50._4_4_;
      FUN_1449c0562(&local_50);
    } while (iStack_3c < *(int *)(local_48 + 0x18));
  }
  DAT_14c9a16d8 = 0;
  if (DAT_14c9a16dc != 0) {
    FUN_140b7ce44(&DAT_14c9a16d0,0);
  }
  _DAT_14c9a1700 = 0xffffffff;
  DAT_14c9a16f8 = 0;
  if (0x80 < DAT_14c9a16fc) {
    DAT_14c9a16fc = 0x80;
    FUN_1446efbd8(&DAT_14c9a16e0,0);
  }
  if ((local_10 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146174242 FUN_146174242 body=47 status=ok
// SIG undefined FUN_146174242(void)

void FUN_146174242(void)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  piVar1 = (int *)(lVar2 + 0xfc8);
  *piVar1 = *piVar1 + 1;
  FUN_141601260();
  piVar1 = (int *)(lVar2 + 0xfc8);
  *piVar1 = *piVar1 + -1;
  return;
}



// FUNCTION 14617427a FUN_14617427a body=426 status=ok
// SIG undefined FUN_14617427a(void)

undefined8 * FUN_14617427a(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined1 auStack_c8 [40];
  undefined8 **local_a0;
  ulonglong *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14078cbfa();
  *param_1 = &PTR_FUN_14ae29f80;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  uVar1 = FUN_144830b78(param_1 + 0x19,&DAT_14cb42160);
  *(undefined4 *)(param_1 + 0x19) = uVar1;
  *(undefined1 *)((longlong)param_1 + 0xcc) = 1;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1b) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0x40000000;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f000000;
  FUN_140120f5c(param_1 + 0x1d);
  FUN_140120f5c(param_1 + 0x24);
  FUN_140120f5c(param_1 + 0x2b);
  FUN_140120f5c(param_1 + 0x32);
  FUN_140120f5c(param_1 + 0x39);
  FUN_140120f5c(param_1 + 0x40);
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  *(undefined1 *)(param_1 + 0x51) = 1;
  *(undefined4 *)((longlong)param_1 + 0x28c) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x52) = 1;
  *(undefined4 *)((longlong)param_1 + 0x294) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x53) = 1;
  *(undefined8 *)((longlong)param_1 + 0x29c) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2a4) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x55) = 1;
  *(undefined4 *)((longlong)param_1 + 0x2ac) = 0xffffffff;
  local_a0 = &local_90;
  local_98 = local_60;
  local_90 = param_1 + 0x1d;
  local_88 = param_1 + 0x24;
  local_80 = param_1 + 0x2b;
  local_78 = param_1 + 0x32;
  local_70 = param_1 + 0x39;
  local_68 = param_1 + 0x40;
  FUN_14078cc5e(param_1 + 0x15);
  if ((local_60[0] ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146174426 FUN_146174426 body=59 status=ok
// SIG undefined FUN_146174426(void)

void FUN_146174426(longlong *param_1)

{
  FUN_1412d963a(param_1[4],(int)param_1[5]);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146174462 FUN_146174462 body=147 status=ok
// SIG undefined FUN_146174462(void)

void FUN_146174462(longlong param_1,int param_2)

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



// FUNCTION 1461744f6 FUN_1461744f6 body=165 status=ok
// SIG undefined FUN_1461744f6(void)

undefined8 * FUN_1461744f6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
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
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[2] = param_2[2];
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  uVar2 = param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_148b7ad3e(param_1 + 4,iVar1,0);
    FUN_148b7adb1(param_1[4],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 14617459c FUN_14617459c body=298 status=ok
// SIG undefined FUN_14617459c(void)

void FUN_14617459c(undefined8 param_1)

{
  undefined1 auStack_b8 [32];
  undefined1 *local_98;
  undefined8 local_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined1 local_70 [8];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1446f470e(&local_58,L"Slots",1);
  FUN_145a5eba6(param_1,local_50,local_58,0x1e8);
  FUN_1461746c8(local_50);
  local_70[0] = 1;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1446f470e(&local_78,L"PreferredSize",1);
  local_98 = local_70;
  FUN_14134b99c(param_1,local_88,local_78,0x1e0);
  FUN_1449db362(&local_68);
  local_70[0] = 1;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1446f470e(&local_90,L"HAlign",1);
  local_98 = local_70;
  FUN_14134b99c(param_1,local_88,local_90,0x1e4);
  FUN_1449db362(&local_68);
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461746c8 FUN_1461746c8 body=136 status=ok
// SIG undefined FUN_1461746c8(void)

void FUN_1461746c8(undefined8 param_1)

{
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined1 local_58 [24];
  undefined8 local_40;
  undefined1 local_38 [8];
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38[0] = 1;
  local_30 = 0;
  uStack_28 = 0;
  FUN_1446ddc76(&local_40,"Slot.Padding",1);
  local_68 = local_38;
  FUN_1458dbc34(param_1,local_58,local_40,8);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146174752 FUN_146174752 body=162 status=ok
// SIG undefined FUN_146174752(void)

void FUN_146174752(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_141601fa2(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_146174799;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_146174799:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461747f6 FUN_1461747f6 body=162 status=ok
// SIG undefined FUN_1461747f6(void)

void FUN_1461747f6(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1416020b4(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14617483d;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14617483d:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14617489a FUN_14617489a body=313 status=ok
// SIG undefined FUN_14617489a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14617489a(void)

{
  if ((DAT_14caef897 & 2) == 0) {
    DAT_14caef897 = DAT_14caef897 | 2;
    _DAT_14caef838 = L"FMeshMaterialShaderMap";
    _DAT_14caef850 = FUN_146826540;
    _DAT_14caef858 = FUN_146825d77;
    _DAT_14caef860 = FUN_146825fd6;
    _DAT_14caef868 = FUN_1407e02ea;
    DAT_14caef870 = FUN_146826273;
    _DAT_14caef848 = FUN_147bbffd6;
    _DAT_14caef888 = 0xffffffff00000068;
    _DAT_14caef890 = 8;
    DAT_14caef894 = 0;
    _DAT_14caef878 = &LAB_147bc001e;
    _DAT_14caf0a00 = L"VertexFactoryTypeName";
    DAT_14caf0a2a = FUN_140850cc5();
    _DAT_14caf0a08 = FUN_1457fb358();
    _DAT_14caf0a18 = &LAB_14682652b;
    _DAT_14caf0a20 = &DAT_100000060;
    _DAT_14caf0a28 = 0;
    _DAT_14caf0a10 = DAT_14caef840;
    DAT_14caef840 = &DAT_14caf0a00;
    FUN_1461749d4();
    FUN_1407e00cc(&DAT_14caef830);
    return;
  }
  return;
}



// FUNCTION 1461749d4 FUN_1461749d4 body=123 status=ok
// SIG undefined FUN_1461749d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461749d4(void)

{
  _DAT_14caf1230 = L"BASE";
  DAT_14caf125a = 4;
  _DAT_14caf1238 = FUN_1457fb4a4();
  _DAT_14caf1240 = DAT_14caef840;
  _DAT_14caf1248 = &LAB_14682652b;
  DAT_14caef840 = &DAT_14caf1230;
  DAT_14caef895 = DAT_14caef895 + '\x01';
  _DAT_14caf1250 = 0x100000000;
  if (*(char *)(_DAT_14caf1238 + 100) != '\0') {
    DAT_14caef896 = DAT_14caef896 + '\x01';
  }
  return;
}



// FUNCTION 146174a50 FUN_146174a50 body=313 status=ok
// SIG undefined FUN_146174a50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146174a50(void)

{
  if ((DAT_14caf171f & 2) == 0) {
    DAT_14caf171f = DAT_14caf171f | 2;
    _DAT_14caf16c0 = L"FMeshParticleVertexFactoryShaderParameters";
    _DAT_14caf16d8 = FUN_146826540;
    _DAT_14caf16e0 = FUN_146825d77;
    _DAT_14caf16e8 = FUN_146825fd6;
    _DAT_14caf16f0 = FUN_1407e02ea;
    _DAT_14caf16f8 = FUN_146826273;
    _DAT_14caf16d0 = &LAB_147bc8292;
    _DAT_14caf1710 = 0xffffffff00000008;
    _DAT_14caf1718 = 4;
    DAT_14caf171c = 0;
    _DAT_14caf1700 = &LAB_147bc82a0;
    _DAT_14caf1e78 = L"PrevTransformBuffer";
    DAT_14caf1ea2 = FUN_140850cc5();
    _DAT_14caf1e80 = FUN_140fb78d0();
    _DAT_14caf1e90 = &LAB_14682652b;
    _DAT_14caf1e98 = &DAT_100000004;
    _DAT_14caf1ea0 = 0;
    _DAT_14caf1e88 = DAT_14caf16c8;
    DAT_14caf16c8 = &DAT_14caf1e78;
    FUN_146174b8a();
    FUN_1407e00cc(&DAT_14caf16b8);
    return;
  }
  return;
}



// FUNCTION 146174b8a FUN_146174b8a body=123 status=ok
// SIG undefined FUN_146174b8a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146174b8a(void)

{
  _DAT_14caf1ee8 = L"BASE";
  DAT_14caf1f12 = 4;
  _DAT_14caf1ef0 = FUN_1412f7d22();
  _DAT_14caf1ef8 = DAT_14caf16c8;
  _DAT_14caf1f00 = &LAB_14682652b;
  DAT_14caf16c8 = &DAT_14caf1ee8;
  DAT_14caf171d = DAT_14caf171d + '\x01';
  _DAT_14caf1f08 = 0x100000000;
  if (*(char *)(_DAT_14caf1ef0 + 100) != '\0') {
    DAT_14caf171e = DAT_14caf171e + '\x01';
  }
  return;
}



// FUNCTION 146174c06 FUN_146174c06 body=68 status=ok
// SIG undefined FUN_146174c06(void)

void FUN_146174c06(undefined8 param_1)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x2e8);
  memset(_Dst,0,0x2e8);
  FUN_146174c4a(_Dst);
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 146174c4a FUN_146174c4a body=368 status=ok
// SIG undefined FUN_146174c4a(void)

undefined8 * FUN_146174c4a(undefined8 *param_1)

{
  FUN_1408f3f9e();
  *param_1 = &PTR_FUN_14b8a1d80;
  FUN_144a5dc74(param_1 + 0x16);
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  FUN_144a5dc74(param_1 + 0x1d);
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  FUN_144a5dc74(param_1 + 0x22);
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  param_1[0x29] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  FUN_144a5dc74(param_1 + 0x2b);
  *(undefined4 *)(param_1 + 0x2d) = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x194) = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 0x3b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x184) = 0;
  *(undefined8 *)((longlong)param_1 + 0x189) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cc) = 0;
  FUN_14124e07a(param_1 + 0x3c);
  FUN_14124e07a(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  return param_1;
}



// FUNCTION 146174dba FUN_146174dba body=54 status=ok
// SIG undefined FUN_146174dba(void)

void FUN_146174dba(void)

{
  FUN_146174df0();
  if (DAT_14c949640 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c949620 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146174df0 FUN_146174df0 body=382 status=ok
// SIG undefined FUN_146174df0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146174df0(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = 0x100000000;
  local_38 = &DAT_14c949630;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  if (DAT_14c949648 != 0) {
    FUN_1449c0562(&local_40);
  }
  local_68 = &DAT_14c949620;
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  if (iStack_2c < *(int *)(local_38 + 0x18)) {
    do {
      lVar1 = *local_68;
      lVar2 = (longlong)iStack_4c * 0x60;
      *(undefined4 *)(lVar1 + 0x50 + lVar2) = 0;
      if (*(longlong *)(lVar1 + 0x48 + lVar2) != 0) {
        FUN_1400020a8();
      }
      FUN_1410402b6(lVar1 + lVar2 + 8);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < *(int *)(local_58 + 0x18));
  }
  DAT_14c949628 = 0;
  if (DAT_14c94962c != 0) {
    FUN_1448fc38a(&DAT_14c949620,0);
  }
  _DAT_14c949650 = 0xffffffff;
  DAT_14c949648 = 0;
  if (0x80 < DAT_14c94964c) {
    DAT_14c94964c = 0x80;
    FUN_1446efbd8(&DAT_14c949630,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146174f70 FUN_146174f70 body=54 status=ok
// SIG undefined FUN_146174f70(void)

void FUN_146174f70(void)

{
  FUN_146174fa6();
  if (DAT_14c963da8 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c963d88 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146174fa6 FUN_146174fa6 body=382 status=ok
// SIG undefined FUN_146174fa6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146174fa6(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = 0x100000000;
  local_38 = &DAT_14c963d98;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  if (DAT_14c963db0 != 0) {
    FUN_1449c0562(&local_40);
  }
  local_68 = &DAT_14c963d88;
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  if (iStack_2c < *(int *)(local_38 + 0x18)) {
    do {
      lVar1 = *local_68;
      lVar2 = (longlong)iStack_4c * 0x60;
      *(undefined4 *)(lVar1 + 0x50 + lVar2) = 0;
      if (*(longlong *)(lVar1 + 0x48 + lVar2) != 0) {
        FUN_1400020a8();
      }
      FUN_14007efaa(lVar1 + lVar2 + 8);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < *(int *)(local_58 + 0x18));
  }
  DAT_14c963d90 = 0;
  if (DAT_14c963d94 != 0) {
    FUN_1448fc38a(&DAT_14c963d88,0);
  }
  _DAT_14c963db8 = 0xffffffff;
  DAT_14c963db0 = 0;
  if (0x80 < DAT_14c963db4) {
    DAT_14c963db4 = 0x80;
    FUN_1446efbd8(&DAT_14c963d98,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146175126 FUN_146175126 body=54 status=ok
// SIG undefined FUN_146175126(void)

void FUN_146175126(void)

{
  FUN_14617515c();
  if (DAT_14ca75e60 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14ca75e40 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14617515c FUN_14617515c body=382 status=ok
// SIG undefined FUN_14617515c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14617515c(void)

{
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  undefined *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined *local_28;
  uint local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0x100000000;
  local_28 = &DAT_14ca75e50;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (DAT_14ca75e68 != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = &DAT_14ca75e40;
  local_50 = local_30;
  local_48 = local_28;
  local_40 = local_20;
  iStack_3c = iStack_1c;
  local_38 = local_18;
  local_34 = local_14;
  if (iStack_1c < *(int *)(local_28 + 0x18)) {
    do {
      if (*(longlong *)(*local_58 + 0x10 + (longlong)iStack_3c * 0x30) != 0) {
        FUN_1400020a8();
      }
      local_40 = local_40 & ~local_50._4_4_;
      FUN_1449c0562(&local_50);
    } while (iStack_3c < *(int *)(local_48 + 0x18));
  }
  _DAT_14ca75e48 = 0;
  if (DAT_14ca75e4c != 0) {
    FUN_14494313c(&DAT_14ca75e40,0);
  }
  _DAT_14ca75e70 = 0xffffffff;
  DAT_14ca75e68 = 0;
  if (0x80 < DAT_14ca75e6c) {
    DAT_14ca75e6c = 0x80;
    FUN_1446efbd8(&DAT_14ca75e50,0);
  }
  if ((local_10 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461752dc FUN_1461752dc body=64 status=ok
// SIG undefined FUN_1461752dc(void)

void FUN_1461752dc(void)

{
  if (DAT_14caddfcc != 0) {
    DAT_14caddfcc = 0;
    FUN_1446f8d3c(&DAT_14caddfc0,DAT_14caddfc8,0,8,8);
  }
  return;
}



// FUNCTION 14617531c FUN_14617531c body=38 status=ok
// SIG undefined FUN_14617531c(void)

undefined8 FUN_14617531c(undefined8 param_1,int param_2)

{
  FUN_146175342();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146175342 FUN_146175342 body=399 status=ok
// SIG undefined FUN_146175342(void)

void FUN_146175342(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b8b82a0;
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0x25],*(undefined4 *)(param_1 + 0x26));
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0x23],*(undefined4 *)(param_1 + 0x24));
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_1401b9920(param_1[0x21],*(undefined4 *)(param_1 + 0x22));
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  FUN_1401b9920(param_1[0x1f],*(undefined4 *)(param_1 + 0x20));
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0x19] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x19] + 0x10))();
  }
  if ((longlong *)param_1[0x17] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x17] + 0x10))();
  }
  FUN_140fe7f26(param_1);
  return;
}



// FUNCTION 1461754d2 FUN_1461754d2 body=54 status=ok
// SIG undefined FUN_1461754d2(void)

void FUN_1461754d2(void)

{
  FUN_146175508();
  if (DAT_14cbe7a58 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cbe7a38 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146175508 FUN_146175508 body=382 status=ok
// SIG undefined FUN_146175508(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146175508(void)

{
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  undefined *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined *local_28;
  uint local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0x100000000;
  local_28 = &DAT_14cbe7a48;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (DAT_14cbe7a60 != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = &DAT_14cbe7a38;
  local_50 = local_30;
  local_48 = local_28;
  local_40 = local_20;
  iStack_3c = iStack_1c;
  local_38 = local_18;
  local_34 = local_14;
  if (iStack_1c < *(int *)(local_28 + 0x18)) {
    do {
      if (*(longlong *)(*local_58 + 0x10 + (longlong)iStack_3c * 0x30) != 0) {
        FUN_1400020a8();
      }
      local_40 = local_40 & ~local_50._4_4_;
      FUN_1449c0562(&local_50);
    } while (iStack_3c < *(int *)(local_48 + 0x18));
  }
  DAT_14cbe7a40 = 0;
  if (DAT_14cbe7a44 != 0) {
    FUN_14494313c(&DAT_14cbe7a38,0);
  }
  _DAT_14cbe7a68 = 0xffffffff;
  DAT_14cbe7a60 = 0;
  if (0x80 < DAT_14cbe7a64) {
    DAT_14cbe7a64 = 0x80;
    FUN_1446efbd8(&DAT_14cbe7a48,0);
  }
  if ((local_10 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146175688 FUN_146175688 body=54 status=ok
// SIG undefined FUN_146175688(void)

void FUN_146175688(void)

{
  FUN_1461756be();
  if (DAT_14cb4b548 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb4b528 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1461756be FUN_1461756be body=383 status=ok
// SIG undefined FUN_1461756be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461756be(void)

{
  undefined8 *puVar1;
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  undefined *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined *local_28;
  uint local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0x100000000;
  local_28 = &DAT_14cb4b538;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (DAT_14cb4b550 != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = &DAT_14cb4b528;
  local_50 = local_30;
  local_48 = local_28;
  local_40 = local_20;
  iStack_3c = iStack_1c;
  local_38 = local_18;
  local_34 = local_14;
  if (iStack_1c < *(int *)(local_28 + 0x18)) {
    do {
      puVar1 = *(undefined8 **)(*local_58 + 8 + (longlong)iStack_3c * 0x18);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      local_40 = local_40 & ~local_50._4_4_;
      FUN_1449c0562(&local_50);
    } while (iStack_3c < *(int *)(local_48 + 0x18));
  }
  _DAT_14cb4b530 = 0;
  if (DAT_14cb4b534 != 0) {
    FUN_144727cd0(&DAT_14cb4b528,0);
  }
  _DAT_14cb4b558 = 0xffffffff;
  DAT_14cb4b550 = 0;
  if (0x80 < DAT_14cb4b554) {
    DAT_14cb4b554 = 0x80;
    FUN_1446efbd8(&DAT_14cb4b538,0);
  }
  if ((local_10 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14617583e FUN_14617583e body=305 status=ok
// SIG undefined FUN_14617583e(void)

void FUN_14617583e(longlong *param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_146175970();
  FUN_14581bfbc(param_1,param_2);
  uVar3 = FUN_145d6e79a();
  uVar4 = (**(code **)(*param_1 + 0x180))(param_1);
  FUN_14160233c(uVar3,uVar4,param_2);
  uVar3 = FUN_141546c72();
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_149e020b0;
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
  *local_38 = &PTR_FUN_14b98a4e0;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_1);
  puVar1[4] = param_1;
  uVar4 = (**(code **)(*param_1 + 0x180))(param_1);
  FUN_14160246e(uVar3,uVar4,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146175970 FUN_146175970 body=13 status=ok
// SIG undefined FUN_146175970(void)

void FUN_146175970(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014617597a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x400))();
  return;
}



// FUNCTION 14617597e FUN_14617597e body=85 status=ok
// SIG undefined FUN_14617597e(void)

void FUN_14617597e(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x210))();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x50))(plVar1,param_2,1);
    FUN_1461759d3(plVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x0001461759c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x58))(plVar1);
    return;
  }
  return;
}



// FUNCTION 1461759d3 FUN_1461759d3 body=189 status=ok
// SIG undefined FUN_1461759d3(void)

void FUN_1461759d3(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  
  cVar2 = (**(code **)(*param_1 + 0x158))
                    (param_1,param_2,FUN_148e9c44c,FUN_148e9c4b2,&LAB_148e9c4ad,&LAB_148e9c435);
  if (cVar2 == '\0') {
    (**(code **)(*param_1 + 0x160))(param_1,(longlong)(int)param_2[1]);
    if (0 < (int)param_2[1]) {
      lVar5 = 0;
      iVar4 = 0;
      do {
        lVar1 = *param_2;
        (**(code **)(*param_1 + 0x28))(param_1);
        uVar3 = FUN_146175a90();
        FUN_1401e1be1(param_1,lVar1 + lVar5,uVar3);
        (**(code **)(*param_1 + 0x48))(param_1,lVar1 + lVar5);
        iVar4 = iVar4 + 1;
        lVar5 = lVar5 + 0x60;
      } while (iVar4 < (int)param_2[1]);
    }
                    /* WARNING: Could not recover jumptable at 0x000146175a7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x168))(param_1);
    return;
  }
  return;
}



// FUNCTION 146175a90 FUN_146175a90 body=55 status=ok
// SIG undefined FUN_146175a90(void)

void FUN_146175a90(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb0718 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb0718 = FUN_140002ddd(FUN_1465f15ee,uVar1,L"OffScreenIconData");
  }
  return;
}



// FUNCTION 146175ad2 FUN_146175ad2 body=428 status=ok
// SIG undefined FUN_146175ad2(void)

undefined8 * FUN_146175ad2(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_145c12328();
  *param_1 = &PTR_FUN_14abacb50;
  param_1[0x72] = &PTR_FUN_14abad320;
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) {
    return param_1;
  }
  puVar3 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_14abac950;
  puVar3[3] = 0;
  puVar3[4] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(puVar3 + 5));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar3 + 5),4000);
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14abb5210;
  plVar4[2] = (longlong)puVar3;
  if ((puVar3 == (undefined8 *)0x0) ||
     (((puVar3[1] != 0 && (puVar3[2] != 0)) && (0 < *(int *)(puVar3[2] + 8))))) goto LAB_146175c07;
  if (plVar4 == (longlong *)0x0) {
    puVar3[1] = puVar3;
    plVar5 = (longlong *)puVar3[2];
    if (plVar5 == (longlong *)0x0) goto LAB_146175c07;
LAB_146175bc0:
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
    puVar3[2] = plVar4;
    if (plVar4 == (longlong *)0x0) goto LAB_146175c07;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    puVar3[1] = puVar3;
    if ((longlong *)puVar3[2] != plVar4) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
      plVar5 = (longlong *)puVar3[2];
      if (plVar5 != (longlong *)0x0) goto LAB_146175bc0;
      puVar3[2] = plVar4;
    }
  }
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
LAB_146175c07:
  param_1[0x8d] = puVar3;
  plVar5 = (longlong *)param_1[0x8e];
  if (plVar4 == plVar5) {
    if (plVar4 == (longlong *)0x0) {
      return param_1;
    }
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) {
      return param_1;
    }
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar5 = plVar4;
  }
  else {
    param_1[0x8e] = plVar4;
    if (plVar5 == (longlong *)0x0) {
      return param_1;
    }
    LOCK();
    plVar4 = plVar5 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) {
      return param_1;
    }
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  return param_1;
}



// FUNCTION 146175c7e FUN_146175c7e body=54 status=ok
// SIG undefined FUN_146175c7e(void)

void FUN_146175c7e(void)

{
  FUN_146175cb4();
  if (DAT_14cb25a70 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb25a50 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146175cb4 FUN_146175cb4 body=384 status=ok
// SIG undefined FUN_146175cb4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146175cb4(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  undefined *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined *local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0x100000000;
  local_30 = &DAT_14cb25a60;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if (DAT_14cb25a78 != 0) {
    FUN_1449c0562(&local_38);
  }
  local_60 = &DAT_14cb25a50;
  local_58 = local_38;
  local_50 = local_30;
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  if (iStack_24 < *(int *)(local_30 + 0x18)) {
    do {
      plVar3 = *(longlong **)(*local_60 + 0x10 + (longlong)iStack_44 * 0x20);
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
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < *(int *)(local_50 + 0x18));
  }
  DAT_14cb25a58 = 0;
  if (DAT_14cb25a5c != 0) {
    FUN_1446f4a44(&DAT_14cb25a50,0);
  }
  _DAT_14cb25a80 = 0xffffffff;
  DAT_14cb25a78 = 0;
  if (0x80 < DAT_14cb25a7c) {
    DAT_14cb25a7c = 0x80;
    FUN_1446efbd8(&DAT_14cb25a60,0);
  }
  if ((local_18 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146175e36 FUN_146175e36 body=54 status=ok
// SIG undefined FUN_146175e36(void)

void FUN_146175e36(void)

{
  FUN_146175e6c();
  if (DAT_14cb85798 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb85778 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146175e6c FUN_146175e6c body=384 status=ok
// SIG undefined FUN_146175e6c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146175e6c(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  undefined *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined *local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0x100000000;
  local_30 = &DAT_14cb85788;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if (DAT_14cb857a0 != 0) {
    FUN_1449c0562(&local_38);
  }
  local_60 = &DAT_14cb85778;
  local_58 = local_38;
  local_50 = local_30;
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  if (iStack_24 < *(int *)(local_30 + 0x18)) {
    do {
      plVar3 = *(longlong **)(*local_60 + 0x10 + (longlong)iStack_44 * 0x20);
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
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < *(int *)(local_50 + 0x18));
  }
  DAT_14cb85780 = 0;
  if (DAT_14cb85784 != 0) {
    FUN_1446f4a44(&DAT_14cb85778,0);
  }
  _DAT_14cb857a8 = 0xffffffff;
  DAT_14cb857a0 = 0;
  if (0x80 < DAT_14cb857a4) {
    DAT_14cb857a4 = 0x80;
    FUN_1446efbd8(&DAT_14cb85788,0);
  }
  if ((local_18 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146175ff8 FUN_146175ff8 body=428 status=ok
// SIG undefined FUN_146175ff8(void)

undefined8 * FUN_146175ff8(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1406ed334();
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = DAT_14cab4a28;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x1b) = 1;
  *param_1 = &PTR_FUN_14a4ae870;
  FUN_1406ed278(param_1 + 0x24);
  *(undefined2 *)(param_1 + 0x46) = 0x201;
  *(uint *)((longlong)param_1 + 0x234) = (*(uint *)((longlong)param_1 + 0x234) & 0xfffffff8) + 1;
  plVar4 = (longlong *)FUN_14001cc68(0x60,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14a492060;
  plVar1 = plVar4 + 2;
  FUN_1459a4720(plVar1,param_1 + 0x24);
  local_38 = plVar1;
  local_30 = plVar4;
  FUN_140aec6f8(&local_38,plVar1);
  plVar1 = local_30;
  if (local_30 == (longlong *)0x0) {
    param_1[0x1c] = local_38;
    plVar4 = (longlong *)param_1[0x1d];
    if (plVar4 == (longlong *)0x0) goto LAB_1461760f8;
    param_1[0x1d] = 0;
LAB_14617614a:
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_1461760f8;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar1 = plVar4;
  }
  else {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    param_1[0x1c] = local_38;
    plVar4 = (longlong *)param_1[0x1d];
    if (local_30 != plVar4) {
      param_1[0x1d] = local_30;
      if (plVar4 == (longlong *)0x0) goto LAB_1461760f8;
      goto LAB_14617614a;
    }
    LOCK();
    plVar4 = local_30 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_1461760f8;
    (**(code **)*local_30)(local_30);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_1461760f8:
  plVar1 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_30 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461761a6 FUN_1461761a6 body=54 status=ok
// SIG undefined FUN_1461761a6(void)

void FUN_1461761a6(void)

{
  FUN_1461761dc();
  if (DAT_14cab7750 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cab7730 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1461761dc FUN_1461761dc body=385 status=ok
// SIG undefined FUN_1461761dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461761dc(void)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  undefined *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined *local_28;
  uint local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0x100000000;
  local_28 = &DAT_14cab7740;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (DAT_14cab7758 != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = &DAT_14cab7730;
  local_50 = local_30;
  local_48 = local_28;
  local_40 = local_20;
  iStack_3c = iStack_1c;
  local_38 = local_18;
  local_34 = local_14;
  if (iStack_1c < *(int *)(local_28 + 0x18)) {
    do {
      plVar2 = *(longlong **)(*local_58 + 0x10 + (longlong)iStack_3c * 0x20);
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      local_40 = local_40 & ~local_50._4_4_;
      FUN_1449c0562(&local_50);
    } while (iStack_3c < *(int *)(local_48 + 0x18));
  }
  _DAT_14cab7738 = 0;
  if (DAT_14cab773c != 0) {
    FUN_1446f4a44(&DAT_14cab7730,0);
  }
  _DAT_14cab7760 = 0xffffffff;
  DAT_14cab7758 = 0;
  if (0x80 < DAT_14cab775c) {
    DAT_14cab775c = 0x80;
    FUN_1446efbd8(&DAT_14cab7740,0);
  }
  if ((local_10 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14617635e FUN_14617635e body=96 status=ok
// SIG undefined FUN_14617635e(void)

ulonglong FUN_14617635e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_1461763a1:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_1461763a1;
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
    bVar7 = *(longlong *)(param_1 + 0x18) != 0;
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar7);
    if (bVar7) {
      (**(code **)(param_1 + 0x28))();
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
  return uVar6 & 0xffffffff;
}


