// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146050c6a FUN_146050c6a body=25 status=ok
// SIG undefined FUN_146050c6a(void)

void FUN_146050c6a(void)

{
  FUN_146050c84();
  atexit((_func_5014 *)&LAB_142bc05d5);
  return;
}



// FUNCTION 146050c84 FUN_146050c84 body=248 status=ok
// SIG undefined FUN_146050c84(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146050c84(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9c3728 = 0xffffffff;
  _DAT_14c9c372c = 0x105;
  DAT_14c9c372e = 0;
  _DAT_14c9c3720 = &PTR_FUN_14a202920;
  DAT_14c9c3730 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f722c(&local_18);
    lVar3 = DAT_14c9c3730;
    DAT_14c9c3730 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9c3720,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 146050d84 FUN_146050d84 body=25 status=ok
// SIG undefined FUN_146050d84(void)

void FUN_146050d84(void)

{
  FUN_146050d9e();
  atexit((_func_5014 *)&LAB_142bc05e1);
  return;
}



// FUNCTION 146050d9e FUN_146050d9e body=248 status=ok
// SIG undefined FUN_146050d9e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146050d9e(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9c3740 = 0xffffffff;
  _DAT_14c9c3744 = 0x105;
  DAT_14c9c3746 = 0;
  _DAT_14c9c3738 = &PTR_FUN_14a202950;
  DAT_14c9c3748 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f7336(&local_18);
    lVar3 = DAT_14c9c3748;
    DAT_14c9c3748 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9c3738,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 146050e9e FUN_146050e9e body=25 status=ok
// SIG undefined FUN_146050e9e(void)

void FUN_146050e9e(void)

{
  FUN_146050eb8();
  atexit((_func_5014 *)&LAB_142bc05ed);
  return;
}



// FUNCTION 146050eb8 FUN_146050eb8 body=248 status=ok
// SIG undefined FUN_146050eb8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146050eb8(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9c3758 = 0xffffffff;
  _DAT_14c9c375c = 0x105;
  DAT_14c9c375e = 0;
  _DAT_14c9c3750 = &PTR_FUN_14a202980;
  DAT_14c9c3760 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f7440(&local_18);
    lVar3 = DAT_14c9c3760;
    DAT_14c9c3760 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9c3750,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 146050fb8 FUN_146050fb8 body=25 status=ok
// SIG undefined FUN_146050fb8(void)

void FUN_146050fb8(void)

{
  FUN_146050fd2();
  atexit((_func_5014 *)&LAB_142bc05f9);
  return;
}



// FUNCTION 146050fd2 FUN_146050fd2 body=248 status=ok
// SIG undefined FUN_146050fd2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146050fd2(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9c3770 = 0xffffffff;
  _DAT_14c9c3774 = 0x105;
  DAT_14c9c3776 = 0;
  _DAT_14c9c3768 = &PTR_FUN_14a2029b0;
  DAT_14c9c3778 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f754a(&local_18);
    lVar3 = DAT_14c9c3778;
    DAT_14c9c3778 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9c3768,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 1460510d2 FUN_1460510d2 body=25 status=ok
// SIG undefined FUN_1460510d2(void)

void FUN_1460510d2(void)

{
  FUN_1460510ec();
  atexit((_func_5014 *)&LAB_142be5353);
  return;
}



// FUNCTION 1460510ec FUN_1460510ec body=248 status=ok
// SIG undefined FUN_1460510ec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460510ec(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9c7cb8 = 0xffffffff;
  _DAT_14c9c7cbc = 0x105;
  DAT_14c9c7cbe = 0;
  _DAT_14c9c7cb0 = &PTR_FUN_14a20ade0;
  DAT_14c9c7cc0 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f775e(&local_18);
    lVar3 = DAT_14c9c7cc0;
    DAT_14c9c7cc0 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9c7cb0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 1460511ec FUN_1460511ec body=25 status=ok
// SIG undefined FUN_1460511ec(void)

void FUN_1460511ec(void)

{
  FUN_146051206();
  atexit((_func_5014 *)&LAB_142c1c895);
  return;
}



// FUNCTION 146051206 FUN_146051206 body=248 status=ok
// SIG undefined FUN_146051206(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146051206(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9cdb48 = 0xffffffff;
  _DAT_14c9cdb4c = 0x105;
  DAT_14c9cdb4e = 0;
  _DAT_14c9cdb40 = &PTR_FUN_14a216de0;
  DAT_14c9cdb50 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f7972(&local_18);
    lVar3 = DAT_14c9cdb50;
    DAT_14c9cdb50 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9cdb40,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 146051306 FUN_146051306 body=25 status=ok
// SIG undefined FUN_146051306(void)

void FUN_146051306(void)

{
  FUN_146051320();
  atexit((_func_5014 *)&LAB_142c1c8a1);
  return;
}



// FUNCTION 146051320 FUN_146051320 body=248 status=ok
// SIG undefined FUN_146051320(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146051320(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9cdb60 = 0xffffffff;
  _DAT_14c9cdb64 = 0x105;
  DAT_14c9cdb66 = 0;
  _DAT_14c9cdb58 = &PTR_FUN_14a216e30;
  DAT_14c9cdb68 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f7a7c(&local_18);
    lVar3 = DAT_14c9cdb68;
    DAT_14c9cdb68 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9cdb58,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 146051420 FUN_146051420 body=25 status=ok
// SIG undefined FUN_146051420(void)

void FUN_146051420(void)

{
  FUN_14605143a();
  atexit((_func_5014 *)&LAB_142c3f92f);
  return;
}



// FUNCTION 14605143a FUN_14605143a body=248 status=ok
// SIG undefined FUN_14605143a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14605143a(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9d2748 = 0xffffffff;
  _DAT_14c9d274c = 0x105;
  DAT_14c9d274e = 0;
  _DAT_14c9d2740 = &PTR_FUN_14a2226d0;
  DAT_14c9d2750 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f7d9a(&local_18);
    lVar3 = DAT_14c9d2750;
    DAT_14c9d2750 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9d2740,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14605153a FUN_14605153a body=25 status=ok
// SIG undefined FUN_14605153a(void)

void FUN_14605153a(void)

{
  FUN_146051554();
  atexit((_func_5014 *)&LAB_142c3f93b);
  return;
}



// FUNCTION 146051554 FUN_146051554 body=248 status=ok
// SIG undefined FUN_146051554(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146051554(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9d2760 = 0xffffffff;
  _DAT_14c9d2764 = 0x105;
  DAT_14c9d2766 = 0;
  _DAT_14c9d2758 = &PTR_FUN_14a222700;
  DAT_14c9d2768 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f7ea4(&local_18);
    lVar3 = DAT_14c9d2768;
    DAT_14c9d2768 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9d2758,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 146051654 FUN_146051654 body=25 status=ok
// SIG undefined FUN_146051654(void)

void FUN_146051654(void)

{
  FUN_14605166e();
  atexit((_func_5014 *)&LAB_142c3f947);
  return;
}



// FUNCTION 14605166e FUN_14605166e body=248 status=ok
// SIG undefined FUN_14605166e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14605166e(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9d2778 = 0xffffffff;
  _DAT_14c9d277c = 0x105;
  DAT_14c9d277e = 0;
  _DAT_14c9d2770 = &PTR_FUN_14a222730;
  DAT_14c9d2780 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f7fae(&local_18);
    lVar3 = DAT_14c9d2780;
    DAT_14c9d2780 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9d2770,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14605176e FUN_14605176e body=25 status=ok
// SIG undefined FUN_14605176e(void)

void FUN_14605176e(void)

{
  FUN_146051788();
  atexit((_func_5014 *)&LAB_142c3f953);
  return;
}



// FUNCTION 146051788 FUN_146051788 body=248 status=ok
// SIG undefined FUN_146051788(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146051788(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9d2790 = 0xffffffff;
  _DAT_14c9d2794 = 0x105;
  DAT_14c9d2796 = 0;
  _DAT_14c9d2788 = &PTR_FUN_14a222760;
  DAT_14c9d2798 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f80b8(&local_18);
    lVar3 = DAT_14c9d2798;
    DAT_14c9d2798 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9d2788,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 146051888 FUN_146051888 body=25 status=ok
// SIG undefined FUN_146051888(void)

void FUN_146051888(void)

{
  FUN_1460518a2();
  atexit((_func_5014 *)&LAB_142c3f95f);
  return;
}



// FUNCTION 1460518a2 FUN_1460518a2 body=248 status=ok
// SIG undefined FUN_1460518a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460518a2(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9d27a8 = 0xffffffff;
  _DAT_14c9d27ac = 0x105;
  DAT_14c9d27ae = 0;
  _DAT_14c9d27a0 = &PTR_FUN_14a222790;
  DAT_14c9d27b0 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f81c2(&local_18);
    lVar3 = DAT_14c9d27b0;
    DAT_14c9d27b0 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9d27a0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 1460519a2 FUN_1460519a2 body=25 status=ok
// SIG undefined FUN_1460519a2(void)

void FUN_1460519a2(void)

{
  FUN_1460519bc();
  atexit((_func_5014 *)&LAB_142c3f98f);
  return;
}



// FUNCTION 1460519bc FUN_1460519bc body=248 status=ok
// SIG undefined FUN_1460519bc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460519bc(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9d27d8 = 0xffffffff;
  _DAT_14c9d27dc = 0x105;
  DAT_14c9d27de = 0;
  _DAT_14c9d27d0 = &PTR_FUN_14a222850;
  DAT_14c9d27e0 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f84e0(&local_18);
    lVar3 = DAT_14c9d27e0;
    DAT_14c9d27e0 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9d27d0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 146051abc FUN_146051abc body=25 status=ok
// SIG undefined FUN_146051abc(void)

void FUN_146051abc(void)

{
  FUN_146051ad6();
  atexit((_func_5014 *)&LAB_142c6f21e);
  return;
}



// FUNCTION 146051ad6 FUN_146051ad6 body=248 status=ok
// SIG undefined FUN_146051ad6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146051ad6(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9d9e00 = 0xffffffff;
  _DAT_14c9d9e04 = 0x105;
  DAT_14c9d9e06 = 0;
  _DAT_14c9d9df8 = &PTR_FUN_14a22cc30;
  DAT_14c9d9e08 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f8c26(&local_18);
    lVar3 = DAT_14c9d9e08;
    DAT_14c9d9e08 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9d9df8,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 146051bd6 FUN_146051bd6 body=25 status=ok
// SIG undefined FUN_146051bd6(void)

void FUN_146051bd6(void)

{
  FUN_146051bf0();
  atexit((_func_5014 *)&LAB_142c6f22a);
  return;
}



// FUNCTION 146051bf0 FUN_146051bf0 body=248 status=ok
// SIG undefined FUN_146051bf0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146051bf0(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9d9e18 = 0xffffffff;
  _DAT_14c9d9e1c = 0x105;
  DAT_14c9d9e1e = 0;
  _DAT_14c9d9e10 = &PTR_FUN_14a22cc60;
  DAT_14c9d9e20 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f8d30(&local_18);
    lVar3 = DAT_14c9d9e20;
    DAT_14c9d9e20 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9d9e10,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 146051cf0 FUN_146051cf0 body=25 status=ok
// SIG undefined FUN_146051cf0(void)

void FUN_146051cf0(void)

{
  FUN_146051d0a();
  atexit((_func_5014 *)&LAB_142c6f236);
  return;
}



// FUNCTION 146051d0a FUN_146051d0a body=248 status=ok
// SIG undefined FUN_146051d0a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146051d0a(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9d9e30 = 0xffffffff;
  _DAT_14c9d9e34 = 0x105;
  DAT_14c9d9e36 = 0;
  _DAT_14c9d9e28 = &PTR_FUN_14a22cdd0;
  DAT_14c9d9e38 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_141601fa2(&local_18);
    lVar3 = DAT_14c9d9e38;
    DAT_14c9d9e38 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9d9e28,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 146051e0a FUN_146051e0a body=25 status=ok
// SIG undefined FUN_146051e0a(void)

void FUN_146051e0a(void)

{
  FUN_146051e24();
  atexit((_func_5014 *)&LAB_142c6f242);
  return;
}



// FUNCTION 146051e24 FUN_146051e24 body=248 status=ok
// SIG undefined FUN_146051e24(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146051e24(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9d9e48 = 0xffffffff;
  _DAT_14c9d9e4c = 0x105;
  DAT_14c9d9e4e = 0;
  _DAT_14c9d9e40 = &PTR_FUN_14a22ce00;
  DAT_14c9d9e50 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1416020b4(&local_18);
    lVar3 = DAT_14c9d9e50;
    DAT_14c9d9e50 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9d9e40,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 146051f24 FUN_146051f24 body=25 status=ok
// SIG undefined FUN_146051f24(void)

void FUN_146051f24(void)

{
  FUN_146051f3e();
  atexit((_func_5014 *)&LAB_142c6f24e);
  return;
}



// FUNCTION 146051f3e FUN_146051f3e body=248 status=ok
// SIG undefined FUN_146051f3e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146051f3e(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9d9e60 = 0xffffffff;
  _DAT_14c9d9e64 = 0x105;
  DAT_14c9d9e66 = 0;
  _DAT_14c9d9e58 = &PTR_FUN_14a22ce30;
  DAT_14c9d9e68 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f8e3a(&local_18);
    lVar3 = DAT_14c9d9e68;
    DAT_14c9d9e68 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9d9e58,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14605203e FUN_14605203e body=25 status=ok
// SIG undefined FUN_14605203e(void)

void FUN_14605203e(void)

{
  FUN_146052058();
  atexit((_func_5014 *)&LAB_142cccece);
  return;
}



// FUNCTION 146052058 FUN_146052058 body=248 status=ok
// SIG undefined FUN_146052058(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146052058(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9e5970 = 0xffffffff;
  _DAT_14c9e5974 = 0x105;
  DAT_14c9e5976 = 0;
  _DAT_14c9e5968 = &PTR_FUN_14a240b40;
  DAT_14c9e5978 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f9158(&local_18);
    lVar3 = DAT_14c9e5978;
    DAT_14c9e5978 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9e5968,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 146052158 FUN_146052158 body=25 status=ok
// SIG undefined FUN_146052158(void)

void FUN_146052158(void)

{
  FUN_146052172();
  atexit((_func_5014 *)&LAB_142cf41c0);
  return;
}



