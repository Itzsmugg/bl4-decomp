// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144070740 FUN_144070740 body=29 status=ok
// SIG undefined FUN_144070740(void)

undefined8 FUN_144070740(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14407076c FUN_14407076c body=1400 status=ok
// SIG undefined FUN_14407076c(void)

void FUN_14407076c(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = &PTR_FUN_14b88c540;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_2[1] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_2 + 2) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_2[3] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_2 + 4) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_2[5] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_2 + 6) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_2[7] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_2[9] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_2 + 10) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_2[0xb] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_2 + 0xc) = 0;
  return;
}



// FUNCTION 144070ce4 FUN_144070ce4 body=1368 status=ok
// SIG undefined FUN_144070ce4(void)

void FUN_144070ce4(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  *param_2 = &PTR_FUN_14b88c540;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_2[1] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_2 + 2) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_2[3] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_2 + 4) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_2[5] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_2 + 6) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_2[7] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_2[9] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_2 + 10) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_2[0xb] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_2 + 0xc) = 0;
  return;
}



// FUNCTION 144071260 FUN_144071260 body=54 status=ok
// SIG undefined FUN_144071260(void)

undefined1 FUN_144071260(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14407148c(param_2,param_3);
    param_3 = param_3 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return 1;
}



// FUNCTION 1440712be FUN_1440712be body=59 status=ok
// SIG undefined FUN_1440712be(void)

undefined8 FUN_1440712be(longlong *param_1)

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



// FUNCTION 144071304 FUN_144071304 body=124 status=ok
// SIG undefined FUN_144071304(void)

void FUN_144071304(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xd) == '\x01') {
    *param_2 = &PTR_FUN_14b88c540;
    if ((longlong *)param_2[0xb] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_2[0xb] + 0x10))();
    }
    if ((longlong *)param_2[9] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_2[9] + 0x10))();
    }
    if ((longlong *)param_2[7] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_2[7] + 0x10))();
    }
    if ((longlong *)param_2[5] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_2[5] + 0x10))();
    }
    if ((longlong *)param_2[3] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_2[3] + 0x10))();
    }
    if ((longlong *)param_2[1] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_2[1] + 0x10))();
    }
    *(undefined1 *)(param_2 + 0xd) = 0;
  }
  return;
}



// FUNCTION 1440713ce FUN_1440713ce body=133 status=ok
// SIG undefined FUN_1440713ce(void)

undefined8 * FUN_1440713ce(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b88c540;
  if ((longlong *)param_1[0xb] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xb] + 0x10))();
  }
  if ((longlong *)param_1[9] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[9] + 0x10))();
  }
  if ((longlong *)param_1[7] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[7] + 0x10))();
  }
  if ((longlong *)param_1[5] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[5] + 0x10))();
  }
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
  }
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144071454 FUN_144071454 body=55 status=ok
// SIG undefined FUN_144071454(void)

void FUN_144071454(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb5da8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb5da8 = FUN_140002ddd(FUN_14406d217,uVar1,L"TakedownDialogInfo");
  }
  return;
}



// FUNCTION 14407148c FUN_14407148c body=312 status=ok
// SIG undefined FUN_14407148c(void)

longlong FUN_14407148c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_2 + 8);
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 8) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  plVar1 = *(longlong **)(param_2 + 0x18);
  plVar2 = *(longlong **)(param_1 + 0x18);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x18) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  plVar1 = *(longlong **)(param_2 + 0x28);
  plVar2 = *(longlong **)(param_1 + 0x28);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x28) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  plVar1 = *(longlong **)(param_2 + 0x38);
  plVar2 = *(longlong **)(param_1 + 0x38);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x38) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  plVar1 = *(longlong **)(param_2 + 0x48);
  plVar2 = *(longlong **)(param_1 + 0x48);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x48) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  plVar1 = *(longlong **)(param_2 + 0x58);
  plVar2 = *(longlong **)(param_1 + 0x58);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x58) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  return param_1;
}



// FUNCTION 1440715c6 FUN_1440715c6 body=29 status=ok
// SIG undefined FUN_1440715c6(void)

undefined8 FUN_1440715c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144071626 FUN_144071626 body=157 status=ok
// SIG undefined FUN_144071626(void)

undefined8 FUN_144071626(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      if (*(char *)(param_3 + 0x10 + lVar1) == '\0') {
        *(undefined1 *)(param_2 + 0x10 + lVar1) = 0;
        *(undefined8 *)(param_2 + 8 + lVar1) = *(undefined8 *)(param_3 + 8 + lVar1);
      }
      FUN_14407148c(param_2 + lVar1 + 0x18,param_3 + lVar1 + 0x18);
      FUN_14407148c(param_2 + lVar1 + 0x80,param_3 + lVar1 + 0x80);
      FUN_14407148c(param_2 + lVar1 + 0xe8,param_3 + lVar1 + 0xe8);
      lVar1 = lVar1 + 0x150;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1440716ec FUN_1440716ec body=59 status=ok
// SIG undefined FUN_1440716ec(void)

undefined8 FUN_1440716ec(longlong *param_1)

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



// FUNCTION 144071738 FUN_144071738 body=38 status=ok
// SIG undefined FUN_144071738(void)

void FUN_144071738(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x150) == '\x01') {
    FUN_1440717b2(param_2);
    *(undefined1 *)(param_2 + 0x150) = 0;
  }
  return;
}



// FUNCTION 1440717b2 FUN_1440717b2 body=453 status=ok
// SIG undefined FUN_1440717b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1440717b2(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b88c0e0;
  param_1[0x1d] = &PTR_FUN_14b88c540;
  if ((longlong *)param_1[0x28] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x28] + 0x10))();
  }
  if ((longlong *)param_1[0x26] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x26] + 0x10))();
  }
  if ((longlong *)param_1[0x24] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x24] + 0x10))();
  }
  if ((longlong *)param_1[0x22] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x22] + 0x10))();
  }
  if ((longlong *)param_1[0x20] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x20] + 0x10))();
  }
  if ((longlong *)param_1[0x1e] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x1e] + 0x10))();
  }
  param_1[0x10] = &PTR_FUN_14b88c540;
  if ((longlong *)param_1[0x1b] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x1b] + 0x10))();
  }
  if ((longlong *)param_1[0x19] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x19] + 0x10))();
  }
  if ((longlong *)param_1[0x17] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x17] + 0x10))();
  }
  if ((longlong *)param_1[0x15] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x15] + 0x10))();
  }
  if ((longlong *)param_1[0x13] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x13] + 0x10))();
  }
  if ((longlong *)param_1[0x11] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x11] + 0x10))();
  }
  param_1[3] = &PTR_FUN_14b88c540;
  if ((longlong *)param_1[0xe] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xe] + 0x10))();
  }
  if ((longlong *)param_1[0xc] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xc] + 0x10))();
  }
  if ((longlong *)param_1[10] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[10] + 0x10))();
  }
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[8] + 0x10))();
  }
  if ((longlong *)param_1[6] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[6] + 0x10))();
  }
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[4] + 0x10))();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (puVar1 = (undefined8 *)param_1[1], puVar1 != (undefined8 *)0x0)) {
    if (puVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar1 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x000144071969. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 144071978 FUN_144071978 body=38 status=ok
// SIG undefined FUN_144071978(void)

undefined8 FUN_144071978(undefined8 param_1,int param_2)

{
  FUN_1440717b2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14407199e FUN_14407199e body=55 status=ok
// SIG undefined FUN_14407199e(void)

void FUN_14407199e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb5dc0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb5dc0 = FUN_140002ddd(FUN_14406d2ad,uVar1,L"UITakedownModeDef");
  }
  return;
}



// FUNCTION 1440719d6 FUN_1440719d6 body=118 status=ok
// SIG undefined FUN_1440719d6(void)

undefined8 FUN_1440719d6(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  FUN_1446dcdd4(local_38);
  if (DAT_14cbc8c48 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144837462(DAT_14cbc8c48,local_38);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144071a4e FUN_144071a4e body=117 status=ok
// SIG undefined FUN_144071a4e(void)

undefined8 * FUN_144071a4e(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  if (param_3 == 0) {
    *param_2 = 0;
  }
  else {
    puVar2 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_3 + 8) != (undefined4 *)0x0) {
      puVar2 = *(undefined4 **)(param_3 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar1 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar1);
      DAT_14c947fe0 = lVar1;
    }
    FUN_140045924(DAT_14c947fe0,param_2,puVar2,1);
  }
  return param_2;
}



// FUNCTION 144071ae4 FUN_144071ae4 body=276 status=ok
// SIG undefined FUN_144071ae4(void)

void FUN_144071ae4(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14b4677f0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_2[3] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_2 + 4) = 0;
  *param_2 = &PTR_FUN_14b888ea0;
  *(undefined4 *)(param_2 + 5) = 0x40000000;
  return;
}



// FUNCTION 144071c04 FUN_144071c04 body=57 status=ok
// SIG undefined FUN_144071c04(void)

void FUN_144071c04(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb5e08 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb5e08 = FUN_140002ddd(FUN_146600e69,uVar1,L"OakUIDisplayDataDef_ErrorMessage");
  }
  return;
}



// FUNCTION 144071ca0 FUN_144071ca0 body=57 status=ok
// SIG undefined FUN_144071ca0(void)

void FUN_144071ca0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb5e38 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb5e38 = FUN_140002ddd(FUN_146600ef7,uVar1,L"OakUIDisplayDataDef_Gadget");
  }
  return;
}



// FUNCTION 144071ce8 FUN_144071ce8 body=29 status=ok
// SIG undefined FUN_144071ce8(void)

undefined8 FUN_144071ce8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144071d7e FUN_144071d7e body=168 status=ok
// SIG undefined FUN_144071d7e(void)

undefined8 FUN_144071d7e(undefined8 param_1,longlong param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  if (param_4 != 0) {
    puVar5 = (undefined8 *)(param_2 + 0x30);
    do {
      if (*(char *)(param_3 + 2) == '\0') {
        *(undefined1 *)(puVar5 + -4) = 0;
        puVar5[-5] = param_3[1];
      }
      puVar5[-3] = param_3[3];
      uVar2 = *(undefined4 *)((longlong)param_3 + 0x24);
      uVar3 = *(undefined4 *)(param_3 + 5);
      uVar4 = *(undefined4 *)((longlong)param_3 + 0x2c);
      *(undefined4 *)(puVar5 + -2) = *(undefined4 *)(param_3 + 4);
      *(undefined4 *)((longlong)puVar5 + -0xc) = uVar2;
      *(undefined4 *)(puVar5 + -1) = uVar3;
      *(undefined4 *)((longlong)puVar5 + -4) = uVar4;
      if (puVar5 + -6 != param_3) {
        iVar1 = *(int *)(param_3 + 7);
        _Src = (void *)param_3[6];
        *(int *)(puVar5 + 1) = iVar1;
        if (iVar1 == 0 && *(int *)((longlong)puVar5 + 0xc) == 0) {
          *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar5,iVar1);
          if (iVar1 != 0) {
            memcpy((void *)*puVar5,_Src,(longlong)iVar1 * 2);
          }
        }
      }
      param_3 = param_3 + 8;
      puVar5 = puVar5 + 8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 144071e4e FUN_144071e4e body=59 status=ok
// SIG undefined FUN_144071e4e(void)

undefined8 FUN_144071e4e(longlong *param_1)

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



// FUNCTION 144071e94 FUN_144071e94 body=143 status=ok
// SIG undefined FUN_144071e94(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144071e94(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_2 + 8) == '\x01') {
    *param_2 = &PTR_FUN_14b57a3e0;
    if (param_2[6] != 0) {
      FUN_1400020a8();
    }
    *param_2 = &PTR_FUN_14a171dc0;
    if ((*(char *)(param_2 + 2) != '\0') &&
       (plVar1 = (longlong *)param_2[1], plVar1 != (longlong *)0x0)) {
      if (plVar1[3] != 0) {
        FUN_1400020a8();
      }
      AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
      _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
      *plVar1 = (longlong)DAT_14c9a0ea0;
      DAT_14c9a0ea0 = plVar1;
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    }
    *(undefined1 *)(param_2 + 8) = 0;
  }
  return;
}



// FUNCTION 144071f76 FUN_144071f76 body=154 status=ok
// SIG undefined FUN_144071f76(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_144071f76(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b57a3e0;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (plVar1 = (longlong *)param_1[1], plVar1 != (longlong *)0x0)) {
    if (plVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar1 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar1;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144072010 FUN_144072010 body=55 status=ok
// SIG undefined FUN_144072010(void)

void FUN_144072010(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb5f40 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb5f40 =
         FUN_140002ddd(FUN_14406dc27,uVar1,L"GbxUIUMGWidgetExtensionConfig_HUDPerspective");
  }
  return;
}



// FUNCTION 144072048 FUN_144072048 body=29 status=ok
// SIG undefined FUN_144072048(void)

undefined8 FUN_144072048(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440720de FUN_1440720de body=168 status=ok
// SIG undefined FUN_1440720de(void)

undefined8 FUN_1440720de(undefined8 param_1,longlong param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  if (param_4 != 0) {
    puVar5 = (undefined8 *)(param_2 + 0x30);
    do {
      if (*(char *)(param_3 + 2) == '\0') {
        *(undefined1 *)(puVar5 + -4) = 0;
        puVar5[-5] = param_3[1];
      }
      puVar5[-3] = param_3[3];
      uVar2 = *(undefined4 *)((longlong)param_3 + 0x24);
      uVar3 = *(undefined4 *)(param_3 + 5);
      uVar4 = *(undefined4 *)((longlong)param_3 + 0x2c);
      *(undefined4 *)(puVar5 + -2) = *(undefined4 *)(param_3 + 4);
      *(undefined4 *)((longlong)puVar5 + -0xc) = uVar2;
      *(undefined4 *)(puVar5 + -1) = uVar3;
      *(undefined4 *)((longlong)puVar5 + -4) = uVar4;
      if (puVar5 + -6 != param_3) {
        iVar1 = *(int *)(param_3 + 7);
        _Src = (void *)param_3[6];
        *(int *)(puVar5 + 1) = iVar1;
        if (iVar1 == 0 && *(int *)((longlong)puVar5 + 0xc) == 0) {
          *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar5,iVar1);
          if (iVar1 != 0) {
            memcpy((void *)*puVar5,_Src,(longlong)iVar1 * 2);
          }
        }
      }
      param_3 = param_3 + 8;
      puVar5 = puVar5 + 8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1440721ae FUN_1440721ae body=59 status=ok
// SIG undefined FUN_1440721ae(void)

undefined8 FUN_1440721ae(longlong *param_1)

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



// FUNCTION 1440721f4 FUN_1440721f4 body=143 status=ok
// SIG undefined FUN_1440721f4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1440721f4(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_2 + 8) == '\x01') {
    *param_2 = &PTR_FUN_14b57a3e0;
    if (param_2[6] != 0) {
      FUN_1400020a8();
    }
    *param_2 = &PTR_FUN_14a171dc0;
    if ((*(char *)(param_2 + 2) != '\0') &&
       (plVar1 = (longlong *)param_2[1], plVar1 != (longlong *)0x0)) {
      if (plVar1[3] != 0) {
        FUN_1400020a8();
      }
      AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
      _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
      *plVar1 = (longlong)DAT_14c9a0ea0;
      DAT_14c9a0ea0 = plVar1;
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    }
    *(undefined1 *)(param_2 + 8) = 0;
  }
  return;
}



// FUNCTION 1440722d6 FUN_1440722d6 body=154 status=ok
// SIG undefined FUN_1440722d6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1440722d6(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b57a3e0;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (plVar1 = (longlong *)param_1[1], plVar1 != (longlong *)0x0)) {
    if (plVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar1 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar1;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144072370 FUN_144072370 body=55 status=ok
// SIG undefined FUN_144072370(void)

void FUN_144072370(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb5f58 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb5f58 =
         FUN_140002ddd(FUN_14406dcbd,uVar1,L"GbxUIUMGWidgetExtensionConfig_SettingsHelper");
  }
  return;
}



// FUNCTION 1440723a8 FUN_1440723a8 body=29 status=ok
// SIG undefined FUN_1440723a8(void)

undefined8 FUN_1440723a8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14407243e FUN_14407243e body=168 status=ok
// SIG undefined FUN_14407243e(void)

undefined8 FUN_14407243e(undefined8 param_1,longlong param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  if (param_4 != 0) {
    puVar5 = (undefined8 *)(param_2 + 0x30);
    do {
      if (*(char *)(param_3 + 2) == '\0') {
        *(undefined1 *)(puVar5 + -4) = 0;
        puVar5[-5] = param_3[1];
      }
      puVar5[-3] = param_3[3];
      uVar2 = *(undefined4 *)((longlong)param_3 + 0x24);
      uVar3 = *(undefined4 *)(param_3 + 5);
      uVar4 = *(undefined4 *)((longlong)param_3 + 0x2c);
      *(undefined4 *)(puVar5 + -2) = *(undefined4 *)(param_3 + 4);
      *(undefined4 *)((longlong)puVar5 + -0xc) = uVar2;
      *(undefined4 *)(puVar5 + -1) = uVar3;
      *(undefined4 *)((longlong)puVar5 + -4) = uVar4;
      if (puVar5 + -6 != param_3) {
        iVar1 = *(int *)(param_3 + 7);
        _Src = (void *)param_3[6];
        *(int *)(puVar5 + 1) = iVar1;
        if (iVar1 == 0 && *(int *)((longlong)puVar5 + 0xc) == 0) {
          *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar5,iVar1);
          if (iVar1 != 0) {
            memcpy((void *)*puVar5,_Src,(longlong)iVar1 * 2);
          }
        }
      }
      param_3 = param_3 + 8;
      puVar5 = puVar5 + 8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14407250e FUN_14407250e body=59 status=ok
// SIG undefined FUN_14407250e(void)

undefined8 FUN_14407250e(longlong *param_1)

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



// FUNCTION 144072554 FUN_144072554 body=143 status=ok
// SIG undefined FUN_144072554(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144072554(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_2 + 8) == '\x01') {
    *param_2 = &PTR_FUN_14b57a3e0;
    if (param_2[6] != 0) {
      FUN_1400020a8();
    }
    *param_2 = &PTR_FUN_14a171dc0;
    if ((*(char *)(param_2 + 2) != '\0') &&
       (plVar1 = (longlong *)param_2[1], plVar1 != (longlong *)0x0)) {
      if (plVar1[3] != 0) {
        FUN_1400020a8();
      }
      AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
      _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
      *plVar1 = (longlong)DAT_14c9a0ea0;
      DAT_14c9a0ea0 = plVar1;
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    }
    *(undefined1 *)(param_2 + 8) = 0;
  }
  return;
}



// FUNCTION 144072636 FUN_144072636 body=154 status=ok
// SIG undefined FUN_144072636(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_144072636(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b57a3e0;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (plVar1 = (longlong *)param_1[1], plVar1 != (longlong *)0x0)) {
    if (plVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar1 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar1;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440726d0 FUN_1440726d0 body=55 status=ok
// SIG undefined FUN_1440726d0(void)

void FUN_1440726d0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb5f70 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb5f70 =
         FUN_140002ddd(FUN_14406dd53,uVar1,L"GbxUIUMGWidgetExtensionConfig_SplitScreenHelper");
  }
  return;
}



// FUNCTION 144072710 FUN_144072710 body=150 status=ok
// SIG undefined FUN_144072710(void)

void FUN_144072710(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
    iVar2 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 0x24) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    iVar2 = *(int *)(lVar3 + 0x10);
    if (*(int *)(lVar3 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar5 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar5) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar2 = *(int *)(lVar3 + 0x10);
      bVar5 = iVar2 == 0;
      if (bVar5) {
        *(int *)(lVar3 + 0x10) = iVar4;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar5) {
        iVar2 = iVar4;
      }
    }
  }
  *(int *)(param_1 + 0x28) = iVar2;
  return;
}



// FUNCTION 1440727f0 FUN_1440727f0 body=59 status=ok
// SIG undefined FUN_1440727f0(void)

undefined8 * FUN_1440727f0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b889ad0;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144072892 FUN_144072892 body=160 status=ok
// SIG undefined FUN_144072892(void)

void FUN_144072892(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = 0;
  do {
    local_48 = **(undefined8 **)((longlong)&PTR_DAT_14c763f90 + lVar2);
    local_40 = *(undefined4 *)(*(undefined8 **)((longlong)&PTR_DAT_14c763f90 + lVar2) + 1);
    cVar1 = (*(code *)*param_3)(param_3[1],&local_48);
    if (cVar1 == '\0') goto LAB_14407290e;
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x20);
  local_58 = *param_3;
  local_50 = param_3[1];
  FUN_148b141ac(param_1,param_2);
LAB_14407290e:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144072934 FUN_144072934 body=29 status=ok
// SIG undefined FUN_144072934(void)

undefined8 FUN_144072934(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144072952 FUN_144072952 body=128 status=ok
// SIG undefined FUN_144072952(void)

void FUN_144072952(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = DAT_14cbb6280;
  local_28 = DAT_14cbb6288;
  cVar1 = (*(code *)*param_3)(param_3[1]);
  if (cVar1 != '\0') {
    local_40 = *param_3;
    local_38 = param_3[1];
    FUN_148b141ac(param_1,param_2);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440729d4 FUN_1440729d4 body=29 status=ok
// SIG undefined FUN_1440729d4(void)

undefined8 FUN_1440729d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440729f2 FUN_1440729f2 body=166 status=ok
// SIG undefined FUN_1440729f2(void)

void FUN_1440729f2(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = 0;
  bVar1 = true;
  do {
    bVar4 = bVar1;
    local_40 = *(undefined4 *)((longlong)(&PTR_DAT_14b885ce0)[lVar3] + 8);
    local_48 = *(undefined8 *)(&PTR_DAT_14b885ce0)[lVar3];
    cVar2 = (*(code *)*param_3)(param_3[1],&local_48);
    if (cVar2 == '\0') goto LAB_144072a75;
    lVar3 = 1;
    bVar1 = false;
  } while (bVar4);
  local_58 = *param_3;
  local_50 = param_3[1];
  FUN_148b141ac(param_1,param_2);
LAB_144072a75:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144072a9a FUN_144072a9a body=29 status=ok
// SIG undefined FUN_144072a9a(void)

undefined8 FUN_144072a9a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144072ab8 FUN_144072ab8 body=128 status=ok
// SIG undefined FUN_144072ab8(void)

void FUN_144072ab8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = DAT_14cbb62b0;
  local_28 = DAT_14cbb62b8;
  cVar1 = (*(code *)*param_3)(param_3[1]);
  if (cVar1 != '\0') {
    local_40 = *param_3;
    local_38 = param_3[1];
    FUN_148b141ac(param_1,param_2);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144072b3a FUN_144072b3a body=29 status=ok
// SIG undefined FUN_144072b3a(void)

undefined8 FUN_144072b3a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144072b58 FUN_144072b58 body=160 status=ok
// SIG undefined FUN_144072b58(void)

void FUN_144072b58(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = 0;
  do {
    local_40 = *(undefined4 *)(*(undefined8 **)((longlong)&PTR_DAT_14b886830 + lVar2) + 1);
    local_48 = **(undefined8 **)((longlong)&PTR_DAT_14b886830 + lVar2);
    cVar1 = (*(code *)*param_3)(param_3[1],&local_48);
    if (cVar1 == '\0') goto LAB_144072bd4;
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x28);
  local_58 = *param_3;
  local_50 = param_3[1];
  FUN_148b141ac(param_1,param_2);
LAB_144072bd4:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144072bfa FUN_144072bfa body=29 status=ok
// SIG undefined FUN_144072bfa(void)

undefined8 FUN_144072bfa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144072c18 FUN_144072c18 body=160 status=ok
// SIG undefined FUN_144072c18(void)

void FUN_144072c18(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = 0;
  do {
    local_40 = *(undefined4 *)(*(undefined8 **)((longlong)&PTR_DAT_14b886e20 + lVar2) + 1);
    local_48 = **(undefined8 **)((longlong)&PTR_DAT_14b886e20 + lVar2);
    cVar1 = (*(code *)*param_3)(param_3[1],&local_48);
    if (cVar1 == '\0') goto LAB_144072c94;
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x18);
  local_58 = *param_3;
  local_50 = param_3[1];
  FUN_1440729f2(param_1,param_2);
LAB_144072c94:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144072cba FUN_144072cba body=29 status=ok
// SIG undefined FUN_144072cba(void)

undefined8 FUN_144072cba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144072cd7 FUN_144072cd7 body=2504 status=ok
// SIG undefined FUN_144072cd7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144072cd7(void)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined1 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_60 = "AssetRegistry";
  local_58 = 0xd;
  local_54 = 0;
  uVar1 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbb5c50 = (ulonglong)uVar1;
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 4;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b87ec60,1,&PTR_FUN_14b87ebc0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b87ed10,1,0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 4;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b87f280);
  local_60 = "init";
  local_58 = 4;
  local_54 = 0;
  FUN_14001a6c0(&local_60,1);
  local_60 = "update";
  local_58 = 6;
  local_54 = 0;
  FUN_14001a6c0(&local_60,1);
  local_60 = "config_update";
  local_58 = 0xd;
  local_54 = 0;
  FUN_14001a6c0(&local_60,1);
  local_60 = "deinit";
  local_58 = 6;
  local_54 = 0;
  FUN_14001a6c0(&local_60,1);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b87f3f0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b87f4a0,1,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b87f810,1,0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b87fd00,1,&PTR_FUN_14b87fcb0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b87fdb0,1,0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b87fec0);
  uStack_68 = 1;
  ppuStack_70 = &PTR_FUN_14b880240;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b880260);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b880390);
  lVar2 = 0x10;
  do {
    FUN_14098d3d2(*(undefined8 *)((longlong)&PTR_PTR_14b880580 + lVar2),L"/Script/OakGame",
                  *(undefined8 *)(&UNK_14b880588 + lVar2),
                  *(undefined8 *)((longlong)&PTR_FUN_14b880590 + lVar2));
    lVar2 = lVar2 + 0x20;
  } while (lVar2 != 0x70);
  FUN_14098d3d2(FUN_14406d510,L"/Script/OakGame",L"EOakUI_WorldIconTypes",&DAT_14cbb5ea8);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b880a50,1,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b880eb0,1,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b881250,1,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b881600,1,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b8819e0,1,0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b881ad0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b881bc0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b881cb0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b8820a0,1,0);
  _DAT_14cbb5f98 = 0xffffffff;
  _DAT_14cbb5f9c = 0;
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b882980,1,0);
  FUN_1446f470e(&DAT_14cbb5fb8,L"BP_OnExtensionPointTransitionIn",1);
  FUN_1446f470e(&DAT_14cbb5fc8,L"BP_OnExtensionPointTransitionOut",1);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b8834b0,1,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b883be0,1,0);
  FUN_1446f470e(&DAT_14cbb6018,L"PlayTickSound",1);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b884ab0,2,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b884ba0,1,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b884c40,1,0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b884fb0,1,&PTR_FUN_14b884f80);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b885060,1,0);
  FUN_1446f470e(&local_60,L"CultureISO",1);
  DAT_14cbb6260 = local_60;
  DAT_14cbb6268 = 0;
  FUN_1446f470e(&local_60,L"bIsRightToLeft",1);
  DAT_14cbb6270 = local_60;
  DAT_14cbb6278 = 1;
  FUN_1446f470e(&local_60,L"GetCultureISO",1);
  _DAT_14cbb60f8 = local_60;
  _DAT_14cbb6100 = 2;
  FUN_1446f470e(&local_60,L"GetIsRightToLeft",1);
  _DAT_14cbb6108 = local_60;
  _DAT_14cbb6110 = 3;
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b8853c0,1,0);
  FUN_1446f470e(&local_60,L"SaveVisible",1);
  DAT_14cbb6280 = local_60;
  DAT_14cbb6288 = 0;
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b885810,1,0);
  FUN_1446f470e(&local_60,L"Progress_Current",1);
  DAT_14cbb6290 = local_60;
  DAT_14cbb6298 = 0;
  FUN_1446f470e(&local_60,L"Progress_Max",1);
  DAT_14cbb62a0 = local_60;
  DAT_14cbb62a8 = 1;
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b885cf0,1,0);
  FUN_1446f470e(&local_60,L"SplitScreenMode",1);
  DAT_14cbb62b0 = local_60;
  DAT_14cbb62b8 = 0;
  uStack_68 = 1;
  ppuStack_70 = &PTR_FUN_14b886210;
  local_78 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b886230,1,0);
  FUN_1446f470e(&local_60,L"Time",1);
  DAT_14cbb62d0 = local_60;
  DAT_14cbb62d8 = 0;
  FUN_1446f470e(&local_60,L"NormalizedPos",1);
  DAT_14cbb6190 = local_60;
  DAT_14cbb6198 = 1;
  FUN_1446f470e(&local_60,L"bFailed",1);
  DAT_14cbb62c0 = local_60;
  DAT_14cbb62c8 = 2;
  FUN_1446f470e(&local_60,L"bShowTime",1);
  DAT_14cbb62e0 = local_60;
  DAT_14cbb62e8 = 3;
  FUN_1446f470e(&local_60,L"Icon",1);
  DAT_14cbb62f0 = local_60;
  DAT_14cbb62f8 = 4;
  FUN_1446f470e(&local_60,L"PenaltyTime",1);
  DAT_14cbb6300 = local_60;
  DAT_14cbb6308 = 2;
  FUN_1446f470e(&local_60,L"PenaltyCount",1);
  DAT_14cbb6310 = local_60;
  DAT_14cbb6318 = 3;
  FUN_1446f470e(&local_60,L"bShowPenaltyInfo",1);
  DAT_14cbb6320 = local_60;
  DAT_14cbb6328 = 4;
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b886e40,2,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b8871c0,1,0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8872f0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b887440);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b887590);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b887700);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b887d40);
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144073fcf FUN_144073fcf body=55 status=ok
// SIG undefined FUN_144073fcf(void)

void FUN_144073fcf(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb7018 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb7018 = FUN_14171c317(FUN_1466021d9,uVar1,L"EOakUI_VaultCardItemType");
  }
  return;
}



// FUNCTION 1440740aa FUN_1440740aa body=57 status=ok
// SIG undefined FUN_1440740aa(void)

void FUN_1440740aa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb6498 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb6498 = FUN_140002ddd(FUN_146601e0d,uVar1,L"OakWidgetData_SkillTrees");
  }
  return;
}



// FUNCTION 144074204 FUN_144074204 body=868 status=ok
// SIG undefined FUN_144074204(void)

undefined8 * FUN_144074204(undefined8 *param_1)

{
  longlong *plVar1;
  
  *(undefined8 *)((longlong)param_1 + 9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x49) = 0;
  *(undefined8 *)((longlong)param_1 + 0x51) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7f) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 1;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x17) = DAT_14c948620;
  param_1[0x16] = DAT_14c948618;
  *(undefined8 *)((longlong)param_1 + 0xbc) = DAT_14c948618;
  *(undefined4 *)((longlong)param_1 + 0xc4) = DAT_14c948620;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14494321d();
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_1[0x19] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14494321d();
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_1[0x1b] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14494321d();
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_1[0x20] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined8 *)((longlong)param_1 + 0x139) = 0;
  *(undefined8 *)((longlong)param_1 + 0x141) = 0;
  return param_1;
}



// FUNCTION 144074584 FUN_144074584 body=1048 status=ok
// SIG undefined FUN_144074584(void)

longlong FUN_144074584(longlong param_1,longlong param_2)

{
  int iVar1;
  void *pvVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  FUN_1489fb7d2();
  FUN_140b855d0(param_1 + 0xb0,param_2 + 0xb0);
  FUN_140bee9ec(param_1 + 0x100,param_2 + 0x100);
  *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_2 + 0x110);
  FUN_148c6e84e(param_1 + 0x118,param_2 + 0x118);
  if (*(int *)(param_1 + 0x358) != *(int *)(param_2 + 0x358)) {
    if (param_1 != param_2) {
      iVar1 = *(int *)(param_2 + 0x350);
      pvVar2 = *(void **)(param_2 + 0x348);
      *(int *)(param_1 + 0x350) = iVar1;
      if (iVar1 == 0 && *(int *)(param_1 + 0x354) == 0) {
        *(undefined4 *)(param_1 + 0x354) = 0;
      }
      else {
        FUN_1446dd670((undefined8 *)(param_1 + 0x348),iVar1);
        if (iVar1 != 0) {
          memcpy(*(void **)(param_1 + 0x348),pvVar2,(longlong)iVar1 * 2);
        }
      }
    }
    *(undefined4 *)(param_1 + 0x358) = *(undefined4 *)(param_2 + 0x358);
  }
  if (*(int *)(param_1 + 0x364) != *(int *)(param_2 + 0x364)) {
    *(undefined1 *)(param_1 + 0x360) = *(undefined1 *)(param_2 + 0x360);
    *(undefined4 *)(param_1 + 0x364) = *(undefined4 *)(param_2 + 0x364);
  }
  *(undefined4 *)(param_1 + 0x368) = *(undefined4 *)(param_2 + 0x368);
  if (*(int *)(param_1 + 0x380) != *(int *)(param_2 + 0x380) || *(int *)(param_1 + 0x380) == 0) {
    *(int *)(param_1 + 0x380) = *(int *)(param_2 + 0x380);
    FUN_14054c6c4(param_1 + 0x370,param_2 + 0x370);
  }
  FUN_148c6ee42(param_1 + 0x388,param_2 + 0x388);
  FUN_148c6dcc2(param_1 + 0x398,param_2 + 0x398);
  *(undefined8 *)(param_1 + 0x3c8) = *(undefined8 *)(param_2 + 0x3c8);
  *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_2 + 0x3d0);
  FUN_140ae1244(param_1 + 0x3d8,param_2 + 0x3d8);
  *(undefined2 *)(param_1 + 0x3f0) = *(undefined2 *)(param_2 + 0x3f0);
  plVar3 = *(longlong **)(param_2 + 0x3f8);
  plVar4 = *(longlong **)(param_1 + 0x3f8);
  if (plVar4 != plVar3) {
    *(longlong **)(param_1 + 0x3f8) = plVar3;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  *(undefined4 *)(param_1 + 0x400) = *(undefined4 *)(param_2 + 0x400);
  *(undefined2 *)(param_1 + 0x408) = *(undefined2 *)(param_2 + 0x408);
  if (*(int *)(param_1 + 0x410) != *(int *)(param_2 + 0x410)) {
    *(undefined1 *)(param_1 + 0x40c) = *(undefined1 *)(param_2 + 0x40c);
    *(undefined4 *)(param_1 + 0x410) = *(undefined4 *)(param_2 + 0x410);
  }
  if (*(int *)(param_1 + 0x428) != *(int *)(param_2 + 0x428)) {
    if (param_1 != param_2) {
      iVar1 = *(int *)(param_2 + 0x420);
      pvVar2 = *(void **)(param_2 + 0x418);
      *(int *)(param_1 + 0x420) = iVar1;
      if (iVar1 == 0 && *(int *)(param_1 + 0x424) == 0) {
        *(undefined4 *)(param_1 + 0x424) = 0;
      }
      else {
        FUN_1446dd670((undefined8 *)(param_1 + 0x418),iVar1);
        if (iVar1 != 0) {
          memcpy(*(void **)(param_1 + 0x418),pvVar2,(longlong)iVar1 * 2);
        }
      }
    }
    *(undefined4 *)(param_1 + 0x428) = *(undefined4 *)(param_2 + 0x428);
  }
  *(undefined1 *)(param_1 + 0x434) = *(undefined1 *)(param_2 + 0x434);
  *(undefined4 *)(param_1 + 0x430) = *(undefined4 *)(param_2 + 0x430);
  plVar3 = *(longlong **)(param_2 + 0x438);
  plVar4 = *(longlong **)(param_1 + 0x438);
  if (plVar4 != plVar3) {
    *(longlong **)(param_1 + 0x438) = plVar3;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  *(undefined4 *)(param_1 + 0x440) = *(undefined4 *)(param_2 + 0x440);
  FUN_1457cac00(param_1 + 0x448,param_2 + 0x448);
  *(undefined4 *)(param_1 + 0x458) = *(undefined4 *)(param_2 + 0x458);
  FUN_1457cac00(param_1 + 0x460,param_2 + 0x460);
  *(undefined4 *)(param_1 + 0x470) = *(undefined4 *)(param_2 + 0x470);
  FUN_1457cac00(param_1 + 0x478,param_2 + 0x478);
  *(undefined4 *)(param_1 + 0x488) = *(undefined4 *)(param_2 + 0x488);
  *(undefined1 *)(param_1 + 0x48c) = *(undefined1 *)(param_2 + 0x48c);
  FUN_148c6eea2(param_1 + 0x490,param_2 + 0x490);
  plVar3 = *(longlong **)(param_2 + 0x4a0);
  plVar4 = *(longlong **)(param_1 + 0x4a0);
  if (plVar4 != plVar3) {
    *(longlong **)(param_1 + 0x4a0) = plVar3;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  *(undefined4 *)(param_1 + 0x4a8) = *(undefined4 *)(param_2 + 0x4a8);
  *(undefined8 *)(param_1 + 0x4b0) = *(undefined8 *)(param_2 + 0x4b0);
  FUN_148c6ef02(param_1 + 0x4b8,param_2 + 0x4b8);
  *(undefined1 *)(param_1 + 0x4c8) = *(undefined1 *)(param_2 + 0x4c8);
  if (*(int *)(param_1 + 0x4d0) != *(int *)(param_2 + 0x4d0)) {
    *(undefined1 *)(param_1 + 0x4cc) = *(undefined1 *)(param_2 + 0x4cc);
    *(undefined4 *)(param_1 + 0x4d0) = *(undefined4 *)(param_2 + 0x4d0);
  }
  plVar3 = *(longlong **)(param_2 + 0x4d8);
  plVar4 = *(longlong **)(param_1 + 0x4d8);
  if (plVar4 != plVar3) {
    *(longlong **)(param_1 + 0x4d8) = plVar3;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  *(undefined4 *)(param_1 + 0x4e0) = *(undefined4 *)(param_2 + 0x4e0);
  return param_1;
}



// FUNCTION 1440749fe FUN_1440749fe body=57 status=ok
// SIG undefined FUN_1440749fe(void)

void FUN_1440749fe(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb72d0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb72d0 = FUN_140002ddd(FUN_146602ecf,uVar1,L"OakWidgetData_BossBar");
  }
  return;
}



// FUNCTION 144074a37 FUN_144074a37 body=9387 status=ok
// SIG undefined FUN_144074a37(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144074a37(void)

{
  void *_Src;
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined **local_80;
  undefined8 uStack_78;
  char *local_70;
  undefined4 local_68;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b88c680);
  local_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b88c940);
  local_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b88d1e0);
  local_70 = "state_rem";
  local_68 = 9;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb6390 = (ulonglong)uVar1;
  local_70 = "state_add";
  local_68 = 9;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb6398 = (ulonglong)uVar1;
  local_70 = "state_remove_primary";
  local_68 = 0x14;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb63a0 = (ulonglong)uVar1;
  local_70 = "AssetRegistry";
  local_68 = 0xd;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb63a8 = (ulonglong)uVar1;
  local_70 = "basic";
  local_68 = 5;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb63b0 = (ulonglong)uVar1;
  local_70 = "challenge";
  local_68 = 9;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb63b8 = (ulonglong)uVar1;
  local_70 = "online";
  local_68 = 6;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb63c0 = (ulonglong)uVar1;
  local_70 = "social";
  local_68 = 6;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb63c8 = (ulonglong)uVar1;
  local_70 = "alert";
  local_68 = 5;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb63d0 = (ulonglong)uVar1;
  local_70 = "photo_mode";
  local_68 = 10;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb63d8 = (ulonglong)uVar1;
  local_70 = "generic_task";
  local_68 = 0xc;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb63e0 = (ulonglong)uVar1;
  local_70 = "mission";
  local_68 = 7;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb63e8 = (ulonglong)uVar1;
  local_70 = "mail";
  local_68 = 4;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb63f0 = (ulonglong)uVar1;
  local_70 = "respawn";
  local_68 = 7;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb63f8 = (ulonglong)uVar1;
  local_70 = "tutorial";
  local_68 = 8;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb6400 = (ulonglong)uVar1;
  local_70 = "special_notification";
  local_68 = 0x14;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb6408 = (ulonglong)uVar1;
  local_70 = "generic_notification";
  local_68 = 0x14;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb6410 = (ulonglong)uVar1;
  local_70 = "vault_card";
  local_68 = 10;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb6418 = (ulonglong)uVar1;
  local_70 = "ONLINE_MESSAGE";
  local_68 = 0xe;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb6420 = (ulonglong)uVar1;
  local_70 = "INGAME_MESSAGE";
  local_68 = 0xe;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb6428 = (ulonglong)uVar1;
  local_70 = "NOTIFICATION_MESSAGE";
  local_68 = 0x14;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb6430 = (ulonglong)uVar1;
  local_70 = "MENU_TUTORIAL_MESSAGE";
  local_68 = 0x15;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb6438 = (ulonglong)uVar1;
  local_70 = "collectible";
  local_68 = 0xb;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70);
  _DAT_14cbb6440 = (ulonglong)uVar1;
  local_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 5;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b88e540);
  local_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b88ea20);
  local_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b88ef30);
  local_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b88f160);
  local_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b88f320);
  FUN_1400b22c2(&DAT_14cbb6538,"weapon_dps_estimate");
  atexit((_func_5014 *)&LAB_1440736a5);
  _DAT_14cbb654c = 0;
  FUN_14052b5e0(&DAT_14cbb6548,"character",0);
  _DAT_14cbb6558 = 0;
  FUN_14052b5e0(&DAT_14cbb6554,"profile",0);
  local_70 = "entry_sets";
  local_68 = 10;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb6560 = (ulonglong)uVar1;
  local_70 = "entries";
  local_68 = 7;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb6568 = (ulonglong)uVar1;
  local_70 = "menu_title";
  local_68 = 10;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb6570 = (ulonglong)uVar1;
  local_70 = "actions";
  local_68 = 7;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb6578 = (ulonglong)uVar1;
  local_70 = "loc_text";
  local_68 = 8;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb6580 = (ulonglong)uVar1;
  local_70 = "desc_text";
  local_68 = 9;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb6588 = (ulonglong)uVar1;
  local_70 = "style";
  local_68 = 5;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb6590 = (ulonglong)uVar1;
  local_70 = "horizontal";
  local_68 = 10;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb6598 = (ulonglong)uVar1;
  local_70 = "entry_set_default";
  local_68 = 0x11;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb65a0 = (ulonglong)uVar1;
  local_70 = "required_nexus_layer";
  local_68 = 0x14;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb65a8 = (ulonglong)uVar1;
  local_70 = "tooltip_key";
  local_68 = 0xb;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb65b0 = (ulonglong)uVar1;
  local_70 = "set_push";
  local_68 = 8;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb65b8 = (ulonglong)uVar1;
  local_70 = "exit_game";
  local_68 = 9;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb65c0 = (ulonglong)uVar1;
  local_70 = "back";
  local_68 = 4;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb65c8 = (ulonglong)uVar1;
  local_70 = "back_actions";
  local_68 = 0xc;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb65d0 = (ulonglong)uVar1;
  _DAT_14cbb65d8 = 0;
  uRam000000014cbb65e0 = 0;
  _DAT_14cbb65e8 = 0;
  DAT_14cbb65f0 = 0;
  uRam000000014cbb65f8 = 0;
  FUN_1446ddda2(&DAT_14cbb65d8,&DAT_14b81bd00,0);
  atexit((_func_5014 *)&LAB_1440736b6);
  local_70 = "num_rows_override";
  local_68 = 0x11;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb6600 = (ulonglong)uVar1;
  local_70 = "show_capacity_text";
  local_68 = 0x12;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb6608 = (ulonglong)uVar1;
  local_70 = "num_columns_override";
  local_68 = 0x14;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb6610 = (ulonglong)uVar1;
  local_70 = "sort_list_config";
  local_68 = 0x10;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb6618 = (ulonglong)uVar1;
  local_70 = "filter_list_config";
  local_68 = 0x12;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb6620 = (ulonglong)uVar1;
  local_70 = "default_sort_ident";
  local_68 = 0x12;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb6628 = (ulonglong)uVar1;
  local_70 = "enable_filter";
  local_68 = 0xd;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb6630 = (ulonglong)uVar1;
  local_70 = "enable_sort";
  local_68 = 0xb;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb6638 = (ulonglong)uVar1;
  FUN_1400b22c2(&DAT_14cbb6640,"backpack_item_grid");
  atexit((_func_5014 *)&LAB_1440736c7);
  FUN_1400b22c2(&DAT_14cbb6650,"bpack_sort_asc_dsc");
  atexit((_func_5014 *)&LAB_1440736d8);
  FUN_1400b22c2(&DAT_14cbb6660,"sort-dropdown");
  atexit((_func_5014 *)&LAB_1440736e9);
  FUN_1400b22c2(&DAT_14cbb6670,"filter-dropdown");
  atexit((_func_5014 *)&LAB_1440736fa);
  local_70 = "ITEM_CARD";
  local_68 = 9;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb6680 = (ulonglong)uVar1;
  local_70 = "ITEM_CARD_COMPARE";
  local_68 = 0x11;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb6688 = (ulonglong)uVar1;
  local_70 = "MENU_FULL_BACKPACK";
  local_68 = 0x12;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb6690 = (ulonglong)uVar1;
  local_70 = "MENU_POPUP_BACKPACK";
  local_68 = 0x13;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb6698 = (ulonglong)uVar1;
  local_70 = "MENU_PLAYER_STATS";
  local_68 = 0x11;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb66a0 = (ulonglong)uVar1;
  FUN_1400b22c2(&DAT_14cbb66a8,"filter-dropdown");
  atexit((_func_5014 *)&LAB_14407370b);
  FUN_1400b22c2(&DAT_14cbb66b8,"equip_slot_dropdown");
  atexit((_func_5014 *)&LAB_14407371c);
  FUN_1400b22c2(&DAT_14cbb66c8,"mark-dropdown");
  atexit((_func_5014 *)&LAB_14407372d);
  FUN_1400b22c2(&DAT_14cbb66d8,"item-dropdown");
  atexit((_func_5014 *)&LAB_14407373e);
  FUN_1400b22c2(&DAT_14cbb66e8,"sort-dropdown");
  atexit((_func_5014 *)&LAB_14407374f);
  FUN_1400b22c2(&DAT_14cbb66f8,&DAT_149e3cc88);
  atexit((_func_5014 *)&LAB_144073760);
  FUN_1400b22c2(&DAT_14cbb6708,"Popup");
  atexit((_func_5014 *)&LAB_144073771);
  FUN_1400b22c2(&DAT_14cbb6718,"Fullsize");
  atexit((_func_5014 *)&LAB_144073782);
  FUN_1400b22c2(&DAT_14cbb6728,"EchoLogs");
  atexit((_func_5014 *)&LAB_144073793);
  FUN_1400b22c2(&DAT_14cbb6738,"PlayerStats");
  atexit((_func_5014 *)&LAB_1440737a4);
  FUN_1400b22c2(&DAT_14cbb6748,"RewardCenter");
  atexit((_func_5014 *)&LAB_1440737b5);
  FUN_140056680(&DAT_14cbb6758,L"reset");
  atexit((_func_5014 *)&LAB_1440737c6);
  local_70 = "add_on_activate";
  local_68 = 0xf;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb6768 = (ulonglong)uVar1;
  local_70 = "remove_on_deactivate";
  local_68 = 0x14;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb6770 = (ulonglong)uVar1;
  local_70 = "filter_selected";
  local_68 = 0xf;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb6778 = (ulonglong)uVar1;
  local_70 = "hide_messages_on_deactivate";
  local_68 = 0x1b;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb6780 = (ulonglong)uVar1;
  local_70 = "drop_action_supported";
  local_68 = 0x15;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb6788 = (ulonglong)uVar1;
  local_70 = "equip_action_supported";
  local_68 = 0x16;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb6790 = (ulonglong)uVar1;
  local_70 = "unequip_action_supported";
  local_68 = 0x18;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb6798 = (ulonglong)uVar1;
  local_70 = "compare_action_supported";
  local_68 = 0x18;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb67a0 = (ulonglong)uVar1;
  local_70 = "mark_item_action_supported";
  local_68 = 0x1a;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb67a8 = (ulonglong)uVar1;
  local_70 = "mark_multiple_items_supported";
  local_68 = 0x1d;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb67b0 = (ulonglong)uVar1;
  local_70 = "remote_inventory_action_supported";
  local_68 = 0x21;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb67b8 = (ulonglong)uVar1;
  local_70 = "unequip_message_ident";
  local_68 = 0x15;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb67c0 = (ulonglong)uVar1;
  local_70 = "equip_message_ident";
  local_68 = 0x13;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb67c8 = (ulonglong)uVar1;
  local_70 = "swap_message_ident";
  local_68 = 0x12;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb67d0 = (ulonglong)uVar1;
  local_70 = "drop_message_ident";
  local_68 = 0x12;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb67d8 = (ulonglong)uVar1;
  local_70 = "cant_equip_message_ident";
  local_68 = 0x18;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb67e0 = (ulonglong)uVar1;
  local_70 = "insufficient_space_error_ident";
  local_68 = 0x1e;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb67e8 = (ulonglong)uVar1;
  local_70 = "multiple_item_deposit_ident";
  local_68 = 0x1b;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb67f0 = (ulonglong)uVar1;
  local_70 = "deposit_message_ident";
  local_68 = 0x15;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb67f8 = (ulonglong)uVar1;
  local_70 = "incomplete_deposit_ident";
  local_68 = 0x18;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb6800 = (ulonglong)uVar1;
  local_70 = "backpack_class_html";
  local_68 = 0x13;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb6808 = (ulonglong)uVar1;
  local_70 = "standin_config";
  local_68 = 0xe;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb6810 = (ulonglong)uVar1;
  local_70 = "player_standin_tag";
  local_68 = 0x12;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb6818 = (ulonglong)uVar1;
  local_70 = "echo_bot_standin_tag";
  local_68 = 0x14;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb6820 = (ulonglong)uVar1;
  local_70 = "sortable_numeric_stats";
  local_68 = 0x16;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb6828 = (ulonglong)uVar1;
  local_70 = "escape_hold_supported";
  local_68 = 0x15;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb6830 = (ulonglong)uVar1;
  local_70 = "max_visible_items";
  local_68 = 0x11;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb6838 = (ulonglong)uVar1;
  FUN_140056680(&DAT_14cbb6840,L"action_ui_drop_item");
  atexit((_func_5014 *)&LAB_1440737d7);
  FUN_140056680(&DAT_14cbb6850,L"action_ui_equip_item");
  atexit((_func_5014 *)&LAB_1440737e8);
  FUN_140056680(&DAT_14cbb6860,L"action_ui_unequip_item");
  atexit((_func_5014 *)&LAB_1440737f9);
  FUN_140056680(&DAT_14cbb6870,L"action_ui_compare_item");
  atexit((_func_5014 *)&LAB_14407380a);
  FUN_140056680(&DAT_14cbb6880,L"action_ui_cursor_click");
  atexit((_func_5014 *)&LAB_14407381b);
  FUN_140056680(&DAT_14cbb6890,L"action_ui_set_item_flag");
  atexit((_func_5014 *)&LAB_14407382c);
  FUN_140056680(&DAT_14cbb68a0,L"action_ui_remote_bank_deposit");
  atexit((_func_5014 *)&LAB_14407383d);
  FUN_140056680(&DAT_14cbb68b0,L"action_ui_mark_all_filtered");
  atexit((_func_5014 *)&LAB_14407384e);
  FUN_140056680(&DAT_14cbb68c0,L"action_ui_menu_escape");
  atexit((_func_5014 *)&LAB_14407385f);
  FUN_140056680(&DAT_14cbb68d0,L"action_ui_show_player_stats");
  atexit((_func_5014 *)&LAB_144073870);
  FUN_140056680(&DAT_14cbb68e0,L"action_ui_mark_hovered_as_junk");
  atexit((_func_5014 *)&LAB_144073881);
  FUN_140056680(&DAT_14cbb68f0,L"action_ui_open_reward_center");
  atexit((_func_5014 *)&LAB_144073892);
  FUN_140056680(&DAT_14cbb6900,L"action_ui_select_slot_1");
  atexit((_func_5014 *)&LAB_1440738a3);
  FUN_140056680(&DAT_14cbb6910,L"action_ui_select_slot_2");
  atexit((_func_5014 *)&LAB_1440738b4);
  FUN_140056680(&DAT_14cbb6920,L"action_ui_select_slot_3");
  atexit((_func_5014 *)&LAB_1440738c5);
  FUN_140056680(&DAT_14cbb6930,L"action_ui_select_slot_4");
  atexit((_func_5014 *)&LAB_1440738d6);
  FUN_140056680(&DAT_14cbb6940,L"action_ui_copy_focused_item_serial_number");
  atexit((_func_5014 *)&LAB_1440738e7);
  FUN_140056680(&DAT_14cbb6950,L"action_ui_menu_escape_hold");
  atexit((_func_5014 *)&LAB_1440738f8);
  FUN_140056680(&DAT_14cbb6960,L"action_ui_inspect_item");
  atexit((_func_5014 *)&LAB_144073909);
  FUN_140056680(&DAT_14cbb6970,L"action_ui_flip_item_card");
  atexit((_func_5014 *)&LAB_14407391a);
  FUN_140056680(&DAT_14cbb6980,L"action_ui_open_all_rewards");
  atexit((_func_5014 *)&LAB_14407392b);
  FUN_140056680(&DAT_14cbb6990,L"SelectText");
  atexit((_func_5014 *)&LAB_14407393c);
  FUN_140056680(&DAT_14cbb69a0,L"CompareHint");
  atexit((_func_5014 *)&LAB_14407394d);
  FUN_140056680(&DAT_14cbb69b0,L"EquipHint");
  atexit((_func_5014 *)&LAB_14407395e);
  FUN_140056680(&DAT_14cbb69c0,L"UnequipHint");
  atexit((_func_5014 *)&LAB_14407396f);
  FUN_140056680(&DAT_14cbb69d0,L"DropHint");
  atexit((_func_5014 *)&LAB_144073980);
  FUN_140056680(&DAT_14cbb69e0,L"SetItemFlagHint");
  atexit((_func_5014 *)&LAB_144073991);
  FUN_140056680(&DAT_14cbb69f0,L"ToggleJunkHint");
  atexit((_func_5014 *)&LAB_1440739a2);
  FUN_140056680(&DAT_14cbb6a00,L"MarkAllFilteredHint");
  atexit((_func_5014 *)&LAB_1440739b3);
  FUN_140056680(&DAT_14cbb6a10,L"PlayerStatsHint");
  atexit((_func_5014 *)&LAB_1440739c4);
  FUN_140056680(&DAT_14cbb6a20,L"SwapWeaponsHint");
  atexit((_func_5014 *)&LAB_1440739d5);
  FUN_140056680(&DAT_14cbb6a30,L"BackText");
  atexit((_func_5014 *)&LAB_1440739e6);
  FUN_140056680(&DAT_14cbb6a40,L"SellHint");
  atexit((_func_5014 *)&LAB_1440739f7);
  FUN_140056680(&DAT_14cbb6a50,L"BuyHint");
  atexit((_func_5014 *)&LAB_144073a08);
  FUN_140056680(&DAT_14cbb6a60,L"ExitMenuHint");
  atexit((_func_5014 *)&LAB_144073a19);
  FUN_140056680(&DAT_14cbb6a70,L"OpenAllRewardsHint");
  atexit((_func_5014 *)&LAB_144073a2a);
  FUN_1400b22c2(&DAT_14cbb6a80,"trash");
  atexit((_func_5014 *)&LAB_144073a3b);
  FUN_1400b22c2(&DAT_14cbb6a90,"favorite");
  atexit((_func_5014 *)&LAB_144073a4c);
  FUN_1400b22c2(&DAT_14cbb6aa0,"bankdeposit");
  atexit((_func_5014 *)&LAB_144073a5d);
  FUN_1400b22c2(&DAT_14cbb6ab0,"taggroup1");
  atexit((_func_5014 *)&LAB_144073a6e);
  FUN_1400b22c2(&DAT_14cbb6ac0,"taggroup2");
  atexit((_func_5014 *)&LAB_144073a7f);
  FUN_1400b22c2(&DAT_14cbb6ad0,"taggroup3");
  atexit((_func_5014 *)&LAB_144073a90);
  FUN_1400b22c2(&DAT_14cbb6ae0,"taggroup4");
  atexit((_func_5014 *)&LAB_144073aa1);
  local_70 = "trash";
  local_68 = 5;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb6af0 = (ulonglong)uVar1;
  local_70 = "favorite";
  local_68 = 8;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb6af8 = (ulonglong)uVar1;
  local_70 = "bankdeposit";
  local_68 = 0xb;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb6b00 = (ulonglong)uVar1;
  local_70 = "taggroup1";
  local_68 = 9;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb6b08 = (ulonglong)uVar1;
  local_70 = "taggroup2";
  local_68 = 9;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb6b10 = (ulonglong)uVar1;
  local_70 = "taggroup3";
  local_68 = 9;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb6b18 = (ulonglong)uVar1;
  local_70 = "taggroup4";
  local_68 = 9;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb6b20 = (ulonglong)uVar1;
  FUN_1400b22c2(&DAT_14cbb6b28,"OpenBackpack");
  atexit((_func_5014 *)&LAB_144073ab2);
  FUN_1400b22c2(&DAT_14cbb6b38,"CloseBackpack");
  atexit((_func_5014 *)&LAB_144073ac3);
  FUN_1400b22c2(&DAT_14cbb6b48,"OpenPlayerStats");
  atexit((_func_5014 *)&LAB_144073ad4);
  FUN_1400b22c2(&DAT_14cbb6b58,"ClosePlayerStats");
  atexit((_func_5014 *)&LAB_144073ae5);
  FUN_1400b22c2(&DAT_14cbb6b68,"OpenRewardCenter");
  atexit((_func_5014 *)&LAB_144073af6);
  FUN_1400b22c2(&DAT_14cbb6b78,"CloseRewardCenter");
  atexit((_func_5014 *)&LAB_144073b07);
  FUN_1400b22c2(&DAT_14cbb6b88,"CompareStart");
  atexit((_func_5014 *)&LAB_144073b18);
  FUN_1400b22c2(&DAT_14cbb6b98,"CompareStop");
  atexit((_func_5014 *)&LAB_144073b29);
  FUN_1400b22c2(&DAT_14cbb6ba8,"UnequipItem");
  atexit((_func_5014 *)&LAB_144073b3a);
  FUN_1400b22c2(&DAT_14cbb6bb8,"EquipItem");
  atexit((_func_5014 *)&LAB_144073b4b);
  FUN_1400b22c2(&DAT_14cbb6bc8,"DropItem");
  atexit((_func_5014 *)&LAB_144073b5c);
  FUN_1400b22c2(&DAT_14cbb6bd8,"MarkItem");
  atexit((_func_5014 *)&LAB_144073b6d);
  FUN_1400b22c2(&DAT_14cbb6be8,"Error");
  atexit((_func_5014 *)&LAB_144073b7e);
  FUN_1400b22c2(&DAT_14cbb6bf8,"ElementUnfocused");
  atexit((_func_5014 *)&LAB_144073b8f);
  FUN_1400b22c2(&DAT_14cbb6c08,"ElementFocused");
  atexit((_func_5014 *)&LAB_144073ba0);
  FUN_1400b22c2(&DAT_14cbb6c18,"ElementClicked");
  atexit((_func_5014 *)&LAB_144073bb1);
  FUN_1400b22c2(&DAT_14cbb6c28,"EscapeInput");
  atexit((_func_5014 *)&LAB_144073bc2);
  FUN_1400b22c2(&DAT_14cbb6c38,"WeaponSlotFocused");
  atexit((_func_5014 *)&LAB_144073bd3);
  FUN_1400b22c2(&DAT_14cbb6c48,"WeaponSlotUnfocused");
  atexit((_func_5014 *)&LAB_144073be4);
  FUN_1400b22c2(&DAT_14cbb6c58,"GearSlotFocused");
  atexit((_func_5014 *)&LAB_144073bf5);
  FUN_1400b22c2(&DAT_14cbb6c68,"GearSlotUnfocused");
  atexit((_func_5014 *)&LAB_144073c06);
  FUN_1400b22c2(&DAT_14cbb6c78,"BackpackSlotFocused");
  atexit((_func_5014 *)&LAB_144073c17);
  FUN_1400b22c2(&DAT_14cbb6c88,"BackpackSlotUnfocused");
  atexit((_func_5014 *)&LAB_144073c28);
  FUN_1400b22c2(&DAT_14cbb6c98,"MarkItemBank");
  atexit((_func_5014 *)&LAB_144073c39);
  FUN_1400b22c2(&DAT_14cbb6ca8,"MarkItemTrash");
  atexit((_func_5014 *)&LAB_144073c4a);
  FUN_1400b22c2(&DAT_14cbb6cb8,"MarkItemFavorite");
  atexit((_func_5014 *)&LAB_144073c5b);
  FUN_1400b22c2(&DAT_14cbb6cc8,"ClickPistol");
  atexit((_func_5014 *)&LAB_144073c6c);
  FUN_1400b22c2(&DAT_14cbb6cd8,"ClickAssaultRifle");
  atexit((_func_5014 *)&LAB_144073c7d);
  FUN_1400b22c2(&DAT_14cbb6ce8,"ClickSMG");
  atexit((_func_5014 *)&LAB_144073c8e);
  FUN_1400b22c2(&DAT_14cbb6cf8,"ClickShotgun");
  atexit((_func_5014 *)&LAB_144073c9f);
  FUN_1400b22c2(&DAT_14cbb6d08,"ClickSniper");
  atexit((_func_5014 *)&LAB_144073cb0);
  FUN_1400b22c2(&DAT_14cbb6d18,"ClickRepKit");
  atexit((_func_5014 *)&LAB_144073cc1);
  FUN_1400b22c2(&DAT_14cbb6d28,"ClickGrenade");
  atexit((_func_5014 *)&LAB_144073cd2);
  FUN_1400b22c2(&DAT_14cbb6d38,"ClickHeavyWeapon");
  atexit((_func_5014 *)&LAB_144073ce3);
  FUN_1400b22c2(&DAT_14cbb6d48,"ClickClassMod");
  atexit((_func_5014 *)&LAB_144073cf4);
  FUN_1400b22c2(&DAT_14cbb6d58,"ClickGadget");
  atexit((_func_5014 *)&LAB_144073d05);
  FUN_1400b22c2(&DAT_14cbb6d68,"ClickEnhancement");
  atexit((_func_5014 *)&LAB_144073d16);
  FUN_1400b22c2(&DAT_14cbb6d78,"ClickShield");
  atexit((_func_5014 *)&LAB_144073d27);
  FUN_1400b22c2(&DAT_14cbb6d88,"EquipPistol");
  atexit((_func_5014 *)&LAB_144073d38);
  FUN_1400b22c2(&DAT_14cbb6d98,"EquipAssaultRifle");
  atexit((_func_5014 *)&LAB_144073d49);
  FUN_1400b22c2(&DAT_14cbb6da8,"EquipSMG");
  atexit((_func_5014 *)&LAB_144073d5a);
  FUN_1400b22c2(&DAT_14cbb6db8,"EquipShotgun");
  atexit((_func_5014 *)&LAB_144073d6b);
  FUN_1400b22c2(&DAT_14cbb6dc8,"EquipSniper");
  atexit((_func_5014 *)&LAB_144073d7c);
  FUN_1400b22c2(&DAT_14cbb6dd8,"EquipRepKit");
  atexit((_func_5014 *)&LAB_144073d8d);
  FUN_1400b22c2(&DAT_14cbb6de8,"EquipGrenade");
  atexit((_func_5014 *)&LAB_144073d9e);
  FUN_1400b22c2(&DAT_14cbb6df8,"EquipHeavyWeapon");
  atexit((_func_5014 *)&LAB_144073daf);
  FUN_1400b22c2(&DAT_14cbb6e08,"EquipClassMod");
  atexit((_func_5014 *)&LAB_144073dc0);
  FUN_1400b22c2(&DAT_14cbb6e18,"EquipGadget");
  atexit((_func_5014 *)&LAB_144073dd1);
  FUN_1400b22c2(&DAT_14cbb6e28,"EquipEnhancement");
  atexit((_func_5014 *)&LAB_144073de2);
  FUN_1400b22c2(&DAT_14cbb6e38,"EquipShield");
  atexit((_func_5014 *)&LAB_144073df3);
  FUN_1400b22c2(&DAT_14cbb6e48,"weapon");
  atexit((_func_5014 *)&LAB_144073e04);
  FUN_1400b22c2(&DAT_14cbb6e58,"weapon_ps");
  atexit((_func_5014 *)&LAB_144073e15);
  FUN_1400b22c2(&DAT_14cbb6e68,"weapon_ar");
  atexit((_func_5014 *)&LAB_144073e26);
  FUN_1400b22c2(&DAT_14cbb6e78,"weapon_sg");
  atexit((_func_5014 *)&LAB_144073e37);
  FUN_1400b22c2(&DAT_14cbb6e88,"weapon_sr");
  atexit((_func_5014 *)&LAB_144073e48);
  FUN_1400b22c2(&DAT_14cbb6e98,"weapon_sm");
  atexit((_func_5014 *)&LAB_144073e59);
  FUN_1400b22c2(&DAT_14cbb6ea8,"grenade_gadget");
  atexit((_func_5014 *)&LAB_144073e6a);
  FUN_1400b22c2(&DAT_14cbb6eb8,"shield");
  atexit((_func_5014 *)&LAB_144073e7b);
  FUN_1400b22c2(&DAT_14cbb6ec8,"heavy_weapon_gadget");
  atexit((_func_5014 *)&LAB_144073e8c);
  FUN_1400b22c2(&DAT_14cbb6ed8,"repair_kit");
  atexit((_func_5014 *)&LAB_144073e9d);
  FUN_1400b22c2(&DAT_14cbb6ee8,"classmod");
  atexit((_func_5014 *)&LAB_144073eae);
  FUN_1400b22c2(&DAT_14cbb6ef8,"classmod_dark_siren");
  atexit((_func_5014 *)&LAB_144073ebf);
  FUN_1400b22c2(&DAT_14cbb6f08,"classmod_exo_soldier");
  atexit((_func_5014 *)&LAB_144073ed0);
  FUN_1400b22c2(&DAT_14cbb6f18,"classmod_gravitar");
  atexit((_func_5014 *)&LAB_144073ee1);
  FUN_1400b22c2(&DAT_14cbb6f28,"classmod_paladin");
  atexit((_func_5014 *)&LAB_144073ef2);
  FUN_1400b22c2(&DAT_14cbb6f38,"gadget");
  atexit((_func_5014 *)&LAB_144073f03);
  FUN_1400b22c2(&DAT_14cbb6f48,"enhancement");
  atexit((_func_5014 *)&LAB_144073f14);
  FUN_140056680(&DAT_14cbb6f58,L"recent");
  atexit((_func_5014 *)&LAB_144073f25);
  FUN_140056680(&DAT_14cbb6f68,L"type");
  atexit((_func_5014 *)&LAB_144073f36);
  FUN_140056680(&DAT_14cbb6f78,L"level");
  atexit((_func_5014 *)&LAB_144073f47);
  FUN_140056680(&DAT_14cbb6f88,L"base_name");
  atexit((_func_5014 *)&LAB_144073f58);
  FUN_140056680(&DAT_14cbb6f98,L"first_letter");
  atexit((_func_5014 *)&LAB_144073f69);
  FUN_140056680(&DAT_14cbb6fa8,L"value");
  atexit((_func_5014 *)&LAB_144073f7a);
  FUN_140056680(&DAT_14cbb6fb8,L"rarity");
  atexit((_func_5014 *)&LAB_144073f8b);
  FUN_140056680(&DAT_14cbb6fc8,L"manufacturer");
  atexit((_func_5014 *)&LAB_144073f9c);
  _Src = DAT_14cbb6538;
  DAT_14cbb6fd8 = (void *)0x0;
  lVar2 = (longlong)DAT_14cbb6540;
  _DAT_14cbb6fe0 = DAT_14cbb6540;
  if (lVar2 == 0) {
    _DAT_14cbb6fe4 = 0;
  }
  else {
    FUN_1446dd670(&DAT_14cbb6fd8,DAT_14cbb6540,0);
    memcpy(DAT_14cbb6fd8,_Src,lVar2 * 2);
  }
  atexit((_func_5014 *)&LAB_144073fad);
  FUN_140056680(&DAT_14cbb6fe8,L"healing");
  atexit((_func_5014 *)&LAB_144073fbe);
  local_70 = "cancel";
  local_68 = 6;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb6ff8 = (ulonglong)uVar1;
  local_70 = "partial";
  local_68 = 7;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7000 = (ulonglong)uVar1;
  local_70 = "all";
  local_68 = 3;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7008 = (ulonglong)uVar1;
  uStack_78 = 1;
  local_80 = &PTR_FUN_14b88fba0;
  local_88 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b88fbc0);
  local_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b88ffb0);
  local_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8900b0);
  local_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8905b0);
  _DAT_14cbb70bc = 0;
  FUN_14052b5e0(&DAT_14cbb70b8,"bCanFilter",0);
  _DAT_14cbb70c8 = "bCanFilter";
  _DAT_14cbb70d4 = 0;
  FUN_14052b5e0(&DAT_14cbb70d0,"DefName",0);
  _DAT_14cbb70e0 = "DefName";
  _DAT_14cbb70ec = 0;
  FUN_14052b5e0(&DAT_14cbb70e8,"DefNameList",0);
  _DAT_14cbb70f8 = "DefNameList";
  _DAT_14cbb7104 = 0;
  FUN_14052b5e0(&DAT_14cbb7100,"CityDef",0);
  _DAT_14cbb7110 = "CityDef";
  _DAT_14cbb711c = 0;
  FUN_14052b5e0(&DAT_14cbb7118,"OverworldDef",0);
  _DAT_14cbb7128 = "OverworldDef";
  _DAT_14cbb7134 = 0;
  FUN_14052b5e0(&DAT_14cbb7130,"IgnoredRegions",0);
  _DAT_14cbb7140 = "IgnoredRegions";
  local_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 0xd;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b892f10);
  local_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 4;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b893ec0);
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144077ba8 FUN_144077ba8 body=57 status=ok
// SIG undefined FUN_144077ba8(void)

void FUN_144077ba8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb7768 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb7768 = FUN_140002ddd(FUN_146603593,uVar1,L"OakUIData_BuddyInfo");
  }
  return;
}



// FUNCTION 144077c1a FUN_144077c1a body=57 status=ok
// SIG undefined FUN_144077c1a(void)

void FUN_144077c1a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb7808 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb7808 =
         FUN_140002ddd(FUN_1466037dd,uVar1,L"OakWidgetData_CalibrationOptionsMenu_Brightness");
  }
  return;
}



// FUNCTION 144077c62 FUN_144077c62 body=57 status=ok
// SIG undefined FUN_144077c62(void)

void FUN_144077c62(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb7820 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb7820 =
         FUN_140002ddd(FUN_14660386f,uVar1,L"OakWidgetData_CalibrationOptionsMenu_ScreenBoundaries")
    ;
  }
  return;
}



// FUNCTION 144077caa FUN_144077caa body=57 status=ok
// SIG undefined FUN_144077caa(void)

void FUN_144077caa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb7838 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb7838 = FUN_140002ddd(FUN_146603901,uVar1,L"OakWidgetData_ChallengeTracker");
  }
  return;
}



// FUNCTION 144077cf2 FUN_144077cf2 body=57 status=ok
// SIG undefined FUN_144077cf2(void)

void FUN_144077cf2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb7850 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb7850 = FUN_140002ddd(FUN_146603993,uVar1,L"OakWidgetData_CinematicMenu");
  }
  return;
}



// FUNCTION 144077d3a FUN_144077d3a body=57 status=ok
// SIG undefined FUN_144077d3a(void)

void FUN_144077d3a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb7968 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb7968 = FUN_140002ddd(FUN_1466039ed,uVar1,L"OakUIData_Compass");
  }
  return;
}



// FUNCTION 144077d9e FUN_144077d9e body=57 status=ok
// SIG undefined FUN_144077d9e(void)

void FUN_144077d9e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb79b0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb79b0 = FUN_140002ddd(FUN_146603ba3,uVar1,L"OakUIData_Crosshair");
  }
  return;
}



// FUNCTION 144077dd8 FUN_144077dd8 body=1003 status=ok
// SIG undefined FUN_144077dd8(void)

longlong FUN_144077dd8(longlong param_1,longlong param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  FUN_1489fb7d2();
  *(undefined2 *)(param_1 + 0xb4) = *(undefined2 *)(param_2 + 0xb4);
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
  if (*(int *)(param_1 + 0xbc) != *(int *)(param_2 + 0xbc)) {
    *(undefined1 *)(param_1 + 0xb8) = *(undefined1 *)(param_2 + 0xb8);
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_2 + 0xbc);
  }
  if (*(int *)(param_1 + 0xc4) != *(int *)(param_2 + 0xc4)) {
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
    *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_2 + 0xc4);
  }
  if (*(int *)(param_1 + 0xcc) != *(int *)(param_2 + 0xcc)) {
    *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 200);
    *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_2 + 0xcc);
  }
  if (*(int *)(param_1 + 0xd4) != *(int *)(param_2 + 0xd4)) {
    *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
    *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_2 + 0xd4);
  }
  if (*(int *)(param_1 + 0xdc) != *(int *)(param_2 + 0xdc)) {
    *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
    *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_2 + 0xdc);
  }
  if (*(int *)(param_1 + 0xe4) != *(int *)(param_2 + 0xe4)) {
    *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
    *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_2 + 0xe4);
  }
  if (*(int *)(param_1 + 0xec) != *(int *)(param_2 + 0xec)) {
    *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0xe8);
    *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_2 + 0xec);
  }
  if (*(int *)(param_1 + 0xf4) != *(int *)(param_2 + 0xf4)) {
    *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0xf0);
    *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_2 + 0xf4);
  }
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x100);
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_2 + 0xf8);
  if (*(int *)(param_1 + 0x108) != *(int *)(param_2 + 0x108)) {
    *(undefined1 *)(param_1 + 0x104) = *(undefined1 *)(param_2 + 0x104);
    *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_2 + 0x108);
  }
  if (*(int *)(param_1 + 0x110) != *(int *)(param_2 + 0x110)) {
    *(undefined1 *)(param_1 + 0x10c) = *(undefined1 *)(param_2 + 0x10c);
    *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_2 + 0x110);
  }
  if (*(int *)(param_1 + 0x118) != *(int *)(param_2 + 0x118)) {
    *(undefined1 *)(param_1 + 0x114) = *(undefined1 *)(param_2 + 0x114);
    *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_2 + 0x118);
  }
  if (*(int *)(param_1 + 0x120) != *(int *)(param_2 + 0x120)) {
    *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_2 + 0x11c);
    *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_2 + 0x120);
  }
  if (*(int *)(param_1 + 0x128) != *(int *)(param_2 + 0x128)) {
    *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_2 + 0x124);
    *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_2 + 0x128);
  }
  if (*(int *)(param_1 + 0x140) != *(int *)(param_2 + 0x140)) {
    if (param_1 != param_2) {
      iVar1 = *(int *)(param_2 + 0x138);
      pvVar2 = *(void **)(param_2 + 0x130);
      *(int *)(param_1 + 0x138) = iVar1;
      if (iVar1 == 0 && *(int *)(param_1 + 0x13c) == 0) {
        *(undefined4 *)(param_1 + 0x13c) = 0;
      }
      else {
        FUN_1446dd670((undefined8 *)(param_1 + 0x130),iVar1);
        if (iVar1 != 0) {
          memcpy(*(void **)(param_1 + 0x130),pvVar2,(longlong)iVar1 * 2);
        }
      }
    }
    *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_2 + 0x140);
  }
  if (*(int *)(param_1 + 0x14c) != *(int *)(param_2 + 0x14c)) {
    *(undefined1 *)(param_1 + 0x148) = *(undefined1 *)(param_2 + 0x148);
    *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_2 + 0x14c);
  }
  if (*(int *)(param_1 + 0x160) != *(int *)(param_2 + 0x160)) {
    if (param_1 != param_2) {
      iVar1 = *(int *)(param_2 + 0x158);
      pvVar2 = *(void **)(param_2 + 0x150);
      *(int *)(param_1 + 0x158) = iVar1;
      if (iVar1 == 0 && *(int *)(param_1 + 0x15c) == 0) {
        *(undefined4 *)(param_1 + 0x15c) = 0;
      }
      else {
        FUN_1446dd670((undefined8 *)(param_1 + 0x150),iVar1);
        if (iVar1 != 0) {
          memcpy(*(void **)(param_1 + 0x150),pvVar2,(longlong)iVar1 * 2);
        }
      }
    }
    *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(param_2 + 0x160);
  }
  if (*(int *)(param_1 + 0x178) != *(int *)(param_2 + 0x178)) {
    uVar3 = *(undefined8 *)(param_2 + 0x170);
    *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_2 + 0x168);
    *(undefined8 *)(param_1 + 0x170) = uVar3;
    *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_2 + 0x178);
  }
  if (*(int *)(param_1 + 0x18c) != *(int *)(param_2 + 0x18c)) {
    uVar3 = *(undefined8 *)(param_2 + 0x184);
    *(undefined8 *)(param_1 + 0x17c) = *(undefined8 *)(param_2 + 0x17c);
    *(undefined8 *)(param_1 + 0x184) = uVar3;
    *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_2 + 0x18c);
  }
  if (*(int *)(param_1 + 0x1a0) != *(int *)(param_2 + 0x1a0)) {
    uVar3 = *(undefined8 *)(param_2 + 0x198);
    *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_2 + 400);
    *(undefined8 *)(param_1 + 0x198) = uVar3;
    *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_2 + 0x1a0);
  }
  return param_1;
}



// FUNCTION 1440781d2 FUN_1440781d2 body=57 status=ok
// SIG undefined FUN_1440781d2(void)

void FUN_1440781d2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb79c8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb79c8 = FUN_140002ddd(FUN_146603c35,uVar1,L"OakUIData_Cursor");
  }
  return;
}



// FUNCTION 1440782b4 FUN_1440782b4 body=57 status=ok
// SIG undefined FUN_1440782b4(void)

void FUN_1440782b4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb8718 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb8718 = FUN_140002ddd(FUN_1466041bd,uVar1,L"OakWidgetData_DownState");
  }
  return;
}



// FUNCTION 144078342 FUN_144078342 body=57 status=ok
// SIG undefined FUN_144078342(void)

void FUN_144078342(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb8818 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb8818 = FUN_140002ddd(FUN_1466044f3,uVar1,L"OakUIData_EnemyRadar");
  }
  return;
}



// FUNCTION 144078398 FUN_144078398 body=57 status=ok
// SIG undefined FUN_144078398(void)

void FUN_144078398(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb8848 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb8848 = FUN_140002ddd(FUN_146604617,uVar1,L"OakWidgetData_GameSettingsMenu");
  }
  return;
}



// FUNCTION 1440783d2 FUN_1440783d2 body=587 status=ok
// SIG undefined FUN_1440783d2(void)

longlong FUN_1440783d2(longlong param_1,longlong param_2)

{
  int iVar1;
  void *pvVar2;
  
  FUN_1489fb7d2();
  if (*(int *)(param_1 + 0xb4) != *(int *)(param_2 + 0xb4)) {
    *(undefined1 *)(param_1 + 0xb0) = *(undefined1 *)(param_2 + 0xb0);
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_2 + 0xb4);
  }
  FUN_1457fd360(param_1 + 0xb8,param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_2 + 0x138);
  *(undefined2 *)(param_1 + 0x140) = *(undefined2 *)(param_2 + 0x140);
  if (param_1 == param_2) {
    *(undefined2 *)(param_1 + 0x160) = *(undefined2 *)(param_2 + 0x160);
    *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_2 + 0x158);
  }
  else {
    iVar1 = *(int *)(param_2 + 0x150);
    pvVar2 = *(void **)(param_2 + 0x148);
    *(int *)(param_1 + 0x150) = iVar1;
    if (iVar1 == 0 && *(int *)(param_1 + 0x154) == 0) {
      *(undefined4 *)(param_1 + 0x154) = 0;
    }
    else {
      FUN_1446dd670((undefined8 *)(param_1 + 0x148),iVar1);
      if (iVar1 != 0) {
        memcpy(*(void **)(param_1 + 0x148),pvVar2,(longlong)iVar1 * 2);
      }
    }
    *(undefined2 *)(param_1 + 0x160) = *(undefined2 *)(param_2 + 0x160);
    *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_2 + 0x158);
    iVar1 = *(int *)(param_2 + 0x170);
    pvVar2 = *(void **)(param_2 + 0x168);
    *(int *)(param_1 + 0x170) = iVar1;
    if (iVar1 == 0 && *(int *)(param_1 + 0x174) == 0) {
      *(undefined4 *)(param_1 + 0x174) = 0;
    }
    else {
      FUN_1446dd670((undefined8 *)(param_1 + 0x168),iVar1);
      if (iVar1 != 0) {
        memcpy(*(void **)(param_1 + 0x168),pvVar2,(longlong)iVar1 * 2);
      }
    }
  }
  FUN_1489fdc6a(param_1 + 0x178,param_2 + 0x178);
  FUN_1457fd360(param_1 + 0x210,param_2 + 0x210);
  FUN_1457fd360(param_1 + 0x290,param_2 + 0x290);
  if (*(int *)(param_1 + 0x314) != *(int *)(param_2 + 0x314)) {
    *(undefined1 *)(param_1 + 0x310) = *(undefined1 *)(param_2 + 0x310);
    *(undefined4 *)(param_1 + 0x314) = *(undefined4 *)(param_2 + 0x314);
  }
  if (*(int *)(param_1 + 0x31c) != *(int *)(param_2 + 0x31c)) {
    *(undefined1 *)(param_1 + 0x318) = *(undefined1 *)(param_2 + 0x318);
    *(undefined4 *)(param_1 + 0x31c) = *(undefined4 *)(param_2 + 0x31c);
  }
  *(undefined1 *)(param_1 + 0x322) = *(undefined1 *)(param_2 + 0x322);
  *(undefined2 *)(param_1 + 800) = *(undefined2 *)(param_2 + 800);
  if (*(int *)(param_1 + 0x328) != *(int *)(param_2 + 0x328)) {
    *(undefined1 *)(param_1 + 0x324) = *(undefined1 *)(param_2 + 0x324);
    *(undefined4 *)(param_1 + 0x328) = *(undefined4 *)(param_2 + 0x328);
  }
  if (*(int *)(param_1 + 0x330) != *(int *)(param_2 + 0x330)) {
    *(undefined1 *)(param_1 + 0x32c) = *(undefined1 *)(param_2 + 0x32c);
    *(undefined4 *)(param_1 + 0x330) = *(undefined4 *)(param_2 + 0x330);
  }
  return param_1;
}



// FUNCTION 14407863a FUN_14407863a body=57 status=ok
// SIG undefined FUN_14407863a(void)

void FUN_14407863a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb8878 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb8878 = FUN_140002ddd(FUN_14660470d,uVar1,L"OakWidgetData_HealthBar");
  }
  return;
}



// FUNCTION 144078673 FUN_144078673 body=12623 status=ok
// SIG undefined FUN_144078673(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144078673(void)

{
  void *_Src;
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  char *local_70;
  undefined4 local_68;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1446f470e(&DAT_14cbb72e0,L"Party",1);
  FUN_1446f470e(&DAT_14cbb72e8,&DAT_149e063b2,1);
  FUN_1446f470e(&DAT_14cbb72f0,L"Join",1);
  FUN_1446f470e(&DAT_14cbb72f8,L"Invite",1);
  FUN_1446f470e(&DAT_14cbb7300,L"ViewProfile",1);
  FUN_1446f470e(&DAT_14cbb7308,L"AddFriend",1);
  FUN_1446f470e(&DAT_14cbb7310,L"Mute",1);
  FUN_1446f470e(&DAT_14cbb7318,L"Unmute",1);
  FUN_1446f470e(&DAT_14cbb7320,L"Promote",1);
  FUN_1446f470e(&DAT_14cbb7328,L"Kick",1);
  FUN_1446f470e(&DAT_14cbb7330,L"AddShiftFriend",1);
  FUN_1446f470e(&DAT_14cbb7338,L"RemoveShiftFriend",1);
  FUN_1446f470e(&DAT_14cbb7340,L"AddFavorite",1);
  FUN_1446f470e(&DAT_14cbb7348,L"RemoveFavorite",1);
  FUN_1446f470e(&DAT_14cbb7350,L"BlockShiftPlayer",1);
  FUN_1446f470e(&DAT_14cbb7358,L"UnblockShiftPlayer",1);
  FUN_1446f470e(&DAT_14cbb7360,L"ReportShiftPlayer",1);
  FUN_1446f470e(&DAT_14cbb7368,L"InviteFriend",1);
  FUN_1446f470e(&DAT_14cbb7370,L"InviteRecentFriends",1);
  FUN_1446f470e(&DAT_14cbb7378,L"JoinRecentFriendsHost",1);
  FUN_1446f470e(&DAT_14cbb7380,L"ViewProfiles",1);
  FUN_1446f470e(&DAT_14cbb7388,L"TeleportToPlayer",1);
  FUN_1446f470e(&DAT_14cbb7390,L"Cancel",1);
  _DAT_14cbb7398 = 0;
  uRam000000014cbb73a0 = 0;
  _DAT_14cbb73a8 = 0;
  DAT_14cbb73b0 = 0;
  uRam000000014cbb73b8 = 0;
  FUN_1446ddda2(&DAT_14cbb7398,"Dialog_Join",0);
  atexit((_func_5014 *)&LAB_144076ee4);
  _DAT_14cbb73c0 = 0;
  uRam000000014cbb73c8 = 0;
  _DAT_14cbb73d0 = 0;
  DAT_14cbb73d8 = 0;
  uRam000000014cbb73e0 = 0;
  FUN_1446ddda2(&DAT_14cbb73c0,"Dialog_Invite",0);
  atexit((_func_5014 *)&LAB_144076ef5);
  _DAT_14cbb73e8 = 0;
  uRam000000014cbb73f0 = 0;
  _DAT_14cbb73f8 = 0;
  DAT_14cbb7400 = 0;
  uRam000000014cbb7408 = 0;
  FUN_1446ddda2(&DAT_14cbb73e8,"Dialog_ViewProfile",0);
  atexit((_func_5014 *)&LAB_144076f06);
  _DAT_14cbb7410 = 0;
  uRam000000014cbb7418 = 0;
  _DAT_14cbb7420 = 0;
  DAT_14cbb7428 = 0;
  uRam000000014cbb7430 = 0;
  FUN_1446ddda2(&DAT_14cbb7410,"Dialog_AddFriend",0);
  atexit((_func_5014 *)&LAB_144076f17);
  _DAT_14cbb7438 = 0;
  uRam000000014cbb7440 = 0;
  _DAT_14cbb7448 = 0;
  DAT_14cbb7450 = 0;
  uRam000000014cbb7458 = 0;
  FUN_1446ddda2(&DAT_14cbb7438,"Dialog_Mute",0);
  atexit((_func_5014 *)&LAB_144076f28);
  _DAT_14cbb7460 = 0;
  uRam000000014cbb7468 = 0;
  _DAT_14cbb7470 = 0;
  DAT_14cbb7478 = 0;
  uRam000000014cbb7480 = 0;
  FUN_1446ddda2(&DAT_14cbb7460,"Dialog_Unmute",0);
  atexit((_func_5014 *)&LAB_144076f39);
  _DAT_14cbb7488 = 0;
  uRam000000014cbb7490 = 0;
  _DAT_14cbb7498 = 0;
  DAT_14cbb74a0 = 0;
  uRam000000014cbb74a8 = 0;
  FUN_1446ddda2(&DAT_14cbb7488,"Dialog_Promote",0);
  atexit((_func_5014 *)&LAB_144076f4a);
  _DAT_14cbb74b0 = 0;
  uRam000000014cbb74b8 = 0;
  _DAT_14cbb74c0 = 0;
  DAT_14cbb74c8 = 0;
  uRam000000014cbb74d0 = 0;
  FUN_1446ddda2(&DAT_14cbb74b0,"Dialog_Kick",0);
  atexit((_func_5014 *)&LAB_144076f5b);
  _DAT_14cbb74d8 = 0;
  uRam000000014cbb74e0 = 0;
  _DAT_14cbb74e8 = 0;
  DAT_14cbb74f0 = 0;
  uRam000000014cbb74f8 = 0;
  FUN_1446ddda2(&DAT_14cbb74d8,"Dialog_AddShiftFriend",0);
  atexit((_func_5014 *)&LAB_144076f6c);
  _DAT_14cbb7500 = 0;
  uRam000000014cbb7508 = 0;
  _DAT_14cbb7510 = 0;
  DAT_14cbb7518 = 0;
  uRam000000014cbb7520 = 0;
  FUN_1446ddda2(&DAT_14cbb7500,"Dialog_RemoveShiftFriend",0);
  atexit((_func_5014 *)&LAB_144076f7d);
  _DAT_14cbb7528 = 0;
  uRam000000014cbb7530 = 0;
  _DAT_14cbb7538 = 0;
  DAT_14cbb7540 = 0;
  uRam000000014cbb7548 = 0;
  FUN_1446ddda2(&DAT_14cbb7528,"Dialog_AddFavorite",0);
  atexit((_func_5014 *)&LAB_144076f8e);
  _DAT_14cbb7550 = 0;
  uRam000000014cbb7558 = 0;
  _DAT_14cbb7560 = 0;
  DAT_14cbb7568 = 0;
  uRam000000014cbb7570 = 0;
  FUN_1446ddda2(&DAT_14cbb7550,"Dialog_RemoveFavorite",0);
  atexit((_func_5014 *)&LAB_144076f9f);
  _DAT_14cbb7578 = 0;
  uRam000000014cbb7580 = 0;
  _DAT_14cbb7588 = 0;
  DAT_14cbb7590 = 0;
  uRam000000014cbb7598 = 0;
  FUN_1446ddda2(&DAT_14cbb7578,"Dialog_BlockShiftPlayer",0);
  atexit((_func_5014 *)&LAB_144076fb0);
  _DAT_14cbb75a0 = 0;
  uRam000000014cbb75a8 = 0;
  _DAT_14cbb75b0 = 0;
  DAT_14cbb75b8 = 0;
  uRam000000014cbb75c0 = 0;
  FUN_1446ddda2(&DAT_14cbb75a0,"Dialog_UnblockShiftPlayer",0);
  atexit((_func_5014 *)&LAB_144076fc1);
  _DAT_14cbb75c8 = 0;
  uRam000000014cbb75d0 = 0;
  _DAT_14cbb75d8 = 0;
  DAT_14cbb75e0 = 0;
  uRam000000014cbb75e8 = 0;
  FUN_1446ddda2(&DAT_14cbb75c8,"Dialog_ReportShiftPlayer",0);
  atexit((_func_5014 *)&LAB_144076fd2);
  _DAT_14cbb75f0 = 0;
  uRam000000014cbb75f8 = 0;
  _DAT_14cbb7600 = 0;
  DAT_14cbb7608 = 0;
  uRam000000014cbb7610 = 0;
  FUN_1446ddda2(&DAT_14cbb75f0,"Dialog_InviteFriend");
  atexit((_func_5014 *)&LAB_144076fe3);
  _DAT_14cbb7618 = 0;
  uRam000000014cbb7620 = 0;
  _DAT_14cbb7628 = 0;
  DAT_14cbb7630 = 0;
  uRam000000014cbb7638 = 0;
  FUN_1446ddda2(&DAT_14cbb7618,"Dialog_InviteRecentFriends");
  atexit((_func_5014 *)&LAB_144076ff4);
  _DAT_14cbb7640 = 0;
  uRam000000014cbb7648 = 0;
  _DAT_14cbb7650 = 0;
  DAT_14cbb7658 = 0;
  uRam000000014cbb7660 = 0;
  FUN_1446ddda2(&DAT_14cbb7640,"Dialog_JoinRecentFriendsHost");
  atexit((_func_5014 *)&LAB_144077005);
  _DAT_14cbb7668 = 0;
  uRam000000014cbb7670 = 0;
  _DAT_14cbb7678 = 0;
  DAT_14cbb7680 = 0;
  uRam000000014cbb7688 = 0;
  FUN_1446ddda2(&DAT_14cbb7668,"Dialog_ViewProfiles");
  atexit((_func_5014 *)&LAB_144077016);
  _DAT_14cbb7690 = 0;
  uRam000000014cbb7698 = 0;
  _DAT_14cbb76a0 = 0;
  DAT_14cbb76a8 = 0;
  uRam000000014cbb76b0 = 0;
  FUN_1446ddda2(&DAT_14cbb7690,"Dialog_TeleportToPlayer");
  atexit((_func_5014 *)&LAB_144077027);
  _DAT_14cbb76b8 = 0;
  uRam000000014cbb76c0 = 0;
  _DAT_14cbb76c8 = 0;
  DAT_14cbb76d0 = 0;
  uRam000000014cbb76d8 = 0;
  FUN_1446ddda2(&DAT_14cbb76b8,"Dialog_Cancel");
  atexit((_func_5014 *)&LAB_144077038);
  FUN_1400b22c2(&DAT_14cbb76e0,"GoOnlineText");
  atexit((_func_5014 *)&LAB_144077049);
  FUN_1400b22c2(&DAT_14cbb76f0,"GoingOnlineTextOnePeriod");
  atexit((_func_5014 *)&LAB_14407705a);
  FUN_1400b22c2(&DAT_14cbb7700,"GoingOnlineTextTwoPeriods");
  atexit((_func_5014 *)&LAB_14407706b);
  FUN_1400b22c2(&DAT_14cbb7710,"GoingOnlineTextThreePeriods");
  atexit((_func_5014 *)&LAB_14407707c);
  local_70 = "AssetRegistry";
  local_68 = 0xd;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7720 = (ulonglong)uVar1;
  FUN_1400b22c2(&DAT_14cbb7728,"tint_siren");
  atexit((_func_5014 *)&LAB_14407708d);
  FUN_1400b22c2(&DAT_14cbb7738);
  atexit((_func_5014 *)&LAB_14407709e);
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b898d80);
  local_70 = "state_rem";
  local_68 = 9;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7778 = (ulonglong)uVar1;
  local_70 = "state_add";
  local_68 = 9;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7780 = (ulonglong)uVar1;
  local_70 = "state_remove_primary";
  local_68 = 0x14;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7788 = (ulonglong)uVar1;
  local_70 = "audio_calibration";
  local_68 = 0x11;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7790 = (ulonglong)uVar1;
  local_70 = "brightness_calibration";
  local_68 = 0x16;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7798 = (ulonglong)uVar1;
  local_70 = "brightness_calibration_ftc";
  local_68 = 0x1a;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb77a0 = (ulonglong)uVar1;
  local_70 = "safe_area_calibration";
  local_68 = 0x15;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb77a8 = (ulonglong)uVar1;
  local_70 = "options_accessibility";
  local_68 = 0x15;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70);
  _DAT_14cbb77b0 = (ulonglong)uVar1;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b899070);
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b899170);
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b899260);
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b899470);
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b899680);
  uStack_78 = 0;
  local_80 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b899810);
  uStack_78 = 0;
  local_80 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b899910);
  FUN_1400b22c2(&DAT_14cbb7860,"hostile");
  atexit((_func_5014 *)&LAB_1440770af);
  FUN_1400b22c2(&DAT_14cbb7870,&DAT_14b84e928);
  atexit((_func_5014 *)&LAB_1440770c0);
  FUN_1400b22c2(&DAT_14cbb7880,"locdisc");
  atexit((_func_5014 *)&LAB_1440770d1);
  FUN_1400b22c2(&DAT_14cbb7890,"locunclaimed");
  atexit((_func_5014 *)&LAB_1440770e2);
  FUN_1400b22c2(&DAT_14cbb78a0,"locclaimed");
  atexit((_func_5014 *)&LAB_1440770f3);
  FUN_1400b22c2(&DAT_14cbb78b0,"mainmission");
  atexit((_func_5014 *)&LAB_144077104);
  FUN_1400b22c2(&DAT_14cbb78c0,"sidemission");
  atexit((_func_5014 *)&LAB_144077115);
  FUN_1400b22c2(&DAT_14cbb78d0,"tempmission");
  atexit((_func_5014 *)&LAB_144077126);
  FUN_1400b22c2(&DAT_14cbb78e0,&DAT_149e62dd2);
  atexit((_func_5014 *)&LAB_144077137);
  FUN_1400b22c2(&DAT_14cbb78f0,&DAT_14b84e971);
  atexit((_func_5014 *)&LAB_144077148);
  FUN_1400b22c2(&DAT_14cbb7900,&DAT_14b84e975);
  atexit((_func_5014 *)&LAB_144077159);
  FUN_1400b22c2(&DAT_14cbb7910,"close");
  atexit((_func_5014 *)&LAB_14407716a);
  FUN_1400b22c2(&DAT_14cbb7920,"behind");
  atexit((_func_5014 *)&LAB_14407717b);
  FUN_1400b22c2(&DAT_14cbb7930,"above");
  atexit((_func_5014 *)&LAB_14407718c);
  FUN_1400b22c2(&DAT_14cbb7940,"neutral");
  atexit((_func_5014 *)&LAB_14407719d);
  FUN_1400b22c2(&DAT_14cbb7950);
  atexit((_func_5014 *)&LAB_1440771ae);
  uStack_78 = 0;
  local_80 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b899db0);
  uStack_78 = 0;
  local_80 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b89a530);
  uStack_78 = 0;
  local_80 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b89ada0);
  uStack_78 = 0;
  local_80 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b89af40);
  local_70 = "basic";
  local_68 = 5;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb79d8 = (ulonglong)uVar1;
  local_70 = "challenge";
  local_68 = 9;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb79e0 = (ulonglong)uVar1;
  local_70 = "online";
  local_68 = 6;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb79e8 = (ulonglong)uVar1;
  local_70 = "social";
  local_68 = 6;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb79f0 = (ulonglong)uVar1;
  local_70 = "alert";
  local_68 = 5;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb79f8 = (ulonglong)uVar1;
  local_70 = "photo_mode";
  local_68 = 10;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7a00 = (ulonglong)uVar1;
  local_70 = "generic_task";
  local_68 = 0xc;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7a08 = (ulonglong)uVar1;
  local_70 = "mission";
  local_68 = 7;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7a10 = (ulonglong)uVar1;
  local_70 = "mail";
  local_68 = 4;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7a18 = (ulonglong)uVar1;
  local_70 = "respawn";
  local_68 = 7;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7a20 = (ulonglong)uVar1;
  local_70 = "tutorial";
  local_68 = 8;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7a28 = (ulonglong)uVar1;
  local_70 = "special_notification";
  local_68 = 0x14;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7a30 = (ulonglong)uVar1;
  local_70 = "generic_notification";
  local_68 = 0x14;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7a38 = (ulonglong)uVar1;
  local_70 = "vault_card";
  local_68 = 10;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7a40 = (ulonglong)uVar1;
  local_70 = "ONLINE_MESSAGE";
  local_68 = 0xe;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7a48 = (ulonglong)uVar1;
  local_70 = "INGAME_MESSAGE";
  local_68 = 0xe;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7a50 = (ulonglong)uVar1;
  local_70 = "NOTIFICATION_MESSAGE";
  local_68 = 0x14;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7a58 = (ulonglong)uVar1;
  local_70 = "MENU_TUTORIAL_MESSAGE";
  local_68 = 0x15;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7a60 = (ulonglong)uVar1;
  local_70 = "collectible";
  local_68 = 0xb;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7a68 = (ulonglong)uVar1;
  _DAT_14cbb7a74 = 0;
  _DAT_14cbb7a78 = 0;
  FUN_14052b5e0(&DAT_14cbb7a70,"MENU_CUSTOMIZATION_CHARACTER",0);
  _DAT_14cbb7a80 = "MENU_CUSTOMIZATION_CHARACTER";
  _DAT_14cbb7a8c = 0;
  _DAT_14cbb7a90 = 0;
  FUN_14052b5e0(&DAT_14cbb7a88,"MENU_CUSTOMIZATION_ECHO",0);
  _DAT_14cbb7a98 = "MENU_CUSTOMIZATION_ECHO";
  _DAT_14cbb7aa4 = 0;
  _DAT_14cbb7aa8 = 0;
  FUN_14052b5e0(&DAT_14cbb7aa0,"MENU_CUSTOMIZATION_VEHICLE",0);
  _DAT_14cbb7ab0 = "MENU_CUSTOMIZATION_VEHICLE";
  _DAT_14cbb7abc = 0;
  _DAT_14cbb7ac0 = 0;
  FUN_14052b5e0(&DAT_14cbb7ab8,"MENU_CUSTOMIZATION_WEAPON",0);
  _DAT_14cbb7ac8 = "MENU_CUSTOMIZATION_WEAPON";
  _DAT_14cbb7ad4 = 0;
  _DAT_14cbb7ad8 = 0;
  FUN_14052b5e0(&DAT_14cbb7ad0,&DAT_14b417908,0);
  _DAT_14cbb7ae0 = &DAT_14b417908;
  _DAT_14cbb7aec = 0;
  _DAT_14cbb7af0 = 0;
  FUN_14052b5e0(&DAT_14cbb7ae8,"detailed_list",0);
  _DAT_14cbb7af8 = "detailed_list";
  _DAT_14cbb7b04 = 0;
  _DAT_14cbb7b08 = 0;
  FUN_14052b5e0(&DAT_14cbb7b00,&DAT_14b81bdf4,0);
  _DAT_14cbb7b10 = &DAT_14b81bdf4;
  _DAT_14cbb7b1c = 0;
  _DAT_14cbb7b20 = 0;
  FUN_14052b5e0(&DAT_14cbb7b18,"backpack",0);
  _DAT_14cbb7b28 = "backpack";
  FUN_1400b22c2(&DAT_14cbb7b30,&DAT_149e3cc88);
  atexit((_func_5014 *)&LAB_1440771bf);
  FUN_1400b22c2(&DAT_14cbb7b40,"Popup");
  atexit((_func_5014 *)&LAB_1440771d0);
  FUN_1400b22c2(&DAT_14cbb7b50,"Fullsize");
  atexit((_func_5014 *)&LAB_1440771e1);
  FUN_1400b22c2(&DAT_14cbb7b60,"EchoLogs");
  atexit((_func_5014 *)&LAB_1440771f2);
  FUN_1400b22c2(&DAT_14cbb7b70,"PlayerStats");
  atexit((_func_5014 *)&LAB_144077203);
  FUN_1400b22c2(&DAT_14cbb7b80,"RewardCenter");
  atexit((_func_5014 *)&LAB_144077214);
  FUN_1400b22c2(&DAT_14cbb7b90,"weapon_dps_estimate");
  atexit((_func_5014 *)&LAB_144077225);
  _DAT_14cbb7ba4 = 0;
  _DAT_14cbb7ba8 = 0;
  FUN_14052b5e0(&DAT_14cbb7ba0,"character");
  _DAT_14cbb7bb0 = 0;
  _DAT_14cbb7bb4 = 0;
  FUN_14052b5e0(&DAT_14cbb7bac,"profile");
  local_70 = "entry_sets";
  local_68 = 10;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7bb8 = (ulonglong)uVar1;
  local_70 = "entries";
  local_68 = 7;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7bc0 = (ulonglong)uVar1;
  local_70 = "menu_title";
  local_68 = 10;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7bc8 = (ulonglong)uVar1;
  local_70 = "actions";
  local_68 = 7;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7bd0 = (ulonglong)uVar1;
  local_70 = "loc_text";
  local_68 = 8;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7bd8 = (ulonglong)uVar1;
  local_70 = "desc_text";
  local_68 = 9;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7be0 = (ulonglong)uVar1;
  local_70 = "style";
  local_68 = 5;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7be8 = (ulonglong)uVar1;
  local_70 = "horizontal";
  local_68 = 10;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7bf0 = (ulonglong)uVar1;
  local_70 = "entry_set_default";
  local_68 = 0x11;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7bf8 = (ulonglong)uVar1;
  local_70 = "required_nexus_layer";
  local_68 = 0x14;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7c00 = (ulonglong)uVar1;
  local_70 = "tooltip_key";
  local_68 = 0xb;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7c08 = (ulonglong)uVar1;
  local_70 = "set_push";
  local_68 = 8;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7c10 = (ulonglong)uVar1;
  local_70 = "exit_game";
  local_68 = 9;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7c18 = (ulonglong)uVar1;
  local_70 = "back";
  local_68 = 4;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7c20 = (ulonglong)uVar1;
  local_70 = "back_actions";
  local_68 = 0xc;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7c28 = (ulonglong)uVar1;
  _DAT_14cbb7c30 = 0;
  uRam000000014cbb7c38 = 0;
  _DAT_14cbb7c40 = 0;
  DAT_14cbb7c48 = 0;
  uRam000000014cbb7c50 = 0;
  FUN_1446ddda2(&DAT_14cbb7c30,&DAT_14b81bd00,0);
  atexit((_func_5014 *)&LAB_144077236);
  local_70 = "num_rows_override";
  local_68 = 0x11;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7c58 = (ulonglong)uVar1;
  local_70 = "show_capacity_text";
  local_68 = 0x12;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7c60 = (ulonglong)uVar1;
  local_70 = "num_columns_override";
  local_68 = 0x14;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7c68 = (ulonglong)uVar1;
  local_70 = "sort_list_config";
  local_68 = 0x10;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7c70 = (ulonglong)uVar1;
  local_70 = "filter_list_config";
  local_68 = 0x12;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7c78 = (ulonglong)uVar1;
  local_70 = "default_sort_ident";
  local_68 = 0x12;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7c80 = (ulonglong)uVar1;
  local_70 = "enable_filter";
  local_68 = 0xd;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7c88 = (ulonglong)uVar1;
  local_70 = "enable_sort";
  local_68 = 0xb;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7c90 = (ulonglong)uVar1;
  FUN_1400b22c2(&DAT_14cbb7c98,"backpack_item_grid");
  atexit((_func_5014 *)&LAB_144077247);
  FUN_1400b22c2(&DAT_14cbb7ca8,"bpack_sort_asc_dsc");
  atexit((_func_5014 *)&LAB_144077258);
  FUN_1400b22c2(&DAT_14cbb7cb8,"sort-dropdown");
  atexit((_func_5014 *)&LAB_144077269);
  FUN_1400b22c2(&DAT_14cbb7cc8,"filter-dropdown");
  atexit((_func_5014 *)&LAB_14407727a);
  local_70 = "ITEM_CARD";
  local_68 = 9;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7cd8 = (ulonglong)uVar1;
  local_70 = "ITEM_CARD_COMPARE";
  local_68 = 0x11;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7ce0 = (ulonglong)uVar1;
  local_70 = "MENU_FULL_BACKPACK";
  local_68 = 0x12;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7ce8 = (ulonglong)uVar1;
  local_70 = "MENU_POPUP_BACKPACK";
  local_68 = 0x13;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7cf0 = (ulonglong)uVar1;
  local_70 = "MENU_PLAYER_STATS";
  local_68 = 0x11;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7cf8 = (ulonglong)uVar1;
  FUN_1400b22c2(&DAT_14cbb7d00,"filter-dropdown");
  atexit((_func_5014 *)&LAB_14407728b);
  FUN_1400b22c2(&DAT_14cbb7d10,"equip_slot_dropdown");
  atexit((_func_5014 *)&LAB_14407729c);
  FUN_1400b22c2(&DAT_14cbb7d20,"mark-dropdown");
  atexit((_func_5014 *)&LAB_1440772ad);
  FUN_1400b22c2(&DAT_14cbb7d30,"item-dropdown");
  atexit((_func_5014 *)&LAB_1440772be);
  FUN_1400b22c2(&DAT_14cbb7d40,"sort-dropdown");
  atexit((_func_5014 *)&LAB_1440772cf);
  FUN_140056680(&DAT_14cbb7d50,L"reset");
  atexit((_func_5014 *)&LAB_1440772e0);
  local_70 = "add_on_activate";
  local_68 = 0xf;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7d60 = (ulonglong)uVar1;
  local_70 = "remove_on_deactivate";
  local_68 = 0x14;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7d68 = (ulonglong)uVar1;
  local_70 = "filter_selected";
  local_68 = 0xf;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7d70 = (ulonglong)uVar1;
  local_70 = "hide_messages_on_deactivate";
  local_68 = 0x1b;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7d78 = (ulonglong)uVar1;
  local_70 = "drop_action_supported";
  local_68 = 0x15;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7d80 = (ulonglong)uVar1;
  local_70 = "equip_action_supported";
  local_68 = 0x16;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7d88 = (ulonglong)uVar1;
  local_70 = "unequip_action_supported";
  local_68 = 0x18;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7d90 = (ulonglong)uVar1;
  local_70 = "compare_action_supported";
  local_68 = 0x18;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7d98 = (ulonglong)uVar1;
  local_70 = "mark_item_action_supported";
  local_68 = 0x1a;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7da0 = (ulonglong)uVar1;
  local_70 = "mark_multiple_items_supported";
  local_68 = 0x1d;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7da8 = (ulonglong)uVar1;
  local_70 = "remote_inventory_action_supported";
  local_68 = 0x21;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7db0 = (ulonglong)uVar1;
  local_70 = "unequip_message_ident";
  local_68 = 0x15;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7db8 = (ulonglong)uVar1;
  local_70 = "equip_message_ident";
  local_68 = 0x13;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7dc0 = (ulonglong)uVar1;
  local_70 = "swap_message_ident";
  local_68 = 0x12;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7dc8 = (ulonglong)uVar1;
  local_70 = "drop_message_ident";
  local_68 = 0x12;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7dd0 = (ulonglong)uVar1;
  local_70 = "cant_equip_message_ident";
  local_68 = 0x18;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7dd8 = (ulonglong)uVar1;
  local_70 = "insufficient_space_error_ident";
  local_68 = 0x1e;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7de0 = (ulonglong)uVar1;
  local_70 = "multiple_item_deposit_ident";
  local_68 = 0x1b;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7de8 = (ulonglong)uVar1;
  local_70 = "deposit_message_ident";
  local_68 = 0x15;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7df0 = (ulonglong)uVar1;
  local_70 = "incomplete_deposit_ident";
  local_68 = 0x18;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7df8 = (ulonglong)uVar1;
  local_70 = "backpack_class_html";
  local_68 = 0x13;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7e00 = (ulonglong)uVar1;
  local_70 = "standin_config";
  local_68 = 0xe;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7e08 = (ulonglong)uVar1;
  local_70 = "player_standin_tag";
  local_68 = 0x12;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7e10 = (ulonglong)uVar1;
  local_70 = "echo_bot_standin_tag";
  local_68 = 0x14;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7e18 = (ulonglong)uVar1;
  local_70 = "sortable_numeric_stats";
  local_68 = 0x16;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7e20 = (ulonglong)uVar1;
  local_70 = "escape_hold_supported";
  local_68 = 0x15;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7e28 = (ulonglong)uVar1;
  local_70 = "max_visible_items";
  local_68 = 0x11;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb7e30 = (ulonglong)uVar1;
  FUN_140056680(&DAT_14cbb7e38,L"action_ui_drop_item");
  atexit((_func_5014 *)&LAB_1440772f1);
  FUN_140056680(&DAT_14cbb7e48,L"action_ui_equip_item");
  atexit((_func_5014 *)&LAB_144077302);
  FUN_140056680(&DAT_14cbb7e58,L"action_ui_unequip_item");
  atexit((_func_5014 *)&LAB_144077313);
  FUN_140056680(&DAT_14cbb7e68,L"action_ui_compare_item");
  atexit((_func_5014 *)&LAB_144077324);
  FUN_140056680(&DAT_14cbb7e78,L"action_ui_cursor_click");
  atexit((_func_5014 *)&LAB_144077335);
  FUN_140056680(&DAT_14cbb7e88,L"action_ui_set_item_flag");
  atexit((_func_5014 *)&LAB_144077346);
  FUN_140056680(&DAT_14cbb7e98,L"action_ui_remote_bank_deposit");
  atexit((_func_5014 *)&LAB_144077357);
  FUN_140056680(&DAT_14cbb7ea8,L"action_ui_mark_all_filtered");
  atexit((_func_5014 *)&LAB_144077368);
  FUN_140056680(&DAT_14cbb7eb8,L"action_ui_menu_escape");
  atexit((_func_5014 *)&LAB_144077379);
  FUN_140056680(&DAT_14cbb7ec8,L"action_ui_show_player_stats");
  atexit((_func_5014 *)&LAB_14407738a);
  FUN_140056680(&DAT_14cbb7ed8,L"action_ui_mark_hovered_as_junk");
  atexit((_func_5014 *)&LAB_14407739b);
  FUN_140056680(&DAT_14cbb7ee8,L"action_ui_open_reward_center");
  atexit((_func_5014 *)&LAB_1440773ac);
  FUN_140056680(&DAT_14cbb7ef8,L"action_ui_select_slot_1");
  atexit((_func_5014 *)&LAB_1440773bd);
  FUN_140056680(&DAT_14cbb7f08,L"action_ui_select_slot_2");
  atexit((_func_5014 *)&LAB_1440773ce);
  FUN_140056680(&DAT_14cbb7f18,L"action_ui_select_slot_3");
  atexit((_func_5014 *)&LAB_1440773df);
  FUN_140056680(&DAT_14cbb7f28,L"action_ui_select_slot_4");
  atexit((_func_5014 *)&LAB_1440773f0);
  FUN_140056680(&DAT_14cbb7f38,L"action_ui_copy_focused_item_serial_number");
  atexit((_func_5014 *)&LAB_144077401);
  FUN_140056680(&DAT_14cbb7f48,L"action_ui_menu_escape_hold");
  atexit((_func_5014 *)&LAB_144077412);
  FUN_140056680(&DAT_14cbb7f58,L"action_ui_inspect_item");
  atexit((_func_5014 *)&LAB_144077423);
  FUN_140056680(&DAT_14cbb7f68,L"action_ui_flip_item_card");
  atexit((_func_5014 *)&LAB_144077434);
  FUN_140056680(&DAT_14cbb7f78,L"action_ui_open_all_rewards");
  atexit((_func_5014 *)&LAB_144077445);
  FUN_140056680(&DAT_14cbb7f88,L"SelectText");
  atexit((_func_5014 *)&LAB_144077456);
  FUN_140056680(&DAT_14cbb7f98,L"CompareHint");
  atexit((_func_5014 *)&LAB_144077467);
  FUN_140056680(&DAT_14cbb7fa8,L"EquipHint");
  atexit((_func_5014 *)&LAB_144077478);
  FUN_140056680(&DAT_14cbb7fb8,L"UnequipHint");
  atexit((_func_5014 *)&LAB_144077489);
  FUN_140056680(&DAT_14cbb7fc8,L"DropHint");
  atexit((_func_5014 *)&LAB_14407749a);
  FUN_140056680(&DAT_14cbb7fd8,L"SetItemFlagHint");
  atexit((_func_5014 *)&LAB_1440774ab);
  FUN_140056680(&DAT_14cbb7fe8,L"ToggleJunkHint");
  atexit((_func_5014 *)&LAB_1440774bc);
  FUN_140056680(&DAT_14cbb7ff8,L"MarkAllFilteredHint");
  atexit((_func_5014 *)&LAB_1440774cd);
  FUN_140056680(&DAT_14cbb8008,L"PlayerStatsHint");
  atexit((_func_5014 *)&LAB_1440774de);
  FUN_140056680(&DAT_14cbb8018,L"SwapWeaponsHint");
  atexit((_func_5014 *)&LAB_1440774ef);
  FUN_140056680(&DAT_14cbb8028,L"BackText");
  atexit((_func_5014 *)&LAB_144077500);
  FUN_140056680(&DAT_14cbb8038,L"SellHint");
  atexit((_func_5014 *)&LAB_144077511);
  FUN_140056680(&DAT_14cbb8048,L"BuyHint");
  atexit((_func_5014 *)&LAB_144077522);
  FUN_140056680(&DAT_14cbb8058,L"ExitMenuHint");
  atexit((_func_5014 *)&LAB_144077533);
  FUN_140056680(&DAT_14cbb8068,L"OpenAllRewardsHint");
  atexit((_func_5014 *)&LAB_144077544);
  FUN_1400b22c2(&DAT_14cbb8078,"trash");
  atexit((_func_5014 *)&LAB_144077555);
  FUN_1400b22c2(&DAT_14cbb8088,"favorite");
  atexit((_func_5014 *)&LAB_144077566);
  FUN_1400b22c2(&DAT_14cbb8098,"bankdeposit");
  atexit((_func_5014 *)&LAB_144077577);
  FUN_1400b22c2(&DAT_14cbb80a8,"taggroup1");
  atexit((_func_5014 *)&LAB_144077588);
  FUN_1400b22c2(&DAT_14cbb80b8,"taggroup2");
  atexit((_func_5014 *)&LAB_144077599);
  FUN_1400b22c2(&DAT_14cbb80c8,"taggroup3");
  atexit((_func_5014 *)&LAB_1440775aa);
  FUN_1400b22c2(&DAT_14cbb80d8,"taggroup4");
  atexit((_func_5014 *)&LAB_1440775bb);
  local_70 = "trash";
  local_68 = 5;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb80e8 = (ulonglong)uVar1;
  local_70 = "favorite";
  local_68 = 8;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb80f0 = (ulonglong)uVar1;
  local_70 = "bankdeposit";
  local_68 = 0xb;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb80f8 = (ulonglong)uVar1;
  local_70 = "taggroup1";
  local_68 = 9;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb8100 = (ulonglong)uVar1;
  local_70 = "taggroup2";
  local_68 = 9;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb8108 = (ulonglong)uVar1;
  local_70 = "taggroup3";
  local_68 = 9;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb8110 = (ulonglong)uVar1;
  local_70 = "taggroup4";
  local_68 = 9;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb8118 = (ulonglong)uVar1;
  FUN_1400b22c2(&DAT_14cbb8120,"OpenBackpack");
  atexit((_func_5014 *)&LAB_1440775cc);
  FUN_1400b22c2(&DAT_14cbb8130,"CloseBackpack");
  atexit((_func_5014 *)&LAB_1440775dd);
  FUN_1400b22c2(&DAT_14cbb8140,"OpenPlayerStats");
  atexit((_func_5014 *)&LAB_1440775ee);
  FUN_1400b22c2(&DAT_14cbb8150,"ClosePlayerStats");
  atexit((_func_5014 *)&LAB_1440775ff);
  FUN_1400b22c2(&DAT_14cbb8160,"OpenRewardCenter");
  atexit((_func_5014 *)&LAB_144077610);
  FUN_1400b22c2(&DAT_14cbb8170,"CloseRewardCenter");
  atexit((_func_5014 *)&LAB_144077621);
  FUN_1400b22c2(&DAT_14cbb8180,"CompareStart");
  atexit((_func_5014 *)&LAB_144077632);
  FUN_1400b22c2(&DAT_14cbb8190,"CompareStop");
  atexit((_func_5014 *)&LAB_144077643);
  FUN_1400b22c2(&DAT_14cbb81a0,"UnequipItem");
  atexit((_func_5014 *)&LAB_144077654);
  FUN_1400b22c2(&DAT_14cbb81b0,"EquipItem");
  atexit((_func_5014 *)&LAB_144077665);
  FUN_1400b22c2(&DAT_14cbb81c0,"DropItem");
  atexit((_func_5014 *)&LAB_144077676);
  FUN_1400b22c2(&DAT_14cbb81d0,"MarkItem");
  atexit((_func_5014 *)&LAB_144077687);
  FUN_1400b22c2(&DAT_14cbb81e0,"Error");
  atexit((_func_5014 *)&LAB_144077698);
  FUN_1400b22c2(&DAT_14cbb81f0,"ElementUnfocused");
  atexit((_func_5014 *)&LAB_1440776a9);
  FUN_1400b22c2(&DAT_14cbb8200,"ElementFocused");
  atexit((_func_5014 *)&LAB_1440776ba);
  FUN_1400b22c2(&DAT_14cbb8210,"ElementClicked");
  atexit((_func_5014 *)&LAB_1440776cb);
  FUN_1400b22c2(&DAT_14cbb8220,"EscapeInput");
  atexit((_func_5014 *)&LAB_1440776dc);
  FUN_1400b22c2(&DAT_14cbb8230,"WeaponSlotFocused");
  atexit((_func_5014 *)&LAB_1440776ed);
  FUN_1400b22c2(&DAT_14cbb8240,"WeaponSlotUnfocused");
  atexit((_func_5014 *)&LAB_1440776fe);
  FUN_1400b22c2(&DAT_14cbb8250,"GearSlotFocused");
  atexit((_func_5014 *)&LAB_14407770f);
  FUN_1400b22c2(&DAT_14cbb8260,"GearSlotUnfocused");
  atexit((_func_5014 *)&LAB_144077720);
  FUN_1400b22c2(&DAT_14cbb8270,"BackpackSlotFocused");
  atexit((_func_5014 *)&LAB_144077731);
  FUN_1400b22c2(&DAT_14cbb8280,"BackpackSlotUnfocused");
  atexit((_func_5014 *)&LAB_144077742);
  FUN_1400b22c2(&DAT_14cbb8290,"MarkItemBank");
  atexit((_func_5014 *)&LAB_144077753);
  FUN_1400b22c2(&DAT_14cbb82a0,"MarkItemTrash");
  atexit((_func_5014 *)&LAB_144077764);
  FUN_1400b22c2(&DAT_14cbb82b0,"MarkItemFavorite");
  atexit((_func_5014 *)&LAB_144077775);
  FUN_1400b22c2(&DAT_14cbb82c0,"ClickPistol");
  atexit((_func_5014 *)&LAB_144077786);
  FUN_1400b22c2(&DAT_14cbb82d0,"ClickAssaultRifle");
  atexit((_func_5014 *)&LAB_144077797);
  FUN_1400b22c2(&DAT_14cbb82e0,"ClickSMG");
  atexit((_func_5014 *)&LAB_1440777a8);
  FUN_1400b22c2(&DAT_14cbb82f0,"ClickShotgun");
  atexit((_func_5014 *)&LAB_1440777b9);
  FUN_1400b22c2(&DAT_14cbb8300,"ClickSniper");
  atexit((_func_5014 *)&LAB_1440777ca);
  FUN_1400b22c2(&DAT_14cbb8310,"ClickRepKit");
  atexit((_func_5014 *)&LAB_1440777db);
  FUN_1400b22c2(&DAT_14cbb8320,"ClickGrenade");
  atexit((_func_5014 *)&LAB_1440777ec);
  FUN_1400b22c2(&DAT_14cbb8330,"ClickHeavyWeapon");
  atexit((_func_5014 *)&LAB_1440777fd);
  FUN_1400b22c2(&DAT_14cbb8340,"ClickClassMod");
  atexit((_func_5014 *)&LAB_14407780e);
  FUN_1400b22c2(&DAT_14cbb8350,"ClickGadget");
  atexit((_func_5014 *)&LAB_14407781f);
  FUN_1400b22c2(&DAT_14cbb8360,"ClickEnhancement");
  atexit((_func_5014 *)&LAB_144077830);
  FUN_1400b22c2(&DAT_14cbb8370,"ClickShield");
  atexit((_func_5014 *)&LAB_144077841);
  FUN_1400b22c2(&DAT_14cbb8380,"EquipPistol");
  atexit((_func_5014 *)&LAB_144077852);
  FUN_1400b22c2(&DAT_14cbb8390,"EquipAssaultRifle");
  atexit((_func_5014 *)&LAB_144077863);
  FUN_1400b22c2(&DAT_14cbb83a0,"EquipSMG");
  atexit((_func_5014 *)&LAB_144077874);
  FUN_1400b22c2(&DAT_14cbb83b0,"EquipShotgun");
  atexit((_func_5014 *)&LAB_144077885);
  FUN_1400b22c2(&DAT_14cbb83c0,"EquipSniper");
  atexit((_func_5014 *)&LAB_144077896);
  FUN_1400b22c2(&DAT_14cbb83d0,"EquipRepKit");
  atexit((_func_5014 *)&LAB_1440778a7);
  FUN_1400b22c2(&DAT_14cbb83e0,"EquipGrenade");
  atexit((_func_5014 *)&LAB_1440778b8);
  FUN_1400b22c2(&DAT_14cbb83f0,"EquipHeavyWeapon");
  atexit((_func_5014 *)&LAB_1440778c9);
  FUN_1400b22c2(&DAT_14cbb8400,"EquipClassMod");
  atexit((_func_5014 *)&LAB_1440778da);
  FUN_1400b22c2(&DAT_14cbb8410,"EquipGadget");
  atexit((_func_5014 *)&LAB_1440778eb);
  FUN_1400b22c2(&DAT_14cbb8420,"EquipEnhancement");
  atexit((_func_5014 *)&LAB_1440778fc);
  FUN_1400b22c2(&DAT_14cbb8430,"EquipShield");
  atexit((_func_5014 *)&LAB_14407790d);
  FUN_1400b22c2(&DAT_14cbb8440,"weapon");
  atexit((_func_5014 *)&LAB_14407791e);
  FUN_1400b22c2(&DAT_14cbb8450,"weapon_ps");
  atexit((_func_5014 *)&LAB_14407792f);
  FUN_1400b22c2(&DAT_14cbb8460,"weapon_ar");
  atexit((_func_5014 *)&LAB_144077940);
  FUN_1400b22c2(&DAT_14cbb8470,"weapon_sg");
  atexit((_func_5014 *)&LAB_144077951);
  FUN_1400b22c2(&DAT_14cbb8480,"weapon_sr");
  atexit((_func_5014 *)&LAB_144077962);
  FUN_1400b22c2(&DAT_14cbb8490,"weapon_sm");
  atexit((_func_5014 *)&LAB_144077973);
  FUN_1400b22c2(&DAT_14cbb84a0,"grenade_gadget");
  atexit((_func_5014 *)&LAB_144077984);
  FUN_1400b22c2(&DAT_14cbb84b0,"shield");
  atexit((_func_5014 *)&LAB_144077995);
  FUN_1400b22c2(&DAT_14cbb84c0,"heavy_weapon_gadget");
  atexit((_func_5014 *)&LAB_1440779a6);
  FUN_1400b22c2(&DAT_14cbb84d0,"repair_kit");
  atexit((_func_5014 *)&LAB_1440779b7);
  FUN_1400b22c2(&DAT_14cbb84e0,"classmod");
  atexit((_func_5014 *)&LAB_1440779c8);
  FUN_1400b22c2(&DAT_14cbb84f0,"classmod_dark_siren");
  atexit((_func_5014 *)&LAB_1440779d9);
  FUN_1400b22c2(&DAT_14cbb8500,"classmod_exo_soldier");
  atexit((_func_5014 *)&LAB_1440779ea);
  FUN_1400b22c2(&DAT_14cbb8510,"classmod_gravitar");
  atexit((_func_5014 *)&LAB_1440779fb);
  FUN_1400b22c2(&DAT_14cbb8520,"classmod_paladin");
  atexit((_func_5014 *)&LAB_144077a0c);
  FUN_1400b22c2(&DAT_14cbb8530,"gadget");
  atexit((_func_5014 *)&LAB_144077a1d);
  FUN_1400b22c2(&DAT_14cbb8540,"enhancement");
  atexit((_func_5014 *)&LAB_144077a2e);
  FUN_140056680(&DAT_14cbb8550,L"recent");
  atexit((_func_5014 *)&LAB_144077a3f);
  FUN_140056680(&DAT_14cbb8560,L"type");
  atexit((_func_5014 *)&LAB_144077a50);
  FUN_140056680(&DAT_14cbb8570,L"level");
  atexit((_func_5014 *)&LAB_144077a61);
  FUN_140056680(&DAT_14cbb8580,L"base_name");
  atexit((_func_5014 *)&LAB_144077a72);
  FUN_140056680(&DAT_14cbb8590,L"first_letter");
  atexit((_func_5014 *)&LAB_144077a83);
  FUN_140056680(&DAT_14cbb85a0,L"value");
  atexit((_func_5014 *)&LAB_144077a94);
  FUN_140056680(&DAT_14cbb85b0,L"rarity");
  atexit((_func_5014 *)&LAB_144077aa5);
  FUN_140056680(&DAT_14cbb85c0,L"manufacturer");
  atexit((_func_5014 *)&LAB_144077ab6);
  _Src = DAT_14cbb7b90;
  DAT_14cbb85d0 = (void *)0x0;
  lVar2 = (longlong)DAT_14cbb7b98;
  _DAT_14cbb85d8 = DAT_14cbb7b98;
  if (lVar2 == 0) {
    _DAT_14cbb85dc = 0;
  }
  else {
    FUN_1446dd670(&DAT_14cbb85d0,DAT_14cbb7b98,0);
    memcpy(DAT_14cbb85d0,_Src,lVar2 * 2);
  }
  atexit((_func_5014 *)&LAB_144077ac7);
  FUN_140056680(&DAT_14cbb85e0,L"healing");
  atexit((_func_5014 *)&LAB_144077ad8);
  local_70 = "cancel";
  local_68 = 6;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb85f0 = (ulonglong)uVar1;
  local_70 = "partial";
  local_68 = 7;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb85f8 = (ulonglong)uVar1;
  local_70 = "all";
  local_68 = 3;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb8600 = (ulonglong)uVar1;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 9;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b89bee0);
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b89cc30);
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b89d060);
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 3;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b89d860);
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b89db30);
  FUN_1400b22c2(&DAT_14cbb8788,&DAT_14b84e971);
  atexit((_func_5014 *)&LAB_144077ae9);
  FUN_1400b22c2(&DAT_14cbb8798,&DAT_14b84e975);
  atexit((_func_5014 *)&LAB_144077afa);
  FUN_1400b22c2(&DAT_14cbb87a8,"close");
  atexit((_func_5014 *)&LAB_144077b0b);
  FUN_1400b22c2(&DAT_14cbb87b8,"behind");
  atexit((_func_5014 *)&LAB_144077b1c);
  FUN_1400b22c2(&DAT_14cbb87c8,"above");
  atexit((_func_5014 *)&LAB_144077b2d);
  FUN_1400b22c2(&DAT_14cbb87d8,"neutral");
  atexit((_func_5014 *)&LAB_144077b3e);
  FUN_1400b22c2(&DAT_14cbb87e8,"below");
  atexit((_func_5014 *)&LAB_144077b4f);
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b89e100);
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b89e530);
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b89eb00);
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b89f700);
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14407c3b0 FUN_14407c3b0 body=57 status=ok
// SIG undefined FUN_14407c3b0(void)

void FUN_14407c3b0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb88a8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb88a8 = FUN_140002ddd(FUN_146604d55,uVar1,L"OakWidgetData_HintBar");
  }
  return;
}



// FUNCTION 14407c44c FUN_14407c44c body=57 status=ok
// SIG undefined FUN_14407c44c(void)

void FUN_14407c44c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb8950 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb8950 = FUN_140002ddd(FUN_146605155,uVar1,L"OakUIData_HUDSkills");
  }
  return;
}



// FUNCTION 14407c4cc FUN_14407c4cc body=57 status=ok
// SIG undefined FUN_14407c4cc(void)

void FUN_14407c4cc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb9558 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb9558 = FUN_140002ddd(FUN_14660542f,uVar1,L"OakWidgetData_ItemCard");
  }
  return;
}



// FUNCTION 14407c514 FUN_14407c514 body=57 status=ok
// SIG undefined FUN_14407c514(void)

void FUN_14407c514(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb9570 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb9570 = FUN_140002ddd(FUN_1466054c1,uVar1,L"OakWidgetData_ItemCard_HUD");
  }
  return;
}



// FUNCTION 14407c5da FUN_14407c5da body=57 status=ok
// SIG undefined FUN_14407c5da(void)

void FUN_14407c5da(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb97b0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb97b0 = FUN_140002ddd(FUN_146605a75,uVar1,L"OakWidgetData_LoadCharacterMenu");
  }
  return;
}



// FUNCTION 14407c614 FUN_14407c614 body=241 status=ok
// SIG undefined FUN_14407c614(void)

longlong FUN_14407c614(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  FUN_1489fdb7c();
  uVar3 = *(undefined4 *)(param_2 + 0x1a4);
  uVar4 = *(undefined4 *)(param_2 + 0x1a8);
  uVar5 = *(undefined4 *)(param_2 + 0x1ac);
  *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_2 + 0x1a0);
  *(undefined4 *)(param_1 + 0x1a4) = uVar3;
  *(undefined4 *)(param_1 + 0x1a8) = uVar4;
  *(undefined4 *)(param_1 + 0x1ac) = uVar5;
  plVar1 = *(longlong **)(param_2 + 0x1b0);
  plVar2 = *(longlong **)(param_1 + 0x1b0);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x1b0) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(param_2 + 0x1b8);
  FUN_148c7e830(param_1 + 0x1c0,param_2 + 0x1c0);
  FUN_1415c1204(param_1 + 0x1d0,param_2 + 0x1d0);
  FUN_148c7e27c(param_1 + 0x4d8,param_2 + 0x4d8);
  FUN_140b855d0(param_1 + 0x540,param_2 + 0x540);
  FUN_140bee9ec(param_1 + 0x590,param_2 + 0x590);
  *(undefined4 *)(param_1 + 0x5a0) = *(undefined4 *)(param_2 + 0x5a0);
  if (*(int *)(param_1 + 0x5ac) != *(int *)(param_2 + 0x5ac)) {
    *(undefined1 *)(param_1 + 0x5a8) = *(undefined1 *)(param_2 + 0x5a8);
    *(undefined4 *)(param_1 + 0x5ac) = *(undefined4 *)(param_2 + 0x5ac);
  }
  return param_1;
}



// FUNCTION 14407c784 FUN_14407c784 body=57 status=ok
// SIG undefined FUN_14407c784(void)

void FUN_14407c784(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb9cc8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb9cc8 = FUN_140002ddd(FUN_146605f99,uVar1,L"OakUIData_LobbyInfo");
  }
  return;
}



// FUNCTION 14407c7bd FUN_14407c7bd body=11535 status=ok
// SIG undefined FUN_14407c7bd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14407c7bd(void)

{
  void *_Src;
  char cVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  char *local_70;
  undefined4 local_68;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8a3710);
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 7;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8a5220);
  local_70 = "state_rem";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb8960 = (ulonglong)uVar2;
  local_70 = "state_add";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb8968 = (ulonglong)uVar2;
  local_70 = "state_remove_primary";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb8970 = (ulonglong)uVar2;
  local_70 = "basic";
  local_68 = 5;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb8978 = (ulonglong)uVar2;
  local_70 = "challenge";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb8980 = (ulonglong)uVar2;
  local_70 = "online";
  local_68 = 6;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb8988 = (ulonglong)uVar2;
  local_70 = "social";
  local_68 = 6;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb8990 = (ulonglong)uVar2;
  local_70 = "alert";
  local_68 = 5;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb8998 = (ulonglong)uVar2;
  local_70 = "photo_mode";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb89a0 = (ulonglong)uVar2;
  local_70 = "generic_task";
  local_68 = 0xc;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb89a8 = (ulonglong)uVar2;
  local_70 = "mission";
  local_68 = 7;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb89b0 = (ulonglong)uVar2;
  local_70 = "mail";
  local_68 = 4;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb89b8 = (ulonglong)uVar2;
  local_70 = "respawn";
  local_68 = 7;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb89c0 = (ulonglong)uVar2;
  local_70 = "tutorial";
  local_68 = 8;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb89c8 = (ulonglong)uVar2;
  local_70 = "special_notification";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb89d0 = (ulonglong)uVar2;
  local_70 = "generic_notification";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb89d8 = (ulonglong)uVar2;
  local_70 = "vault_card";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb89e0 = (ulonglong)uVar2;
  local_70 = "ONLINE_MESSAGE";
  local_68 = 0xe;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb89e8 = (ulonglong)uVar2;
  local_70 = "INGAME_MESSAGE";
  local_68 = 0xe;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb89f0 = (ulonglong)uVar2;
  local_70 = "NOTIFICATION_MESSAGE";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb89f8 = (ulonglong)uVar2;
  local_70 = "MENU_TUTORIAL_MESSAGE";
  local_68 = 0x15;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb8a00 = (ulonglong)uVar2;
  local_70 = "collectible";
  local_68 = 0xb;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70);
  _DAT_14cbb8a08 = (ulonglong)uVar2;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8a53c0);
  local_70 = "AssetRegistry";
  local_68 = 0xd;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb8a28 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbb8a30,"weapon_dps_estimate");
  atexit((_func_5014 *)&LAB_14407b7c4);
  _DAT_14cbb8a44 = 0;
  FUN_14052b5e0(&DAT_14cbb8a40,"character",0);
  _DAT_14cbb8a50 = 0;
  FUN_14052b5e0(&DAT_14cbb8a4c,"profile",0);
  local_70 = "entry_sets";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb8a58 = (ulonglong)uVar2;
  local_70 = "entries";
  local_68 = 7;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb8a60 = (ulonglong)uVar2;
  local_70 = "menu_title";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb8a68 = (ulonglong)uVar2;
  local_70 = "actions";
  local_68 = 7;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb8a70 = (ulonglong)uVar2;
  local_70 = "loc_text";
  local_68 = 8;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb8a78 = (ulonglong)uVar2;
  local_70 = "desc_text";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb8a80 = (ulonglong)uVar2;
  local_70 = "style";
  local_68 = 5;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb8a88 = (ulonglong)uVar2;
  local_70 = "horizontal";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb8a90 = (ulonglong)uVar2;
  local_70 = "entry_set_default";
  local_68 = 0x11;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb8a98 = (ulonglong)uVar2;
  local_70 = "required_nexus_layer";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb8aa0 = (ulonglong)uVar2;
  local_70 = "tooltip_key";
  local_68 = 0xb;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb8aa8 = (ulonglong)uVar2;
  local_70 = "set_push";
  local_68 = 8;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb8ab0 = (ulonglong)uVar2;
  local_70 = "exit_game";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb8ab8 = (ulonglong)uVar2;
  local_70 = "back";
  local_68 = 4;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb8ac0 = (ulonglong)uVar2;
  local_70 = "back_actions";
  local_68 = 0xc;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb8ac8 = (ulonglong)uVar2;
  _DAT_14cbb8ad0 = 0;
  uRam000000014cbb8ad8 = 0;
  _DAT_14cbb8ae0 = 0;
  DAT_14cbb8ae8 = 0;
  uRam000000014cbb8af0 = 0;
  FUN_1446ddda2(&DAT_14cbb8ad0,&DAT_14b81bd00,0);
  atexit((_func_5014 *)&LAB_14407b7d5);
  local_70 = "num_rows_override";
  local_68 = 0x11;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb8af8 = (ulonglong)uVar2;
  local_70 = "show_capacity_text";
  local_68 = 0x12;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb8b00 = (ulonglong)uVar2;
  local_70 = "num_columns_override";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb8b08 = (ulonglong)uVar2;
  local_70 = "sort_list_config";
  local_68 = 0x10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb8b10 = (ulonglong)uVar2;
  local_70 = "filter_list_config";
  local_68 = 0x12;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb8b18 = (ulonglong)uVar2;
  local_70 = "default_sort_ident";
  local_68 = 0x12;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb8b20 = (ulonglong)uVar2;
  local_70 = "enable_filter";
  local_68 = 0xd;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb8b28 = (ulonglong)uVar2;
  local_70 = "enable_sort";
  local_68 = 0xb;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb8b30 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbb8b38,"backpack_item_grid");
  atexit((_func_5014 *)&LAB_14407b7e6);
  FUN_1400b22c2(&DAT_14cbb8b48,"bpack_sort_asc_dsc");
  atexit((_func_5014 *)&LAB_14407b7f7);
  FUN_1400b22c2(&DAT_14cbb8b58,"sort-dropdown");
  atexit((_func_5014 *)&LAB_14407b808);
  FUN_1400b22c2(&DAT_14cbb8b68,"filter-dropdown");
  atexit((_func_5014 *)&LAB_14407b819);
  local_70 = "ITEM_CARD";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb8b78 = (ulonglong)uVar2;
  local_70 = "ITEM_CARD_COMPARE";
  local_68 = 0x11;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb8b80 = (ulonglong)uVar2;
  local_70 = "MENU_FULL_BACKPACK";
  local_68 = 0x12;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb8b88 = (ulonglong)uVar2;
  local_70 = "MENU_POPUP_BACKPACK";
  local_68 = 0x13;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb8b90 = (ulonglong)uVar2;
  local_70 = "MENU_PLAYER_STATS";
  local_68 = 0x11;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb8b98 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbb8ba0,"filter-dropdown");
  atexit((_func_5014 *)&LAB_14407b82a);
  FUN_1400b22c2(&DAT_14cbb8bb0,"equip_slot_dropdown");
  atexit((_func_5014 *)&LAB_14407b83b);
  FUN_1400b22c2(&DAT_14cbb8bc0,"mark-dropdown");
  atexit((_func_5014 *)&LAB_14407b84c);
  FUN_1400b22c2(&DAT_14cbb8bd0,"item-dropdown");
  atexit((_func_5014 *)&LAB_14407b85d);
  FUN_1400b22c2(&DAT_14cbb8be0,"sort-dropdown");
  atexit((_func_5014 *)&LAB_14407b86e);
  FUN_1400b22c2(&DAT_14cbb8bf0,&DAT_149e3cc88);
  atexit((_func_5014 *)&LAB_14407b87f);
  FUN_1400b22c2(&DAT_14cbb8c00,"Popup");
  atexit((_func_5014 *)&LAB_14407b890);
  FUN_1400b22c2(&DAT_14cbb8c10,"Fullsize");
  atexit((_func_5014 *)&LAB_14407b8a1);
  FUN_1400b22c2(&DAT_14cbb8c20,"EchoLogs");
  atexit((_func_5014 *)&LAB_14407b8b2);
  FUN_1400b22c2(&DAT_14cbb8c30,"PlayerStats");
  atexit((_func_5014 *)&LAB_14407b8c3);
  FUN_1400b22c2(&DAT_14cbb8c40,"RewardCenter");
  atexit((_func_5014 *)&LAB_14407b8d4);
  FUN_140056680(&DAT_14cbb8c50,L"reset");
  atexit((_func_5014 *)&LAB_14407b8e5);
  local_70 = "add_on_activate";
  local_68 = 0xf;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb8c60 = (ulonglong)uVar2;
  local_70 = "remove_on_deactivate";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb8c68 = (ulonglong)uVar2;
  local_70 = "filter_selected";
  local_68 = 0xf;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb8c70 = (ulonglong)uVar2;
  local_70 = "hide_messages_on_deactivate";
  local_68 = 0x1b;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb8c78 = (ulonglong)uVar2;
  local_70 = "drop_action_supported";
  local_68 = 0x15;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb8c80 = (ulonglong)uVar2;
  local_70 = "equip_action_supported";
  local_68 = 0x16;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb8c88 = (ulonglong)uVar2;
  local_70 = "unequip_action_supported";
  local_68 = 0x18;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb8c90 = (ulonglong)uVar2;
  local_70 = "compare_action_supported";
  local_68 = 0x18;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb8c98 = (ulonglong)uVar2;
  local_70 = "mark_item_action_supported";
  local_68 = 0x1a;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb8ca0 = (ulonglong)uVar2;
  local_70 = "mark_multiple_items_supported";
  local_68 = 0x1d;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb8ca8 = (ulonglong)uVar2;
  local_70 = "remote_inventory_action_supported";
  local_68 = 0x21;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb8cb0 = (ulonglong)uVar2;
  local_70 = "unequip_message_ident";
  local_68 = 0x15;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb8cb8 = (ulonglong)uVar2;
  local_70 = "equip_message_ident";
  local_68 = 0x13;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb8cc0 = (ulonglong)uVar2;
  local_70 = "swap_message_ident";
  local_68 = 0x12;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb8cc8 = (ulonglong)uVar2;
  local_70 = "drop_message_ident";
  local_68 = 0x12;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb8cd0 = (ulonglong)uVar2;
  local_70 = "cant_equip_message_ident";
  local_68 = 0x18;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb8cd8 = (ulonglong)uVar2;
  local_70 = "insufficient_space_error_ident";
  local_68 = 0x1e;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb8ce0 = (ulonglong)uVar2;
  local_70 = "multiple_item_deposit_ident";
  local_68 = 0x1b;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb8ce8 = (ulonglong)uVar2;
  local_70 = "deposit_message_ident";
  local_68 = 0x15;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb8cf0 = (ulonglong)uVar2;
  local_70 = "incomplete_deposit_ident";
  local_68 = 0x18;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb8cf8 = (ulonglong)uVar2;
  local_70 = "backpack_class_html";
  local_68 = 0x13;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb8d00 = (ulonglong)uVar2;
  local_70 = "standin_config";
  local_68 = 0xe;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb8d08 = (ulonglong)uVar2;
  local_70 = "player_standin_tag";
  local_68 = 0x12;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb8d10 = (ulonglong)uVar2;
  local_70 = "echo_bot_standin_tag";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb8d18 = (ulonglong)uVar2;
  local_70 = "sortable_numeric_stats";
  local_68 = 0x16;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb8d20 = (ulonglong)uVar2;
  local_70 = "escape_hold_supported";
  local_68 = 0x15;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb8d28 = (ulonglong)uVar2;
  local_70 = "max_visible_items";
  local_68 = 0x11;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb8d30 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cbb8d38,L"action_ui_drop_item");
  atexit((_func_5014 *)&LAB_14407b8f6);
  FUN_140056680(&DAT_14cbb8d48,L"action_ui_equip_item");
  atexit((_func_5014 *)&LAB_14407b907);
  FUN_140056680(&DAT_14cbb8d58,L"action_ui_unequip_item");
  atexit((_func_5014 *)&LAB_14407b918);
  FUN_140056680(&DAT_14cbb8d68,L"action_ui_compare_item");
  atexit((_func_5014 *)&LAB_14407b929);
  FUN_140056680(&DAT_14cbb8d78,L"action_ui_cursor_click");
  atexit((_func_5014 *)&LAB_14407b93a);
  FUN_140056680(&DAT_14cbb8d88,L"action_ui_set_item_flag");
  atexit((_func_5014 *)&LAB_14407b94b);
  FUN_140056680(&DAT_14cbb8d98,L"action_ui_remote_bank_deposit");
  atexit((_func_5014 *)&LAB_14407b95c);
  FUN_140056680(&DAT_14cbb8da8,L"action_ui_mark_all_filtered");
  atexit((_func_5014 *)&LAB_14407b96d);
  FUN_140056680(&DAT_14cbb8db8,L"action_ui_menu_escape");
  atexit((_func_5014 *)&LAB_14407b97e);
  FUN_140056680(&DAT_14cbb8dc8,L"action_ui_show_player_stats");
  atexit((_func_5014 *)&LAB_14407b98f);
  FUN_140056680(&DAT_14cbb8dd8,L"action_ui_mark_hovered_as_junk");
  atexit((_func_5014 *)&LAB_14407b9a0);
  FUN_140056680(&DAT_14cbb8de8,L"action_ui_open_reward_center");
  atexit((_func_5014 *)&LAB_14407b9b1);
  FUN_140056680(&DAT_14cbb8df8,L"action_ui_select_slot_1");
  atexit((_func_5014 *)&LAB_14407b9c2);
  FUN_140056680(&DAT_14cbb8e08,L"action_ui_select_slot_2");
  atexit((_func_5014 *)&LAB_14407b9d3);
  FUN_140056680(&DAT_14cbb8e18,L"action_ui_select_slot_3");
  atexit((_func_5014 *)&LAB_14407b9e4);
  FUN_140056680(&DAT_14cbb8e28,L"action_ui_select_slot_4");
  atexit((_func_5014 *)&LAB_14407b9f5);
  FUN_140056680(&DAT_14cbb8e38,L"action_ui_copy_focused_item_serial_number");
  atexit((_func_5014 *)&LAB_14407ba06);
  FUN_140056680(&DAT_14cbb8e48,L"action_ui_menu_escape_hold");
  atexit((_func_5014 *)&LAB_14407ba17);
  FUN_140056680(&DAT_14cbb8e58,L"action_ui_inspect_item");
  atexit((_func_5014 *)&LAB_14407ba28);
  FUN_140056680(&DAT_14cbb8e68,L"action_ui_flip_item_card");
  atexit((_func_5014 *)&LAB_14407ba39);
  FUN_140056680(&DAT_14cbb8e78,L"action_ui_open_all_rewards");
  atexit((_func_5014 *)&LAB_14407ba4a);
  FUN_140056680(&DAT_14cbb8e88,L"SelectText");
  atexit((_func_5014 *)&LAB_14407ba5b);
  FUN_140056680(&DAT_14cbb8e98,L"CompareHint");
  atexit((_func_5014 *)&LAB_14407ba6c);
  FUN_140056680(&DAT_14cbb8ea8,L"EquipHint");
  atexit((_func_5014 *)&LAB_14407ba7d);
  FUN_140056680(&DAT_14cbb8eb8,L"UnequipHint");
  atexit((_func_5014 *)&LAB_14407ba8e);
  FUN_140056680(&DAT_14cbb8ec8,L"DropHint");
  atexit((_func_5014 *)&LAB_14407ba9f);
  FUN_140056680(&DAT_14cbb8ed8,L"SetItemFlagHint");
  atexit((_func_5014 *)&LAB_14407bab0);
  FUN_140056680(&DAT_14cbb8ee8,L"ToggleJunkHint");
  atexit((_func_5014 *)&LAB_14407bac1);
  FUN_140056680(&DAT_14cbb8ef8,L"MarkAllFilteredHint");
  atexit((_func_5014 *)&LAB_14407bad2);
  FUN_140056680(&DAT_14cbb8f08,L"PlayerStatsHint");
  atexit((_func_5014 *)&LAB_14407bae3);
  FUN_140056680(&DAT_14cbb8f18,L"SwapWeaponsHint");
  atexit((_func_5014 *)&LAB_14407baf4);
  FUN_140056680(&DAT_14cbb8f28,L"BackText");
  atexit((_func_5014 *)&LAB_14407bb05);
  FUN_140056680(&DAT_14cbb8f38,L"SellHint");
  atexit((_func_5014 *)&LAB_14407bb16);
  FUN_140056680(&DAT_14cbb8f48,L"BuyHint");
  atexit((_func_5014 *)&LAB_14407bb27);
  FUN_140056680(&DAT_14cbb8f58,L"ExitMenuHint");
  atexit((_func_5014 *)&LAB_14407bb38);
  FUN_140056680(&DAT_14cbb8f68,L"OpenAllRewardsHint");
  atexit((_func_5014 *)&LAB_14407bb49);
  FUN_1400b22c2(&DAT_14cbb8f78,"trash");
  atexit((_func_5014 *)&LAB_14407bb5a);
  FUN_1400b22c2(&DAT_14cbb8f88,"favorite");
  atexit((_func_5014 *)&LAB_14407bb6b);
  FUN_1400b22c2(&DAT_14cbb8f98,"bankdeposit");
  atexit((_func_5014 *)&LAB_14407bb7c);
  FUN_1400b22c2(&DAT_14cbb8fa8,"taggroup1");
  atexit((_func_5014 *)&LAB_14407bb8d);
  FUN_1400b22c2(&DAT_14cbb8fb8,"taggroup2");
  atexit((_func_5014 *)&LAB_14407bb9e);
  FUN_1400b22c2(&DAT_14cbb8fc8,"taggroup3");
  atexit((_func_5014 *)&LAB_14407bbaf);
  FUN_1400b22c2(&DAT_14cbb8fd8,"taggroup4");
  atexit((_func_5014 *)&LAB_14407bbc0);
  local_70 = "trash";
  local_68 = 5;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb8fe8 = (ulonglong)uVar2;
  local_70 = "favorite";
  local_68 = 8;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb8ff0 = (ulonglong)uVar2;
  local_70 = "bankdeposit";
  local_68 = 0xb;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb8ff8 = (ulonglong)uVar2;
  local_70 = "taggroup1";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb9000 = (ulonglong)uVar2;
  local_70 = "taggroup2";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb9008 = (ulonglong)uVar2;
  local_70 = "taggroup3";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb9010 = (ulonglong)uVar2;
  local_70 = "taggroup4";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb9018 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbb9020,"OpenBackpack");
  atexit((_func_5014 *)&LAB_14407bbd1);
  FUN_1400b22c2(&DAT_14cbb9030,"CloseBackpack");
  atexit((_func_5014 *)&LAB_14407bbe2);
  FUN_1400b22c2(&DAT_14cbb9040,"OpenPlayerStats");
  atexit((_func_5014 *)&LAB_14407bbf3);
  FUN_1400b22c2(&DAT_14cbb9050,"ClosePlayerStats");
  atexit((_func_5014 *)&LAB_14407bc04);
  FUN_1400b22c2(&DAT_14cbb9060,"OpenRewardCenter");
  atexit((_func_5014 *)&LAB_14407bc15);
  FUN_1400b22c2(&DAT_14cbb9070,"CloseRewardCenter");
  atexit((_func_5014 *)&LAB_14407bc26);
  FUN_1400b22c2(&DAT_14cbb9080,"CompareStart");
  atexit((_func_5014 *)&LAB_14407bc37);
  FUN_1400b22c2(&DAT_14cbb9090,"CompareStop");
  atexit((_func_5014 *)&LAB_14407bc48);
  FUN_1400b22c2(&DAT_14cbb90a0,"UnequipItem");
  atexit((_func_5014 *)&LAB_14407bc59);
  FUN_1400b22c2(&DAT_14cbb90b0,"EquipItem");
  atexit((_func_5014 *)&LAB_14407bc6a);
  FUN_1400b22c2(&DAT_14cbb90c0,"DropItem");
  atexit((_func_5014 *)&LAB_14407bc7b);
  FUN_1400b22c2(&DAT_14cbb90d0,"MarkItem");
  atexit((_func_5014 *)&LAB_14407bc8c);
  FUN_1400b22c2(&DAT_14cbb90e0,"Error");
  atexit((_func_5014 *)&LAB_14407bc9d);
  FUN_1400b22c2(&DAT_14cbb90f0,"ElementUnfocused");
  atexit((_func_5014 *)&LAB_14407bcae);
  FUN_1400b22c2(&DAT_14cbb9100,"ElementFocused");
  atexit((_func_5014 *)&LAB_14407bcbf);
  FUN_1400b22c2(&DAT_14cbb9110,"ElementClicked");
  atexit((_func_5014 *)&LAB_14407bcd0);
  FUN_1400b22c2(&DAT_14cbb9120,"EscapeInput");
  atexit((_func_5014 *)&LAB_14407bce1);
  FUN_1400b22c2(&DAT_14cbb9130,"WeaponSlotFocused");
  atexit((_func_5014 *)&LAB_14407bcf2);
  FUN_1400b22c2(&DAT_14cbb9140,"WeaponSlotUnfocused");
  atexit((_func_5014 *)&LAB_14407bd03);
  FUN_1400b22c2(&DAT_14cbb9150,"GearSlotFocused");
  atexit((_func_5014 *)&LAB_14407bd14);
  FUN_1400b22c2(&DAT_14cbb9160,"GearSlotUnfocused");
  atexit((_func_5014 *)&LAB_14407bd25);
  FUN_1400b22c2(&DAT_14cbb9170,"BackpackSlotFocused");
  atexit((_func_5014 *)&LAB_14407bd36);
  FUN_1400b22c2(&DAT_14cbb9180,"BackpackSlotUnfocused");
  atexit((_func_5014 *)&LAB_14407bd47);
  FUN_1400b22c2(&DAT_14cbb9190,"MarkItemBank");
  atexit((_func_5014 *)&LAB_14407bd58);
  FUN_1400b22c2(&DAT_14cbb91a0,"MarkItemTrash");
  atexit((_func_5014 *)&LAB_14407bd69);
  FUN_1400b22c2(&DAT_14cbb91b0,"MarkItemFavorite");
  atexit((_func_5014 *)&LAB_14407bd7a);
  FUN_1400b22c2(&DAT_14cbb91c0,"ClickPistol");
  atexit((_func_5014 *)&LAB_14407bd8b);
  FUN_1400b22c2(&DAT_14cbb91d0,"ClickAssaultRifle");
  atexit((_func_5014 *)&LAB_14407bd9c);
  FUN_1400b22c2(&DAT_14cbb91e0,"ClickSMG");
  atexit((_func_5014 *)&LAB_14407bdad);
  FUN_1400b22c2(&DAT_14cbb91f0,"ClickShotgun");
  atexit((_func_5014 *)&LAB_14407bdbe);
  FUN_1400b22c2(&DAT_14cbb9200,"ClickSniper");
  atexit((_func_5014 *)&LAB_14407bdcf);
  FUN_1400b22c2(&DAT_14cbb9210,"ClickRepKit");
  atexit((_func_5014 *)&LAB_14407bde0);
  FUN_1400b22c2(&DAT_14cbb9220,"ClickGrenade");
  atexit((_func_5014 *)&LAB_14407bdf1);
  FUN_1400b22c2(&DAT_14cbb9230,"ClickHeavyWeapon");
  atexit((_func_5014 *)&LAB_14407be02);
  FUN_1400b22c2(&DAT_14cbb9240,"ClickClassMod");
  atexit((_func_5014 *)&LAB_14407be13);
  FUN_1400b22c2(&DAT_14cbb9250,"ClickGadget");
  atexit((_func_5014 *)&LAB_14407be24);
  FUN_1400b22c2(&DAT_14cbb9260,"ClickEnhancement");
  atexit((_func_5014 *)&LAB_14407be35);
  FUN_1400b22c2(&DAT_14cbb9270,"ClickShield");
  atexit((_func_5014 *)&LAB_14407be46);
  FUN_1400b22c2(&DAT_14cbb9280,"EquipPistol");
  atexit((_func_5014 *)&LAB_14407be57);
  FUN_1400b22c2(&DAT_14cbb9290,"EquipAssaultRifle");
  atexit((_func_5014 *)&LAB_14407be68);
  FUN_1400b22c2(&DAT_14cbb92a0,"EquipSMG");
  atexit((_func_5014 *)&LAB_14407be79);
  FUN_1400b22c2(&DAT_14cbb92b0,"EquipShotgun");
  atexit((_func_5014 *)&LAB_14407be8a);
  FUN_1400b22c2(&DAT_14cbb92c0,"EquipSniper");
  atexit((_func_5014 *)&LAB_14407be9b);
  FUN_1400b22c2(&DAT_14cbb92d0,"EquipRepKit");
  atexit((_func_5014 *)&LAB_14407beac);
  FUN_1400b22c2(&DAT_14cbb92e0,"EquipGrenade");
  atexit((_func_5014 *)&LAB_14407bebd);
  FUN_1400b22c2(&DAT_14cbb92f0,"EquipHeavyWeapon");
  atexit((_func_5014 *)&LAB_14407bece);
  FUN_1400b22c2(&DAT_14cbb9300,"EquipClassMod");
  atexit((_func_5014 *)&LAB_14407bedf);
  FUN_1400b22c2(&DAT_14cbb9310,"EquipGadget");
  atexit((_func_5014 *)&LAB_14407bef0);
  FUN_1400b22c2(&DAT_14cbb9320,"EquipEnhancement");
  atexit((_func_5014 *)&LAB_14407bf01);
  FUN_1400b22c2(&DAT_14cbb9330,"EquipShield");
  atexit((_func_5014 *)&LAB_14407bf12);
  FUN_1400b22c2(&DAT_14cbb9340,"weapon");
  atexit((_func_5014 *)&LAB_14407bf23);
  FUN_1400b22c2(&DAT_14cbb9350,"weapon_ps");
  atexit((_func_5014 *)&LAB_14407bf34);
  FUN_1400b22c2(&DAT_14cbb9360,"weapon_ar");
  atexit((_func_5014 *)&LAB_14407bf45);
  FUN_1400b22c2(&DAT_14cbb9370,"weapon_sg");
  atexit((_func_5014 *)&LAB_14407bf56);
  FUN_1400b22c2(&DAT_14cbb9380,"weapon_sr");
  atexit((_func_5014 *)&LAB_14407bf67);
  FUN_1400b22c2(&DAT_14cbb9390,"weapon_sm");
  atexit((_func_5014 *)&LAB_14407bf78);
  FUN_1400b22c2(&DAT_14cbb93a0,"grenade_gadget");
  atexit((_func_5014 *)&LAB_14407bf89);
  FUN_1400b22c2(&DAT_14cbb93b0,"shield");
  atexit((_func_5014 *)&LAB_14407bf9a);
  FUN_1400b22c2(&DAT_14cbb93c0,"heavy_weapon_gadget");
  atexit((_func_5014 *)&LAB_14407bfab);
  FUN_1400b22c2(&DAT_14cbb93d0,"repair_kit");
  atexit((_func_5014 *)&LAB_14407bfbc);
  FUN_1400b22c2(&DAT_14cbb93e0,"classmod");
  atexit((_func_5014 *)&LAB_14407bfcd);
  FUN_1400b22c2(&DAT_14cbb93f0,"classmod_dark_siren");
  atexit((_func_5014 *)&LAB_14407bfde);
  FUN_1400b22c2(&DAT_14cbb9400,"classmod_exo_soldier");
  atexit((_func_5014 *)&LAB_14407bfef);
  FUN_1400b22c2(&DAT_14cbb9410,"classmod_gravitar");
  atexit((_func_5014 *)&LAB_14407c000);
  FUN_1400b22c2(&DAT_14cbb9420,"classmod_paladin");
  atexit((_func_5014 *)&LAB_14407c011);
  FUN_1400b22c2(&DAT_14cbb9430,"gadget");
  atexit((_func_5014 *)&LAB_14407c022);
  FUN_1400b22c2(&DAT_14cbb9440,"enhancement");
  atexit((_func_5014 *)&LAB_14407c033);
  FUN_140056680(&DAT_14cbb9450,L"recent");
  atexit((_func_5014 *)&LAB_14407c044);
  FUN_140056680(&DAT_14cbb9460,L"type");
  atexit((_func_5014 *)&LAB_14407c055);
  FUN_140056680(&DAT_14cbb9470,L"level");
  atexit((_func_5014 *)&LAB_14407c066);
  FUN_140056680(&DAT_14cbb9480,L"base_name");
  atexit((_func_5014 *)&LAB_14407c077);
  FUN_140056680(&DAT_14cbb9490,L"first_letter");
  atexit((_func_5014 *)&LAB_14407c088);
  FUN_140056680(&DAT_14cbb94a0,L"value");
  atexit((_func_5014 *)&LAB_14407c099);
  FUN_140056680(&DAT_14cbb94b0,L"rarity");
  atexit((_func_5014 *)&LAB_14407c0aa);
  FUN_140056680(&DAT_14cbb94c0,L"manufacturer");
  atexit((_func_5014 *)&LAB_14407c0bb);
  _Src = DAT_14cbb8a30;
  DAT_14cbb94d0 = (void *)0x0;
  lVar3 = (longlong)DAT_14cbb8a38;
  _DAT_14cbb94d8 = DAT_14cbb8a38;
  if (lVar3 == 0) {
    _DAT_14cbb94dc = 0;
  }
  else {
    FUN_1446dd670(&DAT_14cbb94d0,DAT_14cbb8a38,0);
    memcpy(DAT_14cbb94d0,_Src,lVar3 * 2);
  }
  atexit((_func_5014 *)&LAB_14407c0cc);
  FUN_140056680(&DAT_14cbb94e0,L"healing");
  atexit((_func_5014 *)&LAB_14407c0dd);
  local_70 = "cancel";
  local_68 = 6;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb94f0 = (ulonglong)uVar2;
  local_70 = "partial";
  local_68 = 7;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb94f8 = (ulonglong)uVar2;
  local_70 = "all";
  local_68 = 3;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb9500 = (ulonglong)uVar2;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8a5db0);
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8a7810);
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8a78f0);
  FUN_1400b22c2(&local_70,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_70,&DAT_14cbb9580);
  if (cVar1 == '\0') {
    _DAT_14cbb9580 = 0;
    uRam000000014cbb9588 = 0;
  }
  if (local_70 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_70 = "bone";
  local_68 = 4;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  _DAT_14cbb9590 = 0x47efffffe0000000;
  _DAT_14cbb9598 = 0x47efffffe0000000;
  _DAT_14cbb95a0 = 0x47efffffe0000000;
  _DAT_14cbb95a8 = 0x47efffffe0000000;
  _DAT_14cbb95b0 = 0x47efffffe0000000;
  _DAT_14cbb95b8 = 0x47efffffe0000000;
  _DAT_14cbb95c0 = 0x47efffffe0000000;
  _DAT_14cbb95c8 = 0x47efffffe0000000;
  _DAT_14cbb95d4 = 0;
  FUN_14052b5e0(&DAT_14cbb95d0,"PlayerAwareness",0);
  _DAT_14cbb95e0 = "PlayerAwareness";
  FUN_1446f470e(&DAT_14cbb95e8,L"UNSET",1);
  FUN_140056680(&DAT_14cbb95f0,L"incomplete");
  atexit((_func_5014 *)&LAB_14407c0ee);
  FUN_140056680(&DAT_14cbb9600,L"eridium_reward");
  atexit((_func_5014 *)&LAB_14407c0ff);
  FUN_140056680(&DAT_14cbb9610,L"rank_complete");
  atexit((_func_5014 *)&LAB_14407c110);
  FUN_140056680(&DAT_14cbb9620,L"challenge_complete");
  atexit((_func_5014 *)&LAB_14407c121);
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8a7f10);
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8a80b0);
  FUN_140056680(&DAT_14cbb9678,L"available");
  atexit((_func_5014 *)&LAB_14407c132);
  FUN_140056680(&DAT_14cbb9688,L"synced");
  atexit((_func_5014 *)&LAB_14407c143);
  FUN_140056680(&DAT_14cbb9698,L"offline");
  atexit((_func_5014 *)&LAB_14407c154);
  FUN_140056680(&DAT_14cbb96a8,L"incompatible");
  atexit((_func_5014 *)&LAB_14407c165);
  FUN_140056680(&DAT_14cbb96b8,L"conflict");
  atexit((_func_5014 *)&LAB_14407c176);
  _DAT_14cbb96c8 = 0;
  uRam000000014cbb96d0 = 0;
  _DAT_14cbb96d8 = 0;
  DAT_14cbb96e0 = 0;
  uRam000000014cbb96e8 = 0;
  FUN_1446ddda2(&DAT_14cbb96c8,"MainMenuVersionText",0);
  atexit((_func_5014 *)&LAB_14407c187);
  _DAT_14cbb96f0 = 0;
  uRam000000014cbb96f8 = 0;
  _DAT_14cbb9700 = 0;
  DAT_14cbb9708 = 0;
  uRam000000014cbb9710 = 0;
  FUN_1446ddda2(&DAT_14cbb96f0,"MainMenuVersionUpdateReadyText",0);
  atexit((_func_5014 *)&LAB_14407c198);
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8a8770);
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8a8910);
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 5;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8a96f0);
  FUN_1446f470e(&DAT_14cbb97d8,L"Party",1);
  FUN_1446f470e(&DAT_14cbb97e0,&DAT_149e063b2,1);
  FUN_1446f470e(&DAT_14cbb97e8,L"Join",1);
  FUN_1446f470e(&DAT_14cbb97f0,L"Invite",1);
  FUN_1446f470e(&DAT_14cbb97f8,L"ViewProfile",1);
  FUN_1446f470e(&DAT_14cbb9800,L"AddFriend",1);
  FUN_1446f470e(&DAT_14cbb9808,L"Mute",1);
  FUN_1446f470e(&DAT_14cbb9810,L"Unmute",1);
  FUN_1446f470e(&DAT_14cbb9818,L"Promote",1);
  FUN_1446f470e(&DAT_14cbb9820,L"Kick",1);
  FUN_1446f470e(&DAT_14cbb9828,L"AddShiftFriend",1);
  FUN_1446f470e(&DAT_14cbb9830,L"RemoveShiftFriend",1);
  FUN_1446f470e(&DAT_14cbb9838,L"AddFavorite",1);
  FUN_1446f470e(&DAT_14cbb9840,L"RemoveFavorite",1);
  FUN_1446f470e(&DAT_14cbb9848,L"BlockShiftPlayer",1);
  FUN_1446f470e(&DAT_14cbb9850,L"UnblockShiftPlayer",1);
  FUN_1446f470e(&DAT_14cbb9858,L"ReportShiftPlayer",1);
  FUN_1446f470e(&DAT_14cbb9860,L"InviteFriend",1);
  FUN_1446f470e(&DAT_14cbb9868,L"InviteRecentFriends",1);
  FUN_1446f470e(&DAT_14cbb9870,L"JoinRecentFriendsHost",1);
  FUN_1446f470e(&DAT_14cbb9878,L"ViewProfiles",1);
  FUN_1446f470e(&DAT_14cbb9880,L"TeleportToPlayer",1);
  FUN_1446f470e(&DAT_14cbb9888,L"Cancel",1);
  _DAT_14cbb9890 = 0;
  uRam000000014cbb9898 = 0;
  _DAT_14cbb98a0 = 0;
  DAT_14cbb98a8 = 0;
  uRam000000014cbb98b0 = 0;
  FUN_1446ddda2(&DAT_14cbb9890,"Dialog_Join",0);
  atexit((_func_5014 *)&LAB_14407c1eb);
  _DAT_14cbb98b8 = 0;
  uRam000000014cbb98c0 = 0;
  _DAT_14cbb98c8 = 0;
  DAT_14cbb98d0 = 0;
  uRam000000014cbb98d8 = 0;
  FUN_1446ddda2(&DAT_14cbb98b8,"Dialog_Invite",0);
  atexit((_func_5014 *)&LAB_14407c1fc);
  _DAT_14cbb98e0 = 0;
  uRam000000014cbb98e8 = 0;
  _DAT_14cbb98f0 = 0;
  DAT_14cbb98f8 = 0;
  uRam000000014cbb9900 = 0;
  FUN_1446ddda2(&DAT_14cbb98e0,"Dialog_ViewProfile");
  atexit((_func_5014 *)&LAB_14407c20d);
  _DAT_14cbb9908 = 0;
  uRam000000014cbb9910 = 0;
  _DAT_14cbb9918 = 0;
  DAT_14cbb9920 = 0;
  uRam000000014cbb9928 = 0;
  FUN_1446ddda2(&DAT_14cbb9908,"Dialog_AddFriend");
  atexit((_func_5014 *)&LAB_14407c21e);
  _DAT_14cbb9930 = 0;
  uRam000000014cbb9938 = 0;
  _DAT_14cbb9940 = 0;
  DAT_14cbb9948 = 0;
  uRam000000014cbb9950 = 0;
  FUN_1446ddda2(&DAT_14cbb9930,"Dialog_Mute");
  atexit((_func_5014 *)&LAB_14407c22f);
  _DAT_14cbb9958 = 0;
  uRam000000014cbb9960 = 0;
  _DAT_14cbb9968 = 0;
  DAT_14cbb9970 = 0;
  uRam000000014cbb9978 = 0;
  FUN_1446ddda2(&DAT_14cbb9958,"Dialog_Unmute");
  atexit((_func_5014 *)&LAB_14407c240);
  _DAT_14cbb9980 = 0;
  uRam000000014cbb9988 = 0;
  _DAT_14cbb9990 = 0;
  DAT_14cbb9998 = 0;
  uRam000000014cbb99a0 = 0;
  FUN_1446ddda2(&DAT_14cbb9980,"Dialog_Promote");
  atexit((_func_5014 *)&LAB_14407c251);
  _DAT_14cbb99a8 = 0;
  uRam000000014cbb99b0 = 0;
  _DAT_14cbb99b8 = 0;
  DAT_14cbb99c0 = 0;
  uRam000000014cbb99c8 = 0;
  FUN_1446ddda2(&DAT_14cbb99a8,"Dialog_Kick");
  atexit((_func_5014 *)&LAB_14407c262);
  _DAT_14cbb99d0 = 0;
  uRam000000014cbb99d8 = 0;
  _DAT_14cbb99e0 = 0;
  DAT_14cbb99e8 = 0;
  uRam000000014cbb99f0 = 0;
  FUN_1446ddda2(&DAT_14cbb99d0,"Dialog_AddShiftFriend");
  atexit((_func_5014 *)&LAB_14407c273);
  _DAT_14cbb99f8 = 0;
  uRam000000014cbb9a00 = 0;
  _DAT_14cbb9a08 = 0;
  DAT_14cbb9a10 = 0;
  uRam000000014cbb9a18 = 0;
  FUN_1446ddda2(&DAT_14cbb99f8,"Dialog_RemoveShiftFriend");
  atexit((_func_5014 *)&LAB_14407c284);
  _DAT_14cbb9a20 = 0;
  uRam000000014cbb9a28 = 0;
  _DAT_14cbb9a30 = 0;
  DAT_14cbb9a38 = 0;
  uRam000000014cbb9a40 = 0;
  FUN_1446ddda2(&DAT_14cbb9a20,"Dialog_AddFavorite");
  atexit((_func_5014 *)&LAB_14407c295);
  _DAT_14cbb9a48 = 0;
  uRam000000014cbb9a50 = 0;
  _DAT_14cbb9a58 = 0;
  DAT_14cbb9a60 = 0;
  uRam000000014cbb9a68 = 0;
  FUN_1446ddda2(&DAT_14cbb9a48,"Dialog_RemoveFavorite");
  atexit((_func_5014 *)&LAB_14407c2a6);
  _DAT_14cbb9a70 = 0;
  uRam000000014cbb9a78 = 0;
  _DAT_14cbb9a80 = 0;
  DAT_14cbb9a88 = 0;
  uRam000000014cbb9a90 = 0;
  FUN_1446ddda2(&DAT_14cbb9a70,"Dialog_BlockShiftPlayer");
  atexit((_func_5014 *)&LAB_14407c2b7);
  _DAT_14cbb9a98 = 0;
  uRam000000014cbb9aa0 = 0;
  _DAT_14cbb9aa8 = 0;
  DAT_14cbb9ab0 = 0;
  uRam000000014cbb9ab8 = 0;
  FUN_1446ddda2(&DAT_14cbb9a98,"Dialog_UnblockShiftPlayer");
  atexit((_func_5014 *)&LAB_14407c2c8);
  _DAT_14cbb9ac0 = 0;
  uRam000000014cbb9ac8 = 0;
  _DAT_14cbb9ad0 = 0;
  DAT_14cbb9ad8 = 0;
  uRam000000014cbb9ae0 = 0;
  FUN_1446ddda2(&DAT_14cbb9ac0,"Dialog_ReportShiftPlayer",0);
  atexit((_func_5014 *)&LAB_14407c2d9);
  _DAT_14cbb9ae8 = 0;
  uRam000000014cbb9af0 = 0;
  _DAT_14cbb9af8 = 0;
  DAT_14cbb9b00 = 0;
  uRam000000014cbb9b08 = 0;
  FUN_1446ddda2(&DAT_14cbb9ae8,"Dialog_InviteFriend",0);
  atexit((_func_5014 *)&LAB_14407c2ea);
  _DAT_14cbb9b10 = 0;
  uRam000000014cbb9b18 = 0;
  _DAT_14cbb9b20 = 0;
  DAT_14cbb9b28 = 0;
  uRam000000014cbb9b30 = 0;
  FUN_1446ddda2(&DAT_14cbb9b10,"Dialog_InviteRecentFriends",0);
  atexit((_func_5014 *)&LAB_14407c2fb);
  _DAT_14cbb9b38 = 0;
  uRam000000014cbb9b40 = 0;
  _DAT_14cbb9b48 = 0;
  DAT_14cbb9b50 = 0;
  uRam000000014cbb9b58 = 0;
  FUN_1446ddda2(&DAT_14cbb9b38,"Dialog_JoinRecentFriendsHost",0);
  atexit((_func_5014 *)&LAB_14407c30c);
  _DAT_14cbb9b60 = 0;
  uRam000000014cbb9b68 = 0;
  _DAT_14cbb9b70 = 0;
  DAT_14cbb9b78 = 0;
  uRam000000014cbb9b80 = 0;
  FUN_1446ddda2(&DAT_14cbb9b60,"Dialog_ViewProfiles",0);
  atexit((_func_5014 *)&LAB_14407c31d);
  _DAT_14cbb9b88 = 0;
  uRam000000014cbb9b90 = 0;
  _DAT_14cbb9b98 = 0;
  DAT_14cbb9ba0 = 0;
  uRam000000014cbb9ba8 = 0;
  FUN_1446ddda2(&DAT_14cbb9b88,"Dialog_TeleportToPlayer",0);
  atexit((_func_5014 *)&LAB_14407c32e);
  _DAT_14cbb9bb0 = 0;
  uRam000000014cbb9bb8 = 0;
  _DAT_14cbb9bc0 = 0;
  DAT_14cbb9bc8 = 0;
  uRam000000014cbb9bd0 = 0;
  FUN_1446ddda2(&DAT_14cbb9bb0,"Dialog_Cancel");
  atexit((_func_5014 *)&LAB_14407c33f);
  FUN_1400b22c2(&DAT_14cbb9bd8,"GoOnlineText");
  atexit((_func_5014 *)&LAB_14407c350);
  FUN_1400b22c2(&DAT_14cbb9be8,"GoingOnlineTextOnePeriod");
  atexit((_func_5014 *)&LAB_14407c361);
  FUN_1400b22c2(&DAT_14cbb9bf8,"GoingOnlineTextTwoPeriods");
  atexit((_func_5014 *)&LAB_14407c372);
  FUN_1400b22c2(&DAT_14cbb9c08);
  atexit((_func_5014 *)&LAB_14407c383);
  uStack_78 = 0;
  local_80 = 0;
  local_88 = 8;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8abc40);
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14407fe3e FUN_14407fe3e body=55 status=ok
// SIG undefined FUN_14407fe3e(void)

void FUN_14407fe3e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbabc0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbabc0 = FUN_14171c317(FUN_14660753d,uVar1,L"EOakUI_MissionFilters");
  }
  return;
}



// FUNCTION 14407fe75 FUN_14407fe75 body=55 status=ok
// SIG undefined FUN_14407fe75(void)

void FUN_14407fe75(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbabd8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbabd8 = FUN_14171c317(FUN_14660756c,uVar1,L"EOakUI_ActiveTab");
  }
  return;
}



// FUNCTION 14407fee6 FUN_14407fee6 body=57 status=ok
// SIG undefined FUN_14407fee6(void)

void FUN_14407fee6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb9ce8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb9ce8 = FUN_140002ddd(FUN_14660660b,uVar1,L"OakWidgetData_LootFeed");
  }
  return;
}



// FUNCTION 14407ff58 FUN_14407ff58 body=57 status=ok
// SIG undefined FUN_14407ff58(void)

void FUN_14407ff58(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbba8d0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbba8d0 = FUN_140002ddd(FUN_146606853,uVar1,L"OakWidgetData_MatchmakingIndicator");
  }
  return;
}



// FUNCTION 14407ffbc FUN_14407ffbc body=57 status=ok
// SIG undefined FUN_14407ffbc(void)

void FUN_14407ffbc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbba918 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbba918 = FUN_140002ddd(FUN_146606a0b,uVar1,L"OakWidgetData_MatchmakingMenu");
  }
  return;
}



// FUNCTION 144080004 FUN_144080004 body=57 status=ok
// SIG undefined FUN_144080004(void)

void FUN_144080004(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbba930 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbba930 = FUN_140002ddd(FUN_146606a9d,uVar1,L"OakWidgetData_MatchmakingSettingsMenu");
  }
  return;
}



// FUNCTION 1440800ca FUN_1440800ca body=57 status=ok
// SIG undefined FUN_1440800ca(void)

void FUN_1440800ca(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbaa80 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbaa80 = FUN_140002ddd(FUN_146607051,uVar1,L"OakUIData_OakPauseMenu");
  }
  return;
}



// FUNCTION 144080104 FUN_144080104 body=643 status=ok
// SIG undefined FUN_144080104(void)

longlong FUN_144080104(longlong param_1,longlong param_2)

{
  int iVar1;
  void *pvVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  FUN_148c8499e();
  *(undefined1 *)(param_1 + 0x288) = *(undefined1 *)(param_2 + 0x288);
  *(undefined1 *)(param_1 + 0x290) = *(undefined1 *)(param_2 + 0x290);
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x2a0);
    pvVar2 = *(void **)(param_2 + 0x298);
    *(int *)(param_1 + 0x2a0) = iVar1;
    if (iVar1 == 0 && *(int *)(param_1 + 0x2a4) == 0) {
      *(undefined4 *)(param_1 + 0x2a4) = 0;
    }
    else {
      FUN_1446dd670((undefined8 *)(param_1 + 0x298),iVar1);
      if (iVar1 != 0) {
        memcpy(*(void **)(param_1 + 0x298),pvVar2,(longlong)iVar1 * 2);
      }
    }
    iVar1 = *(int *)(param_2 + 0x2b0);
    pvVar2 = *(void **)(param_2 + 0x2a8);
    *(int *)(param_1 + 0x2b0) = iVar1;
    if (iVar1 == 0 && *(int *)(param_1 + 0x2b4) == 0) {
      *(undefined4 *)(param_1 + 0x2b4) = 0;
    }
    else {
      FUN_1446dd670((undefined8 *)(param_1 + 0x2a8),iVar1);
      if (iVar1 != 0) {
        memcpy(*(void **)(param_1 + 0x2a8),pvVar2,(longlong)iVar1 * 2);
      }
    }
  }
  *(undefined2 *)(param_1 + 0x2b8) = *(undefined2 *)(param_2 + 0x2b8);
  plVar3 = *(longlong **)(param_2 + 0x2c0);
  plVar4 = *(longlong **)(param_1 + 0x2c0);
  if (plVar4 != plVar3) {
    *(longlong **)(param_1 + 0x2c0) = plVar3;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  *(undefined4 *)(param_1 + 0x2c8) = *(undefined4 *)(param_2 + 0x2c8);
  *(undefined1 *)(param_1 + 0x2d0) = *(undefined1 *)(param_2 + 0x2d0);
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x2e0);
    pvVar2 = *(void **)(param_2 + 0x2d8);
    *(int *)(param_1 + 0x2e0) = iVar1;
    if (iVar1 == 0 && *(int *)(param_1 + 0x2e4) == 0) {
      *(undefined4 *)(param_1 + 0x2e4) = 0;
    }
    else {
      FUN_1446dd670((undefined8 *)(param_1 + 0x2d8),iVar1);
      if (iVar1 != 0) {
        memcpy(*(void **)(param_1 + 0x2d8),pvVar2,(longlong)iVar1 * 2);
      }
    }
    iVar1 = *(int *)(param_2 + 0x2f0);
    pvVar2 = *(void **)(param_2 + 0x2e8);
    *(int *)(param_1 + 0x2f0) = iVar1;
    if (iVar1 == 0 && *(int *)(param_1 + 0x2f4) == 0) {
      *(undefined4 *)(param_1 + 0x2f4) = 0;
    }
    else {
      FUN_1446dd670((undefined8 *)(param_1 + 0x2e8),iVar1);
      if (iVar1 != 0) {
        memcpy(*(void **)(param_1 + 0x2e8),pvVar2,(longlong)iVar1 * 2);
      }
    }
  }
  if (*(int *)(param_1 + 0x2fc) != *(int *)(param_2 + 0x2fc)) {
    *(undefined1 *)(param_1 + 0x2f8) = *(undefined1 *)(param_2 + 0x2f8);
    *(undefined4 *)(param_1 + 0x2fc) = *(undefined4 *)(param_2 + 0x2fc);
  }
  if (*(int *)(param_1 + 0x304) != *(int *)(param_2 + 0x304)) {
    *(undefined1 *)(param_1 + 0x300) = *(undefined1 *)(param_2 + 0x300);
    *(undefined4 *)(param_1 + 0x304) = *(undefined4 *)(param_2 + 0x304);
  }
  plVar3 = *(longlong **)(param_2 + 0x308);
  plVar4 = *(longlong **)(param_1 + 0x308);
  if (plVar4 != plVar3) {
    *(longlong **)(param_1 + 0x308) = plVar3;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  *(undefined4 *)(param_1 + 0x310) = *(undefined4 *)(param_2 + 0x310);
  return param_1;
}



// FUNCTION 1440803c0 FUN_1440803c0 body=57 status=ok
// SIG undefined FUN_1440803c0(void)

void FUN_1440803c0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbaae0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbaae0 = FUN_140002ddd(FUN_146607299,uVar1,L"OakUIData_Message");
  }
  return;
}



// FUNCTION 1440804da FUN_1440804da body=57 status=ok
// SIG undefined FUN_1440804da(void)

void FUN_1440804da(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbacf8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbacf8 = FUN_140002ddd(FUN_146607bed,uVar1,L"OakWidgetData_MissionTracker");
  }
  return;
}



// FUNCTION 144080514 FUN_144080514 body=180 status=ok
// SIG undefined FUN_144080514(void)

longlong FUN_144080514(longlong param_1,longlong param_2)

{
  FUN_1489fb7d2();
  if (*(int *)(param_1 + 0xb4) != *(int *)(param_2 + 0xb4)) {
    *(undefined1 *)(param_1 + 0xb0) = *(undefined1 *)(param_2 + 0xb0);
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_2 + 0xb4);
  }
  if (*(int *)(param_1 + 0xbc) != *(int *)(param_2 + 0xbc)) {
    *(undefined1 *)(param_1 + 0xb8) = *(undefined1 *)(param_2 + 0xb8);
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_2 + 0xbc);
  }
  FUN_148c8879c(param_1 + 0xc0,param_2 + 0xc0);
  FUN_148c8879c(param_1 + 0x120,param_2 + 0x120);
  FUN_148c8879c(param_1 + 0x180,param_2 + 0x180);
  *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_2 + 0x1e0);
  *(undefined2 *)(param_1 + 0x1e4) = *(undefined2 *)(param_2 + 0x1e4);
  return param_1;
}



// FUNCTION 1440805c8 FUN_1440805c8 body=10025 status=ok
// SIG undefined FUN_1440805c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1440805c8(void)

{
  void *_Src;
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined **local_80;
  undefined8 uStack_78;
  char *local_70;
  int local_68;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = "AssetRegistry";
  local_68 = 0xd;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb9cd8 = (ulonglong)uVar1;
  local_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8aef90);
  local_70 = "state_rem";
  local_68 = 9;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb9cf8 = (ulonglong)uVar1;
  local_70 = "state_add";
  local_68 = 9;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb9d00 = (ulonglong)uVar1;
  local_70 = "state_remove_primary";
  local_68 = 0x14;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb9d08 = (ulonglong)uVar1;
  FUN_1400b22c2(&DAT_14cbb9d10,"weapon_dps_estimate");
  atexit((_func_5014 *)&LAB_14407f4d0);
  _DAT_14cbb9d24 = 0;
  FUN_14052b5e0(&DAT_14cbb9d20,"character",0);
  _DAT_14cbb9d30 = 0;
  FUN_14052b5e0(&DAT_14cbb9d2c,"profile",0);
  local_70 = "entry_sets";
  local_68 = 10;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb9d38 = (ulonglong)uVar1;
  local_70 = "entries";
  local_68 = 7;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb9d40 = (ulonglong)uVar1;
  local_70 = "menu_title";
  local_68 = 10;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb9d48 = (ulonglong)uVar1;
  local_70 = "actions";
  local_68 = 7;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb9d50 = (ulonglong)uVar1;
  local_70 = "loc_text";
  local_68 = 8;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb9d58 = (ulonglong)uVar1;
  local_70 = "desc_text";
  local_68 = 9;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb9d60 = (ulonglong)uVar1;
  local_70 = "style";
  local_68 = 5;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb9d68 = (ulonglong)uVar1;
  local_70 = "horizontal";
  local_68 = 10;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb9d70 = (ulonglong)uVar1;
  local_70 = "entry_set_default";
  local_68 = 0x11;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb9d78 = (ulonglong)uVar1;
  local_70 = "required_nexus_layer";
  local_68 = 0x14;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb9d80 = (ulonglong)uVar1;
  local_70 = "tooltip_key";
  local_68 = 0xb;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb9d88 = (ulonglong)uVar1;
  local_70 = "set_push";
  local_68 = 8;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb9d90 = (ulonglong)uVar1;
  local_70 = "exit_game";
  local_68 = 9;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb9d98 = (ulonglong)uVar1;
  local_70 = "back";
  local_68 = 4;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb9da0 = (ulonglong)uVar1;
  local_70 = "back_actions";
  local_68 = 0xc;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb9da8 = (ulonglong)uVar1;
  _DAT_14cbb9db0 = 0;
  uRam000000014cbb9db8 = 0;
  _DAT_14cbb9dc0 = 0;
  DAT_14cbb9dc8 = 0;
  uRam000000014cbb9dd0 = 0;
  FUN_1446ddda2(&DAT_14cbb9db0,&DAT_14b81bd00,0);
  atexit((_func_5014 *)&LAB_14407f4e1);
  local_70 = "num_rows_override";
  local_68 = 0x11;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb9dd8 = (ulonglong)uVar1;
  local_70 = "show_capacity_text";
  local_68 = 0x12;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb9de0 = (ulonglong)uVar1;
  local_70 = "num_columns_override";
  local_68 = 0x14;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb9de8 = (ulonglong)uVar1;
  local_70 = "sort_list_config";
  local_68 = 0x10;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb9df0 = (ulonglong)uVar1;
  local_70 = "filter_list_config";
  local_68 = 0x12;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb9df8 = (ulonglong)uVar1;
  local_70 = "default_sort_ident";
  local_68 = 0x12;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb9e00 = (ulonglong)uVar1;
  local_70 = "enable_filter";
  local_68 = 0xd;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb9e08 = (ulonglong)uVar1;
  local_70 = "enable_sort";
  local_68 = 0xb;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb9e10 = (ulonglong)uVar1;
  FUN_1400b22c2(&DAT_14cbb9e18,"backpack_item_grid");
  atexit((_func_5014 *)&LAB_14407f4f2);
  FUN_1400b22c2(&DAT_14cbb9e28,"bpack_sort_asc_dsc");
  atexit((_func_5014 *)&LAB_14407f503);
  FUN_1400b22c2(&DAT_14cbb9e38,"sort-dropdown");
  atexit((_func_5014 *)&LAB_14407f514);
  FUN_1400b22c2(&DAT_14cbb9e48,"filter-dropdown");
  atexit((_func_5014 *)&LAB_14407f525);
  local_70 = "ITEM_CARD";
  local_68 = 9;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb9e58 = (ulonglong)uVar1;
  local_70 = "ITEM_CARD_COMPARE";
  local_68 = 0x11;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb9e60 = (ulonglong)uVar1;
  local_70 = "MENU_FULL_BACKPACK";
  local_68 = 0x12;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb9e68 = (ulonglong)uVar1;
  local_70 = "MENU_POPUP_BACKPACK";
  local_68 = 0x13;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb9e70 = (ulonglong)uVar1;
  local_70 = "MENU_PLAYER_STATS";
  local_68 = 0x11;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb9e78 = (ulonglong)uVar1;
  FUN_1400b22c2(&DAT_14cbb9e80,"filter-dropdown");
  atexit((_func_5014 *)&LAB_14407f536);
  FUN_1400b22c2(&DAT_14cbb9e90,"equip_slot_dropdown");
  atexit((_func_5014 *)&LAB_14407f547);
  FUN_1400b22c2(&DAT_14cbb9ea0,"mark-dropdown");
  atexit((_func_5014 *)&LAB_14407f558);
  FUN_1400b22c2(&DAT_14cbb9eb0,"item-dropdown");
  atexit((_func_5014 *)&LAB_14407f569);
  FUN_1400b22c2(&DAT_14cbb9ec0,"sort-dropdown");
  atexit((_func_5014 *)&LAB_14407f57a);
  FUN_1400b22c2(&DAT_14cbb9ed0,&DAT_149e3cc88);
  atexit((_func_5014 *)&LAB_14407f58b);
  FUN_1400b22c2(&DAT_14cbb9ee0,"Popup");
  atexit((_func_5014 *)&LAB_14407f59c);
  FUN_1400b22c2(&DAT_14cbb9ef0,"Fullsize");
  atexit((_func_5014 *)&LAB_14407f5ad);
  FUN_1400b22c2(&DAT_14cbb9f00,"EchoLogs");
  atexit((_func_5014 *)&LAB_14407f5be);
  FUN_1400b22c2(&DAT_14cbb9f10,"PlayerStats");
  atexit((_func_5014 *)&LAB_14407f5cf);
  FUN_1400b22c2(&DAT_14cbb9f20,"RewardCenter");
  atexit((_func_5014 *)&LAB_14407f5e0);
  FUN_140056680(&DAT_14cbb9f30,L"reset");
  atexit((_func_5014 *)&LAB_14407f5f1);
  local_70 = "add_on_activate";
  local_68 = 0xf;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb9f40 = (ulonglong)uVar1;
  local_70 = "remove_on_deactivate";
  local_68 = 0x14;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb9f48 = (ulonglong)uVar1;
  local_70 = "filter_selected";
  local_68 = 0xf;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb9f50 = (ulonglong)uVar1;
  local_70 = "hide_messages_on_deactivate";
  local_68 = 0x1b;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb9f58 = (ulonglong)uVar1;
  local_70 = "drop_action_supported";
  local_68 = 0x15;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb9f60 = (ulonglong)uVar1;
  local_70 = "equip_action_supported";
  local_68 = 0x16;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb9f68 = (ulonglong)uVar1;
  local_70 = "unequip_action_supported";
  local_68 = 0x18;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb9f70 = (ulonglong)uVar1;
  local_70 = "compare_action_supported";
  local_68 = 0x18;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb9f78 = (ulonglong)uVar1;
  local_70 = "mark_item_action_supported";
  local_68 = 0x1a;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb9f80 = (ulonglong)uVar1;
  local_70 = "mark_multiple_items_supported";
  local_68 = 0x1d;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb9f88 = (ulonglong)uVar1;
  local_70 = "remote_inventory_action_supported";
  local_68 = 0x21;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb9f90 = (ulonglong)uVar1;
  local_70 = "unequip_message_ident";
  local_68 = 0x15;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb9f98 = (ulonglong)uVar1;
  local_70 = "equip_message_ident";
  local_68 = 0x13;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb9fa0 = (ulonglong)uVar1;
  local_70 = "swap_message_ident";
  local_68 = 0x12;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb9fa8 = (ulonglong)uVar1;
  local_70 = "drop_message_ident";
  local_68 = 0x12;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb9fb0 = (ulonglong)uVar1;
  local_70 = "cant_equip_message_ident";
  local_68 = 0x18;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb9fb8 = (ulonglong)uVar1;
  local_70 = "insufficient_space_error_ident";
  local_68 = 0x1e;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb9fc0 = (ulonglong)uVar1;
  local_70 = "multiple_item_deposit_ident";
  local_68 = 0x1b;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb9fc8 = (ulonglong)uVar1;
  local_70 = "deposit_message_ident";
  local_68 = 0x15;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb9fd0 = (ulonglong)uVar1;
  local_70 = "incomplete_deposit_ident";
  local_68 = 0x18;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb9fd8 = (ulonglong)uVar1;
  local_70 = "backpack_class_html";
  local_68 = 0x13;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb9fe0 = (ulonglong)uVar1;
  local_70 = "standin_config";
  local_68 = 0xe;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb9fe8 = (ulonglong)uVar1;
  local_70 = "player_standin_tag";
  local_68 = 0x12;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb9ff0 = (ulonglong)uVar1;
  local_70 = "echo_bot_standin_tag";
  local_68 = 0x14;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb9ff8 = (ulonglong)uVar1;
  local_70 = "sortable_numeric_stats";
  local_68 = 0x16;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbba000 = (ulonglong)uVar1;
  local_70 = "escape_hold_supported";
  local_68 = 0x15;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbba008 = (ulonglong)uVar1;
  local_70 = "max_visible_items";
  local_68 = 0x11;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbba010 = (ulonglong)uVar1;
  FUN_140056680(&DAT_14cbba018,L"action_ui_drop_item");
  atexit((_func_5014 *)&LAB_14407f602);
  FUN_140056680(&DAT_14cbba028,L"action_ui_equip_item");
  atexit((_func_5014 *)&LAB_14407f613);
  FUN_140056680(&DAT_14cbba038,L"action_ui_unequip_item");
  atexit((_func_5014 *)&LAB_14407f624);
  FUN_140056680(&DAT_14cbba048,L"action_ui_compare_item");
  atexit((_func_5014 *)&LAB_14407f635);
  FUN_140056680(&DAT_14cbba058,L"action_ui_cursor_click");
  atexit((_func_5014 *)&LAB_14407f646);
  FUN_140056680(&DAT_14cbba068,L"action_ui_set_item_flag");
  atexit((_func_5014 *)&LAB_14407f657);
  FUN_140056680(&DAT_14cbba078,L"action_ui_remote_bank_deposit");
  atexit((_func_5014 *)&LAB_14407f668);
  FUN_140056680(&DAT_14cbba088,L"action_ui_mark_all_filtered");
  atexit((_func_5014 *)&LAB_14407f679);
  FUN_140056680(&DAT_14cbba098,L"action_ui_menu_escape");
  atexit((_func_5014 *)&LAB_14407f68a);
  FUN_140056680(&DAT_14cbba0a8,L"action_ui_show_player_stats");
  atexit((_func_5014 *)&LAB_14407f69b);
  FUN_140056680(&DAT_14cbba0b8,L"action_ui_mark_hovered_as_junk");
  atexit((_func_5014 *)&LAB_14407f6ac);
  FUN_140056680(&DAT_14cbba0c8,L"action_ui_open_reward_center");
  atexit((_func_5014 *)&LAB_14407f6bd);
  FUN_140056680(&DAT_14cbba0d8,L"action_ui_select_slot_1");
  atexit((_func_5014 *)&LAB_14407f6ce);
  FUN_140056680(&DAT_14cbba0e8,L"action_ui_select_slot_2");
  atexit((_func_5014 *)&LAB_14407f6df);
  FUN_140056680(&DAT_14cbba0f8,L"action_ui_select_slot_3");
  atexit((_func_5014 *)&LAB_14407f6f0);
  FUN_140056680(&DAT_14cbba108,L"action_ui_select_slot_4");
  atexit((_func_5014 *)&LAB_14407f701);
  FUN_140056680(&DAT_14cbba118,L"action_ui_copy_focused_item_serial_number");
  atexit((_func_5014 *)&LAB_14407f712);
  FUN_140056680(&DAT_14cbba128,L"action_ui_menu_escape_hold");
  atexit((_func_5014 *)&LAB_14407f723);
  FUN_140056680(&DAT_14cbba138,L"action_ui_inspect_item");
  atexit((_func_5014 *)&LAB_14407f734);
  FUN_140056680(&DAT_14cbba148,L"action_ui_flip_item_card");
  atexit((_func_5014 *)&LAB_14407f745);
  FUN_140056680(&DAT_14cbba158,L"action_ui_open_all_rewards");
  atexit((_func_5014 *)&LAB_14407f756);
  FUN_140056680(&DAT_14cbba168,L"SelectText");
  atexit((_func_5014 *)&LAB_14407f767);
  FUN_140056680(&DAT_14cbba178,L"CompareHint");
  atexit((_func_5014 *)&LAB_14407f778);
  FUN_140056680(&DAT_14cbba188,L"EquipHint");
  atexit((_func_5014 *)&LAB_14407f789);
  FUN_140056680(&DAT_14cbba198,L"UnequipHint");
  atexit((_func_5014 *)&LAB_14407f79a);
  FUN_140056680(&DAT_14cbba1a8,L"DropHint");
  atexit((_func_5014 *)&LAB_14407f7ab);
  FUN_140056680(&DAT_14cbba1b8,L"SetItemFlagHint");
  atexit((_func_5014 *)&LAB_14407f7bc);
  FUN_140056680(&DAT_14cbba1c8,L"ToggleJunkHint");
  atexit((_func_5014 *)&LAB_14407f7cd);
  FUN_140056680(&DAT_14cbba1d8,L"MarkAllFilteredHint");
  atexit((_func_5014 *)&LAB_14407f7de);
  FUN_140056680(&DAT_14cbba1e8,L"PlayerStatsHint");
  atexit((_func_5014 *)&LAB_14407f7ef);
  FUN_140056680(&DAT_14cbba1f8,L"SwapWeaponsHint");
  atexit((_func_5014 *)&LAB_14407f800);
  FUN_140056680(&DAT_14cbba208,L"BackText");
  atexit((_func_5014 *)&LAB_14407f811);
  FUN_140056680(&DAT_14cbba218,L"SellHint");
  atexit((_func_5014 *)&LAB_14407f822);
  FUN_140056680(&DAT_14cbba228,L"BuyHint");
  atexit((_func_5014 *)&LAB_14407f833);
  FUN_140056680(&DAT_14cbba238,L"ExitMenuHint");
  atexit((_func_5014 *)&LAB_14407f844);
  FUN_140056680(&DAT_14cbba248,L"OpenAllRewardsHint");
  atexit((_func_5014 *)&LAB_14407f855);
  FUN_1400b22c2(&DAT_14cbba258,"trash");
  atexit((_func_5014 *)&LAB_14407f866);
  FUN_1400b22c2(&DAT_14cbba268,"favorite");
  atexit((_func_5014 *)&LAB_14407f877);
  FUN_1400b22c2(&DAT_14cbba278,"bankdeposit");
  atexit((_func_5014 *)&LAB_14407f888);
  FUN_1400b22c2(&DAT_14cbba288,"taggroup1");
  atexit((_func_5014 *)&LAB_14407f899);
  FUN_1400b22c2(&DAT_14cbba298,"taggroup2");
  atexit((_func_5014 *)&LAB_14407f8aa);
  FUN_1400b22c2(&DAT_14cbba2a8,"taggroup3");
  atexit((_func_5014 *)&LAB_14407f8bb);
  FUN_1400b22c2(&DAT_14cbba2b8,"taggroup4");
  atexit((_func_5014 *)&LAB_14407f8cc);
  local_70 = "trash";
  local_68 = 5;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbba2c8 = (ulonglong)uVar1;
  local_70 = "favorite";
  local_68 = 8;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbba2d0 = (ulonglong)uVar1;
  local_70 = "bankdeposit";
  local_68 = 0xb;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbba2d8 = (ulonglong)uVar1;
  local_70 = "taggroup1";
  local_68 = 9;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbba2e0 = (ulonglong)uVar1;
  local_70 = "taggroup2";
  local_68 = 9;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbba2e8 = (ulonglong)uVar1;
  local_70 = "taggroup3";
  local_68 = 9;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbba2f0 = (ulonglong)uVar1;
  local_70 = "taggroup4";
  local_68 = 9;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbba2f8 = (ulonglong)uVar1;
  FUN_1400b22c2(&DAT_14cbba300,"OpenBackpack");
  atexit((_func_5014 *)&LAB_14407f8dd);
  FUN_1400b22c2(&DAT_14cbba310,"CloseBackpack");
  atexit((_func_5014 *)&LAB_14407f8ee);
  FUN_1400b22c2(&DAT_14cbba320,"OpenPlayerStats");
  atexit((_func_5014 *)&LAB_14407f8ff);
  FUN_1400b22c2(&DAT_14cbba330,"ClosePlayerStats");
  atexit((_func_5014 *)&LAB_14407f910);
  FUN_1400b22c2(&DAT_14cbba340,"OpenRewardCenter");
  atexit((_func_5014 *)&LAB_14407f921);
  FUN_1400b22c2(&DAT_14cbba350,"CloseRewardCenter");
  atexit((_func_5014 *)&LAB_14407f932);
  FUN_1400b22c2(&DAT_14cbba360,"CompareStart");
  atexit((_func_5014 *)&LAB_14407f943);
  FUN_1400b22c2(&DAT_14cbba370,"CompareStop");
  atexit((_func_5014 *)&LAB_14407f954);
  FUN_1400b22c2(&DAT_14cbba380,"UnequipItem");
  atexit((_func_5014 *)&LAB_14407f965);
  FUN_1400b22c2(&DAT_14cbba390,"EquipItem");
  atexit((_func_5014 *)&LAB_14407f976);
  FUN_1400b22c2(&DAT_14cbba3a0,"DropItem");
  atexit((_func_5014 *)&LAB_14407f987);
  FUN_1400b22c2(&DAT_14cbba3b0,"MarkItem");
  atexit((_func_5014 *)&LAB_14407f998);
  FUN_1400b22c2(&DAT_14cbba3c0,"Error");
  atexit((_func_5014 *)&LAB_14407f9a9);
  FUN_1400b22c2(&DAT_14cbba3d0,"ElementUnfocused");
  atexit((_func_5014 *)&LAB_14407f9ba);
  FUN_1400b22c2(&DAT_14cbba3e0,"ElementFocused");
  atexit((_func_5014 *)&LAB_14407f9cb);
  FUN_1400b22c2(&DAT_14cbba3f0,"ElementClicked");
  atexit((_func_5014 *)&LAB_14407f9dc);
  FUN_1400b22c2(&DAT_14cbba400,"EscapeInput");
  atexit((_func_5014 *)&LAB_14407f9ed);
  FUN_1400b22c2(&DAT_14cbba410,"WeaponSlotFocused");
  atexit((_func_5014 *)&LAB_14407f9fe);
  FUN_1400b22c2(&DAT_14cbba420,"WeaponSlotUnfocused");
  atexit((_func_5014 *)&LAB_14407fa0f);
  FUN_1400b22c2(&DAT_14cbba430,"GearSlotFocused");
  atexit((_func_5014 *)&LAB_14407fa20);
  FUN_1400b22c2(&DAT_14cbba440,"GearSlotUnfocused");
  atexit((_func_5014 *)&LAB_14407fa31);
  FUN_1400b22c2(&DAT_14cbba450,"BackpackSlotFocused");
  atexit((_func_5014 *)&LAB_14407fa42);
  FUN_1400b22c2(&DAT_14cbba460,"BackpackSlotUnfocused");
  atexit((_func_5014 *)&LAB_14407fa53);
  FUN_1400b22c2(&DAT_14cbba470,"MarkItemBank");
  atexit((_func_5014 *)&LAB_14407fa64);
  FUN_1400b22c2(&DAT_14cbba480,"MarkItemTrash");
  atexit((_func_5014 *)&LAB_14407fa75);
  FUN_1400b22c2(&DAT_14cbba490,"MarkItemFavorite");
  atexit((_func_5014 *)&LAB_14407fa86);
  FUN_1400b22c2(&DAT_14cbba4a0,"ClickPistol");
  atexit((_func_5014 *)&LAB_14407fa97);
  FUN_1400b22c2(&DAT_14cbba4b0,"ClickAssaultRifle");
  atexit((_func_5014 *)&LAB_14407faa8);
  FUN_1400b22c2(&DAT_14cbba4c0,"ClickSMG");
  atexit((_func_5014 *)&LAB_14407fab9);
  FUN_1400b22c2(&DAT_14cbba4d0,"ClickShotgun");
  atexit((_func_5014 *)&LAB_14407faca);
  FUN_1400b22c2(&DAT_14cbba4e0,"ClickSniper");
  atexit((_func_5014 *)&LAB_14407fadb);
  FUN_1400b22c2(&DAT_14cbba4f0,"ClickRepKit");
  atexit((_func_5014 *)&LAB_14407faec);
  FUN_1400b22c2(&DAT_14cbba500,"ClickGrenade");
  atexit((_func_5014 *)&LAB_14407fafd);
  FUN_1400b22c2(&DAT_14cbba510,"ClickHeavyWeapon");
  atexit((_func_5014 *)&LAB_14407fb0e);
  FUN_1400b22c2(&DAT_14cbba520,"ClickClassMod");
  atexit((_func_5014 *)&LAB_14407fb1f);
  FUN_1400b22c2(&DAT_14cbba530,"ClickGadget");
  atexit((_func_5014 *)&LAB_14407fb30);
  FUN_1400b22c2(&DAT_14cbba540,"ClickEnhancement");
  atexit((_func_5014 *)&LAB_14407fb41);
  FUN_1400b22c2(&DAT_14cbba550,"ClickShield");
  atexit((_func_5014 *)&LAB_14407fb52);
  FUN_1400b22c2(&DAT_14cbba560,"EquipPistol");
  atexit((_func_5014 *)&LAB_14407fb63);
  FUN_1400b22c2(&DAT_14cbba570,"EquipAssaultRifle");
  atexit((_func_5014 *)&LAB_14407fb74);
  FUN_1400b22c2(&DAT_14cbba580,"EquipSMG");
  atexit((_func_5014 *)&LAB_14407fb85);
  FUN_1400b22c2(&DAT_14cbba590,"EquipShotgun");
  atexit((_func_5014 *)&LAB_14407fb96);
  FUN_1400b22c2(&DAT_14cbba5a0,"EquipSniper");
  atexit((_func_5014 *)&LAB_14407fba7);
  FUN_1400b22c2(&DAT_14cbba5b0,"EquipRepKit");
  atexit((_func_5014 *)&LAB_14407fbb8);
  FUN_1400b22c2(&DAT_14cbba5c0,"EquipGrenade");
  atexit((_func_5014 *)&LAB_14407fbc9);
  FUN_1400b22c2(&DAT_14cbba5d0,"EquipHeavyWeapon");
  atexit((_func_5014 *)&LAB_14407fbda);
  FUN_1400b22c2(&DAT_14cbba5e0,"EquipClassMod");
  atexit((_func_5014 *)&LAB_14407fbeb);
  FUN_1400b22c2(&DAT_14cbba5f0,"EquipGadget");
  atexit((_func_5014 *)&LAB_14407fbfc);
  FUN_1400b22c2(&DAT_14cbba600,"EquipEnhancement");
  atexit((_func_5014 *)&LAB_14407fc0d);
  FUN_1400b22c2(&DAT_14cbba610,"EquipShield");
  atexit((_func_5014 *)&LAB_14407fc1e);
  FUN_1400b22c2(&DAT_14cbba620,"weapon");
  atexit((_func_5014 *)&LAB_14407fc2f);
  FUN_1400b22c2(&DAT_14cbba630,"weapon_ps");
  atexit((_func_5014 *)&LAB_14407fc40);
  FUN_1400b22c2(&DAT_14cbba640,"weapon_ar");
  atexit((_func_5014 *)&LAB_14407fc51);
  FUN_1400b22c2(&DAT_14cbba650,"weapon_sg");
  atexit((_func_5014 *)&LAB_14407fc62);
  FUN_1400b22c2(&DAT_14cbba660,"weapon_sr");
  atexit((_func_5014 *)&LAB_14407fc73);
  FUN_1400b22c2(&DAT_14cbba670,"weapon_sm");
  atexit((_func_5014 *)&LAB_14407fc84);
  FUN_1400b22c2(&DAT_14cbba680,"grenade_gadget");
  atexit((_func_5014 *)&LAB_14407fc95);
  FUN_1400b22c2(&DAT_14cbba690,"shield");
  atexit((_func_5014 *)&LAB_14407fca6);
  FUN_1400b22c2(&DAT_14cbba6a0,"heavy_weapon_gadget");
  atexit((_func_5014 *)&LAB_14407fcb7);
  FUN_1400b22c2(&DAT_14cbba6b0,"repair_kit");
  atexit((_func_5014 *)&LAB_14407fcc8);
  FUN_1400b22c2(&DAT_14cbba6c0,"classmod");
  atexit((_func_5014 *)&LAB_14407fcd9);
  FUN_1400b22c2(&DAT_14cbba6d0,"classmod_dark_siren");
  atexit((_func_5014 *)&LAB_14407fcea);
  FUN_1400b22c2(&DAT_14cbba6e0,"classmod_exo_soldier");
  atexit((_func_5014 *)&LAB_14407fcfb);
  FUN_1400b22c2(&DAT_14cbba6f0,"classmod_gravitar");
  atexit((_func_5014 *)&LAB_14407fd0c);
  FUN_1400b22c2(&DAT_14cbba700,"classmod_paladin");
  atexit((_func_5014 *)&LAB_14407fd1d);
  FUN_1400b22c2(&DAT_14cbba710,"gadget");
  atexit((_func_5014 *)&LAB_14407fd2e);
  FUN_1400b22c2(&DAT_14cbba720,"enhancement");
  atexit((_func_5014 *)&LAB_14407fd3f);
  FUN_140056680(&DAT_14cbba730,L"recent");
  atexit((_func_5014 *)&LAB_14407fd50);
  FUN_140056680(&DAT_14cbba740,L"type");
  atexit((_func_5014 *)&LAB_14407fd61);
  FUN_140056680(&DAT_14cbba750,L"level");
  atexit((_func_5014 *)&LAB_14407fd72);
  FUN_140056680(&DAT_14cbba760,L"base_name");
  atexit((_func_5014 *)&LAB_14407fd83);
  FUN_140056680(&DAT_14cbba770,L"first_letter");
  atexit((_func_5014 *)&LAB_14407fd94);
  FUN_140056680(&DAT_14cbba780,L"value");
  atexit((_func_5014 *)&LAB_14407fda5);
  FUN_140056680(&DAT_14cbba790,L"rarity");
  atexit((_func_5014 *)&LAB_14407fdb6);
  FUN_140056680(&DAT_14cbba7a0,L"manufacturer");
  atexit((_func_5014 *)&LAB_14407fdc7);
  _Src = DAT_14cbb9d10;
  DAT_14cbba7b0 = (void *)0x0;
  lVar3 = (longlong)DAT_14cbb9d18;
  _DAT_14cbba7b8 = DAT_14cbb9d18;
  if (lVar3 == 0) {
    _DAT_14cbba7bc = 0;
  }
  else {
    FUN_1446dd670(&DAT_14cbba7b0,DAT_14cbb9d18,0);
    memcpy(DAT_14cbba7b0,_Src,lVar3 * 2);
  }
  atexit((_func_5014 *)&LAB_14407fdd8);
  FUN_140056680(&DAT_14cbba7c0,L"healing");
  atexit((_func_5014 *)&LAB_14407fde9);
  local_70 = "cancel";
  local_68 = 6;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbba7d0 = (ulonglong)uVar1;
  local_70 = "partial";
  local_68 = 7;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbba7d8 = (ulonglong)uVar1;
  local_70 = "all";
  local_68 = 3;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbba7e0 = (ulonglong)uVar1;
  local_70 = "basic";
  local_68 = 5;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbba7e8 = (ulonglong)uVar1;
  local_70 = "challenge";
  local_68 = 9;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbba7f0 = (ulonglong)uVar1;
  local_70 = "online";
  local_68 = 6;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbba7f8 = (ulonglong)uVar1;
  local_70 = "social";
  local_68 = 6;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbba800 = (ulonglong)uVar1;
  local_70 = "alert";
  local_68 = 5;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbba808 = (ulonglong)uVar1;
  local_70 = "photo_mode";
  local_68 = 10;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbba810 = (ulonglong)uVar1;
  local_70 = "generic_task";
  local_68 = 0xc;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbba818 = (ulonglong)uVar1;
  local_70 = "mission";
  local_68 = 7;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbba820 = (ulonglong)uVar1;
  local_70 = "mail";
  local_68 = 4;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbba828 = (ulonglong)uVar1;
  local_70 = "respawn";
  local_68 = 7;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbba830 = (ulonglong)uVar1;
  local_70 = "tutorial";
  local_68 = 8;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbba838 = (ulonglong)uVar1;
  local_70 = "special_notification";
  local_68 = 0x14;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbba840 = (ulonglong)uVar1;
  local_70 = "generic_notification";
  local_68 = 0x14;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbba848 = (ulonglong)uVar1;
  local_70 = "vault_card";
  local_68 = 10;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbba850 = (ulonglong)uVar1;
  local_70 = "ONLINE_MESSAGE";
  local_68 = 0xe;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbba858 = (ulonglong)uVar1;
  local_70 = "INGAME_MESSAGE";
  local_68 = 0xe;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbba860 = (ulonglong)uVar1;
  local_70 = "NOTIFICATION_MESSAGE";
  local_68 = 0x14;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbba868 = (ulonglong)uVar1;
  local_70 = "MENU_TUTORIAL_MESSAGE";
  local_68 = 0x15;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbba870 = (ulonglong)uVar1;
  local_70 = "collectible";
  local_68 = 0xb;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbba878 = (ulonglong)uVar1;
  local_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8af1c0);
  local_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8af770);
  local_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 3;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8b0340);
  local_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8b0820);
  local_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8b0c10);
  local_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8b0eb0);
  local_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8b0fb0);
  local_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8b10d0);
  local_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 3;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8b16f0);
  FUN_1446f470e(&DAT_14cbbaa18,L"Party",1);
  FUN_1446f470e(&DAT_14cbbaa20,&DAT_149e063b2);
  local_70 = "continue";
  local_68 = 8;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbaa28 = (ulonglong)uVar1;
  local_70 = "load_character";
  local_68 = 0xe;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbaa30 = (ulonglong)uVar1;
  local_70 = "new_game";
  local_68 = 8;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbaa38 = (ulonglong)uVar1;
  local_70 = "select_play_ozone";
  local_68 = 0x11;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbaa40 = (ulonglong)uVar1;
  local_70 = "options";
  local_68 = 7;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbaa48 = (ulonglong)uVar1;
  local_70 = "quit";
  local_68 = 4;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbaa50 = (ulonglong)uVar1;
  local_70 = "debug";
  local_68 = 5;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbaa58 = (ulonglong)uVar1;
  local_70 = "render_mode";
  local_68 = 0xb;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbaa60 = (ulonglong)uVar1;
  local_70 = "open_matchmaking_menu";
  local_68 = 0x15;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbaa68 = (ulonglong)uVar1;
  local_70 = s_open_lan_menu_14b8b17c3;
  local_68 = 0xd;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbaa70 = (ulonglong)uVar1;
  local_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8b1b20);
  local_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8b1c40);
  local_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8b22b0);
  local_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8b2de0);
  local_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 4;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8b3c60);
  _DAT_14cbbab54 = 0;
  FUN_14052b5e0(&DAT_14cbbab50,"Missions",0);
  _DAT_14cbbab60 = 0;
  FUN_14052b5e0(&DAT_14cbbab5c,"Timer",0);
  _DAT_14cbbab6c = 0;
  FUN_14052b5e0(&DAT_14cbbab68,"Percent",0);
  FUN_1400b22c2(&DAT_14cbbab78,"boolean");
  atexit((_func_5014 *)&LAB_14407fdfa);
  FUN_1408226d0(&DAT_14cb889e0,&local_70,1);
  uVar1 = local_68 - 1;
  if (local_68 == 0) {
    uVar1 = 0;
  }
  if (0 < (int)uVar1) {
    uVar2 = 0;
    do {
      *(ushort *)(local_70 + uVar2 * 2) =
           (ushort)(*(ushort *)(local_70 + uVar2 * 2) - 0x41 < 0x1a) * 0x20 +
           *(ushort *)(local_70 + uVar2 * 2);
      uVar2 = uVar2 + 1;
    } while (uVar1 != uVar2);
  }
  DAT_14cbbab88 = local_70;
  DAT_14cbbab90 = local_68;
  atexit((_func_5014 *)&LAB_14407fe0b);
  FUN_1400b22c2(&DAT_14cbbab98,"timer");
  atexit((_func_5014 *)&LAB_14407fe1c);
  FUN_1400b22c2(&DAT_14cbbaba8,"percent");
  atexit((_func_5014 *)&LAB_14407fe2d);
  local_80 = &PTR_FUN_14b8b4ff0;
  uStack_78 = 2;
  local_88 = 5;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8b5030);
  local_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 7;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8b60e0);
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144082dbb FUN_144082dbb body=55 status=ok
// SIG undefined FUN_144082dbb(void)

void FUN_144082dbb(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbb088 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbb088 = FUN_14171c317(FUN_146608937,uVar1,L"EPhotoModeOptionType");
  }
  return;
}



// FUNCTION 144082e5a FUN_144082e5a body=57 status=ok
// SIG undefined FUN_144082e5a(void)

void FUN_144082e5a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbad40 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbad40 = FUN_140002ddd(FUN_1466082a3,uVar1,L"OakWidgetData_Nameplate");
  }
  return;
}



// FUNCTION 144082ea2 FUN_144082ea2 body=57 status=ok
// SIG undefined FUN_144082ea2(void)

void FUN_144082ea2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbae30 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbae30 = FUN_140002ddd(FUN_1466082fd,uVar1,L"OakWidgetData_NavigationBar");
  }
  return;
}



// FUNCTION 144082ef8 FUN_144082ef8 body=57 status=ok
// SIG undefined FUN_144082ef8(void)

void FUN_144082ef8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbae60 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbae60 = FUN_140002ddd(FUN_146608421,uVar1,L"OakWidgetData_NewGameMenu");
  }
  return;
}



// FUNCTION 144082f40 FUN_144082f40 body=57 status=ok
// SIG undefined FUN_144082f40(void)

void FUN_144082f40(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbae78 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbae78 = FUN_140002ddd(FUN_1466084b3,uVar1,L"OakWidgetData_News");
  }
  return;
}



// FUNCTION 144082f7a FUN_144082f7a body=2006 status=ok
// SIG undefined FUN_144082f7a(void)

longlong FUN_144082f7a(longlong param_1,longlong param_2)

{
  int iVar1;
  void *pvVar2;
  
  FUN_1489fb7d2();
  if (*(int *)(param_1 + 0xb4) != *(int *)(param_2 + 0xb4)) {
    *(undefined1 *)(param_1 + 0xb0) = *(undefined1 *)(param_2 + 0xb0);
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_2 + 0xb4);
  }
  if (*(int *)(param_1 + 0xbc) != *(int *)(param_2 + 0xbc)) {
    *(undefined1 *)(param_1 + 0xb8) = *(undefined1 *)(param_2 + 0xb8);
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_2 + 0xbc);
  }
  if (*(int *)(param_1 + 0xc4) != *(int *)(param_2 + 0xc4)) {
    *(undefined1 *)(param_1 + 0xc0) = *(undefined1 *)(param_2 + 0xc0);
    *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_2 + 0xc4);
  }
  if ((*(int *)(param_1 + 0xd8) != *(int *)(param_2 + 0xd8) || *(int *)(param_1 + 0xd8) == 0) &&
     (*(int *)(param_1 + 0xd8) = *(int *)(param_2 + 0xd8), param_1 != param_2)) {
    iVar1 = *(int *)(param_2 + 0xd0);
    pvVar2 = *(void **)(param_2 + 200);
    *(int *)(param_1 + 0xd0) = iVar1;
    if (iVar1 == 0 && *(int *)(param_1 + 0xd4) == 0) {
      *(undefined4 *)(param_1 + 0xd4) = 0;
    }
    else {
      FUN_1447cd5fa((undefined8 *)(param_1 + 200),iVar1);
      if (iVar1 != 0) {
        memcpy(*(void **)(param_1 + 200),pvVar2,(longlong)iVar1);
      }
    }
  }
  if (*(int *)(param_1 + 0xe4) != *(int *)(param_2 + 0xe4)) {
    *(undefined1 *)(param_1 + 0xe0) = *(undefined1 *)(param_2 + 0xe0);
    *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_2 + 0xe4);
  }
  if (*(int *)(param_1 + 0xec) != *(int *)(param_2 + 0xec)) {
    *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0xe8);
    *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_2 + 0xec);
  }
  if (*(int *)(param_1 + 0xf4) != *(int *)(param_2 + 0xf4)) {
    *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0xf0);
    *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_2 + 0xf4);
  }
  if (*(int *)(param_1 + 0xfc) != *(int *)(param_2 + 0xfc)) {
    *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_2 + 0xf8);
    *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_2 + 0xfc);
  }
  if (*(int *)(param_1 + 0x104) != *(int *)(param_2 + 0x104)) {
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x100);
    *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_2 + 0x104);
  }
  if (*(int *)(param_1 + 0x118) != *(int *)(param_2 + 0x118)) {
    if (param_1 != param_2) {
      iVar1 = *(int *)(param_2 + 0x110);
      pvVar2 = *(void **)(param_2 + 0x108);
      *(int *)(param_1 + 0x110) = iVar1;
      if (iVar1 == 0 && *(int *)(param_1 + 0x114) == 0) {
        *(undefined4 *)(param_1 + 0x114) = 0;
      }
      else {
        FUN_1446dd670((undefined8 *)(param_1 + 0x108),iVar1);
        if (iVar1 != 0) {
          memcpy(*(void **)(param_1 + 0x108),pvVar2,(longlong)iVar1 * 2);
        }
      }
    }
    *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_2 + 0x118);
  }
  if (*(int *)(param_1 + 0x130) != *(int *)(param_2 + 0x130)) {
    if (param_1 != param_2) {
      iVar1 = *(int *)(param_2 + 0x128);
      pvVar2 = *(void **)(param_2 + 0x120);
      *(int *)(param_1 + 0x128) = iVar1;
      if (iVar1 == 0 && *(int *)(param_1 + 300) == 0) {
        *(undefined4 *)(param_1 + 300) = 0;
      }
      else {
        FUN_1446dd670((undefined8 *)(param_1 + 0x120),iVar1);
        if (iVar1 != 0) {
          memcpy(*(void **)(param_1 + 0x120),pvVar2,(longlong)iVar1 * 2);
        }
      }
    }
    *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_2 + 0x130);
  }
  if (*(int *)(param_1 + 0x148) != *(int *)(param_2 + 0x148)) {
    if (param_1 != param_2) {
      iVar1 = *(int *)(param_2 + 0x140);
      pvVar2 = *(void **)(param_2 + 0x138);
      *(int *)(param_1 + 0x140) = iVar1;
      if (iVar1 == 0 && *(int *)(param_1 + 0x144) == 0) {
        *(undefined4 *)(param_1 + 0x144) = 0;
      }
      else {
        FUN_1446dd670((undefined8 *)(param_1 + 0x138),iVar1);
        if (iVar1 != 0) {
          memcpy(*(void **)(param_1 + 0x138),pvVar2,(longlong)iVar1 * 2);
        }
      }
    }
    *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_2 + 0x148);
  }
  if (*(int *)(param_1 + 0x160) != *(int *)(param_2 + 0x160)) {
    if (param_1 != param_2) {
      iVar1 = *(int *)(param_2 + 0x158);
      pvVar2 = *(void **)(param_2 + 0x150);
      *(int *)(param_1 + 0x158) = iVar1;
      if (iVar1 == 0 && *(int *)(param_1 + 0x15c) == 0) {
        *(undefined4 *)(param_1 + 0x15c) = 0;
      }
      else {
        FUN_1446dd670((undefined8 *)(param_1 + 0x150),iVar1);
        if (iVar1 != 0) {
          memcpy(*(void **)(param_1 + 0x150),pvVar2,(longlong)iVar1 * 2);
        }
      }
    }
    *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(param_2 + 0x160);
  }
  if (*(int *)(param_1 + 0x16c) != *(int *)(param_2 + 0x16c)) {
    *(undefined1 *)(param_1 + 0x168) = *(undefined1 *)(param_2 + 0x168);
    *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)(param_2 + 0x16c);
  }
  if (*(int *)(param_1 + 0x180) != *(int *)(param_2 + 0x180)) {
    if (param_1 != param_2) {
      iVar1 = *(int *)(param_2 + 0x178);
      pvVar2 = *(void **)(param_2 + 0x170);
      *(int *)(param_1 + 0x178) = iVar1;
      if (iVar1 == 0 && *(int *)(param_1 + 0x17c) == 0) {
        *(undefined4 *)(param_1 + 0x17c) = 0;
      }
      else {
        FUN_1446dd670((undefined8 *)(param_1 + 0x170),iVar1);
        if (iVar1 != 0) {
          memcpy(*(void **)(param_1 + 0x170),pvVar2,(longlong)iVar1 * 2);
        }
      }
    }
    *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_2 + 0x180);
  }
  if (*(int *)(param_1 + 0x198) != *(int *)(param_2 + 0x198)) {
    if (param_1 != param_2) {
      iVar1 = *(int *)(param_2 + 400);
      pvVar2 = *(void **)(param_2 + 0x188);
      *(int *)(param_1 + 400) = iVar1;
      if (iVar1 == 0 && *(int *)(param_1 + 0x194) == 0) {
        *(undefined4 *)(param_1 + 0x194) = 0;
      }
      else {
        FUN_1446dd670((undefined8 *)(param_1 + 0x188),iVar1);
        if (iVar1 != 0) {
          memcpy(*(void **)(param_1 + 0x188),pvVar2,(longlong)iVar1 * 2);
        }
      }
    }
    *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_2 + 0x198);
  }
  if (*(int *)(param_1 + 0x1b0) != *(int *)(param_2 + 0x1b0)) {
    if (param_1 != param_2) {
      iVar1 = *(int *)(param_2 + 0x1a8);
      pvVar2 = *(void **)(param_2 + 0x1a0);
      *(int *)(param_1 + 0x1a8) = iVar1;
      if (iVar1 == 0 && *(int *)(param_1 + 0x1ac) == 0) {
        *(undefined4 *)(param_1 + 0x1ac) = 0;
      }
      else {
        FUN_1446dd670((undefined8 *)(param_1 + 0x1a0),iVar1);
        if (iVar1 != 0) {
          memcpy(*(void **)(param_1 + 0x1a0),pvVar2,(longlong)iVar1 * 2);
        }
      }
    }
    *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(param_2 + 0x1b0);
  }
  if (*(int *)(param_1 + 0x1c8) != *(int *)(param_2 + 0x1c8)) {
    if (param_1 != param_2) {
      iVar1 = *(int *)(param_2 + 0x1c0);
      pvVar2 = *(void **)(param_2 + 0x1b8);
      *(int *)(param_1 + 0x1c0) = iVar1;
      if (iVar1 == 0 && *(int *)(param_1 + 0x1c4) == 0) {
        *(undefined4 *)(param_1 + 0x1c4) = 0;
      }
      else {
        FUN_1446dd670((undefined8 *)(param_1 + 0x1b8),iVar1);
        if (iVar1 != 0) {
          memcpy(*(void **)(param_1 + 0x1b8),pvVar2,(longlong)iVar1 * 2);
        }
      }
    }
    *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_2 + 0x1c8);
  }
  if (*(int *)(param_1 + 0x1e0) != *(int *)(param_2 + 0x1e0)) {
    if (param_1 != param_2) {
      iVar1 = *(int *)(param_2 + 0x1d8);
      pvVar2 = *(void **)(param_2 + 0x1d0);
      *(int *)(param_1 + 0x1d8) = iVar1;
      if (iVar1 == 0 && *(int *)(param_1 + 0x1dc) == 0) {
        *(undefined4 *)(param_1 + 0x1dc) = 0;
      }
      else {
        FUN_1446dd670((undefined8 *)(param_1 + 0x1d0),iVar1);
        if (iVar1 != 0) {
          memcpy(*(void **)(param_1 + 0x1d0),pvVar2,(longlong)iVar1 * 2);
        }
      }
    }
    *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_2 + 0x1e0);
  }
  if (*(int *)(param_1 + 0x1f8) != *(int *)(param_2 + 0x1f8)) {
    if (param_1 != param_2) {
      iVar1 = *(int *)(param_2 + 0x1f0);
      pvVar2 = *(void **)(param_2 + 0x1e8);
      *(int *)(param_1 + 0x1f0) = iVar1;
      if (iVar1 == 0 && *(int *)(param_1 + 500) == 0) {
        *(undefined4 *)(param_1 + 500) = 0;
      }
      else {
        FUN_1446dd670((undefined8 *)(param_1 + 0x1e8),iVar1);
        if (iVar1 != 0) {
          memcpy(*(void **)(param_1 + 0x1e8),pvVar2,(longlong)iVar1 * 2);
        }
      }
    }
    *(undefined4 *)(param_1 + 0x1f8) = *(undefined4 *)(param_2 + 0x1f8);
  }
  if (*(int *)(param_1 + 0x210) != *(int *)(param_2 + 0x210)) {
    if (param_1 != param_2) {
      iVar1 = *(int *)(param_2 + 0x208);
      pvVar2 = *(void **)(param_2 + 0x200);
      *(int *)(param_1 + 0x208) = iVar1;
      if (iVar1 == 0 && *(int *)(param_1 + 0x20c) == 0) {
        *(undefined4 *)(param_1 + 0x20c) = 0;
      }
      else {
        FUN_1446dd670((undefined8 *)(param_1 + 0x200),iVar1);
        if (iVar1 != 0) {
          memcpy(*(void **)(param_1 + 0x200),pvVar2,(longlong)iVar1 * 2);
        }
      }
    }
    *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(param_2 + 0x210);
  }
  if (*(int *)(param_1 + 0x228) != *(int *)(param_2 + 0x228)) {
    if (param_1 != param_2) {
      iVar1 = *(int *)(param_2 + 0x220);
      pvVar2 = *(void **)(param_2 + 0x218);
      *(int *)(param_1 + 0x220) = iVar1;
      if (iVar1 == 0 && *(int *)(param_1 + 0x224) == 0) {
        *(undefined4 *)(param_1 + 0x224) = 0;
      }
      else {
        FUN_1446dd670((undefined8 *)(param_1 + 0x218),iVar1);
        if (iVar1 != 0) {
          memcpy(*(void **)(param_1 + 0x218),pvVar2,(longlong)iVar1 * 2);
        }
      }
    }
    *(undefined4 *)(param_1 + 0x228) = *(undefined4 *)(param_2 + 0x228);
  }
  if (*(int *)(param_1 + 0x240) != *(int *)(param_2 + 0x240)) {
    if (param_1 != param_2) {
      iVar1 = *(int *)(param_2 + 0x238);
      pvVar2 = *(void **)(param_2 + 0x230);
      *(int *)(param_1 + 0x238) = iVar1;
      if (iVar1 == 0 && *(int *)(param_1 + 0x23c) == 0) {
        *(undefined4 *)(param_1 + 0x23c) = 0;
      }
      else {
        FUN_1446dd670((undefined8 *)(param_1 + 0x230),iVar1);
        if (iVar1 != 0) {
          memcpy(*(void **)(param_1 + 0x230),pvVar2,(longlong)iVar1 * 2);
        }
      }
    }
    *(undefined4 *)(param_1 + 0x240) = *(undefined4 *)(param_2 + 0x240);
  }
  return param_1;
}



// FUNCTION 14408375e FUN_14408375e body=57 status=ok
// SIG undefined FUN_14408375e(void)

void FUN_14408375e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbafa0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbafa0 = FUN_140002ddd(FUN_146608545,uVar1,L"OakUIData_OakMainMenu");
  }
  return;
}



// FUNCTION 1440837c2 FUN_1440837c2 body=57 status=ok
// SIG undefined FUN_1440837c2(void)

void FUN_1440837c2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbb010 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbb010 = FUN_140002ddd(FUN_1466086cd,uVar1,L"OakWidgetData_OptionsMenu");
  }
  return;
}



// FUNCTION 144083826 FUN_144083826 body=57 status=ok
// SIG undefined FUN_144083826(void)

void FUN_144083826(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbb058 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbb058 = FUN_140002ddd(FUN_14660884b,uVar1,L"OakWidgetData_OverheadNameplateSet");
  }
  return;
}



// FUNCTION 14408386e FUN_14408386e body=57 status=ok
// SIG undefined FUN_14408386e(void)

void FUN_14408386e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbb070 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbb070 = FUN_140002ddd(FUN_1466088dd,uVar1,L"OakUIData_PassiveBar");
  }
  return;
}



// FUNCTION 1440838f8 FUN_1440838f8 body=572 status=ok
// SIG undefined FUN_1440838f8(void)

longlong FUN_1440838f8(longlong param_1,longlong param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  FUN_1489fb7d2();
  FUN_148c8d2f2(param_1 + 0xb0,param_2 + 0xb0);
  FUN_148c8d352(param_1 + 0xc0,param_2 + 0xc0);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
  FUN_148c8d3b2(param_1 + 0xd8,param_2 + 0xd8);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
  FUN_148c8d412(param_1 + 0xf0,param_2 + 0xf0);
  uVar3 = *(undefined4 *)(param_2 + 0x104);
  uVar4 = *(undefined4 *)(param_2 + 0x108);
  uVar5 = *(undefined4 *)(param_2 + 0x10c);
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x100);
  *(undefined4 *)(param_1 + 0x104) = uVar3;
  *(undefined4 *)(param_1 + 0x108) = uVar4;
  *(undefined4 *)(param_1 + 0x10c) = uVar5;
  *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_2 + 0x110);
  if (param_1 == param_2) {
    *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_2 + 0x128);
    uVar6 = *(undefined8 *)(param_2 + 0x148);
    *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_2 + 0x140);
    *(undefined8 *)(param_1 + 0x148) = uVar6;
    *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_2 + 0x150);
  }
  else {
    iVar1 = *(int *)(param_2 + 0x120);
    pvVar2 = *(void **)(param_2 + 0x118);
    *(int *)(param_1 + 0x120) = iVar1;
    if (iVar1 == 0 && *(int *)(param_1 + 0x124) == 0) {
      *(undefined4 *)(param_1 + 0x124) = 0;
    }
    else {
      FUN_1446dd670((undefined8 *)(param_1 + 0x118),iVar1);
      if (iVar1 != 0) {
        memcpy(*(void **)(param_1 + 0x118),pvVar2,(longlong)iVar1 * 2);
      }
    }
    *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_2 + 0x128);
    iVar1 = *(int *)(param_2 + 0x138);
    pvVar2 = *(void **)(param_2 + 0x130);
    *(int *)(param_1 + 0x138) = iVar1;
    if (iVar1 == 0 && *(int *)(param_1 + 0x13c) == 0) {
      *(undefined4 *)(param_1 + 0x13c) = 0;
    }
    else {
      FUN_1446dd670((undefined8 *)(param_1 + 0x130),iVar1);
      if (iVar1 != 0) {
        memcpy(*(void **)(param_1 + 0x130),pvVar2,(longlong)iVar1 * 2);
      }
    }
    *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_2 + 0x150);
    uVar3 = *(undefined4 *)(param_2 + 0x144);
    uVar4 = *(undefined4 *)(param_2 + 0x148);
    uVar5 = *(undefined4 *)(param_2 + 0x14c);
    *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_2 + 0x140);
    *(undefined4 *)(param_1 + 0x144) = uVar3;
    *(undefined4 *)(param_1 + 0x148) = uVar4;
    *(undefined4 *)(param_1 + 0x14c) = uVar5;
    iVar1 = *(int *)(param_2 + 0x160);
    pvVar2 = *(void **)(param_2 + 0x158);
    *(int *)(param_1 + 0x160) = iVar1;
    if (iVar1 == 0 && *(int *)(param_1 + 0x164) == 0) {
      *(undefined4 *)(param_1 + 0x164) = 0;
    }
    else {
      FUN_1446dd670((undefined8 *)(param_1 + 0x158),iVar1);
      if (iVar1 != 0) {
        memcpy(*(void **)(param_1 + 0x158),pvVar2,(longlong)iVar1 * 2);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x170) = *(undefined1 *)(param_2 + 0x170);
  *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_2 + 0x168);
  if (*(int *)(param_1 + 0x178) != *(int *)(param_2 + 0x178)) {
    *(undefined1 *)(param_1 + 0x174) = *(undefined1 *)(param_2 + 0x174);
    *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_2 + 0x178);
  }
  return param_1;
}



// FUNCTION 144083b6c FUN_144083b6c body=2668 status=ok
// SIG undefined FUN_144083b6c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144083b6c(void)

{
  uint uVar1;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined **local_80;
  undefined8 uStack_78;
  char *local_70;
  undefined4 local_68;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 3;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8bab30);
  _DAT_14cbbad54 = 0;
  FUN_14052b5e0(&DAT_14cbbad50,"character",0);
  _DAT_14cbbad60 = 0;
  FUN_14052b5e0(&DAT_14cbbad5c,"profile",0);
  local_70 = "state_rem";
  local_68 = 9;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbad68 = (ulonglong)uVar1;
  local_70 = "state_add";
  local_68 = 9;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbad70 = (ulonglong)uVar1;
  local_70 = "state_remove_primary";
  local_68 = 0x14;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbad78 = (ulonglong)uVar1;
  local_70 = "entry_sets";
  local_68 = 10;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbad80 = (ulonglong)uVar1;
  local_70 = "entries";
  local_68 = 7;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbad88 = (ulonglong)uVar1;
  local_70 = "menu_title";
  local_68 = 10;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbad90 = (ulonglong)uVar1;
  local_70 = "actions";
  local_68 = 7;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbad98 = (ulonglong)uVar1;
  local_70 = "loc_text";
  local_68 = 8;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbada0 = (ulonglong)uVar1;
  local_70 = "desc_text";
  local_68 = 9;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbada8 = (ulonglong)uVar1;
  local_70 = "style";
  local_68 = 5;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbadb0 = (ulonglong)uVar1;
  local_70 = "horizontal";
  local_68 = 10;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbadb8 = (ulonglong)uVar1;
  local_70 = "entry_set_default";
  local_68 = 0x11;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbadc0 = (ulonglong)uVar1;
  local_70 = "required_nexus_layer";
  local_68 = 0x14;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbadc8 = (ulonglong)uVar1;
  local_70 = "tooltip_key";
  local_68 = 0xb;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbadd0 = (ulonglong)uVar1;
  local_70 = "set_push";
  local_68 = 8;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbadd8 = (ulonglong)uVar1;
  local_70 = "exit_game";
  local_68 = 9;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbade0 = (ulonglong)uVar1;
  local_70 = "back";
  local_68 = 4;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbade8 = (ulonglong)uVar1;
  local_70 = "back_actions";
  local_68 = 0xc;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbadf0 = (ulonglong)uVar1;
  _DAT_14cbbadf8 = 0;
  uRam000000014cbbae00 = 0;
  _DAT_14cbbae08 = 0;
  DAT_14cbbae10 = 0;
  uRam000000014cbbae18 = 0;
  FUN_1446ddda2(&DAT_14cbbadf8,&DAT_14b81bd00,0);
  atexit((_func_5014 *)&LAB_144082cf4);
  local_70 = "sub_entries";
  local_68 = 0xb;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbae20 = (ulonglong)uVar1;
  local_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8bb020);
  local_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8bb790);
  local_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8bc000);
  FUN_1446f470e(&DAT_14cbbae88,L"Party",1);
  FUN_1446f470e(&DAT_14cbbae90,&DAT_149e063b2,1);
  local_70 = "continue";
  local_68 = 8;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbae98 = (ulonglong)uVar1;
  local_70 = "load_character";
  local_68 = 0xe;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbaea0 = (ulonglong)uVar1;
  local_70 = "new_game";
  local_68 = 8;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbaea8 = (ulonglong)uVar1;
  local_70 = "select_play_ozone";
  local_68 = 0x11;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbaeb0 = (ulonglong)uVar1;
  local_70 = "options";
  local_68 = 7;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbaeb8 = (ulonglong)uVar1;
  local_70 = "quit";
  local_68 = 4;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbaec0 = (ulonglong)uVar1;
  local_70 = "debug";
  local_68 = 5;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbaec8 = (ulonglong)uVar1;
  local_70 = "render_mode";
  local_68 = 0xb;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbaed0 = (ulonglong)uVar1;
  local_70 = "open_matchmaking_menu";
  local_68 = 0x15;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbaed8 = (ulonglong)uVar1;
  local_70 = s_open_lan_menu_14b8b17c3;
  local_68 = 0xd;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbaee0 = (ulonglong)uVar1;
  local_70 = "AssetRegistry";
  local_68 = 0xd;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbaee8 = (ulonglong)uVar1;
  FUN_140056680(&DAT_14cbbaef0,L"available");
  atexit((_func_5014 *)&LAB_144082d39);
  FUN_140056680(&DAT_14cbbaf00,L"synced");
  atexit((_func_5014 *)&LAB_144082d4a);
  FUN_140056680(&DAT_14cbbaf10,L"offline");
  atexit((_func_5014 *)&LAB_144082d5b);
  FUN_140056680(&DAT_14cbbaf20,L"incompatible");
  atexit((_func_5014 *)&LAB_144082d6c);
  FUN_140056680(&DAT_14cbbaf30,L"conflict");
  atexit((_func_5014 *)&LAB_144082d7d);
  FUN_1446f470e(&DAT_14cbbaf40,L"UNSET",1);
  _DAT_14cbbaf48 = 0;
  uRam000000014cbbaf50 = 0;
  _DAT_14cbbaf58 = 0;
  DAT_14cbbaf60 = 0;
  uRam000000014cbbaf68 = 0;
  FUN_1446ddda2(&DAT_14cbbaf48,"MainMenuVersionText",0);
  atexit((_func_5014 *)&LAB_144082d8e);
  _DAT_14cbbaf70 = 0;
  uRam000000014cbbaf78 = 0;
  _DAT_14cbbaf80 = 0;
  DAT_14cbbaf88 = 0;
  uRam000000014cbbaf90 = 0;
  FUN_1446ddda2(&DAT_14cbbaf70,"MainMenuVersionUpdateReadyText",0);
  atexit((_func_5014 *)&LAB_144082d9f);
  local_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8bc660);
  local_70 = "audio_calibration";
  local_68 = 0x11;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbafb0 = (ulonglong)uVar1;
  local_70 = "brightness_calibration";
  local_68 = 0x16;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbafb8 = (ulonglong)uVar1;
  local_70 = "brightness_calibration_ftc";
  local_68 = 0x1a;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbafc0 = (ulonglong)uVar1;
  local_70 = "safe_area_calibration";
  local_68 = 0x15;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbafc8 = (ulonglong)uVar1;
  local_70 = "options_accessibility";
  local_68 = 0x15;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbafd0 = (ulonglong)uVar1;
  local_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 3;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8bd780);
  local_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8bd890);
  local_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8becb0);
  uStack_78 = 0;
  local_80 = (undefined **)0x0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8beec0);
  uStack_78 = 1;
  local_80 = &PTR_FUN_14b8c04f0;
  local_88 = 10;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8c0510);
  uStack_78 = 0;
  local_80 = (undefined **)0x0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8c07e0);
  uStack_78 = 0;
  local_80 = (undefined **)0x0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8c0970);
  local_70 = "wheel_axis";
  local_68 = 10;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70);
  _DAT_14cbbb1b8 = (ulonglong)uVar1;
  uStack_78 = 0;
  local_80 = (undefined **)0x0;
  local_88 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8c0c30);
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440845ee FUN_1440845ee body=55 status=ok
// SIG undefined FUN_1440845ee(void)

void FUN_1440845ee(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbb468 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbb468 = FUN_140002ddd(FUN_144084625,uVar1,L"OakWidgetData_HardcoreTrait");
  }
  return;
}



// FUNCTION 144084625 FUN_144084625 body=47 status=ok
// SIG undefined FUN_144084625(void)

longlong FUN_144084625(void)

{
  if (DAT_14cbbb460 == 0) {
    FUN_14086a14e(&DAT_14cbbb460,&PTR_FUN_14b8c6868);
  }
  return DAT_14cbbb460;
}



// FUNCTION 144084654 FUN_144084654 body=48 status=ok
// SIG undefined FUN_144084654(void)

void FUN_144084654(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14b8cb9a0;
  return;
}



// FUNCTION 144084684 FUN_144084684 body=55 status=ok
// SIG undefined FUN_144084684(void)

void FUN_144084684(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbb480 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbb480 = FUN_140002ddd(FUN_1440846bb,uVar1,L"OakWidgetData_TakedownModeDetails");
  }
  return;
}



// FUNCTION 1440846bb FUN_1440846bb body=47 status=ok
// SIG undefined FUN_1440846bb(void)

longlong FUN_1440846bb(void)

{
  if (DAT_14cbbb478 == 0) {
    FUN_14086a14e(&DAT_14cbbb478,&PTR_FUN_14b8c6958);
  }
  return DAT_14cbbb478;
}



// FUNCTION 1440846f2 FUN_1440846f2 body=48 status=ok
// SIG undefined FUN_1440846f2(void)

void FUN_1440846f2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000128;
  *puVar1 = &PTR_FUN_14b8cbb00;
  return;
}



// FUNCTION 144084722 FUN_144084722 body=55 status=ok
// SIG undefined FUN_144084722(void)

void FUN_144084722(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbb498 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbb498 = FUN_140002ddd(FUN_144084759,uVar1,L"OakWidgetData_Takedown");
  }
  return;
}



// FUNCTION 144084759 FUN_144084759 body=47 status=ok
// SIG undefined FUN_144084759(void)

longlong FUN_144084759(void)

{
  if (DAT_14cbbb490 == 0) {
    FUN_14086a14e(&DAT_14cbbb490,&PTR_FUN_14b8c7008);
  }
  return DAT_14cbbb490;
}



// FUNCTION 1440847a8 FUN_1440847a8 body=48 status=ok
// SIG undefined FUN_1440847a8(void)

void FUN_1440847a8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000002b0;
  *puVar1 = &PTR_FUN_14b8cbc90;
  return;
}



// FUNCTION 144085100 FUN_144085100 body=57 status=ok
// SIG undefined FUN_144085100(void)

void FUN_144085100(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbb1f8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbb1f8 = FUN_140002ddd(FUN_146609587,uVar1,L"OakUIData_RepairKit");
  }
  return;
}



// FUNCTION 144085148 FUN_144085148 body=57 status=ok
// SIG undefined FUN_144085148(void)

void FUN_144085148(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbb210 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbb210 = FUN_140002ddd(FUN_14660961d,uVar1,L"OakWidgetData_ResourceMeter");
  }
  return;
}



// FUNCTION 1440851c8 FUN_1440851c8 body=1257 status=ok
// SIG undefined FUN_1440851c8(void)

undefined8 * FUN_1440851c8(undefined8 *param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_1408f3f9e();
  *param_1 = &PTR_FUN_14b8cb0c0;
  uVar4 = DAT_14c8463f8._4_4_;
  uVar3 = (undefined4)DAT_14c8463f8;
  uVar2 = DAT_14c8463f0._4_4_;
  *(undefined4 *)(param_1 + 0x16) = (undefined4)DAT_14c8463f0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = uVar2;
  *(undefined4 *)(param_1 + 0x17) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xbc) = uVar4;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_1[0x1c] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 0x1d) = DAT_14c844848;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_1[0x1e] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 0x1f) = DAT_14c844848;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_1[0x20] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 0x21) = DAT_14c844848;
  FUN_140056680(param_1 + 0x22,&DAT_149dfb77a);
  FUN_148c8f760(param_1 + 0x24);
  FUN_148c8f760(param_1 + 0x36);
  FUN_148c8f086(param_1 + 0x48);
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  *(undefined2 *)(param_1 + 0x54) = 1;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_1[0x55] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 0x56) = DAT_14c844848;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_1[0x57] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 0x58) = DAT_14c844848;
  param_1[0x5d] = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2f4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2fc) = 0;
  param_1[0x61] = 0;
  *(undefined4 *)(param_1 + 0x62) = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  *(undefined4 *)(param_1 + 0x65) = 0;
  return param_1;
}



// FUNCTION 1440856b2 FUN_1440856b2 body=400 status=ok
// SIG undefined FUN_1440856b2(void)

void FUN_1440856b2(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b8cb0c0;
  FUN_1447a1747(param_1[99],*(undefined4 *)(param_1 + 100));
  if (param_1[99] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x62) = 0;
  if (param_1[0x61] != 0) {
    FUN_1400020a8();
  }
  FUN_140a49dbc(param_1 + 0x59);
  if ((longlong *)param_1[0x57] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x57] + 0x10))();
  }
  if ((longlong *)param_1[0x55] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x55] + 0x10))();
  }
  FUN_148c8fffd(param_1[0x52],*(undefined4 *)(param_1 + 0x53));
  if (param_1[0x52] != 0) {
    FUN_1400020a8();
  }
  FUN_148c8f114(param_1 + 0x48);
  FUN_148c8f83a(param_1 + 0x36);
  FUN_148c8f83a(param_1 + 0x24);
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0x20] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x20] + 0x10))();
  }
  if ((longlong *)param_1[0x1e] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x1e] + 0x10))();
  }
  if ((longlong *)param_1[0x1c] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x1c] + 0x10))();
  }
  *param_1 = &PTR_FUN_14b473650;
  plVar2 = (longlong *)param_1[0xd];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 144085842 FUN_144085842 body=709 status=ok
// SIG undefined FUN_144085842(void)

longlong FUN_144085842(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  void *_Src;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  FUN_1489fb7d2();
  uVar4 = *(undefined4 *)(param_2 + 0xb4);
  uVar5 = *(undefined4 *)(param_2 + 0xb8);
  uVar6 = *(undefined4 *)(param_2 + 0xbc);
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined4 *)(param_1 + 0xb4) = uVar4;
  *(undefined4 *)(param_1 + 0xb8) = uVar5;
  *(undefined4 *)(param_1 + 0xbc) = uVar6;
  if (*(int *)(param_1 + 0xc4) != *(int *)(param_2 + 0xc4)) {
    *(undefined1 *)(param_1 + 0xc0) = *(undefined1 *)(param_2 + 0xc0);
    *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_2 + 0xc4);
  }
  if (*(int *)(param_1 + 0xcc) != *(int *)(param_2 + 0xcc)) {
    *(undefined1 *)(param_1 + 200) = *(undefined1 *)(param_2 + 200);
    *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_2 + 0xcc);
  }
  if (*(int *)(param_1 + 0xd4) != *(int *)(param_2 + 0xd4)) {
    *(undefined1 *)(param_1 + 0xd0) = *(undefined1 *)(param_2 + 0xd0);
    *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_2 + 0xd4);
  }
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
  plVar2 = *(longlong **)(param_2 + 0xe0);
  plVar3 = *(longlong **)(param_1 + 0xe0);
  if (plVar3 != plVar2) {
    *(longlong **)(param_1 + 0xe0) = plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0xe8);
  plVar2 = *(longlong **)(param_2 + 0xf0);
  plVar3 = *(longlong **)(param_1 + 0xf0);
  if (plVar3 != plVar2) {
    *(longlong **)(param_1 + 0xf0) = plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_2 + 0xf8);
  plVar2 = *(longlong **)(param_2 + 0x100);
  plVar3 = *(longlong **)(param_1 + 0x100);
  if (plVar3 != plVar2) {
    *(longlong **)(param_1 + 0x100) = plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_2 + 0x108);
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x118);
    _Src = *(void **)(param_2 + 0x110);
    *(int *)(param_1 + 0x118) = iVar1;
    if (iVar1 == 0 && *(int *)(param_1 + 0x11c) == 0) {
      *(undefined4 *)(param_1 + 0x11c) = 0;
    }
    else {
      FUN_1446dd670((undefined8 *)(param_1 + 0x110),iVar1);
      if (iVar1 != 0) {
        memcpy(*(void **)(param_1 + 0x110),_Src,(longlong)iVar1 * 2);
      }
    }
  }
  FUN_148c8f942(param_1 + 0x120,param_2 + 0x120);
  FUN_148c8f942(param_1 + 0x1b0,param_2 + 0x1b0);
  FUN_148c8f170(param_1 + 0x240,param_2 + 0x240);
  FUN_148c90028(param_1 + 0x290,param_2 + 0x290);
  *(undefined2 *)(param_1 + 0x2a0) = *(undefined2 *)(param_2 + 0x2a0);
  plVar2 = *(longlong **)(param_2 + 0x2a8);
  plVar3 = *(longlong **)(param_1 + 0x2a8);
  if (plVar3 != plVar2) {
    *(longlong **)(param_1 + 0x2a8) = plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  *(undefined4 *)(param_1 + 0x2b0) = *(undefined4 *)(param_2 + 0x2b0);
  plVar2 = *(longlong **)(param_2 + 0x2b8);
  plVar3 = *(longlong **)(param_1 + 0x2b8);
  if (plVar3 != plVar2) {
    *(longlong **)(param_1 + 0x2b8) = plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  *(undefined4 *)(param_1 + 0x2c0) = *(undefined4 *)(param_2 + 0x2c0);
  FUN_140b855d0(param_1 + 0x2c8,param_2 + 0x2c8);
  FUN_140bee9ec(param_1 + 0x318,param_2 + 0x318);
  *(undefined4 *)(param_1 + 0x328) = *(undefined4 *)(param_2 + 0x328);
  return param_1;
}



// FUNCTION 144085b5c FUN_144085b5c body=57 status=ok
// SIG undefined FUN_144085b5c(void)

void FUN_144085b5c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbb448 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbb448 = FUN_140002ddd(FUN_146609c97,uVar1,L"OakUIWidgetData_Subtitles");
  }
  return;
}



// FUNCTION 144085b96 FUN_144085b96 body=29 status=ok
// SIG undefined FUN_144085b96(void)

undefined8 FUN_144085b96(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144085bf6 FUN_144085bf6 body=121 status=ok
// SIG undefined FUN_144085bf6(void)

undefined8 FUN_144085bf6(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  void *_Src;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_2 != param_3) {
      iVar1 = *(int *)(param_3 + 1);
      _Src = (void *)*param_3;
      *(int *)(param_2 + 1) = iVar1;
      if (iVar1 == 0 && *(int *)((longlong)param_2 + 0xc) == 0) {
        *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(param_2,iVar1);
        if (iVar1 != 0) {
          memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
        }
      }
    }
    param_3 = param_3 + 2;
    param_2 = param_2 + 2;
  }
  return 1;
}



// FUNCTION 144085c98 FUN_144085c98 body=59 status=ok
// SIG undefined FUN_144085c98(void)

undefined8 FUN_144085c98(longlong *param_1)

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



// FUNCTION 144085cde FUN_144085cde body=37 status=ok
// SIG undefined FUN_144085cde(void)

void FUN_144085cde(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 144085d54 FUN_144085d54 body=29 status=ok
// SIG undefined FUN_144085d54(void)

undefined8 FUN_144085d54(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144085d80 FUN_144085d80 body=1445 status=ok
// SIG undefined FUN_144085d80(void)

void FUN_144085d80(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  memset(param_2,0,0x128);
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b8cbc60;
  *(undefined1 *)(param_2 + 0x16) = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_2[0x19] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_2 + 0x1a) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_2[0x1b] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_2 + 0x1c) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_2[0x1d] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_2 + 0x1e) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_2[0x1f] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_2 + 0x20) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_2[0x21] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_2 + 0x22) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_2[0x23] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_2 + 0x24) = 0;
  return;
}



// FUNCTION 144086326 FUN_144086326 body=1429 status=ok
// SIG undefined FUN_144086326(void)

void FUN_144086326(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b8cbc60;
  *(undefined1 *)(param_2 + 0x16) = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_2[0x19] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_2 + 0x1a) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_2[0x1b] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_2 + 0x1c) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_2[0x1d] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_2 + 0x1e) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_2[0x1f] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_2 + 0x20) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_2[0x21] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_2 + 0x22) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_2[0x23] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_2 + 0x24) = 0;
  return;
}



// FUNCTION 1440868e0 FUN_1440868e0 body=564 status=ok
// SIG undefined FUN_1440868e0(void)

undefined8 FUN_1440868e0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  int iVar1;
  void *_Src;
  longlong *plVar2;
  longlong *plVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1489fb7d2(param_2,param_3);
    *(undefined1 *)(param_2 + 0xb0) = *(undefined1 *)(param_3 + 0xb0);
    if (param_2 != param_3) {
      iVar1 = *(int *)(param_3 + 0xc0);
      _Src = *(void **)(param_3 + 0xb8);
      *(int *)(param_2 + 0xc0) = iVar1;
      if (iVar1 == 0 && *(int *)(param_2 + 0xc4) == 0) {
        *(undefined4 *)(param_2 + 0xc4) = 0;
      }
      else {
        FUN_1446dd670((undefined8 *)(param_2 + 0xb8),iVar1);
        if (iVar1 != 0) {
          memcpy(*(void **)(param_2 + 0xb8),_Src,(longlong)iVar1 * 2);
        }
      }
    }
    plVar2 = *(longlong **)(param_3 + 200);
    plVar3 = *(longlong **)(param_2 + 200);
    if (plVar3 != plVar2) {
      *(longlong **)(param_2 + 200) = plVar2;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    *(undefined4 *)(param_2 + 0xd0) = *(undefined4 *)(param_3 + 0xd0);
    plVar2 = *(longlong **)(param_3 + 0xd8);
    plVar3 = *(longlong **)(param_2 + 0xd8);
    if (plVar3 != plVar2) {
      *(longlong **)(param_2 + 0xd8) = plVar2;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    *(undefined4 *)(param_2 + 0xe0) = *(undefined4 *)(param_3 + 0xe0);
    plVar2 = *(longlong **)(param_3 + 0xe8);
    plVar3 = *(longlong **)(param_2 + 0xe8);
    if (plVar3 != plVar2) {
      *(longlong **)(param_2 + 0xe8) = plVar2;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    *(undefined4 *)(param_2 + 0xf0) = *(undefined4 *)(param_3 + 0xf0);
    plVar2 = *(longlong **)(param_3 + 0xf8);
    plVar3 = *(longlong **)(param_2 + 0xf8);
    if (plVar3 != plVar2) {
      *(longlong **)(param_2 + 0xf8) = plVar2;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    *(undefined4 *)(param_2 + 0x100) = *(undefined4 *)(param_3 + 0x100);
    plVar2 = *(longlong **)(param_3 + 0x108);
    plVar3 = *(longlong **)(param_2 + 0x108);
    if (plVar3 != plVar2) {
      *(longlong **)(param_2 + 0x108) = plVar2;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    *(undefined4 *)(param_2 + 0x110) = *(undefined4 *)(param_3 + 0x110);
    plVar2 = *(longlong **)(param_3 + 0x118);
    plVar3 = *(longlong **)(param_2 + 0x118);
    if (plVar3 != plVar2) {
      *(longlong **)(param_2 + 0x118) = plVar2;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    *(undefined4 *)(param_2 + 0x120) = *(undefined4 *)(param_3 + 0x120);
    param_2 = param_2 + 0x128;
    param_3 = param_3 + 0x128;
  }
  return 1;
}



// FUNCTION 144086b3c FUN_144086b3c body=59 status=ok
// SIG undefined FUN_144086b3c(void)

undefined8 FUN_144086b3c(longlong *param_1)

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



// FUNCTION 144086b88 FUN_144086b88 body=38 status=ok
// SIG undefined FUN_144086b88(void)

void FUN_144086b88(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x128) == '\x01') {
    FUN_144086c5a(param_2);
    *(undefined1 *)(param_2 + 0x128) = 0;
  }
  return;
}



// FUNCTION 144086bfc FUN_144086bfc body=38 status=ok
// SIG undefined FUN_144086bfc(void)

undefined8 FUN_144086bfc(undefined8 param_1,int param_2)

{
  FUN_144086c5a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144086c22 FUN_144086c22 body=55 status=ok
// SIG undefined FUN_144086c22(void)

void FUN_144086c22(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbb480 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbb480 = FUN_140002ddd(FUN_1440846bb,uVar1,L"OakWidgetData_TakedownModeDetails");
  }
  return;
}



// FUNCTION 144086c5a FUN_144086c5a body=249 status=ok
// SIG undefined FUN_144086c5a(void)

void FUN_144086c5a(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b8cbc60;
  if ((longlong *)param_1[0x23] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x23] + 0x10))();
  }
  if ((longlong *)param_1[0x21] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x21] + 0x10))();
  }
  if ((longlong *)param_1[0x1f] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x1f] + 0x10))();
  }
  if ((longlong *)param_1[0x1d] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x1d] + 0x10))();
  }
  if ((longlong *)param_1[0x1b] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x1b] + 0x10))();
  }
  if ((longlong *)param_1[0x19] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x19] + 0x10))();
  }
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b473650;
  plVar2 = (longlong *)param_1[0xd];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 144086d54 FUN_144086d54 body=29 status=ok
// SIG undefined FUN_144086d54(void)

undefined8 FUN_144086d54(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144086d80 FUN_144086d80 body=37 status=ok
// SIG undefined FUN_144086d80(void)

void FUN_144086d80(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x2b0);
  FUN_1440872ec(param_2);
  return;
}



// FUNCTION 144086dd2 FUN_144086dd2 body=1074 status=ok
// SIG undefined FUN_144086dd2(void)

undefined8 FUN_144086dd2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  
  if (param_4 != 0) {
    lVar10 = 0;
    do {
      lVar1 = param_3 + lVar10;
      lVar2 = param_2 + lVar10;
      FUN_1489fb7d2(lVar2,lVar1);
      *(undefined4 *)(param_2 + 0xb0 + lVar10) = *(undefined4 *)(param_3 + 0xb0 + lVar10);
      if (param_2 != param_3) {
        iVar3 = *(int *)(param_3 + 0xc0 + lVar10);
        pvVar4 = *(void **)(param_3 + 0xb8 + lVar10);
        *(int *)(param_2 + 0xc0 + lVar10) = iVar3;
        if (iVar3 == 0 && *(int *)(param_2 + 0xc4 + lVar10) == 0) {
          *(undefined4 *)(param_2 + 0xc4 + lVar10) = 0;
        }
        else {
          puVar9 = (undefined8 *)(param_2 + lVar10 + 0xb8);
          FUN_1446dd670(puVar9,iVar3);
          if (iVar3 != 0) {
            memcpy((void *)*puVar9,pvVar4,(longlong)iVar3 * 2);
          }
        }
        iVar3 = *(int *)(param_3 + 0xd0 + lVar10);
        pvVar4 = *(void **)(param_3 + 200 + lVar10);
        *(int *)(param_2 + 0xd0 + lVar10) = iVar3;
        if (iVar3 == 0 && *(int *)(param_2 + 0xd4 + lVar10) == 0) {
          *(undefined4 *)(param_2 + 0xd4 + lVar10) = 0;
        }
        else {
          puVar9 = (undefined8 *)(param_2 + lVar10 + 200);
          FUN_1446dd670(puVar9,iVar3);
          if (iVar3 != 0) {
            memcpy((void *)*puVar9,pvVar4,(longlong)iVar3 * 2);
          }
        }
        iVar3 = *(int *)(param_3 + 0xe0 + lVar10);
        pvVar4 = *(void **)(param_3 + 0xd8 + lVar10);
        *(int *)(param_2 + 0xe0 + lVar10) = iVar3;
        if (iVar3 == 0 && *(int *)(param_2 + 0xe4 + lVar10) == 0) {
          *(undefined4 *)(param_2 + 0xe4 + lVar10) = 0;
        }
        else {
          puVar9 = (undefined8 *)(param_2 + lVar10 + 0xd8);
          FUN_1446dd670(puVar9,iVar3);
          if (iVar3 != 0) {
            memcpy((void *)*puVar9,pvVar4,(longlong)iVar3 * 2);
          }
        }
        iVar3 = *(int *)(param_3 + 0xf0 + lVar10);
        pvVar4 = *(void **)(param_3 + 0xe8 + lVar10);
        *(int *)(param_2 + 0xf0 + lVar10) = iVar3;
        if (iVar3 == 0 && *(int *)(param_2 + 0xf4 + lVar10) == 0) {
          *(undefined4 *)(param_2 + 0xf4 + lVar10) = 0;
        }
        else {
          puVar9 = (undefined8 *)(param_2 + lVar10 + 0xe8);
          FUN_1446dd670(puVar9,iVar3);
          if (iVar3 != 0) {
            memcpy((void *)*puVar9,pvVar4,(longlong)iVar3 * 2);
          }
        }
      }
      *(undefined4 *)(lVar2 + 0x108) = *(undefined4 *)(lVar1 + 0x108);
      uVar6 = *(undefined4 *)(lVar1 + 0xfc);
      uVar7 = *(undefined4 *)(lVar1 + 0x100);
      uVar8 = *(undefined4 *)(lVar1 + 0x104);
      *(undefined4 *)(lVar2 + 0xf8) = *(undefined4 *)(lVar1 + 0xf8);
      *(undefined4 *)(lVar2 + 0xfc) = uVar6;
      *(undefined4 *)(lVar2 + 0x100) = uVar7;
      *(undefined4 *)(lVar2 + 0x104) = uVar8;
      FUN_1489fdc6a(lVar2 + 0x110,lVar1 + 0x110);
      FUN_1489fdc6a(lVar2 + 0x1a8,lVar1 + 0x1a8);
      uVar6 = *(undefined4 *)(lVar1 + 0x244);
      uVar7 = *(undefined4 *)(lVar1 + 0x248);
      uVar8 = *(undefined4 *)(lVar1 + 0x24c);
      *(undefined4 *)(lVar2 + 0x240) = *(undefined4 *)(lVar1 + 0x240);
      *(undefined4 *)(lVar2 + 0x244) = uVar6;
      *(undefined4 *)(lVar2 + 0x248) = uVar7;
      *(undefined4 *)(lVar2 + 0x24c) = uVar8;
      FUN_148c68022(lVar2 + 0x250,lVar1 + 0x250);
      if (lVar2 == lVar1) {
        *(undefined4 *)(param_2 + 0x270 + lVar10) = *(undefined4 *)(param_3 + 0x270 + lVar10);
      }
      else {
        iVar3 = *(int *)(param_3 + 0x268 + lVar10);
        pvVar4 = *(void **)(param_3 + 0x260 + lVar10);
        *(int *)(param_2 + 0x268 + lVar10) = iVar3;
        if (iVar3 == 0 && *(int *)(param_2 + 0x26c + lVar10) == 0) {
          *(undefined4 *)(param_2 + 0x26c + lVar10) = 0;
        }
        else {
          puVar9 = (undefined8 *)(param_2 + lVar10 + 0x260);
          FUN_1446dd670(puVar9,iVar3);
          if (iVar3 != 0) {
            memcpy((void *)*puVar9,pvVar4,(longlong)iVar3 * 2);
          }
        }
        *(undefined4 *)(param_2 + 0x270 + lVar10) = *(undefined4 *)(param_3 + 0x270 + lVar10);
        iVar3 = *(int *)(param_3 + 0x280 + lVar10);
        pvVar4 = *(void **)(param_3 + 0x278 + lVar10);
        *(int *)(param_2 + 0x280 + lVar10) = iVar3;
        if (iVar3 == 0 && *(int *)(param_2 + 0x284 + lVar10) == 0) {
          *(undefined4 *)(param_2 + 0x284 + lVar10) = 0;
        }
        else {
          puVar9 = (undefined8 *)(param_2 + lVar10 + 0x278);
          FUN_1446dd670(puVar9,iVar3);
          if (iVar3 != 0) {
            memcpy((void *)*puVar9,pvVar4,(longlong)iVar3 * 2);
          }
        }
        FUN_144087efe(*(undefined8 *)(param_2 + 0x288 + lVar10),
                      *(undefined4 *)(param_2 + 0x290 + lVar10));
        iVar3 = *(int *)(param_3 + 0x290 + lVar10);
        uVar5 = *(undefined8 *)(param_3 + 0x288 + lVar10);
        *(int *)(param_2 + 0x290 + lVar10) = iVar3;
        if (iVar3 == 0 && *(int *)(param_2 + 0x294 + lVar10) == 0) {
          *(undefined4 *)(param_2 + 0x294 + lVar10) = 0;
        }
        else {
          puVar9 = (undefined8 *)(param_2 + lVar10 + 0x288);
          FUN_144087f28(puVar9,iVar3);
          FUN_14408806e(*puVar9,uVar5,iVar3);
        }
        FUN_144087ed3(*(undefined8 *)(param_2 + 0x298 + lVar10),
                      *(undefined4 *)(param_2 + 0x2a0 + lVar10));
        iVar3 = *(int *)(param_3 + 0x2a0 + lVar10);
        uVar5 = *(undefined8 *)(param_3 + 0x298 + lVar10);
        *(int *)(param_2 + 0x2a0 + lVar10) = iVar3;
        if (iVar3 == 0 && *(int *)(param_2 + 0x2a4 + lVar10) == 0) {
          *(undefined4 *)(param_2 + 0x2a4 + lVar10) = 0;
        }
        else {
          puVar9 = (undefined8 *)(param_2 + lVar10 + 0x298);
          FUN_144088218(puVar9,iVar3);
          FUN_1440882f8(*puVar9,uVar5,iVar3);
        }
      }
      *(undefined4 *)(lVar2 + 0x2a8) = *(undefined4 *)(lVar1 + 0x2a8);
      lVar10 = lVar10 + 0x2b0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14408722c FUN_14408722c body=59 status=ok
// SIG undefined FUN_14408722c(void)

undefined8 FUN_14408722c(longlong *param_1)

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



// FUNCTION 144087278 FUN_144087278 body=38 status=ok
// SIG undefined FUN_144087278(void)

void FUN_144087278(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2b0) == '\x01') {
    FUN_144087d5e(param_2);
    *(undefined1 *)(param_2 + 0x2b0) = 0;
  }
  return;
}



// FUNCTION 1440872ec FUN_1440872ec body=2580 status=ok
// SIG undefined FUN_1440872ec(void)

undefined8 * FUN_1440872ec(undefined8 *param_1)

{
  longlong *plVar1;
  
  FUN_1408f3f9e();
  *param_1 = &PTR_FUN_14b8cbdf0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0x6300000063;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_1[0x24] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 0x25) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_1[0x26] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 0x27) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_1[0x28] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 0x29) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_1[0x2a] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_1[0x2e] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_1[0x37] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_1[0x39] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 0x3a) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_1[0x3b] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_1[0x3d] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 0x3e) = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_1[0x41] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 0x42) = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  *(undefined1 *)(param_1 + 0x47) = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  FUN_140056680(param_1 + 0x4c,&DAT_149dfb77a);
  *(undefined4 *)(param_1 + 0x4e) = 0x10001;
  FUN_140056680(param_1 + 0x4f,&DAT_149dfb77a);
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  return param_1;
}



// FUNCTION 144087d00 FUN_144087d00 body=38 status=ok
// SIG undefined FUN_144087d00(void)

undefined8 FUN_144087d00(undefined8 param_1,int param_2)

{
  FUN_144087d5e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144087d26 FUN_144087d26 body=55 status=ok
// SIG undefined FUN_144087d26(void)

void FUN_144087d26(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbb498 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbb498 = FUN_140002ddd(FUN_144084759,uVar1,L"OakWidgetData_Takedown");
  }
  return;
}



// FUNCTION 144087d5e FUN_144087d5e body=373 status=ok
// SIG undefined FUN_144087d5e(void)

void FUN_144087d5e(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b8cbdf0;
  FUN_144087ed3(param_1[0x53],*(undefined4 *)(param_1 + 0x54));
  if (param_1[0x53] != 0) {
    FUN_1400020a8();
  }
  FUN_144087efe(param_1[0x51],*(undefined4 *)(param_1 + 0x52));
  if (param_1[0x51] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4c] != 0) {
    FUN_1400020a8();
  }
  FUN_14110cecd(param_1[0x4a],*(undefined4 *)(param_1 + 0x4b));
  if (param_1[0x4a] != 0) {
    FUN_1400020a8();
  }
  FUN_140fe7f98(param_1 + 0x35);
  FUN_140fe7f98(param_1 + 0x22);
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b473650;
  plVar2 = (longlong *)param_1[0xd];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 144087ed3 FUN_144087ed3 body=43 status=ok
// SIG undefined FUN_144087ed3(void)

void FUN_144087ed3(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 144087efe FUN_144087efe body=41 status=ok
// SIG undefined FUN_144087efe(void)

void FUN_144087efe(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_144086c5a(param_1);
    param_1 = param_1 + 0x128;
  }
  return;
}



// FUNCTION 144087f28 FUN_144087f28 body=326 status=ok
// SIG undefined FUN_144087f28(void)

void FUN_144087f28(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar4 = (longlong)param_2 * 0x128;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_144087f95;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar1 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
LAB_144087f95:
    iVar5 = (int)(uVar4 / 0x128);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x128,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14408806e FUN_14408806e body=60 status=ok
// SIG undefined FUN_14408806e(void)

void FUN_14408806e(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1440880aa(param_1,param_2);
    param_1 = param_1 + 0x128;
    param_2 = param_2 + 0x128;
  }
  return;
}



// FUNCTION 1440880aa FUN_1440880aa body=366 status=ok
// SIG undefined FUN_1440880aa(void)

undefined8 * FUN_1440880aa(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  longlong *plVar2;
  
  FUN_14042a9ce();
  *param_1 = &PTR_FUN_14b8cbc60;
  *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_2 + 0xb0);
  param_1[0x17] = 0;
  iVar1 = *(int *)(param_2 + 0xc0);
  _Src = *(void **)(param_2 + 0xb8);
  *(int *)(param_1 + 0x18) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x17,iVar1,0);
    memcpy((void *)param_1[0x17],_Src,(longlong)iVar1 * 2);
  }
  plVar2 = *(longlong **)(param_2 + 200);
  param_1[0x19] = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0xd0);
  plVar2 = *(longlong **)(param_2 + 0xd8);
  param_1[0x1b] = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0xe0);
  plVar2 = *(longlong **)(param_2 + 0xe8);
  param_1[0x1d] = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)(param_2 + 0xf0);
  plVar2 = *(longlong **)(param_2 + 0xf8);
  param_1[0x1f] = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x100);
  plVar2 = *(longlong **)(param_2 + 0x108);
  param_1[0x21] = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined4 *)(param_1 + 0x22) = *(undefined4 *)(param_2 + 0x110);
  plVar2 = *(longlong **)(param_2 + 0x118);
  param_1[0x23] = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x120);
  return param_1;
}



// FUNCTION 144088218 FUN_144088218 body=224 status=ok
// SIG undefined FUN_144088218(void)

void FUN_144088218(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = (longlong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(longlong)param_2 & 0xfffffffffffffff]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar2 = -uVar3 & (uVar2 + uVar3) - 1;
        }
      }
      else {
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,8);
      }
    }
    iVar1 = (int)(uVar2 >> 4);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x10,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1440882f8 FUN_1440882f8 body=116 status=ok
// SIG undefined FUN_1440882f8(void)

void FUN_1440882f8(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  int *piVar2;
  
  if (param_3 != 0) {
    piVar2 = (int *)(param_2 + 8);
    do {
      *param_1 = 0;
      iVar1 = *piVar2;
      _Src = *(void **)(piVar2 + -2);
      *(int *)(param_1 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
      }
      param_1 = param_1 + 2;
      piVar2 = piVar2 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14408837c FUN_14408837c body=57 status=ok
// SIG undefined FUN_14408837c(void)

void FUN_14408837c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbb4b0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbb4b0 = FUN_140002ddd(FUN_146609cf6,uVar1,L"OakUIData_TitleScreen");
  }
  return;
}



// FUNCTION 14408845e FUN_14408845e body=57 status=ok
// SIG undefined FUN_14408845e(void)

void FUN_14408845e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbc100 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbc100 = FUN_140002ddd(FUN_14660a3ff,uVar1,L"OakUIData_InteractPrompt");
  }
  return;
}



// FUNCTION 144088516 FUN_144088516 body=57 status=ok
// SIG undefined FUN_144088516(void)

void FUN_144088516(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbc1d8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbc1d8 = FUN_140002ddd(FUN_14660a90e,uVar1,L"OakWidgetData_VehicleStatus");
  }
  return;
}



// FUNCTION 14408855e FUN_14408855e body=57 status=ok
// SIG undefined FUN_14408855e(void)

void FUN_14408855e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbc1f0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbc1f0 = FUN_140002ddd(FUN_14660a9a5,uVar1,L"OakUIData_VehicleUnavailableData");
  }
  return;
}



// FUNCTION 1440885b4 FUN_1440885b4 body=10204 status=ok
// SIG undefined FUN_1440885b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1440885b4(void)

{
  void *_Src;
  char cVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  char *local_70;
  undefined4 local_68;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8c3ab0);
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8c3de0);
  local_70 = "state_rem";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb220 = (ulonglong)uVar2;
  local_70 = "state_add";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb228 = (ulonglong)uVar2;
  local_70 = "state_remove_primary";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb230 = (ulonglong)uVar2;
  local_70 = "entry_sets";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb238 = (ulonglong)uVar2;
  local_70 = "entries";
  local_68 = 7;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb240 = (ulonglong)uVar2;
  local_70 = "menu_title";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb248 = (ulonglong)uVar2;
  local_70 = "actions";
  local_68 = 7;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb250 = (ulonglong)uVar2;
  local_70 = "loc_text";
  local_68 = 8;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb258 = (ulonglong)uVar2;
  local_70 = "desc_text";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb260 = (ulonglong)uVar2;
  local_70 = "style";
  local_68 = 5;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb268 = (ulonglong)uVar2;
  local_70 = "horizontal";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb270 = (ulonglong)uVar2;
  local_70 = "entry_set_default";
  local_68 = 0x11;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb278 = (ulonglong)uVar2;
  local_70 = "required_nexus_layer";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb280 = (ulonglong)uVar2;
  local_70 = "tooltip_key";
  local_68 = 0xb;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb288 = (ulonglong)uVar2;
  local_70 = "set_push";
  local_68 = 8;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb290 = (ulonglong)uVar2;
  local_70 = "exit_game";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb298 = (ulonglong)uVar2;
  local_70 = "back";
  local_68 = 4;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb2a0 = (ulonglong)uVar2;
  local_70 = "back_actions";
  local_68 = 0xc;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb2a8 = (ulonglong)uVar2;
  _DAT_14cbbb2b4 = 0;
  FUN_14052b5e0(&DAT_14cbbb2b0,"character",0);
  _DAT_14cbbb2c0 = 0;
  FUN_14052b5e0(&DAT_14cbbb2bc,"profile",0);
  _DAT_14cbbb2c8 = 0;
  uRam000000014cbbb2d0 = 0;
  _DAT_14cbbb2d8 = 0;
  DAT_14cbbb2e0 = 0;
  uRam000000014cbbb2e8 = 0;
  FUN_1446ddda2(&DAT_14cbbb2c8);
  atexit((_func_5014 *)&LAB_1440845dc);
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 5;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8c4e80);
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8c4fe0);
  FUN_1446f470e(&DAT_14cbbb380,L"Party",1);
  FUN_1446f470e(&DAT_14cbbb388,&DAT_149e063b2);
  local_70 = "continue";
  local_68 = 8;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb390 = (ulonglong)uVar2;
  local_70 = "load_character";
  local_68 = 0xe;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb398 = (ulonglong)uVar2;
  local_70 = "new_game";
  local_68 = 8;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb3a0 = (ulonglong)uVar2;
  local_70 = "select_play_ozone";
  local_68 = 0x11;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb3a8 = (ulonglong)uVar2;
  local_70 = "options";
  local_68 = 7;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb3b0 = (ulonglong)uVar2;
  local_70 = "quit";
  local_68 = 4;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb3b8 = (ulonglong)uVar2;
  local_70 = "debug";
  local_68 = 5;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb3c0 = (ulonglong)uVar2;
  local_70 = "render_mode";
  local_68 = 0xb;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb3c8 = (ulonglong)uVar2;
  local_70 = "open_matchmaking_menu";
  local_68 = 0x15;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb3d0 = (ulonglong)uVar2;
  local_70 = s_open_lan_menu_14b8b17c3;
  local_68 = 0xd;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70);
  _DAT_14cbbb3d8 = (ulonglong)uVar2;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 3;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8c5e60);
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8c6780);
  local_70 = "AssetRegistry";
  local_68 = 0xd;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70);
  _DAT_14cbbb458 = (ulonglong)uVar2;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 3;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8c7040);
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8c7340);
  FUN_1400b22c2(&DAT_14cbbb4c0,"weapon_dps_estimate");
  atexit((_func_5014 *)&LAB_1440847d8);
  local_70 = "num_rows_override";
  local_68 = 0x11;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb4d0 = (ulonglong)uVar2;
  local_70 = "show_capacity_text";
  local_68 = 0x12;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb4d8 = (ulonglong)uVar2;
  local_70 = "num_columns_override";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb4e0 = (ulonglong)uVar2;
  local_70 = "sort_list_config";
  local_68 = 0x10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb4e8 = (ulonglong)uVar2;
  local_70 = "filter_list_config";
  local_68 = 0x12;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb4f0 = (ulonglong)uVar2;
  local_70 = "default_sort_ident";
  local_68 = 0x12;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb4f8 = (ulonglong)uVar2;
  local_70 = "enable_filter";
  local_68 = 0xd;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb500 = (ulonglong)uVar2;
  local_70 = "enable_sort";
  local_68 = 0xb;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb508 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbbb510,"backpack_item_grid");
  atexit((_func_5014 *)&LAB_1440847e9);
  FUN_1400b22c2(&DAT_14cbbb520,"bpack_sort_asc_dsc");
  atexit((_func_5014 *)&LAB_1440847fa);
  FUN_1400b22c2(&DAT_14cbbb530,"sort-dropdown");
  atexit((_func_5014 *)&LAB_14408480b);
  FUN_1400b22c2(&DAT_14cbbb540,"filter-dropdown");
  atexit((_func_5014 *)&LAB_14408481c);
  local_70 = "ITEM_CARD";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb550 = (ulonglong)uVar2;
  local_70 = "ITEM_CARD_COMPARE";
  local_68 = 0x11;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb558 = (ulonglong)uVar2;
  local_70 = "MENU_FULL_BACKPACK";
  local_68 = 0x12;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb560 = (ulonglong)uVar2;
  local_70 = "MENU_POPUP_BACKPACK";
  local_68 = 0x13;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb568 = (ulonglong)uVar2;
  local_70 = "MENU_PLAYER_STATS";
  local_68 = 0x11;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb570 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbbb578,"filter-dropdown");
  atexit((_func_5014 *)&LAB_14408482d);
  FUN_1400b22c2(&DAT_14cbbb588,"equip_slot_dropdown");
  atexit((_func_5014 *)&LAB_14408483e);
  FUN_1400b22c2(&DAT_14cbbb598,"mark-dropdown");
  atexit((_func_5014 *)&LAB_14408484f);
  FUN_1400b22c2(&DAT_14cbbb5a8,"item-dropdown");
  atexit((_func_5014 *)&LAB_144084860);
  FUN_1400b22c2(&DAT_14cbbb5b8,"sort-dropdown");
  atexit((_func_5014 *)&LAB_144084871);
  FUN_1400b22c2(&DAT_14cbbb5c8,&DAT_149e3cc88);
  atexit((_func_5014 *)&LAB_144084882);
  FUN_1400b22c2(&DAT_14cbbb5d8,"Popup");
  atexit((_func_5014 *)&LAB_144084893);
  FUN_1400b22c2(&DAT_14cbbb5e8,"Fullsize");
  atexit((_func_5014 *)&LAB_1440848a4);
  FUN_1400b22c2(&DAT_14cbbb5f8,"EchoLogs");
  atexit((_func_5014 *)&LAB_1440848b5);
  FUN_1400b22c2(&DAT_14cbbb608,"PlayerStats");
  atexit((_func_5014 *)&LAB_1440848c6);
  FUN_1400b22c2(&DAT_14cbbb618,"RewardCenter");
  atexit((_func_5014 *)&LAB_1440848d7);
  FUN_140056680(&DAT_14cbbb628,L"reset");
  atexit((_func_5014 *)&LAB_1440848e8);
  local_70 = "add_on_activate";
  local_68 = 0xf;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb638 = (ulonglong)uVar2;
  local_70 = "remove_on_deactivate";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb640 = (ulonglong)uVar2;
  local_70 = "filter_selected";
  local_68 = 0xf;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb648 = (ulonglong)uVar2;
  local_70 = "hide_messages_on_deactivate";
  local_68 = 0x1b;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb650 = (ulonglong)uVar2;
  local_70 = "drop_action_supported";
  local_68 = 0x15;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb658 = (ulonglong)uVar2;
  local_70 = "equip_action_supported";
  local_68 = 0x16;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb660 = (ulonglong)uVar2;
  local_70 = "unequip_action_supported";
  local_68 = 0x18;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb668 = (ulonglong)uVar2;
  local_70 = "compare_action_supported";
  local_68 = 0x18;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb670 = (ulonglong)uVar2;
  local_70 = "mark_item_action_supported";
  local_68 = 0x1a;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb678 = (ulonglong)uVar2;
  local_70 = "mark_multiple_items_supported";
  local_68 = 0x1d;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb680 = (ulonglong)uVar2;
  local_70 = "remote_inventory_action_supported";
  local_68 = 0x21;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb688 = (ulonglong)uVar2;
  local_70 = "unequip_message_ident";
  local_68 = 0x15;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb690 = (ulonglong)uVar2;
  local_70 = "equip_message_ident";
  local_68 = 0x13;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb698 = (ulonglong)uVar2;
  local_70 = "swap_message_ident";
  local_68 = 0x12;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb6a0 = (ulonglong)uVar2;
  local_70 = "drop_message_ident";
  local_68 = 0x12;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb6a8 = (ulonglong)uVar2;
  local_70 = "cant_equip_message_ident";
  local_68 = 0x18;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb6b0 = (ulonglong)uVar2;
  local_70 = "insufficient_space_error_ident";
  local_68 = 0x1e;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb6b8 = (ulonglong)uVar2;
  local_70 = "multiple_item_deposit_ident";
  local_68 = 0x1b;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb6c0 = (ulonglong)uVar2;
  local_70 = "deposit_message_ident";
  local_68 = 0x15;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb6c8 = (ulonglong)uVar2;
  local_70 = "incomplete_deposit_ident";
  local_68 = 0x18;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb6d0 = (ulonglong)uVar2;
  local_70 = "backpack_class_html";
  local_68 = 0x13;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb6d8 = (ulonglong)uVar2;
  local_70 = "standin_config";
  local_68 = 0xe;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb6e0 = (ulonglong)uVar2;
  local_70 = "player_standin_tag";
  local_68 = 0x12;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb6e8 = (ulonglong)uVar2;
  local_70 = "echo_bot_standin_tag";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb6f0 = (ulonglong)uVar2;
  local_70 = "sortable_numeric_stats";
  local_68 = 0x16;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb6f8 = (ulonglong)uVar2;
  local_70 = "escape_hold_supported";
  local_68 = 0x15;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb700 = (ulonglong)uVar2;
  local_70 = "max_visible_items";
  local_68 = 0x11;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb708 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cbbb710,L"action_ui_drop_item");
  atexit((_func_5014 *)&LAB_1440848f9);
  FUN_140056680(&DAT_14cbbb720,L"action_ui_equip_item");
  atexit((_func_5014 *)&LAB_14408490a);
  FUN_140056680(&DAT_14cbbb730,L"action_ui_unequip_item");
  atexit((_func_5014 *)&LAB_14408491b);
  FUN_140056680(&DAT_14cbbb740,L"action_ui_compare_item");
  atexit((_func_5014 *)&LAB_14408492c);
  FUN_140056680(&DAT_14cbbb750,L"action_ui_cursor_click");
  atexit((_func_5014 *)&LAB_14408493d);
  FUN_140056680(&DAT_14cbbb760,L"action_ui_set_item_flag");
  atexit((_func_5014 *)&LAB_14408494e);
  FUN_140056680(&DAT_14cbbb770,L"action_ui_remote_bank_deposit");
  atexit((_func_5014 *)&LAB_14408495f);
  FUN_140056680(&DAT_14cbbb780,L"action_ui_mark_all_filtered");
  atexit((_func_5014 *)&LAB_144084970);
  FUN_140056680(&DAT_14cbbb790,L"action_ui_menu_escape");
  atexit((_func_5014 *)&LAB_144084981);
  FUN_140056680(&DAT_14cbbb7a0,L"action_ui_show_player_stats");
  atexit((_func_5014 *)&LAB_144084992);
  FUN_140056680(&DAT_14cbbb7b0,L"action_ui_mark_hovered_as_junk");
  atexit((_func_5014 *)&LAB_1440849a3);
  FUN_140056680(&DAT_14cbbb7c0,L"action_ui_open_reward_center");
  atexit((_func_5014 *)&LAB_1440849b4);
  FUN_140056680(&DAT_14cbbb7d0,L"action_ui_select_slot_1");
  atexit((_func_5014 *)&LAB_1440849c5);
  FUN_140056680(&DAT_14cbbb7e0,L"action_ui_select_slot_2");
  atexit((_func_5014 *)&LAB_1440849d6);
  FUN_140056680(&DAT_14cbbb7f0,L"action_ui_select_slot_3");
  atexit((_func_5014 *)&LAB_1440849e7);
  FUN_140056680(&DAT_14cbbb800,L"action_ui_select_slot_4");
  atexit((_func_5014 *)&LAB_1440849f8);
  FUN_140056680(&DAT_14cbbb810,L"action_ui_copy_focused_item_serial_number");
  atexit((_func_5014 *)&LAB_144084a09);
  FUN_140056680(&DAT_14cbbb820,L"action_ui_menu_escape_hold");
  atexit((_func_5014 *)&LAB_144084a1a);
  FUN_140056680(&DAT_14cbbb830,L"action_ui_inspect_item");
  atexit((_func_5014 *)&LAB_144084a2b);
  FUN_140056680(&DAT_14cbbb840,L"action_ui_flip_item_card");
  atexit((_func_5014 *)&LAB_144084a3c);
  FUN_140056680(&DAT_14cbbb850,L"action_ui_open_all_rewards");
  atexit((_func_5014 *)&LAB_144084a4d);
  FUN_140056680(&DAT_14cbbb860,L"SelectText");
  atexit((_func_5014 *)&LAB_144084a5e);
  FUN_140056680(&DAT_14cbbb870,L"CompareHint");
  atexit((_func_5014 *)&LAB_144084a6f);
  FUN_140056680(&DAT_14cbbb880,L"EquipHint");
  atexit((_func_5014 *)&LAB_144084a80);
  FUN_140056680(&DAT_14cbbb890,L"UnequipHint");
  atexit((_func_5014 *)&LAB_144084a91);
  FUN_140056680(&DAT_14cbbb8a0,L"DropHint");
  atexit((_func_5014 *)&LAB_144084aa2);
  FUN_140056680(&DAT_14cbbb8b0,L"SetItemFlagHint");
  atexit((_func_5014 *)&LAB_144084ab3);
  FUN_140056680(&DAT_14cbbb8c0,L"ToggleJunkHint");
  atexit((_func_5014 *)&LAB_144084ac4);
  FUN_140056680(&DAT_14cbbb8d0,L"MarkAllFilteredHint");
  atexit((_func_5014 *)&LAB_144084ad5);
  FUN_140056680(&DAT_14cbbb8e0,L"PlayerStatsHint");
  atexit((_func_5014 *)&LAB_144084ae6);
  FUN_140056680(&DAT_14cbbb8f0,L"SwapWeaponsHint");
  atexit((_func_5014 *)&LAB_144084af7);
  FUN_140056680(&DAT_14cbbb900,L"BackText");
  atexit((_func_5014 *)&LAB_144084b08);
  FUN_140056680(&DAT_14cbbb910,L"SellHint");
  atexit((_func_5014 *)&LAB_144084b19);
  FUN_140056680(&DAT_14cbbb920,L"BuyHint");
  atexit((_func_5014 *)&LAB_144084b2a);
  FUN_140056680(&DAT_14cbbb930,L"ExitMenuHint");
  atexit((_func_5014 *)&LAB_144084b3b);
  FUN_140056680(&DAT_14cbbb940,L"OpenAllRewardsHint");
  atexit((_func_5014 *)&LAB_144084b4c);
  FUN_1400b22c2(&DAT_14cbbb950,"trash");
  atexit((_func_5014 *)&LAB_144084b5d);
  FUN_1400b22c2(&DAT_14cbbb960,"favorite");
  atexit((_func_5014 *)&LAB_144084b6e);
  FUN_1400b22c2(&DAT_14cbbb970,"bankdeposit");
  atexit((_func_5014 *)&LAB_144084b7f);
  FUN_1400b22c2(&DAT_14cbbb980,"taggroup1");
  atexit((_func_5014 *)&LAB_144084b90);
  FUN_1400b22c2(&DAT_14cbbb990,"taggroup2");
  atexit((_func_5014 *)&LAB_144084ba1);
  FUN_1400b22c2(&DAT_14cbbb9a0,"taggroup3");
  atexit((_func_5014 *)&LAB_144084bb2);
  FUN_1400b22c2(&DAT_14cbbb9b0,"taggroup4");
  atexit((_func_5014 *)&LAB_144084bc3);
  local_70 = "trash";
  local_68 = 5;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb9c0 = (ulonglong)uVar2;
  local_70 = "favorite";
  local_68 = 8;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb9c8 = (ulonglong)uVar2;
  local_70 = "bankdeposit";
  local_68 = 0xb;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb9d0 = (ulonglong)uVar2;
  local_70 = "taggroup1";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb9d8 = (ulonglong)uVar2;
  local_70 = "taggroup2";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb9e0 = (ulonglong)uVar2;
  local_70 = "taggroup3";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb9e8 = (ulonglong)uVar2;
  local_70 = "taggroup4";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbb9f0 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbbb9f8,"OpenBackpack");
  atexit((_func_5014 *)&LAB_144084bd4);
  FUN_1400b22c2(&DAT_14cbbba08,"CloseBackpack");
  atexit((_func_5014 *)&LAB_144084be5);
  FUN_1400b22c2(&DAT_14cbbba18,"OpenPlayerStats");
  atexit((_func_5014 *)&LAB_144084bf6);
  FUN_1400b22c2(&DAT_14cbbba28,"ClosePlayerStats");
  atexit((_func_5014 *)&LAB_144084c07);
  FUN_1400b22c2(&DAT_14cbbba38,"OpenRewardCenter");
  atexit((_func_5014 *)&LAB_144084c18);
  FUN_1400b22c2(&DAT_14cbbba48,"CloseRewardCenter");
  atexit((_func_5014 *)&LAB_144084c29);
  FUN_1400b22c2(&DAT_14cbbba58,"CompareStart");
  atexit((_func_5014 *)&LAB_144084c3a);
  FUN_1400b22c2(&DAT_14cbbba68,"CompareStop");
  atexit((_func_5014 *)&LAB_144084c4b);
  FUN_1400b22c2(&DAT_14cbbba78,"UnequipItem");
  atexit((_func_5014 *)&LAB_144084c5c);
  FUN_1400b22c2(&DAT_14cbbba88,"EquipItem");
  atexit((_func_5014 *)&LAB_144084c6d);
  FUN_1400b22c2(&DAT_14cbbba98,"DropItem");
  atexit((_func_5014 *)&LAB_144084c7e);
  FUN_1400b22c2(&DAT_14cbbbaa8,"MarkItem");
  atexit((_func_5014 *)&LAB_144084c8f);
  FUN_1400b22c2(&DAT_14cbbbab8,"Error");
  atexit((_func_5014 *)&LAB_144084ca0);
  FUN_1400b22c2(&DAT_14cbbbac8,"ElementUnfocused");
  atexit((_func_5014 *)&LAB_144084cb1);
  FUN_1400b22c2(&DAT_14cbbbad8,"ElementFocused");
  atexit((_func_5014 *)&LAB_144084cc2);
  FUN_1400b22c2(&DAT_14cbbbae8,"ElementClicked");
  atexit((_func_5014 *)&LAB_144084cd3);
  FUN_1400b22c2(&DAT_14cbbbaf8,"EscapeInput");
  atexit((_func_5014 *)&LAB_144084ce4);
  FUN_1400b22c2(&DAT_14cbbbb08,"WeaponSlotFocused");
  atexit((_func_5014 *)&LAB_144084cf5);
  FUN_1400b22c2(&DAT_14cbbbb18,"WeaponSlotUnfocused");
  atexit((_func_5014 *)&LAB_144084d06);
  FUN_1400b22c2(&DAT_14cbbbb28,"GearSlotFocused");
  atexit((_func_5014 *)&LAB_144084d17);
  FUN_1400b22c2(&DAT_14cbbbb38,"GearSlotUnfocused");
  atexit((_func_5014 *)&LAB_144084d28);
  FUN_1400b22c2(&DAT_14cbbbb48,"BackpackSlotFocused");
  atexit((_func_5014 *)&LAB_144084d39);
  FUN_1400b22c2(&DAT_14cbbbb58,"BackpackSlotUnfocused");
  atexit((_func_5014 *)&LAB_144084d4a);
  FUN_1400b22c2(&DAT_14cbbbb68,"MarkItemBank");
  atexit((_func_5014 *)&LAB_144084d5b);
  FUN_1400b22c2(&DAT_14cbbbb78,"MarkItemTrash");
  atexit((_func_5014 *)&LAB_144084d6c);
  FUN_1400b22c2(&DAT_14cbbbb88,"MarkItemFavorite");
  atexit((_func_5014 *)&LAB_144084d7d);
  FUN_1400b22c2(&DAT_14cbbbb98,"ClickPistol");
  atexit((_func_5014 *)&LAB_144084d8e);
  FUN_1400b22c2(&DAT_14cbbbba8,"ClickAssaultRifle");
  atexit((_func_5014 *)&LAB_144084d9f);
  FUN_1400b22c2(&DAT_14cbbbbb8,"ClickSMG");
  atexit((_func_5014 *)&LAB_144084db0);
  FUN_1400b22c2(&DAT_14cbbbbc8,"ClickShotgun");
  atexit((_func_5014 *)&LAB_144084dc1);
  FUN_1400b22c2(&DAT_14cbbbbd8,"ClickSniper");
  atexit((_func_5014 *)&LAB_144084dd2);
  FUN_1400b22c2(&DAT_14cbbbbe8,"ClickRepKit");
  atexit((_func_5014 *)&LAB_144084de3);
  FUN_1400b22c2(&DAT_14cbbbbf8,"ClickGrenade");
  atexit((_func_5014 *)&LAB_144084df4);
  FUN_1400b22c2(&DAT_14cbbbc08,"ClickHeavyWeapon");
  atexit((_func_5014 *)&LAB_144084e05);
  FUN_1400b22c2(&DAT_14cbbbc18,"ClickClassMod");
  atexit((_func_5014 *)&LAB_144084e16);
  FUN_1400b22c2(&DAT_14cbbbc28,"ClickGadget");
  atexit((_func_5014 *)&LAB_144084e27);
  FUN_1400b22c2(&DAT_14cbbbc38,"ClickEnhancement");
  atexit((_func_5014 *)&LAB_144084e38);
  FUN_1400b22c2(&DAT_14cbbbc48,"ClickShield");
  atexit((_func_5014 *)&LAB_144084e49);
  FUN_1400b22c2(&DAT_14cbbbc58,"EquipPistol");
  atexit((_func_5014 *)&LAB_144084e5a);
  FUN_1400b22c2(&DAT_14cbbbc68,"EquipAssaultRifle");
  atexit((_func_5014 *)&LAB_144084e6b);
  FUN_1400b22c2(&DAT_14cbbbc78,"EquipSMG");
  atexit((_func_5014 *)&LAB_144084e7c);
  FUN_1400b22c2(&DAT_14cbbbc88,"EquipShotgun");
  atexit((_func_5014 *)&LAB_144084e8d);
  FUN_1400b22c2(&DAT_14cbbbc98,"EquipSniper");
  atexit((_func_5014 *)&LAB_144084e9e);
  FUN_1400b22c2(&DAT_14cbbbca8,"EquipRepKit");
  atexit((_func_5014 *)&LAB_144084eaf);
  FUN_1400b22c2(&DAT_14cbbbcb8,"EquipGrenade");
  atexit((_func_5014 *)&LAB_144084ec0);
  FUN_1400b22c2(&DAT_14cbbbcc8,"EquipHeavyWeapon");
  atexit((_func_5014 *)&LAB_144084ed1);
  FUN_1400b22c2(&DAT_14cbbbcd8,"EquipClassMod");
  atexit((_func_5014 *)&LAB_144084ee2);
  FUN_1400b22c2(&DAT_14cbbbce8,"EquipGadget");
  atexit((_func_5014 *)&LAB_144084ef3);
  FUN_1400b22c2(&DAT_14cbbbcf8,"EquipEnhancement");
  atexit((_func_5014 *)&LAB_144084f04);
  FUN_1400b22c2(&DAT_14cbbbd08,"EquipShield");
  atexit((_func_5014 *)&LAB_144084f15);
  FUN_1400b22c2(&DAT_14cbbbd18,"weapon");
  atexit((_func_5014 *)&LAB_144084f26);
  FUN_1400b22c2(&DAT_14cbbbd28,"weapon_ps");
  atexit((_func_5014 *)&LAB_144084f37);
  FUN_1400b22c2(&DAT_14cbbbd38,"weapon_ar");
  atexit((_func_5014 *)&LAB_144084f48);
  FUN_1400b22c2(&DAT_14cbbbd48,"weapon_sg");
  atexit((_func_5014 *)&LAB_144084f59);
  FUN_1400b22c2(&DAT_14cbbbd58,"weapon_sr");
  atexit((_func_5014 *)&LAB_144084f6a);
  FUN_1400b22c2(&DAT_14cbbbd68,"weapon_sm");
  atexit((_func_5014 *)&LAB_144084f7b);
  FUN_1400b22c2(&DAT_14cbbbd78,"grenade_gadget");
  atexit((_func_5014 *)&LAB_144084f8c);
  FUN_1400b22c2(&DAT_14cbbbd88,"shield");
  atexit((_func_5014 *)&LAB_144084f9d);
  FUN_1400b22c2(&DAT_14cbbbd98,"heavy_weapon_gadget");
  atexit((_func_5014 *)&LAB_144084fae);
  FUN_1400b22c2(&DAT_14cbbbda8,"repair_kit");
  atexit((_func_5014 *)&LAB_144084fbf);
  FUN_1400b22c2(&DAT_14cbbbdb8,"classmod");
  atexit((_func_5014 *)&LAB_144084fd0);
  FUN_1400b22c2(&DAT_14cbbbdc8,"classmod_dark_siren");
  atexit((_func_5014 *)&LAB_144084fe1);
  FUN_1400b22c2(&DAT_14cbbbdd8,"classmod_exo_soldier");
  atexit((_func_5014 *)&LAB_144084ff2);
  FUN_1400b22c2(&DAT_14cbbbde8,"classmod_gravitar");
  atexit((_func_5014 *)&LAB_144085003);
  FUN_1400b22c2(&DAT_14cbbbdf8,"classmod_paladin");
  atexit((_func_5014 *)&LAB_144085014);
  FUN_1400b22c2(&DAT_14cbbbe08,"gadget");
  atexit((_func_5014 *)&LAB_144085025);
  FUN_1400b22c2(&DAT_14cbbbe18,"enhancement");
  atexit((_func_5014 *)&LAB_144085036);
  FUN_140056680(&DAT_14cbbbe28,L"recent");
  atexit((_func_5014 *)&LAB_144085047);
  FUN_140056680(&DAT_14cbbbe38,L"type");
  atexit((_func_5014 *)&LAB_144085058);
  FUN_140056680(&DAT_14cbbbe48,L"level");
  atexit((_func_5014 *)&LAB_144085069);
  FUN_140056680(&DAT_14cbbbe58,L"base_name");
  atexit((_func_5014 *)&LAB_14408507a);
  FUN_140056680(&DAT_14cbbbe68,L"first_letter");
  atexit((_func_5014 *)&LAB_14408508b);
  FUN_140056680(&DAT_14cbbbe78,L"value");
  atexit((_func_5014 *)&LAB_14408509c);
  FUN_140056680(&DAT_14cbbbe88,L"rarity");
  atexit((_func_5014 *)&LAB_1440850ad);
  FUN_140056680(&DAT_14cbbbe98,L"manufacturer");
  atexit((_func_5014 *)&LAB_1440850be);
  _Src = DAT_14cbbb4c0;
  DAT_14cbbbea8 = (void *)0x0;
  lVar3 = (longlong)DAT_14cbbb4c8;
  _DAT_14cbbbeb0 = DAT_14cbbb4c8;
  if (lVar3 == 0) {
    _DAT_14cbbbeb4 = 0;
  }
  else {
    FUN_1446dd670(&DAT_14cbbbea8,DAT_14cbbb4c8,0);
    memcpy(DAT_14cbbbea8,_Src,lVar3 * 2);
  }
  atexit((_func_5014 *)&LAB_1440850cf);
  FUN_140056680(&DAT_14cbbbeb8,L"healing");
  atexit((_func_5014 *)&LAB_1440850e0);
  local_70 = "cancel";
  local_68 = 6;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbbec8 = (ulonglong)uVar2;
  local_70 = "partial";
  local_68 = 7;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbbed0 = (ulonglong)uVar2;
  local_70 = "all";
  local_68 = 3;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbbed8 = (ulonglong)uVar2;
  local_70 = "basic";
  local_68 = 5;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbbee0 = (ulonglong)uVar2;
  local_70 = "challenge";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbbee8 = (ulonglong)uVar2;
  local_70 = "online";
  local_68 = 6;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbbef0 = (ulonglong)uVar2;
  local_70 = "social";
  local_68 = 6;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbbef8 = (ulonglong)uVar2;
  local_70 = "alert";
  local_68 = 5;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbbf00 = (ulonglong)uVar2;
  local_70 = "photo_mode";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbbf08 = (ulonglong)uVar2;
  local_70 = "generic_task";
  local_68 = 0xc;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbbf10 = (ulonglong)uVar2;
  local_70 = "mission";
  local_68 = 7;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbbf18 = (ulonglong)uVar2;
  local_70 = "mail";
  local_68 = 4;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbbf20 = (ulonglong)uVar2;
  local_70 = "respawn";
  local_68 = 7;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbbf28 = (ulonglong)uVar2;
  local_70 = "tutorial";
  local_68 = 8;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbbf30 = (ulonglong)uVar2;
  local_70 = "special_notification";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbbf38 = (ulonglong)uVar2;
  local_70 = "generic_notification";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbbf40 = (ulonglong)uVar2;
  local_70 = "vault_card";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbbf48 = (ulonglong)uVar2;
  local_70 = "ONLINE_MESSAGE";
  local_68 = 0xe;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbbf50 = (ulonglong)uVar2;
  local_70 = "INGAME_MESSAGE";
  local_68 = 0xe;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbbf58 = (ulonglong)uVar2;
  local_70 = "NOTIFICATION_MESSAGE";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbbf60 = (ulonglong)uVar2;
  local_70 = "MENU_TUTORIAL_MESSAGE";
  local_68 = 0x15;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbbf68 = (ulonglong)uVar2;
  local_70 = "collectible";
  local_68 = 0xb;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbbf70 = (ulonglong)uVar2;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8c7410);
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8c7c50);
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 8;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8c8670);
  FUN_1400b22c2(&local_70,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_70,&DAT_14cbbc080);
  if (cVar1 == '\0') {
    _DAT_14cbbc080 = 0;
    uRam000000014cbbc088 = 0;
  }
  if (local_70 != (char *)0x0) {
    FUN_1400020a8();
  }
  _DAT_14cbbc090 = 0x47efffffe0000000;
  _DAT_14cbbc098 = 0x47efffffe0000000;
  _DAT_14cbbc0a0 = 0x47efffffe0000000;
  _DAT_14cbbc0a8 = 0x47efffffe0000000;
  _DAT_14cbbc0b0 = 0x47efffffe0000000;
  _DAT_14cbbc0b8 = 0x47efffffe0000000;
  _DAT_14cbbc0c0 = 0x47efffffe0000000;
  _DAT_14cbbc0c8 = 0x47efffffe0000000;
  local_70 = "Cash";
  local_68 = 4;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbc0d0 = (ulonglong)uVar2;
  local_70 = "bone";
  local_68 = 4;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  _DAT_14cbbc0dc = 0;
  FUN_14052b5e0(&DAT_14cbbc0d8,"PlayerAwareness",0);
  _DAT_14cbbc0e8 = "PlayerAwareness";
  FUN_1446f470e(&DAT_14cbbc0f0,L"UNSET",1);
  local_70 = "init";
  local_68 = 4;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  local_70 = "update";
  local_68 = 6;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  local_70 = "config_update";
  local_68 = 0xd;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  local_70 = "deinit";
  local_68 = 6;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8c8a90);
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 4;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8c91a0);
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8c9480);
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 4;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8ca160);
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8ca310);
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8ca670);
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14408afb4 FUN_14408afb4 body=49 status=ok
// SIG undefined FUN_14408afb4(void)

void FUN_14408afb4(void)

{
  FUN_1447a1747(DAT_14cbbc8a0,DAT_14cbbc8a8);
  if (DAT_14cbbc8a0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14408afee FUN_14408afee body=55 status=ok
// SIG undefined FUN_14408afee(void)

void FUN_14408afee(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbca78 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbca78 = FUN_14171c317(FUN_14660b75e,uVar1,L"EVehicleExitReason");
  }
  return;
}



// FUNCTION 14408b026 FUN_14408b026 body=48 status=ok
// SIG undefined FUN_14408b026(void)

longlong FUN_14408b026(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_141309cc0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14408b056 FUN_14408b056 body=48 status=ok
// SIG undefined FUN_14408b056(void)

longlong FUN_14408b056(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_141309cc0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14408b09e FUN_14408b09e body=48 status=ok
// SIG undefined FUN_14408b09e(void)

longlong FUN_14408b09e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3f8;
  FUN_141309cc0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14408b0ce FUN_14408b0ce body=48 status=ok
// SIG undefined FUN_14408b0ce(void)

longlong FUN_14408b0ce(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x400;
  FUN_141309cc0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14408b116 FUN_14408b116 body=48 status=ok
// SIG undefined FUN_14408b116(void)

longlong FUN_14408b116(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x448;
  FUN_141309cc0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14408b146 FUN_14408b146 body=48 status=ok
// SIG undefined FUN_14408b146(void)

longlong FUN_14408b146(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x450;
  FUN_141309cc0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14408b17e FUN_14408b17e body=48 status=ok
// SIG undefined FUN_14408b17e(void)

longlong FUN_14408b17e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a58;
  FUN_141309cc0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14408b1ae FUN_14408b1ae body=48 status=ok
// SIG undefined FUN_14408b1ae(void)

longlong FUN_14408b1ae(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a90;
  FUN_141309cc0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14408b1e6 FUN_14408b1e6 body=48 status=ok
// SIG undefined FUN_14408b1e6(void)

longlong FUN_14408b1e6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ac8;
  FUN_141309cc0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14408b22e FUN_14408b22e body=48 status=ok
// SIG undefined FUN_14408b22e(void)

longlong FUN_14408b22e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_14157e22c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14408b25e FUN_14408b25e body=48 status=ok
// SIG undefined FUN_14408b25e(void)

longlong FUN_14408b25e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x438;
  FUN_14157e22c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14408b28e FUN_14408b28e body=48 status=ok
// SIG undefined FUN_14408b28e(void)

longlong FUN_14408b28e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x440;
  FUN_14157e22c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14408b2e6 FUN_14408b2e6 body=48 status=ok
// SIG undefined FUN_14408b2e6(void)

longlong FUN_14408b2e6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x498;
  FUN_14157e22c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14408b316 FUN_14408b316 body=48 status=ok
// SIG undefined FUN_14408b316(void)

longlong FUN_14408b316(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a0;
  FUN_14157e22c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14408b3da FUN_14408b3da body=57 status=ok
// SIG undefined FUN_14408b3da(void)

void FUN_14408b3da(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbc810 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbc810 = FUN_140002ddd(FUN_14660b109,uVar1,L"OakUIData_VoiceIndicators");
  }
  return;
}



// FUNCTION 14408b430 FUN_14408b430 body=57 status=ok
// SIG undefined FUN_14408b430(void)

void FUN_14408b430(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbc840 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbc840 = FUN_140002ddd(FUN_14660b235,uVar1,L"OakWidgetData_WeaponStatus");
  }
  return;
}



// FUNCTION 14408b46a FUN_14408b46a body=2209 status=ok
// SIG undefined FUN_14408b46a(void)

longlong FUN_14408b46a(longlong param_1,longlong param_2)

{
  int iVar1;
  void *pvVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  FUN_1489fb7d2();
  if (*(int *)(param_1 + 0xb4) != *(int *)(param_2 + 0xb4)) {
    *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_2 + 0xb4);
  }
  if (*(int *)(param_1 + 0xbc) != *(int *)(param_2 + 0xbc)) {
    *(undefined1 *)(param_1 + 0xb8) = *(undefined1 *)(param_2 + 0xb8);
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_2 + 0xbc);
  }
  if (*(int *)(param_1 + 0xc4) != *(int *)(param_2 + 0xc4)) {
    *(undefined1 *)(param_1 + 0xc0) = *(undefined1 *)(param_2 + 0xc0);
    *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_2 + 0xc4);
  }
  if (*(int *)(param_1 + 0xcc) != *(int *)(param_2 + 0xcc)) {
    *(undefined1 *)(param_1 + 200) = *(undefined1 *)(param_2 + 200);
    *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_2 + 0xcc);
  }
  if (*(int *)(param_1 + 0xd4) != *(int *)(param_2 + 0xd4)) {
    *(undefined1 *)(param_1 + 0xd0) = *(undefined1 *)(param_2 + 0xd0);
    *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_2 + 0xd4);
  }
  if (*(int *)(param_1 + 0xdc) != *(int *)(param_2 + 0xdc)) {
    *(undefined1 *)(param_1 + 0xd8) = *(undefined1 *)(param_2 + 0xd8);
    *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_2 + 0xdc);
  }
  if (*(int *)(param_1 + 0xe4) != *(int *)(param_2 + 0xe4)) {
    *(undefined1 *)(param_1 + 0xe0) = *(undefined1 *)(param_2 + 0xe0);
    *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_2 + 0xe4);
  }
  if (*(int *)(param_1 + 0xec) != *(int *)(param_2 + 0xec)) {
    *(undefined1 *)(param_1 + 0xe8) = *(undefined1 *)(param_2 + 0xe8);
    *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_2 + 0xec);
  }
  if (*(int *)(param_1 + 0xf4) != *(int *)(param_2 + 0xf4)) {
    *(undefined1 *)(param_1 + 0xf0) = *(undefined1 *)(param_2 + 0xf0);
    *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_2 + 0xf4);
  }
  if (*(int *)(param_1 + 0xfc) != *(int *)(param_2 + 0xfc)) {
    *(undefined1 *)(param_1 + 0xf8) = *(undefined1 *)(param_2 + 0xf8);
    *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_2 + 0xfc);
  }
  if (*(int *)(param_1 + 0x104) != *(int *)(param_2 + 0x104)) {
    *(undefined1 *)(param_1 + 0x100) = *(undefined1 *)(param_2 + 0x100);
    *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_2 + 0x104);
  }
  if (*(int *)(param_1 + 0x10c) != *(int *)(param_2 + 0x10c)) {
    *(undefined1 *)(param_1 + 0x108) = *(undefined1 *)(param_2 + 0x108);
    *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_2 + 0x10c);
  }
  if (*(int *)(param_1 + 0x114) != *(int *)(param_2 + 0x114)) {
    *(undefined1 *)(param_1 + 0x110) = *(undefined1 *)(param_2 + 0x110);
    *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(param_2 + 0x114);
  }
  if (*(int *)(param_1 + 0x11c) != *(int *)(param_2 + 0x11c)) {
    *(undefined1 *)(param_1 + 0x118) = *(undefined1 *)(param_2 + 0x118);
    *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_2 + 0x11c);
  }
  if (*(int *)(param_1 + 0x124) != *(int *)(param_2 + 0x124)) {
    *(undefined1 *)(param_1 + 0x120) = *(undefined1 *)(param_2 + 0x120);
    *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_2 + 0x124);
  }
  if (*(int *)(param_1 + 300) != *(int *)(param_2 + 300)) {
    *(undefined1 *)(param_1 + 0x128) = *(undefined1 *)(param_2 + 0x128);
    *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_2 + 300);
  }
  if (*(int *)(param_1 + 0x134) != *(int *)(param_2 + 0x134)) {
    *(undefined1 *)(param_1 + 0x130) = *(undefined1 *)(param_2 + 0x130);
    *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_2 + 0x134);
  }
  if (*(int *)(param_1 + 0x13c) != *(int *)(param_2 + 0x13c)) {
    *(undefined1 *)(param_1 + 0x138) = *(undefined1 *)(param_2 + 0x138);
    *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_2 + 0x13c);
  }
  if (*(int *)(param_1 + 0x144) != *(int *)(param_2 + 0x144)) {
    *(undefined1 *)(param_1 + 0x140) = *(undefined1 *)(param_2 + 0x140);
    *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_2 + 0x144);
  }
  if (*(int *)(param_1 + 0x14c) != *(int *)(param_2 + 0x14c)) {
    *(undefined1 *)(param_1 + 0x148) = *(undefined1 *)(param_2 + 0x148);
    *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_2 + 0x14c);
  }
  if (*(int *)(param_1 + 0x154) != *(int *)(param_2 + 0x154)) {
    *(undefined1 *)(param_1 + 0x150) = *(undefined1 *)(param_2 + 0x150);
    *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(param_2 + 0x154);
  }
  if (*(int *)(param_1 + 0x15c) != *(int *)(param_2 + 0x15c)) {
    *(undefined1 *)(param_1 + 0x158) = *(undefined1 *)(param_2 + 0x158);
    *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(param_2 + 0x15c);
  }
  if (*(int *)(param_1 + 0x164) != *(int *)(param_2 + 0x164)) {
    *(undefined1 *)(param_1 + 0x160) = *(undefined1 *)(param_2 + 0x160);
    *(undefined4 *)(param_1 + 0x164) = *(undefined4 *)(param_2 + 0x164);
  }
  if (*(int *)(param_1 + 0x16c) != *(int *)(param_2 + 0x16c)) {
    *(undefined1 *)(param_1 + 0x168) = *(undefined1 *)(param_2 + 0x168);
    *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)(param_2 + 0x16c);
  }
  if (*(int *)(param_1 + 0x174) != *(int *)(param_2 + 0x174)) {
    *(undefined1 *)(param_1 + 0x170) = *(undefined1 *)(param_2 + 0x170);
    *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(param_2 + 0x174);
  }
  if (param_1 == param_2) {
    *(undefined1 *)(param_1 + 0x188) = *(undefined1 *)(param_2 + 0x188);
    if (*(int *)(param_1 + 0x1a0) != *(int *)(param_2 + 0x1a0)) {
      *(int *)(param_1 + 0x1a0) = *(int *)(param_2 + 0x1a0);
    }
  }
  else {
    iVar1 = *(int *)(param_2 + 0x180);
    pvVar2 = *(void **)(param_2 + 0x178);
    *(int *)(param_1 + 0x180) = iVar1;
    if (iVar1 == 0 && *(int *)(param_1 + 0x184) == 0) {
      *(undefined4 *)(param_1 + 0x184) = 0;
    }
    else {
      FUN_1446dd670((undefined8 *)(param_1 + 0x178),iVar1);
      if (iVar1 != 0) {
        memcpy(*(void **)(param_1 + 0x178),pvVar2,(longlong)iVar1 * 2);
      }
    }
    *(undefined1 *)(param_1 + 0x188) = *(undefined1 *)(param_2 + 0x188);
    if (*(int *)(param_1 + 0x1a0) != *(int *)(param_2 + 0x1a0)) {
      iVar1 = *(int *)(param_2 + 0x198);
      pvVar2 = *(void **)(param_2 + 400);
      *(int *)(param_1 + 0x198) = iVar1;
      if (iVar1 == 0 && *(int *)(param_1 + 0x19c) == 0) {
        *(undefined4 *)(param_1 + 0x19c) = 0;
      }
      else {
        FUN_1446dd670((undefined8 *)(param_1 + 400),iVar1);
        if (iVar1 != 0) {
          memcpy(*(void **)(param_1 + 400),pvVar2,(longlong)iVar1 * 2);
        }
      }
      *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_2 + 0x1a0);
    }
    iVar1 = *(int *)(param_2 + 0x1b0);
    pvVar2 = *(void **)(param_2 + 0x1a8);
    *(int *)(param_1 + 0x1b0) = iVar1;
    if (iVar1 == 0 && *(int *)(param_1 + 0x1b4) == 0) {
      *(undefined4 *)(param_1 + 0x1b4) = 0;
    }
    else {
      FUN_1446dd670((undefined8 *)(param_1 + 0x1a8),iVar1);
      if (iVar1 != 0) {
        memcpy(*(void **)(param_1 + 0x1a8),pvVar2,(longlong)iVar1 * 2);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x1b8) = *(undefined1 *)(param_2 + 0x1b8);
  if (*(int *)(param_1 + 0x1d0) != *(int *)(param_2 + 0x1d0)) {
    if (param_1 != param_2) {
      iVar1 = *(int *)(param_2 + 0x1c8);
      pvVar2 = *(void **)(param_2 + 0x1c0);
      *(int *)(param_1 + 0x1c8) = iVar1;
      if (iVar1 == 0 && *(int *)(param_1 + 0x1cc) == 0) {
        *(undefined4 *)(param_1 + 0x1cc) = 0;
      }
      else {
        FUN_1446dd670((undefined8 *)(param_1 + 0x1c0),iVar1);
        if (iVar1 != 0) {
          memcpy(*(void **)(param_1 + 0x1c0),pvVar2,(longlong)iVar1 * 2);
        }
      }
    }
    *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(param_2 + 0x1d0);
  }
  if (*(int *)(param_1 + 0x1dc) != *(int *)(param_2 + 0x1dc)) {
    *(undefined1 *)(param_1 + 0x1d8) = *(undefined1 *)(param_2 + 0x1d8);
    *(undefined4 *)(param_1 + 0x1dc) = *(undefined4 *)(param_2 + 0x1dc);
  }
  if (*(int *)(param_1 + 0x1e8) != *(int *)(param_2 + 0x1e8)) {
    *(undefined8 *)(param_1 + 0x1e0) = *(undefined8 *)(param_2 + 0x1e0);
    *(undefined4 *)(param_1 + 0x1e8) = *(undefined4 *)(param_2 + 0x1e8);
  }
  if (*(int *)(param_1 + 0x1f8) != *(int *)(param_2 + 0x1f8)) {
    *(undefined8 *)(param_1 + 0x1f0) = *(undefined8 *)(param_2 + 0x1f0);
    *(undefined4 *)(param_1 + 0x1f8) = *(undefined4 *)(param_2 + 0x1f8);
  }
  plVar3 = *(longlong **)(param_2 + 0x200);
  plVar4 = *(longlong **)(param_1 + 0x200);
  if (plVar4 != plVar3) {
    *(longlong **)(param_1 + 0x200) = plVar3;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(param_2 + 0x208);
  if (*(int *)(param_1 + 0x218) != *(int *)(param_2 + 0x218)) {
    *(undefined8 *)(param_1 + 0x210) = *(undefined8 *)(param_2 + 0x210);
    *(undefined4 *)(param_1 + 0x218) = *(undefined4 *)(param_2 + 0x218);
  }
  if (*(int *)(param_1 + 0x228) != *(int *)(param_2 + 0x228)) {
    *(undefined8 *)(param_1 + 0x220) = *(undefined8 *)(param_2 + 0x220);
    *(undefined4 *)(param_1 + 0x228) = *(undefined4 *)(param_2 + 0x228);
  }
  if (*(int *)(param_1 + 0x238) != *(int *)(param_2 + 0x238)) {
    *(undefined8 *)(param_1 + 0x230) = *(undefined8 *)(param_2 + 0x230);
    *(undefined4 *)(param_1 + 0x238) = *(undefined4 *)(param_2 + 0x238);
  }
  if (*(int *)(param_1 + 0x244) != *(int *)(param_2 + 0x244)) {
    *(undefined4 *)(param_1 + 0x240) = *(undefined4 *)(param_2 + 0x240);
    *(undefined4 *)(param_1 + 0x244) = *(undefined4 *)(param_2 + 0x244);
  }
  FUN_140ae1244(param_1 + 0x248,param_2 + 0x248);
  FUN_140ae1244(param_1 + 0x260,param_2 + 0x260);
  FUN_140ae1244(param_1 + 0x278,param_2 + 0x278);
  FUN_140ae1244(param_1 + 0x290,param_2 + 0x290);
  FUN_148c99496(param_1 + 0x2a8,param_2 + 0x2a8);
  if (*(int *)(param_1 + 700) != *(int *)(param_2 + 700)) {
    *(undefined4 *)(param_1 + 0x2b8) = *(undefined4 *)(param_2 + 0x2b8);
    *(undefined4 *)(param_1 + 700) = *(undefined4 *)(param_2 + 700);
  }
  if (param_1 == param_2) {
    *(undefined1 *)(param_1 + 0x2d0) = *(undefined1 *)(param_2 + 0x2d0);
    if (*(int *)(param_1 + 0x2e8) == *(int *)(param_2 + 0x2e8)) goto LAB_14408bc9a;
  }
  else {
    iVar1 = *(int *)(param_2 + 0x2c8);
    pvVar2 = *(void **)(param_2 + 0x2c0);
    *(int *)(param_1 + 0x2c8) = iVar1;
    if (iVar1 == 0 && *(int *)(param_1 + 0x2cc) == 0) {
      *(undefined4 *)(param_1 + 0x2cc) = 0;
    }
    else {
      FUN_1446dd670((undefined8 *)(param_1 + 0x2c0),iVar1);
      if (iVar1 != 0) {
        memcpy(*(void **)(param_1 + 0x2c0),pvVar2,(longlong)iVar1 * 2);
      }
    }
    *(undefined1 *)(param_1 + 0x2d0) = *(undefined1 *)(param_2 + 0x2d0);
    if (*(int *)(param_1 + 0x2e8) == *(int *)(param_2 + 0x2e8)) goto LAB_14408bc9a;
    iVar1 = *(int *)(param_2 + 0x2e0);
    pvVar2 = *(void **)(param_2 + 0x2d8);
    *(int *)(param_1 + 0x2e0) = iVar1;
    if (iVar1 == 0 && *(int *)(param_1 + 0x2e4) == 0) {
      *(undefined4 *)(param_1 + 0x2e4) = 0;
    }
    else {
      FUN_1446dd670((undefined8 *)(param_1 + 0x2d8),iVar1);
      if (iVar1 != 0) {
        memcpy(*(void **)(param_1 + 0x2d8),pvVar2,(longlong)iVar1 * 2);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x2e8) = *(undefined4 *)(param_2 + 0x2e8);
LAB_14408bc9a:
  *(undefined4 *)(param_1 + 0x2f0) = *(undefined4 *)(param_2 + 0x2f0);
  return param_1;
}



// FUNCTION 14408bd36 FUN_14408bd36 body=975 status=ok
// SIG undefined FUN_14408bd36(void)

undefined1 * FUN_14408bd36(undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = 0;
  iVar1 = *(int *)(param_2 + 0x18);
  pvVar2 = *(void **)(param_2 + 0x10);
  *(int *)(param_1 + 0x18) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x10,iVar1,0);
    memcpy(*(void **)(param_1 + 0x10),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  iVar1 = *(int *)(param_2 + 0x28);
  pvVar2 = *(void **)(param_2 + 0x20);
  *(int *)(param_1 + 0x28) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x20,iVar1,0);
    memcpy(*(void **)(param_1 + 0x20),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  iVar1 = *(int *)(param_2 + 0x38);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  *(int *)(param_1 + 0x38) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  else {
    FUN_140b856de(param_1 + 0x30,iVar1,0);
    FUN_140b8566a(*(undefined8 *)(param_1 + 0x30),uVar3,iVar1);
  }
  param_1[0x40] = param_2[0x40];
  *(undefined8 *)(param_1 + 0x48) = 0;
  iVar1 = *(int *)(param_2 + 0x50);
  pvVar2 = *(void **)(param_2 + 0x48);
  *(int *)(param_1 + 0x50) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x48,iVar1,0);
    memcpy(*(void **)(param_1 + 0x48),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  iVar1 = *(int *)(param_2 + 0x60);
  pvVar2 = *(void **)(param_2 + 0x58);
  *(int *)(param_1 + 0x60) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 100) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x58,iVar1,0);
    memcpy(*(void **)(param_1 + 0x58),pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0x68] = param_2[0x68];
  *(undefined8 *)(param_1 + 0x70) = 0;
  iVar1 = *(int *)(param_2 + 0x78);
  pvVar2 = *(void **)(param_2 + 0x70);
  *(int *)(param_1 + 0x78) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x70,iVar1,0);
    memcpy(*(void **)(param_1 + 0x70),pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0x80] = param_2[0x80];
  *(undefined8 *)(param_1 + 0x88) = 0;
  iVar1 = *(int *)(param_2 + 0x90);
  pvVar2 = *(void **)(param_2 + 0x88);
  *(int *)(param_1 + 0x90) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x94) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x88,iVar1,0);
    memcpy(*(void **)(param_1 + 0x88),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 0x98) = 0;
  iVar1 = *(int *)(param_2 + 0xa0);
  pvVar2 = *(void **)(param_2 + 0x98);
  *(int *)(param_1 + 0xa0) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xa4) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x98,iVar1,0);
    memcpy(*(void **)(param_1 + 0x98),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 0xa8) = 0;
  iVar1 = *(int *)(param_2 + 0xb0);
  pvVar2 = *(void **)(param_2 + 0xa8);
  *(int *)(param_1 + 0xb0) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xb4) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xa8,iVar1,0);
    memcpy(*(void **)(param_1 + 0xa8),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  uVar4 = *(undefined4 *)(param_2 + 0xbc);
  uVar5 = *(undefined4 *)(param_2 + 0xc0);
  uVar6 = *(undefined4 *)(param_2 + 0xc4);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0xb8);
  *(undefined4 *)(param_1 + 0xbc) = uVar4;
  *(undefined4 *)(param_1 + 0xc0) = uVar5;
  *(undefined4 *)(param_1 + 0xc4) = uVar6;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  iVar1 = *(int *)(param_2 + 0xd8);
  pvVar2 = *(void **)(param_2 + 0xd0);
  *(int *)(param_1 + 0xd8) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xdc) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xd0,iVar1,0);
    memcpy(*(void **)(param_1 + 0xd0),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 0xe0) = 0;
  iVar1 = *(int *)(param_2 + 0xe8);
  pvVar2 = *(void **)(param_2 + 0xe0);
  *(int *)(param_1 + 0xe8) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xec) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xe0,iVar1,0);
    memcpy(*(void **)(param_1 + 0xe0),pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0xf0] = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  param_1[0xf0] = param_2[0xf0];
  *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_2 + 0xf4);
  return param_1;
}



// FUNCTION 14408c122 FUN_14408c122 body=57 status=ok
// SIG undefined FUN_14408c122(void)

void FUN_14408c122(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbc8d0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbc8d0 = FUN_140002ddd(FUN_14660b4b8,uVar1,L"OakWidgetData_WorldIcons");
  }
  return;
}



// FUNCTION 14408c16a FUN_14408c16a body=57 status=ok
// SIG undefined FUN_14408c16a(void)

void FUN_14408c16a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbc8e8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbc8e8 = FUN_140002ddd(FUN_14660b518,uVar1,L"OakWidgetData_XPBar");
  }
  return;
}



// FUNCTION 14408c1be FUN_14408c1be body=57 status=ok
// SIG undefined FUN_14408c1be(void)

void FUN_14408c1be(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbca30 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbca30 = FUN_140002ddd(FUN_14660b669,uVar1,L"OakVaultTrackableActorDef");
  }
  return;
}



// FUNCTION 14408c25a FUN_14408c25a body=5591 status=ok
// SIG undefined FUN_14408c25a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14408c25a(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined1 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  _DAT_14cbbc234 = 0;
  FUN_14052b5e0(&DAT_14cbbc230,"character",0);
  _DAT_14cbbc240 = 0;
  FUN_14052b5e0(&DAT_14cbbc23c,"profile",0);
  local_60 = "state_rem";
  local_58 = 9;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbbc248 = (ulonglong)uVar2;
  local_60 = "state_add";
  local_58 = 9;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbbc250 = (ulonglong)uVar2;
  local_60 = "state_remove_primary";
  local_58 = 0x14;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbbc258 = (ulonglong)uVar2;
  local_60 = "entry_sets";
  local_58 = 10;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbbc260 = (ulonglong)uVar2;
  local_60 = "entries";
  local_58 = 7;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbbc268 = (ulonglong)uVar2;
  local_60 = "menu_title";
  local_58 = 10;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbbc270 = (ulonglong)uVar2;
  local_60 = "actions";
  local_58 = 7;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbbc278 = (ulonglong)uVar2;
  local_60 = "loc_text";
  local_58 = 8;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbbc280 = (ulonglong)uVar2;
  local_60 = "desc_text";
  local_58 = 9;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbbc288 = (ulonglong)uVar2;
  local_60 = "style";
  local_58 = 5;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbbc290 = (ulonglong)uVar2;
  local_60 = "horizontal";
  local_58 = 10;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbbc298 = (ulonglong)uVar2;
  local_60 = "entry_set_default";
  local_58 = 0x11;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbbc2a0 = (ulonglong)uVar2;
  local_60 = "required_nexus_layer";
  local_58 = 0x14;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbbc2a8 = (ulonglong)uVar2;
  local_60 = "tooltip_key";
  local_58 = 0xb;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbbc2b0 = (ulonglong)uVar2;
  local_60 = "set_push";
  local_58 = 8;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbbc2b8 = (ulonglong)uVar2;
  local_60 = "exit_game";
  local_58 = 9;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbbc2c0 = (ulonglong)uVar2;
  local_60 = "back";
  local_58 = 4;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbbc2c8 = (ulonglong)uVar2;
  local_60 = "back_actions";
  local_58 = 0xc;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbbc2d0 = (ulonglong)uVar2;
  _DAT_14cbbc2d8 = 0;
  uRam000000014cbbc2e0 = 0;
  _DAT_14cbbc2e8 = 0;
  DAT_14cbbc2f0 = 0;
  uRam000000014cbbc2f8 = 0;
  FUN_1446ddda2(&DAT_14cbbc2d8,&DAT_14b81bd00,0);
  atexit((_func_5014 *)&LAB_14408ad94);
  local_60 = "sub_entries";
  local_58 = 0xb;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbbc300 = (ulonglong)uVar2;
  local_60 = "AssetRegistry";
  local_58 = 0xd;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbbc308 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbbc310,"weapon_dps_estimate");
  atexit((_func_5014 *)&LAB_14408ada5);
  local_60 = "vending_buy";
  local_58 = 0xb;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbbc320 = (ulonglong)uVar2;
  local_60 = "vending_sell";
  local_58 = 0xc;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbbc328 = (ulonglong)uVar2;
  local_60 = "vending_buy_back";
  local_58 = 0x10;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbbc330 = (ulonglong)uVar2;
  local_60 = "entry_ident";
  local_58 = 0xb;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbbc338 = (ulonglong)uVar2;
  local_60 = "subentry_ident";
  local_58 = 0xe;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbbc340 = (ulonglong)uVar2;
  local_60 = "set_purchase_filter";
  local_58 = 0x13;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbbc348 = (ulonglong)uVar2;
  local_60 = "set_menu_title";
  local_58 = 0xe;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbbc350 = (ulonglong)uVar2;
  local_60 = "set_menu_state";
  local_58 = 0xe;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbbc358 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbbc360,&DAT_14b8ce6a8);
  atexit((_func_5014 *)&LAB_14408adb6);
  FUN_1400b22c2(&DAT_14cbbc370,&DAT_14b8ce6ac);
  atexit((_func_5014 *)&LAB_14408adc7);
  FUN_1400b22c2(&DAT_14cbbc380,"Buyback");
  atexit((_func_5014 *)&LAB_14408add8);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8ce750);
  FUN_1446f470e(&DAT_14cbbc3a8,L"Party",1);
  FUN_1446f470e(&DAT_14cbbc3b0,&DAT_149e063b2,1);
  FUN_1446f470e(&DAT_14cbbc3b8,L"Join",1);
  FUN_1446f470e(&DAT_14cbbc3c0,L"Invite",1);
  FUN_1446f470e(&DAT_14cbbc3c8,L"ViewProfile",1);
  FUN_1446f470e(&DAT_14cbbc3d0,L"AddFriend",1);
  FUN_1446f470e(&DAT_14cbbc3d8,L"Mute",1);
  FUN_1446f470e(&DAT_14cbbc3e0,L"Unmute",1);
  FUN_1446f470e(&DAT_14cbbc3e8,L"Promote",1);
  FUN_1446f470e(&DAT_14cbbc3f0,L"Kick",1);
  FUN_1446f470e(&DAT_14cbbc3f8,L"AddShiftFriend",1);
  FUN_1446f470e(&DAT_14cbbc400,L"RemoveShiftFriend",1);
  FUN_1446f470e(&DAT_14cbbc408,L"AddFavorite",1);
  FUN_1446f470e(&DAT_14cbbc410,L"RemoveFavorite",1);
  FUN_1446f470e(&DAT_14cbbc418,L"BlockShiftPlayer",1);
  FUN_1446f470e(&DAT_14cbbc420,L"UnblockShiftPlayer",1);
  FUN_1446f470e(&DAT_14cbbc428,L"ReportShiftPlayer",1);
  FUN_1446f470e(&DAT_14cbbc430,L"InviteFriend",1);
  FUN_1446f470e(&DAT_14cbbc438,L"InviteRecentFriends",1);
  FUN_1446f470e(&DAT_14cbbc440,L"JoinRecentFriendsHost",1);
  FUN_1446f470e(&DAT_14cbbc448,L"ViewProfiles",1);
  FUN_1446f470e(&DAT_14cbbc450,L"TeleportToPlayer",1);
  FUN_1446f470e(&DAT_14cbbc458,L"Cancel");
  _DAT_14cbbc460 = 0;
  uRam000000014cbbc468 = 0;
  _DAT_14cbbc470 = 0;
  DAT_14cbbc478 = 0;
  uRam000000014cbbc480 = 0;
  FUN_1446ddda2(&DAT_14cbbc460,"Dialog_Join");
  atexit((_func_5014 *)&LAB_14408ade9);
  _DAT_14cbbc488 = 0;
  uRam000000014cbbc490 = 0;
  _DAT_14cbbc498 = 0;
  DAT_14cbbc4a0 = 0;
  uRam000000014cbbc4a8 = 0;
  FUN_1446ddda2(&DAT_14cbbc488,"Dialog_Invite");
  atexit((_func_5014 *)&LAB_14408adfa);
  _DAT_14cbbc4b0 = 0;
  uRam000000014cbbc4b8 = 0;
  _DAT_14cbbc4c0 = 0;
  DAT_14cbbc4c8 = 0;
  uRam000000014cbbc4d0 = 0;
  FUN_1446ddda2(&DAT_14cbbc4b0,"Dialog_ViewProfile");
  atexit((_func_5014 *)&LAB_14408ae0b);
  _DAT_14cbbc4d8 = 0;
  uRam000000014cbbc4e0 = 0;
  _DAT_14cbbc4e8 = 0;
  DAT_14cbbc4f0 = 0;
  uRam000000014cbbc4f8 = 0;
  FUN_1446ddda2(&DAT_14cbbc4d8,"Dialog_AddFriend");
  atexit((_func_5014 *)&LAB_14408ae1c);
  _DAT_14cbbc500 = 0;
  uRam000000014cbbc508 = 0;
  _DAT_14cbbc510 = 0;
  DAT_14cbbc518 = 0;
  uRam000000014cbbc520 = 0;
  FUN_1446ddda2(&DAT_14cbbc500,"Dialog_Mute");
  atexit((_func_5014 *)&LAB_14408ae2d);
  _DAT_14cbbc528 = 0;
  uRam000000014cbbc530 = 0;
  _DAT_14cbbc538 = 0;
  DAT_14cbbc540 = 0;
  uRam000000014cbbc548 = 0;
  FUN_1446ddda2(&DAT_14cbbc528,"Dialog_Unmute");
  atexit((_func_5014 *)&LAB_14408ae3e);
  _DAT_14cbbc550 = 0;
  uRam000000014cbbc558 = 0;
  _DAT_14cbbc560 = 0;
  DAT_14cbbc568 = 0;
  uRam000000014cbbc570 = 0;
  FUN_1446ddda2(&DAT_14cbbc550,"Dialog_Promote");
  atexit((_func_5014 *)&LAB_14408ae4f);
  _DAT_14cbbc578 = 0;
  uRam000000014cbbc580 = 0;
  _DAT_14cbbc588 = 0;
  DAT_14cbbc590 = 0;
  uRam000000014cbbc598 = 0;
  FUN_1446ddda2(&DAT_14cbbc578,"Dialog_Kick",0);
  atexit((_func_5014 *)&LAB_14408ae60);
  _DAT_14cbbc5a0 = 0;
  uRam000000014cbbc5a8 = 0;
  _DAT_14cbbc5b0 = 0;
  DAT_14cbbc5b8 = 0;
  uRam000000014cbbc5c0 = 0;
  FUN_1446ddda2(&DAT_14cbbc5a0,"Dialog_AddShiftFriend",0);
  atexit((_func_5014 *)&LAB_14408ae71);
  _DAT_14cbbc5c8 = 0;
  uRam000000014cbbc5d0 = 0;
  _DAT_14cbbc5d8 = 0;
  DAT_14cbbc5e0 = 0;
  uRam000000014cbbc5e8 = 0;
  FUN_1446ddda2(&DAT_14cbbc5c8,"Dialog_RemoveShiftFriend",0);
  atexit((_func_5014 *)&LAB_14408ae82);
  _DAT_14cbbc5f0 = 0;
  uRam000000014cbbc5f8 = 0;
  _DAT_14cbbc600 = 0;
  DAT_14cbbc608 = 0;
  uRam000000014cbbc610 = 0;
  FUN_1446ddda2(&DAT_14cbbc5f0,"Dialog_AddFavorite",0);
  atexit((_func_5014 *)&LAB_14408ae93);
  _DAT_14cbbc618 = 0;
  uRam000000014cbbc620 = 0;
  _DAT_14cbbc628 = 0;
  DAT_14cbbc630 = 0;
  uRam000000014cbbc638 = 0;
  FUN_1446ddda2(&DAT_14cbbc618,"Dialog_RemoveFavorite",0);
  atexit((_func_5014 *)&LAB_14408aea4);
  _DAT_14cbbc640 = 0;
  uRam000000014cbbc648 = 0;
  _DAT_14cbbc650 = 0;
  DAT_14cbbc658 = 0;
  uRam000000014cbbc660 = 0;
  FUN_1446ddda2(&DAT_14cbbc640,"Dialog_BlockShiftPlayer",0);
  atexit((_func_5014 *)&LAB_14408aeb5);
  _DAT_14cbbc668 = 0;
  uRam000000014cbbc670 = 0;
  _DAT_14cbbc678 = 0;
  DAT_14cbbc680 = 0;
  uRam000000014cbbc688 = 0;
  FUN_1446ddda2(&DAT_14cbbc668,"Dialog_UnblockShiftPlayer",0);
  atexit((_func_5014 *)&LAB_14408aec6);
  _DAT_14cbbc690 = 0;
  uRam000000014cbbc698 = 0;
  _DAT_14cbbc6a0 = 0;
  DAT_14cbbc6a8 = 0;
  uRam000000014cbbc6b0 = 0;
  FUN_1446ddda2(&DAT_14cbbc690,"Dialog_ReportShiftPlayer",0);
  atexit((_func_5014 *)&LAB_14408aed7);
  _DAT_14cbbc6b8 = 0;
  uRam000000014cbbc6c0 = 0;
  _DAT_14cbbc6c8 = 0;
  DAT_14cbbc6d0 = 0;
  uRam000000014cbbc6d8 = 0;
  FUN_1446ddda2(&DAT_14cbbc6b8,"Dialog_InviteFriend",0);
  atexit((_func_5014 *)&LAB_14408aee8);
  _DAT_14cbbc6e0 = 0;
  uRam000000014cbbc6e8 = 0;
  _DAT_14cbbc6f0 = 0;
  DAT_14cbbc6f8 = 0;
  uRam000000014cbbc700 = 0;
  FUN_1446ddda2(&DAT_14cbbc6e0,"Dialog_InviteRecentFriends",0);
  atexit((_func_5014 *)&LAB_14408aef9);
  _DAT_14cbbc708 = 0;
  uRam000000014cbbc710 = 0;
  _DAT_14cbbc718 = 0;
  DAT_14cbbc720 = 0;
  uRam000000014cbbc728 = 0;
  FUN_1446ddda2(&DAT_14cbbc708,"Dialog_JoinRecentFriendsHost",0);
  atexit((_func_5014 *)&LAB_14408af0a);
  _DAT_14cbbc730 = 0;
  uRam000000014cbbc738 = 0;
  _DAT_14cbbc740 = 0;
  DAT_14cbbc748 = 0;
  uRam000000014cbbc750 = 0;
  FUN_1446ddda2(&DAT_14cbbc730,"Dialog_ViewProfiles",0);
  atexit((_func_5014 *)&LAB_14408af1b);
  _DAT_14cbbc758 = 0;
  uRam000000014cbbc760 = 0;
  _DAT_14cbbc768 = 0;
  DAT_14cbbc770 = 0;
  uRam000000014cbbc778 = 0;
  FUN_1446ddda2(&DAT_14cbbc758,"Dialog_TeleportToPlayer");
  atexit((_func_5014 *)&LAB_14408af2c);
  _DAT_14cbbc780 = 0;
  uRam000000014cbbc788 = 0;
  _DAT_14cbbc790 = 0;
  DAT_14cbbc798 = 0;
  uRam000000014cbbc7a0 = 0;
  FUN_1446ddda2(&DAT_14cbbc780,"Dialog_Cancel");
  atexit((_func_5014 *)&LAB_14408af3d);
  FUN_1400b22c2(&DAT_14cbbc7a8,"GoOnlineText");
  atexit((_func_5014 *)&LAB_14408af4e);
  FUN_1400b22c2(&DAT_14cbbc7b8,"GoingOnlineTextOnePeriod");
  atexit((_func_5014 *)&LAB_14408af5f);
  FUN_1400b22c2(&DAT_14cbbc7c8,"GoingOnlineTextTwoPeriods");
  atexit((_func_5014 *)&LAB_14408af70);
  FUN_1400b22c2(&DAT_14cbbc7d8,"GoingOnlineTextThreePeriods");
  atexit((_func_5014 *)&LAB_14408af81);
  FUN_1400b22c2(&DAT_14cbbc7e8,"tint_siren");
  atexit((_func_5014 *)&LAB_14408af92);
  FUN_1400b22c2(&DAT_14cbbc7f8);
  atexit((_func_5014 *)&LAB_14408afa3);
  uStack_68 = 0;
  ppuStack_70 = (undefined **)0x0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8ce8a0);
  uStack_68 = 0;
  ppuStack_70 = (undefined **)0x0;
  local_78 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8cf8a0);
  local_60 = "wheel_axis";
  local_58 = 10;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60);
  _DAT_14cbbc850 = (ulonglong)uVar2;
  uStack_68 = 0;
  ppuStack_70 = (undefined **)0x0;
  local_78 = 3;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8d02f0);
  DAT_14cbbc8a0 = 0;
  _DAT_14cbbc8a8 = 0;
  atexit(FUN_14408afb4);
  uStack_68 = 0;
  ppuStack_70 = (undefined **)0x0;
  local_78 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8d0e40);
  uStack_68 = 0;
  ppuStack_70 = (undefined **)0x0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8d1380);
  FUN_1400b22c2(&local_60,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_60,&DAT_14cbbc8f8);
  if (cVar1 == '\0') {
    _DAT_14cbbc8f8 = 0;
    uRam000000014cbbc900 = 0;
  }
  if (local_60 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_60 = "TrackerObjects";
  local_58 = 0xe;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbbc908 = (ulonglong)uVar2;
  local_60 = "bone";
  local_58 = 4;
  local_54 = 0;
  FUN_14001a6c0(&local_60,1);
  _DAT_14cbbc910 = 0x47efffffe0000000;
  _DAT_14cbbc918 = 0x47efffffe0000000;
  _DAT_14cbbc920 = 0x47efffffe0000000;
  _DAT_14cbbc928 = 0x47efffffe0000000;
  _DAT_14cbbc930 = 0x47efffffe0000000;
  _DAT_14cbbc938 = 0x47efffffe0000000;
  _DAT_14cbbc940 = 0x47efffffe0000000;
  _DAT_14cbbc948 = 0x47efffffe0000000;
  _DAT_14cbbc954 = 0;
  FUN_14052b5e0(&DAT_14cbbc950,"PlayerAwareness",0);
  _DAT_14cbbc960 = "PlayerAwareness";
  local_60 = "basic";
  local_58 = 5;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbbc968 = (ulonglong)uVar2;
  local_60 = "challenge";
  local_58 = 9;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbbc970 = (ulonglong)uVar2;
  local_60 = "online";
  local_58 = 6;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbbc978 = (ulonglong)uVar2;
  local_60 = "social";
  local_58 = 6;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbbc980 = (ulonglong)uVar2;
  local_60 = "alert";
  local_58 = 5;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbbc988 = (ulonglong)uVar2;
  local_60 = "photo_mode";
  local_58 = 10;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbbc990 = (ulonglong)uVar2;
  local_60 = "generic_task";
  local_58 = 0xc;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbbc998 = (ulonglong)uVar2;
  local_60 = "mission";
  local_58 = 7;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbbc9a0 = (ulonglong)uVar2;
  local_60 = "mail";
  local_58 = 4;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbbc9a8 = (ulonglong)uVar2;
  local_60 = "respawn";
  local_58 = 7;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbbc9b0 = (ulonglong)uVar2;
  local_60 = "tutorial";
  local_58 = 8;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbbc9b8 = (ulonglong)uVar2;
  local_60 = "special_notification";
  local_58 = 0x14;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbbc9c0 = (ulonglong)uVar2;
  local_60 = "generic_notification";
  local_58 = 0x14;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbbc9c8 = (ulonglong)uVar2;
  local_60 = "vault_card";
  local_58 = 10;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbbc9d0 = (ulonglong)uVar2;
  local_60 = "ONLINE_MESSAGE";
  local_58 = 0xe;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbbc9d8 = (ulonglong)uVar2;
  local_60 = "INGAME_MESSAGE";
  local_58 = 0xe;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbbc9e0 = (ulonglong)uVar2;
  local_60 = "NOTIFICATION_MESSAGE";
  local_58 = 0x14;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbbc9e8 = (ulonglong)uVar2;
  local_60 = "MENU_TUTORIAL_MESSAGE";
  local_58 = 0x15;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbbc9f0 = (ulonglong)uVar2;
  local_60 = "collectible";
  local_58 = 0xb;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbbc9f8 = (ulonglong)uVar2;
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b8d29b0,1,0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8d2a60);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8d2d70);
  local_60 = "Use";
  local_58 = 3;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbbca58 = (ulonglong)uVar2;
  local_60 = "Sight";
  local_58 = 5;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbbca60 = (ulonglong)uVar2;
  local_60 = "TargetLock";
  local_58 = 10;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbbca68 = (ulonglong)uVar2;
  FUN_1446f470e(&DAT_14cbbcb18,L"ClientLockWeaponActions",1);
  FUN_1446f470e(&DAT_14cbbcb28,L"ClientSetActiveWeaponTypeIndex",1);
  FUN_1446f470e(&DAT_14cbbcb38,L"ClientStopWeaponActions",1);
  FUN_1446f470e(&DAT_14cbbcb48,L"ClientUnlockWeaponActions",1);
  FUN_1446f470e(&DAT_14cbbcb58,L"ClientVehicleImpact",1);
  FUN_1446f470e(&DAT_14cbbcb98,L"ServerCancelFreeBoost",1);
  FUN_1446f470e(&DAT_14cbbcba8,L"ServerEnterVehicle",1);
  FUN_1446f470e(&DAT_14cbbcbb8,L"ServerExitVehicle",1);
  FUN_1446f470e(&DAT_14cbbcbc8,L"ServerLockWeaponActions",1);
  FUN_1446f470e(&DAT_14cbbcbd8,L"ServerRecomputeBoostCost",1);
  FUN_1446f470e(&DAT_14cbbcbe8,L"ServerSetCurrentWeapon",1);
  FUN_1446f470e(&DAT_14cbbcbf8,L"ServerSetZoomState",1);
  FUN_1446f470e(&DAT_14cbbcc08,L"ServerStopWeaponActions",1);
  FUN_1446f470e(&DAT_14cbbcc18,L"ServerUnlockWeaponActions",1);
  uStack_68 = 1;
  ppuStack_70 = &PTR_FUN_14b8d5f70;
  local_78 = 5;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b8d6060,1,&PTR_FUN_14b8d5f90);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b8d6a70,1,&PTR_FUN_14b8d6a40);
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14408d834 FUN_14408d834 body=55 status=ok
// SIG undefined FUN_14408d834(void)

void FUN_14408d834(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbcd38 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbcd38 = FUN_14171c317(FUN_14660c87e,uVar1,L"EVehicleBlockingRule");
  }
  return;
}



// FUNCTION 14408d86b FUN_14408d86b body=55 status=ok
// SIG undefined FUN_14408d86b(void)

void FUN_14408d86b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbcd68 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbcd68 = FUN_14171c317(FUN_14660c8e6,uVar1,L"EGetOakVehicleResult");
  }
  return;
}



// FUNCTION 14408d8a2 FUN_14408d8a2 body=55 status=ok
// SIG undefined FUN_14408d8a2(void)

void FUN_14408d8a2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbce48 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbce48 = FUN_14171c317(FUN_14660cd78,uVar1,L"EOakVehicleRelativeContext");
  }
  return;
}



// FUNCTION 14408d8e2 FUN_14408d8e2 body=55 status=ok
// SIG undefined FUN_14408d8e2(void)

void FUN_14408d8e2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbcf38 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbcf38 = FUN_14171c317(FUN_14660d288,uVar1,L"EVehicleExitWeaponBringUpTime");
  }
  return;
}



// FUNCTION 14408d93c FUN_14408d93c body=57 status=ok
// SIG undefined FUN_14408d93c(void)

void FUN_14408d93c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbcd08 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbcd08 = FUN_140002ddd(FUN_14660c788,uVar1,L"OakVehicleAudioProvider");
  }
  return;
}



// FUNCTION 14408d984 FUN_14408d984 body=156 status=ok
// SIG undefined FUN_14408d984(void)

void FUN_14408d984(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 2,0,0x138);
  param_2[1] = 0;
  param_2[9] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *(undefined8 *)((longlong)param_2 + 0x54) = 0xffffffff00000080;
  param_2[0xd] = 0;
  param_2[0x13] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  *(undefined8 *)((longlong)param_2 + 0xa4) = 0xffffffff00000080;
  param_2[0x17] = 0;
  param_2[0x23] = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  *(undefined8 *)((longlong)param_2 + 0x124) = 0xffffffff00000080;
  param_2[0x27] = 0;
  *param_2 = &PTR_FUN_14b8e1900;
  return;
}



// FUNCTION 14408da20 FUN_14408da20 body=57 status=ok
// SIG undefined FUN_14408da20(void)

void FUN_14408da20(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbcd20 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbcd20 = FUN_140002ddd(FUN_14660c81f,uVar1,L"OakVehicleAudioProviderDef");
  }
  return;
}



// FUNCTION 14408da68 FUN_14408da68 body=367 status=ok
// SIG undefined FUN_14408da68(void)

void FUN_14408da68(undefined8 param_1,void *param_2)

{
  undefined8 uVar1;
  
  memset(param_2,0,0x158);
  *(undefined8 *)((longlong)param_2 + 0x20) = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)((longlong)param_2 + 0x10) = DAT_14c8464e0;
  *(undefined8 *)((longlong)param_2 + 0x18) = uVar1;
  *(undefined8 *)((longlong)param_2 + 0x42) = 0;
  *(undefined8 *)((longlong)param_2 + 0x4a) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x54) = 0x4120000041f00000;
  *(undefined1 *)((longlong)param_2 + 0x5c) = 1;
  *(undefined4 *)((longlong)param_2 + 0x60) = 0x428c0000;
  *(undefined8 *)((longlong)param_2 + 0x78) = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)((longlong)param_2 + 0x68) = DAT_14c8464e0;
  *(undefined8 *)((longlong)param_2 + 0x70) = uVar1;
  *(undefined8 *)((longlong)param_2 + 0x80) = 0x4120000041200000;
  *(undefined8 *)((longlong)param_2 + 0x88) = 0x44bb80003f800000;
  *(undefined4 *)((longlong)param_2 + 0x90) = 0x453b8000;
  *(undefined2 *)((longlong)param_2 + 0x94) = 0x101;
  *(undefined8 *)((longlong)param_2 + 0x98) = 0x447a000040000000;
  *(undefined8 *)((longlong)param_2 + 0xa0) = 0x41a000003f800000;
  *(undefined4 *)((longlong)param_2 + 0xa8) = 0x41a00000;
  *(undefined1 *)((longlong)param_2 + 0xac) = 1;
  *(undefined8 *)((longlong)param_2 + 0xb0) = 0x42480000437a0000;
  *(undefined8 *)((longlong)param_2 + 0xbc) = 0x3e19999a3f000000;
  *(undefined8 *)((longlong)param_2 + 0xd8) = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)((longlong)param_2 + 200) = DAT_14c8464e0;
  *(undefined8 *)((longlong)param_2 + 0xd0) = uVar1;
  *(undefined1 *)((longlong)param_2 + 0xe1) = 0;
  *(undefined8 *)((longlong)param_2 + 0x110) = 0;
  *(undefined8 *)((longlong)param_2 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xf8) = 0;
  *(undefined8 *)((longlong)param_2 + 0x11c) = 0xffffffff00000080;
  *(undefined8 *)((longlong)param_2 + 0x130) = 0;
  *(undefined8 *)((longlong)param_2 + 0x140) = 0;
  *(undefined8 *)((longlong)param_2 + 0x148) = 0;
  *(undefined4 *)((longlong)param_2 + 0x150) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_2 + 0x154) = 0x404;
  *(undefined **)((longlong)param_2 + 0xe8) = &DAT_14a176f00;
  *(undefined8 *)((longlong)param_2 + 0x178) = 0;
  *(undefined8 *)((longlong)param_2 + 0x168) = 0;
  *(undefined8 *)((longlong)param_2 + 0x170) = 0;
  *(undefined8 *)((longlong)param_2 + 0x158) = 0;
  *(undefined8 *)((longlong)param_2 + 0x160) = 0;
  *(undefined8 *)((longlong)param_2 + 0x180) = 0xbff0000000000000;
  return;
}



// FUNCTION 14408dc78 FUN_14408dc78 body=100 status=ok
// SIG undefined FUN_14408dc78(void)

void FUN_14408dc78(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xa8);
  *(undefined8 *)((longlong)param_2 + 0x5c) = 0xffffffff00000080;
  *(undefined8 *)((longlong)param_2 + 0x70) = 0;
  *(undefined8 *)((longlong)param_2 + 0x80) = 0;
  *(undefined8 *)((longlong)param_2 + 0x88) = 0;
  *(undefined8 *)((longlong)param_2 + 0x90) = 0;
  *(undefined8 *)((longlong)param_2 + 0x98) = 0;
  *(undefined4 *)((longlong)param_2 + 0xa0) = 0xf00000d0;
  *(undefined8 *)((longlong)param_2 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_2 + 200) = 0;
  return;
}



// FUNCTION 14408dcf6 FUN_14408dcf6 body=294 status=ok
// SIG undefined FUN_14408dcf6(void)

void FUN_14408dcf6(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[10] = 0;
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14b4677f0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_2[3] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_2 + 4) = 0;
  *param_2 = &PTR_FUN_14b8e2600;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  *(undefined8 *)((longlong)param_2 + 0x44) = 0;
  *(undefined8 *)((longlong)param_2 + 0x4c) = 0;
  return;
}



// FUNCTION 14408de28 FUN_14408de28 body=57 status=ok
// SIG undefined FUN_14408de28(void)

void FUN_14408de28(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbcea8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbcea8 = FUN_140002ddd(FUN_14660cfa3,uVar1,L"GbxUIDisplayDataDef_Vehicle");
  }
  return;
}



// FUNCTION 14408df0a FUN_14408df0a body=57 status=ok
// SIG undefined FUN_14408df0a(void)

void FUN_14408df0a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbcf08 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbcf08 = FUN_140002ddd(FUN_14660d190,uVar1,L"OakVehicleDef");
  }
  return;
}



// FUNCTION 14408df86 FUN_14408df86 body=508 status=ok
// SIG undefined FUN_14408df86(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14408df86(void)

{
  uint uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined **local_50;
  undefined8 uStack_48;
  char *local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = "AssetRegistry";
  local_38 = 0xd;
  local_34 = 0;
  uVar1 = FUN_14001a6c0(&local_40,1);
  _DAT_14cbbccf8 = (ulonglong)uVar1;
  local_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8d9bc0);
  local_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8d9c80);
  uStack_48 = 1;
  local_50 = &PTR_FUN_14b8d9f60;
  local_58 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b8d9f80,1,0);
  uStack_48 = 1;
  local_50 = &PTR_FUN_14b8daa60;
  local_58 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b8daa80,1,0);
  local_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 3;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b8dbb80,1,&PTR_FUN_14b8dbb00);
  local_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8dbe40);
  uStack_48 = 1;
  local_50 = &PTR_FUN_14b8dc030;
  local_58 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8dc050);
  local_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 7;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8dfc90);
  local_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8dfe50);
  uStack_48 = 1;
  local_50 = &PTR_FUN_14b8e1530;
  local_58 = 2;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b8e15a0,1,&PTR_FUN_14b8e1550);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14408e184 FUN_14408e184 body=55 status=ok
// SIG undefined FUN_14408e184(void)

void FUN_14408e184(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbd090 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbd090 = FUN_14171c317(FUN_14660db8c,uVar1,L"EOakVehicleAttributeValueType");
  }
  return;
}



// FUNCTION 14408e1cc FUN_14408e1cc body=55 status=ok
// SIG undefined FUN_14408e1cc(void)

void FUN_14408e1cc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbd218 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbd218 = FUN_14171c317(FUN_14660e121,uVar1,L"EVendingMachineEventType");
  }
  return;
}



// FUNCTION 14408e203 FUN_14408e203 body=55 status=ok
// SIG undefined FUN_14408e203(void)

void FUN_14408e203(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbd2f8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbd2f8 = FUN_14171c317(FUN_14660e626,uVar1,L"EOakVendorRefillType");
  }
  return;
}



// FUNCTION 14408e23a FUN_14408e23a body=55 status=ok
// SIG undefined FUN_14408e23a(void)

void FUN_14408e23a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbd310 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbd310 = FUN_14171c317(FUN_14660e655,uVar1,L"EOakVendorUsabilityType");
  }
  return;
}



// FUNCTION 14408e271 FUN_14408e271 body=55 status=ok
// SIG undefined FUN_14408e271(void)

void FUN_14408e271(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbd328 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbd328 = FUN_14171c317(FUN_14660e684,uVar1,L"EOakVendorUsabilityFunction");
  }
  return;
}



// FUNCTION 14408e2a8 FUN_14408e2a8 body=55 status=ok
// SIG undefined FUN_14408e2a8(void)

void FUN_14408e2a8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbd340 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbd340 = FUN_14171c317(FUN_14660e6b5,uVar1,L"EOakVendorDisplayOption");
  }
  return;
}



// FUNCTION 14408e2df FUN_14408e2df body=55 status=ok
// SIG undefined FUN_14408e2df(void)

void FUN_14408e2df(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbd388 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbd388 = FUN_14171c317(FUN_14660e7da,uVar1,L"EOakVendingMachineAttributeType");
  }
  return;
}



// FUNCTION 14408e31e FUN_14408e31e body=48 status=ok
// SIG undefined FUN_14408e31e(void)

longlong FUN_14408e31e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_1458d6654(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14408e34e FUN_14408e34e body=48 status=ok
// SIG undefined FUN_14408e34e(void)

longlong FUN_14408e34e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_1458d6654(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14408e37e FUN_14408e37e body=48 status=ok
// SIG undefined FUN_14408e37e(void)

longlong FUN_14408e37e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_140ef64b4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14408e3ae FUN_14408e3ae body=48 status=ok
// SIG undefined FUN_14408e3ae(void)

longlong FUN_14408e3ae(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_140ef64b4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14408e3de FUN_14408e3de body=48 status=ok
// SIG undefined FUN_14408e3de(void)

longlong FUN_14408e3de(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x520;
  FUN_140ef64b4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14408e416 FUN_14408e416 body=48 status=ok
// SIG undefined FUN_14408e416(void)

longlong FUN_14408e416(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x528;
  FUN_140ef64b4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14408e486 FUN_14408e486 body=48 status=ok
// SIG undefined FUN_14408e486(void)

longlong FUN_14408e486(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xdf8;
  FUN_140ef64b4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14408e4be FUN_14408e4be body=48 status=ok
// SIG undefined FUN_14408e4be(void)

longlong FUN_14408e4be(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xe00;
  FUN_140ef64b4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14408e4fa FUN_14408e4fa body=48 status=ok
// SIG undefined FUN_14408e4fa(void)

longlong FUN_14408e4fa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_1414fcdee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14408e52a FUN_14408e52a body=48 status=ok
// SIG undefined FUN_14408e52a(void)

longlong FUN_14408e52a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_1414fcdee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14408e572 FUN_14408e572 body=48 status=ok
// SIG undefined FUN_14408e572(void)

longlong FUN_14408e572(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3f8;
  FUN_1414fcdee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14408e5aa FUN_14408e5aa body=48 status=ok
// SIG undefined FUN_14408e5aa(void)

longlong FUN_14408e5aa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x400;
  FUN_1414fcdee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14408e5f2 FUN_14408e5f2 body=48 status=ok
// SIG undefined FUN_14408e5f2(void)

longlong FUN_14408e5f2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x448;
  FUN_1414fcdee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14408e622 FUN_14408e622 body=48 status=ok
// SIG undefined FUN_14408e622(void)

longlong FUN_14408e622(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x450;
  FUN_1414fcdee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14408e662 FUN_14408e662 body=48 status=ok
// SIG undefined FUN_14408e662(void)

longlong FUN_14408e662(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a58;
  FUN_1414fcdee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14408e692 FUN_14408e692 body=48 status=ok
// SIG undefined FUN_14408e692(void)

longlong FUN_14408e692(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a90;
  FUN_1414fcdee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14408e6d2 FUN_14408e6d2 body=48 status=ok
// SIG undefined FUN_14408e6d2(void)

longlong FUN_14408e6d2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ac8;
  FUN_1414fcdee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14408e71a FUN_14408e71a body=48 status=ok
// SIG undefined FUN_14408e71a(void)

longlong FUN_14408e71a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_140ef64b4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14408e74a FUN_14408e74a body=48 status=ok
// SIG undefined FUN_14408e74a(void)

longlong FUN_14408e74a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_140ef64b4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14408e77a FUN_14408e77a body=48 status=ok
// SIG undefined FUN_14408e77a(void)

longlong FUN_14408e77a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x520;
  FUN_140ef64b4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14408e7aa FUN_14408e7aa body=48 status=ok
// SIG undefined FUN_14408e7aa(void)

longlong FUN_14408e7aa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x528;
  FUN_140ef64b4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14408e7da FUN_14408e7da body=48 status=ok
// SIG undefined FUN_14408e7da(void)

longlong FUN_14408e7da(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xdf8;
  FUN_140ef64b4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14408e80a FUN_14408e80a body=48 status=ok
// SIG undefined FUN_14408e80a(void)

longlong FUN_14408e80a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xe00;
  FUN_140ef64b4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14408e848 FUN_14408e848 body=57 status=ok
// SIG undefined FUN_14408e848(void)

void FUN_14408e848(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbcfb8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbcfb8 = FUN_140002ddd(FUN_14660d76c,uVar1,L"OakVehicleStandInDef");
  }
  return;
}



// FUNCTION 14408eaec FUN_14408eaec body=57 status=ok
// SIG undefined FUN_14408eaec(void)

void FUN_14408eaec(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbd370 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbd370 = FUN_140002ddd(FUN_14660e77a,uVar1,L"OakVendingMachineTypeDef");
  }
  return;
}



// FUNCTION 14408eb42 FUN_14408eb42 body=57 status=ok
// SIG undefined FUN_14408eb42(void)

void FUN_14408eb42(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbd418 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbd418 = FUN_140002ddd(FUN_14660e9d7,uVar1,L"OakWaypointRuntimeParams");
  }
  return;
}



// FUNCTION 14408eb8a FUN_14408eb8a body=232 status=ok
// SIG undefined FUN_14408eb8a(void)

void FUN_14408eb8a(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 2,0,0x148);
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0x3ea8f5c3;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0xf00000d0;
  *(undefined4 *)(param_2 + 0xb) = 0x3f800000;
  *(undefined4 *)(param_2 + 0xc) = 0x3ea8f5c3;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  *(undefined4 *)(param_2 + 0x13) = 0xf00000d0;
  *(undefined4 *)(param_2 + 0x15) = 0x3f800000;
  *(undefined4 *)(param_2 + 0x16) = 0x3ea8f5c3;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  *(undefined4 *)(param_2 + 0x1d) = 0xf00000d0;
  *(undefined4 *)(param_2 + 0x1f) = 0x3f800000;
  param_2[0x20] = 0x3e4ccccd3f333333;
  *(undefined4 *)(param_2 + 0x21) = 0x3ecccccd;
  *(undefined1 *)((longlong)param_2 + 0x10c) = 1;
  *(undefined4 *)(param_2 + 0x23) = 0xaaad1010;
  param_2[0x28] = 0;
  param_2[0x29] = 0;
  param_2[0x26] = 0;
  param_2[0x27] = 0;
  param_2[0x24] = 0;
  param_2[0x25] = 0;
  *param_2 = &PTR_FUN_14b8eeb90;
  *(undefined4 *)((longlong)param_2 + 0x154) = 0;
  return;
}



// FUNCTION 14408ec7e FUN_14408ec7e body=57 status=ok
// SIG undefined FUN_14408ec7e(void)

void FUN_14408ec7e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbd450 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbd450 = FUN_140002ddd(FUN_14660eae1,uVar1,L"OakWeaponClassData");
  }
  return;
}



// FUNCTION 14408ecb7 FUN_14408ecb7 body=77 status=ok
// SIG undefined FUN_14408ecb7(void)

void FUN_14408ecb7(longlong param_1,int param_2)

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



// FUNCTION 14408ed04 FUN_14408ed04 body=1264 status=ok
// SIG undefined FUN_14408ed04(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14408ed04(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbbcf90 = (ulonglong)uVar2;
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b8e47d0,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8e4ab0);
  local_50 = "Use";
  local_48 = 3;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbbcfc8 = (ulonglong)uVar2;
  local_50 = "Sight";
  local_48 = 5;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbbcfd0 = (ulonglong)uVar2;
  local_50 = "TargetLock";
  local_48 = 10;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbbcfd8 = (ulonglong)uVar2;
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b8e4b70,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 6;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8e5e50);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b8e6210;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8e6230);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b8e7240,1,0);
  _DAT_14cbbd0d0 = 0x47efffffe0000000;
  _DAT_14cbbd0d8 = 0x47efffffe0000000;
  _DAT_14cbbd0e0 = 0x47efffffe0000000;
  _DAT_14cbbd0e8 = 0x47efffffe0000000;
  _DAT_14cbbd0f0 = 0x47efffffe0000000;
  _DAT_14cbbd0f8 = 0x47efffffe0000000;
  _DAT_14cbbd100 = 0x47efffffe0000000;
  _DAT_14cbbd108 = 0x47efffffe0000000;
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_50,&DAT_14cbbd110);
  if (cVar1 == '\0') {
    _DAT_14cbbd110 = 0;
    uRam000000014cbbd118 = 0;
  }
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_50 = "bone";
  local_48 = 4;
  local_44 = 0;
  FUN_14001a6c0(&local_50,1);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b8e7430,1,&PTR_FUN_14b8e7400);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b8e74e0,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 3;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8e7910);
  local_50 = "Cash";
  local_48 = 4;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbbd1b0 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbbd1b8,"weapon_dps_estimate");
  atexit((_func_5014 *)&LAB_14408e1bb);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b8e93d0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b8e9440,1,&PTR_FUN_14b8e93f0);
  ppuStack_60 = &PTR_FUN_14b8ea170;
  local_68 = 2;
  local_58 = 4;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8ea1f0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b8ea4a0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8ea4c0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b8eaa60,1,0);
  FUN_1446f470e(&DAT_14cbbd3d8,L"UNSET",1);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b8eae20,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b8eb1b0,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8eb260);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b8eb720,1,0);
  FUN_1446f470e(&DAT_14cbbd460,L"ClientReduceWear",1);
  FUN_1446f470e(&DAT_14cbbd488,L"ServerSetCommandRingTarget",1);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b8ec470,1,&PTR_FUN_14b8ec440);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14408f1f8 FUN_14408f1f8 body=55 status=ok
// SIG undefined FUN_14408f1f8(void)

void FUN_14408f1f8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbd5b0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbd5b0 = FUN_14171c317(FUN_14660f53a,uVar1,L"EOakWeaponPoseFields");
  }
  return;
}



// FUNCTION 14408f22f FUN_14408f22f body=55 status=ok
// SIG undefined FUN_14408f22f(void)

void FUN_14408f22f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbd630 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbd630 = FUN_14171c317(FUN_14660f76f,uVar1,L"EThrownWeaponActionTypes");
  }
  return;
}



// FUNCTION 14408f266 FUN_14408f266 body=55 status=ok
// SIG undefined FUN_14408f266(void)

void FUN_14408f266(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbd6a8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbd6a8 = FUN_14171c317(FUN_14660f998,uVar1,L"EWeaponType");
  }
  return;
}



// FUNCTION 14408f29d FUN_14408f29d body=55 status=ok
// SIG undefined FUN_14408f29d(void)

void FUN_14408f29d(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbd6c0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbd6c0 = FUN_14171c317(FUN_14660f9c9,uVar1,L"EWeaponPartValue");
  }
  return;
}



// FUNCTION 14408f2d4 FUN_14408f2d4 body=55 status=ok
// SIG undefined FUN_14408f2d4(void)

void FUN_14408f2d4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbd6f0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbd6f0 = FUN_14171c317(FUN_14660fa34,uVar1,L"EInitialImpulseState");
  }
  return;
}



// FUNCTION 14408f30b FUN_14408f30b body=55 status=ok
// SIG undefined FUN_14408f30b(void)

void FUN_14408f30b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbd708 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbd708 = FUN_14171c317(FUN_14660fa63,uVar1,L"EBoostFailureReason");
  }
  return;
}



// FUNCTION 14408f342 FUN_14408f342 body=55 status=ok
// SIG undefined FUN_14408f342(void)

void FUN_14408f342(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbd720 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbd720 = FUN_14171c317(FUN_14660fa92,uVar1,L"EVehicleJumpPadPhase");
  }
  return;
}



// FUNCTION 14408fcca FUN_14408fcca body=223 status=ok
// SIG undefined FUN_14408fcca(void)

void FUN_14408fcca(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0x1b0);
  *(undefined8 *)((longlong)param_2 + 0xec) = 0xffffffff00000080;
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  param_2[0x24] = 0;
  param_2[0x25] = 0;
  *(undefined8 *)((longlong)param_2 + 0x12a) = 0;
  *(undefined8 *)((longlong)param_2 + 0x132) = 0;
  *(undefined8 *)((longlong)param_2 + 0x13c) = 0;
  *(undefined2 *)((longlong)param_2 + 0x144) = 0;
  param_2[0x29] = 0;
  *(undefined1 *)(param_2 + 0x2a) = 0;
  *(undefined4 *)((longlong)param_2 + 0x154) = 0;
  *(undefined4 *)((longlong)param_2 + 0x157) = 0;
  *(undefined4 *)((longlong)param_2 + 0x15c) = 3;
  *(undefined4 *)((longlong)param_2 + 0x164) = 7;
  param_2[0x2e] = 0;
  param_2[0x2f] = 0;
  *(undefined8 *)((longlong)param_2 + 0x17a) = 0;
  *(undefined8 *)((longlong)param_2 + 0x182) = 0;
  *(undefined8 *)((longlong)param_2 + 0x19a) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1a2) = 0;
  param_2[0x32] = 0;
  param_2[0x33] = 0;
  *(undefined2 *)((longlong)param_2 + 0x1b4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1ac) = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  *param_2 = &PTR_FUN_14b8f9960;
  param_2[0x3f] = 0;
  param_2[0x40] = 0;
  param_2[0x3d] = 0;
  param_2[0x3e] = 0;
  param_2[0x3b] = 0;
  param_2[0x3c] = 0;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  return;
}



// FUNCTION 14408fdb6 FUN_14408fdb6 body=57 status=ok
// SIG undefined FUN_14408fdb6(void)

void FUN_14408fdb6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbd4f0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbd4f0 = FUN_140002ddd(FUN_14660f0f5,uVar1,L"OakWeaponAudioAspect");
  }
  return;
}



// FUNCTION 14408fdfe FUN_14408fdfe body=57 status=ok
// SIG undefined FUN_14408fdfe(void)

void FUN_14408fdfe(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbd508 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbd508 = FUN_140002ddd(FUN_14660f154,uVar1,L"OakWeaponAudioProvider");
  }
  return;
}



// FUNCTION 14408fe8c FUN_14408fe8c body=343 status=ok
// SIG undefined FUN_14408fe8c(void)

void FUN_14408fe8c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  memset(param_2 + 2,0,0x490);
  param_2[1] = 0;
  param_2[9] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *(undefined8 *)((longlong)param_2 + 0x54) = 0xffffffff00000080;
  param_2[0xd] = 0;
  param_2[0x13] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  *(undefined8 *)((longlong)param_2 + 0xa4) = 0xffffffff00000080;
  param_2[0x17] = 0;
  param_2[0x23] = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  *(undefined8 *)((longlong)param_2 + 0x124) = 0xffffffff00000080;
  param_2[0x27] = 0;
  *param_2 = &PTR_FUN_14b492450;
  param_2[0x6e] = 0;
  param_2[0x6f] = 0;
  param_2[0x6c] = 0;
  param_2[0x6d] = 0;
  *(undefined4 *)(param_2 + 0x70) = 0;
  memset(param_2 + 0x29,0,0x214);
  *(undefined4 *)((longlong)param_2 + 900) = 0x40a00000;
  param_2[0x71] = 0;
  param_2[0x72] = 0;
  param_2[0x73] = 0;
  param_2[0x74] = 0;
  *(undefined8 *)((longlong)param_2 + 0x3a5) = 0;
  param_2[0x76] = 0;
  param_2[0x77] = 0;
  param_2[0x78] = 0xffffffffffffffff;
  *(undefined4 *)(param_2 + 0x79) = 2;
  uVar1 = DAT_14c8463d8;
  param_2[0x7a] = DAT_14c8463d0;
  param_2[0x7b] = uVar1;
  uVar1 = DAT_14c8463e8;
  param_2[0x7c] = DAT_14c8463e0;
  param_2[0x7d] = uVar1;
  param_2[0x7e] = 0;
  param_2[0x7f] = 0;
  param_2[0x80] = 0;
  *param_2 = &PTR_FUN_14b8f9ff0;
  memset(param_2 + 0x82,0,0x88);
  return;
}



// FUNCTION 14408fff0 FUN_14408fff0 body=57 status=ok
// SIG undefined FUN_14408fff0(void)

void FUN_14408fff0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbd550 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbd550 = FUN_140002ddd(FUN_14660f317,uVar1,L"OakWeaponAudioProviderDef");
  }
  return;
}



// FUNCTION 144090070 FUN_144090070 body=55 status=ok
// SIG undefined FUN_144090070(void)

void FUN_144090070(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 0x18);
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
                    /* WARNING: Could not recover jumptable at 0x0001440900a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 144090134 FUN_144090134 body=8334 status=ok
// SIG undefined FUN_144090134(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144090134(void)

{
  void *_Src;
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  char *local_70;
  undefined4 local_68;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  lVar2 = 0;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8f1830);
  local_70 = "AssetRegistry";
  local_68 = 0xd;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbd4c8 = (ulonglong)uVar1;
  local_70 = "Use";
  local_68 = 3;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbd4d0 = (ulonglong)uVar1;
  local_70 = "Sight";
  local_68 = 5;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbd4d8 = (ulonglong)uVar1;
  local_70 = "TargetLock";
  local_68 = 10;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbd4e0 = (ulonglong)uVar1;
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8f1b50);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8f1c00);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 3;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8f2130);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 3;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8f2860);
  uStack_78 = 1;
  ppuStack_80 = &PTR_FUN_14b8f4500;
  local_88 = 2;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b8f4570,2,&PTR_FUN_14b8f4520);
  uStack_78 = 1;
  ppuStack_80 = &PTR_FUN_14b8f5700;
  local_88 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b8f5720,1,0);
  do {
    FUN_14098d3d2(*(undefined8 *)((longlong)&PTR_FUN_14b8f5980 + lVar2),L"/Script/OakGame",
                  *(undefined8 *)((longlong)&PTR_u_EWeaponType_14b8f5988 + lVar2),
                  *(undefined8 *)((longlong)&PTR_DAT_14b8f5990 + lVar2));
    lVar2 = lVar2 + 0x20;
  } while (lVar2 != 0x40);
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b8f5cf0,1,0);
  uStack_78 = 3;
  ppuStack_80 = &PTR_FUN_14b8f76e0;
  local_88 = 3;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b8f77c0,1,&PTR_FUN_14b8f7740);
  FUN_1400b22c2(&DAT_14cbbd800,"weapon_dps_estimate");
  atexit((_func_5014 *)&LAB_14408f379);
  _DAT_14cbbd814 = 0;
  FUN_14052b5e0(&DAT_14cbbd810,"character",0);
  _DAT_14cbbd820 = 0;
  FUN_14052b5e0(&DAT_14cbbd81c,"profile",0);
  local_70 = "state_rem";
  local_68 = 9;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbd828 = (ulonglong)uVar1;
  local_70 = "state_add";
  local_68 = 9;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbd830 = (ulonglong)uVar1;
  local_70 = "state_remove_primary";
  local_68 = 0x14;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbd838 = (ulonglong)uVar1;
  local_70 = "entry_sets";
  local_68 = 10;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbd840 = (ulonglong)uVar1;
  local_70 = "entries";
  local_68 = 7;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbd848 = (ulonglong)uVar1;
  local_70 = "menu_title";
  local_68 = 10;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbd850 = (ulonglong)uVar1;
  local_70 = "actions";
  local_68 = 7;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbd858 = (ulonglong)uVar1;
  local_70 = "loc_text";
  local_68 = 8;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbd860 = (ulonglong)uVar1;
  local_70 = "desc_text";
  local_68 = 9;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbd868 = (ulonglong)uVar1;
  local_70 = "style";
  local_68 = 5;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbd870 = (ulonglong)uVar1;
  local_70 = "horizontal";
  local_68 = 10;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbd878 = (ulonglong)uVar1;
  local_70 = "entry_set_default";
  local_68 = 0x11;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbd880 = (ulonglong)uVar1;
  local_70 = "required_nexus_layer";
  local_68 = 0x14;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbd888 = (ulonglong)uVar1;
  local_70 = "tooltip_key";
  local_68 = 0xb;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbd890 = (ulonglong)uVar1;
  local_70 = "set_push";
  local_68 = 8;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbd898 = (ulonglong)uVar1;
  local_70 = "exit_game";
  local_68 = 9;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbd8a0 = (ulonglong)uVar1;
  local_70 = "back";
  local_68 = 4;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbd8a8 = (ulonglong)uVar1;
  local_70 = "back_actions";
  local_68 = 0xc;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbd8b0 = (ulonglong)uVar1;
  _DAT_14cbbd8b8 = 0;
  uRam000000014cbbd8c0 = 0;
  _DAT_14cbbd8c8 = 0;
  DAT_14cbbd8d0 = 0;
  uRam000000014cbbd8d8 = 0;
  FUN_1446ddda2(&DAT_14cbbd8b8,&DAT_14b81bd00,0);
  atexit((_func_5014 *)&LAB_14408f38a);
  local_70 = "num_rows_override";
  local_68 = 0x11;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbd8e0 = (ulonglong)uVar1;
  local_70 = "show_capacity_text";
  local_68 = 0x12;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbd8e8 = (ulonglong)uVar1;
  local_70 = "num_columns_override";
  local_68 = 0x14;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbd8f0 = (ulonglong)uVar1;
  local_70 = "sort_list_config";
  local_68 = 0x10;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbd8f8 = (ulonglong)uVar1;
  local_70 = "filter_list_config";
  local_68 = 0x12;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbd900 = (ulonglong)uVar1;
  local_70 = "default_sort_ident";
  local_68 = 0x12;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbd908 = (ulonglong)uVar1;
  local_70 = "enable_filter";
  local_68 = 0xd;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbd910 = (ulonglong)uVar1;
  local_70 = "enable_sort";
  local_68 = 0xb;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbd918 = (ulonglong)uVar1;
  FUN_1400b22c2(&DAT_14cbbd920,"backpack_item_grid");
  atexit((_func_5014 *)&LAB_14408f39b);
  FUN_1400b22c2(&DAT_14cbbd930,"bpack_sort_asc_dsc");
  atexit((_func_5014 *)&LAB_14408f3ac);
  FUN_1400b22c2(&DAT_14cbbd940,"sort-dropdown");
  atexit((_func_5014 *)&LAB_14408f3bd);
  FUN_1400b22c2(&DAT_14cbbd950,"filter-dropdown");
  atexit((_func_5014 *)&LAB_14408f3ce);
  local_70 = "ITEM_CARD";
  local_68 = 9;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbd960 = (ulonglong)uVar1;
  local_70 = "ITEM_CARD_COMPARE";
  local_68 = 0x11;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbd968 = (ulonglong)uVar1;
  local_70 = "MENU_FULL_BACKPACK";
  local_68 = 0x12;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbd970 = (ulonglong)uVar1;
  local_70 = "MENU_POPUP_BACKPACK";
  local_68 = 0x13;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbd978 = (ulonglong)uVar1;
  local_70 = "MENU_PLAYER_STATS";
  local_68 = 0x11;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbd980 = (ulonglong)uVar1;
  FUN_1400b22c2(&DAT_14cbbd988,"filter-dropdown");
  atexit((_func_5014 *)&LAB_14408f3df);
  FUN_1400b22c2(&DAT_14cbbd998,"equip_slot_dropdown");
  atexit((_func_5014 *)&LAB_14408f3f0);
  FUN_1400b22c2(&DAT_14cbbd9a8,"mark-dropdown");
  atexit((_func_5014 *)&LAB_14408f401);
  FUN_1400b22c2(&DAT_14cbbd9b8,"item-dropdown");
  atexit((_func_5014 *)&LAB_14408f412);
  FUN_1400b22c2(&DAT_14cbbd9c8,"sort-dropdown");
  atexit((_func_5014 *)&LAB_14408f423);
  FUN_1400b22c2(&DAT_14cbbd9d8,&DAT_149e3cc88);
  atexit((_func_5014 *)&LAB_14408f434);
  FUN_1400b22c2(&DAT_14cbbd9e8,"Popup");
  atexit((_func_5014 *)&LAB_14408f445);
  FUN_1400b22c2(&DAT_14cbbd9f8,"Fullsize");
  atexit((_func_5014 *)&LAB_14408f456);
  FUN_1400b22c2(&DAT_14cbbda08,"EchoLogs");
  atexit((_func_5014 *)&LAB_14408f467);
  FUN_1400b22c2(&DAT_14cbbda18,"PlayerStats");
  atexit((_func_5014 *)&LAB_14408f478);
  FUN_1400b22c2(&DAT_14cbbda28,"RewardCenter");
  atexit((_func_5014 *)&LAB_14408f489);
  FUN_140056680(&DAT_14cbbda38,L"reset");
  atexit((_func_5014 *)&LAB_14408f49a);
  local_70 = "add_on_activate";
  local_68 = 0xf;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbda48 = (ulonglong)uVar1;
  local_70 = "remove_on_deactivate";
  local_68 = 0x14;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbda50 = (ulonglong)uVar1;
  local_70 = "filter_selected";
  local_68 = 0xf;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbda58 = (ulonglong)uVar1;
  local_70 = "hide_messages_on_deactivate";
  local_68 = 0x1b;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbda60 = (ulonglong)uVar1;
  local_70 = "drop_action_supported";
  local_68 = 0x15;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbda68 = (ulonglong)uVar1;
  local_70 = "equip_action_supported";
  local_68 = 0x16;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbda70 = (ulonglong)uVar1;
  local_70 = "unequip_action_supported";
  local_68 = 0x18;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbda78 = (ulonglong)uVar1;
  local_70 = "compare_action_supported";
  local_68 = 0x18;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbda80 = (ulonglong)uVar1;
  local_70 = "mark_item_action_supported";
  local_68 = 0x1a;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbda88 = (ulonglong)uVar1;
  local_70 = "mark_multiple_items_supported";
  local_68 = 0x1d;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbda90 = (ulonglong)uVar1;
  local_70 = "remote_inventory_action_supported";
  local_68 = 0x21;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbda98 = (ulonglong)uVar1;
  local_70 = "unequip_message_ident";
  local_68 = 0x15;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbdaa0 = (ulonglong)uVar1;
  local_70 = "equip_message_ident";
  local_68 = 0x13;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbdaa8 = (ulonglong)uVar1;
  local_70 = "swap_message_ident";
  local_68 = 0x12;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbdab0 = (ulonglong)uVar1;
  local_70 = "drop_message_ident";
  local_68 = 0x12;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbdab8 = (ulonglong)uVar1;
  local_70 = "cant_equip_message_ident";
  local_68 = 0x18;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbdac0 = (ulonglong)uVar1;
  local_70 = "insufficient_space_error_ident";
  local_68 = 0x1e;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbdac8 = (ulonglong)uVar1;
  local_70 = "multiple_item_deposit_ident";
  local_68 = 0x1b;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbdad0 = (ulonglong)uVar1;
  local_70 = "deposit_message_ident";
  local_68 = 0x15;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbdad8 = (ulonglong)uVar1;
  local_70 = "incomplete_deposit_ident";
  local_68 = 0x18;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbdae0 = (ulonglong)uVar1;
  local_70 = "backpack_class_html";
  local_68 = 0x13;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbdae8 = (ulonglong)uVar1;
  local_70 = "standin_config";
  local_68 = 0xe;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbdaf0 = (ulonglong)uVar1;
  local_70 = "player_standin_tag";
  local_68 = 0x12;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbdaf8 = (ulonglong)uVar1;
  local_70 = "echo_bot_standin_tag";
  local_68 = 0x14;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbdb00 = (ulonglong)uVar1;
  local_70 = "sortable_numeric_stats";
  local_68 = 0x16;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbdb08 = (ulonglong)uVar1;
  local_70 = "escape_hold_supported";
  local_68 = 0x15;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbdb10 = (ulonglong)uVar1;
  local_70 = "max_visible_items";
  local_68 = 0x11;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbdb18 = (ulonglong)uVar1;
  FUN_140056680(&DAT_14cbbdb20,L"action_ui_drop_item");
  atexit((_func_5014 *)&LAB_14408f4ab);
  FUN_140056680(&DAT_14cbbdb30,L"action_ui_equip_item");
  atexit((_func_5014 *)&LAB_14408f4bc);
  FUN_140056680(&DAT_14cbbdb40,L"action_ui_unequip_item");
  atexit((_func_5014 *)&LAB_14408f4cd);
  FUN_140056680(&DAT_14cbbdb50,L"action_ui_compare_item");
  atexit((_func_5014 *)&LAB_14408f4de);
  FUN_140056680(&DAT_14cbbdb60,L"action_ui_cursor_click");
  atexit((_func_5014 *)&LAB_14408f4ef);
  FUN_140056680(&DAT_14cbbdb70,L"action_ui_set_item_flag");
  atexit((_func_5014 *)&LAB_14408f500);
  FUN_140056680(&DAT_14cbbdb80,L"action_ui_remote_bank_deposit");
  atexit((_func_5014 *)&LAB_14408f511);
  FUN_140056680(&DAT_14cbbdb90,L"action_ui_mark_all_filtered");
  atexit((_func_5014 *)&LAB_14408f522);
  FUN_140056680(&DAT_14cbbdba0,L"action_ui_menu_escape");
  atexit((_func_5014 *)&LAB_14408f533);
  FUN_140056680(&DAT_14cbbdbb0,L"action_ui_show_player_stats");
  atexit((_func_5014 *)&LAB_14408f544);
  FUN_140056680(&DAT_14cbbdbc0,L"action_ui_mark_hovered_as_junk");
  atexit((_func_5014 *)&LAB_14408f555);
  FUN_140056680(&DAT_14cbbdbd0,L"action_ui_open_reward_center");
  atexit((_func_5014 *)&LAB_14408f566);
  FUN_140056680(&DAT_14cbbdbe0,L"action_ui_select_slot_1");
  atexit((_func_5014 *)&LAB_14408f577);
  FUN_140056680(&DAT_14cbbdbf0,L"action_ui_select_slot_2");
  atexit((_func_5014 *)&LAB_14408f588);
  FUN_140056680(&DAT_14cbbdc00,L"action_ui_select_slot_3");
  atexit((_func_5014 *)&LAB_14408f599);
  FUN_140056680(&DAT_14cbbdc10,L"action_ui_select_slot_4");
  atexit((_func_5014 *)&LAB_14408f5aa);
  FUN_140056680(&DAT_14cbbdc20,L"action_ui_copy_focused_item_serial_number");
  atexit((_func_5014 *)&LAB_14408f5bb);
  FUN_140056680(&DAT_14cbbdc30,L"action_ui_menu_escape_hold");
  atexit((_func_5014 *)&LAB_14408f5cc);
  FUN_140056680(&DAT_14cbbdc40,L"action_ui_inspect_item");
  atexit((_func_5014 *)&LAB_14408f5dd);
  FUN_140056680(&DAT_14cbbdc50,L"action_ui_flip_item_card");
  atexit((_func_5014 *)&LAB_14408f5ee);
  FUN_140056680(&DAT_14cbbdc60,L"action_ui_open_all_rewards");
  atexit((_func_5014 *)&LAB_14408f5ff);
  FUN_140056680(&DAT_14cbbdc70,L"SelectText");
  atexit((_func_5014 *)&LAB_14408f610);
  FUN_140056680(&DAT_14cbbdc80,L"CompareHint");
  atexit((_func_5014 *)&LAB_14408f621);
  FUN_140056680(&DAT_14cbbdc90,L"EquipHint");
  atexit((_func_5014 *)&LAB_14408f632);
  FUN_140056680(&DAT_14cbbdca0,L"UnequipHint");
  atexit((_func_5014 *)&LAB_14408f643);
  FUN_140056680(&DAT_14cbbdcb0,L"DropHint");
  atexit((_func_5014 *)&LAB_14408f654);
  FUN_140056680(&DAT_14cbbdcc0,L"SetItemFlagHint");
  atexit((_func_5014 *)&LAB_14408f665);
  FUN_140056680(&DAT_14cbbdcd0,L"ToggleJunkHint");
  atexit((_func_5014 *)&LAB_14408f676);
  FUN_140056680(&DAT_14cbbdce0,L"MarkAllFilteredHint");
  atexit((_func_5014 *)&LAB_14408f687);
  FUN_140056680(&DAT_14cbbdcf0,L"PlayerStatsHint");
  atexit((_func_5014 *)&LAB_14408f698);
  FUN_140056680(&DAT_14cbbdd00,L"SwapWeaponsHint");
  atexit((_func_5014 *)&LAB_14408f6a9);
  FUN_140056680(&DAT_14cbbdd10,L"BackText");
  atexit((_func_5014 *)&LAB_14408f6ba);
  FUN_140056680(&DAT_14cbbdd20,L"SellHint");
  atexit((_func_5014 *)&LAB_14408f6cb);
  FUN_140056680(&DAT_14cbbdd30,L"BuyHint");
  atexit((_func_5014 *)&LAB_14408f6dc);
  FUN_140056680(&DAT_14cbbdd40,L"ExitMenuHint");
  atexit((_func_5014 *)&LAB_14408f6ed);
  FUN_140056680(&DAT_14cbbdd50,L"OpenAllRewardsHint");
  atexit((_func_5014 *)&LAB_14408f6fe);
  FUN_1400b22c2(&DAT_14cbbdd60,"trash");
  atexit((_func_5014 *)&LAB_14408f70f);
  FUN_1400b22c2(&DAT_14cbbdd70,"favorite");
  atexit((_func_5014 *)&LAB_14408f720);
  FUN_1400b22c2(&DAT_14cbbdd80,"bankdeposit");
  atexit((_func_5014 *)&LAB_14408f731);
  FUN_1400b22c2(&DAT_14cbbdd90,"taggroup1");
  atexit((_func_5014 *)&LAB_14408f742);
  FUN_1400b22c2(&DAT_14cbbdda0,"taggroup2");
  atexit((_func_5014 *)&LAB_14408f753);
  FUN_1400b22c2(&DAT_14cbbddb0,"taggroup3");
  atexit((_func_5014 *)&LAB_14408f764);
  FUN_1400b22c2(&DAT_14cbbddc0,"taggroup4");
  atexit((_func_5014 *)&LAB_14408f775);
  local_70 = "trash";
  local_68 = 5;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbddd0 = (ulonglong)uVar1;
  local_70 = "favorite";
  local_68 = 8;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbddd8 = (ulonglong)uVar1;
  local_70 = "bankdeposit";
  local_68 = 0xb;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbdde0 = (ulonglong)uVar1;
  local_70 = "taggroup1";
  local_68 = 9;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbdde8 = (ulonglong)uVar1;
  local_70 = "taggroup2";
  local_68 = 9;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbddf0 = (ulonglong)uVar1;
  local_70 = "taggroup3";
  local_68 = 9;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbddf8 = (ulonglong)uVar1;
  local_70 = "taggroup4";
  local_68 = 9;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbde00 = (ulonglong)uVar1;
  FUN_1400b22c2(&DAT_14cbbde08,"OpenBackpack");
  atexit((_func_5014 *)&LAB_14408f786);
  FUN_1400b22c2(&DAT_14cbbde18,"CloseBackpack");
  atexit((_func_5014 *)&LAB_14408f797);
  FUN_1400b22c2(&DAT_14cbbde28,"OpenPlayerStats");
  atexit((_func_5014 *)&LAB_14408f7a8);
  FUN_1400b22c2(&DAT_14cbbde38,"ClosePlayerStats");
  atexit((_func_5014 *)&LAB_14408f7b9);
  FUN_1400b22c2(&DAT_14cbbde48,"OpenRewardCenter");
  atexit((_func_5014 *)&LAB_14408f7ca);
  FUN_1400b22c2(&DAT_14cbbde58,"CloseRewardCenter");
  atexit((_func_5014 *)&LAB_14408f7db);
  FUN_1400b22c2(&DAT_14cbbde68,"CompareStart");
  atexit((_func_5014 *)&LAB_14408f7ec);
  FUN_1400b22c2(&DAT_14cbbde78,"CompareStop");
  atexit((_func_5014 *)&LAB_14408f7fd);
  FUN_1400b22c2(&DAT_14cbbde88,"UnequipItem");
  atexit((_func_5014 *)&LAB_14408f80e);
  FUN_1400b22c2(&DAT_14cbbde98,"EquipItem");
  atexit((_func_5014 *)&LAB_14408f81f);
  FUN_1400b22c2(&DAT_14cbbdea8,"DropItem");
  atexit((_func_5014 *)&LAB_14408f830);
  FUN_1400b22c2(&DAT_14cbbdeb8,"MarkItem");
  atexit((_func_5014 *)&LAB_14408f841);
  FUN_1400b22c2(&DAT_14cbbdec8,"Error");
  atexit((_func_5014 *)&LAB_14408f852);
  FUN_1400b22c2(&DAT_14cbbded8,"ElementUnfocused");
  atexit((_func_5014 *)&LAB_14408f863);
  FUN_1400b22c2(&DAT_14cbbdee8,"ElementFocused");
  atexit((_func_5014 *)&LAB_14408f874);
  FUN_1400b22c2(&DAT_14cbbdef8,"ElementClicked");
  atexit((_func_5014 *)&LAB_14408f885);
  FUN_1400b22c2(&DAT_14cbbdf08,"EscapeInput");
  atexit((_func_5014 *)&LAB_14408f896);
  FUN_1400b22c2(&DAT_14cbbdf18,"WeaponSlotFocused");
  atexit((_func_5014 *)&LAB_14408f8a7);
  FUN_1400b22c2(&DAT_14cbbdf28,"WeaponSlotUnfocused");
  atexit((_func_5014 *)&LAB_14408f8b8);
  FUN_1400b22c2(&DAT_14cbbdf38,"GearSlotFocused");
  atexit((_func_5014 *)&LAB_14408f8c9);
  FUN_1400b22c2(&DAT_14cbbdf48,"GearSlotUnfocused");
  atexit((_func_5014 *)&LAB_14408f8da);
  FUN_1400b22c2(&DAT_14cbbdf58,"BackpackSlotFocused");
  atexit((_func_5014 *)&LAB_14408f8eb);
  FUN_1400b22c2(&DAT_14cbbdf68,"BackpackSlotUnfocused");
  atexit((_func_5014 *)&LAB_14408f8fc);
  FUN_1400b22c2(&DAT_14cbbdf78,"MarkItemBank");
  atexit((_func_5014 *)&LAB_14408f90d);
  FUN_1400b22c2(&DAT_14cbbdf88,"MarkItemTrash");
  atexit((_func_5014 *)&LAB_14408f91e);
  FUN_1400b22c2(&DAT_14cbbdf98,"MarkItemFavorite");
  atexit((_func_5014 *)&LAB_14408f92f);
  FUN_1400b22c2(&DAT_14cbbdfa8,"ClickPistol");
  atexit((_func_5014 *)&LAB_14408f940);
  FUN_1400b22c2(&DAT_14cbbdfb8,"ClickAssaultRifle");
  atexit((_func_5014 *)&LAB_14408f951);
  FUN_1400b22c2(&DAT_14cbbdfc8,"ClickSMG");
  atexit((_func_5014 *)&LAB_14408f962);
  FUN_1400b22c2(&DAT_14cbbdfd8,"ClickShotgun");
  atexit((_func_5014 *)&LAB_14408f973);
  FUN_1400b22c2(&DAT_14cbbdfe8,"ClickSniper");
  atexit((_func_5014 *)&LAB_14408f984);
  FUN_1400b22c2(&DAT_14cbbdff8,"ClickRepKit");
  atexit((_func_5014 *)&LAB_14408f995);
  FUN_1400b22c2(&DAT_14cbbe008,"ClickGrenade");
  atexit((_func_5014 *)&LAB_14408f9a6);
  FUN_1400b22c2(&DAT_14cbbe018,"ClickHeavyWeapon");
  atexit((_func_5014 *)&LAB_14408f9b7);
  FUN_1400b22c2(&DAT_14cbbe028,"ClickClassMod");
  atexit((_func_5014 *)&LAB_14408f9c8);
  FUN_1400b22c2(&DAT_14cbbe038,"ClickGadget");
  atexit((_func_5014 *)&LAB_14408f9d9);
  FUN_1400b22c2(&DAT_14cbbe048,"ClickEnhancement");
  atexit((_func_5014 *)&LAB_14408f9ea);
  FUN_1400b22c2(&DAT_14cbbe058,"ClickShield");
  atexit((_func_5014 *)&LAB_14408f9fb);
  FUN_1400b22c2(&DAT_14cbbe068,"EquipPistol");
  atexit((_func_5014 *)&LAB_14408fa0c);
  FUN_1400b22c2(&DAT_14cbbe078,"EquipAssaultRifle");
  atexit((_func_5014 *)&LAB_14408fa1d);
  FUN_1400b22c2(&DAT_14cbbe088,"EquipSMG");
  atexit((_func_5014 *)&LAB_14408fa2e);
  FUN_1400b22c2(&DAT_14cbbe098,"EquipShotgun");
  atexit((_func_5014 *)&LAB_14408fa3f);
  FUN_1400b22c2(&DAT_14cbbe0a8,"EquipSniper");
  atexit((_func_5014 *)&LAB_14408fa50);
  FUN_1400b22c2(&DAT_14cbbe0b8,"EquipRepKit");
  atexit((_func_5014 *)&LAB_14408fa61);
  FUN_1400b22c2(&DAT_14cbbe0c8,"EquipGrenade");
  atexit((_func_5014 *)&LAB_14408fa72);
  FUN_1400b22c2(&DAT_14cbbe0d8,"EquipHeavyWeapon");
  atexit((_func_5014 *)&LAB_14408fa83);
  FUN_1400b22c2(&DAT_14cbbe0e8,"EquipClassMod");
  atexit((_func_5014 *)&LAB_14408fa94);
  FUN_1400b22c2(&DAT_14cbbe0f8,"EquipGadget");
  atexit((_func_5014 *)&LAB_14408faa5);
  FUN_1400b22c2(&DAT_14cbbe108,"EquipEnhancement");
  atexit((_func_5014 *)&LAB_14408fab6);
  FUN_1400b22c2(&DAT_14cbbe118,"EquipShield");
  atexit((_func_5014 *)&LAB_14408fac7);
  FUN_1400b22c2(&DAT_14cbbe128,"weapon");
  atexit((_func_5014 *)&LAB_14408fad8);
  FUN_1400b22c2(&DAT_14cbbe138,"weapon_ps");
  atexit((_func_5014 *)&LAB_14408fae9);
  FUN_1400b22c2(&DAT_14cbbe148,"weapon_ar");
  atexit((_func_5014 *)&LAB_14408fafa);
  FUN_1400b22c2(&DAT_14cbbe158,"weapon_sg");
  atexit((_func_5014 *)&LAB_14408fb0b);
  FUN_1400b22c2(&DAT_14cbbe168,"weapon_sr");
  atexit((_func_5014 *)&LAB_14408fb1c);
  FUN_1400b22c2(&DAT_14cbbe178,"weapon_sm");
  atexit((_func_5014 *)&LAB_14408fb2d);
  FUN_1400b22c2(&DAT_14cbbe188,"grenade_gadget");
  atexit((_func_5014 *)&LAB_14408fb3e);
  FUN_1400b22c2(&DAT_14cbbe198,"shield");
  atexit((_func_5014 *)&LAB_14408fb4f);
  FUN_1400b22c2(&DAT_14cbbe1a8,"heavy_weapon_gadget");
  atexit((_func_5014 *)&LAB_14408fb60);
  FUN_1400b22c2(&DAT_14cbbe1b8,"repair_kit");
  atexit((_func_5014 *)&LAB_14408fb71);
  FUN_1400b22c2(&DAT_14cbbe1c8,"classmod");
  atexit((_func_5014 *)&LAB_14408fb82);
  FUN_1400b22c2(&DAT_14cbbe1d8,"classmod_dark_siren");
  atexit((_func_5014 *)&LAB_14408fb93);
  FUN_1400b22c2(&DAT_14cbbe1e8,"classmod_exo_soldier");
  atexit((_func_5014 *)&LAB_14408fba4);
  FUN_1400b22c2(&DAT_14cbbe1f8,"classmod_gravitar");
  atexit((_func_5014 *)&LAB_14408fbb5);
  FUN_1400b22c2(&DAT_14cbbe208,"classmod_paladin");
  atexit((_func_5014 *)&LAB_14408fbc6);
  FUN_1400b22c2(&DAT_14cbbe218,"gadget");
  atexit((_func_5014 *)&LAB_14408fbd7);
  FUN_1400b22c2(&DAT_14cbbe228,"enhancement");
  atexit((_func_5014 *)&LAB_14408fbe8);
  FUN_140056680(&DAT_14cbbe238,L"recent");
  atexit((_func_5014 *)&LAB_14408fbf9);
  FUN_140056680(&DAT_14cbbe248,L"type");
  atexit((_func_5014 *)&LAB_14408fc0a);
  FUN_140056680(&DAT_14cbbe258,L"level");
  atexit((_func_5014 *)&LAB_14408fc1b);
  FUN_140056680(&DAT_14cbbe268,L"base_name");
  atexit((_func_5014 *)&LAB_14408fc2c);
  FUN_140056680(&DAT_14cbbe278,L"first_letter");
  atexit((_func_5014 *)&LAB_14408fc3d);
  FUN_140056680(&DAT_14cbbe288,L"value");
  atexit((_func_5014 *)&LAB_14408fc4e);
  FUN_140056680(&DAT_14cbbe298,L"rarity");
  atexit((_func_5014 *)&LAB_14408fc5f);
  FUN_140056680(&DAT_14cbbe2a8,L"manufacturer");
  atexit((_func_5014 *)&LAB_14408fc70);
  _Src = DAT_14cbbd800;
  DAT_14cbbe2b8 = (void *)0x0;
  lVar2 = (longlong)DAT_14cbbd808;
  _DAT_14cbbe2c0 = DAT_14cbbd808;
  if (lVar2 == 0) {
    _DAT_14cbbe2c4 = 0;
  }
  else {
    FUN_1446dd670(&DAT_14cbbe2b8,DAT_14cbbd808,0);
    memcpy(DAT_14cbbe2b8,_Src,lVar2 * 2);
  }
  atexit((_func_5014 *)&LAB_14408fc81);
  FUN_140056680(&DAT_14cbbe2c8,L"healing");
  atexit((_func_5014 *)&LAB_14408fc92);
  local_70 = "cancel";
  local_68 = 6;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe2d8 = (ulonglong)uVar1;
  local_70 = "partial";
  local_68 = 7;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe2e0 = (ulonglong)uVar1;
  local_70 = "all";
  local_68 = 3;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe2e8 = (ulonglong)uVar1;
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8f9630);
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144092aff FUN_144092aff body=55 status=ok
// SIG undefined FUN_144092aff(void)

void FUN_144092aff(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbf148 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbf148 = FUN_14171c317(FUN_146610e1d,uVar1,L"EOakWorldInfamyResolvedValueType");
  }
  return;
}



// FUNCTION 144092b36 FUN_144092b36 body=55 status=ok
// SIG undefined FUN_144092b36(void)

void FUN_144092b36(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbf160 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbf160 = FUN_14171c317(FUN_146610e4c,uVar1,L"EOakWorldInfamySource");
  }
  return;
}



// FUNCTION 144092c5c FUN_144092c5c body=57 status=ok
// SIG undefined FUN_144092c5c(void)

void FUN_144092c5c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbf0b8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbf0b8 = FUN_140002ddd(FUN_146610b15,uVar1,L"OakWidgetData_MenuHeader");
  }
  return;
}



// FUNCTION 144092d1e FUN_144092d1e body=89 status=ok
// SIG undefined FUN_144092d1e(void)

void FUN_144092d1e(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x90);
  *(undefined ***)((longlong)param_2 + 8) = &PTR_FUN_14b2b40b0;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x48) = 0;
  *(undefined8 *)((longlong)param_2 + 0x49) = 0;
  *(undefined8 *)((longlong)param_2 + 0x51) = 0;
  *(undefined8 *)((longlong)param_2 + 0x60) = 0;
  *(undefined8 *)((longlong)param_2 + 0x68) = 0;
  *(undefined8 *)((longlong)param_2 + 0x70) = 0xbff0000000000000;
  *(undefined4 *)((longlong)param_2 + 0x78) = 0xff000000;
  *(undefined8 *)((longlong)param_2 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x84) = 0;
  return;
}



// FUNCTION 144092dd8 FUN_144092dd8 body=74 status=ok
// SIG undefined FUN_144092dd8(void)

void FUN_144092dd8(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x88);
  *(undefined ***)((longlong)param_2 + 0x18) = &PTR_FUN_14b1d7d10;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x48) = 0;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  *(undefined8 *)((longlong)param_2 + 0x59) = 0;
  *(undefined8 *)((longlong)param_2 + 0x61) = 0;
  *(undefined8 *)((longlong)param_2 + 0x70) = 0;
  *(undefined8 *)((longlong)param_2 + 0x78) = 0;
  *(undefined4 *)((longlong)param_2 + 0x80) = 0xff000000;
  return;
}



// FUNCTION 144092e30 FUN_144092e30 body=9706 status=ok
// SIG undefined FUN_144092e30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144092e30(void)

{
  void *_Src;
  char cVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  char *local_70;
  undefined4 local_68;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  _DAT_14cbbe324 = 0;
  FUN_14052b5e0(&DAT_14cbbe320,"character",0);
  _DAT_14cbbe330 = 0;
  FUN_14052b5e0(&DAT_14cbbe32c,"profile",0);
  local_70 = "state_rem";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe338 = (ulonglong)uVar2;
  local_70 = "state_add";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe340 = (ulonglong)uVar2;
  local_70 = "state_remove_primary";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe348 = (ulonglong)uVar2;
  local_70 = "entry_sets";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe350 = (ulonglong)uVar2;
  local_70 = "entries";
  local_68 = 7;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe358 = (ulonglong)uVar2;
  local_70 = "menu_title";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe360 = (ulonglong)uVar2;
  local_70 = "actions";
  local_68 = 7;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe368 = (ulonglong)uVar2;
  local_70 = "loc_text";
  local_68 = 8;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe370 = (ulonglong)uVar2;
  local_70 = "desc_text";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe378 = (ulonglong)uVar2;
  local_70 = "style";
  local_68 = 5;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe380 = (ulonglong)uVar2;
  local_70 = "horizontal";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe388 = (ulonglong)uVar2;
  local_70 = "entry_set_default";
  local_68 = 0x11;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe390 = (ulonglong)uVar2;
  local_70 = "required_nexus_layer";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe398 = (ulonglong)uVar2;
  local_70 = "tooltip_key";
  local_68 = 0xb;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe3a0 = (ulonglong)uVar2;
  local_70 = "set_push";
  local_68 = 8;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe3a8 = (ulonglong)uVar2;
  local_70 = "exit_game";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe3b0 = (ulonglong)uVar2;
  local_70 = "back";
  local_68 = 4;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe3b8 = (ulonglong)uVar2;
  local_70 = "back_actions";
  local_68 = 0xc;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe3c0 = (ulonglong)uVar2;
  _DAT_14cbbe3c8 = 0;
  uRam000000014cbbe3d0 = 0;
  _DAT_14cbbe3d8 = 0;
  DAT_14cbbe3e0 = 0;
  uRam000000014cbbe3e8 = 0;
  FUN_1446ddda2(&DAT_14cbbe3c8,&DAT_14b81bd00,0);
  atexit((_func_5014 *)&LAB_1440921c4);
  local_70 = "num_rows_override";
  local_68 = 0x11;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe3f0 = (ulonglong)uVar2;
  local_70 = "show_capacity_text";
  local_68 = 0x12;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe3f8 = (ulonglong)uVar2;
  local_70 = "num_columns_override";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe400 = (ulonglong)uVar2;
  local_70 = "sort_list_config";
  local_68 = 0x10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe408 = (ulonglong)uVar2;
  local_70 = "filter_list_config";
  local_68 = 0x12;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe410 = (ulonglong)uVar2;
  local_70 = "default_sort_ident";
  local_68 = 0x12;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe418 = (ulonglong)uVar2;
  local_70 = "enable_filter";
  local_68 = 0xd;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe420 = (ulonglong)uVar2;
  local_70 = "enable_sort";
  local_68 = 0xb;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe428 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbbe430,"backpack_item_grid");
  atexit((_func_5014 *)&LAB_1440921d5);
  FUN_1400b22c2(&DAT_14cbbe440,"bpack_sort_asc_dsc");
  atexit((_func_5014 *)&LAB_1440921e6);
  FUN_1400b22c2(&DAT_14cbbe450,"sort-dropdown");
  atexit((_func_5014 *)&LAB_1440921f7);
  FUN_1400b22c2(&DAT_14cbbe460,"filter-dropdown");
  atexit((_func_5014 *)&LAB_144092208);
  local_70 = "ITEM_CARD";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe470 = (ulonglong)uVar2;
  local_70 = "ITEM_CARD_COMPARE";
  local_68 = 0x11;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe478 = (ulonglong)uVar2;
  local_70 = "MENU_FULL_BACKPACK";
  local_68 = 0x12;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe480 = (ulonglong)uVar2;
  local_70 = "MENU_POPUP_BACKPACK";
  local_68 = 0x13;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe488 = (ulonglong)uVar2;
  local_70 = "MENU_PLAYER_STATS";
  local_68 = 0x11;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe490 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbbe498,"filter-dropdown");
  atexit((_func_5014 *)&LAB_144092219);
  FUN_1400b22c2(&DAT_14cbbe4a8,"equip_slot_dropdown");
  atexit((_func_5014 *)&LAB_14409222a);
  FUN_1400b22c2(&DAT_14cbbe4b8,"mark-dropdown");
  atexit((_func_5014 *)&LAB_14409223b);
  FUN_1400b22c2(&DAT_14cbbe4c8,"item-dropdown");
  atexit((_func_5014 *)&LAB_14409224c);
  FUN_1400b22c2(&DAT_14cbbe4d8,"sort-dropdown");
  atexit((_func_5014 *)&LAB_14409225d);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8fc5a0);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8fd180);
  local_70 = "AssetRegistry";
  local_68 = 0xd;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe530 = (ulonglong)uVar2;
  FUN_1400b22c2(&local_70,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_70,&DAT_14cbbe538);
  if (cVar1 == '\0') {
    _DAT_14cbbe538 = 0;
    uRam000000014cbbe540 = 0;
  }
  if (local_70 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_70 = "bone";
  local_68 = 4;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe548 = 0x47efffffe0000000;
  _DAT_14cbbe550 = 0x47efffffe0000000;
  _DAT_14cbbe558 = 0x47efffffe0000000;
  _DAT_14cbbe560 = 0x47efffffe0000000;
  _DAT_14cbbe568 = 0x47efffffe0000000;
  _DAT_14cbbe570 = 0x47efffffe0000000;
  _DAT_14cbbe578 = 0x47efffffe0000000;
  _DAT_14cbbe580 = 0x47efffffe0000000;
  _DAT_14cbbe58c = 0;
  FUN_14052b5e0(&DAT_14cbbe588,"PlayerAwareness",0);
  _DAT_14cbbe598 = "PlayerAwareness";
  local_70 = "basic";
  local_68 = 5;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe5a0 = (ulonglong)uVar2;
  local_70 = "challenge";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe5a8 = (ulonglong)uVar2;
  local_70 = "online";
  local_68 = 6;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe5b0 = (ulonglong)uVar2;
  local_70 = "social";
  local_68 = 6;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe5b8 = (ulonglong)uVar2;
  local_70 = "alert";
  local_68 = 5;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe5c0 = (ulonglong)uVar2;
  local_70 = "photo_mode";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe5c8 = (ulonglong)uVar2;
  local_70 = "generic_task";
  local_68 = 0xc;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe5d0 = (ulonglong)uVar2;
  local_70 = "mission";
  local_68 = 7;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe5d8 = (ulonglong)uVar2;
  local_70 = "mail";
  local_68 = 4;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe5e0 = (ulonglong)uVar2;
  local_70 = "respawn";
  local_68 = 7;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe5e8 = (ulonglong)uVar2;
  local_70 = "tutorial";
  local_68 = 8;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe5f0 = (ulonglong)uVar2;
  local_70 = "special_notification";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe5f8 = (ulonglong)uVar2;
  local_70 = "generic_notification";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe600 = (ulonglong)uVar2;
  local_70 = "vault_card";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe608 = (ulonglong)uVar2;
  local_70 = "ONLINE_MESSAGE";
  local_68 = 0xe;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe610 = (ulonglong)uVar2;
  local_70 = "INGAME_MESSAGE";
  local_68 = 0xe;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe618 = (ulonglong)uVar2;
  local_70 = "NOTIFICATION_MESSAGE";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe620 = (ulonglong)uVar2;
  local_70 = "MENU_TUTORIAL_MESSAGE";
  local_68 = 0x15;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe628 = (ulonglong)uVar2;
  local_70 = "collectible";
  local_68 = 0xb;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe630 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbbe638,"#echo_logs_region_unknown");
  atexit((_func_5014 *)&LAB_14409226e);
  iVar3 = DAT_14cbbe640 + -1;
  if (DAT_14cbbe640 == 0) {
    iVar3 = 0;
  }
  FUN_1446f82e2(&local_70,iVar3,DAT_14cbbe638,1);
  _DAT_14cbbe648 = local_70;
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 3;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8fd960);
  FUN_1400b22c2(&DAT_14cbbe698,"weapon_dps_estimate");
  atexit((_func_5014 *)&LAB_14409227f);
  FUN_1400b22c2(&DAT_14cbbe6a8,&DAT_149e3cc88);
  atexit((_func_5014 *)&LAB_144092290);
  FUN_1400b22c2(&DAT_14cbbe6b8,"Popup");
  atexit((_func_5014 *)&LAB_1440922a1);
  FUN_1400b22c2(&DAT_14cbbe6c8,"Fullsize");
  atexit((_func_5014 *)&LAB_1440922b2);
  FUN_1400b22c2(&DAT_14cbbe6d8,"EchoLogs");
  atexit((_func_5014 *)&LAB_1440922c3);
  FUN_1400b22c2(&DAT_14cbbe6e8,"PlayerStats");
  atexit((_func_5014 *)&LAB_1440922d4);
  FUN_1400b22c2(&DAT_14cbbe6f8,"RewardCenter");
  atexit((_func_5014 *)&LAB_1440922e5);
  FUN_140056680(&DAT_14cbbe708,L"reset");
  atexit((_func_5014 *)&LAB_1440922f6);
  local_70 = "add_on_activate";
  local_68 = 0xf;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe718 = (ulonglong)uVar2;
  local_70 = "remove_on_deactivate";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe720 = (ulonglong)uVar2;
  local_70 = "filter_selected";
  local_68 = 0xf;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe728 = (ulonglong)uVar2;
  local_70 = "hide_messages_on_deactivate";
  local_68 = 0x1b;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe730 = (ulonglong)uVar2;
  local_70 = "drop_action_supported";
  local_68 = 0x15;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe738 = (ulonglong)uVar2;
  local_70 = "equip_action_supported";
  local_68 = 0x16;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe740 = (ulonglong)uVar2;
  local_70 = "unequip_action_supported";
  local_68 = 0x18;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe748 = (ulonglong)uVar2;
  local_70 = "compare_action_supported";
  local_68 = 0x18;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe750 = (ulonglong)uVar2;
  local_70 = "mark_item_action_supported";
  local_68 = 0x1a;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe758 = (ulonglong)uVar2;
  local_70 = "mark_multiple_items_supported";
  local_68 = 0x1d;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe760 = (ulonglong)uVar2;
  local_70 = "remote_inventory_action_supported";
  local_68 = 0x21;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe768 = (ulonglong)uVar2;
  local_70 = "unequip_message_ident";
  local_68 = 0x15;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe770 = (ulonglong)uVar2;
  local_70 = "equip_message_ident";
  local_68 = 0x13;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe778 = (ulonglong)uVar2;
  local_70 = "swap_message_ident";
  local_68 = 0x12;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe780 = (ulonglong)uVar2;
  local_70 = "drop_message_ident";
  local_68 = 0x12;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe788 = (ulonglong)uVar2;
  local_70 = "cant_equip_message_ident";
  local_68 = 0x18;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe790 = (ulonglong)uVar2;
  local_70 = "insufficient_space_error_ident";
  local_68 = 0x1e;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe798 = (ulonglong)uVar2;
  local_70 = "multiple_item_deposit_ident";
  local_68 = 0x1b;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe7a0 = (ulonglong)uVar2;
  local_70 = "deposit_message_ident";
  local_68 = 0x15;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe7a8 = (ulonglong)uVar2;
  local_70 = "incomplete_deposit_ident";
  local_68 = 0x18;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe7b0 = (ulonglong)uVar2;
  local_70 = "backpack_class_html";
  local_68 = 0x13;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe7b8 = (ulonglong)uVar2;
  local_70 = "standin_config";
  local_68 = 0xe;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe7c0 = (ulonglong)uVar2;
  local_70 = "player_standin_tag";
  local_68 = 0x12;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe7c8 = (ulonglong)uVar2;
  local_70 = "echo_bot_standin_tag";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe7d0 = (ulonglong)uVar2;
  local_70 = "sortable_numeric_stats";
  local_68 = 0x16;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe7d8 = (ulonglong)uVar2;
  local_70 = "escape_hold_supported";
  local_68 = 0x15;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe7e0 = (ulonglong)uVar2;
  local_70 = "max_visible_items";
  local_68 = 0x11;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbe7e8 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cbbe7f0,L"action_ui_drop_item");
  atexit((_func_5014 *)&LAB_144092307);
  FUN_140056680(&DAT_14cbbe800,L"action_ui_equip_item");
  atexit((_func_5014 *)&LAB_144092318);
  FUN_140056680(&DAT_14cbbe810,L"action_ui_unequip_item");
  atexit((_func_5014 *)&LAB_144092329);
  FUN_140056680(&DAT_14cbbe820,L"action_ui_compare_item");
  atexit((_func_5014 *)&LAB_14409233a);
  FUN_140056680(&DAT_14cbbe830,L"action_ui_cursor_click");
  atexit((_func_5014 *)&LAB_14409234b);
  FUN_140056680(&DAT_14cbbe840,L"action_ui_set_item_flag");
  atexit((_func_5014 *)&LAB_14409235c);
  FUN_140056680(&DAT_14cbbe850,L"action_ui_remote_bank_deposit");
  atexit((_func_5014 *)&LAB_14409236d);
  FUN_140056680(&DAT_14cbbe860,L"action_ui_mark_all_filtered");
  atexit((_func_5014 *)&LAB_14409237e);
  FUN_140056680(&DAT_14cbbe870,L"action_ui_menu_escape");
  atexit((_func_5014 *)&LAB_14409238f);
  FUN_140056680(&DAT_14cbbe880,L"action_ui_show_player_stats");
  atexit((_func_5014 *)&LAB_1440923a0);
  FUN_140056680(&DAT_14cbbe890,L"action_ui_mark_hovered_as_junk");
  atexit((_func_5014 *)&LAB_1440923b1);
  FUN_140056680(&DAT_14cbbe8a0,L"action_ui_open_reward_center");
  atexit((_func_5014 *)&LAB_1440923c2);
  FUN_140056680(&DAT_14cbbe8b0,L"action_ui_select_slot_1");
  atexit((_func_5014 *)&LAB_1440923d3);
  FUN_140056680(&DAT_14cbbe8c0,L"action_ui_select_slot_2");
  atexit((_func_5014 *)&LAB_1440923e4);
  FUN_140056680(&DAT_14cbbe8d0,L"action_ui_select_slot_3");
  atexit((_func_5014 *)&LAB_1440923f5);
  FUN_140056680(&DAT_14cbbe8e0,L"action_ui_select_slot_4");
  atexit((_func_5014 *)&LAB_144092406);
  FUN_140056680(&DAT_14cbbe8f0,L"action_ui_copy_focused_item_serial_number");
  atexit((_func_5014 *)&LAB_144092417);
  FUN_140056680(&DAT_14cbbe900,L"action_ui_menu_escape_hold");
  atexit((_func_5014 *)&LAB_144092428);
  FUN_140056680(&DAT_14cbbe910,L"action_ui_inspect_item");
  atexit((_func_5014 *)&LAB_144092439);
  FUN_140056680(&DAT_14cbbe920,L"action_ui_flip_item_card");
  atexit((_func_5014 *)&LAB_14409244a);
  FUN_140056680(&DAT_14cbbe930,L"action_ui_open_all_rewards");
  atexit((_func_5014 *)&LAB_14409245b);
  FUN_140056680(&DAT_14cbbe940,L"SelectText");
  atexit((_func_5014 *)&LAB_14409246c);
  FUN_140056680(&DAT_14cbbe950,L"CompareHint");
  atexit((_func_5014 *)&LAB_14409247d);
  FUN_140056680(&DAT_14cbbe960,L"EquipHint");
  atexit((_func_5014 *)&LAB_14409248e);
  FUN_140056680(&DAT_14cbbe970,L"UnequipHint");
  atexit((_func_5014 *)&LAB_14409249f);
  FUN_140056680(&DAT_14cbbe980,L"DropHint");
  atexit((_func_5014 *)&LAB_1440924b0);
  FUN_140056680(&DAT_14cbbe990,L"SetItemFlagHint");
  atexit((_func_5014 *)&LAB_1440924c1);
  FUN_140056680(&DAT_14cbbe9a0,L"ToggleJunkHint");
  atexit((_func_5014 *)&LAB_1440924d2);
  FUN_140056680(&DAT_14cbbe9b0,L"MarkAllFilteredHint");
  atexit((_func_5014 *)&LAB_1440924e3);
  FUN_140056680(&DAT_14cbbe9c0,L"PlayerStatsHint");
  atexit((_func_5014 *)&LAB_1440924f4);
  FUN_140056680(&DAT_14cbbe9d0,L"SwapWeaponsHint");
  atexit((_func_5014 *)&LAB_144092505);
  FUN_140056680(&DAT_14cbbe9e0,L"BackText");
  atexit((_func_5014 *)&LAB_144092516);
  FUN_140056680(&DAT_14cbbe9f0,L"SellHint");
  atexit((_func_5014 *)&LAB_144092527);
  FUN_140056680(&DAT_14cbbea00,L"BuyHint");
  atexit((_func_5014 *)&LAB_144092538);
  FUN_140056680(&DAT_14cbbea10,L"ExitMenuHint");
  atexit((_func_5014 *)&LAB_144092549);
  FUN_140056680(&DAT_14cbbea20,L"OpenAllRewardsHint");
  atexit((_func_5014 *)&LAB_14409255a);
  FUN_1400b22c2(&DAT_14cbbea30,"trash");
  atexit((_func_5014 *)&LAB_14409256b);
  FUN_1400b22c2(&DAT_14cbbea40,"favorite");
  atexit((_func_5014 *)&LAB_14409257c);
  FUN_1400b22c2(&DAT_14cbbea50,"bankdeposit");
  atexit((_func_5014 *)&LAB_14409258d);
  FUN_1400b22c2(&DAT_14cbbea60,"taggroup1");
  atexit((_func_5014 *)&LAB_14409259e);
  FUN_1400b22c2(&DAT_14cbbea70,"taggroup2");
  atexit((_func_5014 *)&LAB_1440925af);
  FUN_1400b22c2(&DAT_14cbbea80,"taggroup3");
  atexit((_func_5014 *)&LAB_1440925c0);
  FUN_1400b22c2(&DAT_14cbbea90,"taggroup4");
  atexit((_func_5014 *)&LAB_1440925d1);
  local_70 = "trash";
  local_68 = 5;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbeaa0 = (ulonglong)uVar2;
  local_70 = "favorite";
  local_68 = 8;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbeaa8 = (ulonglong)uVar2;
  local_70 = "bankdeposit";
  local_68 = 0xb;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbeab0 = (ulonglong)uVar2;
  local_70 = "taggroup1";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbeab8 = (ulonglong)uVar2;
  local_70 = "taggroup2";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbeac0 = (ulonglong)uVar2;
  local_70 = "taggroup3";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbeac8 = (ulonglong)uVar2;
  local_70 = "taggroup4";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbead0 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbbead8,"OpenBackpack");
  atexit((_func_5014 *)&LAB_1440925e2);
  FUN_1400b22c2(&DAT_14cbbeae8,"CloseBackpack");
  atexit((_func_5014 *)&LAB_1440925f3);
  FUN_1400b22c2(&DAT_14cbbeaf8,"OpenPlayerStats");
  atexit((_func_5014 *)&LAB_144092604);
  FUN_1400b22c2(&DAT_14cbbeb08,"ClosePlayerStats");
  atexit((_func_5014 *)&LAB_144092615);
  FUN_1400b22c2(&DAT_14cbbeb18,"OpenRewardCenter");
  atexit((_func_5014 *)&LAB_144092626);
  FUN_1400b22c2(&DAT_14cbbeb28,"CloseRewardCenter");
  atexit((_func_5014 *)&LAB_144092637);
  FUN_1400b22c2(&DAT_14cbbeb38,"CompareStart");
  atexit((_func_5014 *)&LAB_144092648);
  FUN_1400b22c2(&DAT_14cbbeb48,"CompareStop");
  atexit((_func_5014 *)&LAB_144092659);
  FUN_1400b22c2(&DAT_14cbbeb58,"UnequipItem");
  atexit((_func_5014 *)&LAB_14409266a);
  FUN_1400b22c2(&DAT_14cbbeb68,"EquipItem");
  atexit((_func_5014 *)&LAB_14409267b);
  FUN_1400b22c2(&DAT_14cbbeb78,"DropItem");
  atexit((_func_5014 *)&LAB_14409268c);
  FUN_1400b22c2(&DAT_14cbbeb88,"MarkItem");
  atexit((_func_5014 *)&LAB_14409269d);
  FUN_1400b22c2(&DAT_14cbbeb98,"Error");
  atexit((_func_5014 *)&LAB_1440926ae);
  FUN_1400b22c2(&DAT_14cbbeba8,"ElementUnfocused");
  atexit((_func_5014 *)&LAB_1440926bf);
  FUN_1400b22c2(&DAT_14cbbebb8,"ElementFocused");
  atexit((_func_5014 *)&LAB_1440926d0);
  FUN_1400b22c2(&DAT_14cbbebc8,"ElementClicked");
  atexit((_func_5014 *)&LAB_1440926e1);
  FUN_1400b22c2(&DAT_14cbbebd8,"EscapeInput");
  atexit((_func_5014 *)&LAB_1440926f2);
  FUN_1400b22c2(&DAT_14cbbebe8,"WeaponSlotFocused");
  atexit((_func_5014 *)&LAB_144092703);
  FUN_1400b22c2(&DAT_14cbbebf8,"WeaponSlotUnfocused");
  atexit((_func_5014 *)&LAB_144092714);
  FUN_1400b22c2(&DAT_14cbbec08,"GearSlotFocused");
  atexit((_func_5014 *)&LAB_144092725);
  FUN_1400b22c2(&DAT_14cbbec18,"GearSlotUnfocused");
  atexit((_func_5014 *)&LAB_144092736);
  FUN_1400b22c2(&DAT_14cbbec28,"BackpackSlotFocused");
  atexit((_func_5014 *)&LAB_144092747);
  FUN_1400b22c2(&DAT_14cbbec38,"BackpackSlotUnfocused");
  atexit((_func_5014 *)&LAB_144092758);
  FUN_1400b22c2(&DAT_14cbbec48,"MarkItemBank");
  atexit((_func_5014 *)&LAB_144092769);
  FUN_1400b22c2(&DAT_14cbbec58,"MarkItemTrash");
  atexit((_func_5014 *)&LAB_14409277a);
  FUN_1400b22c2(&DAT_14cbbec68,"MarkItemFavorite");
  atexit((_func_5014 *)&LAB_14409278b);
  FUN_1400b22c2(&DAT_14cbbec78,"ClickPistol");
  atexit((_func_5014 *)&LAB_14409279c);
  FUN_1400b22c2(&DAT_14cbbec88,"ClickAssaultRifle");
  atexit((_func_5014 *)&LAB_1440927ad);
  FUN_1400b22c2(&DAT_14cbbec98,"ClickSMG");
  atexit((_func_5014 *)&LAB_1440927be);
  FUN_1400b22c2(&DAT_14cbbeca8,"ClickShotgun");
  atexit((_func_5014 *)&LAB_1440927cf);
  FUN_1400b22c2(&DAT_14cbbecb8,"ClickSniper");
  atexit((_func_5014 *)&LAB_1440927e0);
  FUN_1400b22c2(&DAT_14cbbecc8,"ClickRepKit");
  atexit((_func_5014 *)&LAB_1440927f1);
  FUN_1400b22c2(&DAT_14cbbecd8,"ClickGrenade");
  atexit((_func_5014 *)&LAB_144092802);
  FUN_1400b22c2(&DAT_14cbbece8,"ClickHeavyWeapon");
  atexit((_func_5014 *)&LAB_144092813);
  FUN_1400b22c2(&DAT_14cbbecf8,"ClickClassMod");
  atexit((_func_5014 *)&LAB_144092824);
  FUN_1400b22c2(&DAT_14cbbed08,"ClickGadget");
  atexit((_func_5014 *)&LAB_144092835);
  FUN_1400b22c2(&DAT_14cbbed18,"ClickEnhancement");
  atexit((_func_5014 *)&LAB_144092846);
  FUN_1400b22c2(&DAT_14cbbed28,"ClickShield");
  atexit((_func_5014 *)&LAB_144092857);
  FUN_1400b22c2(&DAT_14cbbed38,"EquipPistol");
  atexit((_func_5014 *)&LAB_144092868);
  FUN_1400b22c2(&DAT_14cbbed48,"EquipAssaultRifle");
  atexit((_func_5014 *)&LAB_144092879);
  FUN_1400b22c2(&DAT_14cbbed58,"EquipSMG");
  atexit((_func_5014 *)&LAB_14409288a);
  FUN_1400b22c2(&DAT_14cbbed68,"EquipShotgun");
  atexit((_func_5014 *)&LAB_14409289b);
  FUN_1400b22c2(&DAT_14cbbed78,"EquipSniper");
  atexit((_func_5014 *)&LAB_1440928ac);
  FUN_1400b22c2(&DAT_14cbbed88,"EquipRepKit");
  atexit((_func_5014 *)&LAB_1440928bd);
  FUN_1400b22c2(&DAT_14cbbed98,"EquipGrenade");
  atexit((_func_5014 *)&LAB_1440928ce);
  FUN_1400b22c2(&DAT_14cbbeda8,"EquipHeavyWeapon");
  atexit((_func_5014 *)&LAB_1440928df);
  FUN_1400b22c2(&DAT_14cbbedb8,"EquipClassMod");
  atexit((_func_5014 *)&LAB_1440928f0);
  FUN_1400b22c2(&DAT_14cbbedc8,"EquipGadget");
  atexit((_func_5014 *)&LAB_144092901);
  FUN_1400b22c2(&DAT_14cbbedd8,"EquipEnhancement");
  atexit((_func_5014 *)&LAB_144092912);
  FUN_1400b22c2(&DAT_14cbbede8,"EquipShield");
  atexit((_func_5014 *)&LAB_144092923);
  FUN_1400b22c2(&DAT_14cbbedf8,"weapon");
  atexit((_func_5014 *)&LAB_144092934);
  FUN_1400b22c2(&DAT_14cbbee08,"weapon_ps");
  atexit((_func_5014 *)&LAB_144092945);
  FUN_1400b22c2(&DAT_14cbbee18,"weapon_ar");
  atexit((_func_5014 *)&LAB_144092956);
  FUN_1400b22c2(&DAT_14cbbee28,"weapon_sg");
  atexit((_func_5014 *)&LAB_144092967);
  FUN_1400b22c2(&DAT_14cbbee38,"weapon_sr");
  atexit((_func_5014 *)&LAB_144092978);
  FUN_1400b22c2(&DAT_14cbbee48,"weapon_sm");
  atexit((_func_5014 *)&LAB_144092989);
  FUN_1400b22c2(&DAT_14cbbee58,"grenade_gadget");
  atexit((_func_5014 *)&LAB_14409299a);
  FUN_1400b22c2(&DAT_14cbbee68,"shield");
  atexit((_func_5014 *)&LAB_1440929ab);
  FUN_1400b22c2(&DAT_14cbbee78,"heavy_weapon_gadget");
  atexit((_func_5014 *)&LAB_1440929bc);
  FUN_1400b22c2(&DAT_14cbbee88,"repair_kit");
  atexit((_func_5014 *)&LAB_1440929cd);
  FUN_1400b22c2(&DAT_14cbbee98,"classmod");
  atexit((_func_5014 *)&LAB_1440929de);
  FUN_1400b22c2(&DAT_14cbbeea8,"classmod_dark_siren");
  atexit((_func_5014 *)&LAB_1440929ef);
  FUN_1400b22c2(&DAT_14cbbeeb8,"classmod_exo_soldier");
  atexit((_func_5014 *)&LAB_144092a00);
  FUN_1400b22c2(&DAT_14cbbeec8,"classmod_gravitar");
  atexit((_func_5014 *)&LAB_144092a11);
  FUN_1400b22c2(&DAT_14cbbeed8,"classmod_paladin");
  atexit((_func_5014 *)&LAB_144092a22);
  FUN_1400b22c2(&DAT_14cbbeee8,"gadget");
  atexit((_func_5014 *)&LAB_144092a33);
  FUN_1400b22c2(&DAT_14cbbeef8,"enhancement");
  atexit((_func_5014 *)&LAB_144092a44);
  FUN_140056680(&DAT_14cbbef08,L"recent");
  atexit((_func_5014 *)&LAB_144092a55);
  FUN_140056680(&DAT_14cbbef18,L"type");
  atexit((_func_5014 *)&LAB_144092a66);
  FUN_140056680(&DAT_14cbbef28,L"level");
  atexit((_func_5014 *)&LAB_144092a77);
  FUN_140056680(&DAT_14cbbef38,L"base_name");
  atexit((_func_5014 *)&LAB_144092a88);
  FUN_140056680(&DAT_14cbbef48,L"first_letter");
  atexit((_func_5014 *)&LAB_144092a99);
  FUN_140056680(&DAT_14cbbef58,L"value");
  atexit((_func_5014 *)&LAB_144092aaa);
  FUN_140056680(&DAT_14cbbef68,L"rarity");
  atexit((_func_5014 *)&LAB_144092abb);
  FUN_140056680(&DAT_14cbbef78,L"manufacturer");
  atexit((_func_5014 *)&LAB_144092acc);
  _Src = DAT_14cbbe698;
  DAT_14cbbef88 = (void *)0x0;
  lVar4 = (longlong)DAT_14cbbe6a0;
  _DAT_14cbbef90 = DAT_14cbbe6a0;
  if (lVar4 == 0) {
    _DAT_14cbbef94 = 0;
  }
  else {
    FUN_1446dd670(&DAT_14cbbef88,DAT_14cbbe6a0,0);
    memcpy(DAT_14cbbef88,_Src,lVar4 * 2);
  }
  atexit((_func_5014 *)&LAB_144092add);
  FUN_140056680(&DAT_14cbbef98,L"healing");
  atexit((_func_5014 *)&LAB_144092aee);
  local_70 = "cancel";
  local_68 = 6;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbefa8 = (ulonglong)uVar2;
  local_70 = "partial";
  local_68 = 7;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbefb0 = (ulonglong)uVar2;
  local_70 = "all";
  local_68 = 3;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbbefb8 = (ulonglong)uVar2;
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 3;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8fdf50);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8fe1d0);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8fe690);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8fe800);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 4;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8ff9e0);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 4;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b900440);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b900730);
  uStack_78 = 2;
  ppuStack_80 = &PTR_FUN_14b900a50;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b900a90);
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b901190,1,0);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b901790,1,&PTR_FUN_14b901760);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b901d10,1,&PTR_FUN_14b901ce0);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b9029d0,2,&PTR_FUN_14b9029a0);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b903130,1,&PTR_FUN_14b903100);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b903860,1,&PTR_FUN_14b903830);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b903e40,1,&PTR_FUN_14b903e10);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b904430,1,&PTR_FUN_14b904400);
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


