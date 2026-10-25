// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145fffd4a FUN_145fffd4a body=225 status=ok
// SIG undefined FUN_145fffd4a(void)

void FUN_145fffd4a(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb25ac8 == 0) {
    FUN_1446ddc76(&local_18,"GbxAudioGraphManager",1);
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    local_20 = 2;
    *local_28 = &PTR_LAB_14a1c87c0;
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
    local_28[2] = lVar2;
    *local_28 = &PTR_FUN_14acb7b30;
    DAT_14cb25ac8 = FUN_14106fa82(&local_28,local_18,7);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fffe2c FUN_145fffe2c body=20 status=ok
// SIG undefined FUN_145fffe2c(void)

void FUN_145fffe2c(void)

{
  DAT_14cb54790 = FUN_145fffe40();
  return;
}



// FUNCTION 145fffe40 FUN_145fffe40 body=225 status=ok
// SIG undefined FUN_145fffe40(void)

void FUN_145fffe40(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb54790 == 0) {
    FUN_1446ddc76(&local_18,"TimeOfDayManager",1);
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    local_20 = 2;
    *local_28 = &PTR_LAB_14a1c87c0;
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
    local_28[2] = lVar2;
    *local_28 = &PTR_FUN_14afe33b0;
    DAT_14cb54790 = FUN_14106fa82(&local_28,local_18,0x23);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ffff22 FUN_145ffff22 body=20 status=ok
// SIG undefined FUN_145ffff22(void)

void FUN_145ffff22(void)

{
  DAT_14cb717e8 = FUN_145ffff36();
  return;
}



// FUNCTION 145ffff36 FUN_145ffff36 body=225 status=ok
// SIG undefined FUN_145ffff36(void)

void FUN_145ffff36(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb717e8 == 0) {
    FUN_1446ddc76(&local_18,"CorpseManager",1);
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    local_20 = 2;
    *local_28 = &PTR_LAB_14a1c87c0;
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
    local_28[2] = lVar2;
    *local_28 = &PTR_FUN_14b3e9a90;
    DAT_14cb717e8 = FUN_14106fa82(&local_28,local_18,0);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146000018 FUN_146000018 body=20 status=ok
// SIG undefined FUN_146000018(void)

void FUN_146000018(void)

{
  DAT_14cb71828 = FUN_14600002c();
  return;
}



// FUNCTION 14600002c FUN_14600002c body=225 status=ok
// SIG undefined FUN_14600002c(void)

void FUN_14600002c(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb71828 == 0) {
    FUN_1446ddc76(&local_18,"GbxAINodeManager",1);
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    local_20 = 2;
    *local_28 = &PTR_LAB_14a1c87c0;
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
    local_28[2] = lVar2;
    *local_28 = &PTR_FUN_14b3e9d90;
    DAT_14cb71828 = FUN_14106fa82(&local_28,local_18,2);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14600010e FUN_14600010e body=20 status=ok
// SIG undefined FUN_14600010e(void)

void FUN_14600010e(void)

{
  DAT_14cb71f80 = FUN_146000122();
  return;
}



// FUNCTION 146000122 FUN_146000122 body=225 status=ok
// SIG undefined FUN_146000122(void)

void FUN_146000122(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb71f80 == 0) {
    FUN_1446ddc76(&local_18,"AnimManager",1);
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    local_20 = 2;
    *local_28 = &PTR_LAB_14a1c87c0;
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
    local_28[2] = lVar2;
    *local_28 = &PTR_FUN_14b3ecec0;
    DAT_14cb71f80 = FUN_14106fa82(&local_28,local_18,0xe);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146000204 FUN_146000204 body=20 status=ok
// SIG undefined FUN_146000204(void)

void FUN_146000204(void)

{
  DAT_14cb71da8 = FUN_146000218();
  return;
}



// FUNCTION 146000218 FUN_146000218 body=225 status=ok
// SIG undefined FUN_146000218(void)

void FUN_146000218(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb71da8 == 0) {
    FUN_1446ddc76(&local_18,"RotationManager",1);
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    local_20 = 2;
    *local_28 = &PTR_LAB_14a1c87c0;
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
    local_28[2] = lVar2;
    *local_28 = &PTR_FUN_14b3ece20;
    DAT_14cb71da8 = FUN_14106fa82(&local_28,local_18,0x2a);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460002fa FUN_1460002fa body=20 status=ok
// SIG undefined FUN_1460002fa(void)

void FUN_1460002fa(void)

{
  DAT_14cb71d90 = FUN_14600030e();
  return;
}



// FUNCTION 14600030e FUN_14600030e body=225 status=ok
// SIG undefined FUN_14600030e(void)

void FUN_14600030e(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb71d90 == 0) {
    FUN_1446ddc76(&local_18,"SlopeWarpingManager",1);
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    local_20 = 2;
    *local_28 = &PTR_LAB_14a1c87c0;
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
    local_28[2] = lVar2;
    *local_28 = &PTR_FUN_14b3ecd80;
    DAT_14cb71d90 = FUN_14106fa82(&local_28,local_18,0);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460003f0 FUN_1460003f0 body=20 status=ok
// SIG undefined FUN_1460003f0(void)

void FUN_1460003f0(void)

{
  DAT_14cb72610 = FUN_146000404();
  return;
}



// FUNCTION 146000404 FUN_146000404 body=225 status=ok
// SIG undefined FUN_146000404(void)

void FUN_146000404(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb72610 == 0) {
    FUN_1446ddc76(&local_18,"GbxWorldAudioManager",1);
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    local_20 = 2;
    *local_28 = &PTR_LAB_14a1c87c0;
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
    local_28[2] = lVar2;
    *local_28 = &PTR_FUN_14b3ef5e0;
    DAT_14cb72610 = FUN_14106fa82(&local_28,local_18,0);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460004e6 FUN_1460004e6 body=20 status=ok
// SIG undefined FUN_1460004e6(void)

void FUN_1460004e6(void)

{
  DAT_14cb75f60 = FUN_1460004fa();
  return;
}



// FUNCTION 1460004fa FUN_1460004fa body=225 status=ok
// SIG undefined FUN_1460004fa(void)

void FUN_1460004fa(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb75f60 == 0) {
    FUN_1446ddc76(&local_18,"GbxEffectsManager",1);
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    local_20 = 2;
    *local_28 = &PTR_LAB_14a1c87c0;
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
    local_28[2] = lVar2;
    *local_28 = &PTR_FUN_14b3f27f0;
    DAT_14cb75f60 = FUN_14106fa82(&local_28,local_18,4);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460005dc FUN_1460005dc body=20 status=ok
// SIG undefined FUN_1460005dc(void)

void FUN_1460005dc(void)

{
  DAT_14cb76230 = FUN_1460005f0();
  return;
}



// FUNCTION 1460005f0 FUN_1460005f0 body=225 status=ok
// SIG undefined FUN_1460005f0(void)

void FUN_1460005f0(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb76230 == 0) {
    FUN_1446ddc76(&local_18,"GbxAreaComponentManager",1);
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    local_20 = 2;
    *local_28 = &PTR_LAB_14a1c87c0;
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
    local_28[2] = lVar2;
    *local_28 = &PTR_FUN_14b3f4d70;
    DAT_14cb76230 = FUN_14106fa82(&local_28,local_18,1);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460006d2 FUN_1460006d2 body=20 status=ok
// SIG undefined FUN_1460006d2(void)

void FUN_1460006d2(void)

{
  DAT_14cb76828 = FUN_1460006e6();
  return;
}



// FUNCTION 1460006e6 FUN_1460006e6 body=225 status=ok
// SIG undefined FUN_1460006e6(void)

void FUN_1460006e6(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb76828 == 0) {
    FUN_1446ddc76(&local_18,"DamageManager",1);
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    local_20 = 2;
    *local_28 = &PTR_LAB_14a1c87c0;
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
    local_28[2] = lVar2;
    *local_28 = &PTR_FUN_14b3f63e0;
    DAT_14cb76828 = FUN_14106fa82(&local_28,local_18,0);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460007c8 FUN_1460007c8 body=20 status=ok
// SIG undefined FUN_1460007c8(void)

void FUN_1460007c8(void)

{
  DAT_14cb77ce0 = FUN_1460007dc();
  return;
}



// FUNCTION 1460007dc FUN_1460007dc body=225 status=ok
// SIG undefined FUN_1460007dc(void)

void FUN_1460007dc(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb77ce0 == 0) {
    FUN_1446ddc76(&local_18,"DangerWarningManager",1);
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    local_20 = 2;
    *local_28 = &PTR_LAB_14a1c87c0;
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
    local_28[2] = lVar2;
    *local_28 = &PTR_FUN_14b3f7770;
    DAT_14cb77ce0 = FUN_14106fa82(&local_28,local_18,1);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460008be FUN_1460008be body=20 status=ok
// SIG undefined FUN_1460008be(void)

void FUN_1460008be(void)

{
  DAT_14cb786a8 = FUN_1460008d2();
  return;
}



// FUNCTION 1460008d2 FUN_1460008d2 body=225 status=ok
// SIG undefined FUN_1460008d2(void)

void FUN_1460008d2(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb786a8 == 0) {
    FUN_1446ddc76(&local_18,"GbxDiscoveryManager",1);
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    local_20 = 2;
    *local_28 = &PTR_LAB_14a1c87c0;
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
    local_28[2] = lVar2;
    *local_28 = &PTR_FUN_14b3f8e70;
    DAT_14cb786a8 = FUN_14106fa82(&local_28,local_18,0x21);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460009b4 FUN_1460009b4 body=20 status=ok
// SIG undefined FUN_1460009b4(void)

void FUN_1460009b4(void)

{
  DAT_14cb7d690 = FUN_1460009c8();
  return;
}



// FUNCTION 1460009c8 FUN_1460009c8 body=225 status=ok
// SIG undefined FUN_1460009c8(void)

void FUN_1460009c8(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb7d690 == 0) {
    FUN_1446ddc76(&local_18,"GlobalResourcePoolManger",1);
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    local_20 = 2;
    *local_28 = &PTR_LAB_14a1c87c0;
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
    local_28[2] = lVar2;
    *local_28 = &PTR_FUN_14b402380;
    DAT_14cb7d690 = FUN_14106fa82(&local_28,local_18,0x21);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146000aaa FUN_146000aaa body=20 status=ok
// SIG undefined FUN_146000aaa(void)

void FUN_146000aaa(void)

{
  DAT_14cb81090 = FUN_146000abe();
  return;
}



// FUNCTION 146000abe FUN_146000abe body=225 status=ok
// SIG undefined FUN_146000abe(void)

void FUN_146000abe(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb81090 == 0) {
    FUN_1446ddc76(&local_18,"GbxStandInManager",1);
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    local_20 = 2;
    *local_28 = &PTR_LAB_14a1c87c0;
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
    local_28[2] = lVar2;
    *local_28 = &PTR_FUN_14b40eda0;
    DAT_14cb81090 = FUN_14106fa82(&local_28,local_18,10);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146000ba0 FUN_146000ba0 body=20 status=ok
// SIG undefined FUN_146000ba0(void)

void FUN_146000ba0(void)

{
  DAT_14cb81b78 = FUN_146000bb4();
  return;
}



// FUNCTION 146000bb4 FUN_146000bb4 body=225 status=ok
// SIG undefined FUN_146000bb4(void)

void FUN_146000bb4(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb81b78 == 0) {
    FUN_1446ddc76(&local_18,"HazardManager",1);
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    local_20 = 2;
    *local_28 = &PTR_LAB_14a1c87c0;
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
    local_28[2] = lVar2;
    *local_28 = &PTR_FUN_14b40fe10;
    DAT_14cb81b78 = FUN_14106fa82(&local_28,local_18,0);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146000c96 FUN_146000c96 body=20 status=ok
// SIG undefined FUN_146000c96(void)

void FUN_146000c96(void)

{
  DAT_14cb81bb0 = FUN_146000caa();
  return;
}



// FUNCTION 146000caa FUN_146000caa body=225 status=ok
// SIG undefined FUN_146000caa(void)

void FUN_146000caa(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb81bb0 == 0) {
    FUN_1446ddc76(&local_18,"ProjectileSpawnManager",1);
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    local_20 = 2;
    *local_28 = &PTR_LAB_14a1c87c0;
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
    local_28[2] = lVar2;
    *local_28 = &PTR_FUN_14b410190;
    DAT_14cb81bb0 = FUN_14106fa82(&local_28,local_18,8);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146000d8c FUN_146000d8c body=20 status=ok
// SIG undefined FUN_146000d8c(void)

void FUN_146000d8c(void)

{
  DAT_14cb82338 = FUN_146000da0();
  return;
}



// FUNCTION 146000da0 FUN_146000da0 body=225 status=ok
// SIG undefined FUN_146000da0(void)

void FUN_146000da0(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb82338 == 0) {
    FUN_1446ddc76(&local_18,"InventoryRestoreStateManager",1);
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    local_20 = 2;
    *local_28 = &PTR_LAB_14a1c87c0;
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
    local_28[2] = lVar2;
    *local_28 = &PTR_FUN_14b4114a0;
    DAT_14cb82338 = FUN_14106fa82(&local_28,local_18,1);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146000e82 FUN_146000e82 body=20 status=ok
// SIG undefined FUN_146000e82(void)

void FUN_146000e82(void)

{
  DAT_14cb83a48 = FUN_146000e96();
  return;
}



// FUNCTION 146000e96 FUN_146000e96 body=225 status=ok
// SIG undefined FUN_146000e96(void)

void FUN_146000e96(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb83a48 == 0) {
    FUN_1446ddc76(&local_18,"PickupTickManager",1);
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    local_20 = 2;
    *local_28 = &PTR_LAB_14a1c87c0;
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
    local_28[2] = lVar2;
    *local_28 = &PTR_FUN_14b412780;
    DAT_14cb83a48 = FUN_14106fa82(&local_28,local_18,1);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146000f78 FUN_146000f78 body=20 status=ok
// SIG undefined FUN_146000f78(void)

void FUN_146000f78(void)

{
  DAT_14cb85c60 = FUN_146000f8c();
  return;
}



// FUNCTION 146000f8c FUN_146000f8c body=225 status=ok
// SIG undefined FUN_146000f8c(void)

void FUN_146000f8c(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb85c60 == 0) {
    FUN_1446ddc76(&local_18,"ManagedActorManager",1);
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    local_20 = 2;
    *local_28 = &PTR_LAB_14a1c87c0;
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
    local_28[2] = lVar2;
    *local_28 = &PTR_FUN_14b417860;
    DAT_14cb85c60 = FUN_14106fa82(&local_28,local_18,1);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14600106e FUN_14600106e body=20 status=ok
// SIG undefined FUN_14600106e(void)

void FUN_14600106e(void)

{
  DAT_14cb89530 = FUN_146001082();
  return;
}



// FUNCTION 146001082 FUN_146001082 body=225 status=ok
// SIG undefined FUN_146001082(void)

void FUN_146001082(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb89530 == 0) {
    FUN_1446ddc76(&local_18,"GbxMovingPlatformManager",1);
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    local_20 = 2;
    *local_28 = &PTR_LAB_14a1c87c0;
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
    local_28[2] = lVar2;
    *local_28 = &PTR_FUN_14b41efc0;
    DAT_14cb89530 = FUN_14106fa82(&local_28,local_18,0x21);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146001164 FUN_146001164 body=20 status=ok
// SIG undefined FUN_146001164(void)

void FUN_146001164(void)

{
  DAT_14cb89548 = FUN_146001178();
  return;
}



// FUNCTION 146001178 FUN_146001178 body=225 status=ok
// SIG undefined FUN_146001178(void)

void FUN_146001178(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb89548 == 0) {
    FUN_1446ddc76(&local_18,"PerchManager",1);
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    local_20 = 2;
    *local_28 = &PTR_LAB_14a1c87c0;
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
    local_28[2] = lVar2;
    *local_28 = &PTR_FUN_14b41f520;
    DAT_14cb89548 = FUN_14106fa82(&local_28,local_18,0xe);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14600125a FUN_14600125a body=20 status=ok
// SIG undefined FUN_14600125a(void)

void FUN_14600125a(void)

{
  DAT_14cb8aae0 = FUN_14600126e();
  return;
}



// FUNCTION 14600126e FUN_14600126e body=225 status=ok
// SIG undefined FUN_14600126e(void)

void FUN_14600126e(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb8aae0 == 0) {
    FUN_1446ddc76(&local_18,"GbxSequencePlayerPoolManager",1);
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    local_20 = 2;
    *local_28 = &PTR_LAB_14a1c87c0;
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
    local_28[2] = lVar2;
    *local_28 = &PTR_FUN_14b425a90;
    DAT_14cb8aae0 = FUN_14106fa82(&local_28,local_18,0x2b);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146001350 FUN_146001350 body=20 status=ok
// SIG undefined FUN_146001350(void)

void FUN_146001350(void)

{
  DAT_14cb8ab28 = FUN_146001364();
  return;
}



// FUNCTION 146001364 FUN_146001364 body=225 status=ok
// SIG undefined FUN_146001364(void)

void FUN_146001364(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb8ab28 == 0) {
    FUN_1446ddc76(&local_18,"GbxSkillManager",1);
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    local_20 = 2;
    *local_28 = &PTR_LAB_14a1c87c0;
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
    local_28[2] = lVar2;
    *local_28 = &PTR_FUN_14b4271c0;
    DAT_14cb8ab28 = FUN_14106fa82(&local_28,local_18,0x20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146001446 FUN_146001446 body=20 status=ok
// SIG undefined FUN_146001446(void)

void FUN_146001446(void)

{
  DAT_14cb8cb20 = FUN_14600145a();
  return;
}



// FUNCTION 14600145a FUN_14600145a body=225 status=ok
// SIG undefined FUN_14600145a(void)

void FUN_14600145a(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb8cb20 == 0) {
    FUN_1446ddc76(&local_18,"GbxStatusEffectManager",1);
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    local_20 = 2;
    *local_28 = &PTR_LAB_14a1c87c0;
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
    local_28[2] = lVar2;
    *local_28 = &PTR_FUN_14b42ff30;
    DAT_14cb8cb20 = FUN_14106fa82(&local_28,local_18,0x20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14600153c FUN_14600153c body=20 status=ok
// SIG undefined FUN_14600153c(void)

void FUN_14600153c(void)

{
  DAT_14cb8d3d8 = FUN_146001550();
  return;
}



// FUNCTION 146001550 FUN_146001550 body=225 status=ok
// SIG undefined FUN_146001550(void)

void FUN_146001550(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb8d3d8 == 0) {
    FUN_1446ddc76(&local_18,"GbxTrickManager",1);
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    local_20 = 2;
    *local_28 = &PTR_LAB_14a1c87c0;
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
    local_28[2] = lVar2;
    *local_28 = &PTR_FUN_14b432a60;
    DAT_14cb8d3d8 = FUN_14106fa82(&local_28,local_18,0xe);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146001632 FUN_146001632 body=20 status=ok
// SIG undefined FUN_146001632(void)

void FUN_146001632(void)

{
  DAT_14cb8dcd8 = FUN_146001646();
  return;
}



// FUNCTION 146001646 FUN_146001646 body=225 status=ok
// SIG undefined FUN_146001646(void)

void FUN_146001646(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb8dcd8 == 0) {
    FUN_1446ddc76(&local_18,"UsableManager",1);
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    local_20 = 2;
    *local_28 = &PTR_LAB_14a1c87c0;
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
    local_28[2] = lVar2;
    *local_28 = &PTR_FUN_14b434190;
    DAT_14cb8dcd8 = FUN_14106fa82(&local_28,local_18,1);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146001728 FUN_146001728 body=20 status=ok
// SIG undefined FUN_146001728(void)

void FUN_146001728(void)

{
  DAT_14cb94998 = FUN_14600173c();
  return;
}



// FUNCTION 14600173c FUN_14600173c body=225 status=ok
// SIG undefined FUN_14600173c(void)

void FUN_14600173c(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb94998 == 0) {
    FUN_1446ddc76(&local_18,"AIWeaponUserManager",1);
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    local_20 = 2;
    *local_28 = &PTR_LAB_14a1c87c0;
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
    local_28[2] = lVar2;
    *local_28 = &PTR_FUN_14b4aa070;
    DAT_14cb94998 = FUN_14106fa82(&local_28,local_18,0);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14600181e FUN_14600181e body=20 status=ok
// SIG undefined FUN_14600181e(void)

void FUN_14600181e(void)

{
  DAT_14cb949f8 = FUN_146001832();
  return;
}



// FUNCTION 146001832 FUN_146001832 body=225 status=ok
// SIG undefined FUN_146001832(void)

void FUN_146001832(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb949f8 == 0) {
    FUN_1446ddc76(&local_18,"WeaponTargetLockManager",1);
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    local_20 = 2;
    *local_28 = &PTR_LAB_14a1c87c0;
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
    local_28[2] = lVar2;
    *local_28 = &PTR_FUN_14b4aa8f0;
    DAT_14cb949f8 = FUN_14106fa82(&local_28,local_18,1);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146001914 FUN_146001914 body=197 status=ok
// SIG undefined FUN_146001914(void)

void FUN_146001914(longlong param_1,longlong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1411535b4();
  if ((param_2 != 0) && ((longlong)*(int *)(param_1 + 0x28) != 0)) {
    puVar5 = *(undefined8 **)(param_1 + 0x20);
    puVar4 = puVar5 + (longlong)*(int *)(param_1 + 0x28) * 8;
    do {
      pcVar1 = (code *)*puVar5;
      plVar3 = puVar5 + 4;
      if ((longlong *)puVar5[2] != (longlong *)0x0) {
        plVar3 = (longlong *)puVar5[2];
      }
      local_40 = param_2;
      uVar2 = (**(code **)(*plVar3 + 8))();
      (*pcVar1)(uVar2,&local_40);
      puVar5 = puVar5 + 8;
    } while (puVar5 != puVar4);
    FUN_14115361e(param_1);
  }
  FUN_14581342f(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_1460019da(param_1 + 0x20);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460019da FUN_1460019da body=48 status=ok
// SIG undefined FUN_1460019da(void)

void FUN_1460019da(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x40,0x10);
  }
  return;
}



// FUNCTION 146001a0a FUN_146001a0a body=37 status=ok
// SIG undefined FUN_146001a0a(void)

void FUN_146001a0a(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x2d0);
  FUN_146001a30(param_2);
  return;
}



// FUNCTION 146001a30 FUN_146001a30 body=209 status=ok
// SIG undefined FUN_146001a30(void)

undefined8 * FUN_146001a30(undefined8 *param_1)

{
  FUN_1411b9bf0();
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 10;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 10;
  memset(param_1 + 0x12,0,0x100);
  *param_1 = &PTR_FUN_14b632160;
  *(undefined1 *)(param_1 + 0x32) = 0;
  memset(param_1 + 0x33,0,0x81);
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  FUN_140e98fd6(param_1 + 0x4d);
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  return param_1;
}



// FUNCTION 146001b01 FUN_146001b01 body=20 status=ok
// SIG undefined FUN_146001b01(void)

void FUN_146001b01(void)

{
  DAT_14cbc1a30 = FUN_146001b16();
  return;
}



// FUNCTION 146001b16 FUN_146001b16 body=225 status=ok
// SIG undefined FUN_146001b16(void)

void FUN_146001b16(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cbc1a30 == 0) {
    FUN_1446ddc76(&local_18,"WorldRegionManager",1);
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    local_20 = 2;
    *local_28 = &PTR_LAB_14a1c87c0;
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
    local_28[2] = lVar2;
    *local_28 = &PTR_FUN_14b959e20;
    DAT_14cbc1a30 = FUN_14106fa82(&local_28,local_18,3);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146001bf8 FUN_146001bf8 body=20 status=ok
// SIG undefined FUN_146001bf8(void)

void FUN_146001bf8(void)

{
  DAT_14cbc2050 = FUN_146001c0c();
  return;
}



// FUNCTION 146001c0c FUN_146001c0c body=225 status=ok
// SIG undefined FUN_146001c0c(void)

void FUN_146001c0c(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cbc2050 == 0) {
    FUN_1446ddc76(&local_18,"LootSpawnManager",1);
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    local_20 = 2;
    *local_28 = &PTR_LAB_14a1c87c0;
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
    local_28[2] = lVar2;
    *local_28 = &PTR_FUN_14b95cb30;
    DAT_14cbc2050 = FUN_14106fa82(&local_28,local_18,0);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146001cee FUN_146001cee body=20 status=ok
// SIG undefined FUN_146001cee(void)

void FUN_146001cee(void)

{
  DAT_14cbc3ec8 = FUN_146001d02();
  return;
}



// FUNCTION 146001d02 FUN_146001d02 body=225 status=ok
// SIG undefined FUN_146001d02(void)

void FUN_146001d02(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cbc3ec8 == 0) {
    FUN_1446ddc76(&local_18,"OakMigrationEventManager",1);
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    local_20 = 2;
    *local_28 = &PTR_LAB_14a1c87c0;
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
    local_28[2] = lVar2;
    *local_28 = &PTR_FUN_14b9612a0;
    DAT_14cbc3ec8 = FUN_14106fa82(&local_28,local_18,1);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146001de4 FUN_146001de4 body=20 status=ok
// SIG undefined FUN_146001de4(void)

void FUN_146001de4(void)

{
  DAT_14cbc5650 = FUN_146001df8();
  return;
}



// FUNCTION 146001df8 FUN_146001df8 body=225 status=ok
// SIG undefined FUN_146001df8(void)

void FUN_146001df8(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cbc5650 == 0) {
    FUN_1446ddc76(&local_18,"CarryableObjectManager",1);
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    local_20 = 2;
    *local_28 = &PTR_LAB_14a1c87c0;
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
    local_28[2] = lVar2;
    *local_28 = &PTR_FUN_14b963490;
    DAT_14cbc5650 = FUN_14106fa82(&local_28,local_18,1);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146001eda FUN_146001eda body=20 status=ok
// SIG undefined FUN_146001eda(void)

void FUN_146001eda(void)

{
  DAT_14cbc6c18 = FUN_146001eee();
  return;
}



// FUNCTION 146001eee FUN_146001eee body=225 status=ok
// SIG undefined FUN_146001eee(void)

void FUN_146001eee(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cbc6c18 == 0) {
    FUN_1446ddc76(&local_18,"CritterManager",1);
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    local_20 = 2;
    *local_28 = &PTR_LAB_14a1c87c0;
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
    local_28[2] = lVar2;
    *local_28 = &PTR_FUN_14b965d30;
    DAT_14cbc6c18 = FUN_14106fa82(&local_28,local_18,0);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146001fd0 FUN_146001fd0 body=20 status=ok
// SIG undefined FUN_146001fd0(void)

void FUN_146001fd0(void)

{
  DAT_14cbc8e78 = FUN_146001fe4();
  return;
}



// FUNCTION 146001fe4 FUN_146001fe4 body=225 status=ok
// SIG undefined FUN_146001fe4(void)

void FUN_146001fe4(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cbc8e78 == 0) {
    FUN_1446ddc76(&local_18,"OakTravelManager",1);
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    local_20 = 2;
    *local_28 = &PTR_LAB_14a1c87c0;
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
    local_28[2] = lVar2;
    *local_28 = &PTR_FUN_14b968f30;
    DAT_14cbc8e78 = FUN_14106fa82(&local_28,local_18,0x20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460020c6 FUN_1460020c6 body=20 status=ok
// SIG undefined FUN_1460020c6(void)

void FUN_1460020c6(void)

{
  DAT_14cbc9928 = FUN_1460020da();
  return;
}



// FUNCTION 1460020da FUN_1460020da body=225 status=ok
// SIG undefined FUN_1460020da(void)

void FUN_1460020da(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cbc9928 == 0) {
    FUN_1446ddc76(&local_18,"OakBossFightAnalyticsManager",1);
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    local_20 = 2;
    *local_28 = &PTR_LAB_14a1c87c0;
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
    local_28[2] = lVar2;
    *local_28 = &PTR_FUN_14b96e990;
    DAT_14cbc9928 = FUN_14106fa82(&local_28,local_18,0x21);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460021bc FUN_1460021bc body=20 status=ok
// SIG undefined FUN_1460021bc(void)

void FUN_1460021bc(void)

{
  DAT_14cbcb308 = FUN_1460021d0();
  return;
}



// FUNCTION 1460021d0 FUN_1460021d0 body=225 status=ok
// SIG undefined FUN_1460021d0(void)

void FUN_1460021d0(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cbcb308 == 0) {
    FUN_1446ddc76(&local_18,"CinematicViewManager",1);
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    local_20 = 2;
    *local_28 = &PTR_LAB_14a1c87c0;
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
    local_28[2] = lVar2;
    *local_28 = &PTR_FUN_14b9745b0;
    DAT_14cbcb308 = FUN_14106fa82(&local_28,local_18,1);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460022b2 FUN_1460022b2 body=20 status=ok
// SIG undefined FUN_1460022b2(void)

void FUN_1460022b2(void)

{
  DAT_14cbce5d8 = FUN_1460022c6();
  return;
}



// FUNCTION 1460022c6 FUN_1460022c6 body=225 status=ok
// SIG undefined FUN_1460022c6(void)

void FUN_1460022c6(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cbce5d8 == 0) {
    FUN_1446ddc76(&local_18,"FOakPatchActorManager",1);
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    local_20 = 2;
    *local_28 = &PTR_LAB_14a1c87c0;
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
    local_28[2] = lVar2;
    *local_28 = &PTR_FUN_14b988cc0;
    DAT_14cbce5d8 = FUN_14106fa82(&local_28,local_18,0x23);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460023a8 FUN_1460023a8 body=20 status=ok
// SIG undefined FUN_1460023a8(void)

void FUN_1460023a8(void)

{
  DAT_14cbcfbb0 = FUN_1460023bc();
  return;
}



// FUNCTION 1460023bc FUN_1460023bc body=225 status=ok
// SIG undefined FUN_1460023bc(void)

void FUN_1460023bc(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cbcfbb0 == 0) {
    FUN_1446ddc76(&local_18,"OakPlayerEncounterAnalyticsManager",1);
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    local_20 = 2;
    *local_28 = &PTR_LAB_14a1c87c0;
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
    local_28[2] = lVar2;
    *local_28 = &PTR_FUN_14b994790;
    DAT_14cbcfbb0 = FUN_14106fa82(&local_28,local_18,0x21);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14600249e FUN_14600249e body=20 status=ok
// SIG undefined FUN_14600249e(void)

void FUN_14600249e(void)

{
  DAT_14cbd3370 = FUN_1460024b2();
  return;
}



// FUNCTION 1460024b2 FUN_1460024b2 body=225 status=ok
// SIG undefined FUN_1460024b2(void)

void FUN_1460024b2(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cbd3370 == 0) {
    FUN_1446ddc76(&local_18,"OakSkillManager",1);
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    local_20 = 2;
    *local_28 = &PTR_LAB_14a1c87c0;
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
    local_28[2] = lVar2;
    *local_28 = &PTR_FUN_14b9a0190;
    DAT_14cbd3370 = FUN_14106fa82(&local_28,local_18,1);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146002594 FUN_146002594 body=20 status=ok
// SIG undefined FUN_146002594(void)

void FUN_146002594(void)

{
  DAT_14cbd4040 = FUN_1460025a8();
  return;
}



// FUNCTION 1460025a8 FUN_1460025a8 body=225 status=ok
// SIG undefined FUN_1460025a8(void)

void FUN_1460025a8(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cbd4040 == 0) {
    FUN_1446ddc76(&local_18,"NoSignalZoneManager",1);
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    local_20 = 2;
    *local_28 = &PTR_LAB_14a1c87c0;
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
    local_28[2] = lVar2;
    *local_28 = &PTR_FUN_14b9a3410;
    DAT_14cbd4040 = FUN_14106fa82(&local_28,local_18,1);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14600268a FUN_14600268a body=103 status=ok
// SIG undefined FUN_14600268a(void)

ulonglong FUN_14600268a(longlong param_1)

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
LAB_1460026d4:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1460026d4;
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
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
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



// FUNCTION 1460026fc FUN_1460026fc body=449 status=ok
// SIG undefined FUN_1460026fc(void)

void FUN_1460026fc(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar4 = FUN_1410cfc16();
  if ((lVar4 != 0) && (cVar2 = FUN_146002902(lVar4,param_2), cVar2 != '\0')) {
    uVar5 = FUN_1410d0064();
    local_38 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    local_68 = 0;
    uStack_60 = 0;
    FUN_1460028be(uVar5,param_2);
    FUN_140170a76(param_1,&DAT_14cb86278);
    lVar6 = *(longlong *)(param_1 + 0x28);
    if ((lVar6 != 0) && ((longlong)*(int *)(lVar6 + 0x10) != 0)) {
      lVar7 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar6 + 8) + lVar7) == DAT_14cb86200) {
          uVar5 = FUN_14479d2ce(param_1 + 0x68);
          cVar2 = FUN_1488f6768(param_1,uVar5);
          if (cVar2 == '\0') {
            lVar6 = FUN_14135d882(param_1);
            if (((lVar6 != 0) && (*(char *)(lVar6 + 0x2c) == '\x01')) &&
               (lVar6 = FUN_1410d0064(param_1), lVar6 != 0)) {
              local_48 = 0;
              uStack_40 = 0;
              FUN_1410cfcf6(lVar4);
              lVar4 = FUN_14479d2ce(param_1 + 0x68);
              if (lVar4 == 0) {
                uVar5 = 0;
              }
              else {
                uVar5 = FUN_1458cdfb6();
                uVar5 = FUN_144718840(lVar4,uVar5);
              }
              lVar4 = local_48;
              lVar6 = (longlong)(int)uStack_40;
              if (lVar6 != 0) {
                lVar7 = 0;
                do {
                  plVar1 = *(longlong **)(lVar4 + lVar7);
                  if (plVar1 != (longlong *)0x0) {
                    uVar3 = FUN_1457fbefe(plVar1,uVar5);
                    (**(code **)(*plVar1 + 0x1088))(plVar1,uVar3);
                  }
                  lVar7 = lVar7 + 8;
                } while (lVar6 * 8 != lVar7);
              }
              if (local_48 != 0) {
                FUN_1400020a8(local_48);
              }
            }
          }
          else {
            FUN_140170a76(param_1,&DAT_14cb86200);
          }
          break;
        }
        lVar7 = lVar7 + 0x28;
      } while ((longlong)*(int *)(lVar6 + 0x10) * 0x28 != lVar7);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460028be FUN_1460028be body=68 status=ok
// SIG undefined FUN_1460028be(void)

void FUN_1460028be(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_140115352();
  }
  if (*(longlong *)(lVar1 + 0x40) != 0) {
    FUN_146002968(*(longlong *)(lVar1 + 0x40),param_2,param_3,param_4);
    return;
  }
  return;
}



// FUNCTION 146002902 FUN_146002902 body=101 status=ok
// SIG undefined FUN_146002902(void)

undefined8 FUN_146002902(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    lVar1 = FUN_140f42f34();
    if (lVar1 == 0) {
      local_18 = 0;
    }
    else {
      local_18 = *(undefined8 *)(*(longlong *)(lVar1 + 8) + 0x100);
    }
    uVar2 = FUN_1412303d0(&local_18,param_2);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146002968 FUN_146002968 body=251 status=ok
// SIG undefined FUN_146002968(void)

void FUN_146002968(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong *local_60;
  double *local_58;
  double local_48;
  double dStack_40;
  double local_38;
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = &local_20;
  local_20 = 0;
  local_60 = &local_28;
  local_28 = 0;
  local_58 = &local_48;
  local_38 = 0.0;
  local_48 = 0.0;
  dStack_40 = 0.0;
  FUN_146002a64(param_1);
  lVar1 = 0xe0;
  if (local_20 == 0) {
    if (local_28 != 0) {
      *(undefined8 *)(param_1 + 0xe0) = 0;
      lVar1 = 0xe8;
      goto LAB_1460029c8;
    }
  }
  else {
LAB_1460029c8:
    FUN_14485c47a(lVar1 + param_1);
  }
  if ((local_48 == 0.0) && (!NAN(local_48))) {
    if ((dStack_40 == 0.0) && (!NAN(dStack_40))) {
      if ((local_38 == 0.0) && (!NAN(local_38))) goto LAB_146002a02;
    }
  }
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(double *)(param_1 + 0xf0) = local_48;
  *(double *)(param_1 + 0xf8) = dStack_40;
  *(double *)(param_1 + 0x100) = local_38;
LAB_146002a02:
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146002a64 FUN_146002a64 body=424 status=ok
// SIG undefined FUN_146002a64(void)

void FUN_146002a64(undefined8 param_1,longlong *param_2,longlong *param_3,double *param_4,
                  longlong *param_5,undefined8 *param_6,double *param_7)

{
  longlong *plVar1;
  double dVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != (longlong *)0x0) {
    lVar4 = (**(code **)(*param_2 + 0x5d8))(param_2);
    if (lVar4 == 0) {
      *param_6 = param_2;
    }
    else {
      *param_5 = lVar4;
    }
    goto LAB_146002aaa;
  }
  lVar4 = param_3[1];
  if (lVar4 == 0) {
    uVar5 = FUN_14043db3a();
    lVar4 = FUN_14477b664(uVar5);
    param_3[1] = lVar4;
  }
  if (param_3[2] != 0) {
LAB_146002afc:
    FUN_14043d8b4(param_1,local_40,param_3,0);
    if (local_38 != (longlong *)0x0) {
      cVar3 = FUN_144729dda(local_40);
      if (cVar3 != '\0') {
        lVar4 = (**(code **)(*local_38 + 0x10))(local_38);
        if ((lVar4 != 0) && (*(int *)(lVar4 + 0x18c) == 0)) {
          uVar5 = (**(code **)(*local_38 + 0x18))(local_38);
          *param_6 = uVar5;
        }
      }
    }
    goto LAB_146002aaa;
  }
  if ((lVar4 != 0) && (*param_3 != 0)) {
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if (plVar1 != (longlong *)0x0) {
      cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1);
      if (cVar3 != '\0') {
        uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar4 = FUN_144aff482(uVar5,param_3);
        param_3[2] = lVar4;
        if (lVar4 != 0) goto LAB_146002afc;
        goto LAB_146002bac;
      }
    }
    param_3[2] = 0;
  }
LAB_146002bac:
  if ((*param_4 == 0.0) && (!NAN(*param_4))) {
    if ((param_4[1] == 0.0) && (!NAN(param_4[1]))) {
      if ((param_4[2] == 0.0) && (!NAN(param_4[2]))) {
LAB_146002aaa:
        if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
    }
  }
  param_7[2] = param_4[2];
  dVar2 = param_4[1];
  *param_7 = *param_4;
  param_7[1] = dVar2;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
}



// FUNCTION 146002c12 FUN_146002c12 body=724 status=ok
// SIG undefined FUN_146002c12(void)

longlong FUN_146002c12(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 *puVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined1 auStack_178 [40];
  undefined8 local_150;
  undefined8 local_148;
  longlong lStack_140;
  undefined8 local_138;
  longlong lStack_130;
  undefined8 local_128;
  longlong local_120;
  longlong local_118;
  undefined8 local_110 [24];
  undefined8 *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_120 = *param_4;
  local_118 = param_4[1];
  if (local_118 != 0) {
    LOCK();
    *(int *)(local_118 + 8) = *(int *)(local_118 + 8) + 1;
    UNLOCK();
  }
  lVar7 = FUN_146002f6a(param_1,param_2,param_3,&local_120);
  if (lVar7 == 0) goto LAB_146002e1f;
  lVar8 = FUN_1402269ac();
  if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(lVar8 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
      lVar8 + 0x30)) goto LAB_146002e1f;
  lVar8 = FUN_14479d2ce(*param_4 + 0x10);
  if (lVar8 == 0) {
LAB_146002e5e:
    local_138 = 0;
    lStack_130 = 0;
    local_148 = 0;
    lStack_140 = 0;
    local_128 = 0;
  }
  else {
    lVar9 = FUN_1459cc1d6();
    if (((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(lVar9 + 0x38)) ||
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
         != lVar9 + 0x30)) || (*(longlong *)(lVar7 + 0x3f0) == 0)) goto LAB_146002e5e;
    puVar4 = *(undefined4 **)(*(longlong *)(lVar7 + 0x3f0) + 8);
    puVar10 = &DAT_14c9485f0;
    if (puVar4 != (undefined4 *)0x0) {
      puVar10 = puVar4;
    }
    FUN_1447325ac(puVar10,&local_150,1);
    local_110[0] = local_150;
    FUN_146048b48(DAT_14cbd1298,&local_148,lVar8);
  }
  lVar8 = FUN_14479d2ce(&local_148);
  if ((lVar8 == 0) && (lStack_140 != 0)) {
    lVar8 = FUN_140007850();
    cVar6 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar8 == 0) || (cVar6 == '\0')) {
      FUN_14485c47a(&local_148,lVar8);
    }
    else {
      uVar3 = *(uint *)(lVar8 + 0xc);
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      if ((*(uint *)(lVar9 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(&local_148,lVar8);
      }
    }
  }
  lVar8 = FUN_1412199c4(&local_148);
  if (lVar8 != 0) {
    local_50 = (undefined8 *)0x0;
    local_48 = 0x1800000000;
    FUN_140312d42(lVar7,local_110,0);
    puVar13 = local_50;
    if (local_50 == (undefined8 *)0x0) {
      puVar13 = local_110;
    }
    lVar9 = (longlong)(int)local_48;
    if (lVar9 != 0) {
      lVar11 = 0;
      do {
        if (*(longlong *)((longlong)puVar13 + lVar11) != 0) {
          lVar12 = *(longlong *)((longlong)puVar13 + lVar11) + 0x1288;
          FUN_146002ee8(lVar12,lVar8);
          FUN_140a87c14(lVar12,0,0);
        }
        lVar11 = lVar11 + 8;
      } while (lVar9 * 8 != lVar11);
    }
    if (local_50 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (lStack_130 != 0) {
    FUN_1400020a8();
  }
LAB_146002e1f:
  plVar5 = (longlong *)param_4[1];
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
  if ((local_40 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar7;
}



// FUNCTION 146002ee8 FUN_146002ee8 body=130 status=ok
// SIG undefined FUN_146002ee8(void)

void FUN_146002ee8(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  iVar1 = *(int *)(param_1 + 0x88);
  *(uint *)(param_1 + 0x88) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x8c) < iVar1 + 1U) {
    FUN_1406c80ba((longlong *)(param_1 + 0x80),iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar1 * 8) = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  FUN_1406c6e60(param_1);
  return;
}



// FUNCTION 146002f6a FUN_146002f6a body=887 status=ok
// SIG undefined FUN_146002f6a(void)

longlong FUN_146002f6a(longlong *param_1,longlong param_2,undefined8 param_3,longlong *param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_148 [40];
  longlong *local_120;
  longlong local_118;
  longlong *local_110;
  longlong local_108;
  longlong *local_100;
  longlong lStack_f8;
  longlong local_f0;
  undefined8 local_e8 [12];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  plVar2 = *(longlong **)(param_2 + 0xc0);
  if (plVar2 != (longlong *)0x0) {
    lVar6 = FUN_1459c2cb6();
    if ((*(int *)(lVar6 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
        lVar6 + 0x30)) {
      lVar6 = (**(code **)*param_1)(param_1);
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30)) {
        plVar7 = (longlong *)FUN_14479d2ce(*param_4 + 0x18);
        if (plVar7 == (longlong *)0x0) {
          lVar6 = 0;
        }
        else {
          lVar6 = (**(code **)(*plVar7 + 0x180))(plVar7);
        }
        if (lVar6 == 0) {
          lVar6 = DAT_14cb10918;
        }
        local_118 = param_2;
        FUN_14132b09a(&local_108,lVar6);
        if (local_100 != (longlong *)0x0) {
          iVar5 = (int)local_100[1];
          do {
            if (iVar5 == 0) {
              plVar7 = (longlong *)0x0;
              break;
            }
            LOCK();
            iVar3 = (int)local_100[1];
            bVar16 = iVar5 == iVar3;
            if (bVar16) {
              *(int *)(local_100 + 1) = iVar5 + 1;
              iVar3 = iVar5;
            }
            iVar5 = iVar3;
            UNLOCK();
            plVar7 = local_100;
          } while (!bVar16);
          LOCK();
          piVar1 = (int *)((longlong)local_100 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_100 + 0x10))();
          }
          lVar15 = local_108;
          if (plVar7 != (longlong *)0x0) {
            if ((local_108 == 0) ||
               (plVar8 = (longlong *)(**(code **)(*plVar2 + 0x2a0))(plVar2),
               plVar8 == (longlong *)0x0)) {
LAB_14600321e:
              lVar6 = 0;
            }
            else {
              local_120 = param_4;
              local_110 = param_1;
              puVar9 = (undefined8 *)FUN_1460032e2(*param_4 + 0x38);
              if (puVar9 != (undefined8 *)0x0) {
                local_108 = DAT_14caa8578;
                local_100 = (longlong *)0x0;
                lStack_f8 = 0;
                local_f0 = 0;
                puVar12 = &DAT_14c846480;
                puVar14 = local_e8;
                for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
                  *puVar14 = *puVar12;
                  puVar12 = puVar12 + 1;
                  puVar14 = puVar14 + 1;
                }
                lVar13 = local_118 + 0xa0;
                local_88 = 0;
                uStack_80 = 0;
                local_78 = 0;
                local_70 = 0;
                uStack_68 = 0;
                uStack_64 = 0;
                uStack_60 = 0;
                uStack_5c = 0;
                lVar10 = FUN_146003357(lVar6,puVar9,lVar13);
                lVar11 = lStack_f8;
                if (((lVar10 != 0) ||
                    (lVar10 = FUN_148951fe4(lVar6,puVar9,lVar13), lVar11 = lStack_f8, lVar10 != 0))
                   || ((lVar11 = (**(code **)(*plVar2 + 0x2a8))(plVar2,lVar6), lVar11 != 0 &&
                       (cVar4 = (**(code **)*puVar9)(puVar9,lVar13,lVar11), lVar10 = local_f0,
                       cVar4 != '\0')))) {
                  local_f0 = lVar10;
                  lStack_f8 = lVar11;
                  local_78 = 1;
                  local_100 = plVar8;
                  lVar6 = FUN_14144ff90(lVar15,&local_108);
                  FUN_145a1457c(&local_108);
                  param_4 = local_120;
                  if (lVar6 == 0) goto LAB_14600321e;
                  lVar15 = lVar6 + 0x1f0;
                  if (*(int *)(lVar6 + 0x1fc) < 2) {
                    FUN_1402191ca(lVar15,2);
                  }
                  FUN_1446f470e(&local_108,L"SequencerActor",1);
                  FUN_1409d9716(lVar15,&local_108);
                  (**(code **)(*local_110 + 0x48))(local_110,&local_108);
                  FUN_1409d9716(lVar15,&local_108);
                  goto LAB_1460031ca;
                }
                FUN_145a1457c(&local_108);
              }
              lVar6 = 0;
              param_4 = local_120;
            }
LAB_1460031ca:
            LOCK();
            plVar2 = plVar7 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*plVar7)(plVar7);
              LOCK();
              piVar1 = (int *)((longlong)plVar7 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar7 + 0x10))(plVar7);
              }
            }
            goto LAB_1460031d5;
          }
        }
      }
    }
  }
  lVar6 = 0;
LAB_1460031d5:
  plVar2 = (longlong *)param_4[1];
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
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar6;
}



// FUNCTION 1460032e2 FUN_1460032e2 body=116 status=ok
// SIG undefined FUN_1460032e2(void)

undefined8 * FUN_1460032e2(undefined8 param_1)

{
  undefined1 auStack_48 [40];
  undefined8 *local_20;
  char local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144a923ba(param_1,&local_20,1 << (DAT_14cb8a5c8 & 0x1f));
  if (local_20 == (undefined8 *)0x0) {
LAB_146003353:
    local_20 = (undefined8 *)0x0;
  }
  else {
    if (local_18 != '\x01') {
      if (local_18 == '\0') goto LAB_14600332d;
      if (local_18 != '\x02') goto LAB_146003353;
    }
    local_20 = (undefined8 *)*local_20;
  }
LAB_14600332d:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146003357 FUN_146003357 body=251 status=ok
// SIG undefined FUN_146003357(void)

longlong FUN_146003357(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  lVar3 = FUN_1460489ff();
  if (lVar3 != 0) {
    lVar4 = FUN_140082f10();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) {
      lVar4 = FUN_1403b0700(lVar3);
      cVar2 = FUN_1415c6336(lVar4);
      if (cVar2 != '\0') {
        lVar5 = *(longlong *)(lVar4 + 0x40);
        if (lVar5 == 0) {
          uVar6 = FUN_140355b7c();
          lVar5 = FUN_14477b664(uVar6);
          *(longlong *)(lVar4 + 0x40) = lVar5;
        }
        if (((*(longlong *)(lVar4 + 0x48) == 0) && (lVar5 != 0)) &&
           (*(longlong *)(lVar4 + 0x38) != 0)) {
          plVar1 = *(longlong **)(lVar5 + 0xb8);
          if ((plVar1 == (longlong *)0x0) ||
             (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
            uVar6 = 0;
          }
          else {
            uVar6 = (**(code **)(*plVar1 + 0x110))(plVar1);
            uVar6 = FUN_144aff482(uVar6,(longlong *)(lVar4 + 0x38));
          }
          *(undefined8 *)(lVar4 + 0x48) = uVar6;
        }
        cVar2 = (**(code **)*param_2)(param_2,param_3);
        if (cVar2 != '\0') {
          return lVar3;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 146003452 FUN_146003452 body=141 status=ok
// SIG undefined FUN_146003452(void)

ulonglong FUN_146003452(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,&local_28,param_2,param_3);
  if (((local_28 == 0) || (*(char *)(local_28 + 0x68) != '\x01')) ||
     (*(char *)(local_28 + 0x69) != '\x01')) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT71((int7)((ulonglong)&local_28 >> 8),*(undefined1 *)(local_28 + 0x6a));
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
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460034e0 FUN_1460034e0 body=97 status=ok
// SIG undefined FUN_1460034e0(void)

void FUN_1460034e0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *(undefined8 *)(param_2 + 0x80);
  lVar4 = *(longlong *)(param_2 + 0x88);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x80) = uVar3;
  *(longlong *)(param_1 + 0x88) = lVar4;
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
                    /* WARNING: Could not recover jumptable at 0x00014600353d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146003554 FUN_146003554 body=201 status=ok
// SIG undefined FUN_146003554(void)

ulonglong FUN_146003554(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = (longlong *)FUN_1414dac37();
  uVar4 = (**(code **)(*plVar3 + 0x68))(plVar3);
  if ((char)uVar4 == '\0') {
    cVar2 = (**(code **)(*plVar3 + 0x100))(plVar3);
    if ((cVar2 == '\0') || (*(int *)(param_1 + 0xf0) != 0)) {
      if (*(int *)(param_1 + 0xec) == 0) {
        (**(code **)(*plVar3 + 0x108))(plVar3);
        (**(code **)(*plVar3 + 0x58))(plVar3,0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
    }
    uVar5 = (**(code **)(*plVar3 + 0xa0))(plVar3);
    FUN_1461a49ae(uVar5,local_28,param_1,&LAB_148aef734);
    LOCK();
    uVar1 = *(uint *)(param_1 + 0xf0);
    *(uint *)(param_1 + 0xf0) = 1;
    uVar4 = (ulonglong)uVar1;
    UNLOCK();
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146003630 FUN_146003630 body=71 status=ok
// SIG undefined FUN_146003630(void)

void FUN_146003630(longlong *param_1,char *param_2)

{
  undefined8 uVar1;
  
  if (*param_2 == '\0') {
    *param_2 = '\x01';
    uVar1 = FUN_1400b465c();
    FUN_14485c47a(param_2 + 4,uVar1);
    LOCK();
    *(int *)(param_1 + 6) = (int)param_1[6] + 1;
    UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x000146003668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x2b8))(param_1);
    return;
  }
  return;
}



// FUNCTION 146003678 FUN_146003678 body=219 status=ok
// SIG undefined FUN_146003678(void)

void FUN_146003678(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (((byte *)*param_4 != (byte *)0x0) && ((*(byte *)*param_4 & 3) != 0)) {
    lVar1 = (**(code **)(*param_1 + 0x180))();
    if (lVar1 != 0) {
      lVar1 = FUN_1400f6f32(lVar1);
      if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x68) != 0)) {
        lVar1 = FUN_140d1732e(*(longlong *)(lVar1 + 0x68),param_2 + 0x18);
        if (lVar1 != 0) {
          lVar2 = FUN_144a5dd5e();
          if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) {
            lVar1 = FUN_144a7ba4c(lVar1);
            if (lVar1 != 0) {
              lVar2 = FUN_14030d4a0();
              if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) {
                lVar1 = FUN_140e76a6a(lVar1);
                if (lVar1 != 0) {
                  FUN_146003754(lVar1,param_4);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 146003754 FUN_146003754 body=89 status=ok
// SIG undefined FUN_146003754(void)

void FUN_146003754(longlong param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  
  *(undefined1 *)(param_1 + 0xf9) = 0;
  if (((byte *)*param_2 != (byte *)0x0) && ((~*(byte *)*param_2 & 3) == 0)) {
    puVar2 = (undefined8 *)FUN_144a06846(param_2,&DAT_14cbd7a30);
    if (((byte *)*puVar2 != (byte *)0x0) && ((*(byte *)*puVar2 & 3) == 1)) {
      uVar1 = FUN_1410c4486(puVar2,0);
      *(undefined1 *)(param_1 + 0xf9) = uVar1;
    }
  }
  return;
}



// FUNCTION 1460037b8 FUN_1460037b8 body=204 status=ok
// SIG undefined FUN_1460037b8(void)

undefined8 * FUN_1460037b8(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a6931f0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeac28) {
    FUN_144b3d300(&DAT_14caeac28);
    if (DAT_14caeac28 == -1) {
      FUN_1415b7814();
      atexit(FUN_14356d6cd);
      _Init_thread_footer(&DAT_14caeac28);
    }
  }
  param_1[0x20] = 0x3f80000000000000;
  return param_1;
}



// FUNCTION 146003884 FUN_146003884 body=328 status=ok
// SIG undefined FUN_146003884(void)

longlong * FUN_146003884(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_14001cc68(0xf0);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b97d920;
  plVar1 = plVar4 + 2;
  memset(plVar4 + 3,0,0xc0);
  *(undefined4 *)(plVar4 + 7) = 2;
  *(undefined8 *)((longlong)plVar4 + 0x3c) = 0;
  *(undefined8 *)((longlong)plVar4 + 0x44) = 0;
  *(undefined8 *)((longlong)plVar4 + 0x4c) = 0x200000000;
  *(undefined8 *)((longlong)plVar4 + 0x54) = 0;
  *(undefined8 *)((longlong)plVar4 + 0x5c) = 0;
  *(undefined8 *)((longlong)plVar4 + 100) = 0x200000000;
  *(undefined8 *)((longlong)plVar4 + 0x6c) = 0;
  *(undefined8 *)((longlong)plVar4 + 0x74) = 0;
  *(undefined8 *)((longlong)plVar4 + 0x7c) = 0x200000000;
  *(undefined8 *)((longlong)plVar4 + 0x84) = 0;
  *(undefined8 *)((longlong)plVar4 + 0x8c) = 0;
  *(undefined8 *)((longlong)plVar4 + 0x94) = 0x200000000;
  *(undefined8 *)((longlong)plVar4 + 0x9c) = 0;
  *(undefined8 *)((longlong)plVar4 + 0xa4) = 0;
  *(undefined8 *)((longlong)plVar4 + 0xac) = 0;
  *(undefined8 *)((longlong)plVar4 + 0xb4) = 0;
  *(undefined8 *)((longlong)plVar4 + 0xbc) = 0;
  *(undefined8 *)((longlong)plVar4 + 0xc4) = 0;
  *(undefined8 *)((longlong)plVar4 + 0xc9) = 0;
  plVar4[2] = (longlong)&PTR_FUN_14b97d940;
  plVar4[0x1b] = 0;
  plVar4[0x1c] = 0;
  plVar4[0x1d] = 2;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_1460039d0(&local_30,plVar1);
  plVar3 = local_28;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460039d0 FUN_1460039d0 body=162 status=ok
// SIG undefined FUN_1460039d0(void)

void FUN_1460039d0(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_146003a0f;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_146003a0f;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_146003a0f:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000146003a6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 146003a72 FUN_146003a72 body=279 status=ok
// SIG undefined FUN_146003a72(void)

undefined4 * FUN_146003a72(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146003ce2(param_1,local_48);
  FUN_146003b8a(param_3,local_40);
  local_40[0x16] = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = *local_40;
  cVar2 = FUN_146003c28(param_1,uVar4,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar3) {
      uVar5 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_40[0x17] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_40[0x16] =
           *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_146003dd2(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146003b8a FUN_146003b8a body=156 status=ok
// SIG undefined FUN_146003b8a(void)

undefined4 * FUN_146003b8a(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  *param_2 = *(undefined4 *)*param_1;
  FUN_145aeb3d6(param_2 + 2,&local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(&local_78);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146003c28 FUN_146003c28 body=186 status=ok
// SIG undefined FUN_146003c28(void)

undefined8 FUN_146003c28(longlong *param_1,uint param_2,int *param_3,int *param_4)

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
        if (*(int *)(*param_1 + (longlong)iVar2 * 0x60) == *param_3) {
          *(undefined4 *)((longlong)_Dst + 0x50) = 0;
          if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
            FUN_1400020a8();
          }
          FUN_1408910a4((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x58);
          FUN_146014a82(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x58);
      } while (iVar2 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 146003ce2 FUN_146003ce2 body=239 status=ok
// SIG undefined FUN_146003ce2(void)

int * FUN_146003ce2(longlong *param_1,int *param_2)

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
      FUN_14488f93c(param_1,iVar6);
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



// FUNCTION 146003dd2 FUN_146003dd2 body=432 status=ok
// SIG undefined FUN_146003dd2(void)

void FUN_146003dd2(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x5c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x58 + lVar7) =
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



// FUNCTION 146003f84 FUN_146003f84 body=333 status=ok
// SIG undefined FUN_146003f84(void)

void FUN_146003f84(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  int local_24;
  undefined4 local_20;
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
  local_20 = 0;
  FUN_144a7452c();
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
  (**(code **)(*param_1 + 0xb20))(param_1,local_1c,local_20,local_24 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460040d2 FUN_1460040d2 body=36 status=ok
// SIG undefined FUN_1460040d2(void)

void FUN_1460040d2(longlong param_1)

{
  if (*(char *)(param_1 + 0x178) != '\x03') {
    FUN_140d78d10(param_1 + 0x60e8);
  }
  return;
}



// FUNCTION 1460040f6 FUN_1460040f6 body=9 status=ok
// SIG undefined FUN_1460040f6(void)

void FUN_1460040f6(longlong param_1)

{
  FUN_1415b792a(param_1 + 0x10);
  return;
}



// FUNCTION 146004106 FUN_146004106 body=571 status=ok
// SIG undefined FUN_146004106(void)

void FUN_146004106(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined ***pppuVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_128 [32];
  longlong *local_108;
  undefined1 *local_f8 [2];
  undefined ***local_e8;
  undefined **local_d8;
  undefined1 *local_d0;
  code *local_b8;
  undefined ***local_a8;
  undefined **local_98;
  longlong *local_90;
  longlong local_78 [2];
  longlong *local_68;
  longlong local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (param_1[5] == 0) {
    bVar11 = false;
  }
  else {
    uVar6 = (**(code **)(*param_1 + 0x180))(param_1);
    FUN_141495e41(local_78,uVar6);
    bVar11 = local_78[0] == param_1[5];
  }
  plVar1 = param_1 + 0x10;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (*(int *)((longlong)param_1 + 0x8c) < 0) {
    FUN_148d171d6(plVar1);
  }
  if ((bVar11) && ((longlong)(int)param_1[0xf] != 0)) {
    lVar9 = param_1[0xe];
    lVar10 = (longlong)(int)param_1[0xf] << 3;
    do {
      lVar4 = FUN_14479d2ce(lVar9);
      if (lVar4 != 0) {
        lVar5 = FUN_144a7b4ca();
        if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
          cVar3 = FUN_14600436e(param_1,lVar4);
          if (cVar3 != '\0') {
            iVar2 = (int)param_1[0x11];
            *(uint *)(param_1 + 0x11) = iVar2 + 1U;
            if (*(uint *)((longlong)param_1 + 0x8c) < iVar2 + 1U) {
              FUN_1460044b4(plVar1,iVar2);
            }
            *(longlong *)(*plVar1 + (longlong)iVar2 * 8) = lVar4;
          }
        }
      }
      lVar9 = lVar9 + 8;
      lVar10 = lVar10 + -8;
    } while (lVar10 != 0);
  }
  local_108 = local_78;
  local_78[0] = 0;
  local_68 = (longlong *)0x0;
  local_a8 = (undefined ***)0x0;
  local_98 = &PTR_LAB_14b968340;
  local_b8 = FUN_14411494e;
  local_e8 = (undefined ***)0x0;
  local_d8 = &PTR_LAB_14b968320;
  local_d0 = &LAB_14411493a;
  local_f8[0] = &LAB_1460048ea;
  local_90 = param_1;
  FUN_146004538(param_1,plVar1,local_f8);
  if (local_f8[0] != (undefined1 *)0x0) {
    pppuVar7 = local_e8;
    if (local_e8 == (undefined ***)0x0) {
      pppuVar7 = &local_d8;
    }
    (*(code *)(*pppuVar7)[2])();
  }
  if (local_b8 != (code *)0x0) {
    pppuVar7 = local_a8;
    if (local_a8 == (undefined ***)0x0) {
      pppuVar7 = &local_98;
    }
    (*(code *)(*pppuVar7)[2])();
  }
  if (local_78[0] != 0) {
    plVar8 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar8 = local_58;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (*(int *)((longlong)param_1 + 0x8c) < 0) {
    FUN_148d171d6(plVar1);
  }
  if ((local_38 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146004342 FUN_146004342 body=12 status=ok
// SIG undefined FUN_146004342(void)

void FUN_146004342(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014600434b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14600434e FUN_14600434e body=31 status=ok
// SIG undefined FUN_14600434e(void)

undefined8 FUN_14600434e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14600436e FUN_14600436e body=204 status=ok
// SIG undefined FUN_14600436e(void)

undefined8 FUN_14600436e(longlong param_1,longlong param_2)

{
  short sVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  cVar2 = FUN_14600443a(param_1 + 0x60);
  if (cVar2 == '\0') {
    lVar4 = FUN_14479d2ce(param_2 + 0x4e0);
    if (lVar4 != 0) {
      cVar2 = FUN_144729dda(param_1 + 0x68);
      if ((cVar2 != '\0') &&
         (sVar1 = *(short *)(lVar4 + 0x420), lVar4 = FUN_14479d2ce(param_1 + 0x68),
         sVar1 != *(short *)(lVar4 + 0x420))) {
        return 0;
      }
    }
    uVar5 = FUN_14479d2ce(param_1 + 0x60);
    lVar4 = FUN_14492b4b4(uVar5);
    lVar6 = FUN_14492b4b4(param_2);
    if ((lVar6 == 0 || lVar4 == 0) || (iVar3 = FUN_1412183a4(lVar6,lVar4), iVar3 == 0)) {
      return 1;
    }
  }
  else if ((*(longlong *)(param_1 + 0x30) != 0) &&
          (*(int *)(*(longlong *)(param_1 + 0x30) + 0x120) == 3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 14600443a FUN_14600443a body=120 status=ok
// SIG undefined FUN_14600443a(void)

ulonglong FUN_14600443a(int *param_1)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_14485c47a(&local_20);
  if ((*param_1 != (int)local_20) ||
     (uVar2 = CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1), param_1[1] != local_20._4_4_)) {
    cVar1 = FUN_144729dda(param_1);
    if (cVar1 == '\0') {
      uVar2 = FUN_144729dda(&local_20);
      uVar2 = uVar2 ^ 1;
    }
    else {
      uVar2 = 0;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460044b4 FUN_1460044b4 body=132 status=ok
// SIG undefined FUN_1460044b4(void)

void FUN_1460044b4(longlong param_1,int param_2)

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



// FUNCTION 146004538 FUN_146004538 body=709 status=ok
// SIG undefined FUN_146004538(void)

void FUN_146004538(longlong param_1,longlong *param_2,undefined8 param_3,longlong *param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  code *pcVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar2 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar2 != 0) {
    lVar9 = *(longlong *)(param_1 + 0x38);
    lVar8 = 0;
    do {
      *(undefined2 *)(lVar9 + 0x10 + lVar8) = 0x100;
      lVar8 = lVar8 + 0x18;
    } while ((longlong)iVar2 * 0x18 != lVar8);
  }
  plVar1 = (longlong *)(param_1 + 0x38);
  if ((longlong)(int)param_2[1] != 0) {
    lVar9 = *param_2;
    local_68 = lVar9 + (longlong)(int)param_2[1] * 8;
    local_70 = param_4 + 4;
    do {
      iVar2 = *(int *)(param_1 + 0x40);
      local_58 = lVar9;
      local_50 = param_3;
      if ((longlong)iVar2 != 0) {
        lVar8 = *(longlong *)(param_1 + 0x38);
        lVar5 = 0;
        do {
          cVar3 = FUN_146004866(&local_58,lVar8 + lVar5);
          if (cVar3 != '\0') {
            uVar7 = (int)(lVar5 >> 3) * -0x55555555;
            if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)(param_1 + 0x40))) {
              *(undefined1 *)(*plVar1 + 0x11 + (ulonglong)(uVar7 & 0x7fffffff) * 0x18) = 0;
              if ((*param_5 == 0) ||
                 (lVar8 = *(longlong *)(*plVar1 + (ulonglong)(uVar7 & 0x7fffffff) * 0x18),
                 lVar8 == 0)) goto LAB_1460046de;
              lVar5 = FUN_1414ba9b4();
              if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar5 + 0x38) * 8) != lVar5 + 0x30)) goto LAB_1460046de;
              pcVar10 = (code *)*param_5;
              plVar6 = param_5 + 4;
              if ((longlong *)param_5[2] != (longlong *)0x0) {
                plVar6 = (longlong *)param_5[2];
              }
              goto LAB_146004775;
            }
            break;
          }
          lVar5 = lVar5 + 0x18;
        } while ((longlong)iVar2 * 0x18 != lVar5);
      }
      plVar6 = (longlong *)FUN_1404e9402(plVar1);
      *(undefined2 *)(plVar6 + 2) = 1;
      uVar4 = FUN_1414ba9b4();
      FUN_1404e95e0(param_1,&local_60,uVar4);
      if ((*plVar6 != 0) && (DAT_14c872a72 == '\0')) {
        FUN_140113f48();
      }
      lVar8 = local_60;
      *plVar6 = local_60;
      if (local_60 != 0) {
        lVar5 = FUN_1414ba9b4();
        if (((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) &&
           (pcVar10 = (code *)*param_4, pcVar10 != (code *)0x0)) {
          plVar6 = (longlong *)param_4[2];
          if ((longlong *)param_4[2] == (longlong *)0x0) {
            plVar6 = local_70;
          }
LAB_146004775:
          uVar4 = (**(code **)(*plVar6 + 8))();
          (*pcVar10)(uVar4,lVar8,lVar9);
        }
      }
LAB_1460046de:
      lVar9 = lVar9 + 8;
    } while (lVar9 != local_68);
  }
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    lVar9 = (longlong)*(int *)(param_1 + 0x40) * 0x18;
    plVar6 = (longlong *)(*(longlong *)(param_1 + 0x38) + 8);
    do {
      if ((char)plVar6[1] == '\x01') {
        if (*(longlong *)(param_1 + 0x30) == 0) {
          lVar8 = 0;
        }
        else {
          FUN_140a97e96(*(longlong *)(param_1 + 0x30),&local_60,plVar6[-1]);
          lVar8 = local_60;
        }
        *plVar6 = lVar8;
      }
      else if (*(char *)((longlong)plVar6 + 9) == '\x01') {
        if (*(longlong *)(param_1 + 0x30) != 0) {
          FUN_140993b54(*(longlong *)(param_1 + 0x30),plVar6);
        }
        FUN_1404e9462(param_1,plVar6 + -1);
      }
      plVar6 = plVar6 + 3;
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != 0);
  }
  FUN_1460047fe(plVar1);
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460047fe FUN_1460047fe body=104 status=ok
// SIG undefined FUN_1460047fe(void)

void FUN_1460047fe(longlong *param_1)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  ulonglong uVar4;
  
  iVar2 = (int)param_1[1];
  if (iVar2 < 1) {
    return;
  }
  uVar4 = 0;
  bVar1 = false;
  do {
    uVar4 = (ulonglong)(int)uVar4;
    pcVar3 = (char *)(*param_1 + uVar4 * 0x18 + 0x11);
    while (*pcVar3 == '\0') {
      uVar4 = uVar4 + 1;
      pcVar3 = pcVar3 + 0x18;
      if ((longlong)iVar2 <= (longlong)uVar4) {
        if (!bVar1) {
          return;
        }
        goto LAB_14600484d;
      }
    }
    FUN_1404ec6d4(param_1,uVar4 & 0xffffffff);
    iVar2 = (int)param_1[1];
    bVar1 = true;
  } while ((int)uVar4 < iVar2);
LAB_14600484d:
  FUN_141089ae6(param_1);
  return;
}



// FUNCTION 146004866 FUN_146004866 body=126 status=ok
// SIG undefined FUN_146004866(void)

ulonglong FUN_146004866(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  byte bVar6;
  longlong in_RAX;
  undefined8 uVar7;
  longlong *plVar8;
  byte bVar9;
  undefined8 unaff_RSI;
  undefined7 uVar10;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    in_RAX = FUN_1414ba9b4();
    piVar1 = (int *)(in_RAX + 0x38);
    if ((*piVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (in_RAX = in_RAX + 0x30,
       *(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*piVar1 * 8) ==
       in_RAX)) {
      puVar3 = (undefined8 *)param_1[1];
      pcVar4 = (code *)*puVar3;
      uVar10 = (undefined7)((ulonglong)unaff_RSI >> 8);
      bVar9 = 1;
      if (pcVar4 == (code *)0x0) {
        bVar6 = 0;
      }
      else {
        uVar5 = *param_1;
        plVar8 = puVar3 + 4;
        if ((longlong *)puVar3[2] != (longlong *)0x0) {
          plVar8 = (longlong *)puVar3[2];
        }
        uVar7 = (**(code **)(*plVar8 + 8))();
        bVar6 = (*pcVar4)(uVar7,lVar2,uVar5);
      }
      goto LAB_1460048cd;
    }
  }
  bVar6 = (byte)in_RAX;
  bVar9 = 0;
  uVar10 = 0;
LAB_1460048cd:
  return CONCAT71(uVar10,bVar9 & bVar6) & 0xffffffff;
}



// FUNCTION 146004904 FUN_146004904 body=236 status=ok
// SIG undefined FUN_146004904(void)

undefined8 * FUN_146004904(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_149f30af0;
  *(undefined2 *)(param_1 + 5) = 0xff;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0xffffffff;
  FUN_140056680(param_1 + 6,&DAT_149dfb77a);
  FUN_140056680(param_1 + 8,&DAT_149dfb77a);
  FUN_140056680(param_1 + 10,&DAT_149dfb77a);
  FUN_140056680(param_1 + 0xc,&DAT_149dfb77a);
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  FUN_140056680(param_1 + 0x18,&DAT_149dfb77a);
  FUN_140056680(param_1 + 0x1a,&DAT_149dfb77a);
  FUN_140056680(param_1 + 0x1c,&DAT_149dfb77a);
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  return param_1;
}



// FUNCTION 1460049f0 FUN_1460049f0 body=73 status=ok
// SIG undefined FUN_1460049f0(void)

undefined8 * FUN_1460049f0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4f1660;
  param_1[8] = &PTR_LAB_14a4f1940;
  FUN_146004a3a(param_1 + 9);
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146004a3a FUN_146004a3a body=174 status=ok
// SIG undefined FUN_146004a3a(void)

void FUN_146004a3a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x150) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x138) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0x18);
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
  plVar3 = *(longlong **)(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000146004ae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146004ae8 FUN_146004ae8 body=59 status=ok
// SIG undefined FUN_146004ae8(void)

void FUN_146004ae8(undefined8 param_1)

{
  undefined1 auStack_38 [40];
  undefined1 local_10 [8];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_146004b24(local_10,param_1);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146004b24 FUN_146004b24 body=186 status=ok
// SIG undefined FUN_146004b24(void)

undefined8 FUN_146004b24(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_149e020b0;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14aef0790;
  puVar1[3] = param_2;
  puVar1[4] = &LAB_145af5460;
  FUN_1448b6402(&DAT_14c872cf8,param_1,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146004be8 FUN_146004be8 body=239 status=ok
// SIG undefined FUN_146004be8(void)

undefined8 * FUN_146004be8(undefined8 *param_1)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  FUN_141083082();
  *param_1 = &PTR_FUN_14bc74f10;
  puVar2 = (undefined8 *)FUN_145a9bbfa();
  param_1[0x2a] = 0;
  iVar1 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
  *(int *)(param_1 + 0x2b) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x15c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x2a,iVar1,0);
    memcpy((void *)param_1[0x2a],_Src,(longlong)iVar1 * 2);
  }
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  FUN_14020fad6(param_1 + 0x2c,L"RootJointID");
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  FUN_14020fad6(param_1 + 0x2e,L"UseTimeZeroForBindPose");
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  FUN_14020fad6(param_1 + 0x30,L"SkeletalMeshFactoryNodeUid");
  param_1[0x32] = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  return param_1;
}



// FUNCTION 146004cd8 FUN_146004cd8 body=133 status=ok
// SIG undefined FUN_146004cd8(void)

longlong FUN_146004cd8(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_1415b7a94();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x68;
    if (lVar3 + lVar2 != 0) goto LAB_146004d25;
  }
  local_30 = param_3;
  FUN_146004d5e(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 * 0x68;
LAB_146004d25:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2 + lVar3 + 0x10;
}



// FUNCTION 146004d5e FUN_146004d5e body=269 status=ok
// SIG undefined FUN_146004d5e(void)

undefined4 * FUN_146004d5e(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14600504c(param_1,local_48);
  FUN_146004ed6(param_4,local_40);
  *(undefined4 *)(local_40 + 0x60) = 0xffffffff;
  cVar1 = FUN_146004e6c(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)(local_40 + 100) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x60) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_1460052e2(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146004e6c FUN_146004e6c body=105 status=ok
// SIG undefined FUN_146004e6c(void)

undefined8 FUN_146004e6c(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  int iVar1;
  void *_Dst;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar1 = FUN_1415b7a94(), iVar1 != -1)) {
    _Dst = (void *)((longlong)iVar1 * 0x68 + *param_1);
    FUN_1459b0b4e(_Dst);
    memmove(_Dst,param_3,0x60);
    FUN_148fa1236(param_1,*param_4);
    *param_4 = iVar1;
    return 1;
  }
  return 0;
}



// FUNCTION 146004ed6 FUN_146004ed6 body=144 status=ok
// SIG undefined FUN_146004ed6(void)

undefined8 FUN_146004ed6(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_40 = 0x8000000000;
  local_38 = 0xffffffff;
  FUN_146004f68(param_2,*param_1,&local_68);
  uStack_20 = uStack_20 & 0xffffffff00000000;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_1459b0b94(&local_68);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146004f68 FUN_146004f68 body=101 status=ok
// SIG undefined FUN_146004f68(void)

undefined8 * FUN_146004f68(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  void *_Src;
  
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
  FUN_146004fce(param_1 + 2,param_3);
  return param_1;
}



// FUNCTION 146004fce FUN_146004fce body=125 status=ok
// SIG undefined FUN_146004fce(void)

undefined8 * FUN_146004fce(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_146005130();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 14600504c FUN_14600504c body=227 status=ok
// SIG undefined FUN_14600504c(void)

int * FUN_14600504c(longlong *param_1,int *param_2)

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
      FUN_1406a7630(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x68);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x68) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x68 + *param_1;
  return param_2;
}



// FUNCTION 146005130 FUN_146005130 body=433 status=ok
// SIG undefined FUN_146005130(void)

longlong * FUN_146005130(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    iVar7 = 0;
    local_48 = plVar1;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_50);
      iVar7 = (int)param_1[5];
    }
    local_70 = local_50;
    local_68 = local_48;
    local_60 = local_40;
    uVar5 = local_60;
    local_58 = local_38;
    local_54 = local_34;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar6 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar7) || (local_60 = uVar5, local_48 != plVar1)) {
      do {
        do {
          local_60 = uVar5;
          FUN_148fa0d04((longlong)iVar6 * 0x28 + *local_78);
          local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
          FUN_1449c0562(&local_70);
          iVar6 = local_60._4_4_;
          uVar5 = local_60;
        } while (local_60._4_4_ != iVar7);
      } while ((local_68 != plVar1) || (local_78 != param_1));
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar4 = param_2[3];
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
      *(int *)(param_1 + 3) = (int)lVar4;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1460052e2 FUN_1460052e2 body=485 status=ok
// SIG undefined FUN_1460052e2(void)

void FUN_1460052e2(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar5 = local_78;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_68);
    }
    local_88 = local_68;
    local_80 = local_60;
    local_78 = local_58;
    uVar5 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar12 = local_78._4_4_;
      local_78 = uVar5;
      do {
        lVar3 = *local_90;
        lVar11 = (longlong)iVar12 * 0x68;
        iVar6 = *(int *)(lVar3 + 8 + lVar11);
        puVar9 = &DAT_149dfb77a;
        iVar4 = 0;
        if (iVar6 != 0) {
          puVar9 = *(undefined2 **)(lVar3 + lVar11);
          iVar4 = iVar6 + -1;
        }
        iVar6 = FUN_144a49b4a(iVar4,puVar9);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 100 + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x60 + lVar11) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar12 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460054c8 FUN_1460054c8 body=145 status=ok
// SIG undefined FUN_1460054c8(void)

void FUN_1460054c8(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (((byte *)*param_4 != (byte *)0x0) && ((*(byte *)*param_4 & 3) != 0)) {
    lVar1 = (**(code **)(*param_1 + 0x180))();
    if (lVar1 != 0) {
      lVar1 = FUN_1400f6f32(lVar1);
      if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x68) != 0)) {
        lVar1 = FUN_140d1732e(*(longlong *)(lVar1 + 0x68),param_2 + 0x18);
        if (lVar1 != 0) {
          lVar2 = FUN_144a5dd5e();
          if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) {
            FUN_14600555a(lVar1 + 0x3c28,param_4);
            return;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 14600555a FUN_14600555a body=163 status=ok
// SIG undefined FUN_14600555a(void)

void FUN_14600555a(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = DAT_14cbe54e8;
  local_58 = DAT_14cbe54f0;
  FUN_1448075d0(local_48);
  uVar1 = FUN_144a06846(param_2,local_48);
  uVar1 = FUN_140625082(uVar1,&DAT_14c9a12e0);
  FUN_1447325ac(uVar1,&local_50,1);
  *(undefined8 *)(param_1 + 8) = local_50;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460055fe FUN_1460055fe body=71 status=ok
// SIG undefined FUN_1460055fe(void)

void FUN_1460055fe(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1402735c8();
  if (*(int *)(lVar1 + 0xb40) != 0) {
    lVar2 = FUN_140e4494e(param_1);
    if (lVar2 != 0) {
      FUN_1415b82c2(lVar2,lVar1 + 0xb38);
      return;
    }
  }
  return;
}



// FUNCTION 146005646 FUN_146005646 body=232 status=ok
// SIG undefined FUN_146005646(void)

longlong * FUN_146005646(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  longlong lVar13;
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
  pcVar12 = FUN_1462bca16;
  do {
    pcVar12 = (code *)(*pcVar12)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar12 != (code *)0x0);
  lVar13 = (longlong)(int)param_1[1];
  if (1 < lVar13) {
    lVar4 = *param_1;
    lVar14 = lVar13 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar5 = *(undefined8 *)(lVar4 + lVar15);
      uVar6 = ((undefined8 *)(lVar4 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar7 = *(undefined8 *)(lVar4 + lVar14);
      uVar8 = ((undefined8 *)(lVar4 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      uVar11 = puVar2[1];
      puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar11;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      *puVar2 = uVar9;
      puVar2[1] = uVar10;
      *(undefined8 *)(lVar4 + lVar15) = uVar7;
      ((undefined8 *)(lVar4 + lVar15))[1] = uVar8;
      local_48._0_4_ = (undefined4)uVar5;
      local_48._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar6;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar4 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar5;
      uStack_40 = uVar6;
    } while ((lVar13 * 8 & 0xfffffffffffffff0U) * 3 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146005734 FUN_146005734 body=232 status=ok
// SIG undefined FUN_146005734(void)

longlong * FUN_146005734(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  longlong lVar13;
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
  pcVar12 = FUN_14631f626;
  do {
    pcVar12 = (code *)(*pcVar12)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar12 != (code *)0x0);
  lVar13 = (longlong)(int)param_1[1];
  if (1 < lVar13) {
    lVar4 = *param_1;
    lVar14 = lVar13 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar5 = *(undefined8 *)(lVar4 + lVar15);
      uVar6 = ((undefined8 *)(lVar4 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar7 = *(undefined8 *)(lVar4 + lVar14);
      uVar8 = ((undefined8 *)(lVar4 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      uVar11 = puVar2[1];
      puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar11;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      *puVar2 = uVar9;
      puVar2[1] = uVar10;
      *(undefined8 *)(lVar4 + lVar15) = uVar7;
      ((undefined8 *)(lVar4 + lVar15))[1] = uVar8;
      local_48._0_4_ = (undefined4)uVar5;
      local_48._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar6;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar4 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar5;
      uStack_40 = uVar6;
    } while ((lVar13 * 8 & 0xfffffffffffffff0U) * 3 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146005822 FUN_146005822 body=61 status=ok
// SIG undefined FUN_146005822(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146005822(void)

{
  if (DAT_14cae0dc0 != 0) {
    FUN_1400020a8();
  }
  _DAT_14cae0da8 = 0;
  if (DAT_14cae0da0 != 0) {
    FUN_1400020a8();
  }
  FUN_146005860();
  return;
}



// FUNCTION 146005860 FUN_146005860 body=54 status=ok
// SIG undefined FUN_146005860(void)

void FUN_146005860(void)

{
  FUN_146005896();
  if (DAT_14cae0d80 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cae0d60 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146005896 FUN_146005896 body=379 status=ok
// SIG undefined FUN_146005896(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146005896(void)

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
  local_28 = &DAT_14cae0d70;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (DAT_14cae0d88 != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = &DAT_14cae0d60;
  local_50 = local_30;
  local_48 = local_28;
  local_40 = local_20;
  iStack_3c = iStack_1c;
  local_38 = local_18;
  local_34 = local_14;
  if (iStack_1c < *(int *)(local_28 + 0x18)) {
    do {
      FUN_147adea24(*local_58 + (longlong)iStack_3c * 0x50 + 8);
      local_40 = local_40 & ~local_50._4_4_;
      FUN_1449c0562(&local_50);
    } while (iStack_3c < *(int *)(local_48 + 0x18));
  }
  _DAT_14cae0d68 = 0;
  if (DAT_14cae0d6c != 0) {
    FUN_140e9549c(&DAT_14cae0d60,0);
  }
  _DAT_14cae0d90 = 0xffffffff;
  DAT_14cae0d88 = 0;
  if (0x80 < DAT_14cae0d8c) {
    DAT_14cae0d8c = 0x80;
    FUN_1446efbd8(&DAT_14cae0d70,0);
  }
  if ((local_10 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146005a12 FUN_146005a12 body=61 status=ok
// SIG undefined FUN_146005a12(void)

void FUN_146005a12(void)

{
  if (DAT_14cae4030 != 0) {
    FUN_1400020a8();
  }
  DAT_14cae4028 = 0;
  if (DAT_14cae4020 != 0) {
    FUN_1400020a8();
  }
  FUN_146005a50();
  return;
}



// FUNCTION 146005a50 FUN_146005a50 body=54 status=ok
// SIG undefined FUN_146005a50(void)

void FUN_146005a50(void)

{
  FUN_146005a86();
  if (DAT_14cae4000 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cae3fe0 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146005a86 FUN_146005a86 body=379 status=ok
// SIG undefined FUN_146005a86(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146005a86(void)

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
  local_28 = &DAT_14cae3ff0;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (DAT_14cae4008 != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = &DAT_14cae3fe0;
  local_50 = local_30;
  local_48 = local_28;
  local_40 = local_20;
  iStack_3c = iStack_1c;
  local_38 = local_18;
  local_34 = local_14;
  if (iStack_1c < *(int *)(local_28 + 0x18)) {
    do {
      FUN_147af1842(*local_58 + (longlong)iStack_3c * 0x50 + 8);
      local_40 = local_40 & ~local_50._4_4_;
      FUN_1449c0562(&local_50);
    } while (iStack_3c < *(int *)(local_48 + 0x18));
  }
  DAT_14cae3fe8 = 0;
  if (DAT_14cae3fec != 0) {
    FUN_140e9549c(&DAT_14cae3fe0,0);
  }
  _DAT_14cae4010 = 0xffffffff;
  DAT_14cae4008 = 0;
  if (0x80 < DAT_14cae400c) {
    DAT_14cae400c = 0x80;
    FUN_1446efbd8(&DAT_14cae3ff0,0);
  }
  if ((local_10 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146005c02 FUN_146005c02 body=75 status=ok
// SIG undefined FUN_146005c02(void)

undefined8 * FUN_146005c02(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14add35e0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_146005c4e(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146005c4e FUN_146005c4e body=53 status=ok
// SIG undefined FUN_146005c4e(void)

void FUN_146005c4e(longlong *param_1)

{
  FUN_146005c84();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146005c84 FUN_146005c84 body=366 status=ok
// SIG undefined FUN_146005c84(void)

void FUN_146005c84(longlong *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      lVar4 = *(longlong *)(*local_68 + 0x18 + (longlong)iStack_4c * 0x38);
      if (lVar4 != 0) {
        LOCK();
        puVar2 = (uint *)(lVar4 + 8);
        uVar3 = *puVar2;
        *puVar2 = *puVar2 - 1;
        UNLOCK();
        if ((uVar3 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144748838(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146005df4 FUN_146005df4 body=232 status=ok
// SIG undefined FUN_146005df4(void)

longlong * FUN_146005df4(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  longlong lVar13;
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
  pcVar12 = FUN_146476602;
  do {
    pcVar12 = (code *)(*pcVar12)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar12 != (code *)0x0);
  lVar13 = (longlong)(int)param_1[1];
  if (1 < lVar13) {
    lVar4 = *param_1;
    lVar14 = lVar13 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar5 = *(undefined8 *)(lVar4 + lVar15);
      uVar6 = ((undefined8 *)(lVar4 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar7 = *(undefined8 *)(lVar4 + lVar14);
      uVar8 = ((undefined8 *)(lVar4 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      uVar11 = puVar2[1];
      puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar11;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      *puVar2 = uVar9;
      puVar2[1] = uVar10;
      *(undefined8 *)(lVar4 + lVar15) = uVar7;
      ((undefined8 *)(lVar4 + lVar15))[1] = uVar8;
      local_48._0_4_ = (undefined4)uVar5;
      local_48._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar6;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar4 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar5;
      uStack_40 = uVar6;
    } while ((lVar13 * 8 & 0xfffffffffffffff0U) * 3 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146005ee2 FUN_146005ee2 body=115 status=ok
// SIG undefined FUN_146005ee2(void)

void FUN_146005ee2(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146005f56(param_1,iVar1);
    }
    FUN_14004dd9a((longlong)iVar1 * 4 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_146cb4284(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146005f56 FUN_146005f56 body=132 status=ok
// SIG undefined FUN_146005f56(void)

void FUN_146005f56(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 2,2);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,4,2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146005fe6 FUN_146005fe6 body=236 status=ok
// SIG undefined FUN_146005fe6(void)

undefined8 * FUN_146005fe6(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40;
  undefined1 local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140312256();
  *param_1 = &PTR_FUN_14a5a2b70;
  param_1[0x72] = &PTR_FUN_14a5a31b0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) | 8;
  *(undefined4 *)(param_1 + 0x75) = 0x80800000;
  param_1[0x76] = 0;
  FUN_1446ddc76(&local_28,"MediaComponent",1);
  local_48 = FUN_1458f0cbc();
  local_38 = 0;
  local_40 = 1;
  lVar1 = FUN_140486aac(param_2,param_1,local_28,local_48);
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[0x74] = lVar1;
  FUN_14010ee68(param_1,lVar1);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460060f2 FUN_1460060f2 body=239 status=ok
// SIG undefined FUN_1460060f2(void)

undefined8 * FUN_1460060f2(undefined8 *param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14007ca06();
  FUN_140da6ea8(param_1);
  *param_1 = &PTR_FUN_14b5adcf0;
  param_1[7] = 0x457a000043960000;
  param_1[8] = 0x4100000045fa0000;
  param_1[9] = 0x457a000044fa0000;
  *(undefined4 *)(param_1 + 10) = 0x40a00000;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0x41200000;
  memset(param_1 + 0x11,0,0x350);
  *(undefined4 *)(param_1 + 0x7b) = 0x3e99999a;
  FUN_1446ddc76(&local_20,"Plugins",1);
  param_1[5] = local_20;
  FUN_1446ddc76(&local_20,"Photo Mode",1);
  param_1[6] = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460061e2 FUN_1460061e2 body=40 status=ok
// SIG undefined FUN_1460061e2(void)

undefined8 FUN_1460061e2(undefined8 param_1,int param_2)

{
  FUN_14600620a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14600620a FUN_14600620a body=208 status=ok
// SIG undefined FUN_14600620a(void)

void FUN_14600620a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba145b0;
  param_1[5] = &PTR_FUN_14ba149c0;
  param_1[0x13] = &PTR_FUN_14ba149e0;
  param_1[0x17] = &PTR_FUN_14ba14a10;
  FUN_141082778(param_1 + 0x2c);
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x26];
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
  plVar3 = (longlong *)param_1[0x24];
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
  FUN_1458506c0(param_1);
  return;
}



// FUNCTION 1460062e2 FUN_1460062e2 body=859 status=ok
// SIG undefined FUN_1460062e2(void)

undefined8 * FUN_1460062e2(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar5 = FUN_14007ca06();
  FUN_14077009c(param_1,uVar5);
  *param_1 = &PTR_FUN_14b7823c0;
  *(undefined1 *)(param_1 + 6) = 2;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x40000000;
  *(undefined4 *)(param_1 + 7) = 0x3fc00000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3f800000;
  *(undefined4 *)(param_1 + 8) = 0x3f800000;
  plVar1 = param_1 + 9;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 5;
  *(undefined4 *)(param_1 + 0xd) = 0x3003;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined2 *)(param_1 + 0x19) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0xca) = 1;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x3ecccccd;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0xc] = DAT_14cbcb520;
  *(undefined4 *)(param_1 + 10) = 4;
  FUN_14600663e(plVar1);
  puVar2 = (undefined8 *)param_1[9];
  puVar2[0xe] = 0;
  puVar2[0xf] = 0;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  FUN_140056680(&local_60,L"Small");
  local_50 = 0x42a00000;
  uStack_4c = 0x41200000;
  uStack_48 = 0x469c4000;
  uStack_44 = 0x46c35000;
  plVar3 = (longlong *)param_1[9];
  if (plVar3 == &local_60) {
    *(undefined4 *)(plVar3 + 2) = 0x42a00000;
    *(undefined4 *)((longlong)plVar3 + 0x14) = 0x41200000;
    *(undefined4 *)(plVar3 + 3) = 0x469c4000;
    *(undefined4 *)((longlong)plVar3 + 0x1c) = 0x46c35000;
    if (local_60 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
    *plVar3 = local_60;
    local_60 = 0;
    *(undefined4 *)(plVar3 + 1) = local_58;
    *(undefined4 *)((longlong)plVar3 + 0xc) = local_54;
    *(undefined4 *)(plVar3 + 2) = local_50;
    *(undefined4 *)((longlong)plVar3 + 0x14) = uStack_4c;
    *(undefined4 *)(plVar3 + 3) = uStack_48;
    *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_44;
  }
  FUN_140056680(&local_60,L"Medium");
  local_50 = 0x42c80000;
  uStack_4c = 0x41200000;
  uStack_48 = 0x46c35000;
  uStack_44 = 0x4700e700;
  lVar4 = *plVar1;
  if ((longlong *)(lVar4 + 0x20) == &local_60) {
    *(undefined4 *)(lVar4 + 0x30) = 0x42c80000;
    *(undefined4 *)(lVar4 + 0x34) = 0x41200000;
    *(undefined4 *)(lVar4 + 0x38) = 0x46c35000;
    *(undefined4 *)(lVar4 + 0x3c) = 0x4700e700;
    if (local_60 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(lVar4 + 0x20) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(lVar4 + 0x20) = local_60;
    local_60 = 0;
    *(undefined4 *)(lVar4 + 0x28) = local_58;
    *(undefined4 *)(lVar4 + 0x2c) = local_54;
    *(undefined4 *)(lVar4 + 0x30) = local_50;
    *(undefined4 *)(lVar4 + 0x34) = uStack_4c;
    *(undefined4 *)(lVar4 + 0x38) = uStack_48;
    *(undefined4 *)(lVar4 + 0x3c) = uStack_44;
  }
  FUN_140056680(&local_60,L"Large");
  local_50 = 0x42fa0000;
  uStack_4c = 0x41200000;
  uStack_48 = 0x4700e700;
  uStack_44 = 0x4756d700;
  lVar4 = *plVar1;
  if ((longlong *)(lVar4 + 0x40) == &local_60) {
    *(undefined4 *)(lVar4 + 0x50) = 0x42fa0000;
    *(undefined4 *)(lVar4 + 0x54) = 0x41200000;
    *(undefined4 *)(lVar4 + 0x58) = 0x4700e700;
    *(undefined4 *)(lVar4 + 0x5c) = 0x4756d700;
    if (local_60 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(lVar4 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(lVar4 + 0x40) = local_60;
    local_60 = 0;
    *(undefined4 *)(lVar4 + 0x48) = local_58;
    *(undefined4 *)(lVar4 + 0x4c) = local_54;
    *(undefined4 *)(lVar4 + 0x50) = local_50;
    *(undefined4 *)(lVar4 + 0x54) = uStack_4c;
    *(undefined4 *)(lVar4 + 0x58) = uStack_48;
    *(undefined4 *)(lVar4 + 0x5c) = uStack_44;
  }
  FUN_140056680(&local_60,L"Huge");
  local_50 = 0x43480000;
  uStack_4c = 0x41200000;
  uStack_48 = 0x4756d700;
  uStack_44 = 0x47c34f80;
  lVar4 = *plVar1;
  if ((longlong *)(lVar4 + 0x60) == &local_60) {
    *(undefined4 *)(lVar4 + 0x70) = 0x43480000;
    *(undefined4 *)(lVar4 + 0x74) = 0x41200000;
    *(undefined4 *)(lVar4 + 0x78) = 0x4756d700;
    *(undefined4 *)(lVar4 + 0x7c) = 0x47c34f80;
    if (local_60 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(lVar4 + 0x60) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(lVar4 + 0x60) = local_60;
    *(undefined4 *)(lVar4 + 0x68) = local_58;
    *(undefined4 *)(lVar4 + 0x6c) = local_54;
    *(undefined4 *)(lVar4 + 0x70) = local_50;
    *(undefined4 *)(lVar4 + 0x74) = uStack_4c;
    *(undefined4 *)(lVar4 + 0x78) = uStack_48;
    *(undefined4 *)(lVar4 + 0x7c) = uStack_44;
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14600663e FUN_14600663e body=125 status=ok
// SIG undefined FUN_14600663e(void)

void FUN_14600663e(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = (ulonglong)uVar1;
  if (-1 < (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = (ulonglong)uVar1;
      }
    }
    else {
      uVar2 = uVar2 + (uVar2 * 3 >> 3) + 0x10;
    }
    uVar2 = FUN_144a3809e(uVar2 << 5,8);
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar2 >> 5)) {
      uVar3 = uVar2 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,0,uVar3,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar2);
}



// FUNCTION 1460066bc FUN_1460066bc body=98 status=ok
// SIG undefined FUN_1460066bc(void)

void FUN_1460066bc(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14600671e FUN_14600671e body=169 status=ok
// SIG undefined FUN_14600671e(void)

void FUN_14600671e(code *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 auStack_88 [40];
  code *local_60;
  undefined4 local_58;
  undefined1 local_50 [20];
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_3c = param_2;
  FUN_146006c10();
  local_60 = FUN_14163d9d0;
  local_58 = 0;
  FUN_1460067c8(local_50,param_1,&local_60,param_3);
  local_60 = param_1;
  FUN_146006890(param_1 + 0x30,&local_3c,&local_60,local_50);
  FUN_1449db362(local_50);
  FUN_1449db362(param_3);
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460067c8 FUN_1460067c8 body=200 status=ok
// SIG undefined FUN_1460067c8(void)

longlong *
FUN_1460067c8(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar3 = (undefined8 *)*param_1;
  *puVar3 = &PTR_LAB_14b4eb3a0;
  puVar3[1] = 0;
  *(undefined4 *)(puVar3 + 2) = 0;
  FUN_14594ec66(puVar3 + 1,param_4);
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
  puVar3[3] = lVar5;
  *puVar3 = &PTR_FUN_14b4eb330;
  puVar3[4] = 0;
  FUN_14485c47a(puVar3 + 4,param_2);
  *(undefined4 *)(puVar3 + 6) = uVar1;
  puVar3[5] = uVar2;
  return param_1;
}



// FUNCTION 146006890 FUN_146006890 body=229 status=ok
// SIG undefined FUN_146006890(void)

void FUN_146006890(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)FUN_146006987(param_2,param_3,param_4);
  plVar1 = plVar3 + 2;
  local_40 = plVar1;
  local_38 = plVar3;
  FUN_146006a26(&local_40,plVar1);
  local_30 = plVar1;
  local_28 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    FUN_145837c4c(param_1,&local_30);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    FUN_145837c4c(param_1);
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
  plVar1 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146006987 FUN_146006987 body=157 status=ok
// SIG undefined FUN_146006987(void)

undefined8 * FUN_146006987(undefined4 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)FUN_14001cc68(0x80,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14b4eb410;
  local_38 = *param_3;
  *param_3 = 0;
  local_30 = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)(param_3 + 1) = 0;
  FUN_146006ac8(puVar1 + 2,*param_1,*param_2);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146006a26 FUN_146006a26 body=162 status=ok
// SIG undefined FUN_146006a26(void)

void FUN_146006a26(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_146006a65;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_146006a65;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_146006a65:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000146006ac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 146006ac8 FUN_146006ac8 body=165 status=ok
// SIG undefined FUN_146006ac8(void)

undefined8 *
FUN_146006ac8(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = 0;
  local_40 = 0;
  FUN_14594ec66(&local_48,param_4);
  local_58 = 1;
  local_50 = &local_48;
  FUN_146006b6e(param_1,param_2,param_3,0);
  *param_1 = &PTR_FUN_14b4e83e0;
  param_1[4] = &PTR_LAB_14b4e8480;
  param_1[0xd] = 0;
  FUN_1449db362(param_4);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146006b6e FUN_146006b6e body=162 status=ok
// SIG undefined FUN_146006b6e(void)

undefined8 *
FUN_146006b6e(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
             undefined1 param_5,undefined8 param_6)

{
  int iVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  iVar1 = DAT_14cb970bc + 1;
  *(int *)((longlong)param_1 + 0x1c) = DAT_14cb970bc;
  DAT_14cb970bc = iVar1;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = param_2;
  param_1[7] = param_3;
  *param_1 = &PTR_LAB_14b4e8330;
  param_1[4] = &PTR_LAB_14b4e83d0;
  *(undefined1 *)(param_1 + 8) = param_5;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x18;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  FUN_14594ec66(param_1 + 9,param_6);
  param_1[0xb] = 0x2ffffffff;
  *(undefined4 *)(param_1 + 0xc) = param_4;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  FUN_1449db362(param_6);
  return param_1;
}



// FUNCTION 146006c10 FUN_146006c10 body=310 status=ok
// SIG undefined FUN_146006c10(void)

void FUN_146006c10(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong *local_48;
  uint local_3c;
  uint *local_38;
  longlong **local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_3c = param_2;
  if (*(int *)(param_1 + 0x1d8) != *(int *)(param_1 + 0x204)) {
    lVar4 = param_1 + 0x208;
    if (*(longlong *)(param_1 + 0x210) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x210);
    }
    iVar5 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x218) - 1U & param_2) * 4);
    if (iVar5 != -1) {
      lVar4 = *(longlong *)(param_1 + 0x1d0);
      do {
        if (*(uint *)(lVar4 + (longlong)iVar5 * 0x20) == param_2) goto LAB_146006cc2;
        iVar5 = *(int *)((longlong)iVar5 * 0x20 + lVar4 + 0x18);
      } while (iVar5 != -1);
    }
  }
  local_48 = (longlong *)FUN_14001cc68(0x40,0x10);
  local_48[1] = (longlong)&DAT_100000001;
  *local_48 = (longlong)&PTR_FUN_14b4eb9a0;
  local_50 = local_48 + 2;
  local_48[6] = 0;
  local_48[7] = 0;
  *(undefined8 *)((longlong)local_48 + 0x14) = 0;
  *(undefined8 *)((longlong)local_48 + 0x1c) = 0;
  *(undefined8 *)((longlong)local_48 + 0x24) = 0;
  *(undefined8 *)((longlong)local_48 + 0x2c) = 0;
  *(undefined4 *)(local_48 + 7) = 0x18;
  local_30 = &local_50;
  *(uint *)(local_48 + 2) = param_2;
  local_38 = &local_3c;
  FUN_146006d48((longlong *)(param_1 + 0x1d0),local_24);
  plVar3 = local_48;
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
LAB_146006cc2:
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146006d48 FUN_146006d48 body=300 status=ok
// SIG undefined FUN_146006d48(void)

undefined4 * FUN_146006d48(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  uint *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146006f3a(param_1,local_40);
  puVar1 = (undefined8 *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *local_38 = uVar5;
  *(undefined8 *)(local_38 + 2) = *puVar1;
  lVar8 = puVar1[1];
  *(longlong *)(local_38 + 4) = lVar8;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
    uVar5 = *local_38;
  }
  local_38[6] = 0xffffffff;
  local_44 = local_40[0];
  cVar3 = FUN_146006e76(param_1,uVar5,local_38,&local_44);
  uVar2 = local_44;
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
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_38[7] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_38[6] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_146007020(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146006e76 FUN_146006e76 body=196 status=ok
// SIG undefined FUN_146006e76(void)

undefined8 FUN_146006e76(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar9 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar9 != -1) {
      do {
        piVar3 = (int *)(*param_1 + (longlong)iVar9 * 0x20);
        if (*(int *)(*param_1 + (longlong)iVar9 * 0x20) == *param_3) {
          plVar8 = *(longlong **)(piVar3 + 4);
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
          iVar4 = *param_3;
          iVar5 = param_3[1];
          iVar6 = param_3[2];
          iVar7 = param_3[3];
          *(undefined8 *)(piVar3 + 4) = *(undefined8 *)(param_3 + 4);
          *piVar3 = iVar4;
          piVar3[1] = iVar5;
          piVar3[2] = iVar6;
          piVar3[3] = iVar7;
          FUN_148a8d534(param_1,*param_4);
          *param_4 = iVar9;
          return 1;
        }
        iVar9 = piVar3[6];
      } while (iVar9 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 146006f3a FUN_146006f3a body=230 status=ok
// SIG undefined FUN_146006f3a(void)

int * FUN_146006f3a(longlong *param_1,int *param_2)

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
      FUN_1447711aa(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 146007020 FUN_146007020 body=431 status=ok
// SIG undefined FUN_146007020(void)

void FUN_146007020(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x20;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x1c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar7) =
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



// FUNCTION 1460071d0 FUN_1460071d0 body=258 status=ok
// SIG undefined FUN_1460071d0(void)

void FUN_1460071d0(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  
  *(longlong *)(param_1 + 0x10) = *param_2;
  *(longlong *)(param_1 + 0x18) = param_2[1];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
  lVar5 = param_2[3];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(int *)(param_1 + 0x20) = (int)param_2[2];
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(int *)(param_1 + 0x28) = (int)lVar5;
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  plVar6 = param_2 + 4;
  FUN_144a787a6(param_1 + 0x30,plVar6);
  memcpy((void *)(param_1 + 0x40),param_2 + 6,0x81);
  if (param_2[2] == 0) {
    lVar5 = *param_2;
    if ((lVar5 == 0) || (*(longlong *)(lVar5 + 0x28) == 0)) goto LAB_14600722a;
    *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(lVar5 + 0x20);
    uVar1 = *(undefined4 *)(lVar5 + 0x2c);
    uVar2 = *(undefined4 *)(lVar5 + 0x30);
    uVar3 = *(undefined4 *)(lVar5 + 0x34);
    *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(lVar5 + 0x28);
    *(undefined4 *)(param_1 + 0xdc) = uVar1;
    *(undefined4 *)(param_1 + 0xe0) = uVar2;
    *(undefined4 *)(param_1 + 0xe4) = uVar3;
    plVar6 = (longlong *)(lVar5 + 0x38);
  }
  else {
    *(longlong *)(param_1 + 0xd0) = param_2[1];
    uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
    lVar5 = param_2[3];
    uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
    *(int *)(param_1 + 0xd8) = (int)param_2[2];
    *(undefined4 *)(param_1 + 0xdc) = uVar1;
    *(int *)(param_1 + 0xe0) = (int)lVar5;
    *(undefined4 *)(param_1 + 0xe4) = uVar2;
  }
  FUN_144a787a6(param_1 + 0xe8,plVar6);
LAB_14600722a:
  FUN_1460072d2(param_1);
  cVar4 = FUN_144729dda(param_1 + 0x48);
  if (cVar4 != '\0') {
    lVar5 = FUN_14479d2ce(param_1 + 0x48);
    FUN_1400bc96c(lVar5 + 0x80,&DAT_14cb784f0);
    FUN_1402798cc(lVar5);
    return;
  }
  return;
}



// FUNCTION 1460072d2 FUN_1460072d2 body=897 status=ok
// SIG undefined FUN_1460072d2(void)

void FUN_1460072d2(undefined8 *param_1)

{
  int *piVar1;
  void *_Src;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  char cVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 *puVar14;
  bool bVar15;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined1 local_90;
  undefined1 local_88;
  undefined1 *local_80;
  undefined8 *local_70;
  undefined4 local_68;
  undefined1 local_59;
  undefined8 local_58;
  longlong *local_50;
  undefined4 *local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar12 = FUN_1412fe774(param_1 + 0x1a);
  if (lVar12 == 0) {
    if (param_1[0x1b] != 0) {
      local_48 = (undefined4 *)0x0;
      uStack_40 = 0;
      lVar12 = FUN_14050fd64();
      uStack_40 = CONCAT44(uStack_40._4_4_,1);
      FUN_1406f071e(&local_48,0);
      uVar5 = *(undefined4 *)((longlong)param_1 + 0xdc);
      uVar6 = *(undefined4 *)(param_1 + 0x1c);
      uVar7 = *(undefined4 *)((longlong)param_1 + 0xe4);
      *local_48 = *(undefined4 *)(param_1 + 0x1b);
      local_48[1] = uVar5;
      local_48[2] = uVar6;
      local_48[3] = uVar7;
      *(undefined8 *)(local_48 + 4) = 0;
      iVar11 = *(int *)(param_1 + 0x1e);
      _Src = (void *)param_1[0x1d];
      local_48[6] = iVar11;
      if ((longlong)iVar11 == 0) {
        local_48[7] = 0;
      }
      else {
        puVar14 = (undefined8 *)(local_48 + 4);
        FUN_1446dd670(puVar14,iVar11,0);
        memcpy((void *)*puVar14,_Src,(longlong)iVar11 * 2);
      }
      local_70 = (undefined8 *)0x0;
      local_68 = 0;
      FUN_1446efa72(&local_70,0,3,0x10);
      local_68 = 3;
      plVar2 = (longlong *)param_1[1];
      if (plVar2 == (longlong *)0x0) {
LAB_146007433:
        *local_70 = &PTR_LAB_149e020b0;
        LOCK();
        UNLOCK();
        lVar13 = DAT_14c758608 + 1;
        lVar9 = DAT_14c758608 + 1;
        if (lVar13 == 0) {
          LOCK();
          UNLOCK();
          lVar13 = DAT_14c758608 + 2;
          lVar9 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar9;
        local_70[2] = lVar13;
        *local_70 = &PTR_FUN_14b3f8c00;
        local_70[3] = 0;
        local_70[4] = 0;
        local_70[5] = param_1;
      }
      else {
        iVar11 = (int)plVar2[1];
        do {
          if (iVar11 == 0) goto LAB_146007433;
          LOCK();
          iVar8 = (int)plVar2[1];
          bVar15 = iVar11 == iVar8;
          if (bVar15) {
            *(int *)(plVar2 + 1) = iVar11 + 1;
            iVar8 = iVar11;
          }
          iVar11 = iVar8;
          UNLOCK();
        } while (!bVar15);
        uVar4 = *param_1;
        LOCK();
        *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
        UNLOCK();
        *local_70 = &PTR_LAB_149e020b0;
        LOCK();
        UNLOCK();
        lVar13 = DAT_14c758608 + 1;
        lVar9 = DAT_14c758608 + 1;
        if (lVar13 == 0) {
          LOCK();
          UNLOCK();
          lVar13 = DAT_14c758608 + 2;
          lVar9 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar9;
        local_70[2] = lVar13;
        *local_70 = &PTR_FUN_14b3f8c00;
        local_70[3] = uVar4;
        local_70[4] = plVar2;
        LOCK();
        *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
        UNLOCK();
        local_70[5] = param_1;
        LOCK();
        plVar3 = plVar2 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar2)(plVar2);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
        LOCK();
        plVar3 = plVar2 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar2)(plVar2);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
        LOCK();
        plVar3 = plVar2 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
      local_80 = &local_59;
      local_88 = 0;
      local_90 = 0;
      local_98 = 0;
      FUN_1457028c8(lVar12 + 0x1e8,&local_58,&local_48,&local_70);
      plVar2 = local_50;
      if (param_1 + 0x22 != &local_58) {
        param_1[0x22] = local_58;
        local_58 = 0;
        plVar3 = (longlong *)param_1[0x23];
        if (local_50 != plVar3) {
          local_50 = (longlong *)0x0;
          param_1[0x23] = plVar2;
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
      plVar2 = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_50 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
      FUN_1449db362(&local_70);
      FUN_140861e20(local_48,uStack_40 & 0xffffffff);
      if (local_48 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    FUN_1415b8b76(param_1);
  }
  if (((param_1[2] != 0) && (*(char *)(param_1[2] + 0x58) == '\x01')) &&
     (cVar10 = FUN_144729dda(param_1 + 10), cVar10 != '\0')) {
    FUN_14592efd0(param_1,1);
  }
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146007654 FUN_146007654 body=54 status=ok
// SIG undefined FUN_146007654(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146007654(void)

{
  _DAT_14ca774f8 = 0;
  if (DAT_14ca774f0 != 0) {
    FUN_1400020a8();
  }
  FUN_14600768a();
                    /* WARNING: Could not recover jumptable at 0x000146007683. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14ca77488);
  return;
}



// FUNCTION 14600768a FUN_14600768a body=54 status=ok
// SIG undefined FUN_14600768a(void)

void FUN_14600768a(void)

{
  FUN_1415b9312();
  if (DAT_14ca774d0 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14ca774b0 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1460076c0 FUN_1460076c0 body=64 status=ok
// SIG undefined FUN_1460076c0(void)

void FUN_1460076c0(void)

{
  if (DAT_14ca774bc != 0) {
    DAT_14ca774bc = 0;
    FUN_1446f8d3c(&DAT_14ca774b0,DAT_14ca774b8,0,0x268,8);
  }
  return;
}



// FUNCTION 146007700 FUN_146007700 body=395 status=ok
// SIG undefined FUN_146007700(void)

void FUN_146007700(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_1446e6c6a();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_48 = 0;
  uStack_40 = 0;
  FUN_140e6158c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = (undefined4)local_48;
  uStack_54 = local_48._4_4_;
  uStack_50 = (undefined4)uStack_40;
  uStack_4c = uStack_40._4_4_;
  local_70 = local_38;
  uVar1 = FUN_14477b664(uStack_30);
  local_68 = FUN_14477b664(uVar1);
  local_60 = local_28;
  FUN_14600788c(local_20,&local_70,&local_58);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14600788c FUN_14600788c body=480 status=ok
// SIG undefined FUN_14600788c(void)

void FUN_14600788c(undefined8 param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = param_2[1];
  if (lVar3 == 0) {
    uVar2 = FUN_145c05732();
    lVar3 = FUN_14477b664(uVar2);
    param_2[1] = lVar3;
  }
  if (param_2[2] == 0) {
    if ((lVar3 == 0) || (*param_2 == 0)) goto LAB_1460079c1;
    plVar4 = *(longlong **)(lVar3 + 0xb8);
    if (plVar4 != (longlong *)0x0) {
      cVar1 = (**(code **)(*plVar4 + 0x108))(plVar4);
      if (cVar1 != '\0') {
        uVar2 = (**(code **)(*plVar4 + 0x110))(plVar4);
        lVar3 = FUN_144aff482(uVar2,param_2);
        param_2[2] = lVar3;
        if (lVar3 == 0) goto LAB_1460079c1;
        goto LAB_14600791e;
      }
    }
    param_2[2] = 0;
    goto LAB_1460079c1;
  }
LAB_14600791e:
  plVar4 = (longlong *)FUN_14114f501(param_1);
  if (plVar4 == (longlong *)0x0) goto LAB_1460079c1;
  uVar2 = (**(code **)(*plVar4 + 0x10))(plVar4);
  local_48 = *(undefined8 *)(param_3 + 8);
  uVar5 = FUN_14479d2ce(param_3);
  local_40 = 0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  local_38 = 3;
  FUN_146007a6e(local_40,uVar5,&local_48);
  lVar3 = param_2[1];
  if (lVar3 == 0) {
    uVar5 = FUN_145c05732();
    lVar3 = FUN_14477b664(uVar5);
    param_2[1] = lVar3;
  }
  lVar6 = param_2[2];
  if (((lVar6 == 0) && (lVar6 = 0, lVar3 != 0)) && (*param_2 != 0)) {
    plVar4 = *(longlong **)(lVar3 + 0xb8);
    if (plVar4 == (longlong *)0x0) {
LAB_146007a68:
      lVar6 = 0;
    }
    else {
      cVar1 = (**(code **)(*plVar4 + 0x108))(plVar4);
      if (cVar1 == '\0') goto LAB_146007a68;
      uVar5 = (**(code **)(*plVar4 + 0x110))(plVar4);
      lVar6 = FUN_144aff482(uVar5,param_2);
    }
    param_2[2] = lVar6;
  }
  FUN_1410615d0(uVar2,local_50,lVar6,&local_40);
  FUN_1449db362(&local_40);
LAB_1460079c1:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146007a6e FUN_146007a6e body=118 status=ok
// SIG undefined FUN_146007a6e(void)

undefined8 * FUN_146007a6e(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_LAB_149e020b0;
  uVar1 = FUN_144a3f946();
  param_1[2] = uVar1;
  *param_1 = &PTR_FUN_14a7b0030;
  param_1[4] = *param_3;
  param_1[5] = 0;
  FUN_14485c47a(param_1 + 5,param_2);
  if (param_2 != 0) {
    uVar1 = FUN_14479d2ce(param_1 + 5);
    uVar1 = FUN_14477b072(uVar1,*param_3);
    param_1[3] = uVar1;
  }
  return param_1;
}



// FUNCTION 146007ae4 FUN_146007ae4 body=41 status=ok
// SIG undefined FUN_146007ae4(void)

void FUN_146007ae4(void)

{
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a6598);
  FUN_146007b0e();
                    /* WARNING: Could not recover jumptable at 0x000146007b06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a6598);
  return;
}



// FUNCTION 146007b0e FUN_146007b0e body=207 status=ok
// SIG undefined FUN_146007b0e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146007b0e(void)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = DAT_14c9a6588;
  uStack_28 = _DAT_14c9a6590;
  DAT_14c9a6588 = 0;
  _DAT_14c9a6590 = 0;
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(byte *)(lVar3 + 0xc80) & 1) == 0) {
    FUN_145be47b0(&DAT_14c9a6588,&local_30);
  }
  else {
    puVar1 = (undefined1 *)(lVar3 + 0xc80);
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    uVar2 = *(undefined4 *)(lVar3 + 0xc7c);
    *puVar1 = 0;
    *(undefined4 *)(lVar3 + 0xc7c) = 0xffffffff;
    FUN_145be47b0(&DAT_14c9a6588,&local_30);
    *(undefined4 *)(lVar3 + 0xc7c) = uVar2;
    *puVar1 = 1;
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146007bea FUN_146007bea body=237 status=ok
// SIG undefined FUN_146007bea(void)

undefined8 * FUN_146007bea(undefined8 *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140834366();
  *param_1 = &PTR_FUN_14a1f8f20;
  param_1[0x72] = 0;
  FUN_1446f470e(&local_20,L"SparseVolumeTextureViewerComponent",1);
  uVar2 = FUN_14598ece2();
  local_30 = 0;
  local_38 = 1;
  lVar3 = FUN_14048696c(param_1,local_20,uVar2,uVar2);
  if (lVar3 != 0 && DAT_14c950c29 == 1) {
    FUN_14689c22e(lVar3);
  }
  bVar1 = DAT_14c950c29;
  param_1[0x72] = lVar3;
  if ((lVar3 != 0) && ((bVar1 & 1) != 0)) {
    FUN_14689c22e(lVar3);
    lVar3 = param_1[0x72];
  }
  param_1[0x39] = lVar3;
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) | 2;
  FUN_1405bab3a(param_1,0);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146007ce4 FUN_146007ce4 body=237 status=ok
// SIG undefined FUN_146007ce4(void)

undefined8 * FUN_146007ce4(undefined8 *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140834366();
  *param_1 = &PTR_FUN_14a7e57e0;
  param_1[0x72] = 0;
  FUN_1446f470e(&local_20,L"AtmosphericFogComponent0",1);
  uVar2 = FUN_145959b26();
  local_30 = 0;
  local_38 = 1;
  lVar3 = FUN_14048696c(param_1,local_20,uVar2,uVar2);
  if (lVar3 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar3);
  }
  bVar1 = DAT_14c950c29;
  param_1[0x72] = lVar3;
  if ((lVar3 != 0) && ((bVar1 & 1) != 0)) {
    FUN_1456cec3c(lVar3);
    lVar3 = param_1[0x72];
  }
  param_1[0x39] = lVar3;
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) | 2;
  FUN_1405bab3a(param_1,0);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146007dde FUN_146007dde body=237 status=ok
// SIG undefined FUN_146007dde(void)

undefined8 * FUN_146007dde(undefined8 *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140834366();
  *param_1 = &PTR_FUN_14a8472a0;
  param_1[0x72] = 0;
  FUN_1446f470e(&local_20,L"HeterogeneousVolumeComponent",1);
  uVar2 = FUN_145959de8();
  local_30 = 0;
  local_38 = 1;
  lVar3 = FUN_14048696c(param_1,local_20,uVar2,uVar2);
  if (lVar3 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar3);
  }
  bVar1 = DAT_14c950c29;
  param_1[0x72] = lVar3;
  if ((lVar3 != 0) && ((bVar1 & 1) != 0)) {
    FUN_1456cec3c(lVar3);
    lVar3 = param_1[0x72];
  }
  param_1[0x39] = lVar3;
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) | 2;
  FUN_1405bab3a(param_1,0);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146007ed8 FUN_146007ed8 body=237 status=ok
// SIG undefined FUN_146007ed8(void)

undefined8 * FUN_146007ed8(undefined8 *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140834366();
  *param_1 = &PTR_FUN_14a87c280;
  param_1[0x72] = 0;
  FUN_1446f470e(&local_20,L"SkyAtmosphereComponent",1);
  uVar2 = FUN_1415495a0();
  local_30 = 0;
  local_38 = 1;
  lVar3 = FUN_14048696c(param_1,local_20,uVar2,uVar2);
  if (lVar3 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar3);
  }
  bVar1 = DAT_14c950c29;
  param_1[0x72] = lVar3;
  if ((lVar3 != 0) && ((bVar1 & 1) != 0)) {
    FUN_1456cec3c(lVar3);
    lVar3 = param_1[0x72];
  }
  param_1[0x39] = lVar3;
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) | 2;
  FUN_1405bab3a(param_1,0);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146007fd2 FUN_146007fd2 body=237 status=ok
// SIG undefined FUN_146007fd2(void)

undefined8 * FUN_146007fd2(undefined8 *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140834366();
  *param_1 = &PTR_FUN_14a892dd0;
  param_1[0x72] = 0;
  FUN_1446f470e(&local_20,L"VolumetricCloudComponent",1);
  uVar2 = FUN_14586b90e();
  local_30 = 0;
  local_38 = 1;
  lVar3 = FUN_14048696c(param_1,local_20,uVar2,uVar2);
  if (lVar3 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar3);
  }
  bVar1 = DAT_14c950c29;
  param_1[0x72] = lVar3;
  if ((lVar3 != 0) && ((bVar1 & 1) != 0)) {
    FUN_1456cec3c(lVar3);
    lVar3 = param_1[0x72];
  }
  param_1[0x39] = lVar3;
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) | 2;
  FUN_1405bab3a(param_1,0);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460080cc FUN_1460080cc body=237 status=ok
// SIG undefined FUN_1460080cc(void)

undefined8 * FUN_1460080cc(undefined8 *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140312256();
  *param_1 = &PTR_FUN_14ab84b10;
  param_1[0x72] = 0;
  FUN_1446f470e(&local_20,L"GbxNavTest",1);
  uVar2 = FUN_145993342();
  local_30 = 0;
  local_38 = 1;
  lVar3 = FUN_14048696c(param_1,local_20,uVar2,uVar2);
  if (lVar3 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar3);
  }
  bVar1 = DAT_14c950c29;
  param_1[0x72] = lVar3;
  if ((lVar3 != 0) && ((bVar1 & 1) != 0)) {
    FUN_1456cec3c(lVar3);
    lVar3 = param_1[0x72];
  }
  param_1[0x39] = lVar3;
  *(byte *)((longlong)param_1 + 0x61) = *(byte *)((longlong)param_1 + 0x61) & 0xb7;
  *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) & 0xfc | 2;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460081ba FUN_1460081ba body=45 status=ok
// SIG undefined FUN_1460081ba(void)

void FUN_1460081ba(void)

{
  int iVar1;
  
  if ((DAT_14cc2d220 == '\0') && (DAT_14cc2d221 == '\0')) {
    iVar1 = FUN_1460081e8();
    if (iVar1 == 0) {
      DAT_14cc2d220 = '\x01';
    }
  }
  return;
}



// FUNCTION 1460081e8 FUN_1460081e8 body=805 status=ok
// SIG undefined FUN_1460081e8(void)

undefined8 FUN_1460081e8(void)

{
  char cVar1;
  byte bVar2;
  UINT UVar3;
  wchar_t ****ppppwVar4;
  size_t sVar5;
  HMODULE hModule;
  char *pcVar6;
  undefined8 uVar7;
  undefined1 auStack_288 [32];
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  ulonglong uStack_250;
  WCHAR local_248 [260];
  wchar_t ***local_40;
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_288;
  if (DAT_14cc2d200 != 0) {
    uVar7 = 0x1791;
    goto LAB_146008378;
  }
  if (DAT_14cc2d201 != '\0') {
    uVar7 = 0;
    goto LAB_146008378;
  }
  local_38 = 0;
  ppppwVar4 = (wchar_t ****)FUN_14001cc68(0x30,0x10);
  local_30 = 0x11;
  local_28 = 0x17;
  *ppppwVar4 = (wchar_t ***)0x680043007a0052;
  ppppwVar4[1] = (wchar_t ***)0x61006d006f0072;
  *(undefined4 *)(ppppwVar4 + 2) = 0x690074;
  ((wchar_t *)((longlong)ppppwVar4 + 0x14))[0] = L'c';
  ((wchar_t *)((longlong)ppppwVar4 + 0x14))[1] = L'6';
  *(undefined4 *)(ppppwVar4 + 3) = 0x2e0034;
  ((wchar_t *)((longlong)ppppwVar4 + 0x1c))[0] = L'd';
  ((wchar_t *)((longlong)ppppwVar4 + 0x1c))[1] = L'l';
  *(undefined4 *)(ppppwVar4 + 4) = 0x6c;
  local_40 = (wchar_t ***)ppppwVar4;
  UVar3 = GetSystemDirectoryW(local_248,0x104);
  if (UVar3 != 0) {
    FUN_1460085b2(&local_40,local_248);
    if (local_30 != 0) {
      ppppwVar4 = &local_40;
      if (7 < local_28) {
        ppppwVar4 = (wchar_t ****)local_40;
      }
      if (*(wchar_t *)((longlong)ppppwVar4 + (local_30 + -1) * 2) != L'\\') {
        FUN_14600854c(&local_40,&DAT_149e01f64,1);
      }
    }
    FUN_14600854c(&local_40,L"RzChromatic64.dll",0x11);
    ppppwVar4 = &local_40;
    if (7 < local_28) {
      ppppwVar4 = (wchar_t ****)local_40;
    }
  }
  local_258 = 0;
  uStack_250 = 0;
  local_268 = 0;
  uStack_260 = 0;
  sVar5 = wcslen((wchar_t *)ppppwVar4);
  FUN_145b284a4(&local_268,ppppwVar4,sVar5);
  cVar1 = FUN_146008730(&local_268);
  if (7 < uStack_250) {
    FUN_14600850e(&local_268,local_268);
  }
  uVar7 = 0x1787;
  if (cVar1 != '\0') {
    ppppwVar4 = (wchar_t ****)local_40;
    if (local_28 < 8) {
      ppppwVar4 = &local_40;
    }
    bVar2 = FUN_146008878(ppppwVar4);
    DAT_14cc2d200 = bVar2 ^ 1;
    if (bVar2 == 0) {
      __acrt_iob_func(2);
      uVar7 = 0x1791;
    }
    else {
      ppppwVar4 = (wchar_t ****)local_40;
      if (local_28 < 8) {
        ppppwVar4 = &local_40;
      }
      hModule = LoadLibraryW((LPCWSTR)ppppwVar4);
      if (hModule == (HMODULE)0x0) {
        __acrt_iob_func(2);
      }
      else {
        DAT_14cc2d1f8 = hModule;
        DAT_14cc2d208 = GetProcAddress(hModule,"PluginCoreInitSDK");
        if (DAT_14cc2d208 == (FARPROC)0x0) {
          uVar7 = FUN_141302cc4(cerr_exref,"Failed to find method: ");
          pcVar6 = "PluginCoreInitSDK";
        }
        else {
          DAT_14cc2d210 = GetProcAddress(hModule,"PluginCoreSetEventName");
          if (DAT_14cc2d210 == (FARPROC)0x0) {
            uVar7 = FUN_141302cc4(cerr_exref,"Failed to find method: ");
            pcVar6 = "PluginCoreSetEventName";
          }
          else {
            DAT_14cc2d218 = GetProcAddress(hModule,"PluginCoreUnInit");
            if (DAT_14cc2d218 != (FARPROC)0x0) {
              DAT_14cc2d201 = '\x01';
              uVar7 = 0;
              goto LAB_14600835a;
            }
            uVar7 = FUN_141302cc4(cerr_exref,"Failed to find method: ");
            pcVar6 = "PluginCoreUnInit";
          }
        }
        uVar7 = FUN_141302cc4(uVar7,pcVar6);
        FUN_14983789f(uVar7);
        uVar7 = 0xffffffff;
      }
    }
  }
LAB_14600835a:
  if (7 < local_28) {
    FUN_14600850e(&local_40,local_40);
  }
LAB_146008378:
  if ((local_20 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 14600850e FUN_14600850e body=60 status=ok
// SIG undefined FUN_14600850e(void)

void FUN_14600850e(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  
  lVar1 = param_2;
  if ((param_3 * 2 - 0xffeU < 0xfffffffffffff000) &&
     (lVar1 = *(longlong *)(param_2 + -8), 0x1f < (ulonglong)((param_2 + -8) - lVar1))) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  FUN_1400020a8(lVar1);
  return;
}



// FUNCTION 14600854c FUN_14600854c body=102 status=ok
// SIG undefined FUN_14600854c(void)

undefined8 * FUN_14600854c(undefined8 *param_1,void *param_2,ulonglong param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = param_1[2];
  if ((ulonglong)(param_1[3] - lVar1) < param_3) {
    param_1 = (undefined8 *)FUN_14600861a(param_1,param_3,param_3,param_2,param_3);
  }
  else {
    param_1[2] = lVar1 + param_3;
    puVar2 = param_1;
    if (7 < (ulonglong)param_1[3]) {
      puVar2 = (undefined8 *)*param_1;
    }
    memmove((void *)((longlong)puVar2 + lVar1 * 2),param_2,param_3 * 2);
    *(undefined2 *)((longlong)puVar2 + (lVar1 + param_3) * 2) = 0;
  }
  return param_1;
}



// FUNCTION 1460085b2 FUN_1460085b2 body=104 status=ok
// SIG undefined FUN_1460085b2(void)

undefined8 * FUN_1460085b2(undefined8 *param_1,wchar_t *param_2)

{
  size_t sVar1;
  undefined8 *_Dst;
  
  sVar1 = wcslen(param_2);
  if ((ulonglong)param_1[3] < sVar1) {
    FUN_149837b1a(param_1,sVar1,param_2);
  }
  else {
    _Dst = param_1;
    if (7 < (ulonglong)param_1[3]) {
      _Dst = (undefined8 *)*param_1;
    }
    param_1[2] = sVar1;
    memmove(_Dst,param_2,sVar1 * 2);
    *(undefined2 *)((longlong)_Dst + sVar1 * 2) = 0;
  }
  return param_1;
}



// FUNCTION 14600861a FUN_14600861a body=277 status=ok
// SIG undefined FUN_14600861a(void)

undefined8 *
FUN_14600861a(undefined8 *param_1,ulonglong param_2,undefined8 param_3,void *param_4,
             longlong param_5)

{
  void *pvVar1;
  longlong lVar2;
  ulonglong uVar3;
  void *_Src;
  ulonglong uVar4;
  void *_Dst;
  ulonglong uVar5;
  
  lVar2 = param_1[2];
  if (0x7ffffffffffffffeU - lVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_146eb22ad();
  }
  uVar3 = param_1[3];
  uVar4 = param_2 + lVar2 | 7;
  uVar5 = 0x7ffffffffffffffe;
  if (((uVar4 < 0x7fffffffffffffff) && (uVar3 <= 0x7ffffffffffffffe - (uVar3 >> 1))) &&
     (uVar5 = (uVar3 >> 1) + uVar3, uVar5 < uVar4)) {
    uVar5 = uVar4;
  }
  _Dst = (void *)FUN_145b28560(param_1,uVar5 + 1);
  param_1[2] = param_2 + lVar2;
  param_1[3] = uVar5;
  if (uVar3 < 8) {
    memcpy(_Dst,param_1,lVar2 * 2);
    pvVar1 = (void *)((longlong)_Dst + lVar2 * 2);
    memcpy(pvVar1,param_4,param_5 * 2);
    *(undefined2 *)((longlong)pvVar1 + param_5 * 2) = 0;
  }
  else {
    _Src = (void *)*param_1;
    memcpy(_Dst,_Src,lVar2 * 2);
    pvVar1 = (void *)((longlong)_Dst + lVar2 * 2);
    memcpy(pvVar1,param_4,param_5 * 2);
    *(undefined2 *)((longlong)pvVar1 + param_5 * 2) = 0;
    FUN_14600850e(param_1,_Src,uVar3);
  }
  *param_1 = _Dst;
  return param_1;
}



// FUNCTION 146008730 FUN_146008730 body=327 status=ok
// SIG undefined FUN_146008730(void)

bool FUN_146008730(LPCWSTR param_1)

{
  char cVar1;
  DWORD dwLen;
  BOOL BVar2;
  void *lpData;
  LPCWSTR pWVar3;
  bool bVar4;
  undefined1 auStack_68 [40];
  uint local_40;
  DWORD local_3c;
  int *local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  pWVar3 = param_1;
  if (7 < *(ulonglong *)(param_1 + 0xc)) {
    pWVar3 = *(LPCWSTR *)param_1;
  }
  FUN_140056680(local_38,pWVar3);
  cVar1 = FUN_1415258a0(local_38);
  if (local_38[0] != (int *)0x0) {
    FUN_1400020a8();
  }
  bVar4 = false;
  if (cVar1 != '\0') {
    local_3c = 0;
    local_40 = 0;
    local_38[0] = (int *)0x0;
    pWVar3 = param_1;
    if (7 < *(ulonglong *)(param_1 + 0xc)) {
      pWVar3 = *(LPCWSTR *)param_1;
    }
    dwLen = GetFileVersionInfoSizeW(pWVar3,&local_3c);
    if (dwLen != 0) {
      lpData = malloc((ulonglong)dwLen);
      if (lpData == (void *)0x0) {
        bVar4 = false;
      }
      else {
        local_3c = 0;
        if (7 < *(ulonglong *)(param_1 + 0xc)) {
          param_1 = *(LPCWSTR *)param_1;
        }
        bVar4 = false;
        BVar2 = GetFileVersionInfoW(param_1,0,dwLen,lpData);
        if (BVar2 != 0) {
          BVar2 = VerQueryValueW(lpData,L"\\",local_38,&local_40);
          bVar4 = false;
          if ((BVar2 != 0) && (local_40 != 0)) {
            if ((*local_38[0] == -0x110fb43) && (0x1ffff < (uint)local_38[0][2])) {
              bVar4 = 0x1ffff < (uint)local_38[0][3] || local_38[0][2] != 0x20000;
            }
            else {
              bVar4 = false;
            }
          }
        }
        free(lpData);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146008878 FUN_146008878 body=277 status=ok
// SIG undefined FUN_146008878(void)

undefined4 FUN_146008878(undefined8 param_1)

{
  LONG LVar1;
  undefined4 uVar2;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 *puStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  GUID local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puStack_70 = &local_48;
  local_48 = 0x20;
  local_38 = 0;
  uStack_30 = 0;
  local_28.Data1 = 0xaac56b;
  local_28.Data2 = 0xcd44;
  local_28.Data3 = 0x11d0;
  local_28.Data4[0] = 0x8c;
  local_28.Data4[1] = 0xc2;
  local_28.Data4[2] = '\0';
  local_28.Data4[3] = 0xc0;
  local_28.Data4[4] = 'O';
  local_28.Data4[5] = 0xc2;
  local_28.Data4[6] = 0x95;
  local_28.Data4[7] = 0xee;
  uStack_50 = 0;
  local_98 = 0x50;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 2;
  local_78 = 1;
  local_68 = 1;
  uStack_60 = 0;
  local_58 = 0;
  uVar2 = 0;
  local_40 = param_1;
  LVar1 = WinVerifyTrust((HWND)0x0,&local_28,&local_98);
  if (LVar1 == 0) {
    uVar2 = FUN_14600898e();
  }
  else {
    if (LVar1 < -0x7ff4ff00) {
      uVar2 = 0;
      if ((LVar1 == -0x7ff6dfda) || (LVar1 == -0x7ff4fffc)) goto LAB_14600891d;
    }
    else if ((LVar1 != -0x7ff4ff00) && (LVar1 == -0x7ff4feef)) goto LAB_14600891d;
    GetLastError();
    uVar2 = 0;
  }
LAB_14600891d:
  local_68 = CONCAT44(local_68._4_4_,2);
  WinVerifyTrust((HWND)0x0,&local_28,&local_98);
  if ((local_18 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 14600898e FUN_14600898e body=616 status=ok
// SIG undefined FUN_14600898e(void)

bool FUN_14600898e(void *param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  int iVar3;
  HLOCAL pvData;
  PCCERT_CONTEXT pCertContext;
  wchar_t *pszNameString;
  bool bVar4;
  undefined1 auStackY_178 [32];
  undefined1 local_120 [8];
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_f0;
  undefined8 uStack_e8;
  DWORD local_50 [4];
  HCRYPTMSG local_40;
  HCERTSTORE local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStackY_178;
  local_38 = (HCERTSTORE)0x0;
  local_40 = (HCRYPTMSG)0x0;
  local_50[3] = 0;
  local_50[2] = 0;
  local_50[1] = 0;
  BVar1 = CryptQueryObject(1,param_1,0x400,2,0,local_50 + 3,local_50 + 2,local_50 + 1,&local_38,
                           &local_40,(void **)0x0);
  if (BVar1 == 1) {
    local_50[0] = 0;
    BVar1 = CryptMsgGetParam(local_40,6,0,(void *)0x0,local_50);
    if (BVar1 != 1) goto LAB_146008be2;
    pvData = LocalAlloc(0x40,(ulonglong)local_50[0]);
    BVar1 = CryptMsgGetParam(local_40,6,0,pvData,local_50);
    if (BVar1 == 1) {
      bVar4 = false;
      memset(local_120,0,0xd0);
      local_f0 = *(undefined8 *)((longlong)pvData + 8);
      uStack_e8 = *(undefined8 *)((longlong)pvData + 0x10);
      local_118 = *(undefined4 *)((longlong)pvData + 0x18);
      uStack_114 = *(undefined4 *)((longlong)pvData + 0x1c);
      uStack_110 = *(undefined4 *)((longlong)pvData + 0x20);
      uStack_10c = *(undefined4 *)((longlong)pvData + 0x24);
      pCertContext = CertFindCertificateInStore
                               (local_38,0x10001,0,0xb0000,local_120,(PCCERT_CONTEXT)0x0);
      if (pCertContext == (PCCERT_CONTEXT)0x0) {
        pszNameString = (wchar_t *)0x0;
      }
      else {
        pszNameString = (wchar_t *)0x0;
        DVar2 = CertGetNameStringW(pCertContext,4,0,(void *)0x0,(LPWSTR)0x0,0);
        if (DVar2 < 2) {
          bVar4 = false;
        }
        else {
          pszNameString = LocalAlloc(0x40,(ulonglong)DVar2 * 2);
          bVar4 = false;
          DVar2 = CertGetNameStringW(pCertContext,4,0,(void *)0x0,pszNameString,DVar2);
          if (1 < DVar2) {
            iVar3 = _wcsicmp(pszNameString,L"Razer USA Ltd.");
            bVar4 = iVar3 == 0;
          }
        }
      }
      goto LAB_146008b7d;
    }
  }
  else {
LAB_146008be2:
    pvData = (HLOCAL)0x0;
  }
  pszNameString = (wchar_t *)0x0;
  bVar4 = false;
  pCertContext = (PCCERT_CONTEXT)0x0;
LAB_146008b7d:
  LocalFree(pszNameString);
  LocalFree(pvData);
  CertFreeCertificateContext(pCertContext);
  CertCloseStore(local_38,0);
  CryptMsgClose(local_40);
  if ((local_30 ^ (ulonglong)auStackY_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar4;
}



// FUNCTION 146008bf8 FUN_146008bf8 body=267 status=ok
// SIG undefined FUN_146008bf8(void)

void FUN_146008bf8(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar6 = (**(code **)(*(longlong *)*param_2 + 0x40))();
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    uVar9 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
    iVar6 = *(int *)((longlong)plVar8 + uVar9 * 4);
    if (iVar6 != -1) {
      puVar10 = (undefined4 *)((longlong)plVar8 + uVar9 * 4);
      do {
        lVar3 = *param_1;
        lVar7 = (longlong)iVar6;
        puVar4 = *(undefined8 **)(lVar3 + lVar7 * 0x28);
        plVar8 = *(longlong **)(lVar3 + 8 + lVar7 * 0x28);
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
        }
        if (puVar4 == (undefined8 *)*param_2) {
          cVar5 = '\x01';
        }
        else {
          cVar5 = (**(code **)*puVar4)();
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
        if (cVar5 != '\0') {
          FUN_146008d04(param_1,*puVar10);
          break;
        }
        lVar3 = lVar3 + lVar7 * 0x28;
        iVar6 = *(int *)(lVar3 + 0x20);
        puVar10 = (undefined4 *)(lVar3 + 0x20);
      } while (iVar6 != -1);
    }
  }
  plVar8 = (longlong *)param_2[1];
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
                    /* WARNING: Could not recover jumptable at 0x000146008cff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar8 + 0x10))(plVar8);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146008d04 FUN_146008d04 body=116 status=ok
// SIG undefined FUN_146008d04(void)

void FUN_146008d04(longlong *param_1,int param_2)

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
  lVar1 = *param_1 + (longlong)param_2 * 0x28;
  lVar5 = (longlong)*(int *)(lVar1 + 0x24);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x28 + 0x20);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0x20);
  FUN_145cf071c((longlong)param_2 * 0x28 + *param_1);
  FUN_146008d78(param_1,param_2);
  return;
}



// FUNCTION 146008d78 FUN_146008d78 body=116 status=ok
// SIG undefined FUN_146008d78(void)

void FUN_146008d78(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
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



// FUNCTION 146008df6 FUN_146008df6 body=551 status=ok
// SIG undefined FUN_146008df6(void)

undefined8 FUN_146008df6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  float unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [4];
  undefined8 local_a4;
  undefined4 local_9c;
  longlong local_98;
  longlong *local_90;
  ulonglong local_88;
  undefined4 local_80;
  longlong local_78 [5];
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_1 != 0) {
    FUN_1404d1e78(&local_98,param_1);
    bVar9 = true;
    if (((local_98 != 0) && (local_90 != (longlong *)0x0)) && (0 < (int)local_90[1])) {
      iVar5 = (int)local_90[1];
      do {
        if (iVar5 == 0) {
          plVar7 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar3 = (int)local_90[1];
        bVar9 = iVar5 == iVar3;
        if (bVar9) {
          *(int *)(local_90 + 1) = iVar5 + 1;
          iVar3 = iVar5;
        }
        iVar5 = iVar3;
        UNLOCK();
        plVar7 = local_90;
      } while (!bVar9);
      lVar8 = 0;
      if (plVar7 != (longlong *)0x0) {
        lVar8 = local_98;
      }
      local_a8[0] = 0;
      local_a4 = 0;
      local_9c = 0;
      FUN_144928b90(local_78,2);
      local_88 = DAT_14cb8cbb8;
      local_80 = DAT_14cb8cbc0;
      FUN_1411efe9e(local_78);
      lVar6 = FUN_140149a73(param_1,0);
      if (lVar6 != 0) {
        FUN_14039fc7b(local_78,local_a8,lVar6,0);
      }
      if (local_50 != 0) {
        FUN_1400020a8();
      }
      FUN_1403a0728(local_a8,local_78);
      if (local_78[0] == 0) {
LAB_146008f14:
        if (*(char *)(lVar8 + 0x1f0) == '\x01') {
          unaff_XMM6_Da = *(float *)(lVar8 + 500);
          goto LAB_146008f46;
        }
        lVar6 = FUN_14479d2ce(lVar8 + 0x238);
        if (lVar6 != 0) {
          unaff_XMM6_Da = *(float *)(lVar6 + 0x400) / *(float *)(lVar8 + 0x1f8);
          goto LAB_146008f46;
        }
        bVar9 = true;
      }
      else {
        local_88 = local_88 & 0xffffffff00000000;
        cVar4 = FUN_14600901e(lVar8);
        if (cVar4 == '\0') goto LAB_146008f14;
        unaff_XMM6_Da = (float)local_88;
LAB_146008f46:
        unaff_XMM6_Db = 0;
        bVar9 = false;
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
    if (local_90 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)local_90 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_90 + 0x10))();
      }
    }
    if (!bVar9) goto LAB_146008f70;
  }
  unaff_XMM6_Da = 0.0;
  unaff_XMM6_Db = 0;
LAB_146008f70:
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
}



// FUNCTION 14600901e FUN_14600901e body=62 status=ok
// SIG undefined FUN_14600901e(void)

undefined8 FUN_14600901e(longlong param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x428) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x420);
    lVar2 = 0;
    do {
      if (*(longlong *)(lVar1 + lVar2) == param_2) {
        *param_3 = *(undefined4 *)(lVar1 + 8 + lVar2);
        return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
      }
      lVar2 = lVar2 + 0xc;
    } while ((longlong)*(int *)(param_1 + 0x428) * 0xc != lVar2);
  }
  return 0;
}



// FUNCTION 14600905c FUN_14600905c body=210 status=ok
// SIG undefined FUN_14600905c(void)

void FUN_14600905c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a174488;
  FUN_1459afa96(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_140e41ceb(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
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
  plVar3 = (longlong *)param_1[5];
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
  FUN_14600912e(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14600912e FUN_14600912e body=40 status=ok
// SIG undefined FUN_14600912e(void)

void FUN_14600912e(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_147099c2a(param_1);
    param_1 = param_1 + 0x30;
  }
  return;
}



// FUNCTION 146009162 FUN_146009162 body=238 status=ok
// SIG undefined FUN_146009162(void)

undefined8 * FUN_146009162(undefined8 *param_1)

{
  undefined2 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1412292fa();
  *param_1 = &PTR_FUN_14a4d0820;
  param_1[8] = &PTR_FUN_14a4d0b00;
  lVar2 = FUN_14038fb82();
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(lVar2 + 0x18);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(lVar2 + 0x20);
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) {
    local_20 = param_1[2];
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_28 = FUN_145920a42();
    if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_28);
    }
    FUN_140909372(&local_28,&local_20);
    lVar2 = FUN_14038fb82();
    uVar1 = *(undefined2 *)(lVar2 + 0x18);
    local_30 = param_1[2];
    if ((local_30 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    FUN_14118c742(&local_30,uVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146009268 FUN_146009268 body=238 status=ok
// SIG undefined FUN_146009268(void)

undefined8 * FUN_146009268(undefined8 *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140312256();
  *param_1 = &PTR_FUN_14afa8400;
  param_1[0x72] = 0;
  FUN_1446f470e(&local_20,L"SourceComponent0",1);
  uVar2 = FUN_140d013a8();
  local_30 = 0;
  local_38 = 1;
  lVar3 = FUN_14048696c(param_1,local_20,uVar2,uVar2);
  if (lVar3 != 0 && DAT_14c950c29 == 1) {
    FUN_14689c22e(lVar3);
  }
  bVar1 = DAT_14c950c29;
  param_1[0x72] = lVar3;
  *(undefined1 *)(lVar3 + 0x1fb) = 2;
  lVar3 = param_1[0x72];
  if ((bVar1 & 1) != 0) {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_14689c22e();
      lVar3 = param_1[0x72];
    }
  }
  param_1[0x39] = lVar3;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146009358 FUN_146009358 body=158 status=ok
// SIG undefined FUN_146009358(void)

bool FUN_146009358(longlong param_1,undefined8 param_2)

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



// FUNCTION 1460093f8 FUN_1460093f8 body=102 status=ok
// SIG undefined FUN_1460093f8(void)

void FUN_1460093f8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar1 = FUN_1400d7050(param_1 + 0x30);
    if (lVar1 != 0) {
      lVar2 = FUN_144a5dd5e();
      if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) &&
         (*(int *)(lVar1 + 0xd98) == *(int *)(param_2 + 0x20))) {
        FUN_14600945e(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14600945e FUN_14600945e body=114 status=ok
// SIG undefined FUN_14600945e(void)

void FUN_14600945e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  *(undefined1 *)(param_1 + 0x80) = 0;
  lVar1 = FUN_1400d7050(param_1 + 0x30);
  if (lVar1 != 0) {
    lVar2 = FUN_144a5dd5e();
    if ((((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) && (*(int *)(lVar1 + 0xd98) != 0)) &&
       (*(longlong *)(lVar1 + 0xda0) != 0)) {
      FUN_140c125e6(lVar1 + 0xd98,&DAT_14cbd9618);
      return;
    }
  }
  return;
}



// FUNCTION 1460094d0 FUN_1460094d0 body=287 status=ok
// SIG undefined FUN_1460094d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460094d0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b0790) {
    FUN_144b3d300(&DAT_14c9b0790);
    if (DAT_14c9b0790 == -1) {
      FUN_1460095f0();
      FUN_140db5666(&DAT_14c9b06e8,2,&DAT_14c9b0680,
                    L"TBasePassVSFPrecomputedVolumetricLightmapLightingPolicy",
                    L"/Engine/Private/BasePassVertexShader.usf",L"Main",0,1,FUN_14712d6b2,
                    FUN_14712d68a,FUN_14174ff14,&LAB_14712d686,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9b06e8 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c5c8);
      _Init_thread_footer(&DAT_14c9b0790);
    }
  }
  return &DAT_14c9b06e8;
}



// FUNCTION 1460095f0 FUN_1460095f0 body=205 status=ok
// SIG undefined FUN_1460095f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460095f0(void)

{
  if ((DAT_14c9b06e7 & 2) == 0) {
    DAT_14c9b06e7 = DAT_14c9b06e7 | 2;
    _DAT_14c9b0688 = L"TBasePassVSFPrecomputedVolumetricLightmapLightingPolicy";
    _DAT_14c9b06a0 = FUN_146826540;
    _DAT_14c9b06a8 = FUN_146825d77;
    _DAT_14c9b06b0 = FUN_146825fd6;
    _DAT_14c9b06b8 = FUN_1407e02ea;
    _DAT_14c9b06c0 = FUN_146826273;
    _DAT_14c9b0698 = FUN_14712d64c;
    _DAT_14c9b06d8 = 0xffffffff00000110;
    _DAT_14c9b06e0 = 8;
    DAT_14c9b06e4 = 0;
    _DAT_14c9b06c8 = &LAB_14712d682;
    FUN_1460096be();
    FUN_1407e00cc(&DAT_14c9b0680);
    return;
  }
  return;
}



// FUNCTION 1460096be FUN_1460096be body=133 status=ok
// SIG undefined FUN_1460096be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460096be(void)

{
  _DAT_14c9bbc30 = L"BASE";
  DAT_14c9bbc5a = 4;
  FUN_146009744();
  _DAT_14c9bbc40 = DAT_14c9b0690;
  _DAT_14c9bbc38 = &DAT_14c9bbc60;
  _DAT_14c9bbc48 = &LAB_14682652b;
  DAT_14c9b0690 = &DAT_14c9bbc30;
  DAT_14c9b06e5 = DAT_14c9b06e5 + '\x01';
  _DAT_14c9bbc50 = 0x100000000;
  if (DAT_14c9bbcc4 != '\0') {
    DAT_14c9b06e6 = DAT_14c9b06e6 + '\x01';
  }
  return;
}



// FUNCTION 146009744 FUN_146009744 body=205 status=ok
// SIG undefined FUN_146009744(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146009744(void)

{
  if ((DAT_14c9bbcc7 & 2) == 0) {
    DAT_14c9bbcc7 = DAT_14c9bbcc7 | 2;
    _DAT_14c9bbc68 = L"TBasePassVertexShaderBaseType";
    _DAT_14c9bbc80 = FUN_146826540;
    _DAT_14c9bbc88 = FUN_146825d77;
    _DAT_14c9bbc90 = FUN_146825fd6;
    _DAT_14c9bbc98 = FUN_1407e02ea;
    _DAT_14c9bbca0 = FUN_146826273;
    _DAT_14c9bbc78 = FUN_14713d042;
    _DAT_14c9bbcb8 = 0xffffffff00000110;
    _DAT_14c9bbcc0 = 8;
    DAT_14c9bbcc4 = 0;
    _DAT_14c9bbca8 = &LAB_14713d078;
    FUN_146009812();
    FUN_1407e00cc(&DAT_14c9bbc60);
    return;
  }
  return;
}



// FUNCTION 146009812 FUN_146009812 body=133 status=ok
// SIG undefined FUN_146009812(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146009812(void)

{
  _DAT_14c9bbcc8 = L"BASE";
  DAT_14c9bbcf2 = 4;
  FUN_146009898();
  _DAT_14c9bbcd8 = DAT_14c9bbc70;
  _DAT_14c9bbcd0 = &DAT_14c9bbcf8;
  _DAT_14c9bbce0 = &LAB_14682652b;
  DAT_14c9bbc70 = &DAT_14c9bbcc8;
  DAT_14c9bbcc5 = DAT_14c9bbcc5 + '\x01';
  _DAT_14c9bbce8 = 0x100000000;
  if (DAT_14c9bbd5c != '\0') {
    DAT_14c9bbcc6 = DAT_14c9bbcc6 + '\x01';
  }
  return;
}



// FUNCTION 146009898 FUN_146009898 body=313 status=ok
// SIG undefined FUN_146009898(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146009898(void)

{
  if ((DAT_14c9bbd5f & 2) == 0) {
    DAT_14c9bbd5f = DAT_14c9bbd5f | 2;
    _DAT_14c9bbd00 = L"TBasePassVertexShaderPolicyParamType";
    _DAT_14c9bbd18 = FUN_146826540;
    _DAT_14c9bbd20 = FUN_146825d77;
    _DAT_14c9bbd28 = FUN_146825fd6;
    _DAT_14c9bbd30 = FUN_1407e02ea;
    _DAT_14c9bbd38 = FUN_146826273;
    _DAT_14c9bbd10 = FUN_14713d07c;
    _DAT_14c9bbd50 = 0xffffffff00000110;
    _DAT_14c9bbd58 = 8;
    DAT_14c9bbd5c = 0;
    _DAT_14c9bbd40 = &LAB_14713d0b2;
    _DAT_14c9bbd60 = L"ReflectionCaptureBuffer";
    DAT_14c9bbd8a = FUN_140850cc5();
    _DAT_14c9bbd68 = FUN_14106a12a();
    _DAT_14c9bbd78 = &LAB_14682652b;
    _DAT_14c9bbd80 = 0x10000010e;
    _DAT_14c9bbd88 = 0;
    _DAT_14c9bbd70 = DAT_14c9bbd08;
    DAT_14c9bbd08 = &DAT_14c9bbd60;
    FUN_1460099d2();
    FUN_1407e00cc(&DAT_14c9bbcf8);
    return;
  }
  return;
}



// FUNCTION 1460099d2 FUN_1460099d2 body=225 status=ok
// SIG undefined FUN_1460099d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460099d2(void)

{
  _DAT_14c9bbd90 = L"BASE";
  DAT_14c9bbdba = 4;
  _DAT_14c9bbd98 = FUN_1411cad6c();
  _DAT_14c9bbda0 = DAT_14c9bbd08;
  _DAT_14c9bbda8 = &LAB_14682652b;
  DAT_14c9bbd08 = &DAT_14c9bbd90;
  DAT_14c9bbd5d = DAT_14c9bbd5d + '\x01';
  _DAT_14c9bbdb0 = &DAT_100000108;
  if (*(char *)(_DAT_14c9bbd98 + 100) != '\0') {
    DAT_14c9bbd5e = DAT_14c9bbd5e + '\x01';
  }
  _DAT_14c9bbdc0 = L"BASE";
  DAT_14c9bbdea = 4;
  _DAT_14c9bbdc8 = FUN_141092e92();
  _DAT_14c9bbdd0 = DAT_14c9bbd08;
  _DAT_14c9bbdd8 = &LAB_14682652b;
  DAT_14c9bbd08 = &DAT_14c9bbdc0;
  DAT_14c9bbd5d = DAT_14c9bbd5d + '\x01';
  _DAT_14c9bbde0 = 0x100000000;
  if (*(char *)(_DAT_14c9bbdc8 + 100) != '\0') {
    DAT_14c9bbd5e = DAT_14c9bbd5e + '\x01';
  }
  return;
}



// FUNCTION 146009ab4 FUN_146009ab4 body=287 status=ok
// SIG undefined FUN_146009ab4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146009ab4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b1698) {
    FUN_144b3d300(&DAT_14c9b1698);
    if (DAT_14c9b1698 == -1) {
      FUN_146009bd4();
      FUN_140db5666(&DAT_14c9b15f0,2,&DAT_14c9b1588,
                    L"TBasePassVSFCachedVolumeIndirectLightingPolicy",
                    L"/Engine/Private/BasePassVertexShader.usf",L"Main",0,1,FUN_14712dfe8,
                    FUN_14712dfc0,FUN_1417525b6,&LAB_14712dfbc,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9b15f0 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c664);
      _Init_thread_footer(&DAT_14c9b1698);
    }
  }
  return &DAT_14c9b15f0;
}



// FUNCTION 146009bd4 FUN_146009bd4 body=205 status=ok
// SIG undefined FUN_146009bd4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146009bd4(void)

{
  if ((DAT_14c9b15ef & 2) == 0) {
    DAT_14c9b15ef = DAT_14c9b15ef | 2;
    _DAT_14c9b1590 = L"TBasePassVSFCachedVolumeIndirectLightingPolicy";
    _DAT_14c9b15a8 = FUN_146826540;
    _DAT_14c9b15b0 = FUN_146825d77;
    _DAT_14c9b15b8 = FUN_146825fd6;
    _DAT_14c9b15c0 = FUN_1407e02ea;
    _DAT_14c9b15c8 = FUN_146826273;
    _DAT_14c9b15a0 = FUN_14712df82;
    _DAT_14c9b15e0 = 0xffffffff00000110;
    _DAT_14c9b15e8 = 8;
    DAT_14c9b15ec = 0;
    _DAT_14c9b15d0 = &LAB_14712dfb8;
    FUN_146009ca2();
    FUN_1407e00cc(&DAT_14c9b1588);
    return;
  }
  return;
}



// FUNCTION 146009ca2 FUN_146009ca2 body=133 status=ok
// SIG undefined FUN_146009ca2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146009ca2(void)

{
  _DAT_14c9bc720 = L"BASE";
  DAT_14c9bc74a = 4;
  FUN_146009d28();
  _DAT_14c9bc730 = DAT_14c9b1598;
  _DAT_14c9bc728 = &DAT_14c9bc750;
  _DAT_14c9bc738 = &LAB_14682652b;
  DAT_14c9b1598 = &DAT_14c9bc720;
  DAT_14c9b15ed = DAT_14c9b15ed + '\x01';
  _DAT_14c9bc740 = 0x100000000;
  if (DAT_14c9bc7b4 != '\0') {
    DAT_14c9b15ee = DAT_14c9b15ee + '\x01';
  }
  return;
}



// FUNCTION 146009d28 FUN_146009d28 body=205 status=ok
// SIG undefined FUN_146009d28(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146009d28(void)

{
  if ((DAT_14c9bc7b7 & 2) == 0) {
    DAT_14c9bc7b7 = DAT_14c9bc7b7 | 2;
    _DAT_14c9bc758 = L"TBasePassVertexShaderBaseType";
    _DAT_14c9bc770 = FUN_146826540;
    _DAT_14c9bc778 = FUN_146825d77;
    _DAT_14c9bc780 = FUN_146825fd6;
    _DAT_14c9bc788 = FUN_1407e02ea;
    _DAT_14c9bc790 = FUN_146826273;
    _DAT_14c9bc768 = FUN_14713d53c;
    _DAT_14c9bc7a8 = 0xffffffff00000110;
    _DAT_14c9bc7b0 = 8;
    DAT_14c9bc7b4 = 0;
    _DAT_14c9bc798 = &LAB_14713d572;
    FUN_146009df6();
    FUN_1407e00cc(&DAT_14c9bc750);
    return;
  }
  return;
}



// FUNCTION 146009df6 FUN_146009df6 body=133 status=ok
// SIG undefined FUN_146009df6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146009df6(void)

{
  _DAT_14c9bc7b8 = L"BASE";
  DAT_14c9bc7e2 = 4;
  FUN_146009e7c();
  _DAT_14c9bc7c8 = DAT_14c9bc760;
  _DAT_14c9bc7c0 = &DAT_14c9bc7e8;
  _DAT_14c9bc7d0 = &LAB_14682652b;
  DAT_14c9bc760 = &DAT_14c9bc7b8;
  DAT_14c9bc7b5 = DAT_14c9bc7b5 + '\x01';
  _DAT_14c9bc7d8 = 0x100000000;
  if (DAT_14c9bc84c != '\0') {
    DAT_14c9bc7b6 = DAT_14c9bc7b6 + '\x01';
  }
  return;
}



// FUNCTION 146009e7c FUN_146009e7c body=313 status=ok
// SIG undefined FUN_146009e7c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146009e7c(void)

{
  if ((DAT_14c9bc84f & 2) == 0) {
    DAT_14c9bc84f = DAT_14c9bc84f | 2;
    _DAT_14c9bc7f0 = L"TBasePassVertexShaderPolicyParamType";
    _DAT_14c9bc808 = FUN_146826540;
    _DAT_14c9bc810 = FUN_146825d77;
    _DAT_14c9bc818 = FUN_146825fd6;
    _DAT_14c9bc820 = FUN_1407e02ea;
    _DAT_14c9bc828 = FUN_146826273;
    _DAT_14c9bc800 = FUN_14713d576;
    _DAT_14c9bc840 = 0xffffffff00000110;
    _DAT_14c9bc848 = 8;
    DAT_14c9bc84c = 0;
    _DAT_14c9bc830 = &LAB_14713d5ac;
    _DAT_14c9bc850 = L"ReflectionCaptureBuffer";
    DAT_14c9bc87a = FUN_140850cc5();
    _DAT_14c9bc858 = FUN_14106a12a();
    _DAT_14c9bc868 = &LAB_14682652b;
    _DAT_14c9bc870 = 0x10000010e;
    _DAT_14c9bc878 = 0;
    _DAT_14c9bc860 = DAT_14c9bc7f8;
    DAT_14c9bc7f8 = &DAT_14c9bc850;
    FUN_146009fb6();
    FUN_1407e00cc(&DAT_14c9bc7e8);
    return;
  }
  return;
}



// FUNCTION 146009fb6 FUN_146009fb6 body=225 status=ok
// SIG undefined FUN_146009fb6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146009fb6(void)

{
  _DAT_14c9bc880 = L"BASE";
  DAT_14c9bc8aa = 4;
  _DAT_14c9bc888 = FUN_1411cad6c();
  _DAT_14c9bc890 = DAT_14c9bc7f8;
  _DAT_14c9bc898 = &LAB_14682652b;
  DAT_14c9bc7f8 = &DAT_14c9bc880;
  DAT_14c9bc84d = DAT_14c9bc84d + '\x01';
  _DAT_14c9bc8a0 = &DAT_100000108;
  if (*(char *)(_DAT_14c9bc888 + 100) != '\0') {
    DAT_14c9bc84e = DAT_14c9bc84e + '\x01';
  }
  _DAT_14c9bc8b0 = L"BASE";
  DAT_14c9bc8da = 4;
  _DAT_14c9bc8b8 = FUN_141092e92();
  _DAT_14c9bc8c0 = DAT_14c9bc7f8;
  _DAT_14c9bc8c8 = &LAB_14682652b;
  DAT_14c9bc7f8 = &DAT_14c9bc8b0;
  DAT_14c9bc84d = DAT_14c9bc84d + '\x01';
  _DAT_14c9bc8d0 = 0x100000000;
  if (*(char *)(_DAT_14c9bc8b8 + 100) != '\0') {
    DAT_14c9bc84e = DAT_14c9bc84e + '\x01';
  }
  return;
}



// FUNCTION 14600a098 FUN_14600a098 body=287 status=ok
// SIG undefined FUN_14600a098(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14600a098(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b25a0) {
    FUN_144b3d300(&DAT_14c9b25a0);
    if (DAT_14c9b25a0 == -1) {
      FUN_14600a1b8();
      FUN_140db5666(&DAT_14c9b24f8,2,&DAT_14c9b2490,L"TBasePassVSFCachedPointIndirectLightingPolicy"
                    ,L"/Engine/Private/BasePassVertexShader.usf",L"Main",0,1,FUN_14712e91e,
                    FUN_14712e8f6,FUN_141754c58,&LAB_14712e8f2,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9b24f8 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c700);
      _Init_thread_footer(&DAT_14c9b25a0);
    }
  }
  return &DAT_14c9b24f8;
}



// FUNCTION 14600a1b8 FUN_14600a1b8 body=205 status=ok
// SIG undefined FUN_14600a1b8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14600a1b8(void)

{
  if ((DAT_14c9b24f7 & 2) == 0) {
    DAT_14c9b24f7 = DAT_14c9b24f7 | 2;
    _DAT_14c9b2498 = L"TBasePassVSFCachedPointIndirectLightingPolicy";
    _DAT_14c9b24b0 = FUN_146826540;
    _DAT_14c9b24b8 = FUN_146825d77;
    _DAT_14c9b24c0 = FUN_146825fd6;
    _DAT_14c9b24c8 = FUN_1407e02ea;
    _DAT_14c9b24d0 = FUN_146826273;
    _DAT_14c9b24a8 = FUN_14712e8b8;
    _DAT_14c9b24e8 = 0xffffffff00000110;
    _DAT_14c9b24f0 = 8;
    DAT_14c9b24f4 = 0;
    _DAT_14c9b24d8 = &LAB_14712e8ee;
    FUN_14600a286();
    FUN_1407e00cc(&DAT_14c9b2490);
    return;
  }
  return;
}



// FUNCTION 14600a286 FUN_14600a286 body=133 status=ok
// SIG undefined FUN_14600a286(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14600a286(void)

{
  _DAT_14c9bd210 = L"BASE";
  DAT_14c9bd23a = 4;
  FUN_14600a30c();
  _DAT_14c9bd220 = DAT_14c9b24a0;
  _DAT_14c9bd218 = &DAT_14c9bd240;
  _DAT_14c9bd228 = &LAB_14682652b;
  DAT_14c9b24a0 = &DAT_14c9bd210;
  DAT_14c9b24f5 = DAT_14c9b24f5 + '\x01';
  _DAT_14c9bd230 = 0x100000000;
  if (DAT_14c9bd2a4 != '\0') {
    DAT_14c9b24f6 = DAT_14c9b24f6 + '\x01';
  }
  return;
}



// FUNCTION 14600a30c FUN_14600a30c body=205 status=ok
// SIG undefined FUN_14600a30c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14600a30c(void)

{
  if ((DAT_14c9bd2a7 & 2) == 0) {
    DAT_14c9bd2a7 = DAT_14c9bd2a7 | 2;
    _DAT_14c9bd248 = L"TBasePassVertexShaderBaseType";
    _DAT_14c9bd260 = FUN_146826540;
    _DAT_14c9bd268 = FUN_146825d77;
    _DAT_14c9bd270 = FUN_146825fd6;
    _DAT_14c9bd278 = FUN_1407e02ea;
    _DAT_14c9bd280 = FUN_146826273;
    _DAT_14c9bd258 = FUN_14713da36;
    _DAT_14c9bd298 = 0xffffffff00000110;
    _DAT_14c9bd2a0 = 8;
    DAT_14c9bd2a4 = 0;
    _DAT_14c9bd288 = &LAB_14713da6c;
    FUN_14600a3da();
    FUN_1407e00cc(&DAT_14c9bd240);
    return;
  }
  return;
}



// FUNCTION 14600a3da FUN_14600a3da body=133 status=ok
// SIG undefined FUN_14600a3da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14600a3da(void)

{
  _DAT_14c9bd2a8 = L"BASE";
  DAT_14c9bd2d2 = 4;
  FUN_14600a460();
  _DAT_14c9bd2b8 = DAT_14c9bd250;
  _DAT_14c9bd2b0 = &DAT_14c9bd2d8;
  _DAT_14c9bd2c0 = &LAB_14682652b;
  DAT_14c9bd250 = &DAT_14c9bd2a8;
  DAT_14c9bd2a5 = DAT_14c9bd2a5 + '\x01';
  _DAT_14c9bd2c8 = 0x100000000;
  if (DAT_14c9bd33c != '\0') {
    DAT_14c9bd2a6 = DAT_14c9bd2a6 + '\x01';
  }
  return;
}



// FUNCTION 14600a460 FUN_14600a460 body=313 status=ok
// SIG undefined FUN_14600a460(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14600a460(void)

{
  if ((DAT_14c9bd33f & 2) == 0) {
    DAT_14c9bd33f = DAT_14c9bd33f | 2;
    _DAT_14c9bd2e0 = L"TBasePassVertexShaderPolicyParamType";
    _DAT_14c9bd2f8 = FUN_146826540;
    _DAT_14c9bd300 = FUN_146825d77;
    _DAT_14c9bd308 = FUN_146825fd6;
    _DAT_14c9bd310 = FUN_1407e02ea;
    _DAT_14c9bd318 = FUN_146826273;
    _DAT_14c9bd2f0 = FUN_14713da70;
    _DAT_14c9bd330 = 0xffffffff00000110;
    _DAT_14c9bd338 = 8;
    DAT_14c9bd33c = 0;
    _DAT_14c9bd320 = &LAB_14713daa6;
    _DAT_14c9bd340 = L"ReflectionCaptureBuffer";
    DAT_14c9bd36a = FUN_140850cc5();
    _DAT_14c9bd348 = FUN_14106a12a();
    _DAT_14c9bd358 = &LAB_14682652b;
    _DAT_14c9bd360 = 0x10000010e;
    _DAT_14c9bd368 = 0;
    _DAT_14c9bd350 = DAT_14c9bd2e8;
    DAT_14c9bd2e8 = &DAT_14c9bd340;
    FUN_14600a59a();
    FUN_1407e00cc(&DAT_14c9bd2d8);
    return;
  }
  return;
}



// FUNCTION 14600a59a FUN_14600a59a body=225 status=ok
// SIG undefined FUN_14600a59a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14600a59a(void)

{
  _DAT_14c9bd370 = L"BASE";
  DAT_14c9bd39a = 4;
  _DAT_14c9bd378 = FUN_1411cad6c();
  _DAT_14c9bd380 = DAT_14c9bd2e8;
  _DAT_14c9bd388 = &LAB_14682652b;
  DAT_14c9bd2e8 = &DAT_14c9bd370;
  DAT_14c9bd33d = DAT_14c9bd33d + '\x01';
  _DAT_14c9bd390 = &DAT_100000108;
  if (*(char *)(_DAT_14c9bd378 + 100) != '\0') {
    DAT_14c9bd33e = DAT_14c9bd33e + '\x01';
  }
  _DAT_14c9bd3a0 = L"BASE";
  DAT_14c9bd3ca = 4;
  _DAT_14c9bd3a8 = FUN_141092e92();
  _DAT_14c9bd3b0 = DAT_14c9bd2e8;
  _DAT_14c9bd3b8 = &LAB_14682652b;
  DAT_14c9bd2e8 = &DAT_14c9bd3a0;
  DAT_14c9bd33d = DAT_14c9bd33d + '\x01';
  _DAT_14c9bd3c0 = 0x100000000;
  if (*(char *)(_DAT_14c9bd3a8 + 100) != '\0') {
    DAT_14c9bd33e = DAT_14c9bd33e + '\x01';
  }
  return;
}



// FUNCTION 14600a67c FUN_14600a67c body=287 status=ok
// SIG undefined FUN_14600a67c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14600a67c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b34a8) {
    FUN_144b3d300(&DAT_14c9b34a8);
    if (DAT_14c9b34a8 == -1) {
      FUN_14600a79c();
      FUN_140db5666(&DAT_14c9b3400,2,&DAT_14c9b3398,L"TBasePassVSTLightMapPolicyLQ",
                    L"/Engine/Private/BasePassVertexShader.usf",L"Main",0,1,FUN_14712f254,
                    FUN_14712f22c,FUN_1417572fa,&LAB_14712f228,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9b3400 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c79c);
      _Init_thread_footer(&DAT_14c9b34a8);
    }
  }
  return &DAT_14c9b3400;
}



// FUNCTION 14600a79c FUN_14600a79c body=205 status=ok
// SIG undefined FUN_14600a79c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14600a79c(void)

{
  if ((DAT_14c9b33ff & 2) == 0) {
    DAT_14c9b33ff = DAT_14c9b33ff | 2;
    _DAT_14c9b33a0 = L"TBasePassVSTLightMapPolicyLQ";
    _DAT_14c9b33b8 = FUN_146826540;
    _DAT_14c9b33c0 = FUN_146825d77;
    _DAT_14c9b33c8 = FUN_146825fd6;
    _DAT_14c9b33d0 = FUN_1407e02ea;
    _DAT_14c9b33d8 = FUN_146826273;
    _DAT_14c9b33b0 = FUN_14712f1ee;
    _DAT_14c9b33f0 = 0xffffffff00000110;
    _DAT_14c9b33f8 = 8;
    DAT_14c9b33fc = 0;
    _DAT_14c9b33e0 = &LAB_14712f224;
    FUN_14600a86a();
    FUN_1407e00cc(&DAT_14c9b3398);
    return;
  }
  return;
}



// FUNCTION 14600a86a FUN_14600a86a body=133 status=ok
// SIG undefined FUN_14600a86a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14600a86a(void)

{
  _DAT_14c9bdd00 = L"BASE";
  DAT_14c9bdd2a = 4;
  FUN_14600a8f0();
  _DAT_14c9bdd10 = DAT_14c9b33a8;
  _DAT_14c9bdd08 = &DAT_14c9bdd30;
  _DAT_14c9bdd18 = &LAB_14682652b;
  DAT_14c9b33a8 = &DAT_14c9bdd00;
  DAT_14c9b33fd = DAT_14c9b33fd + '\x01';
  _DAT_14c9bdd20 = 0x100000000;
  if (DAT_14c9bdd94 != '\0') {
    DAT_14c9b33fe = DAT_14c9b33fe + '\x01';
  }
  return;
}



// FUNCTION 14600a8f0 FUN_14600a8f0 body=205 status=ok
// SIG undefined FUN_14600a8f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14600a8f0(void)

{
  if ((DAT_14c9bdd97 & 2) == 0) {
    DAT_14c9bdd97 = DAT_14c9bdd97 | 2;
    _DAT_14c9bdd38 = L"TBasePassVertexShaderBaseType";
    _DAT_14c9bdd50 = FUN_146826540;
    _DAT_14c9bdd58 = FUN_146825d77;
    _DAT_14c9bdd60 = FUN_146825fd6;
    _DAT_14c9bdd68 = FUN_1407e02ea;
    _DAT_14c9bdd70 = FUN_146826273;
    _DAT_14c9bdd48 = FUN_14713df30;
    _DAT_14c9bdd88 = 0xffffffff00000110;
    _DAT_14c9bdd90 = 8;
    DAT_14c9bdd94 = 0;
    _DAT_14c9bdd78 = &LAB_14713df66;
    FUN_14600a9be();
    FUN_1407e00cc(&DAT_14c9bdd30);
    return;
  }
  return;
}



// FUNCTION 14600a9be FUN_14600a9be body=133 status=ok
// SIG undefined FUN_14600a9be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14600a9be(void)

{
  _DAT_14c9bdd98 = L"BASE";
  DAT_14c9bddc2 = 4;
  FUN_14600aa44();
  _DAT_14c9bdda8 = DAT_14c9bdd40;
  _DAT_14c9bdda0 = &DAT_14c9bddc8;
  _DAT_14c9bddb0 = &LAB_14682652b;
  DAT_14c9bdd40 = &DAT_14c9bdd98;
  DAT_14c9bdd95 = DAT_14c9bdd95 + '\x01';
  _DAT_14c9bddb8 = 0x100000000;
  if (DAT_14c9bde2c != '\0') {
    DAT_14c9bdd96 = DAT_14c9bdd96 + '\x01';
  }
  return;
}



// FUNCTION 14600aa44 FUN_14600aa44 body=313 status=ok
// SIG undefined FUN_14600aa44(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14600aa44(void)

{
  if ((DAT_14c9bde2f & 2) == 0) {
    DAT_14c9bde2f = DAT_14c9bde2f | 2;
    _DAT_14c9bddd0 = L"TBasePassVertexShaderPolicyParamType";
    _DAT_14c9bdde8 = FUN_146826540;
    _DAT_14c9bddf0 = FUN_146825d77;
    _DAT_14c9bddf8 = FUN_146825fd6;
    _DAT_14c9bde00 = FUN_1407e02ea;
    _DAT_14c9bde08 = FUN_146826273;
    _DAT_14c9bdde0 = FUN_14713df6a;
    _DAT_14c9bde20 = 0xffffffff00000110;
    _DAT_14c9bde28 = 8;
    DAT_14c9bde2c = 0;
    _DAT_14c9bde10 = &LAB_14713dfa0;
    _DAT_14c9bde30 = L"ReflectionCaptureBuffer";
    DAT_14c9bde5a = FUN_140850cc5();
    _DAT_14c9bde38 = FUN_14106a12a();
    _DAT_14c9bde48 = &LAB_14682652b;
    _DAT_14c9bde50 = 0x10000010e;
    _DAT_14c9bde58 = 0;
    _DAT_14c9bde40 = DAT_14c9bddd8;
    DAT_14c9bddd8 = &DAT_14c9bde30;
    FUN_14600ab7e();
    FUN_1407e00cc(&DAT_14c9bddc8);
    return;
  }
  return;
}



// FUNCTION 14600ab7e FUN_14600ab7e body=225 status=ok
// SIG undefined FUN_14600ab7e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14600ab7e(void)

{
  _DAT_14c9bde60 = L"BASE";
  DAT_14c9bde8a = 4;
  _DAT_14c9bde68 = FUN_1411cad6c();
  _DAT_14c9bde70 = DAT_14c9bddd8;
  _DAT_14c9bde78 = &LAB_14682652b;
  DAT_14c9bddd8 = &DAT_14c9bde60;
  DAT_14c9bde2d = DAT_14c9bde2d + '\x01';
  _DAT_14c9bde80 = &DAT_100000108;
  if (*(char *)(_DAT_14c9bde68 + 100) != '\0') {
    DAT_14c9bde2e = DAT_14c9bde2e + '\x01';
  }
  _DAT_14c9bde90 = L"BASE";
  DAT_14c9bdeba = 4;
  _DAT_14c9bde98 = FUN_141092e92();
  _DAT_14c9bdea0 = DAT_14c9bddd8;
  _DAT_14c9bdea8 = &LAB_14682652b;
  DAT_14c9bddd8 = &DAT_14c9bde90;
  DAT_14c9bde2d = DAT_14c9bde2d + '\x01';
  _DAT_14c9bdeb0 = 0x100000000;
  if (*(char *)(_DAT_14c9bde98 + 100) != '\0') {
    DAT_14c9bde2e = DAT_14c9bde2e + '\x01';
  }
  return;
}



// FUNCTION 14600ac60 FUN_14600ac60 body=287 status=ok
// SIG undefined FUN_14600ac60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14600ac60(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b43b0) {
    FUN_144b3d300(&DAT_14c9b43b0);
    if (DAT_14c9b43b0 == -1) {
      FUN_14600ad80();
      FUN_140db5666(&DAT_14c9b4308,2,&DAT_14c9b42a0,L"TBasePassVSTLightMapPolicyHQ",
                    L"/Engine/Private/BasePassVertexShader.usf",L"Main",0,1,FUN_14712fb8a,
                    FUN_14712fb62,FUN_14175999c,&LAB_14712fb5e,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9b4308 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c838);
      _Init_thread_footer(&DAT_14c9b43b0);
    }
  }
  return &DAT_14c9b4308;
}



// FUNCTION 14600ad80 FUN_14600ad80 body=205 status=ok
// SIG undefined FUN_14600ad80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14600ad80(void)

{
  if ((DAT_14c9b4307 & 2) == 0) {
    DAT_14c9b4307 = DAT_14c9b4307 | 2;
    _DAT_14c9b42a8 = L"TBasePassVSTLightMapPolicyHQ";
    _DAT_14c9b42c0 = FUN_146826540;
    _DAT_14c9b42c8 = FUN_146825d77;
    _DAT_14c9b42d0 = FUN_146825fd6;
    _DAT_14c9b42d8 = FUN_1407e02ea;
    _DAT_14c9b42e0 = FUN_146826273;
    _DAT_14c9b42b8 = FUN_14712fb24;
    _DAT_14c9b42f8 = 0xffffffff00000110;
    _DAT_14c9b4300 = 8;
    DAT_14c9b4304 = 0;
    _DAT_14c9b42e8 = &LAB_14712fb5a;
    FUN_14600ae4e();
    FUN_1407e00cc(&DAT_14c9b42a0);
    return;
  }
  return;
}



// FUNCTION 14600ae4e FUN_14600ae4e body=133 status=ok
// SIG undefined FUN_14600ae4e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14600ae4e(void)

{
  _DAT_14c9be7f0 = L"BASE";
  DAT_14c9be81a = 4;
  FUN_14600aed4();
  _DAT_14c9be800 = DAT_14c9b42b0;
  _DAT_14c9be7f8 = &DAT_14c9be820;
  _DAT_14c9be808 = &LAB_14682652b;
  DAT_14c9b42b0 = &DAT_14c9be7f0;
  DAT_14c9b4305 = DAT_14c9b4305 + '\x01';
  _DAT_14c9be810 = 0x100000000;
  if (DAT_14c9be884 != '\0') {
    DAT_14c9b4306 = DAT_14c9b4306 + '\x01';
  }
  return;
}



// FUNCTION 14600aed4 FUN_14600aed4 body=205 status=ok
// SIG undefined FUN_14600aed4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14600aed4(void)

{
  if ((DAT_14c9be887 & 2) == 0) {
    DAT_14c9be887 = DAT_14c9be887 | 2;
    _DAT_14c9be828 = L"TBasePassVertexShaderBaseType";
    _DAT_14c9be840 = FUN_146826540;
    _DAT_14c9be848 = FUN_146825d77;
    _DAT_14c9be850 = FUN_146825fd6;
    _DAT_14c9be858 = FUN_1407e02ea;
    _DAT_14c9be860 = FUN_146826273;
    _DAT_14c9be838 = FUN_14713e42a;
    _DAT_14c9be878 = 0xffffffff00000110;
    _DAT_14c9be880 = 8;
    DAT_14c9be884 = 0;
    _DAT_14c9be868 = &LAB_14713e460;
    FUN_14600afa2();
    FUN_1407e00cc(&DAT_14c9be820);
    return;
  }
  return;
}



// FUNCTION 14600afa2 FUN_14600afa2 body=133 status=ok
// SIG undefined FUN_14600afa2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14600afa2(void)

{
  _DAT_14c9be888 = L"BASE";
  DAT_14c9be8b2 = 4;
  FUN_14600b028();
  _DAT_14c9be898 = DAT_14c9be830;
  _DAT_14c9be890 = &DAT_14c9be8b8;
  _DAT_14c9be8a0 = &LAB_14682652b;
  DAT_14c9be830 = &DAT_14c9be888;
  DAT_14c9be885 = DAT_14c9be885 + '\x01';
  _DAT_14c9be8a8 = 0x100000000;
  if (DAT_14c9be91c != '\0') {
    DAT_14c9be886 = DAT_14c9be886 + '\x01';
  }
  return;
}



// FUNCTION 14600b028 FUN_14600b028 body=313 status=ok
// SIG undefined FUN_14600b028(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14600b028(void)

{
  if ((DAT_14c9be91f & 2) == 0) {
    DAT_14c9be91f = DAT_14c9be91f | 2;
    _DAT_14c9be8c0 = L"TBasePassVertexShaderPolicyParamType";
    _DAT_14c9be8d8 = FUN_146826540;
    _DAT_14c9be8e0 = FUN_146825d77;
    _DAT_14c9be8e8 = FUN_146825fd6;
    _DAT_14c9be8f0 = FUN_1407e02ea;
    _DAT_14c9be8f8 = FUN_146826273;
    _DAT_14c9be8d0 = FUN_14713e464;
    _DAT_14c9be910 = 0xffffffff00000110;
    _DAT_14c9be918 = 8;
    DAT_14c9be91c = 0;
    _DAT_14c9be900 = &LAB_14713e49a;
    _DAT_14c9be920 = L"ReflectionCaptureBuffer";
    DAT_14c9be94a = FUN_140850cc5();
    _DAT_14c9be928 = FUN_14106a12a();
    _DAT_14c9be938 = &LAB_14682652b;
    _DAT_14c9be940 = 0x10000010e;
    _DAT_14c9be948 = 0;
    _DAT_14c9be930 = DAT_14c9be8c8;
    DAT_14c9be8c8 = &DAT_14c9be920;
    FUN_14600b162();
    FUN_1407e00cc(&DAT_14c9be8b8);
    return;
  }
  return;
}



// FUNCTION 14600b162 FUN_14600b162 body=225 status=ok
// SIG undefined FUN_14600b162(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14600b162(void)

{
  _DAT_14c9be950 = L"BASE";
  DAT_14c9be97a = 4;
  _DAT_14c9be958 = FUN_1411cad6c();
  _DAT_14c9be960 = DAT_14c9be8c8;
  _DAT_14c9be968 = &LAB_14682652b;
  DAT_14c9be8c8 = &DAT_14c9be950;
  DAT_14c9be91d = DAT_14c9be91d + '\x01';
  _DAT_14c9be970 = &DAT_100000108;
  if (*(char *)(_DAT_14c9be958 + 100) != '\0') {
    DAT_14c9be91e = DAT_14c9be91e + '\x01';
  }
  _DAT_14c9be980 = L"BASE";
  DAT_14c9be9aa = 4;
  _DAT_14c9be988 = FUN_141092e92();
  _DAT_14c9be990 = DAT_14c9be8c8;
  _DAT_14c9be998 = &LAB_14682652b;
  DAT_14c9be8c8 = &DAT_14c9be980;
  DAT_14c9be91d = DAT_14c9be91d + '\x01';
  _DAT_14c9be9a0 = 0x100000000;
  if (*(char *)(_DAT_14c9be988 + 100) != '\0') {
    DAT_14c9be91e = DAT_14c9be91e + '\x01';
  }
  return;
}



// FUNCTION 14600b244 FUN_14600b244 body=287 status=ok
// SIG undefined FUN_14600b244(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14600b244(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b52b8) {
    FUN_144b3d300(&DAT_14c9b52b8);
    if (DAT_14c9b52b8 == -1) {
      FUN_14600b364();
      FUN_140db5666(&DAT_14c9b5210,2,&DAT_14c9b51a8,
                    L"TBasePassVSTDistanceFieldShadowsAndLightMapPolicyHQ",
                    L"/Engine/Private/BasePassVertexShader.usf",L"Main",0,1,FUN_1471304c0,
                    FUN_147130498,FUN_14175c03e,&LAB_147130494,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9b5210 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c8d4);
      _Init_thread_footer(&DAT_14c9b52b8);
    }
  }
  return &DAT_14c9b5210;
}



// FUNCTION 14600b364 FUN_14600b364 body=205 status=ok
// SIG undefined FUN_14600b364(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14600b364(void)

{
  if ((DAT_14c9b520f & 2) == 0) {
    DAT_14c9b520f = DAT_14c9b520f | 2;
    _DAT_14c9b51b0 = L"TBasePassVSTDistanceFieldShadowsAndLightMapPolicyHQ";
    _DAT_14c9b51c8 = FUN_146826540;
    _DAT_14c9b51d0 = FUN_146825d77;
    _DAT_14c9b51d8 = FUN_146825fd6;
    _DAT_14c9b51e0 = FUN_1407e02ea;
    _DAT_14c9b51e8 = FUN_146826273;
    _DAT_14c9b51c0 = FUN_14713045a;
    _DAT_14c9b5200 = 0xffffffff00000110;
    _DAT_14c9b5208 = 8;
    DAT_14c9b520c = 0;
    _DAT_14c9b51f0 = &LAB_147130490;
    FUN_14600b432();
    FUN_1407e00cc(&DAT_14c9b51a8);
    return;
  }
  return;
}



// FUNCTION 14600b432 FUN_14600b432 body=133 status=ok
// SIG undefined FUN_14600b432(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14600b432(void)

{
  _DAT_14c9bf2e0 = L"BASE";
  DAT_14c9bf30a = 4;
  FUN_14600b4b8();
  _DAT_14c9bf2f0 = DAT_14c9b51b8;
  _DAT_14c9bf2e8 = &DAT_14c9bf310;
  _DAT_14c9bf2f8 = &LAB_14682652b;
  DAT_14c9b51b8 = &DAT_14c9bf2e0;
  DAT_14c9b520d = DAT_14c9b520d + '\x01';
  _DAT_14c9bf300 = 0x100000000;
  if (DAT_14c9bf374 != '\0') {
    DAT_14c9b520e = DAT_14c9b520e + '\x01';
  }
  return;
}



// FUNCTION 14600b4b8 FUN_14600b4b8 body=205 status=ok
// SIG undefined FUN_14600b4b8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14600b4b8(void)

{
  if ((DAT_14c9bf377 & 2) == 0) {
    DAT_14c9bf377 = DAT_14c9bf377 | 2;
    _DAT_14c9bf318 = L"TBasePassVertexShaderBaseType";
    _DAT_14c9bf330 = FUN_146826540;
    _DAT_14c9bf338 = FUN_146825d77;
    _DAT_14c9bf340 = FUN_146825fd6;
    _DAT_14c9bf348 = FUN_1407e02ea;
    _DAT_14c9bf350 = FUN_146826273;
    _DAT_14c9bf328 = FUN_14713e924;
    _DAT_14c9bf368 = 0xffffffff00000110;
    _DAT_14c9bf370 = 8;
    DAT_14c9bf374 = 0;
    _DAT_14c9bf358 = &LAB_14713e95a;
    FUN_14600b586();
    FUN_1407e00cc(&DAT_14c9bf310);
    return;
  }
  return;
}



// FUNCTION 14600b586 FUN_14600b586 body=133 status=ok
// SIG undefined FUN_14600b586(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14600b586(void)

{
  _DAT_14c9bf378 = L"BASE";
  DAT_14c9bf3a2 = 4;
  FUN_14600b60c();
  _DAT_14c9bf388 = DAT_14c9bf320;
  _DAT_14c9bf380 = &DAT_14c9bf3a8;
  _DAT_14c9bf390 = &LAB_14682652b;
  DAT_14c9bf320 = &DAT_14c9bf378;
  DAT_14c9bf375 = DAT_14c9bf375 + '\x01';
  _DAT_14c9bf398 = 0x100000000;
  if (DAT_14c9bf40c != '\0') {
    DAT_14c9bf376 = DAT_14c9bf376 + '\x01';
  }
  return;
}