// FUNCTION 146052172 FUN_146052172 body=248 status=ok
// SIG undefined FUN_146052172(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146052172(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9e9bc8 = 0xffffffff;
  _DAT_14c9e9bcc = 0x105;
  DAT_14c9e9bce = 0;
  _DAT_14c9e9bc0 = &PTR_FUN_14a247d30;
  DAT_14c9e9bd0 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f9476(&local_18);
    lVar3 = DAT_14c9e9bd0;
    DAT_14c9e9bd0 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9e9bc0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 146052272 FUN_146052272 body=25 status=ok
// SIG undefined FUN_146052272(void)

void FUN_146052272(void)

{
  FUN_14605228c();
  atexit((_func_5014 *)&LAB_142d2612d);
  return;
}



// FUNCTION 14605228c FUN_14605228c body=248 status=ok
// SIG undefined FUN_14605228c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14605228c(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9efd58 = 0xffffffff;
  _DAT_14c9efd5c = 0x105;
  DAT_14c9efd5e = 0;
  _DAT_14c9efd50 = &PTR_FUN_14a2559e0;
  DAT_14c9efd60 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f9580(&local_18);
    lVar3 = DAT_14c9efd60;
    DAT_14c9efd60 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9efd50,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14605238c FUN_14605238c body=25 status=ok
// SIG undefined FUN_14605238c(void)

void FUN_14605238c(void)

{
  FUN_1460523a6();
  atexit((_func_5014 *)&LAB_142dee95a);
  return;
}



// FUNCTION 1460523a6 FUN_1460523a6 body=248 status=ok
// SIG undefined FUN_1460523a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460523a6(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca0dd88 = 0xffffffff;
  _DAT_14ca0dd8c = 0x105;
  DAT_14ca0dd8e = 0;
  _DAT_14ca0dd80 = &PTR_FUN_14a290980;
  DAT_14ca0dd90 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f9794(&local_18);
    lVar3 = DAT_14ca0dd90;
    DAT_14ca0dd90 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca0dd80,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 1460524a6 FUN_1460524a6 body=25 status=ok
// SIG undefined FUN_1460524a6(void)

void FUN_1460524a6(void)

{
  FUN_1460524c0();
  atexit((_func_5014 *)&LAB_142dee966);
  return;
}



// FUNCTION 1460524c0 FUN_1460524c0 body=248 status=ok
// SIG undefined FUN_1460524c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460524c0(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca0dda0 = 0xffffffff;
  _DAT_14ca0dda4 = 0x105;
  DAT_14ca0dda6 = 0;
  _DAT_14ca0dd98 = &PTR_FUN_14a2909b0;
  DAT_14ca0dda8 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f989e(&local_18);
    lVar3 = DAT_14ca0dda8;
    DAT_14ca0dda8 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca0dd98,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 1460525c0 FUN_1460525c0 body=25 status=ok
// SIG undefined FUN_1460525c0(void)

void FUN_1460525c0(void)

{
  FUN_1460525da();
  atexit((_func_5014 *)&LAB_142dee972);
  return;
}



// FUNCTION 1460525da FUN_1460525da body=248 status=ok
// SIG undefined FUN_1460525da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460525da(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca0ddb8 = 0xffffffff;
  _DAT_14ca0ddbc = 0x105;
  DAT_14ca0ddbe = 0;
  _DAT_14ca0ddb0 = &PTR_FUN_14a2909e0;
  DAT_14ca0ddc0 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f99a8(&local_18);
    lVar3 = DAT_14ca0ddc0;
    DAT_14ca0ddc0 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca0ddb0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 1460526da FUN_1460526da body=25 status=ok
// SIG undefined FUN_1460526da(void)

void FUN_1460526da(void)

{
  FUN_1460526f4();
  atexit((_func_5014 *)&LAB_142dee98a);
  return;
}



// FUNCTION 1460526f4 FUN_1460526f4 body=248 status=ok
// SIG undefined FUN_1460526f4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460526f4(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca0ddd0 = 0xffffffff;
  _DAT_14ca0ddd4 = 0x105;
  DAT_14ca0ddd6 = 0;
  _DAT_14ca0ddc8 = &PTR_FUN_14a290a10;
  DAT_14ca0ddd8 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415ff49e(&local_18);
    lVar3 = DAT_14ca0ddd8;
    DAT_14ca0ddd8 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca0ddc8,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 1460527f4 FUN_1460527f4 body=25 status=ok
// SIG undefined FUN_1460527f4(void)

void FUN_1460527f4(void)

{
  FUN_14605280e();
  atexit((_func_5014 *)&LAB_142dee996);
  return;
}



// FUNCTION 14605280e FUN_14605280e body=248 status=ok
// SIG undefined FUN_14605280e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14605280e(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca0dde8 = 0xffffffff;
  _DAT_14ca0ddec = 0x105;
  DAT_14ca0ddee = 0;
  _DAT_14ca0dde0 = &PTR_FUN_14a290a40;
  DAT_14ca0ddf0 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f9bbc(&local_18);
    lVar3 = DAT_14ca0ddf0;
    DAT_14ca0ddf0 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca0dde0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14605290e FUN_14605290e body=25 status=ok
// SIG undefined FUN_14605290e(void)

void FUN_14605290e(void)

{
  FUN_146052928();
  atexit((_func_5014 *)&LAB_142dee9a2);
  return;
}



// FUNCTION 146052928 FUN_146052928 body=248 status=ok
// SIG undefined FUN_146052928(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146052928(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca0de00 = 0xffffffff;
  _DAT_14ca0de04 = 0x105;
  DAT_14ca0de06 = 0;
  _DAT_14ca0ddf8 = &PTR_FUN_14a290a70;
  DAT_14ca0de08 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f9cc6(&local_18);
    lVar3 = DAT_14ca0de08;
    DAT_14ca0de08 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca0ddf8,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 146052a28 FUN_146052a28 body=25 status=ok
// SIG undefined FUN_146052a28(void)

void FUN_146052a28(void)

{
  FUN_146052a42();
  atexit((_func_5014 *)&LAB_142dee9ae);
  return;
}



// FUNCTION 146052a42 FUN_146052a42 body=248 status=ok
// SIG undefined FUN_146052a42(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146052a42(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca0de18 = 0xffffffff;
  _DAT_14ca0de1c = 0x105;
  DAT_14ca0de1e = 0;
  _DAT_14ca0de10 = &PTR_FUN_14a290aa0;
  DAT_14ca0de20 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f9dd0(&local_18);
    lVar3 = DAT_14ca0de20;
    DAT_14ca0de20 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca0de10,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 146052b42 FUN_146052b42 body=25 status=ok
// SIG undefined FUN_146052b42(void)

void FUN_146052b42(void)

{
  FUN_146052b5c();
  atexit((_func_5014 *)&LAB_142dee9ba);
  return;
}



// FUNCTION 146052b5c FUN_146052b5c body=248 status=ok
// SIG undefined FUN_146052b5c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146052b5c(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca0de30 = 0xffffffff;
  _DAT_14ca0de34 = 0x105;
  DAT_14ca0de36 = 0;
  _DAT_14ca0de28 = &PTR_FUN_14a290ad0;
  DAT_14ca0de38 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f9eda(&local_18);
    lVar3 = DAT_14ca0de38;
    DAT_14ca0de38 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca0de28,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 146052c5c FUN_146052c5c body=25 status=ok
// SIG undefined FUN_146052c5c(void)

void FUN_146052c5c(void)

{
  FUN_146052c76();
  atexit((_func_5014 *)&LAB_142e26e7e);
  return;
}



// FUNCTION 146052c76 FUN_146052c76 body=248 status=ok
// SIG undefined FUN_146052c76(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146052c76(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca16a48 = 0xffffffff;
  _DAT_14ca16a4c = 0x105;
  DAT_14ca16a4e = 0;
  _DAT_14ca16a40 = &PTR_FUN_14a299430;
  DAT_14ca16a50 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415fa0ee(&local_18);
    lVar3 = DAT_14ca16a50;
    DAT_14ca16a50 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca16a40,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 146052d76 FUN_146052d76 body=25 status=ok
// SIG undefined FUN_146052d76(void)

void FUN_146052d76(void)

{
  FUN_146052d90();
  atexit((_func_5014 *)&LAB_142e26ea2);
  return;
}



// FUNCTION 146052d90 FUN_146052d90 body=248 status=ok
// SIG undefined FUN_146052d90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146052d90(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca16a90 = 0xffffffff;
  _DAT_14ca16a94 = 0x105;
  DAT_14ca16a96 = 0;
  _DAT_14ca16a88 = &PTR_FUN_14a2994f0;
  DAT_14ca16a98 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415fa1f8(&local_18);
    lVar3 = DAT_14ca16a98;
    DAT_14ca16a98 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca16a88,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 146052e90 FUN_146052e90 body=25 status=ok
// SIG undefined FUN_146052e90(void)

void FUN_146052e90(void)

{
  FUN_146052eaa();
  atexit((_func_5014 *)&LAB_142e26eae);
  return;
}



// FUNCTION 146052eaa FUN_146052eaa body=248 status=ok
// SIG undefined FUN_146052eaa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146052eaa(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca16ab8 = 0xffffffff;
  _DAT_14ca16abc = 0x105;
  DAT_14ca16abe = 0;
  _DAT_14ca16ab0 = &PTR_FUN_14a2998d0;
  DAT_14ca16ac0 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415fa302(&local_18);
    lVar3 = DAT_14ca16ac0;
    DAT_14ca16ac0 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca16ab0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 146052faa FUN_146052faa body=25 status=ok
// SIG undefined FUN_146052faa(void)

void FUN_146052faa(void)

{
  FUN_146052fc4();
  atexit((_func_5014 *)&LAB_142e93c24);
  return;
}



// FUNCTION 146052fc4 FUN_146052fc4 body=248 status=ok
// SIG undefined FUN_146052fc4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146052fc4(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca214a8 = 0xffffffff;
  _DAT_14ca214ac = 0x105;
  DAT_14ca214ae = 0;
  _DAT_14ca214a0 = &PTR_FUN_14a2b27e0;
  DAT_14ca214b0 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415fa40c(&local_18);
    lVar3 = DAT_14ca214b0;
    DAT_14ca214b0 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca214a0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 1460530c4 FUN_1460530c4 body=25 status=ok
// SIG undefined FUN_1460530c4(void)

void FUN_1460530c4(void)

{
  FUN_1460530de();
  atexit((_func_5014 *)&LAB_142f10227);
  return;
}



// FUNCTION 1460530de FUN_1460530de body=248 status=ok
// SIG undefined FUN_1460530de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460530de(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca30fc0 = 0xffffffff;
  _DAT_14ca30fc4 = 0x105;
  DAT_14ca30fc6 = 0;
  _DAT_14ca30fb8 = &PTR_FUN_14a2c47b0;
  DAT_14ca30fc8 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415fa620(&local_18);
    lVar3 = DAT_14ca30fc8;
    DAT_14ca30fc8 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca30fb8,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 1460531de FUN_1460531de body=25 status=ok
// SIG undefined FUN_1460531de(void)

void FUN_1460531de(void)

{
  FUN_1460531f8();
  atexit((_func_5014 *)&LAB_142f6f4a7);
  return;
}



// FUNCTION 1460531f8 FUN_1460531f8 body=248 status=ok
// SIG undefined FUN_1460531f8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460531f8(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca3e420 = 0xffffffff;
  _DAT_14ca3e424 = 0x105;
  DAT_14ca3e426 = 0;
  _DAT_14ca3e418 = &PTR_FUN_14a2dbd00;
  DAT_14ca3e428 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415fa834(&local_18);
    lVar3 = DAT_14ca3e428;
    DAT_14ca3e428 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca3e418,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 1460532f8 FUN_1460532f8 body=25 status=ok
// SIG undefined FUN_1460532f8(void)

void FUN_1460532f8(void)

{
  FUN_146053312();
  atexit((_func_5014 *)&LAB_142faf8c3);
  return;
}



// FUNCTION 146053312 FUN_146053312 body=248 status=ok
// SIG undefined FUN_146053312(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146053312(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca435a0 = 0xffffffff;
  _DAT_14ca435a4 = 0x105;
  DAT_14ca435a6 = 0;
  _DAT_14ca43598 = &PTR_FUN_14a2e7180;
  DAT_14ca435a8 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415fa93e(&local_18);
    lVar3 = DAT_14ca435a8;
    DAT_14ca435a8 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca43598,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 146053412 FUN_146053412 body=25 status=ok
// SIG undefined FUN_146053412(void)

void FUN_146053412(void)

{
  FUN_14605342c();
  atexit((_func_5014 *)&LAB_142faf8cf);
  return;
}



// FUNCTION 14605342c FUN_14605342c body=248 status=ok
// SIG undefined FUN_14605342c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14605342c(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca435c8 = 0xffffffff;
  _DAT_14ca435cc = 0x105;
  DAT_14ca435ce = 0;
  _DAT_14ca435c0 = &PTR_FUN_14a2e7920;
  DAT_14ca435d0 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415faa48(&local_18);
    lVar3 = DAT_14ca435d0;
    DAT_14ca435d0 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca435c0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14605352c FUN_14605352c body=25 status=ok
// SIG undefined FUN_14605352c(void)

void FUN_14605352c(void)

{
  FUN_146053546();
  atexit((_func_5014 *)&LAB_142fe8eec);
  return;
}



// FUNCTION 146053546 FUN_146053546 body=248 status=ok
// SIG undefined FUN_146053546(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146053546(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca46a58 = 0xffffffff;
  _DAT_14ca46a5c = 0x105;
  DAT_14ca46a5e = 0;
  _DAT_14ca46a50 = &PTR_FUN_14a2f0d60;
  DAT_14ca46a60 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415fab52(&local_18);
    lVar3 = DAT_14ca46a60;
    DAT_14ca46a60 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca46a50,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 146053646 FUN_146053646 body=25 status=ok
// SIG undefined FUN_146053646(void)

void FUN_146053646(void)

{
  FUN_146053660();
  atexit((_func_5014 *)&LAB_142fe8ef8);
  return;
}



// FUNCTION 146053660 FUN_146053660 body=248 status=ok
// SIG undefined FUN_146053660(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146053660(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca46a88 = 0xffffffff;
  _DAT_14ca46a8c = 0x105;
  DAT_14ca46a8e = 0;
  _DAT_14ca46a80 = &PTR_FUN_14a2f11d0;
  DAT_14ca46a90 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415fac5c(&local_18);
    lVar3 = DAT_14ca46a90;
    DAT_14ca46a90 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca46a80,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 146053760 FUN_146053760 body=25 status=ok
// SIG undefined FUN_146053760(void)

void FUN_146053760(void)

{
  FUN_14605377a();
  atexit((_func_5014 *)&LAB_1430594f2);
  return;
}



// FUNCTION 14605377a FUN_14605377a body=248 status=ok
// SIG undefined FUN_14605377a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14605377a(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca546e0 = 0xffffffff;
  _DAT_14ca546e4 = 0x105;
  DAT_14ca546e6 = 0;
  _DAT_14ca546d8 = &PTR_FUN_14a3037b0;
  DAT_14ca546e8 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415fad66(&local_18);
    lVar3 = DAT_14ca546e8;
    DAT_14ca546e8 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca546d8,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14605387a FUN_14605387a body=25 status=ok
// SIG undefined FUN_14605387a(void)

void FUN_14605387a(void)

{
  FUN_146053894();
  atexit((_func_5014 *)&LAB_1430594fe);
  return;
}



// FUNCTION 146053894 FUN_146053894 body=248 status=ok
// SIG undefined FUN_146053894(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146053894(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca546f8 = 0xffffffff;
  _DAT_14ca546fc = 0x105;
  DAT_14ca546fe = 0;
  _DAT_14ca546f0 = &PTR_FUN_14a3037e0;
  DAT_14ca54700 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415fae70(&local_18);
    lVar3 = DAT_14ca54700;
    DAT_14ca54700 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca546f0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 146053994 FUN_146053994 body=25 status=ok
// SIG undefined FUN_146053994(void)

void FUN_146053994(void)

{
  FUN_1460539ae();
  atexit((_func_5014 *)&LAB_14305950a);
  return;
}



// FUNCTION 1460539ae FUN_1460539ae body=248 status=ok
// SIG undefined FUN_1460539ae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460539ae(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca54710 = 0xffffffff;
  _DAT_14ca54714 = 0x105;
  DAT_14ca54716 = 0;
  _DAT_14ca54708 = &PTR_FUN_14a303810;
  DAT_14ca54718 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415faf7a(&local_18);
    lVar3 = DAT_14ca54718;
    DAT_14ca54718 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca54708,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 146053aae FUN_146053aae body=25 status=ok
// SIG undefined FUN_146053aae(void)

void FUN_146053aae(void)

{
  FUN_146053ac8();
  atexit((_func_5014 *)&LAB_143059516);
  return;
}



// FUNCTION 146053ac8 FUN_146053ac8 body=248 status=ok
// SIG undefined FUN_146053ac8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146053ac8(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca54728 = 0xffffffff;
  _DAT_14ca5472c = 0x105;
  DAT_14ca5472e = 0;
  _DAT_14ca54720 = &PTR_FUN_14a303840;
  DAT_14ca54730 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415fb084(&local_18);
    lVar3 = DAT_14ca54730;
    DAT_14ca54730 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca54720,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 146053bc8 FUN_146053bc8 body=25 status=ok
// SIG undefined FUN_146053bc8(void)

void FUN_146053bc8(void)

{
  FUN_146053be2();
  atexit((_func_5014 *)&LAB_143059522);
  return;
}



// FUNCTION 146053be2 FUN_146053be2 body=248 status=ok
// SIG undefined FUN_146053be2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146053be2(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca54740 = 0xffffffff;
  _DAT_14ca54744 = 0x105;
  DAT_14ca54746 = 0;
  _DAT_14ca54738 = &PTR_FUN_14a303870;
  DAT_14ca54748 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415fb18e(&local_18);
    lVar3 = DAT_14ca54748;
    DAT_14ca54748 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca54738,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 146053ce2 FUN_146053ce2 body=25 status=ok
// SIG undefined FUN_146053ce2(void)

void FUN_146053ce2(void)

{
  FUN_146053cfc();
  atexit((_func_5014 *)&LAB_14305952e);
  return;
}



// FUNCTION 146053cfc FUN_146053cfc body=248 status=ok
// SIG undefined FUN_146053cfc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146053cfc(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca54758 = 0xffffffff;
  _DAT_14ca5475c = 0x105;
  DAT_14ca5475e = 0;
  _DAT_14ca54750 = &PTR_FUN_14a3038a0;
  DAT_14ca54760 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415fb298(&local_18);
    lVar3 = DAT_14ca54760;
    DAT_14ca54760 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca54750,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 146053dfc FUN_146053dfc body=25 status=ok
// SIG undefined FUN_146053dfc(void)

void FUN_146053dfc(void)

{
  FUN_146053e16();
  atexit((_func_5014 *)&LAB_14305953a);
  return;
}



// FUNCTION 146053e16 FUN_146053e16 body=248 status=ok
// SIG undefined FUN_146053e16(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146053e16(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca54770 = 0xffffffff;
  _DAT_14ca54774 = 0x105;
  DAT_14ca54776 = 0;
  _DAT_14ca54768 = &PTR_FUN_14a3038d0;
  DAT_14ca54778 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415fb3a2(&local_18);
    lVar3 = DAT_14ca54778;
    DAT_14ca54778 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca54768,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 146053f16 FUN_146053f16 body=25 status=ok
// SIG undefined FUN_146053f16(void)

void FUN_146053f16(void)

{
  FUN_146053f30();
  atexit((_func_5014 *)&LAB_143059546);
  return;
}



// FUNCTION 146053f30 FUN_146053f30 body=248 status=ok
// SIG undefined FUN_146053f30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146053f30(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca54788 = 0xffffffff;
  _DAT_14ca5478c = 0x105;
  DAT_14ca5478e = 0;
  _DAT_14ca54780 = &PTR_FUN_14a303900;
  DAT_14ca54790 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415fb4ac(&local_18);
    lVar3 = DAT_14ca54790;
    DAT_14ca54790 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca54780,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 146054030 FUN_146054030 body=25 status=ok
// SIG undefined FUN_146054030(void)

void FUN_146054030(void)

{
  FUN_14605404a();
  atexit((_func_5014 *)&LAB_143059552);
  return;
}



// FUNCTION 14605404a FUN_14605404a body=248 status=ok
// SIG undefined FUN_14605404a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14605404a(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca547a0 = 0xffffffff;
  _DAT_14ca547a4 = 0x105;
  DAT_14ca547a6 = 0;
  _DAT_14ca54798 = &PTR_FUN_14a3039b0;
  DAT_14ca547a8 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415fb5b6(&local_18);
    lVar3 = DAT_14ca547a8;
    DAT_14ca547a8 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca54798,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14605414a FUN_14605414a body=25 status=ok
// SIG undefined FUN_14605414a(void)

void FUN_14605414a(void)

{
  FUN_146054164();
  atexit((_func_5014 *)&LAB_1430bc0a4);
  return;
}



// FUNCTION 146054164 FUN_146054164 body=248 status=ok
// SIG undefined FUN_146054164(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146054164(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca625d0 = 0xffffffff;
  _DAT_14ca625d4 = 0x105;
  DAT_14ca625d6 = 0;
  _DAT_14ca625c8 = &PTR_FUN_14a31a530;
  DAT_14ca625d8 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415fb7ca(&local_18);
    lVar3 = DAT_14ca625d8;
    DAT_14ca625d8 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca625c8,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 146054264 FUN_146054264 body=25 status=ok
// SIG undefined FUN_146054264(void)

void FUN_146054264(void)

{
  FUN_14605427e();
  atexit((_func_5014 *)&LAB_1430bc0b0);
  return;
}



// FUNCTION 14605427e FUN_14605427e body=248 status=ok
// SIG undefined FUN_14605427e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14605427e(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca625e8 = 0xffffffff;
  _DAT_14ca625ec = 0x105;
  DAT_14ca625ee = 0;
  _DAT_14ca625e0 = &PTR_FUN_14a31a560;
  DAT_14ca625f0 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415fb8d4(&local_18);
    lVar3 = DAT_14ca625f0;
    DAT_14ca625f0 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca625e0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14605437e FUN_14605437e body=25 status=ok
// SIG undefined FUN_14605437e(void)

void FUN_14605437e(void)

{
  FUN_146054398();
  atexit((_func_5014 *)&LAB_1430bc0bc);
  return;
}



// FUNCTION 146054398 FUN_146054398 body=248 status=ok
// SIG undefined FUN_146054398(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146054398(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca62600 = 0xffffffff;
  _DAT_14ca62604 = 0x105;
  DAT_14ca62606 = 0;
  _DAT_14ca625f8 = &PTR_FUN_14a31a6b0;
  DAT_14ca62608 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415fb9de(&local_18);
    lVar3 = DAT_14ca62608;
    DAT_14ca62608 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca625f8,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 146054498 FUN_146054498 body=25 status=ok
// SIG undefined FUN_146054498(void)

void FUN_146054498(void)

{
  FUN_1460544b2();
  atexit((_func_5014 *)&LAB_1430bc0c8);
  return;
}



// FUNCTION 1460544b2 FUN_1460544b2 body=248 status=ok
// SIG undefined FUN_1460544b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460544b2(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca62618 = 0xffffffff;
  _DAT_14ca6261c = 0x105;
  DAT_14ca6261e = 0;
  _DAT_14ca62610 = &PTR_FUN_14a31a6e0;
  DAT_14ca62620 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415fbae8(&local_18);
    lVar3 = DAT_14ca62620;
    DAT_14ca62620 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca62610,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 1460545b2 FUN_1460545b2 body=25 status=ok
// SIG undefined FUN_1460545b2(void)

void FUN_1460545b2(void)

{
  FUN_1460545cc();
  atexit((_func_5014 *)&LAB_1430bc0e0);
  return;
}



// FUNCTION 1460545cc FUN_1460545cc body=248 status=ok
// SIG undefined FUN_1460545cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460545cc(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca62648 = 0xffffffff;
  _DAT_14ca6264c = 0x105;
  DAT_14ca6264e = 0;
  _DAT_14ca62640 = &PTR_FUN_14a31a8b0;
  DAT_14ca62650 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415fbbf2(&local_18);
    lVar3 = DAT_14ca62650;
    DAT_14ca62650 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca62640,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 1460546cc FUN_1460546cc body=25 status=ok
// SIG undefined FUN_1460546cc(void)

void FUN_1460546cc(void)

{
  FUN_1460546e6();
  atexit((_func_5014 *)&LAB_14312cd18);
  return;
}



// FUNCTION 1460546e6 FUN_1460546e6 body=248 status=ok
// SIG undefined FUN_1460546e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460546e6(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca71348 = 0xffffffff;
  _DAT_14ca7134c = 0x105;
  DAT_14ca7134e = 0;
  _DAT_14ca71340 = &PTR_FUN_14a337360;
  DAT_14ca71350 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415fbcfc(&local_18);
    lVar3 = DAT_14ca71350;
    DAT_14ca71350 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca71340,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 1460547e6 FUN_1460547e6 body=25 status=ok
// SIG undefined FUN_1460547e6(void)

void FUN_1460547e6(void)

{
  FUN_146054800();
  atexit((_func_5014 *)&LAB_14312cd24);
  return;
}



// FUNCTION 146054800 FUN_146054800 body=248 status=ok
// SIG undefined FUN_146054800(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146054800(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca71360 = 0xffffffff;
  _DAT_14ca71364 = 0x105;
  DAT_14ca71366 = 0;
  _DAT_14ca71358 = &PTR_FUN_14a337390;
  DAT_14ca71368 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415fbe06(&local_18);
    lVar3 = DAT_14ca71368;
    DAT_14ca71368 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca71358,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 146054900 FUN_146054900 body=25 status=ok
// SIG undefined FUN_146054900(void)

void FUN_146054900(void)

{
  FUN_14605491a();
  atexit((_func_5014 *)&LAB_14312cd30);
  return;
}



// FUNCTION 14605491a FUN_14605491a body=248 status=ok
// SIG undefined FUN_14605491a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14605491a(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca71378 = 0xffffffff;
  _DAT_14ca7137c = 0x105;
  DAT_14ca7137e = 0;
  _DAT_14ca71370 = &PTR_FUN_14a3373c0;
  DAT_14ca71380 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415fbf10(&local_18);
    lVar3 = DAT_14ca71380;
    DAT_14ca71380 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca71370,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 146054a1a FUN_146054a1a body=25 status=ok
// SIG undefined FUN_146054a1a(void)

void FUN_146054a1a(void)

{
  FUN_146054a34();
  atexit((_func_5014 *)&LAB_14312cd3c);
  return;
}



// FUNCTION 146054a34 FUN_146054a34 body=248 status=ok
// SIG undefined FUN_146054a34(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146054a34(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca71390 = 0xffffffff;
  _DAT_14ca71394 = 0x105;
  DAT_14ca71396 = 0;
  _DAT_14ca71388 = &PTR_FUN_14a3373f0;
  DAT_14ca71398 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415fc01a(&local_18);
    lVar3 = DAT_14ca71398;
    DAT_14ca71398 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca71388,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 146054b34 FUN_146054b34 body=25 status=ok
// SIG undefined FUN_146054b34(void)

void FUN_146054b34(void)

{
  FUN_146054b4e();
  atexit((_func_5014 *)&LAB_14312cd48);
  return;
}



// FUNCTION 146054b4e FUN_146054b4e body=248 status=ok
// SIG undefined FUN_146054b4e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146054b4e(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca713a8 = 0xffffffff;
  _DAT_14ca713ac = 0x105;
  DAT_14ca713ae = 0;
  _DAT_14ca713a0 = &PTR_FUN_14a337420;
  DAT_14ca713b0 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415fc124(&local_18);
    lVar3 = DAT_14ca713b0;
    DAT_14ca713b0 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca713a0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 146054c4e FUN_146054c4e body=25 status=ok
// SIG undefined FUN_146054c4e(void)

void FUN_146054c4e(void)

{
  FUN_146054c68();
  atexit((_func_5014 *)&LAB_14312cd54);
  return;
}



// FUNCTION 146054c68 FUN_146054c68 body=248 status=ok
// SIG undefined FUN_146054c68(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146054c68(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca713c0 = 0xffffffff;
  _DAT_14ca713c4 = 0x105;
  DAT_14ca713c6 = 0;
  _DAT_14ca713b8 = &PTR_FUN_14a337450;
  DAT_14ca713c8 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415fc22e(&local_18);
    lVar3 = DAT_14ca713c8;
    DAT_14ca713c8 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca713b8,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 146054d68 FUN_146054d68 body=25 status=ok
// SIG undefined FUN_146054d68(void)

void FUN_146054d68(void)

{
  FUN_146054d82();
  atexit((_func_5014 *)&LAB_14312cd60);
  return;
}



// FUNCTION 146054d82 FUN_146054d82 body=248 status=ok
// SIG undefined FUN_146054d82(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146054d82(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca713d8 = 0xffffffff;
  _DAT_14ca713dc = 0x105;
  DAT_14ca713de = 0;
  _DAT_14ca713d0 = &PTR_FUN_14a337480;
  DAT_14ca713e0 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415fc338(&local_18);
    lVar3 = DAT_14ca713e0;
    DAT_14ca713e0 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca713d0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 146054e82 FUN_146054e82 body=25 status=ok
// SIG undefined FUN_146054e82(void)

void FUN_146054e82(void)

{
  FUN_146054e9c();
  atexit((_func_5014 *)&LAB_14312cd6c);
  return;
}



// FUNCTION 146054e9c FUN_146054e9c body=248 status=ok
// SIG undefined FUN_146054e9c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146054e9c(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca713f0 = 0xffffffff;
  _DAT_14ca713f4 = 0x105;
  DAT_14ca713f6 = 0;
  _DAT_14ca713e8 = &PTR_FUN_14a3374b0;
  DAT_14ca713f8 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415fc442(&local_18);
    lVar3 = DAT_14ca713f8;
    DAT_14ca713f8 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca713e8,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 146054f9c FUN_146054f9c body=25 status=ok
// SIG undefined FUN_146054f9c(void)

void FUN_146054f9c(void)

{
  FUN_146054fb6();
  atexit((_func_5014 *)&LAB_14312cd78);
  return;
}



// FUNCTION 146054fb6 FUN_146054fb6 body=248 status=ok
// SIG undefined FUN_146054fb6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146054fb6(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca71408 = 0xffffffff;
  _DAT_14ca7140c = 0x105;
  DAT_14ca7140e = 0;
  _DAT_14ca71400 = &PTR_FUN_14a3374e0;
  DAT_14ca71410 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415fc54c(&local_18);
    lVar3 = DAT_14ca71410;
    DAT_14ca71410 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca71400,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 1460550b6 FUN_1460550b6 body=25 status=ok
// SIG undefined FUN_1460550b6(void)

void FUN_1460550b6(void)

{
  FUN_1460550d0();
  atexit((_func_5014 *)&LAB_14312cd84);
  return;
}



// FUNCTION 1460550d0 FUN_1460550d0 body=248 status=ok
// SIG undefined FUN_1460550d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460550d0(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca71420 = 0xffffffff;
  _DAT_14ca71424 = 0x105;
  DAT_14ca71426 = 0;
  _DAT_14ca71418 = &PTR_FUN_14a337510;
  DAT_14ca71428 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415fc656(&local_18);
    lVar3 = DAT_14ca71428;
    DAT_14ca71428 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca71418,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 1460551d0 FUN_1460551d0 body=25 status=ok
// SIG undefined FUN_1460551d0(void)

void FUN_1460551d0(void)

{
  FUN_1460551ea();
  atexit((_func_5014 *)&LAB_14312cd90);
  return;
}



// FUNCTION 1460551ea FUN_1460551ea body=248 status=ok
// SIG undefined FUN_1460551ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460551ea(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca71438 = 0xffffffff;
  _DAT_14ca7143c = 0x105;
  DAT_14ca7143e = 0;
  _DAT_14ca71430 = &PTR_FUN_14a337540;
  DAT_14ca71440 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415fc760(&local_18);
    lVar3 = DAT_14ca71440;
    DAT_14ca71440 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca71430,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 1460552ea FUN_1460552ea body=25 status=ok
// SIG undefined FUN_1460552ea(void)

void FUN_1460552ea(void)

{
  FUN_146055304();
  atexit((_func_5014 *)&LAB_14312cd9c);
  return;
}



// FUNCTION 146055304 FUN_146055304 body=248 status=ok
// SIG undefined FUN_146055304(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146055304(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca71450 = 0xffffffff;
  _DAT_14ca71454 = 0x105;
  DAT_14ca71456 = 0;
  _DAT_14ca71448 = &PTR_FUN_14a337570;
  DAT_14ca71458 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415fc86a(&local_18);
    lVar3 = DAT_14ca71458;
    DAT_14ca71458 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca71448,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 146055404 FUN_146055404 body=25 status=ok
// SIG undefined FUN_146055404(void)

void FUN_146055404(void)

{
  FUN_14605541e();
  atexit((_func_5014 *)&LAB_14312cda8);
  return;
}



// FUNCTION 14605541e FUN_14605541e body=248 status=ok
// SIG undefined FUN_14605541e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14605541e(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca71468 = 0xffffffff;
  _DAT_14ca7146c = 0x105;
  DAT_14ca7146e = 0;
  _DAT_14ca71460 = &PTR_FUN_14a3375a0;
  DAT_14ca71470 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415fc974(&local_18);
    lVar3 = DAT_14ca71470;
    DAT_14ca71470 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca71460,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14605551e FUN_14605551e body=25 status=ok
// SIG undefined FUN_14605551e(void)

void FUN_14605551e(void)

{
  FUN_146055538();
  atexit((_func_5014 *)&LAB_14312cdb4);
  return;
}



// FUNCTION 146055538 FUN_146055538 body=248 status=ok
// SIG undefined FUN_146055538(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146055538(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca71480 = 0xffffffff;
  _DAT_14ca71484 = 0x105;
  DAT_14ca71486 = 0;
  _DAT_14ca71478 = &PTR_FUN_14a3375d0;
  DAT_14ca71488 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415fca7e(&local_18);
    lVar3 = DAT_14ca71488;
    DAT_14ca71488 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca71478,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 146055638 FUN_146055638 body=25 status=ok
// SIG undefined FUN_146055638(void)

void FUN_146055638(void)

{
  FUN_146055652();
  atexit((_func_5014 *)&LAB_14312cdc0);
  return;
}



// FUNCTION 146055652 FUN_146055652 body=248 status=ok
// SIG undefined FUN_146055652(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146055652(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca71498 = 0xffffffff;
  _DAT_14ca7149c = 0x105;
  DAT_14ca7149e = 0;
  _DAT_14ca71490 = &PTR_FUN_14a337600;
  DAT_14ca714a0 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415fcb88(&local_18);
    lVar3 = DAT_14ca714a0;
    DAT_14ca714a0 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca71490,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 146055752 FUN_146055752 body=25 status=ok
// SIG undefined FUN_146055752(void)

void FUN_146055752(void)

{
  FUN_14605576c();
  atexit((_func_5014 *)&LAB_14312cdcc);
  return;
}



// FUNCTION 14605576c FUN_14605576c body=248 status=ok
// SIG undefined FUN_14605576c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14605576c(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca714b0 = 0xffffffff;
  _DAT_14ca714b4 = 0x105;
  DAT_14ca714b6 = 0;
  _DAT_14ca714a8 = &PTR_FUN_14a337630;
  DAT_14ca714b8 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415fcc92(&local_18);
    lVar3 = DAT_14ca714b8;
    DAT_14ca714b8 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca714a8,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14605586c FUN_14605586c body=25 status=ok
// SIG undefined FUN_14605586c(void)

void FUN_14605586c(void)

{
  FUN_146055886();
  atexit((_func_5014 *)&LAB_14312cdd8);
  return;
}



// FUNCTION 146055886 FUN_146055886 body=248 status=ok
// SIG undefined FUN_146055886(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146055886(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca714c8 = 0xffffffff;
  _DAT_14ca714cc = 0x105;
  DAT_14ca714ce = 0;
  _DAT_14ca714c0 = &PTR_FUN_14a337660;
  DAT_14ca714d0 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415fcd9c(&local_18);
    lVar3 = DAT_14ca714d0;
    DAT_14ca714d0 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca714c0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 146055986 FUN_146055986 body=25 status=ok
// SIG undefined FUN_146055986(void)

void FUN_146055986(void)

{
  FUN_1460559a0();
  atexit((_func_5014 *)&LAB_14312cde4);
  return;
}



// FUNCTION 1460559a0 FUN_1460559a0 body=248 status=ok
// SIG undefined FUN_1460559a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460559a0(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca714e0 = 0xffffffff;
  _DAT_14ca714e4 = 0x105;
  DAT_14ca714e6 = 0;
  _DAT_14ca714d8 = &PTR_FUN_14a337690;
  DAT_14ca714e8 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415fcea6(&local_18);
    lVar3 = DAT_14ca714e8;
    DAT_14ca714e8 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca714d8,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 146055aa0 FUN_146055aa0 body=25 status=ok
// SIG undefined FUN_146055aa0(void)

void FUN_146055aa0(void)

{
  FUN_146055aba();
  atexit((_func_5014 *)&LAB_14312cdf0);
  return;
}



// FUNCTION 146055aba FUN_146055aba body=248 status=ok
// SIG undefined FUN_146055aba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146055aba(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca714f8 = 0xffffffff;
  _DAT_14ca714fc = 0x105;
  DAT_14ca714fe = 0;
  _DAT_14ca714f0 = &PTR_FUN_14a3376c0;
  DAT_14ca71500 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415fcfb0(&local_18);
    lVar3 = DAT_14ca71500;
    DAT_14ca71500 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca714f0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 146055bba FUN_146055bba body=25 status=ok
// SIG undefined FUN_146055bba(void)

void FUN_146055bba(void)

{
  FUN_146055bd4();
  atexit((_func_5014 *)&LAB_14312cdfc);
  return;
}



// FUNCTION 146055bd4 FUN_146055bd4 body=248 status=ok
// SIG undefined FUN_146055bd4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146055bd4(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca71510 = 0xffffffff;
  _DAT_14ca71514 = 0x105;
  DAT_14ca71516 = 0;
  _DAT_14ca71508 = &PTR_FUN_14a3376f0;
  DAT_14ca71518 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415fd0ba(&local_18);
    lVar3 = DAT_14ca71518;
    DAT_14ca71518 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca71508,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 146055cd4 FUN_146055cd4 body=25 status=ok
// SIG undefined FUN_146055cd4(void)

void FUN_146055cd4(void)

{
  FUN_146055cee();
  atexit((_func_5014 *)&LAB_14312ce08);
  return;
}



// FUNCTION 146055cee FUN_146055cee body=248 status=ok
// SIG undefined FUN_146055cee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146055cee(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca71528 = 0xffffffff;
  _DAT_14ca7152c = 0x105;
  DAT_14ca7152e = 0;
  _DAT_14ca71520 = &PTR_FUN_14a337720;
  DAT_14ca71530 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415fd1c4(&local_18);
    lVar3 = DAT_14ca71530;
    DAT_14ca71530 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca71520,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 146055dee FUN_146055dee body=25 status=ok
// SIG undefined FUN_146055dee(void)

void FUN_146055dee(void)

{
  FUN_146055e08();
  atexit((_func_5014 *)&LAB_14312ce14);
  return;
}



// FUNCTION 146055e08 FUN_146055e08 body=248 status=ok
// SIG undefined FUN_146055e08(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146055e08(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca71540 = 0xffffffff;
  _DAT_14ca71544 = 0x105;
  DAT_14ca71546 = 0;
  _DAT_14ca71538 = &PTR_FUN_14a337750;
  DAT_14ca71548 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415fd2ce(&local_18);
    lVar3 = DAT_14ca71548;
    DAT_14ca71548 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca71538,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 146055f08 FUN_146055f08 body=25 status=ok
// SIG undefined FUN_146055f08(void)

void FUN_146055f08(void)

{
  FUN_146055f22();
  atexit((_func_5014 *)&LAB_14312ce20);
  return;
}



// FUNCTION 146055f22 FUN_146055f22 body=248 status=ok
// SIG undefined FUN_146055f22(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146055f22(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca71558 = 0xffffffff;
  _DAT_14ca7155c = 0x105;
  DAT_14ca7155e = 0;
  _DAT_14ca71550 = &PTR_FUN_14a337780;
  DAT_14ca71560 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415fd3d8(&local_18);
    lVar3 = DAT_14ca71560;
    DAT_14ca71560 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca71550,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 146056022 FUN_146056022 body=25 status=ok
// SIG undefined FUN_146056022(void)

void FUN_146056022(void)

{
  FUN_14605603c();
  atexit((_func_5014 *)&LAB_14312ce2c);
  return;
}



// FUNCTION 14605603c FUN_14605603c body=248 status=ok
// SIG undefined FUN_14605603c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14605603c(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca71570 = 0xffffffff;
  _DAT_14ca71574 = 0x105;
  DAT_14ca71576 = 0;
  _DAT_14ca71568 = &PTR_FUN_14a3377b0;
  DAT_14ca71578 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415fd4e2(&local_18);
    lVar3 = DAT_14ca71578;
    DAT_14ca71578 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca71568,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14605613c FUN_14605613c body=25 status=ok
// SIG undefined FUN_14605613c(void)

void FUN_14605613c(void)

{
  FUN_146056156();
  atexit((_func_5014 *)&LAB_14312ce38);
  return;
}



// FUNCTION 146056156 FUN_146056156 body=248 status=ok
// SIG undefined FUN_146056156(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146056156(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca71588 = 0xffffffff;
  _DAT_14ca7158c = 0x105;
  DAT_14ca7158e = 0;
  _DAT_14ca71580 = &PTR_FUN_14a3377e0;
  DAT_14ca71590 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415fd5ec(&local_18);
    lVar3 = DAT_14ca71590;
    DAT_14ca71590 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca71580,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 146056256 FUN_146056256 body=25 status=ok
// SIG undefined FUN_146056256(void)

void FUN_146056256(void)

{
  FUN_146056270();
  atexit((_func_5014 *)&LAB_14312ce44);
  return;
}



// FUNCTION 146056270 FUN_146056270 body=248 status=ok
// SIG undefined FUN_146056270(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146056270(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca715a0 = 0xffffffff;
  _DAT_14ca715a4 = 0x105;
  DAT_14ca715a6 = 0;
  _DAT_14ca71598 = &PTR_FUN_14a337810;
  DAT_14ca715a8 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415fd6f6(&local_18);
    lVar3 = DAT_14ca715a8;
    DAT_14ca715a8 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca71598,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 146056370 FUN_146056370 body=25 status=ok
// SIG undefined FUN_146056370(void)

void FUN_146056370(void)

{
  FUN_14605638a();
  atexit((_func_5014 *)&LAB_14312ce50);
  return;
}



// FUNCTION 14605638a FUN_14605638a body=248 status=ok
// SIG undefined FUN_14605638a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14605638a(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca715b8 = 0xffffffff;
  _DAT_14ca715bc = 0x105;
  DAT_14ca715be = 0;
  _DAT_14ca715b0 = &PTR_FUN_14a337840;
  DAT_14ca715c0 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415fd800(&local_18);
    lVar3 = DAT_14ca715c0;
    DAT_14ca715c0 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca715b0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14605648a FUN_14605648a body=25 status=ok
// SIG undefined FUN_14605648a(void)

void FUN_14605648a(void)

{
  FUN_1460564a4();
  atexit((_func_5014 *)&LAB_14312ce5c);
  return;
}



// FUNCTION 1460564a4 FUN_1460564a4 body=248 status=ok
// SIG undefined FUN_1460564a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460564a4(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca715d0 = 0xffffffff;
  _DAT_14ca715d4 = 0x105;
  DAT_14ca715d6 = 0;
  _DAT_14ca715c8 = &PTR_FUN_14a337870;
  DAT_14ca715d8 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415fd90a(&local_18);
    lVar3 = DAT_14ca715d8;
    DAT_14ca715d8 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca715c8,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 1460565a4 FUN_1460565a4 body=25 status=ok
// SIG undefined FUN_1460565a4(void)

void FUN_1460565a4(void)

{
  FUN_1460565be();
  atexit((_func_5014 *)&LAB_14312ce68);
  return;
}



// FUNCTION 1460565be FUN_1460565be body=248 status=ok
// SIG undefined FUN_1460565be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460565be(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca715e8 = 0xffffffff;
  _DAT_14ca715ec = 0x105;
  DAT_14ca715ee = 0;
  _DAT_14ca715e0 = &PTR_FUN_14a3378a0;
  DAT_14ca715f0 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415fda14(&local_18);
    lVar3 = DAT_14ca715f0;
    DAT_14ca715f0 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca715e0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 1460566be FUN_1460566be body=25 status=ok
// SIG undefined FUN_1460566be(void)

void FUN_1460566be(void)

{
  FUN_1460566d8();
  atexit((_func_5014 *)&LAB_14312ce74);
  return;
}



// FUNCTION 1460566d8 FUN_1460566d8 body=248 status=ok
// SIG undefined FUN_1460566d8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460566d8(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca71600 = 0xffffffff;
  _DAT_14ca71604 = 0x105;
  DAT_14ca71606 = 0;
  _DAT_14ca715f8 = &PTR_FUN_14a3378d0;
  DAT_14ca71608 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415fdb1e(&local_18);
    lVar3 = DAT_14ca71608;
    DAT_14ca71608 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca715f8,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 1460567d8 FUN_1460567d8 body=25 status=ok
// SIG undefined FUN_1460567d8(void)

void FUN_1460567d8(void)

{
  FUN_1460567f2();
  atexit((_func_5014 *)&LAB_14312ce80);
  return;
}



// FUNCTION 1460567f2 FUN_1460567f2 body=248 status=ok
// SIG undefined FUN_1460567f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460567f2(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca71618 = 0xffffffff;
  _DAT_14ca7161c = 0x105;
  DAT_14ca7161e = 0;
  _DAT_14ca71610 = &PTR_FUN_14a337900;
  DAT_14ca71620 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415fdc28(&local_18);
    lVar3 = DAT_14ca71620;
    DAT_14ca71620 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca71610,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 1460568f2 FUN_1460568f2 body=25 status=ok
// SIG undefined FUN_1460568f2(void)

void FUN_1460568f2(void)

{
  FUN_14605690c();
  atexit((_func_5014 *)&LAB_14312ce8c);
  return;
}



// FUNCTION 14605690c FUN_14605690c body=248 status=ok
// SIG undefined FUN_14605690c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14605690c(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca71630 = 0xffffffff;
  _DAT_14ca71634 = 0x105;
  DAT_14ca71636 = 0;
  _DAT_14ca71628 = &PTR_FUN_14a337930;
  DAT_14ca71638 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415fdd32(&local_18);
    lVar3 = DAT_14ca71638;
    DAT_14ca71638 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca71628,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 146056a0c FUN_146056a0c body=25 status=ok
// SIG undefined FUN_146056a0c(void)

void FUN_146056a0c(void)

{
  FUN_146056a26();
  atexit((_func_5014 *)&LAB_14312ce98);
  return;
}



// FUNCTION 146056a26 FUN_146056a26 body=248 status=ok
// SIG undefined FUN_146056a26(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146056a26(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca71648 = 0xffffffff;
  _DAT_14ca7164c = 0x105;
  DAT_14ca7164e = 0;
  _DAT_14ca71640 = &PTR_FUN_14a337960;
  DAT_14ca71650 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415fde3c(&local_18);
    lVar3 = DAT_14ca71650;
    DAT_14ca71650 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca71640,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 146056b26 FUN_146056b26 body=25 status=ok
// SIG undefined FUN_146056b26(void)

void FUN_146056b26(void)

{
  FUN_146056b40();
  atexit((_func_5014 *)&LAB_14312cea4);
  return;
}



// FUNCTION 146056b40 FUN_146056b40 body=248 status=ok
// SIG undefined FUN_146056b40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146056b40(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca71660 = 0xffffffff;
  _DAT_14ca71664 = 0x105;
  DAT_14ca71666 = 0;
  _DAT_14ca71658 = &PTR_FUN_14a337990;
  DAT_14ca71668 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415fdf46(&local_18);
    lVar3 = DAT_14ca71668;
    DAT_14ca71668 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca71658,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 146056c40 FUN_146056c40 body=25 status=ok
// SIG undefined FUN_146056c40(void)

void FUN_146056c40(void)

{
  FUN_146056c5a();
  atexit((_func_5014 *)&LAB_14312ceb0);
  return;
}



// FUNCTION 146056c5a FUN_146056c5a body=248 status=ok
// SIG undefined FUN_146056c5a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146056c5a(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca71678 = 0xffffffff;
  _DAT_14ca7167c = 0x105;
  DAT_14ca7167e = 0;
  _DAT_14ca71670 = &PTR_FUN_14a3379c0;
  DAT_14ca71680 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415fe050(&local_18);
    lVar3 = DAT_14ca71680;
    DAT_14ca71680 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca71670,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 146056d5a FUN_146056d5a body=25 status=ok
// SIG undefined FUN_146056d5a(void)

void FUN_146056d5a(void)

{
  FUN_146056d74();
  atexit((_func_5014 *)&LAB_14312cebc);
  return;
}



// FUNCTION 146056d74 FUN_146056d74 body=248 status=ok
// SIG undefined FUN_146056d74(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146056d74(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca71690 = 0xffffffff;
  _DAT_14ca71694 = 0x105;
  DAT_14ca71696 = 0;
  _DAT_14ca71688 = &PTR_FUN_14a3379f0;
  DAT_14ca71698 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415fe15a(&local_18);
    lVar3 = DAT_14ca71698;
    DAT_14ca71698 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca71688,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 146056e74 FUN_146056e74 body=25 status=ok
// SIG undefined FUN_146056e74(void)

void FUN_146056e74(void)

{
  FUN_146056e8e();
  atexit((_func_5014 *)&LAB_14312cec8);
  return;
}



// FUNCTION 146056e8e FUN_146056e8e body=248 status=ok
// SIG undefined FUN_146056e8e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146056e8e(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca716a8 = 0xffffffff;
  _DAT_14ca716ac = 0x105;
  DAT_14ca716ae = 0;
  _DAT_14ca716a0 = &PTR_FUN_14a337a20;
  DAT_14ca716b0 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415fe264(&local_18);
    lVar3 = DAT_14ca716b0;
    DAT_14ca716b0 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca716a0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 146056f8e FUN_146056f8e body=25 status=ok
// SIG undefined FUN_146056f8e(void)

void FUN_146056f8e(void)

{
  FUN_146056fa8();
  atexit((_func_5014 *)&LAB_14312ced4);
  return;
}



// FUNCTION 146056fa8 FUN_146056fa8 body=248 status=ok
// SIG undefined FUN_146056fa8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146056fa8(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca716c0 = 0xffffffff;
  _DAT_14ca716c4 = 0x105;
  DAT_14ca716c6 = 0;
  _DAT_14ca716b8 = &PTR_FUN_14a337a50;
  DAT_14ca716c8 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415fe36e(&local_18);
    lVar3 = DAT_14ca716c8;
    DAT_14ca716c8 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca716b8,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 1460570a8 FUN_1460570a8 body=25 status=ok
// SIG undefined FUN_1460570a8(void)

void FUN_1460570a8(void)

{
  FUN_1460570c2();
  atexit((_func_5014 *)&LAB_14312cee0);
  return;
}



// FUNCTION 1460570c2 FUN_1460570c2 body=248 status=ok
// SIG undefined FUN_1460570c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460570c2(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca716d8 = 0xffffffff;
  _DAT_14ca716dc = 0x105;
  DAT_14ca716de = 0;
  _DAT_14ca716d0 = &PTR_FUN_14a337a80;
  DAT_14ca716e0 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415fe478(&local_18);
    lVar3 = DAT_14ca716e0;
    DAT_14ca716e0 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca716d0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 1460571c2 FUN_1460571c2 body=25 status=ok
// SIG undefined FUN_1460571c2(void)

void FUN_1460571c2(void)

{
  FUN_1460571dc();
  atexit((_func_5014 *)&LAB_14312ceec);
  return;
}



// FUNCTION 1460571dc FUN_1460571dc body=248 status=ok
// SIG undefined FUN_1460571dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460571dc(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca716f0 = 0xffffffff;
  _DAT_14ca716f4 = 0x105;
  DAT_14ca716f6 = 0;
  _DAT_14ca716e8 = &PTR_FUN_14a337ab0;
  DAT_14ca716f8 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415fe582(&local_18);
    lVar3 = DAT_14ca716f8;
    DAT_14ca716f8 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca716e8,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 1460572dc FUN_1460572dc body=25 status=ok
// SIG undefined FUN_1460572dc(void)

void FUN_1460572dc(void)

{
  FUN_1460572f6();
  atexit((_func_5014 *)&LAB_14312cef8);
  return;
}



// FUNCTION 1460572f6 FUN_1460572f6 body=248 status=ok
// SIG undefined FUN_1460572f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460572f6(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca71708 = 0xffffffff;
  _DAT_14ca7170c = 0x105;
  DAT_14ca7170e = 0;
  _DAT_14ca71700 = &PTR_FUN_14a337ae0;
  DAT_14ca71710 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415fe68c(&local_18);
    lVar3 = DAT_14ca71710;
    DAT_14ca71710 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca71700,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 1460573f6 FUN_1460573f6 body=25 status=ok
// SIG undefined FUN_1460573f6(void)

void FUN_1460573f6(void)

{
  FUN_146057410();
  atexit((_func_5014 *)&LAB_14312cf04);
  return;
}



// FUNCTION 146057410 FUN_146057410 body=248 status=ok
// SIG undefined FUN_146057410(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146057410(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca71720 = 0xffffffff;
  _DAT_14ca71724 = 0x105;
  DAT_14ca71726 = 0;
  _DAT_14ca71718 = &PTR_FUN_14a337b10;
  DAT_14ca71728 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415fe796(&local_18);
    lVar3 = DAT_14ca71728;
    DAT_14ca71728 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca71718,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 146057510 FUN_146057510 body=25 status=ok
// SIG undefined FUN_146057510(void)

void FUN_146057510(void)

{
  FUN_14605752a();
  atexit((_func_5014 *)&LAB_14312cf10);
  return;
}



// FUNCTION 14605752a FUN_14605752a body=248 status=ok
// SIG undefined FUN_14605752a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14605752a(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca71758 = 0xffffffff;
  _DAT_14ca7175c = 0x105;
  DAT_14ca7175e = 0;
  _DAT_14ca71750 = &PTR_FUN_14a338030;
  DAT_14ca71760 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415fe8a0(&local_18);
    lVar3 = DAT_14ca71760;
    DAT_14ca71760 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca71750,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14605762a FUN_14605762a body=25 status=ok
// SIG undefined FUN_14605762a(void)

void FUN_14605762a(void)

{
  FUN_146057644();
  atexit((_func_5014 *)&LAB_14312cf1c);
  return;
}



// FUNCTION 146057644 FUN_146057644 body=248 status=ok
// SIG undefined FUN_146057644(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146057644(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca71770 = 0xffffffff;
  _DAT_14ca71774 = 0x105;
  DAT_14ca71776 = 0;
  _DAT_14ca71768 = &PTR_FUN_14a338060;
  DAT_14ca71778 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415fe9aa(&local_18);
    lVar3 = DAT_14ca71778;
    DAT_14ca71778 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca71768,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 146057744 FUN_146057744 body=25 status=ok
// SIG undefined FUN_146057744(void)

void FUN_146057744(void)

{
  FUN_14605775e();
  atexit((_func_5014 *)&LAB_14312cf28);
  return;
}



// FUNCTION 14605775e FUN_14605775e body=248 status=ok
// SIG undefined FUN_14605775e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14605775e(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca71788 = 0xffffffff;
  _DAT_14ca7178c = 0x105;
  DAT_14ca7178e = 0;
  _DAT_14ca71780 = &PTR_FUN_14a338090;
  DAT_14ca71790 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415feab4(&local_18);
    lVar3 = DAT_14ca71790;
    DAT_14ca71790 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca71780,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14605785e FUN_14605785e body=25 status=ok
// SIG undefined FUN_14605785e(void)

void FUN_14605785e(void)

{
  FUN_146057878();
  atexit((_func_5014 *)&LAB_14312cf34);
  return;
}



// FUNCTION 146057878 FUN_146057878 body=248 status=ok
// SIG undefined FUN_146057878(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146057878(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca717a0 = 0xffffffff;
  _DAT_14ca717a4 = 0x105;
  DAT_14ca717a6 = 0;
  _DAT_14ca71798 = &PTR_FUN_14a3380c0;
  DAT_14ca717a8 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415febbe(&local_18);
    lVar3 = DAT_14ca717a8;
    DAT_14ca717a8 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca71798,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 146057978 FUN_146057978 body=284 status=ok
// SIG undefined FUN_146057978(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146057978(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca903f0) {
    FUN_144b3d300(&DAT_14ca903f0);
    if (DAT_14ca903f0 == -1) {
      FUN_146057a94();
      FUN_140db5666(&DAT_14ca90348,0,&DAT_14ca902e0,L"FOculusAlphaInverseShader",
                    L"/Engine/Private/OculusShaders.usf",L"MainAlphaInverseShader",3,1,FUN_14742149c
                    ,FUN_147421474,&LAB_147421470,&LAB_14742146c,&LAB_14712ac0c,&LAB_14712ac08,0xe8,
                    0);
      _DAT_14ca90348 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f81da);
      _Init_thread_footer(&DAT_14ca903f0);
    }
  }
  return &DAT_14ca90348;
}



// FUNCTION 146057a94 FUN_146057a94 body=210 status=ok
// SIG undefined FUN_146057a94(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146057a94(void)

{
  if ((DAT_14ca90347 & 2) == 0) {
    DAT_14ca90347 = DAT_14ca90347 | 2;
    _DAT_14ca902e8 = L"FOculusAlphaInverseShader";
    _DAT_14ca90300 = FUN_146826540;
    _DAT_14ca90308 = FUN_146825d77;
    _DAT_14ca90310 = FUN_146825fd6;
    _DAT_14ca90318 = FUN_1407e02ea;
    _DAT_14ca90320 = FUN_146826273;
    _DAT_14ca902f8 = FUN_14742143c;
    _DAT_14ca90338 = 0xffffffff000000e8;
    _DAT_14ca90340 = 8;
    DAT_14ca90344 = 0;
    _DAT_14ca90328 = &LAB_147421468;
    FUN_146057bec();
    FUN_146057b66();
    FUN_1407e00cc(&DAT_14ca902e0);
    return;
  }
  return;
}



// FUNCTION 146057b66 FUN_146057b66 body=133 status=ok
// SIG undefined FUN_146057b66(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146057b66(void)

{
  _DAT_14ca94ae8 = L"BASE";
  DAT_14ca94b12 = 4;
  FUN_140b35ae4();
  _DAT_14ca94af8 = DAT_14ca902f0;
  _DAT_14ca94af0 = &DAT_14ca8c6c8;
  _DAT_14ca94b00 = &LAB_14682652b;
  DAT_14ca902f0 = &DAT_14ca94ae8;
  DAT_14ca90345 = DAT_14ca90345 + '\x01';
  _DAT_14ca94b08 = 0x100000000;
  if (DAT_14ca8c72c != '\0') {
    DAT_14ca90346 = DAT_14ca90346 + '\x01';
  }
  return;
}



// FUNCTION 146057bec FUN_146057bec body=216 status=ok
// SIG undefined FUN_146057bec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146057bec(void)

{
  _DAT_14ca91c18 = L"InTextureSampler";
  DAT_14ca91c42 = FUN_140850cc5();
  _DAT_14ca91c20 = FUN_140fb78d0();
  _DAT_14ca91c30 = &LAB_14682652b;
  _DAT_14ca91c38 = 0x1000000e4;
  _DAT_14ca91c40 = 0;
  _DAT_14ca91c28 = DAT_14ca902f0;
  DAT_14ca902f0 = &DAT_14ca91c18;
  _DAT_14ca91be8 = L"InTexture";
  DAT_14ca91c12 = FUN_140850cc5();
  _DAT_14ca91bf0 = FUN_140fb78d0();
  _DAT_14ca91c00 = &LAB_14682652b;
  _DAT_14ca91c08 = 0x1000000e0;
  _DAT_14ca91c10 = 0;
  _DAT_14ca91bf8 = DAT_14ca902f0;
  DAT_14ca902f0 = &DAT_14ca91be8;
  return;
}



// FUNCTION 146057cc4 FUN_146057cc4 body=25 status=ok
// SIG undefined FUN_146057cc4(void)

void FUN_146057cc4(void)

{
  FUN_146057cde();
  atexit((_func_5014 *)&LAB_1431f873a);
  return;
}



// FUNCTION 146057cde FUN_146057cde body=248 status=ok
// SIG undefined FUN_146057cde(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146057cde(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14ca90e78 = 0xffffffff;
  _DAT_14ca90e7c = 0x105;
  DAT_14ca90e7e = 0;
  _DAT_14ca90e70 = &PTR_FUN_14a387260;
  DAT_14ca90e80 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415fecc8(&local_18);
    lVar3 = DAT_14ca90e80;
    DAT_14ca90e80 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14ca90e70,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 146057dde FUN_146057dde body=25 status=ok
// SIG undefined FUN_146057dde(void)

void FUN_146057dde(void)

{
  FUN_146057df8();
  atexit((_func_5014 *)&LAB_1432c7011);
  return;
}



// FUNCTION 146057df8 FUN_146057df8 body=248 status=ok
// SIG undefined FUN_146057df8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146057df8(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14caaff20 = 0xffffffff;
  _DAT_14caaff24 = 0x105;
  DAT_14caaff26 = 0;
  _DAT_14caaff18 = &PTR_FUN_14a452290;
  DAT_14caaff28 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415fedd2(&local_18);
    lVar3 = DAT_14caaff28;
    DAT_14caaff28 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14caaff18,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 146057ef8 FUN_146057ef8 body=25 status=ok
// SIG undefined FUN_146057ef8(void)

void FUN_146057ef8(void)

{
  FUN_146057f12();
  atexit((_func_5014 *)&LAB_1432c70d1);
  return;
}



// FUNCTION 146057f12 FUN_146057f12 body=248 status=ok
// SIG undefined FUN_146057f12(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146057f12(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14cab0098 = 0xffffffff;
  _DAT_14cab009c = 0x105;
  DAT_14cab009e = 0;
  _DAT_14cab0090 = &PTR_FUN_14a452c10;
  DAT_14cab00a0 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415fefe6(&local_18);
    lVar3 = DAT_14cab00a0;
    DAT_14cab00a0 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14cab0090,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 146058012 FUN_146058012 body=25 status=ok
// SIG undefined FUN_146058012(void)

void FUN_146058012(void)

{
  FUN_14605802c();
  atexit((_func_5014 *)&LAB_1438fb646);
  return;
}



// FUNCTION 14605802c FUN_14605802c body=248 status=ok
// SIG undefined FUN_14605802c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14605802c(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14cb33190 = 0xffffffff;
  _DAT_14cb33194 = 0x105;
  DAT_14cb33196 = 0;
  _DAT_14cb33188 = &PTR_FUN_14ad4f2e0;
  DAT_14cb33198 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415ff0f0(&local_18);
    lVar3 = DAT_14cb33198;
    DAT_14cb33198 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14cb33188,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14605812c FUN_14605812c body=25 status=ok
// SIG undefined FUN_14605812c(void)

void FUN_14605812c(void)

{
  FUN_146058146();
  atexit((_func_5014 *)&LAB_143b3bea3);
  return;
}



// FUNCTION 146058146 FUN_146058146 body=248 status=ok
// SIG undefined FUN_146058146(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146058146(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14cb48900 = 0xffffffff;
  _DAT_14cb48904 = 0x105;
  DAT_14cb48906 = 0;
  _DAT_14cb488f8 = &PTR_FUN_14ae994a0;
  DAT_14cb48908 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415ff1fa(&local_18);
    lVar3 = DAT_14cb48908;
    DAT_14cb48908 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14cb488f8,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 146058246 FUN_146058246 body=37 status=ok
// SIG undefined FUN_146058246(void)

void FUN_146058246(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x4c8);
  FUN_1415c6bf6(param_2);
  return;
}



// FUNCTION 146058276 FUN_146058276 body=270 status=ok
// SIG undefined FUN_146058276(void)

undefined8 * FUN_146058276(undefined8 *param_1)

{
  FUN_1410b0e54();
  *param_1 = &PTR_FUN_14bca3f50;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined8 *)((longlong)param_1 + 0x164) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x16c) = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  return param_1;
}



// FUNCTION 146058384 FUN_146058384 body=175 status=ok
// SIG undefined FUN_146058384(void)

void FUN_146058384(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146058434(&DAT_14c964278,&local_20,param_1,FUN_1414fb6c8);
  *(undefined8 *)(param_1 + 0x30) = local_20;
  FUN_1460584fa(&DAT_14c9647a0,&local_20,param_1,FUN_1415c6e04);
  *(undefined8 *)(param_1 + 0x38) = local_20;
  lVar1 = FUN_1414fb80c(param_1);
  if (lVar1 != 0) {
    lVar2 = FUN_1447210f0(lVar1);
    if (lVar2 != 0) {
      uVar3 = FUN_1447210f0(lVar1);
      FUN_1415c6e04(param_1,uVar3);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146058434 FUN_146058434 body=196 status=ok
// SIG undefined FUN_146058434(void)

undefined8
FUN_146058434(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar1 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_149e063e0;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b4d90f0;
  puVar1[3] = param_3;
  puVar1[4] = param_4;
  FUN_14134bd86(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460584fa FUN_1460584fa body=196 status=ok
// SIG undefined FUN_1460584fa(void)

undefined8
FUN_1460584fa(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar1 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14a1e1a40;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b4d9160;
  puVar1[3] = param_3;
  puVar1[4] = param_4;
  FUN_141211c46(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460585c0 FUN_1460585c0 body=169 status=ok
// SIG undefined FUN_1460585c0(void)

bool FUN_1460585c0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14605866a FUN_14605866a body=322 status=ok
// SIG undefined FUN_14605866a(void)

void FUN_14605866a(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  
  lVar7 = *(longlong *)(param_1 + 0x180);
  iVar6 = *(int *)(lVar7 + 0x144);
  if (((-1 < (longlong)iVar6) && (iVar6 < *(int *)(lVar7 + 0x138))) &&
     (cVar5 = FUN_140280fd6(param_2,(longlong)iVar6 * 0x58 + *(longlong *)(lVar7 + 0x130) + 0x10),
     cVar5 != '\0')) {
    lVar7 = (longlong)*(int *)(*(longlong *)(param_1 + 0x180) + 0x128);
    if (lVar7 != 0) {
      plVar9 = *(longlong **)(*(longlong *)(param_1 + 0x180) + 0x120);
      plVar8 = plVar9 + lVar7 * 2;
      do {
        plVar3 = (longlong *)plVar9[1];
        if (plVar3 != (longlong *)0x0) {
          lVar7 = *plVar9;
          LOCK();
          *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
          UNLOCK();
          iVar6 = (int)plVar3[1];
          do {
            if (iVar6 == 0) goto LAB_146058752;
            LOCK();
            iVar4 = (int)plVar3[1];
            bVar10 = iVar6 == iVar4;
            if (bVar10) {
              *(int *)(plVar3 + 1) = iVar6 + 1;
              iVar4 = iVar6;
            }
            iVar6 = iVar4;
            UNLOCK();
          } while (!bVar10);
          if (lVar7 != 0) {
            AcquireSRWLockExclusive((PSRWLOCK)(lVar7 + 0x168));
            *(int *)(lVar7 + 0x160) = *(int *)(lVar7 + 0x160) + 1;
            iVar6 = *(int *)(lVar7 + 0x158);
            if (*(int *)(lVar7 + 0x154) == param_3) {
              if (iVar6 == 0) {
                iVar6 = 0;
                goto LAB_146058763;
              }
            }
            else {
LAB_146058763:
              *(int *)(lVar7 + 0x154) = param_3;
              *(int *)(lVar7 + 0x158) = iVar6 + 1;
            }
            ReleaseSRWLockExclusive((PSRWLOCK)(lVar7 + 0x168));
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
LAB_146058752:
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
        plVar9 = plVar9 + 2;
      } while (plVar9 != plVar8);
    }
  }
  return;
}



// FUNCTION 1460587ac FUN_1460587ac body=242 status=ok
// SIG undefined FUN_1460587ac(void)

void FUN_1460587ac(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)FUN_14001cc68(0x80,0x10);
  FUN_14605889e(plVar5,param_2,param_3,param_4,param_5);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  iVar3 = *(int *)(param_1 + 0x138);
  *(uint *)(param_1 + 0x138) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x13c) < iVar3 + 1U) {
    FUN_145c3a3e2((longlong *)(param_1 + 0x130),iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x130);
  *(longlong **)(lVar4 + (longlong)iVar3 * 0x10) = plVar5 + 2;
  *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
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
                    /* WARNING: Could not recover jumptable at 0x00014605889a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14605889e FUN_14605889e body=228 status=ok
// SIG undefined FUN_14605889e(void)

undefined8 *
FUN_14605889e(undefined8 *param_1,undefined8 param_2,undefined4 *param_3,undefined1 *param_4,
             undefined8 param_5)

{
  undefined1 uVar1;
  void *_Src;
  undefined8 unaff_RBX;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58;
  void *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14ba3f270;
  uVar1 = *param_4;
  local_58 = *(undefined1 *)(param_3 + 4);
  local_68 = *param_3;
  uStack_64 = param_3[1];
  uStack_60 = param_3[2];
  uStack_5c = param_3[3];
  local_50 = (void *)0x0;
  local_48 = param_3[8];
  lVar2 = (longlong)local_48;
  _Src = *(void **)(param_3 + 6);
  if (lVar2 == 0) {
    local_44 = 0;
  }
  else {
    FUN_1446dd670(&local_50,local_48,0);
    memcpy(local_50,_Src,lVar2 * 2);
  }
  local_78 = param_5;
  FUN_146058984(param_1 + 2,param_2,&local_68,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146058984 FUN_146058984 body=325 status=ok
// SIG undefined FUN_146058984(void)

undefined8 *
FUN_146058984(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined8 *local_78;
  undefined4 local_70;
  longlong local_68 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140056680(local_68,L"ShiftSDK::Rooms::CreateLobby");
  local_88 = &local_58;
  FUN_146058aca(param_1,local_68,param_2,param_5);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14ba3f2c8;
  local_78 = (undefined8 *)0x0;
  local_70 = 0;
  FUN_1446efa72(&local_78,0,2,0x10);
  local_70 = 2;
  *local_78 = &PTR_LAB_14ba3f060;
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
  local_78[2] = lVar2;
  *local_78 = &PTR_FUN_14ba3f310;
  local_78[3] = param_1;
  FUN_1415c6fe8(param_2,param_3,param_4,&local_78);
  if (*(longlong *)(param_3 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146058aca FUN_146058aca body=661 status=ok
// SIG undefined FUN_146058aca(void)

undefined8 *
FUN_146058aca(undefined8 *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             longlong *param_5)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined1 auStack_108 [40];
  undefined8 *local_e0;
  undefined4 local_d8;
  void *local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  code *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *param_1 = &PTR_LAB_14ba3d1c8;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_3 + 0x38);
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  *param_1 = &PTR_FUN_14ba3f2d8;
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar3 = (void *)*param_2;
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar3,(longlong)iVar1 * 2);
  }
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_146058d60(param_1 + 4,param_4);
  param_1[6] = 0;
  param_1[8] = 0;
  local_d8 = 0;
  local_d0 = (void *)0x0;
  uVar2 = *(uint *)(param_5 + 1);
  pvVar3 = (void *)*param_5;
  local_c8 = CONCAT44(local_c8._4_4_,uVar2);
  local_e0 = param_1;
  if ((longlong)(int)uVar2 == 0) {
    local_c8 = (ulonglong)uVar2;
  }
  else {
    FUN_1446dd670(&local_d0,uVar2,0);
    memcpy(local_d0,pvVar3,(longlong)(int)uVar2 * 2);
  }
  local_c0 = 7;
  local_b8 = (code *)0x0;
  puVar10 = (undefined8 *)FUN_14001cc68(0x30,8);
  *puVar10 = &PTR_FUN_14ba3f2f0;
  *(undefined4 *)(puVar10 + 2) = local_d8;
  puVar10[1] = local_e0;
  puVar10[3] = local_d0;
  local_d0 = (void *)0x0;
  *(undefined4 *)(puVar10 + 4) = (undefined4)local_c8;
  *(undefined4 *)((longlong)puVar10 + 0x24) = local_c8._4_4_;
  local_c8 = 0;
  *(undefined4 *)(puVar10 + 5) = local_c0;
  if (puVar10 + 1 != (undefined8 *)0x0) {
    local_b8 = FUN_148fa448c;
  }
  local_78 = param_1[6];
  uStack_70 = param_1[7];
  local_a8 = (longlong *)param_1[8];
  uStack_60 = param_1[9];
  local_58 = param_1[10];
  uStack_50 = param_1[0xb];
  local_48 = param_1[0xc];
  uStack_40 = param_1[0xd];
  uVar8 = local_48;
  uVar9 = uStack_40;
  uVar6 = local_58;
  uVar7 = uStack_50;
  local_68 = local_a8;
  uVar5 = uStack_60;
  uVar4 = uStack_70;
  param_1[0xc] = CONCAT44(uStack_84,local_88);
  param_1[0xd] = CONCAT44(uStack_7c,uStack_80);
  param_1[10] = CONCAT44(uStack_94,local_98);
  param_1[0xb] = CONCAT44(uStack_8c,uStack_90);
  param_1[8] = puVar10;
  param_1[9] = CONCAT44(uStack_9c,uStack_a0);
  param_1[6] = local_b8;
  param_1[7] = CONCAT44(uStack_ac,uStack_b0);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_88 = (undefined4)local_48;
  uStack_84 = local_48._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  local_98 = (undefined4)local_58;
  uStack_94 = local_58._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  local_b8 = (code *)local_78;
  uStack_70 = uVar4;
  uStack_60 = uVar5;
  local_58 = uVar6;
  uStack_50 = uVar7;
  local_48 = uVar8;
  uStack_40 = uVar9;
  if (local_78 != 0) {
    plVar11 = local_a8;
    if (local_a8 == (longlong *)0x0) {
      plVar11 = (longlong *)&local_98;
    }
    (**(code **)(*plVar11 + 0x10))();
    if (local_d0 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if (*param_5 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146058d60 FUN_146058d60 body=124 status=ok
// SIG undefined FUN_146058d60(void)

void FUN_146058d60(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    if (((int)param_2[1] != 0) && (param_2 = (longlong *)*param_2, param_2 != (longlong *)0x0)) {
      (**(code **)(*param_2 + 0x40))(param_2,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146058dde FUN_146058dde body=26 status=ok
// SIG undefined FUN_146058dde(void)

void FUN_146058dde(undefined8 param_1)

{
  FUN_140893b6e();
  FUN_146058df8(param_1);
  return;
}



// FUNCTION 146058df8 FUN_146058df8 body=389 status=ok
// SIG undefined FUN_146058df8(void)

void FUN_146058df8(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  code *local_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x180))();
  if (lVar3 == 0) {
    local_40 = FUN_146158f38;
    local_38 = 0;
    FUN_14605982c(&local_30,param_1);
  }
  else {
    FUN_140457ffc(&DAT_14c9647a0,param_1);
    FUN_14485c47a(param_1 + 0xb0,*(undefined8 *)(lVar3 + 0x38));
    plVar4 = (longlong *)
             FUN_146058ff2((uint)((ulonglong)*(undefined8 *)(param_1 + 0xb0) >> 0x20) ^
                           (uint)*(undefined8 *)(param_1 + 0xb0),param_1 + 0xb0);
    local_40 = (code *)0x0;
    FUN_14485c47a(&local_40,param_1);
    iVar2 = (int)plVar4[1];
    *(uint *)(plVar4 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)plVar4 + 0xc) < iVar2 + 1U) {
      FUN_146059078(plVar4,iVar2);
    }
    *(code **)(*plVar4 + (longlong)iVar2 * 8) = local_40;
    local_40 = (code *)0x0;
    FUN_14485c47a(&local_40,param_1);
    lVar1 = *(longlong *)(param_1 + 0x28);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
    }
    local_30 = 0;
    FUN_14485c47a(&local_30,lVar1);
    FUN_146058f7e((uint)((ulonglong)local_30 >> 0x20) ^ (uint)local_30,&local_30,&local_40);
    iVar2 = FUN_14490d72a(lVar3);
    *(int *)(param_1 + 0x70) = iVar2;
    if (iVar2 == 3) {
      plVar4 = (longlong *)FUN_1415c71f6(param_1);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0xd8))(plVar4,1);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146058f7e FUN_146058f7e body=115 status=ok
// SIG undefined FUN_146058f7e(void)

void FUN_146058f7e(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_1460591ca();
  if ((iVar1 == -1) || ((longlong)iVar1 * 0x18 + DAT_14cb7c3c0 == 0)) {
    local_38 = param_2;
    local_30 = param_3;
    FUN_14605929a(local_24,param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146058ff2 FUN_146058ff2 body=132 status=ok
// SIG undefined FUN_146058ff2(void)

longlong FUN_146058ff2(undefined4 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar1 = FUN_1460590fc();
  if ((iVar1 == -1) || (lVar2 = (longlong)iVar1 * 0x20, DAT_14cb7c370 + lVar2 == 0)) {
    local_28 = param_2;
    FUN_146059556(&local_1c,param_1);
    lVar2 = (longlong)local_1c << 5;
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2 + DAT_14cb7c370 + 8;
}



// FUNCTION 146059078 FUN_146059078 body=132 status=ok
// SIG undefined FUN_146059078(void)

void FUN_146059078(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1460590fc FUN_1460590fc body=205 status=ok
// SIG undefined FUN_1460590fc(void)

int FUN_1460590fc(uint param_1,undefined8 *param_2)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb7c378 != DAT_14cb7c3a4) {
    puVar2 = &DAT_14cb7c3a8;
    if (DAT_14cb7c3b0 != (undefined *)0x0) {
      puVar2 = DAT_14cb7c3b0;
    }
    iVar3 = *(int *)(puVar2 + (ulonglong)(DAT_14cb7c3b8 - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        local_40 = *param_2;
        local_38 = *(undefined8 *)(DAT_14cb7c370 + (longlong)iVar3 * 0x20);
        cVar1 = FUN_1460869b8(&local_38,&local_40);
        if (cVar1 != '\0') goto LAB_146059129;
        iVar3 = *(int *)(DAT_14cb7c370 + 0x18 + (longlong)iVar3 * 0x20);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_146059129:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar3;
}



// FUNCTION 1460591ca FUN_1460591ca body=206 status=ok
// SIG undefined FUN_1460591ca(void)

int FUN_1460591ca(uint param_1,undefined8 *param_2)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb7c3c8 != DAT_14cb7c3f4) {
    puVar2 = &DAT_14cb7c3f8;
    if (DAT_14cb7c400 != (undefined *)0x0) {
      puVar2 = DAT_14cb7c400;
    }
    iVar3 = *(int *)(puVar2 + (ulonglong)(DAT_14cb7c408 - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        local_40 = *param_2;
        local_38 = *(undefined8 *)(DAT_14cb7c3c0 + (longlong)iVar3 * 0x18);
        cVar1 = FUN_14021c772(&local_38,&local_40);
        if (cVar1 != '\0') goto LAB_1460591f7;
        iVar3 = *(int *)(DAT_14cb7c3c0 + 0x10 + (longlong)iVar3 * 0x18);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_1460591f7:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar3;
}



// FUNCTION 14605929a FUN_14605929a body=293 status=ok
// SIG undefined FUN_14605929a(void)

undefined4 * FUN_14605929a(undefined4 *param_1,uint param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  undefined *puVar5;
  ulonglong uVar6;
  int iVar7;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146059448(local_48);
  puVar1 = (undefined8 *)param_3[1];
  *local_40 = *(undefined8 *)*param_3;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  cVar3 = FUN_1460593c0(param_2,local_40,local_48);
  if (cVar3 == '\0') {
    uVar4 = DAT_14cb7c3c8 - DAT_14cb7c3f4;
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar2 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= DAT_14cb7c408)) {
      param_2 = DAT_14cb7c408 - 1U & param_2;
      *(uint *)((longlong)local_40 + 0x14) = param_2;
      puVar5 = DAT_14cb7c400;
      if (DAT_14cb7c400 == (undefined *)0x0) {
        puVar5 = &DAT_14cb7c3f8;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)(puVar5 + ((longlong)DAT_14cb7c408 - 1U & (longlong)(int)param_2) * 4);
      puVar5 = DAT_14cb7c400;
      if (DAT_14cb7c400 == (undefined *)0x0) {
        puVar5 = &DAT_14cb7c3f8;
      }
      *(undefined4 *)(puVar5 + ((longlong)DAT_14cb7c408 - 1U & (longlong)(int)param_2) * 4) =
           local_48[0];
    }
    else {
      DAT_14cb7c408 = iVar7;
      FUN_146059926();
    }
  }
  *param_1 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460593c0 FUN_1460593c0 body=134 status=ok
// SIG undefined FUN_1460593c0(void)

undefined8 FUN_1460593c0(undefined8 param_1,undefined8 *param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb7c3c8 - DAT_14cb7c3f4 != 1) {
    local_28 = *param_2;
    iVar5 = FUN_14043498a();
    if (iVar5 != -1) {
      uVar2 = *(undefined4 *)((longlong)param_2 + 4);
      uVar3 = *(undefined4 *)(param_2 + 1);
      uVar4 = *(undefined4 *)((longlong)param_2 + 0xc);
      puVar1 = (undefined4 *)(DAT_14cb7c3c0 + (longlong)iVar5 * 0x18);
      *puVar1 = *(undefined4 *)param_2;
      puVar1[1] = uVar2;
      puVar1[2] = uVar3;
      puVar1[3] = uVar4;
      FUN_14579b8c4(*param_3);
      *param_3 = iVar5;
      uVar6 = 1;
      goto LAB_1460593e9;
    }
  }
  uVar6 = 0;
LAB_1460593e9:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146059448 FUN_146059448 body=270 status=ok
// SIG undefined FUN_146059448(void)

int * FUN_146059448(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb7c3f0;
  iVar3 = DAT_14cb7c3c8;
  if (DAT_14cb7c3f4 == 0) {
    iVar2 = DAT_14cb7c3c8 + 1;
    bVar7 = DAT_14cb7c3cc == DAT_14cb7c3c8;
    DAT_14cb7c3c8 = iVar2;
    if (bVar7) {
      FUN_1403951a8(&DAT_14cb7c3c0,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb7c3d0,1);
    puVar4 = DAT_14cb7c3e0;
    if (DAT_14cb7c3e0 == (undefined *)0x0) {
      puVar4 = &DAT_14cb7c3d0;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14cb7c3f0;
    DAT_14cb7c3f0 = *(int *)(DAT_14cb7c3c0 + 4 + lVar6 * 0x18);
    DAT_14cb7c3f4 = DAT_14cb7c3f4 + -1;
    if (DAT_14cb7c3f4 != 0) {
      *(undefined4 *)(DAT_14cb7c3c0 + (longlong)DAT_14cb7c3f0 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb7c3d0;
  if (DAT_14cb7c3e0 != (undefined *)0x0) {
    puVar4 = DAT_14cb7c3e0;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb7c3c0;
  return param_1;
}



// FUNCTION 146059556 FUN_146059556 body=289 status=ok
// SIG undefined FUN_146059556(void)

undefined4 * FUN_146059556(undefined4 *param_1,uint param_2,undefined8 *param_3)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  undefined *puVar4;
  ulonglong uVar5;
  int iVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14605971e(local_48);
  *local_40 = *(undefined8 *)*param_3;
  local_40[1] = 0;
  local_40[2] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  cVar2 = FUN_146059678(param_2,local_40,local_48);
  if (cVar2 == '\0') {
    uVar3 = DAT_14cb7c378 - DAT_14cb7c3a4;
    iVar6 = 1;
    if (3 < uVar3) {
      uVar5 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar6 <= DAT_14cb7c3b8)) {
      param_2 = DAT_14cb7c3b8 - 1U & param_2;
      *(uint *)((longlong)local_40 + 0x1c) = param_2;
      puVar4 = DAT_14cb7c3b0;
      if (DAT_14cb7c3b0 == (undefined *)0x0) {
        puVar4 = &DAT_14cb7c3a8;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)(puVar4 + ((longlong)DAT_14cb7c3b8 - 1U & (longlong)(int)param_2) * 4);
      puVar4 = DAT_14cb7c3b0;
      if (DAT_14cb7c3b0 == (undefined *)0x0) {
        puVar4 = &DAT_14cb7c3a8;
      }
      *(undefined4 *)(puVar4 + ((longlong)DAT_14cb7c3b8 - 1U & (longlong)(int)param_2) * 4) =
           local_48[0];
    }
    else {
      DAT_14cb7c3b8 = iVar6;
      FUN_146059b0e();
    }
  }
  *param_1 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146059678 FUN_146059678 body=165 status=ok
// SIG undefined FUN_146059678(void)

undefined8 FUN_146059678(undefined8 param_1,undefined8 *param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14cb7c378 - DAT_14cb7c3a4 != 1) {
    local_30 = *param_2;
    iVar6 = FUN_140d09bd2();
    if (iVar6 != -1) {
      puVar1 = (undefined4 *)(DAT_14cb7c370 + (longlong)iVar6 * 0x20);
      if (*(longlong *)(DAT_14cb7c370 + 8 + (longlong)iVar6 * 0x20) != 0) {
        FUN_1400020a8();
      }
      uVar2 = *(undefined4 *)param_2;
      uVar3 = *(undefined4 *)((longlong)param_2 + 4);
      uVar4 = *(undefined4 *)(param_2 + 1);
      uVar5 = *(undefined4 *)((longlong)param_2 + 0xc);
      *(undefined8 *)(puVar1 + 4) = param_2[2];
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      FUN_14579badc(*param_3);
      *param_3 = iVar6;
      uVar7 = 1;
      goto LAB_1460596a3;
    }
  }
  uVar7 = 0;
LAB_1460596a3:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14605971e FUN_14605971e body=269 status=ok
// SIG undefined FUN_14605971e(void)

int * FUN_14605971e(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb7c3a0;
  iVar3 = DAT_14cb7c378;
  if (DAT_14cb7c3a4 == 0) {
    iVar2 = DAT_14cb7c378 + 1;
    bVar7 = DAT_14cb7c37c == DAT_14cb7c378;
    DAT_14cb7c378 = iVar2;
    if (bVar7) {
      FUN_1447711aa(&DAT_14cb7c370,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb7c380,1);
    puVar4 = DAT_14cb7c390;
    if (DAT_14cb7c390 == (undefined *)0x0) {
      puVar4 = &DAT_14cb7c380;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14cb7c3a0;
    DAT_14cb7c3a0 = *(int *)(DAT_14cb7c370 + 4 + lVar6 * 0x20);
    DAT_14cb7c3a4 = DAT_14cb7c3a4 + -1;
    if (DAT_14cb7c3a4 != 0) {
      *(undefined4 *)(DAT_14cb7c370 + (longlong)DAT_14cb7c3a0 * 0x20) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb7c380;
  if (DAT_14cb7c390 != (undefined *)0x0) {
    puVar4 = DAT_14cb7c390;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x20 + DAT_14cb7c370;
  return param_1;
}



// FUNCTION 14605982c FUN_14605982c body=248 status=ok
// SIG undefined FUN_14605982c(void)

undefined8 FUN_14605982c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  *local_40 = &PTR_FUN_14b3fdc50;
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



// FUNCTION 146059926 FUN_146059926 body=486 status=ok
// SIG undefined FUN_146059926(void)

void FUN_146059926(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
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
  if (DAT_14cb7c400 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb7c400,0,0,4);
  }
  uVar3 = DAT_14cb7c408;
  uVar2 = local_50;
  if (DAT_14cb7c408 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb7c3f8,0,DAT_14cb7c408,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb7c400;
        if (DAT_14cb7c400 == (undefined *)0x0) {
          puVar6 = &DAT_14cb7c3f8;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb7c408 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb7c3d0;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb7c3e8 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb7c3c0;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar9 = (longlong)(int)((uint)((ulonglong)uVar2 >> 0x20) ^ (uint)uVar2) &
                (longlong)(int)DAT_14cb7c408 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb7c400;
        if (DAT_14cb7c400 == (undefined *)0x0) {
          puVar6 = &DAT_14cb7c3f8;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb7c408 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb7c400;
        if (DAT_14cb7c400 == (undefined *)0x0) {
          puVar6 = &DAT_14cb7c3f8;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb7c408 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
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



// FUNCTION 146059b0e FUN_146059b0e body=489 status=ok
// SIG undefined FUN_146059b0e(void)

void FUN_146059b0e(void)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined *puVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
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
  if (DAT_14cb7c3b0 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb7c3b0,0,0,4);
  }
  uVar2 = DAT_14cb7c3b8;
  uVar3 = local_50;
  if (DAT_14cb7c3b8 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb7c3a8,0,DAT_14cb7c3b8,4);
    if (0 < (int)uVar2) {
      do {
        puVar5 = DAT_14cb7c3b0;
        if (DAT_14cb7c3b0 == (undefined *)0x0) {
          puVar5 = &DAT_14cb7c3a8;
        }
        *(undefined4 *)(puVar5 + (ulonglong)(DAT_14cb7c3b8 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar2 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb7c380;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb7c398 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb7c370;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar3 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar3;
      do {
        lVar1 = *local_68;
        lVar6 = (longlong)iVar4 * 0x20;
        uVar9 = (longlong)
                (int)((uint)((ulonglong)*(undefined8 *)(lVar1 + lVar6) >> 0x20) ^
                     (uint)*(undefined8 *)(lVar1 + lVar6)) & (longlong)(int)DAT_14cb7c3b8 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x1c + lVar6) = iVar8;
        puVar5 = DAT_14cb7c3b0;
        if (DAT_14cb7c3b0 == (undefined *)0x0) {
          puVar5 = &DAT_14cb7c3a8;
        }
        *(undefined4 *)(lVar1 + 0x18 + lVar6) =
             *(undefined4 *)(puVar5 + ((longlong)(int)DAT_14cb7c3b8 - 1U & uVar9) * 4);
        puVar5 = DAT_14cb7c3b0;
        if (DAT_14cb7c3b0 == (undefined *)0x0) {
          puVar5 = &DAT_14cb7c3a8;
        }
        *(int *)(puVar5 + ((longlong)iVar8 & (longlong)(int)DAT_14cb7c3b8 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar3 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar3;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146059cf8 FUN_146059cf8 body=144 status=ok
// SIG undefined FUN_146059cf8(void)

bool FUN_146059cf8(longlong param_1)

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



// FUNCTION 146059d8a FUN_146059d8a body=42 status=ok
// SIG undefined FUN_146059d8a(void)

void FUN_146059d8a(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_14480f766(&DAT_14c872cf8);
  }
  FUN_146059db4(param_1);
  return;
}



// FUNCTION 146059db4 FUN_146059db4 body=375 status=ok
// SIG undefined FUN_146059db4(void)

void FUN_146059db4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined1 local_a0;
  undefined1 local_98;
  undefined1 *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_69;
  undefined8 local_68;
  longlong *local_60;
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(longlong *)(param_1 + 0x40) == 0) {
    local_58 = 0;
    uStack_50 = 0;
    lVar4 = FUN_14050fd64();
    local_88 = 0;
    uStack_80 = 0;
    local_90 = &local_69;
    local_98 = 0;
    local_a0 = 0;
    local_a8 = 0;
    FUN_1457028c8(lVar4 + 0x1e8,&local_68,&local_58);
    plVar1 = local_60;
    if ((undefined8 *)(param_1 + 0x40) != &local_68) {
      *(undefined8 *)(param_1 + 0x40) = local_68;
      local_68 = 0;
      plVar3 = *(longlong **)(param_1 + 0x48);
      if (local_60 != plVar3) {
        local_60 = (longlong *)0x0;
        *(longlong **)(param_1 + 0x48) = plVar1;
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
    plVar1 = local_60;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_60 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    FUN_1449db362(&local_88);
    FUN_140861e20(local_58,uStack_50 & 0xffffffff);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146059f2c FUN_146059f2c body=26 status=ok
// SIG undefined FUN_146059f2c(void)

void FUN_146059f2c(undefined8 param_1)

{
  FUN_140893b6e();
  FUN_146059f46(param_1);
  return;
}



// FUNCTION 146059f46 FUN_146059f46 body=230 status=ok
// SIG undefined FUN_146059f46(void)

void FUN_146059f46(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x180))();
  if (lVar3 == 0) {
    FUN_14605a4dc(&local_30,param_1);
  }
  else {
    FUN_140457ffc(&DAT_14c9647a0,param_1);
    FUN_14485c47a(param_1 + 0x90,*(undefined8 *)(lVar3 + 0x38));
    plVar4 = (longlong *)
             FUN_14605a02e((uint)((ulonglong)*(undefined8 *)(param_1 + 0x90) >> 0x20) ^
                           (uint)*(undefined8 *)(param_1 + 0x90),param_1 + 0x90);
    local_30 = 0;
    FUN_14485c47a(&local_30,param_1);
    iVar1 = (int)plVar4[1];
    *(uint *)(plVar4 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar4 + 0xc) < iVar1 + 1U) {
      FUN_14605a0b4(plVar4,iVar1);
    }
    *(undefined8 *)(*plVar4 + (longlong)iVar1 * 8) = local_30;
    uVar2 = FUN_14490d72a(lVar3);
    *(undefined4 *)(param_1 + 0x68) = uVar2;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14605a02e FUN_14605a02e body=132 status=ok
// SIG undefined FUN_14605a02e(void)

longlong FUN_14605a02e(undefined4 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar1 = FUN_14605a138();
  if ((iVar1 == -1) || (lVar2 = (longlong)iVar1 * 0x20, DAT_14cb7d778 + lVar2 == 0)) {
    local_28 = param_2;
    FUN_14605a206(&local_1c,param_1);
    lVar2 = (longlong)local_1c << 5;
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2 + DAT_14cb7d778 + 8;
}



// FUNCTION 14605a0b4 FUN_14605a0b4 body=132 status=ok
// SIG undefined FUN_14605a0b4(void)

void FUN_14605a0b4(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14605a138 FUN_14605a138 body=205 status=ok
// SIG undefined FUN_14605a138(void)

int FUN_14605a138(uint param_1,undefined8 *param_2)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb7d780 != DAT_14cb7d7ac) {
    puVar2 = &DAT_14cb7d7b0;
    if (DAT_14cb7d7b8 != (undefined *)0x0) {
      puVar2 = DAT_14cb7d7b8;
    }
    iVar3 = *(int *)(puVar2 + (ulonglong)(DAT_14cb7d7c0 - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        local_40 = *param_2;
        local_38 = *(undefined8 *)(DAT_14cb7d778 + (longlong)iVar3 * 0x20);
        cVar1 = FUN_1460869b8(&local_38,&local_40);
        if (cVar1 != '\0') goto LAB_14605a165;
        iVar3 = *(int *)(DAT_14cb7d778 + 0x18 + (longlong)iVar3 * 0x20);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_14605a165:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar3;
}



// FUNCTION 14605a206 FUN_14605a206 body=289 status=ok
// SIG undefined FUN_14605a206(void)

undefined4 * FUN_14605a206(undefined4 *param_1,uint param_2,undefined8 *param_3)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  undefined *puVar4;
  ulonglong uVar5;
  int iVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14605a3ce(local_48);
  *local_40 = *(undefined8 *)*param_3;
  local_40[1] = 0;
  local_40[2] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  cVar2 = FUN_14605a328(param_2,local_40,local_48);
  if (cVar2 == '\0') {
    uVar3 = DAT_14cb7d780 - DAT_14cb7d7ac;
    iVar6 = 1;
    if (3 < uVar3) {
      uVar5 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar6 <= DAT_14cb7d7c0)) {
      param_2 = DAT_14cb7d7c0 - 1U & param_2;
      *(uint *)((longlong)local_40 + 0x1c) = param_2;
      puVar4 = DAT_14cb7d7b8;
      if (DAT_14cb7d7b8 == (undefined *)0x0) {
        puVar4 = &DAT_14cb7d7b0;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)(puVar4 + ((longlong)DAT_14cb7d7c0 - 1U & (longlong)(int)param_2) * 4);
      puVar4 = DAT_14cb7d7b8;
      if (DAT_14cb7d7b8 == (undefined *)0x0) {
        puVar4 = &DAT_14cb7d7b0;
      }
      *(undefined4 *)(puVar4 + ((longlong)DAT_14cb7d7c0 - 1U & (longlong)(int)param_2) * 4) =
           local_48[0];
    }
    else {
      DAT_14cb7d7c0 = iVar6;
      FUN_14605a5cc();
    }
  }
  *param_1 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14605a328 FUN_14605a328 body=165 status=ok
// SIG undefined FUN_14605a328(void)

undefined8 FUN_14605a328(undefined8 param_1,undefined8 *param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14cb7d780 - DAT_14cb7d7ac != 1) {
    local_30 = *param_2;
    iVar6 = FUN_145d28510();
    if (iVar6 != -1) {
      puVar1 = (undefined4 *)(DAT_14cb7d778 + (longlong)iVar6 * 0x20);
      if (*(longlong *)(DAT_14cb7d778 + 8 + (longlong)iVar6 * 0x20) != 0) {
        FUN_1400020a8();
      }
      uVar2 = *(undefined4 *)param_2;
      uVar3 = *(undefined4 *)((longlong)param_2 + 4);
      uVar4 = *(undefined4 *)(param_2 + 1);
      uVar5 = *(undefined4 *)((longlong)param_2 + 0xc);
      *(undefined8 *)(puVar1 + 4) = param_2[2];
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      FUN_145d28774(*param_3);
      *param_3 = iVar6;
      uVar7 = 1;
      goto LAB_14605a353;
    }
  }
  uVar7 = 0;
LAB_14605a353:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


